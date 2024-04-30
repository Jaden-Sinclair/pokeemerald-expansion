DemoCity_Flat1_2F_MapScripts::
	.byte 0

DemoCity_Flat1_2F_EventScript_FridgeStarter::
	lock
	setflag FLAG_SYS_POKEMON_GET
	special ChooseStarter
	special HealPlayerParty
	release
	end
