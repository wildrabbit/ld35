package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("assets/data/data-goes-here.txt", "assets/data/data-goes-here.txt");
			type.set ("assets/data/data-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/bgtest.png", "assets/images/bgtest.png");
			type.set ("assets/images/bgtest.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/bg_back.png", "assets/images/bg_back.png");
			type.set ("assets/images/bg_back.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/bg_fron2t.png", "assets/images/bg_fron2t.png");
			type.set ("assets/images/bg_fron2t.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/bg_front.png", "assets/images/bg_front.png");
			type.set ("assets/images/bg_front.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/bullet_aa.png", "assets/images/bullet_aa.png");
			type.set ("assets/images/bullet_aa.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/bullet_enemy.png", "assets/images/bullet_enemy.png");
			type.set ("assets/images/bullet_enemy.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/bullet_main.png", "assets/images/bullet_main.png");
			type.set ("assets/images/bullet_main.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/controls.png", "assets/images/controls.png");
			type.set ("assets/images/controls.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/halo.png", "assets/images/halo.png");
			type.set ("assets/images/halo.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/howto.png", "assets/images/howto.png");
			type.set ("assets/images/howto.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/images-go-here.txt", "assets/images/images-go-here.txt");
			type.set ("assets/images/images-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/intro.png", "assets/images/intro.png");
			type.set ("assets/images/intro.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/obstacle00.png", "assets/images/obstacle00.png");
			type.set ("assets/images/obstacle00.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/pickups.png", "assets/images/pickups.png");
			type.set ("assets/images/pickups.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/previews.png", "assets/images/previews.png");
			type.set ("assets/images/previews.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/ship_aa.png", "assets/images/ship_aa.png");
			type.set ("assets/images/ship_aa.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/ship_noaa.png", "assets/images/ship_noaa.png");
			type.set ("assets/images/ship_noaa.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/ship_shapes.png", "assets/images/ship_shapes.png");
			type.set ("assets/images/ship_shapes.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/music/music-goes-here.txt", "assets/music/music-goes-here.txt");
			type.set ("assets/music/music-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/music/testMusic.ogg", "assets/music/testMusic.ogg");
			type.set ("assets/music/testMusic.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/music/testMusic.wav", "assets/music/testMusic.wav");
			type.set ("assets/music/testMusic.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/enemy_explode.ogg", "assets/sounds/enemy_explode.ogg");
			type.set ("assets/sounds/enemy_explode.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/enemy_explode.wav", "assets/sounds/enemy_explode.wav");
			type.set ("assets/sounds/enemy_explode.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/enemy_hit.ogg", "assets/sounds/enemy_hit.ogg");
			type.set ("assets/sounds/enemy_hit.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/enemy_hit.wav", "assets/sounds/enemy_hit.wav");
			type.set ("assets/sounds/enemy_hit.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/enemy_nohit.ogg", "assets/sounds/enemy_nohit.ogg");
			type.set ("assets/sounds/enemy_nohit.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/enemy_nohit.wav", "assets/sounds/enemy_nohit.wav");
			type.set ("assets/sounds/enemy_nohit.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/enemy_shoot.ogg", "assets/sounds/enemy_shoot.ogg");
			type.set ("assets/sounds/enemy_shoot.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/enemy_shoot.wav", "assets/sounds/enemy_shoot.wav");
			type.set ("assets/sounds/enemy_shoot.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/enemy_spawn.ogg", "assets/sounds/enemy_spawn.ogg");
			type.set ("assets/sounds/enemy_spawn.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/enemy_spawn.wav", "assets/sounds/enemy_spawn.wav");
			type.set ("assets/sounds/enemy_spawn.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/main_absorb.ogg", "assets/sounds/main_absorb.ogg");
			type.set ("assets/sounds/main_absorb.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/main_absorb.wav", "assets/sounds/main_absorb.wav");
			type.set ("assets/sounds/main_absorb.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/main_blast.ogg", "assets/sounds/main_blast.ogg");
			type.set ("assets/sounds/main_blast.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/main_blast.wav", "assets/sounds/main_blast.wav");
			type.set ("assets/sounds/main_blast.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/main_death.ogg", "assets/sounds/main_death.ogg");
			type.set ("assets/sounds/main_death.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/main_death.wav", "assets/sounds/main_death.wav");
			type.set ("assets/sounds/main_death.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/main_double_pew.ogg", "assets/sounds/main_double_pew.ogg");
			type.set ("assets/sounds/main_double_pew.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/main_double_pew.wav", "assets/sounds/main_double_pew.wav");
			type.set ("assets/sounds/main_double_pew.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/main_hit.ogg", "assets/sounds/main_hit.ogg");
			type.set ("assets/sounds/main_hit.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/main_hit.wav", "assets/sounds/main_hit.wav");
			type.set ("assets/sounds/main_hit.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/main_pickup.ogg", "assets/sounds/main_pickup.ogg");
			type.set ("assets/sounds/main_pickup.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/main_pickup.wav", "assets/sounds/main_pickup.wav");
			type.set ("assets/sounds/main_pickup.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/main_switch.ogg", "assets/sounds/main_switch.ogg");
			type.set ("assets/sounds/main_switch.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/main_switch.wav", "assets/sounds/main_switch.wav");
			type.set ("assets/sounds/main_switch.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/pause.ogg", "assets/sounds/pause.ogg");
			type.set ("assets/sounds/pause.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/pause.wav", "assets/sounds/pause.wav");
			type.set ("assets/sounds/pause.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/sounds-go-here.txt", "assets/sounds/sounds-go-here.txt");
			type.set ("assets/sounds/sounds-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("flixel/sounds/beep.ogg", "flixel/sounds/beep.ogg");
			type.set ("flixel/sounds/beep.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("flixel/sounds/flixel.ogg", "flixel/sounds/flixel.ogg");
			type.set ("flixel/sounds/flixel.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("flixel/fonts/nokiafc22.ttf", "flixel/fonts/nokiafc22.ttf");
			type.set ("flixel/fonts/nokiafc22.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("flixel/fonts/monsterrat.ttf", "flixel/fonts/monsterrat.ttf");
			type.set ("flixel/fonts/monsterrat.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("flixel/images/ui/button.png", "flixel/images/ui/button.png");
			type.set ("flixel/images/ui/button.png", Reflect.field (AssetType, "image".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
