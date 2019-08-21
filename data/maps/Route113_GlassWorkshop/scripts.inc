Route113_GlassWorkshop_MapScripts:: @ 826ED03
	map_script MAP_SCRIPT_ON_TRANSITION, Route113_GlassWorkshop_OnTransition
	.byte 0

Route113_GlassWorkshop_OnTransition: @ 826ED09
	setflag FLAG_LANDMARK_GLASS_WORKSHOP
	compare VAR_GLASS_WORKSHOP_STATE, 1
	call_if_eq Route113_GlassWorkshop_EventScript_26ED18
	end

Route113_GlassWorkshop_EventScript_26ED18:: @ 826ED18
	setvar VAR_GLASS_WORKSHOP_STATE, 2
	return

Route113_GlassWorkshop_EventScript_26ED1E:: @ 826ED1E
	lock
	faceplayer
	compare VAR_GLASS_WORKSHOP_STATE, 10
	goto_if_ge Route113_GlassWorkshop_EventScript_26F090
	compare VAR_GLASS_WORKSHOP_STATE, 2
	goto_if_eq Route113_GlassWorkshop_EventScript_26ED6E
	compare VAR_GLASS_WORKSHOP_STATE, 1
	goto_if_eq Route113_GlassWorkshop_EventScript_26ED64
	msgbox Route113_GlassWorkshop_Text_26F19D, MSGBOX_DEFAULT
	giveitem_std ITEM_SOOT_SACK
	setvar VAR_GLASS_WORKSHOP_STATE, 1
	msgbox Route113_GlassWorkshop_Text_26F252, MSGBOX_DEFAULT
	release
	end

Route113_GlassWorkshop_EventScript_26ED64:: @ 826ED64
	msgbox Route113_GlassWorkshop_Text_26F252, MSGBOX_DEFAULT
	release
	end

Route113_GlassWorkshop_EventScript_26ED6E:: @ 826ED6E
	checkitem ITEM_SOOT_SACK, 1
	compare VAR_RESULT, 0
	goto_if_eq Route113_GlassWorkshop_EventScript_26ED9D
	msgbox Route113_GlassWorkshop_Text_26F312, MSGBOX_DEFAULT
	compare VAR_ASH_GATHER_COUNT, 250
	goto_if_lt Route113_GlassWorkshop_EventScript_26EFD6
	message Route113_GlassWorkshop_Text_26F40A
	waitmessage
	goto Route113_GlassWorkshop_EventScript_26EDA7
	end

Route113_GlassWorkshop_EventScript_26ED9D:: @ 826ED9D
	msgbox Route113_GlassWorkshop_Text_26F772, MSGBOX_DEFAULT
	release
	end

Route113_GlassWorkshop_EventScript_26EDA7:: @ 826EDA7
	setvar VAR_0x8009, 0
	setvar VAR_0x8004, 1
	special sub_813A128
	waitstate
	switch VAR_RESULT
	case 0, Route113_GlassWorkshop_EventScript_26EE1E
	case 1, Route113_GlassWorkshop_EventScript_26EE5A
	case 2, Route113_GlassWorkshop_EventScript_26EE96
	case 3, Route113_GlassWorkshop_EventScript_26EED2
	case 4, Route113_GlassWorkshop_EventScript_26EF0E
	case 5, Route113_GlassWorkshop_EventScript_26EF4A
	case 6, Route113_GlassWorkshop_EventScript_26EF8B
	case 7, Route113_GlassWorkshop_EventScript_26EFCC
	case 127, Route113_GlassWorkshop_EventScript_26EFCC
	end

Route113_GlassWorkshop_EventScript_26EE1E:: @ 826EE1E
	setvar VAR_0x8008, 39
	bufferitemname 0, VAR_0x8008
	setvar VAR_0x800A, 250
	compare VAR_ASH_GATHER_COUNT, 250
	goto_if_lt Route113_GlassWorkshop_EventScript_26EFEE
	msgbox Route113_GlassWorkshop_Text_26F480, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq Route113_GlassWorkshop_EventScript_26F003
	setvar VAR_GLASS_WORKSHOP_STATE, 10
	subvar VAR_ASH_GATHER_COUNT, 250
	goto Route113_GlassWorkshop_EventScript_26F00F
	end

Route113_GlassWorkshop_EventScript_26EE5A:: @ 826EE5A
	setvar VAR_0x8008, 40
	bufferitemname 0, VAR_0x8008
	setvar VAR_0x800A, 500
	compare VAR_ASH_GATHER_COUNT, 500
	goto_if_lt Route113_GlassWorkshop_EventScript_26EFEE
	msgbox Route113_GlassWorkshop_Text_26F480, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq Route113_GlassWorkshop_EventScript_26F003
	setvar VAR_GLASS_WORKSHOP_STATE, 11
	subvar VAR_ASH_GATHER_COUNT, 500
	goto Route113_GlassWorkshop_EventScript_26F00F
	end

Route113_GlassWorkshop_EventScript_26EE96:: @ 826EE96
	setvar VAR_0x8008, 41
	bufferitemname 0, VAR_0x8008
	setvar VAR_0x800A, 500
	compare VAR_ASH_GATHER_COUNT, 500
	goto_if_lt Route113_GlassWorkshop_EventScript_26EFEE
	msgbox Route113_GlassWorkshop_Text_26F480, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq Route113_GlassWorkshop_EventScript_26F003
	setvar VAR_GLASS_WORKSHOP_STATE, 12
	subvar VAR_ASH_GATHER_COUNT, 500
	goto Route113_GlassWorkshop_EventScript_26F00F
	end

Route113_GlassWorkshop_EventScript_26EED2:: @ 826EED2
	setvar VAR_0x8008, 43
	bufferitemname 0, VAR_0x8008
	setvar VAR_0x800A, 1000
	compare VAR_ASH_GATHER_COUNT, 1000
	goto_if_lt Route113_GlassWorkshop_EventScript_26EFEE
	msgbox Route113_GlassWorkshop_Text_26F480, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq Route113_GlassWorkshop_EventScript_26F003
	setvar VAR_GLASS_WORKSHOP_STATE, 13
	subvar VAR_ASH_GATHER_COUNT, 1000
	goto Route113_GlassWorkshop_EventScript_26F00F
	end

Route113_GlassWorkshop_EventScript_26EF0E:: @ 826EF0E
	setvar VAR_0x8008, 42
	bufferitemname 0, VAR_0x8008
	setvar VAR_0x800A, 1000
	compare VAR_ASH_GATHER_COUNT, 1000
	goto_if_lt Route113_GlassWorkshop_EventScript_26EFEE
	msgbox Route113_GlassWorkshop_Text_26F480, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq Route113_GlassWorkshop_EventScript_26F003
	setvar VAR_GLASS_WORKSHOP_STATE, 14
	subvar VAR_ASH_GATHER_COUNT, 1000
	goto Route113_GlassWorkshop_EventScript_26F00F
	end

Route113_GlassWorkshop_EventScript_26EF4A:: @ 826EF4A
	setvar VAR_0x8009, 1
	setvar VAR_0x8008, 13
	bufferdecorationname 0, VAR_0x8008
	setvar VAR_0x800A, 6000
	compare VAR_ASH_GATHER_COUNT, 6000
	goto_if_lt Route113_GlassWorkshop_EventScript_26EFEE
	msgbox Route113_GlassWorkshop_Text_26F480, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq Route113_GlassWorkshop_EventScript_26F003
	setvar VAR_GLASS_WORKSHOP_STATE, 15
	subvar VAR_ASH_GATHER_COUNT, 6000
	goto Route113_GlassWorkshop_EventScript_26F00F
	end

Route113_GlassWorkshop_EventScript_26EF8B:: @ 826EF8B
	setvar VAR_0x8009, 1
	setvar VAR_0x8008, 6
	bufferdecorationname 0, VAR_0x8008
	setvar VAR_0x800A, 8000
	compare VAR_ASH_GATHER_COUNT, 8000
	goto_if_lt Route113_GlassWorkshop_EventScript_26EFEE
	msgbox Route113_GlassWorkshop_Text_26F480, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq Route113_GlassWorkshop_EventScript_26F003
	setvar VAR_GLASS_WORKSHOP_STATE, 16
	subvar VAR_ASH_GATHER_COUNT, 8000
	goto Route113_GlassWorkshop_EventScript_26F00F
	end

Route113_GlassWorkshop_EventScript_26EFCC:: @ 826EFCC
	msgbox Route113_GlassWorkshop_Text_26F641, MSGBOX_DEFAULT
	release
	end

Route113_GlassWorkshop_EventScript_26EFD6:: @ 826EFD6
	setvar VAR_0x800A, 250
	subvar VAR_0x800A, 16456
	buffernumberstring 0, VAR_0x800A
	msgbox Route113_GlassWorkshop_Text_26F34E, MSGBOX_DEFAULT
	release
	end

Route113_GlassWorkshop_EventScript_26EFEE:: @ 826EFEE
	subvar VAR_0x800A, 16456
	buffernumberstring 1, VAR_0x800A
	message Route113_GlassWorkshop_Text_26F543
	waitmessage
	goto Route113_GlassWorkshop_EventScript_26EDA7
	end

Route113_GlassWorkshop_EventScript_26F003:: @ 826F003
	message Route113_GlassWorkshop_Text_26F4B5
	waitmessage
	goto Route113_GlassWorkshop_EventScript_26EDA7
	end

Route113_GlassWorkshop_EventScript_26F00F:: @ 826F00F
	msgbox Route113_GlassWorkshop_Text_26F4DA, MSGBOX_DEFAULT
	closemessage
	fadescreen 1
	playse SE_SELECT
	delay 30
	fadescreen 0
	msgbox Route113_GlassWorkshop_Text_26F688, MSGBOX_DEFAULT
	compare VAR_0x8009, 0
	call_if_eq Route113_GlassWorkshop_EventScript_26F047
	compare VAR_0x8009, 1
	call_if_eq Route113_GlassWorkshop_EventScript_26F05F
	setvar VAR_GLASS_WORKSHOP_STATE, 2
	release
	end

Route113_GlassWorkshop_EventScript_26F047:: @ 826F047
	giveitem_std VAR_0x8008
	compare VAR_RESULT, 0
	goto_if_eq Route113_GlassWorkshop_EventScript_26F072
	return

Route113_GlassWorkshop_EventScript_26F05F:: @ 826F05F
	givedecoration_std VAR_0x8008
	compare VAR_RESULT, 0
	goto_if_eq Route113_GlassWorkshop_EventScript_26F081
	return

Route113_GlassWorkshop_EventScript_26F072:: @ 826F072
	call Common_EventScript_BagIsFull
	msgbox Route113_GlassWorkshop_Text_26F6B7, MSGBOX_DEFAULT
	release
	end

Route113_GlassWorkshop_EventScript_26F081:: @ 826F081
	call Common_EventScript_NoRoomLeftForAnother
	msgbox Route113_GlassWorkshop_Text_26F715, MSGBOX_DEFAULT
	release
	end

Route113_GlassWorkshop_EventScript_26F090:: @ 826F090
	switch VAR_GLASS_WORKSHOP_STATE
	case 10, Route113_GlassWorkshop_EventScript_26F0E3
	case 11, Route113_GlassWorkshop_EventScript_26F0F7
	case 12, Route113_GlassWorkshop_EventScript_26F10B
	case 13, Route113_GlassWorkshop_EventScript_26F11F
	case 14, Route113_GlassWorkshop_EventScript_26F133
	case 15, Route113_GlassWorkshop_EventScript_26F147
	case 16, Route113_GlassWorkshop_EventScript_26F15B
	end

Route113_GlassWorkshop_EventScript_26F0E3:: @ 826F0E3
	setvar VAR_0x8009, 0
	setvar VAR_0x8008, 39
	bufferitemname 0, VAR_0x8008
	goto Route113_GlassWorkshop_EventScript_26F16F
	end

Route113_GlassWorkshop_EventScript_26F0F7:: @ 826F0F7
	setvar VAR_0x8009, 0
	setvar VAR_0x8008, 40
	bufferitemname 0, VAR_0x8008
	goto Route113_GlassWorkshop_EventScript_26F16F
	end

Route113_GlassWorkshop_EventScript_26F10B:: @ 826F10B
	setvar VAR_0x8009, 0
	setvar VAR_0x8008, 41
	bufferitemname 0, VAR_0x8008
	goto Route113_GlassWorkshop_EventScript_26F16F
	end

Route113_GlassWorkshop_EventScript_26F11F:: @ 826F11F
	setvar VAR_0x8009, 0
	setvar VAR_0x8008, 43
	bufferitemname 0, VAR_0x8008
	goto Route113_GlassWorkshop_EventScript_26F16F
	end

Route113_GlassWorkshop_EventScript_26F133:: @ 826F133
	setvar VAR_0x8009, 0
	setvar VAR_0x8008, 42
	bufferitemname 0, VAR_0x8008
	goto Route113_GlassWorkshop_EventScript_26F16F
	end

Route113_GlassWorkshop_EventScript_26F147:: @ 826F147
	setvar VAR_0x8009, 1
	setvar VAR_0x8008, 13
	bufferdecorationname 0, 13
	goto Route113_GlassWorkshop_EventScript_26F16F
	end

Route113_GlassWorkshop_EventScript_26F15B:: @ 826F15B
	setvar VAR_0x8009, 1
	setvar VAR_0x8008, 6
	bufferdecorationname 0, 6
	goto Route113_GlassWorkshop_EventScript_26F16F
	end

Route113_GlassWorkshop_EventScript_26F16F:: @ 826F16F
	msgbox Route113_GlassWorkshop_Text_26F688, MSGBOX_DEFAULT
	compare VAR_0x8009, 0
	call_if_eq Route113_GlassWorkshop_EventScript_26F047
	compare VAR_0x8009, 1
	call_if_eq Route113_GlassWorkshop_EventScript_26F05F
	setvar VAR_GLASS_WORKSHOP_STATE, 2
	release
	end

Route113_GlassWorkshop_EventScript_26F194:: @ 826F194
	msgbox Route113_GlassWorkshop_Text_26F7EC, MSGBOX_NPC
	end

Route113_GlassWorkshop_Text_26F19D: @ 826F19D
	.i18n 3907

Route113_GlassWorkshop_Text_26F252: @ 826F252
	.i18n 3908

Route113_GlassWorkshop_Text_26F312: @ 826F312
	.i18n 3909

Route113_GlassWorkshop_Text_26F34E: @ 826F34E
	.i18n 3910

Route113_GlassWorkshop_Text_26F40A: @ 826F40A
	.i18n 3911

Route113_GlassWorkshop_Text_26F480: @ 826F480
	.i18n 3912

Route113_GlassWorkshop_Text_26F4B5: @ 826F4B5
	.i18n 3913

Route113_GlassWorkshop_Text_26F4DA: @ 826F4DA
	.i18n 3914

Route113_GlassWorkshop_Text_26F543: @ 826F543
	.i18n 3915

Route113_GlassWorkshop_Text_26F641: @ 826F641
	.i18n 3916

Route113_GlassWorkshop_Text_26F688: @ 826F688
	.i18n 3917

Route113_GlassWorkshop_Text_26F6B7: @ 826F6B7
	.i18n 3918

Route113_GlassWorkshop_Text_26F715: @ 826F715
	.i18n 3919

Route113_GlassWorkshop_Text_26F772: @ 826F772
	.i18n 3920

Route113_GlassWorkshop_Text_26F7EC: @ 826F7EC
	.i18n 3921

