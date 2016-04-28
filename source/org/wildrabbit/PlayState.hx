package org.wildrabbit;

import flash.display.BlendMode;
import flash.display.Shape;
import flash.media.Video;
import flixel.FlxBasic.FlxType;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
#if KONGREGATE
import flixel.addons.api.FlxKongregate;
#end
import flixel.addons.effects.FlxTrail;
import flixel.addons.weapon.FlxBullet;
import flixel.addons.weapon.FlxWeapon;
import flixel.effects.particles.FlxEmitter;
import flixel.effects.particles.FlxParticle;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.math.FlxAngle;
import flixel.math.FlxPoint;
import flixel.math.FlxVector;
import flixel.system.FlxAssets.FlxGraphicAsset;
import flixel.text.FlxText;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.ui.FlxBar;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;
import flixel.util.FlxColor;
import flixel.util.FlxSpriteUtil;
import flixel.util.FlxStringUtil;
import flixel.util.FlxTimer;
import flixel.util.helpers.FlxBounds;
import org.wildrabbit.game.Bullet;
import org.wildrabbit.game.BaseBullet;
import org.wildrabbit.game.Enemy;
import org.wildrabbit.game.Entity;
import org.wildrabbit.game.Pickup;
import org.wildrabbit.game.Ship;
import org.wildrabbit.game.World;
import org.wildrabbit.game.EnemyBullet;
import org.wildrabbit.GameInput;
import org.wildrabbit.Reg;

/**
 * A FlxState which can be used for the actual gameplay.
 */

typedef Cheats =
{
	var godMode:Bool;
}

 @:enum
 abstract Shape(Int) from Int to Int
 {
	 var Circle = 0;
	 var Triangle = 1;
	 var Square = 2;
	 
	 var NumEntries = Square - Circle + 1;
 }
 
 @:enum
 abstract PickupType(Int) from Int to Int
 {
	 var Life = 0;
	 var RateOfFire = 1;
	 var BulletType = 2;
	 var Shield = 3;
	 var Speed = 4;
	 
	 var NumEntries = Speed - Life + 1;
 }
 
class PlayState extends FlxState
{
	private static var PickupTypes:Array<FlxGraphicAsset> = ["assets/images/pickups.png"];
	private static var PickupTypeKeys:Array<Int> = [0];
	private static var PickupColours:Array<FlxColor> = [FlxColor.fromHSB(0,0.9,0.8)]; 
	private static var MAX_BULLETS:Int = 70;
	private static var MAX_ENEMIES:Int = 25;
	
	public static var KILLS_TO_LIFE:Int = 10;
	public static var KILLS_TO_MULTIPLIER:Int = 20;
	
	
	public var mWorld:World;
	
	public var mPlayerShip:Ship;
	
	public var mBullets:FlxTypedGroup<BaseBullet>;
	public var mEnemies:FlxTypedGroup<Enemy>;
	public var mPickups:FlxTypedGroup<Pickup>;
	
	public var mSpawnDelay:Float;
	public var mSpawnTimer:FlxTimer;
	
	public var mHealth:FlxText;
	public var mEnergy:FlxText;
	public var mLives:FlxText;
	public var mScore:FlxText;
	public var mPlaytime:FlxText;
	public var mMultiplierText:FlxText;
	public var mDiffText:FlxText;
	public var mBlasterHint:FlxText;
	
	public var mBlasterTween:FlxTween;
	public var mMultiplierTween:FlxTween;
	public var mIngameMultText:FlxText;
	
	public var mScoreMultiplier:Int;
	public var mToNextLife:Int;
	public var mToNextMultiplier:Int;
	
	public var mPause:Bool;
	
	public var mDeathEmitters:FlxTypedGroup<FlxTimedEmitter>;
	
	public var mInput:GameInput;
	
	public var mHalo:FlxSprite;
	
	public var mPrev:FlxSprite; 
	public var mCurrent:FlxSprite;
	public var mNext:FlxSprite;
	
	private var mCheats:Cheats;
	
	private var mHealthBar:FlxBar;
	private var mEnergyBar:FlxBar;
	
	/**
	 * Function that is called up when to state is created to set it up.
	 */
	override public function create():Void
	{
		super.create();
		
		mCheats = { godMode:false };
		
		//FlxG.debugger.visible = true;
		//FlxG.debugger.drawDebug = true;
		
		mPause = false;
		
		var w:Int = cast(FlxG.width, Int);
		var h:Int = cast(FlxG.height, Int);
		
		mSpawnTimer = new FlxTimer();
		
		var inputName:String;
		Reg.cursorSprite = new FlxSprite(0, 0, "assets/images/cursor.png");
		FlxG.mouse.load(Reg.cursorSprite.pixels);
		switch(Reg.selectedInputScheme)
		{
			case InputScheme.Gamepad:
			{
				mInput = new GamepadInput();
				FlxG.mouse.visible = false;
				inputName = "Gamepad";
			}
			case InputScheme.WASD:
			{
				mInput = new KeyMouseInput();
				// Load the sprite's graphic to the cursor
				FlxG.mouse.visible = true;
				

				inputName = "MouseKBD-WASD";
			}
			case InputScheme.ZQSD:
			{
				mInput = new KeyMouseInput(false);
				// Load the sprite's graphic to the cursor
				FlxG.mouse.visible = true;
				

				inputName = "MouseKBD-ZQSD";
			}
		}
		
		
		add(new FlxSprite(0, 0, "assets/images/bg_back.png"));
		add(new FlxText(32, 596, 352, "Control scheme: " + inputName, 14));

		var radius:Int= 296;
		mWorld = new World(0, 0, cast(radius, Float));
		mWorld.makeGraphic(w, h, FlxColor.TRANSPARENT);
		mWorld.setCenter(w / 2, h / 2);
		add(mWorld);
		
		mDeathEmitters = new FlxTypedGroup<FlxTimedEmitter>();
		add(mDeathEmitters);
		
		mEnemies = new FlxTypedGroup<Enemy>(MAX_ENEMIES);
		for (i in 0...MAX_ENEMIES)
		{
			var e = new Enemy(this);
			e.kill();
			mEnemies.add(e);
		}
		add(mEnemies);
		
		mPickups = new FlxTypedGroup<Pickup>(7);
		for (i in 0...7)
		{
			var pickup = new Pickup();
			pickup.kill();
			mPickups.add(pickup);
		}
		add(mPickups);
		
		mPrev = new FlxSprite();
		mPrev.loadGraphic("assets/images/previews.png", true, 16, 16);
		mPrev.animation.add("circle", [0], 1);
		mPrev.animation.add("triangle", [1], 1);
		mPrev.animation.add("square", [2], 1);
		mPrev.setPosition(820, 32);
		add(mPrev);
		mNext = new FlxSprite();
		mNext.setPosition(868, 32);
		mNext.loadGraphic("assets/images/previews.png", true, 16, 16);
		mNext.animation.add("circle", [0], 1);
		mNext.animation.add("triangle", [1], 1);
		mNext.animation.add("square", [2], 1);
		add(mNext);
		mCurrent = new FlxSprite();
		mCurrent.setPosition(840, 28);
		mCurrent.loadGraphic("assets/images/previews.png", true, 16, 16);
		mCurrent.animation.add("circle", [0], 1);
		mCurrent.animation.add("triangle", [1], 1);
		mCurrent.animation.add("square", [2], 1);		
		mCurrent.scale.set(1.5, 1.5);
		mCurrent.updateHitbox();
		mCurrent.centerOffsets();
		mCurrent.centerOrigin();
		add(mCurrent);
		

		
		mPlayerShip = new Ship(this, FlxG.width/2, FlxG.height/2, 150);
		
		var trail:FlxTrail = new FlxTrail(mPlayerShip, null, 2, 0,0.3);
		mPlayerShip.trail = trail;
		add(trail);	
		
		var halo:FlxSprite = new FlxSprite(0, 0, "assets/images/halo.png");
		mPlayerShip.halo = halo;
		add(halo);
		
		mBullets = new FlxTypedGroup<BaseBullet>(MAX_BULLETS);
		for (i in 0...MAX_BULLETS)
		{
			var b:BaseBullet = new Bullet(this);
			b.kill();
			mBullets.add(b);
			b = new EnemyBullet(this);
			b.kill();
			mBullets.add(b);			
		}
		add(mBullets);
		var p = mPlayerShip.getOffset();
		/*mPlayerWeapon = new FlxWeapon("blah", createBullet, FlxWeaponFireFrom.PARENT(mPlayerShip, new FlxBounds<FlxPoint>(new FlxPoint(mPlayerShip.width, mPlayerShip.height/2))), FlxWeaponSpeedMode.SPEED(new FlxBounds<Float>(300,300)));
		mPlayerWeapon.fireRate = 60;
		mPlayerWeapon.positionOffset;*/
		FlxG.sound.volume = 0.6;
		
		add(mPlayerShip);
		
		mSpawnTimer.start(FlxG.random.float(1, 4), onSpawnTimeout, 1);
		
		mHealth = new FlxText(32, 32, 72, "HP: ", 14);
		add(mHealth);
		mHealthBar = new FlxBar(104, 34, FlxBarFillDirection.LEFT_TO_RIGHT, 100, 14, mPlayerShip, "HP", 0, mPlayerShip.maxHealth);
		mHealthBar.createColoredEmptyBar(FlxColor.fromRGBFloat(0.1,0.1,0.1));
		mHealthBar.createGradientFilledBar([FlxColor.GREEN, FlxColor.YELLOW, FlxColor.RED], 10, 180, true, FlxColor.WHITE);
		add(mHealthBar);

		mEnergy = new FlxText(32, 64, 72, "Energy: ", 14);
		add(mEnergy);
		mEnergyBar = new FlxBar(104, 66, FlxBarFillDirection.LEFT_TO_RIGHT, 100, 14, mPlayerShip, "mEnergy", 0, mPlayerShip.mMaxEnergy);
		mEnergyBar.createColoredEmptyBar(FlxColor.fromRGBFloat(0.1,0.1,0.1));
		mEnergyBar.createGradientFilledBar([FlxColor.CYAN,FlxColor.BLUE], 4, 180, true, FlxColor.WHITE);
		add(mEnergyBar);
		
		mPlaytime = new FlxText(FlxG.width - 224, FlxG.height/2 - 7, 180, "Playtime: " + FlxStringUtil.formatTime(mPlayerShip.mPlayTime), 14);
		mPlaytime.alignment = FlxTextAlign.RIGHT;
		add(mPlaytime);

		mScore = new FlxText(32, FlxG.height/2 - 7, 180, "Score: " + mPlayerShip.mScore, 14);
		add(mScore);
		mMultiplierText = new FlxText(68, FlxG.height / 2 + 12, 100, "(x" + mScoreMultiplier + ")", 24);		
		if (mScoreMultiplier > 1)
		{
			add(mMultiplierText);			
		}
		mIngameMultText = new FlxText(0, 0, 100, "x2", 16);
		mIngameMultText.alignment = FlxTextAlign.CENTER;
		mDiffText = new FlxText(32, 96, 72, "Diff: " + mPlayerShip.mLevel, 14);
		add(mDiffText);
		
		
		mScoreMultiplier = 1;
		mToNextLife = toNextLife();
		mToNextMultiplier = KILLS_TO_MULTIPLIER;
		
		updateShapeHint();
		mBlasterHint = new FlxText(800, 64, 100, "Blaster loading", 14);
		mBlasterHint.alignment = FlxTextAlign.CENTER;
		add(mBlasterHint);
		mBlasterHint.color = FlxColor.WHITE;
		
		mBlasterTween = FlxTween.tween(mBlasterHint.scale, { x:1.15, y:1.15 }, 0.4, { ease:FlxEase.bounceInOut, type:FlxTween.PINGPONG } );
		mBlasterTween.active = false;
		
		FlxG.sound.playMusic("assets/music/testMusic2.wav", 0.3);
		FlxG.sound.play("assets/sounds/start.wav");
		
		add(new FlxSprite(0, 0, "assets/images/bg_front.png"));
		#if debug
		add(new FlxText(880, 600, 40, "DBG", 14));
		#end
	}

	public function updateShapeHint():Void
	 {	
		 if (mPlayerShip == null) return;
		 var s:Int= mPlayerShip.mShape;
		 mCurrent.animation.play(Ship.ShapeAnims[cast(s, Int)]);
		 mCurrent.color = Entity.ShapeColours[cast(s, Int)];
		 var nextS:Shape = cast((s + 1) % Shape.NumEntries, Shape);
		 mNext.animation.play(Ship.ShapeAnims[cast(nextS, Int)]);
		 mNext.color = Entity.ShapeColours[cast(nextS, Int)];
		 var prevS:Shape = cast((s > 0)? s -1 : Shape.NumEntries - 1, Shape);
		 mPrev.animation.play(Ship.ShapeAnims[cast(prevS, Int)]);
		 mPrev.color = Entity.ShapeColours[cast(prevS, Int)];
	 }
	
	public function onSpawnTimeout(timer:FlxTimer):Void
	{
		var enemyRange:FlxBounds<Int> = getEnemyWaveSize();
		var numEnemies:Int = FlxG.random.int(enemyRange.min, enemyRange.max);
		
		var point:FlxPoint = FlxPoint.get();
		
		var waveType:Int = 0;
		if (Balancing.hasAllowedEnemies(mPlayerShip.mLevel))
		{
			var values:Array<Int> = Balancing.getAllowedEnemies(mPlayerShip.mLevel);
			waveType = values[FlxG.random.int(0, values.length - 1)];
		}
		else
		{
			waveType = FlxG.random.int(Enemy.ENEMY_ID_CHASER_CIRCLE, Enemy.ENEMY_ID_WANDERER_SQUARE);
		}
		var waveTypeIdx:Int = FlxG.random.int(0);
		
		for (i in 0...numEnemies)
		{
			var e = mEnemies.getFirstAvailable(Enemy);
			var dist = Math.POSITIVE_INFINITY;
			if (e != null)
			{
				e.start(waveType);
				var attempts:Int = 10;
				do {
					var d = FlxG.random.float(0, mWorld.mRadius - 32);
					var a = FlxG.random.float(0, 360);
					point = FlxAngle.getCartesianCoords(d, a);
					dist = FlxMath.distanceToPoint(mPlayerShip, point.add(FlxG.width/2, FlxG.height/2));
					attempts--;
				}
				while (dist < getPlayerLeeway() && attempts > 0);
				e.reset(0, 0);
				e.setPosition(point.x, point.y);
				 e.scale.set(0.1, 0.1);
				 e.alpha = 0.2; 
				FlxTween.tween(e, { alpha:1 }, 0.8, { ease:FlxEase.quartOut, type:FlxTween.ONESHOT} ); 
				FlxTween.tween(e.scale, { x:1, y:1 }, 0.4,
					{ ease:FlxEase.elasticOut, type:FlxTween.ONESHOT, 
						onStart:function(t:FlxTween) { e.active = false; e.solid = false; },
						onComplete:function(t:FlxTween) { e.active = true; e.solid = true; }
						
					} );
			}
		}
		point.put();
		mSpawnTimer.start(FlxG.random.float(0.8, 2.5), onSpawnTimeout, 1);
	}

	/**
	 * Function that is called when this state is destroyed - you might want to
	 * consider setting all objects this state uses to null to help garbage collection.
	 */
	override public function destroy():Void
	{
		super.destroy();
		FlxG.mouse.visible = true;
		FlxG.mouse.unload();		
	}

	/**
	 * Function that is called once every frame.
	 */
	override public function update(elapsed:Float):Void
	{
		mInput.gatherInputs(mPlayerShip);
		
		if (mInput.reset)
		{
			if (mPause)
			{
				mPause = false;
				FlxTimer.manager.active = true;
				FlxTween.manager.active = true;
			}
			FlxG.resetGame(); // TEMPORARY!!
		}
		
		if (mInput.togglePause)
		{
			FlxG.sound.play("assets/sounds/pause.wav");
			mPause = !mPause;
			FlxTimer.manager.active = !mPause;
			FlxTween.manager.active = !mPause;			
		}
		
		if (mInput.toggleMute)
		{
			FlxG.sound.muted = ! FlxG.sound.muted;
		}
		
		#if !NO_CHEATS
		if (mInput.toggleGodMode)
		{
			mCheats.godMode = !mCheats.godMode;
		}
		#end
		
		if (mPause)
		{
			return;
		}
		super.update(elapsed);
		
		//mHealth.text = "Health: " + mPlayerShip.HP + "/" + mPlayerShip.maxHealth;
		//mEnergy.text = "Energy: " + mPlayerShip.mEnergy + "/" + mPlayerShip.mMaxEnergy;
		//mLives.text = "Lives: " + mPlayerShip.mLives + "/" + mPlayerShip.mStartLives;
		mScore .text = "Score: " + mPlayerShip.mScore;
		mMultiplierText.text = "(x" +mScoreMultiplier + ")";
		
		mPlaytime.text = "Playtime: " + FlxStringUtil.formatTime(mPlayerShip.mPlayTime);
		
		var blasterAvailable:Bool = mPlayerShip.mEnergy == mPlayerShip.mMaxEnergy;
		if (!blasterAvailable && mBlasterTween.active)
		{
			mBlasterHint.color = FlxColor.WHITE;
			mBlasterHint.text = "Blaster loading";
			mBlasterTween.active = false;
		}
		else if (blasterAvailable && !mBlasterTween.active)
		{
			mBlasterHint.color = FlxColor.CYAN;
			mBlasterHint.text = "Blaster ready!!";
			mBlasterTween.active = true;
			FlxG.sound.play("assets/sounds/blaster_ready.wav");
		}

		
		if (!mPlayerShip.alive) return;
		FlxG.overlap(mBullets, mEnemies, onBulletHit);
		FlxG.overlap(mBullets, mPlayerShip, onBulletPlayerHit);
		FlxG.overlap(mPlayerShip, mEnemies, onPlayerEnemyCollision);
		FlxG.overlap(mPlayerShip, mPickups, onPlayerPickup);
		FlxG.collide(mEnemies, mEnemies);
	}
	
	public function onLevelUp():Void
	{
		FlxG.sound.play("assets/sounds/level_up.wav");
		mDiffText.text =  "Diff: " + mPlayerShip.mLevel;
	}
	
	public function onPlayerPickup(player:Ship, pickup:Pickup):Void
	{
		pickup.onPicked();
	}
	public function onBulletHit(bullet:BaseBullet, entity:Entity):Void	
	{
		if (bullet.mOwner == mPlayerShip && Std.is(entity, Enemy))
		{
			bullet.collided = true;
			
			var enemy:Enemy = cast(entity, Enemy);
			 if (bullet.mShape != enemy.mShape)
			 {				 
				enemy.health -= bullet.mOppositeDamage;
				
				 if (enemy.health < 0)
				 {
					 enemy.health = 0;
				 }
				 
				 if (enemy.health  == 0)
				 {
					 enemy.onDestroyed();
				 }
				 else 
				 {
					enemy.onHit();
				 }
			 }
			 else 
			 {
				if (enemy.mNoHitSound != null)
				{
					enemy.mNoHitSound.play(); 
				}
			 }
		}
	}
	public function onBulletPlayerHit(bullet:BaseBullet, entity:Ship):Void	
	{		
		if (Std.is(bullet, EnemyBullet))
		{
			bullet.collided = true;
			if (bullet.mShape == mPlayerShip.mShape)
			{
				mPlayerShip.absorbEnergy(5);
			}
			else
			{
				#if !NO_CHEATS
				if (!mCheats.godMode)
				#end
				{
					playerTakesDamage(bullet);					
				}
			}
		}
	}
	
	public function playerTakesDamage(source:Entity):Void
	{
		mPlayerShip.HP-= source.getDamage(mPlayerShip);
		if (mPlayerShip.HP < 0)
		{
			mPlayerShip.HP = 0;
		}
		
		if (mPlayerShip.HP == 0)
		{
			mPlayerShip.onDeath();
		}
		else 
		{
			mPlayerShip.onHit(source);
		}
	}
	
	public function startEmitterParticles(entity:Entity):Void 
	{
		trace("beep " + entity.mID);
		var emitter = mDeathEmitters.getFirstAvailable();
		if (emitter != null)
		{
			emitter.revive();
			emitter.lifespan.set(0.15, 0.3);
			//emitter.blend = BlendMode.ADD;
			emitter.setPosition(entity.x + entity.width / 2, entity.y + entity.height / 2);
			emitter.color.set(entity.color, entity.color);
			//emitter.alpha.set(0.5, 0.8, 0, 0);
			emitter.startTimed(0.5, true, 0.1, 10);		
		}
	}
	
	public function onPlayerEnemyCollision(player:Ship, enemy:Enemy):Void
	{
		#if !NO_CHEATS
		if (!mCheats.godMode)
		#end
		{
			playerTakesDamage(enemy);
		}
	}
	
	public function onPlayerDied():Void
	{
		mSpawnTimer.cancel();
		mPlayerShip.kill();
		remove(mPlayerShip);
		remove(mPlayerShip.trail);
		mEnemies.forEachAlive(function(e:Enemy):Void { e.onPlayerDied(); } );
		
		Reg.score = mPlayerShip.mScore;
		if (Reg.score > Reg.highScore)
		{
			Reg.highScore = Reg.score;
		}
		
		Reg.time = mPlayerShip.mPlayTime;
		if (Reg.time > Reg.maxTime)
		{
			Reg.maxTime = Reg.time;
		}
		
		#if KONGREGATE
			FlxKongregate.init(onLoad);
		#end

		
		FlxG.sound.play("assets/sounds/game_over.wav", 1, false, null,true, function():Void{FlxG.switchState(new GameOverState());});
	}

#if KONGREGATE
	public function onLoad():Void
	{
		FlxKongregate.connect();
		FlxKongregate.submitStats("Playtime", Math.floor(Reg.time));
		FlxKongregate.submitStats("Highscore", Reg.score);
	}
#end	
		
	public function onPlayerHit():Void
	{
		mEnemies.forEachAlive(function (e:Enemy):Void { e.onPlayerHit(mPlayerShip.getPosition()); } );
		var isResetMult:Bool = mScoreMultiplier > 1;
		
		mScoreMultiplier = 1;
		
		if (isResetMult)
		{
			if (mMultiplierTween == null)
			{
				mMultiplierTween = FlxTween.tween(mMultiplierText.scale, { x:1.15, y:1.15 }, 0.4
				,{ onComplete:function(t:FlxTween):Void { 
						mMultiplierTween = FlxTween.tween(mMultiplierText.scale, { x:1, y:1 }, 0.15
							, { ease:FlxEase.backOut, type:FlxTween.ONESHOT , onComplete:function(t:FlxTween) { remove(mMultiplierText); mMultiplierTween = null; } } ); 
					}
				, ease:FlxEase.backIn, type:FlxTween.ONESHOT } );
			}
			
			mIngameMultText.text = "Bonus lost!";
			mIngameMultText.color = FlxColor.RED;
			mIngameMultText.alpha = 1;
			add(mIngameMultText);
			
			var startX:Float = mPlayerShip.x;
			var startY:Float = mPlayerShip.y;
			
			FlxTween.linearMotion(mIngameMultText, startX, startY, startX, startY - 40, 1);
			FlxTween.tween(mIngameMultText, { alpha:0 }, 1, { onComplete:function(t:FlxTween) { remove(mIngameMultText); }} );
			
			FlxG.sound.play("assets/sounds/lost_multiplier.wav");
		}
		mToNextMultiplier = KILLS_TO_MULTIPLIER;
	}
	
	public function onPlayerBlast():Void
	{
		FlxG.camera.shake(0.02, 0.3);
		mEnemies.forEachAlive(function (e:Enemy):Void { e.health = 0; e.onDestroyed(); } );
		mBullets.forEachAlive(function (b:BaseBullet):Void { if (Std.is(b, EnemyBullet)) { b.collided = true;}} );
	}
	
	public function onEnemyKilled(e:Enemy):Void
	{
		mPlayerShip.mKills++;
		mPlayerShip.mScore += 5 * mScoreMultiplier;
		
		mToNextMultiplier--;
		if (mToNextMultiplier == 0)
		{
			mToNextMultiplier = KILLS_TO_MULTIPLIER;
			mScoreMultiplier = Math.floor(Math.min(mScoreMultiplier + 1, 100));
			
			mIngameMultText.text = "x" + mScoreMultiplier;
			mIngameMultText.color = FlxColor.YELLOW;
			mIngameMultText.alpha = 1;
			add(mIngameMultText);
			
			var startX:Float = mPlayerShip.x;
			var startY:Float = mPlayerShip.y;
			
			FlxTween.linearMotion(mIngameMultText, startX, startY, startX, startY - 40, 1);
			FlxTween.tween(mIngameMultText, { alpha:0 }, 1, { onComplete:function(t:FlxTween) { remove(mIngameMultText); }} );			
			
			if (mScoreMultiplier == 2)
			{
				add(mMultiplierText);				
			}
			if (mMultiplierTween == null)
			{
				FlxG.sound.play("assets/sounds/increase_mult.wav");
				mMultiplierTween = FlxTween.tween(mMultiplierText.scale, { x:1.15, y:1.15 }, 0.4
				,{ onComplete:function(t:FlxTween):Void { mMultiplierTween = FlxTween.tween(mMultiplierText.scale, { x:1, y:1 }, 0.15, { ease:FlxEase.backOut, type:FlxTween.ONESHOT, onComplete:function(t:FlxTween) { mMultiplierTween = null; } } ); }
				, ease:FlxEase.backIn, type:FlxTween.ONESHOT } );
			}
			
		}
				
		mToNextLife--;
		if (mToNextLife == 0 )
		{
			if (spawnPickup(PickupType.Life))
			{
				mToNextLife = toNextLife();
			}
		}
		
		var rndPickup:Bool = FlxG.random.bool(5);
		if (rndPickup)
		{
			var type:PickupType = cast(FlxG.random.int(PickupType.RateOfFire, PickupType.Speed), PickupType);
			trace("Picking up " + type);
			//spawnPickup(type);
		}
	}
	
	public function spawnPickup(type:PickupType):Bool
	{
		var PickupCallbacks:Array<Void->Void> = [onLife];
	
		var p:Pickup = mPickups.getFirstAvailable(Pickup);
		if (p != null)
		{
			var point:FlxPoint = FlxPoint.get();
			do {
				var d = FlxG.random.float(0, mWorld.mRadius - 32);
				var a = FlxG.random.float(0, 360);
				point = FlxAngle.getCartesianCoords(d, a);
			}
			while (FlxMath.distanceToPoint(mPlayerShip, point) < mPlayerShip.width * 4);
			
			var idx:Int = cast(type, Int);
			p.init(point.x + FlxG.width/2, point.y + FlxG.height/2, PickupTypes[idx], PickupTypeKeys[idx], type, PickupColours[idx], PickupCallbacks[idx]);
			
			point.put();
			return true;
		}
		return false;
	}
	
	public function onLife():Void
	{
		mPlayerShip.HP++;
		if (mPlayerShip.HP > mPlayerShip.maxHealth)
		{
			mPlayerShip.HP = mPlayerShip.maxHealth;
		}
	}
	
	public function onShapeShift():Void
	{
		updateShapeHint();		
	}
	
	//----------BALANCING--------------//
	public function toNextLife():Int
	{
		return Balancing.toNextLife(mPlayerShip.mLevel);
	}
	
	public function getEnemyWaveSize():FlxBounds<Int>
	{
		return Balancing.getEnemyWaveSize(mPlayerShip.mLevel);
	}
	
	public function getPlayerLeeway():Float 
	{
		return Balancing.getPlayerLeeway(mPlayerShip.mLevel,mPlayerShip);
	}
}