.set LOCALID_MOTHER, 2
.set LOCALID_DAUGHTER, 4

EchelonCityWest_PlayerFlat_3F_MapScripts::
	.byte 0

EchelonCityWest_PlayerFlat_3F_EventScript_SleepingMan::
	lock
	msgbox EchelonCityWest_PlayerFlat_3F_Text_SleepingMan, MSGBOX_DEFAULT
	release
	end

EchelonCityWest_PlayerFlat_3F_Text_SleepingMan:
	.string "Zzzzz$"

EchelonCityWest_PlayerFlat_3F_EventScript_Son::
	lock
	faceplayer
	call_if_unset FLAG_RECEIVED_STARTER, EchelonCityWest_PlayerFlat_3F_EventScript_SonBeforeFirstPokemon
	call_if_set FLAG_RECEIVED_STARTER, EchelonCityWest_PlayerFlat_3F_EventScript_SonAfterFirstPokemon
	release
	end

EchelonCityWest_PlayerFlat_3F_EventScript_SonBeforeFirstPokemon:
	msgbox EchelonCityWest_PlayerFlat_3F_Text_SonGettingPokemon, MSGBOX_NPC
	return

EchelonCityWest_PlayerFlat_3F_EventScript_SonAfterFirstPokemon:
	bufferleadmonspeciesname STR_VAR_1
	msgbox EchelonCityWest_PlayerFlat_3F_Text_SonCoolPokemon, MSGBOX_NPC
	return

EchelonCityWest_PlayerFlat_3F_Text_SonGettingPokemon:
	.string "You're getting your first Pokémon?\p"
	.string "I can't wait to grow up and get mine!$"

EchelonCityWest_PlayerFlat_3F_Text_SonCoolPokemon:
	.string "Your {STR_VAR_1} is so cool!$"

EchelonCityWest_PlayerFlat_3F_EventScript_Daughter::
	lock
	faceplayer
	msgbox EchelonCityWest_PlayerFlat_3F_Text_DaughterBooks, MSGBOX_NPC
	turnobject LOCALID_DAUGHTER, DIR_NORTH
	release
	end

EchelonCityWest_PlayerFlat_3F_Text_DaughterBooks:
	.string "I love reading!\n"
	.string "What's your favorite book?$"

EchelonCityWest_PlayerFlat_3F_Movement_DaughterFinishTalking:
	face_up
	step_end

EchelonCityWest_PlayerFlat_3F_EventScript_Mother::
	lock
	faceplayer
	call_if_set FLAG_GIVEN_LEMONADE, EchelonCityWest_PlayerFlat_3F_EventScript_MotherHelpful
	call_if_unset FLAG_GIVEN_LEMONADE, EchelonCityWest_PlayerFlat_3F_EventScript_MotherOutOfLemonade
	turnobject LOCALID_MOTHER, DIR_EAST
	release
	end

EchelonCityWest_PlayerFlat_3F_EventScript_MotherOutOfLemonade:
	msgbox EchelonCityWest_PlayerFlat_3F_Text_MotherOutOfLemonade, MSGBOX_NPC
	checkitem ITEM_LEMONADE
	compare VAR_RESULT, TRUE
	call_if_ge EchelonCityWest_PlayerFlat_3F_EventScript_PlayerOfferLemonade
	return

EchelonCityWest_PlayerFlat_3F_EventScript_PlayerOfferLemonade:
	msgbox EchelonCityWest_PlayerFlat_3F_Text_PlayerOfferLemonade, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EchelonCityWest_PlayerFlat_3F_EventScript_KeepLemonade
	removeitem ITEM_LEMONADE, 1
	setflag FLAG_GIVEN_LEMONADE
	addvar VAR_COMPASSION, 1
	msgbox EchelonCityWest_PlayerFlat_3F_Text_MotherThankYou, MSGBOX_NPC
	return

EchelonCityWest_PlayerFlat_3F_EventScript_KeepLemonade:
	turnobject LOCALID_MOTHER, DIR_EAST
	release
	end

EchelonCityWest_PlayerFlat_3F_EventScript_MotherHelpful:
	checkplayergender
	compare VAR_RESULT, MALE
	call_if_eq EchelonCityWest_PlayerFlat_3F_EventScript_MotherHelpfulBoy
	call_if_ne EchelonCityWest_PlayerFlat_3F_EventScript_MotherHelpfulGirl
	return

EchelonCityWest_PlayerFlat_3F_EventScript_MotherHelpfulBoy:
	msgbox EchelonCityWest_PlayerFlat_3F_Text_MotherHelpfulBoy, MSGBOX_NPC
	return

EchelonCityWest_PlayerFlat_3F_EventScript_MotherHelpfulGirl:
	msgbox EchelonCityWest_PlayerFlat_3F_Text_MotherHelpfulGirl, MSGBOX_NPC
	return

EchelonCityWest_PlayerFlat_3F_Text_MotherOutOfLemonade:
	.string "Hello {PLAYER}. I'd offer you some\n"
	.string "lemonade, but we've run out.$"

EchelonCityWest_PlayerFlat_3F_Text_PlayerOfferLemonade:
	.string "Give her a Lemonade?$"

EchelonCityWest_PlayerFlat_3F_Text_MotherThankYou:
	.string "Oh! Thank you so much!$"

EchelonCityWest_PlayerFlat_3F_Text_MotherHelpfulBoy:
	.string "You're such a helpful young boy,\n"
	.string "{PLAYER}. I know your parents are so\l"
	.string "proud of you.$"

EchelonCityWest_PlayerFlat_3F_Text_MotherHelpfulGirl:
	.string "You're such a helpful young girl,\n"
	.string "{PLAYER}. I know your parents are so\l"
	.string "proud of you.$"
