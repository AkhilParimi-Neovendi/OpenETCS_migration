/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TargetDistance_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::TargetDistance/ */
void TargetDistance_TargetLimits_Pkg(
  /* d_P_of_V_target/ */
  L_internal_real_Type_SDM_Types_Pkg d_P_of_V_target,
  /* d_maxsafefront/ */
  L_internal_real_Type_SDM_Types_Pkg d_maxsafefront,
  /* d_estfront/ */
  L_internal_real_Type_SDM_Types_Pkg d_estfront,
  /* d_svl/ */
  L_internal_real_Type_SDM_Types_Pkg d_svl,
  /* d_eoa/ */
  L_internal_real_Type_SDM_Types_Pkg d_eoa,
  /* isEoAorSvL/ */
  kcg_bool isEoAorSvL,
  outC_TargetDistance_TargetLimits_Pkg *outC)
{
  outC->_L31 = d_maxsafefront;
  outC->_L27 = d_svl;
  outC->_L30 = outC->_L27 - outC->_L31;
  outC->I2_Min_1_float64 = outC->_L30;
  outC->_L22_Min_1_float64 = outC->I2_Min_1_float64;
  outC->_L29 = d_estfront;
  outC->_L25 = d_eoa;
  outC->_L28 = outC->_L25 - outC->_L29;
  outC->I1_Min_1_float64 = outC->_L28;
  outC->_L21_Min_1_float64 = outC->I1_Min_1_float64;
  outC->_L25_Min_1_float64 = outC->_L21_Min_1_float64 <= outC->_L22_Min_1_float64;
  /* @1/_L24= */
  if (outC->_L25_Min_1_float64) {
    outC->_L24_Min_1_float64 = outC->_L21_Min_1_float64;
  }
  else {
    outC->_L24_Min_1_float64 = outC->_L22_Min_1_float64;
  }
  outC->Mi_Output_Min_1_float64 = outC->_L24_Min_1_float64;
  outC->_L34 = d_P_of_V_target;
  outC->_L33 = d_maxsafefront;
  outC->_L32 = outC->_L34 - outC->_L33;
  outC->_L26 = outC->Mi_Output_Min_1_float64;
  outC->_L15 = isEoAorSvL;
  /* _L24= */
  if (outC->_L15) {
    outC->_L24 = outC->_L26;
  }
  else {
    outC->_L24 = outC->_L32;
  }
  /* _L23=(SDM_Types_Pkg::limitPositive#1)/ */
  limitPositive_SDM_Types_Pkg(outC->_L24, &outC->Context_limitPositive_1);
  outC->_L23 = outC->Context_limitPositive_1.limited;
  outC->targetDistance = outC->_L23;
}

#ifndef KCG_USER_DEFINED_INIT
void TargetDistance_init_TargetLimits_Pkg(
  outC_TargetDistance_TargetLimits_Pkg *outC)
{
  outC->_L32 = kcg_lit_float64(0.0);
  outC->_L33 = kcg_lit_float64(0.0);
  outC->_L34 = kcg_lit_float64(0.0);
  outC->_L25 = kcg_lit_float64(0.0);
  outC->_L26 = kcg_lit_float64(0.0);
  outC->_L27 = kcg_lit_float64(0.0);
  outC->_L28 = kcg_lit_float64(0.0);
  outC->_L29 = kcg_lit_float64(0.0);
  outC->_L30 = kcg_lit_float64(0.0);
  outC->_L31 = kcg_lit_float64(0.0);
  outC->_L24 = kcg_lit_float64(0.0);
  outC->_L23 = kcg_lit_float64(0.0);
  outC->_L15 = kcg_true;
  outC->_L21_Min_1_float64 = kcg_lit_float64(0.0);
  outC->_L22_Min_1_float64 = kcg_lit_float64(0.0);
  outC->_L24_Min_1_float64 = kcg_lit_float64(0.0);
  outC->_L25_Min_1_float64 = kcg_true;
  outC->I1_Min_1_float64 = kcg_lit_float64(0.0);
  outC->I2_Min_1_float64 = kcg_lit_float64(0.0);
  outC->Mi_Output_Min_1_float64 = kcg_lit_float64(0.0);
  outC->targetDistance = kcg_lit_float64(0.0);
  /* _L23=(SDM_Types_Pkg::limitPositive#1)/ */
  limitPositive_init_SDM_Types_Pkg(&outC->Context_limitPositive_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TargetDistance_reset_TargetLimits_Pkg(
  outC_TargetDistance_TargetLimits_Pkg *outC)
{
  /* _L23=(SDM_Types_Pkg::limitPositive#1)/ */
  limitPositive_reset_SDM_Types_Pkg(&outC->Context_limitPositive_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: TargetLimits_Pkg::TargetDistance/
  @1: (math::Min#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TargetDistance_TargetLimits_Pkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

