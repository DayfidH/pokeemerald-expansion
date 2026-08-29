HiddenVillage_MapScripts::
# 8 "data/maps/HiddenVillage/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HiddenVillage_OnTransition
	.byte 0


HiddenVillage_OnTransition::
# 12 "data/maps/HiddenVillage/scripts.pory"
	switch VAR_HIDDEN_VILLAGE_STATE
# 13 "data/maps/HiddenVillage/scripts.pory"
	case 2, HiddenVillage_OnTransition_2
# 17 "data/maps/HiddenVillage/scripts.pory"
	case 3, HiddenVillage_OnTransition_3
	return

HiddenVillage_OnTransition_2:
# 15 "data/maps/HiddenVillage/scripts.pory"
	setobjectxyperm 1, 14, 14
# 16 "data/maps/HiddenVillage/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_LOOK_AROUND
	return

HiddenVillage_OnTransition_3:
# 19 "data/maps/HiddenVillage/scripts.pory"
	setobjectxyperm 1, 4, 14
# 20 "data/maps/HiddenVillage/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_WANDER_AROUND
	return


HiddenVillage_EventScript_Lady::
# 29 "data/maps/HiddenVillage/scripts.pory"
	lock
# 30 "data/maps/HiddenVillage/scripts.pory"
	faceplayer
# 32 "data/maps/HiddenVillage/scripts.pory"
	switch VAR_HIDDEN_VILLAGE_STATE
# 33 "data/maps/HiddenVillage/scripts.pory"
	case 1, HiddenVillage_EventScript_Lady_3
# 40 "data/maps/HiddenVillage/scripts.pory"
	case 2, HiddenVillage_EventScript_Lady_4
# 43 "data/maps/HiddenVillage/scripts.pory"
	case 3, HiddenVillage_EventScript_Lady_5
HiddenVillage_EventScript_Lady_1:
# 47 "data/maps/HiddenVillage/scripts.pory"
	release
	end

HiddenVillage_EventScript_Lady_3:
# 34 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_0
# 35 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 37 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 38 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
	goto HiddenVillage_EventScript_Lady_1

HiddenVillage_EventScript_Lady_4:
# 41 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_1
	goto HiddenVillage_EventScript_Lady_1

HiddenVillage_EventScript_Lady_5:
# 44 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_2
	goto HiddenVillage_EventScript_Lady_1


HiddenVillage_EventScript_LateTrigger::
# 57 "data/maps/HiddenVillage/scripts.pory"
	lockall
# 60 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 62 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 63 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 65 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_0
# 66 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 69 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 70 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HiddenVillage_Movement_PushPlayerDown
# 73 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 75 "data/maps/HiddenVillage/scripts.pory"
	releaseall
	end


# 82 "data/maps/HiddenVillage/scripts.pory"
HiddenVillage_Movement_PushPlayerDown:
# 83 "data/maps/HiddenVillage/scripts.pory"
	walk_down
	step_end

HiddenVillage_EventScript_Lady_Text_0:
# 34 "data/maps/HiddenVillage/scripts.pory"
	.string "{PLAYER}! You're going to be late! Hurry\n"
	.string "up and see the Village Elder...$"

HiddenVillage_EventScript_Lady_Text_1:
# 41 "data/maps/HiddenVillage/scripts.pory"
	.string "I swear I saw a rare Pokémon hiding in\n"
	.string "this backyard just a second ago...$"

HiddenVillage_EventScript_Lady_Text_2:
# 44 "data/maps/HiddenVillage/scripts.pory"
	.string "The weather is so lovely today. The\n"
	.string "garden is thriving!$"
