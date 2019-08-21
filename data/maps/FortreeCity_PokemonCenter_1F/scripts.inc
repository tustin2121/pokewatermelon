FortreeCity_PokemonCenter_1F_MapScripts:: @ 82173D8
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, FortreeCity_PokemonCenter_1F_MapScript1_277C30
	.byte 0

FortreeCity_PokemonCenter_1F_OnTransition: @ 82173E3
	setrespawn HEAL_LOCATION_FORTREE_CITY
	end

FortreeCity_PokemonCenter_1F_EventScript_2173E7:: @ 82173E7
	setvar VAR_0x800B, 1
	call FortreeCity_PokemonCenter_1F_EventScript_27191E
	waitmessage
	waitbuttonpress
	release
	end

FortreeCity_PokemonCenter_1F_EventScript_2173F5:: @ 82173F5
	msgbox FortreeCity_PokemonCenter_1F_Text_217410, MSGBOX_NPC
	end

FortreeCity_PokemonCenter_1F_EventScript_2173FE:: @ 82173FE
	msgbox FortreeCity_PokemonCenter_1F_Text_21746D, MSGBOX_NPC
	end

FortreeCity_PokemonCenter_1F_EventScript_217407:: @ 8217407
	msgbox FortreeCity_PokemonCenter_1F_Text_21751F, MSGBOX_NPC
	end

FortreeCity_PokemonCenter_1F_Text_217410: @ 8217410
	.i18n 2328

FortreeCity_PokemonCenter_1F_Text_21746D: @ 821746D
	.i18n 2329

FortreeCity_PokemonCenter_1F_Text_21751F: @ 821751F
	.i18n 2330

