// Generated by Haxe 3.4.0
#ifndef INCLUDED_haxe_zip_FlushMode
#define INCLUDED_haxe_zip_FlushMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,zip,FlushMode)
namespace haxe{
namespace zip{


class FlushMode_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef FlushMode_obj OBJ_;

	public:
		FlushMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_HCSTRING("haxe.zip.FlushMode","\x12","\x16","\x75","\x3c"); }
		::String __ToString() const { return HX_HCSTRING("FlushMode.","\x27","\xae","\x0a","\x99") + _hx_tag; }

		static ::haxe::zip::FlushMode BLOCK;
		static inline ::haxe::zip::FlushMode BLOCK_dyn() { return BLOCK; }
		static ::haxe::zip::FlushMode FINISH;
		static inline ::haxe::zip::FlushMode FINISH_dyn() { return FINISH; }
		static ::haxe::zip::FlushMode FULL;
		static inline ::haxe::zip::FlushMode FULL_dyn() { return FULL; }
		static ::haxe::zip::FlushMode _hx_NO;
		static inline ::haxe::zip::FlushMode _hx_NO_dyn() { return _hx_NO; }
		static ::haxe::zip::FlushMode SYNC;
		static inline ::haxe::zip::FlushMode SYNC_dyn() { return SYNC; }
};

} // end namespace haxe
} // end namespace zip

#endif /* INCLUDED_haxe_zip_FlushMode */ 
