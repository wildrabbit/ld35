package org.wildrabbit.game;

import org.wildrabbit.game.Bullet;
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
class EnemyBullet extends BaseBullet
{
	public function new(playState:PlayState)
	{	
		super(playState);		
	}

	override public function doLoadGraphic():Void
	{
		loadGraphic("assets/images/bullet_enemy.png");
	}
	
	override public function doSwitchShape(shape:Shape):Void
	{
	}
}