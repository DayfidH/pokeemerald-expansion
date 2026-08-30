HiddenVillage_MapScripts::
# 12 "data/maps/HiddenVillage/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HiddenVillage_OnTransition
# 13 "data/maps/HiddenVillage/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, HiddenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

HiddenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 14 "data/maps/HiddenVillage/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, HiddenVillage_EventScript_FriendHeart_Intro
	.2byte 0


HiddenVillage_OnTransition::
# 21 "data/maps/HiddenVillage/scripts.pory"
	goto_if_set FLAG_HIDDEN_VILLAGE_HEART_INTRO_COMPLETE, HiddenVillage_OnTransition_2
HiddenVillage_OnTransition_1:
# 26 "data/maps/HiddenVillage/scripts.pory"
	switch VAR_HIDDEN_VILLAGE_STATE
# 27 "data/maps/HiddenVillage/scripts.pory"
	case 1, HiddenVillage_OnTransition_5
# 31 "data/maps/HiddenVillage/scripts.pory"
	case 2, HiddenVillage_OnTransition_6
# 37 "data/maps/HiddenVillage/scripts.pory"
	case 3, HiddenVillage_OnTransition_7
	return

HiddenVillage_OnTransition_2:
# 22 "data/maps/HiddenVillage/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto HiddenVillage_OnTransition_1

HiddenVillage_OnTransition_5:
# 28 "data/maps/HiddenVillage/scripts.pory"
	setobjectxyperm 1, 14, 14
# 29 "data/maps/HiddenVillage/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_LOOK_AROUND
	return

HiddenVillage_OnTransition_6:
# 32 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_2
# 33 "data/maps/HiddenVillage/scripts.pory"
	setobjectxyperm 1, 17, 5
# 34 "data/maps/HiddenVillage/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 35 "data/maps/HiddenVillage/scripts.pory"
	setobjectxyperm 4, 11, 11
	return

HiddenVillage_OnTransition_7:
# 38 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_2
# 39 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_3
	return


HiddenVillage_EventScript_DefaultText::
# 44 "data/maps/HiddenVillage/scripts.pory"
	lock
# 45 "data/maps/HiddenVillage/scripts.pory"
	faceplayer
# 46 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_DefaultText_Text_0
# 47 "data/maps/HiddenVillage/scripts.pory"
	setvar VAR_HIDDEN_VILLAGE_STATE, 2
# 48 "data/maps/HiddenVillage/scripts.pory"
	release
	end


HiddenVillage_EventScript_FriendStrength::
# 53 "data/maps/HiddenVillage/scripts.pory"
	lock
# 54 "data/maps/HiddenVillage/scripts.pory"
	faceplayer
# 55 "data/maps/HiddenVillage/scripts.pory"
	switch VAR_HIDDEN_VILLAGE_STATE
# 56 "data/maps/HiddenVillage/scripts.pory"
	case 1, HiddenVillage_EventScript_FriendStrength_3
# 59 "data/maps/HiddenVillage/scripts.pory"
	case 2, HiddenVillage_EventScript_FriendStrength_4
HiddenVillage_EventScript_FriendStrength_1:
# 69 "data/maps/HiddenVillage/scripts.pory"
	release
	end

HiddenVillage_EventScript_FriendStrength_3:
# 57 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_FriendStrength_Text_0
# 58 "data/maps/HiddenVillage/scripts.pory"
	closemessage
	goto HiddenVillage_EventScript_FriendStrength_1

HiddenVillage_EventScript_FriendStrength_4:
# 60 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_FriendStrength_Text_1
# 61 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 63 "data/maps/HiddenVillage/scripts.pory"
	applymovement 4, Movement_ClimbTheVine
# 64 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 65 "data/maps/HiddenVillage/scripts.pory"
	playse SE_EXIT
# 66 "data/maps/HiddenVillage/scripts.pory"
	removeobject 4
# 67 "data/maps/HiddenVillage/scripts.pory"
	setvar VAR_HIDDEN_VILLAGE_STATE, 3
	goto HiddenVillage_EventScript_FriendStrength_1


HiddenVillage_EventScript_FriendHeart_Intro::
# 74 "data/maps/HiddenVillage/scripts.pory"
	lockall
# 75 "data/maps/HiddenVillage/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 76 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 77 "data/maps/HiddenVillage/scripts.pory"
	applymovement 6, Heart_Movement_TowardsPlayer
# 78 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 79 "data/maps/HiddenVillage/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 81 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_FriendHeart_Intro_Text_0
# 82 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 84 "data/maps/HiddenVillage/scripts.pory"
	applymovement 6, Heart_RunToBackyard
# 85 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 86 "data/maps/HiddenVillage/scripts.pory"
	removeobject 6
# 89 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_HIDDEN_VILLAGE_HEART_INTRO_COMPLETE
# 92 "data/maps/HiddenVillage/scripts.pory"
	setvar VAR_TEMP_0, 1
# 94 "data/maps/HiddenVillage/scripts.pory"
	releaseall
	end


HiddenVillage_EventScript_FriendHeart::
# 99 "data/maps/HiddenVillage/scripts.pory"
	lock
# 100 "data/maps/HiddenVillage/scripts.pory"
	faceplayer
# 101 "data/maps/HiddenVillage/scripts.pory"
	switch VAR_HIDDEN_VILLAGE_STATE
# 102 "data/maps/HiddenVillage/scripts.pory"
	case 1, HiddenVillage_EventScript_FriendHeart_3
# 105 "data/maps/HiddenVillage/scripts.pory"
	case 3, HiddenVillage_EventScript_FriendHeart_4
HiddenVillage_EventScript_FriendHeart_1:
# 109 "data/maps/HiddenVillage/scripts.pory"
	release
	end

HiddenVillage_EventScript_FriendHeart_3:
# 103 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_FriendHeart_Text_0
# 104 "data/maps/HiddenVillage/scripts.pory"
	closemessage
	goto HiddenVillage_EventScript_FriendHeart_1

HiddenVillage_EventScript_FriendHeart_4:
# 106 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_FriendHeart_Text_1
# 107 "data/maps/HiddenVillage/scripts.pory"
	closemessage
	goto HiddenVillage_EventScript_FriendHeart_1


# 120 "data/maps/HiddenVillage/scripts.pory"
Heart_Movement_TowardsPlayer:
# 121 "data/maps/HiddenVillage/scripts.pory"
	walk_faster_left
# 121 "data/maps/HiddenVillage/scripts.pory"
	walk_faster_left
# 121 "data/maps/HiddenVillage/scripts.pory"
	walk_faster_left
# 121 "data/maps/HiddenVillage/scripts.pory"
	walk_faster_left
# 121 "data/maps/HiddenVillage/scripts.pory"
	walk_faster_left
	step_end

# 124 "data/maps/HiddenVillage/scripts.pory"
Heart_RunToBackyard:
# 125 "data/maps/HiddenVillage/scripts.pory"
	walk_faster_right
# 125 "data/maps/HiddenVillage/scripts.pory"
	walk_faster_right
# 125 "data/maps/HiddenVillage/scripts.pory"
	walk_faster_right
# 125 "data/maps/HiddenVillage/scripts.pory"
	walk_faster_right
# 125 "data/maps/HiddenVillage/scripts.pory"
	walk_faster_right
# 126 "data/maps/HiddenVillage/scripts.pory"
	walk_faster_up
# 126 "data/maps/HiddenVillage/scripts.pory"
	walk_faster_up
# 126 "data/maps/HiddenVillage/scripts.pory"
	walk_faster_up
# 127 "data/maps/HiddenVillage/scripts.pory"
	walk_faster_right
# 127 "data/maps/HiddenVillage/scripts.pory"
	walk_faster_right
# 127 "data/maps/HiddenVillage/scripts.pory"
	walk_faster_right
	step_end

# 130 "data/maps/HiddenVillage/scripts.pory"
Movement_ClimbTheVine:
# 131 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 131 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 132 "data/maps/HiddenVillage/scripts.pory"
	walk_slow_up
	step_end

HiddenVillage_EventScript_Lady::
# 139 "data/maps/HiddenVillage/scripts.pory"
	lock
# 140 "data/maps/HiddenVillage/scripts.pory"
	faceplayer
# 142 "data/maps/HiddenVillage/scripts.pory"
	switch VAR_HIDDEN_VILLAGE_STATE
# 143 "data/maps/HiddenVillage/scripts.pory"
	case 0, HiddenVillage_EventScript_Lady_3
# 149 "data/maps/HiddenVillage/scripts.pory"
	case 1, HiddenVillage_EventScript_Lady_4
# 152 "data/maps/HiddenVillage/scripts.pory"
	case 2, HiddenVillage_EventScript_Lady_5
HiddenVillage_EventScript_Lady_1:
# 165 "data/maps/HiddenVillage/scripts.pory"
	release
	end

HiddenVillage_EventScript_Lady_3:
# 144 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_0
# 145 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 146 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 147 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
	goto HiddenVillage_EventScript_Lady_1

HiddenVillage_EventScript_Lady_4:
# 150 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_1
	goto HiddenVillage_EventScript_Lady_1

HiddenVillage_EventScript_Lady_5:
# 153 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_2
# 154 "data/maps/HiddenVillage/scripts.pory"
	special SpawnCameraObject
# 155 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraPanLeftAndDown
# 156 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 157 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_3
# 158 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 159 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraPanRightAndUp
# 160 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 161 "data/maps/HiddenVillage/scripts.pory"
	special RemoveCameraObject
# 162 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 163 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
	goto HiddenVillage_EventScript_Lady_1


HiddenVillage_EventScript_LateTriggerLeft::
# 171 "data/maps/HiddenVillage/scripts.pory"
	lock
# 172 "data/maps/HiddenVillage/scripts.pory"
	faceplayer
# 173 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 174 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 175 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 176 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 177 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 179 "data/maps/HiddenVillage/scripts.pory"
	call HiddenVillage_EventScript_LateTriggerMain
# 181 "data/maps/HiddenVillage/scripts.pory"
	releaseall
	end


HiddenVillage_EventScript_LateTriggerRight::
# 187 "data/maps/HiddenVillage/scripts.pory"
	lockall
# 188 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 189 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 190 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 191 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 192 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 194 "data/maps/HiddenVillage/scripts.pory"
	call HiddenVillage_EventScript_LateTriggerMain
# 196 "data/maps/HiddenVillage/scripts.pory"
	releaseall
	end


HiddenVillage_EventScript_LateTriggerMain::
# 202 "data/maps/HiddenVillage/scripts.pory"
	switch VAR_HIDDEN_VILLAGE_STATE
# 203 "data/maps/HiddenVillage/scripts.pory"
	case 0, HiddenVillage_EventScript_LateTriggerMain_3
HiddenVillage_EventScript_LateTriggerMain_1:
# 211 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
	return

HiddenVillage_EventScript_LateTriggerMain_3:
# 204 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_0
# 205 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 207 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 208 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	goto HiddenVillage_EventScript_LateTriggerMain_1


# 215 "data/maps/HiddenVillage/scripts.pory"
Movement_CameraPanLeftAndDown:
# 216 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 216 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 216 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 216 "data/maps/HiddenVillage/scripts.pory"
	walk_left
# 217 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 217 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 217 "data/maps/HiddenVillage/scripts.pory"
	walk_down
# 217 "data/maps/HiddenVillage/scripts.pory"
	walk_down
	step_end

# 220 "data/maps/HiddenVillage/scripts.pory"
Movement_CameraPanRightAndUp:
# 221 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 221 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 221 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 221 "data/maps/HiddenVillage/scripts.pory"
	walk_up
# 222 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 222 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 222 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 222 "data/maps/HiddenVillage/scripts.pory"
	walk_right
	step_end

HiddenVillage_EventScript_DefaultText_Text_0:
# 46 "data/maps/HiddenVillage/scripts.pory"
	.string "Hi {PLAYER}!$"

HiddenVillage_EventScript_FriendStrength_Text_0:
# 57 "data/maps/HiddenVillage/scripts.pory"
	.string "Strength: You're finally here! We've\n"
	.string "been waiting for you!$"

HiddenVillage_EventScript_FriendStrength_Text_1:
# 60 "data/maps/HiddenVillage/scripts.pory"
	.string "Strength: Hey {PLAYER}! Do you remember\n"
	.string "how to get into the treehouse? Just\l"
	.string "climb the vine like this!$"

HiddenVillage_EventScript_FriendHeart_Intro_Text_0:
# 81 "data/maps/HiddenVillage/scripts.pory"
	.string "Heart: Good morning {PLAYER}! I was\n"
	.string "wondering if you were going to wake up\l"
	.string "today. Everybody else is waiting in the\l"
	.string "backyard, go and see the Elder in his\l"
	.string "lab and let him know you're ready!$"

HiddenVillage_EventScript_FriendHeart_Text_0:
# 103 "data/maps/HiddenVillage/scripts.pory"
	.string "Heart: It took you long enough! Hey...\n"
	.string "are you okay?$"

HiddenVillage_EventScript_FriendHeart_Text_1:
# 106 "data/maps/HiddenVillage/scripts.pory"
	.string "Heart: We're currently in state 3...$"

HiddenVillage_EventScript_Lady_Text_0:
# 144 "data/maps/HiddenVillage/scripts.pory"
	.string "{PLAYER}! You're going to be late! Hurry\n"
	.string "up and see the Village Elder...$"

HiddenVillage_EventScript_Lady_Text_1:
# 150 "data/maps/HiddenVillage/scripts.pory"
	.string "The Elder asked for help keeping an eye\n"
	.string "on you kids!$"

HiddenVillage_EventScript_Lady_Text_2:
# 153 "data/maps/HiddenVillage/scripts.pory"
	.string "H-hey! There's nothing past here...\n"
	.string "Weren't you going to see your friends\l"
	.string "at the Tree House? It's right over\l"
	.string "there!$"

HiddenVillage_EventScript_Lady_Text_3:
# 157 "data/maps/HiddenVillage/scripts.pory"
	.string "You can climb up it using the vine!$"
