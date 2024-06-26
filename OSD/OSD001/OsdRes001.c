#define __OSDRES001__


#include "Core\Header\Include.h"

#if(_OSD_TYPE == _OSD001)

#define FONT_BASE_ADDRESS			0x2B4

//-----------------------------------------------------------------
BYTE code tUserMenuOsdMap[] =
{
    15,         // Row : 13
    LOBYTE(FONT_BASE_ADDRESS),HIBYTE(FONT_BASE_ADDRESS),
    30,    // Row 0 char count
    30,   // Row 1 char count
    30,   // Row 2 char count
    30,   // Row 3 char count
    30,   // Row 4 char count
    30,   // Row 5 char count
    30,   // Row 6 char count
    30,   // Row 7 char count
    30,   // Row 8 char count
    30,   // 9
    30,   // 10
    30,   // 11
    30,   // 12
    30,   // 13
    30,   // 14
};

//------------------------------------------------------------------------------
BYTE code tPALETTE_0[] = 
{
	//-------------:Palette ----------
	0x00,0x00,0x00,    0x00,0x00,0xFF,    
	0x00,0xFF,0x00,    0x00,0xFF,0xFF,    
	0xFF,0x00,0x00,    0xFF,0x00,0xFF,    
	0xFF,0xFF,0x00,    0xFF,0xFF,0xFF,    
	0x80,0x80,0x80,    0xFF,0xC0,0x00,    
	0xC0,0xC0,0xC0,    0x80,0x80,0x80,    
	0xE0,0xE0,0xE0,    0xFF,0xFF,0x00,    
	0xFF,0x40,0x40,    0x00,0x00,0xF0,    
};
//------------------------------------------------------------------------------
BYTE code tOSD_WINDOW4_STYLE[] =
{
    WINNO(4),

    SB_THICKNESS(1) | SB_HEIGHT(1) ,
    SHADOW_COLOR(3) | BORDER_COLOR(3),
    R_GRADIENT_POLARITY_DEC |
    G_GRADIENT_POLARITY_INC |
    B_GRADIENT_POLARITY_DEC |
    GRADIENT_LEVEL(0) |
    R_COLOR_GRADIENT_EN(0) |
    G_COLOR_GRADIENT_EN(0) |
    B_COLOR_GRADIENT_EN(0),

    RESERVED,
    GRADIENT_PER_LEVEL(2) | WINDOW_COLOR(0),
    GRADIENT_FUNCTION_EN(1) |
    GRADIENT_DIRECTION_HOR |
    SHADOW_BORDER_EN(1) |
    WINDOW_TYPE(WT_3DBUTTON_TYPE1) |
    WINDOW_ENABLE(1),
};
//------------------------------------------------------------------------------


BYTE code tFntGlobalCharWidth[] = 
{
    4,    // 0x00   
    12,    // 0x01   
    12,    // 0x02   
    12,    // 0x03   
    12,    // 0x04   
    12,    // 0x05   
    12,    // 0x06   
    12,    // 0x07   
    12,    // 0x08   
    12,    // 0x09   
    12,    // 0x0A   
    12,    // 0x0B   
    12,    // 0x0C   
    4,    // 0x0D   
    4,    // 0x0E   
    4,    // 0x0F   
    4,    // 0x10   
    4,    // 0x11   
    4,    // 0x12   
    4,    // 0x13   
    4,    // 0x14   
    4,    // 0x15   
    4,    // 0x16   
    4,    // 0x17   
    4,    // 0x18   
    4,    // 0x19   
    4,    // 0x1A   
    4,    // 0x1B   
    4,    // 0x1C   
    4,    // 0x1D   
    4,    // 0x1E   
    4,    // 0x1F   
    4,    // 0x20   
    12,    // 0x21  SLIDER
    12,    // 0x22  SLIDER
    12,    // 0x23  SLIDER
    12,    // 0x24  SLIDER
    12,    // 0x25  SLIDER
    12,    // 0x26  SLIDER
    12,    // 0x27  SLIDER
    12,    // 0x28  SLIDER
    12,    // 0x29  SLIDER
    11,    // 0x2A  %
    7,    // 0x2B  *
    6,    // 0x2C  +
    5,    // 0x2D  -
    4,    // 0x2E  .
    7,    // 0x2F  /
    8,    // 0x30  0
    5,    // 0x31  1
    8,    // 0x32  2
    7,    // 0x33  3
    8,    // 0x34  4
    8,    // 0x35  5
    8,    // 0x36  6
    8,    // 0x37  7
    8,    // 0x38  8
    8,    // 0x39  9
    4,    // 0x3A  :
    8,    // 0x3B  RTD Graphic Object
    8,    // 0x3C  RTD Graphic Object
    7,    // 0x3D  RTD Graphic Object
    7,    // 0x3E  RTD Graphic Object
    7,    // 0x3F  RTD Graphic Object
    11,    // 0x40  @
    9,    // 0x41  A
    8,    // 0x42  B
    8,    // 0x43  C
    9,    // 0x44  D
    8,    // 0x45  E
    8,    // 0x46  F
    9,    // 0x47  G
    10,    // 0x48  H
    7,    // 0x49  I
    9,    // 0x4A  J
    8,    // 0x4B  K
    7,    // 0x4C  L
    11,    // 0x4D  M
    10,    // 0x4E  N
    10,    // 0x4F  O
    7,    // 0x50  P
    12,    // 0x51  Q
    8,    // 0x52  R
    9,    // 0x53  S
    9,    // 0x54  T
    10,    // 0x55  U
    9,    // 0x56  V
    12,    // 0x57  W
    10,    // 0x58  X
    9,    // 0x59  Y
    9,    // 0x5A  Z
    12,    // 0x5B  Cheng
    12,    // 0x5C  NONE
    12,    // 0x5D  NONE
    7,    // 0x5E  
    7,    // 0x5F  
    7,    // 0x60  
    8,    // 0x61  a
    8,    // 0x62  b
    7,    // 0x63  c
    8,    // 0x64  d
    7,    // 0x65  e
    8,    // 0x66  f
    7,    // 0x67  g
    7,    // 0x68  h
    4,    // 0x69  i
    4,    // 0x6A  j
    7,    // 0x6B  k
    4,    // 0x6C  l
    9,    // 0x6D  m
    7,    // 0x6E  n
    7,    // 0x6F  o
    7,    // 0x70  p
    7,    // 0x71  q
    6,    // 0x72  r
    6,    // 0x73  s
    6,    // 0x74  t
    7,    // 0x75  u
    7,    // 0x76  v
    10,    // 0x77  w
    8,    // 0x78  x
    7,    // 0x79  y
    7,    // 0x7A  z

};

//-----------------------------------------------------------------
BYTE code tFntVolumeCharWidth[] = 
{
    12,
    12,
    12,
    12,
    12,
    12,
};

//-----------------------------------------------------------------
code BYTE sSourceVGA[]   = "VGA";
code BYTE sSourceAV[]    = "AV";
code BYTE sSourceSV[]    = "SV";
code BYTE sSourceTV[]    = "TV";
code BYTE sSourceDVI[]   = "DVI";
code BYTE sSourceHDMI[]  = "HDMI";
code BYTE sSourceYPBPR[] = "YPbPr";

//-------------------- No Signal ----------------------------------
BYTE code sNoSignal_ENG[] = "No Signal";
BYTE code sNoSignal_Fra[] = "Sans Signal";
BYTE code sNoSignal_Ita[] = "Senza Segnale";
BYTE code sNoSignal_Deu[] = "Kein Signal";
BYTE code sNoSignal_Esp[] = "No Signal";
BYTE code sNoSignal_Jap[] = "No Signal";
BYTE code sNoSignal_CHI_S[] = "No Signal";
BYTE code sNoSignal_CHI_T[] = "No Signal";

code BYTE * sNosignal[] =
{
    sNoSignal_ENG,
    sNoSignal_Fra,
    sNoSignal_Ita,
    sNoSignal_Deu,
    sNoSignal_Esp,
    sNoSignal_Jap,
    sNoSignal_CHI_S,
    sNoSignal_CHI_T
};

//-----------------------------------------------------------------
BYTE code sBrightness_Eng[] = "Brightness";
BYTE code sBrightness_Fra[] = "";
BYTE code sBrightness_Ita[] = "";
BYTE code sBrightness_Deu[] = "";
BYTE code sBrightness_Esp[] = "";
BYTE code sBrightness_Jap[] = "";
BYTE code sBrightness_CHI_S[] = "";
BYTE code sBrightness_CHI_T[] = "";

code BYTE * sBrightness[] =
{
    sBrightness_Eng,
    sBrightness_Fra,
    sBrightness_Ita,
    sBrightness_Deu,
    sBrightness_Esp,
    sBrightness_Jap,
    sBrightness_CHI_S,
    sBrightness_CHI_T
};

//------------------------------- Contrast --------------------------------------------
BYTE code sContrast_Eng[] = "Contrast";
BYTE code sContrast_Fra[] = "";
BYTE code sContrast_Ita[] = "";
BYTE code sContrast_Deu[] = "";
BYTE code sContrast_Esp[] = "";
BYTE code sContrast_Jap[] = "";
BYTE code sContrast_CHI_S[] = "";
BYTE code sContrast_CHI_T[] = "";

code BYTE * sContrast[] =
{
    sContrast_Eng,
    sContrast_Fra,
    sContrast_Ita,
    sContrast_Deu,
    sContrast_Esp,
    sContrast_Jap,
    sContrast_CHI_S,
    sContrast_CHI_T
};

//------------------------------- Hue --------------------------------------------
BYTE code sHue_Eng[] = "Hue";
BYTE code sHue_Fra[] = "";
BYTE code sHue_Ita[] = "";
BYTE code sHue_Deu[] = "";
BYTE code sHue_Esp[] = "";
BYTE code sHue_Jap[] = "";
BYTE code sHue_CHI_S[] = "";
BYTE code sHue_CHI_T[] = "";

code BYTE * sHue[] =
{
    sHue_Eng,
    sHue_Fra,
    sHue_Ita,
    sHue_Deu,
    sHue_Esp,
    sHue_Jap,
    sHue_CHI_S,
    sHue_CHI_T
};

//------------------------------- Saturation --------------------------------------------
BYTE code sSaturation_Eng[] = "Saturation";
BYTE code sSaturation_Fra[] = "";
BYTE code sSaturation_Ita[] = "";
BYTE code sSaturation_Deu[] = "";
BYTE code sSaturation_Esp[] = "";
BYTE code sSaturation_Jap[] = "";
BYTE code sSaturation_CHI_S[] = "";
BYTE code sSaturation_CHI_T[] = "";

code BYTE * sSaturation[] =
{
    sSaturation_Eng,
    sSaturation_Fra,
    sSaturation_Ita,
    sSaturation_Deu,
    sSaturation_Esp,
    sSaturation_Jap,
    sSaturation_CHI_S,
    sSaturation_CHI_T
};

//------------------------------- Phase --------------------------------------------
BYTE code sPhase_Eng[] = "Phase";
BYTE code sPhase_Fra[] = "";
BYTE code sPhase_Ita[] = "";
BYTE code sPhase_Deu[] = "";
BYTE code sPhase_Esp[] = "";
BYTE code sPhase_Jap[] = "";
BYTE code sPhase_CHI_S[] = "";
BYTE code sPhase_CHI_T[] = "";

code BYTE * sPhase[] =
{
    sPhase_Eng,
    sPhase_Fra,
    sPhase_Ita,
    sPhase_Deu,
    sPhase_Esp,
    sPhase_Jap,
    sPhase_CHI_S,
    sPhase_CHI_T
};

//-------------------------------- Clock -------------------------------------------
BYTE code sClock_Eng[] = "Clock";
BYTE code sClock_Fra[] = "";
BYTE code sClock_Ita[] = "";
BYTE code sClock_Deu[] = "";
BYTE code sClock_Esp[] = "";
BYTE code sClock_Jap[] = "";
BYTE code sClock_CHI_S[] = "";
BYTE code sClock_CHI_T[] = "";

code BYTE * sClock[] =
{
    sClock_Eng,
    sClock_Fra,
    sClock_Ita,
    sClock_Deu,
    sClock_Esp,
    sClock_Jap,
    sClock_CHI_S,
    sClock_CHI_T
};

//---------------------------- Auto adjust -----------------------------------------------
BYTE code sAutoAdjust_Eng[] = "Auto adjust";
BYTE code sAutoAdjust_Fra[] = "";
BYTE code sAutoAdjust_Ita[] = "";
BYTE code sAutoAdjust_Deu[] = "";
BYTE code sAutoAdjust_Esp[] = "";
BYTE code sAutoAdjust_Jap[] = "";
BYTE code sAutoAdjust_CHI_S[] = "";
BYTE code sAutoAdjust_CHI_T[] = "";

code BYTE * sAutoAdjust[] =
{
    sAutoAdjust_Eng,
    sAutoAdjust_Fra,
    sAutoAdjust_Ita,
    sAutoAdjust_Deu,
    sAutoAdjust_Esp,
    sAutoAdjust_Jap,
    sAutoAdjust_CHI_S,
    sAutoAdjust_CHI_T
};                    

//------------------------ Auto adjusting... ---------------------------------------------------
BYTE code sAutoAdjusting_Eng[] = "Auto adjusting...";
BYTE code sAutoAdjusting_Fra[] = "";
BYTE code sAutoAdjusting_Ita[] = "";
BYTE code sAutoAdjusting_Deu[] = "";
BYTE code sAutoAdjusting_Esp[] = "";
BYTE code sAutoAdjusting_Jap[] = "";
BYTE code sAutoAdjusting_CHI_S[] = "";
BYTE code sAutoAdjusting_CHI_T[] = "";

code BYTE * sAutoAdjusting[] =
{
    sAutoAdjusting_Eng,
    sAutoAdjusting_Fra,
    sAutoAdjusting_Ita,
    sAutoAdjusting_Deu,
    sAutoAdjusting_Esp,
    sAutoAdjusting_Jap,
    sAutoAdjusting_CHI_S,
    sAutoAdjusting_CHI_T
};             

//------------------------------ Exit ---------------------------------------------
BYTE code sExit_Eng[] = "Exit";
BYTE code sExit_Fra[] = "";
BYTE code sExit_Ita[] = "";
BYTE code sExit_Deu[] = "";
BYTE code sExit_Esp[] = "";
BYTE code sExit_Jap[] = "";
BYTE code sExit_CHI_S[] = "";
BYTE code sExit_CHI_T[] = "";

code BYTE * sExit[] =
{
    sExit_Eng,
    sExit_Fra,
    sExit_Ita,
    sExit_Deu,
    sExit_Esp,
    sExit_Jap,
    sExit_CHI_S,
    sExit_CHI_T
};

//------------------------------- Display Mode --------------------------------------------
BYTE code sDisplayMode_Eng[] = "Display Mode";
BYTE code sDisplayMode_Fra[] = "";
BYTE code sDisplayMode_Ita[] = "";
BYTE code sDisplayMode_Deu[] = "";
BYTE code sDisplayMode_Esp[] = "";
BYTE code sDisplayMode_Jap[] = "";
BYTE code sDisplayMode_CHI_S[] = "";
BYTE code sDisplayMode_CHI_T[] = "";

code BYTE * sDisplayMode[] =
{
    sDisplayMode_Eng,
    sDisplayMode_Fra,
    sDisplayMode_Ita,
    sDisplayMode_Deu,
    sDisplayMode_Esp,
    sDisplayMode_Jap,
    sDisplayMode_CHI_S,
    sDisplayMode_CHI_T
};

//---------------------------------- Full -----------------------------------------
BYTE code sFull_Eng[] = "Full";
BYTE code sFull_Fra[] = "";
BYTE code sFull_Ita[] = "";
BYTE code sFull_Deu[] = "";
BYTE code sFull_Esp[] = "";
BYTE code sFull_Jap[] = "";
BYTE code sFull_CHI_S[] = "";
BYTE code sFull_CHI_T[] = "";

code BYTE * sFull[] =
{
    sFull_Eng,
    sFull_Fra,
    sFull_Ita,
    sFull_Deu,
    sFull_Esp,
    sFull_Jap,
    sFull_CHI_S,
    sFull_CHI_T
};

//------------------------------- 4:3 --------------------------------------------
BYTE code sDM4_3_Eng[] = "4:3";
BYTE code sDM4_3_Fra[] = "";
BYTE code sDM4_3_Ita[] = "";
BYTE code sDM4_3_Deu[] = "";
BYTE code sDM4_3_Esp[] = "";
BYTE code sDM4_3_Jap[] = "";
BYTE code sDM4_3_CHI_S[] = "";
BYTE code sDM4_3_CHI_T[] = "";

code BYTE * sDM4_3[] =
{
    sDM4_3_Eng,
    sDM4_3_Fra,
    sDM4_3_Ita,
    sDM4_3_Deu,
    sDM4_3_Esp,
    sDM4_3_Jap,
    sDM4_3_CHI_S,
    sDM4_3_CHI_T
};

#if(_VIDEO_TV_SUPPORT)
//------------------------------ MHz ---------------------------------------------
code BYTE sMhz[] = "MHz ";
code BYTE sPixel[] = ".";

//------------------------------ Auto Search ---------------------------------------------
BYTE code sAutoSearch_ENG[] = "Auto Search";
BYTE code sAutoSearch_Fra[] = "Recherche Auto";
BYTE code sAutoSearch_Ita[] = "Cerca Auta";
BYTE code sAutoSearch_Deu[] = "Auto.Suche";
BYTE code sAutoSearch_Esp[] = "Auto-Selecci\x3Fn";
BYTE code sAutoSearch_Jap[] = "Auto Search";
BYTE code sAutoSearch_CHI_S[] = "Auto Search";
BYTE code sAutoSearch_CHI_T[] = "Auto Search";

code BYTE * sAutoSearch[] =
{
    sAutoSearch_ENG,
    sAutoSearch_Fra,
    sAutoSearch_Ita,
    sAutoSearch_Deu,
    sAutoSearch_Esp,
    sAutoSearch_Jap,
    sAutoSearch_CHI_S,
    sAutoSearch_CHI_T
};

//------------------------------ Manual Search ---------------------------------------------
BYTE code sManualSearch_ENG[] = "Manual Search";
BYTE code sManualSearch_Fra[] = "Recher.Manuel";
BYTE code sManualSearch_Ita[] = "Cerca Manuale";
BYTE code sManualSearch_Deu[] = "Manuelle Suche";
BYTE code sManualSearch_Esp[] = "Selec.Manual";
BYTE code sManualSearch_Jap[] = "Manual Search";
BYTE code sManualSearch_CHI_S[] = "Manual Search";
BYTE code sManualSearch_CHI_T[] = "Manual Search";

code BYTE * sManualSearch[] =
{
    sManualSearch_ENG,
    sManualSearch_Fra,
    sManualSearch_Ita,
    sManualSearch_Deu,
    sManualSearch_Esp,
    sManualSearch_Jap,
    sManualSearch_CHI_S,
    sManualSearch_CHI_T
};

//------------------------------ Tuning ---------------------------------------------
BYTE code sTuning_ENG[] = "Tuning";
BYTE code sTuning_Fra[] = "R\x3Dglage";
BYTE code sTuning_Ita[] = "Girando";
BYTE code sTuning_Deu[] = "Abstimmung";
BYTE code sTuning_Esp[] = "Fina Modifica";
BYTE code sTuning_Jap[] = "Tuning";
BYTE code sTuning_CHI_S[] = "Tuning";
BYTE code sTuning_CHI_T[] = "Tuning";

code BYTE * sTunning[] =
{
    sTuning_ENG,
    sTuning_Fra,
    sTuning_Ita,
    sTuning_Deu,
    sTuning_Esp,
    sTuning_Jap,
    sTuning_CHI_S,
    sTuning_CHI_T
};

//---------------------------------- Swap -----------------------------------------
BYTE code sSwap_ENG[] = "Swap";
BYTE code sSwap_Fra[] = "Swap";
BYTE code sSwap_Ita[] = "Swap";
BYTE code sSwap_Deu[] = "Swap";
BYTE code sSwap_Esp[] = "Swap";
BYTE code sSwap_Jap[] = "Swap";
BYTE code sSwap_CHI_S[] = "Swap";
BYTE code sSwap_CHI_T[] = "Swap";

code BYTE * sSwap[] =
{
    sSwap_ENG,
    sSwap_Fra,
    sSwap_Ita,
    sSwap_Deu,
    sSwap_Esp,
    sSwap_Jap,
    sSwap_CHI_S,
    sSwap_CHI_T
};

//------------------------------------ Skip ---------------------------------------
BYTE code sChannel_ENG[] = "Channel";
BYTE code sChannel_Fra[] = "Channel";
BYTE code sChannel_Ita[] = "Channel";
BYTE code sChannel_Deu[] = "Channel";
BYTE code sChannel_Esp[] = "Channel";
BYTE code sChannel_Jap[] = "Channel";
BYTE code sChannel_CHI_S[] = "Channel";
BYTE code sChannel_CHI_T[] = "Channel";

code BYTE * sChannel[] =
{
    sChannel_ENG,
    sChannel_Fra,
    sChannel_Ita,
    sChannel_Deu,
    sChannel_Esp,
    sChannel_Jap,
    sChannel_CHI_S,
    sChannel_CHI_T
};

//------------------------------------ Skip ---------------------------------------
BYTE code sSkip_ENG[] = "Skip";
BYTE code sSkip_Fra[] = "Skip";
BYTE code sSkip_Ita[] = "Skip";
BYTE code sSkip_Deu[] = "Skip";
BYTE code sSkip_Esp[] = "Skip";
BYTE code sSkip_Jap[] = "Skip";
BYTE code sSkip_CHI_S[] = "Skip";
BYTE code sSkip_CHI_T[] = "Skip";

code BYTE * sSkip[] =
{
    sSkip_ENG,
    sSkip_Fra,
    sSkip_Ita,
    sSkip_Deu,
    sSkip_Esp,
    sSkip_Jap,
    sSkip_CHI_S,
    sSkip_CHI_T
};

//------------------------------- TV System -------------------------------------------
BYTE code sTVSystem_ENG[] = "TV System";
BYTE code sTVSystem_Fra[] = "Syst\x3Eme TV";
BYTE code sTVSystem_Ita[] = "Sistema TV";
BYTE code sTVSystem_Deu[] = "TV System";
BYTE code sTVSystem_Esp[] = "TV Sistema";
BYTE code sTVSystem_Jap[] = "TV Sistema";
BYTE code sTVSystem_CHI_S[] = "TV System";
BYTE code sTVSystem_CHI_T[] = "TV System";

code BYTE * sTVSystem[] =
{
    sTVSystem_ENG,
    sTVSystem_Fra,
    sTVSystem_Ita,
    sTVSystem_Deu,
    sTVSystem_Esp,
    sTVSystem_Jap,
    sTVSystem_CHI_S,
    sTVSystem_CHI_T
};

//------------------------------- TV Type -------------------------------------------
BYTE code sTVNone[]      = "NONE";
BYTE code sTVNTSC_M[]    = "NTSC M";
BYTE code sTVNTSC_4BG[]  = "NTSC 4 BG";
BYTE code sTVNTSC_4DK[]  = "NTSC 4 DK";
BYTE code sTVNTSC_4I[]   = "NTSC 4 I";
BYTE code sTVPAL_M[]     = "PAL M";
BYTE code sTVPAL_BG[]    = "PAL BG";
BYTE code sTVPAL_I[]     = "PAL I";
BYTE code sTVPAL_DK[]    = "PAL DK";
BYTE code sTVPAL_N[]     = "PAL N";
BYTE code sTVSECAM_BG[]  = "SECAM BG";
BYTE code sTVSECAM_DK[]  = "SECAM DK";
BYTE code sTVSECAM_L[]   = "SECAM";
BYTE code sTVSECAM_LL[]  = "SECAM L";

code BYTE * sTVType[14] = 
{
    sTVNone,    sTVNTSC_M,  sTVNTSC_4BG,sTVNTSC_4DK,sTVNTSC_4I,
    sTVPAL_M,   sTVPAL_BG,  sTVPAL_I,   sTVPAL_DK,  sTVPAL_N,
    sTVSECAM_BG,sTVSECAM_DK,sTVSECAM_L, sTVSECAM_LL,
    
};

#endif // #if(_VIDEO_TV_SUPPORT)

//----------------------------- On Off --------------------------------------------
BYTE code sOn_Eng[]   = "On";
BYTE code sOn_Fra[]   = "Allume";
BYTE code sOn_Ita[]   = "Acceso";
BYTE code sOn_Deu[]   = "Aus";
BYTE code sOn_Esp[]   = "Ence";
BYTE code sOn_Jap[]   = "Ence";
BYTE code sOn_CHI_S[] = "On";
BYTE code sOn_CHI_T[] = "On";

BYTE code sOff_Eng[]   = "Off";
BYTE code sOff_Fra[]   = "Eteint";
BYTE code sOff_Ita[]   = "Off";
BYTE code sOff_Deu[]   = "Ein";
BYTE code sOff_Esp[]   = "Aag";
BYTE code sOff_Jap[]   = "Aag";
BYTE code sOff_CHI_S[] = "Off";
BYTE code sOff_CHI_T[] = "Off";

code BYTE * sOnOff[2][8] =
{
    {
       sOff_Eng,
       sOff_Fra,
       sOff_Ita,
       sOff_Deu,
       sOff_Esp,
       sOff_Jap,
       sOff_CHI_S,
       sOff_CHI_T
    },
    {
       sOn_Eng,
       sOn_Fra,
       sOn_Ita,
       sOn_Deu,
       sOn_Esp,
       sOn_Jap,
       sOn_CHI_S,
       sOn_CHI_T
    }
};


//------------------------------- Language -----------------------------------------
BYTE code sLanguage_ENG[] = "Language";
BYTE code sLanguage_Fra[] = "Langue";
BYTE code sLanguage_Ita[] = "Lingua";
BYTE code sLanguage_Deu[] = "Sprache";
BYTE code sLanguage_Esp[] = "Lenguaje";
BYTE code sLanguage_Jap[] = "Language";
BYTE code sLanguage_CHI_S[] = "Language";
BYTE code sLanguage_CHI_T[] = "Language";

code BYTE * sLanguage[] =
{
    sLanguage_ENG,
    sLanguage_Fra,
    sLanguage_Ita,
    sLanguage_Deu,
    sLanguage_Esp,
    sLanguage_Jap,
    sLanguage_CHI_S,
    sLanguage_CHI_T
};

//------------------------ Language Name ---------------------------------------------
BYTE xdata sLangName_ENG[] = "English";
BYTE xdata sLangName_Fra[] = "Francais";
BYTE xdata sLangName_Ita[] = "Italiano";
BYTE xdata sLangName_Deu[] = "Deutsch";
BYTE xdata sLangName_Esp[] = "Espa\x60ol";
BYTE xdata sLangName_Jap[] = "English";
BYTE xdata sLangName_CHI_S[] = "English";
BYTE xdata sLangName_CHI_T[] = "English";

code BYTE * sLanguageName[] =
{
    sLangName_ENG,
    sLangName_Fra,
    sLangName_Ita,
    sLangName_Deu,
    sLangName_Esp,
    sLangName_Jap,
    sLangName_CHI_S,
    sLangName_CHI_T
};


//---------------------------------- Blue -----------------------------------------
BYTE code sBlue_ENG[] = "Blue";
BYTE code sBlue_Fra[] = "Bleu";
BYTE code sBlue_Ita[] = "Blu";
BYTE code sBlue_Deu[] = "Blau";
BYTE code sBlue_Esp[] = "Azul";
BYTE code sBlue_Jap[] = "Blue";
BYTE code sBlue_CHI_S[] = "Blue";
BYTE code sBlue_CHI_T[] = "Blue";

code BYTE * sBlue[] =
{
    sBlue_ENG,
    sBlue_Fra,
    sBlue_Ita,
    sBlue_Deu,
    sBlue_Esp,
    sBlue_Jap,
    sBlue_CHI_S,
    sBlue_CHI_T
};



//----------------------------------- Volume ---------------------------------------
BYTE code sVolume_ENG[] = "Volume";
BYTE code sVolume_Fra[] = "Volume";
BYTE code sVolume_Ita[] = "Volume";
BYTE code sVolume_Deu[] = "Lautst\x3Crke";
BYTE code sVolume_Esp[] = "Volumen";
BYTE code sVolume_Jap[] = "Volumen";
BYTE code sVolume_CHI_S[] = "Volume";
BYTE code sVolume_CHI_T[] = "Volume";

code BYTE * sVolume[] =
{
    sVolume_ENG,
    sVolume_Fra,
    sVolume_Ita,
    sVolume_Deu,
    sVolume_Esp,
    sVolume_Jap,
    sVolume_CHI_S,
    sVolume_CHI_T
};















//-----------------------------------------------------------------
BYTE code FntGlobal[] =
{
//----------Font libary infomation----------
//Name   : Comic Sans MS
//Size   : 10
//X      : 0
//Y      : 0
//Format : RTD VLC 1Bit
//Count  : 123
//------------------------------------------
0x04,0x28,0xF1,0xC3,0x76,0x5E,0xA9,0xDB,0x05,0x48,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xA0,0x0E,0x54,0x41,0x15,0x54,0x41,
0x15,0x54,0xC1,0x29,0x00,0x00,0x63,0x06,0x00,0x00,0x00,0x98,
0x31,0x00,0x00,0x63,0x06,0x7B,0xC3,0xDE,0xB0,0x37,0xEC,0x0D,
0x7B,0x9B,0x31,0x00,0x00,0x63,0x06,0x33,0x30,0x03,0x33,0x30,
0x03,0x33,0x66,0x0C,0x00,0xC0,0x98,0xD9,0xCC,0xEC,0xCD,0xCC,
0xDE,0xCC,0xEC,0xCD,0xCC,0xDE,0xCC,0xEC,0x19,0x03,0x00,0x30,
0x66,0x86,0x99,0x19,0x66,0x66,0x98,0x99,0x61,0x66,0x86,0x99,
0x99,0x31,0x00,0x00,0x63,0x66,0xF6,0x9E,0x99,0xD9,0x7B,0x66,
0x66,0xEF,0x99,0x99,0xBD,0x67,0x66,0xF6,0x9E,0x99,0x19,0x03,
0x00,0x30,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,
0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x0C,0x00,0x80,0x6C,0x48,
0x20,0x81,0x04,0x12,0x48,0x60,0x07,0x00,0x00,0x1F,0x72,0xD6,
0xCD,0xC9,0x27,0x90,0x4F,0x9A,0xEF,0xEA,0xAC,0x55,0x00,0x00,
0x00,0x28,0x70,0x66,0x43,0x1A,0x00,0x00,0x00,0x00,0x00,0x14,
0xCD,0x14,0x54,0x01,0x00,0x00,0x00,0x00,0x00,0x80,0x01,0x00,
0x00,0x00,0x00,0x00,0x00,0x20,0x01,0x00,0x00,0xD0,0x90,0x86,
0xC6,0x59,0x90,0x82,0x0E,0x68,0x00,0x00,0x84,0x5A,0x5D,0x24,
0x55,0x24,0x55,0x24,0xD5,0xAC,0x0A,0x00,0x00,0x00,0xEE,0x82,
0x2A,0xA8,0x82,0x2A,0xB8,0x0A,0x00,0x00,0x40,0x91,0xB3,0x0B,
0xAA,0x59,0x82,0x94,0x97,0x2B,0x00,0x00,0x00,0x42,0x4E,0x07,
0x12,0x9C,0x0E,0xA4,0x39,0x09,0x00,0x00,0xC0,0x86,0x84,0x5A,
0x09,0x9D,0x04,0xF3,0x06,0x02,0x00,0x00,0x80,0x5C,0xEF,0xE6,
0x89,0x22,0x77,0x15,0x54,0x73,0x12,0x00,0x00,0x00,0x2C,0x8D,
0x2A,0x45,0xAE,0x5D,0x24,0xB5,0x39,0x29,0x00,0x00,0x80,0x60,
0xDE,0x86,0xC6,0xD2,0xA8,0x05,0x55,0x00,0x00,0x00,0x8A,0x9C,
0x5D,0x24,0x55,0xE4,0xEC,0x22,0xA9,0xCD,0x49,0x01,0x00,0x00,
0x14,0x39,0xBB,0x48,0xAA,0x48,0x2A,0x38,0x1B,0xF7,0x6A,0x00,
0x00,0x00,0x00,0x01,0x02,0x01,0x02,0x00,0x00,0x04,0xAC,0xB2,
0x59,0x84,0x54,0x42,0x92,0x0F,0x27,0x01,0x00,0x00,0x08,0xC5,
0x66,0x11,0x52,0x09,0x49,0x3E,0x9C,0x04,0x00,0x80,0x06,0xA8,
0xA5,0x59,0x84,0x54,0x70,0x3F,0xDD,0x9C,0x04,0x00,0x00,0x04,
0xAC,0xD2,0x2C,0x42,0x2A,0xB8,0x9F,0x6E,0x4E,0x02,0x00,0x40,
0x00,0x96,0x6E,0x0E,0x21,0x49,0x48,0xD2,0x9C,0x04,0x00,0x00,
0x60,0xB5,0x7B,0xBD,0x9D,0xFD,0xCD,0xBE,0x93,0xCF,0xE7,0xA6,
0xFB,0xFB,0xD3,0x2A,0x60,0x0D,0x00,0x00,0x81,0x7C,0x20,0xC5,
0x5A,0xB5,0xA8,0xF3,0x2E,0x92,0x05,0x00,0x00,0x10,0x72,0x75,
0x48,0xB2,0xB9,0xD2,0x45,0x52,0xCD,0x95,0x00,0x00,0x00,0x14,
0xB5,0x5E,0x24,0xD0,0x0D,0xDD,0x36,0x57,0x17,0x00,0x00,0x40,
0xF3,0xDC,0x8A,0x24,0x8B,0x64,0x2D,0x92,0xB5,0x39,0x29,0x00,
0x00,0x00,0xE4,0x7A,0x91,0x40,0xAE,0x17,0x89,0x97,0x13,0x00,
0x00,0x00,0xC8,0xF5,0x22,0x81,0x5C,0x1B,0x09,0x24,0x00,0x00,
0x00,0x8A,0x5A,0x1B,0x89,0xE1,0xDB,0x8A,0xEE,0xD5,0x5C,0x1D,
0x00,0x00,0x00,0xDD,0x09,0xDD,0x89,0xE9,0xBE,0x42,0x77,0x42,
0x77,0x02,0x00,0x00,0x00,0xEB,0xDA,0x58,0x0B,0xD6,0x82,0xB5,
0x6C,0xAE,0x05,0x00,0x00,0x20,0x38,0x13,0x48,0x20,0x21,0xB2,
0x39,0x09,0x00,0x00,0x40,0x48,0x0A,0x4F,0x1A,0xF7,0xAD,0xC9,
0xA3,0x48,0x02,0x00,0x00,0x80,0x04,0x12,0x48,0x20,0xB1,0xB9,
0x02,0x00,0x00,0x60,0xB1,0xD6,0x3A,0xAC,0xB5,0x3E,0xDD,0x55,
0x9F,0x4F,0x77,0xEA,0x93,0x24,0x09,0x00,0x00,0x80,0xEE,0xDD,
0x74,0x7F,0x3E,0xBA,0xBB,0xBF,0xAA,0xBB,0x3B,0xBA,0xBB,0x17,
0x00,0x00,0xC0,0xA2,0xD6,0xAB,0xBB,0x43,0x77,0xB7,0xA5,0xBB,
0x6D,0x4E,0x0A,0x00,0x00,0x20,0xE4,0xEA,0x90,0xA4,0xB9,0x12,
0x24,0x90,0x00,0x00,0x00,0x58,0xAD,0xD6,0x48,0x77,0x48,0xBA,
0xDD,0x49,0x3A,0xD3,0xBD,0xEE,0xE3,0xDE,0x00,0x00,0x20,0xE4,
0xEA,0x22,0xA9,0x90,0x54,0x93,0xAB,0x8B,0x24,0x00,0x00,0x00,
0xA8,0x35,0x48,0x2C,0x9C,0x77,0xC1,0xDA,0x5C,0x5D,0x00,0x00,
0x00,0x8D,0x6B,0x1A,0xBA,0xA1,0x1B,0xBA,0xA1,0x01,0x00,0x00,
0x74,0x27,0x74,0x27,0x74,0x27,0x74,0x27,0x5E,0x56,0x2D,0x00,
0x00,0x80,0x45,0xF7,0x2A,0xD2,0x15,0x92,0x34,0x55,0x8D,0xB5,
0x00,0x00,0x00,0xD4,0x5A,0x49,0x3D,0x55,0x95,0xFA,0xA6,0xAA,
0x9E,0x6F,0x52,0xF5,0xD5,0xBD,0x16,0x00,0x00,0x80,0xA5,0xD3,
0xC2,0xAA,0x6A,0xE8,0xA2,0x56,0xB4,0xCE,0x02,0x00,0x00,0x28,
0xD2,0x2B,0x54,0x55,0xB3,0x56,0xB0,0x34,0xD6,0x02,0x00,0x00,
0x50,0x98,0x69,0x08,0xD6,0x82,0x94,0x61,0x1A,0x00,0x00,0x4A,
0xD0,0x59,0xE5,0x86,0xEF,0x17,0x6E,0xE9,0x5A,0x28,0x01,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x34,0x40,0x2D,0x21,0x84,0x24,0x21,0xC9,0xE6,0x24,
0x00,0x00,0x00,0x90,0x0E,0x21,0x24,0x09,0x49,0x36,0x27,0x01,
0x00,0x00,0x68,0x6A,0xA5,0x79,0x08,0xB9,0x13,0x92,0x84,0x24,
0x00,0x00,0x00,0xC0,0x66,0x11,0x52,0x09,0x49,0x3E,0x9C,0x04,
0x00,0x00,0x00,0x89,0xE6,0x89,0x22,0x77,0x8A,0xA4,0x9A,0x2B,
0x01,0x00,0x00,0x00,0x9A,0x05,0x52,0x41,0xA2,0x39,0x09,0x00,
0x00,0x40,0x41,0xBD,0x2C,0x55,0xA4,0xAA,0x48,0xEA,0xE5,0xA4,
0x00,0x00,0x00,0x80,0x66,0x11,0x52,0xC1,0xFD,0x74,0x73,0x12,
0x00,0x00,0x00,0x2C,0xEF,0xE6,0x5A,0xB0,0x16,0xAC,0x05,0x6B,
0x01,0x00,0x00,0x00,0x9A,0x45,0x48,0x25,0x24,0x09,0x27,0x3B,
0x10,0x5C,0x1A,0x00,0x90,0x68,0x9E,0x08,0xB9,0x13,0x92,0x84,
0x24,0x00,0x00,0x00,0x50,0x50,0xA0,0x0A,0xAA,0xA0,0x0A,0x00,
0x00,0x00,0x0A,0x14,0xA8,0x82,0x2A,0xA8,0x82,0x2A,0xD8,0x05,
0x00,0x90,0x08,0x09,0x3C,0xE9,0x26,0x97,0x90,0x34,0x00,0x00,
0x00,0xAA,0xA0,0x0A,0xAA,0xA0,0x0A,0xAA,0x00,0x00,0x00,0x00,
0x1F,0x1E,0xBE,0xE4,0xFE,0x7D,0x49,0xBE,0x5F,0x92,0x2F,0x00,
0x00,0x00,0xD0,0x3C,0x84,0xDC,0x09,0x49,0x42,0x12,0x00,0x00,
0x00,0xA0,0x39,0x84,0x24,0x21,0x49,0x73,0x12,0x00,0x00,0x00,
0xA0,0xB9,0x08,0x49,0x42,0x92,0xE6,0x4A,0x90,0x40,0x02,0x00,
0x80,0xCD,0x22,0xA4,0x12,0x92,0x6C,0x4E,0x12,0x48,0x20,0x00,
0x00,0x34,0x0F,0x4D,0xEE,0x46,0x02,0x09,0x00,0x00,0x00,0xA0,
0x39,0x20,0xE9,0xC6,0x81,0x4B,0x03,0x00,0x00,0xA0,0x68,0xA6,
0xA0,0x0A,0xAA,0xA0,0x0A,0x00,0x00,0x00,0x10,0x42,0x48,0x12,
0x92,0x6C,0x4E,0x02,0x00,0x00,0x00,0x84,0xD0,0x54,0xD2,0x54,
0x35,0xD6,0x02,0x00,0x00,0x00,0x74,0x6B,0x1E,0xFD,0x74,0x3F,
0x3C,0xCF,0x53,0x54,0xDD,0x00,0x00,0x00,0x40,0xD1,0x34,0x27,
0x69,0x6A,0x29,0x3A,0x01,0x00,0x00,0x00,0x42,0xD3,0xA4,0x83,
0x93,0xC6,0x3A,0x50,0x05,0x09,0x00,0x00,0x36,0x17,0x0D,0x8D,
0x5A,0x36,0x57,0x01,0x00,0x00,

};

//-----------------------------------------------------------------
BYTE code FntVolume[] =
{
//----------Font libary infomation----------
//Name   : Comic Sans MS
//Size   : 3*2
//X      : 0
//Y      : 0
//Format : RTD VLC 1Bit
//Count  : 6

0x03,0x18,0x4C,0xF7,0x2E,0xB5,0x6D,0x9A,0x00,0x5D,0x00,0x00,
0x00,0x80,0x14,0xF6,0x7D,0x82,0xB5,0x92,0x6D,0xAD,0x04,0x10,
0xA8,0x0D,0xE7,0x21,0xB5,0xC3,0x7D,0x12,0x7A,0x25,0x75,0x91,
0x54,0x91,0x0C,0x02,0x00,0x03,0x0A,0x2E,0xED,0x9A,0xD2,0x5D,
0xC5,0x74,0x95,0x9E,0xA1,0x7B,0xA6,0xBB,0xAD,0x95,0xD8,0x6B,
0x25,0x9C,0x5B,0xB6,0x0A,0x00,0x00,0x00,0x80,0x18,0x92,0x2A,
0x92,0xAB,0x48,0x58,0x9D,0x70,0xEE,0x6C,0x2A,0xCF,0x81,0x5D,
0x10,0xA0,0x67,0xBA,0xBB,0x67,0x68,0x3D,0x55,0x74,0x57,0x29,
0x3D,0x97,0x0B,0x0A,0x0C,0x00,0x00,
};

//-----------------------------------------------------------------
BYTE code FntMute[] =
{
//----------Font libary infomation----------
//Name   : Comic Sans MS
//Size   : 3*2
//X      : 0
//Y      : 0
//Format : RTD VLC 1Bit
//Count  : 6

0x0C,0x36,0x18,0xFE,0x74,0xAB,0x5D,0x29,0x00,0x5E,0x00,0x00,
0x00,0x6A,0xE0,0x5C,0xD8,0x2B,0xDB,0x14,0xD9,0xBB,0x48,0x0A,
0x48,0x70,0xA7,0x53,0x93,0x54,0x9F,0x2B,0x99,0x5A,0x49,0x0C,
0x09,0x24,0x90,0x40,0x00,0x05,0xBA,0x20,0x8D,0x59,0x59,0x94,
0x95,0x35,0x4D,0xA7,0x42,0x75,0x2F,0xA6,0x52,0x24,0xB5,0xD9,
0xA9,0xC9,0xB2,0xB7,0xEB,0xC0,0x14,0x00,0x00,0x00,0x02,0x09,
0x24,0x90,0x0C,0x92,0x9A,0xAC,0xA4,0xEB,0x3A,0x49,0x7A,0x2A,
0xB7,0x10,0x20,0xD4,0xAC,0xA6,0x2B,0x45,0xBA,0x67,0x59,0x29,
0x59,0xD6,0xE8,0x40,0x35,0x28,0x00,0x00,
};
//-----------------------------------------------------------------


#endif			//#if(_OSD_TYPE == _OSD001)