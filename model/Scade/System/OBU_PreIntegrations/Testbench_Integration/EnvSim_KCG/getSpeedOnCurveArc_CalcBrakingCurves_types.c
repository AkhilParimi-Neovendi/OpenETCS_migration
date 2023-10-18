/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getSpeedOnCurveArc_CalcBrakingCurves_types.h"

/* CalcBrakingCurves_types::getSpeedOnCurveArc/ */
void getSpeedOnCurveArc_CalcBrakingCurves_types(
  /* arc/ */
  ParabolaArc_T_CalcBrakingCurves_types *arc,
  /* location/ */
  L_internal_real_Type_SDM_Types_Pkg location,
  outC_getSpeedOnCurveArc_CalcBrakingCurves_types *outC)
{
  kcg_copy_ParabolaArc_T_CalcBrakingCurves_types(&outC->_L4, arc);
  outC->_L3 = outC->_L4.acceleration;
  outC->_L6 = outC->_L3 + outC->_L3;
  outC->_L5 = location;
  outC->_L1 = outC->_L4.distance;
  outC->_L7 = outC->_L1 - outC->_L5;
  outC->_L9 = outC->_L7 * outC->_L6;
  outC->_L2 = outC->_L4.speed;
  outC->_L8 = outC->_L2 * outC->_L2;
  outC->_L11 = outC->_L8 + outC->_L9;
  outC->_L10 = /* _L10=(mathext::SqrtR#1)/ */
    SqrtR64_mathext_mathextimpl(outC->_L11);
  outC->speed = outC->_L10;
}

#ifndef KCG_USER_DEFINED_INIT
void getSpeedOnCurveArc_init_CalcBrakingCurves_types(
  outC_getSpeedOnCurveArc_CalcBrakingCurves_types *outC)
{
  outC->_L11 = kcg_lit_float64(0.0);
  outC->_L10 = kcg_lit_float64(0.0);
  outC->_L9 = kcg_lit_float64(0.0);
  outC->_L8 = kcg_lit_float64(0.0);
  outC->_L7 = kcg_lit_float64(0.0);
  outC->_L6 = kcg_lit_float64(0.0);
  outC->_L5 = kcg_lit_float64(0.0);
  outC->_L3 = kcg_lit_float64(0.0);
  outC->_L2 = kcg_lit_float64(0.0);
  outC->_L1 = kcg_lit_float64(0.0);
  outC->_L4.distance = kcg_lit_float64(0.0);
  outC->_L4.speed = kcg_lit_float64(0.0);
  outC->_L4.acceleration = kcg_lit_float64(0.0);
  outC->speed = kcg_lit_float64(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void getSpeedOnCurveArc_reset_CalcBrakingCurves_types(
  outC_getSpeedOnCurveArc_CalcBrakingCurves_types *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** getSpeedOnCurveArc_CalcBrakingCurves_types.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

