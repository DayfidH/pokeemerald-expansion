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
# 23 "data/maps/HiddenVillage/scripts.pory"
	case 0, HiddenVillage_OnTransition_6
# 27 "data/maps/HiddenVillage/scripts.pory"
	case 1, HiddenVillage_OnTransition_7
# 34 "data/maps/HiddenVillage/scripts.pory"
	case 2, HiddenVillage_OnTransition_8
# 49 "data/maps/HiddenVillage/scripts.pory"
	case 3, HiddenVillage_OnTransition_9
# 57 "data/maps/HiddenVillage/scripts.pory"
	case 4, HiddenVillage_OnTransition_10
HiddenVillage_OnTransition_4:
	end

HiddenVillage_OnTransition_2:
# 17 "data/maps/HiddenVillage/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto HiddenVillage_OnTransition_1

HiddenVillage_OnTransition_6:
# 24 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_12
# 25 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_13
	goto HiddenVillage_OnTransition_4

HiddenVillage_OnTransition_7:
# 28 "data/maps/HiddenVillage/scripts.pory"
	setobjectxyperm LOCALID_LADY, 14, 14
# 29 "data/maps/HiddenVillage/scripts.pory"
	setobjectmovementtype LOCALID_LADY, MOVEMENT_TYPE_LOOK_AROUND
# 30 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_12
# 31 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_13
	goto HiddenVillage_OnTransition_4

HiddenVillage_OnTransition_8:
# 35 "data/maps/HiddenVillage/scripts.pory"
	setobjectxyperm LOCALID_LADY, 17, 5
# 36 "data/maps/HiddenVillage/scripts.pory"
	setobjectmovementtype LOCALID_LADY, MOVEMENT_TYPE_FACE_DOWN
# 39 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_11
# 42 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_12
# 45 "data/maps/HiddenVillage/scripts.pory"
	setobjectxyperm LOCALID_TREEHOUSE_STRENGTH, 11, 11
# 46 "data/maps/HiddenVillage/scripts.pory"
	setobjectmovementtype LOCALID_TREEHOUSE_STRENGTH, MOVEMENT_TYPE_FACE_LEFT
	goto HiddenVillage_OnTransition_4

HiddenVillage_OnTransition_9:
# 50 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_11
# 51 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_12
# 55 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_13
	goto HiddenVillage_OnTransition_4

HiddenVillage_OnTransition_10:
# 58 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_11
# 59 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_12
# 60 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_13
	goto HiddenVillage_OnTransition_4


HiddenVillage_EventScript_FriendHeart_Intro::
# 69 "data/maps/HiddenVillage/scripts.pory"
	lockall
# 71 "data/maps/HiddenVillage/scripts.pory"
	applymovement LOCALID_INTRO_HEART, Common_Movement_ExclamationMark
# 72 "data/maps/HiddenVillage/scripts.pory"
	playse SE_PIN
# 73 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 74 "data/maps/HiddenVillage/scripts.pory"
	applymovement LOCALID_INTRO_HEART, Heart_Movement_TowardsPlayer
# 75 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 76 "data/maps/HiddenVillage/scripts.pory"
	applymovement LOCALID_INTRO_HEART, Common_Movement_FaceUp
# 78 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_FriendHeart_Intro_Text_0
# 79 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 81 "data/maps/HiddenVillage/scripts.pory"
	applymovement LOCALID_INTRO_HEART, Heart_RunToBackyard
# 82 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 83 "data/maps/HiddenVillage/scripts.pory"
	removeobject LOCALID_INTRO_HEART
# 85 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_HIDDEN_VILLAGE_HEART_INTRO_COMPLETE
# 86 "data/maps/HiddenVillage/scripts.pory"
	setvar VAR_TEMP_0, 1
# 88 "data/maps/HiddenVillage/scripts.pory"
	releaseall
	end


HiddenVillage_EventScript_DefaultText::
# 96 "data/maps/HiddenVillage/scripts.pory"
	lock
# 97 "data/maps/HiddenVillage/scripts.pory"
	faceplayer
# 98 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_DefaultText_Text_0
# 99 "data/maps/HiddenVillage/scripts.pory"
	setvar VAR_HIDDEN_VILLAGE_STATE, 2
# 100 "data/maps/HiddenVillage/scripts.pory"
	release
	end


HiddenVillage_EventScript_FriendHeart::
# 105 "data/maps/HiddenVillage/scripts.pory"
	lock
# 106 "data/maps/HiddenVillage/scripts.pory"
	faceplayer
# 107 "data/maps/HiddenVillage/scripts.pory"
	switch VAR_HIDDEN_VILLAGE_STATE
# 108 "data/maps/HiddenVillage/scripts.pory"
	case 1, HiddenVillage_EventScript_FriendHeart_3
# 111 "data/maps/HiddenVillage/scripts.pory"
	case 3, HiddenVillage_EventScript_FriendHeart_4
# 116 "data/maps/HiddenVillage/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_HIDDEN_VILLAGE_STATE
# 119 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_FriendHeart_Text_2
HiddenVillage_EventScript_FriendHeart_1:
# 121 "data/maps/HiddenVillage/scripts.pory"
	release
	end

HiddenVillage_EventScript_FriendHeart_3:
# 109 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_FriendHeart_Text_0
# 110 "data/maps/HiddenVillage/scripts.pory"
	closemessage
	goto HiddenVillage_EventScript_FriendHeart_1

HiddenVillage_EventScript_FriendHeart_4:
# 112 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_FriendHeart_Text_1
# 113 "data/maps/HiddenVillage/scripts.pory"
	closemessage
	goto HiddenVillage_EventScript_FriendHeart_1


HiddenVillage_EventScript_FriendStrength::
# 126 "data/maps/HiddenVillage/scripts.pory"
	lock
# 127 "data/maps/HiddenVillage/scripts.pory"
	faceplayer
# 128 "data/maps/HiddenVillage/scripts.pory"
	switch VAR_HIDDEN_VILLAGE_STATE
# 129 "data/maps/HiddenVillage/scripts.pory"
	case 1, HiddenVillage_EventScript_FriendStrength_3
# 132 "data/maps/HiddenVillage/scripts.pory"
	case 2, HiddenVillage_EventScript_FriendStrength_4
# 144 "data/maps/HiddenVillage/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_HIDDEN_VILLAGE_STATE
# 147 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_FriendHeart_Text_2
HiddenVillage_EventScript_FriendStrength_1:
# 149 "data/maps/HiddenVillage/scripts.pory"
	release
	end

HiddenVillage_EventScript_FriendStrength_3:
# 130 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_FriendStrength_Text_0
# 131 "data/maps/HiddenVillage/scripts.pory"
	closemessage
	goto HiddenVillage_EventScript_FriendStrength_1

HiddenVillage_EventScript_FriendStrength_4:
# 133 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_FriendStrength_Text_1
# 134 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 136 "data/maps/HiddenVillage/scripts.pory"
	applymovement LOCALID_TREEHOUSE_STRENGTH, Movement_ClimbTheVine
# 137 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 138 "data/maps/HiddenVillage/scripts.pory"
	playse SE_EXIT
# 139 "data/maps/HiddenVillage/scripts.pory"
	removeobject LOCALID_TREEHOUSE_STRENGTH
# 141 "data/maps/HiddenVillage/scripts.pory"
	setvar VAR_HIDDEN_VILLAGE_STATE, 3
	goto HiddenVillage_EventScript_FriendStrength_1


HiddenVillage_EventScript_Lady::
# 154 "data/maps/HiddenVillage/scripts.pory"
	lock
# 155 "data/maps/HiddenVillage/scripts.pory"
	faceplayer
# 157 "data/maps/HiddenVillage/scripts.pory"
	switch VAR_HIDDEN_VILLAGE_STATE
# 158 "data/maps/HiddenVillage/scripts.pory"
	case 0, HiddenVillage_EventScript_Lady_3
# 164 "data/maps/HiddenVillage/scripts.pory"
	case 1, HiddenVillage_EventScript_Lady_4
# 168 "data/maps/HiddenVillage/scripts.pory"
	case 2, HiddenVillage_EventScript_Lady_5
# 186 "data/maps/HiddenVillage/scripts.pory"
	case 3, HiddenVillage_EventScript_Lady_6
# 191 "data/maps/HiddenVillage/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_HIDDEN_VILLAGE_STATE
# 194 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_FriendHeart_Text_2
HiddenVillage_EventScript_Lady_1:
# 196 "data/maps/HiddenVillage/scripts.pory"
	release
	end

HiddenVillage_EventScript_Lady_3:
# 159 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_0
# 160 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 161 "data/maps/HiddenVillage/scripts.pory"
	applymovement LOCALID_LADY, Common_Movement_FaceDown
# 162 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
	goto HiddenVillage_EventScript_Lady_1

HiddenVillage_EventScript_Lady_4:
# 165 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_1
# 166 "data/maps/HiddenVillage/scripts.pory"
	closemessage
	goto HiddenVillage_EventScript_Lady_1

HiddenVillage_EventScript_Lady_5:
# 169 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_2
# 170 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 172 "data/maps/HiddenVillage/scripts.pory"
	special SpawnCameraObject
# 173 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraPanLeftAndDown
# 174 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 176 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_3
# 177 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 179 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraPanRightAndUp
# 180 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 181 "data/maps/HiddenVillage/scripts.pory"
	special RemoveCameraObject
# 183 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 184 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
	goto HiddenVillage_EventScript_Lady_1

HiddenVillage_EventScript_Lady_6:
# 187 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_4
# 188 "data/maps/HiddenVillage/scripts.pory"
	closemessage
	goto HiddenVillage_EventScript_Lady_1


HiddenVillage_EventScript_ElderClass_Left::
# 204 "data/maps/HiddenVillage/scripts.pory"
	lockall
# 205 "data/maps/HiddenVillage/scripts.pory"
	setvar VAR_TEMP_1, 0
# 206 "data/maps/HiddenVillage/scripts.pory"
	goto HiddenVillage_EventScript_ElderClass
	return


HiddenVillage_EventScript_ElderClass_Right::
# 210 "data/maps/HiddenVillage/scripts.pory"
	lockall
# 211 "data/maps/HiddenVillage/scripts.pory"
	setvar VAR_TEMP_1, 1
# 212 "data/maps/HiddenVillage/scripts.pory"
	goto HiddenVillage_EventScript_ElderClass
	return


HiddenVillage_EventScript_ElderClass::
# 216 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_ElderClass_Text_0
# 217 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 219 "data/maps/HiddenVillage/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq HiddenVillage_EventScript_ElderClass_2
# 222 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HiddenVillage_Movement_PlayerToClassRight
HiddenVillage_EventScript_ElderClass_1:
# 225 "data/maps/HiddenVillage/scripts.pory"
	applymovement LOCALID_FRIEND_STRENGTH, HiddenVillage_Movement_StrengthToClass
# 226 "data/maps/HiddenVillage/scripts.pory"
	applymovement LOCALID_FRIEND_HEART, HiddenVillage_Movement_HeartToClass
# 227 "data/maps/HiddenVillage/scripts.pory"
	applymovement LOCALID_FRIEND_BRAIN, HiddenVillage_Movement_BrainToClass
# 228 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 230 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_ElderClass_Text_1
# 231 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 233 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_ElderClass_Text_2
# 234 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 237 "data/maps/HiddenVillage/scripts.pory"
	applymovement LOCALID_FRIEND_STRENGTH, Movement_StrengthWalkOff
# 238 "data/maps/HiddenVillage/scripts.pory"
	applymovement LOCALID_FRIEND_HEART, Movement_HeartWalkOff
# 239 "data/maps/HiddenVillage/scripts.pory"
	applymovement LOCALID_FRIEND_BRAIN, Movement_BrainWalkOff
# 240 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 243 "data/maps/HiddenVillage/scripts.pory"
	removeobject LOCALID_FRIEND_STRENGTH
# 244 "data/maps/HiddenVillage/scripts.pory"
	removeobject LOCALID_FRIEND_HEART
# 245 "data/maps/HiddenVillage/scripts.pory"
	removeobject LOCALID_FRIEND_BRAIN
# 246 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_11
# 249 "data/maps/HiddenVillage/scripts.pory"
	clearflag FLAG_TEMP_12
# 250 "data/maps/HiddenVillage/scripts.pory"
	clearflag FLAG_TEMP_13
# 251 "data/maps/HiddenVillage/scripts.pory"
	addobject LOCALID_TREEHOUSE_STRENGTH
# 252 "data/maps/HiddenVillage/scripts.pory"
	addobject LOCALID_TREEHOUSE_HEART
# 253 "data/maps/HiddenVillage/scripts.pory"
	addobject LOCALID_TREEHOUSE_BRAIN
# 256 "data/maps/HiddenVillage/scripts.pory"
	applymovement LOCALID_TREEHOUSE_STRENGTH, Movement_StrengthReappear
# 257 "data/maps/HiddenVillage/scripts.pory"
	applymovement LOCALID_TREEHOUSE_HEART, Movement_HeartReappear
# 258 "data/maps/HiddenVillage/scripts.pory"
	applymovement LOCALID_TREEHOUSE_BRAIN, Movement_BrainReappear
# 261 "data/maps/HiddenVillage/scripts.pory"
	waitmovement LOCALID_TREEHOUSE_HEART
# 262 "data/maps/HiddenVillage/scripts.pory"
	playse SE_EXIT
# 263 "data/maps/HiddenVillage/scripts.pory"
	removeobject LOCALID_TREEHOUSE_HEART
# 265 "data/maps/HiddenVillage/scripts.pory"
	waitmovement LOCALID_TREEHOUSE_BRAIN
# 266 "data/maps/HiddenVillage/scripts.pory"
	playse SE_EXIT
# 267 "data/maps/HiddenVillage/scripts.pory"
	removeobject LOCALID_TREEHOUSE_BRAIN
# 270 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_12
# 273 "data/maps/HiddenVillage/scripts.pory"
	waitmovement LOCALID_TREEHOUSE_STRENGTH
# 274 "data/maps/HiddenVillage/scripts.pory"
	setobjectxyperm LOCALID_TREEHOUSE_STRENGTH, 11, 11
# 275 "data/maps/HiddenVillage/scripts.pory"
	setobjectmovementtype LOCALID_TREEHOUSE_STRENGTH, MOVEMENT_TYPE_FACE_LEFT
# 279 "data/maps/HiddenVillage/scripts.pory"
	setvar VAR_HIDDEN_VILLAGE_STATE, 2
# 281 "data/maps/HiddenVillage/scripts.pory"
	releaseall
	end

HiddenVillage_EventScript_ElderClass_2:
# 220 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HiddenVillage_Movement_PlayerToClassLeft
	goto HiddenVillage_EventScript_ElderClass_1


HiddenVillage_EventScript_LateTriggerLeft::
# 289 "data/maps/HiddenVillage/scripts.pory"
	lockall
# 290 "data/maps/HiddenVillage/scripts.pory"
	applymovement LOCALID_LADY, Common_Movement_ExclamationMark
# 291 "data/maps/HiddenVillage/scripts.pory"
	playse SE_PIN
# 292 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 293 "data/maps/HiddenVillage/scripts.pory"
	applymovement LOCALID_LADY, Common_Movement_FaceLeft
# 294 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 295 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 296 "data/maps/HiddenVillage/scripts.pory"
	call HiddenVillage_EventScript_LateTriggerMain
# 297 "data/maps/HiddenVillage/scripts.pory"
	releaseall
	end


HiddenVillage_EventScript_LateTriggerRight::
# 302 "data/maps/HiddenVillage/scripts.pory"
	lockall
# 303 "data/maps/HiddenVillage/scripts.pory"
	applymovement LOCALID_LADY, Common_Movement_ExclamationMark
# 304 "data/maps/HiddenVillage/scripts.pory"
	playse SE_PIN
# 305 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 306 "data/maps/HiddenVillage/scripts.pory"
	applymovement LOCALID_LADY, Common_Movement_FaceRight
# 307 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 308 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 309 "data/maps/HiddenVillage/scripts.pory"
	call HiddenVillage_EventScript_LateTriggerMain
# 310 "data/maps/HiddenVillage/scripts.pory"
	releaseall
	end


HiddenVillage_EventScript_LateTriggerMain::
# 315 "data/maps/HiddenVillage/scripts.pory"
	switch VAR_HIDDEN_VILLAGE_STATE
# 316 "data/maps/HiddenVillage/scripts.pory"
	case 0, HiddenVillage_EventScript_LateTriggerMain_3
HiddenVillage_EventScript_LateTriggerMain_1:
	return

HiddenVillage_EventScript_LateTriggerMain_3:
# 317 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_0
# 318 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 319 "data/maps/HiddenVillage/scripts.pory"
	applymovement LOCALID_LADY, Common_Movement_FaceDown
# 320 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 321 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
	goto HiddenVillage_EventScript_LateTriggerMain_1


# 329 "data/maps/HiddenVillage/scripts.pory"
Heart_Movement_TowardsPlayer:
# 330 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 330 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 330 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 330 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 330 "data/maps/HiddenVillage/scripts.pory"
	walk_left
	step_end

# 333 "data/maps/HiddenVillage/scripts.pory"
Heart_RunToBackyard:
# 334 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 334 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 334 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 334 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 334 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 335 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 335 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 335 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 336 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 336 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 336 "data/maps/HiddenVillage/scripts.pory"
	walk_right
	step_end

# 339 "data/maps/HiddenVillage/scripts.pory"
Movement_ClimbTheVine:
# 340 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 340 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 341 "data/maps/HiddenVillage/scripts.pory"
	walk_slow_up
	step_end

# 344 "data/maps/HiddenVillage/scripts.pory"
Movement_CameraPanLeftAndDown:
# 345 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 345 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 345 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 345 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 346 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 346 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 346 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 346 "data/maps/HiddenVillage/scripts.pory"
	walk_down
	step_end

# 349 "data/maps/HiddenVillage/scripts.pory"
Movement_CameraPanRightAndUp:
# 350 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 350 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 350 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 350 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 351 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 351 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 351 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 351 "data/maps/HiddenVillage/scripts.pory"
	walk_right
	step_end

# 354 "data/maps/HiddenVillage/scripts.pory"
HiddenVillage_Movement_StrengthToClass:
# 355 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 356 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 357 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 358 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 359 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 360 "data/maps/HiddenVillage/scripts.pory"
	face_up
	step_end

# 363 "data/maps/HiddenVillage/scripts.pory"
HiddenVillage_Movement_HeartToClass:
# 364 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 364 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 364 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 365 "data/maps/HiddenVillage/scripts.pory"
	face_up
	step_end

# 368 "data/maps/HiddenVillage/scripts.pory"
HiddenVillage_Movement_BrainToClass:
# 369 "data/maps/HiddenVillage/scripts.pory"
	delay_16
# 370 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 370 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 370 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 371 "data/maps/HiddenVillage/scripts.pory"
	face_up
	step_end

# 375 "data/maps/HiddenVillage/scripts.pory"
HiddenVillage_Movement_PlayerToClassLeft:
# 376 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 377 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 378 "data/maps/HiddenVillage/scripts.pory"
	face_up
	step_end

# 381 "data/maps/HiddenVillage/scripts.pory"
HiddenVillage_Movement_PlayerToClassRight:
# 382 "data/maps/HiddenVillage/scripts.pory"
	walk_up
	step_end

# 386 "data/maps/HiddenVillage/scripts.pory"
Movement_StrengthWalkOff:
# 387 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 387 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 387 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 387 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 388 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 388 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 389 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 389 "data/maps/HiddenVillage/scripts.pory"
	walk_down
	step_end

# 392 "data/maps/HiddenVillage/scripts.pory"
Movement_HeartWalkOff:
# 393 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 394 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 394 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 395 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 395 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 395 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 396 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 396 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 397 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 397 "data/maps/HiddenVillage/scripts.pory"
	walk_down
	step_end

# 400 "data/maps/HiddenVillage/scripts.pory"
Movement_BrainWalkOff:
# 401 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 402 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 402 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 402 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 403 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 403 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 403 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 404 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 404 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 405 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 405 "data/maps/HiddenVillage/scripts.pory"
	walk_down
	step_end

# 409 "data/maps/HiddenVillage/scripts.pory"
Movement_StrengthReappear:
# 410 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 411 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 412 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 413 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 414 "data/maps/HiddenVillage/scripts.pory"
	delay_16
# 414 "data/maps/HiddenVillage/scripts.pory"
	delay_16
# 414 "data/maps/HiddenVillage/scripts.pory"
	delay_16
# 415 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 416 "data/maps/HiddenVillage/scripts.pory"
	face_left
	step_end

# 419 "data/maps/HiddenVillage/scripts.pory"
Movement_HeartReappear:
# 420 "data/maps/HiddenVillage/scripts.pory"
	delay_4
# 421 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 421 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 422 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 422 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 422 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 422 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 422 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 422 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 423 "data/maps/HiddenVillage/scripts.pory"
	walk_slow_up
	step_end

# 426 "data/maps/HiddenVillage/scripts.pory"
Movement_BrainReappear:
# 427 "data/maps/HiddenVillage/scripts.pory"
	delay_8
# 428 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 428 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 428 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 429 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 429 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 429 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 429 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 429 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 429 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 430 "data/maps/HiddenVillage/scripts.pory"
	walk_slow_up
	step_end

HiddenVillage_EventScript_FriendHeart_Intro_Text_0:
# 78 "data/maps/HiddenVillage/scripts.pory"
	.string "Heart: Good morning {PLAYER}! I was\n"
	.string "wondering if you were going to wake up\l"
	.string "today. Everybody else is waiting in the\l"
	.string "backyard, go and see the Elder in his\l"
	.string "lab and let him know you're ready!$"

HiddenVillage_EventScript_DefaultText_Text_0:
# 98 "data/maps/HiddenVillage/scripts.pory"
	.string "Hi {PLAYER}!$"

HiddenVillage_EventScript_FriendHeart_Text_0:
# 109 "data/maps/HiddenVillage/scripts.pory"
	.string "Heart: It took you long enough! Hey...\n"
	.string "are you okay?$"

HiddenVillage_EventScript_FriendHeart_Text_1:
# 112 "data/maps/HiddenVillage/scripts.pory"
	.string "Heart: We're currently in state 3...$"

HiddenVillage_EventScript_FriendHeart_Text_2:
# 119 "data/maps/HiddenVillage/scripts.pory"
	.string "DEBUG_MISSING TEXT\n"
	.string "State ({STR_VAR_1})$"

HiddenVillage_EventScript_FriendStrength_Text_0:
# 130 "data/maps/HiddenVillage/scripts.pory"
	.string "Strength: You're finally here! We've\n"
	.string "been waiting for you!$"

HiddenVillage_EventScript_FriendStrength_Text_1:
# 133 "data/maps/HiddenVillage/scripts.pory"
	.string "Strength: Hey {PLAYER}! Do you remember\n"
	.string "how to get into the treehouse? Just\l"
	.string "climb the vine like this!$"

HiddenVillage_EventScript_Lady_Text_0:
# 159 "data/maps/HiddenVillage/scripts.pory"
	.string "{PLAYER}! You're going to be late! Hurry\n"
	.string "up and see the Village Elder...$"

HiddenVillage_EventScript_Lady_Text_1:
# 165 "data/maps/HiddenVillage/scripts.pory"
	.string "The Elder asked for help keeping an eye\n"
	.string "on you kids!$"

HiddenVillage_EventScript_Lady_Text_2:
# 169 "data/maps/HiddenVillage/scripts.pory"
	.string "H-hey! There's nothing past here...\n"
	.string "Weren't you going to see your friends\l"
	.string "at the Tree House? It's right over\l"
	.string "there!$"

HiddenVillage_EventScript_Lady_Text_3:
# 176 "data/maps/HiddenVillage/scripts.pory"
	.string "You can climb up it using the vine!$"

HiddenVillage_EventScript_Lady_Text_4:
# 187 "data/maps/HiddenVillage/scripts.pory"
	.string "It's pretty late... Isn't it past your\n"
	.string "bedtime?$"

HiddenVillage_EventScript_ElderClass_Text_0:
# 216 "data/maps/HiddenVillage/scripts.pory"
	.string "Elder: Good, you're all here! Everybody\n"
	.string "gather around.$"

HiddenVillage_EventScript_ElderClass_Text_1:
# 230 "data/maps/HiddenVillage/scripts.pory"
	.string "Elder: Welcome everybody, today we're\n"
	.string "going to be learning about taming\l"
	.string "Pokémon. --To be continued--$"

HiddenVillage_EventScript_ElderClass_Text_2:
# 233 "data/maps/HiddenVillage/scripts.pory"
	.string "Strength: Now that class is over we\n"
	.string "should go hangout at the treehouse!$"
