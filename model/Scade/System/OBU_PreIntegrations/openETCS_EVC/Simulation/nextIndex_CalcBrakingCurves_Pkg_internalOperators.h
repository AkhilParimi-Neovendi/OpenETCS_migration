/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _nextIndex_CalcBrakingCurves_Pkg_internalOperators_H_
#define _nextIndex_CalcBrakingCurves_Pkg_internalOperators_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* nextIndex/ */ nextIndex;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* @1/Ma_Output/ */ Ma_Output_Max_1_int32;
  kcg_int32 /* @1/I2/ */ I2_Max_1_int32;
  kcg_int32 /* @1/I1/ */ I1_Max_1_int32;
  kcg_int32 /* @1/_L4/ */ _L4_Max_1_int32;
  kcg_bool /* @1/_L3/ */ _L3_Max_1_int32;
  kcg_int32 /* @1/_L2/ */ _L2_Max_1_int32;
  kcg_int32 /* @1/_L1/ */ _L1_Max_1_int32;
  kcg_int32 /* @2/Mi_Output/ */ Mi_Output_Min_1_int32;
  kcg_int32 /* @2/I2/ */ I2_Min_1_int32;
  kcg_int32 /* @2/I1/ */ I1_Min_1_int32;
  kcg_bool /* @2/_L25/ */ _L25_Min_1_int32;
  kcg_int32 /* @2/_L24/ */ _L24_Min_1_int32;
  kcg_int32 /* @2/_L22/ */ _L22_Min_1_int32;
  kcg_int32 /* @2/_L21/ */ _L21_Min_1_int32;
  kcg_int32 /* _L2/ */ _L2;
  kcg_bool /* _L1/ */ _L1;
  kcg_int32 /* _L3/ */ _L3;
  kcg_int32 /* _L4/ */ _L4;
  kcg_int32 /* _L5/ */ _L5;
  kcg_int32 /* _L6/ */ _L6;
  kcg_int32 /* _L7/ */ _L7;
  kcg_int32 /* _L16/ */ _L16;
  kcg_int32 /* _L15/ */ _L15;
  kcg_int32 /* _L14/ */ _L14;
  kcg_int32 /* _L21/ */ _L21;
  kcg_int32 /* _L22/ */ _L22;
} outC_nextIndex_CalcBrakingCurves_Pkg_internalOperators;

/* ===========  node initialization and cycle functions  =========== */
/* CalcBrakingCurves_Pkg::internalOperators::nextIndex/ */
extern void nextIndex_CalcBrakingCurves_Pkg_internalOperators(
  /* upwards/ */
  kcg_bool upwards,
  /* currentIndex/ */
  kcg_int32 currentIndex,
  /* limit/ */
  kcg_int32 limit,
  outC_nextIndex_CalcBrakingCurves_Pkg_internalOperators *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void nextIndex_reset_CalcBrakingCurves_Pkg_internalOperators(
  outC_nextIndex_CalcBrakingCurves_Pkg_internalOperators *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void nextIndex_init_CalcBrakingCurves_Pkg_internalOperators(
  outC_nextIndex_CalcBrakingCurves_Pkg_internalOperators *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: CalcBrakingCurves_Pkg::internalOperators::nextIndex/
  @1: (math::Max#1)
  @2: (math::Min#1)
*/

#endif /* _nextIndex_CalcBrakingCurves_Pkg_internalOperators_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** nextIndex_CalcBrakingCurves_Pkg_internalOperators.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

