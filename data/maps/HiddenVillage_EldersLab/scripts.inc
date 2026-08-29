HiddenVillage_EldersLab_MapScripts::
# 7 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HiddenVillage_EldersLab_OnTransition
# 8 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, HiddenVillage_EldersLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

HiddenVillage_EldersLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 9 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	map_script_2 VAR_HIDDEN_VILLAGE_STATE, 0, HiddenVillage_EldersLab_EventScript_IntroCutscene
	.2byte 0


HiddenVillage_EldersLab_OnTransition::
# 15 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	compare VAR_HIDDEN_VILLAGE_STATE, 1
	goto_if_eq HiddenVillage_EldersLab_OnTransition_1
	return

HiddenVillage_EldersLab_OnTransition_1:
# 16 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	setflag FLAG_TEMP_1
	return


HiddenVillage_EldersLab_EventScript_Elder::
# 25 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	lock
# 26 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	faceplayer
# 28 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	switch VAR_HIDDEN_VILLAGE_STATE
# 29 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	case 2, HiddenVillage_EldersLab_EventScript_Elder_3
# 31 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	case 3, HiddenVillage_EldersLab_EventScript_Elder_4
HiddenVillage_EldersLab_EventScript_Elder_1:
# 36 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	closemessage
# 37 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	release
	end

HiddenVillage_EldersLab_EventScript_Elder_3:
# 30 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	msgbox HiddenVillage_EldersLab_EventScript_Elder_Text_0
	goto HiddenVillage_EldersLab_EventScript_Elder_1

HiddenVillage_EldersLab_EventScript_Elder_4:
# 32 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	msgbox HiddenVillage_EldersLab_EventScript_Elder_Text_1
	goto HiddenVillage_EldersLab_EventScript_Elder_1


HiddenVillage_EldersLab_EventScript_IntroCutscene::
# 45 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	lockall
# 47 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HiddenVillage_EldersLab_Movement_PlayerEnter
# 48 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	waitmovement 0
# 50 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	msgbox HiddenVillage_EldersLab_EventScript_IntroCutscene_Text_0
# 51 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	closemessage
# 53 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	applymovement 1, HiddenVillage_EldersLab_Movement_ElderLeave
# 54 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	waitmovement 0
# 56 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	playse SE_EXIT
# 57 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	removeobject 1
# 58 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	setflag FLAG_TEMP_1
# 60 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	setvar VAR_HIDDEN_VILLAGE_STATE, 1
# 62 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	releaseall
	end


# 69 "data/maps/HiddenVillage_EldersLab/scripts.pory"
HiddenVillage_EldersLab_Movement_PlayerEnter:
# 70 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_up
# 70 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_up
# 70 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_up
# 70 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_up
# 70 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_up
# 70 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_up
# 70 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_up
	step_end

# 73 "data/maps/HiddenVillage_EldersLab/scripts.pory"
HiddenVillage_EldersLab_Movement_ElderLeave:
# 74 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_left
# 74 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_left
# 75 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
# 75 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
# 75 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
# 76 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_right
# 76 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_right
# 77 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
# 77 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
# 77 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
# 77 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
# 77 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
# 77 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	walk_down
	step_end

HiddenVillage_EldersLab_EventScript_Elder_Text_0:
# 30 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	.string "Ah, {PLAYER}. The meeting in the\n"
	.string "backyard went well. We have much to\l"
	.string "discuss.$"

HiddenVillage_EldersLab_EventScript_Elder_Text_1:
# 32 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	.string "The village is relying on you. Have you\n"
	.string "checked the garden yet?$"

HiddenVillage_EldersLab_EventScript_IntroCutscene_Text_0:
# 50 "data/maps/HiddenVillage_EldersLab/scripts.pory"
	.string "You're finally here, everybody is\n"
	.string "already waiting in the backyard, lets go$"
