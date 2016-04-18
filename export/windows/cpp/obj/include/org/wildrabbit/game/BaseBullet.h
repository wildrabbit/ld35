#ifndef INCLUDED_org_wildrabbit_game_BaseBullet
#define INCLUDED_org_wildrabbit_game_BaseBullet

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
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(org,wildrabbit,PlayState)
HX_DECLARE_CLASS3(org,wildrabbit,game,BaseBullet)
HX_DECLARE_CLASS3(org,wildrabbit,game,Entity)
namespace org{
namespace wildrabbit{
namespace game{


class HXCPP_CLASS_ATTRIBUTES  BaseBullet_obj : public ::org::wildrabbit::game::Entity_obj{
	public:
		typedef ::org::wildrabbit::game::Entity_obj super;
		typedef BaseBullet_obj OBJ_;
		BaseBullet_obj();
		Void __construct(::org::wildrabbit::PlayState playState);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="org.wildrabbit.game.BaseBullet")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BaseBullet_obj > __new(::org::wildrabbit::PlayState playState);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BaseBullet_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("BaseBullet","\x53","\xd5","\x71","\xa3"); }

		static void __boot();
		static int count;
		::flixel::util::FlxTimer flxTimer;
		bool collided;
		::org::wildrabbit::game::Entity mOwner;
		int mSameDamage;
		int mOppositeDamage;
		::flixel::tweens::FlxTween t;
		virtual Void start( ::org::wildrabbit::game::Entity owner,Float ttl);
		Dynamic start_dyn();

		virtual Void switchShape( int shape);

		virtual Void doSwitchShape( int shape);
		Dynamic doSwitchShape_dyn();

		virtual Void doDie( );
		Dynamic doDie_dyn();

		virtual Void update( Float elapsed);

		virtual Void updateCollisions( );
		Dynamic updateCollisions_dyn();

		virtual Void onDead( ::flixel::tweens::FlxTween tween);
		Dynamic onDead_dyn();

};

} // end namespace org
} // end namespace wildrabbit
} // end namespace game

#endif /* INCLUDED_org_wildrabbit_game_BaseBullet */ 
