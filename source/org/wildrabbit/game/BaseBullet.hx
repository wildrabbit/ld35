package org.wildrabbit.game;

import org.wildrabbit.game.Entity;
import flixel.FlxSprite;
import flixel.math.FlxPoint;
import flixel.system.FlxAssets.FlxGraphicAsset;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxColor;
import flixel.util.FlxSpriteUtil;
import flixel.util.FlxTimer;
import org.wildrabbit.PlayState;

/**
 * ...
 * @author ith1ldin
 */
class BaseBullet extends Entity
{
	private static var count:Int = 0;
	
	var flxTimer:FlxTimer;
	public var collided:Bool;
	public var mOwner:Entity;

	public var mSameDamage:Int = 1;
	public var mOppositeDamage:Int = 2;
	
	var t:FlxTween;
	
	public function new(playState:PlayState)
	{	
		super(playState, 50);		
		mOwner = null;
		flxTimer = new FlxTimer();
		mID = count++;

	}
	
	public function start(owner:Entity, ttl:Float):Void
	{
		mOwner = owner;
		switchShape(mOwner.mShape);
		
		alpha = 1.0;
		solid = true;
		flxTimer.cancel();
		flxTimer.start(ttl);
		collided = false;
		t = null;
		blend  = flash.display.BlendMode.ADD;
	}
	
	override public function switchShape(shape:Shape):Void
	{
		super.switchShape(shape);
		doSwitchShape(shape);
	}
	
	public function doSwitchShape(shape:Shape):Void
	{
	}
	
	public function doDie():Void {
		
	}
	
	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);

		if (flxTimer.finished || collided)
		{
			velocity.set(0, 0);
			solid = false;
			doDie();
			if (t == null)
			{
				t = FlxTween.tween(this, { alpha:0 }, 0.2, { ease: FlxEase.quadOut, onComplete:onDead, type:FlxTween.ONESHOT } );
			}
		}
		else
		{
			updateCollisions();
		}
	}
	
	private function updateCollisions():Void
	{
		var maxDistance:Float = Math.NEGATIVE_INFINITY;
		var maxIndex:Int = -1;
		
		var center:FlxPoint = FlxPoint.get(x + width / 2, y + height / 2);
		var corners:Array<FlxPoint> = [FlxPoint.get(x, y).rotate(center, angle), FlxPoint.get(x + width, y).rotate(center, angle), FlxPoint.get(x, y + height).rotate(center, angle), FlxPoint.get(x + width, y + height).rotate(center, angle)];
		
		var w:World = mOwner
		.mParent.mWorld;
		
		var worldCenter:FlxPoint = w.mCenter;
		var worldRadius:Float = w.mRadius;
		var idx:Int = 0;
		
		var d:Float = -1.0;
		for (p in corners)
		{
			d = p.distanceTo(worldCenter);
			if (d > maxDistance)
			{
				maxDistance = d;
				maxIndex = idx;
			}
			idx++;
		}
		
		if (maxDistance > worldRadius && maxIndex >= 0)
		{
			var point:FlxPoint = corners[maxIndex].subtractPoint(worldCenter);
			var pointAngle:Float = Math.atan2(point.y, point.x);
			var delta:Float = maxDistance - worldRadius;
			x -= delta * Math.cos(pointAngle);
			y += delta * Math.sin(pointAngle);
			velocity.set(0, 0);
			collided = true;
		}
		
		//-------------------------
		for (p in corners) p.put();
		center.put();
	}
	
	public function onDead(tween:FlxTween):Void
	{
		t = null;
		kill();		
	}
	
}