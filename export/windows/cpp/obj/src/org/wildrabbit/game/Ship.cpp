#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_effects_FlxTrail
#include <flixel/addons/effects/FlxTrail.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_effects_FlxFlicker
#include <flixel/effects/FlxFlicker.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxEmitterMode
#include <flixel/effects/particles/FlxEmitterMode.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxTypedEmitter
#include <flixel/effects/particles/FlxTypedEmitter.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxAngle
#include <flixel/math/FlxAngle.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxVector
#include <flixel/math/FlxVector.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxVector
#include <flixel/util/FlxPool_flixel_math_FlxVector.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
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
#ifndef INCLUDED_flixel_util_helpers_FlxRangeBounds
#include <flixel/util/helpers/FlxRangeBounds.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BlendMode
#include <openfl/_legacy/display/BlendMode.h>
#endif
#ifndef INCLUDED_org_wildrabbit_FlxTimedEmitter
#include <org/wildrabbit/FlxTimedEmitter.h>
#endif
#ifndef INCLUDED_org_wildrabbit_GameInput
#include <org/wildrabbit/GameInput.h>
#endif
#ifndef INCLUDED_org_wildrabbit_PlayState
#include <org/wildrabbit/PlayState.h>
#endif
#ifndef INCLUDED_org_wildrabbit_game_BaseBullet
#include <org/wildrabbit/game/BaseBullet.h>
#endif
#ifndef INCLUDED_org_wildrabbit_game_Bullet
#include <org/wildrabbit/game/Bullet.h>
#endif
#ifndef INCLUDED_org_wildrabbit_game_Entity
#include <org/wildrabbit/game/Entity.h>
#endif
#ifndef INCLUDED_org_wildrabbit_game_Ship
#include <org/wildrabbit/game/Ship.h>
#endif
#ifndef INCLUDED_org_wildrabbit_game_World
#include <org/wildrabbit/game/World.h>
#endif
namespace org{
namespace wildrabbit{
namespace game{

Void Ship_obj::__construct(::org::wildrabbit::PlayState parent,Float x,Float y,Float speed)
{
HX_STACK_FRAME("org.wildrabbit.game.Ship","new",0x5efaac0a,"org.wildrabbit.game.Ship.new","org/wildrabbit/game/Ship.hx",107,0x6f57f265)
HX_STACK_THIS(this)
HX_STACK_ARG(parent,"parent")
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
HX_STACK_ARG(speed,"speed")
{
	HX_STACK_LINE(108)
	::org::wildrabbit::PlayState tmp = parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(108)
	Float tmp1 = speed;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(108)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(109)
	this->loadGraphic(HX_HCSTRING("assets/images/ship_shapes.png","\x05","\xf8","\xbc","\x23"),true,(int)32,(int)32,null(),null());
	HX_STACK_LINE(110)
	::flixel::animation::FlxAnimationController tmp2 = this->animation;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(110)
	tmp2->add(HX_HCSTRING("circle","\x10","\x72","\x0d","\x56"),Array_obj< int >::__new().Add((int)0),(int)24,true,false,false);
	HX_STACK_LINE(111)
	::flixel::animation::FlxAnimationController tmp3 = this->animation;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(111)
	tmp3->add(HX_HCSTRING("triangle","\xc8","\xbe","\xc5","\x8d"),Array_obj< int >::__new().Add((int)1),(int)24,true,false,false);
	HX_STACK_LINE(112)
	::flixel::animation::FlxAnimationController tmp4 = this->animation;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(112)
	tmp4->add(HX_HCSTRING("square","\x9d","\x00","\xf2","\x58"),Array_obj< int >::__new().Add((int)2),(int)24,true,false,false);
	HX_STACK_LINE(114)
	this->switchShape((int)0);
	HX_STACK_LINE(116)
	this->mCanShoot = true;
	HX_STACK_LINE(117)
	this->mJustCollided = false;
	HX_STACK_LINE(119)
	::flixel::math::FlxVector tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(119)
	{
		HX_STACK_LINE(119)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(119)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(119)
		::flixel::util::FlxPool_flixel_math_FlxVector tmp6 = ::flixel::math::FlxVector_obj::_pool;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(119)
		::flixel::math::FlxVector tmp7 = tmp6->get();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(119)
		Float tmp8 = X;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(119)
		Float tmp9 = Y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(119)
		::flixel::math::FlxVector tmp10 = hx::TCast< ::flixel::math::FlxVector >::cast(tmp7->set(tmp8,tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(119)
		::flixel::math::FlxVector vector = tmp10;		HX_STACK_VAR(vector,"vector");
		HX_STACK_LINE(119)
		vector->_inPool = false;
		HX_STACK_LINE(119)
		tmp5 = vector;
	}
	HX_STACK_LINE(119)
	this->velocity = tmp5;
	HX_STACK_LINE(120)
	::flixel::math::FlxVector tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(120)
	{
		HX_STACK_LINE(120)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(120)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(120)
		::flixel::util::FlxPool_flixel_math_FlxVector tmp7 = ::flixel::math::FlxVector_obj::_pool;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(120)
		::flixel::math::FlxVector tmp8 = tmp7->get();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(120)
		Float tmp9 = X;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(120)
		Float tmp10 = Y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(120)
		::flixel::math::FlxVector tmp11 = hx::TCast< ::flixel::math::FlxVector >::cast(tmp8->set(tmp9,tmp10));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(120)
		::flixel::math::FlxVector vector = tmp11;		HX_STACK_VAR(vector,"vector");
		HX_STACK_LINE(120)
		vector->_inPool = false;
		HX_STACK_LINE(120)
		tmp6 = vector;
	}
	HX_STACK_LINE(120)
	this->acceleration = tmp6;
	HX_STACK_LINE(121)
	::flixel::math::FlxPoint tmp7 = this->maxVelocity;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(121)
	Float tmp8 = speed;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(121)
	Float tmp9 = speed;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(121)
	tmp7->set(tmp8,tmp9);
	HX_STACK_LINE(122)
	Float tmp10 = ::flixel::math::FlxAngle_obj::angleBetweenMouse(hx::ObjectPtr<OBJ_>(this),true);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(122)
	Float tmp11 = ::flixel::math::FlxAngle_obj::wrapAngle(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(122)
	this->set_angle(tmp11);
	HX_STACK_LINE(124)
	::org::wildrabbit::PlayState tmp12 = this->mParent;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(124)
	this->mWorld = tmp12->mWorld;
	HX_STACK_LINE(125)
	{
		HX_STACK_LINE(125)
		::flixel::math::FlxPoint tmp13 = this->origin;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(125)
		int tmp14 = this->frameWidth;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(125)
		Float tmp15 = (tmp14 * ((Float)0.5));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(125)
		int tmp16 = this->frameHeight;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(125)
		Float tmp17 = (tmp16 * ((Float)0.5));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(125)
		tmp13->set(tmp15,tmp17);
	}
	HX_STACK_LINE(126)
	Float tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(126)
	Float tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(126)
	this->setPosition(tmp13,tmp14);
	HX_STACK_LINE(128)
	::flixel::math::FlxPoint tmp15;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(128)
	{
		HX_STACK_LINE(128)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(128)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(128)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp16 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(128)
		::flixel::math::FlxPoint tmp17 = tmp16->get();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(128)
		Float tmp18 = X;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(128)
		Float tmp19 = Y;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(128)
		::flixel::math::FlxPoint tmp20 = tmp17->set(tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(128)
		::flixel::math::FlxPoint point = tmp20;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(128)
		point->_inPool = false;
		HX_STACK_LINE(128)
		tmp15 = point;
	}
	HX_STACK_LINE(128)
	this->mWeaponOffset = tmp15;
	HX_STACK_LINE(129)
	this->updateOffset();
	HX_STACK_LINE(131)
	::flixel::util::FlxTimer tmp16 = ::flixel::util::FlxTimer_obj::__new();		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(131)
	this->mShootTimer = tmp16;
	HX_STACK_LINE(132)
	::flixel::util::FlxTimer tmp17 = ::flixel::util::FlxTimer_obj::__new();		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(132)
	this->mHitTimer = tmp17;
	HX_STACK_LINE(134)
	this->mCanPlayShoot = true;
	HX_STACK_LINE(135)
	::flixel::util::FlxTimer tmp18 = ::flixel::util::FlxTimer_obj::__new();		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(135)
	this->mShootSoundTimer = tmp18;
	HX_STACK_LINE(137)
	this->maxHealth = (int)10;
	HX_STACK_LINE(138)
	int tmp19 = this->maxHealth;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(138)
	this->HP = tmp19;
	HX_STACK_LINE(140)
	this->mStartLives = (int)3;
	HX_STACK_LINE(141)
	int tmp20 = this->mStartLives;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(141)
	this->mLives = tmp20;
	HX_STACK_LINE(143)
	this->mMaxEnergy = (int)50;
	HX_STACK_LINE(144)
	this->mEnergy = (int)25;
	HX_STACK_LINE(146)
	::flixel::_system::frontEnds::SoundFrontEnd tmp21 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(146)
	::flixel::_system::FlxSound tmp22 = tmp21->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(HX_HCSTRING("assets/sounds/main_double_pew.wav","\xf9","\xca","\x69","\x2c"),((Float)0.2),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(146)
	this->mShootDoubleSound = tmp22;
	HX_STACK_LINE(147)
	::flixel::_system::frontEnds::SoundFrontEnd tmp23 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(147)
	::flixel::_system::FlxSound tmp24 = tmp23->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(HX_HCSTRING("assets/sounds/main_hit.wav","\xea","\xfc","\x8f","\x66"),((Float)0.2),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(147)
	this->mHitSound = tmp24;
	HX_STACK_LINE(148)
	::flixel::_system::frontEnds::SoundFrontEnd tmp25 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(148)
	::flixel::_system::FlxSound tmp26 = tmp25->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(HX_HCSTRING("assets/sounds/main_death.wav","\x8b","\x12","\xd5","\x19"),((Float)0.2),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(148)
	this->mDeathSound = tmp26;
	HX_STACK_LINE(150)
	::org::wildrabbit::FlxTimedEmitter tmp27 = ::org::wildrabbit::FlxTimedEmitter_obj::__new();		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(150)
	this->mEmitter = tmp27;
	HX_STACK_LINE(151)
	::org::wildrabbit::FlxTimedEmitter tmp28 = this->mEmitter;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(151)
	tmp28->kill();
	HX_STACK_LINE(152)
	::org::wildrabbit::PlayState tmp29 = this->mParent;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(152)
	::org::wildrabbit::FlxTimedEmitter tmp30 = this->mEmitter;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(152)
	tmp29->mDeathEmitters->add(tmp30);
	HX_STACK_LINE(154)
	this->mKills = (int)0;
	HX_STACK_LINE(155)
	this->mScore = (int)0;
	HX_STACK_LINE(156)
	this->mPlayTime = (int)0;
}
;
	return null();
}

//Ship_obj::~Ship_obj() { }

Dynamic Ship_obj::__CreateEmpty() { return  new Ship_obj; }
hx::ObjectPtr< Ship_obj > Ship_obj::__new(::org::wildrabbit::PlayState parent,Float x,Float y,Float speed)
{  hx::ObjectPtr< Ship_obj > _result_ = new Ship_obj();
	_result_->__construct(parent,x,y,speed);
	return _result_;}

Dynamic Ship_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Ship_obj > _result_ = new Ship_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::flixel::FlxSprite Ship_obj::get_halo( ){
	HX_STACK_FRAME("org.wildrabbit.game.Ship","get_halo",0xad0d815b,"org.wildrabbit.game.Ship.get_halo","org/wildrabbit/game/Ship.hx",74,0x6f57f265)
	HX_STACK_THIS(this)
	HX_STACK_LINE(75)
	::flixel::FlxSprite tmp = this->mHalo;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(75)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Ship_obj,get_halo,return )

::flixel::FlxSprite Ship_obj::set_halo( ::flixel::FlxSprite value){
	HX_STACK_FRAME("org.wildrabbit.game.Ship","set_halo",0x5b6adacf,"org.wildrabbit.game.Ship.set_halo","org/wildrabbit/game/Ship.hx",78,0x6f57f265)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(79)
	this->mHalo = value;
	HX_STACK_LINE(80)
	bool tmp = (value != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(80)
	if ((tmp)){
		HX_STACK_LINE(82)
		::flixel::FlxSprite tmp1 = this->mHalo;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(82)
		int tmp2 = this->color;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(82)
		tmp1->set_color(tmp2);
		HX_STACK_LINE(83)
		::flixel::FlxSprite tmp3 = this->mHalo;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(83)
		tmp3->set_visible(false);
	}
	HX_STACK_LINE(85)
	::flixel::FlxSprite tmp1 = this->mHalo;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(85)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Ship_obj,set_halo,return )

::flixel::addons::effects::FlxTrail Ship_obj::get_trail( ){
	HX_STACK_FRAME("org.wildrabbit.game.Ship","get_trail",0xb2c6e747,"org.wildrabbit.game.Ship.get_trail","org/wildrabbit/game/Ship.hx",93,0x6f57f265)
	HX_STACK_THIS(this)
	HX_STACK_LINE(94)
	::flixel::addons::effects::FlxTrail tmp = this->mTrail;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(94)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Ship_obj,get_trail,return )

::flixel::addons::effects::FlxTrail Ship_obj::set_trail( ::flixel::addons::effects::FlxTrail value){
	HX_STACK_FRAME("org.wildrabbit.game.Ship","set_trail",0x9617d353,"org.wildrabbit.game.Ship.set_trail","org/wildrabbit/game/Ship.hx",97,0x6f57f265)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(98)
	this->mTrail = value;
	HX_STACK_LINE(99)
	bool tmp = (value != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(99)
	if ((tmp)){
		HX_STACK_LINE(101)
		::flixel::addons::effects::FlxTrail tmp1 = this->mTrail;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(101)
		int tmp2 = this->color;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(101)
		tmp1->set_color(tmp2);
	}
	HX_STACK_LINE(103)
	::flixel::addons::effects::FlxTrail tmp1 = this->mTrail;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(103)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Ship_obj,set_trail,return )

Void Ship_obj::switchShape( int nextShape){
{
		HX_STACK_FRAME("org.wildrabbit.game.Ship","switchShape",0x7d660a37,"org.wildrabbit.game.Ship.switchShape","org/wildrabbit/game/Ship.hx",160,0x6f57f265)
		HX_STACK_THIS(this)
		HX_STACK_ARG(nextShape,"nextShape")
		HX_STACK_LINE(161)
		int tmp = nextShape;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(161)
		this->super::switchShape(tmp);
		HX_STACK_LINE(162)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(162)
		tmp1 = hx::TCast< ::Int >::cast(nextShape);
		HX_STACK_LINE(162)
		int idx = tmp1;		HX_STACK_VAR(idx,"idx");
		HX_STACK_LINE(163)
		::flixel::animation::FlxAnimationController tmp2 = this->animation;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(163)
		::String tmp3 = ::org::wildrabbit::game::Ship_obj::ShapeAnims->__get(idx);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(163)
		tmp2->play(tmp3,null(),null(),null());
		HX_STACK_LINE(164)
		::flixel::addons::effects::FlxTrail tmp4 = this->mTrail;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(164)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(164)
		if ((tmp5)){
			HX_STACK_LINE(166)
			::flixel::addons::effects::FlxTrail tmp6 = this->mTrail;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(166)
			int tmp7 = this->color;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(166)
			tmp6->set_color(tmp7);
		}
		HX_STACK_LINE(169)
		this->showHalo(((Float)0.2),(int)2,((Float)0.2),null());
		HX_STACK_LINE(170)
		::flixel::_system::frontEnds::SoundFrontEnd tmp6 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(170)
		tmp6->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(HX_HCSTRING("assets/sounds/main_switch.wav","\xf9","\x03","\xca","\x98"),((Float)0.2),null(),null(),null(),null());
		HX_STACK_LINE(172)
		::org::wildrabbit::PlayState tmp7 = this->mParent;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(172)
		tmp7->onShapeShift();
	}
return null();
}


Void Ship_obj::showHalo( Float theAlpha,Float theScale,Float length,Dynamic __o_startScale){
Dynamic startScale = __o_startScale.Default(1);
	HX_STACK_FRAME("org.wildrabbit.game.Ship","showHalo",0x94d9896f,"org.wildrabbit.game.Ship.showHalo","org/wildrabbit/game/Ship.hx",176,0x6f57f265)
	HX_STACK_THIS(this)
	HX_STACK_ARG(theAlpha,"theAlpha")
	HX_STACK_ARG(theScale,"theScale")
	HX_STACK_ARG(length,"length")
	HX_STACK_ARG(startScale,"startScale")
{
		HX_STACK_LINE(175)
		::org::wildrabbit::game::Ship _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(177)
		::flixel::FlxSprite tmp = this->mHalo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(177)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(177)
		if ((tmp1)){
			HX_STACK_LINE(179)
			::flixel::FlxSprite tmp2 = this->mHalo;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(179)
			int tmp3 = this->color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(179)
			tmp2->set_color(tmp3);
			HX_STACK_LINE(180)
			::flixel::FlxSprite tmp4 = this->mHalo;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(180)
			Float tmp5 = this->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(180)
			Float tmp6 = this->y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(180)
			tmp4->setPosition(tmp5,tmp6);
			HX_STACK_LINE(181)
			::flixel::FlxSprite tmp7 = this->mHalo;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(181)
			Dynamic tmp8 = startScale;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(181)
			Dynamic tmp9 = startScale;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(181)
			tmp7->scale->set(tmp8,tmp9);
			HX_STACK_LINE(182)
			::flixel::FlxSprite tmp10 = this->mHalo;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(182)
			tmp10->set_visible(true);
			HX_STACK_LINE(183)
			::flixel::FlxSprite tmp11 = this->mHalo;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(183)
			Float tmp12 = theAlpha;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(183)
			tmp11->set_alpha(tmp12);
			HX_STACK_LINE(184)
			::flixel::FlxSprite tmp13 = this->mHalo;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(184)
			tmp13->set_blend(::openfl::_legacy::display::BlendMode_obj::ADD);
			HX_STACK_LINE(185)
			::flixel::FlxSprite tmp14 = this->mHalo;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(185)
			::flixel::math::FlxPoint tmp15 = tmp14->scale;		HX_STACK_VAR(tmp15,"tmp15");
			struct _Function_2_1{
				inline static Dynamic Block( Float &theScale){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/wildrabbit/game/Ship.hx",185,0x6f57f265)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , theScale,false);
						__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , theScale,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(185)
			Dynamic tmp16 = _Function_2_1::Block(theScale);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(185)
			Float tmp17 = length;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(185)
			Dynamic tmp18 = ::flixel::tweens::FlxEase_obj::quintOut_dyn();		HX_STACK_VAR(tmp18,"tmp18");
			struct _Function_2_2{
				inline static Dynamic Block( ::org::wildrabbit::game::Ship &_g,Dynamic &tmp18){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/wildrabbit/game/Ship.hx",185,0x6f57f265)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43") , tmp18,false);

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,::org::wildrabbit::game::Ship,_g)
						int __ArgCount() const { return 1; }
						Void run(::flixel::tweens::FlxTween t){
							HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","org/wildrabbit/game/Ship.hx",185,0x6f57f265)
							HX_STACK_ARG(t,"t")
							{
								HX_STACK_LINE(185)
								_g->mHalo->set_visible(false);
							}
							return null();
						}
						HX_END_LOCAL_FUNC1((void))

						__result->Add(HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d") ,  Dynamic(new _Function_3_1(_g)),true);
						__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , (int)8,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(185)
			Dynamic tmp19 = _Function_2_2::Block(_g,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(185)
			::flixel::tweens::FlxTween_obj::tween(tmp15,tmp16,tmp17,tmp19);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Ship_obj,showHalo,(void))

Void Ship_obj::update( Float elapsed){
{
		HX_STACK_FRAME("org.wildrabbit.game.Ship","update",0x8637d09f,"org.wildrabbit.game.Ship.update","org/wildrabbit/game/Ship.hx",189,0x6f57f265)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(190)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(190)
		this->super::update(tmp);
		HX_STACK_LINE(192)
		hx::AddEq(this->mPlayTime,elapsed);
		HX_STACK_LINE(194)
		::flixel::FlxSprite tmp1 = this->mHalo;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(194)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(194)
		if ((tmp2)){
			HX_STACK_LINE(196)
			::flixel::FlxSprite tmp3 = this->mHalo;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(196)
			Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(196)
			Float tmp5 = this->y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(196)
			tmp3->setPosition(tmp4,tmp5);
		}
		HX_STACK_LINE(199)
		::org::wildrabbit::PlayState tmp3 = this->mParent;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(199)
		Float tmp4 = tmp3->mInput->aimDirection;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(199)
		Float tmp5 = ::Math_obj::PI;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(199)
		Float tmp6 = (Float((int)180) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(199)
		Float tmp7 = (tmp4 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(199)
		Float tmp8 = ::flixel::math::FlxAngle_obj::wrapAngle(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(199)
		this->set_angle(tmp8);
		HX_STACK_LINE(200)
		::flixel::math::FlxPoint tmp9 = this->velocity;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(200)
		::org::wildrabbit::PlayState tmp10 = this->mParent;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(200)
		Float tmp11 = tmp10->mInput->xValue;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(200)
		::org::wildrabbit::PlayState tmp12 = this->mParent;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(200)
		Float tmp13 = tmp12->mInput->yValue;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(200)
		tmp9->set(tmp11,tmp13);
		HX_STACK_LINE(202)
		::org::wildrabbit::PlayState tmp14 = this->mParent;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(202)
		bool tmp15 = tmp14->mInput->prev;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(202)
		if ((tmp15)){
			HX_STACK_LINE(204)
			int tmp16 = (int)-1;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(204)
			int tmp17 = this->mShape;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(204)
			int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(204)
			tmp18 = hx::TCast< ::Int >::cast(tmp17);
			HX_STACK_LINE(204)
			int tmp19 = (tmp16 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(204)
			int nextShape = tmp19;		HX_STACK_VAR(nextShape,"nextShape");
			HX_STACK_LINE(205)
			bool tmp20 = (nextShape < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(205)
			if ((tmp20)){
				HX_STACK_LINE(207)
				int tmp21 = ((int)2 - (int)0);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(207)
				int tmp22 = (tmp21 + (int)1);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(207)
				int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(207)
				int tmp24 = (tmp23 - (int)1);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(207)
				int tmp25;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(207)
				tmp25 = hx::TCast< ::Int >::cast(tmp24);
				HX_STACK_LINE(207)
				nextShape = tmp25;
			}
			HX_STACK_LINE(209)
			int tmp21 = nextShape;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(209)
			this->switchShape(tmp21);
		}
		else{
			HX_STACK_LINE(211)
			::org::wildrabbit::PlayState tmp16 = this->mParent;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(211)
			bool tmp17 = tmp16->mInput->next;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(211)
			if ((tmp17)){
				HX_STACK_LINE(213)
				int tmp18 = this->mShape;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(213)
				int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(213)
				tmp19 = hx::TCast< ::Int >::cast(tmp18);
				HX_STACK_LINE(213)
				int tmp20 = ((int)1 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(213)
				int nextShape = tmp20;		HX_STACK_VAR(nextShape,"nextShape");
				HX_STACK_LINE(214)
				int tmp21 = nextShape;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(214)
				int tmp22 = ((int)2 - (int)0);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(214)
				int tmp23 = (tmp22 + (int)1);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(214)
				int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(214)
				bool tmp25 = (tmp21 == tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(214)
				if ((tmp25)){
					HX_STACK_LINE(216)
					int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(216)
					tmp26 = hx::TCast< ::Int >::cast((int)0);
					HX_STACK_LINE(216)
					nextShape = tmp26;
				}
				HX_STACK_LINE(218)
				int tmp26 = nextShape;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(218)
				this->switchShape(tmp26);
			}
		}
		HX_STACK_LINE(221)
		::flixel::math::FlxPoint tmp16 = this->velocity;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(221)
		::flixel::math::FlxVector tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(221)
		tmp17 = hx::TCast< ::flixel::math::FlxVector >::cast(tmp16);
		HX_STACK_LINE(221)
		::flixel::math::FlxVector velocityVec = tmp17;		HX_STACK_VAR(velocityVec,"velocityVec");
		HX_STACK_LINE(222)
		Float tmp18 = velocityVec->x;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(222)
		Float tmp19 = ::Math_obj::abs(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(222)
		bool tmp20 = (tmp19 < ((Float)0.0000001));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(222)
		bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(222)
		if ((tmp20)){
			HX_STACK_LINE(222)
			Float tmp22 = velocityVec->y;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(222)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(222)
			Float tmp24 = ::Math_obj::abs(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(222)
			Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(222)
			tmp21 = (tmp25 < ((Float)0.0000001));
		}
		else{
			HX_STACK_LINE(222)
			tmp21 = false;
		}
		HX_STACK_LINE(222)
		bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(222)
		if ((tmp22)){
			HX_STACK_LINE(224)
			velocityVec->normalize();
		}
		HX_STACK_LINE(226)
		this->updateOffset();
		HX_STACK_LINE(228)
		::org::wildrabbit::PlayState tmp23 = this->mParent;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(228)
		bool tmp24 = tmp23->mInput->shoot;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(228)
		bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(228)
		if ((tmp24)){
			HX_STACK_LINE(228)
			tmp25 = this->mCanShoot;
		}
		else{
			HX_STACK_LINE(228)
			tmp25 = false;
		}
		HX_STACK_LINE(228)
		if ((tmp25)){
			HX_STACK_LINE(230)
			::org::wildrabbit::PlayState tmp26 = this->mParent;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(230)
			Float tmp27 = tmp26->mInput->aimDirection;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(230)
			this->shoot(tmp27);
		}
		HX_STACK_LINE(233)
		::org::wildrabbit::PlayState tmp26 = this->mParent;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(233)
		bool tmp27 = tmp26->mInput->blast;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(233)
		bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(233)
		if ((tmp27)){
			HX_STACK_LINE(233)
			int tmp29 = this->mEnergy;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(233)
			int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(233)
			int tmp31 = this->mMaxEnergy;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(233)
			int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(233)
			tmp28 = (tmp30 == tmp32);
		}
		else{
			HX_STACK_LINE(233)
			tmp28 = false;
		}
		HX_STACK_LINE(233)
		if ((tmp28)){
			HX_STACK_LINE(235)
			this->blast();
		}
		HX_STACK_LINE(238)
		{
			HX_STACK_LINE(238)
			::flixel::math::FlxPoint tmp29 = this->velocity;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(238)
			::flixel::math::FlxPoint _g = tmp29;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(238)
			Float tmp30 = _g->x;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(238)
			Float tmp31 = this->mSpeed;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(238)
			Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(238)
			_g->set_x(tmp32);
		}
		HX_STACK_LINE(239)
		{
			HX_STACK_LINE(239)
			::flixel::math::FlxPoint tmp29 = this->velocity;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(239)
			::flixel::math::FlxPoint _g = tmp29;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(239)
			Float tmp30 = _g->y;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(239)
			Float tmp31 = this->mSpeed;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(239)
			Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(239)
			_g->set_y(tmp32);
		}
		HX_STACK_LINE(241)
		Float tmp29 = elapsed;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(241)
		this->updateMotion(tmp29);
		HX_STACK_LINE(243)
		this->updateCollisions();
	}
return null();
}


Void Ship_obj::shoot( Float theAngle){
{
		HX_STACK_FRAME("org.wildrabbit.game.Ship","shoot",0xf6fc1c09,"org.wildrabbit.game.Ship.shoot","org/wildrabbit/game/Ship.hx",247,0x6f57f265)
		HX_STACK_THIS(this)
		HX_STACK_ARG(theAngle,"theAngle")
		HX_STACK_LINE(246)
		::org::wildrabbit::game::Ship _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(248)
		this->mCanShoot = false;
		HX_STACK_LINE(249)
		::flixel::math::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(249)
		{
			HX_STACK_LINE(249)
			Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(249)
			Float tmp2 = this->get_width();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(249)
			Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(249)
			Float X = tmp3;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(249)
			Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(249)
			Float tmp5 = this->get_height();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(249)
			Float tmp6 = (Float(tmp5) / Float((int)2));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(249)
			Float tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(249)
			Float Y = tmp7;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(249)
			::flixel::math::FlxPoint tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(249)
			{
				HX_STACK_LINE(249)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp9 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(249)
				::flixel::math::FlxPoint tmp10 = tmp9->get();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(249)
				Float tmp11 = X;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(249)
				Float tmp12 = Y;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(249)
				::flixel::math::FlxPoint tmp13 = tmp10->set(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(249)
				::flixel::math::FlxPoint point = tmp13;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(249)
				point->_inPool = false;
				HX_STACK_LINE(249)
				tmp8 = point;
			}
			HX_STACK_LINE(249)
			::flixel::math::FlxPoint point = tmp8;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(249)
			point->_weak = true;
			HX_STACK_LINE(249)
			tmp = point;
		}
		HX_STACK_LINE(249)
		::flixel::math::FlxPoint p = tmp;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(250)
		Float shootAngle = theAngle;		HX_STACK_VAR(shootAngle,"shootAngle");
		HX_STACK_LINE(252)
		bool shot = false;		HX_STACK_VAR(shot,"shot");
		HX_STACK_LINE(254)
		::org::wildrabbit::PlayState tmp1 = this->mParent;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(254)
		::org::wildrabbit::game::BaseBullet tmp2 = tmp1->mBullets->getFirstAvailable(hx::ClassOf< ::org::wildrabbit::game::Bullet >(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(254)
		::org::wildrabbit::game::BaseBullet bullet = tmp2;		HX_STACK_VAR(bullet,"bullet");
		HX_STACK_LINE(255)
		bool tmp3 = (bullet != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(255)
		if ((tmp3)){
			HX_STACK_LINE(257)
			::flixel::math::FlxPoint tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(257)
			{
				HX_STACK_LINE(257)
				::flixel::math::FlxPoint tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(257)
				{
					HX_STACK_LINE(257)
					::flixel::util::FlxPool_flixel_math_FlxPoint tmp6 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(257)
					::flixel::math::FlxPoint tmp7 = tmp6->get();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(257)
					Float tmp8 = p->x;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(257)
					Float tmp9 = (p->y - (int)8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(257)
					::flixel::math::FlxPoint tmp10 = tmp7->set(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(257)
					::flixel::math::FlxPoint point = tmp10;		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(257)
					point->_inPool = false;
					HX_STACK_LINE(257)
					tmp5 = point;
				}
				HX_STACK_LINE(257)
				::flixel::math::FlxPoint point = tmp5;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(257)
				point->_weak = true;
				HX_STACK_LINE(257)
				tmp4 = point;
			}
			HX_STACK_LINE(257)
			::flixel::math::FlxPoint p1 = tmp4;		HX_STACK_VAR(p1,"p1");
			HX_STACK_LINE(258)
			::flixel::math::FlxPoint tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(258)
			{
				HX_STACK_LINE(258)
				Float tmp6 = this->x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(258)
				Float tmp7 = this->get_width();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(258)
				Float tmp8 = (Float(tmp7) / Float((int)2));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(258)
				Float tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(258)
				Float X = tmp9;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(258)
				Float tmp10 = this->y;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(258)
				Float tmp11 = this->get_height();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(258)
				Float tmp12 = (Float(tmp11) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(258)
				Float tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(258)
				Float Y = tmp13;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(258)
				::flixel::math::FlxPoint tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(258)
				{
					HX_STACK_LINE(258)
					::flixel::util::FlxPool_flixel_math_FlxPoint tmp15 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(258)
					::flixel::math::FlxPoint tmp16 = tmp15->get();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(258)
					Float tmp17 = X;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(258)
					Float tmp18 = Y;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(258)
					::flixel::math::FlxPoint tmp19 = tmp16->set(tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(258)
					::flixel::math::FlxPoint point = tmp19;		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(258)
					point->_inPool = false;
					HX_STACK_LINE(258)
					tmp14 = point;
				}
				HX_STACK_LINE(258)
				::flixel::math::FlxPoint point = tmp14;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(258)
				point->_weak = true;
				HX_STACK_LINE(258)
				tmp5 = point;
			}
			HX_STACK_LINE(258)
			Float tmp6 = this->angle;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(258)
			p1->rotate(tmp5,tmp6);
			HX_STACK_LINE(260)
			bullet->reset((int)0,(int)0);
			HX_STACK_LINE(261)
			Float tmp7 = ::org::wildrabbit::game::Ship_obj::BULLET_SPEED;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(261)
			Float tmp8 = shootAngle;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(261)
			Float tmp9 = ::Math_obj::cos(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(261)
			Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(261)
			Float tmp11 = ::org::wildrabbit::game::Ship_obj::BULLET_SPEED;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(261)
			Float tmp12 = shootAngle;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(261)
			Float tmp13 = ::Math_obj::sin(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(261)
			Float tmp14 = (tmp11 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(261)
			bullet->velocity->set(tmp10,tmp14);
			HX_STACK_LINE(262)
			Float tmp15 = p1->x;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(262)
			Float tmp16 = bullet->_halfSize->x;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(262)
			Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(262)
			Float tmp18 = p1->y;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(262)
			Float tmp19 = bullet->_halfSize->y;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(262)
			Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(262)
			bullet->setPosition(tmp17,tmp20);
			HX_STACK_LINE(263)
			Float tmp21 = this->angle;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(263)
			Float tmp22 = (tmp21 - (int)5);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(263)
			bullet->set_angle(tmp22);
			HX_STACK_LINE(264)
			Float tmp23 = ::org::wildrabbit::game::Ship_obj::BULLET_TTL;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(264)
			bullet->start(hx::ObjectPtr<OBJ_>(this),tmp23);
			HX_STACK_LINE(265)
			{
				HX_STACK_LINE(265)
				bool tmp24 = p1->_weak;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(265)
				if ((tmp24)){
					HX_STACK_LINE(265)
					p1->put();
				}
			}
			HX_STACK_LINE(266)
			shot = true;
		}
		HX_STACK_LINE(269)
		::org::wildrabbit::PlayState tmp4 = this->mParent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(269)
		::org::wildrabbit::game::BaseBullet tmp5 = tmp4->mBullets->getFirstAvailable(hx::ClassOf< ::org::wildrabbit::game::Bullet >(),null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(269)
		bullet = tmp5;
		HX_STACK_LINE(270)
		bool tmp6 = (bullet != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(270)
		if ((tmp6)){
			HX_STACK_LINE(272)
			::flixel::math::FlxPoint tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(272)
			{
				HX_STACK_LINE(272)
				::flixel::math::FlxPoint tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(272)
				{
					HX_STACK_LINE(272)
					::flixel::util::FlxPool_flixel_math_FlxPoint tmp9 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(272)
					::flixel::math::FlxPoint tmp10 = tmp9->get();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(272)
					Float tmp11 = p->x;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(272)
					Float tmp12 = (p->y + (int)8);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(272)
					::flixel::math::FlxPoint tmp13 = tmp10->set(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(272)
					::flixel::math::FlxPoint point = tmp13;		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(272)
					point->_inPool = false;
					HX_STACK_LINE(272)
					tmp8 = point;
				}
				HX_STACK_LINE(272)
				::flixel::math::FlxPoint point = tmp8;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(272)
				point->_weak = true;
				HX_STACK_LINE(272)
				tmp7 = point;
			}
			HX_STACK_LINE(272)
			::flixel::math::FlxPoint p2 = tmp7;		HX_STACK_VAR(p2,"p2");
			HX_STACK_LINE(273)
			::flixel::math::FlxPoint tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(273)
			{
				HX_STACK_LINE(273)
				Float tmp9 = this->x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(273)
				Float tmp10 = this->get_width();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(273)
				Float tmp11 = (Float(tmp10) / Float((int)2));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(273)
				Float tmp12 = (tmp9 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(273)
				Float X = tmp12;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(273)
				Float tmp13 = this->y;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(273)
				Float tmp14 = this->get_height();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(273)
				Float tmp15 = (Float(tmp14) / Float((int)2));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(273)
				Float tmp16 = (tmp13 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(273)
				Float Y = tmp16;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(273)
				::flixel::math::FlxPoint tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(273)
				{
					HX_STACK_LINE(273)
					::flixel::util::FlxPool_flixel_math_FlxPoint tmp18 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(273)
					::flixel::math::FlxPoint tmp19 = tmp18->get();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(273)
					Float tmp20 = X;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(273)
					Float tmp21 = Y;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(273)
					::flixel::math::FlxPoint tmp22 = tmp19->set(tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(273)
					::flixel::math::FlxPoint point = tmp22;		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(273)
					point->_inPool = false;
					HX_STACK_LINE(273)
					tmp17 = point;
				}
				HX_STACK_LINE(273)
				::flixel::math::FlxPoint point = tmp17;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(273)
				point->_weak = true;
				HX_STACK_LINE(273)
				tmp8 = point;
			}
			HX_STACK_LINE(273)
			Float tmp9 = this->angle;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(273)
			p2->rotate(tmp8,tmp9);
			HX_STACK_LINE(275)
			bullet->reset((int)0,(int)0);
			HX_STACK_LINE(276)
			Float tmp10 = ::org::wildrabbit::game::Ship_obj::BULLET_SPEED;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(276)
			Float tmp11 = shootAngle;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(276)
			Float tmp12 = ::Math_obj::cos(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(276)
			Float tmp13 = (tmp10 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(276)
			Float tmp14 = ::org::wildrabbit::game::Ship_obj::BULLET_SPEED;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(276)
			Float tmp15 = shootAngle;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(276)
			Float tmp16 = ::Math_obj::sin(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(276)
			Float tmp17 = (tmp14 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(276)
			bullet->velocity->set(tmp13,tmp17);
			HX_STACK_LINE(277)
			Float tmp18 = p2->x;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(277)
			Float tmp19 = bullet->_halfSize->x;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(277)
			Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(277)
			Float tmp21 = p2->y;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(277)
			Float tmp22 = bullet->_halfSize->y;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(277)
			Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(277)
			bullet->setPosition(tmp20,tmp23);
			HX_STACK_LINE(278)
			Float tmp24 = this->angle;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(278)
			Float tmp25 = (tmp24 + (int)5);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(278)
			bullet->set_angle(tmp25);
			HX_STACK_LINE(279)
			Float tmp26 = ::org::wildrabbit::game::Ship_obj::BULLET_TTL;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(279)
			bullet->start(hx::ObjectPtr<OBJ_>(this),tmp26);
			HX_STACK_LINE(280)
			{
				HX_STACK_LINE(280)
				bool tmp27 = p2->_weak;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(280)
				if ((tmp27)){
					HX_STACK_LINE(280)
					p2->put();
				}
			}
			HX_STACK_LINE(281)
			shot = true;
		}
		HX_STACK_LINE(283)
		{
			HX_STACK_LINE(283)
			bool tmp7 = p->_weak;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(283)
			if ((tmp7)){
				HX_STACK_LINE(283)
				p->put();
			}
		}
		HX_STACK_LINE(284)
		::flixel::util::FlxTimer tmp7 = this->mShootTimer;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(284)
		Float tmp8 = ::org::wildrabbit::game::Ship_obj::SHOOT_COOLDOWN;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(284)
		Dynamic tmp9 = this->onCooldownFinished_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(284)
		tmp7->start(tmp8,tmp9,null());
		HX_STACK_LINE(285)
		bool tmp10 = shot;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(285)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(285)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(285)
		if ((tmp11)){
			HX_STACK_LINE(285)
			::flixel::_system::FlxSound tmp13 = this->mShootDoubleSound;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(285)
			::flixel::_system::FlxSound tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(285)
			::flixel::_system::FlxSound tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(285)
			tmp12 = (tmp15 != null());
		}
		else{
			HX_STACK_LINE(285)
			tmp12 = false;
		}
		HX_STACK_LINE(285)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(285)
		if ((tmp12)){
			HX_STACK_LINE(285)
			tmp13 = this->mCanPlayShoot;
		}
		else{
			HX_STACK_LINE(285)
			tmp13 = false;
		}
		HX_STACK_LINE(285)
		if ((tmp13)){
			HX_STACK_LINE(287)
			this->mCanPlayShoot = false;
			HX_STACK_LINE(288)
			::flixel::_system::FlxSound tmp14 = this->mShootDoubleSound;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(288)
			tmp14->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(true);
			HX_STACK_LINE(289)
			::flixel::util::FlxTimer tmp15 = this->mShootSoundTimer;		HX_STACK_VAR(tmp15,"tmp15");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::org::wildrabbit::game::Ship,_g)
			int __ArgCount() const { return 1; }
			Void run(::flixel::util::FlxTimer timer){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","org/wildrabbit/game/Ship.hx",289,0x6f57f265)
				HX_STACK_ARG(timer,"timer")
				{
					HX_STACK_LINE(289)
					_g->mCanPlayShoot = true;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(289)
			tmp15->start(((Float)0.1), Dynamic(new _Function_2_1(_g)),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Ship_obj,shoot,(void))

Void Ship_obj::updateOffset( ){
{
		HX_STACK_FRAME("org.wildrabbit.game.Ship","updateOffset",0x629c9d92,"org.wildrabbit.game.Ship.updateOffset","org/wildrabbit/game/Ship.hx",300,0x6f57f265)
		HX_STACK_THIS(this)
		HX_STACK_LINE(302)
		Float tmp = this->angle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(302)
		Float tmp1 = ::Math_obj::PI;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(302)
		Float tmp2 = (Float(tmp1) / Float((int)180));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(302)
		Float tmp3 = (tmp * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(302)
		Float radAngle = tmp3;		HX_STACK_VAR(radAngle,"radAngle");
		HX_STACK_LINE(303)
		::flixel::math::FlxPoint tmp4 = this->mWeaponOffset;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(303)
		Float tmp5 = this->get_width();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(303)
		Float tmp6 = (Float(tmp5) / Float((int)2));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(303)
		Float tmp7 = radAngle;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(303)
		Float tmp8 = ::Math_obj::cos(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(303)
		Float tmp9 = ((int)1 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(303)
		Float tmp10 = (tmp6 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(303)
		tmp4->set_x(tmp10);
		HX_STACK_LINE(304)
		::flixel::math::FlxPoint tmp11 = this->mWeaponOffset;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(304)
		Float tmp12 = this->get_height();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(304)
		Float tmp13 = (Float(tmp12) / Float((int)2));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(304)
		Float tmp14 = this->get_width();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(304)
		Float tmp15 = radAngle;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(304)
		Float tmp16 = ::Math_obj::sin(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(304)
		Float tmp17 = (tmp14 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(304)
		Float tmp18 = (tmp13 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(304)
		tmp11->set_y(tmp18);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Ship_obj,updateOffset,(void))

::flixel::math::FlxPoint Ship_obj::getOffset( ){
	HX_STACK_FRAME("org.wildrabbit.game.Ship","getOffset",0x359417f3,"org.wildrabbit.game.Ship.getOffset","org/wildrabbit/game/Ship.hx",308,0x6f57f265)
	HX_STACK_THIS(this)
	HX_STACK_LINE(309)
	::flixel::math::FlxPoint tmp = this->mWeaponOffset;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(309)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Ship_obj,getOffset,return )

Void Ship_obj::onCooldownFinished( ::flixel::util::FlxTimer timer){
{
		HX_STACK_FRAME("org.wildrabbit.game.Ship","onCooldownFinished",0x58bd3d12,"org.wildrabbit.game.Ship.onCooldownFinished","org/wildrabbit/game/Ship.hx",313,0x6f57f265)
		HX_STACK_THIS(this)
		HX_STACK_ARG(timer,"timer")
		HX_STACK_LINE(313)
		this->mCanShoot = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Ship_obj,onCooldownFinished,(void))

Void Ship_obj::updateCollisions( ){
{
		HX_STACK_FRAME("org.wildrabbit.game.Ship","updateCollisions",0xc10a2d40,"org.wildrabbit.game.Ship.updateCollisions","org/wildrabbit/game/Ship.hx",318,0x6f57f265)
		HX_STACK_THIS(this)
		HX_STACK_LINE(319)
		Float tmp = this->get_width();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(319)
		Float tmp1 = (Float(tmp) / Float((int)2));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(319)
		Float halfWidth = tmp1;		HX_STACK_VAR(halfWidth,"halfWidth");
		HX_STACK_LINE(320)
		Float tmp2 = this->get_height();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(320)
		Float tmp3 = (Float(tmp2) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(320)
		Float halfHeight = tmp3;		HX_STACK_VAR(halfHeight,"halfHeight");
		HX_STACK_LINE(321)
		::flixel::math::FlxPoint tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(321)
		{
			HX_STACK_LINE(321)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp5 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(321)
			::flixel::math::FlxPoint tmp6 = tmp5->get();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(321)
			Float tmp7 = this->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(321)
			Float tmp8 = halfWidth;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(321)
			Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(321)
			Float tmp10 = this->y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(321)
			Float tmp11 = halfHeight;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(321)
			Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(321)
			::flixel::math::FlxPoint tmp13 = tmp6->set(tmp9,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(321)
			::flixel::math::FlxPoint point = tmp13;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(321)
			point->_inPool = false;
			HX_STACK_LINE(321)
			tmp4 = point;
		}
		HX_STACK_LINE(321)
		::flixel::math::FlxPoint center = tmp4;		HX_STACK_VAR(center,"center");
		HX_STACK_LINE(322)
		Float radius = halfHeight;		HX_STACK_VAR(radius,"radius");
		HX_STACK_LINE(324)
		Float tmp5 = center->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(324)
		::org::wildrabbit::game::World tmp6 = this->mWorld;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(324)
		Float tmp7 = tmp6->mCenter->x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(324)
		Float tmp8 = (tmp5 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(324)
		Float deltaX = tmp8;		HX_STACK_VAR(deltaX,"deltaX");
		HX_STACK_LINE(325)
		Float tmp9 = center->y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(325)
		::org::wildrabbit::game::World tmp10 = this->mWorld;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(325)
		Float tmp11 = tmp10->mCenter->y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(325)
		Float tmp12 = (tmp9 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(325)
		Float deltaY = tmp12;		HX_STACK_VAR(deltaY,"deltaY");
		HX_STACK_LINE(326)
		Float tmp13 = (deltaX * deltaX);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(326)
		Float tmp14 = (deltaY * deltaY);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(326)
		Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(326)
		Float sqDistance = tmp15;		HX_STACK_VAR(sqDistance,"sqDistance");
		HX_STACK_LINE(328)
		::org::wildrabbit::game::World tmp16 = this->mWorld;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(328)
		Float tmp17 = tmp16->mRadius;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(328)
		Float tmp18 = radius;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(328)
		Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(328)
		Float radiusDelta = tmp19;		HX_STACK_VAR(radiusDelta,"radiusDelta");
		HX_STACK_LINE(329)
		Float tmp20 = (radiusDelta * radiusDelta);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(329)
		Float sqRadiusDelta = tmp20;		HX_STACK_VAR(sqRadiusDelta,"sqRadiusDelta");
		HX_STACK_LINE(331)
		bool tmp21 = (sqDistance > sqRadiusDelta);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(331)
		if ((tmp21)){
			HX_STACK_LINE(333)
			::flixel::math::FlxPoint tmp22 = this->velocity;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(333)
			tmp22->set((int)0,(int)0);
			HX_STACK_LINE(334)
			Float tmp23 = sqDistance;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(334)
			Float tmp24 = ::Math_obj::sqrt(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(334)
			Float tmp25 = radiusDelta;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(334)
			Float tmp26 = ::Math_obj::abs(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(334)
			Float tmp27 = (tmp24 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(334)
			Float correctionDelta = tmp27;		HX_STACK_VAR(correctionDelta,"correctionDelta");
			HX_STACK_LINE(335)
			Float tmp28 = deltaY;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(335)
			Float tmp29 = deltaX;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(335)
			Float tmp30 = ::Math_obj::atan2(tmp28,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(335)
			Float angle = tmp30;		HX_STACK_VAR(angle,"angle");
			HX_STACK_LINE(337)
			{
				HX_STACK_LINE(337)
				::org::wildrabbit::game::Ship _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(337)
				Float tmp31 = _g->x;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(337)
				Float tmp32 = correctionDelta;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(337)
				Float tmp33 = angle;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(337)
				Float tmp34 = ::Math_obj::cos(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(337)
				Float tmp35 = (tmp32 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(337)
				Float tmp36 = (tmp31 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(337)
				_g->set_x(tmp36);
			}
			HX_STACK_LINE(338)
			{
				HX_STACK_LINE(338)
				::org::wildrabbit::game::Ship _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(338)
				Float tmp31 = _g->y;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(338)
				Float tmp32 = correctionDelta;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(338)
				Float tmp33 = angle;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(338)
				Float tmp34 = ::Math_obj::sin(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(338)
				Float tmp35 = (tmp32 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(338)
				Float tmp36 = (tmp31 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(338)
				_g->set_y(tmp36);
			}
		}
		HX_STACK_LINE(340)
		center->put();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Ship_obj,updateCollisions,(void))

Void Ship_obj::onDeath( ){
{
		HX_STACK_FRAME("org.wildrabbit.game.Ship","onDeath",0xba2b263f,"org.wildrabbit.game.Ship.onDeath","org/wildrabbit/game/Ship.hx",344,0x6f57f265)
		HX_STACK_THIS(this)
		HX_STACK_LINE(345)
		this->set_solid(false);
		HX_STACK_LINE(347)
		::org::wildrabbit::FlxTimedEmitter tmp = this->mEmitter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(347)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(347)
		if ((tmp1)){
			HX_STACK_LINE(349)
			::org::wildrabbit::FlxTimedEmitter tmp2 = this->mEmitter;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(349)
			tmp2->launchMode = ::flixel::effects::particles::FlxEmitterMode_obj::CIRCLE;
			HX_STACK_LINE(350)
			{
				HX_STACK_LINE(350)
				::org::wildrabbit::FlxTimedEmitter tmp3 = this->mEmitter;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(350)
				::org::wildrabbit::FlxTimedEmitter _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(350)
				Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(350)
				Float tmp5 = this->get_width();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(350)
				Float tmp6 = (Float(tmp5) / Float((int)2));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(350)
				Float tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(350)
				Float X = tmp7;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(350)
				Float tmp8 = this->y;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(350)
				Float tmp9 = this->get_width();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(350)
				Float tmp10 = (Float(tmp9) / Float((int)2));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(350)
				Float tmp11 = (tmp8 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(350)
				Float Y = tmp11;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(350)
				_this->x = X;
				HX_STACK_LINE(350)
				_this->y = Y;
			}
			HX_STACK_LINE(351)
			::org::wildrabbit::FlxTimedEmitter tmp3 = this->mEmitter;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(351)
			tmp3->lifespan->set(((Float)0.3),null());
			HX_STACK_LINE(352)
			::org::wildrabbit::FlxTimedEmitter tmp4 = this->mEmitter;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(352)
			tmp4->speed->set((int)200,(int)200,(int)0,(int)0);
			HX_STACK_LINE(353)
			::org::wildrabbit::FlxTimedEmitter tmp5 = this->mEmitter;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(353)
			int tmp6 = this->color;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(353)
			tmp5->color->set(tmp6,null(),null(),null());
			HX_STACK_LINE(354)
			::org::wildrabbit::FlxTimedEmitter tmp7 = this->mEmitter;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(354)
			tmp7->alpha->set(((Float)0.4),((Float)0.6),((Float)0.0),((Float)0.0));
			HX_STACK_LINE(355)
			::org::wildrabbit::FlxTimedEmitter tmp8 = this->mEmitter;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(355)
			tmp8->blend = ::openfl::_legacy::display::BlendMode_obj::ADD;
			HX_STACK_LINE(356)
			::org::wildrabbit::FlxTimedEmitter tmp9 = this->mEmitter;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(356)
			tmp9->startTimed(((Float)0.3),true,((Float)0.1),(int)30,null());
		}
		HX_STACK_LINE(358)
		this->showHalo(((Float)0.1),(int)4,((Float)0.5),null());
		HX_STACK_LINE(360)
		::flixel::_system::FlxSound tmp2 = this->mDeathSound;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(360)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(360)
		if ((tmp3)){
			HX_STACK_LINE(362)
			::flixel::_system::FlxSound tmp4 = this->mDeathSound;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(362)
			tmp4->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(null());
		}
		HX_STACK_LINE(365)
		::org::wildrabbit::PlayState tmp4 = this->mParent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(365)
		tmp4->onPlayerDied();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Ship_obj,onDeath,(void))

Void Ship_obj::onHit( ::org::wildrabbit::game::Entity entity){
{
		HX_STACK_FRAME("org.wildrabbit.game.Ship","onHit",0xad3b749e,"org.wildrabbit.game.Ship.onHit","org/wildrabbit/game/Ship.hx",369,0x6f57f265)
		HX_STACK_THIS(this)
		HX_STACK_ARG(entity,"entity")
		HX_STACK_LINE(370)
		this->set_solid(false);
		HX_STACK_LINE(371)
		this->set_color((int)-1);
		HX_STACK_LINE(372)
		this->set_alpha(((Float)0.5));
		HX_STACK_LINE(373)
		::flixel::effects::FlxFlicker_obj::flicker(hx::ObjectPtr<OBJ_>(this),((Float)1.0),((Float)0.08),null(),null(),null(),null());
		HX_STACK_LINE(374)
		::flixel::util::FlxTimer tmp = this->mHitTimer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(374)
		Dynamic tmp1 = this->onHitTimeout_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(374)
		tmp->start(((Float)1.0),tmp1,null());
		HX_STACK_LINE(375)
		::flixel::FlxCamera tmp2 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(375)
		tmp2->shake(((Float)0.01),((Float)0.2),null(),null(),null());
		HX_STACK_LINE(377)
		::flixel::math::FlxVector tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(377)
		{
			HX_STACK_LINE(377)
			::flixel::util::FlxPool_flixel_math_FlxVector tmp4 = ::flixel::math::FlxVector_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(377)
			::flixel::math::FlxVector tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(377)
			Float tmp6 = this->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(377)
			Float tmp7 = entity->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(377)
			Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(377)
			Float tmp9 = this->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(377)
			Float tmp10 = entity->y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(377)
			Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(377)
			::flixel::math::FlxVector tmp12 = hx::TCast< ::flixel::math::FlxVector >::cast(tmp5->set(tmp8,tmp11));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(377)
			::flixel::math::FlxVector vector = tmp12;		HX_STACK_VAR(vector,"vector");
			HX_STACK_LINE(377)
			vector->_inPool = false;
			HX_STACK_LINE(377)
			tmp3 = vector;
		}
		HX_STACK_LINE(377)
		::flixel::math::FlxVector recoil = tmp3;		HX_STACK_VAR(recoil,"recoil");
		HX_STACK_LINE(378)
		{
			HX_STACK_LINE(378)
			::flixel::math::FlxVector tmp4 = recoil->normalize();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(378)
			::flixel::math::FlxVector _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(378)
			{
				HX_STACK_LINE(378)
				::flixel::math::FlxVector _g = _this;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(378)
				Float tmp5 = (_g->x * (int)24);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(378)
				_g->set_x(tmp5);
			}
			HX_STACK_LINE(378)
			{
				HX_STACK_LINE(378)
				::flixel::math::FlxVector _g = _this;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(378)
				Float tmp5 = (_g->y * (int)24);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(378)
				_g->set_y(tmp5);
			}
			HX_STACK_LINE(378)
			_this;
		}
		HX_STACK_LINE(379)
		{
			HX_STACK_LINE(379)
			::org::wildrabbit::game::Ship _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(379)
			Float tmp4 = (_g->x + recoil->x);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(379)
			_g->set_x(tmp4);
		}
		HX_STACK_LINE(380)
		{
			HX_STACK_LINE(380)
			::org::wildrabbit::game::Ship _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(380)
			Float tmp4 = (_g->y + recoil->y);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(380)
			_g->set_y(tmp4);
		}
		HX_STACK_LINE(382)
		::flixel::_system::FlxSound tmp4 = this->mHitSound;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(382)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(382)
		if ((tmp5)){
			HX_STACK_LINE(384)
			::flixel::_system::FlxSound tmp6 = this->mHitSound;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(384)
			tmp6->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(null());
		}
		HX_STACK_LINE(387)
		::org::wildrabbit::PlayState tmp6 = this->mParent;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(387)
		tmp6->onPlayerHit();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Ship_obj,onHit,(void))

Void Ship_obj::onHitTimeout( ::flixel::util::FlxTimer timer){
{
		HX_STACK_FRAME("org.wildrabbit.game.Ship","onHitTimeout",0x0f45bda3,"org.wildrabbit.game.Ship.onHitTimeout","org/wildrabbit/game/Ship.hx",391,0x6f57f265)
		HX_STACK_THIS(this)
		HX_STACK_ARG(timer,"timer")
		HX_STACK_LINE(392)
		this->set_solid(true);
		HX_STACK_LINE(393)
		int tmp = this->mShape;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(393)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(393)
		tmp1 = hx::TCast< ::Int >::cast(tmp);
		HX_STACK_LINE(393)
		int tmp2 = ::org::wildrabbit::game::Entity_obj::ShapeColours->__get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(393)
		this->set_color(tmp2);
		HX_STACK_LINE(394)
		this->set_alpha((int)1);
		HX_STACK_LINE(395)
		::flixel::util::FlxTimer tmp3 = this->mHitTimer;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(395)
		tmp3->cancel();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Ship_obj,onHitTimeout,(void))

Void Ship_obj::absorbEnergy( int amount){
{
		HX_STACK_FRAME("org.wildrabbit.game.Ship","absorbEnergy",0xace2bc6b,"org.wildrabbit.game.Ship.absorbEnergy","org/wildrabbit/game/Ship.hx",399,0x6f57f265)
		HX_STACK_THIS(this)
		HX_STACK_ARG(amount,"amount")
		HX_STACK_LINE(400)
		hx::AddEq(this->mEnergy,amount);
		HX_STACK_LINE(401)
		int tmp = this->mEnergy;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(401)
		int tmp1 = this->mMaxEnergy;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(401)
		bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(401)
		if ((tmp2)){
			HX_STACK_LINE(403)
			int tmp3 = this->mMaxEnergy;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(403)
			this->mEnergy = tmp3;
		}
		HX_STACK_LINE(406)
		this->showHalo(((Float)0.3),(int)1,((Float)0.4),((Float)2.5));
		HX_STACK_LINE(407)
		::flixel::_system::frontEnds::SoundFrontEnd tmp3 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(407)
		tmp3->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(HX_HCSTRING("assets/sounds/main_absorb.wav","\x32","\x0b","\xc0","\xbc"),null(),null(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Ship_obj,absorbEnergy,(void))

Void Ship_obj::blast( ){
{
		HX_STACK_FRAME("org.wildrabbit.game.Ship","blast",0x2fc67de2,"org.wildrabbit.game.Ship.blast","org/wildrabbit/game/Ship.hx",411,0x6f57f265)
		HX_STACK_THIS(this)
		HX_STACK_LINE(412)
		::org::wildrabbit::PlayState tmp = this->mParent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(412)
		tmp->onPlayerBlast();
		HX_STACK_LINE(413)
		::flixel::_system::frontEnds::SoundFrontEnd tmp1 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(413)
		tmp1->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(HX_HCSTRING("assets/sounds/main_blast.wav","\x0f","\xf9","\xc6","\x86"),null(),null(),null(),null(),null());
		HX_STACK_LINE(414)
		this->mEnergy = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Ship_obj,blast,(void))

Float Ship_obj::SHOOT_COOLDOWN;

Float Ship_obj::BULLET_TTL;

Float Ship_obj::BULLET_SPEED;

Array< ::String > Ship_obj::ShapeAnims;


Ship_obj::Ship_obj()
{
}

void Ship_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Ship);
	HX_MARK_MEMBER_NAME(mLives,"mLives");
	HX_MARK_MEMBER_NAME(mStartLives,"mStartLives");
	HX_MARK_MEMBER_NAME(mKills,"mKills");
	HX_MARK_MEMBER_NAME(mScore,"mScore");
	HX_MARK_MEMBER_NAME(mPlayTime,"mPlayTime");
	HX_MARK_MEMBER_NAME(mEnergy,"mEnergy");
	HX_MARK_MEMBER_NAME(mMaxEnergy,"mMaxEnergy");
	HX_MARK_MEMBER_NAME(mWeaponOffset,"mWeaponOffset");
	HX_MARK_MEMBER_NAME(mWorld,"mWorld");
	HX_MARK_MEMBER_NAME(mCanShoot,"mCanShoot");
	HX_MARK_MEMBER_NAME(mShootTimer,"mShootTimer");
	HX_MARK_MEMBER_NAME(mCanPlayShoot,"mCanPlayShoot");
	HX_MARK_MEMBER_NAME(mShootSoundTimer,"mShootSoundTimer");
	HX_MARK_MEMBER_NAME(mHitTimer,"mHitTimer");
	HX_MARK_MEMBER_NAME(mEmitter,"mEmitter");
	HX_MARK_MEMBER_NAME(mJustCollided,"mJustCollided");
	HX_MARK_MEMBER_NAME(HP,"HP");
	HX_MARK_MEMBER_NAME(mShootDoubleSound,"mShootDoubleSound");
	HX_MARK_MEMBER_NAME(mHitSound,"mHitSound");
	HX_MARK_MEMBER_NAME(mDeathSound,"mDeathSound");
	HX_MARK_MEMBER_NAME(mHalo,"mHalo");
	HX_MARK_MEMBER_NAME(mTrail,"mTrail");
	::org::wildrabbit::game::Entity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Ship_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mLives,"mLives");
	HX_VISIT_MEMBER_NAME(mStartLives,"mStartLives");
	HX_VISIT_MEMBER_NAME(mKills,"mKills");
	HX_VISIT_MEMBER_NAME(mScore,"mScore");
	HX_VISIT_MEMBER_NAME(mPlayTime,"mPlayTime");
	HX_VISIT_MEMBER_NAME(mEnergy,"mEnergy");
	HX_VISIT_MEMBER_NAME(mMaxEnergy,"mMaxEnergy");
	HX_VISIT_MEMBER_NAME(mWeaponOffset,"mWeaponOffset");
	HX_VISIT_MEMBER_NAME(mWorld,"mWorld");
	HX_VISIT_MEMBER_NAME(mCanShoot,"mCanShoot");
	HX_VISIT_MEMBER_NAME(mShootTimer,"mShootTimer");
	HX_VISIT_MEMBER_NAME(mCanPlayShoot,"mCanPlayShoot");
	HX_VISIT_MEMBER_NAME(mShootSoundTimer,"mShootSoundTimer");
	HX_VISIT_MEMBER_NAME(mHitTimer,"mHitTimer");
	HX_VISIT_MEMBER_NAME(mEmitter,"mEmitter");
	HX_VISIT_MEMBER_NAME(mJustCollided,"mJustCollided");
	HX_VISIT_MEMBER_NAME(HP,"HP");
	HX_VISIT_MEMBER_NAME(mShootDoubleSound,"mShootDoubleSound");
	HX_VISIT_MEMBER_NAME(mHitSound,"mHitSound");
	HX_VISIT_MEMBER_NAME(mDeathSound,"mDeathSound");
	HX_VISIT_MEMBER_NAME(mHalo,"mHalo");
	HX_VISIT_MEMBER_NAME(mTrail,"mTrail");
	::org::wildrabbit::game::Entity_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Ship_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"HP") ) { return HP; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"halo") ) { if (inCallProp == hx::paccAlways) return get_halo(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mHalo") ) { return mHalo; }
		if (HX_FIELD_EQ(inName,"trail") ) { if (inCallProp == hx::paccAlways) return get_trail(); }
		if (HX_FIELD_EQ(inName,"shoot") ) { return shoot_dyn(); }
		if (HX_FIELD_EQ(inName,"onHit") ) { return onHit_dyn(); }
		if (HX_FIELD_EQ(inName,"blast") ) { return blast_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mLives") ) { return mLives; }
		if (HX_FIELD_EQ(inName,"mKills") ) { return mKills; }
		if (HX_FIELD_EQ(inName,"mScore") ) { return mScore; }
		if (HX_FIELD_EQ(inName,"mWorld") ) { return mWorld; }
		if (HX_FIELD_EQ(inName,"mTrail") ) { return mTrail; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mEnergy") ) { return mEnergy; }
		if (HX_FIELD_EQ(inName,"onDeath") ) { return onDeath_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mEmitter") ) { return mEmitter; }
		if (HX_FIELD_EQ(inName,"get_halo") ) { return get_halo_dyn(); }
		if (HX_FIELD_EQ(inName,"set_halo") ) { return set_halo_dyn(); }
		if (HX_FIELD_EQ(inName,"showHalo") ) { return showHalo_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mPlayTime") ) { return mPlayTime; }
		if (HX_FIELD_EQ(inName,"mCanShoot") ) { return mCanShoot; }
		if (HX_FIELD_EQ(inName,"mHitTimer") ) { return mHitTimer; }
		if (HX_FIELD_EQ(inName,"mHitSound") ) { return mHitSound; }
		if (HX_FIELD_EQ(inName,"get_trail") ) { return get_trail_dyn(); }
		if (HX_FIELD_EQ(inName,"set_trail") ) { return set_trail_dyn(); }
		if (HX_FIELD_EQ(inName,"getOffset") ) { return getOffset_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mMaxEnergy") ) { return mMaxEnergy; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mStartLives") ) { return mStartLives; }
		if (HX_FIELD_EQ(inName,"mShootTimer") ) { return mShootTimer; }
		if (HX_FIELD_EQ(inName,"mDeathSound") ) { return mDeathSound; }
		if (HX_FIELD_EQ(inName,"switchShape") ) { return switchShape_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateOffset") ) { return updateOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"onHitTimeout") ) { return onHitTimeout_dyn(); }
		if (HX_FIELD_EQ(inName,"absorbEnergy") ) { return absorbEnergy_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mWeaponOffset") ) { return mWeaponOffset; }
		if (HX_FIELD_EQ(inName,"mCanPlayShoot") ) { return mCanPlayShoot; }
		if (HX_FIELD_EQ(inName,"mJustCollided") ) { return mJustCollided; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"mShootSoundTimer") ) { return mShootSoundTimer; }
		if (HX_FIELD_EQ(inName,"updateCollisions") ) { return updateCollisions_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"mShootDoubleSound") ) { return mShootDoubleSound; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onCooldownFinished") ) { return onCooldownFinished_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Ship_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"BULLET_TTL") ) { outValue = BULLET_TTL; return true;  }
		if (HX_FIELD_EQ(inName,"ShapeAnims") ) { outValue = ShapeAnims; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"BULLET_SPEED") ) { outValue = BULLET_SPEED; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"SHOOT_COOLDOWN") ) { outValue = SHOOT_COOLDOWN; return true;  }
	}
	return false;
}

Dynamic Ship_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"HP") ) { HP=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"halo") ) { if (inCallProp == hx::paccAlways) return set_halo(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mHalo") ) { mHalo=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"trail") ) { if (inCallProp == hx::paccAlways) return set_trail(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mLives") ) { mLives=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mKills") ) { mKills=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mScore") ) { mScore=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mWorld") ) { mWorld=inValue.Cast< ::org::wildrabbit::game::World >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mTrail") ) { mTrail=inValue.Cast< ::flixel::addons::effects::FlxTrail >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mEnergy") ) { mEnergy=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mEmitter") ) { mEmitter=inValue.Cast< ::org::wildrabbit::FlxTimedEmitter >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mPlayTime") ) { mPlayTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mCanShoot") ) { mCanShoot=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mHitTimer") ) { mHitTimer=inValue.Cast< ::flixel::util::FlxTimer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mHitSound") ) { mHitSound=inValue.Cast< ::flixel::_system::FlxSound >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mMaxEnergy") ) { mMaxEnergy=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mStartLives") ) { mStartLives=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mShootTimer") ) { mShootTimer=inValue.Cast< ::flixel::util::FlxTimer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mDeathSound") ) { mDeathSound=inValue.Cast< ::flixel::_system::FlxSound >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mWeaponOffset") ) { mWeaponOffset=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mCanPlayShoot") ) { mCanPlayShoot=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mJustCollided") ) { mJustCollided=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"mShootSoundTimer") ) { mShootSoundTimer=inValue.Cast< ::flixel::util::FlxTimer >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"mShootDoubleSound") ) { mShootDoubleSound=inValue.Cast< ::flixel::_system::FlxSound >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Ship_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"BULLET_TTL") ) { BULLET_TTL=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"ShapeAnims") ) { ShapeAnims=ioValue.Cast< Array< ::String > >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"BULLET_SPEED") ) { BULLET_SPEED=ioValue.Cast< Float >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"SHOOT_COOLDOWN") ) { SHOOT_COOLDOWN=ioValue.Cast< Float >(); return true; }
	}
	return false;
}

void Ship_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("mLives","\x5a","\xb4","\x1b","\x9d"));
	outFields->push(HX_HCSTRING("mStartLives","\x12","\x77","\x83","\x66"));
	outFields->push(HX_HCSTRING("mKills","\x68","\x8f","\xad","\x09"));
	outFields->push(HX_HCSTRING("mScore","\xa5","\x37","\xed","\xa0"));
	outFields->push(HX_HCSTRING("mPlayTime","\xae","\xa1","\x8b","\xe7"));
	outFields->push(HX_HCSTRING("mEnergy","\x15","\xad","\x70","\xe4"));
	outFields->push(HX_HCSTRING("mMaxEnergy","\x5f","\xa4","\x4b","\xac"));
	outFields->push(HX_HCSTRING("mWeaponOffset","\x9c","\xeb","\x85","\x48"));
	outFields->push(HX_HCSTRING("mWorld","\xa5","\x5a","\x78","\xf6"));
	outFields->push(HX_HCSTRING("mCanShoot","\x3c","\x35","\x36","\x95"));
	outFields->push(HX_HCSTRING("mShootTimer","\x33","\x34","\x62","\xc2"));
	outFields->push(HX_HCSTRING("mCanPlayShoot","\x28","\xd5","\x33","\x9b"));
	outFields->push(HX_HCSTRING("mShootSoundTimer","\x48","\x91","\xeb","\xc8"));
	outFields->push(HX_HCSTRING("mHitTimer","\xff","\x8d","\x10","\xfa"));
	outFields->push(HX_HCSTRING("mEmitter","\x81","\xf4","\xc1","\xe6"));
	outFields->push(HX_HCSTRING("mJustCollided","\x7f","\x2d","\x51","\x34"));
	outFields->push(HX_HCSTRING("HP","\x08","\x3f","\x00","\x00"));
	outFields->push(HX_HCSTRING("mShootDoubleSound","\xec","\x8e","\x18","\x39"));
	outFields->push(HX_HCSTRING("mHitSound","\x09","\x5b","\xa7","\x6a"));
	outFields->push(HX_HCSTRING("mDeathSound","\xc8","\x7f","\xa8","\x58"));
	outFields->push(HX_HCSTRING("mHalo","\xc9","\x90","\x8e","\xf2"));
	outFields->push(HX_HCSTRING("halo","\xbc","\x29","\x08","\x45"));
	outFields->push(HX_HCSTRING("mTrail","\x19","\x58","\x33","\x3e"));
	outFields->push(HX_HCSTRING("trail","\xc6","\x93","\x1f","\x16"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Ship_obj,mLives),HX_HCSTRING("mLives","\x5a","\xb4","\x1b","\x9d")},
	{hx::fsInt,(int)offsetof(Ship_obj,mStartLives),HX_HCSTRING("mStartLives","\x12","\x77","\x83","\x66")},
	{hx::fsInt,(int)offsetof(Ship_obj,mKills),HX_HCSTRING("mKills","\x68","\x8f","\xad","\x09")},
	{hx::fsInt,(int)offsetof(Ship_obj,mScore),HX_HCSTRING("mScore","\xa5","\x37","\xed","\xa0")},
	{hx::fsFloat,(int)offsetof(Ship_obj,mPlayTime),HX_HCSTRING("mPlayTime","\xae","\xa1","\x8b","\xe7")},
	{hx::fsInt,(int)offsetof(Ship_obj,mEnergy),HX_HCSTRING("mEnergy","\x15","\xad","\x70","\xe4")},
	{hx::fsInt,(int)offsetof(Ship_obj,mMaxEnergy),HX_HCSTRING("mMaxEnergy","\x5f","\xa4","\x4b","\xac")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(Ship_obj,mWeaponOffset),HX_HCSTRING("mWeaponOffset","\x9c","\xeb","\x85","\x48")},
	{hx::fsObject /*::org::wildrabbit::game::World*/ ,(int)offsetof(Ship_obj,mWorld),HX_HCSTRING("mWorld","\xa5","\x5a","\x78","\xf6")},
	{hx::fsBool,(int)offsetof(Ship_obj,mCanShoot),HX_HCSTRING("mCanShoot","\x3c","\x35","\x36","\x95")},
	{hx::fsObject /*::flixel::util::FlxTimer*/ ,(int)offsetof(Ship_obj,mShootTimer),HX_HCSTRING("mShootTimer","\x33","\x34","\x62","\xc2")},
	{hx::fsBool,(int)offsetof(Ship_obj,mCanPlayShoot),HX_HCSTRING("mCanPlayShoot","\x28","\xd5","\x33","\x9b")},
	{hx::fsObject /*::flixel::util::FlxTimer*/ ,(int)offsetof(Ship_obj,mShootSoundTimer),HX_HCSTRING("mShootSoundTimer","\x48","\x91","\xeb","\xc8")},
	{hx::fsObject /*::flixel::util::FlxTimer*/ ,(int)offsetof(Ship_obj,mHitTimer),HX_HCSTRING("mHitTimer","\xff","\x8d","\x10","\xfa")},
	{hx::fsObject /*::org::wildrabbit::FlxTimedEmitter*/ ,(int)offsetof(Ship_obj,mEmitter),HX_HCSTRING("mEmitter","\x81","\xf4","\xc1","\xe6")},
	{hx::fsBool,(int)offsetof(Ship_obj,mJustCollided),HX_HCSTRING("mJustCollided","\x7f","\x2d","\x51","\x34")},
	{hx::fsFloat,(int)offsetof(Ship_obj,HP),HX_HCSTRING("HP","\x08","\x3f","\x00","\x00")},
	{hx::fsObject /*::flixel::_system::FlxSound*/ ,(int)offsetof(Ship_obj,mShootDoubleSound),HX_HCSTRING("mShootDoubleSound","\xec","\x8e","\x18","\x39")},
	{hx::fsObject /*::flixel::_system::FlxSound*/ ,(int)offsetof(Ship_obj,mHitSound),HX_HCSTRING("mHitSound","\x09","\x5b","\xa7","\x6a")},
	{hx::fsObject /*::flixel::_system::FlxSound*/ ,(int)offsetof(Ship_obj,mDeathSound),HX_HCSTRING("mDeathSound","\xc8","\x7f","\xa8","\x58")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(Ship_obj,mHalo),HX_HCSTRING("mHalo","\xc9","\x90","\x8e","\xf2")},
	{hx::fsObject /*::flixel::addons::effects::FlxTrail*/ ,(int)offsetof(Ship_obj,mTrail),HX_HCSTRING("mTrail","\x19","\x58","\x33","\x3e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &Ship_obj::SHOOT_COOLDOWN,HX_HCSTRING("SHOOT_COOLDOWN","\x6b","\x69","\x38","\x7e")},
	{hx::fsFloat,(void *) &Ship_obj::BULLET_TTL,HX_HCSTRING("BULLET_TTL","\x0f","\xd3","\x07","\x24")},
	{hx::fsFloat,(void *) &Ship_obj::BULLET_SPEED,HX_HCSTRING("BULLET_SPEED","\x6a","\x72","\xdd","\x7d")},
	{hx::fsObject /*Array< ::String >*/ ,(void *) &Ship_obj::ShapeAnims,HX_HCSTRING("ShapeAnims","\x81","\x62","\xd5","\xff")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("mLives","\x5a","\xb4","\x1b","\x9d"),
	HX_HCSTRING("mStartLives","\x12","\x77","\x83","\x66"),
	HX_HCSTRING("mKills","\x68","\x8f","\xad","\x09"),
	HX_HCSTRING("mScore","\xa5","\x37","\xed","\xa0"),
	HX_HCSTRING("mPlayTime","\xae","\xa1","\x8b","\xe7"),
	HX_HCSTRING("mEnergy","\x15","\xad","\x70","\xe4"),
	HX_HCSTRING("mMaxEnergy","\x5f","\xa4","\x4b","\xac"),
	HX_HCSTRING("mWeaponOffset","\x9c","\xeb","\x85","\x48"),
	HX_HCSTRING("mWorld","\xa5","\x5a","\x78","\xf6"),
	HX_HCSTRING("mCanShoot","\x3c","\x35","\x36","\x95"),
	HX_HCSTRING("mShootTimer","\x33","\x34","\x62","\xc2"),
	HX_HCSTRING("mCanPlayShoot","\x28","\xd5","\x33","\x9b"),
	HX_HCSTRING("mShootSoundTimer","\x48","\x91","\xeb","\xc8"),
	HX_HCSTRING("mHitTimer","\xff","\x8d","\x10","\xfa"),
	HX_HCSTRING("mEmitter","\x81","\xf4","\xc1","\xe6"),
	HX_HCSTRING("mJustCollided","\x7f","\x2d","\x51","\x34"),
	HX_HCSTRING("HP","\x08","\x3f","\x00","\x00"),
	HX_HCSTRING("mShootDoubleSound","\xec","\x8e","\x18","\x39"),
	HX_HCSTRING("mHitSound","\x09","\x5b","\xa7","\x6a"),
	HX_HCSTRING("mDeathSound","\xc8","\x7f","\xa8","\x58"),
	HX_HCSTRING("mHalo","\xc9","\x90","\x8e","\xf2"),
	HX_HCSTRING("get_halo","\x45","\xe5","\xc2","\xc4"),
	HX_HCSTRING("set_halo","\xb9","\x3e","\x20","\x73"),
	HX_HCSTRING("mTrail","\x19","\x58","\x33","\x3e"),
	HX_HCSTRING("get_trail","\x1d","\xf0","\xc8","\x59"),
	HX_HCSTRING("set_trail","\x29","\xdc","\x19","\x3d"),
	HX_HCSTRING("switchShape","\x8d","\x74","\x9c","\x6f"),
	HX_HCSTRING("showHalo","\x59","\xed","\x8e","\xac"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("shoot","\xdf","\x81","\x27","\x7c"),
	HX_HCSTRING("updateOffset","\x7c","\x3e","\x03","\x60"),
	HX_HCSTRING("getOffset","\xc9","\x20","\x96","\xdc"),
	HX_HCSTRING("onCooldownFinished","\x7c","\x69","\x7a","\xd3"),
	HX_HCSTRING("updateCollisions","\x2a","\x8b","\x04","\x42"),
	HX_HCSTRING("onDeath","\x95","\x2d","\x5c","\x6d"),
	HX_HCSTRING("onHit","\x74","\xda","\x66","\x32"),
	HX_HCSTRING("onHitTimeout","\x8d","\x5e","\xac","\x0c"),
	HX_HCSTRING("absorbEnergy","\x55","\x5d","\x49","\xaa"),
	HX_HCSTRING("blast","\xb8","\xe3","\xf1","\xb4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Ship_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Ship_obj::SHOOT_COOLDOWN,"SHOOT_COOLDOWN");
	HX_MARK_MEMBER_NAME(Ship_obj::BULLET_TTL,"BULLET_TTL");
	HX_MARK_MEMBER_NAME(Ship_obj::BULLET_SPEED,"BULLET_SPEED");
	HX_MARK_MEMBER_NAME(Ship_obj::ShapeAnims,"ShapeAnims");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Ship_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Ship_obj::SHOOT_COOLDOWN,"SHOOT_COOLDOWN");
	HX_VISIT_MEMBER_NAME(Ship_obj::BULLET_TTL,"BULLET_TTL");
	HX_VISIT_MEMBER_NAME(Ship_obj::BULLET_SPEED,"BULLET_SPEED");
	HX_VISIT_MEMBER_NAME(Ship_obj::ShapeAnims,"ShapeAnims");
};

#endif

hx::Class Ship_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("SHOOT_COOLDOWN","\x6b","\x69","\x38","\x7e"),
	HX_HCSTRING("BULLET_TTL","\x0f","\xd3","\x07","\x24"),
	HX_HCSTRING("BULLET_SPEED","\x6a","\x72","\xdd","\x7d"),
	HX_HCSTRING("ShapeAnims","\x81","\x62","\xd5","\xff"),
	::String(null()) };

void Ship_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("org.wildrabbit.game.Ship","\x18","\x9f","\xe5","\x61");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Ship_obj::__GetStatic;
	__mClass->mSetStaticField = &Ship_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Ship_obj >;
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

void Ship_obj::__boot()
{
	SHOOT_COOLDOWN= ((Float)0.04);
	BULLET_TTL= ((Float)1);
	BULLET_SPEED= ((Float)350);
	ShapeAnims= Array_obj< ::String >::__new().Add(HX_HCSTRING("circle","\x10","\x72","\x0d","\x56")).Add(HX_HCSTRING("triangle","\xc8","\xbe","\xc5","\x8d")).Add(HX_HCSTRING("square","\x9d","\x00","\xf2","\x58"));
}

} // end namespace org
} // end namespace wildrabbit
} // end namespace game
