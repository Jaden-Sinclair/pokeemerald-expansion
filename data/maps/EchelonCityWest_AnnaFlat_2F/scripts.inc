.set LOCALID_MOM, 2
.set LOCALID_DAUGHTER, 1

EchelonCityWest_AnnaFlat_2F_MapScripts::
	.byte 0

EchelonCityWest_AnnaFlat_2F_EventScript_MomBehaviour::
	lock
	msgbox EchelonCityWest_AnnaFlat_2F_Text_MomBed MSGBOX_NPC
	applymovement LOCALID_MOM, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

EchelonCityWest_AnnaFlat_2F_Text_MomBed:
	.string "She always leaves her bed so messy.$"

EchelonCityWest_AnnaFlat_2F_EventScript_DaughterBehaviour::
	lockall
	msgbox EchelonCityWest_AnnaFlat_2F_Text_DaughterWantSkitty MSGBOX_NPC
	releaseall
	end

EchelonCityWest_AnnaFlat_2F_Text_DaughterWantSkitty:
	.string "I wish I had a Skitty to play with.$"
