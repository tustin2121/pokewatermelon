FallarborTown_MapScripts:: @ 81EB1FA
	map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_OnTransition
	.byte 0

FallarborTown_OnTransition: @ 81EB200
	setflag FLAG_VISITED_FALLARBOR_TOWN
	setvar VAR_LINK_CONTEST_ROOM_STATE, 0
	clearflag FLAG_CONTEST_SKETCH_CREATED
	end

FallarborTown_EventScript_1EB20C:: @ 81EB20C
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_EventScript_1EB221
	msgbox FallarborTown_Text_1EB26B, MSGBOX_DEFAULT
	release
	end

FallarborTown_EventScript_1EB221:: @ 81EB221
	msgbox FallarborTown_Text_1EB2DE, MSGBOX_DEFAULT
	release
	end

FallarborTown_EventScript_1EB22B:: @ 81EB22B
	msgbox FallarborTown_Text_1EB35F, MSGBOX_NPC
	end

FallarborTown_EventScript_1EB234:: @ 81EB234
	msgbox FallarborTown_Text_1EB3CA, MSGBOX_NPC
	end

FallarborTown_EventScript_1EB23D:: @ 81EB23D
	lock
	faceplayer
	waitse
	playmoncry SPECIES_AZURILL, 0
	msgbox FallarborTown_Text_1EB3B5, MSGBOX_DEFAULT
	waitmoncry
	release
	end

FallarborTown_EventScript_1EB250:: @ 81EB250
	msgbox FallarborTown_Text_1EB4C2, MSGBOX_SIGN
	end

FallarborTown_EventScript_1EB259:: @ 81EB259
	msgbox FallarborTown_Text_1EB4FE, MSGBOX_SIGN
	end

FallarborTown_EventScript_1EB262:: @ 81EB262
	msgbox FallarborTown_Text_1EB534, MSGBOX_SIGN
	end

FallarborTown_Text_1EB26B: @ 81EB26B
	.i18n 2212

FallarborTown_Text_1EB2DE: @ 81EB2DE
	.i18n 2213

FallarborTown_Text_1EB35F: @ 81EB35F
	.i18n 2214

FallarborTown_Text_1EB3B5: @ 81EB3B5
	.i18n 2215

FallarborTown_Text_1EB3CA: @ 81EB3CA
	.i18n 2216

FallarborTown_Text_1EB4C2: @ 81EB4C2
	.i18n 2217

FallarborTown_Text_1EB4FE: @ 81EB4FE
	.i18n 2218

FallarborTown_Text_1EB534: @ 81EB534
	.i18n 2219

