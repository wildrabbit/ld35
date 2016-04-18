#ifndef INCLUDED_org_wildrabbit_Reg
#define INCLUDED_org_wildrabbit_Reg

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,util,FlxSave)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(org,wildrabbit,Reg)
namespace org{
namespace wildrabbit{


class HXCPP_CLASS_ATTRIBUTES  Reg_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Reg_obj OBJ_;
		Reg_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="org.wildrabbit.Reg")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Reg_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Reg_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Reg","\x34","\x91","\x3e","\x00"); }

		static void __boot();
		static cpp::ArrayBase levels;
		static int level;
		static cpp::ArrayBase scores;
		static int score;
		static int highScore;
		static Float time;
		static Float maxTime;
		static Array< ::Dynamic > saves;
};

} // end namespace org
} // end namespace wildrabbit

#endif /* INCLUDED_org_wildrabbit_Reg */ 
