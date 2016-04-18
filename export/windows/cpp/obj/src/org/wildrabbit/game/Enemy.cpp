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
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
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
#ifndef INCLUDED_flixel_math_FlxAngle
#include <flixel/math/FlxAngle.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BlendMode
#include <openfl/_legacy/display/BlendMode.h>
#endif
#ifndef INCLUDED_org_wildrabbit_FlxTimedEmitter
#include <org/wildrabbit/FlxTimedEmitter.h>
#endif
#ifndef INCLUDED_org_wildrabbit_PlayState
#include <org/wildrabbit/PlayState.h>
#endif
#ifndef INCLUDED_org_wildrabbit_game_BaseBullet
#include <org/wildrabbit/game/BaseBullet.h>
#endif
#ifndef INCLUDED_org_wildrabbit_game_Enemy
#include <org/wildrabbit/game/Enemy.h>
#endif
#ifndef INCLUDED_org_wildrabbit_game_EnemyBullet
#include <org/wildrabbit/game/EnemyBullet.h>
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

Void Enemy_obj::__construct(::org::wildrabbit::PlayState parent)
{
HX_STACK_FRAME("org.wildrabbit.game.Enemy","new",0xb5b57a5e,"org.wildrabbit.game.Enemy.new","org/wildrabbit/game/Enemy.hx",26,0xb4207233)
HX_STACK_THIS(this)
HX_STACK_ARG(parent,"parent")
{
	HX_STACK_LINE(45)
	this->mWandering = false;
	HX_STACK_LINE(36)
	this->mStunned = false;
	HX_STACK_LINE(55)
	::org::wildrabbit::PlayState tmp = parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	super::__construct(tmp,(int)0);
	HX_STACK_LINE(56)
	this->loadGraphic(HX_HCSTRING("assets/images/ship_shapes.png","\x05","\xf8","\xbc","\x23"),true,(int)32,(int)32,null(),null());
	HX_STACK_LINE(57)
	::flixel::animation::FlxAnimationController tmp1 = this->animation;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(57)
	tmp1->add(HX_HCSTRING("circle","\x10","\x72","\x0d","\x56"),Array_obj< int >::__new().Add((int)4).Add((int)5),(int)8,null(),null(),null());
	HX_STACK_LINE(58)
	::flixel::animation::FlxAnimationController tmp2 = this->animation;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(58)
	tmp2->add(HX_HCSTRING("triangle","\xc8","\xbe","\xc5","\x8d"),Array_obj< int >::__new().Add((int)8).Add((int)9),(int)8,null(),null(),null());
	HX_STACK_LINE(59)
	::flixel::animation::FlxAnimationController tmp3 = this->animation;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(59)
	tmp3->add(HX_HCSTRING("square","\x9d","\x00","\xf2","\x58"),Array_obj< int >::__new().Add((int)12).Add((int)13),(int)8,null(),null(),null());
	HX_STACK_LINE(60)
	::flixel::util::FlxTimer tmp4 = ::flixel::util::FlxTimer_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(60)
	this->mHitTimer = tmp4;
	HX_STACK_LINE(61)
	this->mDeadTween = null();
	HX_STACK_LINE(62)
	int tmp5 = (::org::wildrabbit::game::Enemy_obj::count)++;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(62)
	this->mID = tmp5;
	HX_STACK_LINE(63)
	::org::wildrabbit::FlxTimedEmitter tmp6 = ::org::wildrabbit::FlxTimedEmitter_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(63)
	this->mEmitter = tmp6;
	HX_STACK_LINE(64)
	::org::wildrabbit::FlxTimedEmitter tmp7 = this->mEmitter;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(64)
	tmp7->kill();
	HX_STACK_LINE(65)
	::org::wildrabbit::PlayState tmp8 = this->mParent;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(65)
	::org::wildrabbit::FlxTimedEmitter tmp9 = this->mEmitter;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(65)
	tmp8->mDeathEmitters->add(tmp9);
	HX_STACK_LINE(66)
	::flixel::util::FlxTimer tmp10 = ::flixel::util::FlxTimer_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(66)
	this->mWanderingTimer = tmp10;
	HX_STACK_LINE(67)
	::flixel::util::FlxTimer tmp11 = ::flixel::util::FlxTimer_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(67)
	this->mShootTimer = tmp11;
	HX_STACK_LINE(69)
	this->mCanShoot = false;
	HX_STACK_LINE(70)
	this->mCanPlayShoot = false;
	HX_STACK_LINE(72)
	::flixel::_system::frontEnds::SoundFrontEnd tmp12 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(72)
	::flixel::_system::FlxSound tmp13 = tmp12->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(HX_HCSTRING("assets/sounds/enemy_nohit.wav","\x3a","\xf0","\x61","\xd4"),((Float)0.2),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(72)
	this->mNoHitSound = tmp13;
	HX_STACK_LINE(73)
	::flixel::_system::frontEnds::SoundFrontEnd tmp14 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(73)
	::flixel::_system::FlxSound tmp15 = tmp14->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(HX_HCSTRING("assets/sounds/enemy_shoot.wav","\xe7","\x47","\xf2","\xeb"),((Float)0.2),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(73)
	this->mShootSound = tmp15;
	HX_STACK_LINE(74)
	::flixel::_system::frontEnds::SoundFrontEnd tmp16 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(74)
	::flixel::_system::FlxSound tmp17 = tmp16->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(HX_HCSTRING("assets/sounds/enemy_hit.wav","\xdb","\xaf","\x76","\xb4"),((Float)0.2),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(74)
	this->mHitSound = tmp17;
	HX_STACK_LINE(75)
	::flixel::_system::frontEnds::SoundFrontEnd tmp18 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(75)
	::flixel::_system::FlxSound tmp19 = tmp18->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(HX_HCSTRING("assets/sounds/enemy_explode.wav","\x69","\xf1","\x47","\xeb"),((Float)0.2),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(75)
	this->mDeathSound = tmp19;
}
;
	return null();
}

//Enemy_obj::~Enemy_obj() { }

Dynamic Enemy_obj::__CreateEmpty() { return  new Enemy_obj; }
hx::ObjectPtr< Enemy_obj > Enemy_obj::__new(::org::wildrabbit::PlayState parent)
{  hx::ObjectPtr< Enemy_obj > _result_ = new Enemy_obj();
	_result_->__construct(parent);
	return _result_;}

Dynamic Enemy_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Enemy_obj > _result_ = new Enemy_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Enemy_obj::start( int shape){
{
		HX_STACK_FRAME("org.wildrabbit.game.Enemy","start",0x94aa19e0,"org.wildrabbit.game.Enemy.start","org/wildrabbit/game/Enemy.hx",79,0xb4207233)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shape,"shape")
		HX_STACK_LINE(78)
		::org::wildrabbit::game::Enemy _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(80)
		int tmp = shape;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(80)
		this->switchShape(tmp);
		HX_STACK_LINE(81)
		::flixel::math::FlxPoint tmp1 = this->scale;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(81)
		tmp1->set((int)1,(int)1);
		HX_STACK_LINE(82)
		this->updateHitbox();
		HX_STACK_LINE(83)
		{
			HX_STACK_LINE(83)
			::flixel::math::FlxPoint tmp2 = this->origin;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(83)
			int tmp3 = this->frameWidth;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(83)
			Float tmp4 = (tmp3 * ((Float)0.5));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(83)
			int tmp5 = this->frameHeight;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(83)
			Float tmp6 = (tmp5 * ((Float)0.5));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(83)
			tmp2->set(tmp4,tmp6);
		}
		HX_STACK_LINE(84)
		this->maxHealth = (int)4;
		HX_STACK_LINE(85)
		this->set_alpha((int)1);
		HX_STACK_LINE(86)
		int tmp2 = this->maxHealth;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(86)
		this->health = tmp2;
		HX_STACK_LINE(87)
		this->mStunned = false;
		HX_STACK_LINE(88)
		::org::wildrabbit::PlayState tmp3 = this->mParent;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(88)
		bool tmp4 = tmp3->isHardMode();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(88)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(88)
		if ((tmp4)){
			HX_STACK_LINE(88)
			int tmp6 = ::org::wildrabbit::game::Enemy_obj::BASIC_ENEMY_SPEED;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(88)
			tmp5 = (tmp6 * ((Float)1.2));
		}
		else{
			HX_STACK_LINE(88)
			tmp5 = ::org::wildrabbit::game::Enemy_obj::BASIC_ENEMY_SPEED;
		}
		HX_STACK_LINE(88)
		this->mSpeed = tmp5;
		HX_STACK_LINE(89)
		::flixel::util::FlxTimer tmp6 = this->mHitTimer;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(89)
		tmp6->cancel();
		HX_STACK_LINE(90)
		this->set_solid(true);
		HX_STACK_LINE(91)
		this->mDeadTween = null();
		HX_STACK_LINE(92)
		this->mWandering = false;
		HX_STACK_LINE(94)
		this->mCanShoot = false;
		HX_STACK_LINE(95)
		this->mCanPlayShoot = false;
		HX_STACK_LINE(96)
		::flixel::util::FlxTimer tmp7 = this->mShootTimer;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(96)
		Float tmp8 = ::org::wildrabbit::game::Enemy_obj::INITIAL_DELAY;		HX_STACK_VAR(tmp8,"tmp8");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::org::wildrabbit::game::Enemy,_g)
		int __ArgCount() const { return 1; }
		Void run(::flixel::util::FlxTimer t){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/wildrabbit/game/Enemy.hx",96,0xb4207233)
			HX_STACK_ARG(t,"t")
			{
				HX_STACK_LINE(96)
				bool tmp9 = _g->mCanPlayShoot = true;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(96)
				_g->mCanShoot = tmp9;
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(96)
		tmp7->start(tmp8, Dynamic(new _Function_1_1(_g)),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Enemy_obj,start,(void))

Void Enemy_obj::switchShape( int shape){
{
		HX_STACK_FRAME("org.wildrabbit.game.Enemy","switchShape",0x97d54c8b,"org.wildrabbit.game.Enemy.switchShape","org/wildrabbit/game/Enemy.hx",100,0xb4207233)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shape,"shape")
		HX_STACK_LINE(101)
		int tmp = shape;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(101)
		this->super::switchShape(tmp);
		HX_STACK_LINE(102)
		::flixel::animation::FlxAnimationController tmp1 = this->animation;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(102)
		int tmp2 = this->mShape;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(102)
		::String tmp3 = ::org::wildrabbit::game::Enemy_obj::ShapeAnims->__get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(102)
		tmp1->play(tmp3,null(),null(),null());
	}
return null();
}


Void Enemy_obj::update( Float elapsed){
{
		HX_STACK_FRAME("org.wildrabbit.game.Enemy","update",0x0137aecb,"org.wildrabbit.game.Enemy.update","org/wildrabbit/game/Enemy.hx",106,0xb4207233)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(107)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(107)
		this->super::update(tmp);
		HX_STACK_LINE(110)
		bool tmp1 = this->mStunned;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(110)
		if ((tmp1)){
			HX_STACK_LINE(110)
			return null();
		}
		HX_STACK_LINE(112)
		::flixel::math::FlxPoint tmp2 = this->velocity;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(112)
		::flixel::math::FlxVector tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(112)
		tmp3 = hx::TCast< ::flixel::math::FlxVector >::cast(tmp2);
		HX_STACK_LINE(112)
		::flixel::math::FlxVector velocityVec = tmp3;		HX_STACK_VAR(velocityVec,"velocityVec");
		HX_STACK_LINE(114)
		bool tmp4 = this->mWandering;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(114)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(114)
		if ((tmp5)){
			HX_STACK_LINE(116)
			::org::wildrabbit::PlayState tmp6 = this->mParent;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(116)
			Float tmp7 = tmp6->mPlayerShip->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(116)
			Float tmp8 = this->x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(116)
			Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(116)
			::org::wildrabbit::PlayState tmp10 = this->mParent;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(116)
			Float tmp11 = tmp10->mPlayerShip->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(116)
			Float tmp12 = this->y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(116)
			Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(116)
			hx::TCast< ::flixel::math::FlxVector >::cast(velocityVec->set(tmp9,tmp13));
			HX_STACK_LINE(117)
			{
				HX_STACK_LINE(117)
				::flixel::math::FlxVector tmp14 = velocityVec->normalize();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(117)
				::flixel::math::FlxVector _this = tmp14;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(117)
				Float tmp15 = this->mSpeed;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(117)
				Float k = tmp15;		HX_STACK_VAR(k,"k");
				HX_STACK_LINE(117)
				{
					HX_STACK_LINE(117)
					::flixel::math::FlxVector _g = _this;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(117)
					Float tmp16 = (_g->x * k);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(117)
					_g->set_x(tmp16);
				}
				HX_STACK_LINE(117)
				{
					HX_STACK_LINE(117)
					::flixel::math::FlxVector _g = _this;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(117)
					Float tmp16 = (_g->y * k);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(117)
					_g->set_y(tmp16);
				}
				HX_STACK_LINE(117)
				_this;
			}
			HX_STACK_LINE(119)
			::flixel::math::FlxPoint tmp14 = this->velocity;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(119)
			Float tmp15 = velocityVec->x;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(119)
			::flixel::math::FlxRandom tmp16 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(119)
			Float tmp17 = tmp16->_float(((Float)-20.0),((Float)20.0),null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(119)
			Float tmp18 = (tmp15 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(119)
			tmp14->set_x(tmp18);
			HX_STACK_LINE(120)
			::flixel::math::FlxPoint tmp19 = this->velocity;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(120)
			Float tmp20 = velocityVec->y;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(120)
			::flixel::math::FlxRandom tmp21 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(120)
			Float tmp22 = tmp21->_float(((Float)-20.0),((Float)20.0),null());		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(120)
			Float tmp23 = (tmp20 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(120)
			tmp19->set_y(tmp23);
		}
		HX_STACK_LINE(124)
		Float tmp6 = velocityVec->get_radians();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(124)
		Float tmp7 = ::Math_obj::PI;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(124)
		Float tmp8 = (Float((int)180) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(124)
		Float tmp9 = (tmp6 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(124)
		this->set_angle(tmp9);
		HX_STACK_LINE(126)
		this->updateHitbox();
		HX_STACK_LINE(127)
		{
			HX_STACK_LINE(127)
			::flixel::math::FlxPoint tmp10 = this->origin;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(127)
			int tmp11 = this->frameWidth;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(127)
			Float tmp12 = (tmp11 * ((Float)0.5));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(127)
			int tmp13 = this->frameHeight;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(127)
			Float tmp14 = (tmp13 * ((Float)0.5));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(127)
			tmp10->set(tmp12,tmp14);
		}
		HX_STACK_LINE(129)
		Float tmp10 = elapsed;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(129)
		this->updateMotion(tmp10);
		HX_STACK_LINE(130)
		this->updateCollisions();
		HX_STACK_LINE(132)
		bool tmp11 = this->mCanShoot;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(132)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(132)
		if ((tmp11)){
			HX_STACK_LINE(132)
			::flixel::math::FlxRandom tmp13 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(132)
			::flixel::math::FlxRandom tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(132)
			Float tmp15 = tmp14->_float((int)0,(int)100,null());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(132)
			Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(132)
			tmp12 = (tmp16 < (int)5);
		}
		else{
			HX_STACK_LINE(132)
			tmp12 = false;
		}
		HX_STACK_LINE(132)
		if ((tmp12)){
			HX_STACK_LINE(134)
			Float tmp13 = velocityVec->get_radians();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(134)
			this->shoot(tmp13);
		}
	}
return null();
}


Void Enemy_obj::updateCollisions( ){
{
		HX_STACK_FRAME("org.wildrabbit.game.Enemy","updateCollisions",0x9805fa6c,"org.wildrabbit.game.Enemy.updateCollisions","org/wildrabbit/game/Enemy.hx",139,0xb4207233)
		HX_STACK_THIS(this)
		HX_STACK_LINE(140)
		Float tmp = this->get_width();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(140)
		Float tmp1 = (Float(tmp) / Float((int)2));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(140)
		Float halfWidth = tmp1;		HX_STACK_VAR(halfWidth,"halfWidth");
		HX_STACK_LINE(141)
		Float tmp2 = this->get_height();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(141)
		Float tmp3 = (Float(tmp2) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(141)
		Float halfHeight = tmp3;		HX_STACK_VAR(halfHeight,"halfHeight");
		HX_STACK_LINE(142)
		::flixel::math::FlxPoint tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(142)
		{
			HX_STACK_LINE(142)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp5 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(142)
			::flixel::math::FlxPoint tmp6 = tmp5->get();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(142)
			Float tmp7 = this->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(142)
			Float tmp8 = halfWidth;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(142)
			Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(142)
			Float tmp10 = this->y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(142)
			Float tmp11 = halfHeight;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(142)
			Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(142)
			::flixel::math::FlxPoint tmp13 = tmp6->set(tmp9,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(142)
			::flixel::math::FlxPoint point = tmp13;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(142)
			point->_inPool = false;
			HX_STACK_LINE(142)
			tmp4 = point;
		}
		HX_STACK_LINE(142)
		::flixel::math::FlxPoint center = tmp4;		HX_STACK_VAR(center,"center");
		HX_STACK_LINE(143)
		Float radius = halfHeight;		HX_STACK_VAR(radius,"radius");
		HX_STACK_LINE(145)
		Float tmp5 = center->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(145)
		::org::wildrabbit::PlayState tmp6 = this->mParent;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(145)
		::flixel::math::FlxPoint tmp7 = tmp6->mWorld->mCenter;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(145)
		Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(145)
		Float tmp9 = (tmp5 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(145)
		Float deltaX = tmp9;		HX_STACK_VAR(deltaX,"deltaX");
		HX_STACK_LINE(146)
		Float tmp10 = center->y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(146)
		::org::wildrabbit::PlayState tmp11 = this->mParent;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(146)
		::flixel::math::FlxPoint tmp12 = tmp11->mWorld->mCenter;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(146)
		Float tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(146)
		Float tmp14 = (tmp10 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(146)
		Float deltaY = tmp14;		HX_STACK_VAR(deltaY,"deltaY");
		HX_STACK_LINE(147)
		Float tmp15 = (deltaX * deltaX);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(147)
		Float tmp16 = (deltaY * deltaY);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(147)
		Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(147)
		Float sqDistance = tmp17;		HX_STACK_VAR(sqDistance,"sqDistance");
		HX_STACK_LINE(149)
		::org::wildrabbit::PlayState tmp18 = this->mParent;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(149)
		Float tmp19 = tmp18->mWorld->mRadius;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(149)
		Float tmp20 = radius;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(149)
		Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(149)
		Float radiusDelta = tmp21;		HX_STACK_VAR(radiusDelta,"radiusDelta");
		HX_STACK_LINE(150)
		Float tmp22 = (radiusDelta * radiusDelta);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(150)
		Float sqRadiusDelta = tmp22;		HX_STACK_VAR(sqRadiusDelta,"sqRadiusDelta");
		HX_STACK_LINE(152)
		bool tmp23 = (sqDistance > sqRadiusDelta);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(152)
		if ((tmp23)){
			HX_STACK_LINE(154)
			::flixel::math::FlxPoint tmp24 = this->velocity;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(154)
			::flixel::math::FlxPoint tmp25 = this->velocity;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(154)
			Float tmp26 = tmp25->x;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(154)
			Float tmp27 = -(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(154)
			tmp24->set_x(tmp27);
			HX_STACK_LINE(155)
			::flixel::math::FlxPoint tmp28 = this->velocity;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(155)
			::flixel::math::FlxPoint tmp29 = this->velocity;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(155)
			Float tmp30 = tmp29->y;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(155)
			Float tmp31 = -(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(155)
			tmp28->set_y(tmp31);
			HX_STACK_LINE(156)
			Float tmp32 = sqDistance;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(156)
			Float tmp33 = ::Math_obj::sqrt(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(156)
			Float tmp34 = radiusDelta;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(156)
			Float tmp35 = ::Math_obj::abs(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(156)
			Float tmp36 = (tmp33 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(156)
			Float correctionDelta = tmp36;		HX_STACK_VAR(correctionDelta,"correctionDelta");
			HX_STACK_LINE(157)
			Float tmp37 = deltaY;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(157)
			Float tmp38 = deltaX;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(157)
			Float tmp39 = ::Math_obj::atan2(tmp37,tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(157)
			Float angle = tmp39;		HX_STACK_VAR(angle,"angle");
			HX_STACK_LINE(159)
			{
				HX_STACK_LINE(159)
				::org::wildrabbit::game::Enemy _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(159)
				Float tmp40 = _g->x;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(159)
				Float tmp41 = correctionDelta;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(159)
				Float tmp42 = angle;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(159)
				Float tmp43 = ::Math_obj::cos(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(159)
				Float tmp44 = (tmp41 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(159)
				Float tmp45 = (tmp40 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(159)
				_g->set_x(tmp45);
			}
			HX_STACK_LINE(160)
			{
				HX_STACK_LINE(160)
				::org::wildrabbit::game::Enemy _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(160)
				Float tmp40 = _g->y;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(160)
				Float tmp41 = correctionDelta;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(160)
				Float tmp42 = angle;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(160)
				Float tmp43 = ::Math_obj::sin(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(160)
				Float tmp44 = (tmp41 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(160)
				Float tmp45 = (tmp40 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(160)
				_g->set_y(tmp45);
			}
		}
		HX_STACK_LINE(162)
		center->put();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Enemy_obj,updateCollisions,(void))

Void Enemy_obj::onHit( ){
{
		HX_STACK_FRAME("org.wildrabbit.game.Enemy","onHit",0x43057ff2,"org.wildrabbit.game.Enemy.onHit","org/wildrabbit/game/Enemy.hx",166,0xb4207233)
		HX_STACK_THIS(this)
		HX_STACK_LINE(167)
		::flixel::_system::FlxSound tmp = this->mHitSound;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(167)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(167)
		if ((tmp1)){
			HX_STACK_LINE(169)
			::flixel::_system::FlxSound tmp2 = this->mHitSound;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(169)
			tmp2->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(true);
		}
		HX_STACK_LINE(171)
		::flixel::math::FlxVector tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(171)
		{
			HX_STACK_LINE(171)
			::flixel::util::FlxPool_flixel_math_FlxVector tmp3 = ::flixel::math::FlxVector_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(171)
			::flixel::math::FlxVector tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(171)
			::flixel::math::FlxPoint tmp5 = this->velocity;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(171)
			Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(171)
			::flixel::math::FlxPoint tmp7 = this->velocity;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(171)
			Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(171)
			::flixel::math::FlxVector tmp9 = hx::TCast< ::flixel::math::FlxVector >::cast(tmp4->set(tmp6,tmp8));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(171)
			::flixel::math::FlxVector vector = tmp9;		HX_STACK_VAR(vector,"vector");
			HX_STACK_LINE(171)
			vector->_inPool = false;
			HX_STACK_LINE(171)
			tmp2 = vector;
		}
		HX_STACK_LINE(171)
		::flixel::math::FlxVector oppVel = tmp2;		HX_STACK_VAR(oppVel,"oppVel");
		HX_STACK_LINE(172)
		{
			HX_STACK_LINE(172)
			::flixel::math::FlxVector tmp3 = oppVel->normalize();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(172)
			::flixel::math::FlxVector _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(172)
			{
				HX_STACK_LINE(172)
				::flixel::math::FlxVector _g = _this;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(172)
				Float tmp4 = (_g->x * (int)-5);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(172)
				_g->set_x(tmp4);
			}
			HX_STACK_LINE(172)
			{
				HX_STACK_LINE(172)
				::flixel::math::FlxVector _g = _this;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(172)
				Float tmp4 = (_g->y * (int)-5);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(172)
				_g->set_y(tmp4);
			}
			HX_STACK_LINE(172)
			_this;
		}
		HX_STACK_LINE(173)
		{
			HX_STACK_LINE(173)
			::org::wildrabbit::game::Enemy _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(173)
			Float tmp3 = (_g->x + oppVel->x);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(173)
			_g->set_x(tmp3);
		}
		HX_STACK_LINE(174)
		{
			HX_STACK_LINE(174)
			::org::wildrabbit::game::Enemy _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(174)
			Float tmp3 = (_g->y + oppVel->y);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(174)
			_g->set_y(tmp3);
		}
		HX_STACK_LINE(176)
		::org::wildrabbit::FlxTimedEmitter tmp3 = this->mEmitter;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(176)
		tmp3->launchMode = ::flixel::effects::particles::FlxEmitterMode_obj::CIRCLE;
		HX_STACK_LINE(177)
		{
			HX_STACK_LINE(177)
			::org::wildrabbit::FlxTimedEmitter tmp4 = this->mEmitter;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(177)
			::org::wildrabbit::FlxTimedEmitter _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(177)
			Float tmp5 = this->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(177)
			Float tmp6 = this->get_width();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(177)
			Float tmp7 = (Float(tmp6) / Float((int)2));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(177)
			Float tmp8 = (tmp5 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(177)
			Float X = tmp8;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(177)
			Float tmp9 = this->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(177)
			Float tmp10 = this->get_width();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(177)
			Float tmp11 = (Float(tmp10) / Float((int)2));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(177)
			Float tmp12 = (tmp9 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(177)
			Float Y = tmp12;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(177)
			_this->x = X;
			HX_STACK_LINE(177)
			_this->y = Y;
		}
		HX_STACK_LINE(178)
		::org::wildrabbit::FlxTimedEmitter tmp4 = this->mEmitter;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(178)
		tmp4->lifespan->set(((Float)0.3),null());
		HX_STACK_LINE(179)
		::org::wildrabbit::FlxTimedEmitter tmp5 = this->mEmitter;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(179)
		tmp5->speed->set((int)200,(int)200,(int)0,(int)0);
		HX_STACK_LINE(180)
		::org::wildrabbit::FlxTimedEmitter tmp6 = this->mEmitter;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(180)
		int tmp7 = this->color;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(180)
		tmp6->color->set(tmp7,null(),null(),null());
		HX_STACK_LINE(181)
		::org::wildrabbit::FlxTimedEmitter tmp8 = this->mEmitter;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(181)
		tmp8->alpha->set(((Float)0.4),((Float)0.6),((Float)0.0),((Float)0.0));
		HX_STACK_LINE(182)
		::org::wildrabbit::FlxTimedEmitter tmp9 = this->mEmitter;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(182)
		tmp9->blend = ::openfl::_legacy::display::BlendMode_obj::ADD;
		HX_STACK_LINE(183)
		::org::wildrabbit::FlxTimedEmitter tmp10 = this->mEmitter;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(183)
		tmp10->startTimed(((Float)0.3),true,((Float)0.1),(int)15,null());
		HX_STACK_LINE(185)
		::flixel::util::FlxTimer tmp11 = this->mHitTimer;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(185)
		Dynamic tmp12 = this->onHitTimerFinished_dyn();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(185)
		tmp11->start(((Float)0.2),tmp12,null());
		HX_STACK_LINE(186)
		this->mStunned = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Enemy_obj,onHit,(void))

Void Enemy_obj::onHitTimerFinished( ::flixel::util::FlxTimer timer){
{
		HX_STACK_FRAME("org.wildrabbit.game.Enemy","onHitTimerFinished",0x77131d05,"org.wildrabbit.game.Enemy.onHitTimerFinished","org/wildrabbit/game/Enemy.hx",191,0xb4207233)
		HX_STACK_THIS(this)
		HX_STACK_ARG(timer,"timer")
		HX_STACK_LINE(191)
		this->mStunned = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Enemy_obj,onHitTimerFinished,(void))

Void Enemy_obj::onDestroyed( ){
{
		HX_STACK_FRAME("org.wildrabbit.game.Enemy","onDestroyed",0x3ea2f2b8,"org.wildrabbit.game.Enemy.onDestroyed","org/wildrabbit/game/Enemy.hx",195,0xb4207233)
		HX_STACK_THIS(this)
		HX_STACK_LINE(196)
		int tmp = this->mID;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(196)
		::String tmp1 = (tmp + HX_HCSTRING(" is destroyed!","\x7e","\x32","\x93","\x44"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(196)
		Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("Enemy.hx","\x96","\x89","\xa8","\xbd"),196,HX_HCSTRING("org.wildrabbit.game.Enemy","\x6c","\xb3","\x5d","\x3b"),HX_HCSTRING("onDestroyed","\xba","\x1a","\x6a","\x16"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(196)
		::haxe::Log_obj::trace(tmp1,tmp2);
		HX_STACK_LINE(197)
		this->mStunned = true;
		HX_STACK_LINE(198)
		this->set_solid(false);
		HX_STACK_LINE(199)
		::flixel::math::FlxPoint tmp3 = this->velocity;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(199)
		tmp3->set((int)0,(int)0);
		HX_STACK_LINE(201)
		::flixel::_system::FlxSound tmp4 = this->mDeathSound;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(201)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(201)
		if ((tmp5)){
			HX_STACK_LINE(203)
			::flixel::_system::FlxSound tmp6 = this->mDeathSound;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(203)
			tmp6->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(true);
		}
		HX_STACK_LINE(206)
		::flixel::tweens::FlxTween tmp6 = this->mDeadTween;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(206)
		bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(206)
		if ((tmp7)){
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/wildrabbit/game/Enemy.hx",208,0xb4207233)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , (int)0,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(208)
			Dynamic tmp8 = _Function_2_1::Block();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(208)
			Dynamic tmp9 = ::flixel::tweens::FlxEase_obj::quadOut_dyn();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(208)
			Dynamic tmp10 = this->onDead_dyn();		HX_STACK_VAR(tmp10,"tmp10");
			struct _Function_2_2{
				inline static Dynamic Block( Dynamic &tmp9,Dynamic &tmp10){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/wildrabbit/game/Enemy.hx",208,0xb4207233)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43") , tmp9,false);
						__result->Add(HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d") , tmp10,false);
						__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , (int)8,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(208)
			Dynamic tmp11 = _Function_2_2::Block(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(208)
			::flixel::tweens::misc::VarTween tmp12 = ::flixel::tweens::FlxTween_obj::tween(hx::ObjectPtr<OBJ_>(this),tmp8,((Float)0.5),tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(208)
			this->mDeadTween = tmp12;
			HX_STACK_LINE(209)
			::flixel::math::FlxPoint tmp13 = this->scale;		HX_STACK_VAR(tmp13,"tmp13");
			struct _Function_2_3{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/wildrabbit/game/Enemy.hx",209,0xb4207233)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , (int)0,false);
						__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , (int)0,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(209)
			Dynamic tmp14 = _Function_2_3::Block();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(209)
			Dynamic tmp15 = ::flixel::tweens::FlxEase_obj::quadOut_dyn();		HX_STACK_VAR(tmp15,"tmp15");
			struct _Function_2_4{
				inline static Dynamic Block( Dynamic &tmp15){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/wildrabbit/game/Enemy.hx",209,0xb4207233)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43") , tmp15,false);
						__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , (int)8,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(209)
			Dynamic tmp16 = _Function_2_4::Block(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(209)
			::flixel::tweens::FlxTween_obj::tween(tmp13,tmp14,((Float)0.39),tmp16);
			HX_STACK_LINE(211)
			::org::wildrabbit::FlxTimedEmitter tmp17 = this->mEmitter;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(211)
			tmp17->launchMode = ::flixel::effects::particles::FlxEmitterMode_obj::CIRCLE;
			HX_STACK_LINE(212)
			{
				HX_STACK_LINE(212)
				::org::wildrabbit::FlxTimedEmitter tmp18 = this->mEmitter;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(212)
				::org::wildrabbit::FlxTimedEmitter _this = tmp18;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(212)
				Float tmp19 = this->x;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(212)
				Float tmp20 = this->get_width();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(212)
				Float tmp21 = (Float(tmp20) / Float((int)2));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(212)
				Float tmp22 = (tmp19 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(212)
				Float X = tmp22;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(212)
				Float tmp23 = this->y;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(212)
				Float tmp24 = this->get_width();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(212)
				Float tmp25 = (Float(tmp24) / Float((int)2));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(212)
				Float tmp26 = (tmp23 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(212)
				Float Y = tmp26;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(212)
				_this->x = X;
				HX_STACK_LINE(212)
				_this->y = Y;
			}
			HX_STACK_LINE(213)
			::org::wildrabbit::FlxTimedEmitter tmp18 = this->mEmitter;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(213)
			tmp18->lifespan->set((int)1,null());
			HX_STACK_LINE(214)
			::org::wildrabbit::FlxTimedEmitter tmp19 = this->mEmitter;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(214)
			tmp19->speed->set((int)80,(int)180,(int)0,(int)0);
			HX_STACK_LINE(215)
			::org::wildrabbit::FlxTimedEmitter tmp20 = this->mEmitter;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(215)
			int tmp21 = this->color;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(215)
			tmp20->color->set(tmp21,null(),null(),null());
			HX_STACK_LINE(216)
			::org::wildrabbit::FlxTimedEmitter tmp22 = this->mEmitter;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(216)
			tmp22->alpha->set(((Float)0.4),((Float)0.6),((Float)0.0),((Float)0.0));
			HX_STACK_LINE(217)
			::org::wildrabbit::FlxTimedEmitter tmp23 = this->mEmitter;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(217)
			tmp23->blend = ::openfl::_legacy::display::BlendMode_obj::ADD;
			HX_STACK_LINE(218)
			::org::wildrabbit::FlxTimedEmitter tmp24 = this->mEmitter;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(218)
			tmp24->startTimed(((Float)0.5),true,((Float)0.1),(int)30,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Enemy_obj,onDestroyed,(void))

Void Enemy_obj::onDead( ::flixel::tweens::FlxTween tween){
{
		HX_STACK_FRAME("org.wildrabbit.game.Enemy","onDead",0x5f228025,"org.wildrabbit.game.Enemy.onDead","org/wildrabbit/game/Enemy.hx",223,0xb4207233)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tween,"tween")
		HX_STACK_LINE(224)
		this->mDeadTween = null();
		HX_STACK_LINE(225)
		::org::wildrabbit::PlayState tmp = this->mParent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(225)
		tmp->onEnemyKilled(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(226)
		this->kill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Enemy_obj,onDead,(void))

Void Enemy_obj::onPlayerDied( ){
{
		HX_STACK_FRAME("org.wildrabbit.game.Enemy","onPlayerDied",0x86f2ff66,"org.wildrabbit.game.Enemy.onPlayerDied","org/wildrabbit/game/Enemy.hx",230,0xb4207233)
		HX_STACK_THIS(this)
		HX_STACK_LINE(231)
		this->mWandering = true;
		HX_STACK_LINE(232)
		::flixel::util::FlxTimer tmp = this->mShootTimer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(232)
		tmp->cancel();
		HX_STACK_LINE(233)
		bool tmp1 = this->mCanShoot = false;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(233)
		this->mCanPlayShoot = tmp1;
		HX_STACK_LINE(234)
		::flixel::util::FlxTimer tmp2 = this->mWanderingTimer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(234)
		::flixel::math::FlxRandom tmp3 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(234)
		Float tmp4 = tmp3->_float(((Float)0.5),(int)5,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(234)
		Dynamic tmp5 = this->onDeathWanderTimeout_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(234)
		tmp2->start(tmp4,tmp5,null());
		HX_STACK_LINE(235)
		::flixel::math::FlxRandom tmp6 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(235)
		Float tmp7 = tmp6->_float((int)0,(int)360,null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(235)
		::flixel::math::FlxPoint tmp8 = ::flixel::math::FlxAngle_obj::getCartesianCoords((int)1,tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(235)
		::flixel::math::FlxPoint cart = tmp8;		HX_STACK_VAR(cart,"cart");
		HX_STACK_LINE(236)
		::flixel::math::FlxVector tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(236)
		{
			HX_STACK_LINE(236)
			::flixel::util::FlxPool_flixel_math_FlxVector tmp10 = ::flixel::math::FlxVector_obj::_pool;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(236)
			::flixel::math::FlxVector tmp11 = tmp10->get();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(236)
			Float tmp12 = cart->x;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(236)
			Float tmp13 = cart->y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(236)
			::flixel::math::FlxVector tmp14 = hx::TCast< ::flixel::math::FlxVector >::cast(tmp11->set(tmp12,tmp13));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(236)
			::flixel::math::FlxVector vector = tmp14;		HX_STACK_VAR(vector,"vector");
			HX_STACK_LINE(236)
			vector->_inPool = false;
			HX_STACK_LINE(236)
			tmp9 = vector;
		}
		HX_STACK_LINE(236)
		::flixel::math::FlxVector velocityVec = tmp9;		HX_STACK_VAR(velocityVec,"velocityVec");
		HX_STACK_LINE(237)
		{
			HX_STACK_LINE(237)
			Float tmp10 = cart->x;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(237)
			Float tmp11 = cart->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(237)
			::flixel::math::FlxVector tmp12 = hx::TCast< ::flixel::math::FlxVector >::cast(velocityVec->set(tmp10,tmp11));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(237)
			::flixel::math::FlxVector _this = tmp12;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(237)
			Float tmp13 = this->mSpeed;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(237)
			Float k = tmp13;		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(237)
			{
				HX_STACK_LINE(237)
				::flixel::math::FlxVector _g = _this;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(237)
				Float tmp14 = (_g->x * k);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(237)
				_g->set_x(tmp14);
			}
			HX_STACK_LINE(237)
			{
				HX_STACK_LINE(237)
				::flixel::math::FlxVector _g = _this;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(237)
				Float tmp14 = (_g->y * k);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(237)
				_g->set_y(tmp14);
			}
			HX_STACK_LINE(237)
			_this;
		}
		HX_STACK_LINE(238)
		::flixel::math::FlxPoint tmp10 = this->velocity;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(238)
		Float tmp11 = velocityVec->x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(238)
		Float tmp12 = velocityVec->y;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(238)
		tmp10->set(tmp11,tmp12);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Enemy_obj,onPlayerDied,(void))

Void Enemy_obj::onDeathWanderTimeout( ::flixel::util::FlxTimer flxtimer){
{
		HX_STACK_FRAME("org.wildrabbit.game.Enemy","onDeathWanderTimeout",0x079e0c61,"org.wildrabbit.game.Enemy.onDeathWanderTimeout","org/wildrabbit/game/Enemy.hx",242,0xb4207233)
		HX_STACK_THIS(this)
		HX_STACK_ARG(flxtimer,"flxtimer")
		HX_STACK_LINE(243)
		::flixel::math::FlxRandom tmp = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(243)
		Float tmp1 = tmp->_float((int)0,(int)360,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(243)
		::flixel::math::FlxPoint tmp2 = ::flixel::math::FlxAngle_obj::getCartesianCoords((int)1,tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(243)
		::flixel::math::FlxPoint cart = tmp2;		HX_STACK_VAR(cart,"cart");
		HX_STACK_LINE(244)
		::flixel::math::FlxVector tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(244)
		{
			HX_STACK_LINE(244)
			::flixel::util::FlxPool_flixel_math_FlxVector tmp4 = ::flixel::math::FlxVector_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(244)
			::flixel::math::FlxVector tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(244)
			Float tmp6 = cart->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(244)
			Float tmp7 = cart->y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(244)
			::flixel::math::FlxVector tmp8 = hx::TCast< ::flixel::math::FlxVector >::cast(tmp5->set(tmp6,tmp7));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(244)
			::flixel::math::FlxVector vector = tmp8;		HX_STACK_VAR(vector,"vector");
			HX_STACK_LINE(244)
			vector->_inPool = false;
			HX_STACK_LINE(244)
			tmp3 = vector;
		}
		HX_STACK_LINE(244)
		::flixel::math::FlxVector velocityVec = tmp3;		HX_STACK_VAR(velocityVec,"velocityVec");
		HX_STACK_LINE(245)
		{
			HX_STACK_LINE(245)
			Float tmp4 = cart->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(245)
			Float tmp5 = cart->y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(245)
			::flixel::math::FlxVector tmp6 = hx::TCast< ::flixel::math::FlxVector >::cast(velocityVec->set(tmp4,tmp5));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(245)
			::flixel::math::FlxVector _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(245)
			Float tmp7 = this->mSpeed;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(245)
			Float k = tmp7;		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(245)
			{
				HX_STACK_LINE(245)
				::flixel::math::FlxVector _g = _this;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(245)
				Float tmp8 = (_g->x * k);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(245)
				_g->set_x(tmp8);
			}
			HX_STACK_LINE(245)
			{
				HX_STACK_LINE(245)
				::flixel::math::FlxVector _g = _this;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(245)
				Float tmp8 = (_g->y * k);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(245)
				_g->set_y(tmp8);
			}
			HX_STACK_LINE(245)
			_this;
		}
		HX_STACK_LINE(246)
		::flixel::math::FlxPoint tmp4 = this->velocity;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(246)
		Float tmp5 = velocityVec->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(246)
		Float tmp6 = velocityVec->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(246)
		tmp4->set(tmp5,tmp6);
		HX_STACK_LINE(247)
		::flixel::util::FlxTimer tmp7 = this->mWanderingTimer;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(247)
		::flixel::math::FlxRandom tmp8 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(247)
		Float tmp9 = tmp8->_float(((Float)0.5),(int)5,null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(247)
		Dynamic tmp10 = this->onDeathWanderTimeout_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(247)
		tmp7->start(tmp9,tmp10,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Enemy_obj,onDeathWanderTimeout,(void))

Void Enemy_obj::onPlayerResurrected( ){
{
		HX_STACK_FRAME("org.wildrabbit.game.Enemy","onPlayerResurrected",0x0820c1fe,"org.wildrabbit.game.Enemy.onPlayerResurrected","org/wildrabbit/game/Enemy.hx",251,0xb4207233)
		HX_STACK_THIS(this)
		HX_STACK_LINE(252)
		this->mWandering = false;
		HX_STACK_LINE(253)
		::flixel::util::FlxTimer tmp = this->mWanderingTimer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(253)
		tmp->cancel();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Enemy_obj,onPlayerResurrected,(void))

Void Enemy_obj::onPlayerHit( ::flixel::math::FlxPoint pos){
{
		HX_STACK_FRAME("org.wildrabbit.game.Enemy","onPlayerHit",0x4b3c6051,"org.wildrabbit.game.Enemy.onPlayerHit","org/wildrabbit/game/Enemy.hx",257,0xb4207233)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pos,"pos")
		HX_STACK_LINE(258)
		int tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(258)
		{
			HX_STACK_LINE(258)
			Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(258)
			::flixel::math::FlxPoint tmp2 = this->origin;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(258)
			Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(258)
			Float tmp4 = (tmp1 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(258)
			Float tmp5 = pos->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(258)
			Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(258)
			Float dx = tmp6;		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(258)
			Float tmp7 = this->y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(258)
			::flixel::math::FlxPoint tmp8 = this->origin;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(258)
			Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(258)
			Float tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(258)
			Float tmp11 = pos->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(258)
			Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(258)
			Float dy = tmp12;		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(258)
			{
				HX_STACK_LINE(258)
				bool tmp13 = pos->_weak;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(258)
				if ((tmp13)){
					HX_STACK_LINE(258)
					pos->put();
				}
			}
			HX_STACK_LINE(258)
			Float tmp13 = (dx * dx);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(258)
			Float tmp14 = (dy * dy);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(258)
			Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(258)
			Float tmp16 = ::Math_obj::sqrt(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(258)
			tmp = ::Std_obj::_int(tmp16);
		}
		HX_STACK_LINE(258)
		Float dist = tmp;		HX_STACK_VAR(dist,"dist");
		HX_STACK_LINE(259)
		Float tmp1 = dist;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(259)
		::org::wildrabbit::PlayState tmp2 = this->mParent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(259)
		Float tmp3 = tmp2->mPlayerShip->get_width();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(259)
		Float tmp4 = (tmp3 * (int)3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(259)
		bool tmp5 = (tmp1 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(259)
		if ((tmp5)){
			HX_STACK_LINE(261)
			::flixel::math::FlxVector tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(261)
			{
				HX_STACK_LINE(261)
				::flixel::util::FlxPool_flixel_math_FlxVector tmp7 = ::flixel::math::FlxVector_obj::_pool;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(261)
				::flixel::math::FlxVector tmp8 = tmp7->get();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(261)
				Float tmp9 = this->x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(261)
				Float tmp10 = pos->x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(261)
				Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(261)
				Float tmp12 = this->y;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(261)
				Float tmp13 = pos->y;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(261)
				Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(261)
				::flixel::math::FlxVector tmp15 = hx::TCast< ::flixel::math::FlxVector >::cast(tmp8->set(tmp11,tmp14));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(261)
				::flixel::math::FlxVector vector = tmp15;		HX_STACK_VAR(vector,"vector");
				HX_STACK_LINE(261)
				vector->_inPool = false;
				HX_STACK_LINE(261)
				tmp6 = vector;
			}
			HX_STACK_LINE(261)
			::flixel::math::FlxVector recoil = tmp6;		HX_STACK_VAR(recoil,"recoil");
			HX_STACK_LINE(262)
			{
				HX_STACK_LINE(262)
				::flixel::math::FlxVector tmp7 = recoil->normalize();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(262)
				::flixel::math::FlxVector _this = tmp7;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(262)
				::org::wildrabbit::PlayState tmp8 = this->mParent;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(262)
				Float tmp9 = tmp8->mPlayerShip->get_width();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(262)
				Float tmp10 = ((int)5 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(262)
				Float k = tmp10;		HX_STACK_VAR(k,"k");
				HX_STACK_LINE(262)
				{
					HX_STACK_LINE(262)
					::flixel::math::FlxVector _g = _this;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(262)
					Float tmp11 = (_g->x * k);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(262)
					_g->set_x(tmp11);
				}
				HX_STACK_LINE(262)
				{
					HX_STACK_LINE(262)
					::flixel::math::FlxVector _g = _this;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(262)
					Float tmp11 = (_g->y * k);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(262)
					_g->set_y(tmp11);
				}
				HX_STACK_LINE(262)
				_this;
			}
			HX_STACK_LINE(263)
			recoil->put();
		}
		HX_STACK_LINE(265)
		this->mWandering = true;
		HX_STACK_LINE(266)
		::flixel::util::FlxTimer tmp6 = this->mWanderingTimer;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(266)
		Dynamic tmp7 = this->onHitWanderTimeout_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(266)
		tmp6->start(((Float)0.9),tmp7,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Enemy_obj,onPlayerHit,(void))

Void Enemy_obj::onHitWanderTimeout( ::flixel::util::FlxTimer timer){
{
		HX_STACK_FRAME("org.wildrabbit.game.Enemy","onHitWanderTimeout",0xf4a98ba2,"org.wildrabbit.game.Enemy.onHitWanderTimeout","org/wildrabbit/game/Enemy.hx",270,0xb4207233)
		HX_STACK_THIS(this)
		HX_STACK_ARG(timer,"timer")
		HX_STACK_LINE(271)
		this->mWandering = false;
		HX_STACK_LINE(272)
		::flixel::util::FlxTimer tmp = this->mWanderingTimer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(272)
		tmp->cancel();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Enemy_obj,onHitWanderTimeout,(void))

Void Enemy_obj::shoot( Float theAngle){
{
		HX_STACK_FRAME("org.wildrabbit.game.Enemy","shoot",0x8cc6275d,"org.wildrabbit.game.Enemy.shoot","org/wildrabbit/game/Enemy.hx",276,0xb4207233)
		HX_STACK_THIS(this)
		HX_STACK_ARG(theAngle,"theAngle")
		HX_STACK_LINE(277)
		this->mCanShoot = false;
		HX_STACK_LINE(278)
		::flixel::math::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(278)
		{
			HX_STACK_LINE(278)
			Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(278)
			Float tmp2 = this->get_width();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(278)
			Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(278)
			Float X = tmp3;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(278)
			Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(278)
			Float tmp5 = this->get_height();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(278)
			Float tmp6 = (Float(tmp5) / Float((int)2));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(278)
			Float tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(278)
			Float Y = tmp7;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(278)
			::flixel::math::FlxPoint tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(278)
			{
				HX_STACK_LINE(278)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp9 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(278)
				::flixel::math::FlxPoint tmp10 = tmp9->get();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(278)
				Float tmp11 = X;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(278)
				Float tmp12 = Y;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(278)
				::flixel::math::FlxPoint tmp13 = tmp10->set(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(278)
				::flixel::math::FlxPoint point = tmp13;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(278)
				point->_inPool = false;
				HX_STACK_LINE(278)
				tmp8 = point;
			}
			HX_STACK_LINE(278)
			::flixel::math::FlxPoint point = tmp8;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(278)
			point->_weak = true;
			HX_STACK_LINE(278)
			tmp = point;
		}
		HX_STACK_LINE(278)
		::flixel::math::FlxPoint p = tmp;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(279)
		Float shootAngle = theAngle;		HX_STACK_VAR(shootAngle,"shootAngle");
		HX_STACK_LINE(281)
		bool shot = false;		HX_STACK_VAR(shot,"shot");
		HX_STACK_LINE(283)
		::org::wildrabbit::PlayState tmp1 = this->mParent;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(283)
		::org::wildrabbit::game::BaseBullet tmp2 = tmp1->mBullets->getFirstAvailable(hx::ClassOf< ::org::wildrabbit::game::EnemyBullet >(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(283)
		::org::wildrabbit::game::BaseBullet bullet = tmp2;		HX_STACK_VAR(bullet,"bullet");
		HX_STACK_LINE(284)
		bool tmp3 = (bullet != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(284)
		if ((tmp3)){
			HX_STACK_LINE(286)
			::flixel::math::FlxPoint tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(286)
			{
				HX_STACK_LINE(286)
				Float tmp5 = this->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(286)
				Float tmp6 = this->get_width();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(286)
				Float tmp7 = (Float(tmp6) / Float((int)2));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(286)
				Float tmp8 = (tmp5 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(286)
				Float X = tmp8;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(286)
				Float tmp9 = this->y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(286)
				Float tmp10 = this->get_height();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(286)
				Float tmp11 = (Float(tmp10) / Float((int)2));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(286)
				Float tmp12 = (tmp9 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(286)
				Float Y = tmp12;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(286)
				::flixel::math::FlxPoint tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(286)
					::flixel::util::FlxPool_flixel_math_FlxPoint tmp14 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(286)
					::flixel::math::FlxPoint tmp15 = tmp14->get();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(286)
					Float tmp16 = X;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(286)
					Float tmp17 = Y;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(286)
					::flixel::math::FlxPoint tmp18 = tmp15->set(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(286)
					::flixel::math::FlxPoint point = tmp18;		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(286)
					point->_inPool = false;
					HX_STACK_LINE(286)
					tmp13 = point;
				}
				HX_STACK_LINE(286)
				::flixel::math::FlxPoint point = tmp13;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(286)
				point->_weak = true;
				HX_STACK_LINE(286)
				tmp4 = point;
			}
			HX_STACK_LINE(286)
			Float tmp5 = this->angle;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(286)
			p->rotate(tmp4,tmp5);
			HX_STACK_LINE(288)
			bullet->reset((int)0,(int)0);
			HX_STACK_LINE(289)
			::org::wildrabbit::PlayState tmp6 = this->mParent;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(289)
			bool tmp7 = tmp6->isHardMode();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(289)
			Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(289)
			if ((tmp7)){
				HX_STACK_LINE(289)
				int tmp9 = ::org::wildrabbit::game::Enemy_obj::BULLET_SPEED;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(289)
				tmp8 = (tmp9 * ((Float)1.2));
			}
			else{
				HX_STACK_LINE(289)
				tmp8 = ::org::wildrabbit::game::Enemy_obj::BULLET_SPEED;
			}
			HX_STACK_LINE(289)
			Float tmp9 = shootAngle;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(289)
			Float tmp10 = ::Math_obj::cos(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(289)
			Float tmp11 = (tmp8 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(289)
			int tmp12 = ::org::wildrabbit::game::Enemy_obj::BULLET_SPEED;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(289)
			Float tmp13 = shootAngle;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(289)
			Float tmp14 = ::Math_obj::sin(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(289)
			Float tmp15 = (tmp12 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(289)
			bullet->velocity->set(tmp11,tmp15);
			HX_STACK_LINE(290)
			Float tmp16 = p->x;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(290)
			Float tmp17 = bullet->_halfSize->x;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(290)
			Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(290)
			Float tmp19 = p->y;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(290)
			Float tmp20 = bullet->_halfSize->y;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(290)
			Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(290)
			bullet->setPosition(tmp18,tmp21);
			HX_STACK_LINE(291)
			Float tmp22 = this->angle;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(291)
			Float tmp23 = (tmp22 - (int)5);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(291)
			bullet->set_angle(tmp23);
			HX_STACK_LINE(292)
			Float tmp24 = ::org::wildrabbit::game::Enemy_obj::BULLET_TTL;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(292)
			bullet->start(hx::ObjectPtr<OBJ_>(this),tmp24);
			HX_STACK_LINE(293)
			shot = true;
		}
		HX_STACK_LINE(296)
		{
			HX_STACK_LINE(296)
			bool tmp4 = p->_weak;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(296)
			if ((tmp4)){
				HX_STACK_LINE(296)
				p->put();
			}
		}
		HX_STACK_LINE(297)
		::flixel::util::FlxTimer tmp4 = this->mShootTimer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(297)
		::org::wildrabbit::PlayState tmp5 = this->mParent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(297)
		bool tmp6 = tmp5->isHardMode();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(297)
		Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(297)
		if ((tmp6)){
			HX_STACK_LINE(297)
			Float tmp8 = ::org::wildrabbit::game::Enemy_obj::SHOOT_COOLDOWN;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(297)
			tmp7 = (tmp8 * ((Float)0.8));
		}
		else{
			HX_STACK_LINE(297)
			tmp7 = ::org::wildrabbit::game::Enemy_obj::SHOOT_COOLDOWN;
		}
		HX_STACK_LINE(297)
		Dynamic tmp8 = this->onCooldownFinished_dyn();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(297)
		tmp4->start(tmp7,tmp8,null());
		HX_STACK_LINE(298)
		bool tmp9 = shot;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(298)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(298)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(298)
		if ((tmp10)){
			HX_STACK_LINE(298)
			::flixel::_system::FlxSound tmp12 = this->mShootSound;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(298)
			::flixel::_system::FlxSound tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(298)
			::flixel::_system::FlxSound tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(298)
			tmp11 = (tmp14 != null());
		}
		else{
			HX_STACK_LINE(298)
			tmp11 = false;
		}
		HX_STACK_LINE(298)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(298)
		if ((tmp11)){
			HX_STACK_LINE(298)
			tmp12 = this->mCanPlayShoot;
		}
		else{
			HX_STACK_LINE(298)
			tmp12 = false;
		}
		HX_STACK_LINE(298)
		if ((tmp12)){
			HX_STACK_LINE(300)
			this->mCanPlayShoot = false;
			HX_STACK_LINE(301)
			::flixel::_system::FlxSound tmp13 = this->mShootSound;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(301)
			tmp13->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Enemy_obj,shoot,(void))

Void Enemy_obj::onCooldownFinished( ::flixel::util::FlxTimer timer){
{
		HX_STACK_FRAME("org.wildrabbit.game.Enemy","onCooldownFinished",0xc027ad3e,"org.wildrabbit.game.Enemy.onCooldownFinished","org/wildrabbit/game/Enemy.hx",306,0xb4207233)
		HX_STACK_THIS(this)
		HX_STACK_ARG(timer,"timer")
		HX_STACK_LINE(307)
		bool tmp = this->mCanPlayShoot = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(307)
		this->mCanShoot = tmp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Enemy_obj,onCooldownFinished,(void))

int Enemy_obj::count;

Array< ::String > Enemy_obj::ShapeAnims;

int Enemy_obj::BASIC_ENEMY_SPEED;

int Enemy_obj::BULLET_SPEED;

Float Enemy_obj::BULLET_TTL;

Float Enemy_obj::SHOOT_COOLDOWN;

Float Enemy_obj::INITIAL_DELAY;


Enemy_obj::Enemy_obj()
{
}

void Enemy_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Enemy);
	HX_MARK_MEMBER_NAME(mStunned,"mStunned");
	HX_MARK_MEMBER_NAME(mHitTimer,"mHitTimer");
	HX_MARK_MEMBER_NAME(mDeadTween,"mDeadTween");
	HX_MARK_MEMBER_NAME(mEmitter,"mEmitter");
	HX_MARK_MEMBER_NAME(mShootTimer,"mShootTimer");
	HX_MARK_MEMBER_NAME(mCanShoot,"mCanShoot");
	HX_MARK_MEMBER_NAME(mCanPlayShoot,"mCanPlayShoot");
	HX_MARK_MEMBER_NAME(mWandering,"mWandering");
	HX_MARK_MEMBER_NAME(mWanderingTimer,"mWanderingTimer");
	HX_MARK_MEMBER_NAME(mNoHitSound,"mNoHitSound");
	HX_MARK_MEMBER_NAME(mHitSound,"mHitSound");
	HX_MARK_MEMBER_NAME(mDeathSound,"mDeathSound");
	HX_MARK_MEMBER_NAME(mShootSound,"mShootSound");
	::org::wildrabbit::game::Entity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Enemy_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mStunned,"mStunned");
	HX_VISIT_MEMBER_NAME(mHitTimer,"mHitTimer");
	HX_VISIT_MEMBER_NAME(mDeadTween,"mDeadTween");
	HX_VISIT_MEMBER_NAME(mEmitter,"mEmitter");
	HX_VISIT_MEMBER_NAME(mShootTimer,"mShootTimer");
	HX_VISIT_MEMBER_NAME(mCanShoot,"mCanShoot");
	HX_VISIT_MEMBER_NAME(mCanPlayShoot,"mCanPlayShoot");
	HX_VISIT_MEMBER_NAME(mWandering,"mWandering");
	HX_VISIT_MEMBER_NAME(mWanderingTimer,"mWanderingTimer");
	HX_VISIT_MEMBER_NAME(mNoHitSound,"mNoHitSound");
	HX_VISIT_MEMBER_NAME(mHitSound,"mHitSound");
	HX_VISIT_MEMBER_NAME(mDeathSound,"mDeathSound");
	HX_VISIT_MEMBER_NAME(mShootSound,"mShootSound");
	::org::wildrabbit::game::Entity_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Enemy_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		if (HX_FIELD_EQ(inName,"onHit") ) { return onHit_dyn(); }
		if (HX_FIELD_EQ(inName,"shoot") ) { return shoot_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"onDead") ) { return onDead_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mStunned") ) { return mStunned; }
		if (HX_FIELD_EQ(inName,"mEmitter") ) { return mEmitter; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mHitTimer") ) { return mHitTimer; }
		if (HX_FIELD_EQ(inName,"mCanShoot") ) { return mCanShoot; }
		if (HX_FIELD_EQ(inName,"mHitSound") ) { return mHitSound; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mDeadTween") ) { return mDeadTween; }
		if (HX_FIELD_EQ(inName,"mWandering") ) { return mWandering; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mShootTimer") ) { return mShootTimer; }
		if (HX_FIELD_EQ(inName,"mNoHitSound") ) { return mNoHitSound; }
		if (HX_FIELD_EQ(inName,"mDeathSound") ) { return mDeathSound; }
		if (HX_FIELD_EQ(inName,"mShootSound") ) { return mShootSound; }
		if (HX_FIELD_EQ(inName,"switchShape") ) { return switchShape_dyn(); }
		if (HX_FIELD_EQ(inName,"onDestroyed") ) { return onDestroyed_dyn(); }
		if (HX_FIELD_EQ(inName,"onPlayerHit") ) { return onPlayerHit_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onPlayerDied") ) { return onPlayerDied_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mCanPlayShoot") ) { return mCanPlayShoot; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"mWanderingTimer") ) { return mWanderingTimer; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updateCollisions") ) { return updateCollisions_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onHitTimerFinished") ) { return onHitTimerFinished_dyn(); }
		if (HX_FIELD_EQ(inName,"onHitWanderTimeout") ) { return onHitWanderTimeout_dyn(); }
		if (HX_FIELD_EQ(inName,"onCooldownFinished") ) { return onCooldownFinished_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"onPlayerResurrected") ) { return onPlayerResurrected_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"onDeathWanderTimeout") ) { return onDeathWanderTimeout_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Enemy_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { outValue = count; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"ShapeAnims") ) { outValue = ShapeAnims; return true;  }
		if (HX_FIELD_EQ(inName,"BULLET_TTL") ) { outValue = BULLET_TTL; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"BULLET_SPEED") ) { outValue = BULLET_SPEED; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"INITIAL_DELAY") ) { outValue = INITIAL_DELAY; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"SHOOT_COOLDOWN") ) { outValue = SHOOT_COOLDOWN; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"BASIC_ENEMY_SPEED") ) { outValue = BASIC_ENEMY_SPEED; return true;  }
	}
	return false;
}

Dynamic Enemy_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"mStunned") ) { mStunned=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mEmitter") ) { mEmitter=inValue.Cast< ::org::wildrabbit::FlxTimedEmitter >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mHitTimer") ) { mHitTimer=inValue.Cast< ::flixel::util::FlxTimer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mCanShoot") ) { mCanShoot=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mHitSound") ) { mHitSound=inValue.Cast< ::flixel::_system::FlxSound >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mDeadTween") ) { mDeadTween=inValue.Cast< ::flixel::tweens::FlxTween >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mWandering") ) { mWandering=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mShootTimer") ) { mShootTimer=inValue.Cast< ::flixel::util::FlxTimer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mNoHitSound") ) { mNoHitSound=inValue.Cast< ::flixel::_system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mDeathSound") ) { mDeathSound=inValue.Cast< ::flixel::_system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mShootSound") ) { mShootSound=inValue.Cast< ::flixel::_system::FlxSound >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mCanPlayShoot") ) { mCanPlayShoot=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"mWanderingTimer") ) { mWanderingTimer=inValue.Cast< ::flixel::util::FlxTimer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Enemy_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { count=ioValue.Cast< int >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"ShapeAnims") ) { ShapeAnims=ioValue.Cast< Array< ::String > >(); return true; }
		if (HX_FIELD_EQ(inName,"BULLET_TTL") ) { BULLET_TTL=ioValue.Cast< Float >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"BULLET_SPEED") ) { BULLET_SPEED=ioValue.Cast< int >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"INITIAL_DELAY") ) { INITIAL_DELAY=ioValue.Cast< Float >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"SHOOT_COOLDOWN") ) { SHOOT_COOLDOWN=ioValue.Cast< Float >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"BASIC_ENEMY_SPEED") ) { BASIC_ENEMY_SPEED=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Enemy_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("mStunned","\x66","\x1a","\x41","\xde"));
	outFields->push(HX_HCSTRING("mHitTimer","\xff","\x8d","\x10","\xfa"));
	outFields->push(HX_HCSTRING("mDeadTween","\xfa","\x22","\xac","\xe2"));
	outFields->push(HX_HCSTRING("mEmitter","\x81","\xf4","\xc1","\xe6"));
	outFields->push(HX_HCSTRING("mShootTimer","\x33","\x34","\x62","\xc2"));
	outFields->push(HX_HCSTRING("mCanShoot","\x3c","\x35","\x36","\x95"));
	outFields->push(HX_HCSTRING("mCanPlayShoot","\x28","\xd5","\x33","\x9b"));
	outFields->push(HX_HCSTRING("mWandering","\xa8","\x09","\xe9","\x88"));
	outFields->push(HX_HCSTRING("mWanderingTimer","\xfd","\x24","\x0e","\x90"));
	outFields->push(HX_HCSTRING("mNoHitSound","\xaa","\x5d","\xee","\x85"));
	outFields->push(HX_HCSTRING("mHitSound","\x09","\x5b","\xa7","\x6a"));
	outFields->push(HX_HCSTRING("mDeathSound","\xc8","\x7f","\xa8","\x58"));
	outFields->push(HX_HCSTRING("mShootSound","\x3d","\x01","\xf9","\x32"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Enemy_obj,mStunned),HX_HCSTRING("mStunned","\x66","\x1a","\x41","\xde")},
	{hx::fsObject /*::flixel::util::FlxTimer*/ ,(int)offsetof(Enemy_obj,mHitTimer),HX_HCSTRING("mHitTimer","\xff","\x8d","\x10","\xfa")},
	{hx::fsObject /*::flixel::tweens::FlxTween*/ ,(int)offsetof(Enemy_obj,mDeadTween),HX_HCSTRING("mDeadTween","\xfa","\x22","\xac","\xe2")},
	{hx::fsObject /*::org::wildrabbit::FlxTimedEmitter*/ ,(int)offsetof(Enemy_obj,mEmitter),HX_HCSTRING("mEmitter","\x81","\xf4","\xc1","\xe6")},
	{hx::fsObject /*::flixel::util::FlxTimer*/ ,(int)offsetof(Enemy_obj,mShootTimer),HX_HCSTRING("mShootTimer","\x33","\x34","\x62","\xc2")},
	{hx::fsBool,(int)offsetof(Enemy_obj,mCanShoot),HX_HCSTRING("mCanShoot","\x3c","\x35","\x36","\x95")},
	{hx::fsBool,(int)offsetof(Enemy_obj,mCanPlayShoot),HX_HCSTRING("mCanPlayShoot","\x28","\xd5","\x33","\x9b")},
	{hx::fsBool,(int)offsetof(Enemy_obj,mWandering),HX_HCSTRING("mWandering","\xa8","\x09","\xe9","\x88")},
	{hx::fsObject /*::flixel::util::FlxTimer*/ ,(int)offsetof(Enemy_obj,mWanderingTimer),HX_HCSTRING("mWanderingTimer","\xfd","\x24","\x0e","\x90")},
	{hx::fsObject /*::flixel::_system::FlxSound*/ ,(int)offsetof(Enemy_obj,mNoHitSound),HX_HCSTRING("mNoHitSound","\xaa","\x5d","\xee","\x85")},
	{hx::fsObject /*::flixel::_system::FlxSound*/ ,(int)offsetof(Enemy_obj,mHitSound),HX_HCSTRING("mHitSound","\x09","\x5b","\xa7","\x6a")},
	{hx::fsObject /*::flixel::_system::FlxSound*/ ,(int)offsetof(Enemy_obj,mDeathSound),HX_HCSTRING("mDeathSound","\xc8","\x7f","\xa8","\x58")},
	{hx::fsObject /*::flixel::_system::FlxSound*/ ,(int)offsetof(Enemy_obj,mShootSound),HX_HCSTRING("mShootSound","\x3d","\x01","\xf9","\x32")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Enemy_obj::count,HX_HCSTRING("count","\xcf","\x44","\x63","\x4a")},
	{hx::fsObject /*Array< ::String >*/ ,(void *) &Enemy_obj::ShapeAnims,HX_HCSTRING("ShapeAnims","\x81","\x62","\xd5","\xff")},
	{hx::fsInt,(void *) &Enemy_obj::BASIC_ENEMY_SPEED,HX_HCSTRING("BASIC_ENEMY_SPEED","\x5f","\x1c","\x99","\xa0")},
	{hx::fsInt,(void *) &Enemy_obj::BULLET_SPEED,HX_HCSTRING("BULLET_SPEED","\x6a","\x72","\xdd","\x7d")},
	{hx::fsFloat,(void *) &Enemy_obj::BULLET_TTL,HX_HCSTRING("BULLET_TTL","\x0f","\xd3","\x07","\x24")},
	{hx::fsFloat,(void *) &Enemy_obj::SHOOT_COOLDOWN,HX_HCSTRING("SHOOT_COOLDOWN","\x6b","\x69","\x38","\x7e")},
	{hx::fsFloat,(void *) &Enemy_obj::INITIAL_DELAY,HX_HCSTRING("INITIAL_DELAY","\x08","\x9e","\x14","\x1a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("mStunned","\x66","\x1a","\x41","\xde"),
	HX_HCSTRING("mHitTimer","\xff","\x8d","\x10","\xfa"),
	HX_HCSTRING("mDeadTween","\xfa","\x22","\xac","\xe2"),
	HX_HCSTRING("mEmitter","\x81","\xf4","\xc1","\xe6"),
	HX_HCSTRING("mShootTimer","\x33","\x34","\x62","\xc2"),
	HX_HCSTRING("mCanShoot","\x3c","\x35","\x36","\x95"),
	HX_HCSTRING("mCanPlayShoot","\x28","\xd5","\x33","\x9b"),
	HX_HCSTRING("mWandering","\xa8","\x09","\xe9","\x88"),
	HX_HCSTRING("mWanderingTimer","\xfd","\x24","\x0e","\x90"),
	HX_HCSTRING("mNoHitSound","\xaa","\x5d","\xee","\x85"),
	HX_HCSTRING("mHitSound","\x09","\x5b","\xa7","\x6a"),
	HX_HCSTRING("mDeathSound","\xc8","\x7f","\xa8","\x58"),
	HX_HCSTRING("mShootSound","\x3d","\x01","\xf9","\x32"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("switchShape","\x8d","\x74","\x9c","\x6f"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("updateCollisions","\x2a","\x8b","\x04","\x42"),
	HX_HCSTRING("onHit","\x74","\xda","\x66","\x32"),
	HX_HCSTRING("onHitTimerFinished","\x43","\xd9","\x65","\x8a"),
	HX_HCSTRING("onDestroyed","\xba","\x1a","\x6a","\x16"),
	HX_HCSTRING("onDead","\x63","\x57","\xf0","\xe4"),
	HX_HCSTRING("onPlayerDied","\x24","\xd9","\x6e","\x7d"),
	HX_HCSTRING("onDeathWanderTimeout","\x1f","\xd4","\x46","\xa2"),
	HX_HCSTRING("onPlayerResurrected","\x00","\xbc","\x32","\xdd"),
	HX_HCSTRING("onPlayerHit","\x53","\x88","\x03","\x23"),
	HX_HCSTRING("onHitWanderTimeout","\xe0","\x47","\xfc","\x07"),
	HX_HCSTRING("shoot","\xdf","\x81","\x27","\x7c"),
	HX_HCSTRING("onCooldownFinished","\x7c","\x69","\x7a","\xd3"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Enemy_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Enemy_obj::count,"count");
	HX_MARK_MEMBER_NAME(Enemy_obj::ShapeAnims,"ShapeAnims");
	HX_MARK_MEMBER_NAME(Enemy_obj::BASIC_ENEMY_SPEED,"BASIC_ENEMY_SPEED");
	HX_MARK_MEMBER_NAME(Enemy_obj::BULLET_SPEED,"BULLET_SPEED");
	HX_MARK_MEMBER_NAME(Enemy_obj::BULLET_TTL,"BULLET_TTL");
	HX_MARK_MEMBER_NAME(Enemy_obj::SHOOT_COOLDOWN,"SHOOT_COOLDOWN");
	HX_MARK_MEMBER_NAME(Enemy_obj::INITIAL_DELAY,"INITIAL_DELAY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Enemy_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Enemy_obj::count,"count");
	HX_VISIT_MEMBER_NAME(Enemy_obj::ShapeAnims,"ShapeAnims");
	HX_VISIT_MEMBER_NAME(Enemy_obj::BASIC_ENEMY_SPEED,"BASIC_ENEMY_SPEED");
	HX_VISIT_MEMBER_NAME(Enemy_obj::BULLET_SPEED,"BULLET_SPEED");
	HX_VISIT_MEMBER_NAME(Enemy_obj::BULLET_TTL,"BULLET_TTL");
	HX_VISIT_MEMBER_NAME(Enemy_obj::SHOOT_COOLDOWN,"SHOOT_COOLDOWN");
	HX_VISIT_MEMBER_NAME(Enemy_obj::INITIAL_DELAY,"INITIAL_DELAY");
};

#endif

hx::Class Enemy_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("count","\xcf","\x44","\x63","\x4a"),
	HX_HCSTRING("ShapeAnims","\x81","\x62","\xd5","\xff"),
	HX_HCSTRING("BASIC_ENEMY_SPEED","\x5f","\x1c","\x99","\xa0"),
	HX_HCSTRING("BULLET_SPEED","\x6a","\x72","\xdd","\x7d"),
	HX_HCSTRING("BULLET_TTL","\x0f","\xd3","\x07","\x24"),
	HX_HCSTRING("SHOOT_COOLDOWN","\x6b","\x69","\x38","\x7e"),
	HX_HCSTRING("INITIAL_DELAY","\x08","\x9e","\x14","\x1a"),
	::String(null()) };

void Enemy_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("org.wildrabbit.game.Enemy","\x6c","\xb3","\x5d","\x3b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Enemy_obj::__GetStatic;
	__mClass->mSetStaticField = &Enemy_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Enemy_obj >;
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

void Enemy_obj::__boot()
{
	count= (int)0;
	ShapeAnims= Array_obj< ::String >::__new().Add(HX_HCSTRING("circle","\x10","\x72","\x0d","\x56")).Add(HX_HCSTRING("triangle","\xc8","\xbe","\xc5","\x8d")).Add(HX_HCSTRING("square","\x9d","\x00","\xf2","\x58"));
	BASIC_ENEMY_SPEED= (int)55;
	BULLET_SPEED= (int)250;
	BULLET_TTL= ((Float)1.5);
	SHOOT_COOLDOWN= ((Float)1);
	INITIAL_DELAY= ((Float)2.5);
}

} // end namespace org
} // end namespace wildrabbit
} // end namespace game
