VerdanturfTown_WandasHouse_MapScripts:: @ 82028BE
	.byte 0

VerdanturfTown_WandasHouse_EventScript_2028BF:: @ 82028BF
	lock
	faceplayer
	goto_if_set FLAG_WALLY_SPEECH, VerdanturfTown_WandasHouse_EventScript_2028D7
	msgbox VerdanturfTown_WandasHouse_Text_202993, MSGBOX_DEFAULT
	setflag FLAG_WALLY_SPEECH
	release
	end

VerdanturfTown_WandasHouse_EventScript_2028D7:: @ 82028D7
	msgbox VerdanturfTown_WandasHouse_Text_202ABE, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_WandasHouse_EventScript_2028E1:: @ 82028E1
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, VerdanturfTown_WandasHouse_EventScript_202909
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_2028FF
	msgbox VerdanturfTown_WandasHouse_Text_202B37, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_WandasHouse_EventScript_2028FF:: @ 82028FF
	msgbox VerdanturfTown_WandasHouse_Text_202C20, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_WandasHouse_EventScript_202909:: @ 8202909
	msgbox VerdanturfTown_WandasHouse_Text_202C4E, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_WandasHouse_EventScript_202913:: @ 8202913
	msgbox VerdanturfTown_WandasHouse_Text_202E00, MSGBOX_NPC
	end

VerdanturfTown_WandasHouse_EventScript_20291C:: @ 820291C
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_202944
	goto_if_set FLAG_DEFEATED_WALLY_MAUVILLE, VerdanturfTown_WandasHouse_EventScript_20293A
	msgbox VerdanturfTown_WandasHouse_Text_202D91, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_WandasHouse_EventScript_20293A:: @ 820293A
	msgbox VerdanturfTown_WandasHouse_Text_202CCF, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_WandasHouse_EventScript_202944:: @ 8202944
	msgbox VerdanturfTown_WandasHouse_Text_202D91, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_WandasHouse_EventScript_20294E:: @ 820294E
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, VerdanturfTown_WandasHouse_EventScript_202989
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_20297F
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_WandasHouse_EventScript_202975
	msgbox VerdanturfTown_WandasHouse_Text_202E47, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_WandasHouse_EventScript_202975:: @ 8202975
	msgbox VerdanturfTown_WandasHouse_Text_202F19, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_WandasHouse_EventScript_20297F:: @ 820297F
	msgbox VerdanturfTown_WandasHouse_Text_202F73, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_WandasHouse_EventScript_202989:: @ 8202989
	msgbox VerdanturfTown_WandasHouse_Text_202FDB, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_WandasHouse_Text_202993: @ 8202993
	.i18n 4807

VerdanturfTown_WandasHouse_Text_202ABE: @ 8202ABE
	.i18n 4808

VerdanturfTown_WandasHouse_Text_202B37: @ 8202B37
	.i18n 4809

VerdanturfTown_WandasHouse_Text_202C20: @ 8202C20
	.i18n 4810

VerdanturfTown_WandasHouse_Text_202C4E: @ 8202C4E
	.i18n 4811

VerdanturfTown_WandasHouse_Text_202CCF: @ 8202CCF
	.i18n 4812

VerdanturfTown_WandasHouse_Text_202D91: @ 8202D91
	.i18n 4813

VerdanturfTown_WandasHouse_Text_202E00: @ 8202E00
	.i18n 4814

VerdanturfTown_WandasHouse_Text_202E47: @ 8202E47
	.i18n 4815

VerdanturfTown_WandasHouse_Text_202F19: @ 8202F19
	.i18n 4816

VerdanturfTown_WandasHouse_Text_202F73: @ 8202F73
	.i18n 4817

VerdanturfTown_WandasHouse_Text_202FDB: @ 8202FDB
	.i18n 4818

