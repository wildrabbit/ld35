package org.wildrabbit.game;

import flash.display.BlendMode;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.effects.particles.FlxEmitter;
import flixel.input.FlxPointer;
import flixel.math.FlxAngle;
import flixel.math.FlxMath;
import flixel.math.FlxPoint;
import flixel.math.FlxVector;
import flixel.system.FlxAssets.FlxGraphicAsset;
import flixel.system.FlxSound;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxCollision;
import flixel.util.FlxTimer;
import org.wildrabbit.FlxTimedEmitter;
import org.wildrabbit.PlayState;
import org.wildrabbit.PlayState.Shape;
import org.wildrabbit.game.BaseBullet;



typedef EnemyConfig =
{
	var configID:Int; // We won't use this for now
	var graphic:FlxGraphicAsset;
	var frames:Array<Int>;
	var framerate:Int;
	var shape:Shape;
	var baseSpeed:Float;
	var bulletConfig:BulletConfig;
	var baseCooldown:Float;
	var baseStartDelay:Float;
	var hp:Int;
	var lifetime:Float; // -1: Infinite (default)
	var width:Int;
	var height:Int;
}

 @:enum
 abstract EnemyBehaviourType(Int) from Int to Int
 {
	 var Wanderer = 0;
	 var Chaser = 1;
	 var Avoider = 2;
	 var NumEntries = Avoider - Wanderer + 1;
 }

/**
 * ...
 * @author ith1ldin
 */
class Enemy extends Entity
{
	public static var ENEMY_LIST:Array<EnemyConfig> = [
		{
			configID:ENEMY_ID_CHASER_CIRCLE,
			graphic:"assets/images/ship_shapesv3.png",
			frames:[4, 5],
			framerate:2,
			shape:Shape.Circle,
			baseSpeed: BASIC_ENEMY_SPEED,
			bulletConfig: { graphic:"assets/images/bullet_enemy.png", speed:BULLET_SPEED, lifetime:BULLET_TTL, width:16, height:16 },
			baseCooldown: SHOOT_COOLDOWN,
			baseStartDelay: INITIAL_DELAY,
			hp: 4,
			lifetime: -1,
			width:32,
			height:32
		},
		{
			configID:ENEMY_ID_CHASER_TRIANGLE,
			graphic:"assets/images/ship_shapesv3.png",
			frames:[8, 9],
			framerate:2,
			shape:Shape.Triangle,
			baseSpeed: BASIC_ENEMY_SPEED,
			bulletConfig: { graphic:"assets/images/bullet_enemy.png", speed:BULLET_SPEED, lifetime:BULLET_TTL, width:16, height:16 },
			baseCooldown: SHOOT_COOLDOWN,
			baseStartDelay: INITIAL_DELAY,
			hp: 4,
			lifetime: -1,
			width:32,
			height:32
		},
		{
			configID:ENEMY_ID_CHASER_SQUARE,
			graphic:"assets/images/ship_shapesv3.png",
			frames:[12, 13],
			framerate:2,
			shape:Shape.Square,
			baseSpeed: BASIC_ENEMY_SPEED,
			bulletConfig: { graphic:"assets/images/bullet_enemy.png", speed:BULLET_SPEED, lifetime:BULLET_TTL, width:16, height:16 },
			baseCooldown: SHOOT_COOLDOWN,
			baseStartDelay: INITIAL_DELAY,
			hp: 4,
			lifetime: -1,
			width:32,
			height:32			
		},
		{
			configID:ENEMY_ID_WANDERER_CIRCLE,
			graphic:"assets/images/ship_shapesv3.png",
			frames:[6, 7],
			framerate:2,
			shape:Shape.Circle,
			baseSpeed: BASIC_ENEMY_SPEED,
			bulletConfig: { graphic:"assets/images/bullet_enemy.png", speed:BULLET_SPEED, lifetime:BULLET_TTL, width:16, height:16 },
			baseCooldown: SHOOT_COOLDOWN,
			baseStartDelay: INITIAL_DELAY,
			hp: 4,
			lifetime: -1,
			width:32,
			height:32	
		},
		{
			configID:ENEMY_ID_WANDERER_TRIANGLE,
			graphic:"assets/images/ship_shapesv3.png",
			frames:[10, 11],
			framerate:2,
			shape:Shape.Triangle,
			baseSpeed: BASIC_ENEMY_SPEED,
			bulletConfig: { graphic:"assets/images/bullet_enemy.png", speed:BULLET_SPEED, lifetime:BULLET_TTL, width:16, height:16 },
			baseCooldown: SHOOT_COOLDOWN,
			baseStartDelay: INITIAL_DELAY,
			hp: 4,
			lifetime: -1,
			width:32,
			height:32	
		},
		{
			configID:ENEMY_ID_WANDERER_SQUARE,
			graphic:"assets/images/ship_shapesv3.png",
			frames:[14, 15],
			framerate:2,
			shape:Shape.Square,
			baseSpeed: BASIC_ENEMY_SPEED,
			bulletConfig: { graphic:"assets/images/bullet_enemy.png", speed:BULLET_SPEED, lifetime:BULLET_TTL, width:16, height:16 },
			baseCooldown: SHOOT_COOLDOWN,
			baseStartDelay: INITIAL_DELAY,
			hp: 4,
			lifetime: -1,
			width:32,
			height:32	
		}
	];
	
	public static var ENEMY_ID_CHASER_CIRCLE:Int = 0;
	public static var ENEMY_ID_CHASER_TRIANGLE:Int = 1;
	public static var ENEMY_ID_CHASER_SQUARE:Int = 2;
	public static var ENEMY_ID_WANDERER_CIRCLE:Int = 3;
	public static var ENEMY_ID_WANDERER_TRIANGLE:Int = 4;
	public static var ENEMY_ID_WANDERER_SQUARE:Int = 5;
		
	private static var count:Int = 0;
	//private static var ShapeAnims:Array<String> = ["circle", "triangle", "square"];
	private static var BASIC_ENEMY_SPEED:Int = 55;
	private static var BULLET_SPEED:Int = 250;
	private static var BULLET_TTL:Float = 1.5;
	private static var SHOOT_COOLDOWN:Float = 1;
	private static var INITIAL_DELAY:Float = 2.5;
	
	private var mStunned:Bool = false;
	private var mHitTimer:FlxTimer;
	private var mDeadTween:FlxTween;
	private var mEmitter:FlxTimedEmitter;
	
	private var mShootTimer:FlxTimer;
	private var mCanShoot:Bool;
	private var mCanPlayShoot:Bool;
	
	private var mWandering:Bool = false;
	private var mWanderingTimer:FlxTimer;
	
	public var mNoHitSound:FlxSound;
	public var mHitSound:FlxSound;
	public var mDeathSound:FlxSound;
	public  var mShootSound:FlxSound;
	
	public var baseSpeed(get, null):Float;
	function get_baseSpeed():Float	
	{
		return mConfig.baseSpeed;
	}
	
	public var baseBulletSpeed (get, null):Float;
	function get_baseBulletSpeed():Float	
	{
		return mConfig.bulletConfig.speed;
	}
	
	public var baseBulletLifetime (get, null):Float;
	function get_baseBulletLifetime():Float
	{
		return mConfig.bulletConfig.lifetime;
	}
	
	public var baseCooldown (get, null):Float;
	function get_baseCooldown():Float
	{
		return mConfig.baseCooldown;
	}
	
	private var mConfig:EnemyConfig;
	
	
	public function new(parent:PlayState) 
	{
		super(parent, 0);
			
		//blend = BlendMode.ADD;
		mHitTimer = new FlxTimer();
		mDeadTween  = null;
		mID = count++;
		mEmitter = new FlxTimedEmitter();
		mEmitter.kill();
		mParent.mDeathEmitters.add(mEmitter);
		mWanderingTimer = new FlxTimer();
		mShootTimer = new FlxTimer();
		
		mCanShoot = false;
		mCanPlayShoot = false;
		
		mConfig = null;
		
		mNoHitSound = FlxG.sound.load("assets/sounds/enemy_nohit.wav",0.2);
		mShootSound = FlxG.sound.load("assets/sounds/enemy_shoot.wav",0.2);
		mHitSound = FlxG.sound.load("assets/sounds/enemy_hit.wav",0.2);
		mDeathSound = FlxG.sound.load("assets/sounds/enemy_explode.wav",0.2);
	}
	
	public function start(id:Int):Void
	{
		mConfig = ENEMY_LIST[id];		
		loadGraphic(mConfig.graphic, true, mConfig.width, mConfig.height);
		animation.remove("move");
		animation.add("move", mConfig.frames, mConfig.framerate);
		animation.play("move");
		
		switchShape(mConfig.shape);
		scale.set(1, 1);
		updateHitbox();
		centerOrigin();
		maxHealth = mConfig.hp;
		alpha = 1;
		health = maxHealth;
		mStunned = false;
		mSpeed = getSpeed();
		mHitTimer.cancel();
		solid = true;
		mDeadTween = null;		
		mWandering = false;
		
		mCanShoot = false;
		mCanPlayShoot = false;
		mShootTimer.start(mConfig.baseStartDelay, function(t:FlxTimer):Void { mCanShoot = mCanPlayShoot = true; } );
	}

	override public function switchShape(shape:Shape):Void
	{
		mShape = shape;
	}
	
	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
		//velocity.set(0, 0);
		
		if (mStunned) return;
		
		var velocityVec:FlxVector = cast(velocity, FlxVector);
		
		if (!mWandering)
		{
			velocityVec.set(mParent.mPlayerShip.x - x, mParent.mPlayerShip.y - y);
			velocityVec.normalize().scale(mSpeed);
			//angle = FlxAngle.wrapAngle(FlxAngle.angleBetween(this, mParent.mPlayerShip, true));
			velocity.x =  velocityVec.x + FlxG.random.float( -10.0, 10.0);
			velocity.y =  velocityVec.y + FlxG.random.float( -10.0, 10.0);			
		}

		
		angle = velocityVec.degrees;
		
		updateHitbox();
		centerOrigin();
		
		updateMotion(elapsed);
		updateCollisions();
		
		if (mCanShoot && FlxG.random.bool(5))
		{
			shoot(velocityVec.radians);
		}
	}
	
	private function updateCollisions():Void
	{
		var halfWidth:Float = width / 2;
		var halfHeight:Float = height / 2;
		var center:FlxPoint = FlxPoint.get(x + halfWidth, y + halfHeight);
		var radius:Float = halfHeight;
		
		var deltaX:Float = center.x - mParent.mWorld.mCenter.x;
		var deltaY:Float = center.y - mParent.mWorld.mCenter.y;
		var sqDistance:Float = deltaX * deltaX + deltaY * deltaY;
		
		var radiusDelta:Float = mParent.mWorld.mRadius- radius;
		var sqRadiusDelta:Float = radiusDelta * radiusDelta;
		
		if (sqDistance > sqRadiusDelta)
		{
			velocity.x = -velocity.x;
			velocity.y = -velocity.y;
			var correctionDelta:Float = Math.sqrt(sqDistance) - Math.abs(radiusDelta);
			var angle:Float = Math.atan2(deltaY, deltaX);
			//trace("Angle: " + angle * RAD_TO_DEG);
			x -= correctionDelta * Math.cos(angle);
			y -= correctionDelta * Math.sin(angle);
		}
		center.put();
	}
	
	public function onHit():Void
	{
		if (mHitSound != null)
		{
			mHitSound.play(true);
		}
		var oppVel:FlxVector = FlxVector.get(velocity.x, velocity.y);
		oppVel.normalize().scale( -5);
		x += oppVel.x;
		y += oppVel.y;
		
		mEmitter.launchMode = FlxEmitterMode.CIRCLE;
		mEmitter.setPosition(x + width / 2, y + width / 2);
		mEmitter.lifespan.set(0.3);
		mEmitter.speed.set(200, 200, 0, 0);
		mEmitter.color.set(Entity.ShapeColours[cast(mShape,Int)]);
		mEmitter.alpha.set(0.4, 0.6, 0.0,0.0);
		mEmitter.blend = BlendMode.ADD;
		mEmitter.startTimed(0.3, true, 0.1, 15);
		
		mHitTimer.start(0.2, onHitTimerFinished);		
		mStunned = true;
	}
	
	public function onHitTimerFinished(timer:FlxTimer):Void
	{
		mStunned = false;
	}
	
	public function onDestroyed():Void
	{
		trace(mID + " is destroyed!");
		mStunned = true;
		solid = false;
		mShootTimer.cancel();		
		velocity.set(0, 0);
		mCanShoot = false;
		
		if (mDeathSound != null)
		{
			mDeathSound.play(true);
		}
		
		if (mDeadTween == null)
		{
			mDeadTween = FlxTween.tween(this, { alpha:0}, 0.5, { ease: FlxEase.quadOut, onComplete:onDead, type:FlxTween.ONESHOT } );
			FlxTween.tween(this.scale, { x:0, y:0 }, 0.39, { ease: FlxEase.quadOut, type:FlxTween.ONESHOT } );
			
			mEmitter.launchMode = FlxEmitterMode.CIRCLE;
			mEmitter.setPosition(x + width / 2, y + width / 2);
			mEmitter.lifespan.set(1);
			mEmitter.speed.set(80, 180, 0, 0);
			mEmitter.color.set(Entity.ShapeColours[cast(mShape,Int)]);
			mEmitter.alpha.set(0.4, 0.6, 0.0,0.0);
			mEmitter.blend = BlendMode.ADD;
			mEmitter.startTimed(0.5, true, 0.1, 30);
		}
	}
	
	public function onDead(tween:FlxTween):Void
	{
		mDeadTween = null;
		mParent.onEnemyKilled(this);
		kill();
	}
	
	public function onPlayerDied():Void
	{
		mWandering = true;		
		mShootTimer.cancel();
		mCanPlayShoot = mCanShoot = false;
		mWanderingTimer.start(FlxG.random.float(0.5, 5), onDeathWanderTimeout);
		var cart:FlxPoint = FlxAngle.getCartesianCoords(1, FlxG.random.float(0, 360));
		var velocityVec:FlxVector = FlxVector.get(cart.x, cart.y);
		velocityVec.set(cart.x, cart.y).scale(mSpeed);
		velocity.set(velocityVec.x, velocityVec.y);
	}
	
	public function onDeathWanderTimeout(flxtimer:FlxTimer):Void
	{
		var cart:FlxPoint = FlxAngle.getCartesianCoords(1, FlxG.random.float(0, 360));
		var velocityVec:FlxVector = FlxVector.get(cart.x, cart.y);
		velocityVec.set(cart.x, cart.y).scale(mSpeed);
		velocity.set(velocityVec.x, velocityVec.y);
		mWanderingTimer.start(FlxG.random.float(0.5, 5), onDeathWanderTimeout);
	}
	
	public function onPlayerResurrected():Void
	{
		mWandering = false;
		mWanderingTimer.cancel();
	}
	
	public function onPlayerHit(pos:FlxPoint):Void
	{
		var dist:Float = FlxMath.distanceToPoint(this, pos);
		if (dist < mParent.mPlayerShip.width * 3)
		{
			var recoil:FlxVector = FlxVector.get(x - pos.x, y - pos.y);	
			recoil.normalize().scale(5 * mParent.mPlayerShip.width);
			recoil.put();
		}
		mWandering = true;
		mWanderingTimer.start(0.9, onHitWanderTimeout);
	}
	
	public function onHitWanderTimeout(timer:FlxTimer):Void
	{
		mWandering = false;
		mWanderingTimer.cancel();
	}
	
	public function shoot(theAngle:Float):Void
	{
		mCanShoot = false;
		var p = FlxPoint.get(x + width, y + height / 2);
		var shootAngle = theAngle;
		
		var shot:Bool = false;
		
		var config:BulletConfig = { graphic:"assets/images/bullet_enemy.png", speed:BULLET_SPEED, lifetime:BULLET_TTL, width:16, height:16 };
		
		var dir:FlxVector = FlxVector.get();
			
		var bullet = mParent.mBullets.getFirstAvailable(EnemyBullet);
		if (bullet != null)
		{
			p.rotate(FlxPoint.weak(x + width / 2, y + height / 2), angle);
			p.x -= config.width/2;
			p.y -= config.height / 2;
			
			dir.set(Math.cos(shootAngle), Math.sin(shootAngle));
		
			bullet.start(this, config, p, dir, angle - 5);
			shot = true;
		}

		p.put();
		dir.put();
		mShootTimer.start(getRateOfFire(), onCooldownFinished);
		if (shot && mShootSound != null && mCanPlayShoot)
		{			
			mCanPlayShoot = false;
			mShootSound.play(true);			
		}
	}
	
	public function onCooldownFinished(timer:FlxTimer):Void
	{
		mCanShoot = mCanPlayShoot = true;
	}
	
	//----------
	public function getSpeed():Float
	{
		return Balancing.getSpeed(this, mParent.mPlayerShip.mLevel);
	}
	
	public function getRateOfFire():Float
	{
		return Balancing.getRateOfFire(this, mParent.mPlayerShip.mLevel);
	}
}