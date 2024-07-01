.set LOCALID_ANNA, 5
.set LOCALID_NORTH_BRIDGE_GUARD, 6

EchelonCityWest_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, EchelonCityWest_OnLoad
	.byte 0

EchelonCityWest_OnLoad:
	clearflag FLAG_ECW_NORTH_BRIDGE_ID_CHECKED
	compare VAR_ECHELON_CITY_WEST_STATE, 0
	goto_if_eq EchelonCityWest_EventScript_AnnaSetLocationZero
	compare VAR_ECHELON_CITY_WEST_STATE, 1
	goto_if_eq EchelonCityWest_EventScript_AnnaSetLocationOne
	compare VAR_ECHELON_CITY_WEST_STATE, 2
	goto_if_eq EchelonCityWest_EventScript_AnnaSetLocationTwo
	compare VAR_ECHELON_CITY_WEST_STATE, 3
	goto_if_eq EchelonCityWest_EventScript_AnnaSetLocationThree
	compare VAR_ECHELON_CITY_WEST_STATE, 4
	goto_if_ge EchelonCityWest_EventScript_AnnaSetLocationFour
	end

EchelonCityWest_EventScript_AnnaSetLocationZero:
	removeobject LOCALID_ANNA
	setflag FLAG_HIDE_ANNA
	setobjectxyperm LOCALID_ANNA, 42, 35
	addobject LOCALID_ANNA
	setobjectmovementtype LOCALID_ANNA, MOVEMENT_TYPE_FACE_LEFT
	return

EchelonCityWest_EventScript_ExitApartmentUpper::
	lockall
	setvar VAR_ECHELON_CITY_WEST_STATE, 1
	opendoor 42, 35
	waitdooranim
	clearflag FLAG_HIDE_ANNA
	addobject LOCALID_ANNA
	applymovement LOCALID_ANNA, EchelonCityWest_Movement_AnnaExitsHomeUpper
	waitmovement 0
	closedoor 42, 35
	waitdooranim
	goto EchelonCityWest_EventScript_AnnaAsksReady
	end

EchelonCityWest_EventScript_ExitApartmentLower::
	lockall
	setvar VAR_ECHELON_CITY_WEST_STATE, 1
	opendoor 42, 35
	waitdooranim
	clearflag FLAG_HIDE_ANNA
	addobject LOCALID_ANNA
	applymovement LOCALID_ANNA, EchelonCityWest_Movement_AnnaExitsHomeLower
	waitmovement 0
	closedoor 42, 35
	waitdooranim
	goto EchelonCityWest_EventScript_AnnaAsksReady
	end

EchelonCityWest_EventScript_AnnaAsksReady::
	msgbox EchelonCityWest_Text_AnnaGreeting, MSGBOX_YESNO
	compare VAR_RESULT, YES
	call_if_eq EchelonCityWest_EventScript_RespondReadyYes
	call_if_ne EchelonCityWest_EventScript_RespondReadyNo
	applymovement LOCALID_ANNA, EchelonCityWest_Movement_AnnaLeavesApartments
	waitmovement 0
	call EchelonCityWest_EventScript_AnnaSetLocationOne
	releaseall
	end

EchelonCityWest_EventScript_RespondReadyYes:
	msgbox EchelonCityWest_Text_RespondReadyYes, MSGBOX_NPC
	addvar VAR_ADVENTURE, 1
	return

EchelonCityWest_EventScript_RespondReadyNo:
	msgbox EchelonCityWest_Text_RespondReadyNo, MSGBOX_NPC
	addvar VAR_DECEIT, 1
	return

EchelonCityWest_Movement_AnnaExitsHomeUpper:
	walk_down
	face_left
	delay_8
	disable_jump_landing_ground_effect
	jump_in_place_left
	delay_8
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

EchelonCityWest_Movement_AnnaExitsHomeLower:
	walk_down
	face_left
	delay_8
	disable_jump_landing_ground_effect
	jump_in_place_left
	delay_8
	walk_fast_left
	walk_fast_left
	walk_fast_down
	walk_fast_left
	step_end

EchelonCityWest_Text_AnnaGreeting:
	.string "Hey {PLAYER}!\n"
	.string "Ready to get our first Pokémon?$"

EchelonCityWest_Text_RespondReadyYes:
	.string "Then let's get going!$"

EchelonCityWest_Text_RespondReadyNo:
	.string "{COLOR RED}What?!\n"
	.string "{COLOR DARK_GRAY}But we've been waiting for so long!\p"
	.string "C'mon, you'll be ready by the time we get\n"
	.string "to the lab.$"

EchelonCityWest_EventScript_AnnaSetLocationOne:
	removeobject LOCALID_ANNA
	setobjectxyperm LOCALID_ANNA, 43, 20
	addobject LOCALID_ANNA
	clearflag FLAG_HIDE_ANNA
	setobjectmovementtype LOCALID_ANNA, MOVEMENT_TYPE_FACE_LEFT
	return

EchelonCityWest_Movement_AnnaLeavesApartments:
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

EchelonCityWest_EventScript_AnnaLeadsRight::
	lockall
	setvar VAR_ECHELON_CITY_WEST_STATE, 2
	msgbox EchelonCityWest_Text_AnnaWorryAboutClosed, MSGBOX_NPC
	applymovement LOCALID_ANNA, EchelonCityWest_Movement_AnnaLeavesSchoolArea
	waitmovement 0
	call EchelonCityWest_EventScript_AnnaSetLocationTwo
	releaseall
	end

EchelonCityWest_Text_AnnaWorryAboutClosed:
	.string "Hurry up! If we're late, they might not\n"
	.string "let us across the bridge!$"

EchelonCityWest_EventScript_AnnaSetLocationTwo:
	removeobject LOCALID_ANNA
	setobjectxyperm LOCALID_ANNA, 51, 16
	addobject LOCALID_ANNA
	clearflag FLAG_HIDE_ANNA
	setobjectmovementtype LOCALID_ANNA, MOVEMENT_TYPE_FACE_DOWN
	return

EchelonCityWest_Movement_AnnaLeavesSchoolArea:
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

EchelonCityWest_EventScript_AnnaLeadsUp::
	lockall
	setvar VAR_ECHELON_CITY_WEST_STATE, 3
	msgbox EchelonCityWest_Text_AnnaThisWay, MSGBOX_NPC
	applymovement LOCALID_ANNA, EchelonCityWest_Movement_AnnaGoToLabBridge
	waitmovement 0
	call EchelonCityWest_EventScript_AnnaSetLocationThree
	releaseall
	end

EchelonCityWest_Text_AnnaThisWay:
	.string "This way!$"

EchelonCityWest_EventScript_AnnaSetLocationThree:
	removeobject LOCALID_ANNA
	setobjectxyperm LOCALID_ANNA, 67, 9
	addobject LOCALID_ANNA
	clearflag FLAG_HIDE_ANNA
	setobjectmovementtype LOCALID_ANNA, MOVEMENT_TYPE_FACE_UP
	return

EchelonCityWest_Movement_AnnaGoToLabBridge:
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	step_end

EchelonCityWest_EventScript_AnnaLeadsAcrossBridge::
	lockall
	setvar VAR_ECHELON_CITY_WEST_STATE, 4
	msgbox EchelonCityWest_Text_AnnaThankNorthBridgeGuard, MSGBOX_DEFAULT
	turnobject LOCALID_ANNA, DIR_WEST
	msgbox EchelonCityWest_Text_AnnaSeePlayerOnOtherSide, MSGBOX_NPC
	applymovement LOCALID_ANNA, EchelonCityWest_Movement_AnnaMoveAcrossBridge
	waitmovement 0
	call EchelonCityWest_EventScript_AnnaSetLocationFour
	releaseall
	end

EchelonCityWest_Text_AnnaThankNorthBridgeGuard:
	.string "Thank you sir.$"

EchelonCityWest_Text_AnnaSeePlayerOnOtherSide:
	.string "I'll see you on the other side {PLAYER}!$"

EchelonCityWest_EventScript_AnnaSetLocationFour:
	removeobject LOCALID_ANNA
	return

EchelonCityWest_Movement_AnnaMoveAcrossBridge:
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

EchelonCityWest_EventScript_NorthBridgeGuardBridgeClosing::
	lockall
	msgbox EchelonCityWest_Text_NorthBridgeGuardBridgeClosing, MSGBOX_NPC
	applymovement OBJ_EVENT_ID_PLAYER, EchelonCityWest_Movement_PlayerStepRight
	waitmovement 0
	releaseall
	end

EchelonCityWest_Text_NorthBridgeGuardBridgeClosing:
	.string "The bridge will be closing soon.$"

EchelonCityWest_EventScript_NorthBridgeGuardBehavior::
	compare VAR_ECHELON_CITY_WEST_STATE, 4
	goto_if_le EchelonCityWest_EventScript_NorthBridgeGuardFirstTime
	compare VAR_ECHELON_CITY_WEST_STATE, 5
	goto_if_eq EchelonCityWest_EventScript_NorthBridgeGuardNoTurningBack
	goto_if_unset FLAG_ECW_NORTH_BRIDGE_ID_CHECKED, EchelonCityWest_EventScript_NorthBridgeGuardChecksId
	msgbox EchelonCityWest_Text_NorthBridgeGuardFreeToPass, MSGBOX_NPC
	goto EchelonCityWest_EventScript_NorthBridgeGuardReset

EchelonCityWest_EventScript_NorthBridgeGuardFirstTime:
	lock
	faceplayer
	setvar VAR_ECHELON_CITY_WEST_STATE, 5
	msgbox EchelonCityWest_Text_NorthBridgeGuardFirstTime, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EchelonCityWest_EventScript_NorthBridgeGuardAnswerYes
	goto EchelonCityWest_EventScript_NorthBridgeGuardAnswerNo

EchelonCityWest_EventScript_NorthBridgeGuardAnswerYes:
	msgbox EchelonCityWest_Text_NorthBridgeGuardAnswerYes, MSGBOX_NPC
	goto EchelonCityWest_EventScript_NorthBridgeGuardMovePlayerThrough

EchelonCityWest_EventScript_NorthBridgeGuardAnswerNo:
	addvar VAR_DECEIT, 1
	msgbox EchelonCityWest_Text_NorthBridgeGuardAnswerNo, MSGBOX_NPC
	goto EchelonCityWest_EventScript_NorthBridgeGuardMovePlayerThrough

EchelonCityWest_EventScript_NorthBridgeGuardMovePlayerThrough:
	goto_if_set FLAG_STOPPED_BY_GUARD, EchelonCityWest_EventScript_NorthBridgeGuardMoveStoppedPlayer
	goto EchelonCityWest_EventScript_NorthBridgeGuardMoveTalkedPlayer

EchelonCityWest_EventScript_NorthBridgeGuardMoveStoppedPlayer:
	clearflag FLAG_STOPPED_BY_GUARD
	applymovement OBJ_EVENT_ID_PLAYER, EchelonCityWest_Movement_NorthBridgeGuardMoveStoppedPlayer
	waitmovement 0
	goto EchelonCityWest_EventScript_NorthBridgeGuardReset

EchelonCityWest_EventScript_NorthBridgeGuardMoveTalkedPlayer:
	applymovement LOCALID_NORTH_BRIDGE_GUARD, EchelonCityWest_Movement_NorthBridgeGuardLetPlayerThrough
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, EchelonCityWest_Movement_NorthBridgeGuardMoveTalkedPlayer
	waitmovement 0
	applymovement LOCALID_NORTH_BRIDGE_GUARD, EchelonCityWest_Movement_NorthBridgeGuardReturnToPost
	waitmovement 0
	goto EchelonCityWest_EventScript_NorthBridgeGuardReset

EchelonCityWest_Movement_NorthBridgeGuardMoveStoppedPlayer:
	walk_up
	step_end

EchelonCityWest_Movement_NorthBridgeGuardLetPlayerThrough:
	walk_left
	face_right
	step_end

EchelonCityWest_Movement_NorthBridgeGuardMoveTalkedPlayer:
	walk_up
	walk_up
	step_end

EchelonCityWest_Movement_NorthBridgeGuardReturnToPost:
	walk_right
	face_down
	step_end

EchelonCityWest_EventScript_NorthBridgeGuardNoTurningBack:
	goto_if_set FLAG_STOPPED_BY_GUARD, EchelonCityWest_EventScript_NorthBridgeGuardNoTurningBackStopped
	faceplayer
	msgbox EchelonCityWest_Text_NorthBridgeGuardNoTurningBack, MSGBOX_NPC
	goto EchelonCityWest_EventScript_NorthBridgeGuardReset

EchelonCityWest_EventScript_NorthBridgeGuardNoTurningBackStopped:
	turnobject LOCALID_NORTH_BRIDGE_GUARD, DIR_WEST
	waitmovement 0
	msgbox EchelonCityWest_Text_NorthBridgeGuardNoTurningBack, MSGBOX_NPC
	applymovement OBJ_EVENT_ID_PLAYER, EchelonCityWest_Movement_NorthBridgeGuardMoveStoppedPlayer
	goto EchelonCityWest_EventScript_NorthBridgeGuardReset

EchelonCityWest_Text_NorthBridgeGuardNoTurningBack:
	.string "No turning back now.$"

EchelonCityWest_Text_NorthBridgeGuardFirstTime:
	.string "This your first time getting to go\n"
	.string "North, kid?$"

EchelonCityWest_Text_NorthBridgeGuardAnswerYes:
	.string "Well, we'll see if you ever get any\n"
	.string "farther.\p"
	.string "Though I doubt it.\p"
	.string "...\p"
	.string "Well, get going then.$"

EchelonCityWest_Text_NorthBridgeGuardAnswerNo:
	.string "Heh. I doubt it.\p"
	.string "We'll see if you make it anywhere else.\p"
	.string "You've got spunk, but it's rare for one\n"
	.string "of you lot to get very far.\p"
	.string "...\p"
	.string "Well, get going then.$"

EchelonCityWest_EventScript_NorthBridgeGuardStopsPlayer::
	setflag FLAG_STOPPED_BY_GUARD
	compare VAR_ECHELON_CITY_WEST_STATE, 5
	goto_if_eq EchelonCityWest_EventScript_NorthBridgeGuardNoTurningBack
	goto_if_set FLAG_ECW_NORTH_BRIDGE_ID_CHECKED, EchelonCityWest_EventScript_NorthBridgeGuardIgnore
	turnobject LOCALID_NORTH_BRIDGE_GUARD, DIR_WEST
	waitmovement 0
	compare VAR_ECHELON_CITY_WEST_STATE, 4
	goto_if_le EchelonCityWest_EventScript_NorthBridgeGuardFirstTime
	lock
	msgbox EchelonCityWest_Text_NorthBridgeGuardHoldIt, MSGBOX_NPC
	goto EchelonCityWest_EventScript_NorthBridgeGuardChecksId
	end

EchelonCityWest_EventScript_NorthBridgeGuardIgnore:
	clearflag FLAG_STOPPED_BY_GUARD
	releaseall
	end

EchelonCityWest_Text_NorthBridgeGuardHoldIt:
	.string "Hold it!$"

EchelonCityWest_Text_NorthBridgeGuardFreeToPass:
	.string "You're free to pass.$"

EchelonCityWest_EventScript_NorthBridgeGuardChecksId::
	lockall
	msgbox EchelonCityWest_Text_NorthBridgeGuardChecksId, MSGBOX_NPC
	setflag FLAG_ECW_NORTH_BRIDGE_ID_CHECKED
	goto EchelonCityWest_EventScript_NorthBridgeGuardReset

EchelonCityWest_Text_NorthBridgeGuardChecksId:
	.string "Let me check your Trainer ID.\p"
	.string "...\p"
	.string "Okay {PLAYER}. You're free to pass.$"

EchelonCityWest_EventScript_NorthBridgeGuardReset:
	clearflag FLAG_STOPPED_BY_GUARD
	turnobject LOCALID_NORTH_BRIDGE_GUARD, DIR_SOUTH
	waitmovement 0
	releaseall
	end

EchelonCityWest_EventScript_KeepPlayerRightAfterApartments::
	lockall
	msgbox EchelonCityWest_Text_AnnaHurryUp, MSGBOX_NPC
	applymovement OBJ_EVENT_ID_PLAYER, EchelonCityWest_Movement_PlayerStepRight
	waitmovement 0
	releaseall
	end

EchelonCityWest_EventScript_KeepPlayerUpAfterApartments::
	lockall
	msgbox EchelonCityWest_Text_AnnaHurryUp, MSGBOX_NPC
	applymovement OBJ_EVENT_ID_PLAYER, EchelonCityWest_Movement_PlayerStepUp
	waitmovement 0
	releaseall
	end

EchelonCityWest_Text_AnnaHurryUp:
	.string "Anna: C'mon!\n"
	.string "We don't want to miss it!$"

EchelonCityWest_Movement_PlayerStepRight:
	walk_right
	step_end

EchelonCityWest_Movement_PlayerStepUp:
	walk_up
	step_end

EchelonCityWest_EventScript_BeachSign::
	msgbox EchelonCityWest_Text_BeachSign, MSGBOX_SIGN
	end

EchelonCityWest_EventScript_BridgeEastSign::
	msgbox EchelonCityWest_Text_BridgeEastSign, MSGBOX_SIGN
	end

EchelonCityWest_EventScript_BridgeWestSign::
	msgbox EchelonCityWest_Text_BridgeWestSign, MSGBOX_SIGN
	end

EchelonCityWest_EventScript_BridgeNorthSign::
	msgbox EchelonCityWest_Text_BridgeNorthSign, MSGBOX_SIGN
	end

EchelonCityWest_EventScript_ParkSign::
	msgbox EchelonCityWest_Text_ParkSign, MSGBOX_SIGN
	end

EchelonCityWest_EventScript_TrainStationSign::
	msgbox EchelonCityWest_Text_TrainStationSign, MSGBOX_SIGN
	end

EchelonCityWest_EventScript_SchoolSign::
	msgbox EchelonCityWest_Text_SchoolSign, MSGBOX_SIGN
	end

EchelonCityWest_Text_BeachSign:
	.string "Sandy Beach\n"
	.string "“Please keep our beaches clean!”$"

EchelonCityWest_Text_BridgeEastSign:
	.string "Bridge to Echelon City East$"

EchelonCityWest_Text_BridgeWestSign:
	.string "Bridge to \n"
	.string "CLOSED FOR MAINTENANCE$"

EchelonCityWest_Text_BridgeNorthSign:
	.string "Bridge to Echelon City North$"

EchelonCityWest_Text_ParkSign:
	.string "Highland Park\n"
	.string "Funded by $"

EchelonCityWest_Text_TrainStationSign:
	.string "Echelon City Station\n"
	.string "CONDEMNED - DO NOT ENTER$"

EchelonCityWest_Text_SchoolSign:
	.string "Echelon City Trade School\n"
	.string "Funded by $"
