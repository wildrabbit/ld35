#ifndef INCLUDED_org_wildrabbit_game_Ship
#define INCLUDED_org_wildrabbit_game_Ship

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_org_wildrabbit_game_Entity
#include <org/wildrabbit/game/Entity.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,addons,effects,FlxTrail)
HX_DECLARE_CLASS3(flixel,effects,particles,FlxTypedEmitter)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,_system,FlxSound)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS2(org,wildrabbit,FlxTimedEmitter)
HX_DECLARE_CLASS2(org,wildrabbit,PlayState)
HX_DECLARE_CLASS3(org,wildrabbit,game,Entity)
HX_DECLARE_CLASS3(org,wildrabbit,game,Ship)
HX_DECLARE_CLASS3(org,wildrabbit,game,World)
namespace org{
namespace wildrabbit{
namespace game{


class HXCPP_CLASS_ATTRIBUTES  Ship_obj : public ::org::wildrabbit::game::Entity_obj{
	public:
		typedef ::org::wildrabbit::game::Entity_obj super;
		typedef Ship_obj OBJ_;
		Ship_obj();
		Void __construct(::org::wildrabbit::PlayState parent,Float x,Float y,Float speed);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="org.wildrabbit.game.Ship")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Ship_obj > __new(::org::wildrabbit::PlayState parent,Float x,Float y,Float speed);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Ship_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Ship","\xdc","\xfb","\x2b","\x37"); }

		static void __boot();
		static Float SHOOT_COOLDOWN;
		static Float BULLET_TTL;
		static Float BULLET_SPEED;
		static Array< ::String > ShapeAnims;
		int mLives;
		int mStartLives;
		int mKills;
		int mScore;
		Float mPlayTime;
		int mEnergy;
		int mMaxEnergy;
		::flixel::math::FlxPoint mWeaponOffset;
		::org::wildrabbit::game::World mWorld;
		bool mCanShoot;
		::flixel::util::FlxTimer mShootTimer;
		bool mCanPlayShoot;
		::flixel::util::FlxTimer mShootSoundTimer;
		::flixel::util::FlxTimer mHitTimer;
		::org::wildrabbit::FlxTimedEmitter mEmitter;
		bool mJustCollided;
		Float HP;
		::flixel::_system::FlxSound mShootDoubleSound;
		::flixel::_system::FlxSound mHitSound;
		::flixel::_system::FlxSound mDeathSound;
		::flixel::FlxSprite mHalo;
		virtual ::flixel::FlxSprite get_halo( );
		Dynamic get_halo_dyn();

		virtual ::flixel::FlxSprite set_halo( ::flixel::FlxSprite value);
		Dynamic set_halo_dyn();

		::flixel::addons::effects::FlxTrail mTrail;
		virtual ::flixel::addons::effects::FlxTrail get_trail( );
		Dynamic get_trail_dyn();

		virtual ::flixel::addons::effects::FlxTrail set_trail( ::flixel::addons::effects::FlxTrail value);
		Dynamic set_trail_dyn();

		virtual Void switchShape( int nextShape);

		virtual Void showHalo( Float theAlpha,Float theScale,Float length,Dynamic startScale);
		Dynamic showHalo_dyn();

		virtual Void update( Float elapsed);

		virtual Void shoot( Float theAngle);
		Dynamic shoot_dyn();

		virtual Void updateOffset( );
		Dynamic updateOffset_dyn();

		virtual ::flixel::math::FlxPoint getOffset( );
		Dynamic getOffset_dyn();

		virtual Void onCooldownFinished( ::flixel::util::FlxTimer timer);
		Dynamic onCooldownFinished_dyn();

		virtual Void updateCollisions( );
		Dynamic updateCollisions_dyn();

		virtual Void onDeath( );
		Dynamic onDeath_dyn();

		virtual Void onHit( ::org::wildrabbit::game::Entity entity);
		Dynamic onHit_dyn();

		virtual Void onHitTimeout( ::flixel::util::FlxTimer timer);
		Dynamic onHitTimeout_dyn();

		virtual Void absorbEnergy( int amount);
		Dynamic absorbEnergy_dyn();

		virtual Void blast( );
		Dynamic blast_dyn();

};

} // end namespace org
} // end namespace wildrabbit
} // end namespace game

#endif /* INCLUDED_org_wildrabbit_game_Ship */ 
