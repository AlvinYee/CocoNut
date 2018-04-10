/*
 * _I2CCAN_Par.h
 *
 *  Created on: 20th,Feb,2018
 *      Author: yech
 */
/*[[[cog
print('    [info]: handling template _I2CCAN_Par.h starts')
import sys
sys.path.append('../')
sys.path.append('../../')
import cog
from MqXmlParser import MqXmlParser
xmlFile = r'C:\workspace\CocoNut\description\Coco.xml'
mqxml = MqXmlParser(xmlFile)
]]]*/
//[[[end]]]
#ifndef I2CCAN_PAR_H_
#define I2CCAN_PAR_H_

#include "HDL_RMH_Cfg.h"

#if I2CCAN_RX_MSG_WHEEL_SPEED_1_CFG > FALSE
typedef struct _c_ESP_10_RDS_msgTypeTag
{
  uint8 ESP_10_CRC : 8;
  uint8 ESP_QBit_Wegimpuls_HR : 1;
  uint8 ESP_QBit_Wegimpuls_HL : 1;
  uint8 ESP_QBit_Wegimpuls_VR : 1;
  uint8 ESP_QBit_Wegimpuls_VL : 1;
  uint8 ESP_10_BZ : 4;
  uint8 ESP_Wegimpuls_VL_0 : 8;
  uint8 ESP_Wegimpuls_VR_0 : 6;
  uint8 ESP_Wegimpuls_VL_1 : 2;
  uint8 ESP_Wegimpuls_HL_0 : 4;
  uint8 ESP_Wegimpuls_VR_1 : 4;
  uint8 ESP_Wegimpuls_HR_0 : 2;
  uint8 ESP_Wegimpuls_HL_1 : 6;
  uint8 ESP_Wegimpuls_HR_1 : 8;
} _c_ESP_10_RDS_msgType;
#endif

#if I2CCAN_RX_MSG_WHEEL_SPEED_2_CFG > FALSE
typedef struct _c_BCS_9_RDS_msgTypeTag
{
  uint8 unused0 : 2;
  uint8 BCS_FLWheelSpdVD : 1;
  uint8 unused1 : 5;
  uint8 unused2 : 3;
  uint8 BCS_FLWheelSpd_1 : 5;
  uint8 BCS_FLWheelSpd_0 : 8;
  uint8 BCS_FRWheelSpdVD : 1;
  uint8 unused3 : 2;
  uint8 BCS_FRWheelSpd_1 : 5;
  uint8 BCS_FRWheelSpd_0 : 8;
  uint8 unused4 : 8;
  uint8 unused5 : 4;
  uint8 BCS_9_MsgCounter : 4;
  uint8 BCS_9_Checksum : 8;
} _c_BCS_9_RDS_msgType;

typedef struct _c_BCS_10_RDS_msgTypeTag
{
  uint8 unused0 : 2;
  uint8 BCS_RLWheelSpdVD : 1;
  uint8 unused1 : 5;
  uint8 unused2 : 3;
  uint8 BCS_RLWheelSpd_1 : 5;
  uint8 BCS_RLWheelSpd_0 : 8;
  uint8 BCS_RRWheelSpdVD : 1;
  uint8 unused3 : 2;
  uint8 BCS_RRWheelSpd_1 : 5;
  uint8 BCS_RRWheelSpd_0 : 8;
  uint8 unused4 : 8;
  uint8 unused5 : 4;
  uint8 BCS_10_MsgCounter : 4;
  uint8 BCS_10_Checksum : 8;
} _c_BCS_10_RDS_msgType;
#endif

#if I2CCAN_RX_MSG_POWER_MODE_CFG > FALSE
typedef struct _c_SESAM_CLAMP_STAT_RDS_msgTypeTag
{
  uint8 unused0 : 8;
  uint8 unused1 : 1;
  uint8 STAT_Terminal : 3;
  uint8 unused2 : 4;
  uint8 unused3 : 8;
  uint8 unused4 : 8;
  uint8 unused5 : 8;
  uint8 unused6 : 6;
  uint8 STAT_LockingInhibitESCL : 2;
} _c_SESAM_CLAMP_STAT_RDS_msgType;
#endif

#if I2CCAN_RX_MSG_VEHICLE_SPEED_CFG > FALSE
typedef struct _c_EPBi_V_VEH_RDS_msgTypeTag
{
  uint8 CRC_V_VEH : 8;
  uint8 unused0 : 4;
  uint8 ALIV_V_VEH : 4;
  uint8 V_VEH_COG_0 : 8;
  uint8 V_VEH_COG_1 : 8;
  uint8 unused1 : 1;
  uint8 DVCO_VEH : 3;
  uint8 QU_V_VEH_COG : 4;
} _c_EPBi_V_VEH_RDS_msgType;
#endif
/*[[[cog
print('    [info]: handling template _I2CCAN_Par.h ends')
]]]*/
//[[[end]]]
#endif /* I2CCAN_PAR_H_ */
