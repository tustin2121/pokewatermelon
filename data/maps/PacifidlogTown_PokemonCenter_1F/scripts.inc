PacifidlogTown_PokemonCenter_1F_MapScripts:: @ 82034A7
	map_script MAP_SCRIPT_ON_TRANSITION, PacifidlogTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, PacifidlogTown_PokemonCenter_1F_MapScript1_277C30
	.byte 0

PacifidlogTown_PokemonCenter_1F_OnTransition: @ 82034B2
	setrespawn HEAL_LOCATION_PACIFIDLOG_TOWN
	end

PacifidlogTown_PokemonCenter_1F_EventScript_2034B6:: @ 82034B6
	setvar VAR_0x800B, 1
	call PacifidlogTown_PokemonCenter_1F_EventScript_27191E
	waitmessage
	waitbuttonpress
	release
	end

PacifidlogTown_PokemonCenter_1F_EventScript_2034C4:: @ 82034C4
	msgbox PacifidlogTown_PokemonCenter_1F_Text_2034DF, MSGBOX_NPC
	end

PacifidlogTown_PokemonCenter_1F_EventScript_2034CD:: @ 82034CD
	msgbox PacifidlogTown_PokemonCenter_1F_Text_20350F, MSGBOX_NPC
	end

PacifidlogTown_PokemonCenter_1F_EventScript_2034D6:: @ 82034D6
	msgbox PacifidlogTown_PokemonCenter_1F_Text_20356F, MSGBOX_NPC
	end

PacifidlogTown_PokemonCenter_1F_Text_2034DF: @ 82034DF
	.i18n 3418

PacifidlogTown_PokemonCenter_1F_Text_20350F: @ 820350F
	.i18n 3419

PacifidlogTown_PokemonCenter_1F_Text_20356F: @ 820356F
	.i18n 3420

