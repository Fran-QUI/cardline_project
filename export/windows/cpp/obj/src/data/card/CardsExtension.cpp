// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_data_card_CardsExtension
#include <data/card/CardsExtension.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
#ifndef INCLUDED_source_data_card_TLCard
#include <source/data/card/TLCard.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_90b1391b49477efb_34_new,"data.card.CardsExtension","new",0x4da9a308,"data.card.CardsExtension.new","data/card/CardsExtension.hx",34,0x7ad44d08)
HX_LOCAL_STACK_FRAME(_hx_pos_90b1391b49477efb_43_loadRawData,"data.card.CardsExtension","loadRawData",0x709ae554,"data.card.CardsExtension.loadRawData","data/card/CardsExtension.hx",43,0x7ad44d08)
HX_LOCAL_STACK_FRAME(_hx_pos_90b1391b49477efb_53_parseRawData,"data.card.CardsExtension","parseRawData",0x80315897,"data.card.CardsExtension.parseRawData","data/card/CardsExtension.hx",53,0x7ad44d08)
HX_LOCAL_STACK_FRAME(_hx_pos_90b1391b49477efb_81_init,"data.card.CardsExtension","init",0xa37dbb68,"data.card.CardsExtension.init","data/card/CardsExtension.hx",81,0x7ad44d08)
HX_LOCAL_STACK_FRAME(_hx_pos_90b1391b49477efb_88_release,"data.card.CardsExtension","release",0x55e5cc6f,"data.card.CardsExtension.release","data/card/CardsExtension.hx",88,0x7ad44d08)
HX_LOCAL_STACK_FRAME(_hx_pos_90b1391b49477efb_99_getNbrCard,"data.card.CardsExtension","getNbrCard",0x4ed8a710,"data.card.CardsExtension.getNbrCard","data/card/CardsExtension.hx",99,0x7ad44d08)
HX_LOCAL_STACK_FRAME(_hx_pos_90b1391b49477efb_107_getTLCard,"data.card.CardsExtension","getTLCard",0x2d590526,"data.card.CardsExtension.getTLCard","data/card/CardsExtension.hx",107,0x7ad44d08)
namespace data{
namespace card{

void CardsExtension_obj::__construct(::String name,::String JsonFilename,::String __o_Jsonfilepath){
::String Jsonfilepath = __o_Jsonfilepath.Default(HX_HCSTRING("./","\x41","\x28","\x00","\x00"));
            	HX_STACKFRAME(&_hx_pos_90b1391b49477efb_34_new)
HXLINE(  35)		this->name = name;
HXLINE(  36)		this->m_extentionJsonFileName = JsonFilename;
HXLINE(  37)		this->m_extentionJsonFilePath = Jsonfilepath;
HXLINE(  38)		this->m_fullpath = (this->m_extentionJsonFilePath + this->m_extentionJsonFileName);
            	}

Dynamic CardsExtension_obj::__CreateEmpty() { return new CardsExtension_obj; }

void *CardsExtension_obj::_hx_vtable = 0;

Dynamic CardsExtension_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CardsExtension_obj > _hx_result = new CardsExtension_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool CardsExtension_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x064368da;
}

void CardsExtension_obj::loadRawData(){
            	HX_STACKFRAME(&_hx_pos_90b1391b49477efb_43_loadRawData)
HXLINE(  44)		this->m_rawData = ::openfl::_legacy::Assets_obj::getText(this->m_fullpath);
HXLINE(  45)		if (hx::IsNull( this->m_rawData )) {
HXLINE(  47)			 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  47)			_hx_tmp(((((HX_("Card extention ",72,94,aa,b8) + this->name) + HX_(" : file not found [",12,ce,bf,96)) + this->m_fullpath) + HX_("]",5d,00,00,00)),hx::SourceInfo(HX_("CardsExtension.hx",c2,95,be,63),47,HX_("data.card.CardsExtension",16,bf,d1,be),HX_("loadRawData",ac,2a,b6,cf)));
HXLINE(  48)			{
HXLINE(  48)				 ::flixel::_hx_system::frontEnds::LogFrontEnd _this = ::flixel::FlxG_obj::log;
HXDLIN(  48)				 ::Dynamic Data = ((((HX_("Card extention ",72,94,aa,b8) + this->name) + HX_(" : file not found [",12,ce,bf,96)) + this->m_fullpath) + HX_("]",5d,00,00,00));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CardsExtension_obj,loadRawData,(void))

void CardsExtension_obj::parseRawData(){
            	HX_GC_STACKFRAME(&_hx_pos_90b1391b49477efb_53_parseRawData)
HXLINE(  54)		this->m_allCardData = ::Array_obj< ::Dynamic>::__new();
HXLINE(  56)		if (hx::IsNull( this->m_rawData )) {
HXLINE(  57)			return;
            		}
HXLINE(  59)		::Array< ::Dynamic> allCardinfos = null();
HXLINE(  61)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  63)			allCardinfos = ( (::Array< ::Dynamic>)( ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,this->m_rawData)->parseRec()) );
            		}
            		catch( ::Dynamic _hx_e){
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic e = _hx_e;
HXLINE(  67)				 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  67)				::String _hx_tmp1 = ((HX_("Fail to parse Json for extention ",e1,6c,db,25) + this->name) + HX_(" because ",ba,39,55,68));
HXDLIN(  67)				::String _hx_tmp2 = (_hx_tmp1 + ::Std_obj::string(e));
HXDLIN(  67)				_hx_tmp(_hx_tmp2,hx::SourceInfo(HX_("CardsExtension.hx",c2,95,be,63),67,HX_("data.card.CardsExtension",16,bf,d1,be),HX_("parseRawData",3f,c0,f2,58)));
HXLINE(  68)				{
HXLINE(  68)					 ::flixel::_hx_system::frontEnds::LogFrontEnd _this = ::flixel::FlxG_obj::log;
HXDLIN(  68)					::String Data = ((HX_("Fail to parse Json for extention ",e1,6c,db,25) + this->name) + HX_(" because ",ba,39,55,68));
HXDLIN(  68)					 ::Dynamic Data1 = (Data + ::Std_obj::string(e));
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(  71)		if (hx::IsNull( allCardinfos )) {
HXLINE(  72)			return;
            		}
HXLINE(  74)		{
HXLINE(  74)			int _g = (int)0;
HXDLIN(  74)			while((_g < allCardinfos->length)){
HXLINE(  74)				 ::Dynamic info = allCardinfos->__get(_g);
HXDLIN(  74)				_g = (_g + (int)1);
HXLINE(  76)				::Array< ::Dynamic> _hx_tmp3 = this->m_allCardData;
HXDLIN(  76)				_hx_tmp3->push( ::source::data::card::TLCard_obj::__alloc( HX_CTX , ::Dynamic(info->__Field(HX_("name",4b,72,ff,48),hx::paccDynamic)), ::Dynamic(info->__Field(HX_("year",bd,c9,47,50),hx::paccDynamic))));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CardsExtension_obj,parseRawData,(void))

void CardsExtension_obj::init(){
            	HX_STACKFRAME(&_hx_pos_90b1391b49477efb_81_init)
HXLINE(  82)		this->release();
HXLINE(  83)		this->loadRawData();
HXLINE(  84)		this->parseRawData();
            	}


HX_DEFINE_DYNAMIC_FUNC0(CardsExtension_obj,init,(void))

void CardsExtension_obj::release(){
            	HX_STACKFRAME(&_hx_pos_90b1391b49477efb_88_release)
HXLINE(  89)		this->m_rawData = null();
HXLINE(  91)		if (hx::IsNotNull( this->m_allCardData )) {
HXLINE(  92)			int _g = (int)0;
HXDLIN(  92)			::Array< ::Dynamic> _g1 = this->m_allCardData;
HXDLIN(  92)			while((_g < _g1->length)){
HXLINE(  92)				 ::source::data::card::TLCard card = _g1->__get(_g).StaticCast<  ::source::data::card::TLCard >();
HXDLIN(  92)				_g = (_g + (int)1);
HXLINE(  93)				card->release();
            			}
            		}
HXLINE(  95)		this->m_allCardData = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(CardsExtension_obj,release,(void))

int CardsExtension_obj::getNbrCard(){
            	HX_STACKFRAME(&_hx_pos_90b1391b49477efb_99_getNbrCard)
HXLINE( 100)		if (hx::IsNull( this->m_allCardData )) {
HXLINE( 101)			return (int)0;
            		}
HXLINE( 103)		return this->m_allCardData->length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CardsExtension_obj,getNbrCard,return )

 ::source::data::card::TLCard CardsExtension_obj::getTLCard(int cardIndex){
            	HX_STACKFRAME(&_hx_pos_90b1391b49477efb_107_getTLCard)
HXLINE( 108)		if (hx::IsNull( this->m_allCardData )) {
HXLINE( 109)			return null();
            		}
            		else {
HXLINE( 110)			if ((this->m_allCardData->length == (int)0)) {
HXLINE( 111)				return null();
            			}
            			else {
HXLINE( 112)				bool _hx_tmp;
HXDLIN( 112)				if ((cardIndex >= (int)0)) {
HXLINE( 112)					_hx_tmp = (cardIndex >= this->m_allCardData->length);
            				}
            				else {
HXLINE( 112)					_hx_tmp = true;
            				}
HXDLIN( 112)				if (_hx_tmp) {
HXLINE( 113)					return null();
            				}
            			}
            		}
HXLINE( 115)		return this->m_allCardData->__get(cardIndex).StaticCast<  ::source::data::card::TLCard >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(CardsExtension_obj,getTLCard,return )


hx::ObjectPtr< CardsExtension_obj > CardsExtension_obj::__new(::String name,::String JsonFilename,::String __o_Jsonfilepath) {
	hx::ObjectPtr< CardsExtension_obj > __this = new CardsExtension_obj();
	__this->__construct(name,JsonFilename,__o_Jsonfilepath);
	return __this;
}

hx::ObjectPtr< CardsExtension_obj > CardsExtension_obj::__alloc(hx::Ctx *_hx_ctx,::String name,::String JsonFilename,::String __o_Jsonfilepath) {
	CardsExtension_obj *__this = (CardsExtension_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CardsExtension_obj), true, "data.card.CardsExtension"));
	*(void **)__this = CardsExtension_obj::_hx_vtable;
	__this->__construct(name,JsonFilename,__o_Jsonfilepath);
	return __this;
}

CardsExtension_obj::CardsExtension_obj()
{
}

void CardsExtension_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CardsExtension);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(m_extentionJsonFilePath,"m_extentionJsonFilePath");
	HX_MARK_MEMBER_NAME(m_extentionJsonFileName,"m_extentionJsonFileName");
	HX_MARK_MEMBER_NAME(m_fullpath,"m_fullpath");
	HX_MARK_MEMBER_NAME(m_rawData,"m_rawData");
	HX_MARK_MEMBER_NAME(m_allCardData,"m_allCardData");
	HX_MARK_END_CLASS();
}

void CardsExtension_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(m_extentionJsonFilePath,"m_extentionJsonFilePath");
	HX_VISIT_MEMBER_NAME(m_extentionJsonFileName,"m_extentionJsonFileName");
	HX_VISIT_MEMBER_NAME(m_fullpath,"m_fullpath");
	HX_VISIT_MEMBER_NAME(m_rawData,"m_rawData");
	HX_VISIT_MEMBER_NAME(m_allCardData,"m_allCardData");
}

hx::Val CardsExtension_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return hx::Val( name); }
		if (HX_FIELD_EQ(inName,"init") ) { return hx::Val( init_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"release") ) { return hx::Val( release_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"m_rawData") ) { return hx::Val( m_rawData); }
		if (HX_FIELD_EQ(inName,"getTLCard") ) { return hx::Val( getTLCard_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_fullpath") ) { return hx::Val( m_fullpath); }
		if (HX_FIELD_EQ(inName,"getNbrCard") ) { return hx::Val( getNbrCard_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"loadRawData") ) { return hx::Val( loadRawData_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"parseRawData") ) { return hx::Val( parseRawData_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"m_allCardData") ) { return hx::Val( m_allCardData); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"m_extentionJsonFilePath") ) { return hx::Val( m_extentionJsonFilePath); }
		if (HX_FIELD_EQ(inName,"m_extentionJsonFileName") ) { return hx::Val( m_extentionJsonFileName); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val CardsExtension_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"m_rawData") ) { m_rawData=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_fullpath") ) { m_fullpath=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"m_allCardData") ) { m_allCardData=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"m_extentionJsonFilePath") ) { m_extentionJsonFilePath=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_extentionJsonFileName") ) { m_extentionJsonFileName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CardsExtension_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("m_extentionJsonFilePath","\x35","\x13","\x09","\x3c"));
	outFields->push(HX_HCSTRING("m_extentionJsonFileName","\xdb","\x9f","\xb6","\x3a"));
	outFields->push(HX_HCSTRING("m_fullpath","\x06","\x44","\xd7","\x9a"));
	outFields->push(HX_HCSTRING("m_rawData","\x20","\x7b","\x9a","\x09"));
	outFields->push(HX_HCSTRING("m_allCardData","\x49","\x24","\x5c","\x1a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo CardsExtension_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(CardsExtension_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsString,(int)offsetof(CardsExtension_obj,m_extentionJsonFilePath),HX_HCSTRING("m_extentionJsonFilePath","\x35","\x13","\x09","\x3c")},
	{hx::fsString,(int)offsetof(CardsExtension_obj,m_extentionJsonFileName),HX_HCSTRING("m_extentionJsonFileName","\xdb","\x9f","\xb6","\x3a")},
	{hx::fsString,(int)offsetof(CardsExtension_obj,m_fullpath),HX_HCSTRING("m_fullpath","\x06","\x44","\xd7","\x9a")},
	{hx::fsString,(int)offsetof(CardsExtension_obj,m_rawData),HX_HCSTRING("m_rawData","\x20","\x7b","\x9a","\x09")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(CardsExtension_obj,m_allCardData),HX_HCSTRING("m_allCardData","\x49","\x24","\x5c","\x1a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *CardsExtension_obj_sStaticStorageInfo = 0;
#endif

static ::String CardsExtension_obj_sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("m_extentionJsonFilePath","\x35","\x13","\x09","\x3c"),
	HX_HCSTRING("m_extentionJsonFileName","\xdb","\x9f","\xb6","\x3a"),
	HX_HCSTRING("m_fullpath","\x06","\x44","\xd7","\x9a"),
	HX_HCSTRING("m_rawData","\x20","\x7b","\x9a","\x09"),
	HX_HCSTRING("m_allCardData","\x49","\x24","\x5c","\x1a"),
	HX_HCSTRING("loadRawData","\xac","\x2a","\xb6","\xcf"),
	HX_HCSTRING("parseRawData","\x3f","\xc0","\xf2","\x58"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("release","\xc7","\x85","\xed","\x58"),
	HX_HCSTRING("getNbrCard","\xb8","\x54","\xd5","\x2c"),
	HX_HCSTRING("getTLCard","\x7e","\xc4","\xc3","\xcc"),
	::String(null()) };

static void CardsExtension_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CardsExtension_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CardsExtension_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CardsExtension_obj::__mClass,"__mClass");
};

#endif

hx::Class CardsExtension_obj::__mClass;

void CardsExtension_obj::__register()
{
	hx::Object *dummy = new CardsExtension_obj;
	CardsExtension_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("data.card.CardsExtension","\x16","\xbf","\xd1","\xbe");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CardsExtension_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(CardsExtension_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CardsExtension_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CardsExtension_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CardsExtension_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CardsExtension_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace data
} // end namespace card