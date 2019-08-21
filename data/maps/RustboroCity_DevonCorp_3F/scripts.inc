RustboroCity_DevonCorp_3F_MapScripts:: @ 821242D
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_3F_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, RustboroCity_DevonCorp_3F_MapScript2_212455
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_DevonCorp_3F_MapScript2_212464
	.byte 0

RustboroCity_DevonCorp_3F_OnTransition: @ 821243D
	compare VAR_DEVON_CORP_3F_STATE, 0
	call_if_eq RustboroCity_DevonCorp_3F_EventScript_212449
	end

RustboroCity_DevonCorp_3F_EventScript_212449:: @ 8212449
	setobjectxyperm 2, 3, 2
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_LEFT
	return

RustboroCity_DevonCorp_3F_MapScript2_212455: @ 8212455
	map_script_2 VAR_DEVON_CORP_3F_STATE, 0, RustboroCity_DevonCorp_3F_EventScript_21245F
	.2byte 0

RustboroCity_DevonCorp_3F_EventScript_21245F:: @ 821245F
	turnobject EVENT_OBJ_ID_PLAYER, 4
	end

RustboroCity_DevonCorp_3F_MapScript2_212464: @ 8212464
	map_script_2 VAR_DEVON_CORP_3F_STATE, 0, RustboroCity_DevonCorp_3F_EventScript_21246E
	.2byte 0

RustboroCity_DevonCorp_3F_EventScript_21246E:: @ 821246E
	lockall
	msgbox RustboroCity_DevonCorp_3F_Text_212C37, MSGBOX_DEFAULT
	closemessage
	applymovement 2, RustboroCity_DevonCorp_3F_Movement_212546
	waitmovement 0
	delay 80
	applymovement 2, RustboroCity_DevonCorp_3F_Movement_21254F
	waitmovement 0
	msgbox RustboroCity_DevonCorp_3F_Text_212DE8, MSGBOX_DEFAULT
	closemessage
	playbgm MUS_TSURETEK, 0
	applymovement 2, RustboroCity_DevonCorp_3F_Movement_212534
	applymovement EVENT_OBJ_ID_PLAYER, RustboroCity_DevonCorp_3F_Movement_212558
	waitmovement 0
	msgbox RustboroCity_DevonCorp_3F_Text_212E2F, MSGBOX_DEFAULT
	closemessage
	fadedefaultbgm
	applymovement 2, RustboroCity_DevonCorp_3F_Movement_212543
	applymovement EVENT_OBJ_ID_PLAYER, RustboroCity_DevonCorp_3F_Movement_212566
	waitmovement 0
	msgbox RustboroCity_DevonCorp_3F_Text_212609, MSGBOX_DEFAULT
	giveitem_std ITEM_LETTER
	msgbox RustboroCity_DevonCorp_3F_Text_21277C, MSGBOX_DEFAULT
	playfanfare MUS_FANFA4
	message RustboroCity_DevonCorp_3F_Text_212820
	waitfanfare
	setflag FLAG_SYS_POKENAV_GET
	setflag FLAG_RECEIVED_POKENAV
	setflag FLAG_HIDE_RUSTBORO_CITY_POKEMON_SCHOOL_SCOTT
	msgbox RustboroCity_DevonCorp_3F_Text_212837, MSGBOX_DEFAULT
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	msgbox RustboroCity_DevonCorp_3F_Text_2129D2, MSGBOX_DEFAULT
	setflag FLAG_HIDE_ROUTE_116_TUNNELER
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_LOVER_MAN
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_LOVER_WOMAN
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
	setvar VAR_BRINEY_LOCATION, 1
	clearflag FLAG_HIDE_RUSBORO_CITY_RIVAL
	setvar VAR_DEVON_CORP_3F_STATE, 1
	setvar VAR_RUSTBORO_CITY_STATE, 6
	releaseall
	end

RustboroCity_DevonCorp_3F_Movement_21252F: @ 821252F
	walk_up
	walk_up
	walk_up
	walk_in_place_fastest_left
	step_end

RustboroCity_DevonCorp_3F_Movement_212534: @ 8212534
	walk_right
	walk_right
	walk_right
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_in_place_fastest_left
	step_end

RustboroCity_DevonCorp_3F_Movement_212543: @ 8212543
	delay_16
	walk_in_place_fastest_down
	step_end

RustboroCity_DevonCorp_3F_Movement_212546: @ 8212546
	walk_right
	walk_right
	walk_right
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

RustboroCity_DevonCorp_3F_Movement_21254F: @ 821254F
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_left
	walk_left
	walk_left
	step_end

RustboroCity_DevonCorp_3F_Movement_212558: @ 8212558
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

RustboroCity_DevonCorp_3F_Movement_212566: @ 8212566
	delay_16
	delay_16
	walk_down
	walk_down
	walk_in_place_fastest_right
	step_end

RustboroCity_DevonCorp_3F_EventScript_21256C:: @ 821256C
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_EXP_SHARE, RustboroCity_DevonCorp_3F_EventScript_2125CC
	goto_if_set FLAG_DELIVERED_STEVEN_LETTER, RustboroCity_DevonCorp_3F_EventScript_212595
	msgbox RustboroCity_DevonCorp_3F_Text_212A09, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

RustboroCity_DevonCorp_3F_EventScript_212595:: @ 8212595
	msgbox RustboroCity_DevonCorp_3F_Text_212A29, MSGBOX_DEFAULT
	giveitem_std ITEM_EXP_SHARE
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_EXP_SHARE
	msgbox RustboroCity_DevonCorp_3F_Text_212A9E, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

RustboroCity_DevonCorp_3F_EventScript_2125CC:: @ 82125CC
	msgbox RustboroCity_DevonCorp_3F_Text_212B78, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

RustboroCity_DevonCorp_3F_EventScript_2125E1:: @ 82125E1
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_REPEAT_BALL, RustboroCity_DevonCorp_3F_EventScript_2125F6
	msgbox RustboroCity_DevonCorp_3F_Text_212E41, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_3F_EventScript_2125F6:: @ 82125F6
	msgbox RustboroCity_DevonCorp_3F_Text_212E88, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_3F_EventScript_212600:: @ 8212600
	msgbox RustboroCity_DevonCorp_3F_Text_212EE9, MSGBOX_SIGN
	end

RustboroCity_DevonCorp_3F_Text_212609: @ 8212609
	.i18n 4157

RustboroCity_DevonCorp_3F_Text_21277C: @ 821277C
	.i18n 4158

RustboroCity_DevonCorp_3F_Text_212820: @ 8212820
	.i18n 4159

RustboroCity_DevonCorp_3F_Text_212837: @ 8212837
	.i18n 4160

RustboroCity_DevonCorp_3F_Text_2129D2: @ 82129D2
	.i18n 4161

RustboroCity_DevonCorp_3F_Text_212A09: @ 8212A09
	.i18n 4162

RustboroCity_DevonCorp_3F_Text_212A29: @ 8212A29
	.i18n 4163

RustboroCity_DevonCorp_3F_Text_212A9E: @ 8212A9E
	.i18n 4164

RustboroCity_DevonCorp_3F_Text_212B78: @ 8212B78
	.i18n 4165

RustboroCity_DevonCorp_3F_Text_212C37: @ 8212C37
	.i18n 4166

RustboroCity_DevonCorp_3F_Text_212DE8: @ 8212DE8
	.i18n 4167

RustboroCity_DevonCorp_3F_Text_212E2F: @ 8212E2F
	.i18n 4168

RustboroCity_DevonCorp_3F_Text_212E41: @ 8212E41
	.i18n 4169

RustboroCity_DevonCorp_3F_Text_212E88: @ 8212E88
	.i18n 4170

RustboroCity_DevonCorp_3F_Text_212EE9: @ 8212EE9
	.i18n 4171

