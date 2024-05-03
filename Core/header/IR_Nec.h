/*=============================================
  * Copyright (c)      Realtek Semiconductor Corporation, 2005
  * All rights reserved.
  * ============================================ */

/*================= File Description ================= */
/**
 * @file
 * 	This file is for global structure's declaration.
 *
 * @author 	$Author: leo_liu $
 * @date 	$Date: 2006-06-26 17:17:25 +0800 (?Ÿæ?ä¸€, 26 ?­æ? 2006) $
 * @version 	$Revision: 1055 $
 * @ingroup 	input
 */

/**
* @addtogroup input
* @{
*/

#ifndef  _IR_H
#define  _IR_H
//--------------------------------------------------
// Remote Control
//--------------------------------------------------
#define _IR_NONE               0
#define _IR_RM_68C             1
#define _IR_RM_33C             2

#define _REMOTE_CONTROLLER     _IR_RM_33C

/*================ Module dependency  =============== */

/*===================== Module Dependency  ================== */

/*========================== Types ========================== */

/*======================== Definitions ====================== */
//--------------------------------------------------
// Definitions of IR Key
//--------------------------------------------------

#if(_REMOTE_CONTROLLER == _IR_RM_68C)
#define CUSTOM_CODE     	0x40BF
#elif(_REMOTE_CONTROLLER == _IR_RM_33C)
#define CUSTOM_CODE     	0x40BF
#endif

/*=====================  Extern Variables =================== */

//--------------------------------------------------
// Global Variables
//--------------------------------------------------
#ifdef _IR_C

BYTE code IRKeyMsg[][2] =
{
//------------------------------------------
#if(_REMOTE_CONTROLLER == _IR_RM_68C)

    {0x12, _POWER_KEY_MESSAGE},    // Power
    {0x10, _MUTE_KEY_MESSAGE},     // Mute

  #if(_OSD_TYPE == _OSD007)
    {0x0F, _SOURCE_KEY_MESSAGE},   // Source
    {0xe9, _IR_MENU_KEY_MESSAGE},  // Menu
    {0x5F, _IR_LEFT_KEY_MESSAGE},  // Left
    {0x5B, _IR_RIGHT_KEY_MESSAGE}, // Right
    {0x5A, _IR_UP_KEY_MESSAGE},    // Up
    {0x5E, _IR_DOWN_KEY_MESSAGE},  // Down
  #else
    #if(_KEY_TYPE == _KT_PCB2660_003_5KEY)
    {0x0F, _IR_SOURCE_KEY_MESSAGE},// Source
    {0x56, _IR_MENU_KEY_MESSAGE},  // Menu
    {0x5F, _IR_LEFT_KEY_MESSAGE},  // Left
    {0x5B, _IR_RIGHT_KEY_MESSAGE}, // Right
    {0x5A, _IR_UP_KEY_MESSAGE},    // Up
    {0x5E, _IR_DOWN_KEY_MESSAGE},  // Down
    #else
    {0x0F, _SOURCE_KEY_MESSAGE},   // Source
    {0x56, _MENU_KEY_MESSAGE},     // Menu
    {0x5F, _LEFT_KEY_MESSAGE},     // Left
    {0x5B, _RIGHT_KEY_MESSAGE},    // Right
    {0x5A, _UP_KEY_MESSAGE},       // Up
    {0x5E, _DOWN_KEY_MESSAGE},     // Down
    #endif
  #endif

    {0x1E, _VOL_DEC_KEY_MESSAGE},  // Vol-
    {0x1A, _VOL_INC_KEY_MESSAGE},  // Vol+
    {0x1F, _CH_DEC_KEY_MESSAGE},   // CH-
    {0x1B, _CH_INC_KEY_MESSAGE},   // CH+
    {0x1C, _DISPLAY_KEY_MESSAGE},  // Display

    {0x00, _NUM_0_KEY_MESSAGE},    // 0
    {0x01, _NUM_1_KEY_MESSAGE},    // 1
    {0x02, _NUM_2_KEY_MESSAGE},    // 2
    {0x03, _NUM_3_KEY_MESSAGE},    // 3
    {0x04, _NUM_4_KEY_MESSAGE},    // 4
    {0x05, _NUM_5_KEY_MESSAGE},    // 5
    {0x06, _NUM_6_KEY_MESSAGE},    // 6
    {0x07, _NUM_7_KEY_MESSAGE},    // 7
    {0x08, _NUM_8_KEY_MESSAGE},    // 8
    {0x09, _NUM_9_KEY_MESSAGE},    // 9
    {0x0A, _INPUT_CH_KEY_MESSAGE}, // -/--
    {0x0B, _RETURN_KEY_MESSAGE}    // Return

//------------------------------------------
#elif(_REMOTE_CONTROLLER == _IR_RM_33C)

    {0x12, _POWER_KEY_MESSAGE},    // Power
  #if(_OSD_TYPE == _OSD007)
    {0x0F, _SOURCE_KEY_MESSAGE},   // Source
    {0x5C, _IR_MENU_KEY_MESSAGE},  // Menu
    {0x5F, _IR_LEFT_KEY_MESSAGE},  // Left
    {0x5B, _IR_RIGHT_KEY_MESSAGE}, // Right
    {0x56, _IR_UP_KEY_MESSAGE},    // Up
    {0x57, _IR_DOWN_KEY_MESSAGE},  // Down
  #else
    #if(_KEY_TYPE == _KT_PCB2660_003_5KEY)
    {0x0F, _IR_SOURCE_KEY_MESSAGE},// Source
    {0x5C, _IR_MENU_KEY_MESSAGE},  // Menu
    {0x5F, _IR_LEFT_KEY_MESSAGE},  // Left
    {0x5B, _IR_RIGHT_KEY_MESSAGE}, // Right
    {0x56, _IR_UP_KEY_MESSAGE},    // Up
    {0x57, _IR_DOWN_KEY_MESSAGE},  // Down
    #else
    {0x0f, _SOURCE_KEY_MESSAGE},   // Source
    {0x16, _MENU_KEY_MESSAGE},     // Menu
    {0x5f, _LEFT_KEY_MESSAGE},     // Left
    {0x5b, _RIGHT_KEY_MESSAGE},    // Right
    {0x5f, _UP_KEY_MESSAGE},       // Up
    {0x57, _DOWN_KEY_MESSAGE},     // Down
    #endif
  #endif
    {0x10, _MUTE_KEY_MESSAGE},     // Mute
                      
    {0x1E, _VOL_DEC_KEY_MESSAGE},  // Vol-
    {0x1A, _VOL_INC_KEY_MESSAGE},  // Vol+
    {0x1F, _CH_DEC_KEY_MESSAGE},   // CH-
    {0x1B, _CH_INC_KEY_MESSAGE},   // CH+
    {0x1c, _DISPLAY_KEY_MESSAGE},  // Display
           
    {0x00, _NUM_0_KEY_MESSAGE},    // 0
    {0x01, _NUM_1_KEY_MESSAGE},    // 1
    {0x02, _NUM_2_KEY_MESSAGE},    // 2
    {0x03, _NUM_3_KEY_MESSAGE},    // 3
    {0x04, _NUM_4_KEY_MESSAGE},    // 4
    {0x05, _NUM_5_KEY_MESSAGE},    // 5
    {0x06, _NUM_6_KEY_MESSAGE},    // 6
    {0x07, _NUM_7_KEY_MESSAGE},    // 7
    {0x08, _NUM_8_KEY_MESSAGE},    // 8
    {0x09, _NUM_9_KEY_MESSAGE},    // 9
    {0x0b, _INPUT_CH_KEY_MESSAGE}, // -/--
    {0x53, _RETURN_KEY_MESSAGE}    // Return

#endif
};


#else

extern BYTE ucPrevKey;

#endif



/*======================= Extern Functions ================== */
BYTE CIRKeyScan(void);
void CIrdaInitial(void);

#endif // #ifndef _IR_H

/**
 *
 * @}
 */

