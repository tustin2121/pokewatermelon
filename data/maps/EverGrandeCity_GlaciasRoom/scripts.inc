EverGrandeCity_GlaciasRoom_MapScripts:: @ 8228412
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_GlaciasRoom_MapScript2_228431
	map_script MAP_SCRIPT_ON_LOAD, EverGrandeCity_GlaciasRoom_MapScript1_228448
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_GlaciasRoom_MapScript2_228422
	.byte 0

EverGrandeCity_GlaciasRoom_MapScript2_228422: @ 8228422
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_GlaciasRoom_EventScript_22842C
	.2byte 0

EverGrandeCity_GlaciasRoom_EventScript_22842C:: @ 822842C
	turnobject EVENT_OBJ_ID_PLAYER, 2
	end

EverGrandeCity_GlaciasRoom_MapScript2_228431: @ 8228431
	map_script_2 VAR_ELITE_4_STATE, 2, EverGrandeCity_GlaciasRoom_EventScript_22843B
	.2byte 0

EverGrandeCity_GlaciasRoom_EventScript_22843B:: @ 822843B
	lockall
	call EverGrandeCity_GlaciasRoom_EventScript_272475
	setvar VAR_ELITE_4_STATE, 3
	releaseall
	end

EverGrandeCity_GlaciasRoom_MapScript1_228448: @ 8228448
	call_if_set FLAG_DEFEATED_ELITE_4_GLACIA, EverGrandeCity_GlaciasRoom_EventScript_22845D
	compare VAR_ELITE_4_STATE, 3
	call_if_eq EverGrandeCity_GlaciasRoom_EventScript_228463
	end

EverGrandeCity_GlaciasRoom_EventScript_22845D:: @ 822845D
	call EverGrandeCity_GlaciasRoom_EventScript_2724BC
	return

EverGrandeCity_GlaciasRoom_EventScript_228463:: @ 8228463
	call EverGrandeCity_GlaciasRoom_EventScript_27255F
	return

EverGrandeCity_GlaciasRoom_EventScript_228469:: @ 8228469
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_ELITE_4_GLACIA, EverGrandeCity_GlaciasRoom_EventScript_228490
	playbgm MUS_SITENNOU, 0
	msgbox EverGrandeCity_GlaciasRoom_Text_2284AC, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GLACIA, EverGrandeCity_GlaciasRoom_Text_2285B4
	goto EverGrandeCity_GlaciasRoom_EventScript_22849A
	end

EverGrandeCity_GlaciasRoom_EventScript_228490:: @ 8228490
	msgbox EverGrandeCity_GlaciasRoom_Text_228640, MSGBOX_DEFAULT
	release
	end

EverGrandeCity_GlaciasRoom_EventScript_22849A:: @ 822849A
	setflag FLAG_DEFEATED_ELITE_4_GLACIA
	call EverGrandeCity_GlaciasRoom_EventScript_2723F8
	msgbox EverGrandeCity_GlaciasRoom_Text_228640, MSGBOX_DEFAULT
	release
	end

EverGrandeCity_GlaciasRoom_Text_2284AC: @ 82284AC
	.i18n 2195

EverGrandeCity_GlaciasRoom_Text_2285B4: @ 82285B4
	.i18n 2196

EverGrandeCity_GlaciasRoom_Text_228640: @ 8228640
	.i18n 2197

