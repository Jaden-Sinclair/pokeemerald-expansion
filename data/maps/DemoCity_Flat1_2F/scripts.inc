DemoCity_Flat1_2F_MapScripts::
	.byte 0

DemoCity_Flat1_2F_EventScript_FridgeStarter::
	lock
	setflag FLAG_SYS_POKEMON_GET
	special ChooseStarter
	special HealPlayerParty
	release
	end

DemoCity_Flat1_2F_EventScript_TestTrainer::
	trainerbattle_single TRAINER_CALVIN_1, Route102_Text_CalvinIntro, Route102_Text_CalvinDefeated, Route102_EventScript_CalvinRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_CalvinRematch
	setvar VAR_0x8004, TRAINER_CALVIN_1
	specialvar VAR_RESULT, IsTrainerRegistered
	goto_if_eq VAR_RESULT, FALSE, Route102_EventScript_CalvinTryRegister
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
	release
	end
