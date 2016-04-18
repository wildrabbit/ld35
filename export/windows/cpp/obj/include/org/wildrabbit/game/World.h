#ifndef INCLUDED_org_wildrabbit_game_World
#define INCLUDED_org_wildrabbit_game_World

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS3(org,wildrabbit,game,World)
namespace org{
namespace wildrabbit{
namespace game{


class HXCPP_CLASS_ATTRIBUTES  World_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef World_obj OBJ_;
		World_obj();
		Void __construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,Float radius);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="org.wildrabbit.game.World")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< World_obj > __new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,Float radius);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~World_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("World","\x32","\x06","\x92","\x61"); }

		Float mRadius;
		::flixel::math::FlxPoint mCenter;
		virtual Void setCenter( Float newX,Float newY);
		Dynamic setCenter_dyn();

};

} // end namespace org
} // end namespace wildrabbit
} // end namespace game

#endif /* INCLUDED_org_wildrabbit_game_World */ 
