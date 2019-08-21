SeafloorCavern_Room9_MapScripts:: @ 8234DC8
	.byte 0

SeafloorCavern_Room9_EventScript_234DC9:: @ 8234DC9
	lockall
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 4
	setvar VAR_0x8007, 5
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_WalkInPlaceUp
	waitmovement 0
	applymovement EVENT_OBJ_ID_PLAYER, SeafloorCavern_Room9_Movement_23505C
	waitmovement 0
	playbgm MUS_AQA_0, 0
	msgbox SeafloorCavern_Room9_Text_23505F, MSGBOX_DEFAULT
	closemessage
	addobject VAR_0x8004
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	applymovement VAR_0x8004, SeafloorCavern_Room9_Movement_23502A
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_23507C, MSGBOX_DEFAULT
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceUp
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_2350A6, MSGBOX_DEFAULT
	applymovement VAR_0x8004, Common_Movement_FacePlayer
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_23512C, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_ARCHIE, SeafloorCavern_Room9_Text_2351BC
	msgbox SeafloorCavern_Room9_Text_2351E5, MSGBOX_DEFAULT
	setweather WEATHER_NONE
	doweather
	special sub_80B05B4
	waitstate
	msgbox SeafloorCavern_Room9_Text_235279, MSGBOX_DEFAULT
	special WaitWeather
	waitstate
	setvar VAR_RESULT, 1
	playse SE_W197
	setfieldeffectargument 0, 16
	setfieldeffectargument 1, 42
	setfieldeffectargument 2, 0
	dofieldeffect FLDEFF_SPARKLE
	waitfieldeffect FLDEFF_SPARKLE
	closemessage
	setvar VAR_RESULT, 0
	playfanfare MUS_ME_TAMA
	playse SE_TAMA
	special sub_80B0534
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceUp
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_WalkInPlaceUp
	waitmovement 0
	delay 150
	removeobject 7
	addobject 1
	waitstate
	delay 60
	applymovement 1, SeafloorCavern_Room9_Movement_235040
	waitmovement 0
	special sub_80B058C
	waitstate
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 5
	special sub_8139560
	waitstate
	applymovement 1, SeafloorCavern_Room9_Movement_23504B
	waitmovement 0
	removeobject 1
	delay 4
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 2
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 5
	special sub_8139560
	waitstate
	delay 30
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 4
	setvar VAR_0x8007, 5
	msgbox SeafloorCavern_Room9_Text_2352A7, MSGBOX_DEFAULT
	playse SE_PC_LOGIN
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_2352F6, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_0x8004, SeafloorCavern_Room9_Movement_235035
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_23532B, MSGBOX_DEFAULT
	closemessage
	playse SE_PC_OFF
	delay 20
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceDown
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_23546F, MSGBOX_DEFAULT
	closemessage
	addobject VAR_0x8005
	addobject VAR_0x8006
	addobject VAR_0x8007
	applymovement VAR_0x8007, SeafloorCavern_Room9_Movement_235057
	applymovement VAR_0x8006, SeafloorCavern_Room9_Movement_235057
	applymovement VAR_0x8005, SeafloorCavern_Room9_Movement_23504E
	waitmovement 0
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_2354F0, MSGBOX_DEFAULT
	playse SE_PIN
	applymovement VAR_0x8004, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement VAR_0x8004, Common_Movement_Delay48
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_2355C2, MSGBOX_DEFAULT
	msgbox SeafloorCavern_Room9_Text_235692, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_0x8005, SeafloorCavern_Room9_Movement_235054
	applymovement VAR_0x8004, SeafloorCavern_Room9_Movement_23503A
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_235723, MSGBOX_DEFAULT
	setvar VAR_ROUTE128_STATE, 1
	setvar VAR_SOOTOPOLIS_CITY_STATE, 1
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_GROUDON
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_KYOGRE
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
	setflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
	clearflag FLAG_HIDE_ROUTE_128_ARCHIE
	clearflag FLAG_HIDE_ROUTE_128_MAXIE
	setflag FLAG_SYS_WEATHER_CTRL
	setflag FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
	setvar VAR_STEVENS_HOUSE_STATE, 2
	setvar VAR_SEAFLOOR_CAVERN_STATE, 1
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_ARCHIE
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAXIE
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE_1
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_AQUA_GRUNTS
	setflag FLAG_HIDE_MAP_NAME_POPUP
	warp MAP_ROUTE128, 255, 38, 22
	waitstate
	releaseall
	end

SeafloorCavern_Room9_Movement_23502A: @ 823502A
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

SeafloorCavern_Room9_Movement_235032: @ 8235032
	walk_left
	walk_left
	step_end

SeafloorCavern_Room9_Movement_235035: @ 8235035
	walk_left
	delay_16
	step_end

SeafloorCavern_Room9_Movement_235038: @ 8235038
	walk_right
	step_end

SeafloorCavern_Room9_Movement_23503A: @ 823503A
	face_up
	lock_facing_direction
	walk_down
	unlock_facing_direction
	walk_in_place_fastest_right
	step_end

SeafloorCavern_Room9_Movement_235040: @ 8235040
	delay_16
	delay_16
	walk_slow_down
	delay_16
	delay_16
	delay_16
	walk_slow_down
	delay_16
	delay_16
	delay_16
	step_end

SeafloorCavern_Room9_Movement_23504B: @ 823504B
	slide_up
	slide_up
	step_end

SeafloorCavern_Room9_Movement_23504E: @ 823504E
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

SeafloorCavern_Room9_Movement_235054: @ 8235054
	walk_right
	walk_right
	step_end

SeafloorCavern_Room9_Movement_235057: @ 8235057
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

SeafloorCavern_Room9_Movement_23505C: @ 823505C
	delay_16
	delay_16
	step_end

SeafloorCavern_Room9_Text_23505F: @ 823505F
	.i18n 4340

SeafloorCavern_Room9_Text_23507C: @ 823507C
	.i18n 4341

SeafloorCavern_Room9_Text_2350A6: @ 82350A6
	.i18n 4342

SeafloorCavern_Room9_Text_23512C: @ 823512C
	.i18n 4343

SeafloorCavern_Room9_Text_2351BC: @ 82351BC
	.i18n 4344

SeafloorCavern_Room9_Text_2351E5: @ 82351E5
	.i18n 4345

SeafloorCavern_Room9_Text_235279: @ 8235279
	.i18n 4346

SeafloorCavern_Room9_Text_2352A7: @ 82352A7
	.i18n 4347

SeafloorCavern_Room9_Text_2352F6: @ 82352F6
	.i18n 4348

SeafloorCavern_Room9_Text_23532B: @ 823532B
	.i18n 4349

SeafloorCavern_Room9_Text_23546F: @ 823546F
	.i18n 4350

SeafloorCavern_Room9_Text_2354F0: @ 82354F0
	.i18n 4351

SeafloorCavern_Room9_Text_2355C2: @ 82355C2
	.i18n 4352

SeafloorCavern_Room9_Text_235692: @ 8235692
	.i18n 4353

SeafloorCavern_Room9_Text_235723: @ 8235723
	.i18n 4354
