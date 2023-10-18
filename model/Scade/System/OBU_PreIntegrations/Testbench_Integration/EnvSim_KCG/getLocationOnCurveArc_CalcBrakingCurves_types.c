/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getLocationOnCurveArc_CalcBrakingCurves_types.h"

/* CalcBrakingCurves_types::getLocationOnCurveArc/ */
void getLocationOnCurveArc_CalcBrakingCurves_types(
  /* arc/ */
  ParabolaArc_T_CalcBrakingCurves_types *arc,
  /* v_est/ */
  V_internal_real_Type_SDM_Types_Pkg v_est,
  outC_getLocationOnCurveArc_CalcBrakingCurves_types *outC)
{
  outC->_L24 = kcg_lit_float64(2.0);
  kcg_copy_ParabolaArc_T_CalcBrakingCurves_types(&outC->_L1, arc);
  outC->_L3 = outC->_L1.acceleration;
  outC->_L23 = outC->_L3 * outC->_L24;
  outC->_L16 = kcg_lit_float64(1.0);
  outC->_L14 = kcg_lit_float64(0.0);
  outC->_L13 = outC->_L14 != outC->_L3;
  /* _L15= */
  if (outC->_L13) {
    outC->_L15 = outC->_L23;
  }
  else {
    outC->_L15 = outC->_L16;
  }
  outC->valid = outC->_L13;
  outC->A1 = (*arc).acceleration > kcg_lit_float64(0.0);
  outC->_L4 = outC->_L1.speed;
  outC->_L9 = outC->_L4 * outC->_L4;
  outC->_L2 = v_est;
  outC->_L10 = outC->_L2 * outC->_L2;
  outC->_L11 = outC->_L10 - outC->_L9;
  outC->_L7 = outC->_L11 / outC->_L15;
  outC->_L5 = outC->_L1.distance;
  outC->_L6 = outC->_L5 - outC->_L7;
  outC->location = outC->_L6;
}

#ifndef KCG_USER_DEFINED_INIT
void getLocationOnCurveArc_init_CalcBrakingCurves_types(
  outC_getLocationOnCurveArc_CalcBrakingCurves_types *outC)
{
  outC->_L24 = kcg_lit_float64(0.0);
  outC->_L23 = kcg_lit_float64(0.0);
  outC->_L16 = kcg_lit_float64(0.0);
  outC->_L14 = kcg_lit_float64(0.0);
  outC->_L13 = kcg_true;
  outC->_L15 = kcg_lit_float64(0.0);
  outC->_L11 = kcg_lit_float64(0.0);
  outC->_L10 = kcg_lit_float64(0.0);
  outC->_L9 = kcg_lit_float64(0.0);
  outC->_L7 = kcg_lit_float64(0.0);
  outC->_L6 = kcg_lit_float64(0.0);
  outC->_L3 = kcg_lit_float64(0.0);
  outC->_L4 = kcg_lit_float64(0.0);
  outC->_L5 = kcg_lit_float64(0.0);
  outC->_L2 = kcg_lit_float64(0.0);
  outC->_L1.distance = kcg_lit_float64(0.0);
  outC->_L1.speed = kcg_lit_float64(0.0);
  outC->_L1.acceleration = kcg_lit_float64(0.0);
  outC->A1 = kcg_true;
  outC->valid = kcg_true;
  outC->location = kcg_lit_float64(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void getLocationOnCurveArc_reset_CalcBrakingCurves_types(
  outC_getLocationOnCurveArc_CalcBrakingCurves_types *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** getLocationOnCurveArc_CalcBrakingCurves_types.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

