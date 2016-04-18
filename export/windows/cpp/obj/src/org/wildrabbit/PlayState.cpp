#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_effects_FlxTrail
#include <flixel/addons/effects/FlxTrail.h>
#endif
#ifndef INCLUDED_flixel_addons_weapon_FlxTypedWeapon
#include <flixel/addons/weapon/FlxTypedWeapon.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
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
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
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
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTweenManager
#include <flixel/tweens/FlxTweenManager.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
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
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
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
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
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
#ifndef INCLUDED_org_wildrabbit_FlxTimedEmitter
#include <org/wildrabbit/FlxTimedEmitter.h>
#endif
#ifndef INCLUDED_org_wildrabbit_GameInput
#include <org/wildrabbit/GameInput.h>
#endif
#ifndef INCLUDED_org_wildrabbit_GameOverState
#include <org/wildrabbit/GameOverState.h>
#endif
#ifndef INCLUDED_org_wildrabbit_PlayState
#include <org/wildrabbit/PlayState.h>
#endif
#ifndef INCLUDED_org_wildrabbit_Reg
#include <org/wildrabbit/Reg.h>
#endif
#ifndef INCLUDED_org_wildrabbit_game_BaseBullet
#include <org/wildrabbit/game/BaseBullet.h>
#endif
#ifndef INCLUDED_org_wildrabbit_game_Bullet
#include <org/wildrabbit/game/Bullet.h>
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
#ifndef INCLUDED_org_wildrabbit_game_Pickup
#include <org/wildrabbit/game/Pickup.h>
#endif
#ifndef INCLUDED_org_wildrabbit_game_Ship
#include <org/wildrabbit/game/Ship.h>
#endif
#ifndef INCLUDED_org_wildrabbit_game_World
#include <org/wildrabbit/game/World.h>
#endif
namespace org{
namespace wildrabbit{

Void PlayState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("org.wildrabbit.PlayState","new",0xb320ac0f,"org.wildrabbit.PlayState.new","org/wildrabbit/PlayState.hx",64,0x711227e1)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(64)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	super::__construct(tmp);
}
;
	return null();
}

//PlayState_obj::~PlayState_obj() { }

Dynamic PlayState_obj::__CreateEmpty() { return  new PlayState_obj; }
hx::ObjectPtr< PlayState_obj > PlayState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< PlayState_obj > _result_ = new PlayState_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic PlayState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayState_obj > _result_ = new PlayState_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void PlayState_obj::create( ){
{
		HX_STACK_FRAME("org.wildrabbit.PlayState","create",0xc629c2ad,"org.wildrabbit.PlayState.create","org/wildrabbit/PlayState.hx",116,0x711227e1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(117)
		this->super::create();
		HX_STACK_LINE(122)
		this->mPause = false;
		HX_STACK_LINE(124)
		int tmp = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(124)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(124)
		tmp1 = hx::TCast< ::Int >::cast(tmp);
		HX_STACK_LINE(124)
		int w = tmp1;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(125)
		int tmp2 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(125)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(125)
		tmp3 = hx::TCast< ::Int >::cast(tmp2);
		HX_STACK_LINE(125)
		int h = tmp3;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(127)
		::flixel::util::FlxTimer tmp4 = ::flixel::util::FlxTimer_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(127)
		this->mSpawnTimer = tmp4;
		HX_STACK_LINE(129)
		::org::wildrabbit::GameInput tmp5 = ::org::wildrabbit::GameInput_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(129)
		this->mInput = tmp5;
		HX_STACK_LINE(131)
		::flixel::FlxSprite tmp6 = ::flixel::FlxSprite_obj::__new((int)0,(int)0,HX_HCSTRING("assets/images/bg_back.png","\x11","\x3a","\xef","\xa1"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(131)
		this->add(tmp6);
		HX_STACK_LINE(132)
		int radius = (int)300;		HX_STACK_VAR(radius,"radius");
		HX_STACK_LINE(133)
		Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(133)
		tmp7 = hx::TCast< ::Float >::cast(radius);
		HX_STACK_LINE(133)
		::org::wildrabbit::game::World tmp8 = ::org::wildrabbit::game::World_obj::__new((int)0,(int)0,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(133)
		this->mWorld = tmp8;
		HX_STACK_LINE(134)
		::org::wildrabbit::game::World tmp9 = this->mWorld;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(134)
		int tmp10 = w;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(134)
		int tmp11 = h;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(134)
		tmp9->makeGraphic(tmp10,tmp11,(int)0,null(),null());
		HX_STACK_LINE(135)
		::org::wildrabbit::game::World tmp12 = this->mWorld;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(135)
		Float tmp13 = (Float(w) / Float((int)2));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(135)
		Float tmp14 = (Float(h) / Float((int)2));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(135)
		tmp12->setCenter(tmp13,tmp14);
		HX_STACK_LINE(136)
		::org::wildrabbit::game::World tmp15 = this->mWorld;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(136)
		this->add(tmp15);
		HX_STACK_LINE(138)
		::flixel::group::FlxTypedGroup tmp16 = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(138)
		this->mDeathEmitters = tmp16;
		HX_STACK_LINE(139)
		::flixel::group::FlxTypedGroup tmp17 = this->mDeathEmitters;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(139)
		this->add(tmp17);
		HX_STACK_LINE(141)
		int tmp18 = ::org::wildrabbit::PlayState_obj::MAX_ENEMIES;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(141)
		::flixel::group::FlxTypedGroup tmp19 = ::flixel::group::FlxTypedGroup_obj::__new(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(141)
		this->mEnemies = tmp19;
		HX_STACK_LINE(142)
		{
			HX_STACK_LINE(142)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(142)
			int tmp20 = ::org::wildrabbit::PlayState_obj::MAX_ENEMIES;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(142)
			int _g = tmp20;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(142)
			while((true)){
				HX_STACK_LINE(142)
				bool tmp21 = (_g1 < _g);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(142)
				bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(142)
				if ((tmp22)){
					HX_STACK_LINE(142)
					break;
				}
				HX_STACK_LINE(142)
				int tmp23 = (_g1)++;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(142)
				int i = tmp23;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(144)
				::org::wildrabbit::game::Enemy tmp24 = ::org::wildrabbit::game::Enemy_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(144)
				::org::wildrabbit::game::Enemy e = tmp24;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(145)
				e->kill();
				HX_STACK_LINE(146)
				::flixel::group::FlxTypedGroup tmp25 = this->mEnemies;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(146)
				::org::wildrabbit::game::Enemy tmp26 = e;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(146)
				tmp25->add(tmp26);
			}
		}
		HX_STACK_LINE(148)
		::flixel::group::FlxTypedGroup tmp20 = this->mEnemies;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(148)
		this->add(tmp20);
		HX_STACK_LINE(150)
		::flixel::group::FlxTypedGroup tmp21 = ::flixel::group::FlxTypedGroup_obj::__new((int)7);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(150)
		this->mPickups = tmp21;
		HX_STACK_LINE(151)
		{
			HX_STACK_LINE(151)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(151)
			while((true)){
				HX_STACK_LINE(151)
				bool tmp22 = (_g < (int)7);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(151)
				bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(151)
				if ((tmp23)){
					HX_STACK_LINE(151)
					break;
				}
				HX_STACK_LINE(151)
				int tmp24 = (_g)++;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(151)
				int i = tmp24;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(153)
				::org::wildrabbit::game::Pickup tmp25 = ::org::wildrabbit::game::Pickup_obj::__new();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(153)
				::org::wildrabbit::game::Pickup pickup = tmp25;		HX_STACK_VAR(pickup,"pickup");
				HX_STACK_LINE(154)
				pickup->kill();
				HX_STACK_LINE(155)
				::flixel::group::FlxTypedGroup tmp26 = this->mPickups;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(155)
				::org::wildrabbit::game::Pickup tmp27 = pickup;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(155)
				tmp26->add(tmp27);
			}
		}
		HX_STACK_LINE(157)
		::flixel::group::FlxTypedGroup tmp22 = this->mPickups;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(157)
		this->add(tmp22);
		HX_STACK_LINE(159)
		::flixel::FlxSprite tmp23 = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(159)
		this->mPrev = tmp23;
		HX_STACK_LINE(160)
		::flixel::FlxSprite tmp24 = this->mPrev;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(160)
		tmp24->loadGraphic(HX_HCSTRING("assets/images/previews.png","\x51","\x82","\x13","\xa6"),true,(int)16,(int)16,null(),null());
		HX_STACK_LINE(161)
		::flixel::FlxSprite tmp25 = this->mPrev;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(161)
		tmp25->animation->add(HX_HCSTRING("circle","\x10","\x72","\x0d","\x56"),Array_obj< int >::__new().Add((int)0),(int)1,null(),null(),null());
		HX_STACK_LINE(162)
		::flixel::FlxSprite tmp26 = this->mPrev;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(162)
		tmp26->animation->add(HX_HCSTRING("triangle","\xc8","\xbe","\xc5","\x8d"),Array_obj< int >::__new().Add((int)1),(int)1,null(),null(),null());
		HX_STACK_LINE(163)
		::flixel::FlxSprite tmp27 = this->mPrev;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(163)
		tmp27->animation->add(HX_HCSTRING("square","\x9d","\x00","\xf2","\x58"),Array_obj< int >::__new().Add((int)2),(int)1,null(),null(),null());
		HX_STACK_LINE(164)
		::flixel::FlxSprite tmp28 = this->mPrev;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(164)
		tmp28->setPosition((int)820,(int)32);
		HX_STACK_LINE(165)
		::flixel::FlxSprite tmp29 = this->mPrev;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(165)
		this->add(tmp29);
		HX_STACK_LINE(166)
		::flixel::FlxSprite tmp30 = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(166)
		this->mNext = tmp30;
		HX_STACK_LINE(167)
		::flixel::FlxSprite tmp31 = this->mNext;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(167)
		tmp31->setPosition((int)868,(int)32);
		HX_STACK_LINE(168)
		::flixel::FlxSprite tmp32 = this->mNext;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(168)
		tmp32->loadGraphic(HX_HCSTRING("assets/images/previews.png","\x51","\x82","\x13","\xa6"),true,(int)16,(int)16,null(),null());
		HX_STACK_LINE(169)
		::flixel::FlxSprite tmp33 = this->mNext;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(169)
		tmp33->animation->add(HX_HCSTRING("circle","\x10","\x72","\x0d","\x56"),Array_obj< int >::__new().Add((int)0),(int)1,null(),null(),null());
		HX_STACK_LINE(170)
		::flixel::FlxSprite tmp34 = this->mNext;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(170)
		tmp34->animation->add(HX_HCSTRING("triangle","\xc8","\xbe","\xc5","\x8d"),Array_obj< int >::__new().Add((int)1),(int)1,null(),null(),null());
		HX_STACK_LINE(171)
		::flixel::FlxSprite tmp35 = this->mNext;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(171)
		tmp35->animation->add(HX_HCSTRING("square","\x9d","\x00","\xf2","\x58"),Array_obj< int >::__new().Add((int)2),(int)1,null(),null(),null());
		HX_STACK_LINE(172)
		::flixel::FlxSprite tmp36 = this->mNext;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(172)
		this->add(tmp36);
		HX_STACK_LINE(173)
		::flixel::FlxSprite tmp37 = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(173)
		this->mCurrent = tmp37;
		HX_STACK_LINE(174)
		::flixel::FlxSprite tmp38 = this->mCurrent;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(174)
		tmp38->setPosition((int)840,(int)28);
		HX_STACK_LINE(175)
		::flixel::FlxSprite tmp39 = this->mCurrent;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(175)
		tmp39->loadGraphic(HX_HCSTRING("assets/images/previews.png","\x51","\x82","\x13","\xa6"),true,(int)16,(int)16,null(),null());
		HX_STACK_LINE(176)
		::flixel::FlxSprite tmp40 = this->mCurrent;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(176)
		tmp40->animation->add(HX_HCSTRING("circle","\x10","\x72","\x0d","\x56"),Array_obj< int >::__new().Add((int)0),(int)1,null(),null(),null());
		HX_STACK_LINE(177)
		::flixel::FlxSprite tmp41 = this->mCurrent;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(177)
		tmp41->animation->add(HX_HCSTRING("triangle","\xc8","\xbe","\xc5","\x8d"),Array_obj< int >::__new().Add((int)1),(int)1,null(),null(),null());
		HX_STACK_LINE(178)
		::flixel::FlxSprite tmp42 = this->mCurrent;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(178)
		tmp42->animation->add(HX_HCSTRING("square","\x9d","\x00","\xf2","\x58"),Array_obj< int >::__new().Add((int)2),(int)1,null(),null(),null());
		HX_STACK_LINE(179)
		::flixel::FlxSprite tmp43 = this->mCurrent;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(179)
		tmp43->scale->set(((Float)1.5),((Float)1.5));
		HX_STACK_LINE(180)
		::flixel::FlxSprite tmp44 = this->mCurrent;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(180)
		tmp44->updateHitbox();
		HX_STACK_LINE(181)
		::flixel::FlxSprite tmp45 = this->mCurrent;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(181)
		tmp45->centerOffsets(null());
		HX_STACK_LINE(182)
		{
			HX_STACK_LINE(182)
			::flixel::FlxSprite tmp46 = this->mCurrent;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(182)
			::flixel::FlxSprite _this = tmp46;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(182)
			Float tmp47 = (_this->frameWidth * ((Float)0.5));		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(182)
			Float tmp48 = (_this->frameHeight * ((Float)0.5));		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(182)
			_this->origin->set(tmp47,tmp48);
		}
		HX_STACK_LINE(183)
		::flixel::FlxSprite tmp46 = this->mCurrent;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(183)
		this->add(tmp46);
		HX_STACK_LINE(187)
		::org::wildrabbit::game::Ship tmp47 = ::org::wildrabbit::game::Ship_obj::__new(hx::ObjectPtr<OBJ_>(this),(int)200,(int)200,(int)150);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(187)
		this->mPlayerShip = tmp47;
		HX_STACK_LINE(189)
		::org::wildrabbit::game::Ship tmp48 = this->mPlayerShip;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(189)
		::flixel::addons::effects::FlxTrail tmp49 = ::flixel::addons::effects::FlxTrail_obj::__new(tmp48,null(),(int)2,(int)0,((Float)0.3),null());		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(189)
		::flixel::addons::effects::FlxTrail trail = tmp49;		HX_STACK_VAR(trail,"trail");
		HX_STACK_LINE(190)
		::org::wildrabbit::game::Ship tmp50 = this->mPlayerShip;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(190)
		::flixel::addons::effects::FlxTrail tmp51 = trail;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(190)
		tmp50->set_trail(tmp51);
		HX_STACK_LINE(191)
		::flixel::addons::effects::FlxTrail tmp52 = trail;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(191)
		this->add(tmp52);
		HX_STACK_LINE(193)
		::flixel::FlxSprite tmp53 = ::flixel::FlxSprite_obj::__new((int)0,(int)0,HX_HCSTRING("assets/images/halo.png","\xa2","\x4f","\x0e","\xf3"));		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(193)
		::flixel::FlxSprite halo = tmp53;		HX_STACK_VAR(halo,"halo");
		HX_STACK_LINE(194)
		::org::wildrabbit::game::Ship tmp54 = this->mPlayerShip;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(194)
		::flixel::FlxSprite tmp55 = halo;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(194)
		tmp54->set_halo(tmp55);
		HX_STACK_LINE(195)
		::flixel::FlxSprite tmp56 = halo;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(195)
		this->add(tmp56);
		HX_STACK_LINE(197)
		int tmp57 = ::org::wildrabbit::PlayState_obj::MAX_BULLETS;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(197)
		::flixel::group::FlxTypedGroup tmp58 = ::flixel::group::FlxTypedGroup_obj::__new(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(197)
		this->mBullets = tmp58;
		HX_STACK_LINE(198)
		{
			HX_STACK_LINE(198)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(198)
			int tmp59 = ::org::wildrabbit::PlayState_obj::MAX_BULLETS;		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(198)
			int _g = tmp59;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			while((true)){
				HX_STACK_LINE(198)
				bool tmp60 = (_g1 < _g);		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(198)
				bool tmp61 = !(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(198)
				if ((tmp61)){
					HX_STACK_LINE(198)
					break;
				}
				HX_STACK_LINE(198)
				int tmp62 = (_g1)++;		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(198)
				int i = tmp62;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(200)
				::org::wildrabbit::game::Bullet tmp63 = ::org::wildrabbit::game::Bullet_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(200)
				::org::wildrabbit::game::BaseBullet b = tmp63;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(201)
				b->kill();
				HX_STACK_LINE(202)
				::flixel::group::FlxTypedGroup tmp64 = this->mBullets;		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(202)
				::org::wildrabbit::game::BaseBullet tmp65 = b;		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(202)
				tmp64->add(tmp65);
				HX_STACK_LINE(203)
				::org::wildrabbit::game::EnemyBullet tmp66 = ::org::wildrabbit::game::EnemyBullet_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(203)
				b = tmp66;
				HX_STACK_LINE(204)
				b->kill();
				HX_STACK_LINE(205)
				::flixel::group::FlxTypedGroup tmp67 = this->mBullets;		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(205)
				::org::wildrabbit::game::BaseBullet tmp68 = b;		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(205)
				tmp67->add(tmp68);
			}
		}
		HX_STACK_LINE(207)
		::flixel::group::FlxTypedGroup tmp59 = this->mBullets;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(207)
		this->add(tmp59);
		HX_STACK_LINE(208)
		::org::wildrabbit::game::Ship tmp60 = this->mPlayerShip;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(208)
		::flixel::math::FlxPoint tmp61 = tmp60->getOffset();		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(208)
		::flixel::math::FlxPoint p = tmp61;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(213)
		::org::wildrabbit::game::Ship tmp62 = this->mPlayerShip;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(213)
		this->add(tmp62);
		HX_STACK_LINE(215)
		::flixel::util::FlxTimer tmp63 = this->mSpawnTimer;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(215)
		::flixel::math::FlxRandom tmp64 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(215)
		Float tmp65 = tmp64->_float((int)1,(int)4,null());		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(215)
		Dynamic tmp66 = this->onSpawnTimeout_dyn();		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(215)
		tmp63->start(tmp65,tmp66,(int)1);
		HX_STACK_LINE(217)
		::org::wildrabbit::game::Ship tmp67 = this->mPlayerShip;		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(217)
		Float tmp68 = tmp67->HP;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(217)
		::String tmp69 = (HX_HCSTRING("Health: ","\x62","\x76","\x08","\xc3") + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(217)
		::String tmp70 = (tmp69 + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(217)
		::org::wildrabbit::game::Ship tmp71 = this->mPlayerShip;		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(217)
		int tmp72 = tmp71->maxHealth;		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(217)
		::String tmp73 = (tmp70 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(217)
		::flixel::text::FlxText tmp74 = ::flixel::text::FlxText_obj::__new((int)32,(int)32,(int)180,tmp73,(int)14,null());		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(217)
		this->mHealth = tmp74;
		HX_STACK_LINE(218)
		::flixel::text::FlxText tmp75 = this->mHealth;		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(218)
		this->add(tmp75);
		HX_STACK_LINE(219)
		::org::wildrabbit::game::Ship tmp76 = this->mPlayerShip;		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(219)
		int tmp77 = tmp76->mEnergy;		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(219)
		::String tmp78 = (HX_HCSTRING("Energy: ","\x8e","\x59","\xfc","\x92") + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(219)
		::String tmp79 = (tmp78 + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(219)
		::org::wildrabbit::game::Ship tmp80 = this->mPlayerShip;		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(219)
		int tmp81 = tmp80->mMaxEnergy;		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(219)
		::String tmp82 = (tmp79 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(219)
		::flixel::text::FlxText tmp83 = ::flixel::text::FlxText_obj::__new((int)32,(int)48,(int)180,tmp82,(int)14,null());		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(219)
		this->mEnergy = tmp83;
		HX_STACK_LINE(220)
		::flixel::text::FlxText tmp84 = this->mEnergy;		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(220)
		this->add(tmp84);
		HX_STACK_LINE(221)
		::org::wildrabbit::game::Ship tmp85 = this->mPlayerShip;		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(221)
		int tmp86 = tmp85->mLives;		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(221)
		::String tmp87 = (HX_HCSTRING("Lives: ","\x4d","\x9a","\x3a","\x88") + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(221)
		::String tmp88 = (tmp87 + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(221)
		::org::wildrabbit::game::Ship tmp89 = this->mPlayerShip;		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(221)
		int tmp90 = tmp89->mStartLives;		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(221)
		::String tmp91 = (tmp88 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(221)
		::flixel::text::FlxText tmp92 = ::flixel::text::FlxText_obj::__new((int)32,(int)64,(int)180,tmp91,(int)14,null());		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(221)
		this->mLives = tmp92;
		HX_STACK_LINE(222)
		::flixel::text::FlxText tmp93 = this->mLives;		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(222)
		this->add(tmp93);
		HX_STACK_LINE(223)
		::org::wildrabbit::game::Ship tmp94 = this->mPlayerShip;		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(223)
		int tmp95 = tmp94->mScore;		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(223)
		::String tmp96 = (HX_HCSTRING("Score: ","\x58","\xc6","\xeb","\x45") + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(223)
		::flixel::text::FlxText tmp97 = ::flixel::text::FlxText_obj::__new((int)32,(int)80,(int)180,tmp96,(int)14,null());		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(223)
		this->mScore = tmp97;
		HX_STACK_LINE(224)
		::flixel::text::FlxText tmp98 = this->mScore;		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(224)
		this->add(tmp98);
		HX_STACK_LINE(225)
		::org::wildrabbit::game::Ship tmp99 = this->mPlayerShip;		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(225)
		Float tmp100 = tmp99->mPlayTime;		HX_STACK_VAR(tmp100,"tmp100");
		HX_STACK_LINE(225)
		::org::wildrabbit::game::Ship tmp101 = this->mPlayerShip;		HX_STACK_VAR(tmp101,"tmp101");
		HX_STACK_LINE(225)
		Float tmp102 = tmp101->mPlayTime;		HX_STACK_VAR(tmp102,"tmp102");
		HX_STACK_LINE(225)
		Float tmp103 = ::Math_obj::ffloor(tmp102);		HX_STACK_VAR(tmp103,"tmp103");
		HX_STACK_LINE(225)
		Float tmp104 = (tmp100 - tmp103);		HX_STACK_VAR(tmp104,"tmp104");
		HX_STACK_LINE(225)
		Float remSecs = tmp104;		HX_STACK_VAR(remSecs,"remSecs");
		HX_STACK_LINE(226)
		Float tmp105 = (remSecs * (int)100);		HX_STACK_VAR(tmp105,"tmp105");
		HX_STACK_LINE(226)
		int tmp106 = ::Math_obj::floor(tmp105);		HX_STACK_VAR(tmp106,"tmp106");
		HX_STACK_LINE(226)
		int cents = tmp106;		HX_STACK_VAR(cents,"cents");
		HX_STACK_LINE(227)
		::String tmp107;		HX_STACK_VAR(tmp107,"tmp107");
		HX_STACK_LINE(227)
		{
			HX_STACK_LINE(227)
			::org::wildrabbit::game::Ship tmp108 = this->mPlayerShip;		HX_STACK_VAR(tmp108,"tmp108");
			HX_STACK_LINE(227)
			Float Seconds = tmp108->mPlayTime;		HX_STACK_VAR(Seconds,"Seconds");
			HX_STACK_LINE(227)
			Float tmp109 = (Float(Seconds) / Float((int)60));		HX_STACK_VAR(tmp109,"tmp109");
			HX_STACK_LINE(227)
			int tmp110 = ::Std_obj::_int(tmp109);		HX_STACK_VAR(tmp110,"tmp110");
			HX_STACK_LINE(227)
			::String tmp111 = (tmp110 + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp111,"tmp111");
			HX_STACK_LINE(227)
			::String timeString = tmp111;		HX_STACK_VAR(timeString,"timeString");
			HX_STACK_LINE(227)
			Float tmp112 = Seconds;		HX_STACK_VAR(tmp112,"tmp112");
			HX_STACK_LINE(227)
			int tmp113 = ::Std_obj::_int(tmp112);		HX_STACK_VAR(tmp113,"tmp113");
			HX_STACK_LINE(227)
			int tmp114 = hx::Mod(tmp113,(int)60);		HX_STACK_VAR(tmp114,"tmp114");
			HX_STACK_LINE(227)
			int timeStringHelper = tmp114;		HX_STACK_VAR(timeStringHelper,"timeStringHelper");
			HX_STACK_LINE(227)
			bool tmp115 = (timeStringHelper < (int)10);		HX_STACK_VAR(tmp115,"tmp115");
			HX_STACK_LINE(227)
			if ((tmp115)){
				HX_STACK_LINE(227)
				hx::AddEq(timeString,HX_HCSTRING("0","\x30","\x00","\x00","\x00"));
			}
			HX_STACK_LINE(227)
			hx::AddEq(timeString,timeStringHelper);
			HX_STACK_LINE(227)
			{
				HX_STACK_LINE(227)
				hx::AddEq(timeString,HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));
				HX_STACK_LINE(227)
				Float tmp116 = Seconds;		HX_STACK_VAR(tmp116,"tmp116");
				HX_STACK_LINE(227)
				Float tmp117 = Seconds;		HX_STACK_VAR(tmp117,"tmp117");
				HX_STACK_LINE(227)
				int tmp118 = ::Std_obj::_int(tmp117);		HX_STACK_VAR(tmp118,"tmp118");
				HX_STACK_LINE(227)
				Float tmp119 = (tmp116 - tmp118);		HX_STACK_VAR(tmp119,"tmp119");
				HX_STACK_LINE(227)
				Float tmp120 = (tmp119 * (int)100);		HX_STACK_VAR(tmp120,"tmp120");
				HX_STACK_LINE(227)
				int tmp121 = ::Std_obj::_int(tmp120);		HX_STACK_VAR(tmp121,"tmp121");
				HX_STACK_LINE(227)
				timeStringHelper = tmp121;
				HX_STACK_LINE(227)
				bool tmp122 = (timeStringHelper < (int)10);		HX_STACK_VAR(tmp122,"tmp122");
				HX_STACK_LINE(227)
				if ((tmp122)){
					HX_STACK_LINE(227)
					hx::AddEq(timeString,HX_HCSTRING("0","\x30","\x00","\x00","\x00"));
				}
				HX_STACK_LINE(227)
				hx::AddEq(timeString,timeStringHelper);
			}
			HX_STACK_LINE(227)
			tmp107 = timeString;
		}
		HX_STACK_LINE(227)
		::String tmp108 = (HX_HCSTRING("Playtime: ","\x07","\xfd","\xb1","\x87") + tmp107);		HX_STACK_VAR(tmp108,"tmp108");
		HX_STACK_LINE(227)
		::flixel::text::FlxText tmp109 = ::flixel::text::FlxText_obj::__new((int)32,(int)96,(int)180,tmp108,(int)14,null());		HX_STACK_VAR(tmp109,"tmp109");
		HX_STACK_LINE(227)
		this->mPlaytime = tmp109;
		HX_STACK_LINE(228)
		::flixel::text::FlxText tmp110 = this->mPlaytime;		HX_STACK_VAR(tmp110,"tmp110");
		HX_STACK_LINE(228)
		this->add(tmp110);
		HX_STACK_LINE(229)
		int tmp111 = this->mScoreMultiplier;		HX_STACK_VAR(tmp111,"tmp111");
		HX_STACK_LINE(229)
		::String tmp112 = (HX_HCSTRING("Current bonus: ","\xfe","\x07","\x10","\x72") + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
		HX_STACK_LINE(229)
		::flixel::text::FlxText tmp113 = ::flixel::text::FlxText_obj::__new((int)32,(int)112,(int)220,tmp112,(int)14,null());		HX_STACK_VAR(tmp113,"tmp113");
		HX_STACK_LINE(229)
		this->mMultiplierText = tmp113;
		HX_STACK_LINE(230)
		::flixel::text::FlxText tmp114 = this->mMultiplierText;		HX_STACK_VAR(tmp114,"tmp114");
		HX_STACK_LINE(230)
		this->add(tmp114);
		HX_STACK_LINE(232)
		::flixel::_system::frontEnds::SoundFrontEnd tmp115 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp115,"tmp115");
		HX_STACK_LINE(232)
		tmp115->__Field(HX_HCSTRING("set_volume","\x17","\x38","\x58","\x53"), hx::paccDynamic )(((Float)0.6));
		HX_STACK_LINE(235)
		::flixel::FlxSprite tmp116 = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp116,"tmp116");
		HX_STACK_LINE(235)
		::flixel::FlxSprite cursorSprite = tmp116;		HX_STACK_VAR(cursorSprite,"cursorSprite");
		HX_STACK_LINE(236)
		cursorSprite->makeGraphic((int)32,(int)32,(int)0,null(),null());
		HX_STACK_LINE(237)
		::flixel::FlxSprite tmp117 = cursorSprite;		HX_STACK_VAR(tmp117,"tmp117");
		HX_STACK_LINE(237)
		int tmp118;		HX_STACK_VAR(tmp118,"tmp118");
		HX_STACK_LINE(237)
		{
			HX_STACK_LINE(237)
			int Alpha = (int)255;		HX_STACK_VAR(Alpha,"Alpha");
			HX_STACK_LINE(237)
			int tmp119 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());		HX_STACK_VAR(tmp119,"tmp119");
			HX_STACK_LINE(237)
			int color = tmp119;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(237)
			int tmp120;		HX_STACK_VAR(tmp120,"tmp120");
			HX_STACK_LINE(237)
			{
				HX_STACK_LINE(237)
				{
					HX_STACK_LINE(237)
					hx::AndEq(color,(int)-16711681);
					HX_STACK_LINE(237)
					bool tmp121 = false;		HX_STACK_VAR(tmp121,"tmp121");
					HX_STACK_LINE(237)
					int tmp122;		HX_STACK_VAR(tmp122,"tmp122");
					HX_STACK_LINE(237)
					if ((tmp121)){
						HX_STACK_LINE(237)
						tmp122 = (int)255;
					}
					else{
						HX_STACK_LINE(237)
						bool tmp123 = false;		HX_STACK_VAR(tmp123,"tmp123");
						HX_STACK_LINE(237)
						if ((tmp123)){
							HX_STACK_LINE(237)
							tmp122 = (int)0;
						}
						else{
							HX_STACK_LINE(237)
							tmp122 = (int)64;
						}
					}
					HX_STACK_LINE(237)
					int tmp123 = (int(tmp122) << int((int)16));		HX_STACK_VAR(tmp123,"tmp123");
					HX_STACK_LINE(237)
					hx::OrEq(color,tmp123);
					HX_STACK_LINE(237)
					(int)64;
				}
				HX_STACK_LINE(237)
				{
					HX_STACK_LINE(237)
					hx::AndEq(color,(int)-65281);
					HX_STACK_LINE(237)
					bool tmp121 = false;		HX_STACK_VAR(tmp121,"tmp121");
					HX_STACK_LINE(237)
					int tmp122;		HX_STACK_VAR(tmp122,"tmp122");
					HX_STACK_LINE(237)
					if ((tmp121)){
						HX_STACK_LINE(237)
						tmp122 = (int)255;
					}
					else{
						HX_STACK_LINE(237)
						bool tmp123 = false;		HX_STACK_VAR(tmp123,"tmp123");
						HX_STACK_LINE(237)
						if ((tmp123)){
							HX_STACK_LINE(237)
							tmp122 = (int)0;
						}
						else{
							HX_STACK_LINE(237)
							tmp122 = (int)64;
						}
					}
					HX_STACK_LINE(237)
					int tmp123 = (int(tmp122) << int((int)8));		HX_STACK_VAR(tmp123,"tmp123");
					HX_STACK_LINE(237)
					hx::OrEq(color,tmp123);
					HX_STACK_LINE(237)
					(int)64;
				}
				HX_STACK_LINE(237)
				{
					HX_STACK_LINE(237)
					hx::AndEq(color,(int)-256);
					HX_STACK_LINE(237)
					bool tmp121 = false;		HX_STACK_VAR(tmp121,"tmp121");
					HX_STACK_LINE(237)
					int tmp122;		HX_STACK_VAR(tmp122,"tmp122");
					HX_STACK_LINE(237)
					if ((tmp121)){
						HX_STACK_LINE(237)
						tmp122 = (int)255;
					}
					else{
						HX_STACK_LINE(237)
						bool tmp123 = false;		HX_STACK_VAR(tmp123,"tmp123");
						HX_STACK_LINE(237)
						if ((tmp123)){
							HX_STACK_LINE(237)
							tmp122 = (int)0;
						}
						else{
							HX_STACK_LINE(237)
							tmp122 = (int)64;
						}
					}
					HX_STACK_LINE(237)
					hx::OrEq(color,tmp122);
					HX_STACK_LINE(237)
					(int)64;
				}
				HX_STACK_LINE(237)
				{
					HX_STACK_LINE(237)
					hx::AndEq(color,(int)16777215);
					HX_STACK_LINE(237)
					bool tmp121 = (Alpha > (int)255);		HX_STACK_VAR(tmp121,"tmp121");
					HX_STACK_LINE(237)
					int tmp122;		HX_STACK_VAR(tmp122,"tmp122");
					HX_STACK_LINE(237)
					if ((tmp121)){
						HX_STACK_LINE(237)
						tmp122 = (int)255;
					}
					else{
						HX_STACK_LINE(237)
						bool tmp123 = (Alpha < (int)0);		HX_STACK_VAR(tmp123,"tmp123");
						HX_STACK_LINE(237)
						if ((tmp123)){
							HX_STACK_LINE(237)
							tmp122 = (int)0;
						}
						else{
							HX_STACK_LINE(237)
							tmp122 = Alpha;
						}
					}
					HX_STACK_LINE(237)
					int tmp123 = (int(tmp122) << int((int)24));		HX_STACK_VAR(tmp123,"tmp123");
					HX_STACK_LINE(237)
					hx::OrEq(color,tmp123);
					HX_STACK_LINE(237)
					Alpha;
				}
				HX_STACK_LINE(237)
				tmp120 = color;
			}
			HX_STACK_LINE(237)
			tmp118 = tmp120;
		}
		HX_STACK_LINE(237)
		::flixel::util::FlxSpriteUtil_obj::drawCircle(tmp117,(int)16,(int)16,(int)16,tmp118,null(),null());
		HX_STACK_LINE(238)
		::flixel::FlxSprite tmp119 = cursorSprite;		HX_STACK_VAR(tmp119,"tmp119");
		HX_STACK_LINE(238)
		::flixel::util::FlxSpriteUtil_obj::drawCircle(tmp119,(int)16,(int)16,(int)14,(int)0,null(),null());
		HX_STACK_LINE(239)
		::flixel::FlxSprite tmp120 = cursorSprite;		HX_STACK_VAR(tmp120,"tmp120");
		HX_STACK_LINE(239)
		int tmp121;		HX_STACK_VAR(tmp121,"tmp121");
		HX_STACK_LINE(239)
		{
			HX_STACK_LINE(239)
			int Alpha = (int)255;		HX_STACK_VAR(Alpha,"Alpha");
			HX_STACK_LINE(239)
			int tmp122 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());		HX_STACK_VAR(tmp122,"tmp122");
			HX_STACK_LINE(239)
			int color = tmp122;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(239)
			int tmp123;		HX_STACK_VAR(tmp123,"tmp123");
			HX_STACK_LINE(239)
			{
				HX_STACK_LINE(239)
				{
					HX_STACK_LINE(239)
					hx::AndEq(color,(int)-16711681);
					HX_STACK_LINE(239)
					bool tmp124 = false;		HX_STACK_VAR(tmp124,"tmp124");
					HX_STACK_LINE(239)
					int tmp125;		HX_STACK_VAR(tmp125,"tmp125");
					HX_STACK_LINE(239)
					if ((tmp124)){
						HX_STACK_LINE(239)
						tmp125 = (int)255;
					}
					else{
						HX_STACK_LINE(239)
						bool tmp126 = false;		HX_STACK_VAR(tmp126,"tmp126");
						HX_STACK_LINE(239)
						if ((tmp126)){
							HX_STACK_LINE(239)
							tmp125 = (int)0;
						}
						else{
							HX_STACK_LINE(239)
							tmp125 = (int)64;
						}
					}
					HX_STACK_LINE(239)
					int tmp126 = (int(tmp125) << int((int)16));		HX_STACK_VAR(tmp126,"tmp126");
					HX_STACK_LINE(239)
					hx::OrEq(color,tmp126);
					HX_STACK_LINE(239)
					(int)64;
				}
				HX_STACK_LINE(239)
				{
					HX_STACK_LINE(239)
					hx::AndEq(color,(int)-65281);
					HX_STACK_LINE(239)
					bool tmp124 = false;		HX_STACK_VAR(tmp124,"tmp124");
					HX_STACK_LINE(239)
					int tmp125;		HX_STACK_VAR(tmp125,"tmp125");
					HX_STACK_LINE(239)
					if ((tmp124)){
						HX_STACK_LINE(239)
						tmp125 = (int)255;
					}
					else{
						HX_STACK_LINE(239)
						bool tmp126 = false;		HX_STACK_VAR(tmp126,"tmp126");
						HX_STACK_LINE(239)
						if ((tmp126)){
							HX_STACK_LINE(239)
							tmp125 = (int)0;
						}
						else{
							HX_STACK_LINE(239)
							tmp125 = (int)64;
						}
					}
					HX_STACK_LINE(239)
					int tmp126 = (int(tmp125) << int((int)8));		HX_STACK_VAR(tmp126,"tmp126");
					HX_STACK_LINE(239)
					hx::OrEq(color,tmp126);
					HX_STACK_LINE(239)
					(int)64;
				}
				HX_STACK_LINE(239)
				{
					HX_STACK_LINE(239)
					hx::AndEq(color,(int)-256);
					HX_STACK_LINE(239)
					bool tmp124 = false;		HX_STACK_VAR(tmp124,"tmp124");
					HX_STACK_LINE(239)
					int tmp125;		HX_STACK_VAR(tmp125,"tmp125");
					HX_STACK_LINE(239)
					if ((tmp124)){
						HX_STACK_LINE(239)
						tmp125 = (int)255;
					}
					else{
						HX_STACK_LINE(239)
						bool tmp126 = false;		HX_STACK_VAR(tmp126,"tmp126");
						HX_STACK_LINE(239)
						if ((tmp126)){
							HX_STACK_LINE(239)
							tmp125 = (int)0;
						}
						else{
							HX_STACK_LINE(239)
							tmp125 = (int)64;
						}
					}
					HX_STACK_LINE(239)
					hx::OrEq(color,tmp125);
					HX_STACK_LINE(239)
					(int)64;
				}
				HX_STACK_LINE(239)
				{
					HX_STACK_LINE(239)
					hx::AndEq(color,(int)16777215);
					HX_STACK_LINE(239)
					bool tmp124 = (Alpha > (int)255);		HX_STACK_VAR(tmp124,"tmp124");
					HX_STACK_LINE(239)
					int tmp125;		HX_STACK_VAR(tmp125,"tmp125");
					HX_STACK_LINE(239)
					if ((tmp124)){
						HX_STACK_LINE(239)
						tmp125 = (int)255;
					}
					else{
						HX_STACK_LINE(239)
						bool tmp126 = (Alpha < (int)0);		HX_STACK_VAR(tmp126,"tmp126");
						HX_STACK_LINE(239)
						if ((tmp126)){
							HX_STACK_LINE(239)
							tmp125 = (int)0;
						}
						else{
							HX_STACK_LINE(239)
							tmp125 = Alpha;
						}
					}
					HX_STACK_LINE(239)
					int tmp126 = (int(tmp125) << int((int)24));		HX_STACK_VAR(tmp126,"tmp126");
					HX_STACK_LINE(239)
					hx::OrEq(color,tmp126);
					HX_STACK_LINE(239)
					Alpha;
				}
				HX_STACK_LINE(239)
				tmp123 = color;
			}
			HX_STACK_LINE(239)
			tmp121 = tmp123;
		}
		HX_STACK_LINE(239)
		::flixel::util::FlxSpriteUtil_obj::drawCircle(tmp120,(int)16,(int)16,(int)2,tmp121,null(),null());
		HX_STACK_LINE(240)
		::flixel::FlxSprite tmp122 = cursorSprite;		HX_STACK_VAR(tmp122,"tmp122");
		HX_STACK_LINE(240)
		::flixel::util::FlxSpriteUtil_obj::drawRect(tmp122,(int)14,(int)0,(int)4,(int)8,null(),null(),null());
		HX_STACK_LINE(241)
		::flixel::FlxSprite tmp123 = cursorSprite;		HX_STACK_VAR(tmp123,"tmp123");
		HX_STACK_LINE(241)
		::flixel::util::FlxSpriteUtil_obj::drawRect(tmp123,(int)0,(int)14,(int)8,(int)4,null(),null(),null());
		HX_STACK_LINE(242)
		::flixel::FlxSprite tmp124 = cursorSprite;		HX_STACK_VAR(tmp124,"tmp124");
		HX_STACK_LINE(242)
		::flixel::util::FlxSpriteUtil_obj::drawRect(tmp124,(int)14,(int)24,(int)4,(int)8,null(),null(),null());
		HX_STACK_LINE(243)
		::flixel::FlxSprite tmp125 = cursorSprite;		HX_STACK_VAR(tmp125,"tmp125");
		HX_STACK_LINE(243)
		::flixel::util::FlxSpriteUtil_obj::drawRect(tmp125,(int)24,(int)14,(int)8,(int)4,null(),null(),null());
		HX_STACK_LINE(246)
		::flixel::input::mouse::FlxMouse tmp126 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp126,"tmp126");
		HX_STACK_LINE(246)
		::openfl::_legacy::display::BitmapData tmp127 = cursorSprite->get_pixels();		HX_STACK_VAR(tmp127,"tmp127");
		HX_STACK_LINE(246)
		tmp126->load(tmp127,null(),null(),null());
		HX_STACK_LINE(248)
		this->mScoreMultiplier = (int)1;
		HX_STACK_LINE(249)
		bool tmp128 = this->isHardMode();		HX_STACK_VAR(tmp128,"tmp128");
		HX_STACK_LINE(249)
		int tmp129;		HX_STACK_VAR(tmp129,"tmp129");
		HX_STACK_LINE(249)
		if ((tmp128)){
			HX_STACK_LINE(249)
			int tmp130 = ::org::wildrabbit::PlayState_obj::KILLS_TO_LIFE;		HX_STACK_VAR(tmp130,"tmp130");
			HX_STACK_LINE(249)
			tmp129 = ((int)2 * tmp130);
		}
		else{
			HX_STACK_LINE(249)
			tmp129 = ::org::wildrabbit::PlayState_obj::KILLS_TO_LIFE;
		}
		HX_STACK_LINE(249)
		this->mToNextLife = tmp129;
		HX_STACK_LINE(250)
		int tmp130 = ::org::wildrabbit::PlayState_obj::KILLS_TO_MULTIPLIER;		HX_STACK_VAR(tmp130,"tmp130");
		HX_STACK_LINE(250)
		this->mToNextMultiplier = tmp130;
		HX_STACK_LINE(255)
		this->updateShapeHint();
		HX_STACK_LINE(256)
		::flixel::text::FlxText tmp131 = ::flixel::text::FlxText_obj::__new((int)800,(int)64,(int)100,HX_HCSTRING("Blaster loading","\x61","\xe1","\xd7","\xe1"),(int)14,null());		HX_STACK_VAR(tmp131,"tmp131");
		HX_STACK_LINE(256)
		this->mBlasterHint = tmp131;
		HX_STACK_LINE(257)
		::flixel::text::FlxText tmp132 = this->mBlasterHint;		HX_STACK_VAR(tmp132,"tmp132");
		HX_STACK_LINE(257)
		tmp132->set_alignment(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
		HX_STACK_LINE(258)
		::flixel::text::FlxText tmp133 = this->mBlasterHint;		HX_STACK_VAR(tmp133,"tmp133");
		HX_STACK_LINE(258)
		this->add(tmp133);
		HX_STACK_LINE(259)
		::flixel::text::FlxText tmp134 = this->mBlasterHint;		HX_STACK_VAR(tmp134,"tmp134");
		HX_STACK_LINE(259)
		tmp134->set_color((int)-1);
		HX_STACK_LINE(261)
		::flixel::_system::frontEnds::SoundFrontEnd tmp135 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp135,"tmp135");
		HX_STACK_LINE(261)
		tmp135->__Field(HX_HCSTRING("playMusic","\x11","\xfe","\x3e","\x31"), hx::paccDynamic )(HX_HCSTRING("assets/music/testMusic.wav","\x3b","\x81","\x4b","\x4c"),((Float)0.3),null(),null());
		HX_STACK_LINE(263)
		::flixel::FlxSprite tmp136 = ::flixel::FlxSprite_obj::__new((int)0,(int)0,HX_HCSTRING("assets/images/bg_front.png","\x55","\x84","\x04","\x70"));		HX_STACK_VAR(tmp136,"tmp136");
		HX_STACK_LINE(263)
		this->add(tmp136);
	}
return null();
}


Void PlayState_obj::updateShapeHint( ){
{
		HX_STACK_FRAME("org.wildrabbit.PlayState","updateShapeHint",0x3e34e82e,"org.wildrabbit.PlayState.updateShapeHint","org/wildrabbit/PlayState.hx",267,0x711227e1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(268)
		::org::wildrabbit::game::Ship tmp = this->mPlayerShip;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(268)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(268)
		if ((tmp1)){
			HX_STACK_LINE(268)
			return null();
		}
		HX_STACK_LINE(269)
		::org::wildrabbit::game::Ship tmp2 = this->mPlayerShip;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(269)
		int s = tmp2->mShape;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(270)
		::flixel::FlxSprite tmp3 = this->mCurrent;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(270)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(270)
		tmp4 = hx::TCast< ::Int >::cast(s);
		HX_STACK_LINE(270)
		::String tmp5 = ::org::wildrabbit::game::Ship_obj::ShapeAnims->__get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(270)
		tmp3->animation->play(tmp5,null(),null(),null());
		HX_STACK_LINE(271)
		::flixel::FlxSprite tmp6 = this->mCurrent;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(271)
		int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(271)
		tmp7 = hx::TCast< ::Int >::cast(s);
		HX_STACK_LINE(271)
		int tmp8 = ::org::wildrabbit::game::Entity_obj::ShapeColours->__get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(271)
		tmp6->set_color(tmp8);
		HX_STACK_LINE(272)
		int tmp9 = (s + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(272)
		int tmp10 = ((int)2 - (int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(272)
		int tmp11 = (tmp10 + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(272)
		int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(272)
		int tmp13 = hx::Mod(tmp9,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(272)
		int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(272)
		tmp14 = hx::TCast< ::Int >::cast(tmp13);
		HX_STACK_LINE(272)
		int nextS = tmp14;		HX_STACK_VAR(nextS,"nextS");
		HX_STACK_LINE(273)
		::flixel::FlxSprite tmp15 = this->mNext;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(273)
		int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(273)
		tmp16 = hx::TCast< ::Int >::cast(nextS);
		HX_STACK_LINE(273)
		::String tmp17 = ::org::wildrabbit::game::Ship_obj::ShapeAnims->__get(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(273)
		tmp15->animation->play(tmp17,null(),null(),null());
		HX_STACK_LINE(274)
		::flixel::FlxSprite tmp18 = this->mNext;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(274)
		int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(274)
		tmp19 = hx::TCast< ::Int >::cast(nextS);
		HX_STACK_LINE(274)
		int tmp20 = ::org::wildrabbit::game::Entity_obj::ShapeColours->__get(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(274)
		tmp18->set_color(tmp20);
		HX_STACK_LINE(275)
		bool tmp21 = (s > (int)0);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(275)
		int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(275)
		if ((tmp21)){
			HX_STACK_LINE(275)
			tmp22 = (s - (int)1);
		}
		else{
			HX_STACK_LINE(275)
			int tmp23 = ((int)2 - (int)0);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(275)
			int tmp24 = (tmp23 + (int)1);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(275)
			int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(275)
			tmp22 = (tmp25 - (int)1);
		}
		HX_STACK_LINE(275)
		int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(275)
		tmp23 = hx::TCast< ::Int >::cast(tmp22);
		HX_STACK_LINE(275)
		int prevS = tmp23;		HX_STACK_VAR(prevS,"prevS");
		HX_STACK_LINE(276)
		::flixel::FlxSprite tmp24 = this->mPrev;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(276)
		int tmp25;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(276)
		tmp25 = hx::TCast< ::Int >::cast(prevS);
		HX_STACK_LINE(276)
		::String tmp26 = ::org::wildrabbit::game::Ship_obj::ShapeAnims->__get(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(276)
		tmp24->animation->play(tmp26,null(),null(),null());
		HX_STACK_LINE(277)
		::flixel::FlxSprite tmp27 = this->mPrev;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(277)
		int tmp28;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(277)
		tmp28 = hx::TCast< ::Int >::cast(prevS);
		HX_STACK_LINE(277)
		int tmp29 = ::org::wildrabbit::game::Entity_obj::ShapeColours->__get(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(277)
		tmp27->set_color(tmp29);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,updateShapeHint,(void))

bool PlayState_obj::isHardMode( ){
	HX_STACK_FRAME("org.wildrabbit.PlayState","isHardMode",0x949b1a29,"org.wildrabbit.PlayState.isHardMode","org/wildrabbit/PlayState.hx",281,0x711227e1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(282)
	::org::wildrabbit::game::Ship tmp = this->mPlayerShip;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(282)
	Float tmp1 = tmp->mPlayTime;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(282)
	bool tmp2 = (tmp1 > (int)180);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(282)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,isHardMode,return )

Void PlayState_obj::onSpawnTimeout( ::flixel::util::FlxTimer timer){
{
		HX_STACK_FRAME("org.wildrabbit.PlayState","onSpawnTimeout",0xd5f80616,"org.wildrabbit.PlayState.onSpawnTimeout","org/wildrabbit/PlayState.hx",286,0x711227e1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(timer,"timer")
		HX_STACK_LINE(287)
		bool tmp = this->isHardMode();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(287)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(287)
		if ((tmp)){
			HX_STACK_LINE(287)
			::flixel::math::FlxRandom tmp2 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(287)
			tmp1 = tmp2->_int((int)2,(int)6,null());
		}
		else{
			HX_STACK_LINE(287)
			::flixel::math::FlxRandom tmp2 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(287)
			tmp1 = tmp2->_int((int)1,(int)4,null());
		}
		HX_STACK_LINE(287)
		int numEnemies = tmp1;		HX_STACK_VAR(numEnemies,"numEnemies");
		HX_STACK_LINE(289)
		::flixel::math::FlxPoint tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(289)
		{
			HX_STACK_LINE(289)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(289)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(289)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp3 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(289)
			::flixel::math::FlxPoint tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(289)
			Float tmp5 = X;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(289)
			Float tmp6 = Y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(289)
			::flixel::math::FlxPoint tmp7 = tmp4->set(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(289)
			::flixel::math::FlxPoint point = tmp7;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(289)
			point->_inPool = false;
			HX_STACK_LINE(289)
			tmp2 = point;
		}
		HX_STACK_LINE(289)
		::flixel::math::FlxPoint point = tmp2;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(290)
		::flixel::math::FlxRandom tmp3 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(290)
		int tmp4 = tmp3->_int((int)0,(int)2,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(290)
		int waveType = tmp4;		HX_STACK_VAR(waveType,"waveType");
		HX_STACK_LINE(291)
		{
			HX_STACK_LINE(291)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(291)
			while((true)){
				HX_STACK_LINE(291)
				bool tmp5 = (_g < numEnemies);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(291)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(291)
				if ((tmp6)){
					HX_STACK_LINE(291)
					break;
				}
				HX_STACK_LINE(291)
				int tmp7 = (_g)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(291)
				int i = tmp7;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(293)
				::flixel::group::FlxTypedGroup tmp8 = this->mEnemies;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(293)
				::org::wildrabbit::game::Enemy tmp9 = tmp8->getFirstAvailable(hx::ClassOf< ::org::wildrabbit::game::Enemy >(),null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(293)
				::org::wildrabbit::game::Enemy e = tmp9;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(294)
				Float tmp10 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(294)
				Float dist = tmp10;		HX_STACK_VAR(dist,"dist");
				HX_STACK_LINE(295)
				bool tmp11 = (e != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(295)
				if ((tmp11)){
					HX_STACK_LINE(297)
					e->reset((int)0,(int)0);
					HX_STACK_LINE(298)
					int tmp12 = waveType;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(298)
					e->start(tmp12);
					HX_STACK_LINE(299)
					int attempts = (int)10;		HX_STACK_VAR(attempts,"attempts");
					HX_STACK_LINE(300)
					while((true)){
						HX_STACK_LINE(301)
						::flixel::math::FlxRandom tmp13 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(301)
						::org::wildrabbit::game::World tmp14 = this->mWorld;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(301)
						Float tmp15 = tmp14->mRadius;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(301)
						Float tmp16 = e->get_width();		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(301)
						Float tmp17 = (Float(tmp16) / Float((int)2));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(301)
						Float tmp18 = (tmp15 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(301)
						Float tmp19 = tmp13->_float((int)0,tmp18,null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(301)
						Float d = tmp19;		HX_STACK_VAR(d,"d");
						HX_STACK_LINE(302)
						::flixel::math::FlxRandom tmp20 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(302)
						Float tmp21 = tmp20->_float((int)0,(int)360,null());		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(302)
						Float a = tmp21;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(303)
						Float tmp22 = d;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(303)
						Float tmp23 = a;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(303)
						::flixel::math::FlxPoint tmp24 = ::flixel::math::FlxAngle_obj::getCartesianCoords(tmp22,tmp23,null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(303)
						point = tmp24;
						HX_STACK_LINE(304)
						int tmp25;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(304)
						{
							HX_STACK_LINE(304)
							::org::wildrabbit::game::Ship tmp26 = this->mPlayerShip;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(304)
							::flixel::FlxSprite Sprite = tmp26;		HX_STACK_VAR(Sprite,"Sprite");
							HX_STACK_LINE(304)
							::flixel::math::FlxPoint tmp27;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(304)
							{
								HX_STACK_LINE(304)
								{
									HX_STACK_LINE(304)
									::flixel::math::FlxPoint _g1 = point;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(304)
									Float tmp28 = _g1->x;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(304)
									int tmp29 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(304)
									Float tmp30 = (Float(tmp29) / Float((int)2));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(304)
									Float tmp31 = (tmp28 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(304)
									_g1->set_x(tmp31);
								}
								HX_STACK_LINE(304)
								{
									HX_STACK_LINE(304)
									::flixel::math::FlxPoint _g1 = point;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(304)
									Float tmp28 = _g1->y;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(304)
									int tmp29 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(304)
									Float tmp30 = (Float(tmp29) / Float((int)2));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(304)
									Float tmp31 = (tmp28 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(304)
									_g1->set_y(tmp31);
								}
								HX_STACK_LINE(304)
								tmp27 = point;
							}
							HX_STACK_LINE(304)
							::flixel::math::FlxPoint Target = tmp27;		HX_STACK_VAR(Target,"Target");
							HX_STACK_LINE(304)
							Float tmp28 = Sprite->x;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(304)
							Float tmp29 = Sprite->origin->x;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(304)
							Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(304)
							Float tmp31 = Target->x;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(304)
							Float tmp32 = (tmp30 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(304)
							Float dx = tmp32;		HX_STACK_VAR(dx,"dx");
							HX_STACK_LINE(304)
							Float tmp33 = Sprite->y;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(304)
							Float tmp34 = Sprite->origin->y;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(304)
							Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(304)
							Float tmp36 = Target->y;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(304)
							Float tmp37 = (tmp35 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(304)
							Float dy = tmp37;		HX_STACK_VAR(dy,"dy");
							HX_STACK_LINE(304)
							{
								HX_STACK_LINE(304)
								bool tmp38 = Target->_weak;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(304)
								if ((tmp38)){
									HX_STACK_LINE(304)
									Target->put();
								}
							}
							HX_STACK_LINE(304)
							Float tmp38 = (dx * dx);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(304)
							Float tmp39 = (dy * dy);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(304)
							Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(304)
							Float tmp41 = ::Math_obj::sqrt(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(304)
							tmp25 = ::Std_obj::_int(tmp41);
						}
						HX_STACK_LINE(304)
						dist = tmp25;
						HX_STACK_LINE(305)
						(attempts)--;
						HX_STACK_LINE(307)
						Float tmp26 = dist;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(307)
						::org::wildrabbit::game::Ship tmp27 = this->mPlayerShip;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(307)
						Float tmp28 = tmp27->get_width();		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(307)
						bool tmp29 = this->isHardMode();		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(307)
						int tmp30;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(307)
						if ((tmp29)){
							HX_STACK_LINE(307)
							tmp30 = (int)4;
						}
						else{
							HX_STACK_LINE(307)
							tmp30 = (int)6;
						}
						HX_STACK_LINE(307)
						Float tmp31 = (tmp28 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(307)
						bool tmp32 = (tmp26 < tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(307)
						bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(307)
						if ((tmp32)){
							HX_STACK_LINE(307)
							tmp33 = (attempts > (int)0);
						}
						else{
							HX_STACK_LINE(307)
							tmp33 = false;
						}
						HX_STACK_LINE(307)
						bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(300)
						if ((tmp34)){
							HX_STACK_LINE(300)
							break;
						}
					}
					HX_STACK_LINE(309)
					Float tmp13 = point->x;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(309)
					Float tmp14 = point->y;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(309)
					e->setPosition(tmp13,tmp14);
				}
			}
		}
		HX_STACK_LINE(312)
		point->put();
		HX_STACK_LINE(313)
		::flixel::util::FlxTimer tmp5 = this->mSpawnTimer;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(313)
		::flixel::math::FlxRandom tmp6 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(313)
		Float tmp7 = tmp6->_float(((Float)0.8),((Float)2.5),null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(313)
		Dynamic tmp8 = this->onSpawnTimeout_dyn();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(313)
		tmp5->start(tmp7,tmp8,(int)1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayState_obj,onSpawnTimeout,(void))

Void PlayState_obj::destroy( ){
{
		HX_STACK_FRAME("org.wildrabbit.PlayState","destroy",0xb17c0c29,"org.wildrabbit.PlayState.destroy","org/wildrabbit/PlayState.hx",322,0x711227e1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(322)
		this->super::destroy();
	}
return null();
}


Void PlayState_obj::update( Float elapsed){
{
		HX_STACK_FRAME("org.wildrabbit.PlayState","update",0xd11fe1ba,"org.wildrabbit.PlayState.update","org/wildrabbit/PlayState.hx",329,0x711227e1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(330)
		::org::wildrabbit::GameInput tmp = this->mInput;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(330)
		::org::wildrabbit::game::Ship tmp1 = this->mPlayerShip;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(330)
		tmp->gatherInputs(tmp1);
		HX_STACK_LINE(332)
		::org::wildrabbit::GameInput tmp2 = this->mInput;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(332)
		bool tmp3 = tmp2->reset;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(332)
		if ((tmp3)){
			HX_STACK_LINE(334)
			::flixel::FlxGame tmp4 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(334)
			tmp4->_resetGame = true;
		}
		HX_STACK_LINE(337)
		::org::wildrabbit::GameInput tmp4 = this->mInput;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(337)
		bool tmp5 = tmp4->togglePause;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(337)
		if ((tmp5)){
			HX_STACK_LINE(339)
			::flixel::_system::frontEnds::SoundFrontEnd tmp6 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(339)
			tmp6->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(HX_HCSTRING("assets/sounds/pause.wav","\xb5","\x45","\x09","\xae"),null(),null(),null(),null(),null());
			HX_STACK_LINE(340)
			bool tmp7 = this->mPause;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(340)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(340)
			this->mPause = tmp8;
			HX_STACK_LINE(341)
			::flixel::util::FlxTimerManager tmp9 = ::flixel::util::FlxTimer_obj::manager;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(341)
			bool tmp10 = this->mPause;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(341)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(341)
			tmp9->set_active(tmp11);
			HX_STACK_LINE(342)
			::flixel::tweens::FlxTweenManager tmp12 = ::flixel::tweens::FlxTween_obj::manager;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(342)
			bool tmp13 = this->mPause;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(342)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(342)
			tmp12->set_active(tmp14);
		}
		HX_STACK_LINE(345)
		::org::wildrabbit::GameInput tmp6 = this->mInput;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(345)
		bool tmp7 = tmp6->toggleMute;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(345)
		if ((tmp7)){
			HX_STACK_LINE(347)
			::flixel::_system::frontEnds::SoundFrontEnd tmp8 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(347)
			bool tmp9 = tmp8->__Field(HX_HCSTRING("muted","\x6b","\x8f","\x5b","\x10"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(347)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(347)
			::flixel::_system::frontEnds::SoundFrontEnd tmp11 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(347)
			tmp11->__FieldRef(HX_HCSTRING("muted","\x6b","\x8f","\x5b","\x10")) = tmp10;
		}
		HX_STACK_LINE(350)
		bool tmp8 = this->mPause;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(350)
		if ((tmp8)){
			HX_STACK_LINE(352)
			return null();
		}
		HX_STACK_LINE(354)
		Float tmp9 = elapsed;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(354)
		this->super::update(tmp9);
		HX_STACK_LINE(356)
		::flixel::text::FlxText tmp10 = this->mHealth;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(356)
		::org::wildrabbit::game::Ship tmp11 = this->mPlayerShip;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(356)
		Float tmp12 = tmp11->HP;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(356)
		::String tmp13 = (HX_HCSTRING("Health: ","\x62","\x76","\x08","\xc3") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(356)
		::String tmp14 = (tmp13 + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(356)
		::org::wildrabbit::game::Ship tmp15 = this->mPlayerShip;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(356)
		int tmp16 = tmp15->maxHealth;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(356)
		::String tmp17 = (tmp14 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(356)
		tmp10->set_text(tmp17);
		HX_STACK_LINE(357)
		::flixel::text::FlxText tmp18 = this->mEnergy;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(357)
		::org::wildrabbit::game::Ship tmp19 = this->mPlayerShip;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(357)
		int tmp20 = tmp19->mEnergy;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(357)
		::String tmp21 = (HX_HCSTRING("Energy: ","\x8e","\x59","\xfc","\x92") + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(357)
		::String tmp22 = (tmp21 + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(357)
		::org::wildrabbit::game::Ship tmp23 = this->mPlayerShip;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(357)
		int tmp24 = tmp23->mMaxEnergy;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(357)
		::String tmp25 = (tmp22 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(357)
		tmp18->set_text(tmp25);
		HX_STACK_LINE(358)
		::flixel::text::FlxText tmp26 = this->mLives;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(358)
		::org::wildrabbit::game::Ship tmp27 = this->mPlayerShip;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(358)
		int tmp28 = tmp27->mLives;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(358)
		::String tmp29 = (HX_HCSTRING("Lives: ","\x4d","\x9a","\x3a","\x88") + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(358)
		::String tmp30 = (tmp29 + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(358)
		::org::wildrabbit::game::Ship tmp31 = this->mPlayerShip;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(358)
		int tmp32 = tmp31->mStartLives;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(358)
		::String tmp33 = (tmp30 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(358)
		tmp26->set_text(tmp33);
		HX_STACK_LINE(359)
		::flixel::text::FlxText tmp34 = this->mScore;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(359)
		::org::wildrabbit::game::Ship tmp35 = this->mPlayerShip;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(359)
		int tmp36 = tmp35->mScore;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(359)
		::String tmp37 = (HX_HCSTRING("Score: ","\x58","\xc6","\xeb","\x45") + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(359)
		tmp34->set_text(tmp37);
		HX_STACK_LINE(360)
		::flixel::text::FlxText tmp38 = this->mMultiplierText;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(360)
		int tmp39 = this->mScoreMultiplier;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(360)
		::String tmp40 = (HX_HCSTRING("Current multiplier: ","\xce","\x4c","\xe0","\x4b") + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(360)
		tmp38->set_text(tmp40);
		HX_STACK_LINE(362)
		::org::wildrabbit::game::Ship tmp41 = this->mPlayerShip;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(362)
		Float tmp42 = tmp41->mPlayTime;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(362)
		::org::wildrabbit::game::Ship tmp43 = this->mPlayerShip;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(362)
		Float tmp44 = tmp43->mPlayTime;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(362)
		Float tmp45 = ::Math_obj::ffloor(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(362)
		Float tmp46 = (tmp42 - tmp45);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(362)
		Float remSecs = tmp46;		HX_STACK_VAR(remSecs,"remSecs");
		HX_STACK_LINE(363)
		Float tmp47 = (remSecs * (int)100);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(363)
		int tmp48 = ::Math_obj::floor(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(363)
		int cents = tmp48;		HX_STACK_VAR(cents,"cents");
		HX_STACK_LINE(364)
		::flixel::text::FlxText tmp49 = this->mPlaytime;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(364)
		::String tmp50;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(364)
		{
			HX_STACK_LINE(364)
			::org::wildrabbit::game::Ship tmp51 = this->mPlayerShip;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(364)
			Float Seconds = tmp51->mPlayTime;		HX_STACK_VAR(Seconds,"Seconds");
			HX_STACK_LINE(364)
			Float tmp52 = (Float(Seconds) / Float((int)60));		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(364)
			int tmp53 = ::Std_obj::_int(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(364)
			::String tmp54 = (tmp53 + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(364)
			::String timeString = tmp54;		HX_STACK_VAR(timeString,"timeString");
			HX_STACK_LINE(364)
			Float tmp55 = Seconds;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(364)
			int tmp56 = ::Std_obj::_int(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(364)
			int tmp57 = hx::Mod(tmp56,(int)60);		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(364)
			int timeStringHelper = tmp57;		HX_STACK_VAR(timeStringHelper,"timeStringHelper");
			HX_STACK_LINE(364)
			bool tmp58 = (timeStringHelper < (int)10);		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(364)
			if ((tmp58)){
				HX_STACK_LINE(364)
				hx::AddEq(timeString,HX_HCSTRING("0","\x30","\x00","\x00","\x00"));
			}
			HX_STACK_LINE(364)
			hx::AddEq(timeString,timeStringHelper);
			HX_STACK_LINE(364)
			{
				HX_STACK_LINE(364)
				hx::AddEq(timeString,HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));
				HX_STACK_LINE(364)
				Float tmp59 = Seconds;		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(364)
				Float tmp60 = Seconds;		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(364)
				int tmp61 = ::Std_obj::_int(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(364)
				Float tmp62 = (tmp59 - tmp61);		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(364)
				Float tmp63 = (tmp62 * (int)100);		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(364)
				int tmp64 = ::Std_obj::_int(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(364)
				timeStringHelper = tmp64;
				HX_STACK_LINE(364)
				bool tmp65 = (timeStringHelper < (int)10);		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(364)
				if ((tmp65)){
					HX_STACK_LINE(364)
					hx::AddEq(timeString,HX_HCSTRING("0","\x30","\x00","\x00","\x00"));
				}
				HX_STACK_LINE(364)
				hx::AddEq(timeString,timeStringHelper);
			}
			HX_STACK_LINE(364)
			tmp50 = timeString;
		}
		HX_STACK_LINE(364)
		::String tmp51 = (HX_HCSTRING("Playtime: ","\x07","\xfd","\xb1","\x87") + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(364)
		tmp49->set_text(tmp51);
		HX_STACK_LINE(366)
		::flixel::text::FlxText tmp52 = this->mBlasterHint;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(366)
		::org::wildrabbit::game::Ship tmp53 = this->mPlayerShip;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(366)
		int tmp54 = tmp53->mEnergy;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(366)
		::org::wildrabbit::game::Ship tmp55 = this->mPlayerShip;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(366)
		int tmp56 = tmp55->mMaxEnergy;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(366)
		bool tmp57 = (tmp54 == tmp56);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(366)
		int tmp58;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(366)
		if ((tmp57)){
			HX_STACK_LINE(366)
			tmp58 = (int)-16711681;
		}
		else{
			HX_STACK_LINE(366)
			tmp58 = (int)-1;
		}
		HX_STACK_LINE(366)
		tmp52->set_color(tmp58);
		HX_STACK_LINE(367)
		::flixel::text::FlxText tmp59 = this->mBlasterHint;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(367)
		::org::wildrabbit::game::Ship tmp60 = this->mPlayerShip;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(367)
		int tmp61 = tmp60->mEnergy;		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(367)
		::org::wildrabbit::game::Ship tmp62 = this->mPlayerShip;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(367)
		int tmp63 = tmp62->mMaxEnergy;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(367)
		bool tmp64 = (tmp61 == tmp63);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(367)
		::String tmp65;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(367)
		if ((tmp64)){
			HX_STACK_LINE(367)
			tmp65 = HX_HCSTRING("Blaster ready!!","\xe8","\xee","\xd2","\xdb");
		}
		else{
			HX_STACK_LINE(367)
			tmp65 = HX_HCSTRING("Blaster loading","\x61","\xe1","\xd7","\xe1");
		}
		HX_STACK_LINE(367)
		tmp59->set_text(tmp65);
		HX_STACK_LINE(370)
		::org::wildrabbit::game::Ship tmp66 = this->mPlayerShip;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(370)
		bool tmp67 = tmp66->alive;		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(370)
		bool tmp68 = !(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(370)
		if ((tmp68)){
			HX_STACK_LINE(370)
			return null();
		}
		HX_STACK_LINE(371)
		::flixel::group::FlxTypedGroup tmp69 = this->mBullets;		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(371)
		::flixel::group::FlxTypedGroup tmp70 = this->mEnemies;		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(371)
		Dynamic tmp71 = this->onBulletHit_dyn();		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(371)
		::flixel::FlxG_obj::overlap(tmp69,tmp70,tmp71,null());
		HX_STACK_LINE(372)
		::flixel::group::FlxTypedGroup tmp72 = this->mBullets;		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(372)
		::org::wildrabbit::game::Ship tmp73 = this->mPlayerShip;		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(372)
		Dynamic tmp74 = this->onBulletPlayerHit_dyn();		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(372)
		::flixel::FlxG_obj::overlap(tmp72,tmp73,tmp74,null());
		HX_STACK_LINE(373)
		::org::wildrabbit::game::Ship tmp75 = this->mPlayerShip;		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(373)
		::flixel::group::FlxTypedGroup tmp76 = this->mEnemies;		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(373)
		Dynamic tmp77 = this->onPlayerEnemyCollision_dyn();		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(373)
		::flixel::FlxG_obj::overlap(tmp75,tmp76,tmp77,null());
		HX_STACK_LINE(374)
		::org::wildrabbit::game::Ship tmp78 = this->mPlayerShip;		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(374)
		::flixel::group::FlxTypedGroup tmp79 = this->mPickups;		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(374)
		Dynamic tmp80 = this->onPlayerPickup_dyn();		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(374)
		::flixel::FlxG_obj::overlap(tmp78,tmp79,tmp80,null());
		HX_STACK_LINE(375)
		::flixel::group::FlxTypedGroup tmp81 = this->mEnemies;		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(375)
		::flixel::group::FlxTypedGroup tmp82 = this->mEnemies;		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(375)
		Dynamic tmp83 = ::flixel::FlxObject_obj::separate_dyn();		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(375)
		::flixel::FlxG_obj::overlap(tmp81,tmp82,null(),tmp83);
	}
return null();
}


Void PlayState_obj::onPlayerPickup( ::org::wildrabbit::game::Ship player,::org::wildrabbit::game::Pickup pickup){
{
		HX_STACK_FRAME("org.wildrabbit.PlayState","onPlayerPickup",0x4204fc2d,"org.wildrabbit.PlayState.onPlayerPickup","org/wildrabbit/PlayState.hx",380,0x711227e1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(player,"player")
		HX_STACK_ARG(pickup,"pickup")
		HX_STACK_LINE(380)
		pickup->onPicked();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,onPlayerPickup,(void))

Void PlayState_obj::onBulletHit( ::org::wildrabbit::game::BaseBullet bullet,::org::wildrabbit::game::Entity entity){
{
		HX_STACK_FRAME("org.wildrabbit.PlayState","onBulletHit",0x4b5746c1,"org.wildrabbit.PlayState.onBulletHit","org/wildrabbit/PlayState.hx",383,0x711227e1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bullet,"bullet")
		HX_STACK_ARG(entity,"entity")
		HX_STACK_LINE(384)
		::org::wildrabbit::game::Entity tmp = bullet->mOwner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(384)
		::org::wildrabbit::game::Ship tmp1 = this->mPlayerShip;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(384)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(384)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(384)
		if ((tmp2)){
			HX_STACK_LINE(384)
			::org::wildrabbit::game::Entity tmp4 = entity;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(384)
			::org::wildrabbit::game::Entity tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(384)
			tmp3 = ::Std_obj::is(tmp5,hx::ClassOf< ::org::wildrabbit::game::Enemy >());
		}
		else{
			HX_STACK_LINE(384)
			tmp3 = false;
		}
		HX_STACK_LINE(384)
		if ((tmp3)){
			HX_STACK_LINE(386)
			bullet->collided = true;
			HX_STACK_LINE(388)
			::org::wildrabbit::game::Enemy tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(388)
			tmp4 = hx::TCast< ::org::wildrabbit::game::Enemy >::cast(entity);
			HX_STACK_LINE(388)
			::org::wildrabbit::game::Enemy enemy = tmp4;		HX_STACK_VAR(enemy,"enemy");
			HX_STACK_LINE(389)
			bool tmp5 = (bullet->mShape != enemy->mShape);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(389)
			if ((tmp5)){
				HX_STACK_LINE(391)
				hx::SubEq(enemy->health,bullet->mOppositeDamage);
				HX_STACK_LINE(393)
				bool tmp6 = (enemy->health < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(393)
				if ((tmp6)){
					HX_STACK_LINE(395)
					enemy->health = (int)0;
				}
				HX_STACK_LINE(398)
				bool tmp7 = (enemy->health == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(398)
				if ((tmp7)){
					HX_STACK_LINE(400)
					enemy->onDestroyed();
				}
				else{
					HX_STACK_LINE(404)
					enemy->onHit();
				}
			}
			else{
				HX_STACK_LINE(409)
				bool tmp6 = (enemy->mNoHitSound != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(409)
				if ((tmp6)){
					HX_STACK_LINE(411)
					enemy->mNoHitSound->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(null());
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,onBulletHit,(void))

Void PlayState_obj::onBulletPlayerHit( ::org::wildrabbit::game::BaseBullet bullet,::org::wildrabbit::game::Ship entity){
{
		HX_STACK_FRAME("org.wildrabbit.PlayState","onBulletPlayerHit",0x2001ac60,"org.wildrabbit.PlayState.onBulletPlayerHit","org/wildrabbit/PlayState.hx",417,0x711227e1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bullet,"bullet")
		HX_STACK_ARG(entity,"entity")
		HX_STACK_LINE(418)
		::org::wildrabbit::game::BaseBullet tmp = bullet;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(418)
		bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::org::wildrabbit::game::EnemyBullet >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(418)
		if ((tmp1)){
			HX_STACK_LINE(420)
			bullet->collided = true;
			HX_STACK_LINE(421)
			int tmp2 = bullet->mShape;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(421)
			::org::wildrabbit::game::Ship tmp3 = this->mPlayerShip;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(421)
			int tmp4 = tmp3->mShape;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(421)
			bool tmp5 = (tmp2 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(421)
			if ((tmp5)){
				HX_STACK_LINE(423)
				::org::wildrabbit::game::Ship tmp6 = this->mPlayerShip;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(423)
				tmp6->absorbEnergy((int)5);
			}
			else{
				HX_STACK_LINE(427)
				::org::wildrabbit::game::BaseBullet tmp6 = bullet;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(427)
				this->playerTakesDamage(tmp6,(int)1);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,onBulletPlayerHit,(void))

Void PlayState_obj::playerTakesDamage( ::org::wildrabbit::game::Entity source,Float dmg){
{
		HX_STACK_FRAME("org.wildrabbit.PlayState","playerTakesDamage",0x1187b1e9,"org.wildrabbit.PlayState.playerTakesDamage","org/wildrabbit/PlayState.hx",433,0x711227e1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(dmg,"dmg")
		HX_STACK_LINE(434)
		::org::wildrabbit::game::Ship tmp = this->mPlayerShip;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(434)
		hx::SubEq(tmp->HP,dmg);
		HX_STACK_LINE(435)
		::org::wildrabbit::game::Ship tmp1 = this->mPlayerShip;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(435)
		Float tmp2 = tmp1->HP;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(435)
		bool tmp3 = (tmp2 < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(435)
		if ((tmp3)){
			HX_STACK_LINE(437)
			::org::wildrabbit::game::Ship tmp4 = this->mPlayerShip;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(437)
			tmp4->HP = (int)0;
		}
		HX_STACK_LINE(440)
		::org::wildrabbit::game::Ship tmp4 = this->mPlayerShip;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(440)
		Float tmp5 = tmp4->HP;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(440)
		bool tmp6 = (tmp5 == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(440)
		if ((tmp6)){
			HX_STACK_LINE(442)
			::org::wildrabbit::game::Ship tmp7 = this->mPlayerShip;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(442)
			tmp7->onDeath();
		}
		else{
			HX_STACK_LINE(446)
			::org::wildrabbit::game::Ship tmp7 = this->mPlayerShip;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(446)
			::org::wildrabbit::game::Entity tmp8 = source;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(446)
			tmp7->onHit(tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,playerTakesDamage,(void))

Void PlayState_obj::startEmitterParticles( ::org::wildrabbit::game::Entity entity){
{
		HX_STACK_FRAME("org.wildrabbit.PlayState","startEmitterParticles",0x2c07f410,"org.wildrabbit.PlayState.startEmitterParticles","org/wildrabbit/PlayState.hx",451,0x711227e1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(entity,"entity")
		HX_STACK_LINE(452)
		::String tmp = (HX_HCSTRING("beep ","\x72","\x6b","\x54","\xb0") + entity->mID);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(452)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("PlayState.hx","\x81","\x77","\x0d","\xb3"),452,HX_HCSTRING("org.wildrabbit.PlayState","\x9d","\xf8","\x1f","\x53"),HX_HCSTRING("startEmitterParticles","\xa1","\x80","\xf7","\x31"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(452)
		::haxe::Log_obj::trace(tmp,tmp1);
		HX_STACK_LINE(453)
		::flixel::group::FlxTypedGroup tmp2 = this->mDeathEmitters;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(453)
		::org::wildrabbit::FlxTimedEmitter tmp3 = tmp2->getFirstAvailable(null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(453)
		::org::wildrabbit::FlxTimedEmitter emitter = tmp3;		HX_STACK_VAR(emitter,"emitter");
		HX_STACK_LINE(454)
		bool tmp4 = (emitter != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(454)
		if ((tmp4)){
			HX_STACK_LINE(456)
			emitter->revive();
			HX_STACK_LINE(457)
			emitter->lifespan->set(((Float)0.15),((Float)0.3));
			HX_STACK_LINE(459)
			{
				HX_STACK_LINE(459)
				Float tmp5 = entity->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(459)
				Float tmp6 = entity->get_width();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(459)
				Float tmp7 = (Float(tmp6) / Float((int)2));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(459)
				Float tmp8 = (tmp5 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(459)
				Float X = tmp8;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(459)
				Float tmp9 = entity->y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(459)
				Float tmp10 = entity->get_height();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(459)
				Float tmp11 = (Float(tmp10) / Float((int)2));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(459)
				Float tmp12 = (tmp9 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(459)
				Float Y = tmp12;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(459)
				emitter->x = X;
				HX_STACK_LINE(459)
				emitter->y = Y;
			}
			HX_STACK_LINE(460)
			int tmp5 = entity->color;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(460)
			int tmp6 = entity->color;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(460)
			emitter->color->set(tmp5,tmp6,null(),null());
			HX_STACK_LINE(462)
			emitter->startTimed(((Float)0.5),true,((Float)0.1),(int)10,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayState_obj,startEmitterParticles,(void))

Void PlayState_obj::onPlayerEnemyCollision( ::org::wildrabbit::game::Ship player,::org::wildrabbit::game::Enemy enemy){
{
		HX_STACK_FRAME("org.wildrabbit.PlayState","onPlayerEnemyCollision",0x56f578bb,"org.wildrabbit.PlayState.onPlayerEnemyCollision","org/wildrabbit/PlayState.hx",467,0x711227e1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(player,"player")
		HX_STACK_ARG(enemy,"enemy")
		HX_STACK_LINE(468)
		::org::wildrabbit::game::Enemy tmp = enemy;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(468)
		this->playerTakesDamage(tmp,(int)1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,onPlayerEnemyCollision,(void))

Void PlayState_obj::onPlayerDied( ){
{
		HX_STACK_FRAME("org.wildrabbit.PlayState","onPlayerDied",0x38968f95,"org.wildrabbit.PlayState.onPlayerDied","org/wildrabbit/PlayState.hx",472,0x711227e1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(473)
		::flixel::util::FlxTimer tmp = this->mSpawnTimer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(473)
		tmp->cancel();
		HX_STACK_LINE(474)
		::org::wildrabbit::game::Ship tmp1 = this->mPlayerShip;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(474)
		tmp1->kill();
		HX_STACK_LINE(475)
		::org::wildrabbit::game::Ship tmp2 = this->mPlayerShip;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(475)
		this->remove(tmp2,null());
		HX_STACK_LINE(476)
		::org::wildrabbit::game::Ship tmp3 = this->mPlayerShip;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(476)
		::flixel::addons::effects::FlxTrail tmp4 = tmp3->get_trail();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(476)
		this->remove(tmp4,null());
		HX_STACK_LINE(477)
		::flixel::group::FlxTypedGroup tmp5 = this->mEnemies;		HX_STACK_VAR(tmp5,"tmp5");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 1; }
		Void run(::org::wildrabbit::game::Enemy e){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/wildrabbit/PlayState.hx",477,0x711227e1)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(477)
				e->onPlayerDied();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(477)
		tmp5->forEachAlive( Dynamic(new _Function_1_1()),null());
		HX_STACK_LINE(479)
		::org::wildrabbit::game::Ship tmp6 = this->mPlayerShip;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(479)
		::org::wildrabbit::Reg_obj::score = tmp6->mScore;
		HX_STACK_LINE(480)
		::org::wildrabbit::game::Ship tmp7 = this->mPlayerShip;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(480)
		int tmp8 = tmp7->mScore;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(480)
		int tmp9 = ::org::wildrabbit::Reg_obj::highScore;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(480)
		bool tmp10 = (tmp8 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(480)
		if ((tmp10)){
			HX_STACK_LINE(482)
			::org::wildrabbit::game::Ship tmp11 = this->mPlayerShip;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(482)
			::org::wildrabbit::Reg_obj::highScore = tmp11->mScore;
		}
		HX_STACK_LINE(485)
		::org::wildrabbit::game::Ship tmp11 = this->mPlayerShip;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(485)
		::org::wildrabbit::Reg_obj::time = tmp11->mPlayTime;
		HX_STACK_LINE(486)
		::org::wildrabbit::game::Ship tmp12 = this->mPlayerShip;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(486)
		Float tmp13 = tmp12->mPlayTime;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(486)
		Float tmp14 = ::org::wildrabbit::Reg_obj::maxTime;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(486)
		bool tmp15 = (tmp13 > tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(486)
		if ((tmp15)){
			HX_STACK_LINE(488)
			::org::wildrabbit::game::Ship tmp16 = this->mPlayerShip;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(488)
			::org::wildrabbit::Reg_obj::maxTime = tmp16->mPlayTime;
		}
		HX_STACK_LINE(491)
		::flixel::util::FlxTimer tmp16 = ::flixel::util::FlxTimer_obj::__new();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(491)
		::flixel::util::FlxTimer t = tmp16;		HX_STACK_VAR(t,"t");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_2)
		int __ArgCount() const { return 1; }
		Void run(::flixel::util::FlxTimer t1){
			HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","org/wildrabbit/PlayState.hx",492,0x711227e1)
			HX_STACK_ARG(t1,"t1")
			{
				HX_STACK_LINE(492)
				::org::wildrabbit::GameOverState tmp17 = ::org::wildrabbit::GameOverState_obj::__new(null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(492)
				::flixel::FlxState nextState = tmp17;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(492)
				::flixel::FlxGame tmp18 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(492)
				::flixel::FlxState tmp19 = nextState;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(492)
				bool tmp20 = tmp18->_state->switchTo(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(492)
				if ((tmp20)){
					HX_STACK_LINE(492)
					::flixel::FlxGame tmp21 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(492)
					tmp21->_requestedState = nextState;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(492)
		t->start(((Float)0.5), Dynamic(new _Function_1_2()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,onPlayerDied,(void))

Void PlayState_obj::onPlayerHit( ){
{
		HX_STACK_FRAME("org.wildrabbit.PlayState","onPlayerHit",0x39aa2b02,"org.wildrabbit.PlayState.onPlayerHit","org/wildrabbit/PlayState.hx",497,0x711227e1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(496)
		::org::wildrabbit::PlayState _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(498)
		::flixel::group::FlxTypedGroup tmp = this->mEnemies;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::org::wildrabbit::PlayState,_g)
		int __ArgCount() const { return 1; }
		Void run(::org::wildrabbit::game::Enemy e){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/wildrabbit/PlayState.hx",498,0x711227e1)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(498)
				::flixel::math::FlxPoint tmp1 = _g->mPlayerShip->getPosition(null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(498)
				e->onPlayerHit(tmp1);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(498)
		tmp->forEachAlive( Dynamic(new _Function_1_1(_g)),null());
		HX_STACK_LINE(499)
		this->mScoreMultiplier = (int)1;
		HX_STACK_LINE(500)
		int tmp1 = ::org::wildrabbit::PlayState_obj::KILLS_TO_MULTIPLIER;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(500)
		this->mToNextMultiplier = tmp1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,onPlayerHit,(void))

Void PlayState_obj::onPlayerBlast( ){
{
		HX_STACK_FRAME("org.wildrabbit.PlayState","onPlayerBlast",0x26529227,"org.wildrabbit.PlayState.onPlayerBlast","org/wildrabbit/PlayState.hx",504,0x711227e1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(505)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(505)
		tmp->shake(((Float)0.02),((Float)0.3),null(),null(),null());
		HX_STACK_LINE(506)
		::flixel::group::FlxTypedGroup tmp1 = this->mEnemies;		HX_STACK_VAR(tmp1,"tmp1");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 1; }
		Void run(::org::wildrabbit::game::Enemy e){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/wildrabbit/PlayState.hx",506,0x711227e1)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(506)
				e->health = (int)0;
				HX_STACK_LINE(506)
				e->onDestroyed();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(506)
		tmp1->forEachAlive( Dynamic(new _Function_1_1()),null());
		HX_STACK_LINE(507)
		::flixel::group::FlxTypedGroup tmp2 = this->mBullets;		HX_STACK_VAR(tmp2,"tmp2");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_2)
		int __ArgCount() const { return 1; }
		Void run(::org::wildrabbit::game::BaseBullet b){
			HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","org/wildrabbit/PlayState.hx",507,0x711227e1)
			HX_STACK_ARG(b,"b")
			{
				HX_STACK_LINE(507)
				::org::wildrabbit::game::BaseBullet tmp3 = b;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(507)
				bool tmp4 = ::Std_obj::is(tmp3,hx::ClassOf< ::org::wildrabbit::game::EnemyBullet >());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(507)
				if ((tmp4)){
					HX_STACK_LINE(507)
					b->collided = true;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(507)
		tmp2->forEachAlive( Dynamic(new _Function_1_2()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,onPlayerBlast,(void))

Void PlayState_obj::onEnemyKilled( ::org::wildrabbit::game::Enemy e){
{
		HX_STACK_FRAME("org.wildrabbit.PlayState","onEnemyKilled",0xd72c5175,"org.wildrabbit.PlayState.onEnemyKilled","org/wildrabbit/PlayState.hx",511,0x711227e1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(512)
		::org::wildrabbit::game::Ship tmp = this->mPlayerShip;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(512)
		(tmp->mKills)++;
		HX_STACK_LINE(513)
		int tmp1 = this->mScoreMultiplier;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(513)
		int tmp2 = ((int)5 * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(513)
		::org::wildrabbit::game::Ship tmp3 = this->mPlayerShip;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(513)
		hx::AddEq(tmp3->mScore,tmp2);
		HX_STACK_LINE(515)
		(this->mToNextMultiplier)--;
		HX_STACK_LINE(516)
		int tmp4 = this->mToNextMultiplier;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(516)
		bool tmp5 = (tmp4 == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(516)
		if ((tmp5)){
			HX_STACK_LINE(518)
			int tmp6 = ::org::wildrabbit::PlayState_obj::KILLS_TO_MULTIPLIER;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(518)
			this->mToNextMultiplier = tmp6;
			HX_STACK_LINE(519)
			int tmp7 = this->mScoreMultiplier;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(519)
			int tmp8 = (tmp7 + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(519)
			Float tmp9 = ::Math_obj::min(tmp8,(int)100);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(519)
			int tmp10 = ::Math_obj::floor(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(519)
			this->mScoreMultiplier = tmp10;
		}
		HX_STACK_LINE(522)
		(this->mToNextLife)--;
		HX_STACK_LINE(523)
		int tmp6 = this->mToNextLife;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(523)
		bool tmp7 = (tmp6 == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(523)
		if ((tmp7)){
			HX_STACK_LINE(525)
			bool tmp8 = this->spawnPickup((int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(525)
			if ((tmp8)){
				HX_STACK_LINE(527)
				bool tmp9 = this->isHardMode();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(527)
				int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(527)
				if ((tmp9)){
					HX_STACK_LINE(527)
					int tmp11 = ::org::wildrabbit::PlayState_obj::KILLS_TO_LIFE;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(527)
					tmp10 = ((int)2 * tmp11);
				}
				else{
					HX_STACK_LINE(527)
					tmp10 = ::org::wildrabbit::PlayState_obj::KILLS_TO_LIFE;
				}
				HX_STACK_LINE(527)
				this->mToNextLife = tmp10;
			}
		}
		HX_STACK_LINE(531)
		::flixel::math::FlxRandom tmp8 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(531)
		Float tmp9 = tmp8->_float((int)0,(int)100,null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(531)
		bool tmp10 = (tmp9 < (int)5);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(531)
		bool rndPickup = tmp10;		HX_STACK_VAR(rndPickup,"rndPickup");
		HX_STACK_LINE(532)
		bool tmp11 = rndPickup;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(532)
		if ((tmp11)){
			HX_STACK_LINE(534)
			::flixel::math::FlxRandom tmp12 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(534)
			int tmp13 = tmp12->_int((int)1,(int)4,null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(534)
			int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(534)
			tmp14 = hx::TCast< ::Int >::cast(tmp13);
			HX_STACK_LINE(534)
			int type = tmp14;		HX_STACK_VAR(type,"type");
			HX_STACK_LINE(535)
			::String tmp15 = (HX_HCSTRING("Picking up ","\x46","\x20","\xd3","\x0c") + type);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(535)
			Dynamic tmp16 = hx::SourceInfo(HX_HCSTRING("PlayState.hx","\x81","\x77","\x0d","\xb3"),535,HX_HCSTRING("org.wildrabbit.PlayState","\x9d","\xf8","\x1f","\x53"),HX_HCSTRING("onEnemyKilled","\x06","\x65","\x94","\xcf"));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(535)
			::haxe::Log_obj::trace(tmp15,tmp16);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayState_obj,onEnemyKilled,(void))

bool PlayState_obj::spawnPickup( int type){
	HX_STACK_FRAME("org.wildrabbit.PlayState","spawnPickup",0x30ab9cc6,"org.wildrabbit.PlayState.spawnPickup","org/wildrabbit/PlayState.hx",541,0x711227e1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(542)
	Dynamic tmp = this->onLife_dyn();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(542)
	cpp::ArrayBase PickupCallbacks = cpp::ArrayBase_obj::__new().Add(tmp);		HX_STACK_VAR(PickupCallbacks,"PickupCallbacks");
	HX_STACK_LINE(544)
	::flixel::group::FlxTypedGroup tmp1 = this->mPickups;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(544)
	::org::wildrabbit::game::Pickup tmp2 = tmp1->getFirstAvailable(hx::ClassOf< ::org::wildrabbit::game::Pickup >(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(544)
	::org::wildrabbit::game::Pickup p = tmp2;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(545)
	bool tmp3 = (p != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(545)
	if ((tmp3)){
		HX_STACK_LINE(547)
		::flixel::math::FlxPoint tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(547)
		{
			HX_STACK_LINE(547)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(547)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(547)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp5 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(547)
			::flixel::math::FlxPoint tmp6 = tmp5->get();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(547)
			Float tmp7 = X;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(547)
			Float tmp8 = Y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(547)
			::flixel::math::FlxPoint tmp9 = tmp6->set(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(547)
			::flixel::math::FlxPoint point = tmp9;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(547)
			point->_inPool = false;
			HX_STACK_LINE(547)
			tmp4 = point;
		}
		HX_STACK_LINE(547)
		::flixel::math::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(548)
		while((true)){
			HX_STACK_LINE(549)
			::flixel::math::FlxRandom tmp5 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(549)
			::org::wildrabbit::game::World tmp6 = this->mWorld;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(549)
			Float tmp7 = tmp6->mRadius;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(549)
			Float tmp8 = (tmp7 - (int)16);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(549)
			Float tmp9 = tmp5->_float((int)0,tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(549)
			Float d = tmp9;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(550)
			::flixel::math::FlxRandom tmp10 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(550)
			Float tmp11 = tmp10->_float((int)0,(int)360,null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(550)
			Float a = tmp11;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(551)
			Float tmp12 = d;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(551)
			Float tmp13 = a;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(551)
			::flixel::math::FlxPoint tmp14 = ::flixel::math::FlxAngle_obj::getCartesianCoords(tmp12,tmp13,null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(551)
			point = tmp14;
			HX_STACK_LINE(553)
			int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(553)
			{
				HX_STACK_LINE(553)
				::org::wildrabbit::game::Ship tmp16 = this->mPlayerShip;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(553)
				::flixel::FlxSprite Sprite = tmp16;		HX_STACK_VAR(Sprite,"Sprite");
				HX_STACK_LINE(553)
				Float tmp17 = Sprite->x;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(553)
				Float tmp18 = Sprite->origin->x;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(553)
				Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(553)
				Float tmp20 = point->x;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(553)
				Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(553)
				Float dx = tmp21;		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(553)
				Float tmp22 = Sprite->y;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(553)
				Float tmp23 = Sprite->origin->y;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(553)
				Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(553)
				Float tmp25 = point->y;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(553)
				Float tmp26 = (tmp24 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(553)
				Float dy = tmp26;		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(553)
				{
					HX_STACK_LINE(553)
					bool tmp27 = point->_weak;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(553)
					if ((tmp27)){
						HX_STACK_LINE(553)
						point->put();
					}
				}
				HX_STACK_LINE(553)
				Float tmp27 = (dx * dx);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(553)
				Float tmp28 = (dy * dy);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(553)
				Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(553)
				Float tmp30 = ::Math_obj::sqrt(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(553)
				tmp15 = ::Std_obj::_int(tmp30);
			}
			HX_STACK_LINE(553)
			::org::wildrabbit::game::Ship tmp16 = this->mPlayerShip;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(553)
			Float tmp17 = tmp16->get_width();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(553)
			Float tmp18 = (tmp17 * (int)4);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(553)
			bool tmp19 = (tmp15 < tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(553)
			bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(548)
			if ((tmp20)){
				HX_STACK_LINE(548)
				break;
			}
		}
		HX_STACK_LINE(555)
		int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(555)
		tmp5 = hx::TCast< ::Int >::cast(type);
		HX_STACK_LINE(555)
		int idx = tmp5;		HX_STACK_VAR(idx,"idx");
		HX_STACK_LINE(556)
		Float tmp6 = point->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(556)
		int tmp7 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(556)
		Float tmp8 = (Float(tmp7) / Float((int)2));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(556)
		Float tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(556)
		Float tmp10 = point->y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(556)
		int tmp11 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(556)
		Float tmp12 = (Float(tmp11) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(556)
		Float tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(556)
		Dynamic tmp14 = ::org::wildrabbit::PlayState_obj::PickupTypes->__GetItem(idx);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(556)
		int tmp15 = ::org::wildrabbit::PlayState_obj::PickupTypeKeys->__get(idx);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(556)
		int tmp16 = type;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(556)
		int tmp17 = ::org::wildrabbit::PlayState_obj::PickupColours->__get(idx);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(556)
		Dynamic tmp18 = PickupCallbacks->__GetItem(idx);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(556)
		p->init(tmp9,tmp13,tmp14,tmp15,tmp16,tmp17,tmp18);
		HX_STACK_LINE(558)
		point->put();
		HX_STACK_LINE(559)
		return true;
	}
	HX_STACK_LINE(561)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(PlayState_obj,spawnPickup,return )

Void PlayState_obj::onLife( ){
{
		HX_STACK_FRAME("org.wildrabbit.PlayState","onLife",0x3457756c,"org.wildrabbit.PlayState.onLife","org/wildrabbit/PlayState.hx",565,0x711227e1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(566)
		::org::wildrabbit::game::Ship tmp = this->mPlayerShip;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(566)
		(tmp->HP)++;
		HX_STACK_LINE(567)
		::org::wildrabbit::game::Ship tmp1 = this->mPlayerShip;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(567)
		Float tmp2 = tmp1->HP;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(567)
		::org::wildrabbit::game::Ship tmp3 = this->mPlayerShip;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(567)
		int tmp4 = tmp3->maxHealth;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(567)
		bool tmp5 = (tmp2 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(567)
		if ((tmp5)){
			HX_STACK_LINE(569)
			::org::wildrabbit::game::Ship tmp6 = this->mPlayerShip;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(569)
			::org::wildrabbit::game::Ship tmp7 = this->mPlayerShip;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(569)
			tmp7->HP = tmp6->maxHealth;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,onLife,(void))

Void PlayState_obj::onShapeShift( ){
{
		HX_STACK_FRAME("org.wildrabbit.PlayState","onShapeShift",0xf5ceda11,"org.wildrabbit.PlayState.onShapeShift","org/wildrabbit/PlayState.hx",575,0x711227e1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(575)
		this->updateShapeHint();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,onShapeShift,(void))

cpp::ArrayBase PlayState_obj::PickupTypes;

Array< int > PlayState_obj::PickupTypeKeys;

Array< int > PlayState_obj::PickupColours;

int PlayState_obj::MAX_BULLETS;

int PlayState_obj::MAX_ENEMIES;

int PlayState_obj::KILLS_TO_LIFE;

int PlayState_obj::KILLS_TO_MULTIPLIER;


PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(mWorld,"mWorld");
	HX_MARK_MEMBER_NAME(mPlayerShip,"mPlayerShip");
	HX_MARK_MEMBER_NAME(mBullets,"mBullets");
	HX_MARK_MEMBER_NAME(mPlayerWeapon,"mPlayerWeapon");
	HX_MARK_MEMBER_NAME(mEnemies,"mEnemies");
	HX_MARK_MEMBER_NAME(mPickups,"mPickups");
	HX_MARK_MEMBER_NAME(mSpawnDelay,"mSpawnDelay");
	HX_MARK_MEMBER_NAME(mSpawnTimer,"mSpawnTimer");
	HX_MARK_MEMBER_NAME(mHealth,"mHealth");
	HX_MARK_MEMBER_NAME(mEnergy,"mEnergy");
	HX_MARK_MEMBER_NAME(mLives,"mLives");
	HX_MARK_MEMBER_NAME(mScore,"mScore");
	HX_MARK_MEMBER_NAME(mPlaytime,"mPlaytime");
	HX_MARK_MEMBER_NAME(mMultiplierText,"mMultiplierText");
	HX_MARK_MEMBER_NAME(mBlasterHint,"mBlasterHint");
	HX_MARK_MEMBER_NAME(mScoreMultiplier,"mScoreMultiplier");
	HX_MARK_MEMBER_NAME(mToNextLife,"mToNextLife");
	HX_MARK_MEMBER_NAME(mToNextMultiplier,"mToNextMultiplier");
	HX_MARK_MEMBER_NAME(mPause,"mPause");
	HX_MARK_MEMBER_NAME(mDeathEmitters,"mDeathEmitters");
	HX_MARK_MEMBER_NAME(mInput,"mInput");
	HX_MARK_MEMBER_NAME(mHalo,"mHalo");
	HX_MARK_MEMBER_NAME(mPrev,"mPrev");
	HX_MARK_MEMBER_NAME(mCurrent,"mCurrent");
	HX_MARK_MEMBER_NAME(mNext,"mNext");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mWorld,"mWorld");
	HX_VISIT_MEMBER_NAME(mPlayerShip,"mPlayerShip");
	HX_VISIT_MEMBER_NAME(mBullets,"mBullets");
	HX_VISIT_MEMBER_NAME(mPlayerWeapon,"mPlayerWeapon");
	HX_VISIT_MEMBER_NAME(mEnemies,"mEnemies");
	HX_VISIT_MEMBER_NAME(mPickups,"mPickups");
	HX_VISIT_MEMBER_NAME(mSpawnDelay,"mSpawnDelay");
	HX_VISIT_MEMBER_NAME(mSpawnTimer,"mSpawnTimer");
	HX_VISIT_MEMBER_NAME(mHealth,"mHealth");
	HX_VISIT_MEMBER_NAME(mEnergy,"mEnergy");
	HX_VISIT_MEMBER_NAME(mLives,"mLives");
	HX_VISIT_MEMBER_NAME(mScore,"mScore");
	HX_VISIT_MEMBER_NAME(mPlaytime,"mPlaytime");
	HX_VISIT_MEMBER_NAME(mMultiplierText,"mMultiplierText");
	HX_VISIT_MEMBER_NAME(mBlasterHint,"mBlasterHint");
	HX_VISIT_MEMBER_NAME(mScoreMultiplier,"mScoreMultiplier");
	HX_VISIT_MEMBER_NAME(mToNextLife,"mToNextLife");
	HX_VISIT_MEMBER_NAME(mToNextMultiplier,"mToNextMultiplier");
	HX_VISIT_MEMBER_NAME(mPause,"mPause");
	HX_VISIT_MEMBER_NAME(mDeathEmitters,"mDeathEmitters");
	HX_VISIT_MEMBER_NAME(mInput,"mInput");
	HX_VISIT_MEMBER_NAME(mHalo,"mHalo");
	HX_VISIT_MEMBER_NAME(mPrev,"mPrev");
	HX_VISIT_MEMBER_NAME(mCurrent,"mCurrent");
	HX_VISIT_MEMBER_NAME(mNext,"mNext");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"mHalo") ) { return mHalo; }
		if (HX_FIELD_EQ(inName,"mPrev") ) { return mPrev; }
		if (HX_FIELD_EQ(inName,"mNext") ) { return mNext; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mWorld") ) { return mWorld; }
		if (HX_FIELD_EQ(inName,"mLives") ) { return mLives; }
		if (HX_FIELD_EQ(inName,"mScore") ) { return mScore; }
		if (HX_FIELD_EQ(inName,"mPause") ) { return mPause; }
		if (HX_FIELD_EQ(inName,"mInput") ) { return mInput; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"onLife") ) { return onLife_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mHealth") ) { return mHealth; }
		if (HX_FIELD_EQ(inName,"mEnergy") ) { return mEnergy; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mBullets") ) { return mBullets; }
		if (HX_FIELD_EQ(inName,"mEnemies") ) { return mEnemies; }
		if (HX_FIELD_EQ(inName,"mPickups") ) { return mPickups; }
		if (HX_FIELD_EQ(inName,"mCurrent") ) { return mCurrent; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mPlaytime") ) { return mPlaytime; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isHardMode") ) { return isHardMode_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mPlayerShip") ) { return mPlayerShip; }
		if (HX_FIELD_EQ(inName,"mSpawnDelay") ) { return mSpawnDelay; }
		if (HX_FIELD_EQ(inName,"mSpawnTimer") ) { return mSpawnTimer; }
		if (HX_FIELD_EQ(inName,"mToNextLife") ) { return mToNextLife; }
		if (HX_FIELD_EQ(inName,"onBulletHit") ) { return onBulletHit_dyn(); }
		if (HX_FIELD_EQ(inName,"onPlayerHit") ) { return onPlayerHit_dyn(); }
		if (HX_FIELD_EQ(inName,"spawnPickup") ) { return spawnPickup_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mBlasterHint") ) { return mBlasterHint; }
		if (HX_FIELD_EQ(inName,"onPlayerDied") ) { return onPlayerDied_dyn(); }
		if (HX_FIELD_EQ(inName,"onShapeShift") ) { return onShapeShift_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mPlayerWeapon") ) { return mPlayerWeapon; }
		if (HX_FIELD_EQ(inName,"onPlayerBlast") ) { return onPlayerBlast_dyn(); }
		if (HX_FIELD_EQ(inName,"onEnemyKilled") ) { return onEnemyKilled_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"mDeathEmitters") ) { return mDeathEmitters; }
		if (HX_FIELD_EQ(inName,"onSpawnTimeout") ) { return onSpawnTimeout_dyn(); }
		if (HX_FIELD_EQ(inName,"onPlayerPickup") ) { return onPlayerPickup_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"mMultiplierText") ) { return mMultiplierText; }
		if (HX_FIELD_EQ(inName,"updateShapeHint") ) { return updateShapeHint_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"mScoreMultiplier") ) { return mScoreMultiplier; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"mToNextMultiplier") ) { return mToNextMultiplier; }
		if (HX_FIELD_EQ(inName,"onBulletPlayerHit") ) { return onBulletPlayerHit_dyn(); }
		if (HX_FIELD_EQ(inName,"playerTakesDamage") ) { return playerTakesDamage_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"startEmitterParticles") ) { return startEmitterParticles_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"onPlayerEnemyCollision") ) { return onPlayerEnemyCollision_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool PlayState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"PickupTypes") ) { outValue = PickupTypes; return true;  }
		if (HX_FIELD_EQ(inName,"MAX_BULLETS") ) { outValue = MAX_BULLETS; return true;  }
		if (HX_FIELD_EQ(inName,"MAX_ENEMIES") ) { outValue = MAX_ENEMIES; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"PickupColours") ) { outValue = PickupColours; return true;  }
		if (HX_FIELD_EQ(inName,"KILLS_TO_LIFE") ) { outValue = KILLS_TO_LIFE; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"PickupTypeKeys") ) { outValue = PickupTypeKeys; return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"KILLS_TO_MULTIPLIER") ) { outValue = KILLS_TO_MULTIPLIER; return true;  }
	}
	return false;
}

Dynamic PlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"mHalo") ) { mHalo=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mPrev") ) { mPrev=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mNext") ) { mNext=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mWorld") ) { mWorld=inValue.Cast< ::org::wildrabbit::game::World >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mLives") ) { mLives=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mScore") ) { mScore=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mPause") ) { mPause=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mInput") ) { mInput=inValue.Cast< ::org::wildrabbit::GameInput >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mHealth") ) { mHealth=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mEnergy") ) { mEnergy=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mBullets") ) { mBullets=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mEnemies") ) { mEnemies=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mPickups") ) { mPickups=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mCurrent") ) { mCurrent=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mPlaytime") ) { mPlaytime=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mPlayerShip") ) { mPlayerShip=inValue.Cast< ::org::wildrabbit::game::Ship >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mSpawnDelay") ) { mSpawnDelay=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mSpawnTimer") ) { mSpawnTimer=inValue.Cast< ::flixel::util::FlxTimer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mToNextLife") ) { mToNextLife=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mBlasterHint") ) { mBlasterHint=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mPlayerWeapon") ) { mPlayerWeapon=inValue.Cast< ::flixel::addons::weapon::FlxTypedWeapon >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"mDeathEmitters") ) { mDeathEmitters=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"mMultiplierText") ) { mMultiplierText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"mScoreMultiplier") ) { mScoreMultiplier=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"mToNextMultiplier") ) { mToNextMultiplier=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PlayState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"PickupTypes") ) { PickupTypes=ioValue.Cast< cpp::ArrayBase >(); return true; }
		if (HX_FIELD_EQ(inName,"MAX_BULLETS") ) { MAX_BULLETS=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"MAX_ENEMIES") ) { MAX_ENEMIES=ioValue.Cast< int >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"PickupColours") ) { PickupColours=ioValue.Cast< Array< int > >(); return true; }
		if (HX_FIELD_EQ(inName,"KILLS_TO_LIFE") ) { KILLS_TO_LIFE=ioValue.Cast< int >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"PickupTypeKeys") ) { PickupTypeKeys=ioValue.Cast< Array< int > >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"KILLS_TO_MULTIPLIER") ) { KILLS_TO_MULTIPLIER=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("mWorld","\xa5","\x5a","\x78","\xf6"));
	outFields->push(HX_HCSTRING("mPlayerShip","\x8a","\x5a","\x79","\x84"));
	outFields->push(HX_HCSTRING("mBullets","\x04","\x27","\xbb","\x51"));
	outFields->push(HX_HCSTRING("mPlayerWeapon","\x2a","\xf1","\x5c","\x73"));
	outFields->push(HX_HCSTRING("mEnemies","\xb9","\x27","\xda","\xfa"));
	outFields->push(HX_HCSTRING("mPickups","\x8a","\x02","\x67","\x9c"));
	outFields->push(HX_HCSTRING("mSpawnDelay","\x15","\xe2","\xa3","\xe6"));
	outFields->push(HX_HCSTRING("mSpawnTimer","\x57","\xca","\xb2","\x1f"));
	outFields->push(HX_HCSTRING("mHealth","\xe9","\x2c","\x3e","\xe6"));
	outFields->push(HX_HCSTRING("mEnergy","\x15","\xad","\x70","\xe4"));
	outFields->push(HX_HCSTRING("mLives","\x5a","\xb4","\x1b","\x9d"));
	outFields->push(HX_HCSTRING("mScore","\xa5","\x37","\xed","\xa0"));
	outFields->push(HX_HCSTRING("mPlaytime","\x8e","\x75","\xb2","\xfc"));
	outFields->push(HX_HCSTRING("mMultiplierText","\x1b","\xce","\x14","\x95"));
	outFields->push(HX_HCSTRING("mBlasterHint","\xdf","\xbe","\xc0","\x03"));
	outFields->push(HX_HCSTRING("mScoreMultiplier","\x86","\x03","\x5d","\xbb"));
	outFields->push(HX_HCSTRING("mToNextLife","\xf7","\xfa","\x00","\x3b"));
	outFields->push(HX_HCSTRING("mToNextMultiplier","\xbc","\xff","\xc6","\xba"));
	outFields->push(HX_HCSTRING("mPause","\x49","\x9b","\x6b","\xe5"));
	outFields->push(HX_HCSTRING("mDeathEmitters","\xec","\xf9","\xb5","\x35"));
	outFields->push(HX_HCSTRING("mInput","\x5d","\x88","\x31","\xe6"));
	outFields->push(HX_HCSTRING("mHalo","\xc9","\x90","\x8e","\xf2"));
	outFields->push(HX_HCSTRING("mPrev","\x00","\x26","\xe5","\xf7"));
	outFields->push(HX_HCSTRING("mCurrent","\x4c","\x5b","\xaf","\xf3"));
	outFields->push(HX_HCSTRING("mNext","\x00","\xec","\x88","\xf6"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::org::wildrabbit::game::World*/ ,(int)offsetof(PlayState_obj,mWorld),HX_HCSTRING("mWorld","\xa5","\x5a","\x78","\xf6")},
	{hx::fsObject /*::org::wildrabbit::game::Ship*/ ,(int)offsetof(PlayState_obj,mPlayerShip),HX_HCSTRING("mPlayerShip","\x8a","\x5a","\x79","\x84")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(PlayState_obj,mBullets),HX_HCSTRING("mBullets","\x04","\x27","\xbb","\x51")},
	{hx::fsObject /*::flixel::addons::weapon::FlxTypedWeapon*/ ,(int)offsetof(PlayState_obj,mPlayerWeapon),HX_HCSTRING("mPlayerWeapon","\x2a","\xf1","\x5c","\x73")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(PlayState_obj,mEnemies),HX_HCSTRING("mEnemies","\xb9","\x27","\xda","\xfa")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(PlayState_obj,mPickups),HX_HCSTRING("mPickups","\x8a","\x02","\x67","\x9c")},
	{hx::fsFloat,(int)offsetof(PlayState_obj,mSpawnDelay),HX_HCSTRING("mSpawnDelay","\x15","\xe2","\xa3","\xe6")},
	{hx::fsObject /*::flixel::util::FlxTimer*/ ,(int)offsetof(PlayState_obj,mSpawnTimer),HX_HCSTRING("mSpawnTimer","\x57","\xca","\xb2","\x1f")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(PlayState_obj,mHealth),HX_HCSTRING("mHealth","\xe9","\x2c","\x3e","\xe6")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(PlayState_obj,mEnergy),HX_HCSTRING("mEnergy","\x15","\xad","\x70","\xe4")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(PlayState_obj,mLives),HX_HCSTRING("mLives","\x5a","\xb4","\x1b","\x9d")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(PlayState_obj,mScore),HX_HCSTRING("mScore","\xa5","\x37","\xed","\xa0")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(PlayState_obj,mPlaytime),HX_HCSTRING("mPlaytime","\x8e","\x75","\xb2","\xfc")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(PlayState_obj,mMultiplierText),HX_HCSTRING("mMultiplierText","\x1b","\xce","\x14","\x95")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(PlayState_obj,mBlasterHint),HX_HCSTRING("mBlasterHint","\xdf","\xbe","\xc0","\x03")},
	{hx::fsInt,(int)offsetof(PlayState_obj,mScoreMultiplier),HX_HCSTRING("mScoreMultiplier","\x86","\x03","\x5d","\xbb")},
	{hx::fsInt,(int)offsetof(PlayState_obj,mToNextLife),HX_HCSTRING("mToNextLife","\xf7","\xfa","\x00","\x3b")},
	{hx::fsInt,(int)offsetof(PlayState_obj,mToNextMultiplier),HX_HCSTRING("mToNextMultiplier","\xbc","\xff","\xc6","\xba")},
	{hx::fsBool,(int)offsetof(PlayState_obj,mPause),HX_HCSTRING("mPause","\x49","\x9b","\x6b","\xe5")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(PlayState_obj,mDeathEmitters),HX_HCSTRING("mDeathEmitters","\xec","\xf9","\xb5","\x35")},
	{hx::fsObject /*::org::wildrabbit::GameInput*/ ,(int)offsetof(PlayState_obj,mInput),HX_HCSTRING("mInput","\x5d","\x88","\x31","\xe6")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PlayState_obj,mHalo),HX_HCSTRING("mHalo","\xc9","\x90","\x8e","\xf2")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PlayState_obj,mPrev),HX_HCSTRING("mPrev","\x00","\x26","\xe5","\xf7")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PlayState_obj,mCurrent),HX_HCSTRING("mCurrent","\x4c","\x5b","\xaf","\xf3")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PlayState_obj,mNext),HX_HCSTRING("mNext","\x00","\xec","\x88","\xf6")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*cpp::ArrayBase*/ ,(void *) &PlayState_obj::PickupTypes,HX_HCSTRING("PickupTypes","\x3d","\x8d","\xbe","\x16")},
	{hx::fsObject /*Array< int >*/ ,(void *) &PlayState_obj::PickupTypeKeys,HX_HCSTRING("PickupTypeKeys","\x8a","\x1b","\x46","\x75")},
	{hx::fsObject /*Array< int >*/ ,(void *) &PlayState_obj::PickupColours,HX_HCSTRING("PickupColours","\x6b","\x50","\xef","\x23")},
	{hx::fsInt,(void *) &PlayState_obj::MAX_BULLETS,HX_HCSTRING("MAX_BULLETS","\xd6","\x5f","\x46","\xfc")},
	{hx::fsInt,(void *) &PlayState_obj::MAX_ENEMIES,HX_HCSTRING("MAX_ENEMIES","\x8b","\x60","\x65","\xa5")},
	{hx::fsInt,(void *) &PlayState_obj::KILLS_TO_LIFE,HX_HCSTRING("KILLS_TO_LIFE","\xf6","\x46","\xdd","\x45")},
	{hx::fsInt,(void *) &PlayState_obj::KILLS_TO_MULTIPLIER,HX_HCSTRING("KILLS_TO_MULTIPLIER","\xfb","\x80","\xd1","\x3a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("mWorld","\xa5","\x5a","\x78","\xf6"),
	HX_HCSTRING("mPlayerShip","\x8a","\x5a","\x79","\x84"),
	HX_HCSTRING("mBullets","\x04","\x27","\xbb","\x51"),
	HX_HCSTRING("mPlayerWeapon","\x2a","\xf1","\x5c","\x73"),
	HX_HCSTRING("mEnemies","\xb9","\x27","\xda","\xfa"),
	HX_HCSTRING("mPickups","\x8a","\x02","\x67","\x9c"),
	HX_HCSTRING("mSpawnDelay","\x15","\xe2","\xa3","\xe6"),
	HX_HCSTRING("mSpawnTimer","\x57","\xca","\xb2","\x1f"),
	HX_HCSTRING("mHealth","\xe9","\x2c","\x3e","\xe6"),
	HX_HCSTRING("mEnergy","\x15","\xad","\x70","\xe4"),
	HX_HCSTRING("mLives","\x5a","\xb4","\x1b","\x9d"),
	HX_HCSTRING("mScore","\xa5","\x37","\xed","\xa0"),
	HX_HCSTRING("mPlaytime","\x8e","\x75","\xb2","\xfc"),
	HX_HCSTRING("mMultiplierText","\x1b","\xce","\x14","\x95"),
	HX_HCSTRING("mBlasterHint","\xdf","\xbe","\xc0","\x03"),
	HX_HCSTRING("mScoreMultiplier","\x86","\x03","\x5d","\xbb"),
	HX_HCSTRING("mToNextLife","\xf7","\xfa","\x00","\x3b"),
	HX_HCSTRING("mToNextMultiplier","\xbc","\xff","\xc6","\xba"),
	HX_HCSTRING("mPause","\x49","\x9b","\x6b","\xe5"),
	HX_HCSTRING("mDeathEmitters","\xec","\xf9","\xb5","\x35"),
	HX_HCSTRING("mInput","\x5d","\x88","\x31","\xe6"),
	HX_HCSTRING("mHalo","\xc9","\x90","\x8e","\xf2"),
	HX_HCSTRING("mPrev","\x00","\x26","\xe5","\xf7"),
	HX_HCSTRING("mCurrent","\x4c","\x5b","\xaf","\xf3"),
	HX_HCSTRING("mNext","\x00","\xec","\x88","\xf6"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("updateShapeHint","\xff","\xc1","\x75","\x2f"),
	HX_HCSTRING("isHardMode","\xf8","\x91","\xca","\xd4"),
	HX_HCSTRING("onSpawnTimeout","\x65","\x11","\xa1","\x38"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("onPlayerPickup","\x7c","\x07","\xae","\xa4"),
	HX_HCSTRING("onBulletHit","\x12","\xa4","\xb0","\x34"),
	HX_HCSTRING("onBulletPlayerHit","\x71","\x5c","\x89","\x86"),
	HX_HCSTRING("playerTakesDamage","\xfa","\x61","\x0f","\x78"),
	HX_HCSTRING("startEmitterParticles","\xa1","\x80","\xf7","\x31"),
	HX_HCSTRING("onPlayerEnemyCollision","\x0a","\xeb","\xa0","\x82"),
	HX_HCSTRING("onPlayerDied","\x24","\xd9","\x6e","\x7d"),
	HX_HCSTRING("onPlayerHit","\x53","\x88","\x03","\x23"),
	HX_HCSTRING("onPlayerBlast","\xb8","\xa5","\xba","\x1e"),
	HX_HCSTRING("onEnemyKilled","\x06","\x65","\x94","\xcf"),
	HX_HCSTRING("spawnPickup","\x17","\xfa","\x04","\x1a"),
	HX_HCSTRING("onLife","\xbb","\x19","\x3d","\xea"),
	HX_HCSTRING("onShapeShift","\xa0","\x23","\xa7","\x3a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PlayState_obj::PickupTypes,"PickupTypes");
	HX_MARK_MEMBER_NAME(PlayState_obj::PickupTypeKeys,"PickupTypeKeys");
	HX_MARK_MEMBER_NAME(PlayState_obj::PickupColours,"PickupColours");
	HX_MARK_MEMBER_NAME(PlayState_obj::MAX_BULLETS,"MAX_BULLETS");
	HX_MARK_MEMBER_NAME(PlayState_obj::MAX_ENEMIES,"MAX_ENEMIES");
	HX_MARK_MEMBER_NAME(PlayState_obj::KILLS_TO_LIFE,"KILLS_TO_LIFE");
	HX_MARK_MEMBER_NAME(PlayState_obj::KILLS_TO_MULTIPLIER,"KILLS_TO_MULTIPLIER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PlayState_obj::PickupTypes,"PickupTypes");
	HX_VISIT_MEMBER_NAME(PlayState_obj::PickupTypeKeys,"PickupTypeKeys");
	HX_VISIT_MEMBER_NAME(PlayState_obj::PickupColours,"PickupColours");
	HX_VISIT_MEMBER_NAME(PlayState_obj::MAX_BULLETS,"MAX_BULLETS");
	HX_VISIT_MEMBER_NAME(PlayState_obj::MAX_ENEMIES,"MAX_ENEMIES");
	HX_VISIT_MEMBER_NAME(PlayState_obj::KILLS_TO_LIFE,"KILLS_TO_LIFE");
	HX_VISIT_MEMBER_NAME(PlayState_obj::KILLS_TO_MULTIPLIER,"KILLS_TO_MULTIPLIER");
};

#endif

hx::Class PlayState_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("PickupTypes","\x3d","\x8d","\xbe","\x16"),
	HX_HCSTRING("PickupTypeKeys","\x8a","\x1b","\x46","\x75"),
	HX_HCSTRING("PickupColours","\x6b","\x50","\xef","\x23"),
	HX_HCSTRING("MAX_BULLETS","\xd6","\x5f","\x46","\xfc"),
	HX_HCSTRING("MAX_ENEMIES","\x8b","\x60","\x65","\xa5"),
	HX_HCSTRING("KILLS_TO_LIFE","\xf6","\x46","\xdd","\x45"),
	HX_HCSTRING("KILLS_TO_MULTIPLIER","\xfb","\x80","\xd1","\x3a"),
	::String(null()) };

void PlayState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("org.wildrabbit.PlayState","\x9d","\xf8","\x1f","\x53");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PlayState_obj::__GetStatic;
	__mClass->mSetStaticField = &PlayState_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PlayState_obj >;
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

void PlayState_obj::__boot()
{
	PickupTypes= cpp::ArrayBase_obj::__new().Add(HX_HCSTRING("assets/images/pickups.png","\x67","\x4a","\xbf","\x8a"));
	PickupTypeKeys= Array_obj< int >::__new().Add((int)0);
struct _Function_0_1{
	inline static Array< int > Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/wildrabbit/PlayState.hx",68,0x711227e1)
		{
			HX_STACK_LINE(68)
			int tmp = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromHSB((int)0,((Float)0.9),((Float)0.8),null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(68)
			return Array_obj< int >::__new().Add(tmp);
		}
		return null();
	}
};
	PickupColours= _Function_0_1::Block();
	MAX_BULLETS= (int)70;
	MAX_ENEMIES= (int)25;
	KILLS_TO_LIFE= (int)10;
	KILLS_TO_MULTIPLIER= (int)20;
}

} // end namespace org
} // end namespace wildrabbit
