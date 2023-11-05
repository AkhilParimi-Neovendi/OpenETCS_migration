/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _AGradient_SDM_GradientAcceleration_Pkg_H_
#define _AGradient_SDM_GradientAcceleration_Pkg_H_

#include "kcg_types.h"
#include "CalcA_Gradient_SDM_GradientAcceleration_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  A_gradient_t_SDM_GradientAcceleration_types /* A_gradient/ */ A_gradient;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  A_gradient_t_SDM_GradientAcceleration_types /* _L1/ */ _L1;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CalcA_Gradient_SDM_GradientAcceleration_Pkg /* _L1=(SDM_GradientAcceleration_Pkg::CalcA_Gradient#1)/ */ Context_CalcA_Gradient_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  TrainLocations_real_T_SDM_Types_Pkg /* _L2/ */ _L2;
  GradientProfile_real_t_SDM_GradientAcceleration_types /* _L3/ */ _L3;
  trainData_T_TIU_Types_Pkg /* _L4/ */ _L4;
  TargetCollection_T_TargetManagement_types /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  L_internal_real_Type_SDM_Types_Pkg /* _L12/ */ _L12;
  TargetType_T_TargetManagement_types /* _L13/ */ _L13;
  kcg_bool /* _L15/ */ _L15;
  kcg_bool /* _L16/ */ _L16;
  A_gradient_element_t_SDM_GradientAcceleration_types /* _L17/ */ _L17;
  kcg_float32 /* _L18/ */ _L18;
  kcg_bool /* _L19/ */ _L19;
  A_gradient_t_SDM_GradientAcceleration_types /* _L20/ */ _L20;
  kcg_bool /* _L21/ */ _L21;
  TargetType_T_TargetManagement_types /* _L22/ */ _L22;
  L_internal_real_Type_SDM_Types_Pkg /* _L23/ */ _L23;
  kcg_bool /* _L25/ */ _L25;
  Target_real_T_TargetManagement_types /* _L24/ */ _L24;
  Target_real_T_TargetManagement_types /* _L26/ */ _L26;
  TargetCollection_T_TargetManagement_types /* _L27/ */ _L27;
  TargetCollection_T_TargetManagement_types /* _L29/ */ _L29;
} outC_AGradient_SDM_GradientAcceleration_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_GradientAcceleration_Pkg::AGradient/ */
extern void AGradient_SDM_GradientAcceleration_Pkg(
  /* TrainLocations/ */
  TrainLocations_real_T_SDM_Types_Pkg *TrainLocations,
  /* GradientProfile/ */
  GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  /* GradientProfile_updated/ */
  kcg_bool GradientProfile_updated,
  /* trainData/ */
  trainData_T_TIU_Types_Pkg *trainData,
  /* targetCollection/ */
  TargetCollection_T_TargetManagement_types *targetCollection,
  outC_AGradient_SDM_GradientAcceleration_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void AGradient_reset_SDM_GradientAcceleration_Pkg(
  outC_AGradient_SDM_GradientAcceleration_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void AGradient_init_SDM_GradientAcceleration_Pkg(
  outC_AGradient_SDM_GradientAcceleration_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _AGradient_SDM_GradientAcceleration_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** AGradient_SDM_GradientAcceleration_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

