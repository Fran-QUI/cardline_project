// Generated by Haxe 3.4.0
#ifndef INCLUDED_openfl_display3D__Context3DCompareMode_Context3DCompareMode_Impl_
#define INCLUDED_openfl_display3D__Context3DCompareMode_Context3DCompareMode_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,display3D,_Context3DCompareMode,Context3DCompareMode_Impl_)

namespace openfl{
namespace display3D{
namespace _Context3DCompareMode{


class HXCPP_CLASS_ATTRIBUTES Context3DCompareMode_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Context3DCompareMode_Impl__obj OBJ_;
		Context3DCompareMode_Impl__obj();

	public:
		enum { _hx_ClassId = 0x4ebd56b0 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_"); }

		hx::ObjectPtr< Context3DCompareMode_Impl__obj > __new() {
			hx::ObjectPtr< Context3DCompareMode_Impl__obj > __this = new Context3DCompareMode_Impl__obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Context3DCompareMode_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			Context3DCompareMode_Impl__obj *__this = (Context3DCompareMode_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Context3DCompareMode_Impl__obj), false, "openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_"));
			*(void **)__this = Context3DCompareMode_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Context3DCompareMode_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Context3DCompareMode_Impl_","\xe8","\x34","\x29","\x98"); }

		static void __boot();
		static int ALWAYS;
		static int EQUAL;
		static int GREATER;
		static int GREATER_EQUAL;
		static int LESS;
		static int LESS_EQUAL;
		static int NEVER;
		static int NOT_EQUAL;
		static int _new(int a);
		static ::Dynamic _new_dyn();

		static int fromInt(int s);
		static ::Dynamic fromInt_dyn();

		static int toInt(int this1);
		static ::Dynamic toInt_dyn();

};

} // end namespace openfl
} // end namespace display3D
} // end namespace _Context3DCompareMode

#endif /* INCLUDED_openfl_display3D__Context3DCompareMode_Context3DCompareMode_Impl_ */ 
