#include <hxcpp.h>

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
#ifndef INCLUDED_flixel_math_FlxAngle
#include <flixel/math/FlxAngle.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_org_wildrabbit_GameInput
#include <org/wildrabbit/GameInput.h>
#endif
#ifndef INCLUDED_org_wildrabbit_game_Entity
#include <org/wildrabbit/game/Entity.h>
#endif
namespace org{
namespace wildrabbit{

Void GameInput_obj::__construct()
{
HX_STACK_FRAME("org.wildrabbit.GameInput","new",0x554174ca,"org.wildrabbit.GameInput.new","org/wildrabbit/GameInput.hx",34,0x879c0f86)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//GameInput_obj::~GameInput_obj() { }

Dynamic GameInput_obj::__CreateEmpty() { return  new GameInput_obj; }
hx::ObjectPtr< GameInput_obj > GameInput_obj::__new()
{  hx::ObjectPtr< GameInput_obj > _result_ = new GameInput_obj();
	_result_->__construct();
	return _result_;}

Dynamic GameInput_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GameInput_obj > _result_ = new GameInput_obj();
	_result_->__construct();
	return _result_;}

Void GameInput_obj::gatherInputs( ::org::wildrabbit::game::Entity player){
{
		HX_STACK_FRAME("org.wildrabbit.GameInput","gatherInputs",0x7b2857da,"org.wildrabbit.GameInput.gatherInputs","org/wildrabbit/GameInput.hx",39,0x879c0f86)
		HX_STACK_THIS(this)
		HX_STACK_ARG(player,"player")
		HX_STACK_LINE(40)
		Float tmp = this->yValue = (int)0;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(40)
		this->xValue = tmp;
		HX_STACK_LINE(41)
		bool tmp1 = this->reset = false;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(41)
		bool tmp2 = this->blast = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(41)
		bool tmp3 = this->shoot = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(41)
		bool tmp4 = this->prev = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(41)
		this->next = tmp4;
		HX_STACK_LINE(42)
		this->gamepadEnabled = false;
		HX_STACK_LINE(67)
		bool tmp5 = this->gamepadEnabled;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(67)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(67)
		if ((tmp6)){
			HX_STACK_LINE(69)
			::org::wildrabbit::game::Entity tmp7 = player;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(69)
			Float tmp8 = ::flixel::math::FlxAngle_obj::angleBetweenMouse(tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(69)
			this->aimDirection = tmp8;
		}
		HX_STACK_LINE(72)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(72)
		{
			HX_STACK_LINE(72)
			::flixel::input::keyboard::FlxKeyboard tmp8 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(72)
			::flixel::input::keyboard::FlxKeyList _this = tmp8->justReleased;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(72)
			int tmp9 = _this->status;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(72)
			tmp7 = _this->keyManager->checkStatus((int)77,tmp9);
		}
		HX_STACK_LINE(72)
		this->toggleMute = tmp7;
		HX_STACK_LINE(73)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(73)
		{
			HX_STACK_LINE(73)
			::flixel::input::keyboard::FlxKeyboard tmp9 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(73)
			::flixel::input::keyboard::FlxKeyboard tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(73)
			::flixel::input::keyboard::FlxKeyList _this = tmp10->justReleased;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(73)
			int tmp11 = _this->status;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(73)
			int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(73)
			tmp8 = _this->keyManager->checkStatus((int)80,tmp12);
		}
		HX_STACK_LINE(73)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(73)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(73)
		if ((tmp9)){
			HX_STACK_LINE(73)
			::flixel::input::keyboard::FlxKeyboard tmp11 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(73)
			::flixel::input::keyboard::FlxKeyboard tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(73)
			::flixel::input::keyboard::FlxKeyList _this = tmp12->justReleased;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(73)
			int tmp13 = _this->status;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(73)
			int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(73)
			tmp10 = _this->keyManager->checkStatus((int)27,tmp14);
		}
		else{
			HX_STACK_LINE(73)
			tmp10 = true;
		}
		HX_STACK_LINE(73)
		this->togglePause = tmp10;
		HX_STACK_LINE(74)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(74)
		{
			HX_STACK_LINE(74)
			::flixel::input::keyboard::FlxKeyboard tmp12 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(74)
			::flixel::input::keyboard::FlxKeyboard tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(74)
			::flixel::input::keyboard::FlxKeyList _this = tmp13->pressed;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(74)
			int tmp14 = _this->status;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(74)
			int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(74)
			tmp11 = _this->keyManager->checkStatus((int)65,tmp15);
		}
		HX_STACK_LINE(74)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(74)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(74)
		if ((tmp12)){
			HX_STACK_LINE(74)
			::flixel::input::keyboard::FlxKeyboard tmp14 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(74)
			::flixel::input::keyboard::FlxKeyboard tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(74)
			::flixel::input::keyboard::FlxKeyList _this = tmp15->pressed;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(74)
			int tmp16 = _this->status;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(74)
			int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(74)
			tmp13 = _this->keyManager->checkStatus((int)37,tmp17);
		}
		else{
			HX_STACK_LINE(74)
			tmp13 = true;
		}
		HX_STACK_LINE(74)
		if ((tmp13)){
			HX_STACK_LINE(76)
			this->xValue = (int)-1;
		}
		else{
			HX_STACK_LINE(78)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(78)
			{
				HX_STACK_LINE(78)
				::flixel::input::keyboard::FlxKeyboard tmp15 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(78)
				::flixel::input::keyboard::FlxKeyboard tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(78)
				::flixel::input::keyboard::FlxKeyList _this = tmp16->pressed;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(78)
				int tmp17 = _this->status;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(78)
				int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(78)
				tmp14 = _this->keyManager->checkStatus((int)68,tmp18);
			}
			HX_STACK_LINE(78)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(78)
			bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(78)
			if ((tmp15)){
				HX_STACK_LINE(78)
				::flixel::input::keyboard::FlxKeyboard tmp17 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(78)
				::flixel::input::keyboard::FlxKeyboard tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(78)
				::flixel::input::keyboard::FlxKeyList _this = tmp18->pressed;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(78)
				int tmp19 = _this->status;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(78)
				int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(78)
				tmp16 = _this->keyManager->checkStatus((int)39,tmp20);
			}
			else{
				HX_STACK_LINE(78)
				tmp16 = true;
			}
			HX_STACK_LINE(78)
			if ((tmp16)){
				HX_STACK_LINE(80)
				this->xValue = (int)1;
			}
		}
		HX_STACK_LINE(82)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(82)
		{
			HX_STACK_LINE(82)
			::flixel::input::keyboard::FlxKeyboard tmp15 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(82)
			::flixel::input::keyboard::FlxKeyboard tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(82)
			::flixel::input::keyboard::FlxKeyList _this = tmp16->pressed;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(82)
			int tmp17 = _this->status;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(82)
			int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(82)
			tmp14 = _this->keyManager->checkStatus((int)83,tmp18);
		}
		HX_STACK_LINE(82)
		bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(82)
		bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(82)
		if ((tmp15)){
			HX_STACK_LINE(82)
			::flixel::input::keyboard::FlxKeyboard tmp17 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(82)
			::flixel::input::keyboard::FlxKeyboard tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(82)
			::flixel::input::keyboard::FlxKeyList _this = tmp18->pressed;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(82)
			int tmp19 = _this->status;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(82)
			int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(82)
			tmp16 = _this->keyManager->checkStatus((int)40,tmp20);
		}
		else{
			HX_STACK_LINE(82)
			tmp16 = true;
		}
		HX_STACK_LINE(82)
		if ((tmp16)){
			HX_STACK_LINE(84)
			this->yValue = (int)1;
		}
		else{
			HX_STACK_LINE(86)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(86)
			{
				HX_STACK_LINE(86)
				::flixel::input::keyboard::FlxKeyboard tmp18 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(86)
				::flixel::input::keyboard::FlxKeyboard tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(86)
				::flixel::input::keyboard::FlxKeyList _this = tmp19->pressed;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(86)
				int tmp20 = _this->status;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(86)
				int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(86)
				tmp17 = _this->keyManager->checkStatus((int)87,tmp21);
			}
			HX_STACK_LINE(86)
			bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(86)
			bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(86)
			if ((tmp18)){
				HX_STACK_LINE(86)
				::flixel::input::keyboard::FlxKeyboard tmp20 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(86)
				::flixel::input::keyboard::FlxKeyboard tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(86)
				::flixel::input::keyboard::FlxKeyList _this = tmp21->pressed;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(86)
				int tmp22 = _this->status;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(86)
				int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(86)
				tmp19 = _this->keyManager->checkStatus((int)38,tmp23);
			}
			else{
				HX_STACK_LINE(86)
				tmp19 = true;
			}
			HX_STACK_LINE(86)
			if ((tmp19)){
				HX_STACK_LINE(88)
				this->yValue = (int)-1;
			}
		}
		HX_STACK_LINE(91)
		bool tmp17 = this->prev;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(91)
		bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(91)
		if ((tmp18)){
			HX_STACK_LINE(91)
			bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(91)
			{
				HX_STACK_LINE(91)
				::flixel::input::keyboard::FlxKeyboard tmp20 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(91)
				::flixel::input::keyboard::FlxKeyboard tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(91)
				::flixel::input::keyboard::FlxKeyList _this = tmp21->justPressed;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(91)
				int tmp22 = _this->status;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(91)
				int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(91)
				tmp19 = _this->keyManager->checkStatus((int)81,tmp23);
			}
			HX_STACK_LINE(91)
			bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(91)
			bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(91)
			if ((tmp20)){
				HX_STACK_LINE(91)
				::flixel::input::mouse::FlxMouse tmp22 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(91)
				::flixel::input::mouse::FlxMouse tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(91)
				int tmp24 = tmp23->wheel;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(91)
				tmp21 = (tmp24 < (int)0);
			}
			else{
				HX_STACK_LINE(91)
				tmp21 = true;
			}
			HX_STACK_LINE(91)
			this->prev = tmp21;
		}
		HX_STACK_LINE(92)
		bool tmp19 = this->next;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(92)
		bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(92)
		if ((tmp20)){
			HX_STACK_LINE(92)
			bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(92)
			{
				HX_STACK_LINE(92)
				::flixel::input::keyboard::FlxKeyboard tmp22 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(92)
				::flixel::input::keyboard::FlxKeyboard tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(92)
				::flixel::input::keyboard::FlxKeyList _this = tmp23->justPressed;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(92)
				int tmp24 = _this->status;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(92)
				int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(92)
				tmp21 = _this->keyManager->checkStatus((int)69,tmp25);
			}
			HX_STACK_LINE(92)
			bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(92)
			bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(92)
			if ((tmp22)){
				HX_STACK_LINE(92)
				::flixel::input::mouse::FlxMouse tmp24 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(92)
				::flixel::input::mouse::FlxMouse tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(92)
				int tmp26 = tmp25->wheel;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(92)
				tmp23 = (tmp26 > (int)0);
			}
			else{
				HX_STACK_LINE(92)
				tmp23 = true;
			}
			HX_STACK_LINE(92)
			this->next = tmp23;
		}
		HX_STACK_LINE(93)
		bool tmp21 = this->blast;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(93)
		bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(93)
		if ((tmp22)){
			HX_STACK_LINE(93)
			bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(93)
			{
				HX_STACK_LINE(93)
				::flixel::input::keyboard::FlxKeyboard tmp24 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(93)
				::flixel::input::keyboard::FlxKeyboard tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(93)
				::flixel::input::keyboard::FlxKeyList _this = tmp25->justPressed;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(93)
				int tmp26 = _this->status;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(93)
				int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(93)
				tmp23 = _this->keyManager->checkStatus((int)32,tmp27);
			}
			HX_STACK_LINE(93)
			bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(93)
			bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(93)
			if ((tmp24)){
				HX_STACK_LINE(93)
				::flixel::input::mouse::FlxMouse tmp26 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(93)
				::flixel::input::mouse::FlxMouse tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(93)
				int tmp28 = tmp27->_rightButton->current;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(93)
				int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(93)
				tmp25 = (tmp29 == (int)2);
			}
			else{
				HX_STACK_LINE(93)
				tmp25 = true;
			}
			HX_STACK_LINE(93)
			this->blast = tmp25;
		}
		HX_STACK_LINE(94)
		bool tmp23 = this->shoot;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(94)
		bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(94)
		if ((tmp24)){
			HX_STACK_LINE(94)
			bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(94)
			{
				HX_STACK_LINE(94)
				::flixel::input::mouse::FlxMouse tmp26 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(94)
				::flixel::input::mouse::FlxMouseButton _this = tmp26->_leftButton;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(94)
				bool tmp27 = (_this->current == (int)1);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(94)
				bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(94)
				if ((tmp28)){
					HX_STACK_LINE(94)
					tmp25 = (_this->current == (int)2);
				}
				else{
					HX_STACK_LINE(94)
					tmp25 = true;
				}
			}
			HX_STACK_LINE(94)
			this->shoot = tmp25;
		}
		HX_STACK_LINE(95)
		bool tmp25 = this->reset;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(95)
		bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(95)
		if ((tmp26)){
			HX_STACK_LINE(95)
			bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(95)
			{
				HX_STACK_LINE(95)
				::flixel::input::keyboard::FlxKeyboard tmp28 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(95)
				::flixel::input::keyboard::FlxKeyList _this = tmp28->justPressed;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(95)
				int tmp29 = _this->status;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(95)
				tmp27 = _this->keyManager->checkStatus((int)82,tmp29);
			}
			HX_STACK_LINE(95)
			this->reset = tmp27;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameInput_obj,gatherInputs,(void))


GameInput_obj::GameInput_obj()
{
}

Dynamic GameInput_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"prev") ) { return prev; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shoot") ) { return shoot; }
		if (HX_FIELD_EQ(inName,"blast") ) { return blast; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"xValue") ) { return xValue; }
		if (HX_FIELD_EQ(inName,"yValue") ) { return yValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"toggleMute") ) { return toggleMute; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"togglePause") ) { return togglePause; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"aimDirection") ) { return aimDirection; }
		if (HX_FIELD_EQ(inName,"gatherInputs") ) { return gatherInputs_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"gamepadEnabled") ) { return gamepadEnabled; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GameInput_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shoot") ) { shoot=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blast") ) { blast=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"reset") ) { reset=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"xValue") ) { xValue=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yValue") ) { yValue=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"toggleMute") ) { toggleMute=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"togglePause") ) { togglePause=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"aimDirection") ) { aimDirection=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"gamepadEnabled") ) { gamepadEnabled=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameInput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("xValue","\xd9","\x3b","\xb9","\xbf"));
	outFields->push(HX_HCSTRING("yValue","\x38","\x98","\x14","\x26"));
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	outFields->push(HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a"));
	outFields->push(HX_HCSTRING("shoot","\xdf","\x81","\x27","\x7c"));
	outFields->push(HX_HCSTRING("blast","\xb8","\xe3","\xf1","\xb4"));
	outFields->push(HX_HCSTRING("gamepadEnabled","\xe0","\x11","\x32","\x49"));
	outFields->push(HX_HCSTRING("aimDirection","\xfa","\xd2","\x8a","\x56"));
	outFields->push(HX_HCSTRING("togglePause","\xc2","\x8e","\x1e","\xe5"));
	outFields->push(HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"));
	outFields->push(HX_HCSTRING("toggleMute","\x8d","\xb4","\x1b","\xe0"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(GameInput_obj,xValue),HX_HCSTRING("xValue","\xd9","\x3b","\xb9","\xbf")},
	{hx::fsFloat,(int)offsetof(GameInput_obj,yValue),HX_HCSTRING("yValue","\x38","\x98","\x14","\x26")},
	{hx::fsBool,(int)offsetof(GameInput_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsBool,(int)offsetof(GameInput_obj,prev),HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a")},
	{hx::fsBool,(int)offsetof(GameInput_obj,shoot),HX_HCSTRING("shoot","\xdf","\x81","\x27","\x7c")},
	{hx::fsBool,(int)offsetof(GameInput_obj,blast),HX_HCSTRING("blast","\xb8","\xe3","\xf1","\xb4")},
	{hx::fsBool,(int)offsetof(GameInput_obj,gamepadEnabled),HX_HCSTRING("gamepadEnabled","\xe0","\x11","\x32","\x49")},
	{hx::fsFloat,(int)offsetof(GameInput_obj,aimDirection),HX_HCSTRING("aimDirection","\xfa","\xd2","\x8a","\x56")},
	{hx::fsBool,(int)offsetof(GameInput_obj,togglePause),HX_HCSTRING("togglePause","\xc2","\x8e","\x1e","\xe5")},
	{hx::fsBool,(int)offsetof(GameInput_obj,reset),HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6")},
	{hx::fsBool,(int)offsetof(GameInput_obj,toggleMute),HX_HCSTRING("toggleMute","\x8d","\xb4","\x1b","\xe0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("xValue","\xd9","\x3b","\xb9","\xbf"),
	HX_HCSTRING("yValue","\x38","\x98","\x14","\x26"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a"),
	HX_HCSTRING("shoot","\xdf","\x81","\x27","\x7c"),
	HX_HCSTRING("blast","\xb8","\xe3","\xf1","\xb4"),
	HX_HCSTRING("gamepadEnabled","\xe0","\x11","\x32","\x49"),
	HX_HCSTRING("aimDirection","\xfa","\xd2","\x8a","\x56"),
	HX_HCSTRING("togglePause","\xc2","\x8e","\x1e","\xe5"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("toggleMute","\x8d","\xb4","\x1b","\xe0"),
	HX_HCSTRING("gatherInputs","\x84","\xd9","\x14","\x02"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameInput_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameInput_obj::__mClass,"__mClass");
};

#endif

hx::Class GameInput_obj::__mClass;

void GameInput_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("org.wildrabbit.GameInput","\xd8","\x07","\x69","\xa1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GameInput_obj >;
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
