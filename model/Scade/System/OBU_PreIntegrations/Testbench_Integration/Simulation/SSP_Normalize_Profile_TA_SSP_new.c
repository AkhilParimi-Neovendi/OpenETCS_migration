/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Normalize_Profile_TA_SSP_new.h"

/* TA_SSP_new::SSP_Normalize_Profile/ */
void SSP_Normalize_Profile_TA_SSP_new(
  /* ProfileIn/ */
  StaticSpeedProfile_t_TrackAtlasTypes *ProfileIn,
  /* pos_BG/ */
  L_internal_Type_Obu_BasicTypes_Pkg pos_BG,
  /* train_length/ */
  L_internal_Type_Obu_BasicTypes_Pkg train_length,
  outC_SSP_Normalize_Profile_TA_SSP_new *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static StaticSpeedProfile_t_TrackAtlasTypes acc;
  static kcg_size idx2;

  outC->_L5 = train_length;
  /* _L6/ */
  for (idx = 0; idx < 50; idx++) {
    outC->_L6[idx] = outC->_L5;
  }
  outC->_L2 = pos_BG;
  /* _L4/ */
  for (idx1 = 0; idx1 < 50; idx1++) {
    outC->_L4[idx1] = outC->_L2;
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L1, ProfileIn);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L3, &outC->_L1);
  /* _L3= */
  for (idx2 = 0; idx2 < 50; idx2++) {
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&acc, &outC->_L3);
    /* _L3=(TA_SSP_new::SSP_Normalize_Profile_loop#1)/ */
    SSP_Normalize_Profile_loop_TA_SSP_new(
      /* _L3= */(kcg_int64) idx2,
      &acc,
      outC->_L4[idx2],
      outC->_L6[idx2],
      &outC->Context_SSP_Normalize_Profile_loop_1[idx2]);
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
      &outC->_L3,
      &outC->Context_SSP_Normalize_Profile_loop_1[idx2].ProfileNormalized_LRBG);
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    &outC->ProfileNormalized_LRBG,
    &outC->_L3);
}

#ifndef KCG_USER_DEFINED_INIT
void SSP_Normalize_Profile_init_TA_SSP_new(
  outC_SSP_Normalize_Profile_TA_SSP_new *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;

  for (idx1 = 0; idx1 < 50; idx1++) {
    outC->_L6[idx1] = kcg_lit_int64(0);
  }
  outC->_L5 = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 50; idx2++) {
    outC->_L4[idx2] = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 50; idx3++) {
    outC->_L3[idx3].valid = kcg_true;
    outC->_L3[idx3].d_static_abs = kcg_lit_int64(0);
    outC->_L3[idx3].d_static_LRBG = kcg_lit_int64(0);
    outC->_L3[idx3].q_train_length_corr = kcg_true;
    outC->_L3[idx3].v_static = kcg_lit_int64(0);
  }
  outC->_L2 = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 50; idx4++) {
    outC->_L1[idx4].valid = kcg_true;
    outC->_L1[idx4].d_static_abs = kcg_lit_int64(0);
    outC->_L1[idx4].d_static_LRBG = kcg_lit_int64(0);
    outC->_L1[idx4].q_train_length_corr = kcg_true;
    outC->_L1[idx4].v_static = kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 50; idx5++) {
    outC->ProfileNormalized_LRBG[idx5].valid = kcg_true;
    outC->ProfileNormalized_LRBG[idx5].d_static_abs = kcg_lit_int64(0);
    outC->ProfileNormalized_LRBG[idx5].d_static_LRBG = kcg_lit_int64(0);
    outC->ProfileNormalized_LRBG[idx5].q_train_length_corr = kcg_true;
    outC->ProfileNormalized_LRBG[idx5].v_static = kcg_lit_int64(0);
  }
  for (idx = 0; idx < 50; idx++) {
    /* _L3=(TA_SSP_new::SSP_Normalize_Profile_loop#1)/ */
    SSP_Normalize_Profile_loop_init_TA_SSP_new(
      &outC->Context_SSP_Normalize_Profile_loop_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SSP_Normalize_Profile_reset_TA_SSP_new(
  outC_SSP_Normalize_Profile_TA_SSP_new *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 50; idx++) {
    /* _L3=(TA_SSP_new::SSP_Normalize_Profile_loop#1)/ */
    SSP_Normalize_Profile_loop_reset_TA_SSP_new(
      &outC->Context_SSP_Normalize_Profile_loop_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SSP_Normalize_Profile_TA_SSP_new.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

