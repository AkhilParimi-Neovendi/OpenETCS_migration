/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _SortByDistances_CalcBrakingCurves_Pkg_internalOperators_H_
#define _SortByDistances_CalcBrakingCurves_Pkg_internalOperators_H_

#include "kcg_types.h"
#include "deleteLeadingUndefinedElements_CalcBrakingCurves_Pkg_internalOperators.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ParabolaCurve_T_CalcBrakingCurves_types /* sortedBC/ */ sortedBC;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_deleteLeadingUndefinedElements_CalcBrakingCurves_Pkg_internalOperators /* _L21=(CalcBrakingCurves_Pkg::internalOperators::deleteLeadingUndefinedElements#1)/ */ Context_deleteLeadingUndefinedElements_1[114];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ParabolaCurve_T_CalcBrakingCurves_types /* _L1/ */ _L1;
  ParabolaCurveDistances_T_CalcBrakingCurves_types /* _L2/ */ _L2;
  ParabolaCurveSpeeds_T_CalcBrakingCurves_types /* _L3/ */ _L3;
  ParabolaCurveAccelerations_T_CalcBrakingCurves_types /* _L4/ */ _L4;
  ParabolaCurveValid_T_CalcBrakingCurves_types /* _L5/ */ _L5;
  ParabolaCurveDistances_T_CalcBrakingCurves_types /* _L7/ */ _L7;
  ParabolaCurveSpeeds_T_CalcBrakingCurves_types /* _L8/ */ _L8;
  ParabolaCurveAccelerations_T_CalcBrakingCurves_types /* _L9/ */ _L9;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L18/ */ _L18;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L19/ */ _L19;
  kcg_int32 /* _L21/ */ _L21;
  kcg_bool /* _L22/ */ _L22;
  ParabolaCurveValid_T_CalcBrakingCurves_types /* _L23/ */ _L23;
} outC_SortByDistances_CalcBrakingCurves_Pkg_internalOperators;

/* ===========  node initialization and cycle functions  =========== */
/* CalcBrakingCurves_Pkg::internalOperators::SortByDistances/ */
extern void SortByDistances_CalcBrakingCurves_Pkg_internalOperators(
  /* reverseBC/ */
  ParabolaCurve_T_CalcBrakingCurves_types *reverseBC,
  outC_SortByDistances_CalcBrakingCurves_Pkg_internalOperators *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SortByDistances_reset_CalcBrakingCurves_Pkg_internalOperators(
  outC_SortByDistances_CalcBrakingCurves_Pkg_internalOperators *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SortByDistances_init_CalcBrakingCurves_Pkg_internalOperators(
  outC_SortByDistances_CalcBrakingCurves_Pkg_internalOperators *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _SortByDistances_CalcBrakingCurves_Pkg_internalOperators_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SortByDistances_CalcBrakingCurves_Pkg_internalOperators.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

