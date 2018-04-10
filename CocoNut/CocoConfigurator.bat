@echo off
echo ************************************************************************
echo [INFO]: CocoNut.Cococonfigurator starts
echo [version]: 1.1
echo ************************************************************************

set _HDL_RMH_Cfg=..\template\_HDL_RMH_Cfg.h
set _HDL_TMH_Cfg=..\template\_HDL_TMH_Cfg.h
set _HCM_LCD_Cfg=..\template\_HCM_LCD_Cfg.h
set _I2C2CAN_Par=..\template\_I2C2CAN_Par.h

set HDL_RMH_Cfg=..\output\HDL_RMH_Cfg.h
set HDL_TMH_Cfg=..\output\HDL_TMH_Cfg.h
set HCM_LCD_Cfg=..\output\HCM_LCD_Cfg.h
set I2C2CAN_Par=..\output\I2C2CAN_Par.h


if not exist %_HDL_RMH_Cfg% goto ErrorWrongPath
if not exist %_HDL_TMH_Cfg% goto ErrorWrongPath
if not exist %_HCM_LCD_Cfg% goto ErrorWrongPath
if not exist %_I2C2CAN_Par% goto ErrorWrongPath

if not exist %HDL_RMH_Cfg% cd.> %HDL_RMH_Cfg%
if not exist %HDL_TMH_Cfg% cd.> %HDL_TMH_Cfg%
if not exist %HCM_LCD_Cfg% cd.> %HCM_LCD_Cfg%
if not exist %I2C2CAN_Par% cd.> %I2C2CAN_Par%

python -m cogapp -d -o %HDL_RMH_Cfg% %_HDL_RMH_Cfg%
python -m cogapp -d -o %HDL_TMH_Cfg% %_HDL_TMH_Cfg%
python -m cogapp -d -o %HCM_LCD_Cfg% %_HCM_LCD_Cfg%
python -m cogapp -d -o %I2C2CAN_Par% %_I2C2CAN_Par%
goto End
:ErrorWrongPath
echo ************************************************************************
echo [ERROR]: template file does not exist
echo ************************************************************************

:End
echo ************************************************************************
echo [INFO]: CocoNut.Cococonfigurator ends
echo ************************************************************************
pause
