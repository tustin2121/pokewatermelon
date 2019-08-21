BattleFrontier_PokemonCenter_1F_MapScripts:: @ 82678F9
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_PokemonCenter_1F_MapScript1_267904
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_PokemonCenter_1F_MapScript1_277C30
	.byte 0

BattleFrontier_PokemonCenter_1F_MapScript1_267904: @ 8267904
	setrespawn HEAL_LOCATION_BATTLE_FRONTIER_OUTSIDE_EAST
	end

BattleFrontier_PokemonCenter_1F_EventScript_267908:: @ 8267908
	setvar VAR_0x800B, 1
	call BattleFrontier_PokemonCenter_1F_EventScript_27191E
	waitmessage
	waitbuttonpress
	release
	end

BattleFrontier_PokemonCenter_1F_EventScript_267916:: @ 8267916
	msgbox BattleFrontier_PokemonCenter_1F_Text_267944, MSGBOX_NPC
	end

BattleFrontier_PokemonCenter_1F_EventScript_26791F:: @ 826791F
	msgbox BattleFrontier_PokemonCenter_1F_Text_2679EB, MSGBOX_NPC
	end

BattleFrontier_PokemonCenter_1F_EventScript_267928:: @ 8267928
	msgbox BattleFrontier_PokemonCenter_1F_Text_267A4B, MSGBOX_NPC
	end

BattleFrontier_PokemonCenter_1F_EventScript_267931:: @ 8267931
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SKITTY, 0
	msgbox BattleFrontier_PokemonCenter_1F_Text_267A90, MSGBOX_DEFAULT
	waitmoncry
	release
	end

BattleFrontier_PokemonCenter_1F_Text_267944: @ 8267944
	.i18n 2014

BattleFrontier_PokemonCenter_1F_Text_2679EB: @ 82679EB
	.i18n 2015

BattleFrontier_PokemonCenter_1F_Text_267A4B: @ 8267A4B
	.i18n 2016

BattleFrontier_PokemonCenter_1F_Text_267A90: @ 8267A90
	.i18n 2017

