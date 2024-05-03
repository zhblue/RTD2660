//----------------------------------------------------------------------------------------------------
// Copyright of Realtek SemiConductor Corp.
// Model   : RTD2553V
// Version : V0.00c (08.31.2005)
//
//----------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------
// ID Code      : Main.c No.0002
// Update Note  :
//
//----------------------------------------------------------------------------------------------------
/*
设置TTL显示屏参数：
		PNL_TLL.h
				->8，选择4-6行的屏幕大小（其他屏幕大小可以设定，需要写屏幕参数）
				->114，修改800*480屏的位长（18位会花屏）
				->123，修改800*480屏的颜色反转（BGR->RGB）
				->150-153，设置CGA/VGA过滤器
CGA信号识别：
		Mode.c
				->486，注释掉498和499行代码（原因：cga点数超过公差）
		ModeTable.h
				->659，修改CGA信号输入初始位置参数
				->97，调整其公差值
伽马设置：
		MainDef.h
				->87，伽马设置不正常会花屏，色彩会不正常
增添VGA支持：
		Pcb_RTD358D_LCDTV_DEMO_PCB1.h
				->44,添加VGA支持
		Main.c
				->109,设置VGA来源（必须要手动设置来源）
				
----------------------------------------------------2022/11/12-----------------------------
设置背光：
		Pcb_RTD358D_LCDTV_DEMO_PCB1.h
				->239，改端口为_MCU_PORT81，需要查datasheet（不是芯片引脚）
		Power.h
				->178,设置背光反相(1)
logo显示设置：
		Pcb_RTD358D_LCDTV_DEMO_PCB1.h
				->445,设置为_DISABLE，不显示logo
设置语言：
		EepromDefaultCustomer.h
				->257,0x00(En),0x01(ch)
				
**优化自动调整和CGA信号修改：
		Auto.c
				->34，user setting部分
				(系统默认的参数不适用，需要用户自己更改设定，具体参数根据显示效果来设置，
				若显示小于屏幕大小，需要增大输入源的HTotal参数，修改CAdjustAdcClock函数的
				usClock参数；如果要添加指定的输入分辨率信号，
				在对应处添加else if语句，51行代码处)
				
裁剪eeprom：
		eeprom.c
				->31-61,删除所有与eeprom有关的语句，只保留加载系统预设信息的语句
				（其他有关eeprom操作的函数有被其他文件所应用，删减很麻烦，eeprom有关的引脚
				还是被使用，但是硬件上不加eeprom同样可以正常运行）
优化TTL显示：
		PNL_TLL.h	
				->156，增加ttl延时参数，确保显示稳定
调试：
		Main.c
				->204,取消了按键程序，在程序中加入osd主界面可查看输入信号分辨率，方便调试
		（在优化自动调整程序时有用）	

----------------------------------------------------2022/12/23-----------------------------
**优化自动调整：
		Auto.c
				->56，增加对640 x 480 x 60 Hz的支持
				->48,取消自动检测起始位置程序
				->51-53,手动对齐屏幕，增加对屏幕自动化程序的稳定支持
		Sync.c
				->169-187，取消稳定性检查
				->461-462，加快程序运行速度
		OsdProc003.c
				->703-726，删除自动调整程序提示
----------------------------------------------------自动调整程序修改-----------------------------
第一种：
		OsdProc003.c
		  对OSD事件相应函数进行修改COsdEventMsgProc，第384行修改自动配置内容_DO_AUTO_CONFIG增添或删除自动调整函数CShowAutoAdjust
第二种
		Auto.c	
		  第43行优化cga信号自动调整的选项中将自动检测起始位置的函数CAutoDoAutoPosition注释掉，添加我们自己的位置设定函数，但是需要根据可能出现的规律设定相关值
			但是
*/
#define __MAIN__

#include "Core\Header\Include.h"


/**
 * CMainUserInitial
 * Setting some flags for user when initial
 * @param <none>
 * @return {none}
 *
 */
extern void fuck_you_made();

void CMainUserInitial(void)
{
	// User can make some initial settings at firmware startup
	CLR_PANELPOWERSTATUS();
	CLR_LIGHTPOWERSTATUS();
	CLR_FRAMESYNCSTATUS();
	CLR_POWERSWITCH();
	CLR_FIRST_ADCCLOCK();
    CLR_OSD_READYFORDISPLAY();
#if(_HDMI_SUPPORT == _ON)
       CLR_HDMIINPUT();
#endif
	SET_FIRST_LOADFONT();
#if defined(CONFIG_VBI_ENABLE)
	CLR_OSDVBI_INITIAL();
#endif
	//SET_SOURCE_AUTOCHANGE();
	CLR_SOURCE_AUTOCHANGE();
	SET_PRE_VGA_CONNECT(bVGACONNECT);
#if(_TMDS_SUPPORT == _ON)
#if (_HDMI_SUPPORT == _ON)
	SET_PRE_HDMI_CONNECT(bHDMICONNECT);
#else
	SET_PRE_DVI_CONNECT(bDVICONNECT);
#endif
#endif
	CLR_USE_TRANSITION_RESULT();
    CheckLanguage();
}

/**
 * CMainSystemInitial
 * Initial the system for once when power up
 * @param <none>
 * @return {none}
 *
 */
void CMainSystemInitial(void)
{          
#if(_VIDEO_TV_SUPPORT)
    ucAddrIfPllDM = _ADDR_IfPllDM;
#endif

    // Initial MCU
	CMcuInitial();//MCU init
//    CMuteOn();//声音控制
#if(_HDCP_SUPPORT == _ON && _HDMI_HOT_PLUG_OPTION)
   	bHot_Plug = _HOT_PLUG_LOW;
#endif

    // Initial timer events
	CTimerInitialTimerEvent();//定时器初始化

    CPowerLightPowerOff();//背光设置
    CPowerPanelPowerOff();//LCD 电源设定。
// 	CScalerPageSelect(_PAGE0);//eric 20070529
//	CScalerSetByte(_P0_POWER_ON_RESET_F3,_BIT7|_BIT6);		

    // Check eeprom and load eeprom settings
	CEepromStartupCheck();//eeprom数据载入
    //_SET_INPUT_SOURCE(_SOURCE_HDMI);//设定信号来源
//    _SET_INPUT_SOURCE(_SOURCE_VIDEO_AV);
    _SET_INPUT_SOURCE(_SOURCE_VGA);
    SET_POWERSTATUS();

    // Initial scaler settings
	CScalerInitial();

    // Initial key scan status
	//CKeyInitial();

    // Initial user settings
	CMainUserInitial();


#if(_VIDEO_SUPPORT == _ON)
    // Initial video settings
   	CVideoInitial();
	CVideoOutputDisable();
#else
    CInitInputSource();
#endif  // End of #if(_VIDEO_SUPPORT == _ON)


	CDDCCIInitial();
#if(_RS232_EN)
	CUartInit();
#endif
	
    //CIrdaInitial();//红外

    	//bHot_Plug = _HOT_PLUG_LOW;//GMI SUN ADD ,201111221504

}

/**
 * main
 * main process
 * first system initial, then main loop
 * @param <none>
 * @return {none}
 *
*/
void main(void)
{
    CMainSystemInitial();
//	CScalerSetByte(_P7_AUTO_SHP_CTRL_B7,0x00);
//	fuck_you_made();
//	CScalerPageSelect(_PAGE7);
//	CScalerSetByte(_P7_AUTO_SHP_CTRL_B7,0xff);
//	MSharpnessReturnUpMenu();
//	bLED1 = _LED_OFF;
//	bLED2 = _LED_OFF;
	CTimerDelayXms(1000);
	do
	{
		CMiscIspDebugProc();                                         
		CTimerHandler();
    //CKeyHandler();
		CModeHandler();
		COsdHandler(); 
		//MMenuNoneEnterSubMenu();//debug
	}

    while(_TRUE);
	
}

