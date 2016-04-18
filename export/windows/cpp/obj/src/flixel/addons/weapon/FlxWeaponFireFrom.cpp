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
#ifndef INCLUDED_flixel_addons_weapon_FlxWeaponFireFrom
#include <flixel/addons/weapon/FlxWeaponFireFrom.h>
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

::flixel::addons::weapon::FlxWeaponFireFrom  FlxWeaponFireFrom_obj::PARENT(::flixel::FlxSprite parent,::flixel::util::helpers::FlxBounds offset)
	{ return hx::CreateEnum< FlxWeaponFireFrom_obj >(HX_HCSTRING("PARENT","\x2a","\xb1","\x00","\xa0"),0,hx::DynamicArray(0,2).Add(parent).Add(offset)); }

::flixel::addons::weapon::FlxWeaponFireFrom  FlxWeaponFireFrom_obj::POSITION(::flixel::util::helpers::FlxBounds position)
	{ return hx::CreateEnum< FlxWeaponFireFrom_obj >(HX_HCSTRING("POSITION","\xa9","\x30","\x80","\x24"),1,hx::DynamicArray(0,1).Add(position)); }

HX_DEFINE_CREATE_ENUM(FlxWeaponFireFrom_obj)

int FlxWeaponFireFrom_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("PARENT","\x2a","\xb1","\x00","\xa0")) return 0;
	if (inName==HX_HCSTRING("POSITION","\xa9","\x30","\x80","\x24")) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxWeaponFireFrom_obj,PARENT,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxWeaponFireFrom_obj,POSITION,return)

int FlxWeaponFireFrom_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("PARENT","\x2a","\xb1","\x00","\xa0")) return 2;
	if (inName==HX_HCSTRING("POSITION","\xa9","\x30","\x80","\x24")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic FlxWeaponFireFrom_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("PARENT","\x2a","\xb1","\x00","\xa0")) return PARENT_dyn();
	if (inName==HX_HCSTRING("POSITION","\xa9","\x30","\x80","\x24")) return POSITION_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("PARENT","\x2a","\xb1","\x00","\xa0"),
	HX_HCSTRING("POSITION","\xa9","\x30","\x80","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxWeaponFireFrom_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class FlxWeaponFireFrom_obj::__mClass;

Dynamic __Create_FlxWeaponFireFrom_obj() { return new FlxWeaponFireFrom_obj; }

void FlxWeaponFireFrom_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("flixel.addons.weapon.FlxWeaponFireFrom","\xe5","\x61","\x68","\x30"), hx::TCanCast< FlxWeaponFireFrom_obj >,sStaticFields,sMemberFields,
	&__Create_FlxWeaponFireFrom_obj, &__Create,
	&super::__SGetClass(), &CreateFlxWeaponFireFrom_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FlxWeaponFireFrom_obj::__boot()
{
}


} // end namespace flixel
} // end namespace addons
} // end namespace weapon
