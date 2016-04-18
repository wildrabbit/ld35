package org.wildrabbit;

import flixel.effects.particles.FlxEmitter;
import flixel.effects.particles.FlxParticle;
import flixel.util.FlxColor;
import flixel.util.FlxSpriteUtil;
import flixel.util.FlxTimer;

/**
 * ...
 * @author ith1ldin
 */
class FlxTimedEmitter extends FlxEmitter
{
	private var timer:FlxTimer;
	private var mCallback:Void->Void;
	
	public function new() 
	{
		super();
		timer = new FlxTimer();
		for (j in 0...25)
			{
				var part = new FlxParticle();
				part.makeGraphic(8, 8);
				part.kill();
				add(part);
				
				var part2 = new FlxLongParticle();
				part2.makeGraphic(16,2);
				FlxSpriteUtil.drawRect(part, 0, 0, 16, 2);
				part2.kill();
				add(part2);
			}
	}
	
	public function startTimed(duration:Float, explode:Bool, freq:Float, quantity:Int, ?callback:Void->Void)
	{
		mCallback = callback;
		start(explode, freq, quantity);
		timer.start(duration, timeout );
	}
	
	public function timeout(timer:FlxTimer):Void
	{
		timer.cancel();  
		if (mCallback != null)
		{
			mCallback();
		}
		
	}
	
}