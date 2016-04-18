package org.wildrabbit;
import flixel.FlxG;
import flixel.input.FlxPointer;
import flixel.input.gamepad.FlxGamepad;
import flixel.math.FlxAngle;
import flixel.math.FlxPoint;
import flixel.math.FlxVector;
import org.wildrabbit.game.Entity;

/**
 * ...
 * @author ith1ldin
 */
class GameInput
{
	public var xValue:Float;
	public var yValue:Float;
	public var next:Bool;
	public var prev:Bool;
	
	public var shoot:Bool;
	public var blast:Bool;
	
	public var gamepadEnabled:Bool;
	public var aimDirection:Float;
	
	
	public var togglePause:Bool;
	public var reset:Bool;
	public var toggleMute:Bool;
	
	
	public function new() 
	{
		
	}
	
	public function gatherInputs(player:Entity):Void
	{
		xValue = yValue = 0;
		next = prev = shoot = blast = reset = false;
		gamepadEnabled = false;
/*		#if !FLX_NO_GAMEPAD		
		var gamepad:FlxGamepad = FlxG.gamepads.lastActive;
		gamepadEnabled = gamepad != null && gamepad.anyInput();
		if (gamepadEnabled)
		{
			xValue = gamepad.analog.value.LEFT_STICK_X;
			yValue = gamepad.analog.value.LEFT_STICK_Y;
			
			next = gamepad.justPressed.RIGHT_TRIGGER;
			prev = gamepad.justPressed.LEFT_TRIGGER;
			
			//shoot = gamepad.pressed.A;
			
			var aim:FlxVector =  new FlxVector(gamepad.analog.value.RIGHT_STICK_X, gamepad.analog.value.RIGHT_STICK_Y);
			shoot = aim.length > 0.1;
			
			blast = gamepad.justPressed.A;

			aim.normalize();
			aimDirection = aim.degrees;
			
		}		
		#end*/
		
		if (!gamepadEnabled)
		{
			aimDirection = FlxAngle.angleBetweenMouse(player);
		}
		
		toggleMute = FlxG.keys.justReleased.M;
		togglePause = FlxG.keys.justReleased.P || FlxG.keys.justReleased.ESCAPE;
		if (FlxG.keys.pressed.A || FlxG.keys.pressed.LEFT)
		{
			xValue = -1;
		}
		else if (FlxG.keys.pressed.D || FlxG.keys.pressed.RIGHT)
		{
			xValue = 1;
		}
		if (FlxG.keys.pressed.S || FlxG.keys.pressed.DOWN)
		{
			yValue = 1;
		}
		else if (FlxG.keys.pressed.W || FlxG.keys.pressed.UP)
		{
			yValue = -1;
		}
		
		if (!prev) prev = (FlxG.keys.justPressed.Q || FlxG.mouse.wheel < 0);
		if (!next) next = (FlxG.keys.justPressed.E || FlxG.mouse.wheel > 0);
		if (!blast) blast = FlxG.keys.justPressed.SPACE || FlxG.mouse.justPressedRight;		
		if (!shoot) shoot = FlxG.mouse.pressed;
		if (!reset) reset = FlxG.keys.justPressed.R;
	}
}