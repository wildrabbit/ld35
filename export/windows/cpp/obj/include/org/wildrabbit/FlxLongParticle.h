#ifndef INCLUDED_org_wildrabbit_FlxLongParticle
#define INCLUDED_org_wildrabbit_FlxLongParticle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_effects_particles_FlxParticle
#include <flixel/effects/particles/FlxParticle.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,effects,particles,FlxParticle)
HX_DECLARE_CLASS3(flixel,effects,particles,IFlxParticle)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(org,wildrabbit,FlxLongParticle)
namespace org{
namespace wildrabbit{


class HXCPP_CLASS_ATTRIBUTES  FlxLongParticle_obj : public ::flixel::effects::particles::FlxParticle_obj{
	public:
		typedef ::flixel::effects::particles::FlxParticle_obj super;
		typedef FlxLongParticle_obj OBJ_;
		FlxLongParticle_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="org.wildrabbit.FlxLongParticle")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxLongParticle_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxLongParticle_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FlxLongParticle","\x54","\x77","\xd0","\xba"); }

		virtual Void update( Float elapsed);

		virtual Void reset( Float X,Float Y);

};

} // end namespace org
} // end namespace wildrabbit

#endif /* INCLUDED_org_wildrabbit_FlxLongParticle */ 
