/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _FormularNewPosition_CalcBrakingCurves_Pkg_internalOperators_H_
#define _FormularNewPosition_CalcBrakingCurves_Pkg_internalOperators_H_

#include "kcg_types.h"
#include "Square_mathext_float32.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  L_internal_real_Type_SDM_Types_Pkg /* outD1/ */ outD1;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Square_mathext_float32 /* _L7=(mathext::Square#2)/ */ Context_Square_2;
  outC_Square_mathext_float32 /* _L6=(mathext::Square#1)/ */ Context_Square_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  L_internal_real_Type_SDM_Types_Pkg /* _L1/ */ _L1;
  V_internal_real_Type_SDM_Types_Pkg /* _L2/ */ _L2;
  V_internal_real_Type_SDM_Types_Pkg /* _L3/ */ _L3;
  A_internal_real_Type_SDM_Types_Pkg /* _L4/ */ _L4;
  kcg_float32 /* _L5/ */ _L5;
  V_internal_real_Type_SDM_Types_Pkg /* _L6/ */ _L6;
  V_internal_real_Type_SDM_Types_Pkg /* _L7/ */ _L7;
  kcg_float32 /* _L8/ */ _L8;
  kcg_float32 /* _L9/ */ _L9;
  kcg_float32 /* _L10/ */ _L10;
  kcg_float32 /* _L11/ */ _L11;
  kcg_float32 /* _L18/ */ _L18;
  A_internal_real_Type_SDM_Types_Pkg /* _L19/ */ _L19;
  kcg_bool /* _L20/ */ _L20;
  kcg_float32 /* _L21/ */ _L21;
} outC_FormularNewPosition_CalcBrakingCurves_Pkg_internalOperators;

/* ===========  node initialization and cycle functions  =========== */
/* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition/ */
extern void FormularNewPosition_CalcBrakingCurves_Pkg_internalOperators(
  /* inBeginDistance/ */
  L_internal_real_Type_SDM_Types_Pkg inBeginDistance,
  /* inEndSpeed/ */
  V_internal_real_Type_SDM_Types_Pkg inEndSpeed,
  /* inBeginSpeed/ */
  V_internal_real_Type_SDM_Types_Pkg inBeginSpeed,
  /* inAcceleration/ */
  A_internal_real_Type_SDM_Types_Pkg inAcceleration,
  outC_FormularNewPosition_CalcBrakingCurves_Pkg_internalOperators *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void FormularNewPosition_reset_CalcBrakingCurves_Pkg_internalOperators(
  outC_FormularNewPosition_CalcBrakingCurves_Pkg_internalOperators *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void FormularNewPosition_init_CalcBrakingCurves_Pkg_internalOperators(
  outC_FormularNewPosition_CalcBrakingCurves_Pkg_internalOperators *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _FormularNewPosition_CalcBrakingCurves_Pkg_internalOperators_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** FormularNewPosition_CalcBrakingCurves_Pkg_internalOperators.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

