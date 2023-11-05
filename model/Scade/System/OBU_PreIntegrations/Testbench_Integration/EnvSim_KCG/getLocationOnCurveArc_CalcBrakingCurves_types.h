/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _getLocationOnCurveArc_CalcBrakingCurves_types_H_
#define _getLocationOnCurveArc_CalcBrakingCurves_types_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  L_internal_real_Type_SDM_Types_Pkg /* location/ */ location;
  kcg_bool /* valid/ */ valid;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* --------------------- (-debug) assertions  ---------------------- */
  kcg_bool /* A1= */ A1;
  /* ------------------- (-debug) local variables -------------------- */
  ParabolaArc_T_CalcBrakingCurves_types /* _L1/ */ _L1;
  V_internal_real_Type_SDM_Types_Pkg /* _L2/ */ _L2;
  L_internal_real_Type_SDM_Types_Pkg /* _L5/ */ _L5;
  V_internal_real_Type_SDM_Types_Pkg /* _L4/ */ _L4;
  A_internal_real_Type_SDM_Types_Pkg /* _L3/ */ _L3;
  kcg_float32 /* _L6/ */ _L6;
  kcg_float32 /* _L7/ */ _L7;
  kcg_float32 /* _L9/ */ _L9;
  kcg_float32 /* _L10/ */ _L10;
  kcg_float32 /* _L11/ */ _L11;
  kcg_float32 /* _L15/ */ _L15;
  kcg_bool /* _L13/ */ _L13;
  kcg_float32 /* _L14/ */ _L14;
  kcg_float32 /* _L16/ */ _L16;
  kcg_float32 /* _L23/ */ _L23;
  kcg_float32 /* _L24/ */ _L24;
} outC_getLocationOnCurveArc_CalcBrakingCurves_types;

/* ===========  node initialization and cycle functions  =========== */
/* CalcBrakingCurves_types::getLocationOnCurveArc/ */
extern void getLocationOnCurveArc_CalcBrakingCurves_types(
  /* arc/ */
  ParabolaArc_T_CalcBrakingCurves_types *arc,
  /* v_est/ */
  V_internal_real_Type_SDM_Types_Pkg v_est,
  outC_getLocationOnCurveArc_CalcBrakingCurves_types *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void getLocationOnCurveArc_reset_CalcBrakingCurves_types(
  outC_getLocationOnCurveArc_CalcBrakingCurves_types *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void getLocationOnCurveArc_init_CalcBrakingCurves_types(
  outC_getLocationOnCurveArc_CalcBrakingCurves_types *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _getLocationOnCurveArc_CalcBrakingCurves_types_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** getLocationOnCurveArc_CalcBrakingCurves_types.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

