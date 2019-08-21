SootopolisCity_PokemonCenter_1F_MapScripts:: @ 82264F1
	map_script MAP_SCRIPT_ON_TRANSITION, SootopolisCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SootopolisCity_PokemonCenter_1F_MapScript1_277C30
	.byte 0

SootopolisCity_PokemonCenter_1F_OnTransition: @ 82264FC
	setrespawn HEAL_LOCATION_SOOTOPOLIS_CITY
	end

SootopolisCity_PokemonCenter_1F_EventScript_226500:: @ 8226500
	setvar VAR_0x800B, 1
	call SootopolisCity_PokemonCenter_1F_EventScript_27191E
	waitmessage
	waitbuttonpress
	release
	end

SootopolisCity_PokemonCenter_1F_EventScript_22650E:: @ 822650E
	lock
	faceplayer
	compare VAR_SKY_PILLAR_STATE, 2
	goto_if_ge SootopolisCity_PokemonCenter_1F_EventScript_22652E
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_PokemonCenter_1F_EventScript_22652E
	msgbox SootopolisCity_PokemonCenter_1F_Text_22664B, MSGBOX_DEFAULT
	release
	end

SootopolisCity_PokemonCenter_1F_EventScript_22652E:: @ 822652E
	msgbox SootopolisCity_PokemonCenter_1F_Text_226562, MSGBOX_DEFAULT
	release
	end

SootopolisCity_PokemonCenter_1F_EventScript_226538:: @ 8226538
	lock
	faceplayer
	compare VAR_SKY_PILLAR_STATE, 2
	goto_if_ge SootopolisCity_PokemonCenter_1F_EventScript_226558
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_PokemonCenter_1F_EventScript_226558
	msgbox SootopolisCity_PokemonCenter_1F_Text_22672F, MSGBOX_DEFAULT
	release
	end

SootopolisCity_PokemonCenter_1F_EventScript_226558:: @ 8226558
	msgbox SootopolisCity_PokemonCenter_1F_Text_2266B9, MSGBOX_DEFAULT
	release
	end

SootopolisCity_PokemonCenter_1F_Text_226562: @ 8226562
	.i18n 4738

SootopolisCity_PokemonCenter_1F_Text_22664B: @ 822664B
	.i18n 4739

SootopolisCity_PokemonCenter_1F_Text_2266B9: @ 82266B9
	.i18n 4740

SootopolisCity_PokemonCenter_1F_Text_22672F: @ 822672F
	.i18n 4741

