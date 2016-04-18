#include <hxcpp.h>

#ifndef INCLUDED_openfl_ui__MultitouchInputMode_MultitouchInputMode_Impl_
#include <openfl/ui/_MultitouchInputMode/MultitouchInputMode_Impl_.h>
#endif
namespace openfl{
namespace ui{
namespace _MultitouchInputMode{

Void MultitouchInputMode_Impl__obj::__construct()
{
	return null();
}

//MultitouchInputMode_Impl__obj::~MultitouchInputMode_Impl__obj() { }

Dynamic MultitouchInputMode_Impl__obj::__CreateEmpty() { return  new MultitouchInputMode_Impl__obj; }
hx::ObjectPtr< MultitouchInputMode_Impl__obj > MultitouchInputMode_Impl__obj::__new()
{  hx::ObjectPtr< MultitouchInputMode_Impl__obj > _result_ = new MultitouchInputMode_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic MultitouchInputMode_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MultitouchInputMode_Impl__obj > _result_ = new MultitouchInputMode_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic MultitouchInputMode_Impl__obj::GESTURE;

Dynamic MultitouchInputMode_Impl__obj::NONE;

Dynamic MultitouchInputMode_Impl__obj::TOUCH_POINT;

Dynamic MultitouchInputMode_Impl__obj::fromString( ::String value){
	HX_STACK_FRAME("openfl.ui._MultitouchInputMode.MultitouchInputMode_Impl_","fromString",0x1bb65d6c,"openfl.ui._MultitouchInputMode.MultitouchInputMode_Impl_.fromString","openfl/ui/MultitouchInputMode.hx",10,0x44de2b53)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(12)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("gesture","\x89","\xda","\x48","\xa1"))){
		HX_STACK_LINE(14)
		tmp1 = ((Dynamic)((int)0));
	}
	else if (  ( _switch_1==HX_HCSTRING("none","\xb8","\x12","\x0a","\x49"))){
		HX_STACK_LINE(15)
		tmp1 = ((Dynamic)((int)1));
	}
	else if (  ( _switch_1==HX_HCSTRING("touchPoint","\x11","\x98","\x20","\xc0"))){
		HX_STACK_LINE(16)
		tmp1 = ((Dynamic)((int)2));
	}
	else  {
		HX_STACK_LINE(17)
		tmp1 = null();
	}
;
;
	HX_STACK_LINE(12)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MultitouchInputMode_Impl__obj,fromString,return )

::String MultitouchInputMode_Impl__obj::toString( int value){
	HX_STACK_FRAME("openfl.ui._MultitouchInputMode.MultitouchInputMode_Impl_","toString",0xaea349fd,"openfl.ui._MultitouchInputMode.MultitouchInputMode_Impl_.toString","openfl/ui/MultitouchInputMode.hx",23,0x44de2b53)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(25)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(27)
			tmp1 = HX_HCSTRING("gesture","\x89","\xda","\x48","\xa1");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(28)
			tmp1 = HX_HCSTRING("none","\xb8","\x12","\x0a","\x49");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(29)
			tmp1 = HX_HCSTRING("touchPoint","\x11","\x98","\x20","\xc0");
		}
		;break;
		default: {
			HX_STACK_LINE(30)
			tmp1 = null();
		}
	}
	HX_STACK_LINE(25)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MultitouchInputMode_Impl__obj,toString,return )


MultitouchInputMode_Impl__obj::MultitouchInputMode_Impl__obj()
{
}

bool MultitouchInputMode_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &MultitouchInputMode_Impl__obj::GESTURE,HX_HCSTRING("GESTURE","\x69","\xae","\x1c","\x21")},
	{hx::fsObject /*Dynamic*/ ,(void *) &MultitouchInputMode_Impl__obj::NONE,HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")},
	{hx::fsObject /*Dynamic*/ ,(void *) &MultitouchInputMode_Impl__obj::TOUCH_POINT,HX_HCSTRING("TOUCH_POINT","\x50","\x84","\xc0","\x94")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MultitouchInputMode_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MultitouchInputMode_Impl__obj::GESTURE,"GESTURE");
	HX_MARK_MEMBER_NAME(MultitouchInputMode_Impl__obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(MultitouchInputMode_Impl__obj::TOUCH_POINT,"TOUCH_POINT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MultitouchInputMode_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MultitouchInputMode_Impl__obj::GESTURE,"GESTURE");
	HX_VISIT_MEMBER_NAME(MultitouchInputMode_Impl__obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(MultitouchInputMode_Impl__obj::TOUCH_POINT,"TOUCH_POINT");
};

#endif

hx::Class MultitouchInputMode_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("GESTURE","\x69","\xae","\x1c","\x21"),
	HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),
	HX_HCSTRING("TOUCH_POINT","\x50","\x84","\xc0","\x94"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void MultitouchInputMode_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.ui._MultitouchInputMode.MultitouchInputMode_Impl_","\x3d","\x55","\xb8","\x85");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MultitouchInputMode_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< MultitouchInputMode_Impl__obj >;
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

void MultitouchInputMode_Impl__obj::__boot()
{
	GESTURE= ((Dynamic)((int)0));
	NONE= ((Dynamic)((int)1));
	TOUCH_POINT= ((Dynamic)((int)2));
}

} // end namespace openfl
} // end namespace ui
} // end namespace _MultitouchInputMode
