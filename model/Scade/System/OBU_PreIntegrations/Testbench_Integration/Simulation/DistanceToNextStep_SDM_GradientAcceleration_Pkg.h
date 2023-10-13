/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */
#ifndef _DistanceToNextStep_SDM_GradientAcceleration_Pkg_H_
#define _DistanceToNextStep_SDM_GradientAcceleration_Pkg_H_

#include "kcg_types.h"
#include "selectGradientOffset_SDM_GradientAcceleration_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  L_internal_real_Type_SDM_Types_Pkg /* distance/ */ distance;
  kcg_bool /* validDistance/ */ validDistance;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_selectGradientOffset_SDM_GradientAcceleration_Pkg /* _L15=(SDM_GradientAcceleration_Pkg::selectGradientOffset#2)/ */ Context_selectGradientOffset_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  GradientProfile_real_t_SDM_GradientAcceleration_types /* _L3/ */ _L3;
  kcg_int64 /* _L2/ */ _L2;
  L_internal_real_Type_SDM_Types_Pkg /* _L1/ */ _L1;
  kcg_float64 /* _L4/ */ _L4;
  L_internal_real_Type_SDM_Types_Pkg /* _L5/ */ _L5;
  kcg_int64 /* _L6/ */ _L6;
  kcg_bool /* _L13/ */ _L13;
  Gradient_section_real_t_SDM_GradientAcceleration_types /* _L15/ */ _L15;
} outC_DistanceToNextStep_SDM_GradientAcceleration_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_GradientAcceleration_Pkg::DistanceToNextStep/ */
extern void DistanceToNextStep_SDM_GradientAcceleration_Pkg(
  /* position/ */
  L_internal_real_Type_SDM_Types_Pkg position,
  /* relatedIndex/ */
  kcg_int64 relatedIndex,
  /* GradientProfile/ */
  GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  outC_DistanceToNextStep_SDM_GradientAcceleration_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void DistanceToNextStep_reset_SDM_GradientAcceleration_Pkg(
  outC_DistanceToNextStep_SDM_GradientAcceleration_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void DistanceToNextStep_init_SDM_GradientAcceleration_Pkg(
  outC_DistanceToNextStep_SDM_GradientAcceleration_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _DistanceToNextStep_SDM_GradientAcceleration_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** DistanceToNextStep_SDM_GradientAcceleration_Pkg.h
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */

