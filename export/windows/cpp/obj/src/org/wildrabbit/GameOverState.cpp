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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
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
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
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
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
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
#ifndef INCLUDED_org_wildrabbit_GameOverState
#include <org/wildrabbit/GameOverState.h>
#endif
#ifndef INCLUDED_org_wildrabbit_MenuState
#include <org/wildrabbit/MenuState.h>
#endif
#ifndef INCLUDED_org_wildrabbit_Reg
#include <org/wildrabbit/Reg.h>
#endif
namespace org{
namespace wildrabbit{

Void GameOverState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("org.wildrabbit.GameOverState","new",0x5102395d,"org.wildrabbit.GameOverState.new","org/wildrabbit/GameOverState.hx",18,0xad938e53)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(18)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	super::__construct(tmp);
}
;
	return null();
}

//GameOverState_obj::~GameOverState_obj() { }

Dynamic GameOverState_obj::__CreateEmpty() { return  new GameOverState_obj; }
hx::ObjectPtr< GameOverState_obj > GameOverState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< GameOverState_obj > _result_ = new GameOverState_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic GameOverState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GameOverState_obj > _result_ = new GameOverState_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void GameOverState_obj::create( ){
{
		HX_STACK_FRAME("org.wildrabbit.GameOverState","create",0xb18cfa1f,"org.wildrabbit.GameOverState.create","org/wildrabbit/GameOverState.hx",32,0xad938e53)
		HX_STACK_THIS(this)
		HX_STACK_LINE(31)
		::org::wildrabbit::GameOverState _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(33)
		this->super::create();
		HX_STACK_LINE(34)
		::flixel::util::FlxTimer tmp = ::flixel::util::FlxTimer_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		this->pause = tmp;
		HX_STACK_LINE(35)
		this->allowExit = false;
		HX_STACK_LINE(36)
		::flixel::util::FlxTimer tmp1 = this->pause;		HX_STACK_VAR(tmp1,"tmp1");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::org::wildrabbit::GameOverState,_g)
		int __ArgCount() const { return 1; }
		Void run(::flixel::util::FlxTimer t){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","org/wildrabbit/GameOverState.hx",37,0xad938e53)
			HX_STACK_ARG(t,"t")
			{
				HX_STACK_LINE(38)
				_g->hint->set_visible(true);
				HX_STACK_LINE(39)
				::flixel::math::FlxPoint tmp2 = _g->hint->scale;		HX_STACK_VAR(tmp2,"tmp2");
				struct _Function_2_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/wildrabbit/GameOverState.hx",39,0xad938e53)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , ((Float)1.1),false);
							__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , ((Float)1.1),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(39)
				Dynamic tmp3 = _Function_2_1::Block();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(39)
				Dynamic tmp4 = ::flixel::tweens::FlxEase_obj::circOut_dyn();		HX_STACK_VAR(tmp4,"tmp4");
				struct _Function_2_2{
					inline static Dynamic Block( Dynamic &tmp4){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/wildrabbit/GameOverState.hx",39,0xad938e53)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43") , tmp4,false);
							__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , (int)4,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(39)
				Dynamic tmp5 = _Function_2_2::Block(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(39)
				::flixel::tweens::misc::VarTween tmp6 = ::flixel::tweens::FlxTween_obj::tween(tmp2,tmp3,(int)1,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(39)
				_g->tween = tmp6;
				HX_STACK_LINE(40)
				_g->allowExit = true;
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(36)
		tmp1->start(((Float)0.5), Dynamic(new _Function_1_1(_g)),null());
		HX_STACK_LINE(43)
		::flixel::FlxSprite tmp2 = ::flixel::FlxSprite_obj::__new((int)0,(int)0,HX_HCSTRING("assets/images/bg_back.png","\x11","\x3a","\xef","\xa1"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(43)
		this->add(tmp2);
		HX_STACK_LINE(44)
		int tmp3 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(44)
		Float tmp4 = (Float(tmp3) / Float((int)2));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(44)
		int tmp5 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(44)
		::flixel::text::FlxText tmp6 = ::flixel::text::FlxText_obj::__new((int)0,tmp4,tmp5,HX_HCSTRING("THANKS FOR PLAYING!","\x61","\xcc","\x71","\x9a"),null(),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(44)
		this->hint = tmp6;
		HX_STACK_LINE(45)
		::flixel::text::FlxText tmp7 = this->hint;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(45)
		tmp7->set_alignment(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
		HX_STACK_LINE(46)
		::flixel::text::FlxText tmp8 = this->hint;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(46)
		tmp8->set_visible(false);
		HX_STACK_LINE(47)
		::flixel::text::FlxText tmp9 = this->hint;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(47)
		tmp9->set_size((int)14);
		HX_STACK_LINE(48)
		::flixel::text::FlxText tmp10 = this->hint;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(48)
		tmp10->set_color((int)-23296);
		HX_STACK_LINE(49)
		::flixel::text::FlxText tmp11 = this->hint;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(49)
		this->add(tmp11);
		HX_STACK_LINE(51)
		int tmp12 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(51)
		Float tmp13 = (Float(tmp12) / Float((int)2));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(51)
		Float tmp14 = (tmp13 + (int)20);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(51)
		int tmp15 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(51)
		int tmp16 = ::org::wildrabbit::Reg_obj::score;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(51)
		::String tmp17 = (HX_HCSTRING("Your score: ","\x2b","\x0b","\x70","\x2c") + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(51)
		::String tmp18 = (tmp17 + HX_HCSTRING(", Highest: ","\xb6","\x68","\x34","\xbd"));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(51)
		int tmp19 = ::org::wildrabbit::Reg_obj::highScore;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(51)
		::String tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(51)
		::flixel::text::FlxText tmp21 = ::flixel::text::FlxText_obj::__new((int)0,tmp14,tmp15,tmp20,(int)14,null());		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(51)
		::flixel::text::FlxText t = tmp21;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(52)
		t->set_alignment(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
		HX_STACK_LINE(53)
		::flixel::text::FlxText tmp22 = t;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(53)
		this->add(tmp22);
		HX_STACK_LINE(54)
		int tmp23 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(54)
		Float tmp24 = (Float(tmp23) / Float((int)2));		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(54)
		Float tmp25 = (tmp24 + (int)40);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(54)
		int tmp26 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(54)
		::String tmp27;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(54)
		{
			HX_STACK_LINE(54)
			Float tmp28 = ::org::wildrabbit::Reg_obj::time;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(54)
			Float Seconds = tmp28;		HX_STACK_VAR(Seconds,"Seconds");
			HX_STACK_LINE(54)
			Float tmp29 = (Float(Seconds) / Float((int)60));		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(54)
			int tmp30 = ::Std_obj::_int(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(54)
			::String tmp31 = (tmp30 + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(54)
			::String timeString = tmp31;		HX_STACK_VAR(timeString,"timeString");
			HX_STACK_LINE(54)
			Float tmp32 = Seconds;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(54)
			int tmp33 = ::Std_obj::_int(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(54)
			int tmp34 = hx::Mod(tmp33,(int)60);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(54)
			int timeStringHelper = tmp34;		HX_STACK_VAR(timeStringHelper,"timeStringHelper");
			HX_STACK_LINE(54)
			bool tmp35 = (timeStringHelper < (int)10);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(54)
			if ((tmp35)){
				HX_STACK_LINE(54)
				hx::AddEq(timeString,HX_HCSTRING("0","\x30","\x00","\x00","\x00"));
			}
			HX_STACK_LINE(54)
			hx::AddEq(timeString,timeStringHelper);
			HX_STACK_LINE(54)
			{
				HX_STACK_LINE(54)
				hx::AddEq(timeString,HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));
				HX_STACK_LINE(54)
				Float tmp36 = Seconds;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(54)
				Float tmp37 = Seconds;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(54)
				int tmp38 = ::Std_obj::_int(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(54)
				Float tmp39 = (tmp36 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(54)
				Float tmp40 = (tmp39 * (int)100);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(54)
				int tmp41 = ::Std_obj::_int(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(54)
				timeStringHelper = tmp41;
				HX_STACK_LINE(54)
				bool tmp42 = (timeStringHelper < (int)10);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(54)
				if ((tmp42)){
					HX_STACK_LINE(54)
					hx::AddEq(timeString,HX_HCSTRING("0","\x30","\x00","\x00","\x00"));
				}
				HX_STACK_LINE(54)
				hx::AddEq(timeString,timeStringHelper);
			}
			HX_STACK_LINE(54)
			tmp27 = timeString;
		}
		HX_STACK_LINE(54)
		::String tmp28 = (HX_HCSTRING("Your playtime: ","\x14","\x3e","\xa8","\x09") + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(54)
		::String tmp29 = (tmp28 + HX_HCSTRING(", Highest: ","\xb6","\x68","\x34","\xbd"));		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(54)
		::String tmp30;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(54)
		{
			HX_STACK_LINE(54)
			Float tmp31 = ::org::wildrabbit::Reg_obj::maxTime;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(54)
			Float Seconds = tmp31;		HX_STACK_VAR(Seconds,"Seconds");
			HX_STACK_LINE(54)
			Float tmp32 = (Float(Seconds) / Float((int)60));		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(54)
			int tmp33 = ::Std_obj::_int(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(54)
			::String tmp34 = (tmp33 + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(54)
			::String timeString = tmp34;		HX_STACK_VAR(timeString,"timeString");
			HX_STACK_LINE(54)
			Float tmp35 = Seconds;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(54)
			int tmp36 = ::Std_obj::_int(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(54)
			int tmp37 = hx::Mod(tmp36,(int)60);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(54)
			int timeStringHelper = tmp37;		HX_STACK_VAR(timeStringHelper,"timeStringHelper");
			HX_STACK_LINE(54)
			bool tmp38 = (timeStringHelper < (int)10);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(54)
			if ((tmp38)){
				HX_STACK_LINE(54)
				hx::AddEq(timeString,HX_HCSTRING("0","\x30","\x00","\x00","\x00"));
			}
			HX_STACK_LINE(54)
			hx::AddEq(timeString,timeStringHelper);
			HX_STACK_LINE(54)
			{
				HX_STACK_LINE(54)
				hx::AddEq(timeString,HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));
				HX_STACK_LINE(54)
				Float tmp39 = Seconds;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(54)
				Float tmp40 = Seconds;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(54)
				int tmp41 = ::Std_obj::_int(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(54)
				Float tmp42 = (tmp39 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(54)
				Float tmp43 = (tmp42 * (int)100);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(54)
				int tmp44 = ::Std_obj::_int(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(54)
				timeStringHelper = tmp44;
				HX_STACK_LINE(54)
				bool tmp45 = (timeStringHelper < (int)10);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(54)
				if ((tmp45)){
					HX_STACK_LINE(54)
					hx::AddEq(timeString,HX_HCSTRING("0","\x30","\x00","\x00","\x00"));
				}
				HX_STACK_LINE(54)
				hx::AddEq(timeString,timeStringHelper);
			}
			HX_STACK_LINE(54)
			tmp30 = timeString;
		}
		HX_STACK_LINE(54)
		::String tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(54)
		::flixel::text::FlxText tmp32 = ::flixel::text::FlxText_obj::__new((int)0,tmp25,tmp26,tmp31,(int)14,null());		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(54)
		t = tmp32;
		HX_STACK_LINE(55)
		t->set_alignment(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
		HX_STACK_LINE(56)
		::flixel::text::FlxText tmp33 = t;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(56)
		this->add(tmp33);
		HX_STACK_LINE(58)
		::flixel::FlxSprite tmp34 = ::flixel::FlxSprite_obj::__new((int)0,(int)0,HX_HCSTRING("assets/images/bg_front.png","\x55","\x84","\x04","\x70"));		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(58)
		this->add(tmp34);
		HX_STACK_LINE(59)
		{
			HX_STACK_LINE(59)
			::flixel::_system::frontEnds::SoundFrontEnd tmp35 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(59)
			::flixel::_system::FlxSound _this = tmp35->__Field(HX_HCSTRING("music","\xa5","\xd0","\x5a","\x10"), hx::paccDynamic );		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(59)
			bool tmp36 = _this->__Field(HX_HCSTRING("autoDestroy","\x4b","\xd1","\x69","\x0a"), hx::paccDynamic );		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(59)
			_this->__Field(HX_HCSTRING("cleanup","\x24","\x0c","\x42","\xab"), hx::paccDynamic )(tmp36,true,true);
			HX_STACK_LINE(59)
			_this;
		}
	}
return null();
}


::String GameOverState_obj::getFormat( Float secs){
	HX_STACK_FRAME("org.wildrabbit.GameOverState","getFormat",0x5207dd2a,"org.wildrabbit.GameOverState.getFormat","org/wildrabbit/GameOverState.hx",63,0xad938e53)
	HX_STACK_THIS(this)
	HX_STACK_ARG(secs,"secs")
	HX_STACK_LINE(64)
	Float tmp = secs;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	Float tmp1 = secs;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(64)
	Float tmp2 = ::Math_obj::ffloor(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(64)
	Float tmp3 = (tmp - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(64)
	Float remSecs = tmp3;		HX_STACK_VAR(remSecs,"remSecs");
	HX_STACK_LINE(65)
	Float tmp4 = (remSecs * (int)100);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(65)
	int tmp5 = ::Math_obj::floor(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(65)
	int cents = tmp5;		HX_STACK_VAR(cents,"cents");
	HX_STACK_LINE(66)
	Float tmp6 = secs;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(66)
	int tmp7 = ::Math_obj::floor(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(66)
	::String tmp8 = (tmp7 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(66)
	int tmp9 = cents;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(66)
	::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(66)
	::String tmp11 = (tmp10 + HX_HCSTRING("s","\x73","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(66)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC1(GameOverState_obj,getFormat,return )

Void GameOverState_obj::destroy( ){
{
		HX_STACK_FRAME("org.wildrabbit.GameOverState","destroy",0xbce95877,"org.wildrabbit.GameOverState.destroy","org/wildrabbit/GameOverState.hx",73,0xad938e53)
		HX_STACK_THIS(this)
		HX_STACK_LINE(74)
		this->super::destroy();
		HX_STACK_LINE(75)
		::flixel::tweens::FlxTween tmp = this->tween;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(75)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(75)
		if ((tmp1)){
			HX_STACK_LINE(77)
			::flixel::tweens::FlxTween tmp2 = this->tween;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(77)
			tmp2->cancel();
		}
		HX_STACK_LINE(79)
		::flixel::text::FlxText tmp2 = this->hint;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(79)
		this->remove(tmp2,null());
		HX_STACK_LINE(80)
		::flixel::FlxSprite tmp3 = this->bg;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(80)
		this->remove(tmp3,null());
		HX_STACK_LINE(81)
		this->hint = null();
		HX_STACK_LINE(82)
		this->bg = null();
	}
return null();
}


Void GameOverState_obj::update( Float elapsed){
{
		HX_STACK_FRAME("org.wildrabbit.GameOverState","update",0xbc83192c,"org.wildrabbit.GameOverState.update","org/wildrabbit/GameOverState.hx",89,0xad938e53)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(90)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(90)
		this->super::update(tmp);
		HX_STACK_LINE(91)
		bool tmp1 = this->allowExit;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(91)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(91)
		if ((tmp1)){
			HX_STACK_LINE(91)
			::flixel::input::keyboard::FlxKeyboard tmp3 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(91)
			::flixel::input::keyboard::FlxKeyboard tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(91)
			bool tmp5 = tmp4->justPressed->__Field(HX_HCSTRING("get_ANY","\x63","\x5f","\xa6","\x26"), hx::paccDynamic )();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(91)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(91)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(91)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(91)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(91)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(91)
			if ((tmp10)){
				HX_STACK_LINE(91)
				::flixel::input::mouse::FlxMouse tmp11 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(91)
				::flixel::input::mouse::FlxMouse tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(91)
				::flixel::input::mouse::FlxMouse tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(91)
				int tmp14 = tmp13->_leftButton->current;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(91)
				int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(91)
				int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(91)
				tmp2 = (tmp16 == (int)2);
			}
			else{
				HX_STACK_LINE(91)
				tmp2 = true;
			}
		}
		else{
			HX_STACK_LINE(91)
			tmp2 = false;
		}
		HX_STACK_LINE(91)
		if ((tmp2)){
			HX_STACK_LINE(93)
			::org::wildrabbit::MenuState tmp3 = ::org::wildrabbit::MenuState_obj::__new(null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(93)
			::flixel::FlxState nextState = tmp3;		HX_STACK_VAR(nextState,"nextState");
			HX_STACK_LINE(93)
			::flixel::FlxGame tmp4 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(93)
			::flixel::FlxState tmp5 = nextState;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(93)
			bool tmp6 = tmp4->_state->switchTo(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(93)
			if ((tmp6)){
				HX_STACK_LINE(93)
				::flixel::FlxGame tmp7 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(93)
				tmp7->_requestedState = nextState;
			}
		}
	}
return null();
}



GameOverState_obj::GameOverState_obj()
{
}

void GameOverState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameOverState);
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(title,"title");
	HX_MARK_MEMBER_NAME(hint,"hint");
	HX_MARK_MEMBER_NAME(pause,"pause");
	HX_MARK_MEMBER_NAME(allowExit,"allowExit");
	HX_MARK_MEMBER_NAME(tween,"tween");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameOverState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(title,"title");
	HX_VISIT_MEMBER_NAME(hint,"hint");
	HX_VISIT_MEMBER_NAME(pause,"pause");
	HX_VISIT_MEMBER_NAME(allowExit,"allowExit");
	HX_VISIT_MEMBER_NAME(tween,"tween");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic GameOverState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return bg; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"hint") ) { return hint; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { return title; }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause; }
		if (HX_FIELD_EQ(inName,"tween") ) { return tween; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"allowExit") ) { return allowExit; }
		if (HX_FIELD_EQ(inName,"getFormat") ) { return getFormat_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GameOverState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"hint") ) { hint=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { title=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pause") ) { pause=inValue.Cast< ::flixel::util::FlxTimer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tween") ) { tween=inValue.Cast< ::flixel::tweens::FlxTween >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"allowExit") ) { allowExit=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameOverState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bg","\xc5","\x55","\x00","\x00"));
	outFields->push(HX_HCSTRING("title","\x98","\x15","\x3b","\x10"));
	outFields->push(HX_HCSTRING("hint","\x87","\x3d","\x0e","\x45"));
	outFields->push(HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"));
	outFields->push(HX_HCSTRING("allowExit","\x47","\x40","\x12","\xae"));
	outFields->push(HX_HCSTRING("tween","\x6b","\xaa","\x70","\x19"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(GameOverState_obj,bg),HX_HCSTRING("bg","\xc5","\x55","\x00","\x00")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(GameOverState_obj,title),HX_HCSTRING("title","\x98","\x15","\x3b","\x10")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(GameOverState_obj,hint),HX_HCSTRING("hint","\x87","\x3d","\x0e","\x45")},
	{hx::fsObject /*::flixel::util::FlxTimer*/ ,(int)offsetof(GameOverState_obj,pause),HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd")},
	{hx::fsBool,(int)offsetof(GameOverState_obj,allowExit),HX_HCSTRING("allowExit","\x47","\x40","\x12","\xae")},
	{hx::fsObject /*::flixel::tweens::FlxTween*/ ,(int)offsetof(GameOverState_obj,tween),HX_HCSTRING("tween","\x6b","\xaa","\x70","\x19")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bg","\xc5","\x55","\x00","\x00"),
	HX_HCSTRING("title","\x98","\x15","\x3b","\x10"),
	HX_HCSTRING("hint","\x87","\x3d","\x0e","\x45"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("allowExit","\x47","\x40","\x12","\xae"),
	HX_HCSTRING("tween","\x6b","\xaa","\x70","\x19"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("getFormat","\x6d","\x18","\xe5","\x79"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameOverState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameOverState_obj::__mClass,"__mClass");
};

#endif

hx::Class GameOverState_obj::__mClass;

void GameOverState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("org.wildrabbit.GameOverState","\xeb","\x46","\x01","\x42");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GameOverState_obj >;
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

} // end namespace org
} // end namespace wildrabbit
