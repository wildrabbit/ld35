#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_weapon_FlxTypedWeapon
#include <flixel/addons/weapon/FlxTypedWeapon.h>
#endif
#ifndef INCLUDED_flixel_addons_weapon_FlxWeaponFireFrom
#include <flixel/addons/weapon/FlxWeaponFireFrom.h>
#endif
#ifndef INCLUDED_flixel_addons_weapon_FlxWeaponFireMode
#include <flixel/addons/weapon/FlxWeaponFireMode.h>
#endif
#ifndef INCLUDED_flixel_addons_weapon_FlxWeaponSpeedMode
#include <flixel/addons/weapon/FlxWeaponSpeedMode.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouch
#include <flixel/input/touch/FlxTouch.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouchManager
#include <flixel/input/touch/FlxTouchManager.h>
#endif
#ifndef INCLUDED_flixel_math_FlxAngle
#include <flixel/math/FlxAngle.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_math_FlxVelocity
#include <flixel/math/FlxVelocity.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
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
#ifndef INCLUDED_flixel_util_helpers_FlxBounds
#include <flixel/util/helpers/FlxBounds.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
namespace flixel{
namespace addons{
namespace weapon{

Void FlxTypedWeapon_obj::__construct(::String name,Dynamic bulletFactory,::flixel::addons::weapon::FlxWeaponFireFrom fireFrom,::flixel::addons::weapon::FlxWeaponSpeedMode speedMode)
{
HX_STACK_FRAME("flixel.addons.weapon.FlxTypedWeapon","new",0x5d75ec0f,"flixel.addons.weapon.FlxTypedWeapon.new","flixel/addons/weapon/FlxWeapon.hx",41,0x017a22ba)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
HX_STACK_ARG(bulletFactory,"bulletFactory")
HX_STACK_ARG(fireFrom,"fireFrom")
HX_STACK_ARG(speedMode,"speedMode")
{
	HX_STACK_LINE(140)
	this->lastFired = (int)0;
	HX_STACK_LINE(117)
	this->rotateBulletTowardsTarget = false;
	HX_STACK_LINE(112)
	this->bulletElasticity = ((Float)0);
	HX_STACK_LINE(70)
	this->fireRate = (int)0;
	HX_STACK_LINE(64)
	this->nextFire = (int)0;
	HX_STACK_LINE(155)
	::flixel::group::FlxTypedGroup tmp = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(155)
	this->group = tmp;
	HX_STACK_LINE(156)
	::flixel::math::FlxRect tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(156)
	{
		HX_STACK_LINE(156)
		::flixel::math::FlxRect tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(156)
		{
			HX_STACK_LINE(156)
			::flixel::util::FlxPool_flixel_math_FlxRect tmp3 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(156)
			::flixel::math::FlxRect tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(156)
			::flixel::math::FlxRect _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(156)
			_this->x = (int)0;
			HX_STACK_LINE(156)
			_this->y = (int)0;
			HX_STACK_LINE(156)
			int tmp5 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(156)
			_this->width = tmp5;
			HX_STACK_LINE(156)
			int tmp6 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(156)
			_this->height = tmp6;
			HX_STACK_LINE(156)
			tmp2 = _this;
		}
		HX_STACK_LINE(156)
		::flixel::math::FlxRect rect = tmp2;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(156)
		rect->_inPool = false;
		HX_STACK_LINE(156)
		tmp1 = rect;
	}
	HX_STACK_LINE(156)
	this->bounds = tmp1;
	HX_STACK_LINE(157)
	::flixel::util::helpers::FlxBounds tmp2 = ::flixel::util::helpers::FlxBounds_obj::__new(((Float)0.0),(int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(157)
	this->bulletLifeSpan = tmp2;
	HX_STACK_LINE(159)
	this->name = name;
	HX_STACK_LINE(160)
	this->bulletFactory = bulletFactory;
	HX_STACK_LINE(161)
	{
		HX_STACK_LINE(161)
		switch( (int)(fireFrom->__Index())){
			case (int)0: {
				HX_STACK_LINE(161)
				::flixel::util::helpers::FlxBounds tmp3 = (::flixel::addons::weapon::FlxWeaponFireFrom(fireFrom))->__Param(1);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(161)
				::flixel::util::helpers::FlxBounds o = tmp3;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(161)
				::flixel::FlxSprite tmp4 = (::flixel::addons::weapon::FlxWeaponFireFrom(fireFrom))->__Param(0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(161)
				::flixel::FlxSprite p = tmp4;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(161)
				this->parent = p;
			}
			;break;
			default: {
				HX_STACK_LINE(161)
				this->parent = null();
			}
		}
		HX_STACK_LINE(161)
		this->fireFrom = fireFrom;
	}
	HX_STACK_LINE(162)
	this->speedMode = speedMode;
}
;
	return null();
}

//FlxTypedWeapon_obj::~FlxTypedWeapon_obj() { }

Dynamic FlxTypedWeapon_obj::__CreateEmpty() { return  new FlxTypedWeapon_obj; }
hx::ObjectPtr< FlxTypedWeapon_obj > FlxTypedWeapon_obj::__new(::String name,Dynamic bulletFactory,::flixel::addons::weapon::FlxWeaponFireFrom fireFrom,::flixel::addons::weapon::FlxWeaponSpeedMode speedMode)
{  hx::ObjectPtr< FlxTypedWeapon_obj > _result_ = new FlxTypedWeapon_obj();
	_result_->__construct(name,bulletFactory,fireFrom,speedMode);
	return _result_;}

Dynamic FlxTypedWeapon_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTypedWeapon_obj > _result_ = new FlxTypedWeapon_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

bool FlxTypedWeapon_obj::runFire( ::flixel::addons::weapon::FlxWeaponFireMode Mode){
	HX_STACK_FRAME("flixel.addons.weapon.FlxTypedWeapon","runFire",0xfbe407d0,"flixel.addons.weapon.FlxTypedWeapon.runFire","flixel/addons/weapon/FlxWeapon.hx",175,0x017a22ba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Mode,"Mode")
	HX_STACK_LINE(176)
	int tmp = this->fireRate;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(176)
	bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(176)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(176)
	if ((tmp1)){
		HX_STACK_LINE(176)
		::flixel::FlxGame tmp3 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(176)
		::flixel::FlxGame tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(176)
		int tmp5 = tmp4->ticks;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(176)
		int tmp6 = this->nextFire;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(176)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(176)
		tmp2 = (tmp5 < tmp7);
	}
	else{
		HX_STACK_LINE(176)
		tmp2 = false;
	}
	HX_STACK_LINE(176)
	if ((tmp2)){
		HX_STACK_LINE(178)
		return false;
	}
	HX_STACK_LINE(181)
	Dynamic tmp3 = this->onPreFireCallback_dyn();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(181)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(181)
	if ((tmp4)){
		HX_STACK_LINE(183)
		this->onPreFireCallback();
	}
	HX_STACK_LINE(187)
	::flixel::_system::FlxSound tmp5 = this->onPreFireSound;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(187)
	bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(187)
	if ((tmp6)){
		HX_STACK_LINE(189)
		::flixel::_system::FlxSound tmp7 = this->onPreFireSound;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(189)
		tmp7->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(null());
	}
	HX_STACK_LINE(193)
	::flixel::FlxGame tmp7 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(193)
	this->lastFired = tmp7->ticks;
	HX_STACK_LINE(194)
	::flixel::FlxGame tmp8 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(194)
	int tmp9 = tmp8->ticks;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(194)
	int tmp10 = this->fireRate;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(194)
	Float tmp11 = ::flixel::FlxG_obj::timeScale;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(194)
	Float tmp12 = (Float(tmp10) / Float(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(194)
	int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(194)
	int tmp14 = (tmp9 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(194)
	this->nextFire = tmp14;
	HX_STACK_LINE(197)
	::flixel::group::FlxTypedGroup tmp15 = this->group;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(197)
	Dynamic tmp16 = this->bulletFactory_dyn();		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(197)
	Dynamic tmp17;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(197)
	{
		HX_STACK_LINE(197)
		Dynamic f = tmp16;		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(197)
		::flixel::addons::weapon::FlxTypedWeapon a1 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(a1,"a1");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::flixel::addons::weapon::FlxTypedWeapon,a1,Dynamic,f)
		int __ArgCount() const { return 0; }
		Dynamic run(){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","flixel/addons/weapon/FlxWeapon.hx",197,0x017a22ba)
			{
				HX_STACK_LINE(197)
				::flixel::addons::weapon::FlxTypedWeapon tmp18 = a1;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(197)
				Dynamic tmp19 = f(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(197)
				return tmp19;
			}
			return null();
		}
		HX_END_LOCAL_FUNC0(return)

		HX_STACK_LINE(197)
		tmp17 =  Dynamic(new _Function_2_1(a1,f));
	}
	HX_STACK_LINE(197)
	Dynamic tmp18 = tmp15->recycle(null(),tmp17,null(),null());		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(197)
	this->currentBullet = tmp18;
	HX_STACK_LINE(198)
	Dynamic tmp19 = this->currentBullet;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(198)
	bool tmp20 = (tmp19 == null());		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(198)
	if ((tmp20)){
		HX_STACK_LINE(200)
		return false;
	}
	HX_STACK_LINE(204)
	Dynamic tmp21 = this->currentBullet;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(204)
	tmp21->__Field(HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"), hx::paccDynamic )((int)0);
	HX_STACK_LINE(205)
	Dynamic tmp22 = this->currentBullet;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(205)
	tmp22->__Field(HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"), hx::paccDynamic )((int)0);
	HX_STACK_LINE(207)
	{
		HX_STACK_LINE(207)
		::flixel::addons::weapon::FlxWeaponFireFrom tmp23 = this->fireFrom;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(207)
		::flixel::addons::weapon::FlxWeaponFireFrom _g = tmp23;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(207)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(207)
				::flixel::util::helpers::FlxBounds tmp24 = (::flixel::addons::weapon::FlxWeaponFireFrom(_g))->__Param(1);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(207)
				::flixel::util::helpers::FlxBounds offset = tmp24;		HX_STACK_VAR(offset,"offset");
				HX_STACK_LINE(207)
				::flixel::FlxSprite tmp25 = (::flixel::addons::weapon::FlxWeaponFireFrom(_g))->__Param(0);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(207)
				::flixel::FlxSprite parent = tmp25;		HX_STACK_VAR(parent,"parent");
				HX_STACK_LINE(209)
				{
					HX_STACK_LINE(210)
					Dynamic tmp26 = this->currentBullet;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(210)
					Dynamic tmp27 = this->currentBullet;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(210)
					Float tmp28 = parent->x;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(210)
					::flixel::math::FlxRandom tmp29 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(210)
					Float tmp30 = offset->min->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(210)
					Float tmp31 = offset->max->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(210)
					Float tmp32 = tmp29->_float(tmp30,tmp31,null());		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(210)
					Float tmp33 = (tmp28 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(210)
					Float tmp34 = tmp27->__Field(HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(210)
					tmp26->__Field(HX_HCSTRING("last","\x56","\x0a","\xad","\x47"), hx::paccDynamic )->__Field(HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp34);
					HX_STACK_LINE(211)
					Dynamic tmp35 = this->currentBullet;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(211)
					Dynamic tmp36 = this->currentBullet;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(211)
					Float tmp37 = parent->y;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(211)
					::flixel::math::FlxRandom tmp38 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(211)
					Float tmp39 = offset->min->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(211)
					Float tmp40 = offset->max->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(211)
					Float tmp41 = tmp38->_float(tmp39,tmp40,null());		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(211)
					Float tmp42 = (tmp37 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(211)
					Float tmp43 = tmp36->__Field(HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(211)
					tmp35->__Field(HX_HCSTRING("last","\x56","\x0a","\xad","\x47"), hx::paccDynamic )->__Field(HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp43);
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(207)
				::flixel::util::helpers::FlxBounds tmp24 = (::flixel::addons::weapon::FlxWeaponFireFrom(_g))->__Param(0);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(207)
				::flixel::util::helpers::FlxBounds position = tmp24;		HX_STACK_VAR(position,"position");
				HX_STACK_LINE(213)
				{
					HX_STACK_LINE(214)
					Dynamic tmp25 = this->currentBullet;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(214)
					Dynamic tmp26 = this->currentBullet;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(214)
					::flixel::math::FlxRandom tmp27 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(214)
					Float tmp28 = position->min->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(214)
					Float tmp29 = position->max->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(214)
					Float tmp30 = tmp27->_float(tmp28,tmp29,null());		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(214)
					Float tmp31 = tmp26->__Field(HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(214)
					tmp25->__Field(HX_HCSTRING("last","\x56","\x0a","\xad","\x47"), hx::paccDynamic )->__Field(HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp31);
					HX_STACK_LINE(215)
					Dynamic tmp32 = this->currentBullet;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(215)
					Dynamic tmp33 = this->currentBullet;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(215)
					::flixel::math::FlxRandom tmp34 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(215)
					Float tmp35 = position->min->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(215)
					Float tmp36 = position->max->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(215)
					Float tmp37 = tmp34->_float(tmp35,tmp36,null());		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(215)
					Float tmp38 = tmp33->__Field(HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(215)
					tmp32->__Field(HX_HCSTRING("last","\x56","\x0a","\xad","\x47"), hx::paccDynamic )->__Field(HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp38);
				}
			}
			;break;
		}
	}
	HX_STACK_LINE(218)
	Dynamic tmp23 = this->currentBullet;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(218)
	tmp23->__Field(HX_HCSTRING("set_exists","\x19","\x2c","\xe5","\xb3"), hx::paccDynamic )(true);
	HX_STACK_LINE(219)
	::flixel::math::FlxRect tmp24 = this->bounds;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(219)
	Dynamic tmp25 = this->currentBullet;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(219)
	tmp25->__FieldRef(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66")) = tmp24;
	HX_STACK_LINE(220)
	Float tmp26 = this->bulletElasticity;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(220)
	Dynamic tmp27 = this->currentBullet;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(220)
	tmp27->__FieldRef(HX_HCSTRING("elasticity","\x79","\x23","\xb4","\x4d")) = tmp26;
	HX_STACK_LINE(221)
	::flixel::math::FlxRandom tmp28 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(221)
	::flixel::util::helpers::FlxBounds tmp29 = this->bulletLifeSpan;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(221)
	Float tmp30 = tmp29->min;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(221)
	::flixel::util::helpers::FlxBounds tmp31 = this->bulletLifeSpan;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(221)
	Float tmp32 = tmp31->max;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(221)
	Float tmp33 = tmp28->_float(tmp30,tmp32,null());		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(221)
	Dynamic tmp34 = this->currentBullet;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(221)
	tmp34->__FieldRef(HX_HCSTRING("lifespan","\xc6","\x19","\xce","\x6b")) = tmp33;
	HX_STACK_LINE(223)
	switch( (int)(Mode->__Index())){
		case (int)0: {
			HX_STACK_LINE(223)
			Float tmp35 = (::flixel::addons::weapon::FlxWeaponFireMode(Mode))->__Param(1);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(223)
			Float y = tmp35;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(223)
			Float tmp36 = (::flixel::addons::weapon::FlxWeaponFireMode(Mode))->__Param(0);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(223)
			Float x = tmp36;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(225)
			{
				HX_STACK_LINE(226)
				Dynamic tmp37 = this->currentBullet;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(226)
				::flixel::math::FlxPoint tmp38;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(226)
				{
					HX_STACK_LINE(226)
					::flixel::math::FlxPoint tmp39;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(226)
					{
						HX_STACK_LINE(226)
						::flixel::util::FlxPool_flixel_math_FlxPoint tmp40 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(226)
						::flixel::math::FlxPoint tmp41 = tmp40->get();		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(226)
						Float tmp42 = x;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(226)
						Float tmp43 = y;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(226)
						::flixel::math::FlxPoint tmp44 = tmp41->set(tmp42,tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(226)
						::flixel::math::FlxPoint point = tmp44;		HX_STACK_VAR(point,"point");
						HX_STACK_LINE(226)
						point->_inPool = false;
						HX_STACK_LINE(226)
						tmp39 = point;
					}
					HX_STACK_LINE(226)
					::flixel::math::FlxPoint point = tmp39;		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(226)
					point->_weak = true;
					HX_STACK_LINE(226)
					tmp38 = point;
				}
				HX_STACK_LINE(226)
				this->internalFireAtPoint(tmp37,tmp38);
			}
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(223)
			::flixel::FlxSprite tmp35 = (::flixel::addons::weapon::FlxWeaponFireMode(Mode))->__Param(0);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(223)
			::flixel::FlxSprite target = tmp35;		HX_STACK_VAR(target,"target");
			HX_STACK_LINE(228)
			{
				HX_STACK_LINE(229)
				Dynamic tmp36 = this->currentBullet;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(229)
				::flixel::math::FlxPoint tmp37;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(229)
				{
					HX_STACK_LINE(229)
					Float X = (int)0;		HX_STACK_VAR(X,"X");
					HX_STACK_LINE(229)
					Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
					HX_STACK_LINE(229)
					::flixel::math::FlxPoint tmp38;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(229)
					{
						HX_STACK_LINE(229)
						::flixel::util::FlxPool_flixel_math_FlxPoint tmp39 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(229)
						::flixel::math::FlxPoint tmp40 = tmp39->get();		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(229)
						Float tmp41 = X;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(229)
						Float tmp42 = Y;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(229)
						::flixel::math::FlxPoint tmp43 = tmp40->set(tmp41,tmp42);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(229)
						::flixel::math::FlxPoint point = tmp43;		HX_STACK_VAR(point,"point");
						HX_STACK_LINE(229)
						point->_inPool = false;
						HX_STACK_LINE(229)
						tmp38 = point;
					}
					HX_STACK_LINE(229)
					::flixel::math::FlxPoint point = tmp38;		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(229)
					point->_weak = true;
					HX_STACK_LINE(229)
					tmp37 = point;
				}
				HX_STACK_LINE(229)
				::flixel::math::FlxPoint tmp38 = target->getPosition(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(229)
				this->internalFireAtPoint(tmp36,tmp38);
			}
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(223)
			::flixel::util::helpers::FlxBounds tmp35 = (::flixel::addons::weapon::FlxWeaponFireMode(Mode))->__Param(0);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(223)
			::flixel::util::helpers::FlxBounds angle = tmp35;		HX_STACK_VAR(angle,"angle");
			HX_STACK_LINE(231)
			{
				HX_STACK_LINE(232)
				Dynamic tmp36 = this->currentBullet;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(232)
				::flixel::math::FlxRandom tmp37 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(232)
				Float tmp38 = angle->min;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(232)
				Float tmp39 = angle->max;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(232)
				Float tmp40 = tmp37->_float(tmp38,tmp39,null());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(232)
				this->internalFireFromAngle(tmp36,tmp40);
			}
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(223)
			::flixel::util::helpers::FlxBounds tmp35 = (::flixel::addons::weapon::FlxWeaponFireMode(Mode))->__Param(0);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(223)
			::flixel::util::helpers::FlxBounds angle = tmp35;		HX_STACK_VAR(angle,"angle");
			HX_STACK_LINE(234)
			{
				HX_STACK_LINE(235)
				Dynamic tmp36 = this->currentBullet;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(235)
				::flixel::FlxSprite tmp37 = this->parent;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(235)
				Float tmp38 = tmp37->angle;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(235)
				::flixel::math::FlxRandom tmp39 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(235)
				Float tmp40 = angle->min;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(235)
				Float tmp41 = angle->max;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(235)
				Float tmp42 = tmp39->_float(tmp40,tmp41,null());		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(235)
				Float tmp43 = (tmp38 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(235)
				this->internalFireFromAngle(tmp36,tmp43);
			}
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(223)
			::flixel::util::helpers::FlxBounds tmp35 = (::flixel::addons::weapon::FlxWeaponFireMode(Mode))->__Param(0);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(223)
			::flixel::util::helpers::FlxBounds angle = tmp35;		HX_STACK_VAR(angle,"angle");
			HX_STACK_LINE(237)
			{
				HX_STACK_LINE(238)
				Dynamic tmp36 = this->currentBullet;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(238)
				Float tmp37;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(238)
				{
					HX_STACK_LINE(238)
					::flixel::FlxSprite tmp38 = this->parent;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(238)
					int FacingBitmask = tmp38->facing;		HX_STACK_VAR(FacingBitmask,"FacingBitmask");
					HX_STACK_LINE(238)
					bool AsDegrees = false;		HX_STACK_VAR(AsDegrees,"AsDegrees");
					HX_STACK_LINE(238)
					int tmp39;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(238)
					{
						HX_STACK_LINE(238)
						int f = FacingBitmask;		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(238)
						int f1 = FacingBitmask;		HX_STACK_VAR(f1,"f1");
						HX_STACK_LINE(238)
						int f2 = FacingBitmask;		HX_STACK_VAR(f2,"f2");
						HX_STACK_LINE(238)
						int f3 = FacingBitmask;		HX_STACK_VAR(f3,"f3");
						HX_STACK_LINE(238)
						int tmp40 = FacingBitmask;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(238)
						switch( (int)(tmp40)){
							case (int)1: {
								HX_STACK_LINE(238)
								tmp39 = (int)180;
							}
							;break;
							case (int)16: {
								HX_STACK_LINE(238)
								tmp39 = (int)0;
							}
							;break;
							case (int)256: {
								HX_STACK_LINE(238)
								tmp39 = (int)-90;
							}
							;break;
							case (int)4096: {
								HX_STACK_LINE(238)
								tmp39 = (int)90;
							}
							;break;
							default: {
								HX_STACK_LINE(238)
								int tmp41 = f;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(238)
								int tmp42 = (int)257;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(238)
								bool tmp43 = (tmp41 == tmp42);		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(238)
								if ((tmp43)){
									HX_STACK_LINE(238)
									tmp39 = (int)-135;
								}
								else{
									HX_STACK_LINE(238)
									int tmp44 = f1;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(238)
									int tmp45 = (int)272;		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(238)
									bool tmp46 = (tmp44 == tmp45);		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(238)
									if ((tmp46)){
										HX_STACK_LINE(238)
										tmp39 = (int)-45;
									}
									else{
										HX_STACK_LINE(238)
										int tmp47 = f2;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(238)
										int tmp48 = (int)4097;		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(238)
										bool tmp49 = (tmp47 == tmp48);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(238)
										if ((tmp49)){
											HX_STACK_LINE(238)
											tmp39 = (int)135;
										}
										else{
											HX_STACK_LINE(238)
											int tmp50 = f3;		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(238)
											int tmp51 = (int)4112;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(238)
											bool tmp52 = (tmp50 == tmp51);		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(238)
											if ((tmp52)){
												HX_STACK_LINE(238)
												tmp39 = (int)45;
											}
											else{
												HX_STACK_LINE(238)
												tmp39 = (int)0;
											}
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(238)
					int degrees = tmp39;		HX_STACK_VAR(degrees,"degrees");
					HX_STACK_LINE(238)
					bool tmp40 = AsDegrees;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(238)
					if ((tmp40)){
						HX_STACK_LINE(238)
						tmp37 = degrees;
					}
					else{
						HX_STACK_LINE(238)
						int tmp41 = degrees;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(238)
						Float tmp42 = ::Math_obj::PI;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(238)
						Float tmp43 = (Float(tmp42) / Float((int)180));		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(238)
						tmp37 = (tmp41 * tmp43);
					}
				}
				HX_STACK_LINE(238)
				::flixel::math::FlxRandom tmp38 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(238)
				Float tmp39 = angle->min;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(238)
				Float tmp40 = angle->max;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(238)
				Float tmp41 = tmp38->_float(tmp39,tmp40,null());		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(238)
				Float tmp42 = (tmp37 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(238)
				this->internalFireFromAngle(tmp36,tmp42);
			}
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(223)
			::flixel::input::touch::FlxTouch tmp35 = (::flixel::addons::weapon::FlxWeaponFireMode(Mode))->__Param(0);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(223)
			::flixel::input::touch::FlxTouch touch = tmp35;		HX_STACK_VAR(touch,"touch");
			HX_STACK_LINE(241)
			{
				HX_STACK_LINE(242)
				Dynamic tmp36 = this->currentBullet;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(242)
				::flixel::math::FlxPoint tmp37;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(242)
				{
					HX_STACK_LINE(242)
					Float X = (int)0;		HX_STACK_VAR(X,"X");
					HX_STACK_LINE(242)
					Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
					HX_STACK_LINE(242)
					::flixel::math::FlxPoint tmp38;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(242)
					{
						HX_STACK_LINE(242)
						::flixel::util::FlxPool_flixel_math_FlxPoint tmp39 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(242)
						::flixel::math::FlxPoint tmp40 = tmp39->get();		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(242)
						Float tmp41 = X;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(242)
						Float tmp42 = Y;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(242)
						::flixel::math::FlxPoint tmp43 = tmp40->set(tmp41,tmp42);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(242)
						::flixel::math::FlxPoint point = tmp43;		HX_STACK_VAR(point,"point");
						HX_STACK_LINE(242)
						point->_inPool = false;
						HX_STACK_LINE(242)
						tmp38 = point;
					}
					HX_STACK_LINE(242)
					::flixel::math::FlxPoint point = tmp38;		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(242)
					point->_weak = true;
					HX_STACK_LINE(242)
					tmp37 = point;
				}
				HX_STACK_LINE(242)
				::flixel::math::FlxPoint tmp38 = touch->getPosition(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(242)
				this->internalFireAtPoint(tmp36,tmp38);
			}
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(247)
			Dynamic tmp35 = this->currentBullet;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(247)
			::flixel::input::mouse::FlxMouse tmp36 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(247)
			::flixel::math::FlxPoint tmp37;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(247)
			{
				HX_STACK_LINE(247)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(247)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(247)
				::flixel::math::FlxPoint tmp38;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(247)
				{
					HX_STACK_LINE(247)
					::flixel::util::FlxPool_flixel_math_FlxPoint tmp39 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(247)
					::flixel::math::FlxPoint tmp40 = tmp39->get();		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(247)
					Float tmp41 = X;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(247)
					Float tmp42 = Y;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(247)
					::flixel::math::FlxPoint tmp43 = tmp40->set(tmp41,tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(247)
					::flixel::math::FlxPoint point = tmp43;		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(247)
					point->_inPool = false;
					HX_STACK_LINE(247)
					tmp38 = point;
				}
				HX_STACK_LINE(247)
				::flixel::math::FlxPoint point = tmp38;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(247)
				point->_weak = true;
				HX_STACK_LINE(247)
				tmp37 = point;
			}
			HX_STACK_LINE(247)
			::flixel::math::FlxPoint tmp38 = tmp36->getPosition(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(247)
			this->internalFireAtPoint(tmp35,tmp38);
		}
		;break;
	}
	HX_STACK_LINE(251)
	Dynamic tmp35 = this->currentBullet;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(251)
	::haxe::ds::StringMap tmp36 = tmp35->__Field(HX_HCSTRING("animation","\x04","\xef","\x34","\x4b"), hx::paccDynamic )->__Field(HX_HCSTRING("_animations","\x0e","\x02","\xa6","\x55"), hx::paccDynamic );		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(251)
	::flixel::animation::FlxAnimation tmp37 = tmp36->get(HX_HCSTRING("fire","\xb6","\xd3","\xbb","\x43"));		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(251)
	::flixel::animation::FlxAnimation tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(251)
	bool tmp39 = (tmp38 != null());		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(251)
	if ((tmp39)){
		HX_STACK_LINE(253)
		Dynamic tmp40 = this->currentBullet;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(253)
		tmp40->__Field(HX_HCSTRING("animation","\x04","\xef","\x34","\x4b"), hx::paccDynamic )->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(HX_HCSTRING("fire","\xb6","\xd3","\xbb","\x43"),null(),null(),null());
	}
	HX_STACK_LINE(257)
	Dynamic tmp40 = this->onPostFireCallback_dyn();		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(257)
	bool tmp41 = (tmp40 != null());		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(257)
	if ((tmp41)){
		HX_STACK_LINE(259)
		this->onPostFireCallback();
	}
	HX_STACK_LINE(263)
	::flixel::_system::FlxSound tmp42 = this->onPostFireSound;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(263)
	bool tmp43 = (tmp42 != null());		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(263)
	if ((tmp43)){
		HX_STACK_LINE(265)
		::flixel::_system::FlxSound tmp44 = this->onPostFireSound;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(265)
		tmp44->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(null());
	}
	HX_STACK_LINE(269)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedWeapon_obj,runFire,return )

bool FlxTypedWeapon_obj::fireFromParentFacing( ::flixel::util::helpers::FlxBounds angleNoise){
	HX_STACK_FRAME("flixel.addons.weapon.FlxTypedWeapon","fireFromParentFacing",0x3c1f27b5,"flixel.addons.weapon.FlxTypedWeapon.fireFromParentFacing","flixel/addons/weapon/FlxWeapon.hx",278,0x017a22ba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(angleNoise,"angleNoise")
	HX_STACK_LINE(279)
	::flixel::util::helpers::FlxBounds tmp = angleNoise;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(279)
	::flixel::addons::weapon::FlxWeaponFireMode tmp1 = ::flixel::addons::weapon::FlxWeaponFireMode_obj::FIRE_FROM_PARENT_FACING(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(279)
	bool tmp2 = this->runFire(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(279)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedWeapon_obj,fireFromParentFacing,return )

bool FlxTypedWeapon_obj::fireAtMouse( ){
	HX_STACK_FRAME("flixel.addons.weapon.FlxTypedWeapon","fireAtMouse",0x3fb919cb,"flixel.addons.weapon.FlxTypedWeapon.fireAtMouse","flixel/addons/weapon/FlxWeapon.hx",289,0x017a22ba)
	HX_STACK_THIS(this)
	HX_STACK_LINE(290)
	bool tmp = this->runFire(::flixel::addons::weapon::FlxWeaponFireMode_obj::FIRE_AT_MOUSE);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(290)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedWeapon_obj,fireAtMouse,return )

bool FlxTypedWeapon_obj::fireAtTouch( ::flixel::input::touch::FlxTouch Touch){
	HX_STACK_FRAME("flixel.addons.weapon.FlxTypedWeapon","fireAtTouch",0x47871b65,"flixel.addons.weapon.FlxTypedWeapon.fireAtTouch","flixel/addons/weapon/FlxWeapon.hx",302,0x017a22ba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Touch,"Touch")
	HX_STACK_LINE(303)
	bool tmp = (Touch == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(303)
	::flixel::input::touch::FlxTouch tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(303)
	if ((tmp)){
		HX_STACK_LINE(303)
		::flixel::input::touch::FlxTouchManager tmp2 = ::flixel::FlxG_obj::touches;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(303)
		tmp1 = tmp2->getFirst();
	}
	else{
		HX_STACK_LINE(303)
		tmp1 = Touch;
	}
	HX_STACK_LINE(303)
	::flixel::input::touch::FlxTouch touch = tmp1;		HX_STACK_VAR(touch,"touch");
	HX_STACK_LINE(304)
	bool tmp2 = (touch != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(304)
	if ((tmp2)){
		HX_STACK_LINE(305)
		::flixel::input::touch::FlxTouch tmp3 = touch;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(305)
		::flixel::addons::weapon::FlxWeaponFireMode tmp4 = ::flixel::addons::weapon::FlxWeaponFireMode_obj::FIRE_AT_TOUCH(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(305)
		bool tmp5 = this->runFire(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(305)
		return tmp5;
	}
	else{
		HX_STACK_LINE(307)
		return false;
	}
	HX_STACK_LINE(304)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedWeapon_obj,fireAtTouch,return )

bool FlxTypedWeapon_obj::fireAtPosition( int X,int Y){
	HX_STACK_FRAME("flixel.addons.weapon.FlxTypedWeapon","fireAtPosition",0xcd83e8c3,"flixel.addons.weapon.FlxTypedWeapon.fireAtPosition","flixel/addons/weapon/FlxWeapon.hx",319,0x017a22ba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_LINE(320)
	int tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(320)
	int tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(320)
	::flixel::addons::weapon::FlxWeaponFireMode tmp2 = ::flixel::addons::weapon::FlxWeaponFireMode_obj::FIRE_AT_POSITION(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(320)
	bool tmp3 = this->runFire(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(320)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedWeapon_obj,fireAtPosition,return )

bool FlxTypedWeapon_obj::fireAtTarget( ::flixel::FlxSprite Target){
	HX_STACK_FRAME("flixel.addons.weapon.FlxTypedWeapon","fireAtTarget",0x3d1c20eb,"flixel.addons.weapon.FlxTypedWeapon.fireAtTarget","flixel/addons/weapon/FlxWeapon.hx",330,0x017a22ba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Target,"Target")
	HX_STACK_LINE(331)
	::flixel::FlxSprite tmp = Target;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(331)
	::flixel::addons::weapon::FlxWeaponFireMode tmp1 = ::flixel::addons::weapon::FlxWeaponFireMode_obj::FIRE_AT_TARGET(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(331)
	bool tmp2 = this->runFire(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(331)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedWeapon_obj,fireAtTarget,return )

bool FlxTypedWeapon_obj::fireFromAngle( ::flixel::util::helpers::FlxBounds angle){
	HX_STACK_FRAME("flixel.addons.weapon.FlxTypedWeapon","fireFromAngle",0xe4de3fe2,"flixel.addons.weapon.FlxTypedWeapon.fireFromAngle","flixel/addons/weapon/FlxWeapon.hx",341,0x017a22ba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(angle,"angle")
	HX_STACK_LINE(342)
	::flixel::util::helpers::FlxBounds tmp = angle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(342)
	::flixel::addons::weapon::FlxWeaponFireMode tmp1 = ::flixel::addons::weapon::FlxWeaponFireMode_obj::FIRE_FROM_ANGLE(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(342)
	bool tmp2 = this->runFire(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(342)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedWeapon_obj,fireFromAngle,return )

bool FlxTypedWeapon_obj::fireFromParentAngle( ::flixel::util::helpers::FlxBounds angle){
	HX_STACK_FRAME("flixel.addons.weapon.FlxTypedWeapon","fireFromParentAngle",0x347fa798,"flixel.addons.weapon.FlxTypedWeapon.fireFromParentAngle","flixel/addons/weapon/FlxWeapon.hx",351,0x017a22ba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(angle,"angle")
	HX_STACK_LINE(352)
	::flixel::util::helpers::FlxBounds tmp = angle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(352)
	::flixel::addons::weapon::FlxWeaponFireMode tmp1 = ::flixel::addons::weapon::FlxWeaponFireMode_obj::FIRE_FROM_PARENT_ANGLE(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(352)
	bool tmp2 = this->runFire(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(352)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedWeapon_obj,fireFromParentAngle,return )

Void FlxTypedWeapon_obj::setPreFireCallback( Dynamic Callback,::flixel::_system::FlxSound Sound){
{
		HX_STACK_FRAME("flixel.addons.weapon.FlxTypedWeapon","setPreFireCallback",0xf3bdd80d,"flixel.addons.weapon.FlxTypedWeapon.setPreFireCallback","flixel/addons/weapon/FlxWeapon.hx",362,0x017a22ba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Callback,"Callback")
		HX_STACK_ARG(Sound,"Sound")
		HX_STACK_LINE(363)
		this->onPreFireCallback = Callback;
		HX_STACK_LINE(364)
		this->onPreFireSound = Sound;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedWeapon_obj,setPreFireCallback,(void))

Void FlxTypedWeapon_obj::setPostFireCallback( Dynamic Callback,::flixel::_system::FlxSound Sound){
{
		HX_STACK_FRAME("flixel.addons.weapon.FlxTypedWeapon","setPostFireCallback",0x49abb58c,"flixel.addons.weapon.FlxTypedWeapon.setPostFireCallback","flixel/addons/weapon/FlxWeapon.hx",374,0x017a22ba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Callback,"Callback")
		HX_STACK_ARG(Sound,"Sound")
		HX_STACK_LINE(375)
		this->onPostFireCallback = Callback;
		HX_STACK_LINE(376)
		this->onPostFireSound = Sound;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedWeapon_obj,setPostFireCallback,(void))

Void FlxTypedWeapon_obj::bulletsOverlap( ::flixel::FlxBasic ObjectOrGroup,Dynamic NotifyCallBack,hx::Null< bool >  __o_SkipParent){
bool SkipParent = __o_SkipParent.Default(true);
	HX_STACK_FRAME("flixel.addons.weapon.FlxTypedWeapon","bulletsOverlap",0x91440847,"flixel.addons.weapon.FlxTypedWeapon.bulletsOverlap","flixel/addons/weapon/FlxWeapon.hx",387,0x017a22ba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(NotifyCallBack,"NotifyCallBack")
	HX_STACK_ARG(SkipParent,"SkipParent")
{
		HX_STACK_LINE(388)
		::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(388)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(388)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(388)
		if ((tmp1)){
			HX_STACK_LINE(388)
			::flixel::group::FlxTypedGroup tmp3 = this->group;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(388)
			::flixel::group::FlxTypedGroup tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(388)
			int tmp5 = tmp4->length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(388)
			tmp2 = (tmp5 > (int)0);
		}
		else{
			HX_STACK_LINE(388)
			tmp2 = false;
		}
		HX_STACK_LINE(388)
		if ((tmp2)){
			HX_STACK_LINE(390)
			this->skipParentCollision = SkipParent;
			HX_STACK_LINE(391)
			::flixel::FlxBasic tmp3 = ObjectOrGroup;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(391)
			::flixel::group::FlxTypedGroup tmp4 = this->group;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(391)
			bool tmp5 = (NotifyCallBack != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(391)
			Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(391)
			if ((tmp5)){
				HX_STACK_LINE(391)
				tmp6 = NotifyCallBack;
			}
			else{
				HX_STACK_LINE(391)
				tmp6 = this->onBulletHit_dyn();
			}
			HX_STACK_LINE(391)
			Dynamic tmp7 = this->shouldBulletHit_dyn();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(391)
			::flixel::FlxG_obj::overlap(tmp3,tmp4,tmp6,tmp7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTypedWeapon_obj,bulletsOverlap,(void))

bool FlxTypedWeapon_obj::shouldBulletHit( ::flixel::FlxObject Object,::flixel::FlxObject Bullet){
	HX_STACK_FRAME("flixel.addons.weapon.FlxTypedWeapon","shouldBulletHit",0x018740ad,"flixel.addons.weapon.FlxTypedWeapon.shouldBulletHit","flixel/addons/weapon/FlxWeapon.hx",396,0x017a22ba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(Bullet,"Bullet")
	HX_STACK_LINE(397)
	::flixel::FlxSprite tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(397)
	::flixel::FlxObject tmp1 = Object;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(397)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(397)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(397)
	if ((tmp2)){
		HX_STACK_LINE(397)
		tmp3 = this->skipParentCollision;
	}
	else{
		HX_STACK_LINE(397)
		tmp3 = false;
	}
	HX_STACK_LINE(397)
	if ((tmp3)){
		HX_STACK_LINE(399)
		return false;
	}
	HX_STACK_LINE(402)
	::flixel::FlxObject tmp4 = Object;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(402)
	bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::flixel::tile::FlxTilemap >());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(402)
	if ((tmp5)){
		HX_STACK_LINE(404)
		::flixel::tile::FlxTilemap tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(404)
		tmp6 = hx::TCast< ::flixel::tile::FlxTilemap >::cast(Object);
		HX_STACK_LINE(404)
		::flixel::FlxObject tmp7 = Bullet;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(404)
		bool tmp8 = tmp6->overlapsWithCallback(tmp7,null(),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(404)
		return tmp8;
	}
	else{
		HX_STACK_LINE(408)
		return true;
	}
	HX_STACK_LINE(402)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedWeapon_obj,shouldBulletHit,return )

Void FlxTypedWeapon_obj::onBulletHit( ::flixel::FlxObject Object,::flixel::FlxObject Bullet){
{
		HX_STACK_FRAME("flixel.addons.weapon.FlxTypedWeapon","onBulletHit",0x2cec86c1,"flixel.addons.weapon.FlxTypedWeapon.onBulletHit","flixel/addons/weapon/FlxWeapon.hx",414,0x017a22ba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Object,"Object")
		HX_STACK_ARG(Bullet,"Bullet")
		HX_STACK_LINE(414)
		Bullet->kill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedWeapon_obj,onBulletHit,(void))

Void FlxTypedWeapon_obj::internalFireAtPoint( Dynamic bullet,::flixel::math::FlxPoint point){
{
		HX_STACK_FRAME("flixel.addons.weapon.FlxTypedWeapon","internalFireAtPoint",0x71d12eb9,"flixel.addons.weapon.FlxTypedWeapon.internalFireAtPoint","flixel/addons/weapon/FlxWeapon.hx",418,0x017a22ba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bullet,"bullet")
		HX_STACK_ARG(point,"point")
		HX_STACK_LINE(419)
		{
			HX_STACK_LINE(419)
			::flixel::addons::weapon::FlxWeaponSpeedMode tmp = this->speedMode;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(419)
			::flixel::addons::weapon::FlxWeaponSpeedMode _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(419)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(419)
					::flixel::util::helpers::FlxBounds tmp1 = (::flixel::addons::weapon::FlxWeaponSpeedMode(_g))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(419)
					::flixel::util::helpers::FlxBounds speed = tmp1;		HX_STACK_VAR(speed,"speed");
					HX_STACK_LINE(421)
					{
						HX_STACK_LINE(422)
						Dynamic tmp2 = bullet;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(422)
						::flixel::math::FlxPoint tmp3 = point;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(422)
						::flixel::math::FlxRandom tmp4 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(422)
						Float tmp5 = speed->min;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(422)
						Float tmp6 = speed->max;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(422)
						Float tmp7 = tmp4->_float(tmp5,tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(422)
						::flixel::math::FlxVelocity_obj::moveTowardsPoint(tmp2,tmp3,tmp7,null());
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(419)
					::flixel::util::helpers::FlxBounds tmp1 = (::flixel::addons::weapon::FlxWeaponSpeedMode(_g))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(419)
					::flixel::util::helpers::FlxBounds maxSpeed = tmp1;		HX_STACK_VAR(maxSpeed,"maxSpeed");
					HX_STACK_LINE(419)
					::flixel::util::helpers::FlxBounds tmp2 = (::flixel::addons::weapon::FlxWeaponSpeedMode(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(419)
					::flixel::util::helpers::FlxBounds acceleration = tmp2;		HX_STACK_VAR(acceleration,"acceleration");
					HX_STACK_LINE(424)
					{
						HX_STACK_LINE(426)
						Dynamic tmp3 = bullet;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(427)
						::flixel::math::FlxPoint tmp4 = point;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(428)
						::flixel::math::FlxRandom tmp5 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(428)
						Float tmp6 = acceleration->min;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(428)
						Float tmp7 = acceleration->max;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(428)
						Float tmp8 = tmp5->_float(tmp6,tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(429)
						::flixel::math::FlxRandom tmp9 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(429)
						Float tmp10 = maxSpeed->min;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(429)
						Float tmp11 = maxSpeed->max;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(429)
						Float tmp12 = tmp9->_float(tmp10,tmp11,null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(425)
						::flixel::math::FlxVelocity_obj::accelerateTowardsPoint(tmp3,tmp4,tmp8,tmp12);
					}
				}
				;break;
			}
		}
		HX_STACK_LINE(433)
		bool tmp = this->rotateBulletTowardsTarget;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(433)
		if ((tmp)){
			HX_STACK_LINE(435)
			Dynamic tmp1 = bullet;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(435)
			::flixel::math::FlxPoint tmp2 = point;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(435)
			Float tmp3 = ::flixel::math::FlxAngle_obj::angleBetweenPoint(tmp1,tmp2,true);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(435)
			bullet->__Field(HX_HCSTRING("set_angle","\x36","\x8c","\xdc","\x49"), hx::paccDynamic )(tmp3);
		}
		HX_STACK_LINE(438)
		{
			HX_STACK_LINE(438)
			bool tmp1 = point->_weak;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(438)
			if ((tmp1)){
				HX_STACK_LINE(438)
				point->put();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedWeapon_obj,internalFireAtPoint,(void))

Void FlxTypedWeapon_obj::internalFireFromAngle( Dynamic bullet,Float degrees){
{
		HX_STACK_FRAME("flixel.addons.weapon.FlxTypedWeapon","internalFireFromAngle",0x4c292d65,"flixel.addons.weapon.FlxTypedWeapon.internalFireFromAngle","flixel/addons/weapon/FlxWeapon.hx",442,0x017a22ba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bullet,"bullet")
		HX_STACK_ARG(degrees,"degrees")
		HX_STACK_LINE(443)
		Float tmp = degrees;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(443)
		Float tmp1 = ::Math_obj::PI;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(443)
		Float tmp2 = (Float(tmp1) / Float((int)180));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(443)
		Float tmp3 = (tmp * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(443)
		Float radians = tmp3;		HX_STACK_VAR(radians,"radians");
		HX_STACK_LINE(444)
		{
			HX_STACK_LINE(444)
			::flixel::addons::weapon::FlxWeaponSpeedMode tmp4 = this->speedMode;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(444)
			::flixel::addons::weapon::FlxWeaponSpeedMode _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(444)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(444)
					::flixel::util::helpers::FlxBounds tmp5 = (::flixel::addons::weapon::FlxWeaponSpeedMode(_g))->__Param(0);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(444)
					::flixel::util::helpers::FlxBounds speed = tmp5;		HX_STACK_VAR(speed,"speed");
					HX_STACK_LINE(446)
					{
						HX_STACK_LINE(448)
						::flixel::math::FlxPoint tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(448)
						{
							HX_STACK_LINE(448)
							::flixel::math::FlxRandom tmp7 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(448)
							Float tmp8 = speed->min;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(448)
							Float tmp9 = speed->max;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(448)
							Float tmp10 = tmp7->_float(tmp8,tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(448)
							Float Speed = tmp10;		HX_STACK_VAR(Speed,"Speed");
							HX_STACK_LINE(448)
							Float tmp11 = radians;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(448)
							Float tmp12 = ::Math_obj::PI;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(448)
							Float tmp13 = (Float((int)180) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(448)
							Float tmp14 = (tmp11 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(448)
							Float tmp15 = ::Math_obj::PI;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(448)
							Float tmp16 = (Float(tmp15) / Float((int)180));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(448)
							Float tmp17 = (tmp14 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(448)
							Float a = tmp17;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(448)
							{
								HX_STACK_LINE(448)
								Float tmp18 = a;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(448)
								Float tmp19 = ::Math_obj::cos(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(448)
								Float tmp20 = Speed;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(448)
								Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(448)
								Float X = tmp21;		HX_STACK_VAR(X,"X");
								HX_STACK_LINE(448)
								Float tmp22 = a;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(448)
								Float tmp23 = ::Math_obj::sin(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(448)
								Float tmp24 = Speed;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(448)
								Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(448)
								Float Y = tmp25;		HX_STACK_VAR(Y,"Y");
								HX_STACK_LINE(448)
								::flixel::util::FlxPool_flixel_math_FlxPoint tmp26 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(448)
								::flixel::math::FlxPoint tmp27 = tmp26->get();		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(448)
								Float tmp28 = X;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(448)
								Float tmp29 = Y;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(448)
								::flixel::math::FlxPoint tmp30 = tmp27->set(tmp28,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(448)
								::flixel::math::FlxPoint point = tmp30;		HX_STACK_VAR(point,"point");
								HX_STACK_LINE(448)
								point->_inPool = false;
								HX_STACK_LINE(448)
								tmp6 = point;
							}
						}
						HX_STACK_LINE(448)
						::flixel::math::FlxPoint velocity = tmp6;		HX_STACK_VAR(velocity,"velocity");
						HX_STACK_LINE(449)
						Float tmp7 = velocity->x;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(449)
						bullet->__Field(HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp7);
						HX_STACK_LINE(450)
						Float tmp8 = velocity->y;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(450)
						bullet->__Field(HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp8);
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(444)
					::flixel::util::helpers::FlxBounds tmp5 = (::flixel::addons::weapon::FlxWeaponSpeedMode(_g))->__Param(1);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(444)
					::flixel::util::helpers::FlxBounds maxSpeed = tmp5;		HX_STACK_VAR(maxSpeed,"maxSpeed");
					HX_STACK_LINE(444)
					::flixel::util::helpers::FlxBounds tmp6 = (::flixel::addons::weapon::FlxWeaponSpeedMode(_g))->__Param(0);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(444)
					::flixel::util::helpers::FlxBounds acceleration = tmp6;		HX_STACK_VAR(acceleration,"acceleration");
					HX_STACK_LINE(453)
					{
						HX_STACK_LINE(456)
						::flixel::math::FlxRandom tmp7 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(456)
						Float tmp8 = acceleration->min;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(456)
						Float tmp9 = acceleration->max;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(456)
						Float tmp10 = tmp7->_float(tmp8,tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(456)
						Float acceleration1 = tmp10;		HX_STACK_VAR(acceleration1,"acceleration1");
						HX_STACK_LINE(457)
						::flixel::math::FlxRandom tmp11 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(457)
						Float tmp12 = maxSpeed->min;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(457)
						Float tmp13 = maxSpeed->max;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(457)
						Float tmp14 = tmp11->_float(tmp12,tmp13,null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(457)
						Float maxSpeed1 = tmp14;		HX_STACK_VAR(maxSpeed1,"maxSpeed1");
						HX_STACK_LINE(453)
						bool resetVelocity = true;		HX_STACK_VAR(resetVelocity,"resetVelocity");
						HX_STACK_LINE(455)
						Float tmp15 = radians;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(453)
						Float tmp16 = ::Math_obj::sin(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(453)
						Float sin = tmp16;		HX_STACK_VAR(sin,"sin");
						HX_STACK_LINE(455)
						Float tmp17 = radians;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(453)
						Float tmp18 = ::Math_obj::cos(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(453)
						Float cos = tmp18;		HX_STACK_VAR(cos,"cos");
						HX_STACK_LINE(453)
						bool tmp19 = resetVelocity;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(453)
						if ((tmp19)){
							HX_STACK_LINE(453)
							bullet->__Field(HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )((int)0,(int)0);
						}
						HX_STACK_LINE(453)
						Float tmp20 = (cos * acceleration1);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(453)
						Float tmp21 = (sin * acceleration1);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(453)
						bullet->__Field(HX_HCSTRING("acceleration","\x40","\x00","\x61","\x9a"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp20,tmp21);
						HX_STACK_LINE(453)
						Float tmp22 = (cos * maxSpeed1);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(453)
						Float tmp23 = (sin * maxSpeed1);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(453)
						bullet->__Field(HX_HCSTRING("maxVelocity","\xe1","\x0c","\xc4","\x94"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp22,tmp23);
					}
				}
				;break;
			}
		}
		HX_STACK_LINE(461)
		bool tmp4 = this->rotateBulletTowardsTarget;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(461)
		if ((tmp4)){
			HX_STACK_LINE(463)
			Float tmp5 = radians;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(463)
			Float tmp6 = ::Math_obj::PI;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(463)
			Float tmp7 = (Float((int)180) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(463)
			Float tmp8 = (tmp5 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(463)
			bullet->__Field(HX_HCSTRING("set_angle","\x36","\x8c","\xdc","\x49"), hx::paccDynamic )(tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedWeapon_obj,internalFireFromAngle,(void))

::flixel::addons::weapon::FlxWeaponFireFrom FlxTypedWeapon_obj::set_fireFrom( ::flixel::addons::weapon::FlxWeaponFireFrom v){
	HX_STACK_FRAME("flixel.addons.weapon.FlxTypedWeapon","set_fireFrom",0xc968062e,"flixel.addons.weapon.FlxTypedWeapon.set_fireFrom","flixel/addons/weapon/FlxWeapon.hx",468,0x017a22ba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(469)
	switch( (int)(v->__Index())){
		case (int)0: {
			HX_STACK_LINE(469)
			::flixel::util::helpers::FlxBounds tmp = (::flixel::addons::weapon::FlxWeaponFireFrom(v))->__Param(1);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(469)
			::flixel::util::helpers::FlxBounds o = tmp;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(469)
			::flixel::FlxSprite tmp1 = (::flixel::addons::weapon::FlxWeaponFireFrom(v))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(469)
			::flixel::FlxSprite p = tmp1;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(472)
			this->parent = p;
		}
		;break;
		default: {
			HX_STACK_LINE(474)
			this->parent = null();
		}
	}
	HX_STACK_LINE(476)
	::flixel::addons::weapon::FlxWeaponFireFrom tmp = this->fireFrom = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(476)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedWeapon_obj,set_fireFrom,return )

int FlxTypedWeapon_obj::BULLET_UP;

int FlxTypedWeapon_obj::BULLET_DOWN;

int FlxTypedWeapon_obj::BULLET_LEFT;

int FlxTypedWeapon_obj::BULLET_RIGHT;

int FlxTypedWeapon_obj::BULLET_NORTH_EAST;

int FlxTypedWeapon_obj::BULLET_NORTH_WEST;

int FlxTypedWeapon_obj::BULLET_SOUTH_EAST;

int FlxTypedWeapon_obj::BULLET_SOUTH_WEST;


FlxTypedWeapon_obj::FlxTypedWeapon_obj()
{
}

void FlxTypedWeapon_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTypedWeapon);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(group,"group");
	HX_MARK_MEMBER_NAME(nextFire,"nextFire");
	HX_MARK_MEMBER_NAME(fireRate,"fireRate");
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(useParentDirection,"useParentDirection");
	HX_MARK_MEMBER_NAME(firePosition,"firePosition");
	HX_MARK_MEMBER_NAME(positionOffset,"positionOffset");
	HX_MARK_MEMBER_NAME(fireFrom,"fireFrom");
	HX_MARK_MEMBER_NAME(speedMode,"speedMode");
	HX_MARK_MEMBER_NAME(bulletLifeSpan,"bulletLifeSpan");
	HX_MARK_MEMBER_NAME(bulletElasticity,"bulletElasticity");
	HX_MARK_MEMBER_NAME(rotateBulletTowardsTarget,"rotateBulletTowardsTarget");
	HX_MARK_MEMBER_NAME(currentBullet,"currentBullet");
	HX_MARK_MEMBER_NAME(onPreFireCallback,"onPreFireCallback");
	HX_MARK_MEMBER_NAME(onPostFireCallback,"onPostFireCallback");
	HX_MARK_MEMBER_NAME(onPreFireSound,"onPreFireSound");
	HX_MARK_MEMBER_NAME(onPostFireSound,"onPostFireSound");
	HX_MARK_MEMBER_NAME(bulletFactory,"bulletFactory");
	HX_MARK_MEMBER_NAME(lastFired,"lastFired");
	HX_MARK_MEMBER_NAME(skipParentCollision,"skipParentCollision");
	HX_MARK_END_CLASS();
}

void FlxTypedWeapon_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(group,"group");
	HX_VISIT_MEMBER_NAME(nextFire,"nextFire");
	HX_VISIT_MEMBER_NAME(fireRate,"fireRate");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(useParentDirection,"useParentDirection");
	HX_VISIT_MEMBER_NAME(firePosition,"firePosition");
	HX_VISIT_MEMBER_NAME(positionOffset,"positionOffset");
	HX_VISIT_MEMBER_NAME(fireFrom,"fireFrom");
	HX_VISIT_MEMBER_NAME(speedMode,"speedMode");
	HX_VISIT_MEMBER_NAME(bulletLifeSpan,"bulletLifeSpan");
	HX_VISIT_MEMBER_NAME(bulletElasticity,"bulletElasticity");
	HX_VISIT_MEMBER_NAME(rotateBulletTowardsTarget,"rotateBulletTowardsTarget");
	HX_VISIT_MEMBER_NAME(currentBullet,"currentBullet");
	HX_VISIT_MEMBER_NAME(onPreFireCallback,"onPreFireCallback");
	HX_VISIT_MEMBER_NAME(onPostFireCallback,"onPostFireCallback");
	HX_VISIT_MEMBER_NAME(onPreFireSound,"onPreFireSound");
	HX_VISIT_MEMBER_NAME(onPostFireSound,"onPostFireSound");
	HX_VISIT_MEMBER_NAME(bulletFactory,"bulletFactory");
	HX_VISIT_MEMBER_NAME(lastFired,"lastFired");
	HX_VISIT_MEMBER_NAME(skipParentCollision,"skipParentCollision");
}

Dynamic FlxTypedWeapon_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"group") ) { return group; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { return bounds; }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"runFire") ) { return runFire_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nextFire") ) { return nextFire; }
		if (HX_FIELD_EQ(inName,"fireRate") ) { return fireRate; }
		if (HX_FIELD_EQ(inName,"fireFrom") ) { return fireFrom; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"speedMode") ) { return speedMode; }
		if (HX_FIELD_EQ(inName,"lastFired") ) { return lastFired; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fireAtMouse") ) { return fireAtMouse_dyn(); }
		if (HX_FIELD_EQ(inName,"fireAtTouch") ) { return fireAtTouch_dyn(); }
		if (HX_FIELD_EQ(inName,"onBulletHit") ) { return onBulletHit_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"firePosition") ) { return firePosition; }
		if (HX_FIELD_EQ(inName,"fireAtTarget") ) { return fireAtTarget_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fireFrom") ) { return set_fireFrom_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentBullet") ) { return currentBullet; }
		if (HX_FIELD_EQ(inName,"bulletFactory") ) { return bulletFactory; }
		if (HX_FIELD_EQ(inName,"fireFromAngle") ) { return fireFromAngle_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"positionOffset") ) { return positionOffset; }
		if (HX_FIELD_EQ(inName,"bulletLifeSpan") ) { return bulletLifeSpan; }
		if (HX_FIELD_EQ(inName,"onPreFireSound") ) { return onPreFireSound; }
		if (HX_FIELD_EQ(inName,"fireAtPosition") ) { return fireAtPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"bulletsOverlap") ) { return bulletsOverlap_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onPostFireSound") ) { return onPostFireSound; }
		if (HX_FIELD_EQ(inName,"shouldBulletHit") ) { return shouldBulletHit_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bulletElasticity") ) { return bulletElasticity; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onPreFireCallback") ) { return onPreFireCallback; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"useParentDirection") ) { return useParentDirection; }
		if (HX_FIELD_EQ(inName,"onPostFireCallback") ) { return onPostFireCallback; }
		if (HX_FIELD_EQ(inName,"setPreFireCallback") ) { return setPreFireCallback_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"skipParentCollision") ) { return skipParentCollision; }
		if (HX_FIELD_EQ(inName,"fireFromParentAngle") ) { return fireFromParentAngle_dyn(); }
		if (HX_FIELD_EQ(inName,"setPostFireCallback") ) { return setPostFireCallback_dyn(); }
		if (HX_FIELD_EQ(inName,"internalFireAtPoint") ) { return internalFireAtPoint_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"fireFromParentFacing") ) { return fireFromParentFacing_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"internalFireFromAngle") ) { return internalFireFromAngle_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"rotateBulletTowardsTarget") ) { return rotateBulletTowardsTarget; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTypedWeapon_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"group") ) { group=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast< ::flixel::math::FlxRect >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nextFire") ) { nextFire=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fireRate") ) { fireRate=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fireFrom") ) { if (inCallProp == hx::paccAlways) return set_fireFrom(inValue);fireFrom=inValue.Cast< ::flixel::addons::weapon::FlxWeaponFireFrom >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"speedMode") ) { speedMode=inValue.Cast< ::flixel::addons::weapon::FlxWeaponSpeedMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastFired") ) { lastFired=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"firePosition") ) { firePosition=inValue.Cast< ::flixel::util::helpers::FlxBounds >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentBullet") ) { currentBullet=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bulletFactory") ) { bulletFactory=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"positionOffset") ) { positionOffset=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bulletLifeSpan") ) { bulletLifeSpan=inValue.Cast< ::flixel::util::helpers::FlxBounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onPreFireSound") ) { onPreFireSound=inValue.Cast< ::flixel::_system::FlxSound >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onPostFireSound") ) { onPostFireSound=inValue.Cast< ::flixel::_system::FlxSound >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bulletElasticity") ) { bulletElasticity=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onPreFireCallback") ) { onPreFireCallback=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"useParentDirection") ) { useParentDirection=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onPostFireCallback") ) { onPostFireCallback=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"skipParentCollision") ) { skipParentCollision=inValue.Cast< bool >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"rotateBulletTowardsTarget") ) { rotateBulletTowardsTarget=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTypedWeapon_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"));
	outFields->push(HX_HCSTRING("nextFire","\x49","\x7a","\x88","\xef"));
	outFields->push(HX_HCSTRING("fireRate","\xb6","\x65","\x0c","\xcb"));
	outFields->push(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("useParentDirection","\x2e","\x0b","\x24","\x57"));
	outFields->push(HX_HCSTRING("firePosition","\x7f","\xd6","\x93","\x8c"));
	outFields->push(HX_HCSTRING("positionOffset","\x1c","\x11","\x32","\xb5"));
	outFields->push(HX_HCSTRING("fireFrom","\x40","\xb8","\x2a","\xc3"));
	outFields->push(HX_HCSTRING("speedMode","\x8a","\x66","\xd3","\x59"));
	outFields->push(HX_HCSTRING("bulletLifeSpan","\x48","\xa6","\x08","\x25"));
	outFields->push(HX_HCSTRING("bulletElasticity","\x5b","\xe0","\x77","\x7f"));
	outFields->push(HX_HCSTRING("rotateBulletTowardsTarget","\x90","\x36","\x53","\x67"));
	outFields->push(HX_HCSTRING("currentBullet","\x5b","\x13","\xed","\xb7"));
	outFields->push(HX_HCSTRING("onPreFireSound","\x55","\x38","\x64","\x4c"));
	outFields->push(HX_HCSTRING("onPostFireSound","\x1a","\x2c","\xac","\xb1"));
	outFields->push(HX_HCSTRING("lastFired","\xb8","\x99","\x4a","\x4d"));
	outFields->push(HX_HCSTRING("skipParentCollision","\x29","\xa6","\xa2","\x20"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(FlxTypedWeapon_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(FlxTypedWeapon_obj,group),HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99")},
	{hx::fsInt,(int)offsetof(FlxTypedWeapon_obj,nextFire),HX_HCSTRING("nextFire","\x49","\x7a","\x88","\xef")},
	{hx::fsInt,(int)offsetof(FlxTypedWeapon_obj,fireRate),HX_HCSTRING("fireRate","\xb6","\x65","\x0c","\xcb")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(int)offsetof(FlxTypedWeapon_obj,bounds),HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(FlxTypedWeapon_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsBool,(int)offsetof(FlxTypedWeapon_obj,useParentDirection),HX_HCSTRING("useParentDirection","\x2e","\x0b","\x24","\x57")},
	{hx::fsObject /*::flixel::util::helpers::FlxBounds*/ ,(int)offsetof(FlxTypedWeapon_obj,firePosition),HX_HCSTRING("firePosition","\x7f","\xd6","\x93","\x8c")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxTypedWeapon_obj,positionOffset),HX_HCSTRING("positionOffset","\x1c","\x11","\x32","\xb5")},
	{hx::fsObject /*::flixel::addons::weapon::FlxWeaponFireFrom*/ ,(int)offsetof(FlxTypedWeapon_obj,fireFrom),HX_HCSTRING("fireFrom","\x40","\xb8","\x2a","\xc3")},
	{hx::fsObject /*::flixel::addons::weapon::FlxWeaponSpeedMode*/ ,(int)offsetof(FlxTypedWeapon_obj,speedMode),HX_HCSTRING("speedMode","\x8a","\x66","\xd3","\x59")},
	{hx::fsObject /*::flixel::util::helpers::FlxBounds*/ ,(int)offsetof(FlxTypedWeapon_obj,bulletLifeSpan),HX_HCSTRING("bulletLifeSpan","\x48","\xa6","\x08","\x25")},
	{hx::fsFloat,(int)offsetof(FlxTypedWeapon_obj,bulletElasticity),HX_HCSTRING("bulletElasticity","\x5b","\xe0","\x77","\x7f")},
	{hx::fsBool,(int)offsetof(FlxTypedWeapon_obj,rotateBulletTowardsTarget),HX_HCSTRING("rotateBulletTowardsTarget","\x90","\x36","\x53","\x67")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxTypedWeapon_obj,currentBullet),HX_HCSTRING("currentBullet","\x5b","\x13","\xed","\xb7")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxTypedWeapon_obj,onPreFireCallback),HX_HCSTRING("onPreFireCallback","\xff","\x65","\xde","\x2b")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxTypedWeapon_obj,onPostFireCallback),HX_HCSTRING("onPostFireCallback","\x5a","\x5b","\x07","\x2e")},
	{hx::fsObject /*::flixel::_system::FlxSound*/ ,(int)offsetof(FlxTypedWeapon_obj,onPreFireSound),HX_HCSTRING("onPreFireSound","\x55","\x38","\x64","\x4c")},
	{hx::fsObject /*::flixel::_system::FlxSound*/ ,(int)offsetof(FlxTypedWeapon_obj,onPostFireSound),HX_HCSTRING("onPostFireSound","\x1a","\x2c","\xac","\xb1")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxTypedWeapon_obj,bulletFactory),HX_HCSTRING("bulletFactory","\xa8","\x5e","\xb0","\xd6")},
	{hx::fsInt,(int)offsetof(FlxTypedWeapon_obj,lastFired),HX_HCSTRING("lastFired","\xb8","\x99","\x4a","\x4d")},
	{hx::fsBool,(int)offsetof(FlxTypedWeapon_obj,skipParentCollision),HX_HCSTRING("skipParentCollision","\x29","\xa6","\xa2","\x20")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FlxTypedWeapon_obj::BULLET_UP,HX_HCSTRING("BULLET_UP","\x78","\xf7","\xef","\x0d")},
	{hx::fsInt,(void *) &FlxTypedWeapon_obj::BULLET_DOWN,HX_HCSTRING("BULLET_DOWN","\xbf","\xae","\x39","\x58")},
	{hx::fsInt,(void *) &FlxTypedWeapon_obj::BULLET_LEFT,HX_HCSTRING("BULLET_LEFT","\x64","\xbe","\x7b","\x5d")},
	{hx::fsInt,(void *) &FlxTypedWeapon_obj::BULLET_RIGHT,HX_HCSTRING("BULLET_RIGHT","\xbf","\xe6","\xd7","\xe5")},
	{hx::fsInt,(void *) &FlxTypedWeapon_obj::BULLET_NORTH_EAST,HX_HCSTRING("BULLET_NORTH_EAST","\x34","\x6f","\x31","\x6f")},
	{hx::fsInt,(void *) &FlxTypedWeapon_obj::BULLET_NORTH_WEST,HX_HCSTRING("BULLET_NORTH_WEST","\x66","\x4f","\x1a","\x7b")},
	{hx::fsInt,(void *) &FlxTypedWeapon_obj::BULLET_SOUTH_EAST,HX_HCSTRING("BULLET_SOUTH_EAST","\xec","\x1c","\x3d","\xdc")},
	{hx::fsInt,(void *) &FlxTypedWeapon_obj::BULLET_SOUTH_WEST,HX_HCSTRING("BULLET_SOUTH_WEST","\x1e","\xfd","\x25","\xe8")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"),
	HX_HCSTRING("nextFire","\x49","\x7a","\x88","\xef"),
	HX_HCSTRING("fireRate","\xb6","\x65","\x0c","\xcb"),
	HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("useParentDirection","\x2e","\x0b","\x24","\x57"),
	HX_HCSTRING("firePosition","\x7f","\xd6","\x93","\x8c"),
	HX_HCSTRING("positionOffset","\x1c","\x11","\x32","\xb5"),
	HX_HCSTRING("fireFrom","\x40","\xb8","\x2a","\xc3"),
	HX_HCSTRING("speedMode","\x8a","\x66","\xd3","\x59"),
	HX_HCSTRING("bulletLifeSpan","\x48","\xa6","\x08","\x25"),
	HX_HCSTRING("bulletElasticity","\x5b","\xe0","\x77","\x7f"),
	HX_HCSTRING("rotateBulletTowardsTarget","\x90","\x36","\x53","\x67"),
	HX_HCSTRING("currentBullet","\x5b","\x13","\xed","\xb7"),
	HX_HCSTRING("onPreFireCallback","\xff","\x65","\xde","\x2b"),
	HX_HCSTRING("onPostFireCallback","\x5a","\x5b","\x07","\x2e"),
	HX_HCSTRING("onPreFireSound","\x55","\x38","\x64","\x4c"),
	HX_HCSTRING("onPostFireSound","\x1a","\x2c","\xac","\xb1"),
	HX_HCSTRING("bulletFactory","\xa8","\x5e","\xb0","\xd6"),
	HX_HCSTRING("lastFired","\xb8","\x99","\x4a","\x4d"),
	HX_HCSTRING("skipParentCollision","\x29","\xa6","\xa2","\x20"),
	HX_HCSTRING("runFire","\xa1","\xe8","\xf8","\xd0"),
	HX_HCSTRING("fireFromParentFacing","\x44","\x58","\xff","\x62"),
	HX_HCSTRING("fireAtMouse","\x1c","\x37","\x7d","\x47"),
	HX_HCSTRING("fireAtTouch","\xb6","\x38","\x4b","\x4f"),
	HX_HCSTRING("fireAtPosition","\x12","\x34","\xfa","\x58"),
	HX_HCSTRING("fireAtTarget","\x7a","\xaa","\xf1","\x00"),
	HX_HCSTRING("fireFromAngle","\x73","\x13","\xe1","\x7b"),
	HX_HCSTRING("fireFromParentAngle","\xe9","\xfd","\x8a","\xb7"),
	HX_HCSTRING("setPreFireCallback","\xdc","\x76","\x5d","\xfc"),
	HX_HCSTRING("setPostFireCallback","\xdd","\x0b","\xb7","\xcc"),
	HX_HCSTRING("bulletsOverlap","\x96","\x53","\xba","\x1c"),
	HX_HCSTRING("shouldBulletHit","\x7e","\xda","\x92","\x7d"),
	HX_HCSTRING("onBulletHit","\x12","\xa4","\xb0","\x34"),
	HX_HCSTRING("internalFireAtPoint","\x0a","\x85","\xdc","\xf4"),
	HX_HCSTRING("internalFireFromAngle","\xf6","\x79","\x73","\x29"),
	HX_HCSTRING("set_fireFrom","\xbd","\x8f","\x3d","\x8d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTypedWeapon_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxTypedWeapon_obj::BULLET_UP,"BULLET_UP");
	HX_MARK_MEMBER_NAME(FlxTypedWeapon_obj::BULLET_DOWN,"BULLET_DOWN");
	HX_MARK_MEMBER_NAME(FlxTypedWeapon_obj::BULLET_LEFT,"BULLET_LEFT");
	HX_MARK_MEMBER_NAME(FlxTypedWeapon_obj::BULLET_RIGHT,"BULLET_RIGHT");
	HX_MARK_MEMBER_NAME(FlxTypedWeapon_obj::BULLET_NORTH_EAST,"BULLET_NORTH_EAST");
	HX_MARK_MEMBER_NAME(FlxTypedWeapon_obj::BULLET_NORTH_WEST,"BULLET_NORTH_WEST");
	HX_MARK_MEMBER_NAME(FlxTypedWeapon_obj::BULLET_SOUTH_EAST,"BULLET_SOUTH_EAST");
	HX_MARK_MEMBER_NAME(FlxTypedWeapon_obj::BULLET_SOUTH_WEST,"BULLET_SOUTH_WEST");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTypedWeapon_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxTypedWeapon_obj::BULLET_UP,"BULLET_UP");
	HX_VISIT_MEMBER_NAME(FlxTypedWeapon_obj::BULLET_DOWN,"BULLET_DOWN");
	HX_VISIT_MEMBER_NAME(FlxTypedWeapon_obj::BULLET_LEFT,"BULLET_LEFT");
	HX_VISIT_MEMBER_NAME(FlxTypedWeapon_obj::BULLET_RIGHT,"BULLET_RIGHT");
	HX_VISIT_MEMBER_NAME(FlxTypedWeapon_obj::BULLET_NORTH_EAST,"BULLET_NORTH_EAST");
	HX_VISIT_MEMBER_NAME(FlxTypedWeapon_obj::BULLET_NORTH_WEST,"BULLET_NORTH_WEST");
	HX_VISIT_MEMBER_NAME(FlxTypedWeapon_obj::BULLET_SOUTH_EAST,"BULLET_SOUTH_EAST");
	HX_VISIT_MEMBER_NAME(FlxTypedWeapon_obj::BULLET_SOUTH_WEST,"BULLET_SOUTH_WEST");
};

#endif

hx::Class FlxTypedWeapon_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("BULLET_UP","\x78","\xf7","\xef","\x0d"),
	HX_HCSTRING("BULLET_DOWN","\xbf","\xae","\x39","\x58"),
	HX_HCSTRING("BULLET_LEFT","\x64","\xbe","\x7b","\x5d"),
	HX_HCSTRING("BULLET_RIGHT","\xbf","\xe6","\xd7","\xe5"),
	HX_HCSTRING("BULLET_NORTH_EAST","\x34","\x6f","\x31","\x6f"),
	HX_HCSTRING("BULLET_NORTH_WEST","\x66","\x4f","\x1a","\x7b"),
	HX_HCSTRING("BULLET_SOUTH_EAST","\xec","\x1c","\x3d","\xdc"),
	HX_HCSTRING("BULLET_SOUTH_WEST","\x1e","\xfd","\x25","\xe8"),
	::String(null()) };

void FlxTypedWeapon_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.weapon.FlxTypedWeapon","\x9d","\x38","\xd5","\x59");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxTypedWeapon_obj >;
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

void FlxTypedWeapon_obj::__boot()
{
	BULLET_UP= (int)-90;
	BULLET_DOWN= (int)90;
	BULLET_LEFT= (int)180;
	BULLET_RIGHT= (int)0;
	BULLET_NORTH_EAST= (int)-45;
	BULLET_NORTH_WEST= (int)-135;
	BULLET_SOUTH_EAST= (int)45;
	BULLET_SOUTH_WEST= (int)135;
}

} // end namespace flixel
} // end namespace addons
} // end namespace weapon
