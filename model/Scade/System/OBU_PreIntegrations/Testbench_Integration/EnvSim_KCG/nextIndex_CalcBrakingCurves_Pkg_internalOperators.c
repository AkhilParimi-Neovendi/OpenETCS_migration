/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "nextIndex_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::nextIndex/ */
void nextIndex_CalcBrakingCurves_Pkg_internalOperators(
  /* upwards/ */
  kcg_bool upwards,
  /* currentIndex/ */
  kcg_int64 currentIndex,
  /* limit/ */
  kcg_int64 limit,
  outC_nextIndex_CalcBrakingCurves_Pkg_internalOperators *outC)
{
  outC->_L4 = kcg_lit_int64(0);
  outC->I2_Max_1_int64 = outC->_L4;
  outC->_L2_Max_1_int64 = outC->I2_Max_1_int64;
  outC->_L7 = kcg_lit_int64(1);
  outC->_L2 = currentIndex;
  outC->_L6 = outC->_L2 - outC->_L7;
  outC->I1_Max_1_int64 = outC->_L6;
  outC->_L1_Max_1_int64 = outC->I1_Max_1_int64;
  outC->_L3_Max_1_int64 = outC->_L1_Max_1_int64 >= outC->_L2_Max_1_int64;
  /* @1/_L4= */
  if (outC->_L3_Max_1_int64) {
    outC->_L4_Max_1_int64 = outC->_L1_Max_1_int64;
  }
  else {
    outC->_L4_Max_1_int64 = outC->_L2_Max_1_int64;
  }
  outC->Ma_Output_Max_1_int64 = outC->_L4_Max_1_int64;
  outC->_L15 = kcg_lit_int64(1);
  outC->_L16 = outC->_L15 + outC->_L2;
  outC->I2_Min_1_int64 = outC->_L16;
  outC->_L22_Min_1_int64 = outC->I2_Min_1_int64;
  outC->_L22 = limit;
  outC->_L21 = outC->_L22 - outC->_L15;
  outC->I1_Min_1_int64 = outC->_L21;
  outC->_L21_Min_1_int64 = outC->I1_Min_1_int64;
  outC->_L25_Min_1_int64 = outC->_L21_Min_1_int64 <= outC->_L22_Min_1_int64;
  /* @2/_L24= */
  if (outC->_L25_Min_1_int64) {
    outC->_L24_Min_1_int64 = outC->_L21_Min_1_int64;
  }
  else {
    outC->_L24_Min_1_int64 = outC->_L22_Min_1_int64;
  }
  outC->Mi_Output_Min_1_int64 = outC->_L24_Min_1_int64;
  outC->_L14 = outC->Mi_Output_Min_1_int64;
  outC->_L5 = outC->Ma_Output_Max_1_int64;
  outC->_L1 = upwards;
  /* _L3= */
  if (outC->_L1) {
    outC->_L3 = outC->_L14;
  }
  else {
    outC->_L3 = outC->_L5;
  }
  outC->nextIndex = outC->_L3;
}

#ifndef KCG_USER_DEFINED_INIT
void nextIndex_init_CalcBrakingCurves_Pkg_internalOperators(
  outC_nextIndex_CalcBrakingCurves_Pkg_internalOperators *outC)
{
  outC->_L22 = kcg_lit_int64(0);
  outC->_L21 = kcg_lit_int64(0);
  outC->_L14 = kcg_lit_int64(0);
  outC->_L15 = kcg_lit_int64(0);
  outC->_L16 = kcg_lit_int64(0);
  outC->_L7 = kcg_lit_int64(0);
  outC->_L6 = kcg_lit_int64(0);
  outC->_L5 = kcg_lit_int64(0);
  outC->_L4 = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  outC->_L1 = kcg_true;
  outC->_L2 = kcg_lit_int64(0);
  outC->_L21_Min_1_int64 = kcg_lit_int64(0);
  outC->_L22_Min_1_int64 = kcg_lit_int64(0);
  outC->_L24_Min_1_int64 = kcg_lit_int64(0);
  outC->_L25_Min_1_int64 = kcg_true;
  outC->I1_Min_1_int64 = kcg_lit_int64(0);
  outC->I2_Min_1_int64 = kcg_lit_int64(0);
  outC->Mi_Output_Min_1_int64 = kcg_lit_int64(0);
  outC->_L1_Max_1_int64 = kcg_lit_int64(0);
  outC->_L2_Max_1_int64 = kcg_lit_int64(0);
  outC->_L3_Max_1_int64 = kcg_true;
  outC->_L4_Max_1_int64 = kcg_lit_int64(0);
  outC->I1_Max_1_int64 = kcg_lit_int64(0);
  outC->I2_Max_1_int64 = kcg_lit_int64(0);
  outC->Ma_Output_Max_1_int64 = kcg_lit_int64(0);
  outC->nextIndex = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void nextIndex_reset_CalcBrakingCurves_Pkg_internalOperators(
  outC_nextIndex_CalcBrakingCurves_Pkg_internalOperators *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: CalcBrakingCurves_Pkg::internalOperators::nextIndex/
  @1: (math::Max#1)
  @2: (math::Min#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** nextIndex_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

