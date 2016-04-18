#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxParticle
#include <flixel/effects/particles/FlxParticle.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_IFlxParticle
#include <flixel/effects/particles/IFlxParticle.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxVector
#include <flixel/math/FlxVector.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxVector
#include <flixel/util/FlxPool_flixel_math_FlxVector.h>
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
#ifndef INCLUDED_org_wildrabbit_FlxLongParticle
#include <org/wildrabbit/FlxLongParticle.h>
#endif
namespace org{
namespace wildrabbit{

Void FlxLongParticle_obj::__construct()
{
HX_STACK_FRAME("org.wildrabbit.FlxLongParticle","new",0x6f78d786,"org.wildrabbit.FlxLongParticle.new","org/wildrabbit/FlxLongParticle.hx",16,0x39f2504a)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(17)
	super::__construct();
	HX_STACK_LINE(18)
	::flixel::math::FlxVector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	{
		HX_STACK_LINE(18)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(18)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(18)
		::flixel::util::FlxPool_flixel_math_FlxVector tmp1 = ::flixel::math::FlxVector_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(18)
		::flixel::math::FlxVector tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(18)
		Float tmp3 = X;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(18)
		Float tmp4 = Y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(18)
		::flixel::math::FlxVector tmp5 = hx::TCast< ::flixel::math::FlxVector >::cast(tmp2->set(tmp3,tmp4));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(18)
		::flixel::math::FlxVector vector = tmp5;		HX_STACK_VAR(vector,"vector");
		HX_STACK_LINE(18)
		vector->_inPool = false;
		HX_STACK_LINE(18)
		tmp = vector;
	}
	HX_STACK_LINE(18)
	this->velocity = tmp;
}
;
	return null();
}

//FlxLongParticle_obj::~FlxLongParticle_obj() { }

Dynamic FlxLongParticle_obj::__CreateEmpty() { return  new FlxLongParticle_obj; }
hx::ObjectPtr< FlxLongParticle_obj > FlxLongParticle_obj::__new()
{  hx::ObjectPtr< FlxLongParticle_obj > _result_ = new FlxLongParticle_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxLongParticle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxLongParticle_obj > _result_ = new FlxLongParticle_obj();
	_result_->__construct();
	return _result_;}

Void FlxLongParticle_obj::update( Float elapsed){
{
		HX_STACK_FRAME("org.wildrabbit.FlxLongParticle","update",0x169cfaa3,"org.wildrabbit.FlxLongParticle.update","org/wildrabbit/FlxLongParticle.hx",22,0x39f2504a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(23)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(23)
		this->super::update(tmp);
		HX_STACK_LINE(24)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(24)
		{
			HX_STACK_LINE(24)
			::flixel::math::FlxPoint tmp2 = this->velocity;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(24)
			::flixel::math::FlxVector tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(24)
			tmp3 = hx::TCast< ::flixel::math::FlxVector >::cast(tmp2);
			HX_STACK_LINE(24)
			::flixel::math::FlxVector _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(24)
			Float tmp4 = _this->get_radians();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(24)
			Float tmp5 = ::Math_obj::PI;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(24)
			Float tmp6 = (Float((int)180) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(24)
			tmp1 = (tmp4 * tmp6);
		}
		HX_STACK_LINE(24)
		this->set_angle(tmp1);
	}
return null();
}


Void FlxLongParticle_obj::reset( Float X,Float Y){
{
		HX_STACK_FRAME("org.wildrabbit.FlxLongParticle","reset",0x2e99e675,"org.wildrabbit.FlxLongParticle.reset","org/wildrabbit/FlxLongParticle.hx",28,0x39f2504a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(X,"X")
		HX_STACK_ARG(Y,"Y")
		HX_STACK_LINE(29)
		this->set_alpha((int)1);
		HX_STACK_LINE(30)
		Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(30)
		Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(30)
		this->super::reset(tmp,tmp1);
	}
return null();
}



FlxLongParticle_obj::FlxLongParticle_obj()
{
}

Dynamic FlxLongParticle_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxLongParticle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxLongParticle_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxLongParticle_obj::__mClass;

void FlxLongParticle_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("org.wildrabbit.FlxLongParticle","\x94","\x5c","\x91","\x9f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxLongParticle_obj >;
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
