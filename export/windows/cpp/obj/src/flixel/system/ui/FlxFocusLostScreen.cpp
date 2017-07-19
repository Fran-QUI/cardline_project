// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxFocusLostScreen
#include <flixel/system/ui/FlxFocusLostScreen.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_MovieClip
#include <openfl/_legacy/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_9d905e044df65333_12_new,"flixel.system.ui.FlxFocusLostScreen","new",0xbe260b15,"flixel.system.ui.FlxFocusLostScreen.new","flixel/system/ui/FlxFocusLostScreen.hx",12,0x1e64ca7a)
HX_LOCAL_STACK_FRAME(_hx_pos_9d905e044df65333_30_draw,"flixel.system.ui.FlxFocusLostScreen","draw",0x9c914faf,"flixel.system.ui.FlxFocusLostScreen.draw","flixel/system/ui/FlxFocusLostScreen.hx",30,0x1e64ca7a)
namespace flixel{
namespace _hx_system{
namespace ui{

void FlxFocusLostScreen_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_9d905e044df65333_12_new)
HXLINE(  13)		super::__construct();
HXLINE(  14)		this->draw();
HXLINE(  16)		 ::openfl::_legacy::display::Sprite logo =  ::openfl::_legacy::display::Sprite_obj::__alloc( HX_CTX );
HXLINE(  17)		::flixel::_hx_system::FlxAssets_obj::drawLogo(logo->get_graphics());
HXLINE(  18)		logo->set_scaleX(logo->set_scaleY(((Float)0.2)));
HXLINE(  19)		logo->set_x(logo->set_y((int)5));
HXLINE(  20)		logo->set_alpha(((Float)0.35));
HXLINE(  21)		this->addChild(logo);
HXLINE(  23)		this->set_visible(false);
            	}

Dynamic FlxFocusLostScreen_obj::__CreateEmpty() { return new FlxFocusLostScreen_obj; }

void *FlxFocusLostScreen_obj::_hx_vtable = 0;

Dynamic FlxFocusLostScreen_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxFocusLostScreen_obj > _hx_result = new FlxFocusLostScreen_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxFocusLostScreen_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x306ae42a) {
		if (inClassId<=(int)0x25b00754) {
			if (inClassId<=(int)0x1e88cdcf) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x1e88cdcf;
			} else {
				return inClassId==(int)0x25b00754;
			}
		} else {
			return inClassId==(int)0x306ae42a;
		}
	} else {
		if (inClassId<=(int)0x5fcdb6d3) {
			return inClassId==(int)0x3d2d7617 || inClassId==(int)0x5fcdb6d3;
		} else {
			return inClassId==(int)0x6eb53879;
		}
	}
}

void FlxFocusLostScreen_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_9d905e044df65333_30_draw)
HXLINE(  31)		 ::openfl::_legacy::display::Graphics gfx = this->get_graphics();
HXLINE(  33)		int screenWidth = ::Std_obj::_hx_int(::openfl::_legacy::Lib_obj::get_current()->get_stage()->get_stageWidth());
HXLINE(  34)		int screenHeight = ::Std_obj::_hx_int(::openfl::_legacy::Lib_obj::get_current()->get_stage()->get_stageHeight());
HXLINE(  37)		gfx->clear();
HXLINE(  38)		gfx->moveTo((int)0,(int)0);
HXLINE(  39)		gfx->beginFill((int)0,((Float)0.5));
HXLINE(  40)		gfx->drawRect((int)0,(int)0,screenWidth,screenHeight);
HXLINE(  41)		gfx->endFill();
HXLINE(  44)		int halfWidth = ::Std_obj::_hx_int(((Float)screenWidth / (Float)(int)2));
HXLINE(  45)		int halfHeight = ::Std_obj::_hx_int(((Float)screenHeight / (Float)(int)2));
HXLINE(  46)		int helper = ::Std_obj::_hx_int(((Float)::Math_obj::min(halfWidth,halfHeight) / (Float)(int)3));
HXLINE(  47)		gfx->moveTo((halfWidth - helper),(halfHeight - helper));
HXLINE(  48)		gfx->beginFill((int)16777215,((Float)0.65));
HXLINE(  49)		gfx->lineTo((halfWidth + helper),halfHeight);
HXLINE(  50)		gfx->lineTo((halfWidth - helper),(halfHeight + helper));
HXLINE(  51)		gfx->lineTo((halfWidth - helper),(halfHeight - helper));
HXLINE(  52)		gfx->endFill();
HXLINE(  54)		this->set_x(-(::flixel::FlxG_obj::scaleMode->offset->x));
HXLINE(  55)		this->set_y(-(::flixel::FlxG_obj::scaleMode->offset->y));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxFocusLostScreen_obj,draw,(void))


hx::ObjectPtr< FlxFocusLostScreen_obj > FlxFocusLostScreen_obj::__new() {
	hx::ObjectPtr< FlxFocusLostScreen_obj > __this = new FlxFocusLostScreen_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< FlxFocusLostScreen_obj > FlxFocusLostScreen_obj::__alloc(hx::Ctx *_hx_ctx) {
	FlxFocusLostScreen_obj *__this = (FlxFocusLostScreen_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxFocusLostScreen_obj), true, "flixel.system.ui.FlxFocusLostScreen"));
	*(void **)__this = FlxFocusLostScreen_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxFocusLostScreen_obj::FlxFocusLostScreen_obj()
{
}

hx::Val FlxFocusLostScreen_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return hx::Val( draw_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *FlxFocusLostScreen_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *FlxFocusLostScreen_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxFocusLostScreen_obj_sMemberFields[] = {
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	::String(null()) };

static void FlxFocusLostScreen_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxFocusLostScreen_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxFocusLostScreen_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxFocusLostScreen_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxFocusLostScreen_obj::__mClass;

void FlxFocusLostScreen_obj::__register()
{
	hx::Object *dummy = new FlxFocusLostScreen_obj;
	FlxFocusLostScreen_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.ui.FlxFocusLostScreen","\xa3","\xdc","\xfb","\x83");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxFocusLostScreen_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxFocusLostScreen_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxFocusLostScreen_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxFocusLostScreen_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxFocusLostScreen_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxFocusLostScreen_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace ui