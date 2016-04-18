package org.wildrabbit;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;

/**
 * A FlxState which can be used for the game's menu.
 */
class MenuState extends FlxState
{
	var bg:FlxSprite;
	var title:FlxText;
	
	var hint:FlxText;
	var pause:FlxTimer;
	
	var allowExit:Bool;
	var tween:FlxTween;
	/**
	 * Function that is called up when to state is created to set it up.
	 */
	override public function create():Void
	{
		super.create();
		pause = new FlxTimer();
		allowExit = false;
		pause.start(0.5, function(t:FlxTimer):Void
		{
			hint.visible = true;
			tween = FlxTween.tween(hint.scale, { x:1.1, y:1.1 }, 1, { ease:FlxEase.circOut, type:FlxTween.PINGPONG } );
			allowExit = true;
		});
		bg = new FlxSprite(0, 0, "assets/images/intro.png");
		add(bg);
		hint = new FlxText(0, FlxG.height / 2 + 100, FlxG.width, "PRESS ANY KEY TO CONTINUE");
		hint.alignment = FlxTextAlign.CENTER;
		hint.visible = false;
		hint.size = 14;
		hint.color = FlxColor.PURPLE;
		add(hint);
	}

	/**
	 * Function that is called when this state is destroyed - you might want to
	 * consider setting all objects this state uses to null to help garbage collection.
	 */
	override public function destroy():Void
	{
		super.destroy();
		if (tween != null)
		{
			tween.cancel();
		}
		remove(hint);
		remove(bg);
		hint = null;
		bg = null;
	}

	/**
	 * Function that is called once every frame.
	 */
	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
		if (allowExit && (FlxG.keys.justPressed.ANY|| FlxG.mouse.justPressed))
		{
			FlxG.switchState(new HelpState());
		}		
	}
}