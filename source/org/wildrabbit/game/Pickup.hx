package org.wildrabbit.game;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.effects.FlxFlicker;
import flixel.system.FlxAssets.FlxGraphicAsset;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;
import org.wildrabbit.PlayState.PickupType;

/**
 * ...
 * @author ith1ldin
 */
class Pickup extends FlxSprite
{
	public var mType:PickupType;
	public var mCallback:Void->Void;
	
	public var mTween:FlxTween;
	
	public var mLifeTimer:FlxTimer;
	
	public function new() 
	{
		super(0, 0);
		mLifeTimer = new FlxTimer();
	}
	
	public function init(x:Float, y:Float, gfx:FlxGraphicAsset, idx:Int, type:PickupType, color:FlxColor, callback:Void->Void):Void
	{		
		reset(x, y);
		solid = true;
		loadGraphic(gfx, true, 32, 32);
		animation.add("anim", [idx], 1);
		animation.add("destroy", [4, 5, 6, 7], 12, false);
		animation.play("anim");
		animation.finishCallback = onAnimFinished;
		mType = type;
		mCallback = callback;
		this.color = color;
		scale.set(1, 1);
		mLifeTimer.start(10, onTimeout);
		mTween = FlxTween.tween(scale, { x:1.25, y:1.25 }, 0.5, {type:FlxTween.PINGPONG, ease:FlxEase.elasticInOut} );
	}
	
	override public function update(dt:Float):Void {
		super.update(dt);
		if (mLifeTimer.progress > 0.5 && !FlxFlicker.isFlickering(this))
		{
			FlxFlicker.flicker(this, mLifeTimer.timeLeft, 0.08);
		}
	}
	
	public function onTimeout(t:FlxTimer):Void 
	{
		if (mTween != null) mTween.cancel();
		if (animation.name != "destroy")
			animation.play("destroy", true, false);
	}
	
	public function onAnimFinished(str:String)
	{
		if (str == "destroy")
		{
			kill();
		}
	}
	
	public function onPicked()
	{
		solid = false;
		FlxG.sound.play("assets/sounds/main_pickup.wav");
		if (mCallback != null)
		{
			mCallback();
		}
		if (mTween != null)
		{
			mTween.cancel();
		}
		animation.play("destroy", true, false);
	}
	
}