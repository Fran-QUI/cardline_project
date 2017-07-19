// Generated by Haxe 3.4.0
#ifndef INCLUDED_haxe_unit_TestCase
#define INCLUDED_haxe_unit_TestCase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,unit,TestCase)
HX_DECLARE_CLASS2(haxe,unit,TestStatus)

namespace haxe{
namespace unit{


class HXCPP_CLASS_ATTRIBUTES TestCase_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef TestCase_obj OBJ_;
		TestCase_obj();

	public:
		enum { _hx_ClassId = 0x7635cd6c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.unit.TestCase")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.unit.TestCase"); }
		static hx::ObjectPtr< TestCase_obj > __new();
		static hx::ObjectPtr< TestCase_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TestCase_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("TestCase","\x42","\x60","\x9e","\x1e"); }

		 ::haxe::unit::TestStatus currentTest;
		void setup();
		::Dynamic setup_dyn();

		void tearDown();
		::Dynamic tearDown_dyn();

		void print( ::Dynamic v);
		::Dynamic print_dyn();

		void assertTrue(bool b, ::Dynamic c);
		::Dynamic assertTrue_dyn();

		void assertFalse(bool b, ::Dynamic c);
		::Dynamic assertFalse_dyn();

		void assertEquals( ::Dynamic expected, ::Dynamic actual, ::Dynamic c);
		::Dynamic assertEquals_dyn();

};

} // end namespace haxe
} // end namespace unit

#endif /* INCLUDED_haxe_unit_TestCase */ 
