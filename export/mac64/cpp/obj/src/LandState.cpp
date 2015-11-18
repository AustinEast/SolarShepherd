#include <hxcpp.h>

#ifndef INCLUDED_Chaser
#include <Chaser.h>
#endif
#ifndef INCLUDED_CrateGun
#include <CrateGun.h>
#endif
#ifndef INCLUDED_Fuel
#include <Fuel.h>
#endif
#ifndef INCLUDED_LandPlayer
#include <LandPlayer.h>
#endif
#ifndef INCLUDED_LandState
#include <LandState.h>
#endif
#ifndef INCLUDED_Npc
#include <Npc.h>
#endif
#ifndef INCLUDED_Patroller
#include <Patroller.h>
#endif
#ifndef INCLUDED_PolarSprite
#include <PolarSprite.h>
#endif
#ifndef INCLUDED_Reg
#include <Reg.h>
#endif
#ifndef INCLUDED_Shooter
#include <Shooter.h>
#endif
#ifndef INCLUDED_StunGun
#include <StunGun.h>
#endif
#ifndef INCLUDED_TextBox
#include <TextBox.h>
#endif
#ifndef INCLUDED_TiledStage
#include <TiledStage.h>
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
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledMap
#include <flixel/addons/editors/tiled/TiledMap.h>
#endif
#ifndef INCLUDED_flixel_addons_weapon_FlxWeapon
#include <flixel/addons/weapon/FlxWeapon.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif

Void LandState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("LandState","new",0xd3b387f8,"LandState.new","LandState.hx",19,0x987b9e78)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(19)
	super::__construct(MaxSize);
}
;
	return null();
}

//LandState_obj::~LandState_obj() { }

Dynamic LandState_obj::__CreateEmpty() { return  new LandState_obj; }
hx::ObjectPtr< LandState_obj > LandState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< LandState_obj > result = new LandState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic LandState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LandState_obj > result = new LandState_obj();
	result->__construct(inArgs[0]);
	return result;}

Void LandState_obj::create( ){
{
		HX_STACK_FRAME("LandState","create",0x28947e64,"LandState.create","LandState.hx",39,0x987b9e78)
		HX_STACK_THIS(this)
		HX_STACK_LINE(40)
		::flixel::FlxG_obj::camera->bgColor = (int)-15447724;
		HX_STACK_LINE(43)
		::TiledStage _g = ::TiledStage_obj::__new(::Reg_obj::levels->__get(::Reg_obj::level));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(43)
		::Reg_obj::loadedLevel = _g;
		HX_STACK_LINE(44)
		::LandPlayer _g1 = ::LandPlayer_obj::__new((int)20,(int)50,(int)20,(int)50);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(44)
		this->_player = _g1;
		HX_STACK_LINE(45)
		::Npc _g2 = ::Npc_obj::__new((int)50,(int)50);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(45)
		this->_npc = _g2;
		HX_STACK_LINE(46)
		::flixel::group::FlxGroup _g3 = ::flixel::group::FlxGroup_obj::__new(null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(46)
		this->_enemies = _g3;
		HX_STACK_LINE(47)
		::flixel::group::FlxGroup _g4 = ::flixel::group::FlxGroup_obj::__new(null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(47)
		this->_fuelGroup = _g4;
		HX_STACK_LINE(48)
		::TextBox _g5 = ::TextBox_obj::__new(HX_CSTRING("USER"));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(48)
		this->_textbox = _g5;
		HX_STACK_LINE(51)
		this->add(::Reg_obj::loadedLevel->scenarioTiles);
		HX_STACK_LINE(52)
		this->add(this->_player);
		HX_STACK_LINE(53)
		this->add(this->_npc);
		HX_STACK_LINE(54)
		this->add(this->_enemies);
		HX_STACK_LINE(55)
		this->add(this->_fuelGroup);
		HX_STACK_LINE(56)
		this->add(::Reg_obj::enemyBullets);
		HX_STACK_LINE(57)
		::Reg_obj::loadedLevel->loadObjects(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(59)
		{
			HX_STACK_LINE(59)
			int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(59)
			int _g6 = this->_chaserArray->length;		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(59)
			while((true)){
				HX_STACK_LINE(59)
				if ((!(((_g11 < _g6))))){
					HX_STACK_LINE(59)
					break;
				}
				HX_STACK_LINE(59)
				int i = (_g11)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(61)
				::Chaser _g61 = ::Chaser_obj::__new(this->_chaserArray->__get(i).StaticCast< ::flixel::util::FlxPoint >()->x,this->_chaserArray->__get(i).StaticCast< ::flixel::util::FlxPoint >()->y,this->_player);		HX_STACK_VAR(_g61,"_g61");
				HX_STACK_LINE(61)
				this->_chaser = _g61;
				HX_STACK_LINE(62)
				this->_enemies->add(this->_chaser);
			}
		}
		HX_STACK_LINE(64)
		{
			HX_STACK_LINE(64)
			int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(64)
			int _g6 = this->_shooterArray->length;		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(64)
			while((true)){
				HX_STACK_LINE(64)
				if ((!(((_g11 < _g6))))){
					HX_STACK_LINE(64)
					break;
				}
				HX_STACK_LINE(64)
				int i = (_g11)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(66)
				::Shooter _g7 = ::Shooter_obj::__new(this->_shooterArray->__get(i).StaticCast< ::flixel::util::FlxPoint >()->x,this->_shooterArray->__get(i).StaticCast< ::flixel::util::FlxPoint >()->y,this->_player);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(66)
				this->_shooter = _g7;
				HX_STACK_LINE(67)
				this->_enemies->add(this->_shooter);
			}
		}
		HX_STACK_LINE(69)
		{
			HX_STACK_LINE(69)
			int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(69)
			int _g6 = this->_patrollerArray->length;		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(69)
			while((true)){
				HX_STACK_LINE(69)
				if ((!(((_g11 < _g6))))){
					HX_STACK_LINE(69)
					break;
				}
				HX_STACK_LINE(69)
				int i = (_g11)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(71)
				::Patroller _g8 = ::Patroller_obj::__new(this->_patrollerArray->__get(i).StaticCast< ::flixel::util::FlxPoint >()->x,this->_patrollerArray->__get(i).StaticCast< ::flixel::util::FlxPoint >()->y,this->_player);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(71)
				this->_patroller = _g8;
				HX_STACK_LINE(72)
				this->_enemies->add(this->_patroller);
			}
		}
		HX_STACK_LINE(74)
		{
			HX_STACK_LINE(74)
			int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(74)
			int _g6 = this->_fuelArray->length;		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(74)
			while((true)){
				HX_STACK_LINE(74)
				if ((!(((_g11 < _g6))))){
					HX_STACK_LINE(74)
					break;
				}
				HX_STACK_LINE(74)
				int i = (_g11)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(76)
				::Fuel _g9 = ::Fuel_obj::__new(this->_fuelArray->__get(i).StaticCast< ::flixel::util::FlxPoint >()->x,this->_fuelArray->__get(i).StaticCast< ::flixel::util::FlxPoint >()->y);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(76)
				this->_fuel = _g9;
				HX_STACK_LINE(77)
				this->_fuelGroup->add(this->_fuel);
			}
		}
		HX_STACK_LINE(80)
		{
			HX_STACK_LINE(80)
			::flixel::util::FlxRect _this = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(80)
			_this->x = (int)0;
			HX_STACK_LINE(80)
			_this->y = (int)0;
			HX_STACK_LINE(80)
			_this->width = ::Reg_obj::loadedLevel->fullWidth;
			HX_STACK_LINE(80)
			_this->height = ::Reg_obj::loadedLevel->fullHeight;
			HX_STACK_LINE(80)
			_this;
		}
		HX_STACK_LINE(83)
		::flixel::FlxG_obj::camera->setBounds((int)0,(int)0,::Reg_obj::loadedLevel->fullWidth,::Reg_obj::loadedLevel->fullHeight,null());
		HX_STACK_LINE(86)
		::flixel::FlxG_obj::camera->follow(this->_player,(int)1,null(),null());
		HX_STACK_LINE(88)
		this->super::create();
	}
return null();
}


Void LandState_obj::destroy( ){
{
		HX_STACK_FRAME("LandState","destroy",0x6c759092,"LandState.destroy","LandState.hx",97,0x987b9e78)
		HX_STACK_THIS(this)
		HX_STACK_LINE(97)
		this->super::destroy();
	}
return null();
}


Void LandState_obj::update( ){
{
		HX_STACK_FRAME("LandState","update",0x338a9d71,"LandState.update","LandState.hx",105,0x987b9e78)
		HX_STACK_THIS(this)
		HX_STACK_LINE(105)
		if ((!(this->_textbox->_isVisible))){
			HX_STACK_LINE(107)
			this->super::update();
			HX_STACK_LINE(109)
			::flixel::FlxG_obj::overlap(::Reg_obj::loadedLevel->scenarioTiles,this->_player,null(),::flixel::FlxObject_obj::separate_dyn());
			HX_STACK_LINE(110)
			::flixel::FlxG_obj::overlap(::Reg_obj::loadedLevel->scenarioTiles,this->_npc,null(),::flixel::FlxObject_obj::separate_dyn());
			HX_STACK_LINE(111)
			::flixel::FlxG_obj::overlap(::Reg_obj::loadedLevel->scenarioTiles,this->_enemies,null(),::flixel::FlxObject_obj::separate_dyn());
			HX_STACK_LINE(112)
			::flixel::FlxG_obj::overlap(::Reg_obj::loadedLevel->scenarioTiles,this->_player->_crateGun->group,this->crateCollision_dyn(),null());
			HX_STACK_LINE(115)
			::flixel::FlxG_obj::overlap(this->_player,this->_enemies,this->enemyCollision_dyn(),null());
			HX_STACK_LINE(116)
			::flixel::FlxG_obj::overlap(this->_player,this->_npc,this->talk_dyn(),null());
			HX_STACK_LINE(117)
			::flixel::FlxG_obj::overlap(this->_player,this->_fuelGroup,this->collectFuel_dyn(),null());
			HX_STACK_LINE(118)
			::flixel::FlxG_obj::overlap(this->_player,this->_player->_crateGun->group,null(),::flixel::FlxObject_obj::separate_dyn());
			HX_STACK_LINE(119)
			::flixel::FlxG_obj::overlap(this->_player->_crateGun->group,this->_player->_crateGun->group,null(),::flixel::FlxObject_obj::separate_dyn());
			HX_STACK_LINE(120)
			::flixel::FlxG_obj::overlap(this->_player,::Reg_obj::enemyBullets,this->playerHitWithBullet_dyn(),null());
			HX_STACK_LINE(122)
			::flixel::FlxG_obj::overlap(this->_enemies,this->_player->_crateGun->group,null(),::flixel::FlxObject_obj::separate_dyn());
			HX_STACK_LINE(123)
			::flixel::FlxG_obj::overlap(this->_enemies,this->_player->_stunGun->group,this->enemyHitWithBullet_dyn(),null());
		}
		else{
			HX_STACK_LINE(127)
			this->_textbox->update();
		}
	}
return null();
}


Void LandState_obj::talk( Dynamic Player,Dynamic Npc){
{
		HX_STACK_FRAME("LandState","talk",0x6d57a694,"LandState.talk","LandState.hx",132,0x987b9e78)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Player,"Player")
		HX_STACK_ARG(Npc,"Npc")
		HX_STACK_LINE(132)
		if ((::flixel::FlxG_obj::keys->checkStatus((int)40,::flixel::FlxG_obj::keys->justPressed->checkStatus))){
			HX_STACK_LINE(134)
			::TextBox _g = ::TextBox_obj::__new(HX_CSTRING("USER"));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(134)
			this->_textbox = _g;
			HX_STACK_LINE(135)
			this->add(this->_textbox);
			HX_STACK_LINE(136)
			this->_textbox->talk(HX_CSTRING("This is a test. fadfsdfsdf sdfsdfsdfsd. REREFEFEEFE FEREEEEEEEEEE"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(LandState_obj,talk,(void))

Void LandState_obj::crateCollision( ::flixel::FlxObject Level,::flixel::FlxSprite Bullet){
{
		HX_STACK_FRAME("LandState","crateCollision",0x9d85d697,"LandState.crateCollision","LandState.hx",140,0x987b9e78)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Level,"Level")
		HX_STACK_ARG(Bullet,"Bullet")
		HX_STACK_LINE(141)
		::flixel::FlxObject_obj::separate(Level,Bullet);
		HX_STACK_LINE(142)
		Bullet->drag->set_x((int)400);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(LandState_obj,crateCollision,(void))

Void LandState_obj::collectFuel( ::LandPlayer Player,Dynamic Coin){
{
		HX_STACK_FRAME("LandState","collectFuel",0xe798e1d8,"LandState.collectFuel","LandState.hx",146,0x987b9e78)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Player,"Player")
		HX_STACK_ARG(Coin,"Coin")
		HX_STACK_LINE(146)
		Coin->__Field(HX_CSTRING("kill"),true)();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(LandState_obj,collectFuel,(void))

Void LandState_obj::stunCollision( ::flixel::FlxObject Level,::flixel::FlxSprite Bullet){
{
		HX_STACK_FRAME("LandState","stunCollision",0x05c44170,"LandState.stunCollision","LandState.hx",150,0x987b9e78)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Level,"Level")
		HX_STACK_ARG(Bullet,"Bullet")
		HX_STACK_LINE(150)
		Bullet->kill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(LandState_obj,stunCollision,(void))

Void LandState_obj::enemyCollision( ::LandPlayer Player,Dynamic Enemy){
{
		HX_STACK_FRAME("LandState","enemyCollision",0x9298ac72,"LandState.enemyCollision","LandState.hx",154,0x987b9e78)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Player,"Player")
		HX_STACK_ARG(Enemy,"Enemy")
		HX_STACK_LINE(154)
		if ((Enemy->__Field(HX_CSTRING("_knockedOut"),true))){
			HX_STACK_LINE(156)
			::flixel::FlxObject_obj::separate(Player,Enemy);
		}
		else{
			HX_STACK_LINE(158)
			if (((Player->_flickering == false))){
				HX_STACK_LINE(160)
				Player->hurt((int)1);
				HX_STACK_LINE(161)
				Player->velocity->set_x((Enemy->__Field(HX_CSTRING("velocity"),true)->__Field(HX_CSTRING("x"),true) * (int)2));
				HX_STACK_LINE(162)
				{
					HX_STACK_LINE(162)
					::flixel::util::FlxPoint _g = Player->velocity;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(162)
					_g->set_y((_g->y - (int)100));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(LandState_obj,enemyCollision,(void))

Void LandState_obj::enemyHitWithBullet( Dynamic Enemy,::flixel::FlxSprite Bullet){
{
		HX_STACK_FRAME("LandState","enemyHitWithBullet",0xc23b591b,"LandState.enemyHitWithBullet","LandState.hx",168,0x987b9e78)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Enemy,"Enemy")
		HX_STACK_ARG(Bullet,"Bullet")
		HX_STACK_LINE(168)
		if (((Enemy->__Field(HX_CSTRING("_flickering"),true) == false))){
			HX_STACK_LINE(170)
			Enemy->__Field(HX_CSTRING("stun"),true)((int)1);
			HX_STACK_LINE(171)
			Enemy->__Field(HX_CSTRING("velocity"),true)->__FieldRef(HX_CSTRING("x")) = (Bullet->velocity->x * (int)2);
			HX_STACK_LINE(172)
			hx::SubEq(Enemy->__Field(HX_CSTRING("velocity"),true)->__FieldRef(HX_CSTRING("y")),(int)50);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(LandState_obj,enemyHitWithBullet,(void))

Void LandState_obj::playerHitWithBullet( ::LandPlayer Player,::flixel::FlxSprite Bullet){
{
		HX_STACK_FRAME("LandState","playerHitWithBullet",0xb33ad892,"LandState.playerHitWithBullet","LandState.hx",177,0x987b9e78)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Player,"Player")
		HX_STACK_ARG(Bullet,"Bullet")
		HX_STACK_LINE(177)
		if (((Player->_flickering == false))){
			HX_STACK_LINE(179)
			Player->hurt((int)1);
			HX_STACK_LINE(180)
			Player->velocity->set_x((Bullet->velocity->x * (int)2));
			HX_STACK_LINE(181)
			{
				HX_STACK_LINE(181)
				::flixel::util::FlxPoint _g = Player->velocity;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(181)
				_g->set_y((_g->y - (int)50));
			}
			HX_STACK_LINE(182)
			Bullet->kill();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(LandState_obj,playerHitWithBullet,(void))


LandState_obj::LandState_obj()
{
}

void LandState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LandState);
	HX_MARK_MEMBER_NAME(_player,"_player");
	HX_MARK_MEMBER_NAME(_npc,"_npc");
	HX_MARK_MEMBER_NAME(_enemies,"_enemies");
	HX_MARK_MEMBER_NAME(_chaser,"_chaser");
	HX_MARK_MEMBER_NAME(_chaserArray,"_chaserArray");
	HX_MARK_MEMBER_NAME(_shooter,"_shooter");
	HX_MARK_MEMBER_NAME(_shooterArray,"_shooterArray");
	HX_MARK_MEMBER_NAME(_patroller,"_patroller");
	HX_MARK_MEMBER_NAME(_patrollerArray,"_patrollerArray");
	HX_MARK_MEMBER_NAME(_fuelGroup,"_fuelGroup");
	HX_MARK_MEMBER_NAME(_fuel,"_fuel");
	HX_MARK_MEMBER_NAME(_fuelArray,"_fuelArray");
	HX_MARK_MEMBER_NAME(_textbox,"_textbox");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LandState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_player,"_player");
	HX_VISIT_MEMBER_NAME(_npc,"_npc");
	HX_VISIT_MEMBER_NAME(_enemies,"_enemies");
	HX_VISIT_MEMBER_NAME(_chaser,"_chaser");
	HX_VISIT_MEMBER_NAME(_chaserArray,"_chaserArray");
	HX_VISIT_MEMBER_NAME(_shooter,"_shooter");
	HX_VISIT_MEMBER_NAME(_shooterArray,"_shooterArray");
	HX_VISIT_MEMBER_NAME(_patroller,"_patroller");
	HX_VISIT_MEMBER_NAME(_patrollerArray,"_patrollerArray");
	HX_VISIT_MEMBER_NAME(_fuelGroup,"_fuelGroup");
	HX_VISIT_MEMBER_NAME(_fuel,"_fuel");
	HX_VISIT_MEMBER_NAME(_fuelArray,"_fuelArray");
	HX_VISIT_MEMBER_NAME(_textbox,"_textbox");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic LandState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_npc") ) { return _npc; }
		if (HX_FIELD_EQ(inName,"talk") ) { return talk_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_fuel") ) { return _fuel; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_player") ) { return _player; }
		if (HX_FIELD_EQ(inName,"_chaser") ) { return _chaser; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_enemies") ) { return _enemies; }
		if (HX_FIELD_EQ(inName,"_shooter") ) { return _shooter; }
		if (HX_FIELD_EQ(inName,"_textbox") ) { return _textbox; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_patroller") ) { return _patroller; }
		if (HX_FIELD_EQ(inName,"_fuelGroup") ) { return _fuelGroup; }
		if (HX_FIELD_EQ(inName,"_fuelArray") ) { return _fuelArray; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"collectFuel") ) { return collectFuel_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_chaserArray") ) { return _chaserArray; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_shooterArray") ) { return _shooterArray; }
		if (HX_FIELD_EQ(inName,"stunCollision") ) { return stunCollision_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"crateCollision") ) { return crateCollision_dyn(); }
		if (HX_FIELD_EQ(inName,"enemyCollision") ) { return enemyCollision_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_patrollerArray") ) { return _patrollerArray; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"enemyHitWithBullet") ) { return enemyHitWithBullet_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"playerHitWithBullet") ) { return playerHitWithBullet_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LandState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_npc") ) { _npc=inValue.Cast< ::Npc >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_fuel") ) { _fuel=inValue.Cast< ::Fuel >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_player") ) { _player=inValue.Cast< ::LandPlayer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_chaser") ) { _chaser=inValue.Cast< ::Chaser >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_enemies") ) { _enemies=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_shooter") ) { _shooter=inValue.Cast< ::Shooter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_textbox") ) { _textbox=inValue.Cast< ::TextBox >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_patroller") ) { _patroller=inValue.Cast< ::Patroller >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fuelGroup") ) { _fuelGroup=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fuelArray") ) { _fuelArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_chaserArray") ) { _chaserArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_shooterArray") ) { _shooterArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_patrollerArray") ) { _patrollerArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LandState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_player"));
	outFields->push(HX_CSTRING("_npc"));
	outFields->push(HX_CSTRING("_enemies"));
	outFields->push(HX_CSTRING("_chaser"));
	outFields->push(HX_CSTRING("_chaserArray"));
	outFields->push(HX_CSTRING("_shooter"));
	outFields->push(HX_CSTRING("_shooterArray"));
	outFields->push(HX_CSTRING("_patroller"));
	outFields->push(HX_CSTRING("_patrollerArray"));
	outFields->push(HX_CSTRING("_fuelGroup"));
	outFields->push(HX_CSTRING("_fuel"));
	outFields->push(HX_CSTRING("_fuelArray"));
	outFields->push(HX_CSTRING("_textbox"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::LandPlayer*/ ,(int)offsetof(LandState_obj,_player),HX_CSTRING("_player")},
	{hx::fsObject /*::Npc*/ ,(int)offsetof(LandState_obj,_npc),HX_CSTRING("_npc")},
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(LandState_obj,_enemies),HX_CSTRING("_enemies")},
	{hx::fsObject /*::Chaser*/ ,(int)offsetof(LandState_obj,_chaser),HX_CSTRING("_chaser")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(LandState_obj,_chaserArray),HX_CSTRING("_chaserArray")},
	{hx::fsObject /*::Shooter*/ ,(int)offsetof(LandState_obj,_shooter),HX_CSTRING("_shooter")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(LandState_obj,_shooterArray),HX_CSTRING("_shooterArray")},
	{hx::fsObject /*::Patroller*/ ,(int)offsetof(LandState_obj,_patroller),HX_CSTRING("_patroller")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(LandState_obj,_patrollerArray),HX_CSTRING("_patrollerArray")},
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(LandState_obj,_fuelGroup),HX_CSTRING("_fuelGroup")},
	{hx::fsObject /*::Fuel*/ ,(int)offsetof(LandState_obj,_fuel),HX_CSTRING("_fuel")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(LandState_obj,_fuelArray),HX_CSTRING("_fuelArray")},
	{hx::fsObject /*::TextBox*/ ,(int)offsetof(LandState_obj,_textbox),HX_CSTRING("_textbox")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_player"),
	HX_CSTRING("_npc"),
	HX_CSTRING("_enemies"),
	HX_CSTRING("_chaser"),
	HX_CSTRING("_chaserArray"),
	HX_CSTRING("_shooter"),
	HX_CSTRING("_shooterArray"),
	HX_CSTRING("_patroller"),
	HX_CSTRING("_patrollerArray"),
	HX_CSTRING("_fuelGroup"),
	HX_CSTRING("_fuel"),
	HX_CSTRING("_fuelArray"),
	HX_CSTRING("_textbox"),
	HX_CSTRING("create"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("talk"),
	HX_CSTRING("crateCollision"),
	HX_CSTRING("collectFuel"),
	HX_CSTRING("stunCollision"),
	HX_CSTRING("enemyCollision"),
	HX_CSTRING("enemyHitWithBullet"),
	HX_CSTRING("playerHitWithBullet"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LandState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LandState_obj::__mClass,"__mClass");
};

#endif

Class LandState_obj::__mClass;

void LandState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("LandState"), hx::TCanCast< LandState_obj> ,sStaticFields,sMemberFields,
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

void LandState_obj::__boot()
{
}

