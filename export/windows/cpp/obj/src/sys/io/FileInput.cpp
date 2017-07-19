// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_sys_io_FileInput
#include <sys/io/FileInput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bd4e1e396983792e_32_new,"sys.io.FileInput","new",0x565591b9,"sys.io.FileInput.new","C:\\dev\\HaxeToolkit\\haxe\\std/cpp/_std/sys/io/FileInput.hx",32,0xb12f290a)
HX_LOCAL_STACK_FRAME(_hx_pos_bd4e1e396983792e_36_readByte,"sys.io.FileInput","readByte",0x25e0b585,"sys.io.FileInput.readByte","C:\\dev\\HaxeToolkit\\haxe\\std/cpp/_std/sys/io/FileInput.hx",36,0xb12f290a)
HX_LOCAL_STACK_FRAME(_hx_pos_bd4e1e396983792e_57_close,"sys.io.FileInput","close",0x735aa151,"sys.io.FileInput.close","C:\\dev\\HaxeToolkit\\haxe\\std/cpp/_std/sys/io/FileInput.hx",57,0xb12f290a)
namespace sys{
namespace io{

void FileInput_obj::__construct( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_bd4e1e396983792e_32_new)
HXLINE(  32)		this->_hx___f = f;
            	}

Dynamic FileInput_obj::__CreateEmpty() { return new FileInput_obj; }

void *FileInput_obj::_hx_vtable = 0;

Dynamic FileInput_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FileInput_obj > _hx_result = new FileInput_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FileInput_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5c18cd32) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x5c18cd32;
	} else {
		return inClassId==(int)0x7d72f7a3;
	}
}

int FileInput_obj::readByte(){
            	HX_GC_STACKFRAME(&_hx_pos_bd4e1e396983792e_36_readByte)
HXLINE(  36)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  36)			return _hx_std_file_read_char(this->_hx___f);
            		}
            		catch( ::Dynamic _hx_e){
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic e = _hx_e;
HXLINE(  39)				if (( (bool)(e->__IsArray()) )) {
HXLINE(  40)					HX_STACK_DO_THROW( ::haxe::io::Eof_obj::__alloc( HX_CTX ));
            				}
            				else {
HXLINE(  42)					HX_STACK_DO_THROW(::haxe::io::Error_obj::Custom(e));
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(  36)		return (int)0;
            	}


void FileInput_obj::close(){
            	HX_STACKFRAME(&_hx_pos_bd4e1e396983792e_57_close)
HXLINE(  58)		this->super::close();
HXLINE(  59)		_hx_std_file_close(this->_hx___f);
            	}



hx::ObjectPtr< FileInput_obj > FileInput_obj::__new( ::Dynamic f) {
	hx::ObjectPtr< FileInput_obj > __this = new FileInput_obj();
	__this->__construct(f);
	return __this;
}

hx::ObjectPtr< FileInput_obj > FileInput_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic f) {
	FileInput_obj *__this = (FileInput_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FileInput_obj), true, "sys.io.FileInput"));
	*(void **)__this = FileInput_obj::_hx_vtable;
	__this->__construct(f);
	return __this;
}

FileInput_obj::FileInput_obj()
{
}

void FileInput_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FileInput);
	HX_MARK_MEMBER_NAME(_hx___f,"__f");
	HX_MARK_END_CLASS();
}

void FileInput_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___f,"__f");
}

hx::Val FileInput_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__f") ) { return hx::Val( _hx___f); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return hx::Val( close_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readByte") ) { return hx::Val( readByte_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FileInput_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__f") ) { _hx___f=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FileInput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__f","\x46","\x69","\x48","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FileInput_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FileInput_obj,_hx___f),HX_HCSTRING("__f","\x46","\x69","\x48","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FileInput_obj_sStaticStorageInfo = 0;
#endif

static ::String FileInput_obj_sMemberFields[] = {
	HX_HCSTRING("__f","\x46","\x69","\x48","\x00"),
	HX_HCSTRING("readByte","\x7e","\xf9","\x1a","\x69"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	::String(null()) };

static void FileInput_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FileInput_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FileInput_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FileInput_obj::__mClass,"__mClass");
};

#endif

hx::Class FileInput_obj::__mClass;

void FileInput_obj::__register()
{
	hx::Object *dummy = new FileInput_obj;
	FileInput_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sys.io.FileInput","\x47","\x41","\x72","\xa9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FileInput_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FileInput_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FileInput_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FileInput_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FileInput_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FileInput_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace sys
} // end namespace io
