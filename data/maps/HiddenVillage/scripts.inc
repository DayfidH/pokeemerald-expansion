HiddenVillage_MapScripts::
# 7 "data/maps/HiddenVillage/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HiddenVillage_OnTransition
	.byte 0


HiddenVillage_OnTransition::
# 11 "data/maps/HiddenVillage/scripts.pory"
	switch VAR_HIDDEN_VILLAGE_STATE
# 12 "data/maps/HiddenVillage/scripts.pory"
	case 1, HiddenVillage_OnTransition_2
# 16 "data/maps/HiddenVillage/scripts.pory"
	case 2, HiddenVillage_OnTransition_3
	return

HiddenVillage_OnTransition_2:
# 13 "data/maps/HiddenVillage/scripts.pory"
	setobjectxyperm 1, 14, 14
# 14 "data/maps/HiddenVillage/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_LOOK_AROUND
	return

HiddenVillage_OnTransition_3:
# 17 "data/maps/HiddenVillage/scripts.pory"
	setobjectxyperm 1, 4, 14
# 18 "data/maps/HiddenVillage/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_WANDER_AROUND
	return


HiddenVillage_EventScript_Lady::
# 26 "data/maps/HiddenVillage/scripts.pory"
	lock
# 27 "data/maps/HiddenVillage/scripts.pory"
	faceplayer
# 29 "data/maps/HiddenVillage/scripts.pory"
	switch VAR_HIDDEN_VILLAGE_STATE
# 30 "data/maps/HiddenVillage/scripts.pory"
	case 0, HiddenVillage_EventScript_Lady_3
# 36 "data/maps/HiddenVillage/scripts.pory"
	case 1, HiddenVillage_EventScript_Lady_4
# 39 "data/maps/HiddenVillage/scripts.pory"
	case 2, HiddenVillage_EventScript_Lady_5
HiddenVillage_EventScript_Lady_1:
# 43 "data/maps/HiddenVillage/scripts.pory"
	release
	end

HiddenVillage_EventScript_Lady_3:
# 31 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_0
# 32 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 33 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 34 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
	goto HiddenVillage_EventScript_Lady_1

HiddenVillage_EventScript_Lady_4:
# 37 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_1
	goto HiddenVillage_EventScript_Lady_1

HiddenVillage_EventScript_Lady_5:
# 40 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_2
	goto HiddenVillage_EventScript_Lady_1


HiddenVillage_EventScript_LateTriggerLeft::
# 53 "data/maps/HiddenVillage/scripts.pory"
	lockall
# 54 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 55 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 56 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 58 "data/maps/HiddenVillage/scripts.pory"
	call HiddenVillage_EventScript_LateTriggerMain
# 60 "data/maps/HiddenVillage/scripts.pory"
	releaseall
	end


HiddenVillage_EventScript_LateTriggerRight::
# 66 "data/maps/HiddenVillage/scripts.pory"
	lockall
# 67 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 68 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 69 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 71 "data/maps/HiddenVillage/scripts.pory"
	call HiddenVillage_EventScript_LateTriggerMain
# 73 "data/maps/HiddenVillage/scripts.pory"
	releaseall
	end


HiddenVillage_EventScript_LateTriggerMain::
# 79 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_0
# 80 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 83 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 84 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 86 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
	return


HiddenVillage_EventScript_Lady_Text_0:
# 31 "data/maps/HiddenVillage/scripts.pory"
	.string "{PLAYER}! You're going to be late! Hurry\n"
	.string "up and see the Village Elder...$"

HiddenVillage_EventScript_Lady_Text_1:
# 37 "data/maps/HiddenVillage/scripts.pory"
	.string "I swear I saw a rare Pokémon hiding in\n"
	.string "this backyard just a second ago...$"

HiddenVillage_EventScript_Lady_Text_2:
# 40 "data/maps/HiddenVillage/scripts.pory"
	.string "The weather is so lovely today. The\n"
	.string "garden is thriving!$"
