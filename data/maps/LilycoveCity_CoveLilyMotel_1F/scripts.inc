LilycoveCity_CoveLilyMotel_1F_MapScripts:: @ 8218188
	.byte 0

LilycoveCity_CoveLilyMotel_1F_EventScript_218189:: @ 8218189
	lockall
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_CoveLilyMotel_1F_EventScript_2181EA
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_CoveLilyMotel_1F_EventScript_2181C3
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_218264, MSGBOX_DEFAULT
	applymovement 1, Common_Movement_FacePlayer
	waitmovement 0
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_21831E, MSGBOX_DEFAULT
	closemessage
	applymovement 1, Common_Movement_FaceOriginalDirection
	waitmovement 0
	releaseall
	end

LilycoveCity_CoveLilyMotel_1F_EventScript_2181C3:: @ 82181C3
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_2183C3, MSGBOX_DEFAULT
	applymovement 1, Common_Movement_FacePlayer
	waitmovement 0
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_218470, MSGBOX_DEFAULT
	closemessage
	applymovement 1, Common_Movement_FaceOriginalDirection
	waitmovement 0
	releaseall
	end

LilycoveCity_CoveLilyMotel_1F_EventScript_2181EA:: @ 82181EA
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_218544, MSGBOX_DEFAULT
	applymovement 1, Common_Movement_FacePlayer
	waitmovement 0
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_2185F4, MSGBOX_DEFAULT
	closemessage
	applymovement 1, Common_Movement_FaceOriginalDirection
	waitmovement 0
	releaseall
	end

LilycoveCity_CoveLilyMotel_1F_EventScript_218211:: @ 8218211
	lockall
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_WalkInPlaceDown
	waitmovement 0
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_21839B, MSGBOX_DEFAULT
	closemessage
	applymovement EVENT_OBJ_ID_PLAYER, LilycoveCity_CoveLilyMotel_1F_Movement_218259
	applymovement 1, LilycoveCity_CoveLilyMotel_1F_Movement_21825E
	waitmovement 0
	applymovement 1, LilycoveCity_CoveLilyMotel_1F_Movement_218260
	waitmovement 0
	release
	end

LilycoveCity_CoveLilyMotel_1F_Movement_218259: @ 8218259
	face_right
	lock_facing_direction
	walk_left
	unlock_facing_direction
	step_end

LilycoveCity_CoveLilyMotel_1F_Movement_21825E: @ 821825E
	walk_up
	step_end

LilycoveCity_CoveLilyMotel_1F_Movement_218260: @ 8218260
	face_down
	walk_down
	face_up
	step_end

LilycoveCity_CoveLilyMotel_1F_Text_218264: @ 8218264
	.i18n 2543

LilycoveCity_CoveLilyMotel_1F_Text_21831E: @ 821831E
	.i18n 2544

LilycoveCity_CoveLilyMotel_1F_Text_21839B: @ 821839B
	.i18n 2545

LilycoveCity_CoveLilyMotel_1F_Text_2183C3: @ 82183C3
	.i18n 2546

LilycoveCity_CoveLilyMotel_1F_Text_218470: @ 8218470
	.i18n 2547

LilycoveCity_CoveLilyMotel_1F_Text_218544: @ 8218544
	.i18n 2548

LilycoveCity_CoveLilyMotel_1F_Text_2185F4: @ 82185F4
	.i18n 2549

