#ifndef INCLUDED_flixel_addons_weapon_FlxWeaponSpeedMode
#define INCLUDED_flixel_addons_weapon_FlxWeaponSpeedMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,addons,weapon,FlxWeaponSpeedMode)
HX_DECLARE_CLASS3(flixel,util,helpers,FlxBounds)
namespace flixel{
namespace addons{
namespace weapon{


class FlxWeaponSpeedMode_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef FlxWeaponSpeedMode_obj OBJ_;

	public:
		FlxWeaponSpeedMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("flixel.addons.weapon.FlxWeaponSpeedMode","\x45","\x2d","\x8a","\x82"); }
		::String __ToString() const { return HX_HCSTRING("FlxWeaponSpeedMode.","\xd2","\x34","\xf8","\x5d") + tag; }

		static ::flixel::addons::weapon::FlxWeaponSpeedMode ACCELERATION(::flixel::util::helpers::FlxBounds acceleration,::flixel::util::helpers::FlxBounds maxSpeed);
		static Dynamic ACCELERATION_dyn();
		static ::flixel::addons::weapon::FlxWeaponSpeedMode SPEED(::flixel::util::helpers::FlxBounds speed);
		static Dynamic SPEED_dyn();
};

} // end namespace flixel
} // end namespace addons
} // end namespace weapon

#endif /* INCLUDED_flixel_addons_weapon_FlxWeaponSpeedMode */ 
