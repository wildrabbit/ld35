#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
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
#ifndef INCLUDED_flixel_input_touch_FlxTouch
#include <flixel/input/touch/FlxTouch.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouchManager
#include <flixel/input/touch/FlxTouchManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
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
#ifndef INCLUDED_openfl__legacy_display_MovieClip
#include <openfl/_legacy/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_MouseEvent
#include <openfl/_legacy/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_TouchEvent
#include <openfl/_legacy/events/TouchEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_ui_Multitouch
#include <openfl/_legacy/ui/Multitouch.h>
#endif
namespace flixel{
namespace input{
namespace touch{

Void FlxTouchManager_obj::__construct()
{
HX_STACK_FRAME("flixel.input.touch.FlxTouchManager","new",0x0e972b2d,"flixel.input.touch.FlxTouchManager.new","flixel/input/touch/FlxTouchManager.hx",161,0xc27259e6)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(162)
	this->list = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(163)
	this->_inactiveTouches = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(164)
	::haxe::ds::IntMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(164)
	{
		HX_STACK_LINE(164)
		::haxe::ds::IntMap tmp1 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(164)
		::haxe::ds::IntMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(164)
		tmp = tmp2;
	}
	HX_STACK_LINE(164)
	this->_touchesCache = tmp;
	HX_STACK_LINE(165)
	int tmp1 = ::openfl::_legacy::ui::Multitouch_obj::maxTouchPoints;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(165)
	::flixel::input::touch::FlxTouchManager_obj::maxTouchPoints = tmp1;
	HX_STACK_LINE(166)
	::openfl::_legacy::ui::Multitouch_obj::set_inputMode(((Dynamic)((int)2)));
	HX_STACK_LINE(168)
	::openfl::_legacy::display::MovieClip tmp2 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(168)
	::openfl::_legacy::display::Stage tmp3 = tmp2->get_stage();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(168)
	::String tmp4 = ::openfl::_legacy::events::TouchEvent_obj::TOUCH_BEGIN;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(168)
	Dynamic tmp5 = this->handleTouchBegin_dyn();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(168)
	tmp3->addEventListener(tmp4,tmp5,null(),null(),null());
	HX_STACK_LINE(169)
	::openfl::_legacy::display::MovieClip tmp6 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(169)
	::openfl::_legacy::display::Stage tmp7 = tmp6->get_stage();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(169)
	::String tmp8 = ::openfl::_legacy::events::TouchEvent_obj::TOUCH_END;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(169)
	Dynamic tmp9 = this->handleTouchEnd_dyn();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(169)
	tmp7->addEventListener(tmp8,tmp9,null(),null(),null());
	HX_STACK_LINE(170)
	::openfl::_legacy::display::MovieClip tmp10 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(170)
	::openfl::_legacy::display::Stage tmp11 = tmp10->get_stage();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(170)
	::String tmp12 = ::openfl::_legacy::events::TouchEvent_obj::TOUCH_MOVE;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(170)
	Dynamic tmp13 = this->handleTouchMove_dyn();		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(170)
	tmp11->addEventListener(tmp12,tmp13,null(),null(),null());
}
;
	return null();
}

//FlxTouchManager_obj::~FlxTouchManager_obj() { }

Dynamic FlxTouchManager_obj::__CreateEmpty() { return  new FlxTouchManager_obj; }
hx::ObjectPtr< FlxTouchManager_obj > FlxTouchManager_obj::__new()
{  hx::ObjectPtr< FlxTouchManager_obj > _result_ = new FlxTouchManager_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxTouchManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTouchManager_obj > _result_ = new FlxTouchManager_obj();
	_result_->__construct();
	return _result_;}

hx::Object *FlxTouchManager_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	if (inType==typeid( ::flixel::input::IFlxInputManager_obj)) return operator ::flixel::input::IFlxInputManager_obj *();
	return super::__ToInterface(inType);
}

FlxTouchManager_obj::operator ::flixel::util::IFlxDestroyable_obj *()
	{ return new ::flixel::util::IFlxDestroyable_delegate_< FlxTouchManager_obj >(this); }
FlxTouchManager_obj::operator ::flixel::input::IFlxInputManager_obj *()
	{ return new ::flixel::input::IFlxInputManager_delegate_< FlxTouchManager_obj >(this); }
::flixel::input::touch::FlxTouch FlxTouchManager_obj::getByID( int TouchPointID){
	HX_STACK_FRAME("flixel.input.touch.FlxTouchManager","getByID",0x18c2ee75,"flixel.input.touch.FlxTouchManager.getByID","flixel/input/touch/FlxTouchManager.hx",39,0xc27259e6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(TouchPointID,"TouchPointID")
	HX_STACK_LINE(40)
	::haxe::ds::IntMap tmp = this->_touchesCache;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	int tmp1 = TouchPointID;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	::flixel::input::touch::FlxTouch tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(40)
	::flixel::input::touch::FlxTouch tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(40)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,getByID,return )

::flixel::input::touch::FlxTouch FlxTouchManager_obj::getFirst( ){
	HX_STACK_FRAME("flixel.input.touch.FlxTouchManager","getFirst",0xd4f3e5cd,"flixel.input.touch.FlxTouchManager.getFirst","flixel/input/touch/FlxTouchManager.hx",47,0xc27259e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(48)
	::flixel::input::touch::FlxTouch tmp = this->list->__get((int)0).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(48)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(48)
	if ((tmp1)){
		HX_STACK_LINE(50)
		::flixel::input::touch::FlxTouch tmp2 = this->list->__get((int)0).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(50)
		return tmp2;
	}
	else{
		HX_STACK_LINE(54)
		return null();
	}
	HX_STACK_LINE(48)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouchManager_obj,getFirst,return )

Void FlxTouchManager_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.input.touch.FlxTouchManager","destroy",0x29a37247,"flixel.input.touch.FlxTouchManager.destroy","flixel/input/touch/FlxTouchManager.hx",63,0xc27259e6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(64)
		{
			HX_STACK_LINE(64)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(64)
			Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(64)
			while((true)){
				HX_STACK_LINE(64)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(64)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(64)
				if ((tmp1)){
					HX_STACK_LINE(64)
					break;
				}
				HX_STACK_LINE(64)
				::flixel::input::touch::FlxTouch tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(64)
				::flixel::input::touch::FlxTouch touch = tmp2;		HX_STACK_VAR(touch,"touch");
				HX_STACK_LINE(64)
				++(_g);
				HX_STACK_LINE(66)
				touch->destroy();
			}
		}
		HX_STACK_LINE(68)
		this->list = null();
		HX_STACK_LINE(70)
		{
			HX_STACK_LINE(70)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(70)
			Array< ::Dynamic > _g1 = this->_inactiveTouches;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(70)
			while((true)){
				HX_STACK_LINE(70)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(70)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(70)
				if ((tmp1)){
					HX_STACK_LINE(70)
					break;
				}
				HX_STACK_LINE(70)
				::flixel::input::touch::FlxTouch tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(70)
				::flixel::input::touch::FlxTouch touch = tmp2;		HX_STACK_VAR(touch,"touch");
				HX_STACK_LINE(70)
				++(_g);
				HX_STACK_LINE(72)
				touch->destroy();
			}
		}
		HX_STACK_LINE(74)
		this->_inactiveTouches = null();
		HX_STACK_LINE(76)
		this->_touchesCache = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouchManager_obj,destroy,(void))

Array< ::Dynamic > FlxTouchManager_obj::justStarted( Array< ::Dynamic > TouchArray){
	HX_STACK_FRAME("flixel.input.touch.FlxTouchManager","justStarted",0x4159d442,"flixel.input.touch.FlxTouchManager.justStarted","flixel/input/touch/FlxTouchManager.hx",86,0xc27259e6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(TouchArray,"TouchArray")
	HX_STACK_LINE(87)
	bool tmp = (TouchArray == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(87)
	if ((tmp)){
		HX_STACK_LINE(89)
		TouchArray = Array_obj< ::Dynamic >::__new();
	}
	HX_STACK_LINE(92)
	int touchLen = TouchArray->length;		HX_STACK_VAR(touchLen,"touchLen");
	HX_STACK_LINE(94)
	bool tmp1 = (touchLen > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(94)
	if ((tmp1)){
		HX_STACK_LINE(96)
		int tmp2 = touchLen;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(96)
		TouchArray->splice((int)0,tmp2);
	}
	HX_STACK_LINE(99)
	{
		HX_STACK_LINE(99)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(99)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(99)
		while((true)){
			HX_STACK_LINE(99)
			bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(99)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(99)
			if ((tmp3)){
				HX_STACK_LINE(99)
				break;
			}
			HX_STACK_LINE(99)
			::flixel::input::touch::FlxTouch tmp4 = _g1->__get(_g).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(99)
			::flixel::input::touch::FlxTouch touch = tmp4;		HX_STACK_VAR(touch,"touch");
			HX_STACK_LINE(99)
			++(_g);
			HX_STACK_LINE(101)
			int tmp5 = touch->input->current;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(101)
			bool tmp6 = (tmp5 == (int)2);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(101)
			if ((tmp6)){
				HX_STACK_LINE(103)
				::flixel::input::touch::FlxTouch tmp7 = touch;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(103)
				TouchArray->push(tmp7);
			}
		}
	}
	HX_STACK_LINE(107)
	return TouchArray;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,justStarted,return )

Array< ::Dynamic > FlxTouchManager_obj::justReleased( Array< ::Dynamic > TouchArray){
	HX_STACK_FRAME("flixel.input.touch.FlxTouchManager","justReleased",0x217e7e9c,"flixel.input.touch.FlxTouchManager.justReleased","flixel/input/touch/FlxTouchManager.hx",117,0xc27259e6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(TouchArray,"TouchArray")
	HX_STACK_LINE(118)
	bool tmp = (TouchArray == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(118)
	if ((tmp)){
		HX_STACK_LINE(120)
		TouchArray = Array_obj< ::Dynamic >::__new();
	}
	HX_STACK_LINE(123)
	int touchLen = TouchArray->length;		HX_STACK_VAR(touchLen,"touchLen");
	HX_STACK_LINE(124)
	bool tmp1 = (touchLen > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(124)
	if ((tmp1)){
		HX_STACK_LINE(126)
		int tmp2 = touchLen;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(126)
		TouchArray->splice((int)0,tmp2);
	}
	HX_STACK_LINE(129)
	{
		HX_STACK_LINE(129)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(129)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(129)
		while((true)){
			HX_STACK_LINE(129)
			bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(129)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(129)
			if ((tmp3)){
				HX_STACK_LINE(129)
				break;
			}
			HX_STACK_LINE(129)
			::flixel::input::touch::FlxTouch tmp4 = _g1->__get(_g).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(129)
			::flixel::input::touch::FlxTouch touch = tmp4;		HX_STACK_VAR(touch,"touch");
			HX_STACK_LINE(129)
			++(_g);
			HX_STACK_LINE(131)
			int tmp5 = touch->input->current;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(131)
			bool tmp6 = (tmp5 == (int)-1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(131)
			if ((tmp6)){
				HX_STACK_LINE(133)
				::flixel::input::touch::FlxTouch tmp7 = touch;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(133)
				TouchArray->push(tmp7);
			}
		}
	}
	HX_STACK_LINE(137)
	return TouchArray;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,justReleased,return )

Void FlxTouchManager_obj::reset( ){
{
		HX_STACK_FRAME("flixel.input.touch.FlxTouchManager","reset",0x90b1b1dc,"flixel.input.touch.FlxTouchManager.reset","flixel/input/touch/FlxTouchManager.hx",144,0xc27259e6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(145)
		::haxe::ds::IntMap tmp = this->_touchesCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(145)
		Dynamic tmp1 = tmp->keys();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(145)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(tmp1);  __it->hasNext(); ){
			int key = __it->next();
			{
				HX_STACK_LINE(147)
				::haxe::ds::IntMap tmp2 = this->_touchesCache;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(147)
				int tmp3 = key;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(147)
				tmp2->remove(tmp3);
			}
;
		}
		HX_STACK_LINE(150)
		{
			HX_STACK_LINE(150)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(150)
			Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(150)
			while((true)){
				HX_STACK_LINE(150)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(150)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(150)
				if ((tmp3)){
					HX_STACK_LINE(150)
					break;
				}
				HX_STACK_LINE(150)
				::flixel::input::touch::FlxTouch tmp4 = _g1->__get(_g).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(150)
				::flixel::input::touch::FlxTouch touch = tmp4;		HX_STACK_VAR(touch,"touch");
				HX_STACK_LINE(150)
				++(_g);
				HX_STACK_LINE(152)
				touch->input->reset();
				HX_STACK_LINE(153)
				::flixel::input::touch::FlxTouch tmp5 = touch;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(153)
				this->_inactiveTouches->push(tmp5);
			}
		}
		HX_STACK_LINE(156)
		int tmp2 = this->list->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(156)
		this->list->splice((int)0,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouchManager_obj,reset,(void))

Void FlxTouchManager_obj::handleTouchBegin( ::openfl::_legacy::events::TouchEvent FlashEvent){
{
		HX_STACK_FRAME("flixel.input.touch.FlxTouchManager","handleTouchBegin",0x51a5a0c5,"flixel.input.touch.FlxTouchManager.handleTouchBegin","flixel/input/touch/FlxTouchManager.hx",177,0xc27259e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FlashEvent,"FlashEvent")
		HX_STACK_LINE(178)
		::haxe::ds::IntMap tmp = this->_touchesCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(178)
		int tmp1 = FlashEvent->touchPointID;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(178)
		::flixel::input::touch::FlxTouch tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(178)
		::flixel::input::touch::FlxTouch touch = tmp2;		HX_STACK_VAR(touch,"touch");
		HX_STACK_LINE(179)
		bool tmp3 = (touch != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(179)
		if ((tmp3)){
			HX_STACK_LINE(181)
			Float tmp4 = FlashEvent->stageX;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(181)
			int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(181)
			Float tmp6 = FlashEvent->stageY;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(181)
			int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(181)
			touch->setXY(tmp5,tmp7);
		}
		else{
			HX_STACK_LINE(185)
			Float tmp4 = FlashEvent->stageX;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(185)
			int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(185)
			Float tmp6 = FlashEvent->stageY;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(185)
			int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(185)
			int tmp8 = FlashEvent->touchPointID;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(185)
			::flixel::input::touch::FlxTouch tmp9 = this->recycle(tmp5,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(185)
			touch = tmp9;
		}
		HX_STACK_LINE(187)
		touch->input->press();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,handleTouchBegin,(void))

Void FlxTouchManager_obj::handleTouchEnd( ::openfl::_legacy::events::TouchEvent FlashEvent){
{
		HX_STACK_FRAME("flixel.input.touch.FlxTouchManager","handleTouchEnd",0xa3529b77,"flixel.input.touch.FlxTouchManager.handleTouchEnd","flixel/input/touch/FlxTouchManager.hx",194,0xc27259e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FlashEvent,"FlashEvent")
		HX_STACK_LINE(195)
		::haxe::ds::IntMap tmp = this->_touchesCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(195)
		int tmp1 = FlashEvent->touchPointID;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(195)
		::flixel::input::touch::FlxTouch tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(195)
		::flixel::input::touch::FlxTouch touch = tmp2;		HX_STACK_VAR(touch,"touch");
		HX_STACK_LINE(197)
		bool tmp3 = (touch != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(197)
		if ((tmp3)){
			HX_STACK_LINE(199)
			touch->input->release();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,handleTouchEnd,(void))

Void FlxTouchManager_obj::handleTouchMove( ::openfl::_legacy::events::TouchEvent FlashEvent){
{
		HX_STACK_FRAME("flixel.input.touch.FlxTouchManager","handleTouchMove",0x4a3ff3f5,"flixel.input.touch.FlxTouchManager.handleTouchMove","flixel/input/touch/FlxTouchManager.hx",207,0xc27259e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FlashEvent,"FlashEvent")
		HX_STACK_LINE(208)
		::haxe::ds::IntMap tmp = this->_touchesCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(208)
		int tmp1 = FlashEvent->touchPointID;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(208)
		::flixel::input::touch::FlxTouch tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(208)
		::flixel::input::touch::FlxTouch touch = tmp2;		HX_STACK_VAR(touch,"touch");
		HX_STACK_LINE(210)
		bool tmp3 = (touch != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(210)
		if ((tmp3)){
			HX_STACK_LINE(212)
			Float tmp4 = FlashEvent->stageX;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(212)
			int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(212)
			Float tmp6 = FlashEvent->stageY;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(212)
			int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(212)
			touch->setXY(tmp5,tmp7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,handleTouchMove,(void))

::flixel::input::touch::FlxTouch FlxTouchManager_obj::add( ::flixel::input::touch::FlxTouch Touch){
	HX_STACK_FRAME("flixel.input.touch.FlxTouchManager","add",0x0e8d4cee,"flixel.input.touch.FlxTouchManager.add","flixel/input/touch/FlxTouchManager.hx",223,0xc27259e6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Touch,"Touch")
	HX_STACK_LINE(224)
	::flixel::input::touch::FlxTouch tmp = Touch;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(224)
	this->list->push(tmp);
	HX_STACK_LINE(225)
	::haxe::ds::IntMap tmp1 = this->_touchesCache;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(225)
	int tmp2 = Touch->input->ID;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(225)
	::flixel::input::touch::FlxTouch tmp3 = Touch;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(225)
	tmp1->set(tmp2,tmp3);
	HX_STACK_LINE(226)
	::flixel::input::touch::FlxTouch tmp4 = Touch;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(226)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,add,return )

::flixel::input::touch::FlxTouch FlxTouchManager_obj::recycle( int X,int Y,int PointID){
	HX_STACK_FRAME("flixel.input.touch.FlxTouchManager","recycle",0x3ca95560,"flixel.input.touch.FlxTouchManager.recycle","flixel/input/touch/FlxTouchManager.hx",238,0xc27259e6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(PointID,"PointID")
	HX_STACK_LINE(239)
	int tmp = this->_inactiveTouches->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(239)
	bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(239)
	if ((tmp1)){
		HX_STACK_LINE(241)
		::flixel::input::touch::FlxTouch tmp2 = this->_inactiveTouches->pop().StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(241)
		::flixel::input::touch::FlxTouch touch = tmp2;		HX_STACK_VAR(touch,"touch");
		HX_STACK_LINE(242)
		int tmp3 = X;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(242)
		int tmp4 = Y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(242)
		int tmp5 = PointID;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(242)
		touch->recycle(tmp3,tmp4,tmp5);
		HX_STACK_LINE(243)
		::flixel::input::touch::FlxTouch tmp6 = touch;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(243)
		::flixel::input::touch::FlxTouch tmp7 = this->add(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(243)
		return tmp7;
	}
	HX_STACK_LINE(246)
	::flixel::input::touch::FlxTouch tmp2 = ::flixel::input::touch::FlxTouch_obj::__new(X,Y,PointID);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(246)
	::flixel::input::touch::FlxTouch tmp3 = this->add(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(246)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTouchManager_obj,recycle,return )

Void FlxTouchManager_obj::update( ){
{
		HX_STACK_FRAME("flixel.input.touch.FlxTouchManager","update",0x8957295c,"flixel.input.touch.FlxTouchManager.update","flixel/input/touch/FlxTouchManager.hx",254,0xc27259e6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(255)
		int tmp = this->list->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(255)
		int tmp1 = (tmp - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(255)
		int i = tmp1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(256)
		::flixel::input::touch::FlxTouch touch;		HX_STACK_VAR(touch,"touch");
		HX_STACK_LINE(258)
		while((true)){
			HX_STACK_LINE(258)
			bool tmp2 = (i >= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(258)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(258)
			if ((tmp3)){
				HX_STACK_LINE(258)
				break;
			}
			HX_STACK_LINE(260)
			::flixel::input::touch::FlxTouch tmp4 = this->list->__get(i).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(260)
			touch = tmp4;
			HX_STACK_LINE(263)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(263)
			{
				HX_STACK_LINE(263)
				::flixel::input::FlxInput _this = touch->input;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(263)
				bool tmp6 = (_this->current == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(263)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(263)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(263)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(263)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(263)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(263)
				if ((tmp11)){
					HX_STACK_LINE(263)
					tmp5 = (_this->current == (int)-1);
				}
				else{
					HX_STACK_LINE(263)
					tmp5 = true;
				}
			}
			HX_STACK_LINE(263)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(263)
			if ((tmp5)){
				HX_STACK_LINE(263)
				int tmp7 = touch->input->current;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(263)
				int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(263)
				bool tmp9 = (tmp8 == (int)-1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(263)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(263)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(263)
				tmp6 = !(tmp11);
			}
			else{
				HX_STACK_LINE(263)
				tmp6 = false;
			}
			HX_STACK_LINE(263)
			if ((tmp6)){
				HX_STACK_LINE(265)
				touch->input->reset();
				HX_STACK_LINE(266)
				::haxe::ds::IntMap tmp7 = this->_touchesCache;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(266)
				int tmp8 = touch->input->ID;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(266)
				tmp7->remove(tmp8);
				HX_STACK_LINE(267)
				int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(267)
				this->list->splice(tmp9,(int)1);
				HX_STACK_LINE(268)
				::flixel::input::touch::FlxTouch tmp10 = touch;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(268)
				this->_inactiveTouches->push(tmp10);
			}
			else{
				HX_STACK_LINE(272)
				touch->update();
			}
			HX_STACK_LINE(275)
			(i)--;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouchManager_obj,update,(void))

Void FlxTouchManager_obj::onFocus( ){
{
		HX_STACK_FRAME("flixel.input.touch.FlxTouchManager","onFocus",0x9fe44386,"flixel.input.touch.FlxTouchManager.onFocus","flixel/input/touch/FlxTouchManager.hx",279,0xc27259e6)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouchManager_obj,onFocus,(void))

Void FlxTouchManager_obj::onFocusLost( ){
{
		HX_STACK_FRAME("flixel.input.touch.FlxTouchManager","onFocusLost",0x9504548a,"flixel.input.touch.FlxTouchManager.onFocusLost","flixel/input/touch/FlxTouchManager.hx",283,0xc27259e6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(283)
		this->reset();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouchManager_obj,onFocusLost,(void))

int FlxTouchManager_obj::maxTouchPoints;


FlxTouchManager_obj::FlxTouchManager_obj()
{
}

void FlxTouchManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTouchManager);
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(_inactiveTouches,"_inactiveTouches");
	HX_MARK_MEMBER_NAME(_touchesCache,"_touchesCache");
	HX_MARK_END_CLASS();
}

void FlxTouchManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(_inactiveTouches,"_inactiveTouches");
	HX_VISIT_MEMBER_NAME(_touchesCache,"_touchesCache");
}

Dynamic FlxTouchManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getByID") ) { return getByID_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"recycle") ) { return recycle_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getFirst") ) { return getFirst_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justStarted") ) { return justStarted_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { return justReleased_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_touchesCache") ) { return _touchesCache; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"handleTouchEnd") ) { return handleTouchEnd_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"handleTouchMove") ) { return handleTouchMove_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_inactiveTouches") ) { return _inactiveTouches; }
		if (HX_FIELD_EQ(inName,"handleTouchBegin") ) { return handleTouchBegin_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxTouchManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"maxTouchPoints") ) { outValue = maxTouchPoints; return true;  }
	}
	return false;
}

Dynamic FlxTouchManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_touchesCache") ) { _touchesCache=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_inactiveTouches") ) { _inactiveTouches=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxTouchManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"maxTouchPoints") ) { maxTouchPoints=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void FlxTouchManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"));
	outFields->push(HX_HCSTRING("_inactiveTouches","\x43","\x04","\x4f","\x3d"));
	outFields->push(HX_HCSTRING("_touchesCache","\xf4","\xe3","\xc3","\x76"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxTouchManager_obj,list),HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxTouchManager_obj,_inactiveTouches),HX_HCSTRING("_inactiveTouches","\x43","\x04","\x4f","\x3d")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(FlxTouchManager_obj,_touchesCache),HX_HCSTRING("_touchesCache","\xf4","\xe3","\xc3","\x76")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FlxTouchManager_obj::maxTouchPoints,HX_HCSTRING("maxTouchPoints","\xfe","\x7e","\x0e","\x64")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("_inactiveTouches","\x43","\x04","\x4f","\x3d"),
	HX_HCSTRING("_touchesCache","\xf4","\xe3","\xc3","\x76"),
	HX_HCSTRING("getByID","\x28","\xa9","\xa5","\x13"),
	HX_HCSTRING("getFirst","\xba","\x87","\x74","\x60"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("justStarted","\x75","\x64","\xdb","\xed"),
	HX_HCSTRING("justReleased","\x09","\x1b","\x5b","\x66"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("handleTouchBegin","\xb2","\x77","\xad","\x79"),
	HX_HCSTRING("handleTouchEnd","\x24","\xed","\xe0","\x4d"),
	HX_HCSTRING("handleTouchMove","\xa8","\x19","\x39","\xdc"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("recycle","\x13","\x10","\x8c","\x37"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("onFocus","\x39","\xfe","\xc6","\x9a"),
	HX_HCSTRING("onFocusLost","\xbd","\xe4","\x85","\x41"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTouchManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxTouchManager_obj::maxTouchPoints,"maxTouchPoints");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTouchManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxTouchManager_obj::maxTouchPoints,"maxTouchPoints");
};

#endif

hx::Class FlxTouchManager_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("maxTouchPoints","\xfe","\x7e","\x0e","\x64"),
	::String(null()) };

void FlxTouchManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.touch.FlxTouchManager","\xbb","\x10","\x25","\x64");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxTouchManager_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxTouchManager_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxTouchManager_obj >;
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

void FlxTouchManager_obj::__boot()
{
	maxTouchPoints= (int)0;
}

} // end namespace flixel
} // end namespace input
} // end namespace touch
