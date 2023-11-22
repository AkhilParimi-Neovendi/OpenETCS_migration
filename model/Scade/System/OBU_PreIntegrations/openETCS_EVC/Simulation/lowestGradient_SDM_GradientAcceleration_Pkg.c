/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "lowestGradient_SDM_GradientAcceleration_Pkg.h"

/* SDM_GradientAcceleration_Pkg::lowestGradient/ */
void lowestGradient_SDM_GradientAcceleration_Pkg(
  /* Index/ */
  kcg_int32 Index,
  /* lowestGradientAccu/ */
  Gradient_real_t_SDM_GradientAcceleration_types lowestGradientAccu,
  /* GradientProfile/ */
  GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  /* BeginIndex/ */
  kcg_int32 BeginIndex,
  /* EndIndex/ */
  kcg_int32 EndIndex,
  outC_lowestGradient_SDM_GradientAcceleration_Pkg *outC)
{
  kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types(
    &outC->_L1,
    GradientProfile);
  outC->_L10 = Index;
  outC->_L22 = BeginIndex;
  /* _L23=(SDM_GradientAcceleration_Pkg::selectGradientOffset)/ */
  selectGradientOffset_SDM_GradientAcceleration_Pkg(
    &outC->_L1,
    outC->_L10,
    outC->_L22,
    &outC->Context_selectGradientOffset);
  kcg_copy_Gradient_section_real_t_SDM_GradientAcceleration_types(
    &outC->_L23,
    &outC->Context_selectGradientOffset.GradientSect);
  outC->_L20 = BeginIndex;
  outC->_L5 = Index;
  outC->_L19 = outC->_L5 + outC->_L20;
  outC->_L4 = lowestGradientAccu;
  outC->_L15 = outC->_L23.gradient;
  outC->_L9 = outC->_L15 < outC->_L4;
  outC->_L17 = outC->_L23.valid;
  outC->_L16 = outC->_L17 & outC->_L9;
  /* _L18= */
  if (outC->_L16) {
    outC->_L18 = outC->_L15;
  }
  else {
    outC->_L18 = outC->_L4;
  }
  outC->_L3 = EndIndex;
  outC->_L6 = outC->_L19 < outC->_L3;
  outC->cond = outC->_L6;
  outC->lowestGradientOut = outC->_L18;
}

#ifndef KCG_USER_DEFINED_INIT
void lowestGradient_init_SDM_GradientAcceleration_Pkg(
  outC_lowestGradient_SDM_GradientAcceleration_Pkg *outC)
{
  kcg_size idx;

  outC->_L23.location = kcg_lit_float32(0.0);
  outC->_L23.gradient = kcg_lit_float32(0.0);
  outC->_L23.valid = kcg_true;
  outC->_L22 = kcg_lit_int32(0);
  outC->_L20 = kcg_lit_int32(0);
  outC->_L19 = kcg_lit_int32(0);
  outC->_L18 = kcg_lit_float32(0.0);
  outC->_L17 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L15 = kcg_lit_float32(0.0);
  outC->_L10 = kcg_lit_int32(0);
  outC->_L9 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_float32(0.0);
  outC->_L3 = kcg_lit_int32(0);
  for (idx = 0; idx < 50; idx++) {
    outC->_L1[idx].location = kcg_lit_float32(0.0);
    outC->_L1[idx].gradient = kcg_lit_float32(0.0);
    outC->_L1[idx].valid = kcg_true;
  }
  outC->lowestGradientOut = kcg_lit_float32(0.0);
  outC->cond = kcg_true;
  /* _L23=(SDM_GradientAcceleration_Pkg::selectGradientOffset)/ */
  selectGradientOffset_init_SDM_GradientAcceleration_Pkg(
    &outC->Context_selectGradientOffset);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void lowestGradient_reset_SDM_GradientAcceleration_Pkg(
  outC_lowestGradient_SDM_GradientAcceleration_Pkg *outC)
{
  /* _L23=(SDM_GradientAcceleration_Pkg::selectGradientOffset)/ */
  selectGradientOffset_reset_SDM_GradientAcceleration_Pkg(
    &outC->Context_selectGradientOffset);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** lowestGradient_SDM_GradientAcceleration_Pkg.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

