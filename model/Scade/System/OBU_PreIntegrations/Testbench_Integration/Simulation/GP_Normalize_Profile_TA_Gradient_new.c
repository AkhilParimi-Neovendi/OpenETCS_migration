/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Normalize_Profile_TA_Gradient_new.h"

/* TA_Gradient_new::GP_Normalize_Profile/ */
void GP_Normalize_Profile_TA_Gradient_new(
  /* ProfileIn/ */
  GradientProfile_t_TrackAtlasTypes *ProfileIn,
  /* pos_BG/ */
  L_internal_Type_Obu_BasicTypes_Pkg pos_BG,
  outC_GP_Normalize_Profile_TA_Gradient_new *outC)
{
  static kcg_size idx;
  static GradientProfile_t_TrackAtlasTypes acc;
  static kcg_size idx1;

  outC->_L2 = pos_BG;
  /* _L4/ */
  for (idx = 0; idx < 50; idx++) {
    outC->_L4[idx] = outC->_L2;
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L1, ProfileIn);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L3, &outC->_L1);
  /* _L3= */
  for (idx1 = 0; idx1 < 50; idx1++) {
    kcg_copy_GradientProfile_t_TrackAtlasTypes(&acc, &outC->_L3);
    /* _L3=(TA_Gradient_new::GP_Normalize_Profile_loop#1)/ */
    GP_Normalize_Profile_loop_TA_Gradient_new(
      /* _L3= */(kcg_int32) idx1,
      &acc,
      outC->_L4[idx1],
      &outC->Context_GP_Normalize_Profile_loop_1[idx1]);
    kcg_copy_GradientProfile_t_TrackAtlasTypes(
      &outC->_L3,
      &outC->Context_GP_Normalize_Profile_loop_1[idx1].ProfileNormalized_LRBG);
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->ProfileNormalized_LRBG,
    &outC->_L3);
}

#ifndef KCG_USER_DEFINED_INIT
void GP_Normalize_Profile_init_TA_Gradient_new(
  outC_GP_Normalize_Profile_TA_Gradient_new *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;

  for (idx1 = 0; idx1 < 50; idx1++) {
    outC->_L4[idx1] = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 50; idx2++) {
    outC->_L3[idx2].valid = kcg_true;
    outC->_L3[idx2].Loc_Absolute = kcg_lit_int32(0);
    outC->_L3[idx2].Loc_LRBG = kcg_lit_int32(0);
    outC->_L3[idx2].Gradient = kcg_lit_int32(0);
    outC->_L3[idx2].L_Gradient = kcg_lit_int32(0);
  }
  outC->_L2 = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 50; idx3++) {
    outC->_L1[idx3].valid = kcg_true;
    outC->_L1[idx3].Loc_Absolute = kcg_lit_int32(0);
    outC->_L1[idx3].Loc_LRBG = kcg_lit_int32(0);
    outC->_L1[idx3].Gradient = kcg_lit_int32(0);
    outC->_L1[idx3].L_Gradient = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 50; idx4++) {
    outC->ProfileNormalized_LRBG[idx4].valid = kcg_true;
    outC->ProfileNormalized_LRBG[idx4].Loc_Absolute = kcg_lit_int32(0);
    outC->ProfileNormalized_LRBG[idx4].Loc_LRBG = kcg_lit_int32(0);
    outC->ProfileNormalized_LRBG[idx4].Gradient = kcg_lit_int32(0);
    outC->ProfileNormalized_LRBG[idx4].L_Gradient = kcg_lit_int32(0);
  }
  for (idx = 0; idx < 50; idx++) {
    /* _L3=(TA_Gradient_new::GP_Normalize_Profile_loop#1)/ */
    GP_Normalize_Profile_loop_init_TA_Gradient_new(
      &outC->Context_GP_Normalize_Profile_loop_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void GP_Normalize_Profile_reset_TA_Gradient_new(
  outC_GP_Normalize_Profile_TA_Gradient_new *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 50; idx++) {
    /* _L3=(TA_Gradient_new::GP_Normalize_Profile_loop#1)/ */
    GP_Normalize_Profile_loop_reset_TA_Gradient_new(
      &outC->Context_GP_Normalize_Profile_loop_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** GP_Normalize_Profile_TA_Gradient_new.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

