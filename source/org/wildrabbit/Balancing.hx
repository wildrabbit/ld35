package org.wildrabbit;
import org.wildrabbit.game.BaseBullet;
import org.wildrabbit.game.Enemy;
import org.wildrabbit.game.Ship;
import flixel.util.helpers.FlxBounds;


typedef BalancingConfig = 
{
	var killsToNextLifePickup:Int;
	var killsToNextScoreMultiplier:Int;
	var secondsBetweenLevels:Float;
	var maxDiffLevel:Int;

	var minEnemyWaveSizes:Array<Int>;
	var maxEnemyWaveSizes:Array<Int>;
	
	var playerSafeSpace:Array<Float>;
	
	var enemySpeedMultipliers:Array<Float>;
	var enemyRatesOfFire:Array<Float>;	
	
	var bulletSpeedMultipliers:Array<Float>;
};
/**
 * ...
 * @author ith1ldin
 */
class Balancing
{
	public static var KILLS_TO_LIFE:Int = 10;
	public static var KILLS_TO_MULTIPLIER:Int = 20;
	
	public static var mConfig:BalancingConfig = { 
		killsToNextLifePickup:KILLS_TO_LIFE, 
		killsToNextScoreMultiplier:KILLS_TO_MULTIPLIER, 
		secondsBetweenLevels:60, 
		maxDiffLevel:4 ,
		enemySpeedMultipliers:[1, 1.2, 1.4, 1.6],
		enemyRatesOfFire:[1, 0.8, 0.76, 0.65],
		playerSafeSpace:[6, 4, 3, 3],
		minEnemyWaveSizes:[1, 2, 3,4],
		maxEnemyWaveSizes:[4, 6, 6, 7],
		bulletSpeedMultipliers:[1, 1.2, 1.4, 1.6],
	};
	
	public static function setConfig(config:BalancingConfig):Void
	{
		mConfig = config;
	}
	
	public static function getDiffLevel(ship:Ship):Int
	{
		return Math.floor(Math.min((ship.mPlayTime / mConfig.secondsBetweenLevels ), mConfig.maxDiffLevel));
	}
	
	public static function toNextLife(diffLevel:Int):Int
	{
		return mConfig.killsToNextLifePickup * (1 + diffLevel);
	}
	
	public static function getEnemyWaveSize(diffLevel:Int):FlxBounds<Int>
	{
		var idx:Int = Math.floor(Math.min(diffLevel, mConfig.minEnemyWaveSizes.length - 1));
		return new FlxBounds<Int>(mConfig.minEnemyWaveSizes[idx],mConfig.maxEnemyWaveSizes[idx]);
	}
	
	public static function getPlayerLeeway(diffLevel:Int, ship:Ship):Float 
	{		
		return ship.width * mConfig.playerSafeSpace[Math.floor(Math.min(diffLevel, mConfig.playerSafeSpace.length - 1))];
	}
	
	//----------------------------------------
	// Enemy-related
	//----------------------------------------
	public static function getSpeed(enemy:Enemy, diffLevel:Int):Float
	{
		var idx:Int = Math.floor(Math.min(mConfig.enemySpeedMultipliers.length - 1, diffLevel));
		return enemy.baseSpeed * mConfig.enemySpeedMultipliers[idx];
	}
	
	public static function getBulletSpeed(bullet:BaseBullet, diffLevel:Int):Float
	{
		var idx:Int = Math.floor(Math.min(mConfig.bulletSpeedMultipliers.length - 1, diffLevel));
		return bullet.baseSpeed * mConfig.bulletSpeedMultipliers[idx];
	}
	
	public static function getRateOfFire(enemy:Enemy, diffLevel:Int):Float
	{
		var idx:Int = Math.floor(Math.min(mConfig.enemyRatesOfFire.length - 1, diffLevel));
		return enemy.baseCooldown * mConfig.enemyRatesOfFire[idx];
	}
}