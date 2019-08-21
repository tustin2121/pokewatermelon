Route114_FossilManiacsHouse_MapScripts:: @ 822AD30
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_FossilManiacsHouse_OnTransition
	.byte 0

Route114_FossilManiacsHouse_OnTransition: @ 822AD36
	setflag FLAG_LANDMARK_FOSSIL_MANIACS_HOUSE
	end

Route114_FossilManiacsHouse_EventScript_22AD3A:: @ 822AD3A
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TM28, Route114_FossilManiacsHouse_EventScript_22AD69
	msgbox Route114_FossilManiacsHouse_Text_22AD85, MSGBOX_DEFAULT
	giveitem_std ITEM_TM28
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_TM28
	release
	end

Route114_FossilManiacsHouse_EventScript_22AD69:: @ 822AD69
	msgbox Route114_FossilManiacsHouse_Text_22AE48, MSGBOX_DEFAULT
	release
	end

Route114_FossilManiacsHouse_EventScript_22AD73:: @ 822AD73
	msgbox Route114_FossilManiacsHouse_Text_22AE92, MSGBOX_SIGN
	end

Route114_FossilManiacsHouse_EventScript_22AD7C:: @ 822AD7C
	msgbox Route114_FossilManiacsHouse_Text_22AEC2, MSGBOX_SIGN
	end

Route114_FossilManiacsHouse_Text_22AD85: @ 822AD85
	.i18n 3928

Route114_FossilManiacsHouse_Text_22AE48: @ 822AE48
	.i18n 3929

Route114_FossilManiacsHouse_Text_22AE92: @ 822AE92
	.i18n 3930

Route114_FossilManiacsHouse_Text_22AEC2: @ 822AEC2
	.i18n 3931

