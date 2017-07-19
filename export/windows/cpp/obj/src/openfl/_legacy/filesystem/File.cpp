// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_filesystem_File
#include <openfl/_legacy/filesystem/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_56fc4a870585651c_34_new,"openfl._legacy.filesystem.File","new",0x623bfe8d,"openfl._legacy.filesystem.File.new","openfl/_legacy/filesystem/File.hx",34,0x0d6c1524)
HX_LOCAL_STACK_FRAME(_hx_pos_56fc4a870585651c_56_set_nativePath,"openfl._legacy.filesystem.File","set_nativePath",0x32e83a8c,"openfl._legacy.filesystem.File.set_nativePath","openfl/_legacy/filesystem/File.hx",56,0x0d6c1524)
HX_LOCAL_STACK_FRAME(_hx_pos_56fc4a870585651c_64_set_url,"openfl._legacy.filesystem.File","set_url",0xe76ecdbf,"openfl._legacy.filesystem.File.set_url","openfl/_legacy/filesystem/File.hx",64,0x0d6c1524)
HX_LOCAL_STACK_FRAME(_hx_pos_56fc4a870585651c_49_get_applicationDirectory,"openfl._legacy.filesystem.File","get_applicationDirectory",0xe0457f39,"openfl._legacy.filesystem.File.get_applicationDirectory","openfl/_legacy/filesystem/File.hx",49,0x0d6c1524)
HX_LOCAL_STACK_FRAME(_hx_pos_56fc4a870585651c_50_get_applicationStorageDirectory,"openfl._legacy.filesystem.File","get_applicationStorageDirectory",0x22a09866,"openfl._legacy.filesystem.File.get_applicationStorageDirectory","openfl/_legacy/filesystem/File.hx",50,0x0d6c1524)
HX_LOCAL_STACK_FRAME(_hx_pos_56fc4a870585651c_51_get_desktopDirectory,"openfl._legacy.filesystem.File","get_desktopDirectory",0xf740e52d,"openfl._legacy.filesystem.File.get_desktopDirectory","openfl/_legacy/filesystem/File.hx",51,0x0d6c1524)
HX_LOCAL_STACK_FRAME(_hx_pos_56fc4a870585651c_52_get_documentsDirectory,"openfl._legacy.filesystem.File","get_documentsDirectory",0x14a6a591,"openfl._legacy.filesystem.File.get_documentsDirectory","openfl/_legacy/filesystem/File.hx",52,0x0d6c1524)
HX_LOCAL_STACK_FRAME(_hx_pos_56fc4a870585651c_53_get_userDirectory,"openfl._legacy.filesystem.File","get_userDirectory",0xea40ece6,"openfl._legacy.filesystem.File.get_userDirectory","openfl/_legacy/filesystem/File.hx",53,0x0d6c1524)
HX_LOCAL_STACK_FRAME(_hx_pos_56fc4a870585651c_24_boot,"openfl._legacy.filesystem.File","boot",0x8a5bbd65,"openfl._legacy.filesystem.File.boot","openfl/_legacy/filesystem/File.hx",24,0x0d6c1524)
HX_LOCAL_STACK_FRAME(_hx_pos_56fc4a870585651c_25_boot,"openfl._legacy.filesystem.File","boot",0x8a5bbd65,"openfl._legacy.filesystem.File.boot","openfl/_legacy/filesystem/File.hx",25,0x0d6c1524)
HX_LOCAL_STACK_FRAME(_hx_pos_56fc4a870585651c_26_boot,"openfl._legacy.filesystem.File","boot",0x8a5bbd65,"openfl._legacy.filesystem.File.boot","openfl/_legacy/filesystem/File.hx",26,0x0d6c1524)
HX_LOCAL_STACK_FRAME(_hx_pos_56fc4a870585651c_27_boot,"openfl._legacy.filesystem.File","boot",0x8a5bbd65,"openfl._legacy.filesystem.File.boot","openfl/_legacy/filesystem/File.hx",27,0x0d6c1524)
HX_LOCAL_STACK_FRAME(_hx_pos_56fc4a870585651c_28_boot,"openfl._legacy.filesystem.File","boot",0x8a5bbd65,"openfl._legacy.filesystem.File.boot","openfl/_legacy/filesystem/File.hx",28,0x0d6c1524)
HX_LOCAL_STACK_FRAME(_hx_pos_56fc4a870585651c_104_boot,"openfl._legacy.filesystem.File","boot",0x8a5bbd65,"openfl._legacy.filesystem.File.boot","openfl/_legacy/filesystem/File.hx",104,0x0d6c1524)
namespace openfl{
namespace _legacy{
namespace filesystem{

void File_obj::__construct(::String path){
            	HX_STACKFRAME(&_hx_pos_56fc4a870585651c_34_new)
HXLINE(  36)		this->set_url(path);
HXLINE(  37)		this->set_nativePath(path);
            	}

Dynamic File_obj::__CreateEmpty() { return new File_obj; }

void *File_obj::_hx_vtable = 0;

Dynamic File_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< File_obj > _hx_result = new File_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool File_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x08dab57b;
}

::String File_obj::set_nativePath(::String value){
            	HX_STACKFRAME(&_hx_pos_56fc4a870585651c_56_set_nativePath)
HXLINE(  58)		this->nativePath = value;
HXLINE(  59)		return this->nativePath;
            	}


HX_DEFINE_DYNAMIC_FUNC1(File_obj,set_nativePath,return )

::String File_obj::set_url(::String value){
            	HX_STACKFRAME(&_hx_pos_56fc4a870585651c_64_set_url)
HXLINE(  66)		if (hx::IsNull( value )) {
HXLINE(  68)			this->url = null();
            		}
            		else {
HXLINE(  72)			this->url = ::StringTools_obj::replace(value,HX_(" ",20,00,00,00),HX_("%20",23,3f,1c,00));
HXLINE(  82)			this->url = (HX_("file:",3e,de,98,00) + this->url);
            		}
HXLINE(  87)		return this->url;
            	}


HX_DEFINE_DYNAMIC_FUNC1(File_obj,set_url,return )

 ::openfl::_legacy::filesystem::File File_obj::applicationDirectory;

 ::openfl::_legacy::filesystem::File File_obj::applicationStorageDirectory;

 ::openfl::_legacy::filesystem::File File_obj::desktopDirectory;

 ::openfl::_legacy::filesystem::File File_obj::documentsDirectory;

 ::openfl::_legacy::filesystem::File File_obj::userDirectory;

int File_obj::APP;

int File_obj::STORAGE;

int File_obj::DESKTOP;

int File_obj::DOCS;

int File_obj::USER;

 ::openfl::_legacy::filesystem::File File_obj::get_applicationDirectory(){
            	HX_GC_STACKFRAME(&_hx_pos_56fc4a870585651c_49_get_applicationDirectory)
HXLINE(  49)		return  ::openfl::_legacy::filesystem::File_obj::__alloc( HX_CTX ,::openfl::_legacy::filesystem::File_obj::lime_filesystem_get_special_dir((int)0));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(File_obj,get_applicationDirectory,return )

 ::openfl::_legacy::filesystem::File File_obj::get_applicationStorageDirectory(){
            	HX_GC_STACKFRAME(&_hx_pos_56fc4a870585651c_50_get_applicationStorageDirectory)
HXLINE(  50)		return  ::openfl::_legacy::filesystem::File_obj::__alloc( HX_CTX ,::openfl::_legacy::filesystem::File_obj::lime_filesystem_get_special_dir((int)1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(File_obj,get_applicationStorageDirectory,return )

 ::openfl::_legacy::filesystem::File File_obj::get_desktopDirectory(){
            	HX_GC_STACKFRAME(&_hx_pos_56fc4a870585651c_51_get_desktopDirectory)
HXLINE(  51)		return  ::openfl::_legacy::filesystem::File_obj::__alloc( HX_CTX ,::openfl::_legacy::filesystem::File_obj::lime_filesystem_get_special_dir((int)2));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(File_obj,get_desktopDirectory,return )

 ::openfl::_legacy::filesystem::File File_obj::get_documentsDirectory(){
            	HX_GC_STACKFRAME(&_hx_pos_56fc4a870585651c_52_get_documentsDirectory)
HXLINE(  52)		return  ::openfl::_legacy::filesystem::File_obj::__alloc( HX_CTX ,::openfl::_legacy::filesystem::File_obj::lime_filesystem_get_special_dir((int)3));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(File_obj,get_documentsDirectory,return )

 ::openfl::_legacy::filesystem::File File_obj::get_userDirectory(){
            	HX_GC_STACKFRAME(&_hx_pos_56fc4a870585651c_53_get_userDirectory)
HXLINE(  53)		return  ::openfl::_legacy::filesystem::File_obj::__alloc( HX_CTX ,::openfl::_legacy::filesystem::File_obj::lime_filesystem_get_special_dir((int)4));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(File_obj,get_userDirectory,return )

 ::Dynamic File_obj::lime_filesystem_get_special_dir;


hx::ObjectPtr< File_obj > File_obj::__new(::String path) {
	hx::ObjectPtr< File_obj > __this = new File_obj();
	__this->__construct(path);
	return __this;
}

hx::ObjectPtr< File_obj > File_obj::__alloc(hx::Ctx *_hx_ctx,::String path) {
	File_obj *__this = (File_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(File_obj), true, "openfl._legacy.filesystem.File"));
	*(void **)__this = File_obj::_hx_vtable;
	__this->__construct(path);
	return __this;
}

File_obj::File_obj()
{
}

void File_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(File);
	HX_MARK_MEMBER_NAME(nativePath,"nativePath");
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_END_CLASS();
}

void File_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(nativePath,"nativePath");
	HX_VISIT_MEMBER_NAME(url,"url");
}

hx::Val File_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { return hx::Val( url); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"set_url") ) { return hx::Val( set_url_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"nativePath") ) { return hx::Val( nativePath); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_nativePath") ) { return hx::Val( set_nativePath_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

bool File_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"userDirectory") ) { outValue = inCallProp == hx::paccAlways ? get_userDirectory() : userDirectory; return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"desktopDirectory") ) { outValue = inCallProp == hx::paccAlways ? get_desktopDirectory() : desktopDirectory; return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_userDirectory") ) { outValue = get_userDirectory_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"documentsDirectory") ) { outValue = inCallProp == hx::paccAlways ? get_documentsDirectory() : documentsDirectory; return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"applicationDirectory") ) { outValue = inCallProp == hx::paccAlways ? get_applicationDirectory() : applicationDirectory; return true; }
		if (HX_FIELD_EQ(inName,"get_desktopDirectory") ) { outValue = get_desktopDirectory_dyn(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_documentsDirectory") ) { outValue = get_documentsDirectory_dyn(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_applicationDirectory") ) { outValue = get_applicationDirectory_dyn(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"applicationStorageDirectory") ) { outValue = inCallProp == hx::paccAlways ? get_applicationStorageDirectory() : applicationStorageDirectory; return true; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"get_applicationStorageDirectory") ) { outValue = get_applicationStorageDirectory_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"lime_filesystem_get_special_dir") ) { outValue = lime_filesystem_get_special_dir; return true; }
	}
	return false;
}

hx::Val File_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_url(inValue) );url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"nativePath") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_nativePath(inValue) );nativePath=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool File_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"userDirectory") ) { userDirectory=ioValue.Cast<  ::openfl::_legacy::filesystem::File >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"desktopDirectory") ) { desktopDirectory=ioValue.Cast<  ::openfl::_legacy::filesystem::File >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"documentsDirectory") ) { documentsDirectory=ioValue.Cast<  ::openfl::_legacy::filesystem::File >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"applicationDirectory") ) { applicationDirectory=ioValue.Cast<  ::openfl::_legacy::filesystem::File >(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"applicationStorageDirectory") ) { applicationStorageDirectory=ioValue.Cast<  ::openfl::_legacy::filesystem::File >(); return true; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"lime_filesystem_get_special_dir") ) { lime_filesystem_get_special_dir=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

void File_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("nativePath","\xdc","\xf2","\x61","\x11"));
	outFields->push(HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo File_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(File_obj,nativePath),HX_HCSTRING("nativePath","\xdc","\xf2","\x61","\x11")},
	{hx::fsString,(int)offsetof(File_obj,url),HX_HCSTRING("url","\x6f","\x2b","\x59","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo File_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::filesystem::File*/ ,(void *) &File_obj::applicationDirectory,HX_HCSTRING("applicationDirectory","\xfd","\x3c","\x71","\x25")},
	{hx::fsObject /*::openfl::_legacy::filesystem::File*/ ,(void *) &File_obj::applicationStorageDirectory,HX_HCSTRING("applicationStorageDirectory","\x22","\xdb","\xb5","\xb1")},
	{hx::fsObject /*::openfl::_legacy::filesystem::File*/ ,(void *) &File_obj::desktopDirectory,HX_HCSTRING("desktopDirectory","\xf1","\x70","\x41","\xaf")},
	{hx::fsObject /*::openfl::_legacy::filesystem::File*/ ,(void *) &File_obj::documentsDirectory,HX_HCSTRING("documentsDirectory","\x55","\xaa","\xb4","\x36")},
	{hx::fsObject /*::openfl::_legacy::filesystem::File*/ ,(void *) &File_obj::userDirectory,HX_HCSTRING("userDirectory","\xa2","\x1e","\xf9","\x94")},
	{hx::fsInt,(void *) &File_obj::APP,HX_HCSTRING("APP","\x81","\x98","\x31","\x00")},
	{hx::fsInt,(void *) &File_obj::STORAGE,HX_HCSTRING("STORAGE","\x1b","\xb3","\x7c","\xc4")},
	{hx::fsInt,(void *) &File_obj::DESKTOP,HX_HCSTRING("DESKTOP","\xbc","\x99","\x68","\x9e")},
	{hx::fsInt,(void *) &File_obj::DOCS,HX_HCSTRING("DOCS","\xfb","\xae","\x2e","\x2d")},
	{hx::fsInt,(void *) &File_obj::USER,HX_HCSTRING("USER","\x4b","\x5a","\x6e","\x38")},
	{hx::fsObject /*Dynamic*/ ,(void *) &File_obj::lime_filesystem_get_special_dir,HX_HCSTRING("lime_filesystem_get_special_dir","\xb4","\xbf","\xa5","\x5a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String File_obj_sMemberFields[] = {
	HX_HCSTRING("nativePath","\xdc","\xf2","\x61","\x11"),
	HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"),
	HX_HCSTRING("set_nativePath","\x99","\x63","\x77","\xa7"),
	HX_HCSTRING("set_url","\x12","\x85","\xcf","\x19"),
	::String(null()) };

static void File_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(File_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(File_obj::applicationDirectory,"applicationDirectory");
	HX_MARK_MEMBER_NAME(File_obj::applicationStorageDirectory,"applicationStorageDirectory");
	HX_MARK_MEMBER_NAME(File_obj::desktopDirectory,"desktopDirectory");
	HX_MARK_MEMBER_NAME(File_obj::documentsDirectory,"documentsDirectory");
	HX_MARK_MEMBER_NAME(File_obj::userDirectory,"userDirectory");
	HX_MARK_MEMBER_NAME(File_obj::APP,"APP");
	HX_MARK_MEMBER_NAME(File_obj::STORAGE,"STORAGE");
	HX_MARK_MEMBER_NAME(File_obj::DESKTOP,"DESKTOP");
	HX_MARK_MEMBER_NAME(File_obj::DOCS,"DOCS");
	HX_MARK_MEMBER_NAME(File_obj::USER,"USER");
	HX_MARK_MEMBER_NAME(File_obj::lime_filesystem_get_special_dir,"lime_filesystem_get_special_dir");
};

#ifdef HXCPP_VISIT_ALLOCS
static void File_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(File_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(File_obj::applicationDirectory,"applicationDirectory");
	HX_VISIT_MEMBER_NAME(File_obj::applicationStorageDirectory,"applicationStorageDirectory");
	HX_VISIT_MEMBER_NAME(File_obj::desktopDirectory,"desktopDirectory");
	HX_VISIT_MEMBER_NAME(File_obj::documentsDirectory,"documentsDirectory");
	HX_VISIT_MEMBER_NAME(File_obj::userDirectory,"userDirectory");
	HX_VISIT_MEMBER_NAME(File_obj::APP,"APP");
	HX_VISIT_MEMBER_NAME(File_obj::STORAGE,"STORAGE");
	HX_VISIT_MEMBER_NAME(File_obj::DESKTOP,"DESKTOP");
	HX_VISIT_MEMBER_NAME(File_obj::DOCS,"DOCS");
	HX_VISIT_MEMBER_NAME(File_obj::USER,"USER");
	HX_VISIT_MEMBER_NAME(File_obj::lime_filesystem_get_special_dir,"lime_filesystem_get_special_dir");
};

#endif

hx::Class File_obj::__mClass;

static ::String File_obj_sStaticFields[] = {
	HX_HCSTRING("applicationDirectory","\xfd","\x3c","\x71","\x25"),
	HX_HCSTRING("applicationStorageDirectory","\x22","\xdb","\xb5","\xb1"),
	HX_HCSTRING("desktopDirectory","\xf1","\x70","\x41","\xaf"),
	HX_HCSTRING("documentsDirectory","\x55","\xaa","\xb4","\x36"),
	HX_HCSTRING("userDirectory","\xa2","\x1e","\xf9","\x94"),
	HX_HCSTRING("APP","\x81","\x98","\x31","\x00"),
	HX_HCSTRING("STORAGE","\x1b","\xb3","\x7c","\xc4"),
	HX_HCSTRING("DESKTOP","\xbc","\x99","\x68","\x9e"),
	HX_HCSTRING("DOCS","\xfb","\xae","\x2e","\x2d"),
	HX_HCSTRING("USER","\x4b","\x5a","\x6e","\x38"),
	HX_HCSTRING("get_applicationDirectory","\x86","\x5a","\x0d","\x68"),
	HX_HCSTRING("get_applicationStorageDirectory","\xb9","\x70","\x86","\x8d"),
	HX_HCSTRING("get_desktopDirectory","\xfa","\xd5","\xab","\xcd"),
	HX_HCSTRING("get_documentsDirectory","\x9e","\x23","\x49","\x90"),
	HX_HCSTRING("get_userDirectory","\xf9","\x29","\x69","\x9b"),
	HX_HCSTRING("lime_filesystem_get_special_dir","\xb4","\xbf","\xa5","\x5a"),
	::String(null())
};

void File_obj::__register()
{
	hx::Object *dummy = new File_obj;
	File_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.filesystem.File","\x1b","\xb4","\x44","\xa5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &File_obj::__GetStatic;
	__mClass->mSetStaticField = &File_obj::__SetStatic;
	__mClass->mMarkFunc = File_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(File_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(File_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< File_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = File_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = File_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = File_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void File_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_56fc4a870585651c_24_boot)
HXLINE(  24)		APP = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_56fc4a870585651c_25_boot)
HXLINE(  25)		STORAGE = (int)1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_56fc4a870585651c_26_boot)
HXLINE(  26)		DESKTOP = (int)2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_56fc4a870585651c_27_boot)
HXLINE(  27)		DOCS = (int)3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_56fc4a870585651c_28_boot)
HXLINE(  28)		USER = (int)4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_56fc4a870585651c_104_boot)
HXLINE( 104)		lime_filesystem_get_special_dir = ::openfl::_legacy::Lib_obj::load(HX_("lime-legacy",c1,7f,b9,87),HX_("lime_legacy_filesystem_get_special_dir",16,0a,0d,6d),(int)1);
            	}
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace filesystem