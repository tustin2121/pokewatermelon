FallarborTown_PokemonCenter_1F_MapScripts:: @ 8200BCD
	map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, FallarborTown_PokemonCenter_1F_MapScript1_277C30
	.byte 0

FallarborTown_PokemonCenter_1F_OnTransition: @ 8200BD8
	setrespawn HEAL_LOCATION_FALLARBOR_TOWN
	call FallarborTown_PokemonCenter_1F_EventScript_2718DE
	end

FallarborTown_PokemonCenter_1F_EventScript_200BE1:: @ 8200BE1
	setvar VAR_0x800B, 1
	call FallarborTown_PokemonCenter_1F_EventScript_27191E
	waitmessage
	waitbuttonpress
	release
	end

FallarborTown_PokemonCenter_1F_EventScript_200BEF:: @ 8200BEF
	msgbox FallarborTown_PokemonCenter_1F_Text_200E22, MSGBOX_NPC
	end

FallarborTown_PokemonCenter_1F_EventScript_200BF8:: @ 8200BF8
	msgbox FallarborTown_PokemonCenter_1F_Text_200E8B, MSGBOX_NPC
	end

FallarborTown_PokemonCenter_1F_EventScript_200C01:: @ 8200C01
	lock
	faceplayer
	msgbox FallarborTown_PokemonCenter_1F_Text_200C6B, MSGBOX_DEFAULT
	closemessage
	switch VAR_FACING
	case 2, FallarborTown_PokemonCenter_1F_EventScript_200C28
	case 3, FallarborTown_PokemonCenter_1F_EventScript_200C38
	end

FallarborTown_PokemonCenter_1F_EventScript_200C28:: @ 8200C28
	applymovement 4, FallarborTown_PokemonCenter_1F_Movement_200C53
	waitmovement 0
	goto FallarborTown_PokemonCenter_1F_EventScript_200C48
	end

FallarborTown_PokemonCenter_1F_EventScript_200C38:: @ 8200C38
	applymovement 4, FallarborTown_PokemonCenter_1F_Movement_200C60
	waitmovement 0
	goto FallarborTown_PokemonCenter_1F_EventScript_200C48
	end

FallarborTown_PokemonCenter_1F_EventScript_200C48:: @ 8200C48
	playse SE_JIDO_DOA
	removeobject 4
	clearflag FLAG_HIDE_LANETTES_HOUSE_LANETTE
	release
	end

FallarborTown_PokemonCenter_1F_Movement_200C53: @ 8200C53
	walk_right
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	delay_8
	step_end

FallarborTown_PokemonCenter_1F_Movement_200C60: @ 8200C60
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	delay_8
	step_end

FallarborTown_PokemonCenter_1F_Text_200C6B: @ 8200C6B
	.i18n 2249

FallarborTown_PokemonCenter_1F_Text_200E22: @ 8200E22
	.i18n 2250

FallarborTown_PokemonCenter_1F_Text_200E8B: @ 8200E8B
	.i18n 2251

