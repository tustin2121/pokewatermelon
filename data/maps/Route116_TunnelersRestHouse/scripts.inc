Route116_TunnelersRestHouse_MapScripts:: @ 822B850
	map_script MAP_SCRIPT_ON_TRANSITION, Route116_TunnelersRestHouse_OnTransition
	.byte 0

Route116_TunnelersRestHouse_OnTransition: @ 822B856
	setflag FLAG_LANDMARK_TUNNELERS_REST_HOUSE
	end

Route116_TunnelersRestHouse_EventScript_22B85A:: @ 822B85A
	msgbox Route116_TunnelersRestHouse_Text_22B88B, MSGBOX_NPC
	end

Route116_TunnelersRestHouse_EventScript_22B863:: @ 822B863
	msgbox Route116_TunnelersRestHouse_Text_22B99F, MSGBOX_NPC
	end

Route116_TunnelersRestHouse_EventScript_22B86C:: @ 822B86C
	lock
	faceplayer
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, Route116_TunnelersRestHouse_EventScript_22B881
	msgbox Route116_TunnelersRestHouse_Text_22BAAF, MSGBOX_DEFAULT
	release
	end

Route116_TunnelersRestHouse_EventScript_22B881:: @ 822B881
	msgbox Route116_TunnelersRestHouse_Text_22BB3B, MSGBOX_DEFAULT
	release
	end

Route116_TunnelersRestHouse_Text_22B88B: @ 822B88B
	.i18n 3964

Route116_TunnelersRestHouse_Text_22B99F: @ 822B99F
	.i18n 3965

Route116_TunnelersRestHouse_Text_22BAAF: @ 822BAAF
	.i18n 3966

Route116_TunnelersRestHouse_Text_22BB3B: @ 822BB3B
	.i18n 3967

