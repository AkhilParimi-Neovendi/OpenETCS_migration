/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */
#ifndef _popLeadingArc_CalcBrakingCurves_Pkg_internalOperators_H_
#define _popLeadingArc_CalcBrakingCurves_Pkg_internalOperators_H_

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
  array_bool_113 /* _L15/ */ _L15;
  ParabolaCurveValid_T_CalcBrakingCurves_types /* _L16/ */ _L16;
  array_bool_1 /* _L17/ */ _L17;
  kcg_bool /* _L18/ */ _L18;
  array_float64_113 /* _L19/ */ _L19;
  array_float64_114 /* _L22/ */ _L22;
  array_float64_114 /* _L23/ */ _L23;
  array_float64_114 /* _L24/ */ _L24;
  array_float64_113 /* _L25/ */ _L25;
  array_float64_113 /* _L26/ */ _L26;
  kcg_float64 /* _L27/ */ _L27;
  array_float64_1 /* _L28/ */ _L28;
  array_float64_1 /* _L40/ */ _L40;
  kcg_float64 /* _L39/ */ _L39;
  kcg_float64 /* _L42/ */ _L42;
  array_float64_1 /* _L41/ */ _L41;
} outC_popLeadingArc_CalcBrakingCurves_Pkg_internalOperators;

/* ===========  node initialization and cycle functions  =========== */
/* CalcBrakingCurves_Pkg::internalOperators::popLeadingArc/ */
extern void popLeadingArc_CalcBrakingCurves_Pkg_internalOperators(
  /* oldBC/ */
  ParabolaCurve_T_CalcBrakingCurves_types *oldBC,
  outC_popLeadingArc_CalcBrakingCurves_Pkg_internalOperators *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void popLeadingArc_reset_CalcBrakingCurves_Pkg_internalOperators(
  outC_popLeadingArc_CalcBrakingCurves_Pkg_internalOperators *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void popLeadingArc_init_CalcBrakingCurves_Pkg_internalOperators(
  outC_popLeadingArc_CalcBrakingCurves_Pkg_internalOperators *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _popLeadingArc_CalcBrakingCurves_Pkg_internalOperators_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** popLeadingArc_CalcBrakingCurves_Pkg_internalOperators.h
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */

