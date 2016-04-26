package org.wildrabbit;

import flixel.FlxG;
import flixel.FlxState;
import flixel.FlxSprite;
import flixel.addons.display.FlxBackdrop;
import flixel.input.gamepad.FlxGamepadButton;
import flixel.input.gamepad.FlxGamepadInputID;
import flixel.text.FlxText;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxColor;
import flixel.util.FlxStringUtil;
import flixel.util.FlxTimer;
import org.wildrabbit.Reg;

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
			allowExit = true;
		});
		
		add(new FlxSprite(0, 0, "assets/images/bg_back.png"));
		hint = new FlxText(0, FlxG.height / 2 - 72, FlxG.width, "THANKS FOR PLAYING!", 36);
		hint.alignment = FlxTextAlign.CENTER;
		hint.color = FlxColor.ORANGE;
		hint.scale.set(0.8, 0.8);
		add(hint);
		tween = FlxTween.tween(hint.scale, { x:1, y:1 }, 1, { ease:FlxEase.circOut, type:FlxTween.ONESHOT } );
		
		var t:FlxText = new FlxText(0, FlxG.height / 2 , FlxG.width, "Your score: " + Reg.score + ", Highest: " + Reg.highScore, 14);
		t.alignment = FlxTextAlign.CENTER;
		add(t);
		t = new FlxText(0, FlxG.height / 2 + 20, FlxG.width, "Your playtime: " + FlxStringUtil.formatTime(Reg.time,true) + ", Highest: " + FlxStringUtil.formatTime(Reg.maxTime,true), 14);
		t.alignment = FlxTextAlign.CENTER;
		add(t);
		t = new FlxText(0, FlxG.height / 2 + 50, FlxG.width, getHintText(), 14);
		t.alignment = FlxTextAlign.CENTER;
		add(t);
		
		
		add(new FlxSprite(0, 0, "assets/images/bg_front.png"));
		FlxG.sound.music.stop();
		Reg.cursorSprite = new FlxSprite(0, 0, "assets/images/cursor.png");		
		FlxG.mouse.load(Reg.cursorSprite.pixels);
	}
	public function getHintText():String
	{
		if (Reg.selectedInputScheme == InputScheme.Gamepad)
		{
			return ("Press START to restart, BACK to go back to the menu");
		}
		else
		{
			return ("Press SPACE to restart, ESC to go back to the menu");
		}
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
		FlxG.mouse.unload();
	}

	/**
	 * Function that is called once every frame.
	 */
	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
		if (allowExit)
		{
			var isGamepad:Bool = Reg.selectedInputScheme == InputScheme.Gamepad;
			if (isGamepad && FlxG.gamepads.anyJustPressed(FlxGamepadInputID.START) || (!isGamepad && FlxG.keys.justReleased.SPACE))
			{
				FlxG.sound.play("assets/sounds/click.wav");				
				FlxG.switchState(new PlayState());				
			}
			else if (isGamepad && FlxG.gamepads.anyJustPressed(FlxGamepadInputID.BACK) || (!isGamepad && FlxG.keys.justReleased.ESCAPE))
			{
				FlxG.sound.play("assets/sounds/click.wav");					
				FlxG.switchState(new MenuState());				
			}
		}		
	}
	
}