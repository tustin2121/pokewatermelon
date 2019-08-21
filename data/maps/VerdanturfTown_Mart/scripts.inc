VerdanturfTown_Mart_MapScripts:: @ 8202586
	.byte 0

VerdanturfTown_Mart_EventScript_202587:: @ 8202587
	lock
	faceplayer
	message gUnknown_08272A21
	waitmessage
	pokemart VerdanturfTown_Mart_Pokemart_2025A0
	msgbox gUnknown_08272A3F, MSGBOX_DEFAULT
	release
	end

	.align 2
VerdanturfTown_Mart_Pokemart_2025A0: @ 82025A0
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_NEST_BALL
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_REPEL
	.2byte ITEM_X_SPECIAL
	.2byte ITEM_FLUFFY_TAIL
	.2byte ITEM_NONE
	release
	end

VerdanturfTown_Mart_EventScript_2025BA:: @ 82025BA
	msgbox VerdanturfTown_Mart_Text_2025D5, MSGBOX_NPC
	end

VerdanturfTown_Mart_EventScript_2025C3:: @ 82025C3
	msgbox VerdanturfTown_Mart_Text_20264C, MSGBOX_NPC
	end

VerdanturfTown_Mart_EventScript_2025CC:: @ 82025CC
	msgbox VerdanturfTown_Mart_Text_2026C9, MSGBOX_NPC
	end

VerdanturfTown_Mart_Text_2025D5: @ 82025D5
	.i18n 4802

VerdanturfTown_Mart_Text_20264C: @ 820264C
	.i18n 4803

VerdanturfTown_Mart_Text_2026C9: @ 82026C9
	.i18n 4804

