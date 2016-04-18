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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_effects_FlxFlicker
#include <flixel/effects/FlxFlicker.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
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
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_org_wildrabbit_game_Pickup
#include <org/wildrabbit/game/Pickup.h>
#endif
namespace org{
namespace wildrabbit{
namespace game{

Void Pickup_obj::__construct()
{
HX_STACK_FRAME("org.wildrabbit.game.Pickup","new",0xe4bfd4ca,"org.wildrabbit.game.Pickup.new","org/wildrabbit/game/Pickup.hx",27,0x989ecf65)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(28)
	super::__construct((int)0,(int)0,null());
	HX_STACK_LINE(29)
	::flixel::util::FlxTimer tmp = ::flixel::util::FlxTimer_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	this->mLifeTimer = tmp;
}
;
	return null();
}

//Pickup_obj::~Pickup_obj() { }

Dynamic Pickup_obj::__CreateEmpty() { return  new Pickup_obj; }
hx::ObjectPtr< Pickup_obj > Pickup_obj::__new()
{  hx::ObjectPtr< Pickup_obj > _result_ = new Pickup_obj();
	_result_->__construct();
	return _result_;}

Dynamic Pickup_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Pickup_obj > _result_ = new Pickup_obj();
	_result_->__construct();
	return _result_;}

Void Pickup_obj::init( Float x,Float y,Dynamic gfx,int idx,int type,int color,Dynamic callback){
{
		HX_STACK_FRAME("org.wildrabbit.game.Pickup","init",0x3fd31366,"org.wildrabbit.game.Pickup.init","org/wildrabbit/game/Pickup.hx",33,0x989ecf65)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(gfx,"gfx")
		HX_STACK_ARG(idx,"idx")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(callback,"callback")
		HX_STACK_LINE(34)
		Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(34)
		this->reset(tmp,tmp1);
		HX_STACK_LINE(35)
		this->set_solid(true);
		HX_STACK_LINE(36)
		Dynamic tmp2 = gfx;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(36)
		this->loadGraphic(tmp2,true,(int)32,(int)32,null(),null());
		HX_STACK_LINE(37)
		::flixel::animation::FlxAnimationController tmp3 = this->animation;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(37)
		tmp3->add(HX_HCSTRING("anim","\x11","\x86","\x71","\x40"),Array_obj< int >::__new().Add(idx),(int)1,null(),null(),null());
		HX_STACK_LINE(38)
		::flixel::animation::FlxAnimationController tmp4 = this->animation;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(38)
		tmp4->add(HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),Array_obj< int >::__new().Add((int)4).Add((int)5).Add((int)6).Add((int)7),(int)12,false,null(),null());
		HX_STACK_LINE(39)
		::flixel::animation::FlxAnimationController tmp5 = this->animation;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(39)
		tmp5->play(HX_HCSTRING("anim","\x11","\x86","\x71","\x40"),null(),null(),null());
		HX_STACK_LINE(40)
		Dynamic tmp6 = this->onAnimFinished_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(40)
		::flixel::animation::FlxAnimationController tmp7 = this->animation;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(40)
		tmp7->finishCallback = tmp6;
		HX_STACK_LINE(41)
		this->mType = type;
		HX_STACK_LINE(42)
		this->mCallback = callback;
		HX_STACK_LINE(43)
		int tmp8 = color;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(43)
		this->set_color(tmp8);
		HX_STACK_LINE(44)
		::flixel::math::FlxPoint tmp9 = this->scale;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(44)
		tmp9->set((int)1,(int)1);
		HX_STACK_LINE(45)
		::flixel::util::FlxTimer tmp10 = this->mLifeTimer;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(45)
		Dynamic tmp11 = this->onTimeout_dyn();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(45)
		tmp10->start((int)10,tmp11,null());
		HX_STACK_LINE(46)
		::flixel::math::FlxPoint tmp12 = this->scale;		HX_STACK_VAR(tmp12,"tmp12");
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/wildrabbit/game/Pickup.hx",46,0x989ecf65)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , ((Float)1.25),false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , ((Float)1.25),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(46)
		Dynamic tmp13 = _Function_1_1::Block();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(46)
		Dynamic tmp14 = ::flixel::tweens::FlxEase_obj::elasticInOut_dyn();		HX_STACK_VAR(tmp14,"tmp14");
		struct _Function_1_2{
			inline static Dynamic Block( Dynamic &tmp14){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","org/wildrabbit/game/Pickup.hx",46,0x989ecf65)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , (int)4,false);
					__result->Add(HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43") , tmp14,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(46)
		Dynamic tmp15 = _Function_1_2::Block(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(46)
		::flixel::tweens::misc::VarTween tmp16 = ::flixel::tweens::FlxTween_obj::tween(tmp12,tmp13,((Float)0.5),tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(46)
		this->mTween = tmp16;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(Pickup_obj,init,(void))

Void Pickup_obj::update( Float dt){
{
		HX_STACK_FRAME("org.wildrabbit.game.Pickup","update",0x19049fdf,"org.wildrabbit.game.Pickup.update","org/wildrabbit/game/Pickup.hx",49,0x989ecf65)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(50)
		Float tmp = dt;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(50)
		this->super::update(tmp);
		HX_STACK_LINE(51)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(51)
		{
			HX_STACK_LINE(51)
			::flixel::util::FlxTimer tmp2 = this->mLifeTimer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(51)
			::flixel::util::FlxTimer _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(51)
			bool tmp3 = (_this->time > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(51)
			if ((tmp3)){
				HX_STACK_LINE(51)
				tmp1 = (Float(_this->_timeCounter) / Float(_this->time));
			}
			else{
				HX_STACK_LINE(51)
				tmp1 = (int)0;
			}
		}
		HX_STACK_LINE(51)
		bool tmp2 = (tmp1 > ((Float)0.5));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(51)
		if ((tmp2)){
			HX_STACK_LINE(51)
			bool tmp4 = ::flixel::effects::FlxFlicker_obj::isFlickering(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(51)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(51)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(51)
			tmp3 = !(tmp6);
		}
		else{
			HX_STACK_LINE(51)
			tmp3 = false;
		}
		HX_STACK_LINE(51)
		if ((tmp3)){
			HX_STACK_LINE(53)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(53)
			{
				HX_STACK_LINE(53)
				::flixel::util::FlxTimer tmp5 = this->mLifeTimer;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(53)
				::flixel::util::FlxTimer _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(53)
				tmp4 = (_this->time - _this->_timeCounter);
			}
			HX_STACK_LINE(53)
			::flixel::effects::FlxFlicker_obj::flicker(hx::ObjectPtr<OBJ_>(this),tmp4,((Float)0.08),null(),null(),null(),null());
		}
	}
return null();
}


Void Pickup_obj::onTimeout( ::flixel::util::FlxTimer t){
{
		HX_STACK_FRAME("org.wildrabbit.game.Pickup","onTimeout",0x3bcc032c,"org.wildrabbit.game.Pickup.onTimeout","org/wildrabbit/game/Pickup.hx",58,0x989ecf65)
		HX_STACK_THIS(this)
		HX_STACK_ARG(t,"t")
		HX_STACK_LINE(59)
		::flixel::tweens::FlxTween tmp = this->mTween;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(59)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(59)
		if ((tmp1)){
			HX_STACK_LINE(59)
			::flixel::tweens::FlxTween tmp2 = this->mTween;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(59)
			tmp2->cancel();
		}
		HX_STACK_LINE(60)
		::flixel::animation::FlxAnimationController tmp2 = this->animation;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(60)
		::String tmp3 = tmp2->get_name();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(60)
		bool tmp4 = (tmp3 != HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(60)
		if ((tmp4)){
			HX_STACK_LINE(61)
			::flixel::animation::FlxAnimationController tmp5 = this->animation;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(61)
			tmp5->play(HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),true,false,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Pickup_obj,onTimeout,(void))

Void Pickup_obj::onAnimFinished( ::String str){
{
		HX_STACK_FRAME("org.wildrabbit.game.Pickup","onAnimFinished",0xa32d0e38,"org.wildrabbit.game.Pickup.onAnimFinished","org/wildrabbit/game/Pickup.hx",65,0x989ecf65)
		HX_STACK_THIS(this)
		HX_STACK_ARG(str,"str")
		HX_STACK_LINE(66)
		bool tmp = (str == HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(66)
		if ((tmp)){
			HX_STACK_LINE(68)
			this->kill();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Pickup_obj,onAnimFinished,(void))

Void Pickup_obj::onPicked( ){
{
		HX_STACK_FRAME("org.wildrabbit.game.Pickup","onPicked",0xc1d3ad55,"org.wildrabbit.game.Pickup.onPicked","org/wildrabbit/game/Pickup.hx",73,0x989ecf65)
		HX_STACK_THIS(this)
		HX_STACK_LINE(74)
		this->set_solid(false);
		HX_STACK_LINE(75)
		::flixel::_system::frontEnds::SoundFrontEnd tmp = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(75)
		tmp->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(HX_HCSTRING("assets/sounds/main_pickup.wav","\x81","\x27","\xe8","\xce"),null(),null(),null(),null(),null());
		HX_STACK_LINE(76)
		Dynamic tmp1 = this->mCallback_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(76)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(76)
		if ((tmp2)){
			HX_STACK_LINE(78)
			this->mCallback();
		}
		HX_STACK_LINE(80)
		::flixel::tweens::FlxTween tmp3 = this->mTween;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(80)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(80)
		if ((tmp4)){
			HX_STACK_LINE(82)
			::flixel::tweens::FlxTween tmp5 = this->mTween;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(82)
			tmp5->cancel();
		}
		HX_STACK_LINE(84)
		::flixel::animation::FlxAnimationController tmp5 = this->animation;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(84)
		tmp5->play(HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),true,false,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Pickup_obj,onPicked,(void))


Pickup_obj::Pickup_obj()
{
}

void Pickup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Pickup);
	HX_MARK_MEMBER_NAME(mType,"mType");
	HX_MARK_MEMBER_NAME(mCallback,"mCallback");
	HX_MARK_MEMBER_NAME(mTween,"mTween");
	HX_MARK_MEMBER_NAME(mLifeTimer,"mLifeTimer");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Pickup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mType,"mType");
	HX_VISIT_MEMBER_NAME(mCallback,"mCallback");
	HX_VISIT_MEMBER_NAME(mTween,"mTween");
	HX_VISIT_MEMBER_NAME(mLifeTimer,"mLifeTimer");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Pickup_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mType") ) { return mType; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mTween") ) { return mTween; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onPicked") ) { return onPicked_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mCallback") ) { return mCallback; }
		if (HX_FIELD_EQ(inName,"onTimeout") ) { return onTimeout_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mLifeTimer") ) { return mLifeTimer; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onAnimFinished") ) { return onAnimFinished_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Pickup_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"mType") ) { mType=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mTween") ) { mTween=inValue.Cast< ::flixel::tweens::FlxTween >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mCallback") ) { mCallback=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mLifeTimer") ) { mLifeTimer=inValue.Cast< ::flixel::util::FlxTimer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Pickup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("mType","\xc7","\x59","\x8f","\xfa"));
	outFields->push(HX_HCSTRING("mTween","\xbe","\x6e","\x84","\x41"));
	outFields->push(HX_HCSTRING("mLifeTimer","\xfc","\xf6","\x0c","\x8c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Pickup_obj,mType),HX_HCSTRING("mType","\xc7","\x59","\x8f","\xfa")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Pickup_obj,mCallback),HX_HCSTRING("mCallback","\x52","\x0b","\x82","\x29")},
	{hx::fsObject /*::flixel::tweens::FlxTween*/ ,(int)offsetof(Pickup_obj,mTween),HX_HCSTRING("mTween","\xbe","\x6e","\x84","\x41")},
	{hx::fsObject /*::flixel::util::FlxTimer*/ ,(int)offsetof(Pickup_obj,mLifeTimer),HX_HCSTRING("mLifeTimer","\xfc","\xf6","\x0c","\x8c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("mType","\xc7","\x59","\x8f","\xfa"),
	HX_HCSTRING("mCallback","\x52","\x0b","\x82","\x29"),
	HX_HCSTRING("mTween","\xbe","\x6e","\x84","\x41"),
	HX_HCSTRING("mLifeTimer","\xfc","\xf6","\x0c","\x8c"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("onTimeout","\x42","\xd3","\xa1","\xb0"),
	HX_HCSTRING("onAnimFinished","\x62","\x2e","\x1f","\x91"),
	HX_HCSTRING("onPicked","\xff","\xf1","\x79","\x5e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Pickup_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Pickup_obj::__mClass,"__mClass");
};

#endif

hx::Class Pickup_obj::__mClass;

void Pickup_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("org.wildrabbit.game.Pickup","\xd8","\x67","\x37","\x3a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Pickup_obj >;
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
} // end namespace game
