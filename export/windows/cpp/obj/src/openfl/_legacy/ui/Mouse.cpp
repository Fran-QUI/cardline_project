// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_ui_Mouse
#include <openfl/_legacy/ui/Mouse.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_933e698a784059fb_12_hide,"openfl._legacy.ui.Mouse","hide",0x4b9f7d41,"openfl._legacy.ui.Mouse.hide","openfl/_legacy/ui/Mouse.hx",12,0x1c6bb10e)
HX_LOCAL_STACK_FRAME(_hx_pos_933e698a784059fb_23_show,"openfl._legacy.ui.Mouse","show",0x52e41d7c,"openfl._legacy.ui.Mouse.show","openfl/_legacy/ui/Mouse.hx",23,0x1c6bb10e)
namespace openfl{
namespace _legacy{
namespace ui{

void Mouse_obj::__construct() { }

Dynamic Mouse_obj::__CreateEmpty() { return new Mouse_obj; }

void *Mouse_obj::_hx_vtable = 0;

Dynamic Mouse_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Mouse_obj > _hx_result = new Mouse_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Mouse_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x118c92e1;
}

void Mouse_obj::hide(){
            	HX_STACKFRAME(&_hx_pos_933e698a784059fb_12_hide)
HXLINE(  12)		if (hx::IsNotNull( ::openfl::_legacy::Lib_obj::get_stage() )) {
HXLINE(  14)			::openfl::_legacy::Lib_obj::get_stage()->showCursor(false);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,hide,(void))

void Mouse_obj::show(){
            	HX_STACKFRAME(&_hx_pos_933e698a784059fb_23_show)
HXLINE(  23)		if (hx::IsNotNull( ::openfl::_legacy::Lib_obj::get_stage() )) {
HXLINE(  25)			::openfl::_legacy::Lib_obj::get_stage()->showCursor(true);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,show,(void))


Mouse_obj::Mouse_obj()
{
}

bool Mouse_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hide") ) { outValue = hide_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"show") ) { outValue = show_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Mouse_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Mouse_obj_sStaticStorageInfo = 0;
#endif

static void Mouse_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Mouse_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Mouse_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Mouse_obj::__mClass,"__mClass");
};

#endif

hx::Class Mouse_obj::__mClass;

static ::String Mouse_obj_sStaticFields[] = {
	HX_HCSTRING("hide","\xc2","\x34","\x0e","\x45"),
	HX_HCSTRING("show","\xfd","\xd4","\x52","\x4c"),
	::String(null())
};

void Mouse_obj::__register()
{
	hx::Object *dummy = new Mouse_obj;
	Mouse_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.ui.Mouse","\x4f","\xe8","\xa5","\xc1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Mouse_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Mouse_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Mouse_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Mouse_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Mouse_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Mouse_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Mouse_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace ui
