// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxBounds
#include <flixel/util/helpers/FlxBounds.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxPointRangeBounds
#include <flixel/util/helpers/FlxPointRangeBounds.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_473cc0ec95a2faaa_11_new,"flixel.util.helpers.FlxPointRangeBounds","new",0x02dca7c3,"flixel.util.helpers.FlxPointRangeBounds.new","flixel/util/helpers/FlxPointRangeBounds.hx",11,0x6e9a8e2e)
HX_LOCAL_STACK_FRAME(_hx_pos_473cc0ec95a2faaa_61_set,"flixel.util.helpers.FlxPointRangeBounds","set",0x02e07305,"flixel.util.helpers.FlxPointRangeBounds.set","flixel/util/helpers/FlxPointRangeBounds.hx",61,0x6e9a8e2e)
HX_LOCAL_STACK_FRAME(_hx_pos_473cc0ec95a2faaa_82_equals,"flixel.util.helpers.FlxPointRangeBounds","equals",0x60ba96bc,"flixel.util.helpers.FlxPointRangeBounds.equals","flixel/util/helpers/FlxPointRangeBounds.hx",82,0x6e9a8e2e)
HX_LOCAL_STACK_FRAME(_hx_pos_473cc0ec95a2faaa_93_toString,"flixel.util.helpers.FlxPointRangeBounds","toString",0x58cf5269,"flixel.util.helpers.FlxPointRangeBounds.toString","flixel/util/helpers/FlxPointRangeBounds.hx",93,0x6e9a8e2e)
HX_LOCAL_STACK_FRAME(_hx_pos_473cc0ec95a2faaa_105_destroy,"flixel.util.helpers.FlxPointRangeBounds","destroy",0x3271f1dd,"flixel.util.helpers.FlxPointRangeBounds.destroy","flixel/util/helpers/FlxPointRangeBounds.hx",105,0x6e9a8e2e)
namespace flixel{
namespace util{
namespace helpers{

void FlxPointRangeBounds_obj::__construct(Float startMinX, ::Dynamic startMinY, ::Dynamic startMaxX, ::Dynamic startMaxY, ::Dynamic endMinX, ::Dynamic endMinY, ::Dynamic endMaxX, ::Dynamic endMaxY){
            	HX_GC_STACKFRAME(&_hx_pos_473cc0ec95a2faaa_11_new)
HXLINE(  24)		this->active = true;
HXLINE(  41)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);
HXDLIN(  41)		point->_inPool = false;
HXDLIN(  41)		 ::flixel::math::FlxPoint _hx_tmp = point;
HXDLIN(  41)		 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);
HXDLIN(  41)		point1->_inPool = false;
HXDLIN(  41)		this->start =  ::flixel::util::helpers::FlxBounds_obj::__alloc( HX_CTX ,_hx_tmp,point1);
HXLINE(  42)		 ::flixel::math::FlxPoint point2 = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);
HXDLIN(  42)		point2->_inPool = false;
HXDLIN(  42)		 ::flixel::math::FlxPoint _hx_tmp1 = point2;
HXDLIN(  42)		 ::flixel::math::FlxPoint point3 = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);
HXDLIN(  42)		point3->_inPool = false;
HXDLIN(  42)		this->end =  ::flixel::util::helpers::FlxBounds_obj::__alloc( HX_CTX ,_hx_tmp1,point3);
HXLINE(  44)		this->set(startMinX,startMinY,startMaxX,startMaxY,endMinX,endMinY,endMaxX,endMaxY);
            	}

Dynamic FlxPointRangeBounds_obj::__CreateEmpty() { return new FlxPointRangeBounds_obj; }

void *FlxPointRangeBounds_obj::_hx_vtable = 0;

Dynamic FlxPointRangeBounds_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxPointRangeBounds_obj > _hx_result = new FlxPointRangeBounds_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _hx_result;
}

bool FlxPointRangeBounds_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1881b2b1;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_util_helpers_FlxPointRangeBounds__hx_flixel_util_IFlxDestroyable= {
	( void (hx::Object::*)())&::flixel::util::helpers::FlxPointRangeBounds_obj::destroy,
};

void *FlxPointRangeBounds_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_util_helpers_FlxPointRangeBounds__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

 ::flixel::util::helpers::FlxPointRangeBounds FlxPointRangeBounds_obj::set(Float startMinX, ::Dynamic startMinY, ::Dynamic startMaxX, ::Dynamic startMaxY, ::Dynamic endMinX, ::Dynamic endMinY, ::Dynamic endMaxX, ::Dynamic endMaxY){
            	HX_STACKFRAME(&_hx_pos_473cc0ec95a2faaa_61_set)
HXLINE(  62)		( ( ::flixel::math::FlxPoint)(this->start->min) )->set_x(startMinX);
HXLINE(  63)		Float _hx_tmp;
HXDLIN(  63)		if (hx::IsNull( startMinY )) {
HXLINE(  63)			_hx_tmp = ( ( ::flixel::math::FlxPoint)(this->start->min) )->x;
            		}
            		else {
HXLINE(  63)			_hx_tmp = startMinY;
            		}
HXDLIN(  63)		( ( ::flixel::math::FlxPoint)(this->start->min) )->set_y(_hx_tmp);
HXLINE(  64)		Float _hx_tmp1;
HXDLIN(  64)		if (hx::IsNull( startMaxX )) {
HXLINE(  64)			_hx_tmp1 = ( ( ::flixel::math::FlxPoint)(this->start->min) )->x;
            		}
            		else {
HXLINE(  64)			_hx_tmp1 = startMaxX;
            		}
HXDLIN(  64)		( ( ::flixel::math::FlxPoint)(this->start->max) )->set_x(_hx_tmp1);
HXLINE(  65)		Float _hx_tmp2;
HXDLIN(  65)		if (hx::IsNull( startMaxY )) {
HXLINE(  65)			_hx_tmp2 = ( ( ::flixel::math::FlxPoint)(this->start->min) )->y;
            		}
            		else {
HXLINE(  65)			_hx_tmp2 = startMaxY;
            		}
HXDLIN(  65)		( ( ::flixel::math::FlxPoint)(this->start->max) )->set_y(_hx_tmp2);
HXLINE(  66)		Float _hx_tmp3;
HXDLIN(  66)		if (hx::IsNull( endMinX )) {
HXLINE(  66)			_hx_tmp3 = ( ( ::flixel::math::FlxPoint)(this->start->min) )->x;
            		}
            		else {
HXLINE(  66)			_hx_tmp3 = endMinX;
            		}
HXDLIN(  66)		( ( ::flixel::math::FlxPoint)(this->end->min) )->set_x(_hx_tmp3);
HXLINE(  67)		Float _hx_tmp4;
HXDLIN(  67)		if (hx::IsNull( endMinY )) {
HXLINE(  67)			_hx_tmp4 = ( ( ::flixel::math::FlxPoint)(this->start->min) )->y;
            		}
            		else {
HXLINE(  67)			_hx_tmp4 = endMinY;
            		}
HXDLIN(  67)		( ( ::flixel::math::FlxPoint)(this->end->min) )->set_y(_hx_tmp4);
HXLINE(  68)		Float _hx_tmp5;
HXDLIN(  68)		if (hx::IsNull( endMaxX )) {
HXLINE(  68)			if (hx::IsNull( endMinX )) {
HXLINE(  68)				_hx_tmp5 = ( ( ::flixel::math::FlxPoint)(this->start->max) )->x;
            			}
            			else {
HXLINE(  68)				_hx_tmp5 = ( ( ::flixel::math::FlxPoint)(this->end->min) )->x;
            			}
            		}
            		else {
HXLINE(  68)			_hx_tmp5 = endMaxX;
            		}
HXDLIN(  68)		( ( ::flixel::math::FlxPoint)(this->end->max) )->set_x(_hx_tmp5);
HXLINE(  69)		Float _hx_tmp6;
HXDLIN(  69)		if (hx::IsNull( endMaxY )) {
HXLINE(  69)			if (hx::IsNull( endMinY )) {
HXLINE(  69)				_hx_tmp6 = ( ( ::flixel::math::FlxPoint)(this->start->max) )->y;
            			}
            			else {
HXLINE(  69)				_hx_tmp6 = ( ( ::flixel::math::FlxPoint)(this->end->min) )->y;
            			}
            		}
            		else {
HXLINE(  69)			_hx_tmp6 = endMaxY;
            		}
HXDLIN(  69)		( ( ::flixel::math::FlxPoint)(this->end->max) )->set_y(_hx_tmp6);
HXLINE(  71)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC8(FlxPointRangeBounds_obj,set,return )

bool FlxPointRangeBounds_obj::equals( ::flixel::util::helpers::FlxPointRangeBounds OtherFlxPointRangeBounds){
            	HX_STACKFRAME(&_hx_pos_473cc0ec95a2faaa_82_equals)
HXLINE(  82)		bool _hx_tmp;
HXDLIN(  82)		bool _hx_tmp1;
HXDLIN(  82)		 ::flixel::math::FlxPoint _this = ( ( ::flixel::math::FlxPoint)(this->start->min) );
HXDLIN(  82)		 ::flixel::math::FlxPoint point = ( ( ::flixel::math::FlxPoint)(OtherFlxPointRangeBounds->start->min) );
HXDLIN(  82)		bool result;
HXDLIN(  82)		if ((::Math_obj::abs((_this->x - point->x)) <= ((Float)0.0000001))) {
HXLINE(  82)			result = (::Math_obj::abs((_this->y - point->y)) <= ((Float)0.0000001));
            		}
            		else {
HXLINE(  82)			result = false;
            		}
HXDLIN(  82)		if (point->_weak) {
HXLINE(  82)			point->put();
            		}
HXDLIN(  82)		if (result) {
HXLINE(  83)			 ::flixel::math::FlxPoint _this1 = ( ( ::flixel::math::FlxPoint)(this->start->max) );
HXDLIN(  83)			 ::flixel::math::FlxPoint point1 = ( ( ::flixel::math::FlxPoint)(OtherFlxPointRangeBounds->start->max) );
HXDLIN(  83)			bool result1;
HXDLIN(  83)			if ((::Math_obj::abs((_this1->x - point1->x)) <= ((Float)0.0000001))) {
HXLINE(  83)				result1 = (::Math_obj::abs((_this1->y - point1->y)) <= ((Float)0.0000001));
            			}
            			else {
HXLINE(  83)				result1 = false;
            			}
HXDLIN(  83)			if (point1->_weak) {
HXLINE(  83)				point1->put();
            			}
HXLINE(  82)			_hx_tmp1 = result1;
            		}
            		else {
HXLINE(  82)			_hx_tmp1 = false;
            		}
HXDLIN(  82)		if (_hx_tmp1) {
HXLINE(  84)			 ::flixel::math::FlxPoint _this2 = ( ( ::flixel::math::FlxPoint)(this->end->min) );
HXDLIN(  84)			 ::flixel::math::FlxPoint point2 = ( ( ::flixel::math::FlxPoint)(OtherFlxPointRangeBounds->end->min) );
HXDLIN(  84)			bool result2;
HXDLIN(  84)			if ((::Math_obj::abs((_this2->x - point2->x)) <= ((Float)0.0000001))) {
HXLINE(  84)				result2 = (::Math_obj::abs((_this2->y - point2->y)) <= ((Float)0.0000001));
            			}
            			else {
HXLINE(  84)				result2 = false;
            			}
HXDLIN(  84)			if (point2->_weak) {
HXLINE(  84)				point2->put();
            			}
HXLINE(  82)			_hx_tmp = result2;
            		}
            		else {
HXLINE(  82)			_hx_tmp = false;
            		}
HXDLIN(  82)		if (_hx_tmp) {
HXLINE(  85)			 ::flixel::math::FlxPoint _this3 = ( ( ::flixel::math::FlxPoint)(this->end->max) );
HXDLIN(  85)			 ::flixel::math::FlxPoint point3 = ( ( ::flixel::math::FlxPoint)(OtherFlxPointRangeBounds->end->max) );
HXDLIN(  85)			bool result3;
HXDLIN(  85)			if ((::Math_obj::abs((_this3->x - point3->x)) <= ((Float)0.0000001))) {
HXLINE(  85)				result3 = (::Math_obj::abs((_this3->y - point3->y)) <= ((Float)0.0000001));
            			}
            			else {
HXLINE(  85)				result3 = false;
            			}
HXDLIN(  85)			if (point3->_weak) {
HXLINE(  85)				point3->put();
            			}
HXLINE(  82)			return result3;
            		}
            		else {
HXLINE(  82)			return false;
            		}
HXDLIN(  82)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPointRangeBounds_obj,equals,return )

::String FlxPointRangeBounds_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_473cc0ec95a2faaa_93_toString)
HXLINE(  94)		 ::Dynamic value = ( ( ::flixel::math::FlxPoint)(this->start->min) )->x;
HXDLIN(  94)		 ::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN(  94)		_this->label = HX_("start.min.x",90,c5,24,b0);
HXDLIN(  94)		_this->value = value;
HXDLIN(  94)		 ::flixel::util::LabelValuePair _hx_tmp = _this;
HXLINE(  95)		 ::Dynamic value1 = ( ( ::flixel::math::FlxPoint)(this->start->min) )->y;
HXDLIN(  95)		 ::flixel::util::LabelValuePair _this1 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN(  95)		_this1->label = HX_("start.min.y",91,c5,24,b0);
HXDLIN(  95)		_this1->value = value1;
HXDLIN(  95)		 ::flixel::util::LabelValuePair _hx_tmp1 = _this1;
HXLINE(  96)		 ::Dynamic value2 = ( ( ::flixel::math::FlxPoint)(this->start->max) )->x;
HXDLIN(  96)		 ::flixel::util::LabelValuePair _this2 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN(  96)		_this2->label = HX_("start.max.x",22,a7,e2,aa);
HXDLIN(  96)		_this2->value = value2;
HXDLIN(  96)		 ::flixel::util::LabelValuePair _hx_tmp2 = _this2;
HXLINE(  97)		 ::Dynamic value3 = ( ( ::flixel::math::FlxPoint)(this->start->max) )->y;
HXDLIN(  97)		 ::flixel::util::LabelValuePair _this3 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN(  97)		_this3->label = HX_("start.max.y",23,a7,e2,aa);
HXDLIN(  97)		_this3->value = value3;
HXDLIN(  97)		 ::flixel::util::LabelValuePair _hx_tmp3 = _this3;
HXLINE(  98)		 ::Dynamic value4 = ( ( ::flixel::math::FlxPoint)(this->end->min) )->x;
HXDLIN(  98)		 ::flixel::util::LabelValuePair _this4 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN(  98)		_this4->label = HX_("end.min.x",c9,b5,20,78);
HXDLIN(  98)		_this4->value = value4;
HXDLIN(  98)		 ::flixel::util::LabelValuePair _hx_tmp4 = _this4;
HXLINE(  99)		 ::Dynamic value5 = ( ( ::flixel::math::FlxPoint)(this->end->min) )->y;
HXDLIN(  99)		 ::flixel::util::LabelValuePair _this5 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN(  99)		_this5->label = HX_("end.min.y",ca,b5,20,78);
HXDLIN(  99)		_this5->value = value5;
HXDLIN(  99)		 ::flixel::util::LabelValuePair _hx_tmp5 = _this5;
HXLINE( 100)		 ::Dynamic value6 = ( ( ::flixel::math::FlxPoint)(this->end->max) )->x;
HXDLIN( 100)		 ::flixel::util::LabelValuePair _this6 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 100)		_this6->label = HX_("end.max.x",5b,97,de,72);
HXDLIN( 100)		_this6->value = value6;
HXDLIN( 100)		 ::flixel::util::LabelValuePair _hx_tmp6 = _this6;
HXLINE( 101)		 ::Dynamic value7 = ( ( ::flixel::math::FlxPoint)(this->end->max) )->y;
HXDLIN( 101)		 ::flixel::util::LabelValuePair _this7 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 101)		_this7->label = HX_("end.max.y",5c,97,de,72);
HXDLIN( 101)		_this7->value = value7;
HXLINE(  93)		return ::flixel::util::FlxStringUtil_obj::getDebugString(::Array_obj< ::Dynamic>::__new(8)->init(0,_hx_tmp)->init(1,_hx_tmp1)->init(2,_hx_tmp2)->init(3,_hx_tmp3)->init(4,_hx_tmp4)->init(5,_hx_tmp5)->init(6,_hx_tmp6)->init(7,_this7));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPointRangeBounds_obj,toString,return )

void FlxPointRangeBounds_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_473cc0ec95a2faaa_105_destroy)
HXLINE( 106)		this->start->min = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->start->min)) );
HXLINE( 107)		this->start->max = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->start->max)) );
HXLINE( 108)		this->end->min = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->end->min)) );
HXLINE( 109)		this->end->max = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->end->max)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPointRangeBounds_obj,destroy,(void))


hx::ObjectPtr< FlxPointRangeBounds_obj > FlxPointRangeBounds_obj::__new(Float startMinX, ::Dynamic startMinY, ::Dynamic startMaxX, ::Dynamic startMaxY, ::Dynamic endMinX, ::Dynamic endMinY, ::Dynamic endMaxX, ::Dynamic endMaxY) {
	hx::ObjectPtr< FlxPointRangeBounds_obj > __this = new FlxPointRangeBounds_obj();
	__this->__construct(startMinX,startMinY,startMaxX,startMaxY,endMinX,endMinY,endMaxX,endMaxY);
	return __this;
}

hx::ObjectPtr< FlxPointRangeBounds_obj > FlxPointRangeBounds_obj::__alloc(hx::Ctx *_hx_ctx,Float startMinX, ::Dynamic startMinY, ::Dynamic startMaxX, ::Dynamic startMaxY, ::Dynamic endMinX, ::Dynamic endMinY, ::Dynamic endMaxX, ::Dynamic endMaxY) {
	FlxPointRangeBounds_obj *__this = (FlxPointRangeBounds_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxPointRangeBounds_obj), true, "flixel.util.helpers.FlxPointRangeBounds"));
	*(void **)__this = FlxPointRangeBounds_obj::_hx_vtable;
	__this->__construct(startMinX,startMinY,startMaxX,startMaxY,endMinX,endMinY,endMaxX,endMaxY);
	return __this;
}

FlxPointRangeBounds_obj::FlxPointRangeBounds_obj()
{
}

void FlxPointRangeBounds_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxPointRangeBounds);
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(end,"end");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_END_CLASS();
}

void FlxPointRangeBounds_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(end,"end");
	HX_VISIT_MEMBER_NAME(active,"active");
}

hx::Val FlxPointRangeBounds_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return hx::Val( end); }
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return hx::Val( start); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return hx::Val( active); }
		if (HX_FIELD_EQ(inName,"equals") ) { return hx::Val( equals_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxPointRangeBounds_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { end=inValue.Cast<  ::flixel::util::helpers::FlxBounds >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast<  ::flixel::util::helpers::FlxBounds >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxPointRangeBounds_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"));
	outFields->push(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"));
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxPointRangeBounds_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::util::helpers::FlxBounds*/ ,(int)offsetof(FlxPointRangeBounds_obj,start),HX_HCSTRING("start","\x62","\x74","\x0b","\x84")},
	{hx::fsObject /*::flixel::util::helpers::FlxBounds*/ ,(int)offsetof(FlxPointRangeBounds_obj,end),HX_HCSTRING("end","\xdb","\x03","\x4d","\x00")},
	{hx::fsBool,(int)offsetof(FlxPointRangeBounds_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxPointRangeBounds_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxPointRangeBounds_obj_sMemberFields[] = {
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"),
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void FlxPointRangeBounds_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxPointRangeBounds_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxPointRangeBounds_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxPointRangeBounds_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxPointRangeBounds_obj::__mClass;

void FlxPointRangeBounds_obj::__register()
{
	hx::Object *dummy = new FlxPointRangeBounds_obj;
	FlxPointRangeBounds_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.helpers.FlxPointRangeBounds","\x51","\x0a","\x5f","\xa3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxPointRangeBounds_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxPointRangeBounds_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxPointRangeBounds_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxPointRangeBounds_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxPointRangeBounds_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxPointRangeBounds_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util
} // end namespace helpers
