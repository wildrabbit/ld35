#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Video
#include <openfl/media/Video.h>
#endif
namespace openfl{
namespace media{

Void Video_obj::__construct(hx::Null< int >  __o_width,hx::Null< int >  __o_height)
{
HX_STACK_FRAME("openfl.media.Video","new",0x18e7e9e5,"openfl.media.Video.new","openfl/media/Video.hx",288,0x054fa1ed)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_width,"width")
HX_STACK_ARG(__o_height,"height")
int width = __o_width.Default(320);
int height = __o_height.Default(240);
{
	HX_STACK_LINE(288)
	super::__construct(null(),HX_HCSTRING("video","\x7b","\x14","\xfc","\x36"));
}
;
	return null();
}

//Video_obj::~Video_obj() { }

Dynamic Video_obj::__CreateEmpty() { return  new Video_obj; }
hx::ObjectPtr< Video_obj > Video_obj::__new(hx::Null< int >  __o_width,hx::Null< int >  __o_height)
{  hx::ObjectPtr< Video_obj > _result_ = new Video_obj();
	_result_->__construct(__o_width,__o_height);
	return _result_;}

Dynamic Video_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Video_obj > _result_ = new Video_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}


Video_obj::Video_obj()
{
	HX_INIT_IMPLEMENT_DYNAMIC;
}

void Video_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Video);
	HX_MARK_DYNAMIC;
	::openfl::_legacy::display::DisplayObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Video_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_DYNAMIC;
	::openfl::_legacy::display::DisplayObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Video_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	HX_CHECK_DYNAMIC_GET_FIELD(inName);
	return super::__Field(inName,inCallProp);
}

Dynamic Video_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	try { return super::__SetField(inName,inValue,inCallProp); }
	catch(Dynamic e) { HX_DYNAMIC_SET_FIELD(inName,inValue); }
	return inValue;
}

void Video_obj::__GetFields(Array< ::String> &outFields)
{
	HX_APPEND_DYNAMIC_FIELDS(outFields);
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Video_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Video_obj::__mClass,"__mClass");
};

#endif

hx::Class Video_obj::__mClass;

void Video_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.media.Video","\x73","\x13","\x12","\x35");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Video_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace media
