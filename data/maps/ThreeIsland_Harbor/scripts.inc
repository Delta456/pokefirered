ThreeIsland_Harbor_MapScripts:: @ 8171EA9
	.byte 0

ThreeIsland_Harbor_EventScript_171EAA:: @ 8171EAA
	lock
	faceplayer
	message Text_181726
	waitmessage
	setvar VAR_0x8004, 3
	goto EventScript_1A900F
	end
