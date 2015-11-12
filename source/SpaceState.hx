package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxMath;
import flixel.group.FlxGroup;
import flixel.util.FlxColor;
import flixel.FlxObject;


/**
 * A FlxState which can be used for the actual gameplay.
 */
class SpaceState extends FlxState
{
	public var _enemies:FlxGroup;
	public var _numEnemies:Int;
	public var _enemy:SpaceEnemy;
	public var _player:SpacePlayer;
	public var _bullet:SpaceBullet;
	public var _numBullets:Int;
	public var _bullets:FlxGroup;
	/**
	 * Function that is called up when to state is created to set it up. 
	 */
	override public function create():Void
	{

		//create enemies. Uses a loop to put a bunch of them in a group(FlxGroup).
		//think of this as adding them all to an array, but without an index.
		_enemies = new FlxGroup(_numEnemies);
		_numEnemies = 12;
		for (i in 0 ... _numEnemies) {
			_enemy = new SpaceEnemy(12+(i*25),20);
			_enemies.add(_enemy);
		}

		//create bullets. Same as enemies.
		_bullets = new FlxGroup(_numBullets);
		_numBullets = 50;
		for (i in 0 ... _numBullets) {
			_bullet = new SpaceBullet();
			_bullet.exists = false;
			_bullets.add(_bullet);
		}

		//create player.
		_player = new SpacePlayer(FlxG.width/2,FlxG.height-20);

		for (i in 0...64) {
			var star:Star = new Star();
			add(star);
		}

		//add everything to the Play State.
		add(_enemies);
		add(_bullets);
		add(_player);

		super.create();
	}
	
	/**
	 * Function that is called when this state is destroyed - you might want to 
	 * consider setting all objects this state uses to null to help garbage collection.
	 */
	override public function destroy():Void
	{
		super.destroy();
	}

	/**
	 * Function that is called once every frame. Here it is used for collisions.
	 */
	override public function update():Void
	{
		super.update();

		FlxG.overlap(_bullets,_player,bounce);
		FlxG.overlap(_bullets,_enemies,bounce);
	}	
	/**
    * This function takes the info from bullet collisions above,
    * and sends them to the bounce function in the Space Bullet class.
    **/
	public function onHitPaddle(thisBall:Dynamic, thisPaddle:Dynamic):Void
	{
		thisBall.bounce(thisPaddle);
	}
	public function bounce(_bullet,_paddle:PolarSprite):Void
    {   
        //Method to keep the bullet from overlapping with whichever enemy.
        if (_bullet._hitPaddle != _paddle)
        {   
            //If the bullet is the same polarity as the object, it will "Bounce".
            if(_paddle._polarity == _bullet._polarity)
            {   
                _bullet.velocity.x += _paddle.velocity.x/2;
                _bullet.velocity.y *= -1;
                _bullet._hitPaddle = _paddle;
                FlxG.sound.play(Reg.MENUSELECT);
            }
            //If the bullet isn't, kill the item, bullet and make a screen shake.
            else if(_paddle._polarity != _bullet._polarity)
            {
                _paddle.kill();
                _bullet.kill();
                FlxG.camera.shake(0.02, 0.25); 
                FlxG.sound.play(Reg.ENEMYSHIPDESTROYED);
                //if the player is hit, fade the camera.
                //This calls doneFadeOut once the fade is done.
                if (_paddle.important == true)
                { 
                    FlxG.camera.flash(0xffFFFFFF, 1);
                    FlxG.camera.fade(FlxColor.BLACK, .33, false, doneFadeOut);
                } 
            }
        }
    }
    /**
    * This function is called if the player gets hit and the game fades out.
    * It sends you back to the menu.
    **/
    private function doneFadeOut():Void 
    {
        FlxG.switchState(new MenuState());
    }
}