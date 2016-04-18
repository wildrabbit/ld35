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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxVector
#include <flixel/math/FlxVector.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxVector
#include <flixel/util/FlxPool_flixel_math_FlxVector.h>
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
#ifndef INCLUDED_org_wildrabbit_PlayState
#include <org/wildrabbit/PlayState.h>
#endif
#ifndef INCLUDED_org_wildrabbit_game_Entity
#include <org/wildrabbit/game/Entity.h>
#endif
namespace org{
namespace wildrabbit{
namespace game{

Void Entity_obj::__construct(::org::wildrabbit::PlayState parent,Float speed)
{
HX_STACK_FRAME("org.wildrabbit.game.Entity","new",0x01b23df1,"org.wildrabbit.game.Entity.new","org/wildrabbit/game/Entity.hx",23,0x0efe081e)
HX_STACK_THIS(this)
HX_STACK_ARG(parent,"parent")
HX_STACK_ARG(speed,"speed")
{
	HX_STACK_LINE(24)
	super::__construct((int)0,(int)0,null());
	HX_STACK_LINE(25)
	this->mParent = parent;
	HX_STACK_LINE(26)
	this->mSpeed = speed;
	HX_STACK_LINE(27)
	::flixel::math::FlxVector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	{
		HX_STACK_LINE(27)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(27)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(27)
		::flixel::util::FlxPool_flixel_math_FlxVector tmp1 = ::flixel::math::FlxVector_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(27)
		::flixel::math::FlxVector tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(27)
		Float tmp3 = X;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(27)
		Float tmp4 = Y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(27)
		::flixel::math::FlxVector tmp5 = hx::TCast< ::flixel::math::FlxVector >::cast(tmp2->set(tmp3,tmp4));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(27)
		::flixel::math::FlxVector vector = tmp5;		HX_STACK_VAR(vector,"vector");
		HX_STACK_LINE(27)
		vector->_inPool = false;
		HX_STACK_LINE(27)
		tmp = vector;
	}
	HX_STACK_LINE(27)
	this->velocity = tmp;
}
;
	return null();
}

//Entity_obj::~Entity_obj() { }

Dynamic Entity_obj::__CreateEmpty() { return  new Entity_obj; }
hx::ObjectPtr< Entity_obj > Entity_obj::__new(::org::wildrabbit::PlayState parent,Float speed)
{  hx::ObjectPtr< Entity_obj > _result_ = new Entity_obj();
	_result_->__construct(parent,speed);
	return _result_;}

Dynamic Entity_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Entity_obj > _result_ = new Entity_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Entity_obj::switchShape( int shape){
{
		HX_STACK_FRAME("org.wildrabbit.game.Entity","switchShape",0x436c5b1e,"org.wildrabbit.game.Entity.switchShape","org/wildrabbit/game/Entity.hx",31,0x0efe081e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shape,"shape")
		HX_STACK_LINE(32)
		this->mShape = shape;
		HX_STACK_LINE(33)
		int tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		tmp = hx::TCast< ::Int >::cast(shape);
		HX_STACK_LINE(33)
		int idx = tmp;		HX_STACK_VAR(idx,"idx");
		HX_STACK_LINE(34)
		int tmp1 = ::org::wildrabbit::game::Entity_obj::ShapeColours->__get(idx);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(34)
		this->set_color(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,switchShape,(void))

Void Entity_obj::update( Float elapsed){
{
		HX_STACK_FRAME("org.wildrabbit.game.Entity","update",0xa0812918,"org.wildrabbit.game.Entity.update","org/wildrabbit/game/Entity.hx",38,0x0efe081e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(39)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(39)
		this->super::update(tmp);
	}
return null();
}


Void Entity_obj::destroy( ){
{
		HX_STACK_FRAME("org.wildrabbit.game.Entity","destroy",0x5739370b,"org.wildrabbit.game.Entity.destroy","org/wildrabbit/game/Entity.hx",43,0x0efe081e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(44)
		::flixel::math::FlxPoint tmp = this->velocity;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(44)
		tmp->put();
	}
return null();
}


Array< int > Entity_obj::ShapeColours;


Entity_obj::Entity_obj()
{
}

void Entity_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Entity);
	HX_MARK_MEMBER_NAME(mShape,"mShape");
	HX_MARK_MEMBER_NAME(mParent,"mParent");
	HX_MARK_MEMBER_NAME(mSpeed,"mSpeed");
	HX_MARK_MEMBER_NAME(mID,"mID");
	HX_MARK_MEMBER_NAME(maxHealth,"maxHealth");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Entity_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mShape,"mShape");
	HX_VISIT_MEMBER_NAME(mParent,"mParent");
	HX_VISIT_MEMBER_NAME(mSpeed,"mSpeed");
	HX_VISIT_MEMBER_NAME(mID,"mID");
	HX_VISIT_MEMBER_NAME(maxHealth,"maxHealth");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Entity_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"mID") ) { return mID; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mShape") ) { return mShape; }
		if (HX_FIELD_EQ(inName,"mSpeed") ) { return mSpeed; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mParent") ) { return mParent; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"maxHealth") ) { return maxHealth; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"switchShape") ) { return switchShape_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Entity_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"ShapeColours") ) { outValue = ShapeColours; return true;  }
	}
	return false;
}

Dynamic Entity_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"mID") ) { mID=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mShape") ) { mShape=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mSpeed") ) { mSpeed=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mParent") ) { mParent=inValue.Cast< ::org::wildrabbit::PlayState >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"maxHealth") ) { maxHealth=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Entity_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"ShapeColours") ) { ShapeColours=ioValue.Cast< Array< int > >(); return true; }
	}
	return false;
}

void Entity_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("mShape","\x74","\xa7","\x30","\xa4"));
	outFields->push(HX_HCSTRING("mParent","\x77","\x09","\xb6","\xd6"));
	outFields->push(HX_HCSTRING("mSpeed","\xda","\x5b","\x7d","\xa9"));
	outFields->push(HX_HCSTRING("mID","\x88","\xf5","\x52","\x00"));
	outFields->push(HX_HCSTRING("maxHealth","\x60","\x3a","\x91","\x2c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Entity_obj,mShape),HX_HCSTRING("mShape","\x74","\xa7","\x30","\xa4")},
	{hx::fsObject /*::org::wildrabbit::PlayState*/ ,(int)offsetof(Entity_obj,mParent),HX_HCSTRING("mParent","\x77","\x09","\xb6","\xd6")},
	{hx::fsFloat,(int)offsetof(Entity_obj,mSpeed),HX_HCSTRING("mSpeed","\xda","\x5b","\x7d","\xa9")},
	{hx::fsInt,(int)offsetof(Entity_obj,mID),HX_HCSTRING("mID","\x88","\xf5","\x52","\x00")},
	{hx::fsInt,(int)offsetof(Entity_obj,maxHealth),HX_HCSTRING("maxHealth","\x60","\x3a","\x91","\x2c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< int >*/ ,(void *) &Entity_obj::ShapeColours,HX_HCSTRING("ShapeColours","\xa6","\x21","\xe2","\x1e")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("mShape","\x74","\xa7","\x30","\xa4"),
	HX_HCSTRING("mParent","\x77","\x09","\xb6","\xd6"),
	HX_HCSTRING("mSpeed","\xda","\x5b","\x7d","\xa9"),
	HX_HCSTRING("mID","\x88","\xf5","\x52","\x00"),
	HX_HCSTRING("maxHealth","\x60","\x3a","\x91","\x2c"),
	HX_HCSTRING("switchShape","\x8d","\x74","\x9c","\x6f"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Entity_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Entity_obj::ShapeColours,"ShapeColours");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Entity_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Entity_obj::ShapeColours,"ShapeColours");
};

#endif

hx::Class Entity_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("ShapeColours","\xa6","\x21","\xe2","\x1e"),
	::String(null()) };

void Entity_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("org.wildrabbit.game.Entity","\x7f","\x71","\x86","\xc0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Entity_obj::__GetStatic;
	__mClass->mSetStaticField = &Entity_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Entity_obj >;
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

void Entity_obj::__boot()
{
	ShapeColours= Array_obj< int >::__new().Add((int)-23296).Add((int)-8388480).Add((int)-16711936);
}

} // end namespace org
} // end namespace wildrabbit
} // end namespace game
