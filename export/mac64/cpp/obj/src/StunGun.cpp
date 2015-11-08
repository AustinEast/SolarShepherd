#include <hxcpp.h>

#ifndef INCLUDED_StunGun
#include <StunGun.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_weapon_FlxWeapon
#include <flixel/addons/weapon/FlxWeapon.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif

Void StunGun_obj::__construct(::String Name,::flixel::FlxSprite ParentRef,::Class BulletType,Dynamic __o_BulletID)
{
HX_STACK_FRAME("StunGun","new",0xaae1b538,"StunGun.new","StunGun.hx",14,0xf9e0d938)
HX_STACK_THIS(this)
HX_STACK_ARG(Name,"Name")
HX_STACK_ARG(ParentRef,"ParentRef")
HX_STACK_ARG(BulletType,"BulletType")
HX_STACK_ARG(__o_BulletID,"BulletID")
Dynamic BulletID = __o_BulletID.Default(0);
{
	HX_STACK_LINE(15)
	super::__construct(Name,ParentRef,BulletType,BulletID);
	HX_STACK_LINE(18)
	this->makeImageBullet((int)50,HX_CSTRING("assets/temp/beam.png"),(int)0,(int)0,true,(int)360,(int)1,null(),null());
	HX_STACK_LINE(19)
	::flixel::util::FlxRect _g = ::flixel::util::FlxRect_obj::__new((int)0,(int)0,(int)3000,(int)3000);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(19)
	this->setBulletBounds(_g);
	HX_STACK_LINE(20)
	this->setFireRate((int)500);
	HX_STACK_LINE(21)
	this->rndFactorAngle = (int)20;
	HX_STACK_LINE(22)
	this->setBulletDirection((int)360,(int)300);
	HX_STACK_LINE(23)
	this->setBulletLifeSpan(0.5);
}
;
	return null();
}

//StunGun_obj::~StunGun_obj() { }

Dynamic StunGun_obj::__CreateEmpty() { return  new StunGun_obj; }
hx::ObjectPtr< StunGun_obj > StunGun_obj::__new(::String Name,::flixel::FlxSprite ParentRef,::Class BulletType,Dynamic __o_BulletID)
{  hx::ObjectPtr< StunGun_obj > result = new StunGun_obj();
	result->__construct(Name,ParentRef,BulletType,__o_BulletID);
	return result;}

Dynamic StunGun_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StunGun_obj > result = new StunGun_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}


StunGun_obj::StunGun_obj()
{
}

void StunGun_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StunGun);
	HX_MARK_MEMBER_NAME(_shootSnd,"_shootSnd");
	::flixel::addons::weapon::FlxWeapon_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StunGun_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_shootSnd,"_shootSnd");
	::flixel::addons::weapon::FlxWeapon_obj::__Visit(HX_VISIT_ARG);
}

Dynamic StunGun_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_shootSnd") ) { return _shootSnd; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StunGun_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_shootSnd") ) { _shootSnd=inValue.Cast< ::flixel::system::FlxSound >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StunGun_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_shootSnd"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::system::FlxSound*/ ,(int)offsetof(StunGun_obj,_shootSnd),HX_CSTRING("_shootSnd")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_shootSnd"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StunGun_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StunGun_obj::__mClass,"__mClass");
};

#endif

Class StunGun_obj::__mClass;

void StunGun_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("StunGun"), hx::TCanCast< StunGun_obj> ,sStaticFields,sMemberFields,
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

void StunGun_obj::__boot()
{
}

