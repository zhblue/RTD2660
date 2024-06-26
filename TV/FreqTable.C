#include "Core\Header\Include.h"

#if(_VIDEO_TV_SUPPORT)

#if(_NTSC_SEARCH_TABLE)
#define GET_TUNER_N(freq)      (((freq*1000)+_PIF_FREQ)*_TUNER_BP/1000)
//-------------------------------------------------------------------------
WORD code tNTSC_AIR[_AIR_MAX_CHANNEL] =
{
    GET_TUNER_N(55.25),   // 0
    GET_TUNER_N(55.25),   // 1
    GET_TUNER_N(55.25),   // 2    // Channel start
    GET_TUNER_N(61.25),   // 3
    GET_TUNER_N(67.25),   // 4
    GET_TUNER_N(77.25),   // 5
    GET_TUNER_N(83.25),   // 6
    GET_TUNER_N(175.25),  // 7
    GET_TUNER_N(181.25),  // 8
    GET_TUNER_N(187.25),  // 9
    GET_TUNER_N(193.25),  // 10
    GET_TUNER_N(199.25),  // 11
    GET_TUNER_N(205.25),  // 12
    GET_TUNER_N(211.25),  // 13
    GET_TUNER_N(471.25),  // 14
    GET_TUNER_N(477.25),  // 15
    GET_TUNER_N(483.25),  // 16
    GET_TUNER_N(489.25),  // 17
    GET_TUNER_N(495.25),  // 18
    GET_TUNER_N(501.25),  // 19
    GET_TUNER_N(507.25),  // 20
    GET_TUNER_N(513.25),  // 21
    GET_TUNER_N(519.25),  // 22
    GET_TUNER_N(525.25),  // 23
    GET_TUNER_N(531.25),  // 24
    GET_TUNER_N(537.25),  // 25
    GET_TUNER_N(543.25),  // 26
    GET_TUNER_N(549.25),  // 27
    GET_TUNER_N(555.25),  // 28
    GET_TUNER_N(561.25),  // 29
    GET_TUNER_N(567.25),  // 30
    GET_TUNER_N(573.25),  // 31
    GET_TUNER_N(579.25),  // 32
    GET_TUNER_N(585.25),  // 33
    GET_TUNER_N(591.25),  // 34
    GET_TUNER_N(597.25),  // 35
    GET_TUNER_N(603.25),  // 36
    GET_TUNER_N(609.25),  // 37
    GET_TUNER_N(615.25),  // 38
    GET_TUNER_N(621.25),  // 39
    GET_TUNER_N(627.25),  // 40
    GET_TUNER_N(633.25),  // 41
    GET_TUNER_N(639.25),  // 42
    GET_TUNER_N(645.25),  // 43
    GET_TUNER_N(651.25),  // 44
    GET_TUNER_N(657.25),  // 45
    GET_TUNER_N(663.25),  // 46
    GET_TUNER_N(669.25),  // 47
    GET_TUNER_N(675.25),  // 48
    GET_TUNER_N(681.25),  // 49
    GET_TUNER_N(687.25),  // 50
    GET_TUNER_N(693.25),  // 51
    GET_TUNER_N(699.25),  // 52
    GET_TUNER_N(705.25),  // 53
    GET_TUNER_N(711.25),  // 54
    GET_TUNER_N(717.25),  // 55
    GET_TUNER_N(723.25),  // 56
    GET_TUNER_N(729.25),  // 57
    GET_TUNER_N(735.25),  // 58
    GET_TUNER_N(741.25),  // 59
    GET_TUNER_N(747.25),  // 60
    GET_TUNER_N(753.25),  // 61
    GET_TUNER_N(759.25),  // 62
    GET_TUNER_N(765.25),  // 63
    GET_TUNER_N(771.25),  // 64
    GET_TUNER_N(777.25),  // 65
    GET_TUNER_N(783.25),  // 66
    GET_TUNER_N(789.25),  // 67
    GET_TUNER_N(795.25),  // 68
    GET_TUNER_N(801.25),  // 69
};                
                  
                  
//-------------------------------------------------------------------------
WORD code tNTSC_CATV[_CATV_MAX_CHANNEL] =
{                 
     GET_TUNER_N(55.25),   // 0 
     GET_TUNER_N(73.25),   // 1  // Channel start
     GET_TUNER_N(55.25),   // 2
     GET_TUNER_N(61.25),   // 3
     GET_TUNER_N(67.25),   // 4
     GET_TUNER_N(77.25),   // 5
     GET_TUNER_N(83.25),   // 6
     GET_TUNER_N(175.25),  // 7 
     GET_TUNER_N(181.25),  // 8 
     GET_TUNER_N(187.25),  // 9 
     GET_TUNER_N(193.25),  // 10
     GET_TUNER_N(199.25),  // 11
     GET_TUNER_N(205.25),  // 12
     GET_TUNER_N(211.25),  // 13
     GET_TUNER_N(121.25),  // 14 
     GET_TUNER_N(127.25),  // 15 
     GET_TUNER_N(133.25),  // 16
     GET_TUNER_N(139.25),  // 17
     GET_TUNER_N(145.25),  // 18
     GET_TUNER_N(151.25),  // 19
     GET_TUNER_N(157.25),  // 20
     GET_TUNER_N(163.25),  // 21
     GET_TUNER_N(169.25),  // 22
     GET_TUNER_N(217.25),  // 23
     GET_TUNER_N(223.25),  // 24
     GET_TUNER_N(229.25),  // 25
     GET_TUNER_N(235.25),  // 26
     GET_TUNER_N(241.25),  // 27
     GET_TUNER_N(247.25),  // 28
     GET_TUNER_N(253.25),  // 29
     GET_TUNER_N(259.25),  // 30
     GET_TUNER_N(265.25),  // 31
     GET_TUNER_N(271.25),  // 32
     GET_TUNER_N(277.25),  // 33
     GET_TUNER_N(283.25),  // 34
     GET_TUNER_N(289.25),  // 35
     GET_TUNER_N(295.25),  // 36
     GET_TUNER_N(301.25),  // 37
     GET_TUNER_N(307.25),  // 38
     GET_TUNER_N(313.25),  // 39
     GET_TUNER_N(319.25),  // 40
     GET_TUNER_N(325.25),  // 41
     GET_TUNER_N(331.25),  // 42
     GET_TUNER_N(337.25),  // 43
     GET_TUNER_N(343.25),  // 44
     GET_TUNER_N(349.25),  // 45
     GET_TUNER_N(355.25),  // 46
     GET_TUNER_N(361.25),  // 47
     GET_TUNER_N(367.25),  // 48
     GET_TUNER_N(373.25),  // 49
     GET_TUNER_N(379.25),  // 50
     GET_TUNER_N(385.25),  // 51
     GET_TUNER_N(391.25),  // 52
     GET_TUNER_N(397.25),  // 53
     GET_TUNER_N(403.25),  // 54
     GET_TUNER_N(409.25),  // 55
     GET_TUNER_N(415.25),  // 56
     GET_TUNER_N(421.25),  // 57
     GET_TUNER_N(427.25),  // 58
     GET_TUNER_N(433.25),  // 59
     GET_TUNER_N(439.25),  // 60
     GET_TUNER_N(445.25),  // 61
     GET_TUNER_N(451.25),  // 62
     GET_TUNER_N(457.25),  // 63
     GET_TUNER_N(463.25),  // 64
     GET_TUNER_N(469.25),  // 65
     GET_TUNER_N(475.25),  // 66
     GET_TUNER_N(481.25),  // 67
     GET_TUNER_N(487.25),  // 68
     GET_TUNER_N(493.25),  // 69
     GET_TUNER_N(499.25),  // 70
     GET_TUNER_N(505.25),  // 71
     GET_TUNER_N(511.25),  // 72
     GET_TUNER_N(517.25),  // 73
     GET_TUNER_N(523.25),  // 74
     GET_TUNER_N(529.25),  // 75
     GET_TUNER_N(535.25),  // 76
     GET_TUNER_N(541.25),  // 77
     GET_TUNER_N(547.25),  // 78
     GET_TUNER_N(553.25),  // 79
     GET_TUNER_N(559.25),  // 80
     GET_TUNER_N(565.25),  // 81
     GET_TUNER_N(571.25),  // 82
     GET_TUNER_N(577.25),  // 83
     GET_TUNER_N(583.25),  // 84
     GET_TUNER_N(589.25),  // 85
     GET_TUNER_N(595.25),  // 86
     GET_TUNER_N(601.25),  // 87
     GET_TUNER_N(607.25),  // 88
     GET_TUNER_N(613.25),  // 89
     GET_TUNER_N(619.25),  // 90
     GET_TUNER_N(625.25),  // 91
     GET_TUNER_N(631.25),  // 92
     GET_TUNER_N(637.25),  // 93
     GET_TUNER_N(643.25),  // 94
     GET_TUNER_N(91.25),   // 95
     GET_TUNER_N(97.25),   // 96
     GET_TUNER_N(103.25),  // 97
     GET_TUNER_N(109.25),  // 98
     GET_TUNER_N(115.25),  // 99
     GET_TUNER_N(649.25),  // 100
     GET_TUNER_N(655.25),  // 101
     GET_TUNER_N(661.25),  // 102
     GET_TUNER_N(667.25),  // 103
     GET_TUNER_N(673.25),  // 104
     GET_TUNER_N(679.25),  // 105
     GET_TUNER_N(685.25),  // 106
     GET_TUNER_N(691.25),  // 107
     GET_TUNER_N(697.25),  // 108
     GET_TUNER_N(703.25),  // 109
     GET_TUNER_N(709.25),  // 110
     GET_TUNER_N(715.25),  // 111
     GET_TUNER_N(721.25),  // 112
     GET_TUNER_N(727.25),  // 113
     GET_TUNER_N(733.25),  // 114
     GET_TUNER_N(739.25),  // 115
     GET_TUNER_N(745.25),  // 116
     GET_TUNER_N(751.25),  // 117
     GET_TUNER_N(757.25),  // 118
     GET_TUNER_N(763.25),  // 119
     GET_TUNER_N(769.25),  // 120
     GET_TUNER_N(775.25),  // 121
     GET_TUNER_N(781.25),  // 122
     GET_TUNER_N(787.25),  // 123
     GET_TUNER_N(793.25),  // 124
     GET_TUNER_N(799.25),  // 125
};                 
#endif  // end #if(_NTSC_SEARCH_TABLE)
                   
#endif  // end #if(_VIDEO_TV_SUPPORT)
                   
                   
                   
     
     
     
     
     
     
     