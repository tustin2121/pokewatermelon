FortreeCity_House4_MapScripts:: @ 8217C80
	.byte 0

FortreeCity_House4_EventScript_217C81:: @ 8217C81
	msgbox FortreeCity_House4_Text_217D33, MSGBOX_NPC
	end

FortreeCity_House4_EventScript_217C8A:: @ 8217C8A
	lockall
	goto_if_set FLAG_RECEIVED_MENTAL_HERB, FortreeCity_House4_EventScript_217D06
	goto_if_set FLAG_WINGULL_DELIVERED_MAIL, FortreeCity_House4_EventScript_217CD8
	goto_if_set FLAG_WINGULL_SENT_ON_ERRAND, FortreeCity_House4_EventScript_217CC4
	msgbox FortreeCity_House4_Text_217DB9, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_WINGULL_SENT_ON_ERRAND
	clearflag FLAG_HIDE_MOSSDEEP_CITY_HOUSE_2_WINGULL
	applymovement 3, FortreeCity_House4_Movement_217D1A
	waitmovement 0
	removeobject 3
	releaseall
	end

FortreeCity_House4_EventScript_217CC4:: @ 8217CC4
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
	waitmovement 0
	msgbox FortreeCity_House4_Text_217DD2, MSGBOX_DEFAULT
	releaseall
	end

FortreeCity_House4_EventScript_217CD8:: @ 8217CD8
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
	waitmovement 0
	msgbox FortreeCity_House4_Text_217E05, MSGBOX_DEFAULT
	giveitem_std ITEM_MENTAL_HERB
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_MENTAL_HERB
	releaseall
	end

FortreeCity_House4_EventScript_217D06:: @ 8217D06
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
	waitmovement 0
	msgbox FortreeCity_House4_Text_217EA8, MSGBOX_DEFAULT
	releaseall
	end

FortreeCity_House4_Movement_217D1A: @ 8217D1A
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_in_place_fastest_down
	delay_8
	step_end

FortreeCity_House4_EventScript_217D20:: @ 8217D20
	lock
	faceplayer
	waitse
	playmoncry SPECIES_WINGULL, 0
	msgbox FortreeCity_House4_Text_217EE0, MSGBOX_DEFAULT
	waitmoncry
	release
	end

FortreeCity_House4_Text_217D33: @ 8217D33
	.i18n 2316

FortreeCity_House4_Text_217DB9: @ 8217DB9
	.i18n 2317

FortreeCity_House4_Text_217DD2: @ 8217DD2
	.i18n 2318

FortreeCity_House4_Text_217E05: @ 8217E05
	.i18n 2319

FortreeCity_House4_Text_217EA8: @ 8217EA8
	.i18n 2320

FortreeCity_House4_Text_217EE0: @ 8217EE0
	.i18n 2321

