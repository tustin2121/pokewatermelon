LavaridgeTown_HerbShop_MapScripts:: @ 81FE4D6
	.byte 0

LavaridgeTown_HerbShop_EventScript_1FE4D7:: @ 81FE4D7
	lock
	faceplayer
	message LavaridgeTown_HerbShop_Text_1FE53E
	waitmessage
	pokemart LavaridgeTown_HerbShop_Pokemart_1FE4F0
	msgbox gUnknown_08272A3F, MSGBOX_DEFAULT
	release
	end

	.align 2
LavaridgeTown_HerbShop_Pokemart_1FE4F0: @ 81FE4F0
	.2byte ITEM_ENERGY_POWDER
	.2byte ITEM_ENERGY_ROOT
	.2byte ITEM_HEAL_POWDER
	.2byte ITEM_REVIVAL_HERB
	.2byte ITEM_NONE
	release
	end

LavaridgeTown_HerbShop_EventScript_1FE4FC:: @ 81FE4FC
	msgbox LavaridgeTown_HerbShop_Text_1FE685, MSGBOX_NPC
	end

LavaridgeTown_HerbShop_EventScript_1FE505:: @ 81FE505
	lock
	faceplayer
	goto_if_set FLFLAG_RECEIVED_CHARCOAL, LavaridgeTown_HerbShop_EventScript_1FE534
	msgbox LavaridgeTown_HerbShop_Text_1FE584, MSGBOX_DEFAULT
	giveitem_std ITEM_CHARCOAL
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_ShowBagIsFull
	setflag FLFLAG_RECEIVED_CHARCOAL
	release
	end

LavaridgeTown_HerbShop_EventScript_1FE534:: @ 81FE534
	msgbox LavaridgeTown_HerbShop_Text_1FE5EB, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_HerbShop_Text_1FE53E: @ 81FE53E
	.i18n 2425

LavaridgeTown_HerbShop_Text_1FE584: @ 81FE584
	.i18n 2426

LavaridgeTown_HerbShop_Text_1FE5EB: @ 81FE5EB
	.i18n 2427

LavaridgeTown_HerbShop_Text_1FE685: @ 81FE685
	.i18n 2428

