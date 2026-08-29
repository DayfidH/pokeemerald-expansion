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


HiddenVillage_EventScript_DefaultText::
# 23 "data/maps/HiddenVillage/scripts.pory"
	lock
# 24 "data/maps/HiddenVillage/scripts.pory"
	faceplayer
# 25 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_DefaultText_Text_0
# 26 "data/maps/HiddenVillage/scripts.pory"
	setvar VAR_HIDDEN_VILLAGE_STATE, 2
# 27 "data/maps/HiddenVillage/scripts.pory"
	release
	end


HiddenVillage_EventScript_Lady::
# 35 "data/maps/HiddenVillage/scripts.pory"
	lock
# 36 "data/maps/HiddenVillage/scripts.pory"
	faceplayer
# 38 "data/maps/HiddenVillage/scripts.pory"
	switch VAR_HIDDEN_VILLAGE_STATE
# 39 "data/maps/HiddenVillage/scripts.pory"
	case 0, HiddenVillage_EventScript_Lady_3
# 45 "data/maps/HiddenVillage/scripts.pory"
	case 1, HiddenVillage_EventScript_Lady_4
# 48 "data/maps/HiddenVillage/scripts.pory"
	case 2, HiddenVillage_EventScript_Lady_5
HiddenVillage_EventScript_Lady_1:
# 52 "data/maps/HiddenVillage/scripts.pory"
	release
	end

HiddenVillage_EventScript_Lady_3:
# 40 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_0
# 41 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 42 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 43 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
	goto HiddenVillage_EventScript_Lady_1

HiddenVillage_EventScript_Lady_4:
# 46 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_1
	goto HiddenVillage_EventScript_Lady_1

HiddenVillage_EventScript_Lady_5:
# 49 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_2
	goto HiddenVillage_EventScript_Lady_1


HiddenVillage_EventScript_LateTriggerLeft::
# 62 "data/maps/HiddenVillage/scripts.pory"
	lockall
# 63 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 64 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 65 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 67 "data/maps/HiddenVillage/scripts.pory"
	call HiddenVillage_EventScript_LateTriggerMain
# 69 "data/maps/HiddenVillage/scripts.pory"
	releaseall
	end


HiddenVillage_EventScript_LateTriggerRight::
# 75 "data/maps/HiddenVillage/scripts.pory"
	lockall
# 76 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 77 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 78 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
# 80 "data/maps/HiddenVillage/scripts.pory"
	call HiddenVillage_EventScript_LateTriggerMain
# 82 "data/maps/HiddenVillage/scripts.pory"
	releaseall
	end


HiddenVillage_EventScript_LateTriggerMain::
# 88 "data/maps/HiddenVillage/scripts.pory"
	msgbox HiddenVillage_EventScript_Lady_Text_0
# 89 "data/maps/HiddenVillage/scripts.pory"
	closemessage
# 92 "data/maps/HiddenVillage/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 93 "data/maps/HiddenVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 95 "data/maps/HiddenVillage/scripts.pory"
	waitmovement 0
	return


HiddenVillage_EventScript_DefaultText_Text_0:
# 25 "data/maps/HiddenVillage/scripts.pory"
	.string "Hi {PLAYER}!$"

HiddenVillage_EventScript_Lady_Text_0:
# 40 "data/maps/HiddenVillage/scripts.pory"
	.string "{PLAYER}! You're going to be late! Hurry\n"
	.string "up and see the Village Elder...$"

HiddenVillage_EventScript_Lady_Text_1:
# 46 "data/maps/HiddenVillage/scripts.pory"
	.string "I swear I saw a rare Pokémon hiding in\n"
	.string "this backyard just a second ago...$"

HiddenVillage_EventScript_Lady_Text_2:
# 49 "data/maps/HiddenVillage/scripts.pory"
	.string "The weather is so lovely today. The\n"
	.string "garden is thriving!$"
