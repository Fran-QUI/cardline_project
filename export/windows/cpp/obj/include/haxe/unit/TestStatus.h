// Generated by Haxe 3.4.0
#ifndef INCLUDED_haxe_unit_TestStatus
#define INCLUDED_haxe_unit_TestStatus

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,unit,TestStatus)

namespace haxe{
namespace unit{


class HXCPP_CLASS_ATTRIBUTES TestStatus_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef TestStatus_obj OBJ_;
		TestStatus_obj();

	public:
		enum { _hx_ClassId = 0x13cdbcee };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.unit.TestStatus")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.unit.TestStatus"); }

		hx::ObjectPtr< TestStatus_obj > __new() {
			hx::ObjectPtr< TestStatus_obj > __this = new TestStatus_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< TestStatus_obj > __alloc(hx::Ctx *_hx_ctx) {
			TestStatus_obj *__this = (TestStatus_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TestStatus_obj), true, "haxe.unit.TestStatus"));
			*(void **)__this = TestStatus_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TestStatus_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("TestStatus","\x44","\x31","\xa1","\x15"); }

		bool done;
		bool success;
		::String error;
		 ::Dynamic posInfos;
};

} // end namespace haxe
} // end namespace unit

#endif /* INCLUDED_haxe_unit_TestStatus */ 