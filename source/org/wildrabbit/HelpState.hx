package org.wildrabbit;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.input.gamepad.FlxGamepadInputID;
import flixel.text.FlxText;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;
import org.wildrabbit.Reg.InputScheme;

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
	var msg3:FlxSprite;
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
		msg2 = msg3 = null;
		
		pause.start(0.6, onTimeout);
		bg = new FlxSprite(0, 0, "assets/images/bg_back.png");
		add(bg);
		hint = new FlxText(0, FlxG.height / 2, FlxG.width, "PRESS ANY KEY TO START");
		hint.alignment = FlxTextAlign.CENTER;
		hint.size = 16;
		hint.color = FlxColor.fromString("0x0add00");

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
		if (allowExit)
		{
			if (i == 0)
			{
				if (FlxG.keys.justPressed.ANY || FlxG.mouse.justPressed  || (Reg.gamepadAvailable() && FlxG.gamepads.lastActive.justReleased.A))
				{
					remove(msg1);
					if (Reg.gamepadAvailable())
					{
						msg2 = new FlxSprite(0, 0, "assets/images/select_controls_gamepad.png");	
					}
					else 
					{
						msg2 = new FlxSprite(0, 0, "assets/images/select_controls_nogamepad.png");
					}				
					msg2.setPosition(FlxG.width / 2 - msg2.width / 2, FlxG.height / 2 - msg2.height / 2);
					add(msg2);
					
					allowExit = false;
					pause.start(0.6, onTimeout);
					i++;				
				}
			}
			else if (i == 1)
			{
				var selected:Bool = true;
				if (Reg.gamepadAvailable())
				{
					if (FlxG.gamepads.lastActive.justReleased.A || FlxG.keys.justPressed.ONE || FlxG.keys.justPressed.NUMPADONE) Reg.selectedInputScheme = InputScheme.Gamepad;
					else if (FlxG.keys.justPressed.TWO|| FlxG.keys.justPressed.NUMPADTWO) Reg.selectedInputScheme = InputScheme.WASD;
					else if (FlxG.keys.justPressed.THREE|| FlxG.keys.justPressed.NUMPADTHREE) Reg.selectedInputScheme = InputScheme.ZQSD;
					else selected = false;
				}
				else
				{
					if (FlxG.keys.justPressed.ONE || FlxG.keys.justPressed.NUMPADONE) Reg.selectedInputScheme = InputScheme.WASD;
					else if (FlxG.keys.justPressed.TWO|| FlxG.keys.justPressed.NUMPADTWO) Reg.selectedInputScheme = InputScheme.ZQSD;
					else selected = false;					
				}
				
				if (selected)
				{
					if (msg2 != null)
					{
						remove(msg2);
						msg2 = null;
					}
					
					switch(Reg.selectedInputScheme)
					{
						case InputScheme.Gamepad:
						{
							msg3 = new FlxSprite(0, 0, "assets/images/controls_gamepad.png");						
						}
						case InputScheme.WASD: 
						{ 
							msg3 = new FlxSprite(0, 0, "assets/images/controls_WASD.png");
						}
						case InputScheme.ZQSD: 
						{
							msg3 = new FlxSprite(0, 0, "assets/images/controls_ZQSD.png");
						}	
					}
					msg3.setPosition(FlxG.width / 2 - msg3.width / 2, FlxG.height / 2 - msg3.height / 2);
					add(msg3);
					
					allowExit = false;				
					pause.start(0.6, onTimeout);
					i++;					
				}
			}
			else if (i == 2 && (FlxG.keys.justPressed.ANY|| FlxG.mouse.justPressed  || (Reg.gamepadAvailable() && FlxG.gamepads.lastActive.justReleased.A)))
			{
				if (msg3 != null)				
				{
					remove(msg3);
					msg3 = null;
				}
				add(hint);
				allowExit = false;				
				pause.start(0.3, onTimeout);
				i++;				
			}			
			else if (i == 3 && (FlxG.keys.justPressed.ANY|| FlxG.mouse.justPressed  || (Reg.gamepadAvailable() && FlxG.gamepads.lastActive.justReleased.A)))
			{
				FlxG.switchState(new PlayState());
			}
		}		
	}
}