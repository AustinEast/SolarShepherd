#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_net_URLRequest
#include <openfl/_legacy/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequestHeader
#include <openfl/net/URLRequestHeader.h>
#endif
#ifndef INCLUDED_openfl_net_URLVariables
#include <openfl/net/URLVariables.h>
#endif
namespace openfl{
namespace _legacy{
namespace net{

Void URLRequest_obj::__construct(::String url)
{
HX_STACK_FRAME("openfl._legacy.net.URLRequest","new",0xde83de87,"openfl._legacy.net.URLRequest.new","openfl/_legacy/net/URLRequest.hx",34,0xc5bb36e6)
HX_STACK_THIS(this)
HX_STACK_ARG(url,"url")
{
	HX_STACK_LINE(36)
	if (((url != null()))){
		HX_STACK_LINE(38)
		this->url = url;
	}
	HX_STACK_LINE(42)
	this->requestHeaders = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(43)
	this->method = HX_CSTRING("GET");
	HX_STACK_LINE(45)
	this->verbose = false;
	HX_STACK_LINE(46)
	this->cookieString = HX_CSTRING("");
	HX_STACK_LINE(47)
	this->authType = (int)0;
	HX_STACK_LINE(48)
	this->contentType = HX_CSTRING("application/x-www-form-urlencoded");
	HX_STACK_LINE(49)
	this->credentials = HX_CSTRING("");
	HX_STACK_LINE(50)
	this->followRedirects = true;
}
;
	return null();
}

//URLRequest_obj::~URLRequest_obj() { }

Dynamic URLRequest_obj::__CreateEmpty() { return  new URLRequest_obj; }
hx::ObjectPtr< URLRequest_obj > URLRequest_obj::__new(::String url)
{  hx::ObjectPtr< URLRequest_obj > result = new URLRequest_obj();
	result->__construct(url);
	return result;}

Dynamic URLRequest_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< URLRequest_obj > result = new URLRequest_obj();
	result->__construct(inArgs[0]);
	return result;}

Void URLRequest_obj::basicAuth( ::String user,::String password){
{
		HX_STACK_FRAME("openfl._legacy.net.URLRequest","basicAuth",0x6693ca9d,"openfl._legacy.net.URLRequest.basicAuth","openfl/_legacy/net/URLRequest.hx",55,0xc5bb36e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(user,"user")
		HX_STACK_ARG(password,"password")
		HX_STACK_LINE(57)
		this->authType = (int)1;
		HX_STACK_LINE(58)
		this->credentials = ((user + HX_CSTRING(":")) + password);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(URLRequest_obj,basicAuth,(void))

Void URLRequest_obj::digestAuth( ::String user,::String password){
{
		HX_STACK_FRAME("openfl._legacy.net.URLRequest","digestAuth",0xbef19285,"openfl._legacy.net.URLRequest.digestAuth","openfl/_legacy/net/URLRequest.hx",63,0xc5bb36e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(user,"user")
		HX_STACK_ARG(password,"password")
		HX_STACK_LINE(65)
		this->authType = (int)2;
		HX_STACK_LINE(66)
		this->credentials = ((user + HX_CSTRING(":")) + password);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(URLRequest_obj,digestAuth,(void))

Void URLRequest_obj::__prepare( ){
{
		HX_STACK_FRAME("openfl._legacy.net.URLRequest","__prepare",0xdd9f87ce,"openfl._legacy.net.URLRequest.__prepare","openfl/_legacy/net/URLRequest.hx",71,0xc5bb36e6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(73)
		if (((this->userAgent == null()))){
			HX_STACK_LINE(75)
			this->userAgent = HX_CSTRING("");
		}
		HX_STACK_LINE(79)
		if (((this->data == null()))){
			HX_STACK_LINE(81)
			::openfl::_legacy::utils::ByteArray _g = ::openfl::_legacy::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(81)
			this->__bytes = _g;
		}
		else{
			HX_STACK_LINE(83)
			if ((::Std_obj::is(this->data,hx::ClassOf< ::openfl::_legacy::utils::ByteArray >()))){
				HX_STACK_LINE(85)
				this->__bytes = this->data;
			}
			else{
				HX_STACK_LINE(87)
				if ((::Std_obj::is(this->data,hx::ClassOf< ::openfl::net::URLVariables >()))){
					HX_STACK_LINE(89)
					::openfl::net::URLVariables vars = this->data;		HX_STACK_VAR(vars,"vars");
					HX_STACK_LINE(90)
					::String str = vars->toString();		HX_STACK_VAR(str,"str");
					HX_STACK_LINE(91)
					::openfl::_legacy::utils::ByteArray _g1 = ::openfl::_legacy::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(91)
					this->__bytes = _g1;
					HX_STACK_LINE(92)
					this->__bytes->writeUTFBytes(str);
				}
				else{
					HX_STACK_LINE(94)
					if ((::Std_obj::is(this->data,hx::ClassOf< ::String >()))){
						HX_STACK_LINE(96)
						::String str = this->data;		HX_STACK_VAR(str,"str");
						HX_STACK_LINE(97)
						::openfl::_legacy::utils::ByteArray _g2 = ::openfl::_legacy::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(97)
						this->__bytes = _g2;
						HX_STACK_LINE(98)
						this->__bytes->writeUTFBytes(str);
					}
					else{
						HX_STACK_LINE(100)
						if ((::Std_obj::is(this->data,hx::ClassOf< ::Dynamic >()))){
							HX_STACK_LINE(102)
							::openfl::net::URLVariables vars = ::openfl::net::URLVariables_obj::__new(null());		HX_STACK_VAR(vars,"vars");
							HX_STACK_LINE(104)
							{
								HX_STACK_LINE(104)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(104)
								Array< ::String > _g1 = ::Reflect_obj::fields(this->data);		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(104)
								while((true)){
									HX_STACK_LINE(104)
									if ((!(((_g < _g1->length))))){
										HX_STACK_LINE(104)
										break;
									}
									HX_STACK_LINE(104)
									::String i = _g1->__get(_g);		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(104)
									++(_g);
									HX_STACK_LINE(106)
									{
										HX_STACK_LINE(106)
										Dynamic value = ::Reflect_obj::field(this->data,i);		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(106)
										if (((vars != null()))){
											HX_STACK_LINE(106)
											vars->__SetField(i,value,false);
										}
									}
								}
							}
							HX_STACK_LINE(110)
							::String str = vars->toString();		HX_STACK_VAR(str,"str");
							HX_STACK_LINE(111)
							::openfl::_legacy::utils::ByteArray _g3 = ::openfl::_legacy::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(111)
							this->__bytes = _g3;
							HX_STACK_LINE(112)
							this->__bytes->writeUTFBytes(str);
						}
						else{
							HX_STACK_LINE(116)
							HX_STACK_DO_THROW(HX_CSTRING("Unknown data type"));
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(URLRequest_obj,__prepare,(void))

int URLRequest_obj::AUTH_BASIC;

int URLRequest_obj::AUTH_DIGEST;

int URLRequest_obj::AUTH_GSSNEGOTIATE;

int URLRequest_obj::AUTH_NTLM;

int URLRequest_obj::AUTH_DIGEST_IE;

int URLRequest_obj::AUTH_DIGEST_ANY;


URLRequest_obj::URLRequest_obj()
{
}

void URLRequest_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(URLRequest);
	HX_MARK_MEMBER_NAME(authType,"authType");
	HX_MARK_MEMBER_NAME(contentType,"contentType");
	HX_MARK_MEMBER_NAME(cookieString,"cookieString");
	HX_MARK_MEMBER_NAME(credentials,"credentials");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(followRedirects,"followRedirects");
	HX_MARK_MEMBER_NAME(method,"method");
	HX_MARK_MEMBER_NAME(requestHeaders,"requestHeaders");
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_MEMBER_NAME(userAgent,"userAgent");
	HX_MARK_MEMBER_NAME(verbose,"verbose");
	HX_MARK_MEMBER_NAME(__bytes,"__bytes");
	HX_MARK_END_CLASS();
}

void URLRequest_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(authType,"authType");
	HX_VISIT_MEMBER_NAME(contentType,"contentType");
	HX_VISIT_MEMBER_NAME(cookieString,"cookieString");
	HX_VISIT_MEMBER_NAME(credentials,"credentials");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(followRedirects,"followRedirects");
	HX_VISIT_MEMBER_NAME(method,"method");
	HX_VISIT_MEMBER_NAME(requestHeaders,"requestHeaders");
	HX_VISIT_MEMBER_NAME(url,"url");
	HX_VISIT_MEMBER_NAME(userAgent,"userAgent");
	HX_VISIT_MEMBER_NAME(verbose,"verbose");
	HX_VISIT_MEMBER_NAME(__bytes,"__bytes");
}

Dynamic URLRequest_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { return url; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { return method; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"verbose") ) { return verbose; }
		if (HX_FIELD_EQ(inName,"__bytes") ) { return __bytes; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"authType") ) { return authType; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"userAgent") ) { return userAgent; }
		if (HX_FIELD_EQ(inName,"basicAuth") ) { return basicAuth_dyn(); }
		if (HX_FIELD_EQ(inName,"__prepare") ) { return __prepare_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"digestAuth") ) { return digestAuth_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"contentType") ) { return contentType; }
		if (HX_FIELD_EQ(inName,"credentials") ) { return credentials; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cookieString") ) { return cookieString; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"requestHeaders") ) { return requestHeaders; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"followRedirects") ) { return followRedirects; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic URLRequest_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { method=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"verbose") ) { verbose=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__bytes") ) { __bytes=inValue.Cast< ::openfl::_legacy::utils::ByteArray >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"authType") ) { authType=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"userAgent") ) { userAgent=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"contentType") ) { contentType=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"credentials") ) { credentials=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cookieString") ) { cookieString=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"requestHeaders") ) { requestHeaders=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"followRedirects") ) { followRedirects=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void URLRequest_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("authType"));
	outFields->push(HX_CSTRING("contentType"));
	outFields->push(HX_CSTRING("cookieString"));
	outFields->push(HX_CSTRING("credentials"));
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("followRedirects"));
	outFields->push(HX_CSTRING("method"));
	outFields->push(HX_CSTRING("requestHeaders"));
	outFields->push(HX_CSTRING("url"));
	outFields->push(HX_CSTRING("userAgent"));
	outFields->push(HX_CSTRING("verbose"));
	outFields->push(HX_CSTRING("__bytes"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("AUTH_BASIC"),
	HX_CSTRING("AUTH_DIGEST"),
	HX_CSTRING("AUTH_GSSNEGOTIATE"),
	HX_CSTRING("AUTH_NTLM"),
	HX_CSTRING("AUTH_DIGEST_IE"),
	HX_CSTRING("AUTH_DIGEST_ANY"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(URLRequest_obj,authType),HX_CSTRING("authType")},
	{hx::fsString,(int)offsetof(URLRequest_obj,contentType),HX_CSTRING("contentType")},
	{hx::fsString,(int)offsetof(URLRequest_obj,cookieString),HX_CSTRING("cookieString")},
	{hx::fsString,(int)offsetof(URLRequest_obj,credentials),HX_CSTRING("credentials")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(URLRequest_obj,data),HX_CSTRING("data")},
	{hx::fsBool,(int)offsetof(URLRequest_obj,followRedirects),HX_CSTRING("followRedirects")},
	{hx::fsString,(int)offsetof(URLRequest_obj,method),HX_CSTRING("method")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(URLRequest_obj,requestHeaders),HX_CSTRING("requestHeaders")},
	{hx::fsString,(int)offsetof(URLRequest_obj,url),HX_CSTRING("url")},
	{hx::fsString,(int)offsetof(URLRequest_obj,userAgent),HX_CSTRING("userAgent")},
	{hx::fsBool,(int)offsetof(URLRequest_obj,verbose),HX_CSTRING("verbose")},
	{hx::fsObject /*::openfl::_legacy::utils::ByteArray*/ ,(int)offsetof(URLRequest_obj,__bytes),HX_CSTRING("__bytes")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("authType"),
	HX_CSTRING("contentType"),
	HX_CSTRING("cookieString"),
	HX_CSTRING("credentials"),
	HX_CSTRING("data"),
	HX_CSTRING("followRedirects"),
	HX_CSTRING("method"),
	HX_CSTRING("requestHeaders"),
	HX_CSTRING("url"),
	HX_CSTRING("userAgent"),
	HX_CSTRING("verbose"),
	HX_CSTRING("__bytes"),
	HX_CSTRING("basicAuth"),
	HX_CSTRING("digestAuth"),
	HX_CSTRING("__prepare"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(URLRequest_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(URLRequest_obj::AUTH_BASIC,"AUTH_BASIC");
	HX_MARK_MEMBER_NAME(URLRequest_obj::AUTH_DIGEST,"AUTH_DIGEST");
	HX_MARK_MEMBER_NAME(URLRequest_obj::AUTH_GSSNEGOTIATE,"AUTH_GSSNEGOTIATE");
	HX_MARK_MEMBER_NAME(URLRequest_obj::AUTH_NTLM,"AUTH_NTLM");
	HX_MARK_MEMBER_NAME(URLRequest_obj::AUTH_DIGEST_IE,"AUTH_DIGEST_IE");
	HX_MARK_MEMBER_NAME(URLRequest_obj::AUTH_DIGEST_ANY,"AUTH_DIGEST_ANY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(URLRequest_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(URLRequest_obj::AUTH_BASIC,"AUTH_BASIC");
	HX_VISIT_MEMBER_NAME(URLRequest_obj::AUTH_DIGEST,"AUTH_DIGEST");
	HX_VISIT_MEMBER_NAME(URLRequest_obj::AUTH_GSSNEGOTIATE,"AUTH_GSSNEGOTIATE");
	HX_VISIT_MEMBER_NAME(URLRequest_obj::AUTH_NTLM,"AUTH_NTLM");
	HX_VISIT_MEMBER_NAME(URLRequest_obj::AUTH_DIGEST_IE,"AUTH_DIGEST_IE");
	HX_VISIT_MEMBER_NAME(URLRequest_obj::AUTH_DIGEST_ANY,"AUTH_DIGEST_ANY");
};

#endif

Class URLRequest_obj::__mClass;

void URLRequest_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._legacy.net.URLRequest"), hx::TCanCast< URLRequest_obj> ,sStaticFields,sMemberFields,
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

void URLRequest_obj::__boot()
{
	AUTH_BASIC= (int)1;
	AUTH_DIGEST= (int)2;
	AUTH_GSSNEGOTIATE= (int)4;
	AUTH_NTLM= (int)8;
	AUTH_DIGEST_IE= (int)16;
	AUTH_DIGEST_ANY= (int)15;
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace net
