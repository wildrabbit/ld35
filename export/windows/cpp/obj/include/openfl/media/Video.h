#ifndef INCLUDED_openfl_media_Video
#define INCLUDED_openfl_media_Video

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,media,Video)
namespace openfl{
namespace media{


class HXCPP_CLASS_ATTRIBUTES  Video_obj : public ::openfl::_legacy::display::DisplayObject_obj{
	public:
		typedef ::openfl::_legacy::display::DisplayObject_obj super;
		typedef Video_obj OBJ_;
		Video_obj();
		Void __construct(hx::Null< int >  __o_width,hx::Null< int >  __o_height);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.media.Video")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Video_obj > __new(hx::Null< int >  __o_width,hx::Null< int >  __o_height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Video_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		HX_DECLARE_IMPLEMENT_DYNAMIC;
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Video","\x5b","\x84","\x29","\xca"); }

};

} // end namespace openfl
} // end namespace media

#endif /* INCLUDED_openfl_media_Video */ 
