Route10_PokemonCenter_1F_MapScripts:: @ 816FC2F
	map_script 3, Route10_PokemonCenter_1F_MapScript1_16FC3A
	map_script 5, Route10_PokemonCenter_1F_MapScript2_1BC05C
	.byte 0

Route10_PokemonCenter_1F_MapScript1_16FC3A:: @ 816FC3A
	setworldmapflag FLAG_WORLD_MAP_ROUTE10_POKEMON_CENTER_1F
	setrespawn SPAWN_ROUTE10
	end

Route10_PokemonCenter_1F_EventScript_16FC41:: @ 816FC41
	lock
	faceplayer
	call EventScript_1A6578
	release
	end

Route10_PokemonCenter_1F_EventScript_16FC4A:: @ 816FC4A
	msgbox gUnknown_819E59D, 2
	end

Route10_PokemonCenter_1F_EventScript_16FC53:: @ 816FC53
	msgbox gUnknown_819E523, 2
	end

Route10_PokemonCenter_1F_EventScript_16FC5C:: @ 816FC5C
	msgbox gUnknown_819E5D2, 2
	end

Route10_PokemonCenter_1F_EventScript_16FC65:: @ 816FC65
	lock
	faceplayer
	call EventScript_16FCF1
	checkflag FLAG_0x2FA
	goto_if_eq EventScript_16FCE7
	msgbox gUnknown_819E5FB, MSGBOX_YESNO
	compare_var_to_value VAR_RESULT, 0
	goto_if_eq EventScript_1A7AD1
	setvar VAR_0x8004, 0
	specialvar VAR_RESULT, Special_GetPokedexCount
	getnumberstring 2, VAR_0x8006
	call EventScript_16FCF1
	compare_var_to_value VAR_0x8006, 20
	goto_if 0, EventScript_1A7ABD
	msgbox gUnknown_819E733
	checkitemspace ITEM_EVERSTONE, 1
	compare_var_to_value VAR_RESULT, 0
	goto_if_eq EventScript_1A7AC7
	additem ITEM_EVERSTONE, 1
	giveitemfanfaremsg gUnknown_819E786, ITEM_EVERSTONE
	setflag FLAG_0x2FA
	msgbox gUnknown_819E7AF
	release
	end

EventScript_16FCE7:: @ 816FCE7
	msgbox gUnknown_819E7AF
	release
	end

EventScript_16FCF1:: @ 816FCF1
	getnumberstring 0, 20
	getitemname 1, ITEM_EVERSTONE
	return
