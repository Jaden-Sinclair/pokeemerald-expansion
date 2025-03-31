.set LOCALID_ANNA_GRANDMOTHER, 1
.set LOCALID_ANNA_MOTHER, 2
.set LOCALID_ANNA, 3

EchelonCityWest_AnnaFlat_3F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, EchelonCityWest_AnnaFlat_3F_OnLoad
	.byte 0

EchelonCityWest_AnnaFlat_3F_OnLoad:
	compare VAR_MAIN_STORY_STATE, 9
	goto_if_lt EchelonCityWest_AnnaFlat_3F_EventScript_RemoveAnna
	compare VAR_MAIN_STORY_STATE, 11
	goto_if_lt EchelonCityWest_AnnaFlat_3F_EventScript_PlaceAnnaByGrandmother
	goto EchelonCityWest_AnnaFlat_3F_EventScript_RemoveAnna
	end

EchelonCityWest_AnnaFlat_3F_EventScript_RemoveAnna:
	removeobject LOCALID_ANNA
	setobjectxyperm LOCALID_ANNA, 5, 1
	setflag FLAG_HIDE_ANNA
	end

EchelonCityWest_AnnaFlat_3F_EventScript_PlaceAnnaByGrandmother:
	removeobject LOCALID_ANNA
	setobjectxyperm LOCALID_ANNA, 8, 2
	addobject LOCALID_ANNA
	clearflag FLAG_HIDE_ANNA
	setobjectmovementtype LOCALID_ANNA, MOVEMENT_TYPE_FACE_LEFT
	end

EchelonCityWest_AnnaFlat_3F_EventScript_AnnaMotherBehaviour::
	lock
	compare VAR_MAIN_STORY_STATE, 5
	goto_if_lt EchelonCityWest_AnnaFlat_3F_EventScript_AnnaMotherBeforePokemon
	compare VAR_MAIN_STORY_STATE, 10
	goto_if_lt EchelonCityWest_AnnaFlat_3F_EventScript_AnnaMotherBeforeAnnaTalk
	compare VAR_MAIN_STORY_STATE, 11
	goto_if_lt EchelonCityWest_AnnaFlat_3F_EventScript_AnnaMotherAfterAnnaTalk
	msgbox EchelonCityWest_AnnaFlat_3F_Text_AnnaMotherDefault, MSGBOX_NPC
	release
	end

EchelonCityWest_AnnaFlat_3F_Text_AnnaMotherDefault:
	.string "Hi {PLAYER}!\p"
	.string "Did you come home to visit your folks?\p"
	.string "I wish Anna would do that more often.$"

EchelonCityWest_AnnaFlat_3F_EventScript_AnnaMotherBeforePokemon:
	msgbox EchelonCityWest_AnnaFlat_3F_Text_AnnaMotherBeforePokemon, MSGBOX_NPC
	release
	end

EchelonCityWest_AnnaFlat_3F_Text_AnnaMotherBeforePokemon:
	.string "What are you doing up here, {PLAYER}?\n"
	.string "Anna went down looking for you already.$"

EchelonCityWest_AnnaFlat_3F_EventScript_AnnaMotherBeforeAnnaTalk:
	msgbox EchelonCityWest_AnnaFlat_3F_Text_AnnaMotherBeforeAnnaTalk, MSGBOX_NPC
	release
	end

EchelonCityWest_AnnaFlat_3F_Text_AnnaMotherBeforeAnnaTalk:
	.string "Hi {PLAYER}. Anna's in her Grandma's\n"
	.string "room, gushing about her new partner.$"

EchelonCityWest_AnnaFlat_3F_EventScript_AnnaMotherAfterAnnaTalk:
	msgbox EchelonCityWest_AnnaFlat_3F_Text_AnnaMotherAfterAnnaTalk, MSGBOX_NPC
	release
	end

EchelonCityWest_AnnaFlat_3F_Text_AnnaMotherAfterAnnaTalk:
	.string "You two stay safe out there.\n"
	.string "Don't go getting into any trouble!$"

EchelonCityWest_AnnaFlat_3F_EventScript_AnnaGrandmotherBehaviour::
	lock
	compare VAR_MAIN_STORY_STATE, 5
	goto_if_lt EchelonCityWest_AnnaFlat_3F_EventScript_AnnaGrandmotherBeforePokemon
	compare VAR_MAIN_STORY_STATE, 11
	goto_if_lt EchelonCityWest_AnnaFlat_3F_EventScript_AnnaGrandmotherAfterAnnaTalk
	msgbox EchelonCityWest_AnnaFlat_3F_Text_AnnaGrandmotherDefault, MSGBOX_NPC
	release
	end

EchelonCityWest_AnnaFlat_3F_Text_AnnaGrandmotherDefault:
	.string "I love hearing about all the adventures\n"
	.string "you kids are on. Reminds me of my youth.$"

EchelonCityWest_AnnaFlat_3F_EventScript_AnnaGrandmotherBeforePokemon:
	msgbox EchelonCityWest_AnnaFlat_3F_Text_AnnaGrandmotherBeforePokemon, MSGBOX_NPC
	release
	end

EchelonCityWest_AnnaFlat_3F_Text_AnnaGrandmotherBeforePokemon:
	.string "Good morning, {PLAYER}. Anna was in a\n"
	.string "hurry to meet up with you and get going.$"

EchelonCityWest_AnnaFlat_3F_EventScript_AnnaGrandmotherAfterAnnaTalk:
	call EchelonCityNorth_EventScript_BufferAnnaPokemonName
	msgbox EchelonCityWest_AnnaFlat_3F_Text_AnnaGrandmotherAfterAnnaTalk, MSGBOX_NPC
	release
	end

EchelonCityWest_AnnaFlat_3F_Text_AnnaGrandmotherAfterAnnaTalk:
	.string "Anna showed me her partner, {STR_VAR_2}.\p"
	.string "They're going to do so well together!$"
