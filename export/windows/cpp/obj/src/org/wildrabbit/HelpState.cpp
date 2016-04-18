#include <hxcpp.h>

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
#ifndef INCLUDED_org_wildrabbit_HelpState
#include <org/wildrabbit/HelpState.h>
#endif
#ifndef INCLUDED_org_wildrabbit_PlayState
#include <org/wildrabbit/PlayState.h>
#endif
namespace org{
namespace wildrabbit{

Void HelpState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("org.wildrabbit.HelpState","new",0x7fd125a2,"org.wildrabbit.HelpState.new","org/wildrabbit/HelpState.hx",17,0xb5b841ae)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(17)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	super::__construct(tmp);
}
;
	return null();
}

//HelpState_obj::~HelpState_obj() { }

Dynamic HelpState_obj::__CreateEmpty() { return  new HelpState_obj; }
hx::ObjectPtr< HelpState_obj > HelpState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< HelpState_obj > _result_ = new HelpState_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic HelpState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HelpState_obj > _result_ = new HelpState_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void HelpState_obj::create( ){
{
		HX_STACK_FRAME("org.wildrabbit.HelpState","create",0x637546fa,"org.wildrabbit.HelpState.create","org/wildrabbit/HelpState.hx",34,0xb5b841ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		this->super::create();
		HX_STACK_LINE(36)
		::flixel::util::FlxTimer tmp = ::flixel::util::FlxTimer_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(36)
		this->pause = tmp;
		HX_STACK_LINE(37)
		this->i = (int)0;
		HX_STACK_LINE(38)
		this->allowExit = false;
		HX_STACK_LINE(40)
		::flixel::FlxSprite tmp1 = ::flixel::FlxSprite_obj::__new((int)0,(int)0,HX_HCSTRING("assets/images/howto.png","\xbb","\xae","\xdb","\xe4"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(40)
		this->msg1 = tmp1;
		HX_STACK_LINE(41)
		::flixel::FlxSprite tmp2 = this->msg1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(41)
		int tmp3 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(41)
		Float tmp4 = (Float(tmp3) / Float((int)2));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(41)
		::flixel::FlxSprite tmp5 = this->msg1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(41)
		Float tmp6 = tmp5->get_width();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(41)
		Float tmp7 = (Float(tmp6) / Float((int)2));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(41)
		Float tmp8 = (tmp4 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(41)
		int tmp9 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(41)
		Float tmp10 = (Float(tmp9) / Float((int)2));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(41)
		::flixel::FlxSprite tmp11 = this->msg1;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(41)
		Float tmp12 = tmp11->get_height();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(41)
		Float tmp13 = (Float(tmp12) / Float((int)2));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(41)
		Float tmp14 = (tmp10 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(41)
		tmp2->setPosition(tmp8,tmp14);
		HX_STACK_LINE(42)
		::flixel::FlxSprite tmp15 = ::flixel::FlxSprite_obj::__new((int)0,(int)0,HX_HCSTRING("assets/images/controls.png","\xdc","\xc2","\x2a","\x26"));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(42)
		this->msg2 = tmp15;
		HX_STACK_LINE(43)
		::flixel::FlxSprite tmp16 = this->msg2;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(43)
		int tmp17 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(43)
		Float tmp18 = (Float(tmp17) / Float((int)2));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(43)
		::flixel::FlxSprite tmp19 = this->msg2;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(43)
		Float tmp20 = tmp19->get_width();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(43)
		Float tmp21 = (Float(tmp20) / Float((int)2));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(43)
		Float tmp22 = (tmp18 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(43)
		int tmp23 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(43)
		Float tmp24 = (Float(tmp23) / Float((int)2));		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(43)
		::flixel::FlxSprite tmp25 = this->msg2;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(43)
		Float tmp26 = tmp25->get_height();		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(43)
		Float tmp27 = (Float(tmp26) / Float((int)2));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(43)
		Float tmp28 = (tmp24 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(43)
		tmp16->setPosition(tmp22,tmp28);
		HX_STACK_LINE(45)
		::flixel::util::FlxTimer tmp29 = this->pause;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(45)
		Dynamic tmp30 = this->onTimeout_dyn();		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(45)
		tmp29->start(((Float)0.6),tmp30,null());
		HX_STACK_LINE(46)
		::flixel::FlxSprite tmp31 = ::flixel::FlxSprite_obj::__new((int)0,(int)0,HX_HCSTRING("assets/images/bg_back.png","\x11","\x3a","\xef","\xa1"));		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(46)
		this->bg = tmp31;
		HX_STACK_LINE(47)
		::flixel::FlxSprite tmp32 = this->bg;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(47)
		this->add(tmp32);
		HX_STACK_LINE(48)
		int tmp33 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(48)
		Float tmp34 = (Float(tmp33) / Float((int)2));		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(48)
		int tmp35 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(48)
		::flixel::text::FlxText tmp36 = ::flixel::text::FlxText_obj::__new((int)0,tmp34,tmp35,HX_HCSTRING("PRESS ANY KEY TO START","\xcf","\xa1","\xfe","\xce"),null(),null());		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(48)
		this->hint = tmp36;
		HX_STACK_LINE(49)
		::flixel::text::FlxText tmp37 = this->hint;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(49)
		tmp37->set_alignment(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
		HX_STACK_LINE(50)
		::flixel::text::FlxText tmp38 = this->hint;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(50)
		tmp38->set_size((int)16);
		HX_STACK_LINE(51)
		::flixel::text::FlxText tmp39 = this->hint;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(51)
		tmp39->set_color((int)-16711936);
		HX_STACK_LINE(53)
		::flixel::FlxSprite tmp40 = this->msg1;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(53)
		this->add(tmp40);
		HX_STACK_LINE(54)
		::flixel::FlxSprite tmp41 = ::flixel::FlxSprite_obj::__new((int)0,(int)0,HX_HCSTRING("assets/images/bg_front.png","\x55","\x84","\x04","\x70"));		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(54)
		this->add(tmp41);
	}
return null();
}


Void HelpState_obj::onTimeout( ::flixel::util::FlxTimer t){
{
		HX_STACK_FRAME("org.wildrabbit.HelpState","onTimeout",0xc4d58604,"org.wildrabbit.HelpState.onTimeout","org/wildrabbit/HelpState.hx",59,0xb5b841ae)
		HX_STACK_THIS(this)
		HX_STACK_ARG(t,"t")
		HX_STACK_LINE(60)
		::flixel::text::FlxText tmp = this->hint;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(60)
		::flixel::math::FlxPoint tmp1 = tmp->scale;		HX_STACK_VAR(tmp1,"tmp1");
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/wildrabbit/HelpState.hx",60,0xb5b841ae)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , ((Float)1.1),false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , ((Float)1.1),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(60)
		Dynamic tmp2 = _Function_1_1::Block();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(60)
		Dynamic tmp3 = ::flixel::tweens::FlxEase_obj::circOut_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		struct _Function_1_2{
			inline static Dynamic Block( Dynamic &tmp3){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/wildrabbit/HelpState.hx",60,0xb5b841ae)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43") , tmp3,false);
					__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , (int)4,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(60)
		Dynamic tmp4 = _Function_1_2::Block(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(60)
		::flixel::tweens::misc::VarTween tmp5 = ::flixel::tweens::FlxTween_obj::tween(tmp1,tmp2,(int)1,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(60)
		this->tween = tmp5;
		HX_STACK_LINE(61)
		this->allowExit = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HelpState_obj,onTimeout,(void))

Void HelpState_obj::destroy( ){
{
		HX_STACK_FRAME("org.wildrabbit.HelpState","destroy",0xb6444b3c,"org.wildrabbit.HelpState.destroy","org/wildrabbit/HelpState.hx",69,0xb5b841ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(70)
		this->super::destroy();
		HX_STACK_LINE(71)
		::flixel::tweens::FlxTween tmp = this->tween;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(71)
		tmp->cancel();
		HX_STACK_LINE(72)
		this->tween = null();
		HX_STACK_LINE(73)
		::flixel::text::FlxText tmp1 = this->hint;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(73)
		this->remove(tmp1,null());
		HX_STACK_LINE(74)
		::flixel::FlxSprite tmp2 = this->bg;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(74)
		this->remove(tmp2,null());
		HX_STACK_LINE(75)
		this->hint = null();
		HX_STACK_LINE(76)
		this->bg = null();
	}
return null();
}


Void HelpState_obj::update( Float elapsed){
{
		HX_STACK_FRAME("org.wildrabbit.HelpState","update",0x6e6b6607,"org.wildrabbit.HelpState.update","org/wildrabbit/HelpState.hx",83,0xb5b841ae)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(84)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(84)
		this->super::update(tmp);
		HX_STACK_LINE(85)
		bool tmp1 = this->allowExit;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(85)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(85)
		if ((tmp1)){
			HX_STACK_LINE(85)
			::flixel::input::keyboard::FlxKeyboard tmp3 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(85)
			::flixel::input::keyboard::FlxKeyboard tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(85)
			bool tmp5 = tmp4->justPressed->__Field(HX_HCSTRING("get_ANY","\x63","\x5f","\xa6","\x26"), hx::paccDynamic )();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(85)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(85)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(85)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(85)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(85)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(85)
			if ((tmp10)){
				HX_STACK_LINE(85)
				::flixel::input::mouse::FlxMouse tmp11 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(85)
				::flixel::input::mouse::FlxMouse tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(85)
				::flixel::input::mouse::FlxMouse tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(85)
				int tmp14 = tmp13->_leftButton->current;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(85)
				int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(85)
				int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(85)
				tmp2 = (tmp16 == (int)2);
			}
			else{
				HX_STACK_LINE(85)
				tmp2 = true;
			}
		}
		else{
			HX_STACK_LINE(85)
			tmp2 = false;
		}
		HX_STACK_LINE(85)
		if ((tmp2)){
			HX_STACK_LINE(87)
			(this->i)++;
			HX_STACK_LINE(88)
			int tmp3 = this->i;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(88)
			bool tmp4 = (tmp3 == (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(88)
			if ((tmp4)){
				HX_STACK_LINE(90)
				::flixel::FlxSprite tmp5 = this->msg1;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(90)
				this->remove(tmp5,null());
				HX_STACK_LINE(91)
				::flixel::FlxSprite tmp6 = this->msg2;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(91)
				this->add(tmp6);
				HX_STACK_LINE(92)
				this->allowExit = false;
				HX_STACK_LINE(93)
				::flixel::util::FlxTimer tmp7 = this->pause;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(93)
				Dynamic tmp8 = this->onTimeout_dyn();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(93)
				tmp7->start(((Float)0.6),tmp8,null());
			}
			else{
				HX_STACK_LINE(95)
				int tmp5 = this->i;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(95)
				bool tmp6 = (tmp5 == (int)2);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(95)
				if ((tmp6)){
					HX_STACK_LINE(97)
					::flixel::FlxSprite tmp7 = this->msg2;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(97)
					this->remove(tmp7,null());
					HX_STACK_LINE(98)
					::flixel::text::FlxText tmp8 = this->hint;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(98)
					this->add(tmp8);
					HX_STACK_LINE(99)
					this->allowExit = false;
					HX_STACK_LINE(100)
					::flixel::util::FlxTimer tmp9 = this->pause;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(100)
					Dynamic tmp10 = this->onTimeout_dyn();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(100)
					tmp9->start(((Float)0.6),tmp10,null());
				}
				else{
					HX_STACK_LINE(102)
					int tmp7 = this->i;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(102)
					bool tmp8 = (tmp7 == (int)3);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(102)
					if ((tmp8)){
						HX_STACK_LINE(104)
						::org::wildrabbit::PlayState tmp9 = ::org::wildrabbit::PlayState_obj::__new(null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(104)
						::flixel::FlxState nextState = tmp9;		HX_STACK_VAR(nextState,"nextState");
						HX_STACK_LINE(104)
						::flixel::FlxGame tmp10 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(104)
						::flixel::FlxState tmp11 = nextState;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(104)
						bool tmp12 = tmp10->_state->switchTo(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(104)
						if ((tmp12)){
							HX_STACK_LINE(104)
							::flixel::FlxGame tmp13 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(104)
							tmp13->_requestedState = nextState;
						}
					}
				}
			}
		}
	}
return null();
}



HelpState_obj::HelpState_obj()
{
}

void HelpState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HelpState);
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(hint,"hint");
	HX_MARK_MEMBER_NAME(pause,"pause");
	HX_MARK_MEMBER_NAME(allowExit,"allowExit");
	HX_MARK_MEMBER_NAME(tween,"tween");
	HX_MARK_MEMBER_NAME(msg1,"msg1");
	HX_MARK_MEMBER_NAME(msg2,"msg2");
	HX_MARK_MEMBER_NAME(i,"i");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HelpState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(hint,"hint");
	HX_VISIT_MEMBER_NAME(pause,"pause");
	HX_VISIT_MEMBER_NAME(allowExit,"allowExit");
	HX_VISIT_MEMBER_NAME(tween,"tween");
	HX_VISIT_MEMBER_NAME(msg1,"msg1");
	HX_VISIT_MEMBER_NAME(msg2,"msg2");
	HX_VISIT_MEMBER_NAME(i,"i");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic HelpState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { return i; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return bg; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"hint") ) { return hint; }
		if (HX_FIELD_EQ(inName,"msg1") ) { return msg1; }
		if (HX_FIELD_EQ(inName,"msg2") ) { return msg2; }
		break;
	case 5:
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
		if (HX_FIELD_EQ(inName,"onTimeout") ) { return onTimeout_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic HelpState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { i=inValue.Cast< int >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"hint") ) { hint=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"msg1") ) { msg1=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"msg2") ) { msg2=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pause") ) { pause=inValue.Cast< ::flixel::util::FlxTimer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tween") ) { tween=inValue.Cast< ::flixel::tweens::FlxTween >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"allowExit") ) { allowExit=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HelpState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bg","\xc5","\x55","\x00","\x00"));
	outFields->push(HX_HCSTRING("hint","\x87","\x3d","\x0e","\x45"));
	outFields->push(HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"));
	outFields->push(HX_HCSTRING("allowExit","\x47","\x40","\x12","\xae"));
	outFields->push(HX_HCSTRING("tween","\x6b","\xaa","\x70","\x19"));
	outFields->push(HX_HCSTRING("msg1","\xd0","\xde","\x63","\x48"));
	outFields->push(HX_HCSTRING("msg2","\xd1","\xde","\x63","\x48"));
	outFields->push(HX_HCSTRING("i","\x69","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(HelpState_obj,bg),HX_HCSTRING("bg","\xc5","\x55","\x00","\x00")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(HelpState_obj,hint),HX_HCSTRING("hint","\x87","\x3d","\x0e","\x45")},
	{hx::fsObject /*::flixel::util::FlxTimer*/ ,(int)offsetof(HelpState_obj,pause),HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd")},
	{hx::fsBool,(int)offsetof(HelpState_obj,allowExit),HX_HCSTRING("allowExit","\x47","\x40","\x12","\xae")},
	{hx::fsObject /*::flixel::tweens::FlxTween*/ ,(int)offsetof(HelpState_obj,tween),HX_HCSTRING("tween","\x6b","\xaa","\x70","\x19")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(HelpState_obj,msg1),HX_HCSTRING("msg1","\xd0","\xde","\x63","\x48")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(HelpState_obj,msg2),HX_HCSTRING("msg2","\xd1","\xde","\x63","\x48")},
	{hx::fsInt,(int)offsetof(HelpState_obj,i),HX_HCSTRING("i","\x69","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bg","\xc5","\x55","\x00","\x00"),
	HX_HCSTRING("hint","\x87","\x3d","\x0e","\x45"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("allowExit","\x47","\x40","\x12","\xae"),
	HX_HCSTRING("tween","\x6b","\xaa","\x70","\x19"),
	HX_HCSTRING("msg1","\xd0","\xde","\x63","\x48"),
	HX_HCSTRING("msg2","\xd1","\xde","\x63","\x48"),
	HX_HCSTRING("i","\x69","\x00","\x00","\x00"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("onTimeout","\x42","\xd3","\xa1","\xb0"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HelpState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HelpState_obj::__mClass,"__mClass");
};

#endif

hx::Class HelpState_obj::__mClass;

void HelpState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("org.wildrabbit.HelpState","\xb0","\x6c","\x69","\x5b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HelpState_obj >;
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
