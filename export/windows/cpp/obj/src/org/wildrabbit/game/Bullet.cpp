#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_org_wildrabbit_PlayState
#include <org/wildrabbit/PlayState.h>
#endif
#ifndef INCLUDED_org_wildrabbit_game_BaseBullet
#include <org/wildrabbit/game/BaseBullet.h>
#endif
#ifndef INCLUDED_org_wildrabbit_game_Bullet
#include <org/wildrabbit/game/Bullet.h>
#endif
#ifndef INCLUDED_org_wildrabbit_game_Entity
#include <org/wildrabbit/game/Entity.h>
#endif
namespace org{
namespace wildrabbit{
namespace game{

Void Bullet_obj::__construct(::org::wildrabbit::PlayState playState)
{
HX_STACK_FRAME("org.wildrabbit.game.Bullet","new",0x583e3890,"org.wildrabbit.game.Bullet.new","org/wildrabbit/game/Bullet.hx",24,0x66a0865f)
HX_STACK_THIS(this)
HX_STACK_ARG(playState,"playState")
{
	HX_STACK_LINE(25)
	::org::wildrabbit::PlayState tmp = playState;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	super::__construct(tmp);
	HX_STACK_LINE(27)
	this->loadGraphic(HX_HCSTRING("assets/images/bullet_main.png","\x86","\x93","\x24","\x3e"),true,(int)16,(int)8,null(),null());
	HX_STACK_LINE(29)
	::flixel::animation::FlxAnimationController tmp1 = this->animation;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	tmp1->add(HX_HCSTRING("circle","\x10","\x72","\x0d","\x56"),Array_obj< int >::__new().Add((int)0),(int)1,null(),null(),null());
	HX_STACK_LINE(30)
	::flixel::animation::FlxAnimationController tmp2 = this->animation;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(30)
	tmp2->add(HX_HCSTRING("triangle","\xc8","\xbe","\xc5","\x8d"),Array_obj< int >::__new().Add((int)1),(int)1,null(),null(),null());
	HX_STACK_LINE(31)
	::flixel::animation::FlxAnimationController tmp3 = this->animation;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(31)
	tmp3->add(HX_HCSTRING("square","\x9d","\x00","\xf2","\x58"),Array_obj< int >::__new().Add((int)2),(int)1,null(),null(),null());
	HX_STACK_LINE(32)
	::flixel::animation::FlxAnimationController tmp4 = this->animation;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(32)
	tmp4->add(HX_HCSTRING("explode","\xe1","\xbb","\x63","\x27"),Array_obj< int >::__new().Add((int)3),(int)1,null(),null(),null());
}
;
	return null();
}

//Bullet_obj::~Bullet_obj() { }

Dynamic Bullet_obj::__CreateEmpty() { return  new Bullet_obj; }
hx::ObjectPtr< Bullet_obj > Bullet_obj::__new(::org::wildrabbit::PlayState playState)
{  hx::ObjectPtr< Bullet_obj > _result_ = new Bullet_obj();
	_result_->__construct(playState);
	return _result_;}

Dynamic Bullet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Bullet_obj > _result_ = new Bullet_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Bullet_obj::doDie( ){
{
		HX_STACK_FRAME("org.wildrabbit.game.Bullet","doDie",0xd31d7aa5,"org.wildrabbit.game.Bullet.doDie","org/wildrabbit/game/Bullet.hx",36,0x66a0865f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(37)
		::flixel::animation::FlxAnimationController tmp = this->animation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(37)
		tmp->play(HX_HCSTRING("explode","\xe1","\xbb","\x63","\x27"),null(),null(),null());
	}
return null();
}


Void Bullet_obj::doSwitchShape( int shape){
{
		HX_STACK_FRAME("org.wildrabbit.game.Bullet","doSwitchShape",0xbab11ef2,"org.wildrabbit.game.Bullet.doSwitchShape","org/wildrabbit/game/Bullet.hx",41,0x66a0865f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shape,"shape")
		HX_STACK_LINE(42)
		::flixel::animation::FlxAnimationController tmp = this->animation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(42)
		int tmp1 = this->mShape;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(42)
		::String tmp2 = ::org::wildrabbit::game::Bullet_obj::ShapeAnims->__get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(42)
		tmp->play(tmp2,null(),null(),null());
	}
return null();
}


Array< ::String > Bullet_obj::ShapeAnims;


Bullet_obj::Bullet_obj()
{
}

Dynamic Bullet_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"doDie") ) { return doDie_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"doSwitchShape") ) { return doSwitchShape_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Bullet_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"ShapeAnims") ) { outValue = ShapeAnims; return true;  }
	}
	return false;
}

bool Bullet_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"ShapeAnims") ) { ShapeAnims=ioValue.Cast< Array< ::String > >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< ::String >*/ ,(void *) &Bullet_obj::ShapeAnims,HX_HCSTRING("ShapeAnims","\x81","\x62","\xd5","\xff")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("doDie","\x75","\xa6","\xa4","\xdd"),
	HX_HCSTRING("doSwitchShape","\xc2","\x9a","\x00","\x15"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bullet_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Bullet_obj::ShapeAnims,"ShapeAnims");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bullet_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Bullet_obj::ShapeAnims,"ShapeAnims");
};

#endif

hx::Class Bullet_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("ShapeAnims","\x81","\x62","\xd5","\xff"),
	::String(null()) };

void Bullet_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("org.wildrabbit.game.Bullet","\x9e","\xf0","\xfa","\x8f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Bullet_obj::__GetStatic;
	__mClass->mSetStaticField = &Bullet_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Bullet_obj >;
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

void Bullet_obj::__boot()
{
	ShapeAnims= Array_obj< ::String >::__new().Add(HX_HCSTRING("circle","\x10","\x72","\x0d","\x56")).Add(HX_HCSTRING("triangle","\xc8","\xbe","\xc5","\x8d")).Add(HX_HCSTRING("square","\x9d","\x00","\xf2","\x58"));
}

} // end namespace org
} // end namespace wildrabbit
} // end namespace game
