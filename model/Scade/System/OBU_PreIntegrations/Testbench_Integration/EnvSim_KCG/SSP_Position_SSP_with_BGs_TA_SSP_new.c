/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Position_SSP_with_BGs_TA_SSP_new.h"

/* TA_SSP_new::SSP_Position_SSP_with_BGs/ */
void SSP_Position_SSP_with_BGs_TA_SSP_new(
  /* ProfileIn/ */
  StaticSpeedProfile_t_TrackAtlasTypes *ProfileIn,
  /* pos_LRBG/ */
  L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* pos_prvLRBG/ */
  L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* there_is_prvLRBG/ */
  kcg_bool there_is_prvLRBG,
  /* train_length/ */
  L_internal_Type_Obu_BasicTypes_Pkg train_length,
  /* LastProfile/ */
  StaticSpeedProfile_t_TrackAtlasTypes *LastProfile,
  outC_SSP_Position_SSP_with_BGs_TA_SSP_new *outC)
{
  static kcg_bool noname;

  outC->_L33 = train_length;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L4, ProfileIn);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L5, LastProfile);
  /* _L6=(TA_SSP_new::SSP_Merge_New_P27V1_to_Profile#1)/ */
  SSP_Merge_New_P27V1_to_Profile_TA_SSP_new(
    &outC->_L4,
    &outC->_L5,
    &outC->Context_SSP_Merge_New_P27V1_to_Profile_1);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    &outC->_L6,
    &outC->Context_SSP_Merge_New_P27V1_to_Profile_1.SpeedProfile_out);
  outC->_L8 = pos_prvLRBG;
  /* _L18=(TA_SSP_new::SSP_Normalize_Profile#2)/ */
  SSP_Normalize_Profile_TA_SSP_new(
    &outC->_L6,
    outC->_L8,
    outC->_L33,
    &outC->Context_SSP_Normalize_Profile_2);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    &outC->_L18,
    &outC->Context_SSP_Normalize_Profile_2.ProfileNormalized_LRBG);
  /* _L23=(TA_SSP_new::SSP_Truncate_at_BG#2)/ */
  SSP_Truncate_at_BG_TA_SSP_new(
    &outC->_L18,
    &outC->Context_SSP_Truncate_at_BG_2);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    &outC->_L23,
    &outC->Context_SSP_Truncate_at_BG_2.Profile_out);
  /* _L30=(TA_SSP_new::SSP_Correct_StartSection#2)/ */
  SSP_Correct_StartSection_TA_SSP_new(
    &outC->_L23,
    &outC->Context_SSP_Correct_StartSection_2);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    &outC->_L30,
    &outC->Context_SSP_Correct_StartSection_2.Profile_out);
  outC->_L9 = pos_LRBG;
  /* _L16=(TA_SSP_new::SSP_Normalize_Profile#1)/ */
  SSP_Normalize_Profile_TA_SSP_new(
    &outC->_L6,
    outC->_L9,
    outC->_L33,
    &outC->Context_SSP_Normalize_Profile_1);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    &outC->_L16,
    &outC->Context_SSP_Normalize_Profile_1.ProfileNormalized_LRBG);
  /* _L22=(TA_SSP_new::SSP_Truncate_at_BG#1)/ */
  SSP_Truncate_at_BG_TA_SSP_new(
    &outC->_L16,
    &outC->Context_SSP_Truncate_at_BG_1);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    &outC->_L22,
    &outC->Context_SSP_Truncate_at_BG_1.Profile_out);
  /* _L29=(TA_SSP_new::SSP_Correct_StartSection#1)/ */
  SSP_Correct_StartSection_TA_SSP_new(
    &outC->_L22,
    &outC->Context_SSP_Correct_StartSection_1);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    &outC->_L29,
    &outC->Context_SSP_Correct_StartSection_1.Profile_out);
  outC->_L28 = outC->_L29[0].valid;
  outC->available = outC->_L28;
  outC->_L15 = there_is_prvLRBG;
  noname = outC->_L15;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    &outC->ProfileLoopOut,
    &outC->_L30);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->ProfileOut, &outC->_L29);
}

#ifndef KCG_USER_DEFINED_INIT
void SSP_Position_SSP_with_BGs_init_TA_SSP_new(
  outC_SSP_Position_SSP_with_BGs_TA_SSP_new *outC)
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
  static kcg_size idx9;
  static kcg_size idx10;

  outC->_L33 = kcg_lit_int64(0);
  for (idx = 0; idx < 50; idx++) {
    outC->_L30[idx].valid = kcg_true;
    outC->_L30[idx].d_static_abs = kcg_lit_int64(0);
    outC->_L30[idx].d_static_LRBG = kcg_lit_int64(0);
    outC->_L30[idx].q_train_length_corr = kcg_true;
    outC->_L30[idx].v_static = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 50; idx1++) {
    outC->_L29[idx1].valid = kcg_true;
    outC->_L29[idx1].d_static_abs = kcg_lit_int64(0);
    outC->_L29[idx1].d_static_LRBG = kcg_lit_int64(0);
    outC->_L29[idx1].q_train_length_corr = kcg_true;
    outC->_L29[idx1].v_static = kcg_lit_int64(0);
  }
  outC->_L28 = kcg_true;
  for (idx2 = 0; idx2 < 50; idx2++) {
    outC->_L23[idx2].valid = kcg_true;
    outC->_L23[idx2].d_static_abs = kcg_lit_int64(0);
    outC->_L23[idx2].d_static_LRBG = kcg_lit_int64(0);
    outC->_L23[idx2].q_train_length_corr = kcg_true;
    outC->_L23[idx2].v_static = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 50; idx3++) {
    outC->_L22[idx3].valid = kcg_true;
    outC->_L22[idx3].d_static_abs = kcg_lit_int64(0);
    outC->_L22[idx3].d_static_LRBG = kcg_lit_int64(0);
    outC->_L22[idx3].q_train_length_corr = kcg_true;
    outC->_L22[idx3].v_static = kcg_lit_int64(0);
  }
  for (idx4 = 0; idx4 < 50; idx4++) {
    outC->_L18[idx4].valid = kcg_true;
    outC->_L18[idx4].d_static_abs = kcg_lit_int64(0);
    outC->_L18[idx4].d_static_LRBG = kcg_lit_int64(0);
    outC->_L18[idx4].q_train_length_corr = kcg_true;
    outC->_L18[idx4].v_static = kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 50; idx5++) {
    outC->_L16[idx5].valid = kcg_true;
    outC->_L16[idx5].d_static_abs = kcg_lit_int64(0);
    outC->_L16[idx5].d_static_LRBG = kcg_lit_int64(0);
    outC->_L16[idx5].q_train_length_corr = kcg_true;
    outC->_L16[idx5].v_static = kcg_lit_int64(0);
  }
  outC->_L15 = kcg_true;
  for (idx6 = 0; idx6 < 50; idx6++) {
    outC->_L6[idx6].valid = kcg_true;
    outC->_L6[idx6].d_static_abs = kcg_lit_int64(0);
    outC->_L6[idx6].d_static_LRBG = kcg_lit_int64(0);
    outC->_L6[idx6].q_train_length_corr = kcg_true;
    outC->_L6[idx6].v_static = kcg_lit_int64(0);
  }
  outC->_L9 = kcg_lit_int64(0);
  outC->_L8 = kcg_lit_int64(0);
  for (idx7 = 0; idx7 < 50; idx7++) {
    outC->_L5[idx7].valid = kcg_true;
    outC->_L5[idx7].d_static_abs = kcg_lit_int64(0);
    outC->_L5[idx7].d_static_LRBG = kcg_lit_int64(0);
    outC->_L5[idx7].q_train_length_corr = kcg_true;
    outC->_L5[idx7].v_static = kcg_lit_int64(0);
  }
  for (idx8 = 0; idx8 < 50; idx8++) {
    outC->_L4[idx8].valid = kcg_true;
    outC->_L4[idx8].d_static_abs = kcg_lit_int64(0);
    outC->_L4[idx8].d_static_LRBG = kcg_lit_int64(0);
    outC->_L4[idx8].q_train_length_corr = kcg_true;
    outC->_L4[idx8].v_static = kcg_lit_int64(0);
  }
  for (idx9 = 0; idx9 < 50; idx9++) {
    outC->ProfileLoopOut[idx9].valid = kcg_true;
    outC->ProfileLoopOut[idx9].d_static_abs = kcg_lit_int64(0);
    outC->ProfileLoopOut[idx9].d_static_LRBG = kcg_lit_int64(0);
    outC->ProfileLoopOut[idx9].q_train_length_corr = kcg_true;
    outC->ProfileLoopOut[idx9].v_static = kcg_lit_int64(0);
  }
  outC->available = kcg_true;
  for (idx10 = 0; idx10 < 50; idx10++) {
    outC->ProfileOut[idx10].valid = kcg_true;
    outC->ProfileOut[idx10].d_static_abs = kcg_lit_int64(0);
    outC->ProfileOut[idx10].d_static_LRBG = kcg_lit_int64(0);
    outC->ProfileOut[idx10].q_train_length_corr = kcg_true;
    outC->ProfileOut[idx10].v_static = kcg_lit_int64(0);
  }
  /* _L29=(TA_SSP_new::SSP_Correct_StartSection#1)/ */
  SSP_Correct_StartSection_init_TA_SSP_new(
    &outC->Context_SSP_Correct_StartSection_1);
  /* _L22=(TA_SSP_new::SSP_Truncate_at_BG#1)/ */
  SSP_Truncate_at_BG_init_TA_SSP_new(&outC->Context_SSP_Truncate_at_BG_1);
  /* _L16=(TA_SSP_new::SSP_Normalize_Profile#1)/ */
  SSP_Normalize_Profile_init_TA_SSP_new(&outC->Context_SSP_Normalize_Profile_1);
  /* _L30=(TA_SSP_new::SSP_Correct_StartSection#2)/ */
  SSP_Correct_StartSection_init_TA_SSP_new(
    &outC->Context_SSP_Correct_StartSection_2);
  /* _L23=(TA_SSP_new::SSP_Truncate_at_BG#2)/ */
  SSP_Truncate_at_BG_init_TA_SSP_new(&outC->Context_SSP_Truncate_at_BG_2);
  /* _L18=(TA_SSP_new::SSP_Normalize_Profile#2)/ */
  SSP_Normalize_Profile_init_TA_SSP_new(&outC->Context_SSP_Normalize_Profile_2);
  /* _L6=(TA_SSP_new::SSP_Merge_New_P27V1_to_Profile#1)/ */
  SSP_Merge_New_P27V1_to_Profile_init_TA_SSP_new(
    &outC->Context_SSP_Merge_New_P27V1_to_Profile_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SSP_Position_SSP_with_BGs_reset_TA_SSP_new(
  outC_SSP_Position_SSP_with_BGs_TA_SSP_new *outC)
{
  /* _L29=(TA_SSP_new::SSP_Correct_StartSection#1)/ */
  SSP_Correct_StartSection_reset_TA_SSP_new(
    &outC->Context_SSP_Correct_StartSection_1);
  /* _L22=(TA_SSP_new::SSP_Truncate_at_BG#1)/ */
  SSP_Truncate_at_BG_reset_TA_SSP_new(&outC->Context_SSP_Truncate_at_BG_1);
  /* _L16=(TA_SSP_new::SSP_Normalize_Profile#1)/ */
  SSP_Normalize_Profile_reset_TA_SSP_new(
    &outC->Context_SSP_Normalize_Profile_1);
  /* _L30=(TA_SSP_new::SSP_Correct_StartSection#2)/ */
  SSP_Correct_StartSection_reset_TA_SSP_new(
    &outC->Context_SSP_Correct_StartSection_2);
  /* _L23=(TA_SSP_new::SSP_Truncate_at_BG#2)/ */
  SSP_Truncate_at_BG_reset_TA_SSP_new(&outC->Context_SSP_Truncate_at_BG_2);
  /* _L18=(TA_SSP_new::SSP_Normalize_Profile#2)/ */
  SSP_Normalize_Profile_reset_TA_SSP_new(
    &outC->Context_SSP_Normalize_Profile_2);
  /* _L6=(TA_SSP_new::SSP_Merge_New_P27V1_to_Profile#1)/ */
  SSP_Merge_New_P27V1_to_Profile_reset_TA_SSP_new(
    &outC->Context_SSP_Merge_New_P27V1_to_Profile_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SSP_Position_SSP_with_BGs_TA_SSP_new.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

