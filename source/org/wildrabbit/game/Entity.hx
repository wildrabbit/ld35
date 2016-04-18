package org.wildrabbit.game;
import flixel.FlxSprite;
import flixel.math.FlxVector;
import flixel.util.FlxColor;
import org.wildrabbit.PlayState;
import org.wildrabbit.PlayState.Shape;

/**
 * ...
 * @author ith1ldin
 */
class Entity extends FlxSprite
{
	public var mShape:Shape;
	public var mParent:PlayState;
	public var mSpeed:Float;
	public var mID:Int;
	public var maxHealth:Int;
	
	public static var ShapeColours:Array<FlxColor> = [FlxColor.ORANGE, FlxColor.PURPLE, FlxColor.LIME];
	
	public function new(parent:PlayState, speed:Float) 
	{
		super(0, 0);
		mParent = parent;
		mSpeed = speed;
		velocity = FlxVector.get();
	}
	
	public function switchShape(shape:Shape):Void
	{
		mShape = shape;
		var idx = cast(shape, Int);
		color = ShapeColours[idx];			
	}
	
	override public function update(elapsed:Float):Void	
	{
		super.update(elapsed);
	}
	
	override public function destroy():Void
	{
		velocity.put();
	}
}