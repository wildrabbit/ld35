package org.wildrabbit.game;

import flixel.FlxSprite;
import flixel.math.FlxPoint;
import flixel.system.FlxAssets.FlxGraphicAsset;

/**
 * ...
 * @author ith1ldin
 */
class World extends FlxSprite
{
	public var mRadius:Float;
	public var mCenter:FlxPoint;
	public function new(x:Float=0, y:Float=0, radius:Float) 
	{
		mRadius = radius;
		mCenter = FlxPoint.get(x,y);		
		super(x - radius, y - radius);
	}
	
	public function setCenter(newX:Float, newY:Float):Void
	{
		mCenter.x = newX;
		mCenter.y = newY;
		setPosition(newX - mRadius, newY - mRadius);
	}
	
}