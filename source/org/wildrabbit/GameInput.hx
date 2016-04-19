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
	public var toggleGodMode:Bool;
	
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
	
	private function new():Void{}
	public function gatherInputs(player:Entity):Void
	{
		toggleGodMode = FlxG.keys.justReleased.F1;
	}
}

class KeyMouseInput extends GameInput
{	
	public var mWASD:Bool;
	public function new(wasd:Bool = true)
	{
		super();
		mWASD = wasd;
	}
	override public function gatherInputs(player:Entity):Void
	{
		super.gatherInputs(player);
		xValue = yValue = 0;
		next = prev = shoot = blast = reset = false;		

		aimDirection = FlxAngle.angleBetweenMouse(player);
		toggleMute = FlxG.keys.justReleased.M;
		togglePause = FlxG.keys.justReleased.P || FlxG.keys.justReleased.ESCAPE;
		if (FlxG.keys.pressed.LEFT || (FlxG.keys.pressed.A && mWASD || FlxG.keys.pressed.Q && !mWASD))
		{
			xValue = -1;
		}
		else if (FlxG.keys.pressed.RIGHT || FlxG.keys.pressed.D)
		{
			xValue = 1;
		}
		if (FlxG.keys.pressed.DOWN || FlxG.keys.pressed.S)
		{
			yValue = 1;
		}
		else if (FlxG.keys.pressed.UP || (FlxG.keys.pressed.Z && !mWASD || FlxG.keys.pressed.W && mWASD))
		{
			yValue = -1;
		}
		
		if (!prev) prev = (mWASD && FlxG.keys.justPressed.Q  || !mWASD && FlxG.keys.justPressed.A)|| FlxG.mouse.wheel < 0;
		if (!next) next = (FlxG.keys.justPressed.E || FlxG.mouse.wheel > 0);
		if (!blast) blast = FlxG.keys.justPressed.SPACE || FlxG.mouse.justPressedRight;		
		if (!shoot) shoot = FlxG.mouse.pressed;
		if (!reset) reset = FlxG.keys.justPressed.R;
	}
}

class GamepadInput extends GameInput
{
	public function new()
	{
		super();
	}
	override public function gatherInputs(player:Entity):Void
	{	
		super.gatherInputs(player);
		xValue = yValue = 0;
		next = prev = shoot = blast = reset = false;
		togglePause = toggleMute = false;
		
		#if !FLX_NO_GAMEPAD		
		var gamepad:FlxGamepad = FlxG.gamepads.lastActive;
		gamepadEnabled = gamepad != null;
		if (gamepadEnabled)
		{
			xValue = gamepad.analog.value.LEFT_STICK_X;
			yValue = gamepad.analog.value.LEFT_STICK_Y;
			
			next = gamepad.justPressed.RIGHT_TRIGGER;
			prev = gamepad.justPressed.LEFT_TRIGGER;
			
			//shoot = gamepad.pressed.A;
			
			var aim:FlxVector =  new FlxVector(gamepad.analog.value.RIGHT_STICK_X, gamepad.analog.value.RIGHT_STICK_Y);
			shoot = aim.length > 0.5;
			
			blast = gamepad.justPressed.A;

			aim.normalize();
			aimDirection = aim.radians;
			
			toggleMute = gamepad.justPressed.BACK;
			togglePause = gamepad.justPressed.START;

			reset = gamepad.justPressed.LEFT_SHOULDER && gamepad.justPressed.RIGHT_SHOULDER;
		}		
		#end
	}
}