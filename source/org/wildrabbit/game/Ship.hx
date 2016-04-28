package org.wildrabbit.game;

import flixel.addons.effects.FlxTrail;
import flixel.effects.FlxFlicker;
import flixel.math.FlxRect;
import flixel.math.FlxVelocity;
import flixel.system.FlxAssets.FlxSoundAsset;
import flixel.system.FlxSound;
import openfl.display.BlendMode;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.math.FlxPoint;
import flixel.math.FlxVector;
import flixel.system.FlxAssets.FlxGraphicAsset;
import flixel.math.FlxMath;
import flixel.math.FlxAngle;
import flixel.tweens.FlxTween;
import flixel.tweens.FlxEase;
import flixel.util.FlxColor;
import flixel.util.FlxSpriteUtil;
import flixel.util.FlxTimer;
import flixel.effects.particles.FlxEmitter;
import org.wildrabbit.FlxTimedEmitter;
import org.wildrabbit.PlayState;
import org.wildrabbit.PlayState.Shape;
import org.wildrabbit.Reg;
import org.wildrabbit.game.BaseBullet.BulletConfig;

/**
 * ...
 * @author ith1ldin
 */


class Ship extends Entity
{
	private static var SHOOT_COOLDOWN:Float = 0.04;
	private static var BULLET_TTL:Float = 1;
	private static var BULLET_SPEED:Float = 350; //pixels
	
	public static var ShapeAnims:Array<String> = ["circle", "triangle", "square"];
	
	public var mLives:Int;
	public var mStartLives:Int;
	
	public var mLevel:Int;
	
	public var mKills:Int;
	public var mScore:Int;
	public var mPlayTime:Float;
	
	public  var mEnergy:Int;
	public  var mMaxEnergy:Int;
	
	private var mWeaponOffset:FlxPoint;
	
	private var mWorld:World;
	
	private var mCanShoot:Bool;
	private var mShootTimer:FlxTimer;
	private var mCanPlayShoot:Bool;
	private var mShootSoundTimer:FlxTimer;
	private var mHitTimer:FlxTimer;
	
	private var mEmitter:FlxTimedEmitter;
	
	private var mJustCollided:Bool;
	
	public var HP:Float;
	
	private var mShootDoubleSound:FlxSound;
	private var mHitSound:FlxSound;
	private var mDeathSound:FlxSound;
	
	private var mHalo:FlxSprite;
	public var halo(get, set):FlxSprite;
	public function get_halo():FlxSprite
	{
		return mHalo;
	}
	public function set_halo(value:FlxSprite):FlxSprite
	{
		mHalo = value;
		if (value != null)
		{
			mHalo.color = color;			
			mHalo.visible = false;
		}
		return mHalo;
	}
	
	private var mTrail:FlxTrail;
	
	public var trail(get, set):FlxTrail;
	
	public function get_trail():FlxTrail
	{
		return mTrail;
	}
	public function set_trail(value:FlxTrail):FlxTrail
	{
		mTrail = value;
		if (value != null)
		{
			mTrail.color = color;			
		}
		return mTrail;
	}
	
	public function new(parent:PlayState, x:Float, y:Float, speed:Float)
	{
		super(parent, speed);
		loadGraphic("assets/images/ship_shapesv2.png", true, 32, 32);
		animation.add("circle", [0], 24, true, false, false);
		animation.add("triangle", [1], 24, true, false, false);
		animation.add("square", [2], 24, true, false, false);
		
		switchShape(Shape.Circle);
		
		mCanShoot = true;
		mJustCollided = false;
		
		velocity = FlxVector.get();
		acceleration = FlxVector.get();
		maxVelocity.set(speed,speed);
		angle = 0;//FlxAngle.wrapAngle(FlxAngle.angleBetweenMouse(this, true));
		
		mWorld = mParent.mWorld;
		centerOrigin();
		setPosition(x, y);
		
		mWeaponOffset = FlxPoint.get();
		updateOffset();
		
		mShootTimer = new FlxTimer();	
		mHitTimer = new FlxTimer();
		
		mCanPlayShoot = true;
		mShootSoundTimer = new FlxTimer();
		
		maxHealth = 10;
		HP = maxHealth;
		
		mStartLives = 3;
		mLives = mStartLives;
		
		mMaxEnergy = 50;
		mEnergy = 25;
		
		mShootDoubleSound = FlxG.sound.load("assets/sounds/main_double_pew.wav",0.2);
		mHitSound = FlxG.sound.load("assets/sounds/main_hit.wav",0.2);
		mDeathSound = FlxG.sound.load("assets/sounds/main_death.wav",0.2);
		
		mEmitter = new FlxTimedEmitter();
		mEmitter.kill();
		mParent.mDeathEmitters.add(mEmitter);
		
		mKills = 0;
		mScore = 0;
		mPlayTime = 0;
		
		mLevel = Balancing.getDiffLevel(this);
	}
	
	override public function switchShape (nextShape:Shape):Void
	{
		super.switchShape(nextShape);
		var idx = cast(nextShape, Int);
		animation.play(ShapeAnims[idx]);
		if (mTrail != null)
		{
			mTrail.color = color;
		}
		
		showHalo(0.2, 2, 0.2);
		FlxG.sound.play("assets/sounds/main_switch.wav",0.2);
		
		mParent.onShapeShift();
	}

	public function showHalo(theAlpha:Float, theScale:Float, length:Float, ?startScale:Float = 1):Void	
	{
		if (mHalo != null)
		{
			mHalo.color = color;
			mHalo.setPosition(x, y);
			mHalo.scale.set(startScale, startScale);
			mHalo.visible = true;
			mHalo.alpha = theAlpha;
			mHalo.blend = BlendMode.ADD;
			FlxTween.tween(mHalo.scale, { x:theScale, y:theScale }, length, { ease: FlxEase.quintOut, onComplete:function(t:FlxTween):Void { mHalo.visible = false; }, type:FlxTween.ONESHOT } );
		}
	}
	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
		
				
		var velocityVec:FlxVector = cast(velocity, FlxVector);
		
		mPlayTime += elapsed;
		
		if (mHalo != null)
		{
			mHalo.setPosition(x, y);
		}
		
		velocity.set(mParent.mInput.xValue, mParent.mInput.yValue);
		
		if (Reg.selectedInputScheme == InputScheme.Gamepad && !mParent.mInput.shoot)
		{
			if (velocityVec.length > 0.1)
			{
				angle = FlxAngle.wrapAngle(velocityVec.degrees);
			}
		}
		else 
		{
			angle = FlxAngle.wrapAngle(FlxAngle.asDegrees(mParent.mInput.aimDirection));
		}

		if (mParent.mInput.prev)
		{
			var nextShape = -1 + cast(mShape,Int);
			if (nextShape < 0)
			{
				nextShape = cast(Shape.NumEntries - 1, Int);
			}
			switchShape(nextShape);
		}
		else if (mParent.mInput.next)
		{
			var nextShape = 1 + cast(mShape,Int);
			if (nextShape == Shape.NumEntries)
			{
				nextShape = cast(0,Shape);
			}
			switchShape(nextShape);
		}

		if (!velocityVec.isZero())
		{
			velocityVec.normalize();
		}
		updateOffset();
		
		if (mParent.mInput.shoot && mCanShoot)
		{
			shoot(mParent.mInput.aimDirection);
		}
		
		if (mParent.mInput.blast && mEnergy == mMaxEnergy)
		{
			blast();
		}
		
		velocity.x *= mSpeed;
		velocity.y *= mSpeed;
		
		updateMotion(elapsed);
		
		updateCollisions();
		
		var currLevel:Int = Balancing.getDiffLevel(this);
		if (currLevel != mLevel)
		{
			mLevel = currLevel;
			mParent.onLevelUp();
		}
	}
	
	public function shoot(theAngle:Float):Void
	{
		mCanShoot = false;
		var p = FlxPoint.weak(x + width, y + height / 2);
		var shootAngle = theAngle;
		
		var shot:Bool = false;
		var bulletConfig:BulletConfig = { graphic:"assets/images/bullet_main.png", lifetime:BULLET_TTL, speed:BULLET_SPEED , width:16, height:8, burst:false, burstCooldown:0.0, burstSequenceCount:1, burstParallelCount:1, burstSpread:8.0, burstAngle:0 };
		var bulletVelocity:FlxVector = FlxVector.get(Math.cos(shootAngle), Math.sin(shootAngle));

		var bullet = mParent.mBullets.getFirstAvailable(Bullet);
		if (bullet != null)
		{
			var p1 = FlxPoint.get(p.x, p.y - 8);
			p1.rotate(FlxPoint.weak(x + width / 2, y + height / 2), angle);
			p1.x -= bulletConfig.width / 2;
			p1.y -= bulletConfig.height / 2;
			
			bullet.start(this, bulletConfig, p1, bulletVelocity, angle - 5);
			p1.put();
			shot = true;
		}

		bullet = mParent.mBullets.getFirstAvailable(Bullet);
		if (bullet != null)
		{
			var p2 = FlxPoint.get(p.x, p.y + 8);
			p2.rotate(FlxPoint.weak(x + width / 2, y + height / 2), angle);
			p2.x -= bulletConfig.width / 2;
			p2.y -= bulletConfig.height / 2;
		
			bullet.start(this, bulletConfig, p2, bulletVelocity, angle + 5);
			p2.put();
			shot = true;			
		}
		p.putWeak();
		mShootTimer.start(SHOOT_COOLDOWN, onCooldownFinished);
		if (shot && mShootDoubleSound != null && mCanPlayShoot)
		{			
			mCanPlayShoot = false;
			mShootDoubleSound.play(true);
			mShootSoundTimer.start(0.1, function (timer:FlxTimer):Void { mCanPlayShoot = true; } );
		}
		bulletVelocity.put();
	}
		
/*	override public function draw():Void
	{
		super.draw();
		mBullets.draw();
	}*/
	
	private function updateOffset():Void
	{
		
		var radAngle:Float = FlxAngle.asRadians(angle);
		mWeaponOffset.x = width / 2 * (1 + Math.cos(radAngle));
		mWeaponOffset.y = height/2 + width * Math.sin(radAngle);
		
	}
	public function getOffset():FlxPoint
	{
		return mWeaponOffset;
	}
	public function onCooldownFinished(timer:FlxTimer):Void
	{
		mCanShoot = true;
	}
	
	
	private function updateCollisions():Void
	{
		var halfWidth:Float = width / 2;
		var halfHeight:Float = height / 2;
		var center:FlxPoint = FlxPoint.get(x + halfWidth, y + halfHeight);
		var radius:Float = halfHeight;
		
		var deltaX:Float = center.x - mWorld.mCenter.x;
		var deltaY:Float = center.y - mWorld.mCenter.y;
		var sqDistance:Float = deltaX * deltaX + deltaY * deltaY;
		
		var radiusDelta:Float = mWorld.mRadius- radius;
		var sqRadiusDelta:Float = radiusDelta * radiusDelta;
		
		if (sqDistance > sqRadiusDelta)
		{
			velocity.set(0, 0);
			var correctionDelta:Float = Math.sqrt(sqDistance) - Math.abs(radiusDelta);
			var angle:Float = Math.atan2(deltaY, deltaX);
			//trace("Angle: " + angle * RAD_TO_DEG);
			x -= correctionDelta * Math.cos(angle);
			y -= correctionDelta * Math.sin(angle);
		}
		center.put();
	}
	
	public function onDeath():Void 
	{
		solid = false;
		
		if (mEmitter != null)
		{
			mEmitter.launchMode = FlxEmitterMode.CIRCLE;
			mEmitter.setPosition(x + width / 2, y + width / 2);
			mEmitter.lifespan.set(0.3);
			mEmitter.speed.set(200, 200, 0, 0);
			mEmitter.color.set(color);
			mEmitter.alpha.set(0.4, 0.6, 0.0,0.0);
			mEmitter.blend = BlendMode.ADD;
			mEmitter.startTimed(0.3, true, 0.1, 30);
		}
		showHalo(0.1, 4, 0.5);
		
		if (mDeathSound != null)
		{
			mDeathSound.play();
		}
		
		mParent.onPlayerDied();
	}
	
	public function onHit(entity:Entity):Void
	{		
		solid = false;
		color = FlxColor.WHITE;
		alpha = 0.5;
		FlxFlicker.flicker(this, 1.0, 0.08);		
		mHitTimer.start(1.0, onHitTimeout);
		FlxG.camera.shake(0.01, 0.2);
		
		var recoil:FlxVector = FlxVector.get(x - entity.x, y - entity.y);
		recoil.normalize().scale(24);
		x += recoil.x;
		y += recoil.y;
		
		if (mHitSound != null)
		{
			mHitSound.play();
		}
		
		mParent.onPlayerHit();
	}
	
	public function onHitTimeout(timer:FlxTimer):Void
	{
		solid = true;
		color = Entity.ShapeColours[cast(mShape, Int)];
		alpha = 1;
		mHitTimer.cancel();
	}

	public function absorbEnergy(amount:Int):Void
	{
		mEnergy += amount;
		if (mEnergy > mMaxEnergy)
		{
			mEnergy = mMaxEnergy;
		}
		
		showHalo(0.3, 1, 0.4, 2.5);
		FlxG.sound.play("assets/sounds/main_absorb.wav");		
	}
	
	public function blast():Void
	{
		mParent.onPlayerBlast();
		FlxG.sound.play("assets/sounds/main_blast.wav");
		mEnergy = 0;
	}
}