FuchsiaCity_House1_MapScripts:: @ 816D6C5
	.byte 0

FuchsiaCity_House1_EventScript_16D6C6:: @ 816D6C6
	msgbox gUnknown_8198BBB, 2
	end

FuchsiaCity_House1_EventScript_16D6CF:: @ 816D6CF
	lock
	faceplayer
	setvar VAR_0x8004, 13 @ FAMECHECKER_BILL
	setvar VAR_0x8005, 2
	special SetFlavorTextFlagFromSpecialVars
	msgbox gUnknown_8198C1F
	release
	end

FuchsiaCity_House1_EventScript_16D6E8:: @ 816D6E8
	msgbox gUnknown_8198C7B, 2
	end
