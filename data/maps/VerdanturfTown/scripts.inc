VerdanturfTown_MapScripts:: @ 81EB566
	map_script MAP_SCRIPT_ON_TRANSITION, VerdanturfTown_OnTransition
	.byte 0

VerdanturfTown_OnTransition: @ 81EB56C
	setflag FLAG_VISITED_VERDANTURF_TOWN
	setvar VAR_LINK_CONTEST_ROOM_STATE, 0
	end

VerdanturfTown_EventScript_1EB575:: @ 81EB575
	lock
	faceplayer
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_EventScript_1EB594
	msgbox VerdanturfTown_Text_1EB5FD, MSGBOX_DEFAULT
	applymovement 2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

VerdanturfTown_EventScript_1EB594:: @ 81EB594
	msgbox VerdanturfTown_Text_1EB6E0, MSGBOX_DEFAULT
	applymovement 2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

VerdanturfTown_EventScript_1EB5A8:: @ 81EB5A8
	msgbox VerdanturfTown_Text_1EB736, MSGBOX_NPC
	end

VerdanturfTown_EventScript_1EB5B1:: @ 81EB5B1
	msgbox VerdanturfTown_Text_1EB7E2, MSGBOX_NPC
	end

VerdanturfTown_EventScript_1EB5BA:: @ 81EB5BA
	lock
	faceplayer
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_EventScript_1EB5CF
	msgbox VerdanturfTown_Text_1EB854, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_EventScript_1EB5CF:: @ 81EB5CF
	msgbox VerdanturfTown_Text_1EB935, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_EventScript_1EB5D9:: @ 81EB5D9
	msgbox VerdanturfTown_Text_1EB9C4, MSGBOX_SIGN
	end

VerdanturfTown_EventScript_1EB5E2:: @ 81EB5E2
	msgbox VerdanturfTown_Text_1EBA11, MSGBOX_SIGN
	end

VerdanturfTown_EventScript_1EB5EB:: @ 81EB5EB
	msgbox VerdanturfTown_Text_1EBA1F, MSGBOX_SIGN
	end

VerdanturfTown_EventScript_1EB5F4:: @ 81EB5F4
	msgbox VerdanturfTown_Text_1EBA59, MSGBOX_SIGN
	end

VerdanturfTown_Text_1EB5FD: @ 81EB5FD
	.i18n 4770

VerdanturfTown_Text_1EB6E0: @ 81EB6E0
	.i18n 4771

VerdanturfTown_Text_1EB736: @ 81EB736
	.i18n 4772

VerdanturfTown_Text_1EB7E2: @ 81EB7E2
	.i18n 4773

VerdanturfTown_Text_1EB854: @ 81EB854
	.i18n 4774

VerdanturfTown_Text_1EB935: @ 81EB935
	.i18n 4775

VerdanturfTown_Text_1EB9C4: @ 81EB9C4
	.i18n 4776

VerdanturfTown_Text_1EBA11: @ 81EBA11
	.i18n 4777

VerdanturfTown_Text_1EBA1F: @ 81EBA1F
	.i18n 4778

VerdanturfTown_Text_1EBA59: @ 81EBA59
	.i18n 4779

