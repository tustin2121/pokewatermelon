MossdeepCity_GameCorner_1F_MapScripts:: @ 8224B27
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MossdeepCity_GameCorner_1F_MapScript2_224B41
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, MossdeepCity_GameCorner_1F_MapScript2_224B37
	map_script MAP_SCRIPT_ON_LOAD, MossdeepCity_GameCorner_1F_MapScript1_276BBE
	.byte 0

MossdeepCity_GameCorner_1F_MapScript2_224B37: @ 8224B37
	map_script_2 VAR_CABLE_CLUB_STATE, 8, MossdeepCity_GameCorner_1F_EventScript_276BAE
	.2byte 0

MossdeepCity_GameCorner_1F_MapScript2_224B41: @ 8224B41
	map_script_2 VAR_CABLE_CLUB_STATE, 8, MossdeepCity_GameCorner_1F_EventScript_276C9D
	.2byte 0

MossdeepCity_GameCorner_1F_EventScript_224B4B:: @ 8224B4B
	lock
	faceplayer
	goto MossdeepCity_GameCorner_1F_EventScript_277C34
	release
	end

MossdeepCity_GameCorner_1F_EventScript_224B54:: @ 8224B54
	lock
	faceplayer
	goto MossdeepCity_GameCorner_1F_EventScript_277C91
	release
	end

MossdeepCity_GameCorner_1F_EventScript_224B5D:: @ 8224B5D
	msgbox MossdeepCity_GameCorner_1F_Text_224BFD, MSGBOX_SIGN
	end

MossdeepCity_GameCorner_1F_Text_224B66: @ 8224B66
	.i18n 3072

MossdeepCity_GameCorner_1F_Text_224BFD: @ 8224BFD
	.i18n 3073

MossdeepCity_GameCorner_1F_Text_224C1C: @ 8224C1C
	.i18n 3074

MossdeepCity_GameCorner_1F_Text_224C64: @ 8224C64
	.i18n 3075

MossdeepCity_GameCorner_1F_Text_224CA4: @ 8224CA4
	.i18n 3076

MossdeepCity_GameCorner_1F_Text_224D0B: @ 8224D0B
	.i18n 3077

MossdeepCity_GameCorner_1F_Text_224D41: @ 8224D41
	.i18n 3078

MossdeepCity_GameCorner_1F_Text_224D5D: @ 8224D5D
	.i18n 3079

MossdeepCity_GameCorner_1F_Text_224DB7: @ 8224DB7
	.i18n 3080

MossdeepCity_GameCorner_1F_Text_224DFF: @ 8224DFF
	.i18n 3081

