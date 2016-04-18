#include <hxcpp.h>

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
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_FlxSwipe
#include <flixel/input/FlxSwipe.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouch
#include <flixel/input/touch/FlxTouch.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
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
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
namespace flixel{
namespace input{
namespace touch{

Void FlxTouch_obj::__construct(hx::Null< int >  __o_x,hx::Null< int >  __o_y,hx::Null< int >  __o_pointID)
{
HX_STACK_FRAME("flixel.input.touch.FlxTouch","new",0xa47319c4,"flixel.input.touch.FlxTouch.new","flixel/input/touch/FlxTouch.hx",21,0x7bf286c9)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
HX_STACK_ARG(__o_pointID,"pointID")
int x = __o_x.Default(0);
int y = __o_y.Default(0);
int pointID = __o_pointID.Default(0);
{
	HX_STACK_LINE(38)
	this->justPressedTimeInTicks = ((Float)-1);
	struct _Function_1_1{
		inline static ::flixel::math::FlxPoint Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/input/touch/FlxTouch.hx",37,0x7bf286c9)
			{
				HX_STACK_LINE(37)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(37)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(37)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(37)
				::flixel::math::FlxPoint tmp1 = tmp->get();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(37)
				Float tmp2 = X;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(37)
				Float tmp3 = Y;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(37)
				::flixel::math::FlxPoint tmp4 = tmp1->set(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(37)
				::flixel::math::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(37)
				point->_inPool = false;
				HX_STACK_LINE(37)
				return point;
			}
			return null();
		}
	};
	HX_STACK_LINE(37)
	this->justPressedPosition = _Function_1_1::Block();
	HX_STACK_LINE(35)
	this->flashPoint = ::openfl::_legacy::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(64)
	super::__construct();
	HX_STACK_LINE(66)
	::flixel::input::FlxInput tmp = ::flixel::input::FlxInput_obj::__new(pointID);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(66)
	this->input = tmp;
	HX_STACK_LINE(67)
	int tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(67)
	int tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(67)
	this->setXY(tmp1,tmp2);
}
;
	return null();
}

//FlxTouch_obj::~FlxTouch_obj() { }

Dynamic FlxTouch_obj::__CreateEmpty() { return  new FlxTouch_obj; }
hx::ObjectPtr< FlxTouch_obj > FlxTouch_obj::__new(hx::Null< int >  __o_x,hx::Null< int >  __o_y,hx::Null< int >  __o_pointID)
{  hx::ObjectPtr< FlxTouch_obj > _result_ = new FlxTouch_obj();
	_result_->__construct(__o_x,__o_y,__o_pointID);
	return _result_;}

Dynamic FlxTouch_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTouch_obj > _result_ = new FlxTouch_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

hx::Object *FlxTouch_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	if (inType==typeid( ::flixel::input::IFlxInput_obj)) return operator ::flixel::input::IFlxInput_obj *();
	return super::__ToInterface(inType);
}

FlxTouch_obj::operator ::flixel::util::IFlxDestroyable_obj *()
	{ return new ::flixel::util::IFlxDestroyable_delegate_< FlxTouch_obj >(this); }
FlxTouch_obj::operator ::flixel::input::IFlxInput_obj *()
	{ return new ::flixel::input::IFlxInput_delegate_< FlxTouch_obj >(this); }
Void FlxTouch_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.input.touch.FlxTouch","destroy",0x988ff85e,"flixel.input.touch.FlxTouch.destroy","flixel/input/touch/FlxTouch.hx",41,0x7bf286c9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(42)
		this->input = null();
		HX_STACK_LINE(43)
		::flixel::math::FlxPoint tmp = this->justPressedPosition;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(43)
		::flixel::math::FlxPoint tmp1 = ::flixel::util::FlxDestroyUtil_obj::put(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(43)
		this->justPressedPosition = tmp1;
		HX_STACK_LINE(44)
		this->flashPoint = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouch_obj,destroy,(void))

Void FlxTouch_obj::recycle( int x,int y,int pointID){
{
		HX_STACK_FRAME("flixel.input.touch.FlxTouch","recycle",0xab95db77,"flixel.input.touch.FlxTouch.recycle","flixel/input/touch/FlxTouch.hx",51,0x7bf286c9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(pointID,"pointID")
		HX_STACK_LINE(52)
		int tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		int tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		this->setXY(tmp,tmp1);
		HX_STACK_LINE(53)
		::flixel::input::FlxInput tmp2 = this->input;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(53)
		tmp2->ID = pointID;
		HX_STACK_LINE(54)
		::flixel::input::FlxInput tmp3 = this->input;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(54)
		tmp3->reset();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTouch_obj,recycle,(void))

Void FlxTouch_obj::update( ){
{
		HX_STACK_FRAME("flixel.input.touch.FlxTouch","update",0x82f33325,"flixel.input.touch.FlxTouch.update","flixel/input/touch/FlxTouch.hx",74,0x7bf286c9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(75)
		::flixel::input::FlxInput tmp = this->input;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(75)
		tmp->update();
		HX_STACK_LINE(77)
		::flixel::input::FlxInput tmp1 = this->input;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(77)
		int tmp2 = tmp1->current;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(77)
		bool tmp3 = (tmp2 == (int)2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(77)
		if ((tmp3)){
			HX_STACK_LINE(79)
			::flixel::math::FlxPoint tmp4 = this->justPressedPosition;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(79)
			int tmp5 = this->screenX;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(79)
			int tmp6 = this->screenY;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(79)
			tmp4->set(tmp5,tmp6);
			HX_STACK_LINE(80)
			::flixel::FlxGame tmp7 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(80)
			this->justPressedTimeInTicks = tmp7->ticks;
		}
		else{
			HX_STACK_LINE(83)
			::flixel::input::FlxInput tmp4 = this->input;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(83)
			int tmp5 = tmp4->current;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(83)
			bool tmp6 = (tmp5 == (int)-1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(83)
			if ((tmp6)){
				HX_STACK_LINE(85)
				::flixel::input::FlxInput tmp7 = this->input;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(85)
				int tmp8 = tmp7->ID;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(85)
				::flixel::math::FlxPoint tmp9 = this->justPressedPosition;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(85)
				::flixel::math::FlxPoint tmp10 = this->getScreenPosition(null(),null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(85)
				Float tmp11 = this->justPressedTimeInTicks;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(85)
				::flixel::input::FlxSwipe tmp12 = ::flixel::input::FlxSwipe_obj::__new(tmp8,tmp9,tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(85)
				::flixel::FlxG_obj::swipes->push(tmp12);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouch_obj,update,(void))

Void FlxTouch_obj::setXY( int X,int Y){
{
		HX_STACK_FRAME("flixel.input.touch.FlxTouch","setXY",0xdbbeff87,"flixel.input.touch.FlxTouch.setXY","flixel/input/touch/FlxTouch.hx",97,0x7bf286c9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(X,"X")
		HX_STACK_ARG(Y,"Y")
		HX_STACK_LINE(98)
		::openfl::_legacy::geom::Point tmp = this->flashPoint;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(98)
		int tmp1 = X;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(98)
		int tmp2 = Y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(98)
		tmp->setTo(tmp1,tmp2);
		HX_STACK_LINE(99)
		::flixel::FlxGame tmp3 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(99)
		::openfl::_legacy::geom::Point tmp4 = this->flashPoint;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(99)
		::openfl::_legacy::geom::Point tmp5 = tmp3->globalToLocal(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(99)
		this->flashPoint = tmp5;
		HX_STACK_LINE(101)
		{
			HX_STACK_LINE(101)
			::openfl::_legacy::geom::Point tmp6 = this->flashPoint;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(101)
			Float tmp7 = tmp6->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(101)
			::flixel::_system::scaleModes::BaseScaleMode tmp8 = ::flixel::FlxG_obj::scaleMode;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(101)
			Float tmp9 = tmp8->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(101)
			Float tmp10 = (Float(tmp7) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(101)
			int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(101)
			this->_globalScreenX = tmp11;
			HX_STACK_LINE(101)
			::openfl::_legacy::geom::Point tmp12 = this->flashPoint;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(101)
			Float tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(101)
			::flixel::_system::scaleModes::BaseScaleMode tmp14 = ::flixel::FlxG_obj::scaleMode;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(101)
			Float tmp15 = tmp14->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(101)
			Float tmp16 = (Float(tmp13) / Float(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(101)
			int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(101)
			this->_globalScreenY = tmp17;
			HX_STACK_LINE(101)
			this->updatePositions();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTouch_obj,setXY,(void))

int FlxTouch_obj::get_touchPointID( ){
	HX_STACK_FRAME("flixel.input.touch.FlxTouch","get_touchPointID",0xed1e52d1,"flixel.input.touch.FlxTouch.get_touchPointID","flixel/input/touch/FlxTouch.hx",105,0x7bf286c9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(106)
	::flixel::input::FlxInput tmp = this->input;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(106)
	int tmp1 = tmp->ID;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(106)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouch_obj,get_touchPointID,return )

bool FlxTouch_obj::get_justReleased( ){
	HX_STACK_FRAME("flixel.input.touch.FlxTouch","get_justReleased",0xd7f5afae,"flixel.input.touch.FlxTouch.get_justReleased","flixel/input/touch/FlxTouch.hx",110,0x7bf286c9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(111)
	::flixel::input::FlxInput tmp = this->input;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(111)
	int tmp1 = tmp->current;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(111)
	bool tmp2 = (tmp1 == (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(111)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouch_obj,get_justReleased,return )

bool FlxTouch_obj::get_released( ){
	HX_STACK_FRAME("flixel.input.touch.FlxTouch","get_released",0xe547a6e2,"flixel.input.touch.FlxTouch.get_released","flixel/input/touch/FlxTouch.hx",115,0x7bf286c9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(116)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(116)
	{
		HX_STACK_LINE(116)
		::flixel::input::FlxInput tmp1 = this->input;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(116)
		::flixel::input::FlxInput _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(116)
		bool tmp2 = (_this->current == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(116)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(116)
		if ((tmp3)){
			HX_STACK_LINE(116)
			tmp = (_this->current == (int)-1);
		}
		else{
			HX_STACK_LINE(116)
			tmp = true;
		}
	}
	HX_STACK_LINE(116)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouch_obj,get_released,return )

bool FlxTouch_obj::get_pressed( ){
	HX_STACK_FRAME("flixel.input.touch.FlxTouch","get_pressed",0x583e801d,"flixel.input.touch.FlxTouch.get_pressed","flixel/input/touch/FlxTouch.hx",120,0x7bf286c9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(121)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(121)
	{
		HX_STACK_LINE(121)
		::flixel::input::FlxInput tmp1 = this->input;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(121)
		::flixel::input::FlxInput _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(121)
		bool tmp2 = (_this->current == (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(121)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(121)
		if ((tmp3)){
			HX_STACK_LINE(121)
			tmp = (_this->current == (int)2);
		}
		else{
			HX_STACK_LINE(121)
			tmp = true;
		}
	}
	HX_STACK_LINE(121)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouch_obj,get_pressed,return )

bool FlxTouch_obj::get_justPressed( ){
	HX_STACK_FRAME("flixel.input.touch.FlxTouch","get_justPressed",0xad2294d1,"flixel.input.touch.FlxTouch.get_justPressed","flixel/input/touch/FlxTouch.hx",125,0x7bf286c9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(126)
	::flixel::input::FlxInput tmp = this->input;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(126)
	int tmp1 = tmp->current;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(126)
	bool tmp2 = (tmp1 == (int)2);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(126)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouch_obj,get_justPressed,return )


FlxTouch_obj::FlxTouch_obj()
{
}

void FlxTouch_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTouch);
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(flashPoint,"flashPoint");
	HX_MARK_MEMBER_NAME(justPressedPosition,"justPressedPosition");
	HX_MARK_MEMBER_NAME(justPressedTimeInTicks,"justPressedTimeInTicks");
	HX_MARK_END_CLASS();
}

void FlxTouch_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(flashPoint,"flashPoint");
	HX_VISIT_MEMBER_NAME(justPressedPosition,"justPressedPosition");
	HX_VISIT_MEMBER_NAME(justPressedTimeInTicks,"justPressedTimeInTicks");
}

Dynamic FlxTouch_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { return input; }
		if (HX_FIELD_EQ(inName,"setXY") ) { return setXY_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pressed") ) { if (inCallProp == hx::paccAlways) return get_pressed(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"recycle") ) { return recycle_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"released") ) { if (inCallProp == hx::paccAlways) return get_released(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"flashPoint") ) { return flashPoint; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { if (inCallProp == hx::paccAlways) return get_justPressed(); }
		if (HX_FIELD_EQ(inName,"get_pressed") ) { return get_pressed_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"touchPointID") ) { if (inCallProp == hx::paccAlways) return get_touchPointID(); }
		if (HX_FIELD_EQ(inName,"justReleased") ) { if (inCallProp == hx::paccAlways) return get_justReleased(); }
		if (HX_FIELD_EQ(inName,"get_released") ) { return get_released_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_justPressed") ) { return get_justPressed_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_touchPointID") ) { return get_touchPointID_dyn(); }
		if (HX_FIELD_EQ(inName,"get_justReleased") ) { return get_justReleased_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"justPressedPosition") ) { return justPressedPosition; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"justPressedTimeInTicks") ) { return justPressedTimeInTicks; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTouch_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast< ::flixel::input::FlxInput >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"flashPoint") ) { flashPoint=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"justPressedPosition") ) { justPressedPosition=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"justPressedTimeInTicks") ) { justPressedTimeInTicks=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTouch_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("touchPointID","\x2c","\xbe","\x83","\x7b"));
	outFields->push(HX_HCSTRING("justReleased","\x09","\x1b","\x5b","\x66"));
	outFields->push(HX_HCSTRING("released","\xbd","\x88","\xe7","\x76"));
	outFields->push(HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39"));
	outFields->push(HX_HCSTRING("justPressed","\xd6","\x0d","\xa7","\xf2"));
	outFields->push(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"));
	outFields->push(HX_HCSTRING("flashPoint","\x80","\x50","\xa0","\xe4"));
	outFields->push(HX_HCSTRING("justPressedPosition","\x9f","\x30","\x76","\xae"));
	outFields->push(HX_HCSTRING("justPressedTimeInTicks","\x8e","\xf9","\xc2","\x82"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::input::FlxInput*/ ,(int)offsetof(FlxTouch_obj,input),HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(FlxTouch_obj,flashPoint),HX_HCSTRING("flashPoint","\x80","\x50","\xa0","\xe4")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxTouch_obj,justPressedPosition),HX_HCSTRING("justPressedPosition","\x9f","\x30","\x76","\xae")},
	{hx::fsFloat,(int)offsetof(FlxTouch_obj,justPressedTimeInTicks),HX_HCSTRING("justPressedTimeInTicks","\x8e","\xf9","\xc2","\x82")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"),
	HX_HCSTRING("flashPoint","\x80","\x50","\xa0","\xe4"),
	HX_HCSTRING("justPressedPosition","\x9f","\x30","\x76","\xae"),
	HX_HCSTRING("justPressedTimeInTicks","\x8e","\xf9","\xc2","\x82"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("recycle","\x13","\x10","\x8c","\x37"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("setXY","\x23","\x95","\x2f","\x7a"),
	HX_HCSTRING("get_touchPointID","\xb5","\xaa","\x22","\x80"),
	HX_HCSTRING("get_justReleased","\x92","\x07","\xfa","\x6a"),
	HX_HCSTRING("get_released","\xc6","\x3c","\x01","\x2c"),
	HX_HCSTRING("get_pressed","\xb9","\x32","\xe1","\xbf"),
	HX_HCSTRING("get_justPressed","\x6d","\xc5","\x88","\xb3"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTouch_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTouch_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxTouch_obj::__mClass;

void FlxTouch_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.touch.FlxTouch","\xd2","\x27","\xf2","\x19");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxTouch_obj >;
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

} // end namespace flixel
} // end namespace input
} // end namespace touch
