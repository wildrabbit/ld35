#ifndef INCLUDED_org_wildrabbit_HelpState
#define INCLUDED_org_wildrabbit_HelpState

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
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(org,wildrabbit,HelpState)
namespace org{
namespace wildrabbit{


class HXCPP_CLASS_ATTRIBUTES  HelpState_obj : public ::flixel::FlxState_obj{
	public:
		typedef ::flixel::FlxState_obj super;
		typedef HelpState_obj OBJ_;
		HelpState_obj();
		Void __construct(Dynamic MaxSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="org.wildrabbit.HelpState")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< HelpState_obj > __new(Dynamic MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HelpState_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("HelpState","\x70","\xf7","\x0b","\x4f"); }

		::flixel::FlxSprite bg;
		::flixel::text::FlxText hint;
		::flixel::util::FlxTimer pause;
		bool allowExit;
		::flixel::tweens::FlxTween tween;
		::flixel::FlxSprite msg1;
		::flixel::FlxSprite msg2;
		int i;
		virtual Void create( );

		virtual Void onTimeout( ::flixel::util::FlxTimer t);
		Dynamic onTimeout_dyn();

		virtual Void destroy( );

		virtual Void update( Float elapsed);

};

} // end namespace org
} // end namespace wildrabbit

#endif /* INCLUDED_org_wildrabbit_HelpState */ 
