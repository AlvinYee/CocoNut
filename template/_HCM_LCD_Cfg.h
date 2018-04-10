/*
 * _HCM_LDC_Cfg.h
 *
 *  Created on: 20th,Feb,2018
 *      Author: yech
 */
/*[[[cog
print('    [info]: handling template _HCM_LDC_Cfg.h starts')
import sys
sys.path.append('../')
sys.path.append('../../')
import cog
from MqXmlParser import MqXmlParser
xmlFile = r'C:\workspace\CocoNut\description\Coco.xml'
mqxml = MqXmlParser(xmlFile)
]]]*/
//[[[end]]]
#ifndef HCM_LDC_CFG_H_
#define HCM_LDC_CFG_H_


#include "HDL_RMH_Cfg.h"

/* configuration on application level - with lock conditions */
/* CAUTION: to simplify design, application level cfg is same as msg level cfg */
#define LCD_CND_WHEEL_SPEED_1_CFG                       I2CCAN_RX_MSG_WHEEL_SPEED_1_CFG
#define HCM_LCD_COND_QUALIFICATION_TIME		            LCD_CND_WHEEL_SPEED_1_QUALIFICATION_TIME_CFG	/* compatibility with GEN3 platform project */
#define LCD_CND_WHEEL_SPEED_1_QUALIFICATION_CFG    		\
/*[[[cog
 cog.out(mqxml.get_msg_element('wheelSpeed_1', 'qualificationCheck'))
 ]]]*/
 //[[[end]]]
#define LCD_CND_WHEEL_SPEED_1_QUALIFICATION_TIME_CFG    		\
/*[[[cog
 cog.out(mqxml.get_msg_element('wheelSpeed_1', 'qualificationTime'))
 ]]]*/
 /* qualification time of the lock conditions: 2*410=820ms 410u */
 //[[[end]]]
#define LCD_CND_WHEEL_SPEED_2_CFG                       I2CCAN_RX_MSG_WHEEL_SPEED_2_CFG
#define LCD_CND_WHEEL_SPEED_2_QUALIFICATION_CFG    		\
/*[[[cog
 cog.out(mqxml.get_msg_element('wheelSpeed2', 'qualificationCheck'))
 ]]]*/
 //[[[end]]]
#define LCD_CND_WHEEL_SPEED_2_QUALIFICATION_TIME_CFG    		\
/*[[[cog
 cog.out(mqxml.get_msg_element('wheelSpeed2', 'qualificationTime'))
 ]]]*/
 /* qualification time of the lock conditions: 2*410=820ms 410u */
 //[[[end]]]
#define LCD_CND_VEHICLE_SPEED_CFG 	                    I2CCAN_RX_MSG_VEHICLE_SPEED_CFG
#define LCD_CND_VEHICLE_SPEED_QUALIFICATION_CFG    		\
/*[[[cog
 cog.out(mqxml.get_msg_element('vehicleSpeed', 'qualificationCheck'))
 ]]]*/
 //[[[end]]]
#define LCD_CND_VEHICLE_SPEED_QUALIFICATION_TIME_CFG    		\
/*[[[cog
 cog.out(mqxml.get_msg_element('vehicleSpeed', 'qualificationTime'))
 ]]]*/
 /* qualification time of the lock conditions: 2*410=820ms 410u */
 //[[[end]]]
#define LCD_CND_POWER_MODE_CFG					        I2CCAN_RX_MSG_POWER_MODE_CFG
#define LCD_CND_POWER_MODE_QUALIFICATION_CFG    		\
/*[[[cog
 cog.out(mqxml.get_msg_element('powerMode', 'qualificationCheck'))
 ]]]*/
 //[[[end]]]
#define LCD_CND_POWER_MODE_QUALIFICATION_TIME_CFG    		\
/*[[[cog
 cog.out(mqxml.get_msg_element('powerMode', 'qualificationTime'))
 ]]]*/
 /* qualification time of the lock conditions: 2*410=820ms 410u */
 //[[[end]]]


/* signal init/default value configuration*/
#if I2CCAN_RX_SIG_WHEEL_SPEED_1_CRC_CFG > FALSE
#define HCM_LCD_WHEEL_SPEED_1_CRC_INIT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_1','WHEEL_SPEED_1_CRC', 'initValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#define HCM_LCD_WHEEL_SPEED_1_CRC_DEFAULT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_1','WHEEL_SPEED_1_CRC', 'defaultValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#endif
#if I2CCAN_RX_SIG_WHEEL_SPEED_1_ALIVE_CFG > FALSE
#define HCM_LCD_WHEEL_SPEED_1_ALIVE_INIT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_1','WHEEL_SPEED_1_ALIVE', 'initValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#define HCM_LCD_WHEEL_SPEED_1_ALIVE_DEFAULT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_1','WHEEL_SPEED_1_ALIVE', 'defaultValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#endif
#if I2CCAN_RX_SIG_WHEEL_SPEED_1_VALIDITY_FR_CFG > FALSE
#define HCM_LCD_WHEEL_SPEED_1_VALIDITY_FR_INIT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_1','WHEEL_SPEED_1_VALIDITY_FR', 'initValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#define HCM_LCD_WHEEL_SPEED_1_VALIDITY_FR_DEFAULT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_1','WHEEL_SPEED_1_VALIDITY_FR', 'defaultValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#if I2CCAN_RX_SIG_WHEEL_SPEED_1_VALIDITY_FL_CFG > FALSE
#define HCM_LCD_WHEEL_SPEED_1_VALIDITY_FL_INIT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_1','WHEEL_SPEED_1_VALIDITY_FL', 'initValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#define HCM_LCD_WHEEL_SPEED_1_VALIDITY_FL_DEFAULT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_1','WHEEL_SPEED_1_VALIDITY_FL', 'defaultValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#endif
#if I2CCAN_RX_SIG_WHEEL_SPEED_1_VALIDITY_RR_CFG > FALSE
#define HCM_LCD_WHEEL_SPEED_1_VALIDITY_RR_INIT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_1','WHEEL_SPEED_1_VALIDITY_RR', 'initValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#define HCM_LCD_WHEEL_SPEED_1_VALIDITY_RR_DEFAULT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_1','WHEEL_SPEED_1_VALIDITY_RR', 'defaultValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#endif
#if I2CCAN_RX_SIG_WHEEL_SPEED_1_VALIDITY_RL_CFG > FALSE
#define HCM_LCD_WHEEL_SPEED_1_VALIDITY_RL_INIT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_1','WHEEL_SPEED_1_VALIDITY_RL', 'initValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#define HCM_LCD_WHEEL_SPEED_1_VALIDITY_RL_DEFAULT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_1','WHEEL_SPEED_1_VALIDITY_RL', 'defaultValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#if I2CCAN_RX_SIG_WHEEL_SPEED_1_FR_CFG > FALSE
#define HCM_LCD_WHEEL_SPEED_1_FR_INIT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_1','WHEEL_SPEED_1_FR', 'initValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#define HCM_LCD_WHEEL_SPEED_1_FR_DEFAULT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_1','WHEEL_SPEED_1_FR', 'defaultValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#endif
#if I2CCAN_RX_SIG_WHEEL_SPEED_1_FL_CFG > FALSE
#define HCM_LCD_WHEEL_SPEED_1_FL_INIT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_1','WHEEL_SPEED_1_FL', 'initValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#define HCM_LCD_WHEEL_SPEED_1_FL_DEFAULT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_1','WHEEL_SPEED_1_FL', 'defaultValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#endif
#if I2CCAN_RX_SIG_WHEEL_SPEED_1_RR_CFG > FALSE
#define HCM_LCD_WHEEL_SPEED_1_RR_INIT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_1','WHEEL_SPEED_1_RR', 'initValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#define HCM_LCD_WHEEL_SPEED_1_RR_DEFAULT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_1','WHEEL_SPEED_1_RR', 'defaultValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#endif
#if I2CCAN_RX_SIG_WHEEL_SPEED_1_RL_CFG > FALSE
#define HCM_LCD_WHEEL_SPEED_1_RL_INIT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_1','WHEEL_SPEED_1_RL', 'initValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#define HCM_LCD_WHEEL_SPEED_1_RL_DEFAULT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_1','WHEEL_SPEED_1_RL', 'defaultValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#endif
#if I2CCAN_RX_SIG_WHEEL_SPEED_2_CRC_CFG > FALSE
#define HCM_LCD_WHEEL_SPEED_2_CRC_INIT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_2','WHEEL_SPEED_2_CRC', 'initValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#define HCM_LCD_WHEEL_SPEED_2_CRC_DEFAULT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_2','WHEEL_SPEED_2_CRC', 'defaultValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#endif
#if I2CCAN_RX_SIG_WHEEL_SPEED_2_ALIVE_CFG > FALSE
#define HCM_LCD_WHEEL_SPEED_2_ALIVE_INIT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_2','WHEEL_SPEED_2_ALIVE', 'initValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#define HCM_LCD_WHEEL_SPEED_2_ALIVE_DEFAULT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_2','WHEEL_SPEED_2_ALIVE', 'defaultValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#if I2CCAN_RX_SIG_WHEEL_SPEED_2_VALIDITY_FR_CFG > FALSE
#define HCM_LCD_WHEEL_SPEED_1_FR_INIT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_2','WHEEL_SPEED_1_FR', 'initValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#define HCM_LCD_WHEEL_SPEED_1_DEFAULT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_2','WHEEL_SPEED_1_FR', 'defaultValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#endif
#if I2CCAN_RX_SIG_WHEEL_SPEED_2_VALIDITY_FL_CFG > FALSE
#define HCM_LCD_WHEEL_SPEED_1_FR_INIT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_2','WHEEL_SPEED_1_FR', 'initValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#define HCM_LCD_WHEEL_SPEED_1_DEFAULT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_2','WHEEL_SPEED_1_FR', 'defaultValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#endif
#if I2CCAN_RX_SIG_WHEEL_SPEED_2_VALIDITY_RR_CFG > FALSE
#define HCM_LCD_WHEEL_SPEED_1_FR_INIT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_2','WHEEL_SPEED_1_FR', 'initValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#define HCM_LCD_WHEEL_SPEED_1_DEFAULT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_2','WHEEL_SPEED_1_FR', 'defaultValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#endif
#if I2CCAN_RX_SIG_WHEEL_SPEED_2_VALIDITY_RL_CFG > FALSE
#define HCM_LCD_WHEEL_SPEED_1_FR_INIT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_2','WHEEL_SPEED_1_FR', 'initValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#define HCM_LCD_WHEEL_SPEED_1_DEFAULT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_2','WHEEL_SPEED_1_FR', 'defaultValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#endif
#if I2CCAN_RX_SIG_WHEEL_SPEED_2_FR_CFG > FALSE
#define HCM_LCD_WHEEL_SPEED_1_FR_INIT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_2','WHEEL_SPEED_1_FR', 'initValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#define HCM_LCD_WHEEL_SPEED_1_DEFAULT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_2','WHEEL_SPEED_1_FR', 'defaultValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#endif
#if I2CCAN_RX_SIG_WHEEL_SPEED_2_FL_CFG > FALSE
#define HCM_LCD_WHEEL_SPEED_1_FR_INIT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_2','WHEEL_SPEED_1_FR', 'initValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#define HCM_LCD_WHEEL_SPEED_1_DEFAULT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_2','WHEEL_SPEED_1_FR', 'defaultValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#endif
#if I2CCAN_RX_SIG_WHEEL_SPEED_2_RR_CFG > FALSE
#define HCM_LCD_WHEEL_SPEED_1_FR_INIT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_2','WHEEL_SPEED_1_FR', 'initValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#define HCM_LCD_WHEEL_SPEED_1_DEFAULT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_2','WHEEL_SPEED_1_FR', 'defaultValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#endif
#if I2CCAN_RX_SIG_WHEEL_SPEED_2_RL_CFG > FALSE
#define HCM_LCD_WHEEL_SPEED_1_FR_INIT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_2','WHEEL_SPEED_1_FR', 'initValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#define HCM_LCD_WHEEL_SPEED_1_DEFAULT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_2','WHEEL_SPEED_1_FR', 'defaultValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#endif
#if I2CCAN_RX_SIG_POWER_MODE_CRC_CFG > FALSE
#define HCM_LCD_WHEEL_SPEED_1_FR_INIT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_1','WHEEL_SPEED_1_FR', 'initValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#define HCM_LCD_WHEEL_SPEED_1_DEFAULT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_1','WHEEL_SPEED_1_FR', 'defaultValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#endif
#if I2CCAN_RX_SIG_POWER_MODE_ALIVE_CFG > FALSE
#define HCM_LCD_WHEEL_SPEED_1_FR_INIT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_1','WHEEL_SPEED_1_FR', 'initValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#define HCM_LCD_WHEEL_SPEED_1_DEFAULT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_1','WHEEL_SPEED_1_FR', 'defaultValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#endif
#if I2CCAN_RX_SIG_POWER_MODE_VALIDITY_CFG > FALSE
#define HCM_LCD_WHEEL_SPEED_1_FR_INIT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_1','WHEEL_SPEED_1_FR', 'initValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#define HCM_LCD_WHEEL_SPEED_1_DEFAULT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_1','WHEEL_SPEED_1_FR', 'defaultValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#endif
#if I2CCAN_RX_SIG_POWER_MODE_CFG > FALSE
#define HCM_LCD_WHEEL_SPEED_1_FR_INIT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_1','WHEEL_SPEED_1_FR', 'initValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#define HCM_LCD_WHEEL_SPEED_1_DEFAULT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_1','WHEEL_SPEED_1_FR', 'defaultValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#endif
#if I2CCAN_RX_SIG_VEHICLE_SPEED_CRC_CFG > FALSE
#define HCM_LCD_WHEEL_SPEED_1_FR_INIT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_1','WHEEL_SPEED_1_FR', 'initValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#define HCM_LCD_WHEEL_SPEED_1_DEFAULT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_1','WHEEL_SPEED_1_FR', 'defaultValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#endif
#if I2CCAN_RX_SIG_VEHICLE_SPEED_ALIVE_CFG > FALSE
#define HCM_LCD_WHEEL_SPEED_1_FR_INIT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_1','WHEEL_SPEED_1_FR', 'initValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#define HCM_LCD_WHEEL_SPEED_1_DEFAULT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_1','WHEEL_SPEED_1_FR', 'defaultValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#endif
#if I2CCAN_RX_SIG_VEHICLE_SPEED_VALIDITY_CFG > FALSE
#define HCM_LCD_WHEEL_SPEED_1_FR_INIT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_1','WHEEL_SPEED_1_FR', 'initValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#define HCM_LCD_WHEEL_SPEED_1_DEFAULT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_1','WHEEL_SPEED_1_FR', 'defaultValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#endif
#if I2CCAN_RX_SIG_MSG_VEHICLE_SPEED_CFG > FALSE
#define HCM_LCD_WHEEL_SPEED_1_FR_INIT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_1','WHEEL_SPEED_1_FR', 'initValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#define HCM_LCD_WHEEL_SPEED_1_DEFAULT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_1','WHEEL_SPEED_1_FR', 'defaultValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#endif

#if LCD_CND_WHEEL_SPEED_1_CFG > FALSE
#define HCM_LCD_WHEEL_SIGNAL_INIT			HCM_LCD_WHEEL_SPEED_1_FR_INIT/* compatibility with GEN3 platform project */
#define HCM_LCD_WHEEL_SPEED_1_FR_INIT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_1','WHEEL_SPEED_1_FR', 'initValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#define HCM_LCD_WHEEL_SPEED_1_DEFAULT 			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_1','WHEEL_SPEED_1_FR', 'defaultValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021 */
#endif
#if LCD_CND_WHEEL_SPEED_2_CFG > FALSE
#define HCM_LCD_WHEEL_SPEED_2_INIT			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed2','WHEEL_SPEED_2_FR', 'initValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021u */
#define HCM_LCD_WHEEL_SPEED_2_DEFAULT			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed2','WHEEL_SPEED_2_FR', 'defaultValue'))
 ]]]*/
//[[[end]]]
/* init value for the wheel signals 1021u */
#endif
#if LCD_CND_POWER_MODE_CFG > FALSE
#define HCM_LCD_POWER_MODE_INIT				\
/*[[[cog
 cog.out(mqxml.get_signal_element('powerMode','POWER_MODE', 'initValue'))
 ]]]*/
//[[[end]]]
/* init value for the power mode signals 255u */
#define HCM_LCD_POWER_MODE_DEFAULT				\
/*[[[cog
 cog.out(mqxml.get_signal_element('powerMode','POWER_MODE', 'defaultValue'))
 ]]]*/
//[[[end]]]
/* init value for the power mode signals 255u */
#endif
#if LCD_CND_VEHICLE_SPEED_CFG > FALSE
#define HCM_LCD_VEHICLE_SPEED_INIT			\
/*[[[cog
 cog.out(mqxml.get_signal_element('vehicleSpeed','VEHICLE_SPEED', 'initValue'))
 ]]]*/
//[[[end]]]
/* init value for the vehicle speed signals 1021u */
#define HCM_LCD_VEHICLE_SPEED_DEFAULT		\
/*[[[cog
 cog.out(mqxml.get_signal_element('vehicleSpeed','VEHICLE_SPEED', 'defaultValue'))
 ]]]*/
//[[[end]]]
/* init value for the vehicle speed signals 1021u */
#endif
/*[[[cog
print('    [info]: handling template _HCM_LDC_Cfg.h ends')
]]]*/
//[[[end]]]
#endif /* HCM_LDC_CFG_H_ */
