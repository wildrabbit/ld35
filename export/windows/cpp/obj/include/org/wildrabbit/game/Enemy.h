#ifndef INCLUDED_org_wildrabbit_game_Enemy
#define INCLUDED_org_wildrabbit_game_Enemy

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
HX_DECLARE_CLASS3(flixel,effects,particles,FlxTypedEmitter)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,_system,FlxSound)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS2(org,wildrabbit,FlxTimedEmitter)
HX_DECLARE_CLASS2(org,wildrabbit,PlayState)
HX_DECLARE_CLASS3(org,wildrabbit,game,Enemy)
HX_DECLARE_CLASS3(org,wildrabbit,game,Entity)
namespace org{
namespace wildrabbit{
namespace game{


class HXCPP_CLASS_ATTRIBUTES  Enemy_obj : public ::org::wildrabbit::game::Entity_obj{
	public:
		typedef ::org::wildrabbit::game::Entity_obj super;
		typedef Enemy_obj OBJ_;
		Enemy_obj();
		Void __construct(::org::wildrabbit::PlayState parent);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="org.wildrabbit.game.Enemy")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Enemy_obj > __new(::org::wildrabbit::PlayState parent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Enemy_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Enemy","\x28","\x82","\xa8","\x03"); }

		static void __boot();
		static int count;
		static Array< ::String > ShapeAnims;
		static int BASIC_ENEMY_SPEED;
		static int BULLET_SPEED;
		static Float BULLET_TTL;
		static Float SHOOT_COOLDOWN;
		static Float INITIAL_DELAY;
		bool mStunned;
		::flixel::util::FlxTimer mHitTimer;
		::flixel::tweens::FlxTween mDeadTween;
		::org::wildrabbit::FlxTimedEmitter mEmitter;
		::flixel::util::FlxTimer mShootTimer;
		bool mCanShoot;
		bool mCanPlayShoot;
		bool mWandering;
		::flixel::util::FlxTimer mWanderingTimer;
		::flixel::_system::FlxSound mNoHitSound;
		::flixel::_system::FlxSound mHitSound;
		::flixel::_system::FlxSound mDeathSound;
		::flixel::_system::FlxSound mShootSound;
		virtual Void start( int shape);
		Dynamic start_dyn();

		virtual Void switchShape( int shape);

		virtual Void update( Float elapsed);

		virtual Void updateCollisions( );
		Dynamic updateCollisions_dyn();

		virtual Void onHit( );
		Dynamic onHit_dyn();

		virtual Void onHitTimerFinished( ::flixel::util::FlxTimer timer);
		Dynamic onHitTimerFinished_dyn();

		virtual Void onDestroyed( );
		Dynamic onDestroyed_dyn();

		virtual Void onDead( ::flixel::tweens::FlxTween tween);
		Dynamic onDead_dyn();

		virtual Void onPlayerDied( );
		Dynamic onPlayerDied_dyn();

		virtual Void onDeathWanderTimeout( ::flixel::util::FlxTimer flxtimer);
		Dynamic onDeathWanderTimeout_dyn();

		virtual Void onPlayerResurrected( );
		Dynamic onPlayerResurrected_dyn();

		virtual Void onPlayerHit( ::flixel::math::FlxPoint pos);
		Dynamic onPlayerHit_dyn();

		virtual Void onHitWanderTimeout( ::flixel::util::FlxTimer timer);
		Dynamic onHitWanderTimeout_dyn();

		virtual Void shoot( Float theAngle);
		Dynamic shoot_dyn();

		virtual Void onCooldownFinished( ::flixel::util::FlxTimer timer);
		Dynamic onCooldownFinished_dyn();

};

} // end namespace org
} // end namespace wildrabbit
} // end namespace game

#endif /* INCLUDED_org_wildrabbit_game_Enemy */ 
