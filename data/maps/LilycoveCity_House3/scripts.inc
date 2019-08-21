LilycoveCity_House3_MapScripts:: @ 821EE3C
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_House3_OnTransition
	.byte 0

LilycoveCity_House3_OnTransition: @ 821EE42
	random 4
	copyvar VAR_TEMP_1, VAR_RESULT
	end

LilycoveCity_House3_EventScript_21EE4B:: @ 821EE4B
	lock
	faceplayer
	msgbox LilycoveCity_House3_Text_21EF99, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_House3_EventScript_21EE75
	msgbox LilycoveCity_House3_Text_21F0F8, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_House3_EventScript_21EE75:: @ 821EE75
	msgbox LilycoveCity_House3_Text_21F0A9, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_House3_EventScript_21EE8A:: @ 821EE8A
	lock
	faceplayer
	msgbox LilycoveCity_House3_Text_21F430, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_House3_EventScript_21EEA1:: @ 821EEA1
	lock
	faceplayer
	switch VAR_TEMP_1
	case 0, LilycoveCity_House3_EventScript_21EF71
	case 1, LilycoveCity_House3_EventScript_21EF7B
	case 2, LilycoveCity_House3_EventScript_21EF85
	case 3, LilycoveCity_House3_EventScript_21EF8F
	end

LilycoveCity_House3_EventScript_21EED5:: @ 821EED5
	lock
	faceplayer
	switch VAR_TEMP_1
	case 0, LilycoveCity_House3_EventScript_21EF71
	case 1, LilycoveCity_House3_EventScript_21EF7B
	case 2, LilycoveCity_House3_EventScript_21EF85
	case 3, LilycoveCity_House3_EventScript_21EF8F
	end

LilycoveCity_House3_EventScript_21EF09:: @ 821EF09
	lock
	faceplayer
	switch VAR_TEMP_1
	case 0, LilycoveCity_House3_EventScript_21EF71
	case 1, LilycoveCity_House3_EventScript_21EF7B
	case 2, LilycoveCity_House3_EventScript_21EF85
	case 3, LilycoveCity_House3_EventScript_21EF8F
	end

LilycoveCity_House3_EventScript_21EF3D:: @ 821EF3D
	lock
	faceplayer
	switch VAR_TEMP_1
	case 0, LilycoveCity_House3_EventScript_21EF71
	case 1, LilycoveCity_House3_EventScript_21EF7B
	case 2, LilycoveCity_House3_EventScript_21EF85
	case 3, LilycoveCity_House3_EventScript_21EF8F
	end

LilycoveCity_House3_EventScript_21EF71:: @ 821EF71
	msgbox LilycoveCity_House3_Text_21F4A7, MSGBOX_DEFAULT
	release
	end

LilycoveCity_House3_EventScript_21EF7B:: @ 821EF7B
	msgbox LilycoveCity_House3_Text_21F4E0, MSGBOX_DEFAULT
	release
	end

LilycoveCity_House3_EventScript_21EF85:: @ 821EF85
	msgbox LilycoveCity_House3_Text_21F523, MSGBOX_DEFAULT
	release
	end

LilycoveCity_House3_EventScript_21EF8F:: @ 821EF8F
	msgbox LilycoveCity_House3_Text_21F55A, MSGBOX_DEFAULT
	release
	end

LilycoveCity_House3_Text_21EF99: @ 821EF99
	.i18n 2603

LilycoveCity_House3_Text_21F0A9: @ 821F0A9
	.i18n 2604

LilycoveCity_House3_Text_21F0F8: @ 821F0F8
	.i18n 2605

LilycoveCity_House3_Text_21F430: @ 821F430
	.i18n 2606

LilycoveCity_House3_Text_21F4A7: @ 821F4A7
	.i18n 2607

LilycoveCity_House3_Text_21F4E0: @ 821F4E0
	.i18n 2608

LilycoveCity_House3_Text_21F523: @ 821F523
	.i18n 2609

LilycoveCity_House3_Text_21F55A: @ 821F55A
	.i18n 2610

