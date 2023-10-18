/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg.h"

/* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance/ */
void checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg(
  /* odo_2/ */
  OdometryLocations_T_Obu_BasicTypes_Pkg *odo_2,
  /* odo_1/ */
  OdometryLocations_T_Obu_BasicTypes_Pkg *odo_1,
  /* maxDelta/ */
  OdometryLocations_T_Obu_BasicTypes_Pkg *maxDelta,
  outC_checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg *outC)
{
  outC->_L8_Abs_1_int64 = kcg_lit_int64(0);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&outC->_L3, odo_1);
  outC->_L5 = outC->_L3.o_nominal;
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&outC->_L2, odo_2);
  outC->_L4 = outC->_L2.o_nominal;
  outC->_L6 = outC->_L4 - outC->_L5;
  outC->A_Input_Abs_1_int64 = outC->_L6;
  outC->_L5_Abs_1_int64 = outC->A_Input_Abs_1_int64;
  outC->_L3_Abs_1_int64 = - outC->_L5_Abs_1_int64;
  outC->_L1_Abs_1_int64 = outC->_L8_Abs_1_int64 <= outC->_L5_Abs_1_int64;
  /* @1/_L2= */
  if (outC->_L1_Abs_1_int64) {
    outC->_L2_Abs_1_int64 = outC->_L5_Abs_1_int64;
  }
  else {
    outC->_L2_Abs_1_int64 = outC->_L3_Abs_1_int64;
  }
  outC->A_Output_Abs_1_int64 = outC->_L2_Abs_1_int64;
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&outC->_L8, maxDelta);
  outC->_L9 = outC->_L8.o_nominal;
  outC->_L7 = outC->A_Output_Abs_1_int64;
  outC->_L10 = outC->_L7 <= outC->_L9;
  outC->isLessThanOrEqual = outC->_L10;
}

#ifndef KCG_USER_DEFINED_INIT
void checkMaxAbsOdoDistance_init_BasicLocationFunctions_Pkg(
  outC_checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg *outC)
{
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_lit_int64(0);
  outC->_L8.o_nominal = kcg_lit_int64(0);
  outC->_L8.o_min = kcg_lit_int64(0);
  outC->_L8.o_max = kcg_lit_int64(0);
  outC->_L7 = kcg_lit_int64(0);
  outC->_L6 = kcg_lit_int64(0);
  outC->_L5 = kcg_lit_int64(0);
  outC->_L4 = kcg_lit_int64(0);
  outC->_L3.o_nominal = kcg_lit_int64(0);
  outC->_L3.o_min = kcg_lit_int64(0);
  outC->_L3.o_max = kcg_lit_int64(0);
  outC->_L2.o_nominal = kcg_lit_int64(0);
  outC->_L2.o_min = kcg_lit_int64(0);
  outC->_L2.o_max = kcg_lit_int64(0);
  outC->_L1_Abs_1_int64 = kcg_true;
  outC->_L2_Abs_1_int64 = kcg_lit_int64(0);
  outC->_L3_Abs_1_int64 = kcg_lit_int64(0);
  outC->_L5_Abs_1_int64 = kcg_lit_int64(0);
  outC->_L8_Abs_1_int64 = kcg_lit_int64(0);
  outC->A_Input_Abs_1_int64 = kcg_lit_int64(0);
  outC->A_Output_Abs_1_int64 = kcg_lit_int64(0);
  outC->isLessThanOrEqual = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void checkMaxAbsOdoDistance_reset_BasicLocationFunctions_Pkg(
  outC_checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance/
  @1: (math::Abs#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

