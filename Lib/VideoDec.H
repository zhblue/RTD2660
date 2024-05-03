////////////////////////////////////////////////////////////////////////////
//         Copyright of Vector Co.,Ltd.                                   //
//                                                                        //
//                                                                        //
//                       Video Decoder function                           //
//   Ver: 1.10                                                            //
//   Create file time: 2007.7.10                                          //
//   End modify time:  2008.7.1                                           //
//   For RTD2660/2662                                                     //
////////////////////////////////////////////////////////////////////////////


// Definitions for Vedio Decoder input channel
#define _V0_INPUT                  0x01
#define _V1_INPUT                  0x02
#define _V2_INPUT                  0x03
#define _V3_INPUT                  0x04

// If you select SV port, we only support
// V0 with V1 or V1 with V2 or V2 with V3.

//                                 |    Y input     |  C input   |
#define _AV_CHANNEL                (_V2_INPUT << 4)
#define _SV_CHANNEL                (_V1_INPUT << 4) //|  _V0_INPUT
#define _TV_CHANNEL                (_V3_INPUT << 4)


/*
 _______________________________________________________________________________________________________________________
|                                                                                                                       |
|                            Function gmi_CVideoCurrentColor() return data explain                                       |
|_______________________________________________________________________________________________________________________|
|\          |             |             |             |          |          |          |          |          |          |
|  \ Return |             |             |             |          |          |          |          |          |          | 
|    \ data |    0x00     |    0x01     |    0x02     |   0x03   |   0x04   |   0x05   |  0x06    |  0x07    |  0x08    |
|VDC   \    |             |             |             |          |          |          |          |          |          |
|  CHIP  \  | (bMode:0/1) | (bMode:0/1) | (bMode:0/1) |(bMode:1) |(bMode:1) |(bMode:1) |(bMode:1) |(bMode:1) |(bMode:1) |
|__________\|_____________|_____________|_____________|__________|__________|__________|__________|__________|__________| 
|           |             |             |(bMode:0 PAL)|          |          |          |          |          |          |
| RTD2660   |  Reserved   |    NTSC     |   NTSC4.43  |   PAL-M  |  PAL 60  |  PAL N   |   PAL I  | NTSC 50  |   SECAM  |
|___________|_____________|_____________|_____________|__________|__________|__________|__________|__________|__________|
|           |             |             |             |          |          |          |          |          |          |
|           |             |             |             |          |          |          |          |          |          |
|___________|_____________|_____________|_____________|__________|__________|__________|__________|__________|__________|
*/

extern void gmi_CI2CWriteVDCByte(const unsigned char ucAddress, const unsigned char ucWriteValue);
extern unsigned char gmi_CI2CReadVDCByte(const unsigned char ucAddress);
extern unsigned char gmi_CVideoCurrentColor(bit bMode);
extern void gmi_CInitialVDC(void);
extern void gmi_CVDCOutputDisable(void);
extern bit gmi_CModeLocked(void);
extern void gmi_CSelectInputChannel(unsigned char ucYCrChannel, unsigned char ucAVOut);
extern void gmi_CAdjustVDCBrightness(const unsigned char ucVDCBrightness);
extern void gmi_CAdjustVDCContrast(const unsigned char ucVDCContrast);
extern void gmi_CAdjustVDCSaturation(const unsigned char ucVDCSaturation);
extern void gmi_CAdjustVDCHue(const unsigned char ucVDCHue);
extern void gmi_CSetVDCFreeRunMode(const unsigned char ucMode);




