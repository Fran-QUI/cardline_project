// Generated by Haxe 3.4.0
#ifndef INCLUDED_openfl__legacy_gl_GLShader
#define INCLUDED_openfl__legacy_gl_GLShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_gl_GLObject
#include <openfl/_legacy/gl/GLObject.h>
#endif
HX_DECLARE_CLASS3(openfl,_legacy,gl,GLObject)
HX_DECLARE_CLASS3(openfl,_legacy,gl,GLShader)

namespace openfl{
namespace _legacy{
namespace gl{


class HXCPP_CLASS_ATTRIBUTES GLShader_obj : public  ::openfl::_legacy::gl::GLObject_obj
{
	public:
		typedef  ::openfl::_legacy::gl::GLObject_obj super;
		typedef GLShader_obj OBJ_;
		GLShader_obj();

	public:
		enum { _hx_ClassId = 0x36d2b0a7 };

		void __construct(int version, ::Dynamic id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.gl.GLShader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._legacy.gl.GLShader"); }
		static hx::ObjectPtr< GLShader_obj > __new(int version, ::Dynamic id);
		static hx::ObjectPtr< GLShader_obj > __alloc(hx::Ctx *_hx_ctx,int version, ::Dynamic id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLShader_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("GLShader","\x2a","\x1b","\x12","\x87"); }

		::String getType();

		bool isValid();

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace gl

#endif /* INCLUDED_openfl__legacy_gl_GLShader */ 