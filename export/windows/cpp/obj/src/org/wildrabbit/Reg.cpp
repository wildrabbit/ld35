#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_org_wildrabbit_Reg
#include <org/wildrabbit/Reg.h>
#endif
namespace org{
namespace wildrabbit{

Void Reg_obj::__construct()
{
	return null();
}

//Reg_obj::~Reg_obj() { }

Dynamic Reg_obj::__CreateEmpty() { return  new Reg_obj; }
hx::ObjectPtr< Reg_obj > Reg_obj::__new()
{  hx::ObjectPtr< Reg_obj > _result_ = new Reg_obj();
	_result_->__construct();
	return _result_;}

Dynamic Reg_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Reg_obj > _result_ = new Reg_obj();
	_result_->__construct();
	return _result_;}

cpp::ArrayBase Reg_obj::levels;

int Reg_obj::level;

cpp::ArrayBase Reg_obj::scores;

int Reg_obj::score;

int Reg_obj::highScore;

Float Reg_obj::time;

Float Reg_obj::maxTime;

Array< ::Dynamic > Reg_obj::saves;


Reg_obj::Reg_obj()
{
}

bool Reg_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { outValue = time; return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { outValue = level; return true;  }
		if (HX_FIELD_EQ(inName,"score") ) { outValue = score; return true;  }
		if (HX_FIELD_EQ(inName,"saves") ) { outValue = saves; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"levels") ) { outValue = levels; return true;  }
		if (HX_FIELD_EQ(inName,"scores") ) { outValue = scores; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"maxTime") ) { outValue = maxTime; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"highScore") ) { outValue = highScore; return true;  }
	}
	return false;
}

bool Reg_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { time=ioValue.Cast< Float >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { level=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"score") ) { score=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"saves") ) { saves=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"levels") ) { levels=ioValue.Cast< cpp::ArrayBase >(); return true; }
		if (HX_FIELD_EQ(inName,"scores") ) { scores=ioValue.Cast< cpp::ArrayBase >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"maxTime") ) { maxTime=ioValue.Cast< Float >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"highScore") ) { highScore=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*cpp::ArrayBase*/ ,(void *) &Reg_obj::levels,HX_HCSTRING("levels","\x6f","\xbe","\x4f","\xa4")},
	{hx::fsInt,(void *) &Reg_obj::level,HX_HCSTRING("level","\x84","\x15","\x63","\x72")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(void *) &Reg_obj::scores,HX_HCSTRING("scores","\xe1","\x74","\x6b","\x45")},
	{hx::fsInt,(void *) &Reg_obj::score,HX_HCSTRING("score","\x52","\x73","\xd9","\x78")},
	{hx::fsInt,(void *) &Reg_obj::highScore,HX_HCSTRING("highScore","\x90","\xa8","\x0a","\x84")},
	{hx::fsFloat,(void *) &Reg_obj::time,HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c")},
	{hx::fsFloat,(void *) &Reg_obj::maxTime,HX_HCSTRING("maxTime","\xd1","\x24","\x2d","\xcd")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Reg_obj::saves,HX_HCSTRING("saves","\x96","\x4a","\x8c","\x77")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Reg_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Reg_obj::levels,"levels");
	HX_MARK_MEMBER_NAME(Reg_obj::level,"level");
	HX_MARK_MEMBER_NAME(Reg_obj::scores,"scores");
	HX_MARK_MEMBER_NAME(Reg_obj::score,"score");
	HX_MARK_MEMBER_NAME(Reg_obj::highScore,"highScore");
	HX_MARK_MEMBER_NAME(Reg_obj::time,"time");
	HX_MARK_MEMBER_NAME(Reg_obj::maxTime,"maxTime");
	HX_MARK_MEMBER_NAME(Reg_obj::saves,"saves");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Reg_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Reg_obj::levels,"levels");
	HX_VISIT_MEMBER_NAME(Reg_obj::level,"level");
	HX_VISIT_MEMBER_NAME(Reg_obj::scores,"scores");
	HX_VISIT_MEMBER_NAME(Reg_obj::score,"score");
	HX_VISIT_MEMBER_NAME(Reg_obj::highScore,"highScore");
	HX_VISIT_MEMBER_NAME(Reg_obj::time,"time");
	HX_VISIT_MEMBER_NAME(Reg_obj::maxTime,"maxTime");
	HX_VISIT_MEMBER_NAME(Reg_obj::saves,"saves");
};

#endif

hx::Class Reg_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("levels","\x6f","\xbe","\x4f","\xa4"),
	HX_HCSTRING("level","\x84","\x15","\x63","\x72"),
	HX_HCSTRING("scores","\xe1","\x74","\x6b","\x45"),
	HX_HCSTRING("score","\x52","\x73","\xd9","\x78"),
	HX_HCSTRING("highScore","\x90","\xa8","\x0a","\x84"),
	HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"),
	HX_HCSTRING("maxTime","\xd1","\x24","\x2d","\xcd"),
	HX_HCSTRING("saves","\x96","\x4a","\x8c","\x77"),
	::String(null()) };

void Reg_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("org.wildrabbit.Reg","\x74","\x96","\x6c","\xa5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Reg_obj::__GetStatic;
	__mClass->mSetStaticField = &Reg_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Reg_obj >;
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

void Reg_obj::__boot()
{
	levels= cpp::ArrayBase_obj::__new();
	level= (int)0;
	scores= cpp::ArrayBase_obj::__new();
	score= (int)0;
	highScore= (int)0;
	time= ((Float)0);
	maxTime= ((Float)0);
	saves= Array_obj< ::Dynamic >::__new();
}

} // end namespace org
} // end namespace wildrabbit
