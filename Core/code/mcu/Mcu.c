//----------------------------------------------------------------------------------------------------
// ID Code      : Mcu.c No.0002
// Update Note  :
//
//----------------------------------------------------------------------------------------------------

#define __MCU__

#include  "Core\Header\Include.h"

#if(_MCU_TYPE == _REALTEK_RTD3580D_EMCU)
/**
* CMcuInitial
* Initialize the MCU _REALTEK_RTD3580D_EMCU
* @param <none>
* @return {none}
*
*/

void CMcuInitial(void)
{
    IE      = 0x00;                         // Disable all interrupts
    TMOD    = 0x11;                         // Program Timer0 & Timer1 to Mode#1
    TR0     = 0;                            // Stop Timer0
    TF0     = 0;                            // Clear Timer0 Overflow Bit
    TL0     = _TIMER0_COUNT_LBYTE;          // Load Timer0 low-byte   (for 1ms)
    TH0     = _TIMER0_COUNT_HBYTE;          // Load Timer0 high-byte  (for 1ms)
    TR1     = 0;                            // Stop Timer1
    TF1     = 0;                            // Clear Timer1 Overflow Bit
    IE      = 0x8a;                         // Enable interrupts of Timer0

    MCU_WATCHDOG_TIMER_FFEA 	= 0x00; 				//dis wdt, wdt default enable看门狗使能

    MCU_WATCHDOG_TIMER_FFEA 	|= 0x40;				//clr wdt.//eric 20070627
    MCU_CTRL_FFED          		= 0x80; 				//FlashDIV=1使能IO端口（）MCU控制	

 
    MCU_PIN_SHARE_CTRL04_FF9A 	|= 0x05; 				//P6.6/P6.7 opendrain output for I2C master 设置为输出
	MCU_PORT_READ_CTRL_FFC0 	= 0xfd; 				//read All GPIO value from bus,except p3 
	
	MCU_BANK_SWITCH_CTRL_FFFC 	= 0x0B; 				// enable global XFR & enable bank switching func(Pbank)
	MCU_BANK_START_FFFD       	= 0x01;
	MCU_BANK_SEL_FFFE         	= 0x00;

	MCU_CLOCK_CTRL_FFEE			|= 0x40;		    	//keep mcu peripheral running while mcu stopped by spi flash access
	
    #if (_MCU_PWM_SUPPORT)
    {
        MCU_PWM_CK_SEL = MCU_PWM_CK_SEL | _BIT5;  //Huangbo add for PWM5 Frequence select PLL Output 20090109 pwm时钟来源
    	MCU_PWML_FF46   		|= 0x80;				//PWM_W_DB_EN  pwm 使能	
    	MCU_PWM_EN_FF48 		= _MCU_PWM_SUPPORT;	    //PWM output enable	
    }
    #endif

    LR=0;
    UD=1;
//    CWriteDisable();
    
 
}

#endif


