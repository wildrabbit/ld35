#ifndef INCLUDED_org_wildrabbit_GameInput
#define INCLUDED_org_wildrabbit_GameInput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(org,wildrabbit,GameInput)
HX_DECLARE_CLASS3(org,wildrabbit,game,Entity)
namespace org{
namespace wildrabbit{


class HXCPP_CLASS_ATTRIBUTES  GameInput_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GameInput_obj OBJ_;
		GameInput_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="org.wildrabbit.GameInput")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GameInput_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GameInput_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("GameInput","\x98","\x92","\x0b","\x95"); }

		Float xValue;
		Float yValue;
		bool next;
		bool prev;
		bool shoot;
		bool blast;
		bool gamepadEnabled;
		Float aimDirection;
		bool togglePause;
		bool reset;
		bool toggleMute;
		virtual Void gatherInputs( ::org::wildrabbit::game::Entity player);
		Dynamic gatherInputs_dyn();

};

} // end namespace org
} // end namespace wildrabbit

#endif /* INCLUDED_org_wildrabbit_GameInput */ 
