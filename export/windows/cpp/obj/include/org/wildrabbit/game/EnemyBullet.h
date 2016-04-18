#ifndef INCLUDED_org_wildrabbit_game_EnemyBullet
#define INCLUDED_org_wildrabbit_game_EnemyBullet

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
HX_DECLARE_CLASS3(org,wildrabbit,game,EnemyBullet)
HX_DECLARE_CLASS3(org,wildrabbit,game,Entity)
namespace org{
namespace wildrabbit{
namespace game{


class HXCPP_CLASS_ATTRIBUTES  EnemyBullet_obj : public ::org::wildrabbit::game::BaseBullet_obj{
	public:
		typedef ::org::wildrabbit::game::BaseBullet_obj super;
		typedef EnemyBullet_obj OBJ_;
		EnemyBullet_obj();
		Void __construct(::org::wildrabbit::PlayState playState);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="org.wildrabbit.game.EnemyBullet")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EnemyBullet_obj > __new(::org::wildrabbit::PlayState playState);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EnemyBullet_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("EnemyBullet","\x8a","\x96","\x75","\xa0"); }

		virtual Void doSwitchShape( int shape);

};

} // end namespace org
} // end namespace wildrabbit
} // end namespace game

#endif /* INCLUDED_org_wildrabbit_game_EnemyBullet */ 
