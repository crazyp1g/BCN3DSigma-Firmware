/*
	Touch_Screen_Definitions.h - Here we have all the constants related to items in the LCD Screen.
	Last Update: 26/06/2017
	Author: Alejandro Garcia (S3mt0x)
*/

#ifndef TOUCH_SCREEN_DEFINITIONS_H_
#define TOUCH_SCREEN_DEFINITIONS_H_


#pragma region FORMS
//Form
//without form declared///////////////////////////////
#define FORM_SDPRINTING_STOPPRINT				1
	#define BUTTON_SDPRINTING_STOPPRINT_YES						1
	#define BUTTON_SDPRINTING_STOPPRINT_NO						61
	#define BUTTON_SDPRINTING_STOPPRINT_SAVE					88
	#define STRING_INIT_FIRWAREVERSION								3
/////////////////////////////////////////////////////

/////SDLIST DEFINITIONS/////

#define FORM_SDLIST								2
	#define STRING_SDLIST_NAMEFILE0				23
	#define STRING_SDLIST_NAMEFILE1				1
	#define STRING_SDLIST_NAMEFILE2				8
	#define STRING_SDLIST_NAMEFILE3				12
	#define STRING_SDLIST_NAMEFILE4				16
	#define STRING_SDLIST_NAMEFILE5				29
	#define STRING_SDLIST_DURFILE0			24
	#define STRING_SDLIST_DURFILE1			7
	#define STRING_SDLIST_DURFILE2			25
	#define STRING_SDLIST_DURFILE3			26
	#define STRING_SDLIST_DURFILE4			30
	#define STRING_SDLIST_DURFILE5			341
	#define BUTTON_SDLIST_SELECT0				85
	#define BUTTON_SDLIST_SELECT1				15
	#define BUTTON_SDLIST_SELECT2				14
	#define BUTTON_SDLIST_SELECT3				56
	#define BUTTON_SDLIST_SELECT4				86
	#define BUTTON_SDLIST_SELECT5				847
	#define BUTTON_SDLIST_GODOWN					37
	#define BUTTON_SDLIST_GOUP					5
	#define BUTTON_SDLIST_FOLDERBACK				55
	#define USERIMAGE_SDLIST_FOLDERFILE           1
	#define GIF_SDLIST_SCROLLBAR					 14
	
#define FORM_SDLIST_CONFIRMATION			15
	#define STRING_SDLIST_CONFIRMATION_NAMEFILE				27
	#define STRING_SDLIST_CONFIRMATION_DURFILE			28
	#define BUTTON_SDLIST_CONFIRMATION_YES		38
	#define BUTTON_SDLIST_CONFIRMATION_NO		39
	
/////RECOVERY/SAVE JOP PRINT DEFINITIONS/////	
#define FORM_RECOVERY_PRINT_ASK 26
	#define BUTTON_RECOVERY_PRINT_ASK_ACCEPT		93
	#define BUTTON_RECOVERY_PRINT_ASK_CANCEL		172
	#define STRING_RECOVERY_PRINT_ASK 50
	#define STRING_RECOVERY_PRINT_ASK_DUR 51
	
#define FORM_RECOVERYPRINT_TOBELOST	30
	#define BUTTON_RECOVERYPRINT_TOBELOST_ACCEPT		173
	#define BUTTON_RECOVERYPRINT_TOBELOST_BACK		174
	
#define FORM_SDPRINTING_SAVEJOB_SUCCESS	45
	#define GIF_SDPRINTING_SAVEJOB_SUCCESS 21
	
#define FORM_SDPRINTING_SAVEJOB_SHUTDOWN 69

#define FORM_TEMP								28
	#define STRING_TEMP_LEXTR				40
	#define STRING_TEMP_BED					42
	#define STRING_TEMP_REXTR				41
	#define BUTTON_TEMP_LEXTR			11
	#define BUTTON_TEMP_BED				82
	#define BUTTON_TEMP_REXTR			81
	#define BUTTON_TEMP_BACK				83
	#define GIF_TEMP_LEXTR					3
	#define GIF_TEMP_BED					4
	#define GIF_TEMP_REXTR					5
/////MENU/////
#define FORM_UTILITIES								4	
		#define BUTTON_UTILITIES_MAINTENANCE		7
		
#define FORM_MAIN							5
	#define BUTTON_MAIN_TEMPS					 54

/////MAINTENANCE//////	
	 
#define FORM_MAINTENANCE_ZADJUST							11
	#define BUTTON_MAINTENANCE_ZADJUST_TOP					40
	#define BUTTON_MAINTENANCE_ZADJUST_BOT					46
	#define BUTTON_MAINTENANCE_ZADJUST_UP						42
	#define BUTTON_MAINTENANCE_ZADJUST_DOWN					45
	#define BUTTON_MAINTENANCE_ZADJUST_BACK					34
	#define BUTTON_MAINTENANCE_ZADJUST_ACCEPT					3
	#define GIF_MAINTENANCE_ZADJUST					15
	
#define FORM_UTILITIES_MAINTENANCE           18
	#define BUTTON_UTILITIES_MAINTENANCE_ZADJUST		59
	#define BUTTON_UTILITIES_MAINTENANCE_MENU    63
	#define BUTTON_UTILITIES_MAINTENANCE_BACK    74
	#define BUTTON_UTILITIES_MAINTENANCE_AUTOTUNEHOTENDS    216
	#define BUTTON_UTILITIES_MAINTENANCE_NYLONCLEANING	    80
	
#define FORM_UTILITIES_FILAMENT								6
	#define	BUTTON_UTILITIES_FILAMENT_BACK			0
	#define	BUTTON_UTILITIES_FILAMENT_PURGE					159
	#define BUTTON_UTILITIES_FILAMENT_LOAD				2
	#define BUTTON_UTILITIES_FILAMENT_UNLOAD				50	
	
#define FORM_UTILITIES_FILAMENT_UNLOAD							22	
	#define BUTTON_UTILITIES_FILAMENT_UNLOAD_SELECTLEFT			90
	#define BUTTON_UTILITIES_FILAMENT_UNLOAD_SELECTRIGHT			123
	#define BUTTON_UTILITIES_FILAMENT_UNLOAD_BACK			124
	#define BUTTON_UTILITIES_FILAMENT_UNLOAD_MENU			125
	
#define FORM_UTILITIES_MAINTENANCE_NYLONCLEANING					29
	#define BUTTON_UTILITIES_MAINTENANCE_NYLONCLEANING_MENU		120
	#define BUTTON_UTILITIES_MAINTENANCE_NYLONCLEANING_BACK		84
	#define BUTTON_UTILITIES_MAINTENANCE_NYLONCLEANING_SELECTLEFT			91
	#define BUTTON_UTILITIES_MAINTENANCE_NYLONCLEANING_SELECTRIGHT			92
	#define BUTTON_UTILITIES_MAINTENANCE_NYLONCLEANING_UNLOADGO				121
	#define BUTTON_UTILITIES_MAINTENANCE_NYLONCLEANING_UNLOADSKIP			122
	#define IMAG_UTILITIES_MAINTENANCE_NYLONCLEANING_TEXTBUTTON			0
	
#define FORM_UTILITIES_MAINTENANCE_NYLONCLEANING_STEP0			37
	#define BUTTON_UTILITIES_MAINTENANCE_NYLONCLEANING_STEP0		132
	
#define FORM_UTILITIES_MAINTENANCE_NYLONCLEANING_STEP2			7
	#define BUTTON_UTILITIES_MAINTENANCE_NYLONCLEANING_STEP2		192
	
#define FORM_UTILITIES_MAINTENANCE_NYLONCLEANING_STEP3			58
	#define STRING_UTILITIES_MAINTENANCE_NYLONCLEANING_STEP3		47
	#define GIF_UTILITIES_MAINTENANCE_NYLONCLEANING_STEP3		19

#if BCN3D_SCREEN_VERSION_SETUP == BCN3D_SIGMA_PRINTER_DEVMODE_1
#define FORM_UTILITIES_MAINTENANCE_NYLONCLEANING_STEP4			21
	#define BUTTON_UTILITIES_MAINTENANCE_NYLONCLEANING_STEP4 		53
	#define GIF_UTILITIES_MAINTENANCE_NYLONCLEANING_STEP4			11
#elif BCN3D_SCREEN_VERSION_SETUP == BCN3D_SIGMA_PRINTER_DEFAULT
#define FORM_UTILITIES_MAINTENANCE_NYLONCLEANING_STEP4			62
	#define BUTTON_UTILITIES_MAINTENANCE_NYLONCLEANING_STEP4 		191
	#define GIF_UTILITIES_MAINTENANCE_NYLONCLEANING_STEP4			13
#endif

#define FORM_UTILITIES_MAINTENANCE_NYLONCLEANING_STEP5			63
	#define BUTTON_UTILITIES_MAINTENANCE_NYLONCLEANING_STEP5 		10
	
#define FORM_UTILITIES_MAINTENANCE_NYLONCLEANING_STEP6			60
	#define BUTTON_UTILITIES_MAINTENANCE_NYLONCLEANING_REPEAT		194
	#define BUTTON_UTILITIES_MAINTENANCE_NYLONCLEANING_SUCCESS 	195
	
#define FORM_UTILITIES_MAINTENANCE_NYLONCLEANING_TEMPS			61
	#define GIF_UTILITIES_MAINTENANCE_NYLONCLEANING_TEMPS			7
	#define STRING_UTILITIES_MAINTENANCE_NYLONCLEANING_TEMPS			43

///// SDPRINTING //////	
#define FORM_SDPRINTING								9
	#define STRING_SDPRINTING_HOTEND0			0
	#define STRING_SDPRINTING_HOTEND1			34
	#define STRING_SDPRINTING_GCODE			2
	#define STRING_SDPRINTING_FEED			36
	#define STRING_SDPRINTING_PERCENTAGE			37
	#define STRING_SDPRINTING_TIMEREMAINING	4
	#define STRING_SDPRINTING_BED				9
	#define BUTTON_SDPRINTING_SETTINGS			16
	#define BUTTON_SDPRINTING_PAUSE			18
	#define BUTTON_SDPRINTING_STOP				19
	#define BUTTON_SDPRINTING_BACKSTATE     68
	
#define FORM_SDPRINTING_PAUSE						42
	#define STRING_SDPRINTING_PAUSE_HOTEND0			31
	#define STRING_SDPRINTING_PAUSE_HOTEND1			32
	#define STRING_SDPRINTING_PAUSE_GCODE			38
	#define STRING_SDPRINTING_PAUSE_FEED			35
	#define STRING_SDPRINTING_PAUSE_PERCENTAGE			29
	#define STRING_SDPRINTING_PAUSE_TIMEREMAINING	6
	#define STRING_SDPRINTING_PAUSE_BED				33
	#define BUTTON_SDPRINTING_PAUSE_SETTINGS			136
	#define BUTTON_SDPRINTING_PAUSE_RESUME				118
	#define BUTTON_SDPRINTING_PAUSE_STOP				87
	#define BUTTON_SDPRINTING_PAUSE_BACKSTATE     137

#define FORM_SDPRINTING_SAVEPRINT_SURE					57
	#define BUTTON_SDPRINTING_SAVEPRINT_SURE_OK				49
	#define BUTTON_SDPRINTING_SAVEPRINT_SURE_NOT				190

#define FORM_SDPRINTTING_SETINGS					53
	#define STRING_SDPRINTTING_SETINGS_LEFT				19
	#define STRING_SDPRINTTING_SETINGS_BED				20
	#define STRING_SDPRINTTING_SETINGS_RIGHT			21
	#define STRING_SDPRINTING_SETTINGS_SPEED					22
	#define BUTTON_SDPRINTTING_SETINGS_BACK			162
	#define BUTTON_SDPRINTTING_SETINGS_SPEED_UP		166
	#define BUTTON_SDPRINTTING_SETINGS_SPEED_DOWN		170
	#define BUTTON_SDPRINTTING_SETINGS_LEFT_UP		163
	#define BUTTON_SDPRINTTING_SETINGS_LEFT_DOWN		167
	#define BUTTON_SDPRINTTING_SETINGS_RIGHT_UP		165
	#define BUTTON_SDPRINTTING_SETINGS_RIGHT_DOWN		169
	#define BUTTON_SDPRINTTING_SETINGS_BED_UP			164
	#define BUTTON_SDPRINTTING_SETINGS_BED_DOWN		168

//////CALIBRATION//////
	
#define FORM_UTILITIES_CALIBRATION_CALIBFULL_CLEANBED								10
	#define	BUTTON_UTILITIES_CALIBRATION_CALIBFULL_CLEANBED				71
	
#define FORM_UTILITIES_CALIBRATION_CALIBFULL_REDO_X				3
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_REDO_X_LEFT			27
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_REDO_X_RIGHT			28
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_REDO_X				29
	
#define FORM_UTILITIES_CALIBRATION_CALIBFULL_REDO_Y								13
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_REDO_Y				30
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_REDO_Y_UP				31
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_REDO_Y_DOWN			35
	
#define FORM_UTILITIES_CALIBRATION_CALIBBED_ADJUSTSCREWASK						16
	#define BUTTON_UTILITIES_CALIBRATION_CALIBBED_ADJUSTSCREWASK_SKIP			158
	#define BUTTON_UTILITIES_CALIBRATION_CALIBBED_ADJUSTSCREWASK_NEXT			41
	#define GIF_UTILITIES_CALIBRATION_CALIBBED_ADJUSTSCREWASK            10
	
#define FORM_UTILITIES_CALIBRATION_CALIBBED_ADJUSTSCREWASKFIRST			46
	#define BUTTON_UTILITIES_CALIBRATION_CALIBBED_ADJUSTSCREWASKFIRST_NEXT		171
	#define GIF_UTILITIES_CALIBRATION_CALIBBED_ADJUSTSCREWASKFIRST		9
	
#define	FORM_UTILITIES_CALIBRATION_CALIBFULL_PRINTINGTEST					17
	#define GIF_UTILITIES_CALIBRATION_CALIBFULL_PRINTINGTEST				6

#define FORM_UTILITIES_CALIBRATION_CALIBFULL_RESULTSX							27
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_RESULTSX_SELECT1			21
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_RESULTSX_SELECT2			22
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_RESULTSX_SELECT3			51
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_RESULTSX_SELECT4			72
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_RESULTSX_SELECT5			96
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_RESULTSX_SELECT6			97
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_RESULTSX_SELECT7			98
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_RESULTSX_SELECT8			99
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_RESULTSX_SELECT9			100
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_RESULTSX_SELECT10			101
	
#define FORM_UTILITIES_CALIBRATION_CALIBFULL_RESULTSY							33
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_RESULTSY_SELECT1			102
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_RESULTSY_SELECT2			103
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_RESULTSY_SELECT3			104
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_RESULTSY_SELECT4			105
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_RESULTSY_SELECT5			106
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_RESULTSY_SELECT6			107
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_RESULTSY_SELECT7			108
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_RESULTSY_SELECT8			109
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_RESULTSY_SELECT9			110
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_RESULTSY_SELECT10		111

#define FORM_UTILITIES_CALIBRATION_CALIBBED_SCREW2						31
	#define BUTTON_UTILITIES_CALIBRATION_CALIBBED_SCREW2_NEXT			94
	
	#define USERIMAGE_UTILITIES_CALIBRATION_CALIBBED_SCREW2				4
#define FORM_UTILITIES_CALIBRATION_CALIBBED_SCREW3					32
	#define BUTTON_UTILITIES_CALIBRATION_CALIBBED_SCREW3_NEXT			95
	#define USERIMAGE_UTILITIES_CALIBRATION_CALIBBED_SCREW3				5
	
#define FORM_UTILITIES_CALIBRATION_CALIBFULL_CALIBZL						34
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_CALIBZL_UP			112
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_CALIBZL_DOWN			113
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_CALIBZL_ACCEPT			114
	#define GIF_UTILITIES_CALIBRATION_CALIBFULL_CALIBZL				16
	
#define FORM_UTILITIES_CALIBRATION_CALIBFULL_CALIBZR						35
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_CALIBZR_UP			116
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_CALIBZR_DOWN			117
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_CALIBZR_ACCEPT			115
	#define GIF_UTILITIES_CALIBRATION_CALIBFULL_CALIBZR				17
	
#define FORM_UTILITIES_CALIBRATION_CALIBFULL_GOCALIBZL					51
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_GOCALIBZL_GO			181
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_GOCALIBZL_SKIP			182
	
#define FORM_UTILITIES_CALIBRATION_CALIBFULL_GOCALIBZR					41
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_GOCALIBZR_GO			67
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_GOCALIBZR_SKIP			188
	
#define FORM_UTILITIES_CALIBRATION_CALIBFULL_GOCALIBX						54
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_GOCALIBX_GO			186
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_GOCALIBX_SKIP			187
	
#define FORM_UTILITIES_CALIBRATION_CALIBFULL_GOCALIBY						55
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_GOCALIBY_GO			184
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_GOCALIBY_SKIP			185

#define FORM_UTILITIES_CALIBRATION_CALIBFULL_CLEANNOZZLE0					24
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_CLEANNOZZLE0			69
	
#define FORM_UTILITIES_CALIBRATION_CALIBFULL_CLEANNOZZLE1					56
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_CLEANNOZZLE1		189
	
#define FORM_UTILITIES_CALIBRATION							39
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL					141
	#define BUTTON_UTILITIES_CALIBRATION_BACK			138
	#define BUTTON_UTILITIES_CALIBRATION_CALIBBED				140
	#define BUTTON_UTILITIES_CALIBRATION_CALIBMANUALFINE		153
	
#define FORM_UTILITIES_CALIBRATION_SUCCESS			21			//23  --23
	#define BUTTON_UTILITIES_CALIBRATION_SUCCESS		53			////69 ----66
	#define GIF_UTILITIES_CALIBRATION_SUCCESS			11
	
#define FORM_UTILITIES_CALIBRATION_CALIBFULL_RESULTSZL					25
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_RESULTSZL_REDO				131
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_RESULTSZL_SELECT1			43
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_RESULTSZL_SELECT2			47
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_RESULTSZL_SELECT3			48
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_RESULTSZL_SELECT4			23
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_RESULTSZL_SELECT5			24
	
#define FORM_UTILITIES_CALIBRATION_CALIBFULL_RESULTSZR							48
	#define	BUTTON_UTILITIES_CALIBRATION_CALIBFULL_RESULTSZR_REDO				127
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_RESULTSZR_SELECT1			60
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_RESULTSZR_SELECT2			62
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_RESULTSZR_SELECT3			119
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_RESULTSZR_SELECT4			25
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_RESULTSZR_SELECT5			73

#define FORM_UTILITIES_CALIBRATION_CALIBFULL_REDOZL							49
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_REDOZL_BEST1					128
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_REDOZL					130
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_REDOZL_BEST5					129
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_REDOZL_RECALIBRATE			64
	
#define FORM_UTILITIES_CALIBRATION_CALIBFULL_REDOZR							50
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_REDOZR_BEST1					177
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_REDOZR						180
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_REDOZR_BEST5					178
	#define BUTTON_UTILITIES_CALIBRATION_CALIBFULL_REDOZR_RECALIBRATE			179

#define  FORM_UTILITIES_CALIBRATION_MANUAL			59
	#define BUTTON_UTILITIES_CALIBRATION_MANUAL_OK		203
	#define BUTTON_UTILITIES_CALIBRATION_MANUAL_X		199
	#define BUTTON_UTILITIES_CALIBRATION_MANUAL_Y		200
	#define BUTTON_UTILITIES_CALIBRATION_MANUAL_ZL		201
	#define BUTTON_UTILITIES_CALIBRATION_MANUAL_ZR		202
	#define BUTTON_UTILITIES_CALIBRATION_MANUAL_UP		193
	#define BUTTON_UTILITIES_CALIBRATION_MANUAL_DOWN		196
	#define STRING_UTILITIES_CALIBRATION_MANUAL			11
	#define BUTTON_UTILITIES_CALIBRATION_MANUAL_BACK		204
	#define BUTTON_UTILITIES_CALIBRATION_MANUAL_MENU		205
	#define USERIMAGE_UTILITIES_CALIBRATION_MANUAL			2
	
#define FORM_UTILITIES_CALIBRATION_MANUAL_SAVE	64
	#define BUTTON_UTILITIES_CALIBRATION_MANUAL_SAVE_OK		206
	#define BUTTON_UTILITIES_CALIBRATION_MANUAL_SAVE_NOT		207

////// FILAMENT //////	

#define FORM_UTILITIES_FILAMENT_LOAD_FEELSTOPS					12
	#define BUTTON_UTILITIES_FILAMENT_LOAD_FEELSTOPS				36

#define FORM_UTILITIES_FILAMENT_ADJUST						14
	#define BUTTON_UTILITIES_FILAMENT_ADJUST_ACCEPT			17
	#define BUTTON_UTILITIES_FILAMENT_ADJUST_LOAD				33
	#define BUTTON_UTILITIES_FILAMENT_ADJUST_UNLOAD				32

#define FORM_UTILITIES_FILAMENT_UNLOAD_ROLLTHESPOOL					19
	#define	BUTTON_UTILITIES_FILAMENT_UNLOAD_ROLLTHESPOOL_NEXT					52

#define FORM_UTILITIES_FILAMENT_LOAD_KEEPPUSHING					43
	#define	BUTTON_UTILITIES_FILAMENT_LOAD_KEEPPUSHING_NEXT					68

#define FORM_UTILITIES_FILAMENT_LOAD		20
	#define	BUTTON_UTILITIES_FILAMENT_LOAD_BACK			77
	#define	BUTTON_UTILITIES_FILAMENT_LOAD_SELECT0			75
	#define	BUTTON_UTILITIES_FILAMENT_LOAD_SELECT1			76
	#define BUTTON_UTILITIES_FILAMENT_LOAD_PLA 65
	#define BUTTON_UTILITIES_FILAMENT_LOAD_ABS	70
	#define BUTTON_UTILITIES_FILAMENT_LOAD_PVA	78
	#define BUTTON_UTILITIES_FILAMENT_LOAD_CUSTOM	79
	#define BUTTON_UTILITIES_FILAMENT_LOAD_MENU				126

#define FORM_UTILITIES_FILAMENT_SUCCESS						21
	#define BUTTON_UTILITIES_FILAMENT_SUCCESS			53
	#define GIF_UTILITIES_FILAMENT_SUCCESS				11
	
#define FORM_UTILITIES_FILAMENT_PURGE									44
	#define STRING_UTILITIES_FILAMENT_PURGE_SELECTEDTEMP	5
	#define STRING_UTILITIES_FILAMENT_PURGE_LEFTTARGET			10
	#define STRING_UTILITIES_FILAMENT_PURGE_RIGHTTARGET			17
	#define BUTTON_UTILITIES_FILAMENT_PURGE_UNLOAD			151
	#define BUTTON_UTILITIES_FILAMENT_PURGE_LOAD				152
	#define BUTTON_UTILITIES_FILAMENT_PURGE_SELECT0				154
	#define BUTTON_UTILITIES_FILAMENT_PURGE_SELECT1				155
	#define BUTTON_UTILITIES_FILAMENT_PURGE_TEMPUP			156
	#define BUTTON_UTILITIES_FILAMENT_PURGE_TEMPDOWN			157
	#define BUTTON_UTILITIES_FILAMENT_PURGE_BACK				160
	#define BUTTON_UTILITIES_FILAMENT_PURGE_MENU				135
	#define GIF_UTILITIES_FILAMENT_PURGE					20
	
#define FORM_UTILITIES_FILAMENT_LOAD_HANDS					47
	#define BUTTON_UTILITIES_FILAMENT_LOAD_HANDS				58

#define FORM_UTILITIES_FILAMENT_LOAD_CUSTOM						52
	#define STRING_UTILITIES_FILAMENT_LOAD_CUSTOM_LOAD				13
	#define STRING_UTILITIES_FILAMENT_LOAD_CUSTOM_UNLOAD			14
	#define STRING_UTILITIES_FILAMENT_LOAD_CUSTOM_PRINT				15
	#define STRING_UTILITIES_FILAMENT_LOAD_CUSTOM_BED				18
	#define BUTTON_UTILITIES_FILAMENT_LOAD_CUSTOM_INS_LESS			142
	#define BUTTON_UTILITIES_FILAMENT_LOAD_CUSTOM_INS_MORE			146
	#define BUTTON_UTILITIES_FILAMENT_LOAD_CUSTOM_REM_LESS			143
	#define BUTTON_UTILITIES_FILAMENT_LOAD_CUSTOM_REM_MORE			147
	#define BUTTON_UTILITIES_FILAMENT_LOAD_CUSTOM_PRINT_LESS		144
	#define BUTTON_UTILITIES_FILAMENT_LOAD_CUSTOM_PRINT_MORE		148
	#define BUTTON_UTILITIES_FILAMENT_LOAD_CUSTOM_BED_LESS			161
	#define BUTTON_UTILITIES_FILAMENT_LOAD_CUSTOM_BED_MORE			150
	#define BUTTON_UTILITIES_FILAMENT_LOAD_CUSTOM_BACK				145
	#define BUTTON_UTILITIES_FILAMENT_LOAD_CUSTOM_ACCEPT			149	
	
#define FORM_UTILITIES_FILAMENT_CHANGEFILAMENT_TEMPS			40
	#define GIF_UTILITIES_FILAMENT_CHANGEFILAMENT_TEMPS		8
	#define STRING_UTILITIES_FILAMENT_CHANGEFILAMENT_TEMPS		45
	
#define FORM_PROCESSING							8
	#define USERIMAGE_PROCESSING			2
	#define GIF_PROCESSING					1

#define FORM_ADJUSTING_TEMPERATURES					36	
	#define GIF_ADJUSTING_TEMPERATURES			2
	#define STRING_ADJUSTING_TEMPERATURES			46

#define FORM_INSERT_SD_CARD			38
	#define BUTTON_INSERT_SD_CARD	133	

#if BCN3D_SCREEN_VERSION_SETUP == BCN3D_SIGMA_PRINTER_DEVMODE_1
#define FORM_Z_COMPENSATION			62
	#define BUTTON_Z_COMPENSATION_SKIP 		218
	#define BUTTON_Z_COMPENSATION_INSTALL 		191
	#define STRING_Z_OFFSET_BETWEEN_NOZZLES		53
#define FORM_Z_COMPENSATION_SHUTDOWN			75
#define FORM_Z_COMPENSATION_COMFIRMATION		76
	#define BUTTON_Z_COMPENSATION_COMFIRMATION_YES 		219
	#define BUTTON_Z_COMPENSATION_COMFIRMATION_NOT 		220
#define FORM_Z_COMPENSATION_COMFIRMATION_SURECANCEL		77
	#define BUTTON_Z_COMPENSATION_COMFIRMATION_SURECANCEL_YES 		221
	#define BUTTON_Z_COMPENSATION_COMFIRMATION_SURECANCEL_NOT		44
	#define STRING_Z_COMPENSATION_COMFIRMATION_SURECANCEL	54
#endif
#if BCN3D_SCREEN_VERSION_SETUP == BCN3D_SIGMA_PRINTER_DEVMODE_1
#define FORM_RAFT_ADVISE			23
	#define BUTTON_RAFT_ADVISE_ACCEPT		66
	#define BUTTON_RAFT_ADVISE_CANCEL		217
	#define STRING_RAFT_ADVISE_Z_OFFSET	48
#endif

#define FORM_INFO_UI 68	
	#define STRING_INFO_UI_VERSION 44
	#define STRING_INFO_UI_SERIALID 49	
	#define STRING_INFO_PRINTINGTIME 52
	
#define FORM_INFO_SIGMA 65
	#define BUTTON_INFO_SETUPASSISTANT		134	
	
#define FORM_ERROR_SCREEN 67
	#define STRING_ERROR_MESSAGE 39	
	#define BUTTON_ERROR_OK 211	
	#define GIF_ERROR 18
	
#define FORN_SETUPASSISTANT_INIT			73
	#define GIF_SETUPASSISTANT_INIT		23
	
#define FORN_SETUPASSISTANT_YESNOT		74
	#define BUTTON_SETUPASSISTANT_YES		208	
	#define BUTTON_SETUPASSISTANT_SKIP	214
	
#define FORN_SETUPASSISTANT_STEP_1		70
	#define BUTTON_SETUPASSISTANT_STEP_NEXT_1		175
	
#define FORN_SETUPASSISTANT_STEP_2		71
	#define BUTTON_SETUPASSISTANT_STEP_NEXT_2		176
	
#define FORN_SETUPASSISTANT_SUCCESS		72
	#define GIF_SETUPASSISTANT_SUCCESS		22
#pragma endregion FORMS


#endif 