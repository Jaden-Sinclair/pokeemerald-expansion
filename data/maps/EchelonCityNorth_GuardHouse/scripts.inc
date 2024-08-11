.set LOCALID_GUARD, 1

EchelonCityNorth_GuardHouse_MapScripts::
	.byte 0

EchelonCityNorth_GuardHouse_EventScript_GuardBehaviour::
	lock
	msgbox EchelonCityNorth_GuardHouse_Text_GuardHateSpeech, MSGBOX_DEFAULT
	faceplayer
	msgbox EchelonCityNorth_GuardHouse_Text_GuardDidntSeeSpeech, MSGBOX_NPC
	applymovement LOCALID_GUARD, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

EchelonCityNorth_GuardHouse_Text_GuardHateSpeech:
	.string "Worst day of the year, having to deal\n"
	.string "with these people.$"

EchelonCityNorth_GuardHouse_Text_GuardDidntSeeSpeech:
	.string "Oh, I didn't see you there.$"
