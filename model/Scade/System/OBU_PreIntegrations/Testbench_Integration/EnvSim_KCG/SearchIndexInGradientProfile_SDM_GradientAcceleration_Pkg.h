/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _SearchIndexInGradientProfile_SDM_GradientAcceleration_Pkg_H_
#define _SearchIndexInGradientProfile_SDM_GradientAcceleration_Pkg_H_

#include "kcg_types.h"
#include "SearchIndexInGradientprofileInternal_SDM_GradientAcceleration_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* index/ */ index;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SearchIndexInGradientprofileInternal_SDM_GradientAcceleration_Pkg /* _L3=(SDM_GradientAcceleration_Pkg::SearchIndexInGradientprofileInternal#1)/ */ Context_SearchIndexInGradientprofileInternal_1[50];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  L_internal_real_Type_SDM_Types_Pkg /* _L2/ */ _L2;
  GradientProfile_real_t_SDM_GradientAcceleration_types /* _L1/ */ _L1;
  kcg_int32 /* _L3/ */ _L3;
  kcg_int32 /* _L4/ */ _L4;
  Gradient_section_real_t_SDM_GradientAcceleration_types /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_int32 /* _L7/ */ _L7;
  array_float32_50 /* _L8/ */ _L8;
  _5_array /* _L9/ */ _L9;
  GradientProfile_real_t_SDM_GradientAcceleration_types /* _L10/ */ _L10;
} outC_SearchIndexInGradientProfile_SDM_GradientAcceleration_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_GradientAcceleration_Pkg::SearchIndexInGradientProfile/ */
extern void SearchIndexInGradientProfile_SDM_GradientAcceleration_Pkg(
  /* GradientProfile/ */
  GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  /* position/ */
  L_internal_real_Type_SDM_Types_Pkg position,
  outC_SearchIndexInGradientProfile_SDM_GradientAcceleration_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SearchIndexInGradientProfile_reset_SDM_GradientAcceleration_Pkg(
  outC_SearchIndexInGradientProfile_SDM_GradientAcceleration_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SearchIndexInGradientProfile_init_SDM_GradientAcceleration_Pkg(
  outC_SearchIndexInGradientProfile_SDM_GradientAcceleration_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _SearchIndexInGradientProfile_SDM_GradientAcceleration_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SearchIndexInGradientProfile_SDM_GradientAcceleration_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

