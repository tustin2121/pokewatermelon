Route111_Text_2762C9: @ 82762C9
	.i18n 5749

Route111_Text_27636E: @ 827636E
	.i18n 5750

Route111_Text_27655C: @ 827655C
	.i18n 5751

Route111_Text_27659D: @ 827659D
	.i18n 5752

Route111_EventScript_2765FF:: @ 82765FF
	lock
	faceplayer
	msgbox Route111_Text_2762C9, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq Route111_EventScript_27661E
	msgbox Route111_Text_27655C, MSGBOX_DEFAULT
	release
	end

Route111_EventScript_27661E:: @ 827661E
	giveitem_std ITEM_TM43
	compare VAR_RESULT, 0
	goto_if_eq Route111_EventScript_276680
	msgbox Route111_Text_27636E, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_RECEIVED_SECRET_POWER
	clearflag FLAG_HIDE_SLATEPORT_CITY_TM_SALESMAN
	compare VAR_FACING, 3
	call_if_eq Route111_EventScript_27666A
	compare VAR_FACING, 4
	call_if_eq Route111_EventScript_27666A
	compare VAR_FACING, 2
	call_if_eq Route111_EventScript_276675
	removeobject VAR_LAST_TALKED
	release
	end

Route111_EventScript_27666A:: @ 827666A
	applymovement VAR_LAST_TALKED, Route111_Movement_27668A
	waitmovement 0
	return

Route111_EventScript_276675:: @ 8276675
	applymovement VAR_LAST_TALKED, Route111_Movement_276696
	waitmovement 0
	return

Route111_EventScript_276680:: @ 8276680
	msgbox Route111_Text_27659D, MSGBOX_DEFAULT
	release
	end

Route111_Movement_27668A: @ 827668A
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	step_end

Route111_Movement_276696: @ 8276696
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	step_end
