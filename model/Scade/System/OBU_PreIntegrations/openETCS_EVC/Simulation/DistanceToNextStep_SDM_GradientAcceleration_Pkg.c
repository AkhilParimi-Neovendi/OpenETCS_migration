/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DistanceToNextStep_SDM_GradientAcceleration_Pkg.h"

/* SDM_GradientAcceleration_Pkg::DistanceToNextStep/ */
void DistanceToNextStep_SDM_GradientAcceleration_Pkg(
  /* position/ */
  L_internal_real_Type_SDM_Types_Pkg position,
  /* relatedIndex/ */
  kcg_int32 relatedIndex,
  /* GradientProfile/ */
  GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  outC_DistanceToNextStep_SDM_GradientAcceleration_Pkg *outC)
{
  kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types(
    &outC->_L3,
    GradientProfile);
  outC->_L2 = relatedIndex;
  outC->_L6 = kcg_lit_int32(1);
  /* _L15=(SDM_GradientAcceleration_Pkg::selectGradientOffset#2)/ */
  selectGradientOffset_SDM_GradientAcceleration_Pkg(
    &outC->_L3,
    outC->_L2,
    outC->_L6,
    &outC->Context_selectGradientOffset_2);
  kcg_copy_Gradient_section_real_t_SDM_GradientAcceleration_types(
    &outC->_L15,
    &outC->Context_selectGradientOffset_2.GradientSect);
  outC->_L13 = outC->_L15.valid;
  outC->validDistance = outC->_L13;
  outC->_L5 = outC->_L15.location;
  outC->_L1 = position;
  outC->_L4 = outC->_L5 - outC->_L1;
  outC->distance = outC->_L4;
}

#ifndef KCG_USER_DEFINED_INIT
void DistanceToNextStep_init_SDM_GradientAcceleration_Pkg(
  outC_DistanceToNextStep_SDM_GradientAcceleration_Pkg *outC)
{
  kcg_size idx;

  outC->_L15.location = kcg_lit_float32(0.0);
  outC->_L15.gradient = kcg_lit_float32(0.0);
  outC->_L15.valid = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L6 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_float32(0.0);
  outC->_L4 = kcg_lit_float32(0.0);
  outC->_L1 = kcg_lit_float32(0.0);
  outC->_L2 = kcg_lit_int32(0);
  for (idx = 0; idx < 50; idx++) {
    outC->_L3[idx].location = kcg_lit_float32(0.0);
    outC->_L3[idx].gradient = kcg_lit_float32(0.0);
    outC->_L3[idx].valid = kcg_true;
  }
  outC->validDistance = kcg_true;
  outC->distance = kcg_lit_float32(0.0);
  /* _L15=(SDM_GradientAcceleration_Pkg::selectGradientOffset#2)/ */
  selectGradientOffset_init_SDM_GradientAcceleration_Pkg(
    &outC->Context_selectGradientOffset_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void DistanceToNextStep_reset_SDM_GradientAcceleration_Pkg(
  outC_DistanceToNextStep_SDM_GradientAcceleration_Pkg *outC)
{
  /* _L15=(SDM_GradientAcceleration_Pkg::selectGradientOffset#2)/ */
  selectGradientOffset_reset_SDM_GradientAcceleration_Pkg(
    &outC->Context_selectGradientOffset_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** DistanceToNextStep_SDM_GradientAcceleration_Pkg.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

