/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SearchIndexInGradientProfile_SDM_GradientAcceleration_Pkg.h"

/* SDM_GradientAcceleration_Pkg::SearchIndexInGradientProfile/ */
void SearchIndexInGradientProfile_SDM_GradientAcceleration_Pkg(
  /* GradientProfile/ */
  GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  /* position/ */
  L_internal_real_Type_SDM_Types_Pkg position,
  outC_SearchIndexInGradientProfile_SDM_GradientAcceleration_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_int64 acc;
  static kcg_size idx2;
  static kcg_int64 noname;

  kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types(
    &outC->_L10,
    GradientProfile);
  outC->_L7 = kcg_lit_int64(-1);
  outC->_L2 = position;
  /* _L8/ */
  for (idx = 0; idx < 50; idx++) {
    outC->_L8[idx] = outC->_L2;
  }
  /* _L9/ */
  for (idx1 = 0; idx1 < 50; idx1++) {
    kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types(
      &outC->_L9[idx1],
      &outC->_L10);
  }
  kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types(
    &outC->_L1,
    GradientProfile);
  kcg_copy_Gradient_section_real_t_SDM_GradientAcceleration_types(
    &outC->_L5,
    &outC->_L1[0]);
  outC->_L6 = outC->_L5.valid;
  outC->_L4 = outC->_L7;
  /* _L3= */
  if (outC->_L6) {
    /* _L3= */
    for (idx2 = 0; idx2 < 50; idx2++) {
      acc = outC->_L4;
      /* _L3=(SDM_GradientAcceleration_Pkg::SearchIndexInGradientprofileInternal#1)/ */
      SearchIndexInGradientprofileInternal_SDM_GradientAcceleration_Pkg(
        /* _L3= */(kcg_int64) idx2,
        acc,
        outC->_L8[idx2],
        &outC->_L9[idx2],
        &outC->Context_SearchIndexInGradientprofileInternal_1[idx2]);
      outC->_L4 =
        outC->Context_SearchIndexInGradientprofileInternal_1[idx2].indexOfPositionOut;
      outC->_L3 = /* _L3= */(kcg_int64) (idx2 + 1);
      /* _L3= */
      if (!outC->Context_SearchIndexInGradientprofileInternal_1[idx2].cond) {
        break;
      }
    }
  }
  else {
    outC->_L3 = kcg_lit_int64(0);
  }
  noname = outC->_L3;
  outC->index = outC->_L4;
}

#ifndef KCG_USER_DEFINED_INIT
void SearchIndexInGradientProfile_init_SDM_GradientAcceleration_Pkg(
  outC_SearchIndexInGradientProfile_SDM_GradientAcceleration_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;

  for (idx1 = 0; idx1 < 50; idx1++) {
    outC->_L10[idx1].location = kcg_lit_float64(0.0);
    outC->_L10[idx1].gradient = kcg_lit_float64(0.0);
    outC->_L10[idx1].valid = kcg_true;
  }
  for (idx3 = 0; idx3 < 50; idx3++) {
    for (idx2 = 0; idx2 < 50; idx2++) {
      outC->_L9[idx3][idx2].location = kcg_lit_float64(0.0);
      outC->_L9[idx3][idx2].gradient = kcg_lit_float64(0.0);
      outC->_L9[idx3][idx2].valid = kcg_true;
    }
  }
  for (idx4 = 0; idx4 < 50; idx4++) {
    outC->_L8[idx4] = kcg_lit_float64(0.0);
  }
  outC->_L7 = kcg_lit_int64(0);
  outC->_L6 = kcg_true;
  outC->_L5.location = kcg_lit_float64(0.0);
  outC->_L5.gradient = kcg_lit_float64(0.0);
  outC->_L5.valid = kcg_true;
  outC->_L4 = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 50; idx5++) {
    outC->_L1[idx5].location = kcg_lit_float64(0.0);
    outC->_L1[idx5].gradient = kcg_lit_float64(0.0);
    outC->_L1[idx5].valid = kcg_true;
  }
  outC->_L2 = kcg_lit_float64(0.0);
  outC->index = kcg_lit_int64(0);
  for (idx = 0; idx < 50; idx++) {
    /* _L3=(SDM_GradientAcceleration_Pkg::SearchIndexInGradientprofileInternal#1)/ */
    SearchIndexInGradientprofileInternal_init_SDM_GradientAcceleration_Pkg(
      &outC->Context_SearchIndexInGradientprofileInternal_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SearchIndexInGradientProfile_reset_SDM_GradientAcceleration_Pkg(
  outC_SearchIndexInGradientProfile_SDM_GradientAcceleration_Pkg *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 50; idx++) {
    /* _L3=(SDM_GradientAcceleration_Pkg::SearchIndexInGradientprofileInternal#1)/ */
    SearchIndexInGradientprofileInternal_reset_SDM_GradientAcceleration_Pkg(
      &outC->Context_SearchIndexInGradientprofileInternal_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SearchIndexInGradientProfile_SDM_GradientAcceleration_Pkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

