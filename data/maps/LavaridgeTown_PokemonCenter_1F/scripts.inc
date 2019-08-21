LavaridgeTown_PokemonCenter_1F_MapScripts:: @ 81FFAFA
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, LavaridgeTown_PokemonCenter_1F_MapScript1_277C30
	.byte 0

LavaridgeTown_PokemonCenter_1F_OnTransition: @ 81FFB05
	setrespawn HEAL_LOCATION_LAVARIDGE_TOWN
	call LavaridgeTown_PokemonCenter_1F_EventScript_2718DE
	end

LavaridgeTown_PokemonCenter_1F_EventScript_1FFB0E:: @ 81FFB0E
	setvar VAR_0x800B, 1
	call LavaridgeTown_PokemonCenter_1F_EventScript_27191E
	waitmessage
	waitbuttonpress
	release
	end

LavaridgeTown_PokemonCenter_1F_EventScript_1FFB1C:: @ 81FFB1C
	msgbox LavaridgeTown_PokemonCenter_1F_Text_1FFBAD, MSGBOX_NPC
	end

LavaridgeTown_PokemonCenter_1F_EventScript_1FFB25:: @ 81FFB25
	msgbox LavaridgeTown_PokemonCenter_1F_Text_1FFB37, MSGBOX_NPC
	end

LavaridgeTown_PokemonCenter_1F_EventScript_1FFB2E:: @ 81FFB2E
	msgbox LavaridgeTown_PokemonCenter_1F_Text_1FFC21, MSGBOX_NPC
	end

LavaridgeTown_PokemonCenter_1F_Text_1FFB37: @ 81FFB37
	.i18n 2433

LavaridgeTown_PokemonCenter_1F_Text_1FFBAD: @ 81FFBAD
	.i18n 2434

LavaridgeTown_PokemonCenter_1F_Text_1FFC21: @ 81FFC21
	.i18n 2435

