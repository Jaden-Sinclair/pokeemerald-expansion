.set LOCALID_NATURE_SCIENTIST, 1
.set LOCALID_STEAM_SCIENTIST, 2
.set LOCALID_PROFESSOR, 3
.set LOCALID_BASEMENT_GUARD, 4
.set LOCALID_OUTSIDE_GUARD, 5
.set LOCALID_LAB_GUARD, 6
.set LOCALID_LIBRARY_SCIENTIST, 7
.set LOCALID_ANNA, 8
.set LOCALID_HIDING_BOY, 9
.set LOCALID_RICH_MAN, 11
.set LOCALID_DOOR_GUARD, 12
.set LOCALID_STARTER_POKEMON, 15

EchelonCityNorth_PokeLab_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EchelonCityNorth_PokeLab_EnterLab
	map_script MAP_SCRIPT_ON_RESUME, EchelonCityNorth_PokeLab_OnResume 
	.byte 0

EchelonCityNorth_PokeLab_EnterLab:
	map_script_2 VAR_TEMP_A, 0, EchelonCityNorth_PokeLab_InitialLoad
	.2byte 0

EchelonCityNorth_PokeLab_InitialLoad:
	createvobject OBJ_EVENT_GFX_BEAUTY, 1, 9, 12, 3, DIR_EAST
	createvobject OBJ_EVENT_GFX_EXPERT_F, 2, 14, 12, 3, DIR_WEST
	end

EchelonCityNorth_PokeLab_OnResume:
	goto_if_set FLAG_RECEIVED_STARTER, EchelonCityNorth_PokeLab_InitialLoad
	end

EchelonCityNorth_PokeLab_EventScript_ProfessorBehaviour::
	lock
	compare VAR_MAIN_STORY_STATE, 7
	goto_if_eq EchelonCityNorth_PokeLab_EventScript_ProfessorGoOn
	compare VAR_MAIN_STORY_STATE, 8
	goto_if_eq EchelonCityNorth_PokeLab_EventScript_ProfessorFreeToGo
	switch VAR_STARTER_MON
	option 0, EchelonCityNorth_EventScript_ProfessorDefaultSharpuggle
	option 1, EchelonCityNorth_EventScript_ProfessorDefaultWispan
	option 2, EchelonCityNorth_EventScript_ProfessorDefaultPachydent
	msgbox EchelonCityNorth_PokeLab_Text_ProfessorDefaultSpeech, MSGBOX_NPC
	release
	end

EchelonCityNorth_PokeLab_EventScript_ProfessorGoOn:
	msgbox EchelonCityNorth_PokeLab_Text_ProfessorGoOn, MSGBOX_NPC
	release
	end

EchelonCityNorth_PokeLab_EventScript_ProfessorFreeToGo:
	msgbox EchelonCityNorth_PokeLab_Text_ProfessorFreeToGo, MSGBOX_NPC
	release
	end

EchelonCityNorth_EventScript_ProfessorDefaultPachydent:
	bufferspeciesname STR_VAR_1, SPECIES_PACHYDENT
	return

EchelonCityNorth_EventScript_ProfessorDefaultSharpuggle:
	bufferspeciesname STR_VAR_1, SPECIES_SHARPUGGLE
	return

EchelonCityNorth_EventScript_ProfessorDefaultWispan:
	bufferspeciesname STR_VAR_1, SPECIES_WISPAN
	return

EchelonCityNorth_PokeLab_Text_ProfessorGoOn:
	.string "Go on, choose a Pokémon.$"

EchelonCityNorth_PokeLab_Text_ProfessorFreeToGo:
	.string "You're free to set out on your Pokémon\n"
	.string "adventure now.$"

EchelonCityNorth_PokeLab_Text_ProfessorDefaultSpeech:
	.string "How has your {STR_VAR_1} been doing?$"

EchelonCityNorth_PokeLab_EventScript_LabGuardBehaviour::
	lock
	compare VAR_MAIN_STORY_STATE, 7
	goto_if_eq EchelonCityNorth_PokeLab_EventScript_LabGuardMustGetPokemonTalk
	goto_if_lt EchelonCityNorth_PokeLab_EventScript_LabGuardTriggerRight
	msgbox EchelonCityNorth_PokeLab_Text_LabGuardSpeech, MSGBOX_NPC
	release
	end

EchelonCityNorth_PokeLab_Text_LabGuardSpeech:
	.string "You've got your Pokémon, get going.$"

EchelonCityNorth_PokeLab_EventScript_LabGuardTriggerClose::
	msgbox EchelonCityNorth_PokeLab_Text_LabGuardHereForPokemon, MSGBOX_NPC
	applymovement LOCALID_LAB_GUARD, Common_Movement_WalkLeft
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	goto EchelonCityNorth_PokeLab_EventScript_GetPokemonCutscene

EchelonCityNorth_PokeLab_EventScript_LabGuardTriggerFar::
	applymovement LOCALID_LAB_GUARD, Common_Movement_WalkDown
	waitmovement 0
	msgbox EchelonCityNorth_PokeLab_Text_LabGuardHereForPokemon, MSGBOX_NPC
	applymovement LOCALID_LAB_GUARD, Common_Movement_WalkUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	applymovement LOCALID_LAB_GUARD, Common_Movement_WalkLeft
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	goto EchelonCityNorth_PokeLab_EventScript_GetPokemonCutscene

EchelonCityNorth_PokeLab_EventScript_LabGuardTriggerRight::
	msgbox EchelonCityNorth_PokeLab_Text_LabGuardHereForPokemon, MSGBOX_NPC
	applymovement LOCALID_LAB_GUARD, Common_Movement_WalkLeft
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	goto EchelonCityNorth_PokeLab_EventScript_GetPokemonCutscene

EchelonCityNorth_PokeLab_Text_LabGuardHereForPokemon:
	.string "You're here to get your first Pokémon?\p"
	.string "Follow me.$"

EchelonCityNorth_PokeLab_EventScript_LabGuardMustGetPokemon::
	lock
	applymovement LOCALID_LAB_GUARD, Common_Movement_WalkDown
	waitmovement 0
	applymovement LOCALID_LAB_GUARD, Common_Movement_FaceLeft
	waitmovement 0
	msgbox EchelonCityNorth_PokeLab_Text_LabGuardMustGetPokemon, MSGBOX_DEFAULT
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	applymovement LOCALID_LAB_GUARD, Common_Movement_WalkUp
	waitmovement 0
	applymovement LOCALID_LAB_GUARD, Common_Movement_FaceLeft
	waitmovement 0
	release
	end

EchelonCityNorth_PokeLab_EventScript_LabGuardMustGetPokemonTalk:
	lock
	msgbox EchelonCityNorth_PokeLab_Text_LabGuardMustGetPokemon, MSGBOX_NPC
	applymovement LOCALID_LAB_GUARD, Common_Movement_FaceLeft
	waitmovement 0
	release
	end

EchelonCityNorth_PokeLab_Text_LabGuardMustGetPokemon:
	.string "If you leave now, you won't be allowed\n"
	.string "to get your Pokémon later.$"

EchelonCityNorth_PokeLab_EventScript_GetPokemonCutscene:
	setvar VAR_MAIN_STORY_STATE, 7
	applymovement LOCALID_LAB_GUARD, Common_Movement_WalkUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	applymovement LOCALID_LAB_GUARD, Common_Movement_FaceLeft
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	applymovement LOCALID_ANNA, Common_Movement_FaceDown
	waitmovement 0
	delay 30
	applymovement LOCALID_PROFESSOR, Common_Movement_FaceRight
	applymovement LOCALID_ANNA, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_ANNA, Common_Movement_RunDown
	waitmovement 0
	applymovement LOCALID_ANNA, Common_Movement_FaceRight
	waitmovement 0
	msgbox EchelonCityNorth_PokeLab_Text_AnnaGotPokemon, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_ANNA, EchelonCityNorth_PokeLab_Movement_AnnaLeavesLab
	waitmovement 0
	removeobject LOCALID_ANNA
	applymovement LOCALID_PROFESSOR, Common_Movement_WalkRight
	waitmovement 0
	msgbox EchelonCityNorth_PokeLab_Text_ProfessorGiveId, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	waitfanfare
	msgbox EchelonCityNorth_PokeLab_Text_ProfessorChoosePokemon, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PROFESSOR, Common_Movement_WalkLeft
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	applymovement LOCALID_PROFESSOR, Common_Movement_FaceRight
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	end

EchelonCityNorth_PokeLab_Text_AnnaGotPokemon:
	.string "{PLAYER}! I got my Pokémon!\n"
	.string "It's so cute!\p"
	.string "I can't wait to see which one you pick.\p"
	.string "Come outside after and we can have our\n"
	.string "first Pokémon battle together!$"

EchelonCityNorth_PokeLab_Text_ProfessorGiveId:
	.string "All right, {PLAYER}, was it?\n"
	.string "Good morning, I'm Professor Hemlock.\p"
	.string "Congratulations on passing the exam to\n"
	.string "receive your first partner Pokemon.\p"
	.string "In addition, here is your Trainer ID.$"

EchelonCityNorth_PokeLab_Text_ProfessorChoosePokemon:
	.string "This will allow you to travel to the\n"
	.string "other cities in Casteria and challenge\l"
	.string "their Gym Leaders to earn the right to\l"
	.string "face the Pokémon League.\p"
	.string "Now step up to the machine and choose\n"
	.string "your first Pokémon.$"

EchelonCityNorth_PokeLab_Movement_AnnaLeavesLab:
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_right
	walk_fast_down
	walk_fast_right
	walk_fast_down
	walk_fast_down
	step_end

EchelonCityNorth_PokeLab_EventScript_ReceivePokemon::
	lockall
	setflag FLAG_RECEIVED_STARTER
	setflag FLAG_SYS_POKEMON_GET
	setvar VAR_MAIN_STORY_STATE, 8
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_HIDING_BOY
	removeobject LOCALID_RICH_MAN
	removeobject LOCALID_STARTER_POKEMON
	special ChooseStarter
	waitstate
	special HealPlayerParty
	bufferleadmonspeciesname STR_VAR_1
	msgbox EchelonCityNorth_PokeLab_Text_ReceivePokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, EchelonCityNorth_PokeLab_EventScript_NicknameStarter
	releaseall
	end

EchelonCityNorth_PokeLab_EventScript_NicknameStarter:
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
	releaseall
	end

EchelonCityNorth_PokeLab_Text_ReceivePokemon:
	.string "You received {STR_VAR_1}!\p"
	.string "Would you like to give a nickname to\n"
	.string "{STR_VAR_1}$"

EchelonCityNorth_PokeLab_EventScript_NotAllowedBehindDesk::
	lock
	applymovement LOCALID_DOOR_GUARD, Common_Movement_WalkRight
	waitmovement 0
	msgbox EchelonCityNorth_PokeLab_Text_NotAllowedBehindDesk, MSGBOX_DEFAULT
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	applymovement LOCALID_DOOR_GUARD, Common_Movement_WalkLeft
	waitmovement 0
	applymovement LOCALID_DOOR_GUARD, Common_Movement_FaceRight
	waitmovement 0
	release
	end

EchelonCityNorth_PokeLab_Text_NotAllowedBehindDesk:
	.string "Hey, you're not allowed behind the desk.$"

EchelonCityNorth_PokeLab_EventScript_DoorGuardBehaviour::
	msgbox EchelonCityNorth_PokeLab_Text_DoorGuardSpeech, MSGBOX_NPC
	applymovement LOCALID_DOOR_GUARD, Common_Movement_FaceOriginalDirection
	waitmovement 0
	end

EchelonCityNorth_PokeLab_Text_DoorGuardSpeech:
	.string "If you need directions, ask at the desk.$"

EchelonCityNorth_PokeLab_EventScript_RichManBehaviour::
	msgbox EchelonCityNorth_PokeLab_Text_RichManSpeech, MSGBOX_NPC
	applymovement LOCALID_RICH_MAN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	end

EchelonCityNorth_PokeLab_Text_RichManSpeech:
	.string "Can't you see I'm busy here?$"

EchelonCityNorth_PokeLab_EventScript_MiddleGuardBehaviour::
	msgbox EchelonCityNorth_PokeLab_Text_MiddleGuardSpeech, MSGBOX_NPC
	end

EchelonCityNorth_PokeLab_Text_MiddleGuardSpeech:
	.string "I've got my eye on you.$"

EchelonCityNorth_PokeLab_EventScript_FrontDeskBehaviour::
	lock
	msgbox EchelonCityNorth_PokeLab_Text_FrontDeskDefault, MSGBOX_YESNO
	compare VAR_RESULT, YES
	call_if_eq EchelonCityNorth_PokeLab_EventScript_FrontDeskDirectionsAnswerYes
	call_if_ne EchelonCityNorth_PokeLab_EventScript_FrontDeskDirectionsAnswerNo
	release
	end

EchelonCityNorth_PokeLab_EventScript_FrontDeskDirectionsAnswerYes:
	msgbox EchelonCityNorth_PokeLab_Text_FrontDeskDirectionsAnswerYes, MSGBOX_DEFAULT
	return

EchelonCityNorth_PokeLab_EventScript_FrontDeskDirectionsAnswerNo:
	msgbox EchelonCityNorth_PokeLab_Text_FrontDeskDirectionsAnswerNo, MSGBOX_DEFAULT
	return

EchelonCityNorth_PokeLab_Text_FrontDeskDefault:
	.string "Do you need directions?$"

EchelonCityNorth_PokeLab_Text_FrontDeskDirectionsAnswerYes:
	.string "The computer lab is to the left.\p"
	.string "The library is to the right.\p"
	.string "Testing rooms are downstairs.\p"
	.string "Straight ahead leads to The Garden.$"

EchelonCityNorth_PokeLab_Text_FrontDeskDirectionsAnswerNo:
	.string "Okay, enjoy your time at the lab.$"

EchelonCityNorth_PokeLab_EventScript_FrontDeskBeforePokemon::
	lock
	goto_if_set FLAG_ENTERED_LAB, EchelonCityNorth_PokeLab_EventScript_FrontDeskFinishBusiness
	setflag FLAG_ENTERED_LAB
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	msgbox EchelonCityNorth_PokeLab_Text_FrontDeskBeforePokemon, MSGBOX_YESNO
	compare VAR_RESULT, YES
	call_if_eq EchelonCityNorth_PokeLab_EventScript_FrontDeskPokemonAnswerYes
	call_if_ne EchelonCityNorth_PokeLab_EventScript_FrontDeskPokemonAnswerNo
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	release
	end

EchelonCityNorth_PokeLab_EventScript_FrontDeskPokemonAnswerYes:
	msgbox EchelonCityNorth_PokeLab_Text_FrontDeskPokemonAnswerYes, MSGBOX_DEFAULT
	return

EchelonCityNorth_PokeLab_EventScript_FrontDeskPokemonAnswerNo:
	addvar VAR_REBELLION, 1
	msgbox EchelonCityNorth_PokeLab_Text_FrontDeskPokemonAnswerNo, MSGBOX_DEFAULT
	return

EchelonCityNorth_PokeLab_EventScript_FrontDeskFinishBusiness:
	msgbox EchelonCityNorth_PokeLab_Text_FrontDeskFinishBusiness, MSGBOX_DEFAULT
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	release
	end

EchelonCityNorth_PokeLab_Text_FrontDeskBeforePokemon:
	.string "Good morning. Are you here to get your\n"
	.string "first partner Pokémon?$"

EchelonCityNorth_PokeLab_Text_FrontDeskPokemonAnswerYes:
	.string "Okay, head on in to the left.$"

EchelonCityNorth_PokeLab_Text_FrontDeskPokemonAnswerNo:
	.string "Okay, then you must be here as a test\n"
	.string "volunteer. Head to the right and the\l"
	.string "guard will take you downstairs.$"

EchelonCityNorth_PokeLab_Text_FrontDeskFinishBusiness:
	.string "Make sure to finish your business here\n"
	.string "before you leave.$"

EchelonCityNorth_PokeLab_EventScript_OutsideGuardBehaviour::
	msgbox EchelonCityNorth_PokeLab_Text_OutsideGuardSpeech, MSGBOX_NPC
	applymovement LOCALID_OUTSIDE_GUARD, Common_Movement_FaceOriginalDirection
	waitmovement 0
	end

EchelonCityNorth_PokeLab_Text_OutsideGuardSpeech:
	.string "Sorry, we're not letting any non-\n"
	.string "employees enter The Garden today.$"

EchelonCityNorth_PokeLab_EventScript_HidingBoyBehaviour::
	msgbox EchelonCityNorth_PokeLab_Text_HidingBoySpeech, MSGBOX_NPC
	applymovement LOCALID_HIDING_BOY, Common_Movement_FaceOriginalDirection
	waitmovement 0
	end

EchelonCityNorth_PokeLab_Text_HidingBoySpeech:
	.string "The lights in here are all too bright,\n"
	.string "so I found this storage room to hide in.\p"
	.string "I'll go get my Pokémon in a minute.$"

EchelonCityNorth_PokeLab_EventScript_BasementGuardBehaviour::
	msgbox EchelonCityNorth_PokeLab_Text_BasementGuardSpeech, MSGBOX_NPC
	applymovement LOCALID_BASEMENT_GUARD, Common_Movement_FaceOriginalDirection
	waitmovement 0
	end

EchelonCityNorth_PokeLab_Text_BasementGuardSpeech:
	.string "I can't let you downstairs without a\n"
	.string "Test Subject ID.$"

EchelonCityNorth_PokeLab_EventScript_LibraryScientistBehaviour::
	lockall
	faceplayer
	getplayerxy VAR_PLAYER_X, VAR_PLAYER_Y
	compare VAR_PLAYER_X, 19
	goto_if_ne EchelonCityNorth_PokeLab_EventScript_LibraryScientistGetOutOfWay
	compare VAR_PLAYER_Y, 14
	goto_if_ne EchelonCityNorth_PokeLab_EventScript_LibraryScientistGetOutOfWay
	msgbox EchelonCityNorth_PokeLab_Text_LibraryScientistTeleportPad, MSGBOX_NPC
	releaseall
	end

EchelonCityNorth_PokeLab_EventScript_LibraryScientistGetOutOfWay:
	msgbox EchelonCityNorth_PokeLab_Text_LibraryScientistInTheWay, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_LIBRARY_SCIENTIST
	setobjectxyperm LOCALID_LIBRARY_SCIENTIST, 19, 14
	addobject LOCALID_LIBRARY_SCIENTIST
	fadescreen FADE_FROM_BLACK
	msgbox EchelonCityNorth_PokeLab_Text_LibraryScientistBetter, MSGBOX_DEFAULT
	release
	end

EchelonCityNorth_PokeLab_Text_LibraryScientistTeleportPad:
	.string "That's my teleport pad you're standing\n"
	.string "on. Isn't it fascinating?$"

EchelonCityNorth_PokeLab_Text_LibraryScientistInTheWay:
	.string "Oh! Am I in your way?$"

EchelonCityNorth_PokeLab_Text_LibraryScientistBetter:
	.string "There, that's better.$"

EchelonCityNorth_PokeLab_EventScript_SteamScientistBehaviour::
	msgbox EchelonCityNorth_PokeLab_Text_SteamScientistSpeech, MSGBOX_NPC
	applymovement LOCALID_STEAM_SCIENTIST, Common_Movement_FaceOriginalDirection
	waitmovement 0
	end

EchelonCityNorth_PokeLab_Text_SteamScientistSpeech:
	.string "Please don't distract me, I'm trying to\n"
	.string "work out these steam vent designs.$"

EchelonCityNorth_PokeLab_EventScript_NatureScientistBehaviour::
	lock
	bufferleadmonspeciesname STR_VAR_1
	specialvar VAR_RESULT, GetLeadPokemonNature
	switch VAR_RESULT
	case NATURE_HARDY, EchelonCityNorth_PokeLab_EventScript_NatureScientistHardy
	case NATURE_LONELY, EchelonCityNorth_PokeLab_EventScript_NatureScientistLonely
	case NATURE_BRAVE, EchelonCityNorth_PokeLab_EventScript_NatureScientistBrave
	case NATURE_ADAMANT, EchelonCityNorth_PokeLab_EventScript_NatureScientistAdamant
	case NATURE_NAUGHTY, EchelonCityNorth_PokeLab_EventScript_NatureScientistNaughty
	case NATURE_BOLD, EchelonCityNorth_PokeLab_EventScript_NatureScientistBold
	case NATURE_DOCILE, EchelonCityNorth_PokeLab_EventScript_NatureScientistDocile
	case NATURE_RELAXED, EchelonCityNorth_PokeLab_EventScript_NatureScientistRelaxed
	case NATURE_IMPISH, EchelonCityNorth_PokeLab_EventScript_NatureScientistImpish
	case NATURE_LAX, EchelonCityNorth_PokeLab_EventScript_NatureScientistLax
	case NATURE_TIMID, EchelonCityNorth_PokeLab_EventScript_NatureScientistTimid
	case NATURE_HASTY, EchelonCityNorth_PokeLab_EventScript_NatureScientistHasty
	case NATURE_SERIOUS, EchelonCityNorth_PokeLab_EventScript_NatureScientistSerious
	case NATURE_JOLLY, EchelonCityNorth_PokeLab_EventScript_NatureScientistJolly
	case NATURE_NAIVE, EchelonCityNorth_PokeLab_EventScript_NatureScientistNaive
	case NATURE_MODEST, EchelonCityNorth_PokeLab_EventScript_NatureScientistModest
	case NATURE_MILD, EchelonCityNorth_PokeLab_EventScript_NatureScientistMild
	case NATURE_QUIET, EchelonCityNorth_PokeLab_EventScript_NatureScientistQuiet
	case NATURE_BASHFUL, EchelonCityNorth_PokeLab_EventScript_NatureScientistBashful
	case NATURE_RASH, EchelonCityNorth_PokeLab_EventScript_NatureScientistRash
	case NATURE_CALM, EchelonCityNorth_PokeLab_EventScript_NatureScientistCalm
	case NATURE_GENTLE, EchelonCityNorth_PokeLab_EventScript_NatureScientistGentle
	case NATURE_SASSY, EchelonCityNorth_PokeLab_EventScript_NatureScientistSassy
	case NATURE_CAREFUL, EchelonCityNorth_PokeLab_EventScript_NatureScientistCareful
	case NATURE_QUIRKY, EchelonCityNorth_PokeLab_EventScript_NatureScientistQuirky
	end

EchelonCityNorth_PokeLab_EventScript_NatureScientistSpeech:
	msgbox EchelonCityNorth_PokeLab_Text_NatureScientistSpeech, MSGBOX_NPC
	applymovement LOCALID_NATURE_SCIENTIST, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

EchelonCityNorth_PokeLab_Text_NatureScientistSpeech:
	.string "Your {STR_VAR_1} looks so {STR_VAR_2}!\n"
	.string "Pokémon natures are so interesting.$"

EchelonCityNorth_PokeLab_EventScript_NatureScientistHardy:
	bufferstring STR_VAR_2, EchelonCityNorth_PokeLab_Text_NatureScientistHardy
	goto EchelonCityNorth_PokeLab_EventScript_NatureScientistSpeech

EchelonCityNorth_PokeLab_Text_NatureScientistHardy:
	.string "hardy$"

EchelonCityNorth_PokeLab_EventScript_NatureScientistLonely:
	bufferstring STR_VAR_2, EchelonCityNorth_PokeLab_Text_NatureScientistLonely
	goto EchelonCityNorth_PokeLab_EventScript_NatureScientistSpeech

EchelonCityNorth_PokeLab_Text_NatureScientistLonely:
	.string "lonely$"

EchelonCityNorth_PokeLab_EventScript_NatureScientistBrave:
	bufferstring STR_VAR_2, EchelonCityNorth_PokeLab_Text_NatureScientistBrave
	goto EchelonCityNorth_PokeLab_EventScript_NatureScientistSpeech

EchelonCityNorth_PokeLab_Text_NatureScientistBrave:
	.string "brave$"

EchelonCityNorth_PokeLab_EventScript_NatureScientistAdamant:
	bufferstring STR_VAR_2, EchelonCityNorth_PokeLab_Text_NatureScientistAdamant
	goto EchelonCityNorth_PokeLab_EventScript_NatureScientistSpeech

EchelonCityNorth_PokeLab_Text_NatureScientistAdamant:
	.string "adamant$"

EchelonCityNorth_PokeLab_EventScript_NatureScientistNaughty:
	bufferstring STR_VAR_2, EchelonCityNorth_PokeLab_Text_NatureScientistNaughty
	goto EchelonCityNorth_PokeLab_EventScript_NatureScientistSpeech

EchelonCityNorth_PokeLab_Text_NatureScientistNaughty:
	.string "naughty$"

EchelonCityNorth_PokeLab_EventScript_NatureScientistBold:
	bufferstring STR_VAR_2, EchelonCityNorth_PokeLab_Text_NatureScientistBold
	goto EchelonCityNorth_PokeLab_EventScript_NatureScientistSpeech

EchelonCityNorth_PokeLab_Text_NatureScientistBold:
	.string "bold$"

EchelonCityNorth_PokeLab_EventScript_NatureScientistDocile:
	bufferstring STR_VAR_2, EchelonCityNorth_PokeLab_Text_NatureScientistDocile
	goto EchelonCityNorth_PokeLab_EventScript_NatureScientistSpeech

EchelonCityNorth_PokeLab_Text_NatureScientistDocile:
	.string "docile$"

EchelonCityNorth_PokeLab_EventScript_NatureScientistRelaxed:
	bufferstring STR_VAR_2, EchelonCityNorth_PokeLab_Text_NatureScientistRelaxed
	goto EchelonCityNorth_PokeLab_EventScript_NatureScientistSpeech

EchelonCityNorth_PokeLab_Text_NatureScientistRelaxed:
	.string "relaxed$"

EchelonCityNorth_PokeLab_EventScript_NatureScientistImpish:
	bufferstring STR_VAR_2, EchelonCityNorth_PokeLab_Text_NatureScientistImpish
	goto EchelonCityNorth_PokeLab_EventScript_NatureScientistSpeech

EchelonCityNorth_PokeLab_Text_NatureScientistImpish:
	.string "impish$"

EchelonCityNorth_PokeLab_EventScript_NatureScientistLax:
	bufferstring STR_VAR_2, EchelonCityNorth_PokeLab_Text_NatureScientistLax
	goto EchelonCityNorth_PokeLab_EventScript_NatureScientistSpeech

EchelonCityNorth_PokeLab_Text_NatureScientistLax:
	.string "lax$"

EchelonCityNorth_PokeLab_EventScript_NatureScientistTimid:
	bufferstring STR_VAR_2, EchelonCityNorth_PokeLab_Text_NatureScientistTimid
	goto EchelonCityNorth_PokeLab_EventScript_NatureScientistSpeech

EchelonCityNorth_PokeLab_Text_NatureScientistTimid:
	.string "timid$"

EchelonCityNorth_PokeLab_EventScript_NatureScientistHasty:
	bufferstring STR_VAR_2, EchelonCityNorth_PokeLab_Text_NatureScientistHasty
	goto EchelonCityNorth_PokeLab_EventScript_NatureScientistSpeech

EchelonCityNorth_PokeLab_Text_NatureScientistHasty:
	.string "hasty$"

EchelonCityNorth_PokeLab_EventScript_NatureScientistSerious:
	bufferstring STR_VAR_2, EchelonCityNorth_PokeLab_Text_NatureScientistSerious
	goto EchelonCityNorth_PokeLab_EventScript_NatureScientistSpeech

EchelonCityNorth_PokeLab_Text_NatureScientistSerious:
	.string "serious$"

EchelonCityNorth_PokeLab_EventScript_NatureScientistJolly:
	bufferstring STR_VAR_2, EchelonCityNorth_PokeLab_Text_NatureScientistJolly
	goto EchelonCityNorth_PokeLab_EventScript_NatureScientistSpeech

EchelonCityNorth_PokeLab_Text_NatureScientistJolly:
	.string "jolly$"

EchelonCityNorth_PokeLab_EventScript_NatureScientistNaive:
	bufferstring STR_VAR_2, EchelonCityNorth_PokeLab_Text_NatureScientistNaive
	goto EchelonCityNorth_PokeLab_EventScript_NatureScientistSpeech

EchelonCityNorth_PokeLab_Text_NatureScientistNaive:
	.string "naive$"

EchelonCityNorth_PokeLab_EventScript_NatureScientistModest:
	bufferstring STR_VAR_2, EchelonCityNorth_PokeLab_Text_NatureScientistModest
	goto EchelonCityNorth_PokeLab_EventScript_NatureScientistSpeech

EchelonCityNorth_PokeLab_Text_NatureScientistModest:
	.string "modest$"

EchelonCityNorth_PokeLab_EventScript_NatureScientistMild:
	bufferstring STR_VAR_2, EchelonCityNorth_PokeLab_Text_NatureScientistMild
	goto EchelonCityNorth_PokeLab_EventScript_NatureScientistSpeech

EchelonCityNorth_PokeLab_Text_NatureScientistMild:
	.string "mild$"

EchelonCityNorth_PokeLab_EventScript_NatureScientistQuiet:
	bufferstring STR_VAR_2, EchelonCityNorth_PokeLab_Text_NatureScientistQuiet
	goto EchelonCityNorth_PokeLab_EventScript_NatureScientistSpeech

EchelonCityNorth_PokeLab_Text_NatureScientistQuiet:
	.string "quiet$"

EchelonCityNorth_PokeLab_EventScript_NatureScientistRash:
	bufferstring STR_VAR_2, EchelonCityNorth_PokeLab_Text_NatureScientistRash
	goto EchelonCityNorth_PokeLab_EventScript_NatureScientistSpeech

EchelonCityNorth_PokeLab_Text_NatureScientistRash:
	.string "rash$"

EchelonCityNorth_PokeLab_EventScript_NatureScientistBashful:
	bufferstring STR_VAR_2, EchelonCityNorth_PokeLab_Text_NatureScientistBashful
	goto EchelonCityNorth_PokeLab_EventScript_NatureScientistSpeech

EchelonCityNorth_PokeLab_Text_NatureScientistBashful:
	.string "bashful$"

EchelonCityNorth_PokeLab_EventScript_NatureScientistCalm:
	bufferstring STR_VAR_2, EchelonCityNorth_PokeLab_Text_NatureScientistCalm
	goto EchelonCityNorth_PokeLab_EventScript_NatureScientistSpeech

EchelonCityNorth_PokeLab_Text_NatureScientistCalm:
	.string "calm$"

EchelonCityNorth_PokeLab_EventScript_NatureScientistGentle:
	bufferstring STR_VAR_2, EchelonCityNorth_PokeLab_Text_NatureScientistGentle
	goto EchelonCityNorth_PokeLab_EventScript_NatureScientistSpeech

EchelonCityNorth_PokeLab_Text_NatureScientistGentle:
	.string "gentle$"

EchelonCityNorth_PokeLab_EventScript_NatureScientistSassy:
	bufferstring STR_VAR_2, EchelonCityNorth_PokeLab_Text_NatureScientistSassy
	goto EchelonCityNorth_PokeLab_EventScript_NatureScientistSpeech

EchelonCityNorth_PokeLab_Text_NatureScientistSassy:
	.string "sassy$"

EchelonCityNorth_PokeLab_EventScript_NatureScientistCareful:
	bufferstring STR_VAR_2, EchelonCityNorth_PokeLab_Text_NatureScientistCareful
	goto EchelonCityNorth_PokeLab_EventScript_NatureScientistSpeech

EchelonCityNorth_PokeLab_Text_NatureScientistCareful:
	.string "careful$"

EchelonCityNorth_PokeLab_EventScript_NatureScientistQuirky:
	bufferstring STR_VAR_2, EchelonCityNorth_PokeLab_Text_NatureScientistQuirky
	goto EchelonCityNorth_PokeLab_EventScript_NatureScientistSpeech

EchelonCityNorth_PokeLab_Text_NatureScientistQuirky:
	.string "quirky$"
