#ifndef INCLUDED_flixel_input_touch_FlxTouch
#define INCLUDED_flixel_input_touch_FlxTouch

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS2(flixel,input,FlxInput)
HX_DECLARE_CLASS2(flixel,input,FlxPointer)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS3(flixel,input,touch,FlxTouch)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)
namespace flixel{
namespace input{
namespace touch{


class HXCPP_CLASS_ATTRIBUTES  FlxTouch_obj : public ::flixel::input::FlxPointer_obj{
	public:
		typedef ::flixel::input::FlxPointer_obj super;
		typedef FlxTouch_obj OBJ_;
		FlxTouch_obj();
		Void __construct(hx::Null< int >  __o_x,hx::Null< int >  __o_y,hx::Null< int >  __o_pointID);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.input.touch.FlxTouch")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxTouch_obj > __new(hx::Null< int >  __o_x,hx::Null< int >  __o_y,hx::Null< int >  __o_pointID);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxTouch_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::flixel::util::IFlxDestroyable_obj *();
		operator ::flixel::input::IFlxInput_obj *();
		::String __ToString() const { return HX_HCSTRING("FlxTouch","\x0d","\x22","\x0d","\xd1"); }

		::flixel::input::FlxInput input;
		::openfl::_legacy::geom::Point flashPoint;
		::flixel::math::FlxPoint justPressedPosition;
		Float justPressedTimeInTicks;
		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void recycle( int x,int y,int pointID);
		Dynamic recycle_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void setXY( int X,int Y);
		Dynamic setXY_dyn();

		virtual int get_touchPointID( );
		Dynamic get_touchPointID_dyn();

		virtual bool get_justReleased( );
		Dynamic get_justReleased_dyn();

		virtual bool get_released( );
		Dynamic get_released_dyn();

		virtual bool get_pressed( );
		Dynamic get_pressed_dyn();

		virtual bool get_justPressed( );
		Dynamic get_justPressed_dyn();

};

} // end namespace flixel
} // end namespace input
} // end namespace touch

#endif /* INCLUDED_flixel_input_touch_FlxTouch */ 
