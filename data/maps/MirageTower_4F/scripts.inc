MirageTower_4F_MapScripts:: @ 823AD47
	.byte 0

MirageTower_4F_EventScript_23AD48:: @ 823AD48
	lock
	faceplayer
	msgbox MirageTower_4F_Text_23ADF9, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq MirageTower_4F_EventScript_23AD7F
	giveitem_std ITEM_ROOT_FOSSIL
	closemessage
	setflag FLAG_HIDE_MIRAGE_TOWER_ROOT_FOSSIL
	setflag FLAG_HIDE_MIRAGE_TOWER_CLAW_FOSSIL
	removeobject 1
	delay 30
	setflag FLAG_CHOSE_CLAW_FOSSIL
	goto MirageTower_4F_EventScript_23ADCA
	end

MirageTower_4F_EventScript_23AD7F:: @ 823AD7F
	msgbox MirageTower_4F_Text_23AE79, MSGBOX_DEFAULT
	release
	end

MirageTower_4F_EventScript_23AD89:: @ 823AD89
	lock
	faceplayer
	msgbox MirageTower_4F_Text_23AE98, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq MirageTower_4F_EventScript_23ADC0
	giveitem_std ITEM_CLAW_FOSSIL
	closemessage
	setflag FLAG_HIDE_MIRAGE_TOWER_CLAW_FOSSIL
	setflag FLAG_HIDE_MIRAGE_TOWER_ROOT_FOSSIL
	removeobject 2
	delay 30
	setflag FLAG_CHOSE_ROOT_FOSSIL
	goto MirageTower_4F_EventScript_23ADCA
	end

MirageTower_4F_EventScript_23ADC0:: @ 823ADC0
	msgbox MirageTower_4F_Text_23AF18, MSGBOX_DEFAULT
	release
	end

MirageTower_4F_EventScript_23ADCA:: @ 823ADCA
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 32
	setvar VAR_0x8007, 2
	special sub_8139560
	waitstate
	special DoMirageTowerCeilingCrumble
	waitstate
	setvar VAR_MIRAGE_TOWER_STATE, 1
	clearflag FLAG_LANDMARK_MIRAGE_TOWER
	warp MAP_ROUTE111, 255, 19, 59
	waitstate
	release
	end

MirageTower_4F_Text_23ADF9: @ 823ADF9
	.i18n 3049

MirageTower_4F_Text_23AE79: @ 823AE79
	.i18n 3050

MirageTower_4F_Text_23AE98: @ 823AE98
	.i18n 3051

MirageTower_4F_Text_23AF18: @ 823AF18
	.i18n 3052

