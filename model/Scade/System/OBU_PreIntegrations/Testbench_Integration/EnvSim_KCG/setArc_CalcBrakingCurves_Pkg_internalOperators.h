/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _setArc_CalcBrakingCurves_Pkg_internalOperators_H_
#define _setArc_CalcBrakingCurves_Pkg_internalOperators_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ParabolaCurve_T_CalcBrakingCurves_types /* newBC/ */ newBC;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ParabolaCurve_T_CalcBrakingCurves_types /* _L1/ */ _L1;
  ParabolaCurveDistances_T_CalcBrakingCurves_types /* _L4/ */ _L4;
  ParabolaCurveSpeeds_T_CalcBrakingCurves_types /* _L5/ */ _L5;
  ParabolaCurveAccelerations_T_CalcBrakingCurves_types /* _L6/ */ _L6;
  ParabolaCurveValid_T_CalcBrakingCurves_types /* _L7/ */ _L7;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L14/ */ _L14;
  ParabolaCurveValid_T_CalcBrakingCurves_types /* _L16/ */ _L16;
  kcg_bool /* _L18/ */ _L18;
  ParabolaArc_T_CalcBrakingCurves_types /* _L25/ */ _L25;
  A_internal_real_Type_SDM_Types_Pkg /* _L31/ */ _L31;
  V_internal_real_Type_SDM_Types_Pkg /* _L30/ */ _L30;
  L_internal_real_Type_SDM_Types_Pkg /* _L29/ */ _L29;
  ParabolaCurveAccelerations_T_CalcBrakingCurves_types /* _L22/ */ _L22;
  ParabolaCurveSpeeds_T_CalcBrakingCurves_types /* _L23/ */ _L23;
  ParabolaCurveDistances_T_CalcBrakingCurves_types /* _L24/ */ _L24;
  kcg_int32 /* _L36/ */ _L36;
} outC_setArc_CalcBrakingCurves_Pkg_internalOperators;

/* ===========  node initialization and cycle functions  =========== */
/* CalcBrakingCurves_Pkg::internalOperators::setArc/ */
extern void setArc_CalcBrakingCurves_Pkg_internalOperators(
  /* Arc/ */
  ParabolaArc_T_CalcBrakingCurves_types *Arc,
  /* oldBC/ */
  ParabolaCurve_T_CalcBrakingCurves_types *oldBC,
  /* index/ */
  kcg_int32 index,
  outC_setArc_CalcBrakingCurves_Pkg_internalOperators *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void setArc_reset_CalcBrakingCurves_Pkg_internalOperators(
  outC_setArc_CalcBrakingCurves_Pkg_internalOperators *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void setArc_init_CalcBrakingCurves_Pkg_internalOperators(
  outC_setArc_CalcBrakingCurves_Pkg_internalOperators *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _setArc_CalcBrakingCurves_Pkg_internalOperators_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** setArc_CalcBrakingCurves_Pkg_internalOperators.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

