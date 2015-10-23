#include <hxcpp.h>

#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_SpaceBullet
#include <SpaceBullet.h>
#endif
#ifndef INCLUDED_SpaceSprite
#include <SpaceSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif

Void SpaceBullet_obj::__construct()
{
HX_STACK_FRAME("SpaceBullet","new",0x1f41087a,"SpaceBullet.new","SpaceBullet.hx",19,0xf3832436)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(20)
	super::__construct(null(),null(),null());
	HX_STACK_LINE(23)
	this->loadGraphic(HX_CSTRING("assets/images/pongBullet.png"),true,(int)4,(int)4,null(),null());
	HX_STACK_LINE(24)
	this->animation->add(HX_CSTRING("polTrue"),Array_obj< int >::__new().Add((int)0),null(),null());
	HX_STACK_LINE(25)
	this->animation->add(HX_CSTRING("polFalse"),Array_obj< int >::__new().Add((int)1),null(),null());
	HX_STACK_LINE(28)
	this->_polarity = true;
}
;
	return null();
}

//SpaceBullet_obj::~SpaceBullet_obj() { }

Dynamic SpaceBullet_obj::__CreateEmpty() { return  new SpaceBullet_obj; }
hx::ObjectPtr< SpaceBullet_obj > SpaceBullet_obj::__new()
{  hx::ObjectPtr< SpaceBullet_obj > result = new SpaceBullet_obj();
	result->__construct();
	return result;}

Dynamic SpaceBullet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SpaceBullet_obj > result = new SpaceBullet_obj();
	result->__construct();
	return result;}

Void SpaceBullet_obj::update( ){
{
		HX_STACK_FRAME("SpaceBullet","update",0xcf5ada2f,"SpaceBullet.update","SpaceBullet.hx",34,0xf3832436)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		this->super::update();
		HX_STACK_LINE(38)
		if (((bool((this->y <= (int)-10)) || bool((this->y >= ::flixel::FlxG_obj::height))))){
			HX_STACK_LINE(40)
			this->hitPaddle = null();
			HX_STACK_LINE(41)
			this->set_exists(false);
		}
		HX_STACK_LINE(44)
		if (((bool((this->x <= (int)0)) || bool((this->x >= ::flixel::FlxG_obj::width))))){
			HX_STACK_LINE(46)
			::flixel::util::FlxPoint _g = this->velocity;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(46)
			_g->set_x((_g->x * (int)-1));
		}
	}
return null();
}


Void SpaceBullet_obj::destroy( ){
{
		HX_STACK_FRAME("SpaceBullet","destroy",0x26da7a14,"SpaceBullet.destroy","SpaceBullet.hx",54,0xf3832436)
		HX_STACK_THIS(this)
		HX_STACK_LINE(54)
		this->super::destroy();
	}
return null();
}


Void SpaceBullet_obj::bounce( ::SpaceSprite paddle){
{
		HX_STACK_FRAME("SpaceBullet","bounce",0xae72d9ae,"SpaceBullet.bounce","SpaceBullet.hx",64,0xf3832436)
		HX_STACK_THIS(this)
		HX_STACK_ARG(paddle,"paddle")
		HX_STACK_LINE(64)
		if (((this->hitPaddle != paddle))){
			HX_STACK_LINE(67)
			if (((paddle->_polarity == this->_polarity))){
				HX_STACK_LINE(69)
				{
					HX_STACK_LINE(69)
					::flixel::util::FlxPoint _g = this->velocity;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(69)
					_g->set_x((_g->x + (Float(paddle->velocity->x) / Float((int)2))));
				}
				HX_STACK_LINE(70)
				{
					HX_STACK_LINE(70)
					::flixel::util::FlxPoint _g = this->velocity;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(70)
					_g->set_y((_g->y * (int)-1));
				}
				HX_STACK_LINE(71)
				this->hitPaddle = paddle;
			}
			else{
				HX_STACK_LINE(74)
				if (((paddle->_polarity != this->_polarity))){
					HX_STACK_LINE(76)
					paddle->kill();
					HX_STACK_LINE(77)
					this->kill();
					HX_STACK_LINE(78)
					::flixel::FlxG_obj::camera->shake(0.02,0.25,null(),null(),null());
					HX_STACK_LINE(81)
					if (((this->hitPaddle == null()))){
						HX_STACK_LINE(83)
						::flixel::FlxG_obj::camera->flash((int)-1,(int)1,null(),null());
						HX_STACK_LINE(84)
						::flixel::FlxG_obj::camera->fade((int)-16777216,.33,false,this->doneFadeOut_dyn(),null());
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SpaceBullet_obj,bounce,(void))

Void SpaceBullet_obj::doneFadeOut( ){
{
		HX_STACK_FRAME("SpaceBullet","doneFadeOut",0x79c5462a,"SpaceBullet.doneFadeOut","SpaceBullet.hx",96,0xf3832436)
		HX_STACK_THIS(this)
		HX_STACK_LINE(96)
		::flixel::FlxState State = ::MenuState_obj::__new(null());		HX_STACK_VAR(State,"State");
		HX_STACK_LINE(96)
		::flixel::FlxG_obj::game->_requestedState = State;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SpaceBullet_obj,doneFadeOut,(void))


SpaceBullet_obj::SpaceBullet_obj()
{
}

void SpaceBullet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SpaceBullet);
	HX_MARK_MEMBER_NAME(hitPaddle,"hitPaddle");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SpaceBullet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(hitPaddle,"hitPaddle");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SpaceBullet_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"bounce") ) { return bounce_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hitPaddle") ) { return hitPaddle; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"doneFadeOut") ) { return doneFadeOut_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SpaceBullet_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"hitPaddle") ) { hitPaddle=inValue.Cast< ::SpaceSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SpaceBullet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("hitPaddle"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::SpaceSprite*/ ,(int)offsetof(SpaceBullet_obj,hitPaddle),HX_CSTRING("hitPaddle")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("hitPaddle"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("bounce"),
	HX_CSTRING("doneFadeOut"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SpaceBullet_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SpaceBullet_obj::__mClass,"__mClass");
};

#endif

Class SpaceBullet_obj::__mClass;

void SpaceBullet_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("SpaceBullet"), hx::TCanCast< SpaceBullet_obj> ,sStaticFields,sMemberFields,
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

void SpaceBullet_obj::__boot()
{
}

