package org.wildrabbit;

import flixel.FlxG;
import flixel.util.FlxSave;
import flixel.FlxSprite;

 
 @:enum
 abstract InputScheme(Int) from Int to Int
 {
	 var Gamepad = 0;
	 var WASD = 1;
	 var ZQSD = 2;
 }

/**
 * Handy, pre-built Registry class that can be used to store
 * references to objects and other things for quick-access. Feel
 * free to simply ignore it or change it in any way you like.
 */
class Reg
{
	public static var currentVersion:String = "0.0.2";
	public static var selectedInputScheme:InputScheme = InputScheme.WASD;
	public static function gamepadAvailable():Bool
	{
		return FlxG.gamepads.lastActive != null;
	}
	
	public static var cursorSprite:FlxSprite = null;
	
	/**
	 * Generic levels Array that can be used for cross-state stuff.
	 * Example usage: Storing the levels of a platformer.
	 */
	public static var levels:Array<Dynamic> = [];
	/**
	 * Generic level variable that can be used for cross-state stuff.
	 * Example usage: Storing the current level number.
	 */
	public static var level:Int = 0;
	/**
	 * Generic scores Array that can be used for cross-state stuff.
	 * Example usage: Storing the scores for level.
	 */
	public static var scores:Array<Dynamic> = [];
	/**
	 * Generic score variable that can be used for cross-state stuff.
	 * Example usage: Storing the current score.
	 */
	public static var score:Int = 0;
	
	public static var highScore:Int = 0;
	
	public static var time:Float = 0;
	public static var maxTime:Float = 0;
	/**
	 * Generic bucket for storing different FlxSaves.
	 * Especially useful for setting up multiple save slots.
	 */
	public static var saves:Array<FlxSave> = [];
}