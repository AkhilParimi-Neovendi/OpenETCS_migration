/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _makeEmptyParabolaCurve_CalcBrakingCurves_types_H_
#define _makeEmptyParabolaCurve_CalcBrakingCurves_types_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ParabolaCurve_T_CalcBrakingCurves_types /* Curve/ */ Curve;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ParabolaCurve_T_CalcBrakingCurves_types /* _L13/ */ _L13;
  array_float32_114 /* _L14/ */ _L14;
  ParabolaCurveValid_T_CalcBrakingCurves_types /* _L16/ */ _L16;
  kcg_bool /* _L18/ */ _L18;
  kcg_float32 /* _L19/ */ _L19;
} outC_makeEmptyParabolaCurve_CalcBrakingCurves_types;

/* ===========  node initialization and cycle functions  =========== */
/* CalcBrakingCurves_types::makeEmptyParabolaCurve/ */
extern void makeEmptyParabolaCurve_CalcBrakingCurves_types(
  outC_makeEmptyParabolaCurve_CalcBrakingCurves_types *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void makeEmptyParabolaCurve_reset_CalcBrakingCurves_types(
  outC_makeEmptyParabolaCurve_CalcBrakingCurves_types *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void makeEmptyParabolaCurve_init_CalcBrakingCurves_types(
  outC_makeEmptyParabolaCurve_CalcBrakingCurves_types *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _makeEmptyParabolaCurve_CalcBrakingCurves_types_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** makeEmptyParabolaCurve_CalcBrakingCurves_types.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

