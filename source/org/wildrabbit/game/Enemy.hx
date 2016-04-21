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

/**
 * ...
 * @author ith1ldin
 */
class Enemy extends Entity
{
	private static var count:Int = 0;
	private static var ShapeAnims:Array<String> = ["circle", "triangle", "square"];
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
	
	public function new(parent:PlayState) 
	{
		super(parent, 0);
		loadGraphic("assets/images/ship_shapesv2.png", true, 32, 32);
		animation.add("circle", [4, 5], 2);
		animation.add("triangle", [8, 9], 2);
		animation.add("square", [12, 13], 2);	
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
		
		mNoHitSound = FlxG.sound.load("assets/sounds/enemy_nohit.wav",0.2);
		mShootSound = FlxG.sound.load("assets/sounds/enemy_shoot.wav",0.2);
		mHitSound = FlxG.sound.load("assets/sounds/enemy_hit.wav",0.2);
		mDeathSound = FlxG.sound.load("assets/sounds/enemy_explode.wav",0.2);
	}
	
	public function start(shape:Shape):Void
	{
		switchShape(shape);
		scale.set(1, 1);
		updateHitbox();
		centerOrigin();
		maxHealth = 4;
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
		mShootTimer.start(INITIAL_DELAY, function(t:FlxTimer):Void { mCanShoot = mCanPlayShoot = true; } );
	}
	
	override public function switchShape(shape:Shape):Void
	{
		super.switchShape(shape);
		animation.play(ShapeAnims[mShape]);
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
		mEmitter.color.set(color);
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
			mEmitter.color.set(color);
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
		var p = FlxPoint.weak(x + width, y + height / 2);
		var shootAngle = theAngle;
		
		var shot:Bool = false;
			
		var bullet = mParent.mBullets.getFirstAvailable(EnemyBullet);
		if (bullet != null)
		{
			p.rotate(FlxPoint.weak(x + width / 2, y + height / 2), angle);
		
			bullet.reset(0,0);
			bullet.velocity.set(getBulletSpeed() * Math.cos(shootAngle), getBulletSpeed() * Math.sin(shootAngle));
			bullet.setPosition(p.x - bullet._halfSize.x, p.y - bullet._halfSize.y);
			bullet.angle = angle - 5;
			bullet.start(this, BULLET_TTL);
			shot = true;
		}

		p.putWeak();
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
		var speedMultipliers:Array<Float> = [1, 1.2, 1.4, 1.6];
		var idx:Int = Math.floor(Math.min(speedMultipliers.length - 1, mParent.getDiffLevel()));
		return BASIC_ENEMY_SPEED * speedMultipliers[idx];
	}
	
	public function getBulletSpeed():Float
	{
		var speedMultipliers:Array<Float> = [1, 1.2, 1.4, 1.6];
		var idx:Int = Math.floor(Math.min(speedMultipliers.length - 1, mParent.getDiffLevel()));
		return BULLET_SPEED * speedMultipliers[idx];
	}
	
	public function getRateOfFire():Float
	{
		var rateMultipliers:Array<Float> = [1, 0.8, 0.76, 0.65];
		var idx:Int = Math.floor(Math.min(rateMultipliers.length - 1, mParent.getDiffLevel()));
		return SHOOT_COOLDOWN * rateMultipliers[idx];
	}
}