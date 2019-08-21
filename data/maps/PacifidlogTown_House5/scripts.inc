PacifidlogTown_House5_MapScripts:: @ 8204110
	.byte 0

PacifidlogTown_House5_EventScript_204111:: @ 8204111
	lock
	faceplayer
	specialvar VAR_RESULT, IsMirageIslandPresent
	compare VAR_RESULT, 1
	goto_if_eq PacifidlogTown_House5_EventScript_20412D
	msgbox PacifidlogTown_House5_Text_204140, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House5_EventScript_20412D:: @ 820412D
	msgbox PacifidlogTown_House5_Text_204161, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House5_EventScript_204137:: @ 8204137
	msgbox PacifidlogTown_House5_Text_20418B, MSGBOX_NPC
	end

PacifidlogTown_House5_Text_204140: @ 8204140
	.i18n 3415

PacifidlogTown_House5_Text_204161: @ 8204161
	.i18n 3416

PacifidlogTown_House5_Text_20418B: @ 820418B
	.i18n 3417

