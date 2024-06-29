.set LOCALID_OLD_WOMAN, 1

EchelonCityWest_PlayerFlat_1F_MapScripts::
	.byte 0

EchelonCityWest_PlayerFlat_1F_EventScript_OldWoman::
	lock
	faceplayer
	call_if_unset FLAG_RECEIVED_STARTER, EchelonCityWest_PlayerFlat_1F_EventScript_OldWomanBeforeFirstPokemon
	call_if_set FLAG_RECEIVED_STARTER, EchelonCityWest_PlayerFlat_1F_EventScript_OldWomanAfterFirstPokemon
	turnobject LOCALID_OLD_WOMAN, DIR_NORTH
	release
	end

EchelonCityWest_PlayerFlat_1F_EventScript_OldWomanBeforeFirstPokemon:
	msgbox EchelonCityWest_PlayerFlat_1F_Text_OldWomanHeadingOut, MSGBOX_NPC
	return

EchelonCityWest_PlayerFlat_1F_EventScript_OldWomanAfterFirstPokemon:
	bufferleadmonspeciesname STR_VAR_1
	msgbox EchelonCityWest_PlayerFlat_1F_Text_OldWomanAdorable, MSGBOX_NPC
	return

EchelonCityWest_PlayerFlat_1F_Text_OldWomanHeadingOut:
	.string "Good morning {PLAYER}! Are you heading\n"
	.string "out to get your first Pokémon?$"

EchelonCityWest_PlayerFlat_1F_Text_OldWomanAdorable:
	.string "Awww, your {STR_VAR_1} is adorable!$"

EchelonCityWest_PlayerFlat_1F_EventScript_Skitty::
	lock
	faceplayer
	msgbox EchelonCityWest_PlayerFlat_1F_Text_Skitty, MSGBOX_NPC
	release
	end

EchelonCityWest_PlayerFlat_1F_Text_Skitty:
	.string "Purrrr$"
