/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */
#ifndef _getSpeedOnCurveArc_CalcBrakingCurves_types_H_
#define _getSpeedOnCurveArc_CalcBrakingCurves_types_H_

#include "kcg_types.h"
#include "kcg_imported_functions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  V_internal_real_Type_SDM_Types_Pkg /* speed/ */ speed;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ParabolaArc_T_CalcBrakingCurves_types /* _L4/ */ _L4;
  L_internal_real_Type_SDM_Types_Pkg /* _L1/ */ _L1;
  V_internal_real_Type_SDM_Types_Pkg /* _L2/ */ _L2;
  A_internal_real_Type_SDM_Types_Pkg /* _L3/ */ _L3;
  L_internal_real_Type_SDM_Types_Pkg /* _L5/ */ _L5;
  kcg_float64 /* _L6/ */ _L6;
  kcg_float64 /* _L7/ */ _L7;
  kcg_float64 /* _L8/ */ _L8;
  kcg_float64 /* _L9/ */ _L9;
  kcg_float64 /* _L10/ */ _L10;
  kcg_float64 /* _L11/ */ _L11;
} outC_getSpeedOnCurveArc_CalcBrakingCurves_types;

/* ===========  node initialization and cycle functions  =========== */
/* CalcBrakingCurves_types::getSpeedOnCurveArc/ */
extern void getSpeedOnCurveArc_CalcBrakingCurves_types(
  /* arc/ */
  ParabolaArc_T_CalcBrakingCurves_types *arc,
  /* location/ */
  L_internal_real_Type_SDM_Types_Pkg location,
  outC_getSpeedOnCurveArc_CalcBrakingCurves_types *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void getSpeedOnCurveArc_reset_CalcBrakingCurves_types(
  outC_getSpeedOnCurveArc_CalcBrakingCurves_types *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void getSpeedOnCurveArc_init_CalcBrakingCurves_types(
  outC_getSpeedOnCurveArc_CalcBrakingCurves_types *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _getSpeedOnCurveArc_CalcBrakingCurves_types_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** getSpeedOnCurveArc_CalcBrakingCurves_types.h
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */

