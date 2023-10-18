/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _BCFoldOperatorForward_CalcBrakingCurves_Pkg_internalOperators_H_
#define _BCFoldOperatorForward_CalcBrakingCurves_Pkg_internalOperators_H_

#include "kcg_types.h"
#include "setArc_CalcBrakingCurves_Pkg_internalOperators.h"
#include "OneCycle_CalcBrakingCurves_Pkg_internalOperators.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* exitCond/ */ exitCond;
  BCAccumulator_type_CalcBrakingCurves_Pkg /* BC/ */ BC;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_setArc_CalcBrakingCurves_Pkg_internalOperators /* _L61=(CalcBrakingCurves_Pkg::internalOperators::setArc#1)/ */ Context_setArc_1;
  outC_OneCycle_CalcBrakingCurves_Pkg_internalOperators /* _L3=(CalcBrakingCurves_Pkg::internalOperators::OneCycle#1)/ */ Context_OneCycle_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ParabolaArc_T_CalcBrakingCurves_types /* _L4/ */ _L4;
  L_internal_real_Type_SDM_Types_Pkg /* _L3/ */ _L3;
  V_internal_real_Type_SDM_Types_Pkg /* _L2/ */ _L2;
  kcg_int64 /* _L1/ */ _L1;
  ASafe_T_CalcBrakingCurves_types /* _L6/ */ _L6;
  kcg_int64 /* _L18/ */ _L18;
  kcg_bool /* _L32/ */ _L32;
  V_internal_real_Type_SDM_Types_Pkg /* _L33/ */ _L33;
  BCAccumulator_type_CalcBrakingCurves_Pkg /* _L36/ */ _L36;
  L_internal_real_Type_SDM_Types_Pkg /* _L41/ */ _L41;
  V_internal_real_Type_SDM_Types_Pkg /* _L40/ */ _L40;
  kcg_int64 /* _L39/ */ _L39;
  kcg_int64 /* _L38/ */ _L38;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L37/ */ _L37;
  BCAccumulator_type_CalcBrakingCurves_Pkg /* _L42/ */ _L42;
  kcg_int64 /* _L58/ */ _L58;
  kcg_bool /* _L59/ */ _L59;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L61/ */ _L61;
} outC_BCFoldOperatorForward_CalcBrakingCurves_Pkg_internalOperators;

/* ===========  node initialization and cycle functions  =========== */
/* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward/ */
extern void BCFoldOperatorForward_CalcBrakingCurves_Pkg_internalOperators(
  /* Index/ */
  kcg_int64 Index,
  /* BC_acc/ */
  BCAccumulator_type_CalcBrakingCurves_Pkg *BC_acc,
  /* Asafe/ */
  ASafe_T_CalcBrakingCurves_types *Asafe,
  /* LOA_MRSP_Target_speed/ */
  V_internal_real_Type_SDM_Types_Pkg LOA_MRSP_Target_speed,
  outC_BCFoldOperatorForward_CalcBrakingCurves_Pkg_internalOperators *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void BCFoldOperatorForward_reset_CalcBrakingCurves_Pkg_internalOperators(
  outC_BCFoldOperatorForward_CalcBrakingCurves_Pkg_internalOperators *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void BCFoldOperatorForward_init_CalcBrakingCurves_Pkg_internalOperators(
  outC_BCFoldOperatorForward_CalcBrakingCurves_Pkg_internalOperators *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _BCFoldOperatorForward_CalcBrakingCurves_Pkg_internalOperators_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** BCFoldOperatorForward_CalcBrakingCurves_Pkg_internalOperators.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

