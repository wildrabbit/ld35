#ifndef INCLUDED_openfl_ui__MultitouchInputMode_MultitouchInputMode_Impl_
#define INCLUDED_openfl_ui__MultitouchInputMode_MultitouchInputMode_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,ui,_MultitouchInputMode,MultitouchInputMode_Impl_)
namespace openfl{
namespace ui{
namespace _MultitouchInputMode{


class HXCPP_CLASS_ATTRIBUTES  MultitouchInputMode_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MultitouchInputMode_Impl__obj OBJ_;
		MultitouchInputMode_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl.ui._MultitouchInputMode.MultitouchInputMode_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MultitouchInputMode_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MultitouchInputMode_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("MultitouchInputMode_Impl_","\xc7","\x50","\xff","\xd5"); }

		static void __boot();
		static Dynamic GESTURE;
		static Dynamic NONE;
		static Dynamic TOUCH_POINT;
		static Dynamic fromString( ::String value);
		static Dynamic fromString_dyn();

		static ::String toString( int value);
		static Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace ui
} // end namespace _MultitouchInputMode

#endif /* INCLUDED_openfl_ui__MultitouchInputMode_MultitouchInputMode_Impl_ */ 
