#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_MovieClip
#include <openfl/_legacy/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_org_wildrabbit_Main
#include <org/wildrabbit/Main.h>
#endif
#ifndef INCLUDED_org_wildrabbit_MenuState
#include <org/wildrabbit/MenuState.h>
#endif
#ifndef INCLUDED_org_wildrabbit_Reg
#include <org/wildrabbit/Reg.h>
#endif
namespace org{
namespace wildrabbit{

Void Main_obj::__construct()
{
HX_STACK_FRAME("org.wildrabbit.Main","new",0x99cd988b,"org.wildrabbit.Main.new","org/wildrabbit/Main.hx",12,0xf57787a5)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(20)
	this->startFullscreen = false;
	HX_STACK_LINE(19)
	this->skipSplash = false;
	HX_STACK_LINE(18)
	this->framerate = (int)60;
	HX_STACK_LINE(17)
	this->zoom = ((Float)-1);
	HX_STACK_LINE(16)
	this->initialState = ((::hx::Class)(hx::ClassOf< ::org::wildrabbit::MenuState >()));
	HX_STACK_LINE(15)
	this->gameHeight = (int)640;
	HX_STACK_LINE(14)
	this->gameWidth = (int)960;
	HX_STACK_LINE(31)
	super::__construct();
	HX_STACK_LINE(33)
	::openfl::_legacy::display::Stage tmp = this->get_stage();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(33)
	if ((tmp1)){
		HX_STACK_LINE(35)
		this->init(null());
	}
	else{
		HX_STACK_LINE(39)
		::String tmp2 = ::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(39)
		Dynamic tmp3 = this->init_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(39)
		this->addEventListener(tmp2,tmp3,null(),null(),null());
	}
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Void Main_obj::init( ::openfl::_legacy::events::Event E){
{
		HX_STACK_FRAME("org.wildrabbit.Main","init",0xf6d09885,"org.wildrabbit.Main.init","org/wildrabbit/Main.hx",44,0xf57787a5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(E,"E")
		HX_STACK_LINE(45)
		::String tmp = ::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		bool tmp1 = this->hasEventListener(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		if ((tmp1)){
			HX_STACK_LINE(47)
			::String tmp2 = ::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(47)
			Dynamic tmp3 = this->init_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(47)
			this->removeEventListener(tmp2,tmp3,null());
		}
		HX_STACK_LINE(50)
		this->setupGame();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,init,(void))

Void Main_obj::setupGame( ){
{
		HX_STACK_FRAME("org.wildrabbit.Main","setupGame",0xda080b7a,"org.wildrabbit.Main.setupGame","org/wildrabbit/Main.hx",54,0xf57787a5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(55)
		::openfl::_legacy::display::MovieClip tmp = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(55)
		::openfl::_legacy::display::Stage tmp1 = tmp->get_stage();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(55)
		int tmp2 = tmp1->get_stageWidth();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(55)
		int stageWidth = tmp2;		HX_STACK_VAR(stageWidth,"stageWidth");
		HX_STACK_LINE(56)
		::openfl::_legacy::display::MovieClip tmp3 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(56)
		::openfl::_legacy::display::Stage tmp4 = tmp3->get_stage();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(56)
		int tmp5 = tmp4->get_stageHeight();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(56)
		int stageHeight = tmp5;		HX_STACK_VAR(stageHeight,"stageHeight");
		HX_STACK_LINE(58)
		Float tmp6 = this->zoom;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(58)
		bool tmp7 = (tmp6 == (int)-1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(58)
		if ((tmp7)){
			HX_STACK_LINE(60)
			int tmp8 = stageWidth;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(60)
			int tmp9 = this->gameWidth;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(60)
			Float tmp10 = (Float(tmp8) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(60)
			Float ratioX = tmp10;		HX_STACK_VAR(ratioX,"ratioX");
			HX_STACK_LINE(61)
			int tmp11 = stageHeight;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(61)
			int tmp12 = this->gameHeight;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(61)
			Float tmp13 = (Float(tmp11) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(61)
			Float ratioY = tmp13;		HX_STACK_VAR(ratioY,"ratioY");
			HX_STACK_LINE(62)
			Float tmp14 = ratioX;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(62)
			Float tmp15 = ratioY;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(62)
			Float tmp16 = ::Math_obj::min(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(62)
			this->zoom = tmp16;
			HX_STACK_LINE(63)
			int tmp17 = stageWidth;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(63)
			Float tmp18 = this->zoom;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(63)
			Float tmp19 = (Float(tmp17) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(63)
			int tmp20 = ::Math_obj::ceil(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(63)
			this->gameWidth = tmp20;
			HX_STACK_LINE(64)
			int tmp21 = stageHeight;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(64)
			Float tmp22 = this->zoom;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(64)
			Float tmp23 = (Float(tmp21) / Float(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(64)
			int tmp24 = ::Math_obj::ceil(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(64)
			this->gameHeight = tmp24;
		}
		HX_STACK_LINE(67)
		int tmp8 = this->gameWidth;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(67)
		int tmp9 = this->gameHeight;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(67)
		::hx::Class tmp10 = this->initialState;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(67)
		Float tmp11 = this->zoom;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(67)
		int tmp12 = this->framerate;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(67)
		int tmp13 = this->framerate;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(67)
		bool tmp14 = this->skipSplash;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(67)
		bool tmp15 = this->startFullscreen;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(67)
		::flixel::FlxGame tmp16 = ::flixel::FlxGame_obj::__new(tmp8,tmp9,tmp10,tmp11,tmp12,tmp13,tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(67)
		this->addChild(tmp16);
		HX_STACK_LINE(69)
		int tmp17 = ::org::wildrabbit::Reg_obj::highScore = (int)0;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(69)
		::org::wildrabbit::Reg_obj::score = tmp17;
		HX_STACK_LINE(70)
		Float tmp18 = ::org::wildrabbit::Reg_obj::maxTime = (int)0;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(70)
		::org::wildrabbit::Reg_obj::time = tmp18;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,setupGame,(void))

Void Main_obj::main( ){
{
		HX_STACK_FRAME("org.wildrabbit.Main","main",0xf96b95ae,"org.wildrabbit.Main.main","org/wildrabbit/Main.hx",25,0xf57787a5)
		HX_STACK_LINE(26)
		::openfl::_legacy::display::MovieClip tmp = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(26)
		::org::wildrabbit::Main tmp1 = ::org::wildrabbit::Main_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(26)
		tmp->addChild(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))


Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(gameWidth,"gameWidth");
	HX_MARK_MEMBER_NAME(gameHeight,"gameHeight");
	HX_MARK_MEMBER_NAME(initialState,"initialState");
	HX_MARK_MEMBER_NAME(zoom,"zoom");
	HX_MARK_MEMBER_NAME(framerate,"framerate");
	HX_MARK_MEMBER_NAME(skipSplash,"skipSplash");
	HX_MARK_MEMBER_NAME(startFullscreen,"startFullscreen");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gameWidth,"gameWidth");
	HX_VISIT_MEMBER_NAME(gameHeight,"gameHeight");
	HX_VISIT_MEMBER_NAME(initialState,"initialState");
	HX_VISIT_MEMBER_NAME(zoom,"zoom");
	HX_VISIT_MEMBER_NAME(framerate,"framerate");
	HX_VISIT_MEMBER_NAME(skipSplash,"skipSplash");
	HX_VISIT_MEMBER_NAME(startFullscreen,"startFullscreen");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { return zoom; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"gameWidth") ) { return gameWidth; }
		if (HX_FIELD_EQ(inName,"framerate") ) { return framerate; }
		if (HX_FIELD_EQ(inName,"setupGame") ) { return setupGame_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"gameHeight") ) { return gameHeight; }
		if (HX_FIELD_EQ(inName,"skipSplash") ) { return skipSplash; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"initialState") ) { return initialState; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"startFullscreen") ) { return startFullscreen; }
	}
	return super::__Field(inName,inCallProp);
}

bool Main_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true;  }
	}
	return false;
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { zoom=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"gameWidth") ) { gameWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"framerate") ) { framerate=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"gameHeight") ) { gameHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skipSplash") ) { skipSplash=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"initialState") ) { initialState=inValue.Cast< ::hx::Class >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"startFullscreen") ) { startFullscreen=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("gameWidth","\xb4","\xa4","\x7d","\xff"));
	outFields->push(HX_HCSTRING("gameHeight","\x79","\xf1","\xc1","\x44"));
	outFields->push(HX_HCSTRING("initialState","\xed","\x76","\x1b","\x48"));
	outFields->push(HX_HCSTRING("zoom","\x13","\xa3","\xf8","\x50"));
	outFields->push(HX_HCSTRING("framerate","\x8d","\xe5","\x4b","\x4e"));
	outFields->push(HX_HCSTRING("skipSplash","\x46","\x75","\x9c","\x27"));
	outFields->push(HX_HCSTRING("startFullscreen","\x3d","\xc1","\xee","\x2d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Main_obj,gameWidth),HX_HCSTRING("gameWidth","\xb4","\xa4","\x7d","\xff")},
	{hx::fsInt,(int)offsetof(Main_obj,gameHeight),HX_HCSTRING("gameHeight","\x79","\xf1","\xc1","\x44")},
	{hx::fsObject /*::hx::Class*/ ,(int)offsetof(Main_obj,initialState),HX_HCSTRING("initialState","\xed","\x76","\x1b","\x48")},
	{hx::fsFloat,(int)offsetof(Main_obj,zoom),HX_HCSTRING("zoom","\x13","\xa3","\xf8","\x50")},
	{hx::fsInt,(int)offsetof(Main_obj,framerate),HX_HCSTRING("framerate","\x8d","\xe5","\x4b","\x4e")},
	{hx::fsBool,(int)offsetof(Main_obj,skipSplash),HX_HCSTRING("skipSplash","\x46","\x75","\x9c","\x27")},
	{hx::fsBool,(int)offsetof(Main_obj,startFullscreen),HX_HCSTRING("startFullscreen","\x3d","\xc1","\xee","\x2d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("gameWidth","\xb4","\xa4","\x7d","\xff"),
	HX_HCSTRING("gameHeight","\x79","\xf1","\xc1","\x44"),
	HX_HCSTRING("initialState","\xed","\x76","\x1b","\x48"),
	HX_HCSTRING("zoom","\x13","\xa3","\xf8","\x50"),
	HX_HCSTRING("framerate","\x8d","\xe5","\x4b","\x4e"),
	HX_HCSTRING("skipSplash","\x46","\x75","\x9c","\x27"),
	HX_HCSTRING("startFullscreen","\x3d","\xc1","\xee","\x2d"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("setupGame","\x0f","\x51","\xed","\x9e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#endif

hx::Class Main_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("main","\x39","\x38","\x56","\x48"),
	::String(null()) };

void Main_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("org.wildrabbit.Main","\x19","\xf7","\x45","\x16");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Main_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Main_obj >;
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

} // end namespace org
} // end namespace wildrabbit
