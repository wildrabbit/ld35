#ifndef INCLUDED_org_wildrabbit_FlxTimedEmitter
#define INCLUDED_org_wildrabbit_FlxTimedEmitter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_effects_particles_FlxTypedEmitter
#include <flixel/effects/particles/FlxTypedEmitter.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS3(flixel,effects,particles,FlxTypedEmitter)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(org,wildrabbit,FlxTimedEmitter)
namespace org{
namespace wildrabbit{


class HXCPP_CLASS_ATTRIBUTES  FlxTimedEmitter_obj : public ::flixel::effects::particles::FlxTypedEmitter_obj{
	public:
		typedef ::flixel::effects::particles::FlxTypedEmitter_obj super;
		typedef FlxTimedEmitter_obj OBJ_;
		FlxTimedEmitter_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="org.wildrabbit.FlxTimedEmitter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxTimedEmitter_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxTimedEmitter_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxTimedEmitter","\xe9","\x0d","\x21","\xfb"); }

		::flixel::util::FlxTimer timer;
		Dynamic mCallback;
		Dynamic &mCallback_dyn() { return mCallback;}
		virtual Void startTimed( Float duration,bool explode,Float freq,int quantity,Dynamic callback);
		Dynamic startTimed_dyn();

		virtual Void timeout( ::flixel::util::FlxTimer timer);
		Dynamic timeout_dyn();

};

} // end namespace org
} // end namespace wildrabbit

#endif /* INCLUDED_org_wildrabbit_FlxTimedEmitter */ 
