// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

namespace flixel{
namespace util{


static ::String IFlxPooled_obj_sMemberFields[] = {
	HX_HCSTRING("put","\xcf","\x62","\x55","\x00"),
	HX_HCSTRING("_inPool","\x00","\x71","\x39","\xf5"),
	::String(null()) };

static void IFlxPooled_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IFlxPooled_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void IFlxPooled_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IFlxPooled_obj::__mClass,"__mClass");
};

#endif

hx::Class IFlxPooled_obj::__mClass;

void IFlxPooled_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.IFlxPooled","\x9e","\xd7","\x60","\xf4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = IFlxPooled_obj_sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(IFlxPooled_obj_sMemberFields);
	__mClass->mCanCast = hx::TIsInterface< (int)0x9aa322a2 >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = IFlxPooled_obj_sVisitStatics;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util
