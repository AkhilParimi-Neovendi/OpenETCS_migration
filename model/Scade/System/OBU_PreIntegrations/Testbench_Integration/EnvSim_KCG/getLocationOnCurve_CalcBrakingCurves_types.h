/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _getLocationOnCurve_CalcBrakingCurves_types_H_
#define _getLocationOnCurve_CalcBrakingCurves_types_H_

#include "kcg_types.h"
#include "getLocationOnCurveArc_CalcBrakingCurves_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* valid/ */ valid;
  L_internal_real_Type_SDM_Types_Pkg /* location/ */ location;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_getLocationOnCurveArc_CalcBrakingCurves_types /* _L35=(CalcBrakingCurves_types::getLocationOnCurveArc#1)/ */ Context_getLocationOnCurveArc_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ParabolaCurveValid_T_CalcBrakingCurves_types /* @1/_L115/ */ _L115_searchIdxFloorBackward_1;
  ParabolaCurveValid_T_CalcBrakingCurves_types /* @1/_L114/ */ _L114_searchIdxFloorBackward_1;
  array_float32_114 /* @1/_L112/ */ _L112_searchIdxFloorBackward_1;
  array_float32_114 /* @1/_L111/ */ _L111_searchIdxFloorBackward_1;
  ParabolaCurveValid_T_CalcBrakingCurves_types /* @1/_L90/ */ _L90_searchIdxFloorBackward_1;
  array_int32_114 /* @1/_L86/ */ _L86_searchIdxFloorBackward_1;
  array_float32_114 /* @1/_L74/ */ _L74_searchIdxFloorBackward_1;
  array_int32_114 /* @1/_L84/ */ _L84_searchIdxFloorBackward_1;
  array_float32_114 /* @1/_L40/ */ _L40_searchIdxFloorBackward_1;
  array_int32_114 /* @1/_L8/ */ _L8_searchIdxFloorBackward_1;
  kcg_int32 /* idx/ */ idx;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L1/ */ _L1;
  V_internal_real_Type_SDM_Types_Pkg /* _L2/ */ _L2;
  kcg_int32 /* _L17/ */ _L17;
  array_float32_114 /* _L15/ */ _L15;
  kcg_float32 /* _L34/ */ _L34;
  ParabolaArc_T_CalcBrakingCurves_types /* _L32/ */ _L32;
  kcg_float32 /* _L31/ */ _L31;
  kcg_bool /* _L30/ */ _L30;
  kcg_float32 /* _L28/ */ _L28;
  ParabolaCurveDistances_T_CalcBrakingCurves_types /* _L24/ */ _L24;
  ParabolaCurveSpeeds_T_CalcBrakingCurves_types /* _L25/ */ _L25;
  ParabolaCurveAccelerations_T_CalcBrakingCurves_types /* _L26/ */ _L26;
  ParabolaCurveValid_T_CalcBrakingCurves_types /* _L27/ */ _L27;
  L_internal_real_Type_SDM_Types_Pkg /* _L35/ */ _L35;
  V_internal_real_Type_SDM_Types_Pkg /* _L36/ */ _L36;
  kcg_int32 /* _L39/ */ _L39;
  kcg_bool /* _L40/ */ _L40;
  kcg_int32 /* _L43/ */ _L43;
  kcg_int32 /* _L44/ */ _L44;
  kcg_bool /* _L45/ */ _L45;
} outC_getLocationOnCurve_CalcBrakingCurves_types;

/* ===========  node initialization and cycle functions  =========== */
/* CalcBrakingCurves_types::getLocationOnCurve/ */
extern void getLocationOnCurve_CalcBrakingCurves_types(
  /* curve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *curve,
  /* speed/ */
  V_internal_real_Type_SDM_Types_Pkg speed,
  outC_getLocationOnCurve_CalcBrakingCurves_types *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void getLocationOnCurve_reset_CalcBrakingCurves_types(
  outC_getLocationOnCurve_CalcBrakingCurves_types *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void getLocationOnCurve_init_CalcBrakingCurves_types(
  outC_getLocationOnCurve_CalcBrakingCurves_types *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: CalcBrakingCurves_types::getLocationOnCurve/
  @1: (CalcBrakingCurves_types::searchIdxFloorBackward#1)
*/

#endif /* _getLocationOnCurve_CalcBrakingCurves_types_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** getLocationOnCurve_CalcBrakingCurves_types.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

