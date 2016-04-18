package org.wildrabbit.game;

import flixel.FlxSprite;
import flixel.math.FlxPoint;
import flixel.system.FlxAssets.FlxGraphicAsset;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxColor;
import flixel.util.FlxSpriteUtil;
import flixel.util.FlxTimer;
import org.wildrabbit.PlayState;
import org.wildrabbit.game.BaseBullet;


/**
 * ...
 * @author ith1ldin
 */
class Bullet extends BaseBullet
{
	private static var ShapeAnims:Array<String> = ["circle", "triangle", "square"];
	
	public function new(playState:PlayState):Void
	{
		super(playState);
				
		loadGraphic("assets/images/bullet_main.png", true, 16,8);

		animation.add("circle", [0], 1);
		animation.add("triangle", [1], 1);
		animation.add("square", [2], 1);
		animation.add("explode", [3], 1);
	}
	
	override public function doDie():Void
	{
		animation.play("explode");
	}
	
	override public function doSwitchShape(shape:Shape):Void
	{
		animation.play(ShapeAnims[mShape]);
	}
}