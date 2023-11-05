/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _v_release_TargetLimits_Pkg_H_
#define _v_release_TargetLimits_Pkg_H_

#include "kcg_types.h"
#include "d_tripEOA_TargetLimits_Pkg.h"
#include "v_ReleaseOnboardIterator_TargetLimits_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  V_internal_real_Type_SDM_Types_Pkg /* V_release/ */ V_release;
  kcg_bool /* valid/ */ valid;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_v_ReleaseOnboardIterator_TargetLimits_Pkg /* _L12=(TargetLimits_Pkg::v_ReleaseOnboardIterator#1)/ */ Context_v_ReleaseOnboardIterator_1[10];
  outC_d_tripEOA_TargetLimits_Pkg /* _L21=(TargetLimits_Pkg::d_tripEOA#1)/ */ Context_d_tripEOA_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  V_internal_real_Type_SDM_Types_Pkg /* _L9/ */ _L9;
  kcg_int32 /* _L12/ */ _L12;
  _88_array /* _L14/ */ _L14;
  array_float32_10 /* _L15/ */ _L15;
  array_float32_10 /* _L16/ */ _L16;
  array_float32_10 /* _L17/ */ _L17;
  _7_array /* _L19/ */ _L19;
  L_internal_real_Type_SDM_Types_Pkg /* _L21/ */ _L21;
  V_internal_real_Type_SDM_Types_Pkg /* _L23/ */ _L23;
  V_internal_real_Type_SDM_Types_Pkg /* _L24/ */ _L24;
  V_internal_real_Type_SDM_Types_Pkg /* _L25/ */ _L25;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L26/ */ _L26;
  T_trac_t_TargetLimits_Pkg /* _L28/ */ _L28;
  L_internal_real_Type_SDM_Types_Pkg /* _L33/ */ _L33;
  kcg_bool /* _L46/ */ _L46;
  kcg_float32 /* _L47/ */ _L47;
  V_internal_real_Type_SDM_Types_Pkg /* _L55/ */ _L55;
  kcg_bool /* _L57/ */ _L57;
  kcg_bool /* _L58/ */ _L58;
  MA_section_real_T_TargetManagement_types /* _L59/ */ _L59;
  kcg_bool /* _L60/ */ _L60;
  V_internal_real_Type_SDM_Types_Pkg /* _L61/ */ _L61;
  TrainLocations_real_T_SDM_Types_Pkg /* _L63/ */ _L63;
  trainData_internal_t_SDM_Types_Pkg /* _L64/ */ _L64;
} outC_v_release_TargetLimits_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* TargetLimits_Pkg::v_release/ */
extern void v_release_TargetLimits_Pkg(
  /* EBDcurve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* V_target/ */
  V_internal_real_Type_SDM_Types_Pkg V_target,
  /* D_EOA/ */
  L_internal_real_Type_SDM_Types_Pkg D_EOA,
  /* MA/ */
  MA_section_real_T_TargetManagement_types *MA,
  /* V_ura/ */
  V_internal_real_Type_SDM_Types_Pkg V_ura,
  /* trainLocations/ */
  TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  /* trainData_int/ */
  trainData_internal_t_SDM_Types_Pkg *trainData_int,
  /* T/ */
  T_trac_t_TargetLimits_Pkg *T,
  outC_v_release_TargetLimits_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void v_release_reset_TargetLimits_Pkg(
  outC_v_release_TargetLimits_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void v_release_init_TargetLimits_Pkg(
  outC_v_release_TargetLimits_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _v_release_TargetLimits_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** v_release_TargetLimits_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

