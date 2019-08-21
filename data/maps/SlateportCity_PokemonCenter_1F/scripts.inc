SlateportCity_PokemonCenter_1F_MapScripts:: @ 820DABF
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SlateportCity_PokemonCenter_1F_MapScript1_277C30
	.byte 0

SlateportCity_PokemonCenter_1F_OnTransition: @ 820DACA
	setrespawn HEAL_LOCATION_SLATEPORT_CITY
	call SlateportCity_PokemonCenter_1F_EventScript_2718DE
	end

SlateportCity_PokemonCenter_1F_EventScript_20DAD3:: @ 820DAD3
	setvar VAR_0x800B, 1
	call SlateportCity_PokemonCenter_1F_EventScript_27191E
	waitmessage
	waitbuttonpress
	release
	end

SlateportCity_PokemonCenter_1F_EventScript_20DAE1:: @ 820DAE1
	msgbox SlateportCity_PokemonCenter_1F_Text_20DAF3, MSGBOX_NPC
	end

SlateportCity_PokemonCenter_1F_EventScript_20DAEA:: @ 820DAEA
	msgbox SlateportCity_PokemonCenter_1F_Text_20DBBC, MSGBOX_NPC
	end

SlateportCity_PokemonCenter_1F_Text_20DAF3: @ 820DAF3
	.i18n 4552

SlateportCity_PokemonCenter_1F_Text_20DBBC: @ 820DBBC
	.i18n 4553

