// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug__VCR_GraphicRecordOff
#include <flixel/system/debug/_VCR/GraphicRecordOff.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d7d96c55843772a2_2010_new,"flixel.system.debug._VCR.GraphicRecordOff","new",0xb4303408,"flixel.system.debug._VCR.GraphicRecordOff.new","openfl/_legacy/Assets.hx",2010,0x9276b055)
HX_LOCAL_STACK_FRAME(_hx_pos_a572caf517e025a2_1_boot,"flixel.system.debug._VCR.GraphicRecordOff","boot",0xee16538a,"flixel.system.debug._VCR.GraphicRecordOff.boot","?",1,0x0000003f)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace _VCR{

void GraphicRecordOff_obj::__construct(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA){
 ::Dynamic transparent = __o_transparent.Default(true);
 ::Dynamic fillRGBA = __o_fillRGBA.Default(-1);
            	HX_STACKFRAME(&_hx_pos_d7d96c55843772a2_2010_new)
HXLINE(2076)		super::__construct(width,height,transparent,fillRGBA,null());
HXLINE(2078)		 ::openfl::_legacy::utils::ByteArray byteArray = ::openfl::_legacy::utils::ByteArray_obj::fromBytes(::haxe::Resource_obj::getBytes(::flixel::_hx_system::debug::_VCR::GraphicRecordOff_obj::resourceName));
HXLINE(2079)		this->_hx___handle = ::openfl::_legacy::display::BitmapData_obj::lime_bitmap_data_from_bytes(byteArray,null());
            	}

Dynamic GraphicRecordOff_obj::__CreateEmpty() { return new GraphicRecordOff_obj; }

void *GraphicRecordOff_obj::_hx_vtable = 0;

Dynamic GraphicRecordOff_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GraphicRecordOff_obj > _hx_result = new GraphicRecordOff_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool GraphicRecordOff_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0cd766e7) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0cd766e7;
	} else {
		return inClassId==(int)0x5c17135c;
	}
}

::String GraphicRecordOff_obj::resourceName;


hx::ObjectPtr< GraphicRecordOff_obj > GraphicRecordOff_obj::__new(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA) {
	hx::ObjectPtr< GraphicRecordOff_obj > __this = new GraphicRecordOff_obj();
	__this->__construct(width,height,__o_transparent,__o_fillRGBA);
	return __this;
}

hx::ObjectPtr< GraphicRecordOff_obj > GraphicRecordOff_obj::__alloc(hx::Ctx *_hx_ctx,int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA) {
	GraphicRecordOff_obj *__this = (GraphicRecordOff_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GraphicRecordOff_obj), true, "flixel.system.debug._VCR.GraphicRecordOff"));
	*(void **)__this = GraphicRecordOff_obj::_hx_vtable;
	__this->__construct(width,height,__o_transparent,__o_fillRGBA);
	return __this;
}

GraphicRecordOff_obj::GraphicRecordOff_obj()
{
}

bool GraphicRecordOff_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { outValue = resourceName; return true; }
	}
	return false;
}

bool GraphicRecordOff_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GraphicRecordOff_obj_sMemberStorageInfo = 0;
static hx::StaticInfo GraphicRecordOff_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &GraphicRecordOff_obj::resourceName,HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void GraphicRecordOff_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicRecordOff_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GraphicRecordOff_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GraphicRecordOff_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicRecordOff_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GraphicRecordOff_obj::resourceName,"resourceName");
};

#endif

hx::Class GraphicRecordOff_obj::__mClass;

static ::String GraphicRecordOff_obj_sStaticFields[] = {
	HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90"),
	::String(null())
};

void GraphicRecordOff_obj::__register()
{
	hx::Object *dummy = new GraphicRecordOff_obj;
	GraphicRecordOff_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug._VCR.GraphicRecordOff","\x16","\xd0","\x7b","\x38");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GraphicRecordOff_obj::__GetStatic;
	__mClass->mSetStaticField = &GraphicRecordOff_obj::__SetStatic;
	__mClass->mMarkFunc = GraphicRecordOff_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GraphicRecordOff_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GraphicRecordOff_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GraphicRecordOff_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicRecordOff_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicRecordOff_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GraphicRecordOff_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a572caf517e025a2_1_boot)
HXLINE(   1)		resourceName = HX_("__ASSET__:bitmap_flixel_system_debug__VCR_GraphicRecordOff",30,1f,ba,3c);
            	}
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace _VCR
