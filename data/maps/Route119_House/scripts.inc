Route119_House_MapScripts:: @ 8270965
	.byte 0

Route119_House_EventScript_270966:: @ 8270966
	msgbox Route119_House_Text_270982, MSGBOX_NPC
	end

Route119_House_EventScript_27096F:: @ 827096F
	lock
	faceplayer
	waitse
	playmoncry SPECIES_WINGULL, 0
	msgbox Route119_House_Text_270A17, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route119_House_Text_270982: @ 8270982
	.i18n 4001

Route119_House_Text_270A17: @ 8270A17
	.i18n 4002

