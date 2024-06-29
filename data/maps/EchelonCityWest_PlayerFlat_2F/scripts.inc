EchelonCityWest_PlayerFlat_2F_MapScripts::
	.byte 0

EchelonCityWest_PlayerFlat_2F_EventScript_Fridge::
	lockall
	goto_if_set FLAG_TOOK_LEFTOVERS, EchelonCityWest_PlayerFlat_2F_EventScript_FridgeIsEmpty
	msgbox EchelonCityWest_PlayerFlat_2F_Text_Fridge, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EchelonCityWest_PlayerFlat_2F_EventScript_LeaveLeftovers
	checkitemspace ITEM_LEFTOVERS, 1
	compare VAR_RESULT, FALSE
	goto_if_eq EchelonCityWest_PlayerFlat_2F_EventScript_BagIsFull
	giveitem ITEM_LEFTOVERS
	setflag FLAG_TOOK_LEFTOVERS
	releaseall
	end

EchelonCityWest_PlayerFlat_2F_EventScript_LeaveLeftovers:
	releaseall
	end

EchelonCityWest_PlayerFlat_2F_EventScript_FridgeIsEmpty:
	msgbox EchelonCityWest_PlayerFlat_2F_Text_FridgeIsEmpty, MSGBOX_DEFAULT
	releaseall
	end

EchelonCityWest_PlayerFlat_2F_EventScript_BagIsFull:
	msgbox EchelonCityWest_PlayerFlat_2F_Text_BagIsFull, MSGBOX_DEFAULT
	releaseall
	end

EchelonCityWest_PlayerFlat_2F_Text_Fridge:
	.string "There are some Leftovers in the fridge.\n"
	.string "Would you like to take them?$"

EchelonCityWest_PlayerFlat_2F_Text_FridgeIsEmpty:
	.string "The fridge is empty.$"

EchelonCityWest_PlayerFlat_2F_Text_BagIsFull:
	.string "Your BAG is full.$"

EchelonCityWest_PlayerFlat_2F_EventScript_NoteFromMom::
	lockall
	msgbox EchelonCityWest_PlayerFlat_2F_Text_NoteFromMom, MSGBOX_DEFAULT
	releaseall
	end

EchelonCityWest_PlayerFlat_2F_Text_NoteFromMom:
	.string "There's a note from mom:\p"
	.string "“{PLAYER}, there are leftovers in the\n"
	.string "fridge for you. Good luck getting your\l"
	.string "new Pokémon! Anna's going to walk over\l"
	.string "with you. Stay safe! - Love Mom”$"
