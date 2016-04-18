#ifndef INCLUDED_org_wildrabbit_game_Bullet
#define INCLUDED_org_wildrabbit_game_Bullet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_org_wildrabbit_game_BaseBullet
#include <org/wildrabbit/game/BaseBullet.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(org,wildrabbit,PlayState)
HX_DECLARE_CLASS3(org,wildrabbit,game,BaseBullet)
HX_DECLARE_CLASS3(org,wildrabbit,game,Bullet)
HX_DECLARE_CLASS3(org,wildrabbit,game,Entity)
namespace org{
namespace wildrabbit{
namespace game{


class HXCPP_CLASS_ATTRIBUTES  Bullet_obj : public ::org::wildrabbit::game::BaseBullet_obj{
	public:
		typedef ::org::wildrabbit::game::BaseBullet_obj super;
		typedef Bullet_obj OBJ_;
		Bullet_obj();
		Void __construct(::org::wildrabbit::PlayState playState);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="org.wildrabbit.game.Bullet")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Bullet_obj > __new(::org::wildrabbit::PlayState playState);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Bullet_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Bullet","\x62","\x06","\x25","\x09"); }

		static void __boot();
		static Array< ::String > ShapeAnims;
		virtual Void doDie( );

		virtual Void doSwitchShape( int shape);

};

} // end namespace org
} // end namespace wildrabbit
} // end namespace game

#endif /* INCLUDED_org_wildrabbit_game_Bullet */ 
