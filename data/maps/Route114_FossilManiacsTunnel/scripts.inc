Route114_FossilManiacsTunnel_MapScripts:: @ 822AF28
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_FossilManiacsTunnel_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, Route114_FossilManiacsTunnel_MapScript1_22AF49
	.byte 0

Route114_FossilManiacsTunnel_OnTransition: @ 822AF33
	call_if_set FLAG_SYS_GAME_CLEAR, Route114_FossilManiacsTunnel_EventScript_22AF3D
	end

Route114_FossilManiacsTunnel_EventScript_22AF3D:: @ 822AF3D
	setobjectxyperm 1, 6, 5
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	return

Route114_FossilManiacsTunnel_MapScript1_22AF49: @ 822AF49
	call_if_unset FLAG_SYS_GAME_CLEAR, Route114_FossilManiacsTunnel_EventScript_22AF53
	end

Route114_FossilManiacsTunnel_EventScript_22AF53:: @ 822AF53
	setmetatile 6, 1, METATILE_Fallarbor_RedRockWall, 1
	setmetatile 6, 2, METATILE_Fallarbor_RedRockWall, 1
	return

Route114_FossilManiacsTunnel_EventScript_22AF66:: @ 822AF66
	lockall
	applymovement 1, Common_Movement_WalkInPlaceUp
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_WalkInPlaceDown
	waitmovement 0
	msgbox Route114_FossilManiacsTunnel_Text_22B1F7, MSGBOX_DEFAULT
	setvar VAR_FOSSIL_MANIAC_STATE, 2
	releaseall
	end

Route114_FossilManiacsTunnel_EventScript_22AF87:: @ 822AF87
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_REVIVED_FOSSIL_MON, Route114_FossilManiacsTunnel_EventScript_22AFC6
	checkitem ITEM_ROOT_FOSSIL, 1
	compare VAR_RESULT, 1
	goto_if_eq Route114_FossilManiacsTunnel_EventScript_22AFBC
	checkitem ITEM_CLAW_FOSSIL, 1
	compare VAR_RESULT, 1
	goto_if_eq Route114_FossilManiacsTunnel_EventScript_22AFBC
	msgbox Route114_FossilManiacsTunnel_Text_22AFD0, MSGBOX_DEFAULT
	release
	end

Route114_FossilManiacsTunnel_EventScript_22AFBC:: @ 822AFBC
	msgbox Route114_FossilManiacsTunnel_Text_22B0D6, MSGBOX_DEFAULT
	release
	end

Route114_FossilManiacsTunnel_EventScript_22AFC6:: @ 822AFC6
	msgbox Route114_FossilManiacsTunnel_Text_22B1CC, MSGBOX_DEFAULT
	release
	end

Route114_FossilManiacsTunnel_Text_22AFD0: @ 822AFD0
	.i18n 3932

Route114_FossilManiacsTunnel_Text_22B0D6: @ 822B0D6
	.i18n 3933

Route114_FossilManiacsTunnel_Text_22B1CC: @ 822B1CC
	.i18n 3934

Route114_FossilManiacsTunnel_Text_22B1F7: @ 822B1F7
	.i18n 3935

