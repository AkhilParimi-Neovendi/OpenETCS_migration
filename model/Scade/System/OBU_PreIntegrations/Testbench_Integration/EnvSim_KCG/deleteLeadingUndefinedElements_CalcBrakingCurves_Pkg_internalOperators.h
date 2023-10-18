/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _deleteLeadingUndefinedElements_CalcBrakingCurves_Pkg_internalOperators_H_
#define _deleteLeadingUndefinedElements_CalcBrakingCurves_Pkg_internalOperators_H_

#include "kcg_types.h"
#include "popLeadingArc_CalcBrakingCurves_Pkg_internalOperators.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* condition/ */ condition;
  ParabolaCurve_T_CalcBrakingCurves_types /* newCurve/ */ newCurve;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_popLeadingArc_CalcBrakingCurves_Pkg_internalOperators /* _L23=(CalcBrakingCurves_Pkg::internalOperators::popLeadingArc)/ */ Context_popLeadingArc;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ParabolaCurve_T_CalcBrakingCurves_types /* _L2/ */ _L2;
  kcg_bool /* _L21/ */ _L21;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L23/ */ _L23;
  ParabolaCurveValid_T_CalcBrakingCurves_types /* _L24/ */ _L24;
  kcg_bool /* _L25/ */ _L25;
} outC_deleteLeadingUndefinedElements_CalcBrakingCurves_Pkg_internalOperators;

/* ===========  node initialization and cycle functions  =========== */
/* CalcBrakingCurves_Pkg::internalOperators::deleteLeadingUndefinedElements/ */
extern void deleteLeadingUndefinedElements_CalcBrakingCurves_Pkg_internalOperators(
  /* oldCurve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *oldCurve,
  outC_deleteLeadingUndefinedElements_CalcBrakingCurves_Pkg_internalOperators *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void deleteLeadingUndefinedElements_reset_CalcBrakingCurves_Pkg_internalOperators(
  outC_deleteLeadingUndefinedElements_CalcBrakingCurves_Pkg_internalOperators *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void deleteLeadingUndefinedElements_init_CalcBrakingCurves_Pkg_internalOperators(
  outC_deleteLeadingUndefinedElements_CalcBrakingCurves_Pkg_internalOperators *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _deleteLeadingUndefinedElements_CalcBrakingCurves_Pkg_internalOperators_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** deleteLeadingUndefinedElements_CalcBrakingCurves_Pkg_internalOperators.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

