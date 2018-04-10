/*
 * _HDL_RMH_Cfg.h
 *
 *  Created on: 20th,Feb,2018
 *      Author: yech
 */
/*[[[cog
print('    [info]: handling template _HDL_RMH_Cfg.h starts')
import sys
sys.path.append('../')
sys.path.append('../../')
import cog
from MqXmlParser import MqXmlParser
xmlFile = r'C:\workspace\CocoNut\description\Coco.xml'
mqxml = MqXmlParser(xmlFile)
]]]*/
//[[[end]]]
#ifndef HDL_RMH_CFG_H_
#define HDL_RMH_CFG_H_

#define fromPython TRUE // for compilation only, before real signal mapping is done

/* message level configuration*/
#define I2CCAN_RX_MSG_WHEEL_SPEED_1_CFG \
/*[[[cog
 cog.out(mqxml.get_msg_element('wheelSpeed_1', 'enable'))
 ]]]*/
 //[[[end]]]


#define I2CCAN_RX_MSG_WHEEL_SPEED_2_CFG    							\
/*[[[cog
 cog.out(mqxml.get_msg_element('wheelSpeed2', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_MSG_WHEEL_SPEED_2_QUALIFICATION_CHECK_CFG    		\
/*[[[cog
 cog.out(mqxml.get_msg_element('wheelSpeed2', 'qualificationCheck'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_MSG_WHEEL_SPEED_2_QUALIFICATION_TIME_CFG   		\
/*[[[cog
 cog.out(mqxml.get_msg_element('wheelSpeed2', 'qualificationTime'))
 ]]]*/
 //[[[end]]]
#if I2CCAN_RX_MSG_WHEEL_SPEED_2_CFG > FALSE && I2CCAN_RX_MSG_WHEEL_SPEED_1_CFG == FALSE
#error "WHEEL_SPEED_1 must be used prior to WHEEL_SPEED_2"
#endif

#define I2CCAN_RX_MSG_POWER_MODE_CFG       							\
/*[[[cog
 cog.out(mqxml.get_msg_element('powerMode', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_MSG_POWER_MODE_QUALIFICATION_CHECK_CFG       		\
/*[[[cog
 cog.out(mqxml.get_msg_element('powerMode', 'qualificationCheck'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_MSG_POWER_MODE_QUALIFICATION_TIME_CFG       		\
/*[[[cog
 cog.out(mqxml.get_msg_element('powerMode', 'qualificationTime'))
 ]]]*/
 //[[[end]]]

#define I2CCAN_RX_MSG_VEHICLE_SPEED_CFG    							\
/*[[[cog
 cog.out(mqxml.get_msg_element('vehicleSpeed', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_MSG_VEHICLE_SPEED_QUALIFICATION_CHECK_CFG    		\
/*[[[cog
 cog.out(mqxml.get_msg_element('vehicleSpeed', 'qualificationCheck'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_MSG_VEHICLE_SPEED_QUALIFICATION_TIME_CFG    		\
/*[[[cog
 cog.out(mqxml.get_msg_element('vehicleSpeed', 'qualificationTime'))
 ]]]*/
 //[[[end]]]

/* msg timeout value configuration */
#if I2CCAN_RX_MSG_WHEEL_SPEED_1_CFG > FALSE
#define HCM_LCD_TIMEOUT_ESP_10				 		SWSW_WHEEL_SPEED_1_TIMEOUT_VALUE/* compatibility with GEN3 platform project */
#define SWSW_WHEEL_SPEED_1_TIMEOUT_VALUE 			\
/*[[[cog
 cog.out(mqxml.get_msg_element('wheelSpeed_1', 'timeoutValue'))
 ]]]*/
 //[[[end]]]
 /* timeout time : 150u : 2*150=300ms */
#endif

#if I2CCAN_RX_MSG_WHEEL_SPEED_2_CFG > FALSE
#define SWSW_WHEEL_SPEED_2_TIMEOUT_VALUE			\
/*[[[cog
 cog.out(mqxml.get_msg_element('wheelSpeed2', 'timeoutValue'))
 ]]]*/
 //[[[end]]]
#endif

#if I2CCAN_RX_MSG_POWER_MODE_CFG > FALSE
#define SWSW_POWER_MODE_TIMEOUT_VALUE				\
/*[[[cog
 cog.out(mqxml.get_msg_element('powerMode', 'timeoutValue'))
 ]]]*/
 //[[[end]]]
#endif

#if I2CCAN_RX_MSG_VEHICLE_SPEED_CFG > FALSE
#define SWSW_VEHICLE_SPEED_TIMEOUT_VALUE			\
/*[[[cog
 cog.out(mqxml.get_msg_element('vehicleSpeed', 'timeoutValue'))
 ]]]*/
 //[[[end]]]
#endif

/* signal level configuration*/
#define I2CCAN_RX_SIG_WHEEL_SPEED_1_CRC_CFG    			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_1','WHEEL_SPEED_1_CRC', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_SIG_WHEEL_SPEED_1_ALIVE_CFG   		\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_1', 'WHEEL_SPEED_1_ALIVE', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_SIG_WHEEL_SPEED_1_VALIDITY_FR_CFG    	\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_1', 'WHEEL_SPEED_1_VALIDTY_FR', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_SIG_WHEEL_SPEED_1_VALIDITY_FL_CFG    	\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_1', 'WHEEL_SPEED_1_VALIDITY_FL', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_SIG_WHEEL_SPEED_1_VALIDITY_RR_CFG    	\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_1', 'WHEEL_SPEED_1_VALIDITY_RR', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_SIG_WHEEL_SPEED_1_VALIDITY_RL_CFG    	\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_1', 'WHEEL_SPEED_1_VALIDITY_RL', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_SIG_WHEEL_SPEED_1_FR_CFG    	        \
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_1', 'WHEEL_SPEED_1_FR', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_SIG_WHEEL_SPEED_1_FL_CFG    	        \
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_1', 'WHEEL_SPEED_1_FL', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_SIG_WHEEL_SPEED_1_RR_CFG    	        \
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_1', 'WHEEL_SPEED_1_RR', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_SIG_WHEEL_SPEED_1_RL_CFG    	        \
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed_1', 'WHEEL_SPEED_1_RL', 'enable'))
 ]]]*/
 //[[[end]]]

#define I2CCAN_RX_SIG_WHEEL_SPEED_2_CRC_CFG    			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed2', 'WHEEL_SPEED_2_CRC', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_SIG_WHEEL_SPEED_2_ALIVE_CFG  			\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed2', 'WHEEL_SPEED_2_ALIVE', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_SIG_WHEEL_SPEED_2_VALIDITY_FR_CFG    	\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed2', 'WHEEL_SPEED_2_VALIDITY_FR', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_SIG_WHEEL_SPEED_2_VALIDITY_FL_CFG    	\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed2', 'WHEEL_SPEED_2_VALIDITY_FL', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_SIG_WHEEL_SPEED_2_VALIDITY_RR_CFG    	\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed2', 'WHEEL_SPEED_2_VALIDITY_RR', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_SIG_WHEEL_SPEED_2_VALIDITY_RL_CFG    	\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed2', 'WHEEL_SPEED_2_VALIDITY_RL', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_SIG_WHEEL_SPEED_2_FR_CFG    	       	\
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed2', 'WHEEL_SPEED_2_FR', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_SIG_WHEEL_SPEED_2_FL_CFG    	        \
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed2', 'WHEEL_SPEED_2_FL', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_SIG_WHEEL_SPEED_2_RR_CFG    	        \
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed2', 'WHEEL_SPEED_2_RR', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_SIG_WHEEL_SPEED_2_RL_CFG    	        \
/*[[[cog
 cog.out(mqxml.get_signal_element('wheelSpeed2', 'WHEEL_SPEED_2_RL', 'enable'))
 ]]]*/
 //[[[end]]]

#define I2CCAN_RX_SIG_POWER_MODE_CRC_CFG    			\
/*[[[cog
 cog.out(mqxml.get_signal_element('powerMode', 'POWER_MODE_CRC', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_SIG_POWER_MODE_ALIVE_CFG   			\
/*[[[cog
 cog.out(mqxml.get_signal_element('powerMode', 'POWER_MODE_ALIVE', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_SIG_POWER_MODE_VALIDITY_CFG    		\
/*[[[cog
 cog.out(mqxml.get_signal_element('powerMode', 'POWER_MODE_VALIDITY', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_SIG_POWER_MODE_CFG   					\
/*[[[cog
 cog.out(mqxml.get_signal_element('powerMode', 'POWER_MODE', 'enable'))
 ]]]*/
 //[[[end]]]

#define I2CCAN_RX_SIG_VEHICLE_SPEED_CRC_CFG    			\
/*[[[cog
 cog.out(mqxml.get_signal_element('vehicleSpeed', 'VEHICLE_SPEED_CRC', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_SIG_VEHICLE_SPEED_ALIVE_CFG   		\
/*[[[cog
 cog.out(mqxml.get_signal_element('vehicleSpeed', 'VEHICLE_SPEED_ALIVE', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_SIG_VEHICLE_SPEED_VALIDITY_CFG   		\
/*[[[cog
 cog.out(mqxml.get_signal_element('vehicleSpeed', 'VEHICLE_SPEED_VALIDITY', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_SIG_MSG_VEHICLE_SPEED_CFG   			\
/*[[[cog
 cog.out(mqxml.get_signal_element('vehicleSpeed', 'VEHICLE_SPEED', 'enable'))
 ]]]*/
 //[[[end]]]

/* the signal access macro will be defined in I2CCAN_Par.h that handles message layout and mapped here */

#define I2CCAN_RX_SIG_WHEEL_SPEED_1_CRC  			    \
/*[[[cog
 cog.out(mqxml.get_signal_element('vehicleSpeed', 'VEHICLE_SPEED', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_SIG_WHEEL_SPEED_1_ALIVE  	            \
/*[[[cog
 cog.out(mqxml.get_signal_element('vehicleSpeed', 'VEHICLE_SPEED', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_SIG_WHEEL_SPEED_1_VALIDITY_FR  	    \
/*[[[cog
 cog.out(mqxml.get_signal_element('vehicleSpeed', 'VEHICLE_SPEED', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_SIG_WHEEL_SPEED_1_VALIDITY_FL   	    \
/*[[[cog
 cog.out(mqxml.get_signal_element('vehicleSpeed', 'VEHICLE_SPEED', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_SIG_WHEEL_SPEED_1_VALIDITY_RR   	    \
/*[[[cog
 cog.out(mqxml.get_signal_element('vehicleSpeed', 'VEHICLE_SPEED', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_SIG_WHEEL_SPEED_1_VALIDITY_RL   	    \
/*[[[cog
 cog.out(mqxml.get_signal_element('vehicleSpeed', 'VEHICLE_SPEED', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_SIG_WHEEL_SPEED_1_FR   	            \
/*[[[cog
 cog.out(mqxml.get_signal_element('vehicleSpeed', 'VEHICLE_SPEED', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_SIG_WHEEL_SPEED_1_FL   	            \
/*[[[cog
 cog.out(mqxml.get_signal_element('vehicleSpeed', 'VEHICLE_SPEED', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_SIG_WHEEL_SPEED_1_RR   	            \
/*[[[cog
 cog.out(mqxml.get_signal_element('vehicleSpeed', 'VEHICLE_SPEED', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_SIG_WHEEL_SPEED_1_RL   	            \
/*[[[cog
 cog.out(mqxml.get_signal_element('vehicleSpeed', 'VEHICLE_SPEED', 'enable'))
 ]]]*/
 //[[[end]]]

#define I2CCAN_RX_SIG_WHEEL_SPEED_2_CRC   			    \
/*[[[cog
 cog.out(mqxml.get_signal_element('vehicleSpeed', 'VEHICLE_SPEED', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_SIG_WHEEL_SPEED_2_ALIVE 			    \
/*[[[cog
 cog.out(mqxml.get_signal_element('vehicleSpeed', 'VEHICLE_SPEED', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_SIG_WHEEL_SPEED_2_VALIDITY_FR   	    \
/*[[[cog
 cog.out(mqxml.get_signal_element('vehicleSpeed', 'VEHICLE_SPEED', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_SIG_WHEEL_SPEED_2_VALIDITY_FL   	    \
/*[[[cog
 cog.out(mqxml.get_signal_element('vehicleSpeed', 'VEHICLE_SPEED', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_SIG_WHEEL_SPEED_2_VALIDITY_RR   	    \
/*[[[cog
 cog.out(mqxml.get_signal_element('vehicleSpeed', 'VEHICLE_SPEED', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_SIG_WHEEL_SPEED_2_VALIDITY_RL   	    \
/*[[[cog
 cog.out(mqxml.get_signal_element('vehicleSpeed', 'VEHICLE_SPEED', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_SIG_WHEEL_SPEED_2_FR   	            \
/*[[[cog
 cog.out(mqxml.get_signal_element('vehicleSpeed', 'VEHICLE_SPEED', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_SIG_WHEEL_SPEED_2_FL   	            \
/*[[[cog
 cog.out(mqxml.get_signal_element('vehicleSpeed', 'VEHICLE_SPEED', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_SIG_WHEEL_SPEED_2_RR   	            \
/*[[[cog
 cog.out(mqxml.get_signal_element('vehicleSpeed', 'VEHICLE_SPEED', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_SIG_WHEEL_SPEED_2_RL   	            \
/*[[[cog
 cog.out(mqxml.get_signal_element('vehicleSpeed', 'VEHICLE_SPEED', 'enable'))
 ]]]*/
 //[[[end]]]

#define I2CCAN_RX_SIG_POWER_MODE_CRC   				    \
/*[[[cog
 cog.out(mqxml.get_signal_element('vehicleSpeed', 'VEHICLE_SPEED', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_SIG_POWER_MODE_ALIVE  			    \
/*[[[cog
 cog.out(mqxml.get_signal_element('vehicleSpeed', 'VEHICLE_SPEED', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_SIG_POWER_MODE_VALIDITY    		    \
/*[[[cog
 cog.out(mqxml.get_signal_element('vehicleSpeed', 'VEHICLE_SPEED', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_SIG_POWER_MODE	   				    \
/*[[[cog
 cog.out(mqxml.get_signal_element('vehicleSpeed', 'VEHICLE_SPEED', 'enable'))
 ]]]*/
 //[[[end]]]

#define I2CCAN_RX_SIG_VEHICLE_SPEED_CRC   			    \
/*[[[cog
 cog.out(mqxml.get_signal_element('vehicleSpeed', 'VEHICLE_SPEED', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_SIG_VEHICLE_SPEED_ALIVE  	            \
/*[[[cog
 cog.out(mqxml.get_signal_element('vehicleSpeed', 'VEHICLE_SPEED', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_SIG_VEHICLE_SPEED_VALIDITY  		    \
/*[[[cog
cog.out(mqxml.get_signal_element('vehicleSpeed', 'VEHICLE_SPEED', 'enable'))
 ]]]*/
 //[[[end]]]
#define I2CCAN_RX_SIG_VEHICLE_SPEED  				    \
/*[[[cog
 cog.out(mqxml.get_signal_element('vehicleSpeed', 'VEHICLE_SPEED', 'enable'))
 ]]]*/
 //[[[end]]]

/* msg E2E configuration */
#define I2CCAN_RX_MSG_WHEEL_SPEED_1_E2E_CHECK    	\
/*[[[cog
 cog.out(mqxml.get_msg_element('wheelSpeed_1', 'E2E'))
 ]]]*/
 //[[[end]]]
#if I2CCAN_RX_MSG_WHEEL_SPEED_1_E2E_CHECK > FALSE && I2CCAN_RX_SIG_WHEEL_SPEED_1_CRC_CFG == FALSE && I2CCAN_RX_SIG_WHEEL_SPEED_1_ALIVE_CFG == FALSE
#error "I2CCAN_RX_MSG_WHEEL_SPEED_1 E2E configuration error"
#endif

#define I2CCAN_RX_MSG_WHEEL_SPEED_2_E2E_CHECK    	\
/*[[[cog
 cog.out(mqxml.get_msg_element('wheelSpeed2', 'E2E'))
 ]]]*/
 //[[[end]]]
#if I2CCAN_RX_MSG_WHEEL_SPEED_2_E2E_CHECK > FALSE && I2CCAN_RX_SIG_WHEEL_SPEED_2_CRC_CFG == FALSE && I2CCAN_RX_SIG_WHEEL_SPEED_2_ALIVE_CFG == FALSE
#error "I2CCAN_RX_MSG_WHEEL_SPEED_2 E2E configuration error"
#endif

#define I2CCAN_RX_MSG_POWER_MODE_E2E_CHECK       	\
/*[[[cog
 cog.out(mqxml.get_msg_element('powerMode', 'E2E'))
 ]]]*/
 //[[[end]]]
#if I2CCAN_RX_MSG_POWER_MODE_E2E_CHECK > FALSE && I2CCAN_RX_SIG_POWER_MODE_CRC_CFG == FALSE && I2CCAN_RX_SIG_POWER_MODE_ALIVE_CFG == FALSE
#error "I2CCAN_RX_MSG_POWER_MODE E2E configuration error"
#endif

#define I2CCAN_RX_MSG_VEHICLE_SPEED_E2E_CHECK   	\
/*[[[cog
 cog.out(mqxml.get_msg_element('vehicleSpeed', 'E2E'))
 ]]]*/
 //[[[end]]]
#if I2CCAN_RX_MSG_VEHICLE_SPEED_E2E_CHECK > FALSE && I2CCAN_RX_SIG_VEHICLE_SPEED_CRC_CFG == FALSE && I2CCAN_RX_SIG_VEHICLE_SPEED_ALIVE_CFG == FALSE
#error "I2CCAN_RX_MSG_VEHICLE_SPEED E2E configuration error"
#endif
/*[[[cog
print('    [info]: handling template _HDL_RMH_Cfg.h ends')
]]]*/
//[[[end]]]
#endif /* HDL_RMH_CFG_H_ */
