//--------------------------------------------------
// Scalder Type
//--------------------------------------------------
//_RTD3580D
#define _SCALER_TYPE                 			_RTD3580D

//--------------------------------------------------
// MCU Type
//--------------------------------------------------
//_REALTEK_RTD3580D_EMCU
#define _MCU_TYPE                       		_REALTEK_RTD3580D_EMCU

//--------------------------------------------------
//_KT_PCB2660_001 
//--------------------------------------------------
#define _KEY_TYPE                               _KT_PCB2660_003_5KEY
             
//--------------------------------------------------
//Key scan type
//--------------------------------------------------
#define _KEY_SCAN_NORMAL                        0
#define _KEY_SCAN_AD                            1
#define _KEY_SCAN_CYPRESS                       2
#define _KEY_SCAN_TYPE                          _KEY_SCAN_AD//_KEY_SCAN_NORMAL

//--------------------------------------------------
// Definations of RTD/MCU Crystal Frequency in KHz
//--------------------------------------------------
//_XTAL12000K,_XTAL24576K,_XTAL24000K,_XTAL40000K,_XTAL27000K,_XTAL24300K
#define _RTD_XTAL                       		_XTAL27000K
#define _MCU_XTAL                       		_XTAL24300K




//--------------------------------------------------
// Function Supported's define
//--------------------------------------------------
/*       BL.lin
   _HDMI_SUPPORT->_OFF       Mark   ?CO?HDMI
   _YPBPR_SUPPORT->_OFF      Mark   ?CO?YPBPR
   _VIDEO_TV_SUPPORT->_OFF   Mark   CSHOWTVNUMBER ~ ?PR?OSDPROC003(Only for OSD003)
*/
#define _VGA_SUPPORT                           _ON// _OFF//����VGA֧��
#define _HDMI_SUPPORT							_ON
#define _TMDS_SUPPORT                   		_ON
#define _VIDEO_SUPPORT                  		_ON
#define _VIDEO_AV_SUPPORT                        _ON//_OFF
#define _VIDEO_SV_SUPPORT                        _ON//_OFF
#define _VIDEO_TV_SUPPORT                       _OFF
#define _VIDEO_YUV_SUPPORT                      _OFF
#define _VIDEO_SCART_SUPPORT                    _OFF
#define _YPBPR_SUPPORT                  		_ON

//--------------------------------------------------
// YPbPr New Sync Detected
//--------------------------------------------------
#define _YPBPR_NEW_SYNC_DETECT					0//_ON

//--------------------------------------------------
// YPbPr Sync Source
//--------------------------------------------------
#define _SOG0                                   0
#define _SOG1                                   1

#define _YPBPR_SYNC_SOURCE                      _SOG1

//--------------------------------------------------
// Video Input Selection
//--------------------------------------------------
//_VIDEO_8_IN,_VIDEO_16_IN
#define _VIDEO_IN                       		_VIDEO_8_IN


//--------------------------------------------------
// Definations of Input Port Types
//--------------------------------------------------
/*
    _NO_PORT,                                           --> No port
    _DSUB_A0_PORT,  _DSUB_A1_PORT,                      --> Dsub input port
    _DVI_PORT,      _DVI_D0_PORT,  _DVI_D1_PORT,        --> DVI input port
    _HDMI_PORT,     _HDMI_D0_PORT, _HDMI_D1_PORT,       --> HDMI input port
    _YPBPR_A0_PORT, _YPBPR_A1_PORT,                     --> YPbPr input port
*/
#define _SOURCE_VGA_PORT_TYPE                   _DSUB_A0_PORT
#define _SOURCE_DVI_PORT_TYPE                   _DVI_D1_PORT
#define _SOURCE_HDMI_PORT_TYPE                  _HDMI_D0_PORT
#define _SOURCE_YPBPR_PORT_TYPE                 _YPBPR_A1_PORT

//--------------------------------------------------
// Definations of change source order
//--------------------------------------------------
/*
_SOURCE_VGA,       _SOURCE_DVI,      _SOURCE_VIDEO_AV,    _SOURCE_VIDEO_SV,
_SOURCE_VIDEO_YUV, _SOURCE_VIDEO_TV, _SOURCE_VIDEO_SCART, _SOURCE_HDMI,
_SOURCE_YPBPR,     _SOURCE_NONE
*/
#define _SOURCE_0_TYPE                          _SOURCE_VGA
#define _SOURCE_1_TYPE                          _SOURCE_DVI
#define _SOURCE_2_TYPE                          _SOURCE_HDMI
#define _SOURCE_3_TYPE                          _SOURCE_VIDEO_AV
#define _SOURCE_4_TYPE                          _SOURCE_VIDEO_SV
#define _SOURCE_5_TYPE                          _SOURCE_VIDEO_TV
#define _SOURCE_6_TYPE                          _SOURCE_YPBPR
#define _SOURCE_7_TYPE                          _SOURCE_NONE
#define _SOURCE_8_TYPE                          _SOURCE_NONE
#define _SOURCE_9_TYPE                          _SOURCE_NONE
#define _SOURCE_10_TYPE                         _SOURCE_NONE

#define _INPUT_PORT_NUM                         7

#define _NORMAL_SOURCE                          _SOURCE_HDMI



#define _LED_ON									1
#define _LED_OFF								0
//--------------------------------------------------
// Definitions for GPIO Control
//--------------------------------------------------

#define _PANEL_ON								1//0//	1  		// Power on	state for LCD panel
#define _PANEL_OFF								0//1//	0		// Power off state for LCD panel

#define _ALDD_ON								1//0//	1  		// Power on	state for LCD panel
#define _ALDD_OFF								0//1//	0		// Power off state for LCD panel

#define _LIGHT_ON								1//0		// Power on  state for backlight inverter
#define _LIGHT_OFF								0//1		// Power off state for backlight inverter

//--------------------------------------------------
// Definitions of ADC Fine Tune Delay (Value == 0 ~ 7)
//--------------------------------------------------
#define _ADC_FINE_TUNE_DELAY_RED        		0
#define _ADC_FINE_TUNE_DELAY_GREEN      		0
#define _ADC_FINE_TUNE_DELAY_BLUE       		0


//--------------------------------------------------
// Definitions of ADC Input Swap Settings (ADC0)
//--------------------------------------------------
#define _ADC0_INPUT_SWAP_RG              		_OFF
#define _ADC0_INPUT_SWAP_RB              		_OFF
#define _ADC0_INPUT_SWAP_GB              		_OFF

//--------------------------------------------------
// Definitions of ADC Input Swap Settings (ADC1)
//--------------------------------------------------
#define _ADC1_INPUT_SWAP_RG              		_OFF
#define _ADC1_INPUT_SWAP_RB              		_OFF
#define _ADC1_INPUT_SWAP_GB              		_ON

//--------------------------------------------------
// Definitions of MAIN_TYPE
//--------------------------------------------------
#define _MAIN_TYPE_DISABLE        				0       //000: Disable All Output Pins (PWM, TCON, SDRAM, Display, etc.)
#define _MAIN_TYPE_1                    		1       //001: Configure IC as MCM128 with internal 1Mx16 SDRAM0.
#define _MAIN_TYPE_2                    		2       //010: Configure IC as QFP128. No SDRAM is in use.
#define _MAIN_TYPE_3                    		3       //011: Configure IC as QFP128. Only SDRAM1 (1Mx16) is in use.
#define _MAIN_TYPE_4                    		4       //100: Configure IC as QFP128. Both SDRAM0 and SDRAM1 are in use.
#define _MAIN_TYPE_5                    		5       //101: Reserved. (QFP208 w/o SDRAM)
#define _MAIN_TYPE_6                    		6       //110: Configure IC as QFP208. Only SDRAM1 (1Mx16 or 2Mx32) is in use.
#define _MAIN_TYPE_7                    		7       //111: Configure IC as QFP208. Both SDRAM0 and SDRAM1 are in use.

#define _MAIN_TYPE                      		_MAIN_TYPE_1//_MAIN_TYPE_1

//--------------------------------------------------
// RTD3580D Pin Share 
//--------------------------------------------------

#define _PIN_50 								(0 & 0x07)	// 0 ~ 5 (0: P6D0i, 1: P6D0o<open-drain>, 2: P6D0o<push-pull>, 3: ADCA0, 4: AVOUT, 5: VCLK)
#define _PIN_51 								(0 & 0x03)	// 0 ~ 3 (0: P6D1i, 1: P6D1o<open-drain>, 2: P6D1o<push-pull>, 3: ADCA1)
#define _PIN_52 								(0 & 0x03)	// 0 ~ 3 (0: P6D2i, 1: P6D2o<open-drain>, 2: P6D2o<push-pull>, 3: ADCA2)
#define _PIN_53 								(0 & 0x03)	// 0 ~ 3 (0: P6D3i, 1: P6D3o<open-drain>, 2: P6D3o<push-pull>, 3: ADCA3)
#define _PIN_54 								(1 & 0x03)	// 0 ~ 3 (0: P6D4i, 1: P6D4o<open-drain>, 2: P6D4o<push-pull>, 3: ADCA4)
#define _PIN_55 								(5 & 0x07)	// 0 ~ 5 (0: P6D5i, 1: P6D5o<open-drain>, 2: P6D5o<push-pull>, 3: ADCB0, 4: PWM1, 5: PWM5)

#define _PIN_56_57_IIC_ENABLE					(0 & 0x01)	// 0 ~ 1 (0: Disable, 1: Enable) Pin56,57 for IIC
#define _PIN_56 								(1 & 0x03)	// 0 ~ 3 (0: P6D6i, 1: P6D6o<open-drain>, 2: P6D6o<push-pull>, 3: ADCB1) Effective only if _PIN_56_57_IIC_ENABLE = Disable.
#define _PIN_57 								(1 & 0x03)	// 0 ~ 3 (0: P6D7i, 1: P6D7o<open-drain>, 2: P6D7o<push-pull>, 3: ADCB2) Effective only if _PIN_56_57_IIC_ENABLE = Disable.

#define _PIN_58_59_DDC1_ENABLE					(1 & 0x01)	// 0 ~ 1 (0: Enable, 1: Disable) Pin58,59 for DDC1
#define _PIN_58 								(0 & 0x03)	// 0 ~ 3 (0: P3D0i, 1: P3D0o<open-drain>, 2: P3D0o<push-pull>, 3: RXD<open-drain>) Effective only if _PIN_58_59_DDC1_ENABLE = Disable.
#define _PIN_59 								(0 & 0x03)	// 0 ~ 3 (0: P3D1i, 1: P3D1o<open-drain>, 2: P3D1o<push-pull>, 3: TXD<open-drain>) Effective only if _PIN_58_59_DDC1_ENABLE = Disable.

#define _PIN_64 								(1 & 0x07)  // 0 ~ 7 (0: P1D0i, 1: P1D0o<open-drain>, 2: P1D0o<push-pull>, 3: T2, 4: SD0, 5: SPDIF0, 6: TCON[0], 7: IrDA)
#define _PIN_65 								(1 & 0x07)	// 0 ~ 7 (0: P1D1i, 1: P1D1o<open-drain>, 2: P1D1o<push-pull>, 3: T2EX, 4: TCON[1], 5: TCON[7], 6: WS, 7: PWM1)
#define _PIN_66 								(1 & 0x07)	// 0 ~ 6 (0: P1D2i, 1: P1D2o<open-drain>, 2: P1D2o<push-pull>, 3: CLKO, 4: SCK, 5: TCON[2], 6: TCON[4]) Effective only if 8-bit TTL Disable.
#define _PIN_67 								(1 & 0x07)	// 0 ~ 5 (0: P1D3i, 1: P1D3o<open-drain>, 2: P1D3o<push-pull>, 3: MCK, 4: TCON[5], 5: TCON[9]) Effective only if 8-bit TTL Disable.
#define _PIN_68 								(1 & 0x07)	// 0 ~ 6 (0: P1D4i, 1: P1D4o<open-drain>, 2: P1D4o<push-pull>, 3: SD0, 4: TCON[3], 5: TCON[13], 6: SPDIF0) Effective only if 8-bit TTL Disable.
#define _PIN_69 								(1 & 0x07)	// 0 ~ 7 (0: P1D5i, 1: P1D5o<open-drain>, 2: P1D5o<push-pull>, 3: SD1, 4: TCON[3], 5: TCON[7], 6: SPDIF1, 7: IICSCL) Effective only if 8-bit TTL Disable.
#define _PIN_70 								(1 & 0x07)	// 0 ~ 7 (0: P1D6i, 1: P1D6o<open-drain>, 2: P1D6o<push-pull>, 3: SD2, 4: TCON[9], 5: TCON[11], 6: SPDIF2, 7: IICSDA) Effective only if 8-bit TTL Disable.
#define _PIN_71 								(1 & 0x0f)	// 0 ~ 8 (0: P1D7i, 1: P1D7o<open-drain>, 2: P1D7o<push-pull>, 3: SD3, 4: TCON[8], 5: TCON[10], 6: SPDIF3, 7: PWM1, 8: PWM5) Effective only if 8-bit TTL Disable.

#define _PIN_74to83 							(0 & 0x03)	// 0 ~ 2 (0: None, 1: GPI, 2: GPO) Effective only if single-port LVDS without E/O swap.

#define _PIN_96 								(4 & 0x07)	// 0 ~ 4 (0: P5D2i, 1: P5D2o<open-drain>, 2: P5D2o<push-pull>, 3: PWM0, 4: DCLK)
#define _PIN_97 								(4 & 0x07)	// 0 ~ 4 (0: P5D3i, 1: P5D3o<open-drain>, 2: P5D3o<push-pull>, 3: PWM1, 4: DVS)
#define _PIN_98 								(0 & 0x03)	// 0 ~ 3 (0: P5D4i, 1: P5D4o<open-drain>, 2: P5D4o<push-pull>, 3: PWM2)
#define _PIN_99 								(3 & 0x07)	// 0 ~ 5 (0: P5D5i, 1: P5D5o<open-drain>, 2: P5D5o<push-pull>, 3: PWM3, 4: TCON[6], 5: TCON[11])
#define _PIN_100								(0 & 0x07)	// 0 ~ 5 (0: P5D6i, 1: P5D6o<open-drain>, 2: P5D6o<push-pull>, 3: PWM4, 4: TCON[3], 5: TCON[12])
#define _PIN_101								(0 & 0x07)	// 0 ~ 4 (0: P5D7i, 1: P5D7o<open-drain>, 2: P5D7o<push-pull>, 3: PWM5, 4: TCON[0])
#define _PIN_102								(2& 0x07)	// 0 ~ 6 (0: P7D6i, 1: P7D6o<open-drain>, 2: P7D6o<push-pull>, 3: PWM0, 4: SD3, 5: SPDIF3, 6: TCON[10])
#define _PIN_103								(2 & 0x07)	// 0 ~ 7 (0: P7D5i, 1: P7D5o<open-drain>, 2: P7D5o<push-pull>, 3: PWM1, 4: SD2, 5: SPDIF2, 6: TCON[8], 7: IICSCL)
#define _PIN_104								(2 & 0x07)	// 0 ~ 7 (0: P7D4i, 1: P7D4o<open-drain>, 2: P7D4o<push-pull>, 3: SD1, 4: IRQ, 5: TCON[5], 6: SPDIF1, 7: IICSDA)
#define _PIN_105								(0 & 0x07)	// 0 ~ 5 (0: P8D0i, 1: P8D0o<open-drain>, 2: P8D0o<push-pull>, 3: TCON[9], 4: SD0, 5: SPDIF0)

#if(_KEY_SCAN_TYPE == _KEY_SCAN_CYPRESS)
#define _PIN_108								(1 & 0x07)	// 0 ~ 5 (0: P8D1i, 1: P8D1o<open-drain>, 2: P8D1o<push-pull>, 3: CLKO, 4: MCK, 5: TCON[7])
#else
#define _PIN_108								(1 & 0x07)	// 0 ~ 5 (0: P8D1i, 1: P8D1o<open-drain>, 2: P8D1o<push-pull>, 3: CLKO, 4: MCK, 5: TCON[7])
#endif
#define _PIN_109								(5 & 0x07)	// 0 ~ 5 (0: P3D2i, 1: P3D2o<open-drain>, 2: P3D2o<push-pull>, 3: INT0, 4: TCON[3], 5: SCK)
#define _PIN_110								(5 & 0x07)	// 0 ~ 5 (0: P3D3i, 1: P3D3o<open-drain>, 2: P3D3o<push-pull>, 3: INT1, 4: TCON[6], 5: WS)
#if(_KEY_SCAN_TYPE == _KEY_SCAN_CYPRESS)
#define _PIN_111								(0 & 0x07)	// 0 ~ 6 (0: P3D4i, 1: P3D4o<open-drain>, 2: P3D4o<push-pull>, 3: T0, 4: TCON[4], 5: SD0, 6: SPDIF0)
#else
#define _PIN_111								(5 & 0x07)	// 0 ~ 6 (0: P3D4i, 1: P3D4o<open-drain>, 2: P3D4o<push-pull>, 3: T0, 4: TCON[4], 5: SD0, 6: SPDIF0)
#endif
#define _PIN_112								(1 & 0x07)	// 0 ~ 6 (0: P3D5i, 1: P3D5o<open-drain>, 2: P3D5o<push-pull>, 3: T1, 4: TCON[9], 5: SD1, 6: SPDIF1)
#define _PIN_113								(6 & 0x07)	// 0 ~ 6 (0: P3D6i, 1: P3D6o<open-drain>, 2: P3D6o<push-pull>, 3: TCON[1], 4: SD2, 5: SPDIF2, 6: IrDA)
#define _PIN_114								(1 & 0x07)	// 0 ~ 6 (0: P3D7i, 1: P3D7o<open-drain>, 2: P3D7o<push-pull>, 3: TCON[13], 4: SD3, 5: SPDIF3, 6: VCLK)

#define _PIN_121								(0 & 0x03)	// 0 ~ 3 (0: DDCSCL3, 1: P7D3i, 2: P7D3o<open-drain>, 3: P7D3o<push-pull>)
#define _PIN_122								(0 & 0x03)	// 0 ~ 3 (0: DDCSDA3, 1: P7D2i, 2: P7D2o<open-drain>, 3: P7D2o<push-pull>)
#define _PIN_123								(0 & 0x03)	// 0 ~ 3 (0: DDCSDA2, 1: P7D1i, 2: P7D1o<open-drain>, 3: P7D1o<push-pull>)
#define _PIN_124								(0 & 0x03)	// 0 ~ 3 (0: DDCSCL2, 1: P7D0i, 2: P7D0o<open-drain>, 3: P7D0o<push-pull>)

//--------------------------------------------------
// Piblic IO define
//--------------------------------------------------
#define bI2CSDA									(_MCU_PORT67)
#define bI2CSCL									(_MCU_PORT66)
#define bPANELPOWER 							(_MCU_PORT55)//(_MCU_PORT76)//(_MCU_PORT54)
#define bALDD                          						(_MCU_PORT74)

//sbit    bLIGHTPOWER                             = P3^4;//= P3^7;
#define bLIGHTPOWER                          			(_MCU_PORT81)//	(_MCU_PORT75)
//--------------------------------------------------
// Connect definitions
//--------------------------------------------------
sbit    bVGACONNECT                             = P1^3;
#define bHDMICONNECT							(_MCU_PORT61)//(_MCU_PORT64)
#define bHot_Plug                 (_MCU_PORT57)//(_MCU_PORT81)
#define bDVICONNECT                             0

#define bUD							(_MCU_PORT74)
#define bLR							(_MCU_PORT75)

sbit LR                                                   = P1^6;
sbit UD                                                 = P1^7;
//--------------------------------------------------
//            Key definitions
//--------------------------------------------------
#if(_KEY_SCAN_TYPE == _KEY_SCAN_NORMAL)

#define bKey_P61								(_MCU_PORT61)
#define bKey_P62								(_MCU_PORT62)
#define bKey_P63								(_MCU_PORT63)
#define bKey_P60								(_MCU_PORT60)

#elif(_KEY_SCAN_TYPE == _KEY_SCAN_CYPRESS)

sbit bCY_Key_SDA                                = P3^4;
#define bCY_Key_CLK                             (_MCU_PORT81)

#define bCY_KEY_0                               1  //_POWER_KEY
#define bCY_KEY_1                               2  //_DOWN_KEY
#define bCY_KEY_2                               4  //_UP_KEY
#define bCY_KEY_3                               8  //_LEFT_KEY
#define bCY_KEY_4                               16 //_RIGHT_KEY
#define bCY_KEY_5                               32 //_SOURCE_KEY
#define bCY_KEY_6                               64 //_MENU_KEY


#else

//MCU_ADC0,MCU_ADC1,MCU_ADC2,MCU_ADC3,MCU_ADC4
//#define AD_KEY0                                 MCU_ADC0
//#define AD_KEY1                                 MCU_ADC2
//#define AD_KEY2                                 MCU_ADC3
//#define AD_KEY3                                 MCU_ADC_NONE
//#define AD_KEY4                                 MCU_ADC_NONE

//#define bAD0_Key_0                              0//2   //Power       
//#define bAD0_Key_1                              43//44  //Down
//#define bAD0_Key_2                              43//22  //Up

//#define bAD1_Key_0                              28//55  //Left
//#define bAD1_Key_1								18//13  //Right
//#define bAD1_Key_2								43//37  //Source

//#define bAD2_Key_0							    10//16  //Menu
//#define bAD2_Key_1							    10//34  //Menu
//#define bAD2_Key_2                              0
//MCU_ADC0,MCU_ADC1,MCU_ADC2,MCU_ADC3,MCU_ADC4
#define AD_KEY0                                 MCU_ADC_NONE
#define AD_KEY1                                 MCU_ADC3
#define AD_KEY2                                 MCU_ADC_NONE
#define AD_KEY3                                 MCU_ADC_NONE
#define AD_KEY4                                 MCU_ADC_NONE

#define bAD1_Key_1                              43//255		// RESET      
#define bAD1_Key_2                              28//255//28		// LEFT
#define bAD1_Key_3                              10		// MENU
#define bAD1_Key_4                              18//255//18		// RIGHT
#define bAD1_Key_5								43//28//255		// UP
#define bAD1_Key_6								43//18//255		// DOWN
#define bAD1_Key_7							    0		// Power
#define bAD1_Key_8                              43		// SOURCE

#endif

//--------------------------------------------------
//            LED definitions
//--------------------------------------------------
//#define  bLED2									 (_MCU_PORT64)
//#define  bLED1									 (_MCU_PORT64)
sbit bLED2							   = P1^1;
#define bLED1                          (_MCU_PORT62)

//--------------------------------------------------
// Tuner power
//--------------------------------------------------
//sbit bTUNER_PWR                              	= P3^5;

#define TUNER_PWR_ON()                          //(bTUNER_PWR = 1)
#define TUNER_PWR_OFF()                         //(bTUNER_PWR = 0)


//--------------------------------------------------
//            Audio definitions
//--------------------------------------------------
#define AUDIO_TYPE                              _AUDIO_PWM      // _AUDIO_SC7313,_AUDIO_PWM 

#define bAUDIO_MUTE_A							(_MCU_PORT64)
#define SET_bAUDIO_MUTE_A(x)					(bAUDIO_MUTE_A = x)
#define _MUTE_ON                                0//1
#define _MUTE_OFF                               1//0
#define bMUTE                                   (bAUDIO_MUTE_A)

#if (AUDIO_TYPE == _AUDIO_PWM)
//#define _AUDIO_A                                (_MCU_PORT64)
//#define _AUDIO_B                                (_MCU_PORT64)
#define _AUDIO_A                                (_MCU_PORT81)        
sbit  	_AUDIO_B 								= P3^2; 

#define _VOLUME_INV                             1
#define _MAX_VOLUME                             190//255
#define _MIN_VOLUME                             0

/*
_RTD_PWM0, _RTD_PWM1, _RTD_PWM2, _RTD_PWM3, _RTD_PWM4, _RTD_PWM5 
*/
#define bVOLUME_PWM                             _RTD_PWM5

#endif

#if (AUDIO_TYPE == _AUDIO_SC7313)
#define _SOUND_PROCESSOR                        _ON      // _ON, _OFF
#else
#define _SOUND_PROCESSOR                        _OFF      // _ON, _OFF
#endif

//--------------------------------------------------
// Definitions for Backlight PWM Setting
//--------------------------------------------------
/*
_RTD_PWM0, _RTD_PWM1, _RTD_PWM2, _RTD_PWM3, _RTD_PWM4, _RTD_PWM5 
*/
#define _BACKLIGHT_PWM                         _RTD_PWM1//_RTD_PWM3
#define _BACKLIGHT_PWM_INVERSE                 1//_DISABLE    // _ENABLE,  _DISABLE

//--------------------------------------------------
// PWM Supported
//--------------------------------------------------
#define _MCU_PWM0_SUPPORT                      1//_OFF
#define _MCU_PWM1_SUPPORT                      _OFF
#define _MCU_PWM2_SUPPORT                      _ON//_OFF
#define _MCU_PWM3_SUPPORT                      _ON
#define _MCU_PWM4_SUPPORT                      _OFF
#define _MCU_PWM5_SUPPORT                      _ON  //    Sound PWM

#define _MCU_PWM_SUPPORT                       (_MCU_PWM0_SUPPORT       |  \
                                               (_MCU_PWM1_SUPPORT << 1) |  \
                                               (_MCU_PWM2_SUPPORT << 2) |  \
                                               (_MCU_PWM3_SUPPORT << 3) |  \
                                               (_MCU_PWM4_SUPPORT << 4) |  \
                                               (_MCU_PWM5_SUPPORT << 5))

//--------------------------------------------------
// Over Driving Supported
//--------------------------------------------------
#define _OD_SUPPORT								_OFF	//2660 not support over driving
#define _OD_COMPRESSION                 		_OFF    //2660 not support over driving

//--------------------------------------------------
// EDID
//--------------------------------------------------
#define _DDC_CHANNEL_FOR_D0 				   _DDC2	// DDC Channel SEL for digital input 0
#define _DDC_CHANNEL_FOR_D1 				   _DDC3	// DDC Channel SEL for digital input 1

//--------------------------------------------------
// Interior VGA  EDID 
//--------------------------------------------------
#define _VGA_EDID                              _ON

//--------------------------------------------------
// HDMI EDID
//--------------------------------------------------
#define _HDMI_EDID                             _ON
#define _HDMI_DDC_CHANNEL_SELECT 		       _DDC_CHANNEL_FOR_D0


//--------------------------------------------------
// Interior DVI  EDID 
//--------------------------------------------------
#define _DVI_EDID                              _OFF	//HDMI2:OFF//DVI:ON
#define _DVI_DDC_CHANNEL_SELECT                _DDC_CHANNEL_FOR_D1

//--------------------------------------------------
// HDCP Supported
//--------------------------------------------------
#define _HDCP_SUPPORT                   		_ON

//--------------------------------------------------
// HDMI HOT PLUG OPTION
//--------------------------------------------------
#define _HDMI_HOT_PLUG_OPTION              		_DISABLE//_ENABLE

#define _HOT_PLUG_HI                 0//1//           0//GMI SUN ADD ,201111221504
#define _HOT_PLUG_LOW             1//0//              1//GMI SUN ADD ,201111221504

//--------------------------------------------------
// For digital input swap
//--------------------------------------------------
#define _CHANNEL_D0_RG_SWAP                    (_ENABLE << 6)
#define _CHANNEL_D0_PN_SWAP                    (_ENABLE << 5)

#define _CHANNEL_D1_RG_SWAP                    (_ENABLE << 6)
#define _CHANNEL_D1_PN_SWAP                    (_ENABLE << 5)

#define _SLEEP_FUNC                            _DISABLE

#define _LOGO_ENABLE                           0//_ENABLE

