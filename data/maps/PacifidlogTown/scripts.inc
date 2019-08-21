PacifidlogTown_MapScripts:: @ 81EBAB1
	map_script MAP_SCRIPT_ON_TRANSITION, PacifidlogTown_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, PacifidlogTown_MapScript1_1EBAC0
	.byte 0

PacifidlogTown_OnTransition: @ 81EBABC
	setflag FLAG_VISITED_PACIFIDLOG_TOWN
	end

PacifidlogTown_MapScript1_1EBAC0: @ 81EBAC0
	setstepcallback 3
	end

PacifidlogTown_EventScript_1EBAC3:: @ 81EBAC3
	msgbox PacifidlogTown_Text_1EBB6C, MSGBOX_NPC
	end

PacifidlogTown_EventScript_1EBACC:: @ 81EBACC
	msgbox PacifidlogTown_Text_1EBAE7, MSGBOX_NPC
	end

PacifidlogTown_EventScript_1EBAD5:: @ 81EBAD5
	msgbox PacifidlogTown_Text_1EBBAC, MSGBOX_NPC
	end

PacifidlogTown_EventScript_1EBADE:: @ 81EBADE
	msgbox PacifidlogTown_Text_1EBC7A, MSGBOX_SIGN
	end

PacifidlogTown_Text_1EBAE7: @ 81EBAE7
	.i18n 3387

PacifidlogTown_Text_1EBB6C: @ 81EBB6C
	.i18n 3388

PacifidlogTown_Text_1EBBAC: @ 81EBBAC
	.i18n 3389

PacifidlogTown_Text_1EBC7A: @ 81EBC7A
	.i18n 3390

