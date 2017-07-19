// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl_media_ID3Info
#include <openfl/media/ID3Info.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_93e4eccf60244a3a_16_new,"openfl.media.ID3Info","new",0xc3c5ad90,"openfl.media.ID3Info.new","openfl/media/ID3Info.hx",16,0xcebe7122)
namespace openfl{
namespace media{

void ID3Info_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_93e4eccf60244a3a_16_new)
            	}

Dynamic ID3Info_obj::__CreateEmpty() { return new ID3Info_obj; }

void *ID3Info_obj::_hx_vtable = 0;

Dynamic ID3Info_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ID3Info_obj > _hx_result = new ID3Info_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ID3Info_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x12b63a6e;
}


ID3Info_obj::ID3Info_obj()
{
}

void ID3Info_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ID3Info);
	HX_MARK_MEMBER_NAME(album,"album");
	HX_MARK_MEMBER_NAME(artist,"artist");
	HX_MARK_MEMBER_NAME(comment,"comment");
	HX_MARK_MEMBER_NAME(genre,"genre");
	HX_MARK_MEMBER_NAME(songName,"songName");
	HX_MARK_MEMBER_NAME(track,"track");
	HX_MARK_MEMBER_NAME(year,"year");
	HX_MARK_END_CLASS();
}

void ID3Info_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(album,"album");
	HX_VISIT_MEMBER_NAME(artist,"artist");
	HX_VISIT_MEMBER_NAME(comment,"comment");
	HX_VISIT_MEMBER_NAME(genre,"genre");
	HX_VISIT_MEMBER_NAME(songName,"songName");
	HX_VISIT_MEMBER_NAME(track,"track");
	HX_VISIT_MEMBER_NAME(year,"year");
}

hx::Val ID3Info_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"year") ) { return hx::Val( year); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"album") ) { return hx::Val( album); }
		if (HX_FIELD_EQ(inName,"genre") ) { return hx::Val( genre); }
		if (HX_FIELD_EQ(inName,"track") ) { return hx::Val( track); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"artist") ) { return hx::Val( artist); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"comment") ) { return hx::Val( comment); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"songName") ) { return hx::Val( songName); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ID3Info_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"year") ) { year=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"album") ) { album=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"genre") ) { genre=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"track") ) { track=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"artist") ) { artist=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"comment") ) { comment=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"songName") ) { songName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ID3Info_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("album","\x2f","\x13","\x8c","\x21"));
	outFields->push(HX_HCSTRING("artist","\xc7","\xf2","\x48","\xb9"));
	outFields->push(HX_HCSTRING("comment","\x5f","\x7a","\x70","\x81"));
	outFields->push(HX_HCSTRING("genre","\x43","\x28","\x5c","\x91"));
	outFields->push(HX_HCSTRING("songName","\xc0","\xd0","\xd7","\x36"));
	outFields->push(HX_HCSTRING("track","\x8b","\x8e","\x1f","\x16"));
	outFields->push(HX_HCSTRING("year","\xbd","\xc9","\x47","\x50"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ID3Info_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(ID3Info_obj,album),HX_HCSTRING("album","\x2f","\x13","\x8c","\x21")},
	{hx::fsString,(int)offsetof(ID3Info_obj,artist),HX_HCSTRING("artist","\xc7","\xf2","\x48","\xb9")},
	{hx::fsString,(int)offsetof(ID3Info_obj,comment),HX_HCSTRING("comment","\x5f","\x7a","\x70","\x81")},
	{hx::fsString,(int)offsetof(ID3Info_obj,genre),HX_HCSTRING("genre","\x43","\x28","\x5c","\x91")},
	{hx::fsString,(int)offsetof(ID3Info_obj,songName),HX_HCSTRING("songName","\xc0","\xd0","\xd7","\x36")},
	{hx::fsString,(int)offsetof(ID3Info_obj,track),HX_HCSTRING("track","\x8b","\x8e","\x1f","\x16")},
	{hx::fsString,(int)offsetof(ID3Info_obj,year),HX_HCSTRING("year","\xbd","\xc9","\x47","\x50")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ID3Info_obj_sStaticStorageInfo = 0;
#endif

static ::String ID3Info_obj_sMemberFields[] = {
	HX_HCSTRING("album","\x2f","\x13","\x8c","\x21"),
	HX_HCSTRING("artist","\xc7","\xf2","\x48","\xb9"),
	HX_HCSTRING("comment","\x5f","\x7a","\x70","\x81"),
	HX_HCSTRING("genre","\x43","\x28","\x5c","\x91"),
	HX_HCSTRING("songName","\xc0","\xd0","\xd7","\x36"),
	HX_HCSTRING("track","\x8b","\x8e","\x1f","\x16"),
	HX_HCSTRING("year","\xbd","\xc9","\x47","\x50"),
	::String(null()) };

static void ID3Info_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ID3Info_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ID3Info_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ID3Info_obj::__mClass,"__mClass");
};

#endif

hx::Class ID3Info_obj::__mClass;

void ID3Info_obj::__register()
{
	hx::Object *dummy = new ID3Info_obj;
	ID3Info_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.media.ID3Info","\x9e","\xe5","\x63","\xfb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ID3Info_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ID3Info_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ID3Info_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ID3Info_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ID3Info_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ID3Info_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace media
