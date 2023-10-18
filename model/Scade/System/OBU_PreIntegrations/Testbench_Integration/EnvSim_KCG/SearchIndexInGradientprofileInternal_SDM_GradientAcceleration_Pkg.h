/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _SearchIndexInGradientprofileInternal_SDM_GradientAcceleration_Pkg_H_
#define _SearchIndexInGradientprofileInternal_SDM_GradientAcceleration_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* cond/ */ cond;
  kcg_int64 /* indexOfPositionOut/ */ indexOfPositionOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* _L1/ */ _L1;
  kcg_int64 /* _L2/ */ _L2;
  L_internal_real_Type_SDM_Types_Pkg /* _L3/ */ _L3;
  GradientProfile_real_t_SDM_GradientAcceleration_types /* _L4/ */ _L4;
  Gradient_section_real_t_SDM_GradientAcceleration_types /* _L5/ */ _L5;
  kcg_int64 /* _L6/ */ _L6;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  Gradient_section_real_t_SDM_GradientAcceleration_types /* _L12/ */ _L12;
  kcg_float64 /* _L13/ */ _L13;
  kcg_bool /* _L14/ */ _L14;
  L_internal_real_Type_SDM_Types_Pkg /* _L15/ */ _L15;
} outC_SearchIndexInGradientprofileInternal_SDM_GradientAcceleration_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_GradientAcceleration_Pkg::SearchIndexInGradientprofileInternal/ */
extern void SearchIndexInGradientprofileInternal_SDM_GradientAcceleration_Pkg(
  /* index/ */
  kcg_int64 index,
  /* indexOfPosition/ */
  kcg_int64 indexOfPosition,
  /* position/ */
  L_internal_real_Type_SDM_Types_Pkg position,
  /* GradientProfile/ */
  GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  outC_SearchIndexInGradientprofileInternal_SDM_GradientAcceleration_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SearchIndexInGradientprofileInternal_reset_SDM_GradientAcceleration_Pkg(
  outC_SearchIndexInGradientprofileInternal_SDM_GradientAcceleration_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SearchIndexInGradientprofileInternal_init_SDM_GradientAcceleration_Pkg(
  outC_SearchIndexInGradientprofileInternal_SDM_GradientAcceleration_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _SearchIndexInGradientprofileInternal_SDM_GradientAcceleration_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SearchIndexInGradientprofileInternal_SDM_GradientAcceleration_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

