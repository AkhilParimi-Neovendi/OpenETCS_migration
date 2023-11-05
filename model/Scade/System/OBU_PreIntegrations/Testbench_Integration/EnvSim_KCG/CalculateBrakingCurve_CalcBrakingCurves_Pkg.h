/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _CalculateBrakingCurve_CalcBrakingCurves_Pkg_H_
#define _CalculateBrakingCurve_CalcBrakingCurves_Pkg_H_

#include "kcg_types.h"
#include "emptyBCAcc_CalcBrakingCurves_Pkg.h"
#include "InitalValues_CalcBrakingCurves_Pkg_internalOperators.h"
#include "SortByDistances_CalcBrakingCurves_Pkg_internalOperators.h"
#include "BCFoldOperatorBackward_CalcBrakingCurves_Pkg_internalOperators.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* cond/ */ cond;
  ParabolaCurve_T_CalcBrakingCurves_types /* BC/ */ BC;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SortByDistances_CalcBrakingCurves_Pkg_internalOperators /* _L114=(CalcBrakingCurves_Pkg::internalOperators::SortByDistances)/ */ Context_SortByDistances;
  outC_BCFoldOperatorBackward_CalcBrakingCurves_Pkg_internalOperators /* _L9=(CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward#1)/ */ Context_BCFoldOperatorBackward_1[113];
  outC_emptyBCAcc_CalcBrakingCurves_Pkg /* _L134=(CalcBrakingCurves_Pkg::emptyBCAcc)/ */ Context_emptyBCAcc;
  outC_InitalValues_CalcBrakingCurves_Pkg_internalOperators /* _L97=(CalcBrakingCurves_Pkg::internalOperators::InitalValues)/ */ Context_InitalValues;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L9/ */ _L9;
  _10_array /* _L11/ */ _L11;
  array_float32_113 /* _L12/ */ _L12;
  ASafe_T_CalcBrakingCurves_types /* _L13/ */ _L13;
  L_internal_real_Type_SDM_Types_Pkg /* _L15/ */ _L15;
  BCAccumulator_type_CalcBrakingCurves_Pkg /* _L19/ */ _L19;
  BCAccumulator_type_CalcBrakingCurves_Pkg /* _L97/ */ _L97;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L114/ */ _L114;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L125/ */ _L125;
  BCAccumulator_type_CalcBrakingCurves_Pkg /* _L134/ */ _L134;
  Target_real_T_TargetManagement_types /* _L136/ */ _L136;
  ASafe_T_CalcBrakingCurves_types /* _L137/ */ _L137;
  kcg_bool /* _L138/ */ _L138;
  TargetType_T_TargetManagement_types /* _L139/ */ _L139;
  TargetType_T_TargetManagement_types /* _L140/ */ _L140;
} outC_CalculateBrakingCurve_CalcBrakingCurves_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalcBrakingCurves_Pkg::CalculateBrakingCurve/ */
extern void CalculateBrakingCurve_CalcBrakingCurves_Pkg(
  /* Asafe/ */
  ASafe_T_CalcBrakingCurves_types *Asafe,
  /* Target/ */
  Target_real_T_TargetManagement_types *Target,
  /* d_est_front/ */
  L_internal_real_Type_SDM_Types_Pkg d_est_front,
  outC_CalculateBrakingCurve_CalcBrakingCurves_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CalculateBrakingCurve_reset_CalcBrakingCurves_Pkg(
  outC_CalculateBrakingCurve_CalcBrakingCurves_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CalculateBrakingCurve_init_CalcBrakingCurves_Pkg(
  outC_CalculateBrakingCurve_CalcBrakingCurves_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CalculateBrakingCurve_CalcBrakingCurves_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CalculateBrakingCurve_CalcBrakingCurves_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

