MauvilleCity_BikeShop_MapScripts:: @ 820EBBB
	.byte 0

MauvilleCity_BikeShop_EventScript_20EBBC:: @ 820EBBC
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_BIKE, MauvilleCity_BikeShop_EventScript_20EC94
	goto_if_set FLAG_DECLINED_BIKE, MauvilleCity_BikeShop_EventScript_20EBF7
	msgbox MauvilleCity_BikeShop_Text_20EE22, MSGBOX_DEFAULT
	msgbox MauvilleCity_BikeShop_Text_20EE99, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq MauvilleCity_BikeShop_EventScript_20EC4A
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_BikeShop_EventScript_20EC3D
	end

MauvilleCity_BikeShop_EventScript_20EBF7:: @ 820EBF7
	msgbox MauvilleCity_BikeShop_Text_20EE99, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq MauvilleCity_BikeShop_EventScript_20EC4A
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_BikeShop_EventScript_20EC3D
	end

MauvilleCity_BikeShop_EventScript_20EC16:: @ 820EC16
	message MauvilleCity_BikeShop_Text_20EF32
	waitmessage
	multichoice 21, 8, 12, 1
	switch VAR_RESULT
	case 0, MauvilleCity_BikeShop_EventScript_20EC53
	case 1, MauvilleCity_BikeShop_EventScript_20EC6D
	end

MauvilleCity_BikeShop_EventScript_20EC3D:: @ 820EC3D
	setflag FLAG_DECLINED_BIKE
	msgbox MauvilleCity_BikeShop_Text_20EEE8, MSGBOX_DEFAULT
	release
	end

MauvilleCity_BikeShop_EventScript_20EC4A:: @ 820EC4A
	setflag FLAG_RECEIVED_BIKE
	goto MauvilleCity_BikeShop_EventScript_20EC16
	end

MauvilleCity_BikeShop_EventScript_20EC53:: @ 820EC53
	msgbox MauvilleCity_BikeShop_Text_20F18D, MSGBOX_DEFAULT
	giveitem_std ITEM_MACH_BIKE
	goto MauvilleCity_BikeShop_EventScript_20EC87
	end

MauvilleCity_BikeShop_EventScript_20EC6D:: @ 820EC6D
	msgbox MauvilleCity_BikeShop_Text_20F1A5, MSGBOX_DEFAULT
	giveitem_std ITEM_ACRO_BIKE
	goto MauvilleCity_BikeShop_EventScript_20EC87
	end

MauvilleCity_BikeShop_EventScript_20EC87:: @ 820EC87
	msgbox MauvilleCity_BikeShop_Text_20F1BD, MSGBOX_DEFAULT
	special SwapRegisteredBike
	release
	end

MauvilleCity_BikeShop_EventScript_20EC94:: @ 820EC94
	msgbox MauvilleCity_BikeShop_Text_20F1FB, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq MauvilleCity_BikeShop_EventScript_20ECB3
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_BikeShop_EventScript_20ECE5
	end

MauvilleCity_BikeShop_EventScript_20ECB3:: @ 820ECB3
	msgbox MauvilleCity_BikeShop_Text_20F22F, MSGBOX_DEFAULT
	checkitem ITEM_ACRO_BIKE, 1
	compare VAR_RESULT, 1
	goto_if_eq MauvilleCity_BikeShop_EventScript_20ECEF
	checkitem ITEM_MACH_BIKE, 1
	compare VAR_RESULT, 1
	goto_if_eq MauvilleCity_BikeShop_EventScript_20ED10
	msgbox MauvilleCity_BikeShop_Text_20F2F3, MSGBOX_DEFAULT
	release
	end

MauvilleCity_BikeShop_EventScript_20ECE5:: @ 820ECE5
	msgbox MauvilleCity_BikeShop_Text_20F2C4, MSGBOX_DEFAULT
	release
	end

MauvilleCity_BikeShop_EventScript_20ECEF:: @ 820ECEF
	incrementgamestat 4
	msgbox MauvilleCity_BikeShop_Text_20F294, MSGBOX_DEFAULT
	takeitem ITEM_ACRO_BIKE, 1
	giveitem_std ITEM_MACH_BIKE
	goto MauvilleCity_BikeShop_EventScript_20EC87
	end

MauvilleCity_BikeShop_EventScript_20ED10:: @ 820ED10
	incrementgamestat 4
	msgbox MauvilleCity_BikeShop_Text_20F263, MSGBOX_DEFAULT
	takeitem ITEM_MACH_BIKE, 1
	giveitem_std ITEM_ACRO_BIKE
	goto MauvilleCity_BikeShop_EventScript_20EC87
	end

MauvilleCity_BikeShop_EventScript_20ED31:: @ 820ED31
	msgbox MauvilleCity_BikeShop_Text_20F3C3, MSGBOX_NPC
	end

MauvilleCity_BikeShop_EventScript_20ED3A:: @ 820ED3A
	message MauvilleCity_BikeShop_Text_20F445
	waitmessage
	goto MauvilleCity_BikeShop_EventScript_20ED46
	end

MauvilleCity_BikeShop_EventScript_20ED46:: @ 820ED46
	multichoice 0, 0, 43, 0
	switch VAR_RESULT
	case 0, MauvilleCity_BikeShop_EventScript_20ED88
	case 1, MauvilleCity_BikeShop_EventScript_20ED94
	case 2, MauvilleCity_BikeShop_EventScript_20EDA0
	case 3, MauvilleCity_BikeShop_EventScript_20EDAC
	case 127, MauvilleCity_BikeShop_EventScript_20EDAC
	end

MauvilleCity_BikeShop_EventScript_20ED88:: @ 820ED88
	message MauvilleCity_BikeShop_Text_20F487
	waitmessage
	goto MauvilleCity_BikeShop_EventScript_20ED46
	end

MauvilleCity_BikeShop_EventScript_20ED94:: @ 820ED94
	message MauvilleCity_BikeShop_Text_20F550
	waitmessage
	goto MauvilleCity_BikeShop_EventScript_20ED46
	end

MauvilleCity_BikeShop_EventScript_20EDA0:: @ 820EDA0
	message MauvilleCity_BikeShop_Text_20F61A
	waitmessage
	goto MauvilleCity_BikeShop_EventScript_20ED46
	end

MauvilleCity_BikeShop_EventScript_20EDAC:: @ 820EDAC
	release
	end

MauvilleCity_BikeShop_EventScript_20EDAE:: @ 820EDAE
	message MauvilleCity_BikeShop_Text_20F6ED
	waitmessage
	goto MauvilleCity_BikeShop_EventScript_20EDBA
	end

MauvilleCity_BikeShop_EventScript_20EDBA:: @ 820EDBA
	multichoice 0, 0, 44, 0
	switch VAR_RESULT
	case 0, MauvilleCity_BikeShop_EventScript_20EDFC
	case 1, MauvilleCity_BikeShop_EventScript_20EE08
	case 2, MauvilleCity_BikeShop_EventScript_20EE14
	case 3, MauvilleCity_BikeShop_EventScript_20EE20
	case 127, MauvilleCity_BikeShop_EventScript_20EE20
	end

MauvilleCity_BikeShop_EventScript_20EDFC:: @ 820EDFC
	message MauvilleCity_BikeShop_Text_20F72F
	waitmessage
	goto MauvilleCity_BikeShop_EventScript_20EDBA
	end

MauvilleCity_BikeShop_EventScript_20EE08:: @ 820EE08
	message MauvilleCity_BikeShop_Text_20F7F5
	waitmessage
	goto MauvilleCity_BikeShop_EventScript_20EDBA
	end

MauvilleCity_BikeShop_EventScript_20EE14:: @ 820EE14
	message MauvilleCity_BikeShop_Text_20F898
	waitmessage
	goto MauvilleCity_BikeShop_EventScript_20EDBA
	end

MauvilleCity_BikeShop_EventScript_20EE20:: @ 820EE20
	release
	end

MauvilleCity_BikeShop_Text_20EE22: @ 820EE22
	.i18n 2912

MauvilleCity_BikeShop_Text_20EE99: @ 820EE99
	.i18n 2913

MauvilleCity_BikeShop_Text_20EEE8: @ 820EEE8
	.i18n 2914

MauvilleCity_BikeShop_Text_20EF32: @ 820EF32
	.i18n 2915

MauvilleCity_BikeShop_Text_20F18D: @ 820F18D
	.i18n 2916

MauvilleCity_BikeShop_Text_20F1A5: @ 820F1A5
	.i18n 2917

MauvilleCity_BikeShop_Text_20F1BD: @ 820F1BD
	.i18n 2918

MauvilleCity_BikeShop_Text_20F1FB: @ 820F1FB
	.i18n 2919

MauvilleCity_BikeShop_Text_20F22F: @ 820F22F
	.i18n 2920

MauvilleCity_BikeShop_Text_20F263: @ 820F263
	.i18n 2921

MauvilleCity_BikeShop_Text_20F294: @ 820F294
	.i18n 2922

MauvilleCity_BikeShop_Text_20F2C4: @ 820F2C4
	.i18n 2923

MauvilleCity_BikeShop_Text_20F2F3: @ 820F2F3
	.i18n 2924

MauvilleCity_BikeShop_Text_20F3C3: @ 820F3C3
	.i18n 2925

MauvilleCity_BikeShop_Text_20F445: @ 820F445
	.i18n 2926

MauvilleCity_BikeShop_Text_20F487: @ 820F487
	.i18n 2927

MauvilleCity_BikeShop_Text_20F550: @ 820F550
	.i18n 2928

MauvilleCity_BikeShop_Text_20F61A: @ 820F61A
	.i18n 2929

MauvilleCity_BikeShop_Text_20F6ED: @ 820F6ED
	.i18n 2930

MauvilleCity_BikeShop_Text_20F72F: @ 820F72F
	.i18n 2931

MauvilleCity_BikeShop_Text_20F7F5: @ 820F7F5
	.i18n 2932

MauvilleCity_BikeShop_Text_20F898: @ 820F898
	.i18n 2933

