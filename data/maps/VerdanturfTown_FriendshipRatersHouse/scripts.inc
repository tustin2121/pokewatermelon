VerdanturfTown_FriendshipRatersHouse_MapScripts:: @ 8203030
	.byte 0

VerdanturfTown_FriendshipRatersHouse_EventScript_203031:: @ 8203031
	lock
	faceplayer
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_2030ED, MSGBOX_DEFAULT
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
	switch VAR_RESULT
	case 0, VerdanturfTown_FriendshipRatersHouse_EventScript_203094
	case 1, VerdanturfTown_FriendshipRatersHouse_EventScript_20309E
	case 2, VerdanturfTown_FriendshipRatersHouse_EventScript_2030A8
	case 3, VerdanturfTown_FriendshipRatersHouse_EventScript_2030B2
	case 4, VerdanturfTown_FriendshipRatersHouse_EventScript_2030BC
	case 5, VerdanturfTown_FriendshipRatersHouse_EventScript_2030C6
	case 6, VerdanturfTown_FriendshipRatersHouse_EventScript_2030D0
	release
	end

VerdanturfTown_FriendshipRatersHouse_EventScript_203094:: @ 8203094
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_2032DF, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_FriendshipRatersHouse_EventScript_20309E:: @ 820309E
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_203288, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_FriendshipRatersHouse_EventScript_2030A8:: @ 82030A8
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_203249, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_FriendshipRatersHouse_EventScript_2030B2:: @ 82030B2
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_203213, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_FriendshipRatersHouse_EventScript_2030BC:: @ 82030BC
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_2031D1, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_FriendshipRatersHouse_EventScript_2030C6:: @ 82030C6
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_203192, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_FriendshipRatersHouse_EventScript_2030D0:: @ 82030D0
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_203141, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_FriendshipRatersHouse_EventScript_2030DA:: @ 82030DA
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PIKACHU, 0
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_20334A, MSGBOX_DEFAULT
	waitmoncry
	release
	end

VerdanturfTown_FriendshipRatersHouse_Text_2030ED: @ 82030ED
	.i18n 4791

VerdanturfTown_FriendshipRatersHouse_Text_203141: @ 8203141
	.i18n 4792

VerdanturfTown_FriendshipRatersHouse_Text_203192: @ 8203192
	.i18n 4793

VerdanturfTown_FriendshipRatersHouse_Text_2031D1: @ 82031D1
	.i18n 4794

VerdanturfTown_FriendshipRatersHouse_Text_203213: @ 8203213
	.i18n 4795

VerdanturfTown_FriendshipRatersHouse_Text_203249: @ 8203249
	.i18n 4796

VerdanturfTown_FriendshipRatersHouse_Text_203288: @ 8203288
	.i18n 4797

VerdanturfTown_FriendshipRatersHouse_Text_2032DF: @ 82032DF
	.i18n 4798

VerdanturfTown_FriendshipRatersHouse_Text_20334A: @ 820334A
	.i18n 4799

