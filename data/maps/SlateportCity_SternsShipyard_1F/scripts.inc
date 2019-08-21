SlateportCity_SternsShipyard_1F_MapScripts:: @ 8207F3F
	.byte 0

SlateportCity_SternsShipyard_1F_EventScript_207F40:: @ 8207F40
	lockall
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_SternsShipyard_1F_EventScript_207F92
	goto_if_set FLAG_BADGE07_GET, SlateportCity_SternsShipyard_1F_EventScript_207FA6
	goto_if_set FLAG_DELIVERED_DEVON_GOODS, SlateportCity_SternsShipyard_1F_EventScript_207FD9
	goto_if_set FLAG_DOCK_REJECTED_DEVON_GOODS, SlateportCity_SternsShipyard_1F_EventScript_207FBA
	msgbox SlateportCity_SternsShipyard_1F_Text_208008, MSGBOX_DEFAULT
	applymovement 1, Common_Movement_FacePlayer
	waitmovement 0
	msgbox SlateportCity_SternsShipyard_1F_Text_2080A5, MSGBOX_DEFAULT
	closemessage
	applymovement 1, Common_Movement_FaceOriginalDirection
	waitmovement 0
	setflag FLAG_DOCK_REJECTED_DEVON_GOODS
	setflag FLAG_HIDE_SLATEPORT_CITY_TEAM_AQUA
	releaseall
	end

SlateportCity_SternsShipyard_1F_EventScript_207F92:: @ 8207F92
	applymovement 1, Common_Movement_FacePlayer
	waitmovement 0
	msgbox SlateportCity_SternsShipyard_1F_Text_208323, MSGBOX_DEFAULT
	releaseall
	end

SlateportCity_SternsShipyard_1F_EventScript_207FA6:: @ 8207FA6
	applymovement 1, Common_Movement_FacePlayer
	waitmovement 0
	msgbox SlateportCity_SternsShipyard_1F_Text_2082A8, MSGBOX_DEFAULT
	releaseall
	end

SlateportCity_SternsShipyard_1F_EventScript_207FBA:: @ 8207FBA
	applymovement 1, Common_Movement_FacePlayer
	waitmovement 0
	msgbox SlateportCity_SternsShipyard_1F_Text_2081A5, MSGBOX_DEFAULT
	closemessage
	applymovement 1, Common_Movement_FaceOriginalDirection
	waitmovement 0
	releaseall
	end

SlateportCity_SternsShipyard_1F_EventScript_207FD9:: @ 8207FD9
	applymovement 1, Common_Movement_FacePlayer
	waitmovement 0
	msgbox SlateportCity_SternsShipyard_1F_Text_208213, MSGBOX_DEFAULT
	releaseall
	end

SlateportCity_SternsShipyard_1F_EventScript_207FED:: @ 8207FED
	msgbox SlateportCity_SternsShipyard_1F_Text_208558, MSGBOX_NPC
	end

SlateportCity_SternsShipyard_1F_EventScript_207FF6:: @ 8207FF6
	msgbox SlateportCity_SternsShipyard_1F_Text_2085FF, MSGBOX_NPC
	end

SlateportCity_SternsShipyard_1F_EventScript_207FFF:: @ 8207FFF
	msgbox SlateportCity_SternsShipyard_1F_Text_2083EE, MSGBOX_NPC
	end

SlateportCity_SternsShipyard_1F_Text_208008: @ 8208008
	.i18n 4576

SlateportCity_SternsShipyard_1F_Text_2080A5: @ 82080A5
	.i18n 4577

SlateportCity_SternsShipyard_1F_Text_2081A5: @ 82081A5
	.i18n 4578

SlateportCity_SternsShipyard_1F_Text_208213: @ 8208213
	.i18n 4579

SlateportCity_SternsShipyard_1F_Text_2082A8: @ 82082A8
	.i18n 4580

SlateportCity_SternsShipyard_1F_Text_208323: @ 8208323
	.i18n 4581

SlateportCity_SternsShipyard_1F_Text_2083EE: @ 82083EE
	.i18n 4582

SlateportCity_SternsShipyard_1F_Text_208558: @ 8208558
	.i18n 4583

SlateportCity_SternsShipyard_1F_Text_2085FF: @ 82085FF
	.i18n 4584

