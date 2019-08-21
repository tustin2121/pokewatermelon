FortreeCity_House5_MapScripts:: @ 8217EF1
	.byte 0

FortreeCity_House5_EventScript_217EF2:: @ 8217EF2
	msgbox FortreeCity_House5_Text_217F17, MSGBOX_NPC
	end

FortreeCity_House5_EventScript_217EFB:: @ 8217EFB
	msgbox FortreeCity_House5_Text_217F80, MSGBOX_NPC
	end

FortreeCity_House5_EventScript_217F04:: @ 8217F04
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ZIGZAGOON, 0
	msgbox FortreeCity_House5_Text_217FFB, MSGBOX_DEFAULT
	waitmoncry
	release
	end

FortreeCity_House5_Text_217F17: @ 8217F17
	.i18n 2322

FortreeCity_House5_Text_217F80: @ 8217F80
	.i18n 2323

FortreeCity_House5_Text_217FFB: @ 8217FFB
	.i18n 2324

