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
#ifndef INCLUDED_org_wildrabbit_game_EnemyBullet
#include <org/wildrabbit/game/EnemyBullet.h>
#endif
#ifndef INCLUDED_org_wildrabbit_game_Entity
#include <org/wildrabbit/game/Entity.h>
#endif
namespace org{
namespace wildrabbit{
namespace game{

Void EnemyBullet_obj::__construct(::org::wildrabbit::PlayState playState)
{
HX_STACK_FRAME("org.wildrabbit.game.EnemyBullet","new",0xc79132c0,"org.wildrabbit.game.EnemyBullet.new","org/wildrabbit/game/EnemyBullet.hx",22,0x76069ad1)
HX_STACK_THIS(this)
HX_STACK_ARG(playState,"playState")
{
	HX_STACK_LINE(23)
	::org::wildrabbit::PlayState tmp = playState;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	super::__construct(tmp);
	HX_STACK_LINE(24)
	this->loadGraphic(HX_HCSTRING("assets/images/bullet_enemy.png","\xb1","\xc5","\x9e","\x68"),null(),null(),null(),null(),null());
}
;
	return null();
}

//EnemyBullet_obj::~EnemyBullet_obj() { }

Dynamic EnemyBullet_obj::__CreateEmpty() { return  new EnemyBullet_obj; }
hx::ObjectPtr< EnemyBullet_obj > EnemyBullet_obj::__new(::org::wildrabbit::PlayState playState)
{  hx::ObjectPtr< EnemyBullet_obj > _result_ = new EnemyBullet_obj();
	_result_->__construct(playState);
	return _result_;}

Dynamic EnemyBullet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EnemyBullet_obj > _result_ = new EnemyBullet_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void EnemyBullet_obj::doSwitchShape( int shape){
{
		HX_STACK_FRAME("org.wildrabbit.game.EnemyBullet","doSwitchShape",0xa2f4b522,"org.wildrabbit.game.EnemyBullet.doSwitchShape","org/wildrabbit/game/EnemyBullet.hx",28,0x76069ad1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shape,"shape")
	}
return null();
}



EnemyBullet_obj::EnemyBullet_obj()
{
}

Dynamic EnemyBullet_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"doSwitchShape") ) { return doSwitchShape_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("doSwitchShape","\xc2","\x9a","\x00","\x15"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EnemyBullet_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EnemyBullet_obj::__mClass,"__mClass");
};

#endif

hx::Class EnemyBullet_obj::__mClass;

void EnemyBullet_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("org.wildrabbit.game.EnemyBullet","\xce","\x12","\x59","\xb5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EnemyBullet_obj >;
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
} // end namespace game
