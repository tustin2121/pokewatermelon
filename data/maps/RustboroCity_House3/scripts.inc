RustboroCity_House3_MapScripts:: @ 8216190
	.byte 0

RustboroCity_House3_EventScript_216191:: @ 8216191
	msgbox RustboroCity_House3_Text_2161B6, MSGBOX_NPC
	end

RustboroCity_House3_EventScript_21619A:: @ 821619A
	msgbox RustboroCity_House3_Text_21622A, MSGBOX_NPC
	end

RustboroCity_House3_EventScript_2161A3:: @ 82161A3
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PIKACHU, 0
	msgbox RustboroCity_House3_Text_2162AB, MSGBOX_DEFAULT
	waitmoncry
	release
	end

RustboroCity_House3_Text_2161B6: @ 82161B6
	.i18n 4228

RustboroCity_House3_Text_21622A: @ 821622A
	.i18n 4229

RustboroCity_House3_Text_2162AB: @ 82162AB
	.i18n 4230

