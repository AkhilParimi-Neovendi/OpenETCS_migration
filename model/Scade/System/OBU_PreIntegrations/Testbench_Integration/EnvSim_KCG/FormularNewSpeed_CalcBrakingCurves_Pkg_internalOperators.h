/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _FormularNewSpeed_CalcBrakingCurves_Pkg_internalOperators_H_
#define _FormularNewSpeed_CalcBrakingCurves_Pkg_internalOperators_H_

#include "kcg_types.h"
#include "kcg_imported_functions.h"
#include "Square_mathext_float32.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  V_internal_real_Type_SDM_Types_Pkg /* outSpeedAtD1/ */ outSpeedAtD1;
  kcg_bool /* valid/ */ valid;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Square_mathext_float32 /* _L11=(mathext::Square#1)/ */ Context_Square_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float32 /* _L1/ */ _L1;
  A_internal_real_Type_SDM_Types_Pkg /* _L2/ */ _L2;
  L_internal_real_Type_SDM_Types_Pkg /* _L3/ */ _L3;
  L_internal_real_Type_SDM_Types_Pkg /* _L4/ */ _L4;
  V_internal_real_Type_SDM_Types_Pkg /* _L5/ */ _L5;
  kcg_float32 /* _L6/ */ _L6;
  kcg_float32 /* _L7/ */ _L7;
  kcg_float32 /* _L9/ */ _L9;
  kcg_float32 /* _L10/ */ _L10;
  V_internal_real_Type_SDM_Types_Pkg /* _L11/ */ _L11;
  kcg_float32 /* _L12/ */ _L12;
  kcg_bool /* _L13/ */ _L13;
  kcg_float32 /* _L14/ */ _L14;
} outC_FormularNewSpeed_CalcBrakingCurves_Pkg_internalOperators;

/* ===========  node initialization and cycle functions  =========== */
/* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed/ */
extern void FormularNewSpeed_CalcBrakingCurves_Pkg_internalOperators(
  /* inAcceleration/ */
  A_internal_real_Type_SDM_Types_Pkg inAcceleration,
  /* inD0/ */
  L_internal_real_Type_SDM_Types_Pkg inD0,
  /* inD1/ */
  L_internal_real_Type_SDM_Types_Pkg inD1,
  /* inBeginSpeed/ */
  V_internal_real_Type_SDM_Types_Pkg inBeginSpeed,
  outC_FormularNewSpeed_CalcBrakingCurves_Pkg_internalOperators *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void FormularNewSpeed_reset_CalcBrakingCurves_Pkg_internalOperators(
  outC_FormularNewSpeed_CalcBrakingCurves_Pkg_internalOperators *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void FormularNewSpeed_init_CalcBrakingCurves_Pkg_internalOperators(
  outC_FormularNewSpeed_CalcBrakingCurves_Pkg_internalOperators *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _FormularNewSpeed_CalcBrakingCurves_Pkg_internalOperators_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** FormularNewSpeed_CalcBrakingCurves_Pkg_internalOperators.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

