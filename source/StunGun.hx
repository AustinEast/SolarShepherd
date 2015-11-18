package;

import flixel.FlxG;
import flixel.addons.weapon.FlxWeapon;
import flixel.addons.weapon.FlxBullet;
import flixel.system.FlxSound;
import flixel.FlxSprite;

class StunGun extends FlxWeapon {

	public var _shootSnd:FlxSound;

	public function new(Name:String, ?ParentRef:FlxSprite, ?BulletType:Class<FlxBullet>, ?BulletID:Int = 0)
	{
		super(Name, ParentRef, BulletType, BulletID);
		
		_shootSnd = FlxG.sound.load(Reg.STUNGUNSOUND);
		makeImageBullet(2,Reg.STUNGUNBULLET,5,7,true,360,1);
        setBulletBounds(new flixel.util.FlxRect(0,0,3000,3000));
        setFireRate(100);
        rndFactorAngle = 20;
        setBulletDirection(360,400);
        setBulletLifeSpan(0.2);

	}
	public function soundFire():Bool
	{
		FlxG.sound.play(Reg.STUNGUNSOUND);
		return runFire(FlxWeapon.FIRE);
	}

	
}