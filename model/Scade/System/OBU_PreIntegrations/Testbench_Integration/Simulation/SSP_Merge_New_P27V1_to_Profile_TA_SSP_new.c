/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Merge_New_P27V1_to_Profile_TA_SSP_new.h"

/* TA_SSP_new::SSP_Merge_New_P27V1_to_Profile/ */
void SSP_Merge_New_P27V1_to_Profile_TA_SSP_new(
  /* new_GP/ */
  StaticSpeedProfile_t_TrackAtlasTypes *new_GP,
  /* Last_SpeedProfile_in/ */
  StaticSpeedProfile_t_TrackAtlasTypes *Last_SpeedProfile_in,
  outC_SSP_Merge_New_P27V1_to_Profile_TA_SSP_new *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static StaticSpeedProfile_t_TrackAtlasTypes acc;
  static kcg_size idx2;
  static kcg_int64 op_call;

  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    &outC->_L45,
    Last_SpeedProfile_in);
  outC->_L148 = outC->_L45[0].valid;
  outC->every = outC->_L148;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L5, new_GP);
  if (outC->every) {
    /* _L1=(TA_Lib_internal::FindStartOfNewSpeedProfileAbs#1)/ */
    FindStartOfNewSpeedProfileAbs_TA_Lib_internal(
      &outC->_L45,
      &outC->_L5,
      &outC->Context_FindStartOfNewSpeedProfileAbs_1);
    op_call = outC->Context_FindStartOfNewSpeedProfileAbs_1.relevant_section;
  }
  /* _L47/ */
  for (idx = 0; idx < 50; idx++) {
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L47[idx], &outC->_L5);
  }
  if (outC->every) {
    outC->_L1 = op_call;
  }
  else {
    outC->_L1 = kcg_lit_int64(0);
  }
  /* _L9/ */
  for (idx1 = 0; idx1 < 50; idx1++) {
    outC->_L9[idx1] = outC->_L1;
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L14, &outC->_L45);
  /* _L14= */
  for (idx2 = 0; idx2 < 50; idx2++) {
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&acc, &outC->_L14);
    /* _L14=(TA_SSP_new::SSP_Merge_New_P27V1_to_Profile_loop#1)/ */
    SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP_new(
      /* _L14= */(kcg_int64) idx2,
      &acc,
      outC->_L9[idx2],
      &outC->_L47[idx2],
      &outC->Context_SSP_Merge_New_P27V1_to_Profile_loop_1[idx2]);
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
      &outC->_L14,
      &outC->Context_SSP_Merge_New_P27V1_to_Profile_loop_1[idx2].SSP);
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    &outC->SpeedProfile_out,
    &outC->_L14);
}

#ifndef KCG_USER_DEFINED_INIT
void SSP_Merge_New_P27V1_to_Profile_init_TA_SSP_new(
  outC_SSP_Merge_New_P27V1_to_Profile_TA_SSP_new *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;

  outC->_L148 = kcg_true;
  for (idx2 = 0; idx2 < 50; idx2++) {
    for (idx1 = 0; idx1 < 50; idx1++) {
      outC->_L47[idx2][idx1].valid = kcg_true;
      outC->_L47[idx2][idx1].d_static_abs = kcg_lit_int64(0);
      outC->_L47[idx2][idx1].d_static_LRBG = kcg_lit_int64(0);
      outC->_L47[idx2][idx1].q_train_length_corr = kcg_true;
      outC->_L47[idx2][idx1].v_static = kcg_lit_int64(0);
    }
  }
  for (idx3 = 0; idx3 < 50; idx3++) {
    outC->_L45[idx3].valid = kcg_true;
    outC->_L45[idx3].d_static_abs = kcg_lit_int64(0);
    outC->_L45[idx3].d_static_LRBG = kcg_lit_int64(0);
    outC->_L45[idx3].q_train_length_corr = kcg_true;
    outC->_L45[idx3].v_static = kcg_lit_int64(0);
  }
  for (idx4 = 0; idx4 < 50; idx4++) {
    outC->_L14[idx4].valid = kcg_true;
    outC->_L14[idx4].d_static_abs = kcg_lit_int64(0);
    outC->_L14[idx4].d_static_LRBG = kcg_lit_int64(0);
    outC->_L14[idx4].q_train_length_corr = kcg_true;
    outC->_L14[idx4].v_static = kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 50; idx5++) {
    outC->_L9[idx5] = kcg_lit_int64(0);
  }
  for (idx6 = 0; idx6 < 50; idx6++) {
    outC->_L5[idx6].valid = kcg_true;
    outC->_L5[idx6].d_static_abs = kcg_lit_int64(0);
    outC->_L5[idx6].d_static_LRBG = kcg_lit_int64(0);
    outC->_L5[idx6].q_train_length_corr = kcg_true;
    outC->_L5[idx6].v_static = kcg_lit_int64(0);
  }
  outC->_L1 = kcg_lit_int64(0);
  outC->every = kcg_true;
  for (idx7 = 0; idx7 < 50; idx7++) {
    outC->SpeedProfile_out[idx7].valid = kcg_true;
    outC->SpeedProfile_out[idx7].d_static_abs = kcg_lit_int64(0);
    outC->SpeedProfile_out[idx7].d_static_LRBG = kcg_lit_int64(0);
    outC->SpeedProfile_out[idx7].q_train_length_corr = kcg_true;
    outC->SpeedProfile_out[idx7].v_static = kcg_lit_int64(0);
  }
  for (idx = 0; idx < 50; idx++) {
    /* _L14=(TA_SSP_new::SSP_Merge_New_P27V1_to_Profile_loop#1)/ */
    SSP_Merge_New_P27V1_to_Profile_loop_init_TA_SSP_new(
      &outC->Context_SSP_Merge_New_P27V1_to_Profile_loop_1[idx]);
  }
  /* _L1=(TA_Lib_internal::FindStartOfNewSpeedProfileAbs#1)/ */
  FindStartOfNewSpeedProfileAbs_init_TA_Lib_internal(
    &outC->Context_FindStartOfNewSpeedProfileAbs_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SSP_Merge_New_P27V1_to_Profile_reset_TA_SSP_new(
  outC_SSP_Merge_New_P27V1_to_Profile_TA_SSP_new *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 50; idx++) {
    /* _L14=(TA_SSP_new::SSP_Merge_New_P27V1_to_Profile_loop#1)/ */
    SSP_Merge_New_P27V1_to_Profile_loop_reset_TA_SSP_new(
      &outC->Context_SSP_Merge_New_P27V1_to_Profile_loop_1[idx]);
  }
  /* _L1=(TA_Lib_internal::FindStartOfNewSpeedProfileAbs#1)/ */
  FindStartOfNewSpeedProfileAbs_reset_TA_Lib_internal(
    &outC->Context_FindStartOfNewSpeedProfileAbs_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SSP_Merge_New_P27V1_to_Profile_TA_SSP_new.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

