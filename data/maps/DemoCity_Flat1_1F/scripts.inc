DemoCity_Flat1_1F_MapScripts::
	.byte 0

DemoCity_Flat1_1F_EventScript_OldWoman::
	lock
	faceplayer
	msgbox DemoCity_Flat1_1F_Text_HeadingOut, MSGBOX_NPC
	applymovement 1, DemoCity_Flat1_1F_Movement_OldWomanFinishTalking
	waitmovement 0
	release
	end

DemoCity_Flat1_1F_Text_HeadingOut:
	.string "Good morning {PLAYER}{KUN}! Are you heading\n"
	.string "out to get your first POKéMON?$"

DemoCity_Flat1_1F_Movement_OldWomanFinishTalking:
	face_up
	step_end
