// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_debug_DebuggerUtil
#include <flixel/system/debug/DebuggerUtil.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFieldAutoSize
#include <openfl/_legacy/text/TextFieldAutoSize.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFormat
#include <openfl/_legacy/text/TextFormat.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_137a9380b585812a_19_createTextField,"flixel.system.debug.DebuggerUtil","createTextField",0x34b9b52e,"flixel.system.debug.DebuggerUtil.createTextField","flixel/system/debug/DebuggerUtil.hx",19,0x13434d32)
HX_LOCAL_STACK_FRAME(_hx_pos_137a9380b585812a_23_initTextField,"flixel.system.debug.DebuggerUtil","initTextField",0x9a50155a,"flixel.system.debug.DebuggerUtil.initTextField","flixel/system/debug/DebuggerUtil.hx",23,0x13434d32)
HX_LOCAL_STACK_FRAME(_hx_pos_137a9380b585812a_48_fixSize,"flixel.system.debug.DebuggerUtil","fixSize",0xaffeaf33,"flixel.system.debug.DebuggerUtil.fixSize","flixel/system/debug/DebuggerUtil.hx",48,0x13434d32)
namespace flixel{
namespace _hx_system{
namespace debug{

void DebuggerUtil_obj::__construct() { }

Dynamic DebuggerUtil_obj::__CreateEmpty() { return new DebuggerUtil_obj; }

void *DebuggerUtil_obj::_hx_vtable = 0;

Dynamic DebuggerUtil_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< DebuggerUtil_obj > _hx_result = new DebuggerUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DebuggerUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x02a0688b;
}

 ::openfl::_legacy::text::TextField DebuggerUtil_obj::createTextField(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_Color,hx::Null< int >  __o_Size){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
int Color = __o_Color.Default(-1);
int Size = __o_Size.Default(12);
            	HX_GC_STACKFRAME(&_hx_pos_137a9380b585812a_19_createTextField)
HXLINE(  19)		return ::flixel::_hx_system::debug::DebuggerUtil_obj::initTextField( ::openfl::_legacy::text::TextField_obj::__alloc( HX_CTX ),X,Y,Color,Size);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(DebuggerUtil_obj,createTextField,return )

 ::Dynamic DebuggerUtil_obj::initTextField( ::Dynamic tf,hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_Color,hx::Null< int >  __o_Size){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
int Color = __o_Color.Default(-1);
int Size = __o_Size.Default(12);
            	HX_GC_STACKFRAME(&_hx_pos_137a9380b585812a_23_initTextField)
HXLINE(  24)		( ( ::openfl::_legacy::display::DisplayObject)(tf) )->set_x(X);
HXLINE(  25)		( ( ::openfl::_legacy::display::DisplayObject)(tf) )->set_y(Y);
HXLINE(  26)		( ( ::openfl::_legacy::text::TextField)(tf) )->set_multiline(false);
HXLINE(  27)		( ( ::openfl::_legacy::text::TextField)(tf) )->set_wordWrap(false);
HXLINE(  28)		( ( ::openfl::_legacy::text::TextField)(tf) )->set_embedFonts(true);
HXLINE(  29)		( ( ::openfl::_legacy::text::TextField)(tf) )->set_selectable(false);
HXLINE(  34)		( ( ::openfl::_legacy::text::TextField)(tf) )->set_defaultTextFormat( ::openfl::_legacy::text::TextFormat_obj::__alloc( HX_CTX ,::flixel::_hx_system::FlxAssets_obj::FONT_DEBUGGER,Size,((int)Color & (int)(int)16777215),null(),null(),null(),null(),null(),null(),null(),null(),null(),null()));
HXLINE(  35)		( ( ::openfl::_legacy::display::DisplayObject)(tf) )->set_alpha(((Float)((int)((int)Color >> (int)(int)24) & (int)(int)255) / (Float)(int)255));
HXLINE(  36)		( ( ::openfl::_legacy::text::TextField)(tf) )->set_autoSize(::openfl::_legacy::text::TextFieldAutoSize_obj::LEFT_dyn());
HXLINE(  37)		return tf;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(DebuggerUtil_obj,initTextField,return )

 ::openfl::_legacy::display::BitmapData DebuggerUtil_obj::fixSize( ::openfl::_legacy::display::BitmapData bitmapData){
            	HX_STACKFRAME(&_hx_pos_137a9380b585812a_48_fixSize)
HXLINE(  48)		return bitmapData;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DebuggerUtil_obj,fixSize,return )


DebuggerUtil_obj::DebuggerUtil_obj()
{
}

bool DebuggerUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"fixSize") ) { outValue = fixSize_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"initTextField") ) { outValue = initTextField_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createTextField") ) { outValue = createTextField_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *DebuggerUtil_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *DebuggerUtil_obj_sStaticStorageInfo = 0;
#endif

static void DebuggerUtil_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DebuggerUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DebuggerUtil_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DebuggerUtil_obj::__mClass,"__mClass");
};

#endif

hx::Class DebuggerUtil_obj::__mClass;

static ::String DebuggerUtil_obj_sStaticFields[] = {
	HX_HCSTRING("createTextField","\x31","\xde","\x75","\x3a"),
	HX_HCSTRING("initTextField","\x9d","\xe7","\x80","\x14"),
	HX_HCSTRING("fixSize","\x36","\x9d","\x48","\xdc"),
	::String(null())
};

void DebuggerUtil_obj::__register()
{
	hx::Object *dummy = new DebuggerUtil_obj;
	DebuggerUtil_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.DebuggerUtil","\x6b","\xad","\xc9","\xcc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DebuggerUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = DebuggerUtil_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(DebuggerUtil_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< DebuggerUtil_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DebuggerUtil_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DebuggerUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DebuggerUtil_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
