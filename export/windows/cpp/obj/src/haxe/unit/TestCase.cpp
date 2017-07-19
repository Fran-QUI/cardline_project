// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_unit_TestCase
#include <haxe/unit/TestCase.h>
#endif
#ifndef INCLUDED_haxe_unit_TestRunner
#include <haxe/unit/TestRunner.h>
#endif
#ifndef INCLUDED_haxe_unit_TestStatus
#include <haxe/unit/TestStatus.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6327a4f6e3fe7729_59_new,"haxe.unit.TestCase","new",0x83fcec16,"haxe.unit.TestCase.new","C:\\dev\\HaxeToolkit\\haxe\\std/haxe/unit/TestCase.hx",59,0x5b455168)
HX_LOCAL_STACK_FRAME(_hx_pos_6327a4f6e3fe7729_65_setup,"haxe.unit.TestCase","setup",0x0f1fa3b3,"haxe.unit.TestCase.setup","C:\\dev\\HaxeToolkit\\haxe\\std/haxe/unit/TestCase.hx",65,0x5b455168)
HX_LOCAL_STACK_FRAME(_hx_pos_6327a4f6e3fe7729_71_tearDown,"haxe.unit.TestCase","tearDown",0xebcf86ae,"haxe.unit.TestCase.tearDown","C:\\dev\\HaxeToolkit\\haxe\\std/haxe/unit/TestCase.hx",71,0x5b455168)
HX_LOCAL_STACK_FRAME(_hx_pos_6327a4f6e3fe7729_75_print,"haxe.unit.TestCase","print",0x5d7b4d63,"haxe.unit.TestCase.print","C:\\dev\\HaxeToolkit\\haxe\\std/haxe/unit/TestCase.hx",75,0x5b455168)
HX_LOCAL_STACK_FRAME(_hx_pos_6327a4f6e3fe7729_81_assertTrue,"haxe.unit.TestCase","assertTrue",0x7eaf5c3e,"haxe.unit.TestCase.assertTrue","C:\\dev\\HaxeToolkit\\haxe\\std/haxe/unit/TestCase.hx",81,0x5b455168)
HX_LOCAL_STACK_FRAME(_hx_pos_6327a4f6e3fe7729_94_assertFalse,"haxe.unit.TestCase","assertFalse",0x3fe1d2b3,"haxe.unit.TestCase.assertFalse","C:\\dev\\HaxeToolkit\\haxe\\std/haxe/unit/TestCase.hx",94,0x5b455168)
HX_LOCAL_STACK_FRAME(_hx_pos_6327a4f6e3fe7729_107_assertEquals,"haxe.unit.TestCase","assertEquals",0x7ba9bf2f,"haxe.unit.TestCase.assertEquals","C:\\dev\\HaxeToolkit\\haxe\\std/haxe/unit/TestCase.hx",107,0x5b455168)
namespace haxe{
namespace unit{

void TestCase_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_6327a4f6e3fe7729_59_new)
            	}

Dynamic TestCase_obj::__CreateEmpty() { return new TestCase_obj; }

void *TestCase_obj::_hx_vtable = 0;

Dynamic TestCase_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TestCase_obj > _hx_result = new TestCase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TestCase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7635cd6c;
}

void TestCase_obj::setup(){
            	HX_STACKFRAME(&_hx_pos_6327a4f6e3fe7729_65_setup)
            	}


HX_DEFINE_DYNAMIC_FUNC0(TestCase_obj,setup,(void))

void TestCase_obj::tearDown(){
            	HX_STACKFRAME(&_hx_pos_6327a4f6e3fe7729_71_tearDown)
            	}


HX_DEFINE_DYNAMIC_FUNC0(TestCase_obj,tearDown,(void))

void TestCase_obj::print( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_6327a4f6e3fe7729_75_print)
HXLINE(  75)		::haxe::unit::TestRunner_obj::print(v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TestCase_obj,print,(void))

void TestCase_obj::assertTrue(bool b, ::Dynamic c){
            	HX_STACKFRAME(&_hx_pos_6327a4f6e3fe7729_81_assertTrue)
HXLINE(  82)		this->currentTest->done = true;
HXLINE(  83)		if ((b != true)) {
HXLINE(  84)			this->currentTest->success = false;
HXLINE(  85)			this->currentTest->error = HX_("expected true but was false",23,26,7c,7d);
HXLINE(  86)			this->currentTest->posInfos = c;
HXLINE(  87)			HX_STACK_DO_THROW(this->currentTest);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(TestCase_obj,assertTrue,(void))

void TestCase_obj::assertFalse(bool b, ::Dynamic c){
            	HX_STACKFRAME(&_hx_pos_6327a4f6e3fe7729_94_assertFalse)
HXLINE(  95)		this->currentTest->done = true;
HXLINE(  96)		if ((b == true)) {
HXLINE(  97)			this->currentTest->success = false;
HXLINE(  98)			this->currentTest->error = HX_("expected false but was true",a9,e3,03,60);
HXLINE(  99)			this->currentTest->posInfos = c;
HXLINE( 100)			HX_STACK_DO_THROW(this->currentTest);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(TestCase_obj,assertFalse,(void))

void TestCase_obj::assertEquals( ::Dynamic expected, ::Dynamic actual, ::Dynamic c){
            	HX_STACKFRAME(&_hx_pos_6327a4f6e3fe7729_107_assertEquals)
HXLINE( 108)		this->currentTest->done = true;
HXLINE( 109)		if (hx::IsNotEq( actual,expected )) {
HXLINE( 110)			this->currentTest->success = false;
HXLINE( 111)			::String _hx_tmp = ((HX_("expected '",7f,d8,72,cf) + ::Std_obj::string(expected)) + HX_("' but was '",18,22,f3,f7));
HXDLIN( 111)			::String _hx_tmp1 = (_hx_tmp + ::Std_obj::string(actual));
HXDLIN( 111)			this->currentTest->error = (_hx_tmp1 + HX_("'",27,00,00,00));
HXLINE( 112)			this->currentTest->posInfos = c;
HXLINE( 113)			HX_STACK_DO_THROW(this->currentTest);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(TestCase_obj,assertEquals,(void))


hx::ObjectPtr< TestCase_obj > TestCase_obj::__new() {
	hx::ObjectPtr< TestCase_obj > __this = new TestCase_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< TestCase_obj > TestCase_obj::__alloc(hx::Ctx *_hx_ctx) {
	TestCase_obj *__this = (TestCase_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TestCase_obj), true, "haxe.unit.TestCase"));
	*(void **)__this = TestCase_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TestCase_obj::TestCase_obj()
{
}

void TestCase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TestCase);
	HX_MARK_MEMBER_NAME(currentTest,"currentTest");
	HX_MARK_END_CLASS();
}

void TestCase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(currentTest,"currentTest");
}

hx::Val TestCase_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"setup") ) { return hx::Val( setup_dyn()); }
		if (HX_FIELD_EQ(inName,"print") ) { return hx::Val( print_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tearDown") ) { return hx::Val( tearDown_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"assertTrue") ) { return hx::Val( assertTrue_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentTest") ) { return hx::Val( currentTest); }
		if (HX_FIELD_EQ(inName,"assertFalse") ) { return hx::Val( assertFalse_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"assertEquals") ) { return hx::Val( assertEquals_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TestCase_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"currentTest") ) { currentTest=inValue.Cast<  ::haxe::unit::TestStatus >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TestCase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("currentTest","\x2b","\xa1","\x8b","\x85"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo TestCase_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::unit::TestStatus*/ ,(int)offsetof(TestCase_obj,currentTest),HX_HCSTRING("currentTest","\x2b","\xa1","\x8b","\x85")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *TestCase_obj_sStaticStorageInfo = 0;
#endif

static ::String TestCase_obj_sMemberFields[] = {
	HX_HCSTRING("currentTest","\x2b","\xa1","\x8b","\x85"),
	HX_HCSTRING("setup","\x7d","\xae","\x2f","\x7a"),
	HX_HCSTRING("tearDown","\x24","\xd6","\x66","\xec"),
	HX_HCSTRING("print","\x2d","\x58","\x8b","\xc8"),
	HX_HCSTRING("assertTrue","\x34","\xf5","\x51","\x4f"),
	HX_HCSTRING("assertFalse","\xfd","\x10","\x85","\xfd"),
	HX_HCSTRING("assertEquals","\xa5","\x01","\xdd","\xac"),
	::String(null()) };

static void TestCase_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TestCase_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TestCase_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TestCase_obj::__mClass,"__mClass");
};

#endif

hx::Class TestCase_obj::__mClass;

void TestCase_obj::__register()
{
	hx::Object *dummy = new TestCase_obj;
	TestCase_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.unit.TestCase","\x24","\xe9","\x2b","\x5c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TestCase_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TestCase_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TestCase_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TestCase_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TestCase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TestCase_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace unit