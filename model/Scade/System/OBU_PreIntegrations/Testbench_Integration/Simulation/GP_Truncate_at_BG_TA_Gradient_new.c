/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Truncate_at_BG_TA_Gradient_new.h"

/* TA_Gradient_new::GP_Truncate_at_BG/ */
void GP_Truncate_at_BG_TA_Gradient_new(
  /* Profile_in/ */
  GradientProfile_t_TrackAtlasTypes *Profile_in,
  outC_GP_Truncate_at_BG_TA_Gradient_new *outC)
{
  static kcg_size idx;
  static kcg_int64 acc;
  static kcg_size idx1;
  static kcg_size idx2;
  static GradientProfile_t_TrackAtlasTypes acc3;
  static kcg_size idx4;
  static kcg_int64 noname;
  static kcg_int64 _5_noname;

  outC->_L11 = kcg_true;
  outC->_L8 = kcg_lit_int64(0);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L1, Profile_in);
  /* _L6/ */
  for (idx = 0; idx < 50; idx++) {
    kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L6[idx], &outC->_L1);
  }
  outC->_L14 = kcg_true;
  outC->_L5 = outC->_L8;
  /* _L4= */
  if (outC->_L14) {
    /* _L4= */
    for (idx1 = 0; idx1 < 50; idx1++) {
      acc = outC->_L5;
      /* _L4=(TA_Gradient_new::GP_Find_First_Gsection_After_BG_loop#1)/ */
      GP_Find_First_Gsection_After_BG_loop_TA_Gradient_new(
        /* _L4= */(kcg_int64) idx1,
        acc,
        &outC->_L6[idx1],
        &outC->Context_GP_Find_First_Gsection_After_BG_loop_1[idx1]);
      outC->_L5 = outC->Context_GP_Find_First_Gsection_After_BG_loop_1[idx1].Pointer;
      outC->_L4 = /* _L4= */(kcg_int64) (idx1 + 1);
      /* _L4= */
      if (!outC->Context_GP_Find_First_Gsection_After_BG_loop_1[idx1].cont) {
        break;
      }
    }
  }
  else {
    outC->_L4 = kcg_lit_int64(0);
  }
  /* _L17/ */
  for (idx2 = 0; idx2 < 50; idx2++) {
    outC->_L17[idx2] = outC->_L5;
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->_L13,
    (GradientProfile_t_TrackAtlasTypes *) &DEFAULT_GradientProfile_TrackAtlasTypes);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L12, &outC->_L13);
  /* _L10= */
  if (outC->_L11) {
    /* _L10= */
    for (idx4 = 0; idx4 < 50; idx4++) {
      kcg_copy_GradientProfile_t_TrackAtlasTypes(&acc3, &outC->_L12);
      /* _L10=(TA_Gradient_new::GP_Truncate_at_BG_loop#1)/ */
      GP_Truncate_at_BG_loop_TA_Gradient_new(
        /* _L10= */(kcg_int64) idx4,
        &acc3,
        &outC->_L6[idx4],
        outC->_L17[idx4],
        &outC->Context_GP_Truncate_at_BG_loop_1[idx4]);
      kcg_copy_GradientProfile_t_TrackAtlasTypes(
        &outC->_L12,
        &outC->Context_GP_Truncate_at_BG_loop_1[idx4].Profile_out);
      outC->_L10 = /* _L10= */(kcg_int64) (idx4 + 1);
      /* _L10= */
      if (!outC->Context_GP_Truncate_at_BG_loop_1[idx4].cont) {
        break;
      }
    }
  }
  else {
    outC->_L10 = kcg_lit_int64(0);
  }
  _5_noname = outC->_L10;
  noname = outC->_L4;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->Profile_out, &outC->_L12);
}

#ifndef KCG_USER_DEFINED_INIT
void GP_Truncate_at_BG_init_TA_Gradient_new(
  outC_GP_Truncate_at_BG_TA_Gradient_new *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;
  static kcg_size idx8;

  outC->_L11 = kcg_true;
  for (idx2 = 0; idx2 < 50; idx2++) {
    outC->_L17[idx2] = kcg_lit_int64(0);
  }
  outC->_L14 = kcg_true;
  for (idx3 = 0; idx3 < 50; idx3++) {
    outC->_L13[idx3].valid = kcg_true;
    outC->_L13[idx3].Loc_Absolute = kcg_lit_int64(0);
    outC->_L13[idx3].Loc_LRBG = kcg_lit_int64(0);
    outC->_L13[idx3].Gradient = kcg_lit_int64(0);
    outC->_L13[idx3].L_Gradient = kcg_lit_int64(0);
  }
  for (idx4 = 0; idx4 < 50; idx4++) {
    outC->_L12[idx4].valid = kcg_true;
    outC->_L12[idx4].Loc_Absolute = kcg_lit_int64(0);
    outC->_L12[idx4].Loc_LRBG = kcg_lit_int64(0);
    outC->_L12[idx4].Gradient = kcg_lit_int64(0);
    outC->_L12[idx4].L_Gradient = kcg_lit_int64(0);
  }
  outC->_L10 = kcg_lit_int64(0);
  outC->_L4 = kcg_lit_int64(0);
  outC->_L5 = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 50; idx6++) {
    for (idx5 = 0; idx5 < 50; idx5++) {
      outC->_L6[idx6][idx5].valid = kcg_true;
      outC->_L6[idx6][idx5].Loc_Absolute = kcg_lit_int64(0);
      outC->_L6[idx6][idx5].Loc_LRBG = kcg_lit_int64(0);
      outC->_L6[idx6][idx5].Gradient = kcg_lit_int64(0);
      outC->_L6[idx6][idx5].L_Gradient = kcg_lit_int64(0);
    }
  }
  outC->_L8 = kcg_lit_int64(0);
  for (idx7 = 0; idx7 < 50; idx7++) {
    outC->_L1[idx7].valid = kcg_true;
    outC->_L1[idx7].Loc_Absolute = kcg_lit_int64(0);
    outC->_L1[idx7].Loc_LRBG = kcg_lit_int64(0);
    outC->_L1[idx7].Gradient = kcg_lit_int64(0);
    outC->_L1[idx7].L_Gradient = kcg_lit_int64(0);
  }
  for (idx8 = 0; idx8 < 50; idx8++) {
    outC->Profile_out[idx8].valid = kcg_true;
    outC->Profile_out[idx8].Loc_Absolute = kcg_lit_int64(0);
    outC->Profile_out[idx8].Loc_LRBG = kcg_lit_int64(0);
    outC->Profile_out[idx8].Gradient = kcg_lit_int64(0);
    outC->Profile_out[idx8].L_Gradient = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 50; idx1++) {
    /* _L10=(TA_Gradient_new::GP_Truncate_at_BG_loop#1)/ */
    GP_Truncate_at_BG_loop_init_TA_Gradient_new(
      &outC->Context_GP_Truncate_at_BG_loop_1[idx1]);
  }
  for (idx = 0; idx < 50; idx++) {
    /* _L4=(TA_Gradient_new::GP_Find_First_Gsection_After_BG_loop#1)/ */
    GP_Find_First_Gsection_After_BG_loop_init_TA_Gradient_new(
      &outC->Context_GP_Find_First_Gsection_After_BG_loop_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void GP_Truncate_at_BG_reset_TA_Gradient_new(
  outC_GP_Truncate_at_BG_TA_Gradient_new *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  for (idx1 = 0; idx1 < 50; idx1++) {
    /* _L10=(TA_Gradient_new::GP_Truncate_at_BG_loop#1)/ */
    GP_Truncate_at_BG_loop_reset_TA_Gradient_new(
      &outC->Context_GP_Truncate_at_BG_loop_1[idx1]);
  }
  for (idx = 0; idx < 50; idx++) {
    /* _L4=(TA_Gradient_new::GP_Find_First_Gsection_After_BG_loop#1)/ */
    GP_Find_First_Gsection_After_BG_loop_reset_TA_Gradient_new(
      &outC->Context_GP_Find_First_Gsection_After_BG_loop_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** GP_Truncate_at_BG_TA_Gradient_new.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

