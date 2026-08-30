HiddenVillage_EldersLab_MapScripts::
# 5 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HiddenVillage_EldersLab_OnTransition
# 6 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, HiddenVillage_EldersLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

HiddenVillage_EldersLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	map_script_2 VAR_HIDDEN_VILLAGE_STATE, 0, HiddenVillage_EldersLab_EventScript_IntroCutscene
	.2byte 0


HiddenVillage_EldersLab_OnTransition::
# 13 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	compare VAR_HIDDEN_VILLAGE_STATE, 1
	goto_if_eq HiddenVillage_EldersLab_OnTransition_1
	return

HiddenVillage_EldersLab_OnTransition_1:
# 14 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	setflag FLAG_TEMP_1
	return


HiddenVillage_EldersLab_EventScript_Elder::
# 23 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	lock
# 24 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	faceplayer
# 26 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	switch VAR_HIDDEN_VILLAGE_STATE
# 27 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	case 2, HiddenVillage_EldersLab_EventScript_Elder_3
# 29 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	case 3, HiddenVillage_EldersLab_EventScript_Elder_4
HiddenVillage_EldersLab_EventScript_Elder_1:
# 34 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	closemessage
# 35 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	release
	end

HiddenVillage_EldersLab_EventScript_Elder_3:
# 28 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	msgbox HiddenVillage_EldersLab_EventScript_Elder_Text_0
	goto HiddenVillage_EldersLab_EventScript_Elder_1

HiddenVillage_EldersLab_EventScript_Elder_4:
# 30 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	msgbox HiddenVillage_EldersLab_EventScript_Elder_Text_1
	goto HiddenVillage_EldersLab_EventScript_Elder_1


HiddenVillage_EldersLab_EventScript_IntroCutscene::
# 43 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	lockall
# 44 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	msgbox HiddenVillage_EldersLab_EventScript_IntroCutscene_Text_0
# 45 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	closemessage
# 47 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	special SpawnCameraObject
# 48 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HiddenVillage_EldersLab_Movement_CameraMovementOne
# 49 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	waitmovement 0
# 51 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, HiddenVillage_EldersLab_Movement_CameraPansToPlayer
# 52 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	applymovement LOCALID_ELDER, HiddenVillage_EldersLab_Movement_ElderWalksToPlayer
# 53 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	waitmovement 0
# 54 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	special RemoveCameraObject
# 56 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	msgbox HiddenVillage_EldersLab_EventScript_IntroCutscene_Text_1
# 57 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	closemessage
# 59 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HiddenVillage_EldersLab_Movement_PlayerMovesRight
# 60 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	waitmovement 0
# 62 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	applymovement LOCALID_ELDER, HiddenVillage_EldersLab_Movement_ElderExitsLab
# 63 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	playse SE_EXIT
# 64 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	removeobject LOCALID_ELDER
# 65 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	setflag FLAG_TEMP_1
# 67 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	setvar VAR_HIDDEN_VILLAGE_STATE, 1
# 69 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	releaseall
	end


# 76 "data/maps/HiddenVillage_EldersLab/scripts.pory"
HiddenVillage_EldersLab_Movement_PlayerMovesRight:
# 77 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_right
# 78 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	face_left
	step_end

# 81 "data/maps/HiddenVillage_EldersLab/scripts.pory"
HiddenVillage_EldersLab_Movement_CameraPansToPlayer:
# 82 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
# 82 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
# 83 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_right
# 83 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_right
# 83 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_right
# 83 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_right
# 84 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
# 84 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
# 84 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
# 84 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
	step_end

# 87 "data/maps/HiddenVillage_EldersLab/scripts.pory"
HiddenVillage_EldersLab_Movement_ElderWalksToPlayer:
# 88 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
# 88 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
# 89 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_right
# 89 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_right
# 89 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_right
# 89 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_right
# 90 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
# 90 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
# 90 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
	step_end

# 93 "data/maps/HiddenVillage_EldersLab/scripts.pory"
HiddenVillage_EldersLab_Movement_CameraMovementOne:
# 94 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_up
# 94 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_up
# 94 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_up
# 95 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_left
# 95 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_left
# 95 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_left
# 95 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_left
# 96 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_up
# 96 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_up
	step_end

# 99 "data/maps/HiddenVillage_EldersLab/scripts.pory"
HiddenVillage_EldersLab_Movement_ElderExitsLab:
# 100 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
# 100 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
	step_end

HiddenVillage_EldersLab_EventScript_Elder_Text_0:
# 28 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	.string "Ah, {PLAYER}. The meeting in the\n"
	.string "backyard went well. We have much to\l"
	.string "discuss.$"

HiddenVillage_EldersLab_EventScript_Elder_Text_1:
# 30 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	.string "The village is relying on you. Have you\n"
	.string "checked the garden yet?$"

HiddenVillage_EldersLab_EventScript_IntroCutscene_Text_0:
# 44 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	.string "Ah! {PLAYER}!$"

HiddenVillage_EldersLab_EventScript_IntroCutscene_Text_1:
# 56 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	.string "You're finally here, everybody is\n"
	.string "already in the backyard waiting for us.\l"
	.string "Let's head out.$"
