#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxParticle
#include <flixel/effects/particles/FlxParticle.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxTypedEmitter
#include <flixel/effects/particles/FlxTypedEmitter.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_IFlxParticle
#include <flixel/effects/particles/IFlxParticle.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_org_wildrabbit_FlxLongParticle
#include <org/wildrabbit/FlxLongParticle.h>
#endif
#ifndef INCLUDED_org_wildrabbit_FlxTimedEmitter
#include <org/wildrabbit/FlxTimedEmitter.h>
#endif
namespace org{
namespace wildrabbit{

Void FlxTimedEmitter_obj::__construct()
{
HX_STACK_FRAME("org.wildrabbit.FlxTimedEmitter","new",0xfd80dc9b,"org.wildrabbit.FlxTimedEmitter.new","org/wildrabbit/FlxTimedEmitter.hx",19,0x942044d5)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(20)
	super::__construct(null(),null(),null());
	HX_STACK_LINE(21)
	::flixel::util::FlxTimer tmp = ::flixel::util::FlxTimer_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	this->timer = tmp;
	HX_STACK_LINE(22)
	{
		HX_STACK_LINE(22)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(22)
		while((true)){
			HX_STACK_LINE(22)
			bool tmp1 = (_g < (int)25);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(22)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(22)
			if ((tmp2)){
				HX_STACK_LINE(22)
				break;
			}
			HX_STACK_LINE(22)
			int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(22)
			int j = tmp3;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(24)
			::flixel::effects::particles::FlxParticle tmp4 = ::flixel::effects::particles::FlxParticle_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(24)
			::flixel::effects::particles::FlxParticle part = tmp4;		HX_STACK_VAR(part,"part");
			HX_STACK_LINE(25)
			part->makeGraphic((int)8,(int)8,null(),null(),null());
			HX_STACK_LINE(26)
			part->kill();
			HX_STACK_LINE(27)
			::flixel::effects::particles::FlxParticle tmp5 = part;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(27)
			this->add(tmp5);
			HX_STACK_LINE(29)
			::org::wildrabbit::FlxLongParticle tmp6 = ::org::wildrabbit::FlxLongParticle_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(29)
			::org::wildrabbit::FlxLongParticle part2 = tmp6;		HX_STACK_VAR(part2,"part2");
			HX_STACK_LINE(30)
			part2->makeGraphic((int)16,(int)2,null(),null(),null());
			HX_STACK_LINE(31)
			::flixel::effects::particles::FlxParticle tmp7 = part;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(31)
			::flixel::util::FlxSpriteUtil_obj::drawRect(tmp7,(int)0,(int)0,(int)16,(int)2,null(),null(),null());
			HX_STACK_LINE(32)
			part2->kill();
			HX_STACK_LINE(33)
			::org::wildrabbit::FlxLongParticle tmp8 = part2;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(33)
			this->add(tmp8);
		}
	}
}
;
	return null();
}

//FlxTimedEmitter_obj::~FlxTimedEmitter_obj() { }

Dynamic FlxTimedEmitter_obj::__CreateEmpty() { return  new FlxTimedEmitter_obj; }
hx::ObjectPtr< FlxTimedEmitter_obj > FlxTimedEmitter_obj::__new()
{  hx::ObjectPtr< FlxTimedEmitter_obj > _result_ = new FlxTimedEmitter_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxTimedEmitter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTimedEmitter_obj > _result_ = new FlxTimedEmitter_obj();
	_result_->__construct();
	return _result_;}

Void FlxTimedEmitter_obj::startTimed( Float duration,bool explode,Float freq,int quantity,Dynamic callback){
{
		HX_STACK_FRAME("org.wildrabbit.FlxTimedEmitter","startTimed",0x6ab9591a,"org.wildrabbit.FlxTimedEmitter.startTimed","org/wildrabbit/FlxTimedEmitter.hx",38,0x942044d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(duration,"duration")
		HX_STACK_ARG(explode,"explode")
		HX_STACK_ARG(freq,"freq")
		HX_STACK_ARG(quantity,"quantity")
		HX_STACK_ARG(callback,"callback")
		HX_STACK_LINE(39)
		this->mCallback = callback;
		HX_STACK_LINE(40)
		bool tmp = explode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(40)
		Float tmp1 = freq;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(40)
		int tmp2 = quantity;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(40)
		this->start(tmp,tmp1,tmp2);
		HX_STACK_LINE(41)
		::flixel::util::FlxTimer tmp3 = this->timer;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(41)
		Float tmp4 = duration;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(41)
		Dynamic tmp5 = this->timeout_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(41)
		tmp3->start(tmp4,tmp5,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxTimedEmitter_obj,startTimed,(void))

Void FlxTimedEmitter_obj::timeout( ::flixel::util::FlxTimer timer){
{
		HX_STACK_FRAME("org.wildrabbit.FlxTimedEmitter","timeout",0x383e605c,"org.wildrabbit.FlxTimedEmitter.timeout","org/wildrabbit/FlxTimedEmitter.hx",45,0x942044d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(timer,"timer")
		HX_STACK_LINE(46)
		timer->cancel();
		HX_STACK_LINE(47)
		Dynamic tmp = this->mCallback_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(47)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(47)
		if ((tmp1)){
			HX_STACK_LINE(49)
			this->mCallback();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTimedEmitter_obj,timeout,(void))


FlxTimedEmitter_obj::FlxTimedEmitter_obj()
{
}

void FlxTimedEmitter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTimedEmitter);
	HX_MARK_MEMBER_NAME(timer,"timer");
	HX_MARK_MEMBER_NAME(mCallback,"mCallback");
	::flixel::effects::particles::FlxTypedEmitter_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTimedEmitter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(timer,"timer");
	HX_VISIT_MEMBER_NAME(mCallback,"mCallback");
	::flixel::effects::particles::FlxTypedEmitter_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTimedEmitter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { return timer; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"timeout") ) { return timeout_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mCallback") ) { return mCallback; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startTimed") ) { return startTimed_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTimedEmitter_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< ::flixel::util::FlxTimer >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mCallback") ) { mCallback=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTimedEmitter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::util::FlxTimer*/ ,(int)offsetof(FlxTimedEmitter_obj,timer),HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxTimedEmitter_obj,mCallback),HX_HCSTRING("mCallback","\x52","\x0b","\x82","\x29")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"),
	HX_HCSTRING("mCallback","\x52","\x0b","\x82","\x29"),
	HX_HCSTRING("startTimed","\xf5","\x97","\x4c","\x2c"),
	HX_HCSTRING("timeout","\xa1","\x1a","\xf7","\xd8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTimedEmitter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTimedEmitter_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxTimedEmitter_obj::__mClass;

void FlxTimedEmitter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("org.wildrabbit.FlxTimedEmitter","\x29","\xf3","\xe1","\xdf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxTimedEmitter_obj >;
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
