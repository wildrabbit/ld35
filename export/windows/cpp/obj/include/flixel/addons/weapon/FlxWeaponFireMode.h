#ifndef INCLUDED_flixel_addons_weapon_FlxWeaponFireMode
#define INCLUDED_flixel_addons_weapon_FlxWeaponFireMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,weapon,FlxWeaponFireMode)
HX_DECLARE_CLASS2(flixel,input,FlxPointer)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS3(flixel,input,touch,FlxTouch)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS3(flixel,util,helpers,FlxBounds)
namespace flixel{
namespace addons{
namespace weapon{


class FlxWeaponFireMode_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef FlxWeaponFireMode_obj OBJ_;

	public:
		FlxWeaponFireMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("flixel.addons.weapon.FlxWeaponFireMode","\xde","\x8f","\x06","\x35"); }
		::String __ToString() const { return HX_HCSTRING("FlxWeaponFireMode.","\x27","\x51","\x9b","\x70") + tag; }

		static ::flixel::addons::weapon::FlxWeaponFireMode FIRE_AT_MOUSE;
		static inline ::flixel::addons::weapon::FlxWeaponFireMode FIRE_AT_MOUSE_dyn() { return FIRE_AT_MOUSE; }
		static ::flixel::addons::weapon::FlxWeaponFireMode FIRE_AT_POSITION(Float x,Float y);
		static Dynamic FIRE_AT_POSITION_dyn();
		static ::flixel::addons::weapon::FlxWeaponFireMode FIRE_AT_TARGET(::flixel::FlxSprite target);
		static Dynamic FIRE_AT_TARGET_dyn();
		static ::flixel::addons::weapon::FlxWeaponFireMode FIRE_AT_TOUCH(::flixel::input::touch::FlxTouch touch);
		static Dynamic FIRE_AT_TOUCH_dyn();
		static ::flixel::addons::weapon::FlxWeaponFireMode FIRE_FROM_ANGLE(::flixel::util::helpers::FlxBounds angle);
		static Dynamic FIRE_FROM_ANGLE_dyn();
		static ::flixel::addons::weapon::FlxWeaponFireMode FIRE_FROM_PARENT_ANGLE(::flixel::util::helpers::FlxBounds angleNoise);
		static Dynamic FIRE_FROM_PARENT_ANGLE_dyn();
		static ::flixel::addons::weapon::FlxWeaponFireMode FIRE_FROM_PARENT_FACING(::flixel::util::helpers::FlxBounds angleNoise);
		static Dynamic FIRE_FROM_PARENT_FACING_dyn();
};

} // end namespace flixel
} // end namespace addons
} // end namespace weapon

#endif /* INCLUDED_flixel_addons_weapon_FlxWeaponFireMode */ 
