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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_org_wildrabbit_game_World
#include <org/wildrabbit/game/World.h>
#endif
namespace org{
namespace wildrabbit{
namespace game{

Void World_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,Float radius)
{
HX_STACK_FRAME("org.wildrabbit.game.World","new",0x62b2cb68,"org.wildrabbit.game.World.new","org/wildrabbit/game/World.hx",16,0x749d9069)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
HX_STACK_ARG(radius,"radius")
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
{
	HX_STACK_LINE(17)
	this->mRadius = radius;
	HX_STACK_LINE(18)
	::flixel::math::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	{
		HX_STACK_LINE(18)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp1 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(18)
		::flixel::math::FlxPoint tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(18)
		Float tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(18)
		Float tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(18)
		::flixel::math::FlxPoint tmp5 = tmp2->set(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(18)
		::flixel::math::FlxPoint point = tmp5;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(18)
		point->_inPool = false;
		HX_STACK_LINE(18)
		tmp = point;
	}
	HX_STACK_LINE(18)
	this->mCenter = tmp;
	HX_STACK_LINE(19)
	Float tmp1 = (x - radius);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	Float tmp2 = (y - radius);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(19)
	super::__construct(tmp1,tmp2,null());
}
;
	return null();
}

//World_obj::~World_obj() { }

Dynamic World_obj::__CreateEmpty() { return  new World_obj; }
hx::ObjectPtr< World_obj > World_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,Float radius)
{  hx::ObjectPtr< World_obj > _result_ = new World_obj();
	_result_->__construct(__o_x,__o_y,radius);
	return _result_;}

Dynamic World_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< World_obj > _result_ = new World_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void World_obj::setCenter( Float newX,Float newY){
{
		HX_STACK_FRAME("org.wildrabbit.game.World","setCenter",0xba7b8c1f,"org.wildrabbit.game.World.setCenter","org/wildrabbit/game/World.hx",23,0x749d9069)
		HX_STACK_THIS(this)
		HX_STACK_ARG(newX,"newX")
		HX_STACK_ARG(newY,"newY")
		HX_STACK_LINE(24)
		::flixel::math::FlxPoint tmp = this->mCenter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(24)
		Float tmp1 = newX;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(24)
		tmp->set_x(tmp1);
		HX_STACK_LINE(25)
		::flixel::math::FlxPoint tmp2 = this->mCenter;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(25)
		Float tmp3 = newY;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(25)
		tmp2->set_y(tmp3);
		HX_STACK_LINE(26)
		Float tmp4 = newX;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(26)
		Float tmp5 = this->mRadius;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(26)
		Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(26)
		Float tmp7 = newY;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(26)
		Float tmp8 = this->mRadius;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(26)
		Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(26)
		this->setPosition(tmp6,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(World_obj,setCenter,(void))


World_obj::World_obj()
{
}

void World_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(World);
	HX_MARK_MEMBER_NAME(mRadius,"mRadius");
	HX_MARK_MEMBER_NAME(mCenter,"mCenter");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void World_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mRadius,"mRadius");
	HX_VISIT_MEMBER_NAME(mCenter,"mCenter");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic World_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"mRadius") ) { return mRadius; }
		if (HX_FIELD_EQ(inName,"mCenter") ) { return mCenter; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setCenter") ) { return setCenter_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic World_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"mRadius") ) { mRadius=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mCenter") ) { mCenter=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void World_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("mRadius","\x9f","\xd4","\x2e","\x9a"));
	outFields->push(HX_HCSTRING("mCenter","\x22","\x2a","\x13","\xef"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(World_obj,mRadius),HX_HCSTRING("mRadius","\x9f","\xd4","\x2e","\x9a")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(World_obj,mCenter),HX_HCSTRING("mCenter","\x22","\x2a","\x13","\xef")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("mRadius","\x9f","\xd4","\x2e","\x9a"),
	HX_HCSTRING("mCenter","\x22","\x2a","\x13","\xef"),
	HX_HCSTRING("setCenter","\x17","\x9b","\x82","\x65"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(World_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(World_obj::__mClass,"__mClass");
};

#endif

hx::Class World_obj::__mClass;

void World_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("org.wildrabbit.game.World","\x76","\x37","\x47","\x99");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< World_obj >;
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
