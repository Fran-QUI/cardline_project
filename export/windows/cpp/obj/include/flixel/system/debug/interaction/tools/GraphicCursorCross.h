// Generated by Haxe 3.4.0
#ifndef INCLUDED_flixel_system_debug_interaction_tools_GraphicCursorCross
#define INCLUDED_flixel_system_debug_interaction_tools_GraphicCursorCross

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
HX_DECLARE_CLASS5(flixel,_hx_system,debug,interaction,tools,GraphicCursorCross)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)

namespace flixel{
namespace _hx_system{
namespace debug{
namespace interaction{
namespace tools{


class HXCPP_CLASS_ATTRIBUTES GraphicCursorCross_obj : public  ::openfl::_legacy::display::BitmapData_obj
{
	public:
		typedef  ::openfl::_legacy::display::BitmapData_obj super;
		typedef GraphicCursorCross_obj OBJ_;
		GraphicCursorCross_obj();

	public:
		enum { _hx_ClassId = 0x621990ef };

		void __construct(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.interaction.tools.GraphicCursorCross")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.system.debug.interaction.tools.GraphicCursorCross"); }
		static hx::ObjectPtr< GraphicCursorCross_obj > __new(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA);
		static hx::ObjectPtr< GraphicCursorCross_obj > __alloc(hx::Ctx *_hx_ctx,int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GraphicCursorCross_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("GraphicCursorCross","\x22","\x4b","\x73","\xea"); }

		static void __boot();
		static ::String resourceName;
};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace interaction
} // end namespace tools

#endif /* INCLUDED_flixel_system_debug_interaction_tools_GraphicCursorCross */ 
