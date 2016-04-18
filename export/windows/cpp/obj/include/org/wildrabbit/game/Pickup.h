#ifndef INCLUDED_org_wildrabbit_game_Pickup
#define INCLUDED_org_wildrabbit_game_Pickup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS3(org,wildrabbit,game,Pickup)
namespace org{
namespace wildrabbit{
namespace game{


class HXCPP_CLASS_ATTRIBUTES  Pickup_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef Pickup_obj OBJ_;
		Pickup_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="org.wildrabbit.game.Pickup")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Pickup_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Pickup_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Pickup","\x9c","\x7d","\x61","\xb3"); }

		int mType;
		Dynamic mCallback;
		Dynamic &mCallback_dyn() { return mCallback;}
		::flixel::tweens::FlxTween mTween;
		::flixel::util::FlxTimer mLifeTimer;
		virtual Void init( Float x,Float y,Dynamic gfx,int idx,int type,int color,Dynamic callback);
		Dynamic init_dyn();

		virtual Void update( Float dt);

		virtual Void onTimeout( ::flixel::util::FlxTimer t);
		Dynamic onTimeout_dyn();

		virtual Void onAnimFinished( ::String str);
		Dynamic onAnimFinished_dyn();

		virtual Void onPicked( );
		Dynamic onPicked_dyn();

};

} // end namespace org
} // end namespace wildrabbit
} // end namespace game

#endif /* INCLUDED_org_wildrabbit_game_Pickup */ 
