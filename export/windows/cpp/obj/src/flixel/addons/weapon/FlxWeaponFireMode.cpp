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
#ifndef INCLUDED_flixel_addons_weapon_FlxWeaponFireMode
#include <flixel/addons/weapon/FlxWeaponFireMode.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouch
#include <flixel/input/touch/FlxTouch.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxBounds
#include <flixel/util/helpers/FlxBounds.h>
#endif
namespace flixel{
namespace addons{
namespace weapon{

::flixel::addons::weapon::FlxWeaponFireMode FlxWeaponFireMode_obj::FIRE_AT_MOUSE;

::flixel::addons::weapon::FlxWeaponFireMode  FlxWeaponFireMode_obj::FIRE_AT_POSITION(Float x,Float y)
	{ return hx::CreateEnum< FlxWeaponFireMode_obj >(HX_HCSTRING("FIRE_AT_POSITION","\x6c","\xbb","\x5a","\xbe"),0,hx::DynamicArray(0,2).Add(x).Add(y)); }

::flixel::addons::weapon::FlxWeaponFireMode  FlxWeaponFireMode_obj::FIRE_AT_TARGET(::flixel::FlxSprite target)
	{ return hx::CreateEnum< FlxWeaponFireMode_obj >(HX_HCSTRING("FIRE_AT_TARGET","\x54","\xe3","\xee","\x41"),1,hx::DynamicArray(0,1).Add(target)); }

::flixel::addons::weapon::FlxWeaponFireMode  FlxWeaponFireMode_obj::FIRE_AT_TOUCH(::flixel::input::touch::FlxTouch touch)
	{ return hx::CreateEnum< FlxWeaponFireMode_obj >(HX_HCSTRING("FIRE_AT_TOUCH","\xfc","\xbc","\x01","\xee"),5,hx::DynamicArray(0,1).Add(touch)); }

::flixel::addons::weapon::FlxWeaponFireMode  FlxWeaponFireMode_obj::FIRE_FROM_ANGLE(::flixel::util::helpers::FlxBounds angle)
	{ return hx::CreateEnum< FlxWeaponFireMode_obj >(HX_HCSTRING("FIRE_FROM_ANGLE","\x07","\x1d","\xf3","\x0d"),2,hx::DynamicArray(0,1).Add(angle)); }

::flixel::addons::weapon::FlxWeaponFireMode  FlxWeaponFireMode_obj::FIRE_FROM_PARENT_ANGLE(::flixel::util::helpers::FlxBounds angleNoise)
	{ return hx::CreateEnum< FlxWeaponFireMode_obj >(HX_HCSTRING("FIRE_FROM_PARENT_ANGLE","\xca","\xa0","\xc9","\x3f"),3,hx::DynamicArray(0,1).Add(angleNoise)); }

::flixel::addons::weapon::FlxWeaponFireMode  FlxWeaponFireMode_obj::FIRE_FROM_PARENT_FACING(::flixel::util::helpers::FlxBounds angleNoise)
	{ return hx::CreateEnum< FlxWeaponFireMode_obj >(HX_HCSTRING("FIRE_FROM_PARENT_FACING","\x23","\x3a","\x8f","\x11"),4,hx::DynamicArray(0,1).Add(angleNoise)); }

HX_DEFINE_CREATE_ENUM(FlxWeaponFireMode_obj)

int FlxWeaponFireMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("FIRE_AT_MOUSE","\x62","\xbb","\x33","\xe6")) return 6;
	if (inName==HX_HCSTRING("FIRE_AT_POSITION","\x6c","\xbb","\x5a","\xbe")) return 0;
	if (inName==HX_HCSTRING("FIRE_AT_TARGET","\x54","\xe3","\xee","\x41")) return 1;
	if (inName==HX_HCSTRING("FIRE_AT_TOUCH","\xfc","\xbc","\x01","\xee")) return 5;
	if (inName==HX_HCSTRING("FIRE_FROM_ANGLE","\x07","\x1d","\xf3","\x0d")) return 2;
	if (inName==HX_HCSTRING("FIRE_FROM_PARENT_ANGLE","\xca","\xa0","\xc9","\x3f")) return 3;
	if (inName==HX_HCSTRING("FIRE_FROM_PARENT_FACING","\x23","\x3a","\x8f","\x11")) return 4;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxWeaponFireMode_obj,FIRE_AT_POSITION,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxWeaponFireMode_obj,FIRE_AT_TARGET,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxWeaponFireMode_obj,FIRE_AT_TOUCH,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxWeaponFireMode_obj,FIRE_FROM_ANGLE,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxWeaponFireMode_obj,FIRE_FROM_PARENT_ANGLE,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxWeaponFireMode_obj,FIRE_FROM_PARENT_FACING,return)

int FlxWeaponFireMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("FIRE_AT_MOUSE","\x62","\xbb","\x33","\xe6")) return 0;
	if (inName==HX_HCSTRING("FIRE_AT_POSITION","\x6c","\xbb","\x5a","\xbe")) return 2;
	if (inName==HX_HCSTRING("FIRE_AT_TARGET","\x54","\xe3","\xee","\x41")) return 1;
	if (inName==HX_HCSTRING("FIRE_AT_TOUCH","\xfc","\xbc","\x01","\xee")) return 1;
	if (inName==HX_HCSTRING("FIRE_FROM_ANGLE","\x07","\x1d","\xf3","\x0d")) return 1;
	if (inName==HX_HCSTRING("FIRE_FROM_PARENT_ANGLE","\xca","\xa0","\xc9","\x3f")) return 1;
	if (inName==HX_HCSTRING("FIRE_FROM_PARENT_FACING","\x23","\x3a","\x8f","\x11")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic FlxWeaponFireMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("FIRE_AT_MOUSE","\x62","\xbb","\x33","\xe6")) return FIRE_AT_MOUSE;
	if (inName==HX_HCSTRING("FIRE_AT_POSITION","\x6c","\xbb","\x5a","\xbe")) return FIRE_AT_POSITION_dyn();
	if (inName==HX_HCSTRING("FIRE_AT_TARGET","\x54","\xe3","\xee","\x41")) return FIRE_AT_TARGET_dyn();
	if (inName==HX_HCSTRING("FIRE_AT_TOUCH","\xfc","\xbc","\x01","\xee")) return FIRE_AT_TOUCH_dyn();
	if (inName==HX_HCSTRING("FIRE_FROM_ANGLE","\x07","\x1d","\xf3","\x0d")) return FIRE_FROM_ANGLE_dyn();
	if (inName==HX_HCSTRING("FIRE_FROM_PARENT_ANGLE","\xca","\xa0","\xc9","\x3f")) return FIRE_FROM_PARENT_ANGLE_dyn();
	if (inName==HX_HCSTRING("FIRE_FROM_PARENT_FACING","\x23","\x3a","\x8f","\x11")) return FIRE_FROM_PARENT_FACING_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("FIRE_AT_POSITION","\x6c","\xbb","\x5a","\xbe"),
	HX_HCSTRING("FIRE_AT_TARGET","\x54","\xe3","\xee","\x41"),
	HX_HCSTRING("FIRE_FROM_ANGLE","\x07","\x1d","\xf3","\x0d"),
	HX_HCSTRING("FIRE_FROM_PARENT_ANGLE","\xca","\xa0","\xc9","\x3f"),
	HX_HCSTRING("FIRE_FROM_PARENT_FACING","\x23","\x3a","\x8f","\x11"),
	HX_HCSTRING("FIRE_AT_TOUCH","\xfc","\xbc","\x01","\xee"),
	HX_HCSTRING("FIRE_AT_MOUSE","\x62","\xbb","\x33","\xe6"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxWeaponFireMode_obj::FIRE_AT_MOUSE,"FIRE_AT_MOUSE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxWeaponFireMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxWeaponFireMode_obj::FIRE_AT_MOUSE,"FIRE_AT_MOUSE");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class FlxWeaponFireMode_obj::__mClass;

Dynamic __Create_FlxWeaponFireMode_obj() { return new FlxWeaponFireMode_obj; }

void FlxWeaponFireMode_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("flixel.addons.weapon.FlxWeaponFireMode","\xde","\x8f","\x06","\x35"), hx::TCanCast< FlxWeaponFireMode_obj >,sStaticFields,sMemberFields,
	&__Create_FlxWeaponFireMode_obj, &__Create,
	&super::__SGetClass(), &CreateFlxWeaponFireMode_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FlxWeaponFireMode_obj::__boot()
{
hx::Static(FIRE_AT_MOUSE) = hx::CreateEnum< FlxWeaponFireMode_obj >(HX_HCSTRING("FIRE_AT_MOUSE","\x62","\xbb","\x33","\xe6"),6);
}


} // end namespace flixel
} // end namespace addons
} // end namespace weapon
