// Generated by Haxe 3.4.0
#ifndef INCLUDED_flixel_text_FlxTextFormat
#define INCLUDED_flixel_text_FlxTextFormat

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,text,FlxTextFormat)
HX_DECLARE_CLASS3(openfl,_legacy,text,TextFormat)

namespace flixel{
namespace text{


class HXCPP_CLASS_ATTRIBUTES FlxTextFormat_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef FlxTextFormat_obj OBJ_;
		FlxTextFormat_obj();

	public:
		enum { _hx_ClassId = 0x39cd0569 };

		void __construct( ::Dynamic FontColor, ::Dynamic Bold, ::Dynamic Italic, ::Dynamic BorderColor);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.text.FlxTextFormat")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.text.FlxTextFormat"); }
		static hx::ObjectPtr< FlxTextFormat_obj > __new( ::Dynamic FontColor, ::Dynamic Bold, ::Dynamic Italic, ::Dynamic BorderColor);
		static hx::ObjectPtr< FlxTextFormat_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic FontColor, ::Dynamic Bold, ::Dynamic Italic, ::Dynamic BorderColor);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxTextFormat_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("FlxTextFormat","\xb6","\xea","\xd6","\x62"); }

		int borderColor;
		 ::openfl::_legacy::text::TextFormat format;
};

} // end namespace flixel
} // end namespace text

#endif /* INCLUDED_flixel_text_FlxTextFormat */ 
