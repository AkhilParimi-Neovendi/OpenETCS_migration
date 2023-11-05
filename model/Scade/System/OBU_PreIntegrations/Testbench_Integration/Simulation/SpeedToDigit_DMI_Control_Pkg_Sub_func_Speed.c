/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SpeedToDigit_DMI_Control_Pkg_Sub_func_Speed.h"

/* DMI_Control_Pkg::Sub_func::Speed::SpeedToDigit/ */
void SpeedToDigit_DMI_Control_Pkg_Sub_func_Speed(
  /* TrainSpeed/ */
  kcg_float32 TrainSpeed,
  outC_SpeedToDigit_DMI_Control_Pkg_Sub_func_Speed *outC)
{
  outC->_L16 = kcg_lit_int32(100);
  outC->_L9 = kcg_lit_int32(100);
  outC->_L1 = TrainSpeed;
  outC->_L5 = /* _L5= */(kcg_int32) outC->_L1;
  outC->_L8 = outC->_L5 % outC->_L9;
  outC->_L13 = outC->_L5 - outC->_L8;
  outC->_L17 = outC->_L13 / outC->_L16;
  outC->_L15 = kcg_lit_int32(10);
  outC->_L3 = kcg_lit_int32(10);
  outC->_L2 = outC->_L5 % outC->_L3;
  outC->_L12 = outC->_L8 - outC->_L2;
  outC->_L14 = outC->_L12 / outC->_L15;
  outC->_L7 = /* _L7= */(kcg_float32) outC->_L17;
  outC->_L6 = /* _L6= */(kcg_float32) outC->_L14;
  outC->_L4 = /* _L4= */(kcg_float32) outC->_L2;
  outC->SpeedDigitOne = outC->_L7;
  outC->SpeedDigitTwo = outC->_L6;
  outC->SpeedDigitThree = outC->_L4;
}

#ifndef KCG_USER_DEFINED_INIT
void SpeedToDigit_init_DMI_Control_Pkg_Sub_func_Speed(
  outC_SpeedToDigit_DMI_Control_Pkg_Sub_func_Speed *outC)
{
  outC->_L17 = kcg_lit_int32(0);
  outC->_L16 = kcg_lit_int32(0);
  outC->_L15 = kcg_lit_int32(0);
  outC->_L14 = kcg_lit_int32(0);
  outC->_L13 = kcg_lit_int32(0);
  outC->_L12 = kcg_lit_int32(0);
  outC->_L8 = kcg_lit_int32(0);
  outC->_L9 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_float32(0.0);
  outC->_L6 = kcg_lit_float32(0.0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_float32(0.0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L2 = kcg_lit_int32(0);
  outC->_L1 = kcg_lit_float32(0.0);
  outC->SpeedDigitThree = kcg_lit_float32(0.0);
  outC->SpeedDigitTwo = kcg_lit_float32(0.0);
  outC->SpeedDigitOne = kcg_lit_float32(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SpeedToDigit_reset_DMI_Control_Pkg_Sub_func_Speed(
  outC_SpeedToDigit_DMI_Control_Pkg_Sub_func_Speed *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SpeedToDigit_DMI_Control_Pkg_Sub_func_Speed.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

