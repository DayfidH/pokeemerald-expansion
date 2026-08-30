HiddenVillage_MapScripts::
# 8 "data/maps/HiddenVillage/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HiddenVillage_OnTransition
	.byte 0


HiddenVillage_OnTransition::
# 12 "data/maps/HiddenVillage/scripts.pory"
	switch VAR_HIDDEN_VILLAGE_STATE
# 13 "data/maps/HiddenVillage/scripts.pory"
	case 1, HiddenVillage_OnTransition_2
# 17 "data/maps/HiddenVillage/scripts.pory"
	case 2, HiddenVillage_OnTransition_3
	return

HiddenVillage_OnTransition_2:
# 14 "data/maps/HiddenVillage/scripts.pory"
	setobjectxyperm 1, 14, 14
# 15 "data/maps/HiddenVillage/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_LOOK_AROUND
	return

HiddenVillage_OnTransition_3:
# 18 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_2
# 19 "data/maps/HiddenVillage/scripts.pory"
	setobjectxyperm 1, 17, 5
# 20 "data/maps/HiddenVillage/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 21 "data/maps/HiddenVillage/scripts.pory"
	setobjectxyperm 4, 11, 11
	return


HiddenVillage_EventScript_DefaultText::
# 26 "data/maps/HiddenVillage/scripts.pory"
	lock
# 27 "data/maps/HiddenVillage/scripts.pory"
	faceplayer
# 28 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_DefaultText_Text_0
# 29 "data/maps/HiddenVillage/scripts.pory"
	setvar VAR_HIDDEN_VILLAGE_STATE, 2
# 30 "data/maps/HiddenVillage/scripts.pory"
	release
	end


HiddenVillage_EventScript_ClimbTheVine::
# 35 "data/maps/HiddenVillage/scripts.pory"
	lock
# 36 "data/maps/HiddenVillage/scripts.pory"
	faceplayer
# 37 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_ClimbTheVine_Text_0
# 38 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 40 "data/maps/HiddenVillage/scripts.pory"
	applymovement 4, Movement_ClimbTheVine
# 41 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 42 "data/maps/HiddenVillage/scripts.pory"
	removeobject 4
# 43 "data/maps/HiddenVillage/scripts.pory"
	setflag FLAG_TEMP_3
# 44 "data/maps/HiddenVillage/scripts.pory"
	release
	end


# 48 "data/maps/HiddenVillage/scripts.pory"
Movement_ClimbTheVine:
# 49 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 49 "data/maps/HiddenVillage/scripts.pory"
	walk_right
# 50 "data/maps/HiddenVillage/scripts.pory"
	walk_slow_up
	step_end

HiddenVillage_EventScript_Lady::
# 57 "data/maps/HiddenVillage/scripts.pory"
	lock
# 58 "data/maps/HiddenVillage/scripts.pory"
	faceplayer
# 60 "data/maps/HiddenVillage/scripts.pory"
	switch VAR_HIDDEN_VILLAGE_STATE
# 61 "data/maps/HiddenVillage/scripts.pory"
	case 0, HiddenVillage_EventScript_Lady_3
# 67 "data/maps/HiddenVillage/scripts.pory"
	case 1, HiddenVillage_EventScript_Lady_4
# 70 "data/maps/HiddenVillage/scripts.pory"
	case 2, HiddenVillage_EventScript_Lady_5
HiddenVillage_EventScript_Lady_1:
# 84 "data/maps/HiddenVillage/scripts.pory"
	release
	end

HiddenVillage_EventScript_Lady_3:
# 62 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_0
# 63 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 64 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 65 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
	goto HiddenVillage_EventScript_Lady_1

HiddenVillage_EventScript_Lady_4:
# 68 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_1
	goto HiddenVillage_EventScript_Lady_1

HiddenVillage_EventScript_Lady_5:
# 71 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_2
# 72 "data/maps/HiddenVillage/scripts.pory"
	special SpawnCameraObject
# 73 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraPanLeftAndDown
# 74 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 75 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_3
# 76 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 77 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Movement_CameraPanRightAndUp
# 78 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 79 "data/maps/HiddenVillage/scripts.pory"
	special RemoveCameraObject
# 80 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 81 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
	goto HiddenVillage_EventScript_Lady_1


HiddenVillage_EventScript_LateTriggerLeft::
# 94 "data/maps/HiddenVillage/scripts.pory"
	lockall
# 95 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 96 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 97 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 98 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 99 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 101 "data/maps/HiddenVillage/scripts.pory"
	call HiddenVillage_EventScript_LateTriggerMain
# 103 "data/maps/HiddenVillage/scripts.pory"
	releaseall
	end


HiddenVillage_EventScript_LateTriggerRight::
# 109 "data/maps/HiddenVillage/scripts.pory"
	lockall
# 110 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 111 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 112 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 113 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 114 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 116 "data/maps/HiddenVillage/scripts.pory"
	call HiddenVillage_EventScript_LateTriggerMain
# 118 "data/maps/HiddenVillage/scripts.pory"
	releaseall
	end


HiddenVillage_EventScript_LateTriggerMain::
# 124 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_0
# 125 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 128 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 129 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 131 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
	return


# 135 "data/maps/HiddenVillage/scripts.pory"
Movement_CameraPanLeftAndDown:
# 136 "data/maps/HiddenVillage/scripts.pory"
	walk_slow_left
# 136 "data/maps/HiddenVillage/scripts.pory"
	walk_slow_left
# 136 "data/maps/HiddenVillage/scripts.pory"
	walk_slow_left
# 136 "data/maps/HiddenVillage/scripts.pory"
	walk_slow_left
# 137 "data/maps/HiddenVillage/scripts.pory"
	walk_slow_down
# 137 "data/maps/HiddenVillage/scripts.pory"
	walk_slow_down
# 137 "data/maps/HiddenVillage/scripts.pory"
	walk_slow_down
# 137 "data/maps/HiddenVillage/scripts.pory"
	walk_slow_down
	step_end

# 140 "data/maps/HiddenVillage/scripts.pory"
Movement_CameraPanRightAndUp:
# 141 "data/maps/HiddenVillage/scripts.pory"
	walk_slow_up
# 141 "data/maps/HiddenVillage/scripts.pory"
	walk_slow_up
# 141 "data/maps/HiddenVillage/scripts.pory"
	walk_slow_up
# 141 "data/maps/HiddenVillage/scripts.pory"
	walk_slow_up
# 142 "data/maps/HiddenVillage/scripts.pory"
	walk_slow_right
# 142 "data/maps/HiddenVillage/scripts.pory"
	walk_slow_right
# 142 "data/maps/HiddenVillage/scripts.pory"
	walk_slow_right
# 142 "data/maps/HiddenVillage/scripts.pory"
	walk_slow_right
	step_end

HiddenVillage_EventScript_DefaultText_Text_0:
# 28 "data/maps/HiddenVillage/scripts.pory"
	.string "Hi {PLAYER}!$"

HiddenVillage_EventScript_ClimbTheVine_Text_0:
# 37 "data/maps/HiddenVillage/scripts.pory"
	.string "Hey {PLAYER}! Do you remember how to\n"
	.string "get into the treehouse? Just climb the\l"
	.string "vine like this!$"

HiddenVillage_EventScript_Lady_Text_0:
# 62 "data/maps/HiddenVillage/scripts.pory"
	.string "{PLAYER}! You're going to be late! Hurry\n"
	.string "up and see the Village Elder...$"

HiddenVillage_EventScript_Lady_Text_1:
# 68 "data/maps/HiddenVillage/scripts.pory"
	.string "The Elder asked for help keeping an eye\n"
	.string "on you kids!$"

HiddenVillage_EventScript_Lady_Text_2:
# 71 "data/maps/HiddenVillage/scripts.pory"
	.string "H-hey! There's nothing past here...\n"
	.string "Weren't you going to see your friends\l"
	.string "at the Tree House? It's right over\l"
	.string "there!$"

HiddenVillage_EventScript_Lady_Text_3:
# 75 "data/maps/HiddenVillage/scripts.pory"
	.string "You can climb up it using the vine!$"
