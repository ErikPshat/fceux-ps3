/*
 * menu.h
 *
 *  Created on: Oct 10, 2010
 *      Author: halsafar
 */

#ifndef MENU_H_
#define MENU_H_

#include <string>
#include "colors.h"

#define FIRST_GENERAL_SETTING	0
#define FIRST_FCEU_SETTING	50
#define FIRST_PATH_SETTING	100
#define FIRST_CONTROLS_SETTING	150

//lidbgfont
#define FONT_SIZE 1.0f

//GENERAL - setting constants
enum
{
	SETTING_CURRENT_SAVE_STATE_SLOT = FIRST_GENERAL_SETTING,
	SETTING_CHANGE_RESOLUTION,
	SETTING_PAL60_MODE,
	SETTING_SHADER,
	SETTING_KEEP_ASPECT_RATIO,
	SETTING_HW_TEXTURE_FILTER,
	SETTING_HW_OVERSCAN_AMOUNT,
	SETTING_RSOUND_ENABLED,
	SETTING_RSOUND_SERVER_IP_ADDRESS,
	SETTING_DEFAULT_ALL
};

//FCEU  - setting constants
enum
{
	SETTING_FCEU_DISABLE_SPRITE_LIMIT	= FIRST_FCEU_SETTING,
	SETTING_FCEU_GAME_GENIE,
	SETTING_FCEU_CONTROL_STYLE,
	SETTING_FCEU_DEFAULT_ALL
};

//PATH - setting constants
enum
{
	SETTING_PATH_DEFAULT_ROM_DIRECTORY = FIRST_PATH_SETTING,
	SETTING_PATH_SAVESTATES_DIRECTORY,
	SETTING_PATH_SRAM_DIRECTORY,
	SETTING_PATH_CHEATS,
	SETTING_PATH_BASE_DIRECTORY,
	SETTING_PATH_DEFAULT_ALL
};

//CONTROLS - setting constants
enum
{
	SETTING_CONTROLS_DPAD_UP = FIRST_CONTROLS_SETTING,
	SETTING_CONTROLS_DPAD_DOWN,
	SETTING_CONTROLS_DPAD_LEFT,
	SETTING_CONTROLS_DPAD_RIGHT,
	SETTING_CONTROLS_BUTTON_CIRCLE,
	SETTING_CONTROLS_BUTTON_CROSS,
	SETTING_CONTROLS_BUTTON_TRIANGLE,
	SETTING_CONTROLS_BUTTON_SQUARE,
	SETTING_CONTROLS_BUTTON_SELECT,
	SETTING_CONTROLS_BUTTON_START,
	SETTING_CONTROLS_BUTTON_L1,
	SETTING_CONTROLS_BUTTON_R1,
	SETTING_CONTROLS_BUTTON_L2,
	SETTING_CONTROLS_BUTTON_R2,
	SETTING_CONTROLS_BUTTON_L3,
	SETTING_CONTROLS_BUTTON_R3,
	SETTING_CONTROLS_BUTTON_L2_BUTTON_L3,
	SETTING_CONTROLS_BUTTON_L2_BUTTON_R2,
	SETTING_CONTROLS_BUTTON_L2_BUTTON_R3,
	SETTING_CONTROLS_BUTTON_L2_ANALOG_R_RIGHT,
	SETTING_CONTROLS_BUTTON_L2_ANALOG_R_LEFT,
	SETTING_CONTROLS_BUTTON_L2_ANALOG_R_UP,
	SETTING_CONTROLS_BUTTON_L2_ANALOG_R_DOWN,
	SETTING_CONTROLS_BUTTON_R2_ANALOG_R_RIGHT,
	SETTING_CONTROLS_BUTTON_R2_ANALOG_R_LEFT,
	SETTING_CONTROLS_BUTTON_R2_ANALOG_R_UP,
	SETTING_CONTROLS_BUTTON_R2_ANALOG_R_DOWN,
	SETTING_CONTROLS_BUTTON_R2_BUTTON_R3,
	SETTING_CONTROLS_BUTTON_R3_BUTTON_L3,
	SETTING_CONTROLS_ANALOG_R_UP,
	SETTING_CONTROLS_ANALOG_R_DOWN,
	SETTING_CONTROLS_ANALOG_R_LEFT,
	SETTING_CONTROLS_ANALOG_R_RIGHT,
	SETTING_CONTROLS_DEFAULT_ALL
};

//GENERAL - Total amount of settings
#define MAX_NO_OF_SETTINGS				SETTING_DEFAULT_ALL+1
//FCEU - Total amount of FCEU settings
#define MAX_NO_OF_FCEU_SETTINGS				SETTING_FCEU_DEFAULT_ALL+1
// PATH - Total amount of Path settings
#define MAX_NO_OF_PATH_SETTINGS				SETTING_PATH_DEFAULT_ALL+1
//CONTROLS - Total amount of controls settings
#define MAX_NO_OF_CONTROLS_SETTINGS			SETTING_CONTROLS_DEFAULT_ALL+1

void MenuMainLoop(void);

void MenuStop();
bool MenuIsRunning();
void MenuResetControlStyle(void);


#endif /* MENU_H_ */
