HiddenVillage_Treehouse_MapScripts::
# 7 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, HiddenVillage_Treehouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

HiddenVillage_Treehouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	map_script_2 VAR_HIDDEN_VILLAGE_STATE, 3, HiddenVillage_Treehouse_EventScript_Cutscene
	.2byte 0


HiddenVillage_Treehouse_EventScript_Cutscene::
# 13 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	lockall
# 15 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerMovesToChair
# 16 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	waitmovement 0
# 20 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	msgbox HiddenVillage_Treehouse_EventScript_Cutscene_Text_0
# 21 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	closemessage
# 24 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	setvar VAR_HIDDEN_VILLAGE_STATE, 4
# 27 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	applymovement 3, Movement_StrengthLeaves
# 28 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	applymovement 1, Movement_HeartLeaves
# 29 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	applymovement 2, Movement_BrainLeaves
# 32 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	waitmovement 3
# 33 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	playse SE_EXIT
# 34 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	removeobject 3
# 37 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	waitmovement 1
# 38 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	playse SE_EXIT
# 39 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	removeobject 1
# 42 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	waitmovement 2
# 43 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	playse SE_EXIT
# 44 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	removeobject 2
# 47 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	setflag FLAG_HIDE_TREEHOUSE_NPCS
# 49 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	releaseall
	end


HiddenVillage_Treehouse_EventScript_DefaultText::
# 54 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	lock
# 55 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	faceplayer
# 56 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	msgbox HiddenVillage_Treehouse_EventScript_DefaultText_Text_0
# 57 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	release
	end


# 61 "data/maps/HiddenVillage_Treehouse/scripts.pory"
Movement_PlayerMovesToChair:
# 62 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	walk_up
# 62 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	walk_up
# 63 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	walk_left
# 64 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	face_up
	step_end

# 67 "data/maps/HiddenVillage_Treehouse/scripts.pory"
Movement_StrengthLeaves:
# 68 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	walk_down
# 68 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	walk_down
# 68 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	walk_down
# 69 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	walk_slow_down
	step_end

# 72 "data/maps/HiddenVillage_Treehouse/scripts.pory"
Movement_HeartLeaves:
# 73 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	walk_down
# 73 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	walk_down
# 74 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	walk_right
# 74 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	walk_right
# 74 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	walk_right
# 75 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	walk_slow_down
	step_end

# 78 "data/maps/HiddenVillage_Treehouse/scripts.pory"
Movement_BrainLeaves:
# 79 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	delay_16
# 80 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	walk_right
# 80 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	walk_right
# 81 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	walk_down
# 81 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	walk_down
# 81 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	walk_down
# 81 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	walk_down
# 82 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	walk_slow_down
	step_end

HiddenVillage_Treehouse_EventScript_Cutscene_Text_0:
# 20 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	.string "Heart: Today was so fun! Taming\n"
	.string "Pokémon looks so easy now thanks to\l"
	.string "the Elder!\p"
	.string "Brain: It looks easy but I guarantee\n"
	.string "you it's not...\p"
	.string "Strength: Time to go home!$"

HiddenVillage_Treehouse_EventScript_DefaultText_Text_0:
# 56 "data/maps/HiddenVillage_Treehouse/scripts.pory"
	.string "Hi {PLAYER}!$"
