///////////////////////////////////////////////////////////////////////////
/// GUI
///////////////////////////////////////////////////////////////////////////
//--- Hack to avoid too large display upon first startup (fixed in engine)
//#define GUI_GRID_OLD_WAbs		((safezoneW / ((floor (safezoneW / safezoneH)) max 1)) min 1.2)
//--- New grid for new A3 displays
#define GUI_GRID_WAbs			((safezoneW / safezoneH) min 1.2)
#define GUI_GRID_HAbs			(GUI_GRID_WAbs / 1.2)
#define GUI_GRID_W			(GUI_GRID_WAbs / 40)
#define GUI_GRID_H			(GUI_GRID_HAbs / 25)
#define GUI_GRID_X			(safezoneX)
#define GUI_GRID_Y			(safezoneY + safezoneH - GUI_GRID_HAbs)
//--- MUF - Test grid used in MP
#define GUI_GRID_MP_WAbs	GUI_GRID_WAbs
#define GUI_GRID_MP_HAbs	GUI_GRID_HAbs
#define GUI_GRID_MP_W		GUI_GRID_W
#define GUI_GRID_MP_H		GUI_GRID_H
#define GUI_GRID_MP_X		(SafezoneX)
#define GUI_GRID_MP_Y		(safezoneY)
//--- Screen Center
#define GUI_GRID_CENTER_WAbs		GUI_GRID_WAbs
#define GUI_GRID_CENTER_HAbs		GUI_GRID_HAbs
#define GUI_GRID_CENTER_W		GUI_GRID_W
#define GUI_GRID_CENTER_H		GUI_GRID_H
#define GUI_GRID_CENTER_X		(safezoneX + (safezoneW - GUI_GRID_CENTER_WAbs)/2)
#define GUI_GRID_CENTER_Y		(safezoneY + (safezoneH - GUI_GRID_CENTER_HAbs)/2)
//--- 2D Editor - TEST A3
#define GUI_GRID_EDITOR_WAbs		GUI_GRID_CENTER_WAbs
#define GUI_GRID_EDITOR_HAbs		GUI_GRID_CENTER_HAbs
#define GUI_GRID_EDITOR_W		GUI_GRID_CENTER_W
#define GUI_GRID_EDITOR_H		GUI_GRID_CENTER_H
#define GUI_GRID_EDITOR_X		(safezoneX)
#define GUI_GRID_EDITOR_Y		(safezoneY)
//--- Diary
#define GUI_GRID_DIARY_WAbs		GUI_GRID_WAbs
#define GUI_GRID_DIARY_HAbs		GUI_GRID_HAbs
#define GUI_GRID_DIARY_W		GUI_GRID_W
#define GUI_GRID_DIARY_H		GUI_GRID_H
#define GUI_GRID_DIARY_X		(safezoneX)
#define GUI_GRID_DIARY_Y		(safezoneY)
//--- Top left
#define GUI_GRID_TOPLEFT_WAbs		GUI_GRID_WAbs
#define GUI_GRID_TOPLEFT_HAbs		GUI_GRID_HAbs
#define GUI_GRID_TOPLEFT_W		GUI_GRID_W
#define GUI_GRID_TOPLEFT_H		GUI_GRID_H
#define GUI_GRID_TOPLEFT_X		(safezoneX)
#define GUI_GRID_TOPLEFT_Y		(safezoneY)
///////////////////////////////////////////////////////////////////////////
/// iGUI
///////////////////////////////////////////////////////////////////////////
//--- IGUI Vehicle
#define IGUI_GRID_VEHICLE_WAbs		(10 * GUI_GRID_W)
#define IGUI_GRID_VEHICLE_HAbs		(4.5 * GUI_GRID_H)
#define IGUI_GRID_VEHICLE_XDef		(safezoneX + 0.5 * GUI_GRID_W)
#define IGUI_GRID_VEHICLE_YDef		(safezoneY + 0.5 * GUI_GRID_H)
#define IGUI_GRID_VEHICLE_X		(profilenamespace getvariable ["IGUI_GRID_VEHICLE_X",IGUI_GRID_VEHICLE_XDef])
#define IGUI_GRID_VEHICLE_Y		(profilenamespace getvariable ["IGUI_GRID_VEHICLE_Y",IGUI_GRID_VEHICLE_YDef])
#define IGUI_GRID_VEHICLE_W		GUI_GRID_W
#define IGUI_GRID_VEHICLE_H		GUI_GRID_H
//--- IGUI Radar
#define IGUI_GRID_RADAR_WAbs		(5.6 * GUI_GRID_W)
#define IGUI_GRID_RADAR_HAbs		(5.6 * GUI_GRID_H)
#define IGUI_GRID_RADAR_XDef		(safezoneX + safezoneW / 2 - 2.8 * GUI_GRID_W)
#define IGUI_GRID_RADAR_YDef		(safezoneY + 0.5 * GUI_GRID_H)
#define IGUI_GRID_RADAR_X		(profilenamespace getvariable ["IGUI_GRID_RADAR_X",IGUI_GRID_RADAR_XDef])
#define IGUI_GRID_RADAR_Y		(profilenamespace getvariable ["IGUI_GRID_RADAR_Y",IGUI_GRID_RADAR_YDef])
#define IGUI_GRID_RADAR_W		GUI_GRID_W
#define IGUI_GRID_RADAR_H		GUI_GRID_H
//--- IGUI Weapon
#define IGUI_GRID_WEAPON_WAbs		(12.4 * GUI_GRID_W)
#define IGUI_GRID_WEAPON_HAbs		(4.5 * GUI_GRID_H)
#define IGUI_GRID_WEAPON_XDef		((safezoneX + safezoneW) - IGUI_GRID_WEAPON_WAbs - 0.5 * GUI_GRID_W)
#define IGUI_GRID_WEAPON_YDef		(safezoneY + 0.5 * GUI_GRID_H)
#define IGUI_GRID_WEAPON_X		(profilenamespace getvariable ["IGUI_GRID_WEAPON_X",IGUI_GRID_WEAPON_XDef])
#define IGUI_GRID_WEAPON_Y		(profilenamespace getvariable ["IGUI_GRID_WEAPON_Y",IGUI_GRID_WEAPON_YDef])
#define IGUI_GRID_WEAPON_W		GUI_GRID_W
#define IGUI_GRID_WEAPON_H		GUI_GRID_H
//--- IGUI Notification
#define IGUI_GRID_NOTIFICATION_WAbs	(12 * GUI_GRID_W)
#define IGUI_GRID_NOTIFICATION_HAbs	(6 * GUI_GRID_H)
#define IGUI_GRID_NOTIFICATION_XDef	(0.5 - 6 * GUI_GRID_W)
#define IGUI_GRID_NOTIFICATION_YDef	(safezoneY + 6.5 * GUI_GRID_H)
#define IGUI_GRID_NOTIFICATION_X	(profilenamespace getvariable ["IGUI_GRID_NOTIFICATION_X",IGUI_GRID_NOTIFICATION_XDef])
#define IGUI_GRID_NOTIFICATION_Y	(profilenamespace getvariable ["IGUI_GRID_NOTIFICATION_Y",IGUI_GRID_NOTIFICATION_YDef])
#define IGUI_GRID_NOTIFICATION_W	GUI_GRID_W
#define IGUI_GRID_NOTIFICATION_H	GUI_GRID_H
//--- IGUI Action / Command Menu
#define IGUI_GRID_MENU_WAbs		(4.5 * GUI_GRID_W)
#define IGUI_GRID_MENU_HAbs		(10 * (IGUI_TEXT_SIZE_MEDIUM * 1.3))
#define IGUI_GRID_MENU_XDef		(1.5 * GUI_GRID_W + safezoneX)
#define IGUI_GRID_MENU_YDef		(5 * GUI_GRID_H + safezoneY)
#define IGUI_GRID_MENU_X		(profilenamespace getvariable ["IGUI_GRID_MENU_X",IGUI_GRID_MENU_XDef])
#define IGUI_GRID_MENU_Y		(profilenamespace getvariable ["IGUI_GRID_MENU_Y",IGUI_GRID_MENU_YDef])
#define IGUI_GRID_MENU_W		GUI_GRID_W
#define IGUI_GRID_MENU_H		GUI_GRID_H
//--- IGUI Communication menu icons
#define IGUI_GRID_COMM_WAbs		(1.5 * GUI_GRID_W)
#define IGUI_GRID_COMM_HAbs		(15 * GUI_GRID_H)
#define IGUI_GRID_COMM_XDef		(0 * GUI_GRID_W + safezoneX)
#define IGUI_GRID_COMM_YDef		(5 * GUI_GRID_H + safezoneY)
#define IGUI_GRID_COMM_X		(profilenamespace getvariable ["IGUI_GRID_COMM_X",IGUI_GRID_COMM_XDef])
#define IGUI_GRID_COMM_Y		(profilenamespace getvariable ["IGUI_GRID_COMM_Y",IGUI_GRID_COMM_YDef])
#define IGUI_GRID_COMM_W		GUI_GRID_W
#define IGUI_GRID_COMM_H		GUI_GRID_H
//--- IGUI Hint
#define IGUI_GRID_HINT_WAbs		(12 * GUI_GRID_W)
#define IGUI_GRID_HINT_HAbs		(8 * GUI_GRID_H)
#define IGUI_GRID_HINT_XDef		((safezoneX + safezoneW) - IGUI_GRID_HINT_WAbs - 1 * GUI_GRID_W)
#define IGUI_GRID_HINT_YDef		(safezoneY + 6 * GUI_GRID_H)
#define IGUI_GRID_HINT_X		(profilenamespace getvariable ["IGUI_GRID_HINT_X",IGUI_GRID_HINT_XDef])
#define IGUI_GRID_HINT_Y		(profilenamespace getvariable ["IGUI_GRID_HINT_Y",IGUI_GRID_HINT_YDef])
#define IGUI_GRID_HINT_W		GUI_GRID_W
#define IGUI_GRID_HINT_H		GUI_GRID_H
//--- IGUI GPS
#define IGUI_GRID_GPS_XDef		(safezoneX + safezoneW - 10.5 * GUI_GRID_W)
#define IGUI_GRID_GPS_YDef		(safezoneY + safezoneH - 15.5 * GUI_GRID_H)
#define IGUI_GRID_GPS_WDef		(10 * GUI_GRID_W)
#define IGUI_GRID_GPS_HDef		(10 * GUI_GRID_H)
#define IGUI_GRID_GPS_X			(profilenamespace getvariable ['IGUI_GRID_GPS_X',IGUI_GRID_GPS_XDef])
#define IGUI_GRID_GPS_Y			(profilenamespace getvariable ['IGUI_GRID_GPS_Y',IGUI_GRID_GPS_YDef])
#define IGUI_GRID_GPS_WAbs		(profilenamespace getvariable ['IGUI_GRID_GPS_W',IGUI_GRID_GPS_WDef])
#define IGUI_GRID_GPS_HAbs		(profilenamespace getvariable ['IGUI_GRID_GPS_H',IGUI_GRID_GPS_HDef])
//--- IGUI AV Camera
#define IGUI_GRID_AVCAMERA_XDef		(safezoneX + safezoneW - 11.1 * GUI_GRID_W)
#define IGUI_GRID_AVCAMERA_YDef		(13.5 * GUI_GRID_H + GUI_GRID_Y)
#define IGUI_GRID_AVCAMERA_WDef		(10.6 * GUI_GRID_W)
#define IGUI_GRID_AVCAMERA_HDef		(6.7 * GUI_GRID_H)
#define IGUI_GRID_AVCAMERA_X		(profilenamespace getvariable ['IGUI_GRID_AVCAMERA_X',IGUI_GRID_AVCAMERA_XDef])
#define IGUI_GRID_AVCAMERA_Y		(profilenamespace getvariable ['IGUI_GRID_AVCAMERA_Y',IGUI_GRID_AVCAMERA_YDef])
#define IGUI_GRID_AVCAMERA_WAbs		(profilenamespace getvariable ['IGUI_GRID_AVCAMERA_W',IGUI_GRID_AVCAMERA_WDef])
#define IGUI_GRID_AVCAMERA_HAbs		(profilenamespace getvariable ['IGUI_GRID_AVCAMERA_H',IGUI_GRID_AVCAMERA_HDef])
//--- IGUI IGUI Chat Log
#define IGUI_GRID_CHAT_XDef		(safezoneX + 1 * GUI_GRID_W)
#define IGUI_GRID_CHAT_YDef		(safezoneY + safezoneH - 10.5 * GUI_GRID_H)
#define IGUI_GRID_CHAT_WDef		(20 * GUI_GRID_W)
#define IGUI_GRID_CHAT_HDef		(5 * GUI_GRID_H)
#define IGUI_GRID_CHAT_X		(profilenamespace getvariable ["IGUI_GRID_CHAT_X",IGUI_GRID_CHAT_XDef])
#define IGUI_GRID_CHAT_Y		(profilenamespace getvariable ["IGUI_GRID_CHAT_Y",IGUI_GRID_CHAT_YDef])
#define IGUI_GRID_CHAT_WAbs		(profilenamespace getvariable ["IGUI_GRID_CHAT_W",IGUI_GRID_CHAT_WDef])
#define IGUI_GRID_CHAT_HAbs		(profilenamespace getvariable ["IGUI_GRID_CHAT_H",IGUI_GRID_CHAT_HDef])
//--- IGUI Command Bar
#define IGUI_GRID_BAR_WAbs		(36 * GUI_GRID_W)
#define IGUI_GRID_BAR_HAbs		(4 * GUI_GRID_H)
#define IGUI_GRID_BAR_XDef		(safezoneX + 1 * GUI_GRID_W)
#define IGUI_GRID_BAR_YDef		(safezoneY + safezoneH - 4.5 * GUI_GRID_H)
#define IGUI_GRID_BAR_X			(profilenamespace getvariable ["IGUI_GRID_BAR_X",IGUI_GRID_BAR_XDef])
#define IGUI_GRID_BAR_Y			(profilenamespace getvariable ["IGUI_GRID_BAR_Y",IGUI_GRID_BAR_YDef])
#define IGUI_GRID_BAR_W			GUI_GRID_W
#define IGUI_GRID_BAR_H			GUI_GRID_H
//--- IGUI MP Progress
#define IGUI_GRID_MP_WAbs		(2.5 * GUI_GRID_W)
#define IGUI_GRID_MP_HAbs		(15 * GUI_GRID_H)
#define IGUI_GRID_MP_XDef		(safezoneX + safezoneW - 2 * GUI_GRID_W)
#define IGUI_GRID_MP_YDef		(5 * GUI_GRID_H + safezoneY)
#define IGUI_GRID_MP_X			(profilenamespace getvariable ["IGUI_GRID_MP_X",IGUI_GRID_MP_XDef])
#define IGUI_GRID_MP_Y			(profilenamespace getvariable ["IGUI_GRID_MP_Y",IGUI_GRID_MP_YDef])
#define IGUI_GRID_MP_W			GUI_GRID_W
#define IGUI_GRID_MP_H			GUI_GRID_H
///////////////////////////////////////////////////////////////////////////
/// Old
///////////////////////////////////////////////////////////////////////////
//--- Old grid, that is used for old A3 and TKOH displays
#define GUI_GRID_OLD_WAbs		((safezoneW / safezoneH) min 1.2)
#define GUI_GRID_OLD_HAbs		(GUI_GRID_OLD_WAbs / 1.2)
#define GUI_GRID_OLD_W			(GUI_GRID_OLD_WAbs / 32)
#define GUI_GRID_OLD_H			(GUI_GRID_OLD_HAbs / 20)
#define GUI_GRID_OLD_X			(safezoneX)
#define GUI_GRID_OLD_Y			(safezoneY + safezoneH - GUI_GRID_OLD_HAbs)
//--- Centered
//#define GUI_GRID_OLD_X		(safezoneX + (safezoneW - GUI_GRID_OLD_CENTER_WAbs)/2)
//--- Dark magic
//#define GUI_GRID_OLD_X		(profilenamespace getvariable ['GUI_GRID_OLD_X',(safezoneX + (safezoneW - GUI_GRID_OLD_CENTER_WAbs)/2)])
//#define GUI_GRID_OLD_Y		(profilenamespace getvariable ['GUI_GRID_OLD_Y',(safezoneY + safezoneH - GUI_GRID_OLD_HAbs)])
//MUF-TEST: Anchor near the right edge of the screen - when changing Interface size, this point doesn't change its X position
#define GUI_ANCHOR_RIGHT		(0.983 * safezoneW + safezoneX)
#define GUI_ANCHOR_LEFT			0
//--- Screen Center
#define GUI_GRID_OLD_CENTER_WAbs	GUI_GRID_OLD_WAbs
#define GUI_GRID_OLD_CENTER_HAbs	GUI_GRID_OLD_HAbs
#define GUI_GRID_OLD_CENTER_W		GUI_GRID_OLD_W
#define GUI_GRID_OLD_CENTER_H		GUI_GRID_OLD_H
#define GUI_GRID_OLD_CENTER_X		(safezoneX + (safezoneW - GUI_GRID_OLD_CENTER_WAbs)/2)
#define GUI_GRID_OLD_CENTER_Y		(safezoneY + (safezoneH - GUI_GRID_OLD_CENTER_HAbs)/2)
//--- 2D Editor
#define GUI_GRID_OLD_EDITOR_WAbs	GUI_GRID_OLD_CENTER_WAbs
#define GUI_GRID_OLD_EDITOR_HAbs	GUI_GRID_OLD_CENTER_HAbs
#define GUI_GRID_OLD_EDITOR_W		GUI_GRID_OLD_CENTER_W
#define GUI_GRID_OLD_EDITOR_H		GUI_GRID_OLD_CENTER_H
#define GUI_GRID_OLD_EDITOR_X		GUI_GRID_OLD_CENTER_X
#define GUI_GRID_OLD_EDITOR_Y		(safezoneY)
//--- Debug console (center down)
#define GUI_GRID_OLD_DEBUG_WAbs		GUI_GRID_OLD_WAbs
#define GUI_GRID_OLD_DEBUG_HAbs		GUI_GRID_OLD_HAbs
#define GUI_GRID_OLD_DEBUG_W		GUI_GRID_OLD_W
#define GUI_GRID_OLD_DEBUG_H		GUI_GRID_OLD_H
#define GUI_GRID_OLD_DEBUG_X		(safezoneX + (safezoneW - GUI_GRID_OLD_DEBUG_WAbs)/2)
#define GUI_GRID_OLD_DEBUG_Y		(safezoneY + safezoneH - GUI_GRID_OLD_DEBUG_HAbs)
//--- IGUI Common
#define IGUI_GRID_OLD_WAbs		GUI_GRID_OLD_WAbs
#define IGUI_GRID_OLD_HAbs		GUI_GRID_OLD_HAbs
#define IGUI_GRID_OLD_W			GUI_GRID_OLD_W
#define IGUI_GRID_OLD_H			GUI_GRID_OLD_H
#define IGUI_GRID_OLD_X			(safezoneX + (safezoneW - IGUI_GRID_OLD_WAbs) / 2)
#define IGUI_GRID_OLD_Y			(safezoneY + safezoneH - IGUI_GRID_OLD_HAbs)
//--- IGUI Bottom
#define IGUI_GRID_OLD_BOTTOM_WAbs	IGUI_GRID_OLD_WAbs
#define IGUI_GRID_OLD_BOTTOM_HAbs	IGUI_GRID_OLD_HAbs
#define IGUI_GRID_OLD_BOTTOM_W		IGUI_GRID_OLD_W
#define IGUI_GRID_OLD_BOTTOM_H		IGUI_GRID_OLD_H
#define IGUI_GRID_OLD_BOTTOM_X		(safezoneX + (safezoneW - IGUI_GRID_OLD_BOTTOM_WAbs) / 2)
#define IGUI_GRID_OLD_BOTTOM_Y		(safezoneY + safezoneH - IGUI_GRID_OLD_BOTTOM_HAbs)
//--- IGUI Analogue Gauges
#define IGUI_GRID_OLD_GAUGES_WAbs	(30 * IGUI_GRID_OLD_BOTTOM_W)
#define IGUI_GRID_OLD_GAUGES_HAbs	(6 * IGUI_GRID_OLD_BOTTOM_H)
#define IGUI_GRID_OLD_GAUGES_XDef	(1 * IGUI_GRID_OLD_BOTTOM_W + IGUI_GRID_OLD_BOTTOM_X)
#define IGUI_GRID_OLD_GAUGES_YDef	(13.5 * IGUI_GRID_OLD_BOTTOM_H + IGUI_GRID_OLD_BOTTOM_Y)
//#define IGUI_GRID_OLD_GAUGES_X		//(profilenamespace getvariable ["IGUI_GRID_OLD_GAUGES_X",IGUI_GRID_OLD_GAUGES_XDef])
//#define IGUI_GRID_OLD_GAUGES_Y		//(profilenamespace getvariable ["IGUI_GRID_OLD_GAUGES_Y",IGUI_GRID_OLD_GAUGES_YDef])
#define IGUI_GRID_OLD_GAUGES_X		IGUI_GRID_OLD_GAUGES_XDef
#define IGUI_GRID_OLD_GAUGES_Y		IGUI_GRID_OLD_GAUGES_YDef
#define IGUI_GRID_OLD_GAUGES_W		IGUI_GRID_OLD_W
#define IGUI_GRID_OLD_GAUGES_H		IGUI_GRID_OLD_H
//--- IGUI Action / Command Menu
#define IGUI_GRID_OLD_MENU_WAbs		(4.5 * IGUI_GRID_OLD_W)
#define IGUI_GRID_OLD_MENU_HAbs		(10 * (IGUI_TEXT_SIZE_MEDIUM * 1.3))
#define IGUI_GRID_OLD_MENU_XDef		(1 * IGUI_GRID_OLD_W + safezoneX)
#define IGUI_GRID_OLD_MENU_YDef		(5 * IGUI_GRID_OLD_H + safezoneY)
#define IGUI_GRID_OLD_MENU_X		(profilenamespace getvariable ["IGUI_GRID_OLD_MENU_X",IGUI_GRID_OLD_MENU_XDef])
#define IGUI_GRID_OLD_MENU_Y		(profilenamespace getvariable ["IGUI_GRID_OLD_MENU_Y",IGUI_GRID_OLD_MENU_YDef])
#define IGUI_GRID_OLD_MENU_W		IGUI_GRID_OLD_W
#define IGUI_GRID_OLD_MENU_H		IGUI_GRID_OLD_H
//--- E3
/*
#define IGUI_GRID_OLD_MENU_WAbs		(4.5 * IGUI_GRID_OLD_W)
#define IGUI_GRID_OLD_MENU_HAbs		(10 * (IGUI_TEXT_SIZE_MEDIUM * 1.3))
#define IGUI_GRID_OLD_MENU_XDef		(0.6)
#define IGUI_GRID_OLD_MENU_YDef		(0.55)
#define IGUI_GRID_OLD_MENU_X		(profilenamespace getvariable ["IGUI_GRID_OLD_MENU_X",IGUI_GRID_OLD_MENU_XDef])
#define IGUI_GRID_OLD_MENU_Y		(profilenamespace getvariable ["IGUI_GRID_OLD_MENU_Y",IGUI_GRID_OLD_MENU_YDef])
#define IGUI_GRID_OLD_MENU_W		IGUI_GRID_OLD_W
#define IGUI_GRID_OLD_MENU_H		IGUI_GRID_OLD_H
*/
//--- IGUI Task
#define IGUI_GRID_OLD_TASK_WAbs		(12 * IGUI_GRID_OLD_W)
#define IGUI_GRID_OLD_TASK_HAbs		(2 * IGUI_GRID_OLD_H)
#define IGUI_GRID_OLD_TASK_XDef		(10 * IGUI_GRID_OLD_W + IGUI_GRID_OLD_X)
#define IGUI_GRID_OLD_TASK_YDef		(1 * IGUI_GRID_OLD_H + safezoneY)
#define IGUI_GRID_OLD_TASK_X		IGUI_GRID_OLD_TASK_XDef
#define IGUI_GRID_OLD_TASK_Y		IGUI_GRID_OLD_TASK_YDef
#define IGUI_GRID_OLD_TASK_W		IGUI_GRID_OLD_W
#define IGUI_GRID_OLD_TASK_H		IGUI_GRID_OLD_H
//--- IGUI PIP
#define IGUI_GRID_OLD_PIP_XDef		(safezoneX + safezoneW - 6.5 * IGUI_GRID_OLD_W)
#define IGUI_GRID_OLD_PIP_YDef		(9 * IGUI_GRID_OLD_H + IGUI_GRID_OLD_Y)
#define IGUI_GRID_OLD_PIP_WDef		(6 * IGUI_GRID_OLD_W)
#define IGUI_GRID_OLD_PIP_HDef		(IGUI_GRID_OLD_PIP_WDef)
//#define IGUI_GRID_OLD_PIP_X		(profilenamespace getvariable ['IGUI_GRID_OLD_PIP_X',IGUI_GRID_OLD_PIP_XDef])
//#define IGUI_GRID_OLD_PIP_Y		(profilenamespace getvariable ['IGUI_GRID_OLD_PIP_Y',IGUI_GRID_OLD_PIP_YDef])
//#define IGUI_GRID_OLD_PIP_WAbs	(profilenamespace getvariable ['IGUI_GRID_OLD_PIP_W',IGUI_GRID_OLD_PIP_WDef])
#define IGUI_GRID_OLD_PIP_X		IGUI_GRID_OLD_PIP_XDef
#define IGUI_GRID_OLD_PIP_Y		IGUI_GRID_OLD_PIP_YDef
#define IGUI_GRID_OLD_PIP_WAbs		IGUI_GRID_OLD_PIP_WDef
#define IGUI_GRID_OLD_PIP_HAbs		(IGUI_GRID_OLD_PIP_WAbs)
//--- MUF - experimental optics grid
// #define GUI_GRID_OLD_OPTICS_X	(SafezoneX + ((SafezoneW - SafezoneH) / 2))
// #define GUI_GRID_OLD_OPTICS_Y	(SafezoneY)
// #define GUI_GRID_OLD_OPTICS_W	(0.01875)
// #define GUI_GRID_OLD_OPTICS_H	(0.025)
// #define GUI_GRID_OLD_OPTICS_WAbs	((SafezoneX + ((SafezoneW - SafezoneH) / 2)) / 0.01875)
// #define GUI_GRID_OLD_OPTICS_HAbs	(SafezoneH / 0.01875)
#define GUI_GRID_OLD_OPTICS_X		(SafezoneX + ((SafezoneW - SafezoneH) / 2))
#define GUI_GRID_OLD_OPTICS_Y		(SafezoneY)
#define GUI_GRID_OLD_OPTICS_W		(0.01875 * SafezoneH)
#define GUI_GRID_OLD_OPTICS_H		(0.025 * SafezoneH)
#define GUI_GRID_OLD_OPTICS_WAbs	(SafezoneH)
#define GUI_GRID_OLD_OPTICS_HAbs	(SafezoneH)
//--- MUF - experimental AV Terminal grid
#define GUI_GRID_OLD_AV_TERMINAL_X	(safezoneX)
#define GUI_GRID_OLD_AV_TERMINAL_Y	(safezoneY)
#define GUI_GRID_OLD_AV_TERMINAL_W	(safezoneW / 64)
#define GUI_GRID_OLD_AV_TERMINAL_H	(safezoneH / 40)
#define GUI_GRID_OLD_AV_TERMINAL_WAbs	(safezoneW)
#define GUI_GRID_OLD_AV_TERMINAL_HAbs	(safezoneH) 