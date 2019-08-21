PetalburgCity_WallysHouse_MapScripts:: @ 8204229
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_WallysHouse_MapScript2_204247
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PetalburgCity_WallysHouse_MapScript2_204234
	.byte 0

PetalburgCity_WallysHouse_MapScript2_204234: @ 8204234
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_WallysHouse_EventScript_20423E
	.2byte 0

PetalburgCity_WallysHouse_EventScript_20423E:: @ 820423E
	turnobject EVENT_OBJ_ID_PLAYER, 4
	turnobject 1, 3
	end

PetalburgCity_WallysHouse_MapScript2_204247: @ 8204247
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_WallysHouse_EventScript_204251
	.2byte 0

PetalburgCity_WallysHouse_EventScript_204251:: @ 8204251
	lockall
	msgbox PetalburgCity_WallysHouse_Text_20446E, MSGBOX_DEFAULT
	giveitem_std ITEM_HM03
	setflag FLAG_RECEIVED_HM03
	msgbox PetalburgCity_WallysHouse_Text_20461A, MSGBOX_DEFAULT
	setvar VAR_PETALBURG_CITY_STATE, 5
	releaseall
	end

PetalburgCity_WallysHouse_EventScript_204278:: @ 8204278
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, PetalburgCity_WallysHouse_EventScript_2042AC
	goto_if_set FLAG_RECEIVED_HM03, PetalburgCity_WallysHouse_EventScript_2042A2
	goto_if_set FLAG_THANKED_FOR_PLAYING_WITH_WALLY, PetalburgCity_WallysHouse_EventScript_2042B6
	msgbox PetalburgCity_WallysHouse_Text_2042DF, MSGBOX_DEFAULT
	setflag FLAG_THANKED_FOR_PLAYING_WITH_WALLY
	release
	end

PetalburgCity_WallysHouse_EventScript_2042A2:: @ 82042A2
	msgbox PetalburgCity_WallysHouse_Text_204661, MSGBOX_DEFAULT
	release
	end

PetalburgCity_WallysHouse_EventScript_2042AC:: @ 82042AC
	msgbox PetalburgCity_WallysHouse_Text_204698, MSGBOX_DEFAULT
	release
	end

PetalburgCity_WallysHouse_EventScript_2042B6:: @ 82042B6
	msgbox PetalburgCity_WallysHouse_Text_20444D, MSGBOX_DEFAULT
	release
	end

PetalburgCity_WallysHouse_EventScript_2042C0:: @ 82042C0
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_HM03, PetalburgCity_WallysHouse_EventScript_2042D5
	msgbox PetalburgCity_WallysHouse_Text_204732, MSGBOX_DEFAULT
	release
	end

PetalburgCity_WallysHouse_EventScript_2042D5:: @ 82042D5
	msgbox PetalburgCity_WallysHouse_Text_2047A7, MSGBOX_DEFAULT
	release
	end

PetalburgCity_WallysHouse_Text_2042DF: @ 82042DF
	.i18n 3518

PetalburgCity_WallysHouse_Text_20444D: @ 820444D
	.i18n 3519

PetalburgCity_WallysHouse_Text_20446E: @ 820446E
	.i18n 3520

PetalburgCity_WallysHouse_Text_20461A: @ 820461A
	.i18n 3521

PetalburgCity_WallysHouse_Text_204661: @ 8204661
	.i18n 3522

PetalburgCity_WallysHouse_Text_204698: @ 8204698
	.i18n 3523

PetalburgCity_WallysHouse_Text_204732: @ 8204732
	.i18n 3524

PetalburgCity_WallysHouse_Text_2047A7: @ 82047A7
	.i18n 3525

