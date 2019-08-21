Route109_SeashoreHouse_MapScripts:: @ 82693F4
	map_script MAP_SCRIPT_ON_TRANSITION, Route109_SeashoreHouse_OnTransition
	.byte 0

Route109_SeashoreHouse_OnTransition: @ 82693FA
	setflag FLAG_LANDMARK_SEASHORE_HOUSE
	end

Route109_SeashoreHouse_EventScript_2693FE:: @ 82693FE
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_6_SODA_POP, Route109_SeashoreHouse_EventScript_269460
	goto_if_set FLAG_DEFEATED_SEASHORE_HOUSE, Route109_SeashoreHouse_EventScript_269432
	goto_if_set FLAG_TEMP_2, Route109_SeashoreHouse_EventScript_269428
	msgbox Route109_SeashoreHouse_Text_269555, MSGBOX_DEFAULT
	setflag FLAG_TEMP_2
	release
	end

Route109_SeashoreHouse_EventScript_269428:: @ 8269428
	msgbox Route109_SeashoreHouse_Text_269635, MSGBOX_DEFAULT
	release
	end

Route109_SeashoreHouse_EventScript_269432:: @ 8269432
	msgbox Route109_SeashoreHouse_Text_269685, MSGBOX_DEFAULT
	giveitem_std ITEM_SODA_POP, 6
	compare VAR_RESULT, 0
	goto_if_eq Route109_SeashoreHouse_EventScript_269456
	setflag FLAG_RECEIVED_6_SODA_POP
	release
	end

Route109_SeashoreHouse_EventScript_269456:: @ 8269456
	msgbox Route109_SeashoreHouse_Text_26973A, MSGBOX_DEFAULT
	release
	end

Route109_SeashoreHouse_EventScript_269460:: @ 8269460
	showmoneybox 0, 0, 0
	msgbox Route109_SeashoreHouse_Text_26977E, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq Route109_SeashoreHouse_EventScript_269484
	msgbox Route109_SeashoreHouse_Text_2697EF, MSGBOX_DEFAULT
	hidemoneybox
	nop
	nop
	release
	end

Route109_SeashoreHouse_EventScript_269484:: @ 8269484
	checkmoney 0x12c, 0
	compare VAR_RESULT, 0
	goto_if_eq Route109_SeashoreHouse_EventScript_2694C8
	checkitemspace ITEM_SODA_POP, 1
	compare VAR_RESULT, 0
	goto_if_eq Route109_SeashoreHouse_EventScript_2694D5
	msgbox Route109_SeashoreHouse_Text_2697C8, MSGBOX_DEFAULT
	takemoney 0x12c, 0
	updatemoneybox 0, 0
	giveitem_std ITEM_SODA_POP
	hidemoneybox
	nop
	nop
	release
	end

Route109_SeashoreHouse_EventScript_2694C8:: @ 82694C8
	msgbox Route109_SeashoreHouse_Text_2697D5, MSGBOX_DEFAULT
	hidemoneybox
	nop
	nop
	release
	end

Route109_SeashoreHouse_EventScript_2694D5:: @ 82694D5
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
	hidemoneybox
	nop
	nop
	release
	end

Route109_SeashoreHouse_EventScript_2694E2:: @ 82694E2
	trainerbattle_single TRAINER_DWAYNE, Route109_SeashoreHouse_Text_269803, Route109_SeashoreHouse_Text_269867, Route109_SeashoreHouse_EventScript_269533
	msgbox Route109_SeashoreHouse_Text_26989D, MSGBOX_AUTOCLOSE
	end

Route109_SeashoreHouse_EventScript_2694FD:: @ 82694FD
	trainerbattle_single TRAINER_JOHANNA, Route109_SeashoreHouse_Text_2698E3, Route109_SeashoreHouse_Text_269947, Route109_SeashoreHouse_EventScript_269533
	msgbox Route109_SeashoreHouse_Text_269953, MSGBOX_AUTOCLOSE
	end

Route109_SeashoreHouse_EventScript_269518:: @ 8269518
	trainerbattle_single TRAINER_SIMON, Route109_SeashoreHouse_Text_269986, Route109_SeashoreHouse_Text_2699C5, Route109_SeashoreHouse_EventScript_269533
	msgbox Route109_SeashoreHouse_Text_2699DF, MSGBOX_AUTOCLOSE
	end

Route109_SeashoreHouse_EventScript_269533:: @ 8269533
	checktrainerflag TRAINER_DWAYNE
	goto_if_lt Route109_SeashoreHouse_EventScript_269553
	checktrainerflag TRAINER_JOHANNA
	goto_if_lt Route109_SeashoreHouse_EventScript_269553
	checktrainerflag TRAINER_SIMON
	goto_if_lt Route109_SeashoreHouse_EventScript_269553
	setflag FLAG_DEFEATED_SEASHORE_HOUSE
	release
	end

Route109_SeashoreHouse_EventScript_269553:: @ 8269553
	release
	end

Route109_SeashoreHouse_Text_269555: @ 8269555
	.i18n 3640

Route109_SeashoreHouse_Text_269635: @ 8269635
	.i18n 3641

Route109_SeashoreHouse_Text_269685: @ 8269685
	.i18n 3642

Route109_SeashoreHouse_Text_26973A: @ 826973A
	.i18n 3643

Route109_SeashoreHouse_Text_26977E: @ 826977E
	.i18n 3644

Route109_SeashoreHouse_Text_2697C8: @ 82697C8
	.i18n 3645

Route109_SeashoreHouse_Text_2697D5: @ 82697D5
	.i18n 3646

Route109_SeashoreHouse_Text_2697EF: @ 82697EF
	.i18n 3647

Route109_SeashoreHouse_Text_269803: @ 8269803
	.i18n 3648

Route109_SeashoreHouse_Text_269867: @ 8269867
	.i18n 3649

Route109_SeashoreHouse_Text_26989D: @ 826989D
	.i18n 3650

Route109_SeashoreHouse_Text_2698E3: @ 82698E3
	.i18n 3651

Route109_SeashoreHouse_Text_269947: @ 8269947
	.i18n 3652

Route109_SeashoreHouse_Text_269953: @ 8269953
	.i18n 3653

Route109_SeashoreHouse_Text_269986: @ 8269986
	.i18n 3654

Route109_SeashoreHouse_Text_2699C5: @ 82699C5
	.i18n 3655

Route109_SeashoreHouse_Text_2699DF: @ 82699DF
	.i18n 3656

