EverGrandeCity_ChampionsRoom_MapScripts:: @ 82289EF
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_ChampionsRoom_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_ChampionsRoom_MapScript2_228A05
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_ChampionsRoom_MapScript2_228A14
	.byte 0

EverGrandeCity_ChampionsRoom_OnTransition: @ 82289FF
	call Common_EventScript_SetupRivalGender
	end

EverGrandeCity_ChampionsRoom_MapScript2_228A05: @ 8228A05
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_ChampionsRoom_EventScript_228A0F
	.2byte 0

EverGrandeCity_ChampionsRoom_EventScript_228A0F:: @ 8228A0F
	turnobject EVENT_OBJ_ID_PLAYER, 2
	end

EverGrandeCity_ChampionsRoom_MapScript2_228A14: @ 8228A14
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_ChampionsRoom_EventScript_228A1E
	.2byte 0

EverGrandeCity_ChampionsRoom_EventScript_228A1E:: @ 8228A1E
	lockall
	applymovement EVENT_OBJ_ID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_2725C1
	waitmovement 0
	delay 40
	applymovement EVENT_OBJ_ID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_228A42
	waitmovement 0
	setvar VAR_TEMP_1, 1
	goto EverGrandeCity_ChampionsRoom_EventScript_228A45
    releaseall
    end

EverGrandeCity_ChampionsRoom_Movement_228A42: @ 8228A42
	walk_up
	walk_up
	step_end

EverGrandeCity_ChampionsRoom_EventScript_228A45:: @ 8228A45
	playbgm MUS_DAIGO, 0
	msgbox EverGrandeCity_ChampionsRoom_Text_228C4C, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_WALLACE, EverGrandeCity_ChampionsRoom_Text_228EAC
	goto EverGrandeCity_ChampionsRoom_EventScript_228A61
	end

EverGrandeCity_ChampionsRoom_EventScript_228A61:: @ 8228A61
	playse SE_DOOR
	setmetatile 6, 1, METATILE_EliteFour_OpenDoorChampion_Frame, 0
	setmetatile 6, 2, METATILE_EliteFour_OpenDoorChampion_Opening, 0
	special DrawWholeMapView
	msgbox EverGrandeCity_ChampionsRoom_Text_228F66, MSGBOX_DEFAULT
	closemessage
	playse SE_DOOR
	checkplayergender
	compare VAR_RESULT, MALE
	call_if_eq EverGrandeCity_ChampionsRoom_EventScript_228ABC
	compare VAR_RESULT, FEMALE
	call_if_eq EverGrandeCity_ChampionsRoom_EventScript_228AC1
	addobject 2
	call EverGrandeCity_ChampionsRoom_EventScript_228BFD
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq EverGrandeCity_ChampionsRoom_EventScript_228AC6
	compare VAR_RESULT, FEMALE
	goto_if_eq EverGrandeCity_ChampionsRoom_EventScript_228AFB
	end

EverGrandeCity_ChampionsRoom_EventScript_228ABC:: @ 8228ABC
	playbgm MUS_GIRL_SUP, 0
	return

EverGrandeCity_ChampionsRoom_EventScript_228AC1:: @ 8228AC1
	playbgm MUS_BOY_SUP, 0
	return

EverGrandeCity_ChampionsRoom_EventScript_228AC6:: @ 8228AC6
	msgbox EverGrandeCity_ChampionsRoom_Text_2290CA, MSGBOX_DEFAULT
	delay 40
	playse SE_PIN
	applymovement 2, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 2, Common_Movement_Delay48
	waitmovement 0
	call EverGrandeCity_ChampionsRoom_EventScript_228C12
	msgbox EverGrandeCity_ChampionsRoom_Text_22910B, MSGBOX_DEFAULT
	goto EverGrandeCity_ChampionsRoom_EventScript_228B30
	end

EverGrandeCity_ChampionsRoom_EventScript_228AFB:: @ 8228AFB
	msgbox EverGrandeCity_ChampionsRoom_Text_229152, MSGBOX_DEFAULT
	delay 40
	playse SE_PIN
	applymovement 2, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 2, Common_Movement_Delay48
	waitmovement 0
	call EverGrandeCity_ChampionsRoom_EventScript_228C12
	msgbox EverGrandeCity_ChampionsRoom_Text_2291A2, MSGBOX_DEFAULT
	goto EverGrandeCity_ChampionsRoom_EventScript_228B30
	end

EverGrandeCity_ChampionsRoom_EventScript_228B30:: @ 8228B30
	closemessage
	addobject 3
	applymovement 3, EverGrandeCity_ChampionsRoom_Movement_228C43
	waitmovement 0
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_WalkInPlaceRight
	waitmovement 0
	msgbox EverGrandeCity_ChampionsRoom_Text_2291E6, MSGBOX_DEFAULT
	call EverGrandeCity_ChampionsRoom_EventScript_272184
	msgbox EverGrandeCity_ChampionsRoom_Text_22934D, MSGBOX_DEFAULT
	applymovement 1, Common_Movement_WalkInPlaceUp
	waitmovement 0
	delay 20
	applymovement 1, Common_Movement_WalkInPlaceDown
	waitmovement 0
	msgbox EverGrandeCity_ChampionsRoom_Text_229399, MSGBOX_DEFAULT
	closemessage
	delay 30
	applymovement 1, EverGrandeCity_ChampionsRoom_Movement_228C3B
	applymovement EVENT_OBJ_ID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_228C1D
	applymovement 3, Common_Movement_WalkInPlaceUp
	applymovement 2, EverGrandeCity_ChampionsRoom_Movement_228C38
	waitmovement 0
	delay 20
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_WalkInPlaceDown
	waitmovement 0
	msgbox EverGrandeCity_ChampionsRoom_Text_2293EB, MSGBOX_DEFAULT
	checkplayergender
	compare VAR_RESULT, MALE
	call_if_eq EverGrandeCity_ChampionsRoom_EventScript_228BEB
	compare VAR_RESULT, FEMALE
	call_if_eq EverGrandeCity_ChampionsRoom_EventScript_228BF4
	closemessage
	applymovement 1, EverGrandeCity_ChampionsRoom_Movement_228C3F
	applymovement EVENT_OBJ_ID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_228C20
	waitmovement 0
	setflag FLAG_HIDE_PETALBURG_GYM_GREETER
	warp MAP_EVER_GRANDE_CITY_HALL_OF_FAME, 255, 7, 16
	waitstate
	releaseall
	end

EverGrandeCity_ChampionsRoom_EventScript_228BEB:: @ 8228BEB
	msgbox EverGrandeCity_ChampionsRoom_Text_229479, MSGBOX_DEFAULT
	return

EverGrandeCity_ChampionsRoom_EventScript_228BF4:: @ 8228BF4
	msgbox EverGrandeCity_ChampionsRoom_Text_2294F5, MSGBOX_DEFAULT
	return

EverGrandeCity_ChampionsRoom_EventScript_228BFD:: @ 8228BFD
	applymovement 2, EverGrandeCity_ChampionsRoom_Movement_228C26
	waitmovement 0
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	return

EverGrandeCity_ChampionsRoom_EventScript_228C12:: @ 8228C12
	applymovement 2, EverGrandeCity_ChampionsRoom_Movement_228C2F
	waitmovement 0
	return

EverGrandeCity_ChampionsRoom_Movement_228C1D: @ 8228C1D
	walk_up
	walk_up
	step_end

EverGrandeCity_ChampionsRoom_Movement_228C20: @ 8228C20
	walk_up
	delay_16
	walk_up
	delay_8
	set_invisible
	step_end

EverGrandeCity_ChampionsRoom_Movement_228C26: @ 8228C26
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_up
	walk_in_place_fastest_right
	step_end

EverGrandeCity_ChampionsRoom_Movement_228C2F: @ 8228C2F
	walk_in_place_fastest_up
	delay_16
	walk_in_place_fastest_right
	delay_16
	walk_in_place_fastest_up
	delay_8
	walk_in_place_fastest_right
	delay_16
	step_end

EverGrandeCity_ChampionsRoom_Movement_228C38: @ 8228C38
	walk_right
	walk_up
	step_end

EverGrandeCity_ChampionsRoom_Movement_228C3B: @ 8228C3B
	walk_up
	walk_up
	walk_in_place_fastest_down
	step_end

EverGrandeCity_ChampionsRoom_Movement_228C3F: @ 8228C3F
	walk_up
	delay_8
	set_invisible
	step_end

EverGrandeCity_ChampionsRoom_Movement_228C43: @ 8228C43
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_up
	walk_in_place_fastest_left
	step_end

EverGrandeCity_ChampionsRoom_Text_228C4C: @ 8228C4C
	.i18n 2179

EverGrandeCity_ChampionsRoom_Text_228EAC: @ 8228EAC
	.i18n 2180

EverGrandeCity_ChampionsRoom_Text_228F66: @ 8228F66
	.i18n 2181

EverGrandeCity_ChampionsRoom_Text_2290CA: @ 82290CA
	.i18n 2182

EverGrandeCity_ChampionsRoom_Text_22910B: @ 822910B
	.i18n 2183

EverGrandeCity_ChampionsRoom_Text_229152: @ 8229152
	.i18n 2184

EverGrandeCity_ChampionsRoom_Text_2291A2: @ 82291A2
	.i18n 2185

EverGrandeCity_ChampionsRoom_Text_2291E6: @ 82291E6
	.i18n 2186

EverGrandeCity_ChampionsRoom_Text_22934D: @ 822934D
	.i18n 2187

EverGrandeCity_ChampionsRoom_Text_229399: @ 8229399
	.i18n 2188

EverGrandeCity_ChampionsRoom_Text_2293EB: @ 82293EB
	.i18n 2189

EverGrandeCity_ChampionsRoom_Text_229479: @ 8229479
	.i18n 2190

EverGrandeCity_ChampionsRoom_Text_2294F5: @ 82294F5
	.i18n 2191

