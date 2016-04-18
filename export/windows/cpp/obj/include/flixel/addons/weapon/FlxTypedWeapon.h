#ifndef INCLUDED_flixel_addons_weapon_FlxTypedWeapon
#define INCLUDED_flixel_addons_weapon_FlxTypedWeapon

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,weapon,FlxTypedWeapon)
HX_DECLARE_CLASS3(flixel,addons,weapon,FlxWeaponFireFrom)
HX_DECLARE_CLASS3(flixel,addons,weapon,FlxWeaponFireMode)
HX_DECLARE_CLASS3(flixel,addons,weapon,FlxWeaponSpeedMode)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,input,FlxPointer)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS3(flixel,input,touch,FlxTouch)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS2(flixel,_system,FlxSound)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS3(flixel,util,helpers,FlxBounds)
namespace flixel{
namespace addons{
namespace weapon{


class HXCPP_CLASS_ATTRIBUTES  FlxTypedWeapon_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxTypedWeapon_obj OBJ_;
		FlxTypedWeapon_obj();
		Void __construct(::String name,Dynamic bulletFactory,::flixel::addons::weapon::FlxWeaponFireFrom fireFrom,::flixel::addons::weapon::FlxWeaponSpeedMode speedMode);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.addons.weapon.FlxTypedWeapon")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxTypedWeapon_obj > __new(::String name,Dynamic bulletFactory,::flixel::addons::weapon::FlxWeaponFireFrom fireFrom,::flixel::addons::weapon::FlxWeaponSpeedMode speedMode);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxTypedWeapon_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxTypedWeapon","\xb4","\x5f","\x62","\xf0"); }

		static void __boot();
		static int BULLET_UP;
		static int BULLET_DOWN;
		static int BULLET_LEFT;
		static int BULLET_RIGHT;
		static int BULLET_NORTH_EAST;
		static int BULLET_NORTH_WEST;
		static int BULLET_SOUTH_EAST;
		static int BULLET_SOUTH_WEST;
		::String name;
		::flixel::group::FlxTypedGroup group;
		int nextFire;
		int fireRate;
		::flixel::math::FlxRect bounds;
		::flixel::FlxSprite parent;
		bool useParentDirection;
		::flixel::util::helpers::FlxBounds firePosition;
		::flixel::math::FlxPoint positionOffset;
		::flixel::addons::weapon::FlxWeaponFireFrom fireFrom;
		::flixel::addons::weapon::FlxWeaponSpeedMode speedMode;
		::flixel::util::helpers::FlxBounds bulletLifeSpan;
		Float bulletElasticity;
		bool rotateBulletTowardsTarget;
		Dynamic currentBullet;
		Dynamic onPreFireCallback;
		Dynamic &onPreFireCallback_dyn() { return onPreFireCallback;}
		Dynamic onPostFireCallback;
		Dynamic &onPostFireCallback_dyn() { return onPostFireCallback;}
		::flixel::_system::FlxSound onPreFireSound;
		::flixel::_system::FlxSound onPostFireSound;
		Dynamic bulletFactory;
		Dynamic &bulletFactory_dyn() { return bulletFactory;}
		int lastFired;
		bool skipParentCollision;
		virtual bool runFire( ::flixel::addons::weapon::FlxWeaponFireMode Mode);
		Dynamic runFire_dyn();

		virtual bool fireFromParentFacing( ::flixel::util::helpers::FlxBounds angleNoise);
		Dynamic fireFromParentFacing_dyn();

		virtual bool fireAtMouse( );
		Dynamic fireAtMouse_dyn();

		virtual bool fireAtTouch( ::flixel::input::touch::FlxTouch Touch);
		Dynamic fireAtTouch_dyn();

		virtual bool fireAtPosition( int X,int Y);
		Dynamic fireAtPosition_dyn();

		virtual bool fireAtTarget( ::flixel::FlxSprite Target);
		Dynamic fireAtTarget_dyn();

		virtual bool fireFromAngle( ::flixel::util::helpers::FlxBounds angle);
		Dynamic fireFromAngle_dyn();

		virtual bool fireFromParentAngle( ::flixel::util::helpers::FlxBounds angle);
		Dynamic fireFromParentAngle_dyn();

		virtual Void setPreFireCallback( Dynamic Callback,::flixel::_system::FlxSound Sound);
		Dynamic setPreFireCallback_dyn();

		virtual Void setPostFireCallback( Dynamic Callback,::flixel::_system::FlxSound Sound);
		Dynamic setPostFireCallback_dyn();

		virtual Void bulletsOverlap( ::flixel::FlxBasic ObjectOrGroup,Dynamic NotifyCallBack,hx::Null< bool >  SkipParent);
		Dynamic bulletsOverlap_dyn();

		virtual bool shouldBulletHit( ::flixel::FlxObject Object,::flixel::FlxObject Bullet);
		Dynamic shouldBulletHit_dyn();

		virtual Void onBulletHit( ::flixel::FlxObject Object,::flixel::FlxObject Bullet);
		Dynamic onBulletHit_dyn();

		virtual Void internalFireAtPoint( Dynamic bullet,::flixel::math::FlxPoint point);
		Dynamic internalFireAtPoint_dyn();

		virtual Void internalFireFromAngle( Dynamic bullet,Float degrees);
		Dynamic internalFireFromAngle_dyn();

		virtual ::flixel::addons::weapon::FlxWeaponFireFrom set_fireFrom( ::flixel::addons::weapon::FlxWeaponFireFrom v);
		Dynamic set_fireFrom_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace weapon

#endif /* INCLUDED_flixel_addons_weapon_FlxTypedWeapon */ 
