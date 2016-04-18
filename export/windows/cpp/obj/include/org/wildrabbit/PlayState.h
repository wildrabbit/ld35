#ifndef INCLUDED_org_wildrabbit_PlayState
#define INCLUDED_org_wildrabbit_PlayState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,addons,weapon,FlxTypedWeapon)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(org,wildrabbit,GameInput)
HX_DECLARE_CLASS2(org,wildrabbit,PlayState)
HX_DECLARE_CLASS3(org,wildrabbit,game,BaseBullet)
HX_DECLARE_CLASS3(org,wildrabbit,game,Enemy)
HX_DECLARE_CLASS3(org,wildrabbit,game,Entity)
HX_DECLARE_CLASS3(org,wildrabbit,game,Pickup)
HX_DECLARE_CLASS3(org,wildrabbit,game,Ship)
HX_DECLARE_CLASS3(org,wildrabbit,game,World)
namespace org{
namespace wildrabbit{


class HXCPP_CLASS_ATTRIBUTES  PlayState_obj : public ::flixel::FlxState_obj{
	public:
		typedef ::flixel::FlxState_obj super;
		typedef PlayState_obj OBJ_;
		PlayState_obj();
		Void __construct(Dynamic MaxSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="org.wildrabbit.PlayState")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PlayState_obj > __new(Dynamic MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PlayState_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("PlayState","\x5d","\x83","\xc2","\x46"); }

		static void __boot();
		static cpp::ArrayBase PickupTypes;
		static Array< int > PickupTypeKeys;
		static Array< int > PickupColours;
		static int MAX_BULLETS;
		static int MAX_ENEMIES;
		static int KILLS_TO_LIFE;
		static int KILLS_TO_MULTIPLIER;
		::org::wildrabbit::game::World mWorld;
		::org::wildrabbit::game::Ship mPlayerShip;
		::flixel::group::FlxTypedGroup mBullets;
		::flixel::addons::weapon::FlxTypedWeapon mPlayerWeapon;
		::flixel::group::FlxTypedGroup mEnemies;
		::flixel::group::FlxTypedGroup mPickups;
		Float mSpawnDelay;
		::flixel::util::FlxTimer mSpawnTimer;
		::flixel::text::FlxText mHealth;
		::flixel::text::FlxText mEnergy;
		::flixel::text::FlxText mLives;
		::flixel::text::FlxText mScore;
		::flixel::text::FlxText mPlaytime;
		::flixel::text::FlxText mMultiplierText;
		::flixel::text::FlxText mBlasterHint;
		int mScoreMultiplier;
		int mToNextLife;
		int mToNextMultiplier;
		bool mPause;
		::flixel::group::FlxTypedGroup mDeathEmitters;
		::org::wildrabbit::GameInput mInput;
		::flixel::FlxSprite mHalo;
		::flixel::FlxSprite mPrev;
		::flixel::FlxSprite mCurrent;
		::flixel::FlxSprite mNext;
		virtual Void create( );

		virtual Void updateShapeHint( );
		Dynamic updateShapeHint_dyn();

		virtual bool isHardMode( );
		Dynamic isHardMode_dyn();

		virtual Void onSpawnTimeout( ::flixel::util::FlxTimer timer);
		Dynamic onSpawnTimeout_dyn();

		virtual Void destroy( );

		virtual Void update( Float elapsed);

		virtual Void onPlayerPickup( ::org::wildrabbit::game::Ship player,::org::wildrabbit::game::Pickup pickup);
		Dynamic onPlayerPickup_dyn();

		virtual Void onBulletHit( ::org::wildrabbit::game::BaseBullet bullet,::org::wildrabbit::game::Entity entity);
		Dynamic onBulletHit_dyn();

		virtual Void onBulletPlayerHit( ::org::wildrabbit::game::BaseBullet bullet,::org::wildrabbit::game::Ship entity);
		Dynamic onBulletPlayerHit_dyn();

		virtual Void playerTakesDamage( ::org::wildrabbit::game::Entity source,Float dmg);
		Dynamic playerTakesDamage_dyn();

		virtual Void startEmitterParticles( ::org::wildrabbit::game::Entity entity);
		Dynamic startEmitterParticles_dyn();

		virtual Void onPlayerEnemyCollision( ::org::wildrabbit::game::Ship player,::org::wildrabbit::game::Enemy enemy);
		Dynamic onPlayerEnemyCollision_dyn();

		virtual Void onPlayerDied( );
		Dynamic onPlayerDied_dyn();

		virtual Void onPlayerHit( );
		Dynamic onPlayerHit_dyn();

		virtual Void onPlayerBlast( );
		Dynamic onPlayerBlast_dyn();

		virtual Void onEnemyKilled( ::org::wildrabbit::game::Enemy e);
		Dynamic onEnemyKilled_dyn();

		virtual bool spawnPickup( int type);
		Dynamic spawnPickup_dyn();

		virtual Void onLife( );
		Dynamic onLife_dyn();

		virtual Void onShapeShift( );
		Dynamic onShapeShift_dyn();

};

} // end namespace org
} // end namespace wildrabbit

#endif /* INCLUDED_org_wildrabbit_PlayState */ 
