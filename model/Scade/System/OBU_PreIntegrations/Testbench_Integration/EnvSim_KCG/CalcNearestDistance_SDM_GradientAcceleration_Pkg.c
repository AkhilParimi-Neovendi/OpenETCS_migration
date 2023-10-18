/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcNearestDistance_SDM_GradientAcceleration_Pkg.h"

/* SDM_GradientAcceleration_Pkg::CalcNearestDistance/ */
void CalcNearestDistance_SDM_GradientAcceleration_Pkg(
  /* Accu/ */
  ACC_SDM_GradientAcceleration_Pkg *Accu,
  /* GradientProfile/ */
  GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  outC_CalcNearestDistance_SDM_GradientAcceleration_Pkg *outC)
{
  kcg_copy_ACC_SDM_GradientAcceleration_Pkg(&outC->_L14, Accu);
  outC->_L7 = outC->_L14.rearPos;
  outC->_L8 = outC->_L14.rearIndex;
  kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types(
    &outC->_L17,
    GradientProfile);
  /* _L9=(SDM_GradientAcceleration_Pkg::DistanceToNextStep#1)/ */
  DistanceToNextStep_SDM_GradientAcceleration_Pkg(
    outC->_L7,
    outC->_L8,
    &outC->_L17,
    &outC->Context_DistanceToNextStep_1);
  outC->_L9 = outC->Context_DistanceToNextStep_1.distance;
  outC->_L10 = outC->Context_DistanceToNextStep_1.validDistance;
  outC->_L4 = outC->_L14.frontPos;
  outC->_L3 = outC->_L14.frontIndex;
  kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types(
    &outC->_L2,
    GradientProfile);
  /* _L5=(SDM_GradientAcceleration_Pkg::DistanceToNextStep)/ */
  DistanceToNextStep_SDM_GradientAcceleration_Pkg(
    outC->_L4,
    outC->_L3,
    &outC->_L2,
    &outC->Context_DistanceToNextStep);
  outC->_L5 = outC->Context_DistanceToNextStep.distance;
  outC->_L6 = outC->Context_DistanceToNextStep.validDistance;
  outC->_L12 = outC->_L5 < outC->_L9;
  outC->_L13 = outC->_L12 & outC->_L6;
  /* _L11= */
  if (outC->_L13) {
    outC->_L11 = outC->_L5;
  }
  else {
    outC->_L11 = outC->_L9;
  }
  outC->NearestDistance = outC->_L11;
  outC->_L18 = outC->_L6 | outC->_L10;
  outC->oneValid = outC->_L18;
  outC->nearestDistanceIsFrontend = outC->_L13;
}

#ifndef KCG_USER_DEFINED_INIT
void CalcNearestDistance_init_SDM_GradientAcceleration_Pkg(
  outC_CalcNearestDistance_SDM_GradientAcceleration_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;

  outC->_L18 = kcg_true;
  for (idx = 0; idx < 50; idx++) {
    outC->_L17[idx].location = kcg_lit_float64(0.0);
    outC->_L17[idx].gradient = kcg_lit_float64(0.0);
    outC->_L17[idx].valid = kcg_true;
  }
  outC->_L14.frontPos = kcg_lit_float64(0.0);
  outC->_L14.frontIndex = kcg_lit_int64(0);
  outC->_L14.rearPos = kcg_lit_float64(0.0);
  outC->_L14.rearIndex = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 100; idx1++) {
    outC->_L14.compensatedGradientProfile[idx1].location = kcg_lit_float64(0.0);
    outC->_L14.compensatedGradientProfile[idx1].gradient = kcg_lit_float64(0.0);
    outC->_L14.compensatedGradientProfile[idx1].valid = kcg_true;
  }
  outC->_L13 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L11 = kcg_lit_float64(0.0);
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_lit_float64(0.0);
  outC->_L8 = kcg_lit_int64(0);
  outC->_L7 = kcg_lit_float64(0.0);
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_lit_float64(0.0);
  outC->_L4 = kcg_lit_float64(0.0);
  outC->_L3 = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 50; idx2++) {
    outC->_L2[idx2].location = kcg_lit_float64(0.0);
    outC->_L2[idx2].gradient = kcg_lit_float64(0.0);
    outC->_L2[idx2].valid = kcg_true;
  }
  outC->nearestDistanceIsFrontend = kcg_true;
  outC->NearestDistance = kcg_lit_float64(0.0);
  outC->oneValid = kcg_true;
  /* _L5=(SDM_GradientAcceleration_Pkg::DistanceToNextStep)/ */
  DistanceToNextStep_init_SDM_GradientAcceleration_Pkg(
    &outC->Context_DistanceToNextStep);
  /* _L9=(SDM_GradientAcceleration_Pkg::DistanceToNextStep#1)/ */
  DistanceToNextStep_init_SDM_GradientAcceleration_Pkg(
    &outC->Context_DistanceToNextStep_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CalcNearestDistance_reset_SDM_GradientAcceleration_Pkg(
  outC_CalcNearestDistance_SDM_GradientAcceleration_Pkg *outC)
{
  /* _L5=(SDM_GradientAcceleration_Pkg::DistanceToNextStep)/ */
  DistanceToNextStep_reset_SDM_GradientAcceleration_Pkg(
    &outC->Context_DistanceToNextStep);
  /* _L9=(SDM_GradientAcceleration_Pkg::DistanceToNextStep#1)/ */
  DistanceToNextStep_reset_SDM_GradientAcceleration_Pkg(
    &outC->Context_DistanceToNextStep_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CalcNearestDistance_SDM_GradientAcceleration_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

