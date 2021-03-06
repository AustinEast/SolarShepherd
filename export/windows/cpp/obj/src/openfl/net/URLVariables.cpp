#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_openfl_net_URLVariables
#include <openfl/net/URLVariables.h>
#endif
namespace openfl{
namespace net{

Void URLVariables_obj::__construct(::String inEncoded)
{
HX_STACK_FRAME("openfl.net.URLVariables","new",0x0e8c3f29,"openfl.net.URLVariables.new","openfl/net/URLVariables.hx",25,0x10f26625)
HX_STACK_THIS(this)
HX_STACK_ARG(inEncoded,"inEncoded")
{
	HX_STACK_LINE(25)
	if (((inEncoded != null()))){
		HX_STACK_LINE(27)
		this->decode(inEncoded);
	}
}
;
	return null();
}

//URLVariables_obj::~URLVariables_obj() { }

Dynamic URLVariables_obj::__CreateEmpty() { return  new URLVariables_obj; }
hx::ObjectPtr< URLVariables_obj > URLVariables_obj::__new(::String inEncoded)
{  hx::ObjectPtr< URLVariables_obj > result = new URLVariables_obj();
	result->__construct(inEncoded);
	return result;}

Dynamic URLVariables_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< URLVariables_obj > result = new URLVariables_obj();
	result->__construct(inArgs[0]);
	return result;}

Void URLVariables_obj::decode( ::String inVars){
{
		HX_STACK_FRAME("openfl.net.URLVariables","decode",0x44099205,"openfl.net.URLVariables.decode","openfl/net/URLVariables.hx",45,0x10f26625)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inVars,"inVars")
		HX_STACK_LINE(47)
		Array< ::String > fields = ::Reflect_obj::fields(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(fields,"fields");
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(49)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(49)
			while((true)){
				HX_STACK_LINE(49)
				if ((!(((_g < fields->length))))){
					HX_STACK_LINE(49)
					break;
				}
				HX_STACK_LINE(49)
				::String f = fields->__get(_g);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(49)
				++(_g);
				HX_STACK_LINE(51)
				::Reflect_obj::deleteField(hx::ObjectPtr<OBJ_>(this),f);
			}
		}
		HX_STACK_LINE(55)
		Array< ::String > fields1 = inVars.split(HX_CSTRING(";"))->join(HX_CSTRING("&")).split(HX_CSTRING("&"));		HX_STACK_VAR(fields1,"fields1");
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(57)
			while((true)){
				HX_STACK_LINE(57)
				if ((!(((_g < fields1->length))))){
					HX_STACK_LINE(57)
					break;
				}
				HX_STACK_LINE(57)
				::String f = fields1->__get(_g);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(57)
				++(_g);
				HX_STACK_LINE(59)
				int eq = f.indexOf(HX_CSTRING("="),null());		HX_STACK_VAR(eq,"eq");
				HX_STACK_LINE(61)
				if (((eq > (int)0))){
					HX_STACK_LINE(63)
					::String _g1 = f.substr((int)0,eq);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(63)
					::String field = ::StringTools_obj::urlDecode(_g1);		HX_STACK_VAR(field,"field");
					HX_STACK_LINE(63)
					::String _g11 = f.substr((eq + (int)1),null());		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(63)
					Dynamic value = ::StringTools_obj::urlDecode(_g11);		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(63)
					this->__SetField(field,value,false);
				}
				else{
					HX_STACK_LINE(65)
					if (((eq != (int)0))){
						HX_STACK_LINE(67)
						::String field = ::StringTools_obj::urlDecode(f);		HX_STACK_VAR(field,"field");
						HX_STACK_LINE(67)
						this->__SetField(field,HX_CSTRING(""),false);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(URLVariables_obj,decode,(void))

::String URLVariables_obj::toString( ){
	HX_STACK_FRAME("openfl.net.URLVariables","toString",0x3ea32943,"openfl.net.URLVariables.toString","openfl/net/URLVariables.hx",82,0x10f26625)
	HX_STACK_THIS(this)
	HX_STACK_LINE(84)
	Array< ::String > result = Array_obj< ::String >::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(85)
	Array< ::String > fields = ::Reflect_obj::fields(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(fields,"fields");
	HX_STACK_LINE(87)
	{
		HX_STACK_LINE(87)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(87)
		while((true)){
			HX_STACK_LINE(87)
			if ((!(((_g < fields->length))))){
				HX_STACK_LINE(87)
				break;
			}
			HX_STACK_LINE(87)
			::String f = fields->__get(_g);		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(87)
			++(_g);
			HX_STACK_LINE(89)
			::String _g1 = ::StringTools_obj::urlEncode(f);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(89)
			::String _g11 = (_g1 + HX_CSTRING("="));		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(89)
			Dynamic _g2 = ::Reflect_obj::field(hx::ObjectPtr<OBJ_>(this),f);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(89)
			::String _g3 = ::StringTools_obj::urlEncode(_g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(89)
			::String _g4 = (_g11 + _g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(89)
			result->push(_g4);
		}
	}
	HX_STACK_LINE(93)
	return result->join(HX_CSTRING("&"));
}


HX_DEFINE_DYNAMIC_FUNC0(URLVariables_obj,toString,return )


URLVariables_obj::URLVariables_obj()
{
	HX_INIT_IMPLEMENT_DYNAMIC;
}

void URLVariables_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(URLVariables);
	HX_MARK_DYNAMIC;
	HX_MARK_END_CLASS();
}

void URLVariables_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_DYNAMIC;
}

Dynamic URLVariables_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"decode") ) { return decode_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	HX_CHECK_DYNAMIC_GET_FIELD(inName);
	return super::__Field(inName,inCallProp);
}

Dynamic URLVariables_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	try { return super::__SetField(inName,inValue,inCallProp); }
	catch(Dynamic e) { HX_DYNAMIC_SET_FIELD(inName,inValue); }
	return inValue;
}

void URLVariables_obj::__GetFields(Array< ::String> &outFields)
{
	HX_APPEND_DYNAMIC_FIELDS(outFields);
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("decode"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(URLVariables_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(URLVariables_obj::__mClass,"__mClass");
};

#endif

Class URLVariables_obj::__mClass;

void URLVariables_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.net.URLVariables"), hx::TCanCast< URLVariables_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void URLVariables_obj::__boot()
{
}

} // end namespace openfl
} // end namespace net
