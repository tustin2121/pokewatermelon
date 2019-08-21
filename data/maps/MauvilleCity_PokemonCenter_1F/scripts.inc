MauvilleCity_PokemonCenter_1F_MapScripts:: @ 8210E5B
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, MauvilleCity_PokemonCenter_1F_MapScript1_277C30
	.byte 0

MauvilleCity_PokemonCenter_1F_OnTransition: @ 8210E66
	setrespawn HEAL_LOCATION_MAUVILLE_CITY
	call MauvilleCity_PokemonCenter_1F_EventScript_2718DE
	goto MauvilleCity_PokemonCenter_1F_EventScript_210E74
	end

MauvilleCity_PokemonCenter_1F_EventScript_210E74:: @ 8210E74
	special ScrSpecial_SetMauvilleOldManEventObjGfx
	end

MauvilleCity_PokemonCenter_1F_EventScript_210E78:: @ 8210E78
	setvar VAR_0x800B, 1
	call MauvilleCity_PokemonCenter_1F_EventScript_27191E
	waitmessage
	waitbuttonpress
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_210E86:: @ 8210E86
	msgbox MauvilleCity_PokemonCenter_1F_Text_210EA1, MSGBOX_NPC
	end

MauvilleCity_PokemonCenter_1F_EventScript_210E8F:: @ 8210E8F
	msgbox MauvilleCity_PokemonCenter_1F_Text_210F06, MSGBOX_NPC
	end

MauvilleCity_PokemonCenter_1F_EventScript_210E98:: @ 8210E98
	msgbox MauvilleCity_PokemonCenter_1F_Text_210F8A, MSGBOX_NPC
	end

MauvilleCity_PokemonCenter_1F_Text_210EA1: @ 8210EA1
	.i18n 3008

MauvilleCity_PokemonCenter_1F_Text_210F06: @ 8210F06
	.i18n 3009

MauvilleCity_PokemonCenter_1F_Text_210F8A: @ 8210F8A
	.i18n 3010

