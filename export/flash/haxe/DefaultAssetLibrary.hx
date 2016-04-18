package;


import haxe.Timer;
import haxe.Unserializer;
import lime.app.Future;
import lime.app.Preloader;
import lime.app.Promise;
import lime.audio.AudioSource;
import lime.audio.openal.AL;
import lime.audio.AudioBuffer;
import lime.graphics.Image;
import lime.net.HTTPRequest;
import lime.system.CFFI;
import lime.text.Font;
import lime.utils.Bytes;
import lime.utils.UInt8Array;
import lime.Assets;

#if sys
import sys.FileSystem;
#end

#if flash
import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.Loader;
import flash.events.Event;
import flash.events.IOErrorEvent;
import flash.events.ProgressEvent;
import flash.media.Sound;
import flash.net.URLLoader;
import flash.net.URLRequest;
#end


class DefaultAssetLibrary extends AssetLibrary {
	
	
	public var className (default, null) = new Map <String, Dynamic> ();
	public var path (default, null) = new Map <String, String> ();
	public var type (default, null) = new Map <String, AssetType> ();
	
	private var lastModified:Float;
	private var timer:Timer;
	
	
	public function new () {
		
		super ();
		
		#if (openfl && !flash)
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_monsterrat_ttf);
		
		
		#end
		
		#if flash
		
		className.set ("assets/data/data-goes-here.txt", __ASSET__assets_data_data_goes_here_txt);
		type.set ("assets/data/data-goes-here.txt", AssetType.TEXT);
		className.set ("assets/images/bgtest.png", __ASSET__assets_images_bgtest_png);
		type.set ("assets/images/bgtest.png", AssetType.IMAGE);
		className.set ("assets/images/bg_back.png", __ASSET__assets_images_bg_back_png);
		type.set ("assets/images/bg_back.png", AssetType.IMAGE);
		className.set ("assets/images/bg_fron2t.png", __ASSET__assets_images_bg_fron2t_png);
		type.set ("assets/images/bg_fron2t.png", AssetType.IMAGE);
		className.set ("assets/images/bg_front.png", __ASSET__assets_images_bg_front_png);
		type.set ("assets/images/bg_front.png", AssetType.IMAGE);
		className.set ("assets/images/bullet_aa.png", __ASSET__assets_images_bullet_aa_png);
		type.set ("assets/images/bullet_aa.png", AssetType.IMAGE);
		className.set ("assets/images/bullet_enemy.png", __ASSET__assets_images_bullet_enemy_png);
		type.set ("assets/images/bullet_enemy.png", AssetType.IMAGE);
		className.set ("assets/images/bullet_main.png", __ASSET__assets_images_bullet_main_png);
		type.set ("assets/images/bullet_main.png", AssetType.IMAGE);
		className.set ("assets/images/controls.png", __ASSET__assets_images_controls_png);
		type.set ("assets/images/controls.png", AssetType.IMAGE);
		className.set ("assets/images/halo.png", __ASSET__assets_images_halo_png);
		type.set ("assets/images/halo.png", AssetType.IMAGE);
		className.set ("assets/images/howto.png", __ASSET__assets_images_howto_png);
		type.set ("assets/images/howto.png", AssetType.IMAGE);
		className.set ("assets/images/images-go-here.txt", __ASSET__assets_images_images_go_here_txt);
		type.set ("assets/images/images-go-here.txt", AssetType.TEXT);
		className.set ("assets/images/intro.png", __ASSET__assets_images_intro_png);
		type.set ("assets/images/intro.png", AssetType.IMAGE);
		className.set ("assets/images/obstacle00.png", __ASSET__assets_images_obstacle00_png);
		type.set ("assets/images/obstacle00.png", AssetType.IMAGE);
		className.set ("assets/images/pickups.png", __ASSET__assets_images_pickups_png);
		type.set ("assets/images/pickups.png", AssetType.IMAGE);
		className.set ("assets/images/previews.png", __ASSET__assets_images_previews_png);
		type.set ("assets/images/previews.png", AssetType.IMAGE);
		className.set ("assets/images/ship_aa.png", __ASSET__assets_images_ship_aa_png);
		type.set ("assets/images/ship_aa.png", AssetType.IMAGE);
		className.set ("assets/images/ship_noaa.png", __ASSET__assets_images_ship_noaa_png);
		type.set ("assets/images/ship_noaa.png", AssetType.IMAGE);
		className.set ("assets/images/ship_shapes.png", __ASSET__assets_images_ship_shapes_png);
		type.set ("assets/images/ship_shapes.png", AssetType.IMAGE);
		className.set ("assets/music/music-goes-here.txt", __ASSET__assets_music_music_goes_here_txt);
		type.set ("assets/music/music-goes-here.txt", AssetType.TEXT);
		className.set ("assets/music/testMusic-antiguo1.wav", __ASSET__assets_music_testmusic_antiguo1_wav);
		type.set ("assets/music/testMusic-antiguo1.wav", AssetType.SOUND);
		className.set ("assets/music/testMusic.ogg", __ASSET__assets_music_testmusic_ogg);
		type.set ("assets/music/testMusic.ogg", AssetType.SOUND);
		className.set ("assets/music/testMusic.wav", __ASSET__assets_music_testmusic_wav);
		type.set ("assets/music/testMusic.wav", AssetType.SOUND);
		className.set ("assets/sounds/enemy_explode.ogg", __ASSET__assets_sounds_enemy_explode_ogg);
		type.set ("assets/sounds/enemy_explode.ogg", AssetType.SOUND);
		className.set ("assets/sounds/enemy_explode.wav", __ASSET__assets_sounds_enemy_explode_wav);
		type.set ("assets/sounds/enemy_explode.wav", AssetType.SOUND);
		className.set ("assets/sounds/enemy_hit.ogg", __ASSET__assets_sounds_enemy_hit_ogg);
		type.set ("assets/sounds/enemy_hit.ogg", AssetType.SOUND);
		className.set ("assets/sounds/enemy_hit.wav", __ASSET__assets_sounds_enemy_hit_wav);
		type.set ("assets/sounds/enemy_hit.wav", AssetType.SOUND);
		className.set ("assets/sounds/enemy_nohit.ogg", __ASSET__assets_sounds_enemy_nohit_ogg);
		type.set ("assets/sounds/enemy_nohit.ogg", AssetType.SOUND);
		className.set ("assets/sounds/enemy_nohit.wav", __ASSET__assets_sounds_enemy_nohit_wav);
		type.set ("assets/sounds/enemy_nohit.wav", AssetType.SOUND);
		className.set ("assets/sounds/enemy_shoot.ogg", __ASSET__assets_sounds_enemy_shoot_ogg);
		type.set ("assets/sounds/enemy_shoot.ogg", AssetType.SOUND);
		className.set ("assets/sounds/enemy_shoot.wav", __ASSET__assets_sounds_enemy_shoot_wav);
		type.set ("assets/sounds/enemy_shoot.wav", AssetType.SOUND);
		className.set ("assets/sounds/enemy_spawn.ogg", __ASSET__assets_sounds_enemy_spawn_ogg);
		type.set ("assets/sounds/enemy_spawn.ogg", AssetType.SOUND);
		className.set ("assets/sounds/enemy_spawn.wav", __ASSET__assets_sounds_enemy_spawn_wav);
		type.set ("assets/sounds/enemy_spawn.wav", AssetType.SOUND);
		className.set ("assets/sounds/main_absorb.ogg", __ASSET__assets_sounds_main_absorb_ogg);
		type.set ("assets/sounds/main_absorb.ogg", AssetType.SOUND);
		className.set ("assets/sounds/main_absorb.wav", __ASSET__assets_sounds_main_absorb_wav);
		type.set ("assets/sounds/main_absorb.wav", AssetType.SOUND);
		className.set ("assets/sounds/main_blast.ogg", __ASSET__assets_sounds_main_blast_ogg);
		type.set ("assets/sounds/main_blast.ogg", AssetType.SOUND);
		className.set ("assets/sounds/main_blast.wav", __ASSET__assets_sounds_main_blast_wav);
		type.set ("assets/sounds/main_blast.wav", AssetType.SOUND);
		className.set ("assets/sounds/main_death.ogg", __ASSET__assets_sounds_main_death_ogg);
		type.set ("assets/sounds/main_death.ogg", AssetType.SOUND);
		className.set ("assets/sounds/main_death.wav", __ASSET__assets_sounds_main_death_wav);
		type.set ("assets/sounds/main_death.wav", AssetType.SOUND);
		className.set ("assets/sounds/main_double_pew.ogg", __ASSET__assets_sounds_main_double_pew_ogg);
		type.set ("assets/sounds/main_double_pew.ogg", AssetType.SOUND);
		className.set ("assets/sounds/main_double_pew.wav", __ASSET__assets_sounds_main_double_pew_wav);
		type.set ("assets/sounds/main_double_pew.wav", AssetType.SOUND);
		className.set ("assets/sounds/main_hit.ogg", __ASSET__assets_sounds_main_hit_ogg);
		type.set ("assets/sounds/main_hit.ogg", AssetType.SOUND);
		className.set ("assets/sounds/main_hit.wav", __ASSET__assets_sounds_main_hit_wav);
		type.set ("assets/sounds/main_hit.wav", AssetType.SOUND);
		className.set ("assets/sounds/main_pickup.ogg", __ASSET__assets_sounds_main_pickup_ogg);
		type.set ("assets/sounds/main_pickup.ogg", AssetType.SOUND);
		className.set ("assets/sounds/main_pickup.wav", __ASSET__assets_sounds_main_pickup_wav);
		type.set ("assets/sounds/main_pickup.wav", AssetType.SOUND);
		className.set ("assets/sounds/main_switch.ogg", __ASSET__assets_sounds_main_switch_ogg);
		type.set ("assets/sounds/main_switch.ogg", AssetType.SOUND);
		className.set ("assets/sounds/main_switch.wav", __ASSET__assets_sounds_main_switch_wav);
		type.set ("assets/sounds/main_switch.wav", AssetType.SOUND);
		className.set ("assets/sounds/pause.ogg", __ASSET__assets_sounds_pause_ogg);
		type.set ("assets/sounds/pause.ogg", AssetType.SOUND);
		className.set ("assets/sounds/pause.wav", __ASSET__assets_sounds_pause_wav);
		type.set ("assets/sounds/pause.wav", AssetType.SOUND);
		className.set ("assets/sounds/sounds-go-here.txt", __ASSET__assets_sounds_sounds_go_here_txt);
		type.set ("assets/sounds/sounds-go-here.txt", AssetType.TEXT);
		className.set ("flixel/sounds/beep.mp3", __ASSET__flixel_sounds_beep_mp3);
		type.set ("flixel/sounds/beep.mp3", AssetType.MUSIC);
		className.set ("flixel/sounds/flixel.mp3", __ASSET__flixel_sounds_flixel_mp3);
		type.set ("flixel/sounds/flixel.mp3", AssetType.MUSIC);
		className.set ("flixel/fonts/nokiafc22.ttf", __ASSET__flixel_fonts_nokiafc22_ttf);
		type.set ("flixel/fonts/nokiafc22.ttf", AssetType.FONT);
		className.set ("flixel/fonts/monsterrat.ttf", __ASSET__flixel_fonts_monsterrat_ttf);
		type.set ("flixel/fonts/monsterrat.ttf", AssetType.FONT);
		className.set ("flixel/images/ui/button.png", __ASSET__flixel_images_ui_button_png);
		type.set ("flixel/images/ui/button.png", AssetType.IMAGE);
		
		
		#elseif html5
		
		var id;
		id = "assets/data/data-goes-here.txt";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/images/bgtest.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/bg_back.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/bg_fron2t.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/bg_front.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/bullet_aa.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/bullet_enemy.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/bullet_main.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/controls.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/halo.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/howto.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/images-go-here.txt";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/images/intro.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/obstacle00.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/pickups.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/previews.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/ship_aa.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/ship_noaa.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/ship_shapes.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/music/music-goes-here.txt";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/music/testMusic-antiguo1.wav";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/music/testMusic.ogg";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/music/testMusic.wav";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/enemy_explode.ogg";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/enemy_explode.wav";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/enemy_hit.ogg";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/enemy_hit.wav";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/enemy_nohit.ogg";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/enemy_nohit.wav";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/enemy_shoot.ogg";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/enemy_shoot.wav";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/enemy_spawn.ogg";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/enemy_spawn.wav";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/main_absorb.ogg";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/main_absorb.wav";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/main_blast.ogg";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/main_blast.wav";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/main_death.ogg";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/main_death.wav";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/main_double_pew.ogg";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/main_double_pew.wav";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/main_hit.ogg";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/main_hit.wav";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/main_pickup.ogg";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/main_pickup.wav";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/main_switch.ogg";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/main_switch.wav";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/pause.ogg";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/pause.wav";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/sounds-go-here.txt";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "flixel/sounds/beep.mp3";
		path.set (id, id);
		
		type.set (id, AssetType.MUSIC);
		id = "flixel/sounds/flixel.mp3";
		path.set (id, id);
		
		type.set (id, AssetType.MUSIC);
		id = "flixel/fonts/nokiafc22.ttf";
		className.set (id, __ASSET__flixel_fonts_nokiafc22_ttf);
		
		type.set (id, AssetType.FONT);
		id = "flixel/fonts/monsterrat.ttf";
		className.set (id, __ASSET__flixel_fonts_monsterrat_ttf);
		
		type.set (id, AssetType.FONT);
		id = "flixel/images/ui/button.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		
		
		var assetsPrefix = null;
		if (ApplicationMain.config != null && Reflect.hasField (ApplicationMain.config, "assetsPrefix")) {
			assetsPrefix = ApplicationMain.config.assetsPrefix;
		}
		if (assetsPrefix != null) {
			for (k in path.keys()) {
				path.set(k, assetsPrefix + path[k]);
			}
		}
		
		#else
		
		#if (windows || mac || linux)
		
		var useManifest = false;
		
		className.set ("assets/data/data-goes-here.txt", __ASSET__assets_data_data_goes_here_txt);
		type.set ("assets/data/data-goes-here.txt", AssetType.TEXT);
		
		className.set ("assets/images/bgtest.png", __ASSET__assets_images_bgtest_png);
		type.set ("assets/images/bgtest.png", AssetType.IMAGE);
		
		className.set ("assets/images/bg_back.png", __ASSET__assets_images_bg_back_png);
		type.set ("assets/images/bg_back.png", AssetType.IMAGE);
		
		className.set ("assets/images/bg_fron2t.png", __ASSET__assets_images_bg_fron2t_png);
		type.set ("assets/images/bg_fron2t.png", AssetType.IMAGE);
		
		className.set ("assets/images/bg_front.png", __ASSET__assets_images_bg_front_png);
		type.set ("assets/images/bg_front.png", AssetType.IMAGE);
		
		className.set ("assets/images/bullet_aa.png", __ASSET__assets_images_bullet_aa_png);
		type.set ("assets/images/bullet_aa.png", AssetType.IMAGE);
		
		className.set ("assets/images/bullet_enemy.png", __ASSET__assets_images_bullet_enemy_png);
		type.set ("assets/images/bullet_enemy.png", AssetType.IMAGE);
		
		className.set ("assets/images/bullet_main.png", __ASSET__assets_images_bullet_main_png);
		type.set ("assets/images/bullet_main.png", AssetType.IMAGE);
		
		className.set ("assets/images/controls.png", __ASSET__assets_images_controls_png);
		type.set ("assets/images/controls.png", AssetType.IMAGE);
		
		className.set ("assets/images/halo.png", __ASSET__assets_images_halo_png);
		type.set ("assets/images/halo.png", AssetType.IMAGE);
		
		className.set ("assets/images/howto.png", __ASSET__assets_images_howto_png);
		type.set ("assets/images/howto.png", AssetType.IMAGE);
		
		className.set ("assets/images/images-go-here.txt", __ASSET__assets_images_images_go_here_txt);
		type.set ("assets/images/images-go-here.txt", AssetType.TEXT);
		
		className.set ("assets/images/intro.png", __ASSET__assets_images_intro_png);
		type.set ("assets/images/intro.png", AssetType.IMAGE);
		
		className.set ("assets/images/obstacle00.png", __ASSET__assets_images_obstacle00_png);
		type.set ("assets/images/obstacle00.png", AssetType.IMAGE);
		
		className.set ("assets/images/pickups.png", __ASSET__assets_images_pickups_png);
		type.set ("assets/images/pickups.png", AssetType.IMAGE);
		
		className.set ("assets/images/previews.png", __ASSET__assets_images_previews_png);
		type.set ("assets/images/previews.png", AssetType.IMAGE);
		
		className.set ("assets/images/ship_aa.png", __ASSET__assets_images_ship_aa_png);
		type.set ("assets/images/ship_aa.png", AssetType.IMAGE);
		
		className.set ("assets/images/ship_noaa.png", __ASSET__assets_images_ship_noaa_png);
		type.set ("assets/images/ship_noaa.png", AssetType.IMAGE);
		
		className.set ("assets/images/ship_shapes.png", __ASSET__assets_images_ship_shapes_png);
		type.set ("assets/images/ship_shapes.png", AssetType.IMAGE);
		
		className.set ("assets/music/music-goes-here.txt", __ASSET__assets_music_music_goes_here_txt);
		type.set ("assets/music/music-goes-here.txt", AssetType.TEXT);
		
		className.set ("assets/music/testMusic-antiguo1.wav", __ASSET__assets_music_testmusic_antiguo1_wav);
		type.set ("assets/music/testMusic-antiguo1.wav", AssetType.SOUND);
		
		className.set ("assets/music/testMusic.ogg", __ASSET__assets_music_testmusic_ogg);
		type.set ("assets/music/testMusic.ogg", AssetType.SOUND);
		
		className.set ("assets/music/testMusic.wav", __ASSET__assets_music_testmusic_wav);
		type.set ("assets/music/testMusic.wav", AssetType.SOUND);
		
		className.set ("assets/sounds/enemy_explode.ogg", __ASSET__assets_sounds_enemy_explode_ogg);
		type.set ("assets/sounds/enemy_explode.ogg", AssetType.SOUND);
		
		className.set ("assets/sounds/enemy_explode.wav", __ASSET__assets_sounds_enemy_explode_wav);
		type.set ("assets/sounds/enemy_explode.wav", AssetType.SOUND);
		
		className.set ("assets/sounds/enemy_hit.ogg", __ASSET__assets_sounds_enemy_hit_ogg);
		type.set ("assets/sounds/enemy_hit.ogg", AssetType.SOUND);
		
		className.set ("assets/sounds/enemy_hit.wav", __ASSET__assets_sounds_enemy_hit_wav);
		type.set ("assets/sounds/enemy_hit.wav", AssetType.SOUND);
		
		className.set ("assets/sounds/enemy_nohit.ogg", __ASSET__assets_sounds_enemy_nohit_ogg);
		type.set ("assets/sounds/enemy_nohit.ogg", AssetType.SOUND);
		
		className.set ("assets/sounds/enemy_nohit.wav", __ASSET__assets_sounds_enemy_nohit_wav);
		type.set ("assets/sounds/enemy_nohit.wav", AssetType.SOUND);
		
		className.set ("assets/sounds/enemy_shoot.ogg", __ASSET__assets_sounds_enemy_shoot_ogg);
		type.set ("assets/sounds/enemy_shoot.ogg", AssetType.SOUND);
		
		className.set ("assets/sounds/enemy_shoot.wav", __ASSET__assets_sounds_enemy_shoot_wav);
		type.set ("assets/sounds/enemy_shoot.wav", AssetType.SOUND);
		
		className.set ("assets/sounds/enemy_spawn.ogg", __ASSET__assets_sounds_enemy_spawn_ogg);
		type.set ("assets/sounds/enemy_spawn.ogg", AssetType.SOUND);
		
		className.set ("assets/sounds/enemy_spawn.wav", __ASSET__assets_sounds_enemy_spawn_wav);
		type.set ("assets/sounds/enemy_spawn.wav", AssetType.SOUND);
		
		className.set ("assets/sounds/main_absorb.ogg", __ASSET__assets_sounds_main_absorb_ogg);
		type.set ("assets/sounds/main_absorb.ogg", AssetType.SOUND);
		
		className.set ("assets/sounds/main_absorb.wav", __ASSET__assets_sounds_main_absorb_wav);
		type.set ("assets/sounds/main_absorb.wav", AssetType.SOUND);
		
		className.set ("assets/sounds/main_blast.ogg", __ASSET__assets_sounds_main_blast_ogg);
		type.set ("assets/sounds/main_blast.ogg", AssetType.SOUND);
		
		className.set ("assets/sounds/main_blast.wav", __ASSET__assets_sounds_main_blast_wav);
		type.set ("assets/sounds/main_blast.wav", AssetType.SOUND);
		
		className.set ("assets/sounds/main_death.ogg", __ASSET__assets_sounds_main_death_ogg);
		type.set ("assets/sounds/main_death.ogg", AssetType.SOUND);
		
		className.set ("assets/sounds/main_death.wav", __ASSET__assets_sounds_main_death_wav);
		type.set ("assets/sounds/main_death.wav", AssetType.SOUND);
		
		className.set ("assets/sounds/main_double_pew.ogg", __ASSET__assets_sounds_main_double_pew_ogg);
		type.set ("assets/sounds/main_double_pew.ogg", AssetType.SOUND);
		
		className.set ("assets/sounds/main_double_pew.wav", __ASSET__assets_sounds_main_double_pew_wav);
		type.set ("assets/sounds/main_double_pew.wav", AssetType.SOUND);
		
		className.set ("assets/sounds/main_hit.ogg", __ASSET__assets_sounds_main_hit_ogg);
		type.set ("assets/sounds/main_hit.ogg", AssetType.SOUND);
		
		className.set ("assets/sounds/main_hit.wav", __ASSET__assets_sounds_main_hit_wav);
		type.set ("assets/sounds/main_hit.wav", AssetType.SOUND);
		
		className.set ("assets/sounds/main_pickup.ogg", __ASSET__assets_sounds_main_pickup_ogg);
		type.set ("assets/sounds/main_pickup.ogg", AssetType.SOUND);
		
		className.set ("assets/sounds/main_pickup.wav", __ASSET__assets_sounds_main_pickup_wav);
		type.set ("assets/sounds/main_pickup.wav", AssetType.SOUND);
		
		className.set ("assets/sounds/main_switch.ogg", __ASSET__assets_sounds_main_switch_ogg);
		type.set ("assets/sounds/main_switch.ogg", AssetType.SOUND);
		
		className.set ("assets/sounds/main_switch.wav", __ASSET__assets_sounds_main_switch_wav);
		type.set ("assets/sounds/main_switch.wav", AssetType.SOUND);
		
		className.set ("assets/sounds/pause.ogg", __ASSET__assets_sounds_pause_ogg);
		type.set ("assets/sounds/pause.ogg", AssetType.SOUND);
		
		className.set ("assets/sounds/pause.wav", __ASSET__assets_sounds_pause_wav);
		type.set ("assets/sounds/pause.wav", AssetType.SOUND);
		
		className.set ("assets/sounds/sounds-go-here.txt", __ASSET__assets_sounds_sounds_go_here_txt);
		type.set ("assets/sounds/sounds-go-here.txt", AssetType.TEXT);
		
		className.set ("flixel/sounds/beep.mp3", __ASSET__flixel_sounds_beep_mp3);
		type.set ("flixel/sounds/beep.mp3", AssetType.MUSIC);
		
		className.set ("flixel/sounds/flixel.mp3", __ASSET__flixel_sounds_flixel_mp3);
		type.set ("flixel/sounds/flixel.mp3", AssetType.MUSIC);
		
		className.set ("flixel/fonts/nokiafc22.ttf", __ASSET__flixel_fonts_nokiafc22_ttf);
		type.set ("flixel/fonts/nokiafc22.ttf", AssetType.FONT);
		
		className.set ("flixel/fonts/monsterrat.ttf", __ASSET__flixel_fonts_monsterrat_ttf);
		type.set ("flixel/fonts/monsterrat.ttf", AssetType.FONT);
		
		className.set ("flixel/images/ui/button.png", __ASSET__flixel_images_ui_button_png);
		type.set ("flixel/images/ui/button.png", AssetType.IMAGE);
		
		
		if (useManifest) {
			
			loadManifest ();
			
			if (Sys.args ().indexOf ("-livereload") > -1) {
				
				var path = FileSystem.fullPath ("manifest");
				lastModified = FileSystem.stat (path).mtime.getTime ();
				
				timer = new Timer (2000);
				timer.run = function () {
					
					var modified = FileSystem.stat (path).mtime.getTime ();
					
					if (modified > lastModified) {
						
						lastModified = modified;
						loadManifest ();
						
						onChange.dispatch ();
						
					}
					
				}
				
			}
			
		}
		
		#else
		
		loadManifest ();
		
		#end
		#end
		
	}
	
	
	public override function exists (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var assetType = this.type.get (id);
		
		if (assetType != null) {
			
			if (assetType == requestedType || ((requestedType == SOUND || requestedType == MUSIC) && (assetType == MUSIC || assetType == SOUND))) {
				
				return true;
				
			}
			
			#if flash
			
			if (requestedType == BINARY && (assetType == BINARY || assetType == TEXT || assetType == IMAGE)) {
				
				return true;
				
			} else if (requestedType == TEXT && assetType == BINARY) {
				
				return true;
				
			} else if (requestedType == null || path.exists (id)) {
				
				return true;
				
			}
			
			#else
			
			if (requestedType == BINARY || requestedType == null || (assetType == BINARY && requestedType == TEXT)) {
				
				return true;
				
			}
			
			#end
			
		}
		
		return false;
		
	}
	
	
	public override function getAudioBuffer (id:String):AudioBuffer {
		
		#if flash
		
		var buffer = new AudioBuffer ();
		buffer.src = cast (Type.createInstance (className.get (id), []), Sound);
		return buffer;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		if (className.exists(id)) return AudioBuffer.fromBytes (cast (Type.createInstance (className.get (id), []), Bytes));
		else return AudioBuffer.fromFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getBytes (id:String):Bytes {
		
		#if flash
		
		switch (type.get (id)) {
			
			case TEXT, BINARY:
				
				return Bytes.ofData (cast (Type.createInstance (className.get (id), []), flash.utils.ByteArray));
			
			case IMAGE:
				
				var bitmapData = cast (Type.createInstance (className.get (id), []), BitmapData);
				return Bytes.ofData (bitmapData.getPixels (bitmapData.rect));
			
			default:
				
				return null;
			
		}
		
		return cast (Type.createInstance (className.get (id), []), Bytes);
		
		#elseif html5
		
		var loader = Preloader.loaders.get (path.get (id));
		
		if (loader == null) {
			
			return null;
			
		}
		
		var bytes = loader.bytes;
		
		if (bytes != null) {
			
			return bytes;
			
		} else {
			
			return null;
		}
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Bytes);
		else return Bytes.readFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getFont (id:String):Font {
		
		#if flash
		
		var src = Type.createInstance (className.get (id), []);
		
		var font = new Font (src.fontName);
		font.src = src;
		return font;
		
		#elseif html5
		
		return cast (Type.createInstance (className.get (id), []), Font);
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			return cast (Type.createInstance (fontClass, []), Font);
			
		} else {
			
			return Font.fromFile (path.get (id));
			
		}
		
		#end
		
	}
	
	
	public override function getImage (id:String):Image {
		
		#if flash
		
		return Image.fromBitmapData (cast (Type.createInstance (className.get (id), []), BitmapData));
		
		#elseif html5
		
		return Image.fromImageElement (Preloader.images.get (path.get (id)));
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			return cast (Type.createInstance (fontClass, []), Image);
			
		} else {
			
			return Image.fromFile (path.get (id));
			
		}
		
		#end
		
	}
	
	
	/*public override function getMusic (id:String):Dynamic {
		
		#if flash
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif openfl_html5
		
		//var sound = new Sound ();
		//sound.__buffer = true;
		//sound.load (new URLRequest (path.get (id)));
		//return sound;
		return null;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		return null;
		//if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		//else return new Sound (new URLRequest (path.get (id)), null, true);
		
		#end
		
	}*/
	
	
	public override function getPath (id:String):String {
		
		//#if ios
		
		//return SystemPath.applicationDirectory + "/assets/" + path.get (id);
		
		//#else
		
		return path.get (id);
		
		//#end
		
	}
	
	
	public override function getText (id:String):String {
		
		#if html5
		
		var loader = Preloader.loaders.get (path.get (id));
		
		if (loader == null) {
			
			return null;
			
		}
		
		var bytes = loader.bytes;
		
		if (bytes != null) {
			
			return bytes.getString (0, bytes.length);
			
		} else {
			
			return null;
		}
		
		#else
		
		var bytes = getBytes (id);
		
		if (bytes == null) {
			
			return null;
			
		} else {
			
			return bytes.getString (0, bytes.length);
			
		}
		
		#end
		
	}
	
	
	public override function isLocal (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		
		#if flash
		
		//if (requestedType != AssetType.MUSIC && requestedType != AssetType.SOUND) {
			
			return className.exists (id);
			
		//}
		
		#end
		
		return true;
		
	}
	
	
	public override function list (type:String):Array<String> {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var items = [];
		
		for (id in this.type.keys ()) {
			
			if (requestedType == null || exists (id, type)) {
				
				items.push (id);
				
			}
			
		}
		
		return items;
		
	}
	
	
	public override function loadAudioBuffer (id:String):Future<AudioBuffer> {
		
		var promise = new Promise<AudioBuffer> ();
		
		#if (flash)
		
		if (path.exists (id)) {
			
			var soundLoader = new Sound ();
			soundLoader.addEventListener (Event.COMPLETE, function (event) {
				
				var audioBuffer:AudioBuffer = new AudioBuffer();
				audioBuffer.src = event.currentTarget;
				promise.complete (audioBuffer);
				
			});
			soundLoader.addEventListener (ProgressEvent.PROGRESS, function (event) {
				
				if (event.bytesTotal == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (event.bytesLoaded / event.bytesTotal);
					
				}
				
			});
			soundLoader.addEventListener (IOErrorEvent.IO_ERROR, promise.error);
			soundLoader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getAudioBuffer (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<AudioBuffer> (function () return getAudioBuffer (id)));
		
		#end
		
		return promise.future;
		
	}
	
	
	public override function loadBytes (id:String):Future<Bytes> {
		
		var promise = new Promise<Bytes> ();
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.dataFormat = flash.net.URLLoaderDataFormat.BINARY;
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bytes = Bytes.ofData (event.currentTarget.data);
				promise.complete (bytes);
				
			});
			loader.addEventListener (ProgressEvent.PROGRESS, function (event) {
				
				if (event.bytesTotal == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (event.bytesLoaded / event.bytesTotal);
					
				}
				
			});
			loader.addEventListener (IOErrorEvent.IO_ERROR, promise.error);
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getBytes (id));
			
		}
		
		#elseif html5
		
		if (path.exists (id)) {
			
			var request = new HTTPRequest ();
			promise.completeWith (request.load (path.get (id) + "?" + Assets.cache.version));
			
		} else {
			
			promise.complete (getBytes (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<Bytes> (function () return getBytes (id)));
		
		#end
		
		return promise.future;
		
	}
	
	
	public override function loadImage (id:String):Future<Image> {
		
		var promise = new Promise<Image> ();
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bitmapData = cast (event.currentTarget.content, Bitmap).bitmapData;
				promise.complete (Image.fromBitmapData (bitmapData));
				
			});
			loader.contentLoaderInfo.addEventListener (ProgressEvent.PROGRESS, function (event) {
				
				if (event.bytesTotal == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (event.bytesLoaded / event.bytesTotal);
					
				}
				
			});
			loader.contentLoaderInfo.addEventListener (IOErrorEvent.IO_ERROR, promise.error);
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getImage (id));
			
		}
		
		#elseif html5
		
		if (path.exists (id)) {
			
			var image = new js.html.Image ();
			image.onload = function (_):Void {
				
				promise.complete (Image.fromImageElement (image));
				
			}
			image.onerror = promise.error;
			image.src = path.get (id) + "?" + Assets.cache.version;
			
		} else {
			
			promise.complete (getImage (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<Image> (function () return getImage (id)));
		
		#end
		
		return promise.future;
		
	}
	
	
	#if (!flash && !html5)
	private function loadManifest ():Void {
		
		try {
			
			#if blackberry
			var bytes = Bytes.readFile ("app/native/manifest");
			#elseif tizen
			var bytes = Bytes.readFile ("../res/manifest");
			#elseif emscripten
			var bytes = Bytes.readFile ("assets/manifest");
			#elseif (mac && java)
			var bytes = Bytes.readFile ("../Resources/manifest");
			#elseif (ios || tvos)
			var bytes = Bytes.readFile ("assets/manifest");
			#else
			var bytes = Bytes.readFile ("manifest");
			#end
			
			if (bytes != null) {
				
				if (bytes.length > 0) {
					
					var data = bytes.getString (0, bytes.length);
					
					if (data != null && data.length > 0) {
						
						var manifest:Array<Dynamic> = Unserializer.run (data);
						
						for (asset in manifest) {
							
							if (!className.exists (asset.id)) {
								
								#if (ios || tvos)
								path.set (asset.id, "assets/" + asset.path);
								#else
								path.set (asset.id, asset.path);
								#end
								type.set (asset.id, cast (asset.type, AssetType));
								
							}
							
						}
						
					}
					
				}
				
			} else {
				
				trace ("Warning: Could not load asset manifest (bytes was null)");
				
			}
		
		} catch (e:Dynamic) {
			
			trace ('Warning: Could not load asset manifest (${e})');
			
		}
		
	}
	#end
	
	
	public override function loadText (id:String):Future<String> {
		
		var promise = new Promise<String> ();
		
		#if html5
		
		if (path.exists (id)) {
			
			var request = new HTTPRequest ();
			var future = request.load (path.get (id) + "?" + Assets.cache.version);
			future.onProgress (function (progress) promise.progress (progress));
			future.onError (function (msg) promise.error (msg));
			future.onComplete (function (bytes) promise.complete (bytes.getString (0, bytes.length)));
			
		} else {
			
			promise.complete (getText (id));
			
		}
		
		#else
		
		promise.completeWith (loadBytes (id).then (function (bytes) {
			
			return new Future<String> (function () {
				
				if (bytes == null) {
					
					return null;
					
				} else {
					
					return bytes.getString (0, bytes.length);
					
				}
				
			});
			
		}));
		
		#end
		
		return promise.future;
		
	}
	
	
}


#if !display
#if flash

@:keep @:bind #if display private #end class __ASSET__assets_data_data_goes_here_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_images_bgtest_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_bg_back_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_bg_fron2t_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_bg_front_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_bullet_aa_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_bullet_enemy_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_bullet_main_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_controls_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_halo_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_howto_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_images_go_here_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_images_intro_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_obstacle00_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_pickups_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_previews_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_ship_aa_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_ship_noaa_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_ship_shapes_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_music_music_goes_here_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_music_testmusic_antiguo1_wav extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_music_testmusic_ogg extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_music_testmusic_wav extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_enemy_explode_ogg extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_enemy_explode_wav extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_enemy_hit_ogg extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_enemy_hit_wav extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_enemy_nohit_ogg extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_enemy_nohit_wav extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_enemy_shoot_ogg extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_enemy_shoot_wav extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_enemy_spawn_ogg extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_enemy_spawn_wav extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_main_absorb_ogg extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_main_absorb_wav extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_main_blast_ogg extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_main_blast_wav extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_main_death_ogg extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_main_death_wav extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_main_double_pew_ogg extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_main_double_pew_wav extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_main_hit_ogg extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_main_hit_wav extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_main_pickup_ogg extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_main_pickup_wav extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_main_switch_ogg extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_main_switch_wav extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_pause_ogg extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_pause_wav extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_sounds_go_here_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__flixel_sounds_beep_mp3 extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__flixel_sounds_flixel_mp3 extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends flash.text.Font { }
@:keep @:bind #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends flash.text.Font { }
@:keep @:bind #if display private #end class __ASSET__flixel_images_ui_button_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }


#elseif html5





















































@:keep #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font { public function new () { super (); name = "Nokia Cellphone FC Small"; } } 
@:keep #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font { public function new () { super (); name = "Monsterrat"; } } 



#else



#if (windows || mac || linux || cpp)


@:file("assets/data/data-goes-here.txt") #if display private #end class __ASSET__assets_data_data_goes_here_txt extends lime.utils.Bytes {}
@:image("assets/images/bgtest.png") #if display private #end class __ASSET__assets_images_bgtest_png extends lime.graphics.Image {}
@:image("assets/images/bg_back.png") #if display private #end class __ASSET__assets_images_bg_back_png extends lime.graphics.Image {}
@:image("assets/images/bg_fron2t.png") #if display private #end class __ASSET__assets_images_bg_fron2t_png extends lime.graphics.Image {}
@:image("assets/images/bg_front.png") #if display private #end class __ASSET__assets_images_bg_front_png extends lime.graphics.Image {}
@:image("assets/images/bullet_aa.png") #if display private #end class __ASSET__assets_images_bullet_aa_png extends lime.graphics.Image {}
@:image("assets/images/bullet_enemy.png") #if display private #end class __ASSET__assets_images_bullet_enemy_png extends lime.graphics.Image {}
@:image("assets/images/bullet_main.png") #if display private #end class __ASSET__assets_images_bullet_main_png extends lime.graphics.Image {}
@:image("assets/images/controls.png") #if display private #end class __ASSET__assets_images_controls_png extends lime.graphics.Image {}
@:image("assets/images/halo.png") #if display private #end class __ASSET__assets_images_halo_png extends lime.graphics.Image {}
@:image("assets/images/howto.png") #if display private #end class __ASSET__assets_images_howto_png extends lime.graphics.Image {}
@:file("assets/images/images-go-here.txt") #if display private #end class __ASSET__assets_images_images_go_here_txt extends lime.utils.Bytes {}
@:image("assets/images/intro.png") #if display private #end class __ASSET__assets_images_intro_png extends lime.graphics.Image {}
@:image("assets/images/obstacle00.png") #if display private #end class __ASSET__assets_images_obstacle00_png extends lime.graphics.Image {}
@:image("assets/images/pickups.png") #if display private #end class __ASSET__assets_images_pickups_png extends lime.graphics.Image {}
@:image("assets/images/previews.png") #if display private #end class __ASSET__assets_images_previews_png extends lime.graphics.Image {}
@:image("assets/images/ship_aa.png") #if display private #end class __ASSET__assets_images_ship_aa_png extends lime.graphics.Image {}
@:image("assets/images/ship_noaa.png") #if display private #end class __ASSET__assets_images_ship_noaa_png extends lime.graphics.Image {}
@:image("assets/images/ship_shapes.png") #if display private #end class __ASSET__assets_images_ship_shapes_png extends lime.graphics.Image {}
@:file("assets/music/music-goes-here.txt") #if display private #end class __ASSET__assets_music_music_goes_here_txt extends lime.utils.Bytes {}
@:file("assets/music/testMusic-antiguo1.wav") #if display private #end class __ASSET__assets_music_testmusic_antiguo1_wav extends lime.utils.Bytes {}
@:file("assets/music/testMusic.ogg") #if display private #end class __ASSET__assets_music_testmusic_ogg extends lime.utils.Bytes {}
@:file("assets/music/testMusic.wav") #if display private #end class __ASSET__assets_music_testmusic_wav extends lime.utils.Bytes {}
@:file("assets/sounds/enemy_explode.ogg") #if display private #end class __ASSET__assets_sounds_enemy_explode_ogg extends lime.utils.Bytes {}
@:file("assets/sounds/enemy_explode.wav") #if display private #end class __ASSET__assets_sounds_enemy_explode_wav extends lime.utils.Bytes {}
@:file("assets/sounds/enemy_hit.ogg") #if display private #end class __ASSET__assets_sounds_enemy_hit_ogg extends lime.utils.Bytes {}
@:file("assets/sounds/enemy_hit.wav") #if display private #end class __ASSET__assets_sounds_enemy_hit_wav extends lime.utils.Bytes {}
@:file("assets/sounds/enemy_nohit.ogg") #if display private #end class __ASSET__assets_sounds_enemy_nohit_ogg extends lime.utils.Bytes {}
@:file("assets/sounds/enemy_nohit.wav") #if display private #end class __ASSET__assets_sounds_enemy_nohit_wav extends lime.utils.Bytes {}
@:file("assets/sounds/enemy_shoot.ogg") #if display private #end class __ASSET__assets_sounds_enemy_shoot_ogg extends lime.utils.Bytes {}
@:file("assets/sounds/enemy_shoot.wav") #if display private #end class __ASSET__assets_sounds_enemy_shoot_wav extends lime.utils.Bytes {}
@:file("assets/sounds/enemy_spawn.ogg") #if display private #end class __ASSET__assets_sounds_enemy_spawn_ogg extends lime.utils.Bytes {}
@:file("assets/sounds/enemy_spawn.wav") #if display private #end class __ASSET__assets_sounds_enemy_spawn_wav extends lime.utils.Bytes {}
@:file("assets/sounds/main_absorb.ogg") #if display private #end class __ASSET__assets_sounds_main_absorb_ogg extends lime.utils.Bytes {}
@:file("assets/sounds/main_absorb.wav") #if display private #end class __ASSET__assets_sounds_main_absorb_wav extends lime.utils.Bytes {}
@:file("assets/sounds/main_blast.ogg") #if display private #end class __ASSET__assets_sounds_main_blast_ogg extends lime.utils.Bytes {}
@:file("assets/sounds/main_blast.wav") #if display private #end class __ASSET__assets_sounds_main_blast_wav extends lime.utils.Bytes {}
@:file("assets/sounds/main_death.ogg") #if display private #end class __ASSET__assets_sounds_main_death_ogg extends lime.utils.Bytes {}
@:file("assets/sounds/main_death.wav") #if display private #end class __ASSET__assets_sounds_main_death_wav extends lime.utils.Bytes {}
@:file("assets/sounds/main_double_pew.ogg") #if display private #end class __ASSET__assets_sounds_main_double_pew_ogg extends lime.utils.Bytes {}
@:file("assets/sounds/main_double_pew.wav") #if display private #end class __ASSET__assets_sounds_main_double_pew_wav extends lime.utils.Bytes {}
@:file("assets/sounds/main_hit.ogg") #if display private #end class __ASSET__assets_sounds_main_hit_ogg extends lime.utils.Bytes {}
@:file("assets/sounds/main_hit.wav") #if display private #end class __ASSET__assets_sounds_main_hit_wav extends lime.utils.Bytes {}
@:file("assets/sounds/main_pickup.ogg") #if display private #end class __ASSET__assets_sounds_main_pickup_ogg extends lime.utils.Bytes {}
@:file("assets/sounds/main_pickup.wav") #if display private #end class __ASSET__assets_sounds_main_pickup_wav extends lime.utils.Bytes {}
@:file("assets/sounds/main_switch.ogg") #if display private #end class __ASSET__assets_sounds_main_switch_ogg extends lime.utils.Bytes {}
@:file("assets/sounds/main_switch.wav") #if display private #end class __ASSET__assets_sounds_main_switch_wav extends lime.utils.Bytes {}
@:file("assets/sounds/pause.ogg") #if display private #end class __ASSET__assets_sounds_pause_ogg extends lime.utils.Bytes {}
@:file("assets/sounds/pause.wav") #if display private #end class __ASSET__assets_sounds_pause_wav extends lime.utils.Bytes {}
@:file("assets/sounds/sounds-go-here.txt") #if display private #end class __ASSET__assets_sounds_sounds_go_here_txt extends lime.utils.Bytes {}
@:file("D:/development/HaxeToolkit/haxe/lib/flixel/4,0,1/assets/sounds/beep.mp3") #if display private #end class __ASSET__flixel_sounds_beep_mp3 extends lime.utils.Bytes {}
@:file("D:/development/HaxeToolkit/haxe/lib/flixel/4,0,1/assets/sounds/flixel.mp3") #if display private #end class __ASSET__flixel_sounds_flixel_mp3 extends lime.utils.Bytes {}
@:font("D:/development/HaxeToolkit/haxe/lib/flixel/4,0,1/assets/fonts/nokiafc22.ttf") #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font {}
@:font("D:/development/HaxeToolkit/haxe/lib/flixel/4,0,1/assets/fonts/monsterrat.ttf") #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font {}
@:image("D:/development/HaxeToolkit/haxe/lib/flixel/4,0,1/assets/images/ui/button.png") #if display private #end class __ASSET__flixel_images_ui_button_png extends lime.graphics.Image {}



#end
#end

#if (openfl && !flash)
@:keep #if display private #end class __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { var font = new __ASSET__flixel_fonts_nokiafc22_ttf (); src = font.src; name = font.name; super (); }}
@:keep #if display private #end class __ASSET__OPENFL__flixel_fonts_monsterrat_ttf extends openfl.text.Font { public function new () { var font = new __ASSET__flixel_fonts_monsterrat_ttf (); src = font.src; name = font.name; super (); }}

#end

#end