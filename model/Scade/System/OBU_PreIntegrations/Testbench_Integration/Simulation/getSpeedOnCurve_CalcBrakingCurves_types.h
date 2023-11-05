/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _getSpeedOnCurve_CalcBrakingCurves_types_H_
#define _getSpeedOnCurve_CalcBrakingCurves_types_H_

#include "kcg_types.h"
#include "getSpeedOnCurveArc_CalcBrakingCurves_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* valid/ */ valid;
  V_internal_real_Type_SDM_Types_Pkg /* speed/ */ speed;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_getSpeedOnCurveArc_CalcBrakingCurves_types /* _L15=(CalcBrakingCurves_types::getSpeedOnCurveArc#1)/ */ Context_getSpeedOnCurveArc_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ParabolaCurveValid_T_CalcBrakingCurves_types /* @1/_L93/ */ _L93_searchIdxFloor_1;
  ParabolaCurveValid_T_CalcBrakingCurves_types /* @1/_L92/ */ _L92_searchIdxFloor_1;
  array_float32_114 /* @1/_L90/ */ _L90_searchIdxFloor_1;
  array_float32_114 /* @1/_L89/ */ _L89_searchIdxFloor_1;
  ParabolaCurveValid_T_CalcBrakingCurves_types /* @1/_L88/ */ _L88_searchIdxFloor_1;
  array_int32_114 /* @1/_L86/ */ _L86_searchIdxFloor_1;
  array_float32_114 /* @1/_L74/ */ _L74_searchIdxFloor_1;
  array_int32_114 /* @1/_L84/ */ _L84_searchIdxFloor_1;
  ParabolaCurveValid_T_CalcBrakingCurves_types /* @1/_L77/ */ _L77_searchIdxFloor_1;
  array_float32_114 /* @1/_L40/ */ _L40_searchIdxFloor_1;
  array_int32_114 /* @1/_L8/ */ _L8_searchIdxFloor_1;
  kcg_int32 /* idx/ */ idx;
  ParabolaArc_T_CalcBrakingCurves_types /* _L17/ */ _L17;
  array_float32_114 /* _L16/ */ _L16;
  V_internal_real_Type_SDM_Types_Pkg /* _L15/ */ _L15;
  kcg_int32 /* _L14/ */ _L14;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L13/ */ _L13;
  kcg_bool /* _L12/ */ _L12;
  kcg_float32 /* _L11/ */ _L11;
  ParabolaCurveDistances_T_CalcBrakingCurves_types /* _L7/ */ _L7;
  ParabolaCurveSpeeds_T_CalcBrakingCurves_types /* _L8/ */ _L8;
  ParabolaCurveAccelerations_T_CalcBrakingCurves_types /* _L9/ */ _L9;
  ParabolaCurveValid_T_CalcBrakingCurves_types /* _L10/ */ _L10;
  kcg_float32 /* _L6/ */ _L6;
  kcg_int32 /* _L5/ */ _L5;
  kcg_float32 /* _L2/ */ _L2;
  L_internal_real_Type_SDM_Types_Pkg /* _L18/ */ _L18;
  L_internal_real_Type_SDM_Types_Pkg /* _L19/ */ _L19;
  kcg_int32 /* _L20/ */ _L20;
  kcg_int32 /* _L21/ */ _L21;
  kcg_bool /* _L22/ */ _L22;
  kcg_bool /* _L23/ */ _L23;
  kcg_float32 /* _L25/ */ _L25;
  kcg_bool /* _L24/ */ _L24;
} outC_getSpeedOnCurve_CalcBrakingCurves_types;

/* ===========  node initialization and cycle functions  =========== */
/* CalcBrakingCurves_types::getSpeedOnCurve/ */
extern void getSpeedOnCurve_CalcBrakingCurves_types(
  /* curve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *curve,
  /* position/ */
  L_internal_real_Type_SDM_Types_Pkg position,
  outC_getSpeedOnCurve_CalcBrakingCurves_types *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void getSpeedOnCurve_reset_CalcBrakingCurves_types(
  outC_getSpeedOnCurve_CalcBrakingCurves_types *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void getSpeedOnCurve_init_CalcBrakingCurves_types(
  outC_getSpeedOnCurve_CalcBrakingCurves_types *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: CalcBrakingCurves_types::getSpeedOnCurve/
  @1: (CalcBrakingCurves_types::searchIdxFloor#1)
*/

#endif /* _getSpeedOnCurve_CalcBrakingCurves_types_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** getSpeedOnCurve_CalcBrakingCurves_types.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

