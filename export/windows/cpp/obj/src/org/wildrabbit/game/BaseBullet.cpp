#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
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
#ifndef INCLUDED_openfl__legacy_display_BlendMode
#include <openfl/_legacy/display/BlendMode.h>
#endif
#ifndef INCLUDED_org_wildrabbit_PlayState
#include <org/wildrabbit/PlayState.h>
#endif
#ifndef INCLUDED_org_wildrabbit_game_BaseBullet
#include <org/wildrabbit/game/BaseBullet.h>
#endif
#ifndef INCLUDED_org_wildrabbit_game_Entity
#include <org/wildrabbit/game/Entity.h>
#endif
#ifndef INCLUDED_org_wildrabbit_game_World
#include <org/wildrabbit/game/World.h>
#endif
namespace org{
namespace wildrabbit{
namespace game{

Void BaseBullet_obj::__construct(::org::wildrabbit::PlayState playState)
{
HX_STACK_FRAME("org.wildrabbit.game.BaseBullet","new",0xf0e2a201,"org.wildrabbit.game.BaseBullet.new","org/wildrabbit/game/BaseBullet.hx",18,0x2688018e)
HX_STACK_THIS(this)
HX_STACK_ARG(playState,"playState")
{
	HX_STACK_LINE(27)
	this->mOppositeDamage = (int)2;
	HX_STACK_LINE(26)
	this->mSameDamage = (int)1;
	HX_STACK_LINE(33)
	::org::wildrabbit::PlayState tmp = playState;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	super::__construct(tmp,(int)50);
	HX_STACK_LINE(34)
	this->mOwner = null();
	HX_STACK_LINE(35)
	::flixel::util::FlxTimer tmp1 = ::flixel::util::FlxTimer_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(35)
	this->flxTimer = tmp1;
	HX_STACK_LINE(36)
	int tmp2 = (::org::wildrabbit::game::BaseBullet_obj::count)++;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(36)
	this->mID = tmp2;
}
;
	return null();
}

//BaseBullet_obj::~BaseBullet_obj() { }

Dynamic BaseBullet_obj::__CreateEmpty() { return  new BaseBullet_obj; }
hx::ObjectPtr< BaseBullet_obj > BaseBullet_obj::__new(::org::wildrabbit::PlayState playState)
{  hx::ObjectPtr< BaseBullet_obj > _result_ = new BaseBullet_obj();
	_result_->__construct(playState);
	return _result_;}

Dynamic BaseBullet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BaseBullet_obj > _result_ = new BaseBullet_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void BaseBullet_obj::start( ::org::wildrabbit::game::Entity owner,Float ttl){
{
		HX_STACK_FRAME("org.wildrabbit.game.BaseBullet","start",0xd32ab043,"org.wildrabbit.game.BaseBullet.start","org/wildrabbit/game/BaseBullet.hx",41,0x2688018e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(owner,"owner")
		HX_STACK_ARG(ttl,"ttl")
		HX_STACK_LINE(42)
		this->mOwner = owner;
		HX_STACK_LINE(43)
		::org::wildrabbit::game::Entity tmp = this->mOwner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(43)
		int tmp1 = tmp->mShape;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(43)
		this->switchShape(tmp1);
		HX_STACK_LINE(45)
		this->set_alpha(((Float)1.0));
		HX_STACK_LINE(46)
		this->set_solid(true);
		HX_STACK_LINE(47)
		::flixel::util::FlxTimer tmp2 = this->flxTimer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(47)
		tmp2->cancel();
		HX_STACK_LINE(48)
		::flixel::util::FlxTimer tmp3 = this->flxTimer;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(48)
		Float tmp4 = ttl;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(48)
		tmp3->start(tmp4,null(),null());
		HX_STACK_LINE(49)
		this->collided = false;
		HX_STACK_LINE(50)
		this->t = null();
		HX_STACK_LINE(51)
		this->set_blend(::openfl::_legacy::display::BlendMode_obj::ADD);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BaseBullet_obj,start,(void))

Void BaseBullet_obj::switchShape( int shape){
{
		HX_STACK_FRAME("org.wildrabbit.game.BaseBullet","switchShape",0x5eb74f2e,"org.wildrabbit.game.BaseBullet.switchShape","org/wildrabbit/game/BaseBullet.hx",55,0x2688018e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shape,"shape")
		HX_STACK_LINE(56)
		int tmp = shape;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(56)
		this->super::switchShape(tmp);
		HX_STACK_LINE(57)
		int tmp1 = shape;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(57)
		this->doSwitchShape(tmp1);
	}
return null();
}


Void BaseBullet_obj::doSwitchShape( int shape){
{
		HX_STACK_FRAME("org.wildrabbit.game.BaseBullet","doSwitchShape",0x24801fa3,"org.wildrabbit.game.BaseBullet.doSwitchShape","org/wildrabbit/game/BaseBullet.hx",61,0x2688018e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shape,"shape")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BaseBullet_obj,doSwitchShape,(void))

Void BaseBullet_obj::doDie( ){
{
		HX_STACK_FRAME("org.wildrabbit.game.BaseBullet","doDie",0x2cc3e256,"org.wildrabbit.game.BaseBullet.doDie","org/wildrabbit/game/BaseBullet.hx",64,0x2688018e)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BaseBullet_obj,doDie,(void))

Void BaseBullet_obj::update( Float elapsed){
{
		HX_STACK_FRAME("org.wildrabbit.game.BaseBullet","update",0x733aaf08,"org.wildrabbit.game.BaseBullet.update","org/wildrabbit/game/BaseBullet.hx",69,0x2688018e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(70)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(70)
		this->super::update(tmp);
		HX_STACK_LINE(72)
		::flixel::util::FlxTimer tmp1 = this->flxTimer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(72)
		bool tmp2 = tmp1->finished;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(72)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(72)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(72)
		if ((tmp3)){
			HX_STACK_LINE(72)
			tmp4 = this->collided;
		}
		else{
			HX_STACK_LINE(72)
			tmp4 = true;
		}
		HX_STACK_LINE(72)
		if ((tmp4)){
			HX_STACK_LINE(74)
			::flixel::math::FlxPoint tmp5 = this->velocity;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(74)
			tmp5->set((int)0,(int)0);
			HX_STACK_LINE(75)
			this->set_solid(false);
			HX_STACK_LINE(76)
			this->doDie();
			HX_STACK_LINE(77)
			::flixel::tweens::FlxTween tmp6 = this->t;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(77)
			bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(77)
			if ((tmp7)){
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/wildrabbit/game/BaseBullet.hx",79,0x2688018e)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , (int)0,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(79)
				Dynamic tmp8 = _Function_3_1::Block();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(79)
				Dynamic tmp9 = ::flixel::tweens::FlxEase_obj::quadOut_dyn();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(79)
				Dynamic tmp10 = this->onDead_dyn();		HX_STACK_VAR(tmp10,"tmp10");
				struct _Function_3_2{
					inline static Dynamic Block( Dynamic &tmp9,Dynamic &tmp10){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/wildrabbit/game/BaseBullet.hx",79,0x2688018e)
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
				HX_STACK_LINE(79)
				Dynamic tmp11 = _Function_3_2::Block(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(79)
				::flixel::tweens::misc::VarTween tmp12 = ::flixel::tweens::FlxTween_obj::tween(hx::ObjectPtr<OBJ_>(this),tmp8,((Float)0.2),tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(79)
				this->t = tmp12;
			}
		}
		else{
			HX_STACK_LINE(84)
			this->updateCollisions();
		}
	}
return null();
}


Void BaseBullet_obj::updateCollisions( ){
{
		HX_STACK_FRAME("org.wildrabbit.game.BaseBullet","updateCollisions",0x80c888e9,"org.wildrabbit.game.BaseBullet.updateCollisions","org/wildrabbit/game/BaseBullet.hx",89,0x2688018e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(90)
		Float tmp = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(90)
		Float maxDistance = tmp;		HX_STACK_VAR(maxDistance,"maxDistance");
		HX_STACK_LINE(91)
		int maxIndex = (int)-1;		HX_STACK_VAR(maxIndex,"maxIndex");
		HX_STACK_LINE(93)
		::flixel::math::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(93)
		{
			HX_STACK_LINE(93)
			Float tmp2 = this->x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(93)
			Float tmp3 = this->get_width();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(93)
			Float tmp4 = (Float(tmp3) / Float((int)2));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(93)
			Float tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(93)
			Float X = tmp5;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(93)
			Float tmp6 = this->y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(93)
			Float tmp7 = this->get_height();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(93)
			Float tmp8 = (Float(tmp7) / Float((int)2));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(93)
			Float tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(93)
			Float Y = tmp9;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(93)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp10 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(93)
			::flixel::math::FlxPoint tmp11 = tmp10->get();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(93)
			Float tmp12 = X;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(93)
			Float tmp13 = Y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(93)
			::flixel::math::FlxPoint tmp14 = tmp11->set(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(93)
			::flixel::math::FlxPoint point = tmp14;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(93)
			point->_inPool = false;
			HX_STACK_LINE(93)
			tmp1 = point;
		}
		HX_STACK_LINE(93)
		::flixel::math::FlxPoint center = tmp1;		HX_STACK_VAR(center,"center");
		HX_STACK_LINE(94)
		::flixel::math::FlxPoint tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(94)
		{
			HX_STACK_LINE(94)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp3 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(94)
			::flixel::math::FlxPoint tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(94)
			Float tmp5 = this->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(94)
			Float tmp6 = this->y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(94)
			::flixel::math::FlxPoint tmp7 = tmp4->set(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(94)
			::flixel::math::FlxPoint point = tmp7;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(94)
			point->_inPool = false;
			HX_STACK_LINE(94)
			tmp2 = point;
		}
		HX_STACK_LINE(94)
		::flixel::math::FlxPoint tmp3 = center;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(94)
		Float tmp4 = this->angle;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(94)
		::flixel::math::FlxPoint tmp5 = tmp2->rotate(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(94)
		::flixel::math::FlxPoint tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(94)
		{
			HX_STACK_LINE(94)
			Float tmp7 = this->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(94)
			Float tmp8 = this->get_width();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(94)
			Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(94)
			Float X = tmp9;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(94)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp10 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(94)
			::flixel::math::FlxPoint tmp11 = tmp10->get();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(94)
			Float tmp12 = X;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(94)
			Float tmp13 = this->y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(94)
			::flixel::math::FlxPoint tmp14 = tmp11->set(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(94)
			::flixel::math::FlxPoint point = tmp14;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(94)
			point->_inPool = false;
			HX_STACK_LINE(94)
			tmp6 = point;
		}
		HX_STACK_LINE(94)
		::flixel::math::FlxPoint tmp7 = center;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(94)
		Float tmp8 = this->angle;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(94)
		::flixel::math::FlxPoint tmp9 = tmp6->rotate(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(94)
		::flixel::math::FlxPoint tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(94)
		{
			HX_STACK_LINE(94)
			Float tmp11 = this->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(94)
			Float tmp12 = this->get_height();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(94)
			Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(94)
			Float Y = tmp13;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(94)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp14 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(94)
			::flixel::math::FlxPoint tmp15 = tmp14->get();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(94)
			Float tmp16 = this->x;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(94)
			Float tmp17 = Y;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(94)
			::flixel::math::FlxPoint tmp18 = tmp15->set(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(94)
			::flixel::math::FlxPoint point = tmp18;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(94)
			point->_inPool = false;
			HX_STACK_LINE(94)
			tmp10 = point;
		}
		HX_STACK_LINE(94)
		::flixel::math::FlxPoint tmp11 = center;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(94)
		Float tmp12 = this->angle;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(94)
		::flixel::math::FlxPoint tmp13 = tmp10->rotate(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(94)
		::flixel::math::FlxPoint tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(94)
		{
			HX_STACK_LINE(94)
			Float tmp15 = this->x;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(94)
			Float tmp16 = this->get_width();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(94)
			Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(94)
			Float X = tmp17;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(94)
			Float tmp18 = this->y;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(94)
			Float tmp19 = this->get_height();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(94)
			Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(94)
			Float Y = tmp20;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(94)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp21 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(94)
			::flixel::math::FlxPoint tmp22 = tmp21->get();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(94)
			Float tmp23 = X;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(94)
			Float tmp24 = Y;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(94)
			::flixel::math::FlxPoint tmp25 = tmp22->set(tmp23,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(94)
			::flixel::math::FlxPoint point = tmp25;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(94)
			point->_inPool = false;
			HX_STACK_LINE(94)
			tmp14 = point;
		}
		HX_STACK_LINE(94)
		::flixel::math::FlxPoint tmp15 = center;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(94)
		Float tmp16 = this->angle;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(94)
		::flixel::math::FlxPoint tmp17 = tmp14->rotate(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(94)
		Array< ::Dynamic > corners = Array_obj< ::Dynamic >::__new().Add(tmp5).Add(tmp9).Add(tmp13).Add(tmp17);		HX_STACK_VAR(corners,"corners");
		HX_STACK_LINE(96)
		::org::wildrabbit::game::Entity tmp18 = this->mOwner;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(96)
		::org::wildrabbit::game::World tmp19 = tmp18->mParent->mWorld;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(96)
		::org::wildrabbit::game::World w = tmp19;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(99)
		::flixel::math::FlxPoint worldCenter = w->mCenter;		HX_STACK_VAR(worldCenter,"worldCenter");
		HX_STACK_LINE(100)
		Float worldRadius = w->mRadius;		HX_STACK_VAR(worldRadius,"worldRadius");
		HX_STACK_LINE(101)
		int idx = (int)0;		HX_STACK_VAR(idx,"idx");
		HX_STACK_LINE(103)
		Float d = ((Float)-1.0);		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(104)
		{
			HX_STACK_LINE(104)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(104)
			while((true)){
				HX_STACK_LINE(104)
				bool tmp20 = (_g < corners->length);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(104)
				bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(104)
				if ((tmp21)){
					HX_STACK_LINE(104)
					break;
				}
				HX_STACK_LINE(104)
				::flixel::math::FlxPoint tmp22 = corners->__get(_g).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(104)
				::flixel::math::FlxPoint p = tmp22;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(104)
				++(_g);
				HX_STACK_LINE(106)
				::flixel::math::FlxPoint tmp23 = worldCenter;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(106)
				Float tmp24 = p->distanceTo(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(106)
				d = tmp24;
				HX_STACK_LINE(107)
				bool tmp25 = (d > maxDistance);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(107)
				if ((tmp25)){
					HX_STACK_LINE(109)
					maxDistance = d;
					HX_STACK_LINE(110)
					maxIndex = idx;
				}
				HX_STACK_LINE(112)
				(idx)++;
			}
		}
		HX_STACK_LINE(115)
		bool tmp20 = (maxDistance > worldRadius);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(115)
		bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(115)
		if ((tmp20)){
			HX_STACK_LINE(115)
			tmp21 = (maxIndex >= (int)0);
		}
		else{
			HX_STACK_LINE(115)
			tmp21 = false;
		}
		HX_STACK_LINE(115)
		if ((tmp21)){
			HX_STACK_LINE(117)
			::flixel::math::FlxPoint tmp22 = corners->__get(maxIndex).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(117)
			::flixel::math::FlxPoint tmp23 = worldCenter;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(117)
			::flixel::math::FlxPoint tmp24 = tmp22->subtractPoint(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(117)
			::flixel::math::FlxPoint point = tmp24;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(118)
			Float tmp25 = point->y;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(118)
			Float tmp26 = point->x;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(118)
			Float tmp27 = ::Math_obj::atan2(tmp25,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(118)
			Float pointAngle = tmp27;		HX_STACK_VAR(pointAngle,"pointAngle");
			HX_STACK_LINE(119)
			Float tmp28 = (maxDistance - worldRadius);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(119)
			Float delta = tmp28;		HX_STACK_VAR(delta,"delta");
			HX_STACK_LINE(120)
			{
				HX_STACK_LINE(120)
				::org::wildrabbit::game::BaseBullet _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(120)
				Float tmp29 = _g->x;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(120)
				Float tmp30 = delta;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(120)
				Float tmp31 = pointAngle;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(120)
				Float tmp32 = ::Math_obj::cos(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(120)
				Float tmp33 = (tmp30 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(120)
				Float tmp34 = (tmp29 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(120)
				_g->set_x(tmp34);
			}
			HX_STACK_LINE(121)
			{
				HX_STACK_LINE(121)
				::org::wildrabbit::game::BaseBullet _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(121)
				Float tmp29 = _g->y;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(121)
				Float tmp30 = delta;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(121)
				Float tmp31 = pointAngle;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(121)
				Float tmp32 = ::Math_obj::sin(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(121)
				Float tmp33 = (tmp30 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(121)
				Float tmp34 = (tmp29 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(121)
				_g->set_y(tmp34);
			}
			HX_STACK_LINE(122)
			::flixel::math::FlxPoint tmp29 = this->velocity;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(122)
			tmp29->set((int)0,(int)0);
			HX_STACK_LINE(123)
			this->collided = true;
		}
		HX_STACK_LINE(127)
		{
			HX_STACK_LINE(127)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(127)
			while((true)){
				HX_STACK_LINE(127)
				bool tmp22 = (_g < corners->length);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(127)
				bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(127)
				if ((tmp23)){
					HX_STACK_LINE(127)
					break;
				}
				HX_STACK_LINE(127)
				::flixel::math::FlxPoint tmp24 = corners->__get(_g).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(127)
				::flixel::math::FlxPoint p = tmp24;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(127)
				++(_g);
				HX_STACK_LINE(127)
				p->put();
			}
		}
		HX_STACK_LINE(128)
		center->put();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BaseBullet_obj,updateCollisions,(void))

Void BaseBullet_obj::onDead( ::flixel::tweens::FlxTween tween){
{
		HX_STACK_FRAME("org.wildrabbit.game.BaseBullet","onDead",0xd1258062,"org.wildrabbit.game.BaseBullet.onDead","org/wildrabbit/game/BaseBullet.hx",132,0x2688018e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tween,"tween")
		HX_STACK_LINE(133)
		this->t = null();
		HX_STACK_LINE(134)
		this->kill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BaseBullet_obj,onDead,(void))

int BaseBullet_obj::count;


BaseBullet_obj::BaseBullet_obj()
{
}

void BaseBullet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BaseBullet);
	HX_MARK_MEMBER_NAME(flxTimer,"flxTimer");
	HX_MARK_MEMBER_NAME(collided,"collided");
	HX_MARK_MEMBER_NAME(mOwner,"mOwner");
	HX_MARK_MEMBER_NAME(mSameDamage,"mSameDamage");
	HX_MARK_MEMBER_NAME(mOppositeDamage,"mOppositeDamage");
	HX_MARK_MEMBER_NAME(t,"t");
	::org::wildrabbit::game::Entity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BaseBullet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(flxTimer,"flxTimer");
	HX_VISIT_MEMBER_NAME(collided,"collided");
	HX_VISIT_MEMBER_NAME(mOwner,"mOwner");
	HX_VISIT_MEMBER_NAME(mSameDamage,"mSameDamage");
	HX_VISIT_MEMBER_NAME(mOppositeDamage,"mOppositeDamage");
	HX_VISIT_MEMBER_NAME(t,"t");
	::org::wildrabbit::game::Entity_obj::__Visit(HX_VISIT_ARG);
}

Dynamic BaseBullet_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"t") ) { return t; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		if (HX_FIELD_EQ(inName,"doDie") ) { return doDie_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mOwner") ) { return mOwner; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"onDead") ) { return onDead_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"flxTimer") ) { return flxTimer; }
		if (HX_FIELD_EQ(inName,"collided") ) { return collided; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mSameDamage") ) { return mSameDamage; }
		if (HX_FIELD_EQ(inName,"switchShape") ) { return switchShape_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"doSwitchShape") ) { return doSwitchShape_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"mOppositeDamage") ) { return mOppositeDamage; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updateCollisions") ) { return updateCollisions_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool BaseBullet_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { outValue = count; return true;  }
	}
	return false;
}

Dynamic BaseBullet_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"t") ) { t=inValue.Cast< ::flixel::tweens::FlxTween >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mOwner") ) { mOwner=inValue.Cast< ::org::wildrabbit::game::Entity >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"flxTimer") ) { flxTimer=inValue.Cast< ::flixel::util::FlxTimer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"collided") ) { collided=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mSameDamage") ) { mSameDamage=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"mOppositeDamage") ) { mOppositeDamage=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BaseBullet_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { count=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void BaseBullet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("flxTimer","\xf3","\x0d","\x5e","\xf3"));
	outFields->push(HX_HCSTRING("collided","\x26","\xdf","\xd5","\xc9"));
	outFields->push(HX_HCSTRING("mOwner","\x86","\x5c","\x8a","\x60"));
	outFields->push(HX_HCSTRING("mSameDamage","\x42","\xc7","\x3c","\x39"));
	outFields->push(HX_HCSTRING("mOppositeDamage","\x03","\x9e","\xcb","\x36"));
	outFields->push(HX_HCSTRING("t","\x74","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::util::FlxTimer*/ ,(int)offsetof(BaseBullet_obj,flxTimer),HX_HCSTRING("flxTimer","\xf3","\x0d","\x5e","\xf3")},
	{hx::fsBool,(int)offsetof(BaseBullet_obj,collided),HX_HCSTRING("collided","\x26","\xdf","\xd5","\xc9")},
	{hx::fsObject /*::org::wildrabbit::game::Entity*/ ,(int)offsetof(BaseBullet_obj,mOwner),HX_HCSTRING("mOwner","\x86","\x5c","\x8a","\x60")},
	{hx::fsInt,(int)offsetof(BaseBullet_obj,mSameDamage),HX_HCSTRING("mSameDamage","\x42","\xc7","\x3c","\x39")},
	{hx::fsInt,(int)offsetof(BaseBullet_obj,mOppositeDamage),HX_HCSTRING("mOppositeDamage","\x03","\x9e","\xcb","\x36")},
	{hx::fsObject /*::flixel::tweens::FlxTween*/ ,(int)offsetof(BaseBullet_obj,t),HX_HCSTRING("t","\x74","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &BaseBullet_obj::count,HX_HCSTRING("count","\xcf","\x44","\x63","\x4a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("flxTimer","\xf3","\x0d","\x5e","\xf3"),
	HX_HCSTRING("collided","\x26","\xdf","\xd5","\xc9"),
	HX_HCSTRING("mOwner","\x86","\x5c","\x8a","\x60"),
	HX_HCSTRING("mSameDamage","\x42","\xc7","\x3c","\x39"),
	HX_HCSTRING("mOppositeDamage","\x03","\x9e","\xcb","\x36"),
	HX_HCSTRING("t","\x74","\x00","\x00","\x00"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("switchShape","\x8d","\x74","\x9c","\x6f"),
	HX_HCSTRING("doSwitchShape","\xc2","\x9a","\x00","\x15"),
	HX_HCSTRING("doDie","\x75","\xa6","\xa4","\xdd"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("updateCollisions","\x2a","\x8b","\x04","\x42"),
	HX_HCSTRING("onDead","\x63","\x57","\xf0","\xe4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BaseBullet_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BaseBullet_obj::count,"count");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BaseBullet_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BaseBullet_obj::count,"count");
};

#endif

hx::Class BaseBullet_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("count","\xcf","\x44","\x63","\x4a"),
	::String(null()) };

void BaseBullet_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("org.wildrabbit.game.BaseBullet","\x8f","\x8d","\x8f","\x08");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BaseBullet_obj::__GetStatic;
	__mClass->mSetStaticField = &BaseBullet_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BaseBullet_obj >;
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

void BaseBullet_obj::__boot()
{
	count= (int)0;
}

} // end namespace org
} // end namespace wildrabbit
} // end namespace game
