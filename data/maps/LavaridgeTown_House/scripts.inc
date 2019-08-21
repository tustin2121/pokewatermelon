LavaridgeTown_House_MapScripts:: @ 81FF911
	.byte 0

LavaridgeTown_House_EventScript_1FF912:: @ 81FF912
	msgbox LavaridgeTown_House_Text_1FF92E, MSGBOX_NPC
	end

LavaridgeTown_House_EventScript_1FF91B:: @ 81FF91B
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ZIGZAGOON, 0
	msgbox LavaridgeTown_House_Text_1FF9BB, MSGBOX_DEFAULT
	waitmoncry
	release
	end

LavaridgeTown_House_Text_1FF92E: @ 81FF92E
	.i18n 2429

LavaridgeTown_House_Text_1FF9BB: @ 81FF9BB
	.i18n 2430

