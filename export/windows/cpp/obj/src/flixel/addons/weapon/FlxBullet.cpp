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
#ifndef INCLUDED_flixel_addons_weapon_FlxBullet
#include <flixel/addons/weapon/FlxBullet.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
namespace flixel{
namespace addons{
namespace weapon{

Void FlxBullet_obj::__construct()
{
HX_STACK_FRAME("flixel.addons.weapon.FlxBullet","new",0xec1cce5d,"flixel.addons.weapon.FlxBullet.new","flixel/addons/weapon/FlxBullet.hx",14,0xb8c7cb14)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(17)
	this->accelerates = false;
	HX_STACK_LINE(27)
	super::__construct((int)0,(int)0,null());
	HX_STACK_LINE(28)
	this->set_exists(false);
}
;
	return null();
}

//FlxBullet_obj::~FlxBullet_obj() { }

Dynamic FlxBullet_obj::__CreateEmpty() { return  new FlxBullet_obj; }
hx::ObjectPtr< FlxBullet_obj > FlxBullet_obj::__new()
{  hx::ObjectPtr< FlxBullet_obj > _result_ = new FlxBullet_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxBullet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxBullet_obj > _result_ = new FlxBullet_obj();
	_result_->__construct();
	return _result_;}

Void FlxBullet_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.addons.weapon.FlxBullet","update",0x0a73a42c,"flixel.addons.weapon.FlxBullet.update","flixel/addons/weapon/FlxBullet.hx",32,0xb8c7cb14)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(33)
		Float tmp = this->lifespan;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(33)
		if ((tmp1)){
			HX_STACK_LINE(35)
			hx::SubEq(this->lifespan,elapsed);
			HX_STACK_LINE(37)
			Float tmp2 = this->lifespan;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(37)
			bool tmp3 = (tmp2 <= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(37)
			if ((tmp3)){
				HX_STACK_LINE(39)
				this->kill();
			}
		}
		HX_STACK_LINE(43)
		Float tmp2 = this->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(43)
		int tmp3 = ::Math_obj::floor(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(43)
		Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(43)
		int tmp5 = ::Math_obj::floor(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(43)
		::flixel::math::FlxRect tmp6 = this->bounds;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(43)
		bool tmp7 = ::flixel::math::FlxMath_obj::pointInFlxRect(tmp3,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(43)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(43)
		if ((tmp8)){
			HX_STACK_LINE(45)
			this->kill();
		}
		HX_STACK_LINE(48)
		Float tmp9 = elapsed;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(48)
		this->super::update(tmp9);
	}
return null();
}



FlxBullet_obj::FlxBullet_obj()
{
}

void FlxBullet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBullet);
	HX_MARK_MEMBER_NAME(accelerates,"accelerates");
	HX_MARK_MEMBER_NAME(xAcceleration,"xAcceleration");
	HX_MARK_MEMBER_NAME(yAcceleration,"yAcceleration");
	HX_MARK_MEMBER_NAME(lifespan,"lifespan");
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxBullet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(accelerates,"accelerates");
	HX_VISIT_MEMBER_NAME(xAcceleration,"xAcceleration");
	HX_VISIT_MEMBER_NAME(yAcceleration,"yAcceleration");
	HX_VISIT_MEMBER_NAME(lifespan,"lifespan");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxBullet_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { return bounds; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lifespan") ) { return lifespan; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"accelerates") ) { return accelerates; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"xAcceleration") ) { return xAcceleration; }
		if (HX_FIELD_EQ(inName,"yAcceleration") ) { return yAcceleration; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxBullet_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast< ::flixel::math::FlxRect >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lifespan") ) { lifespan=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"accelerates") ) { accelerates=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"xAcceleration") ) { xAcceleration=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yAcceleration") ) { yAcceleration=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBullet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("accelerates","\xf6","\x5c","\x93","\x26"));
	outFields->push(HX_HCSTRING("xAcceleration","\xd8","\x20","\xae","\x14"));
	outFields->push(HX_HCSTRING("yAcceleration","\x59","\x9e","\x6e","\x5a"));
	outFields->push(HX_HCSTRING("lifespan","\xc6","\x19","\xce","\x6b"));
	outFields->push(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxBullet_obj,accelerates),HX_HCSTRING("accelerates","\xf6","\x5c","\x93","\x26")},
	{hx::fsInt,(int)offsetof(FlxBullet_obj,xAcceleration),HX_HCSTRING("xAcceleration","\xd8","\x20","\xae","\x14")},
	{hx::fsInt,(int)offsetof(FlxBullet_obj,yAcceleration),HX_HCSTRING("yAcceleration","\x59","\x9e","\x6e","\x5a")},
	{hx::fsFloat,(int)offsetof(FlxBullet_obj,lifespan),HX_HCSTRING("lifespan","\xc6","\x19","\xce","\x6b")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(int)offsetof(FlxBullet_obj,bounds),HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("accelerates","\xf6","\x5c","\x93","\x26"),
	HX_HCSTRING("xAcceleration","\xd8","\x20","\xae","\x14"),
	HX_HCSTRING("yAcceleration","\x59","\x9e","\x6e","\x5a"),
	HX_HCSTRING("lifespan","\xc6","\x19","\xce","\x6b"),
	HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBullet_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBullet_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxBullet_obj::__mClass;

void FlxBullet_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.weapon.FlxBullet","\xeb","\x5b","\xed","\x8c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxBullet_obj >;
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

} // end namespace flixel
} // end namespace addons
} // end namespace weapon
