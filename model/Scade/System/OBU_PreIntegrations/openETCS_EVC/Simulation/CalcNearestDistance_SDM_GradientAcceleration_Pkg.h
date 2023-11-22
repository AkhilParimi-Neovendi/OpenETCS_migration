/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _CalcNearestDistance_SDM_GradientAcceleration_Pkg_H_
#define _CalcNearestDistance_SDM_GradientAcceleration_Pkg_H_

#include "kcg_types.h"
#include "DistanceToNextStep_SDM_GradientAcceleration_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* oneValid/ */ oneValid;
  kcg_float32 /* NearestDistance/ */ NearestDistance;
  kcg_bool /* nearestDistanceIsFrontend/ */ nearestDistanceIsFrontend;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_DistanceToNextStep_SDM_GradientAcceleration_Pkg /* _L5=(SDM_GradientAcceleration_Pkg::DistanceToNextStep)/ */ Context_DistanceToNextStep;
  outC_DistanceToNextStep_SDM_GradientAcceleration_Pkg /* _L9=(SDM_GradientAcceleration_Pkg::DistanceToNextStep#1)/ */ Context_DistanceToNextStep_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  GradientProfile_real_t_SDM_GradientAcceleration_types /* _L2/ */ _L2;
  kcg_int32 /* _L3/ */ _L3;
  L_internal_real_Type_SDM_Types_Pkg /* _L4/ */ _L4;
  L_internal_real_Type_SDM_Types_Pkg /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  L_internal_real_Type_SDM_Types_Pkg /* _L7/ */ _L7;
  kcg_int32 /* _L8/ */ _L8;
  L_internal_real_Type_SDM_Types_Pkg /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  L_internal_real_Type_SDM_Types_Pkg /* _L11/ */ _L11;
  kcg_bool /* _L12/ */ _L12;
  kcg_bool /* _L13/ */ _L13;
  ACC_SDM_GradientAcceleration_Pkg /* _L14/ */ _L14;
  GradientProfile_real_t_SDM_GradientAcceleration_types /* _L17/ */ _L17;
  kcg_bool /* _L18/ */ _L18;
} outC_CalcNearestDistance_SDM_GradientAcceleration_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_GradientAcceleration_Pkg::CalcNearestDistance/ */
extern void CalcNearestDistance_SDM_GradientAcceleration_Pkg(
  /* Accu/ */
  ACC_SDM_GradientAcceleration_Pkg *Accu,
  /* GradientProfile/ */
  GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  outC_CalcNearestDistance_SDM_GradientAcceleration_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CalcNearestDistance_reset_SDM_GradientAcceleration_Pkg(
  outC_CalcNearestDistance_SDM_GradientAcceleration_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CalcNearestDistance_init_SDM_GradientAcceleration_Pkg(
  outC_CalcNearestDistance_SDM_GradientAcceleration_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CalcNearestDistance_SDM_GradientAcceleration_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CalcNearestDistance_SDM_GradientAcceleration_Pkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

