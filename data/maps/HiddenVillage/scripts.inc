HiddenVillage_MapScripts::
# 5 "data/maps/HiddenVillage/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HiddenVillage_OnTransition
# 6 "data/maps/HiddenVillage/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, HiddenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

HiddenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/HiddenVillage/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, HiddenVillage_EventScript_FriendHeart_Intro
	.2byte 0


HiddenVillage_OnTransition::
# 16 "data/maps/HiddenVillage/scripts.pory"
	goto_if_set FLAG_HIDDEN_VILLAGE_HEART_INTRO_COMPLETE, HiddenVillage_OnTransition_2
HiddenVillage_OnTransition_1:
# 21 "data/maps/HiddenVillage/scripts.pory"
	switch VAR_HIDDEN_VILLAGE_STATE
# 22 "data/maps/HiddenVillage/scripts.pory"
	case 0, HiddenVillage_OnTransition_6
# 26 "data/maps/HiddenVillage/scripts.pory"
	case 1, HiddenVillage_OnTransition_7
# 32 "data/maps/HiddenVillage/scripts.pory"
	case 2, HiddenVillage_OnTransition_8
# 39 "data/maps/HiddenVillage/scripts.pory"
	case 3, HiddenVillage_OnTransition_9
HiddenVillage_OnTransition_4:
	end

HiddenVillage_OnTransition_2:
# 17 "data/maps/HiddenVillage/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto HiddenVillage_OnTransition_1

HiddenVillage_OnTransition_6:
# 23 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_12
# 24 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_13
	goto HiddenVillage_OnTransition_4

HiddenVillage_OnTransition_7:
# 27 "data/maps/HiddenVillage/scripts.pory"
	setobjectxyperm LOCALID_LADY, 14, 14
# 28 "data/maps/HiddenVillage/scripts.pory"
	setobjectmovementtype LOCALID_LADY, MOVEMENT_TYPE_LOOK_AROUND
# 29 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_12
# 30 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_13
	goto HiddenVillage_OnTransition_4

HiddenVillage_OnTransition_8:
# 33 "data/maps/HiddenVillage/scripts.pory"
	setobjectxyperm LOCALID_LADY, 17, 5
# 34 "data/maps/HiddenVillage/scripts.pory"
	setobjectmovementtype LOCALID_LADY, MOVEMENT_TYPE_FACE_DOWN
# 35 "data/maps/HiddenVillage/scripts.pory"
	setobjectxyperm LOCALID_FRIEND_STRENGTH, 11, 11
# 36 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_12
# 37 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_13
	goto HiddenVillage_OnTransition_4

HiddenVillage_OnTransition_9:
# 41 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_11
# 42 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_12
	goto HiddenVillage_OnTransition_4


HiddenVillage_EventScript_FriendHeart_Intro::
# 52 "data/maps/HiddenVillage/scripts.pory"
	lockall
# 54 "data/maps/HiddenVillage/scripts.pory"
	applymovement LOCALID_INTRO_HEART, Common_Movement_ExclamationMark
# 55 "data/maps/HiddenVillage/scripts.pory"
	playse SE_PIN
# 56 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 57 "data/maps/HiddenVillage/scripts.pory"
	applymovement LOCALID_INTRO_HEART, Heart_Movement_TowardsPlayer
# 58 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 59 "data/maps/HiddenVillage/scripts.pory"
	applymovement LOCALID_INTRO_HEART, Common_Movement_FaceUp
# 61 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_FriendHeart_Intro_Text_0
# 62 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 64 "data/maps/HiddenVillage/scripts.pory"
	applymovement LOCALID_INTRO_HEART, Heart_RunToBackyard
# 65 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 66 "data/maps/HiddenVillage/scripts.pory"
	removeobject LOCALID_INTRO_HEART
# 68 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_HIDDEN_VILLAGE_HEART_INTRO_COMPLETE
# 69 "data/maps/HiddenVillage/scripts.pory"
	setvar VAR_TEMP_0, 1
# 71 "data/maps/HiddenVillage/scripts.pory"
	releaseall
	end


HiddenVillage_EventScript_DefaultText::
# 79 "data/maps/HiddenVillage/scripts.pory"
	lock
# 80 "data/maps/HiddenVillage/scripts.pory"
	faceplayer
# 81 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_DefaultText_Text_0
# 82 "data/maps/HiddenVillage/scripts.pory"
	setvar VAR_HIDDEN_VILLAGE_STATE, 2
# 83 "data/maps/HiddenVillage/scripts.pory"
	release
	end


HiddenVillage_EventScript_FriendHeart::
# 88 "data/maps/HiddenVillage/scripts.pory"
	lock
# 89 "data/maps/HiddenVillage/scripts.pory"
	faceplayer
# 90 "data/maps/HiddenVillage/scripts.pory"
	switch VAR_HIDDEN_VILLAGE_STATE
# 91 "data/maps/HiddenVillage/scripts.pory"
	case 1, HiddenVillage_EventScript_FriendHeart_3
# 94 "data/maps/HiddenVillage/scripts.pory"
	case 3, HiddenVillage_EventScript_FriendHeart_4
HiddenVillage_EventScript_FriendHeart_1:
# 98 "data/maps/HiddenVillage/scripts.pory"
	release
	end

HiddenVillage_EventScript_FriendHeart_3:
# 92 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_FriendHeart_Text_0
# 93 "data/maps/HiddenVillage/scripts.pory"
	closemessage
	goto HiddenVillage_EventScript_FriendHeart_1

HiddenVillage_EventScript_FriendHeart_4:
# 95 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_FriendHeart_Text_1
# 96 "data/maps/HiddenVillage/scripts.pory"
	closemessage
	goto HiddenVillage_EventScript_FriendHeart_1


HiddenVillage_EventScript_FriendStrength::
# 103 "data/maps/HiddenVillage/scripts.pory"
	lock
# 104 "data/maps/HiddenVillage/scripts.pory"
	faceplayer
# 105 "data/maps/HiddenVillage/scripts.pory"
	switch VAR_HIDDEN_VILLAGE_STATE
# 106 "data/maps/HiddenVillage/scripts.pory"
	case 1, HiddenVillage_EventScript_FriendStrength_3
# 109 "data/maps/HiddenVillage/scripts.pory"
	case 2, HiddenVillage_EventScript_FriendStrength_4
HiddenVillage_EventScript_FriendStrength_1:
# 120 "data/maps/HiddenVillage/scripts.pory"
	release
	end

HiddenVillage_EventScript_FriendStrength_3:
# 107 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_FriendStrength_Text_0
# 108 "data/maps/HiddenVillage/scripts.pory"
	closemessage
	goto HiddenVillage_EventScript_FriendStrength_1

HiddenVillage_EventScript_FriendStrength_4:
# 110 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_FriendStrength_Text_1
# 111 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 113 "data/maps/HiddenVillage/scripts.pory"
	applymovement LOCALID_TREEHOUSE_STRENGTH, Movement_ClimbTheVine
# 114 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 115 "data/maps/HiddenVillage/scripts.pory"
	playse SE_EXIT
# 116 "data/maps/HiddenVillage/scripts.pory"
	removeobject LOCALID_TREEHOUSE_STRENGTH
# 118 "data/maps/HiddenVillage/scripts.pory"
	setvar VAR_HIDDEN_VILLAGE_STATE, 3
	goto HiddenVillage_EventScript_FriendStrength_1


HiddenVillage_EventScript_Lady::
# 125 "data/maps/HiddenVillage/scripts.pory"
	lock
# 126 "data/maps/HiddenVillage/scripts.pory"
	faceplayer
# 128 "data/maps/HiddenVillage/scripts.pory"
	switch VAR_HIDDEN_VILLAGE_STATE
# 129 "data/maps/HiddenVillage/scripts.pory"
	case 0, HiddenVillage_EventScript_Lady_3
# 135 "data/maps/HiddenVillage/scripts.pory"
	case 1, HiddenVillage_EventScript_Lady_4
# 139 "data/maps/HiddenVillage/scripts.pory"
	case 2, HiddenVillage_EventScript_Lady_5
# 157 "data/maps/HiddenVillage/scripts.pory"
	case 3, HiddenVillage_EventScript_Lady_6
HiddenVillage_EventScript_Lady_1:
# 161 "data/maps/HiddenVillage/scripts.pory"
	release
	end

HiddenVillage_EventScript_Lady_3:
# 130 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_0
# 131 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 132 "data/maps/HiddenVillage/scripts.pory"
	applymovement LOCALID_LADY, Common_Movement_FaceDown
# 133 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
	goto HiddenVillage_EventScript_Lady_1

HiddenVillage_EventScript_Lady_4:
# 136 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_1
# 137 "data/maps/HiddenVillage/scripts.pory"
	closemessage
	goto HiddenVillage_EventScript_Lady_1

HiddenVillage_EventScript_Lady_5:
# 140 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_2
# 141 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 143 "data/maps/HiddenVillage/scripts.pory"
	special SpawnCameraObject
# 144 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraPanLeftAndDown
# 145 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 147 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_3
# 148 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 150 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraPanRightAndUp
# 151 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 152 "data/maps/HiddenVillage/scripts.pory"
	special RemoveCameraObject
# 154 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 155 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
	goto HiddenVillage_EventScript_Lady_1

HiddenVillage_EventScript_Lady_6:
# 158 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_4
# 159 "data/maps/HiddenVillage/scripts.pory"
	closemessage
	goto HiddenVillage_EventScript_Lady_1


HiddenVillage_EventScript_ElderClass_Left::
# 169 "data/maps/HiddenVillage/scripts.pory"
	lockall
# 170 "data/maps/HiddenVillage/scripts.pory"
	setvar VAR_TEMP_1, 0
# 171 "data/maps/HiddenVillage/scripts.pory"
	goto HiddenVillage_EventScript_ElderClass
	return


HiddenVillage_EventScript_ElderClass_Right::
# 175 "data/maps/HiddenVillage/scripts.pory"
	lockall
# 176 "data/maps/HiddenVillage/scripts.pory"
	setvar VAR_TEMP_1, 1
# 177 "data/maps/HiddenVillage/scripts.pory"
	goto HiddenVillage_EventScript_ElderClass
	return


HiddenVillage_EventScript_ElderClass::
# 181 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_ElderClass_Text_0
# 182 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 184 "data/maps/HiddenVillage/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq HiddenVillage_EventScript_ElderClass_2
# 187 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HiddenVillage_Movement_PlayerToClassRight
HiddenVillage_EventScript_ElderClass_1:
# 190 "data/maps/HiddenVillage/scripts.pory"
	applymovement LOCALID_FRIEND_STRENGTH, HiddenVillage_Movement_StrengthToClass
# 191 "data/maps/HiddenVillage/scripts.pory"
	applymovement LOCALID_FRIEND_HEART, HiddenVillage_Movement_HeartToClass
# 192 "data/maps/HiddenVillage/scripts.pory"
	applymovement LOCALID_FRIEND_BRAIN, HiddenVillage_Movement_BrainToClass
# 193 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 195 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_ElderClass_Text_1
# 196 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 198 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_ElderClass_Text_2
# 199 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 202 "data/maps/HiddenVillage/scripts.pory"
	applymovement LOCALID_FRIEND_STRENGTH, Movement_StrengthWalkOff
# 203 "data/maps/HiddenVillage/scripts.pory"
	applymovement LOCALID_FRIEND_HEART, Movement_HeartWalkOff
# 204 "data/maps/HiddenVillage/scripts.pory"
	applymovement LOCALID_FRIEND_BRAIN, Movement_BrainWalkOff
# 205 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 208 "data/maps/HiddenVillage/scripts.pory"
	removeobject LOCALID_FRIEND_STRENGTH
# 209 "data/maps/HiddenVillage/scripts.pory"
	removeobject LOCALID_FRIEND_HEART
# 210 "data/maps/HiddenVillage/scripts.pory"
	removeobject LOCALID_FRIEND_BRAIN
# 211 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_11
# 214 "data/maps/HiddenVillage/scripts.pory"
	clearflag FLAG_TEMP_12
# 215 "data/maps/HiddenVillage/scripts.pory"
	clearflag FLAG_TEMP_13
# 216 "data/maps/HiddenVillage/scripts.pory"
	addobject LOCALID_TREEHOUSE_STRENGTH
# 217 "data/maps/HiddenVillage/scripts.pory"
	addobject LOCALID_TREEHOUSE_HEART
# 218 "data/maps/HiddenVillage/scripts.pory"
	addobject LOCALID_TREEHOUSE_BRAIN
# 221 "data/maps/HiddenVillage/scripts.pory"
	applymovement LOCALID_TREEHOUSE_STRENGTH, Movement_StrengthReappear
# 222 "data/maps/HiddenVillage/scripts.pory"
	applymovement LOCALID_TREEHOUSE_HEART, Movement_HeartReappear
# 223 "data/maps/HiddenVillage/scripts.pory"
	applymovement LOCALID_TREEHOUSE_BRAIN, Movement_BrainReappear
# 226 "data/maps/HiddenVillage/scripts.pory"
	waitmovement LOCALID_TREEHOUSE_HEART
# 227 "data/maps/HiddenVillage/scripts.pory"
	playse SE_EXIT
# 228 "data/maps/HiddenVillage/scripts.pory"
	removeobject LOCALID_TREEHOUSE_HEART
# 230 "data/maps/HiddenVillage/scripts.pory"
	waitmovement LOCALID_TREEHOUSE_BRAIN
# 231 "data/maps/HiddenVillage/scripts.pory"
	playse SE_EXIT
# 232 "data/maps/HiddenVillage/scripts.pory"
	removeobject LOCALID_TREEHOUSE_BRAIN
# 235 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_12
# 238 "data/maps/HiddenVillage/scripts.pory"
	waitmovement LOCALID_TREEHOUSE_STRENGTH
# 241 "data/maps/HiddenVillage/scripts.pory"
	setvar VAR_HIDDEN_VILLAGE_STATE, 2
# 243 "data/maps/HiddenVillage/scripts.pory"
	releaseall
	end

HiddenVillage_EventScript_ElderClass_2:
# 185 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HiddenVillage_Movement_PlayerToClassLeft
	goto HiddenVillage_EventScript_ElderClass_1


HiddenVillage_EventScript_LateTriggerLeft::
# 251 "data/maps/HiddenVillage/scripts.pory"
	lockall
# 252 "data/maps/HiddenVillage/scripts.pory"
	applymovement LOCALID_LADY, Common_Movement_ExclamationMark
# 253 "data/maps/HiddenVillage/scripts.pory"
	playse SE_PIN
# 254 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 255 "data/maps/HiddenVillage/scripts.pory"
	applymovement LOCALID_LADY, Common_Movement_FaceLeft
# 256 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 257 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 258 "data/maps/HiddenVillage/scripts.pory"
	call HiddenVillage_EventScript_LateTriggerMain
# 259 "data/maps/HiddenVillage/scripts.pory"
	releaseall
	end


HiddenVillage_EventScript_LateTriggerRight::
# 264 "data/maps/HiddenVillage/scripts.pory"
	lockall
# 265 "data/maps/HiddenVillage/scripts.pory"
	applymovement LOCALID_LADY, Common_Movement_ExclamationMark
# 266 "data/maps/HiddenVillage/scripts.pory"
	playse SE_PIN
# 267 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 268 "data/maps/HiddenVillage/scripts.pory"
	applymovement LOCALID_LADY, Common_Movement_FaceRight
# 269 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 270 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 271 "data/maps/HiddenVillage/scripts.pory"
	call HiddenVillage_EventScript_LateTriggerMain
# 272 "data/maps/HiddenVillage/scripts.pory"
	releaseall
	end


HiddenVillage_EventScript_LateTriggerMain::
# 277 "data/maps/HiddenVillage/scripts.pory"
	switch VAR_HIDDEN_VILLAGE_STATE
# 278 "data/maps/HiddenVillage/scripts.pory"
	case 0, HiddenVillage_EventScript_LateTriggerMain_3
HiddenVillage_EventScript_LateTriggerMain_1:
	return

HiddenVillage_EventScript_LateTriggerMain_3:
# 279 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_0
# 280 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 281 "data/maps/HiddenVillage/scripts.pory"
	applymovement LOCALID_LADY, Common_Movement_FaceDown
# 282 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 283 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
	goto HiddenVillage_EventScript_LateTriggerMain_1


# 291 "data/maps/HiddenVillage/scripts.pory"
Heart_Movement_TowardsPlayer:
# 292 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 292 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 292 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 292 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 292 "data/maps/HiddenVillage/scripts.pory"
	walk_left
	step_end

# 295 "data/maps/HiddenVillage/scripts.pory"
Heart_RunToBackyard:
# 296 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 296 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 296 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 296 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 296 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 297 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 297 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 297 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 298 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 298 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 298 "data/maps/HiddenVillage/scripts.pory"
	walk_right
	step_end

# 301 "data/maps/HiddenVillage/scripts.pory"
Movement_ClimbTheVine:
# 302 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 302 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 303 "data/maps/HiddenVillage/scripts.pory"
	walk_slow_up
	step_end

# 306 "data/maps/HiddenVillage/scripts.pory"
Movement_CameraPanLeftAndDown:
# 307 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 307 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 307 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 307 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 308 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 308 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 308 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 308 "data/maps/HiddenVillage/scripts.pory"
	walk_down
	step_end

# 311 "data/maps/HiddenVillage/scripts.pory"
Movement_CameraPanRightAndUp:
# 312 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 312 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 312 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 312 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 313 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 313 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 313 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 313 "data/maps/HiddenVillage/scripts.pory"
	walk_right
	step_end

# 316 "data/maps/HiddenVillage/scripts.pory"
HiddenVillage_Movement_StrengthToClass:
# 317 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 318 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 319 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 320 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 321 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 322 "data/maps/HiddenVillage/scripts.pory"
	face_up
	step_end

# 325 "data/maps/HiddenVillage/scripts.pory"
HiddenVillage_Movement_HeartToClass:
# 326 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 326 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 326 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 327 "data/maps/HiddenVillage/scripts.pory"
	face_up
	step_end

# 330 "data/maps/HiddenVillage/scripts.pory"
HiddenVillage_Movement_BrainToClass:
# 331 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 331 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 331 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 332 "data/maps/HiddenVillage/scripts.pory"
	face_up
	step_end

# 335 "data/maps/HiddenVillage/scripts.pory"
HiddenVillage_Movement_PlayerToClassLeft:
# 336 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 337 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 338 "data/maps/HiddenVillage/scripts.pory"
	face_up
	step_end

# 341 "data/maps/HiddenVillage/scripts.pory"
HiddenVillage_Movement_PlayerToClassRight:
# 342 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 343 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 344 "data/maps/HiddenVillage/scripts.pory"
	face_up
	step_end

# 348 "data/maps/HiddenVillage/scripts.pory"
Movement_StrengthWalkOff:
# 349 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 349 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 349 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 349 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 350 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 350 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 351 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 351 "data/maps/HiddenVillage/scripts.pory"
	walk_down
	step_end

# 354 "data/maps/HiddenVillage/scripts.pory"
Movement_HeartWalkOff:
# 355 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 356 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 356 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 357 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 357 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 357 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 358 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 358 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 359 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 359 "data/maps/HiddenVillage/scripts.pory"
	walk_down
	step_end

# 362 "data/maps/HiddenVillage/scripts.pory"
Movement_BrainWalkOff:
# 363 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 364 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 364 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 364 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 365 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 365 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 365 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 366 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 366 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 367 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 367 "data/maps/HiddenVillage/scripts.pory"
	walk_down
	step_end

# 371 "data/maps/HiddenVillage/scripts.pory"
Movement_StrengthReappear:
# 372 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 372 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 372 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 372 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 373 "data/maps/HiddenVillage/scripts.pory"
	delay_16
# 373 "data/maps/HiddenVillage/scripts.pory"
	delay_16
# 373 "data/maps/HiddenVillage/scripts.pory"
	delay_16
# 373 "data/maps/HiddenVillage/scripts.pory"
	delay_16
# 373 "data/maps/HiddenVillage/scripts.pory"
	delay_16
# 374 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 375 "data/maps/HiddenVillage/scripts.pory"
	face_left
	step_end

# 378 "data/maps/HiddenVillage/scripts.pory"
Movement_HeartReappear:
# 379 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 379 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 380 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 380 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 380 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 380 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 380 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 380 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 381 "data/maps/HiddenVillage/scripts.pory"
	walk_slow_up
	step_end

# 384 "data/maps/HiddenVillage/scripts.pory"
Movement_BrainReappear:
# 385 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 385 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 385 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 386 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 386 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 386 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 386 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 386 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 386 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 387 "data/maps/HiddenVillage/scripts.pory"
	walk_slow_up
	step_end

HiddenVillage_EventScript_FriendHeart_Intro_Text_0:
# 61 "data/maps/HiddenVillage/scripts.pory"
	.string "Heart: Good morning {PLAYER}! I was\n"
	.string "wondering if you were going to wake up\l"
	.string "today. Everybody else is waiting in the\l"
	.string "backyard, go and see the Elder in his\l"
	.string "lab and let him know you're ready!$"

HiddenVillage_EventScript_DefaultText_Text_0:
# 81 "data/maps/HiddenVillage/scripts.pory"
	.string "Hi {PLAYER}!$"

HiddenVillage_EventScript_FriendHeart_Text_0:
# 92 "data/maps/HiddenVillage/scripts.pory"
	.string "Heart: It took you long enough! Hey...\n"
	.string "are you okay?$"

HiddenVillage_EventScript_FriendHeart_Text_1:
# 95 "data/maps/HiddenVillage/scripts.pory"
	.string "Heart: We're currently in state 3...$"

HiddenVillage_EventScript_FriendStrength_Text_0:
# 107 "data/maps/HiddenVillage/scripts.pory"
	.string "Strength: You're finally here! We've\n"
	.string "been waiting for you!$"

HiddenVillage_EventScript_FriendStrength_Text_1:
# 110 "data/maps/HiddenVillage/scripts.pory"
	.string "Strength: Hey {PLAYER}! Do you remember\n"
	.string "how to get into the treehouse? Just\l"
	.string "climb the vine like this!$"

HiddenVillage_EventScript_Lady_Text_0:
# 130 "data/maps/HiddenVillage/scripts.pory"
	.string "{PLAYER}! You're going to be late! Hurry\n"
	.string "up and see the Village Elder...$"

HiddenVillage_EventScript_Lady_Text_1:
# 136 "data/maps/HiddenVillage/scripts.pory"
	.string "The Elder asked for help keeping an eye\n"
	.string "on you kids!$"

HiddenVillage_EventScript_Lady_Text_2:
# 140 "data/maps/HiddenVillage/scripts.pory"
	.string "H-hey! There's nothing past here...\n"
	.string "Weren't you going to see your friends\l"
	.string "at the Tree House? It's right over\l"
	.string "there!$"

HiddenVillage_EventScript_Lady_Text_3:
# 147 "data/maps/HiddenVillage/scripts.pory"
	.string "You can climb up it using the vine!$"

HiddenVillage_EventScript_Lady_Text_4:
# 158 "data/maps/HiddenVillage/scripts.pory"
	.string "It's pretty late... Isn't it past your\n"
	.string "bedtime?$"

HiddenVillage_EventScript_ElderClass_Text_0:
# 181 "data/maps/HiddenVillage/scripts.pory"
	.string "Elder: Good, you're all here! Everybody\n"
	.string "gather around.$"

HiddenVillage_EventScript_ElderClass_Text_1:
# 195 "data/maps/HiddenVillage/scripts.pory"
	.string "Elder: Welcome everybody, today we're\n"
	.string "going to be learning about taming\l"
	.string "Pokémon. --To be continued--$"

HiddenVillage_EventScript_ElderClass_Text_2:
# 198 "data/maps/HiddenVillage/scripts.pory"
	.string "Strength: Now that class is over we\n"
	.string "should go hangout at the treehouse!$"
