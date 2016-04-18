#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_weapon_FlxWeaponSpeedMode
#include <flixel/addons/weapon/FlxWeaponSpeedMode.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxBounds
#include <flixel/util/helpers/FlxBounds.h>
#endif
namespace flixel{
namespace addons{
namespace weapon{

::flixel::addons::weapon::FlxWeaponSpeedMode  FlxWeaponSpeedMode_obj::ACCELERATION(::flixel::util::helpers::FlxBounds acceleration,::flixel::util::helpers::FlxBounds maxSpeed)
	{ return hx::CreateEnum< FlxWeaponSpeedMode_obj >(HX_HCSTRING("ACCELERATION","\x40","\x58","\xaf","\x38"),1,hx::DynamicArray(0,2).Add(acceleration).Add(maxSpeed)); }

::flixel::addons::weapon::FlxWeaponSpeedMode  FlxWeaponSpeedMode_obj::SPEED(::flixel::util::helpers::FlxBounds speed)
	{ return hx::CreateEnum< FlxWeaponSpeedMode_obj >(HX_HCSTRING("SPEED","\x67","\xcf","\x57","\xff"),0,hx::DynamicArray(0,1).Add(speed)); }

HX_DEFINE_CREATE_ENUM(FlxWeaponSpeedMode_obj)

int FlxWeaponSpeedMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("ACCELERATION","\x40","\x58","\xaf","\x38")) return 1;
	if (inName==HX_HCSTRING("SPEED","\x67","\xcf","\x57","\xff")) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxWeaponSpeedMode_obj,ACCELERATION,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxWeaponSpeedMode_obj,SPEED,return)

int FlxWeaponSpeedMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("ACCELERATION","\x40","\x58","\xaf","\x38")) return 2;
	if (inName==HX_HCSTRING("SPEED","\x67","\xcf","\x57","\xff")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic FlxWeaponSpeedMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("ACCELERATION","\x40","\x58","\xaf","\x38")) return ACCELERATION_dyn();
	if (inName==HX_HCSTRING("SPEED","\x67","\xcf","\x57","\xff")) return SPEED_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("SPEED","\x67","\xcf","\x57","\xff"),
	HX_HCSTRING("ACCELERATION","\x40","\x58","\xaf","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxWeaponSpeedMode_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class FlxWeaponSpeedMode_obj::__mClass;

Dynamic __Create_FlxWeaponSpeedMode_obj() { return new FlxWeaponSpeedMode_obj; }

void FlxWeaponSpeedMode_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("flixel.addons.weapon.FlxWeaponSpeedMode","\x45","\x2d","\x8a","\x82"), hx::TCanCast< FlxWeaponSpeedMode_obj >,sStaticFields,sMemberFields,
	&__Create_FlxWeaponSpeedMode_obj, &__Create,
	&super::__SGetClass(), &CreateFlxWeaponSpeedMode_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FlxWeaponSpeedMode_obj::__boot()
{
}


} // end namespace flixel
} // end namespace addons
} // end namespace weapon
