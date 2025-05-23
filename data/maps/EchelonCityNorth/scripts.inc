.set LOCALID_WEST_BRIDGE_GUARD, 1
.set LOCALID_EAST_BRIDGE_GUARD, 5
.set LOCALID_ANNA, 10
.set LOCALID_WISTFUL_BOY, 11
.set LOCALID_BATTLE_GIRL_POKEMON, 14
.set LOCALID_BATTLE_BOY_POKEMON, 15
.set LOCALID_ROGER, 16
.set LOCALID_EVAN, 17

EchelonCityNorth_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EchelonCityNorth_OnFrame
	map_script MAP_SCRIPT_ON_LOAD, EchelonCityNorth_OnLoad
	.byte 0

EchelonCityNorth_OnFrame:
	map_script_2 VAR_MAIN_STORY_STATE, 8, EchelonCityNorth_EventScript_FirstBattle
	.2byte 0

EchelonCityNorth_OnLoad:
	call EchelonCityNorth_EventScript_PlaceAnna
	call EchelonCityNorth_EventScript_PlaceRoger
	end

EchelonCityNorth_EventScript_PlaceAnna:
	clearflag FLAG_LOCATION_SET
	compare VAR_MAIN_STORY_STATE, 5
	call_if_eq EchelonCityNorth_EventScript_AnnaSetLocationFlowers
	compare VAR_MAIN_STORY_STATE, 6
	call_if_eq EchelonCityNorth_EventScript_AnnaSetLocationHidden
	compare VAR_MAIN_STORY_STATE, 8
	call_if_eq EchelonCityNorth_EventScript_AnnaSetLocationLabBattle
	call_if_unset FLAG_LOCATION_SET, EchelonCityNorth_EventScript_AnnaSetLocationHidden
	return

EchelonCityNorth_EventScript_PlaceRoger:
	clearflag FLAG_LOCATION_SET
	compare VAR_MAIN_STORY_STATE, 8
	call_if_eq EchelonCityNorth_EventScript_ShowRoger
	compare VAR_MAIN_STORY_STATE, 9
	call_if_eq EchelonCityNorth_EventScript_ShowRoger
	call_if_unset FLAG_LOCATION_SET, EchelonCityNorth_EventScript_HideRoger
	return

EchelonCityNorth_EventScript_ShowRoger:
	removeobject LOCALID_ROGER
	removeobject LOCALID_EVAN
	removeobject LOCALID_WISTFUL_BOY
	setobjectxyperm LOCALID_ROGER, 13, 19
	setobjectxyperm LOCALID_EVAN, 13, 18
	setobjectxyperm LOCALID_WISTFUL_BOY, 14, 18
	addobject LOCALID_ROGER
	addobject LOCALID_EVAN
	addobject LOCALID_WISTFUL_BOY
	clearflag FLAG_HIDE_ROGER
	setobjectmovementtype LOCALID_ROGER, MOVEMENT_TYPE_FACE_RIGHT
	setobjectmovementtype LOCALID_EVAN, MOVEMENT_TYPE_FACE_RIGHT
	setobjectmovementtype LOCALID_WISTFUL_BOY, MOVEMENT_TYPE_FACE_LEFT
	setflag FLAG_LOCATION_SET
	return

EchelonCityNorth_EventScript_HideRoger:
	removeobject LOCALID_ROGER
	removeobject LOCALID_EVAN
	setobjectxyperm LOCALID_ROGER, 13, 19
	setobjectxyperm LOCALID_EVAN, 13, 18
	setflag FLAG_HIDE_ROGER
	setflag FLAG_LOCATION_SET
	return

EchelonCityNorth_EventScript_FirstBattle:
	lock
	setvar VAR_MAIN_STORY_STATE, 9
	applymovement LOCALID_ANNA, Common_Movement_ExclamationMark
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	applymovement LOCALID_ANNA, Common_Movement_RunRight
	waitmovement 0
	applymovement LOCALID_ANNA, Common_Movement_RunRight
	waitmovement 0
	bufferleadmonspeciesname STR_VAR_1
	call EchelonCityNorth_EventScript_BufferAnnaPokemonName
	msgbox EchelonCityNorth_Text_AnnaBattle, MSGBOX_NPC
	switch VAR_STARTER_MON
	case 0, EchelonCityNorth_EventScript_BattleAnnaPachydent
	case 1, EchelonCityNorth_EventScript_BattleAnnaSharpuggle
	case 2, EchelonCityNorth_EventScript_BattleAnnaWispan
	end

EchelonCityNorth_EventScript_BufferAnnaPokemonName::
	switch VAR_STARTER_MON
	option 0, EchelonCityNorth_EventScript_BufferAnnaPokemonPachydent
	option 1, EchelonCityNorth_EventScript_BufferAnnaPokemonSharpuggle
	option 2, EchelonCityNorth_EventScript_BufferAnnaPokemonWispan
	return

EchelonCityNorth_EventScript_BufferAnnaPokemonPachydent:
	bufferspeciesname STR_VAR_2, SPECIES_PACHYDENT
	return

EchelonCityNorth_EventScript_BufferAnnaPokemonSharpuggle:
	bufferspeciesname STR_VAR_2, SPECIES_SHARPUGGLE
	return

EchelonCityNorth_EventScript_BufferAnnaPokemonWispan:
	bufferspeciesname STR_VAR_2, SPECIES_WISPAN
	return

EchelonCityNorth_Text_AnnaBattle:
	.string "Got your Pokémon? Then let's battle!\n"
	.string "We'll see if you can beat my {STR_VAR_2}.$"

EchelonCityNorth_EventScript_BattleAnnaPachydent:
	trainerbattle_no_intro TRAINER_ANNA_FIRST_PACHYDENT, EchelonCityNorth_Text_AnnaDefeat
	goto EchelonCityNorth_EventScript_DefeatedAnna
	end

EchelonCityNorth_EventScript_BattleAnnaSharpuggle:
	trainerbattle_no_intro TRAINER_ANNA_FIRST_SHARPUGGLE, EchelonCityNorth_Text_AnnaDefeat
	goto EchelonCityNorth_EventScript_DefeatedAnna
	end

EchelonCityNorth_EventScript_BattleAnnaWispan:
	trainerbattle_no_intro TRAINER_ANNA_FIRST_WISPAN, EchelonCityNorth_Text_AnnaDefeat
	goto EchelonCityNorth_EventScript_DefeatedAnna
	end

EchelonCityNorth_Text_AnnaDefeat:
	.string "Wow! Your {STR_VAR_1} is so strong!$"

EchelonCityNorth_EventScript_DefeatedAnna:
	switch VAR_STARTER_MON
	option 0, EchelonCityNorth_EventScript_BufferAnnaPokemonPachydent
	option 1, EchelonCityNorth_EventScript_BufferAnnaPokemonSharpuggle
	option 2, EchelonCityNorth_EventScript_BufferAnnaPokemonWispan
	msgbox EchelonCityNorth_Text_AnnaHeadHome, MSGBOX_NPC
	applymovement LOCALID_ANNA, EchelonCityNorth_Movement_AnnaHeadsHome
	waitmovement 0
	call EchelonCityNorth_EventScript_AnnaSetLocationHidden
	releaseall
	end

EchelonCityNorth_Text_AnnaHeadHome:
	.string "Wow, that was incredible!\p"
	.string "Such an exhilarating  battle!\p"
	.string "I can't wait to get going and challenge\n"
	.string "my first gym.\p"
	.string "But first I have to run home and show\n"
	.string "my family {STR_VAR_2}. They'll love her!\p"
	.string "Come find me before you head out, I\n"
	.string "don't wanna get left behind.\n"
	.string "Seeya {PLAYER}!$"

EchelonCityNorth_Movement_AnnaHeadsHome:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

EchelonCityNorth_EventScript_KidRunsOff:
	lockall
	applymovement LOCALID_WISTFUL_BOY, EchelonCityNorth_Movement_KidRunsUp
	waitmovement 0
	turnobject LOCALID_EVAN, DIR_SOUTH
	msgbox EchelonCityNorth_Text_EvanTooEasy, MSGBOX_NPC
	setvar VAR_MAIN_STORY_STATE, 10
	releaseall
	end

EchelonCityNorth_Text_EvanTooEasy:
	.string "These losers are too easy!\p"
	.string "You take the next battle, see if they\n"
	.string "cry as much as that last one.$"

EchelonCityNorth_Movement_KidRunsUp:
	jump_in_place_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	end

EchelonCityNorth_EventScript_WestBridgeGuardBehaviour::
	lockall
	msgbox EchelonCityNorth_Text_WestBridgeGuardDontBother, MSGBOX_NPC
	turnobject LOCALID_WEST_BRIDGE_GUARD, DIR_SOUTH
	releaseall
	end

EchelonCityNorth_Text_WestBridgeGuardDontBother:
	.string "Don't bother me if it isn't something\n"
	.string "important.$"

EchelonCityNorth_EventScript_AnnaSetLocationFlowers:
	removeobject LOCALID_ANNA
	setobjectxyperm LOCALID_ANNA, 20, 11
	addobject LOCALID_ANNA
	clearflag FLAG_HIDE_ANNA
	setobjectmovementtype LOCALID_ANNA, MOVEMENT_TYPE_FACE_UP
	setflag FLAG_LOCATION_SET
	return

EchelonCityNorth_EventScript_AnnaSetLocationHidden:
	removeobject LOCALID_ANNA
	setobjectxyperm LOCALID_ANNA, 47, 16
	setflag FLAG_HIDE_ANNA
	setflag FLAG_LOCATION_SET
	return

EchelonCityNorth_EventScript_AnnaSetLocationLabBattle:
	removeobject LOCALID_ANNA
	setobjectxyperm LOCALID_ANNA, 43, 16
	addobject LOCALID_ANNA
	clearflag FLAG_HIDE_ANNA
	setobjectmovementtype LOCALID_ANNA, MOVEMENT_TYPE_FACE_RIGHT
	setflag FLAG_LOCATION_SET
	return

EchelonCityNorth_EventScript_AnnaRunsToLab::
	lockall
	turnobject LOCALID_ANNA, DIR_SOUTH
	msgbox EchelonCityNorth_Text_AnnaFlowersBeautiful, MSGBOX_NPC
	applymovement LOCALID_ANNA, EchelonCityNorth_Movement_AnnaRunToLab
	waitmovement 0
	setvar VAR_MAIN_STORY_STATE, 6
	call EchelonCityNorth_EventScript_AnnaSetLocationHidden
	releaseall
	end

EchelonCityNorth_Text_AnnaFlowersBeautiful:
	.string "The flowers here are so beautiful!\p"
	.string "I'm gonna run ahead to the lab. See ya\n"
	.string "there!$"

EchelonCityNorth_Movement_AnnaRunToLab:
	walk_faster_down
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	step_end

EchelonCityNorth_EventScript_WistfulBoyBehaviour::
	lockall
	msgbox EchelonCityNorth_Text_WistfulBoy, MSGBOX_NPC
	turnobject LOCALID_WISTFUL_BOY, DIR_SOUTH
	releaseall
	end

EchelonCityNorth_Text_WistfulBoy:
	.string "It's great up here. I wish I didn't have\n"
	.string "to go back.$"

EchelonCityNorth_EventScript_BattleGirlBehaviour::
	lockall
	msgbox EchelonCityNorth_Text_BattleGirlUseMove, MSGBOX_DEFAULT
	applymovement LOCALID_BATTLE_GIRL_POKEMON, EchelonCityNorth_Movement_BattleGirlPokemonAct
	waitmovement 0
	releaseall
	end

EchelonCityNorth_Text_BattleGirlUseMove:
	.string "Pachydent, use Pound!$"

EchelonCityNorth_Movement_BattleGirlPokemonAct:
	walk_fast_right
	jump_in_place_right
	walk_fast_left
	face_right
	step_end

EchelonCityNorth_EventScript_BattleBoyBehaviour::
	lockall
	msgbox EchelonCityNorth_Text_BattleBoyUseMove, MSGBOX_DEFAULT
	applymovement LOCALID_BATTLE_BOY_POKEMON, EchelonCityNorth_Movement_BattleBoyPokemonAct
	waitmovement 0
	releaseall
	end

EchelonCityNorth_Text_BattleBoyUseMove:
	.string "Sharpuggle, use Tackle!$"

EchelonCityNorth_Movement_BattleBoyPokemonAct:
	walk_fast_left
	jump_in_place_left
	walk_fast_right
	face_left
	step_end

EchelonCityNorth_EventScript_BattleGirlPokemonBehaviour::
	lockall
	applymovement LOCALID_BATTLE_GIRL_POKEMON, EchelonCityNorth_Movement_BattleGirlPachydent
	waitmovement 0
	msgbox EchelonCityNorth_Text_BattleGirlPokemonSpeak MSGBOX_DEFAULT
	releaseall
	end

EchelonCityNorth_Text_BattleGirlPokemonSpeak:
	.string "Pachy-pachy!$"

EchelonCityNorth_Movement_BattleGirlPachydent:
	jump_in_place_right
	step_end

EchelonCityNorth_EventScript_BattleBoyPokemonBehaviour::
	lockall
	applymovement LOCALID_BATTLE_BOY_POKEMON, EchelonCityNorth_Movement_BattleBoySharpuggle
	waitmovement 0
	msgbox EchelonCityNorth_Text_BattleBoyPokemonSpeak MSGBOX_DEFAULT
	releaseall
	end

EchelonCityNorth_Text_BattleBoyPokemonSpeak:
	.string "Shar!$"

EchelonCityNorth_Movement_BattleBoySharpuggle:
	jump_in_place_left
	step_end

EchelonCityNorth_EventScript_EastBridgeGuardBehaviour::
	lockall
	goto_if_unset FLAG_RECEIVED_STARTER, EchelonCityNorth_EventScript_EastBridgeGuardNotAuthorized
	goto_if_unset FLAG_ECW_NORTH_BRIDGE_ID_CHECKED, EchelonCityNorth_EventScript_EastBridgeGuardCheckId
	msgbox EchelonCityNorth_Text_EastBridgeGuardNotAuthorized, MSGBOX_NPC
	releaseall
	end

EchelonCityNorth_EventScript_EastBridgeGuardNotAuthorized:
	call EchelonCityNorth_EventScript_EastBridgeGuardNotAuthorizedSpeech
	releaseall
	end

EchelonCityNorth_EventScript_EastBridgeGuardStopPlayer::
	setflag FLAG_STOPPED_BY_GUARD
	goto_if_set FLAG_ECN_EAST_BRIDGE_ID_CHECKED, EchelonCityNorth_EventScript_EastBridgeGuardIgnore
	applymovement LOCALID_EAST_BRIDGE_GUARD, Common_Movement_FacePlayer
	waitmovement 0
	call_if_unset FLAG_RECEIVED_STARTER, EchelonCityNorth_EventScript_EastBridgeGuardNotAuthorizedSpeech
	call_if_set FLAG_RECEIVED_STARTER, EchelonCityNorth_EventScript_EastBridgeGuardCheckId
	applymovement LOCALID_EAST_BRIDGE_GUARD, Common_Movement_FaceOriginalDirection
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	releaseall
	end

EchelonCityNorth_EventScript_EastBridgeGuardNotAuthorizedSpeech:
	lock
	msgbox EchelonCityNorth_Text_EastBridgeGuardNotAuthorized, MSGBOX_NPC
	return

EchelonCityNorth_EventScript_EastBridgeGuardCheckId:
	lockall
	msgbox EchelonCityNorth_Text_EastBridgeGuardCheckId, MSGBOX_NPC
	return

EchelonCityNorth_Text_EastBridgeGuardCheckId:
	.string "Let me check your Trainer ID.\p"
	.string "...\p"
	.string "You need more badges before you're\n"
	.string "allowed to cross here.$"

EchelonCityNorth_EventScript_EastBridgeGuardIgnore:
	clearflag FLAG_STOPPED_BY_GUARD
	releaseall
	end

EchelonCityNorth_Text_EastBridgeGuardNotAuthorized:
	.string "You're not authorized to cross here.$"

EchelonCityNorth_EventScript_ProtestGuardBehaviour::
	msgbox EchelonCityNorth_Text_ProtestGuardSilence, MSGBOX_DEFAULT
	closemessage
	end

EchelonCityNorth_Text_ProtestGuardSilence:
	.string "...$"

EchelonCityNorth_EventScript_ProtestorBehaviour::
	msgbox EchelonCityNorth_Text_ProtestorChant, MSGBOX_DEFAULT
	closemessage
	end

EchelonCityNorth_Text_ProtestorChant:
	.string "We work harder every day,\n"
	.string "Torterra must raise our pay!$"

EchelonCityNorth_EventScript_BridgeEastSign::
	msgbox EchelonCityNorth_Text_BridgeEastSign, MSGBOX_SIGN
	end

EchelonCityNorth_EventScript_BridgeWestSign::
	msgbox EchelonCityNorth_Text_BridgeWestSign, MSGBOX_SIGN
	end

EchelonCityNorth_EventScript_LabSign::
	msgbox EchelonCityNorth_Text_LabSign, MSGBOX_SIGN
	end

EchelonCityNorth_Text_BridgeEastSign:
	.string "Bridge to Echelon City East$"

EchelonCityNorth_Text_BridgeWestSign:
	.string "Bridge to Echelon City West$"

EchelonCityNorth_Text_LabSign:
	.string "Echelon City Pokemon Lab\n"
	.string "Funded by P.A.R.A.S.$"
