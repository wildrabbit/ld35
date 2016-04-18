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
class HelpState extends FlxState
{
	var bg:FlxSprite;
	
	var hint:FlxText;
	var pause:FlxTimer;
	
	var allowExit:Bool;
	var tween:FlxTween;
	
	var msg1:FlxSprite;
	var msg2:FlxSprite;
	var i:Int;
	/**
	 * Function that is called up when to state is created to set it up.
	 */
	override public function create():Void
	{
		super.create();
		pause = new FlxTimer();
		i = 0;
		allowExit = false;
		
		msg1 = new FlxSprite(0, 0, "assets/images/howto.png");
		msg1.setPosition(FlxG.width / 2 - msg1.width / 2, FlxG.height / 2 - msg1.height / 2);
		msg2 = new FlxSprite(0, 0, "assets/images/controls.png");
		msg2.setPosition(FlxG.width / 2 - msg2.width / 2, FlxG.height / 2 - msg2.height / 2);
		
		pause.start(0.6, onTimeout);
		bg = new FlxSprite(0, 0, "assets/images/bg_back.png");
		add(bg);
		hint = new FlxText(0, FlxG.height / 2, FlxG.width, "PRESS ANY KEY TO START");
		hint.alignment = FlxTextAlign.CENTER;
		hint.size = 16;
		hint.color = FlxColor.LIME;

		add(msg1);
		add(new FlxSprite(0, 0, "assets/images/bg_front.png"));

	}
	
	function onTimeout(t:FlxTimer):Void
	{
			tween = FlxTween.tween(hint.scale, { x:1.1, y:1.1 }, 1, { ease:FlxEase.circOut, type:FlxTween.PINGPONG } );
			allowExit = true;
	}

	/**
	 * Function that is called when this state is destroyed - you might want to
	 * consider setting all objects this state uses to null to help garbage collection.
	 */
	override public function destroy():Void
	{
		super.destroy();
		tween.cancel();
		tween = null;
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
			i++;
			if (i == 1)
			{
				remove(msg1);
				add(msg2);
				allowExit = false;
				pause.start(0.6, onTimeout);
			}
			else if (i == 2)
			{
				remove(msg2);
				add(hint);
				allowExit = false;				
				pause.start(0.6,onTimeout);
			}
			else if (i == 3)
			{
				FlxG.switchState(new PlayState());
			}
		}		
	}
}