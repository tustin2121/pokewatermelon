OldaleTown_PokemonCenter_1F_MapScripts:: @ 81FC006
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, OldaleTown_PokemonCenter_1F_MapScript1_277C30
	.byte 0

OldaleTown_PokemonCenter_1F_OnTransition: @ 81FC011
	setrespawn HEAL_LOCATION_OLDALE_TOWN
	call OldaleTown_PokemonCenter_1F_EventScript_2718DE
	end

OldaleTown_PokemonCenter_1F_EventScript_1FC01A:: @ 81FC01A
	setvar VAR_0x800B, 1
	call OldaleTown_PokemonCenter_1F_EventScript_27191E
	waitmessage
	waitbuttonpress
	release
	end

OldaleTown_PokemonCenter_1F_EventScript_1FC028:: @ 81FC028
	msgbox OldaleTown_PokemonCenter_1F_Text_1FC059, MSGBOX_NPC
	end

OldaleTown_PokemonCenter_1F_EventScript_1FC031:: @ 81FC031
	msgbox OldaleTown_PokemonCenter_1F_Text_1FC0CD, MSGBOX_NPC
	end

OldaleTown_PokemonCenter_1F_EventScript_1FC03A:: @ 81FC03A
	lock
	faceplayer
	goto_if_set FLAG_SYS_POKEDEX_GET, OldaleTown_PokemonCenter_1F_EventScript_1FC04F
	msgbox OldaleTown_PokemonCenter_1F_Text_1FC148, MSGBOX_DEFAULT
	release
	end

OldaleTown_PokemonCenter_1F_EventScript_1FC04F:: @ 81FC04F
	msgbox OldaleTown_PokemonCenter_1F_Text_1FC1B9, MSGBOX_DEFAULT
	release
	end

OldaleTown_PokemonCenter_1F_Text_1FC059: @ 81FC059
	.i18n 3383

OldaleTown_PokemonCenter_1F_Text_1FC0CD: @ 81FC0CD
	.i18n 3384

OldaleTown_PokemonCenter_1F_Text_1FC148: @ 81FC148
	.i18n 3385

OldaleTown_PokemonCenter_1F_Text_1FC1B9: @ 81FC1B9
	.i18n 3386

