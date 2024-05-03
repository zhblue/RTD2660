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
����TTL��ʾ��������
		PNL_TLL.h
				->8��ѡ��4-6�е���Ļ��С��������Ļ��С�����趨����Ҫд��Ļ������
				->114���޸�800*480����λ����18λ�Ứ����
				->123���޸�800*480������ɫ��ת��BGR->RGB��
				->150-153������CGA/VGA������
CGA�ź�ʶ��
		Mode.c
				->486��ע�͵�498��499�д��루ԭ��cga�����������
		ModeTable.h
				->659���޸�CGA�ź������ʼλ�ò���
				->97�������乫��ֵ
٤�����ã�
		MainDef.h
				->87��٤�����ò������Ứ����ɫ�ʻ᲻����
����VGA֧�֣�
		Pcb_RTD358D_LCDTV_DEMO_PCB1.h
				->44,���VGA֧��
		Main.c
				->109,����VGA��Դ������Ҫ�ֶ�������Դ��
				
----------------------------------------------------2022/11/12-----------------------------
���ñ��⣺
		Pcb_RTD358D_LCDTV_DEMO_PCB1.h
				->239���Ķ˿�Ϊ_MCU_PORT81����Ҫ��datasheet������оƬ���ţ�
		Power.h
				->178,���ñ��ⷴ��(1)
logo��ʾ���ã�
		Pcb_RTD358D_LCDTV_DEMO_PCB1.h
				->445,����Ϊ_DISABLE������ʾlogo
�������ԣ�
		EepromDefaultCustomer.h
				->257,0x00(En),0x01(ch)
				
**�Ż��Զ�������CGA�ź��޸ģ�
		Auto.c
				->34��user setting����
				(ϵͳĬ�ϵĲ��������ã���Ҫ�û��Լ������趨���������������ʾЧ�������ã�
				����ʾС����Ļ��С����Ҫ��������Դ��HTotal�������޸�CAdjustAdcClock������
				usClock���������Ҫ���ָ��������ֱ����źţ�
				�ڶ�Ӧ�����else if��䣬51�д��봦)
				
�ü�eeprom��
		eeprom.c
				->31-61,ɾ��������eeprom�йص���䣬ֻ��������ϵͳԤ����Ϣ�����
				�������й�eeprom�����ĺ����б������ļ���Ӧ�ã�ɾ�����鷳��eeprom�йص�����
				���Ǳ�ʹ�ã�����Ӳ���ϲ���eepromͬ�������������У�
�Ż�TTL��ʾ��
		PNL_TLL.h	
				->156������ttl��ʱ������ȷ����ʾ�ȶ�
���ԣ�
		Main.c
				->204,ȡ���˰��������ڳ����м���osd������ɲ鿴�����źŷֱ��ʣ��������
		�����Ż��Զ���������ʱ���ã�	

----------------------------------------------------2022/12/23-----------------------------
**�Ż��Զ�������
		Auto.c
				->56�����Ӷ�640 x 480 x 60 Hz��֧��
				->48,ȡ���Զ������ʼλ�ó���
				->51-53,�ֶ�������Ļ�����Ӷ���Ļ�Զ���������ȶ�֧��
		Sync.c
				->169-187��ȡ���ȶ��Լ��
				->461-462���ӿ���������ٶ�
		OsdProc003.c
				->703-726��ɾ���Զ�����������ʾ
----------------------------------------------------�Զ����������޸�-----------------------------
��һ�֣�
		OsdProc003.c
		  ��OSD�¼���Ӧ���������޸�COsdEventMsgProc����384���޸��Զ���������_DO_AUTO_CONFIG�����ɾ���Զ���������CShowAutoAdjust
�ڶ���
		Auto.c	
		  ��43���Ż�cga�ź��Զ�������ѡ���н��Զ������ʼλ�õĺ���CAutoDoAutoPositionע�͵�����������Լ���λ���趨������������Ҫ���ݿ��ܳ��ֵĹ����趨���ֵ
			����
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
//    CMuteOn();//��������
#if(_HDCP_SUPPORT == _ON && _HDMI_HOT_PLUG_OPTION)
   	bHot_Plug = _HOT_PLUG_LOW;
#endif

    // Initial timer events
	CTimerInitialTimerEvent();//��ʱ����ʼ��

    CPowerLightPowerOff();//��������
    CPowerPanelPowerOff();//LCD ��Դ�趨��
// 	CScalerPageSelect(_PAGE0);//eric 20070529
//	CScalerSetByte(_P0_POWER_ON_RESET_F3,_BIT7|_BIT6);		

    // Check eeprom and load eeprom settings
	CEepromStartupCheck();//eeprom��������
    //_SET_INPUT_SOURCE(_SOURCE_HDMI);//�趨�ź���Դ
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
	
    //CIrdaInitial();//����

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

