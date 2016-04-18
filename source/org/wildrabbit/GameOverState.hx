package org.wildrabbit;

import flixel.FlxG;
import flixel.FlxState;
import flixel.FlxSprite;
import flixel.addons.display.FlxBackdrop;
import flixel.text.FlxText;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxColor;
import flixel.util.FlxStringUtil;
import flixel.util.FlxTimer;

/**
 * ...
 * @author ith1ldin
 */
class GameOverState extends FlxState
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
		
		add(new FlxSprite(0, 0, "assets/images/bg_back.png"));
		hint = new FlxText(0, FlxG.height / 2, FlxG.width, "THANKS FOR PLAYING!");
		hint.alignment = FlxTextAlign.CENTER;
		hint.visible = false;
		hint.size = 14;
		hint.color = FlxColor.ORANGE;
		add(hint);
		
		var t:FlxText = new FlxText(0, FlxG.height / 2 + 20, FlxG.width, "Your score: " + Reg.score + ", Highest: " + Reg.highScore, 14);
		t.alignment = FlxTextAlign.CENTER;
		add(t);
		t = new FlxText(0, FlxG.height / 2 + 40, FlxG.width, "Your playtime: " + FlxStringUtil.formatTime(Reg.time,true) + ", Highest: " + FlxStringUtil.formatTime(Reg.maxTime,true), 14);
		t.alignment = FlxTextAlign.CENTER;
		add(t);
		
		add(new FlxSprite(0, 0, "assets/images/bg_front.png"));
		FlxG.sound.music.stop();
	}

	function getFormat(secs:Float):String
	{
		var remSecs:Float = secs - Math.ffloor(secs);
		var cents:Int= Math.floor(remSecs * 100);
		return Math.floor(secs) + "." + cents + "s";
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
			FlxG.switchState(new MenuState());
		}		
	}
	
}