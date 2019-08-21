VerdanturfTown_PokemonCenter_1F_MapScripts:: @ 8202726
	map_script MAP_SCRIPT_ON_TRANSITION, VerdanturfTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, VerdanturfTown_PokemonCenter_1F_MapScript1_277C30
	.byte 0

VerdanturfTown_PokemonCenter_1F_OnTransition: @ 8202731
	setrespawn HEAL_LOCATION_VERDANTURF_TOWN
	call VerdanturfTown_PokemonCenter_1F_EventScript_2718DE
	end

VerdanturfTown_PokemonCenter_1F_EventScript_20273A:: @ 820273A
	setvar VAR_0x800B, 1
	call VerdanturfTown_PokemonCenter_1F_EventScript_27191E
	waitmessage
	waitbuttonpress
	release
	end

VerdanturfTown_PokemonCenter_1F_EventScript_202748:: @ 8202748
	msgbox VerdanturfTown_PokemonCenter_1F_Text_20275A, MSGBOX_NPC
	end

VerdanturfTown_PokemonCenter_1F_EventScript_202751:: @ 8202751
	msgbox VerdanturfTown_PokemonCenter_1F_Text_20280B, MSGBOX_NPC
	end

VerdanturfTown_PokemonCenter_1F_Text_20275A: @ 820275A
	.i18n 4805

VerdanturfTown_PokemonCenter_1F_Text_20280B: @ 820280B
	.i18n 4806

