#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
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
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_org_wildrabbit_HelpState
#include <org/wildrabbit/HelpState.h>
#endif
#ifndef INCLUDED_org_wildrabbit_MenuState
#include <org/wildrabbit/MenuState.h>
#endif
namespace org{
namespace wildrabbit{

Void MenuState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("org.wildrabbit.MenuState","new",0x9fc4c704,"org.wildrabbit.MenuState.new","org/wildrabbit/MenuState.hx",17,0x9dc1628c)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(17)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	super::__construct(tmp);
}
;
	return null();
}

//MenuState_obj::~MenuState_obj() { }

Dynamic MenuState_obj::__CreateEmpty() { return  new MenuState_obj; }
hx::ObjectPtr< MenuState_obj > MenuState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< MenuState_obj > _result_ = new MenuState_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic MenuState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MenuState_obj > _result_ = new MenuState_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void MenuState_obj::create( ){
{
		HX_STACK_FRAME("org.wildrabbit.MenuState","create",0x29832ed8,"org.wildrabbit.MenuState.create","org/wildrabbit/MenuState.hx",31,0x9dc1628c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(30)
		::org::wildrabbit::MenuState _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(32)
		this->super::create();
		HX_STACK_LINE(33)
		::flixel::util::FlxTimer tmp = ::flixel::util::FlxTimer_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		this->pause = tmp;
		HX_STACK_LINE(34)
		this->allowExit = false;
		HX_STACK_LINE(35)
		::flixel::util::FlxTimer tmp1 = this->pause;		HX_STACK_VAR(tmp1,"tmp1");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::org::wildrabbit::MenuState,_g)
		int __ArgCount() const { return 1; }
		Void run(::flixel::util::FlxTimer t){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/wildrabbit/MenuState.hx",36,0x9dc1628c)
			HX_STACK_ARG(t,"t")
			{
				HX_STACK_LINE(37)
				_g->hint->set_visible(true);
				HX_STACK_LINE(38)
				::flixel::math::FlxPoint tmp2 = _g->hint->scale;		HX_STACK_VAR(tmp2,"tmp2");
				struct _Function_2_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/wildrabbit/MenuState.hx",38,0x9dc1628c)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , ((Float)1.1),false);
							__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , ((Float)1.1),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(38)
				Dynamic tmp3 = _Function_2_1::Block();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(38)
				Dynamic tmp4 = ::flixel::tweens::FlxEase_obj::circOut_dyn();		HX_STACK_VAR(tmp4,"tmp4");
				struct _Function_2_2{
					inline static Dynamic Block( Dynamic &tmp4){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/wildrabbit/MenuState.hx",38,0x9dc1628c)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43") , tmp4,false);
							__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , (int)4,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(38)
				Dynamic tmp5 = _Function_2_2::Block(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(38)
				::flixel::tweens::misc::VarTween tmp6 = ::flixel::tweens::FlxTween_obj::tween(tmp2,tmp3,(int)1,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(38)
				_g->tween = tmp6;
				HX_STACK_LINE(39)
				_g->allowExit = true;
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(35)
		tmp1->start(((Float)0.5), Dynamic(new _Function_1_1(_g)),null());
		HX_STACK_LINE(41)
		::flixel::FlxSprite tmp2 = ::flixel::FlxSprite_obj::__new((int)0,(int)0,HX_HCSTRING("assets/images/intro.png","\x9c","\x88","\x23","\x35"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(41)
		this->bg = tmp2;
		HX_STACK_LINE(42)
		::flixel::FlxSprite tmp3 = this->bg;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(42)
		this->add(tmp3);
		HX_STACK_LINE(43)
		int tmp4 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(43)
		Float tmp5 = (Float(tmp4) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(43)
		Float tmp6 = (tmp5 + (int)100);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(43)
		int tmp7 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(43)
		::flixel::text::FlxText tmp8 = ::flixel::text::FlxText_obj::__new((int)0,tmp6,tmp7,HX_HCSTRING("PRESS ANY KEY TO CONTINUE","\xfa","\xb0","\x43","\x07"),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(43)
		this->hint = tmp8;
		HX_STACK_LINE(44)
		::flixel::text::FlxText tmp9 = this->hint;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(44)
		tmp9->set_alignment(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
		HX_STACK_LINE(45)
		::flixel::text::FlxText tmp10 = this->hint;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(45)
		tmp10->set_visible(false);
		HX_STACK_LINE(46)
		::flixel::text::FlxText tmp11 = this->hint;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(46)
		tmp11->set_size((int)14);
		HX_STACK_LINE(47)
		::flixel::text::FlxText tmp12 = this->hint;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(47)
		tmp12->set_color((int)-8388480);
		HX_STACK_LINE(48)
		::flixel::text::FlxText tmp13 = this->hint;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(48)
		this->add(tmp13);
	}
return null();
}


Void MenuState_obj::destroy( ){
{
		HX_STACK_FRAME("org.wildrabbit.MenuState","destroy",0x3c61459e,"org.wildrabbit.MenuState.destroy","org/wildrabbit/MenuState.hx",56,0x9dc1628c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(57)
		this->super::destroy();
		HX_STACK_LINE(58)
		::flixel::tweens::FlxTween tmp = this->tween;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(58)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(58)
		if ((tmp1)){
			HX_STACK_LINE(60)
			::flixel::tweens::FlxTween tmp2 = this->tween;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(60)
			tmp2->cancel();
		}
		HX_STACK_LINE(62)
		::flixel::text::FlxText tmp2 = this->hint;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(62)
		this->remove(tmp2,null());
		HX_STACK_LINE(63)
		::flixel::FlxSprite tmp3 = this->bg;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(63)
		this->remove(tmp3,null());
		HX_STACK_LINE(64)
		this->hint = null();
		HX_STACK_LINE(65)
		this->bg = null();
	}
return null();
}


Void MenuState_obj::update( Float elapsed){
{
		HX_STACK_FRAME("org.wildrabbit.MenuState","update",0x34794de5,"org.wildrabbit.MenuState.update","org/wildrabbit/MenuState.hx",72,0x9dc1628c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(73)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(73)
		this->super::update(tmp);
		HX_STACK_LINE(74)
		bool tmp1 = this->allowExit;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(74)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(74)
		if ((tmp1)){
			HX_STACK_LINE(74)
			::flixel::input::keyboard::FlxKeyboard tmp3 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(74)
			::flixel::input::keyboard::FlxKeyboard tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(74)
			bool tmp5 = tmp4->justPressed->__Field(HX_HCSTRING("get_ANY","\x63","\x5f","\xa6","\x26"), hx::paccDynamic )();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(74)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(74)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(74)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(74)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(74)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(74)
			if ((tmp10)){
				HX_STACK_LINE(74)
				::flixel::input::mouse::FlxMouse tmp11 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(74)
				::flixel::input::mouse::FlxMouse tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(74)
				::flixel::input::mouse::FlxMouse tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(74)
				int tmp14 = tmp13->_leftButton->current;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(74)
				int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(74)
				int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(74)
				tmp2 = (tmp16 == (int)2);
			}
			else{
				HX_STACK_LINE(74)
				tmp2 = true;
			}
		}
		else{
			HX_STACK_LINE(74)
			tmp2 = false;
		}
		HX_STACK_LINE(74)
		if ((tmp2)){
			HX_STACK_LINE(76)
			::org::wildrabbit::HelpState tmp3 = ::org::wildrabbit::HelpState_obj::__new(null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(76)
			::flixel::FlxState nextState = tmp3;		HX_STACK_VAR(nextState,"nextState");
			HX_STACK_LINE(76)
			::flixel::FlxGame tmp4 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(76)
			::flixel::FlxState tmp5 = nextState;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(76)
			bool tmp6 = tmp4->_state->switchTo(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(76)
			if ((tmp6)){
				HX_STACK_LINE(76)
				::flixel::FlxGame tmp7 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(76)
				tmp7->_requestedState = nextState;
			}
		}
	}
return null();
}



MenuState_obj::MenuState_obj()
{
}

void MenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuState);
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(title,"title");
	HX_MARK_MEMBER_NAME(hint,"hint");
	HX_MARK_MEMBER_NAME(pause,"pause");
	HX_MARK_MEMBER_NAME(allowExit,"allowExit");
	HX_MARK_MEMBER_NAME(tween,"tween");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(title,"title");
	HX_VISIT_MEMBER_NAME(hint,"hint");
	HX_VISIT_MEMBER_NAME(pause,"pause");
	HX_VISIT_MEMBER_NAME(allowExit,"allowExit");
	HX_VISIT_MEMBER_NAME(tween,"tween");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MenuState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return bg; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"hint") ) { return hint; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { return title; }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause; }
		if (HX_FIELD_EQ(inName,"tween") ) { return tween; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"allowExit") ) { return allowExit; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MenuState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"hint") ) { hint=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { title=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pause") ) { pause=inValue.Cast< ::flixel::util::FlxTimer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tween") ) { tween=inValue.Cast< ::flixel::tweens::FlxTween >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"allowExit") ) { allowExit=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bg","\xc5","\x55","\x00","\x00"));
	outFields->push(HX_HCSTRING("title","\x98","\x15","\x3b","\x10"));
	outFields->push(HX_HCSTRING("hint","\x87","\x3d","\x0e","\x45"));
	outFields->push(HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"));
	outFields->push(HX_HCSTRING("allowExit","\x47","\x40","\x12","\xae"));
	outFields->push(HX_HCSTRING("tween","\x6b","\xaa","\x70","\x19"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(MenuState_obj,bg),HX_HCSTRING("bg","\xc5","\x55","\x00","\x00")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(MenuState_obj,title),HX_HCSTRING("title","\x98","\x15","\x3b","\x10")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(MenuState_obj,hint),HX_HCSTRING("hint","\x87","\x3d","\x0e","\x45")},
	{hx::fsObject /*::flixel::util::FlxTimer*/ ,(int)offsetof(MenuState_obj,pause),HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd")},
	{hx::fsBool,(int)offsetof(MenuState_obj,allowExit),HX_HCSTRING("allowExit","\x47","\x40","\x12","\xae")},
	{hx::fsObject /*::flixel::tweens::FlxTween*/ ,(int)offsetof(MenuState_obj,tween),HX_HCSTRING("tween","\x6b","\xaa","\x70","\x19")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bg","\xc5","\x55","\x00","\x00"),
	HX_HCSTRING("title","\x98","\x15","\x3b","\x10"),
	HX_HCSTRING("hint","\x87","\x3d","\x0e","\x45"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("allowExit","\x47","\x40","\x12","\xae"),
	HX_HCSTRING("tween","\x6b","\xaa","\x70","\x19"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

#endif

hx::Class MenuState_obj::__mClass;

void MenuState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("org.wildrabbit.MenuState","\x12","\x35","\x14","\xcd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MenuState_obj >;
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
