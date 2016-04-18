#ifndef INCLUDED_flixel_addons_weapon_FlxWeaponFireFrom
#define INCLUDED_flixel_addons_weapon_FlxWeaponFireFrom

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,weapon,FlxWeaponFireFrom)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS3(flixel,util,helpers,FlxBounds)
namespace flixel{
namespace addons{
namespace weapon{


class FlxWeaponFireFrom_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef FlxWeaponFireFrom_obj OBJ_;

	public:
		FlxWeaponFireFrom_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("flixel.addons.weapon.FlxWeaponFireFrom","\xe5","\x61","\x68","\x30"); }
		::String __ToString() const { return HX_HCSTRING("FlxWeaponFireFrom.","\x40","\x45","\xd1","\x6a") + tag; }

		static ::flixel::addons::weapon::FlxWeaponFireFrom PARENT(::flixel::FlxSprite parent,::flixel::util::helpers::FlxBounds offset);
		static Dynamic PARENT_dyn();
		static ::flixel::addons::weapon::FlxWeaponFireFrom POSITION(::flixel::util::helpers::FlxBounds position);
		static Dynamic POSITION_dyn();
};

} // end namespace flixel
} // end namespace addons
} // end namespace weapon

#endif /* INCLUDED_flixel_addons_weapon_FlxWeaponFireFrom */ 
