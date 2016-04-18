package org.wildrabbit;

import flixel.effects.particles.FlxParticle;
import flixel.math.FlxAngle;
import flixel.math.FlxMath;
import flixel.math.FlxVector;

/**
 * ...
 * @author ith1ldin
 */
class FlxLongParticle extends FlxParticle
{

	public function new() 
	{
		super();
		velocity = FlxVector.get();
	}
	
	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
		this.angle = cast(velocity, FlxVector).degrees;
	}
	
	override public function reset(X:Float, Y:Float):Void 
	{
		alpha = 1;
		super.reset(X, Y);
	}
	
}