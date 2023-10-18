/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Normalize_Profile_loop_TA_SSP_new.h"

/* TA_SSP_new::SSP_Normalize_Profile_loop/ */
void SSP_Normalize_Profile_loop_TA_SSP_new(
  /* i/ */
  kcg_int64 i,
  /* ProfileIn/ */
  StaticSpeedProfile_t_TrackAtlasTypes *ProfileIn,
  /* pos_BG/ */
  L_internal_Type_Obu_BasicTypes_Pkg pos_BG,
  /* train_length/ */
  L_internal_Type_Obu_BasicTypes_Pkg train_length,
  outC_SSP_Normalize_Profile_loop_TA_SSP_new *outC)
{
  static L_internal_Type_Obu_BasicTypes_Pkg op_call;

  outC->_L1 = i;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L2, ProfileIn);
  if ((kcg_lit_int64(0) <= outC->_L1) & (outC->_L1 < kcg_lit_int64(50))) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &outC->_L4,
      &outC->_L2[outC->_L1]);
  }
  else {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &outC->_L4,
      (StaticSpeedSection_t_TrackAtlasTypes *) &DEFAULT_SSP_section_TA_SSP_new);
  }
  outC->_L5 = outC->_L4.valid;
  outC->_L44 = outC->_L4.q_train_length_corr;
  outC->_L49 = outC->_L44 & outC->_L5;
  outC->every = outC->_L49;
  outC->_L46 = train_length;
  outC->_L47 = i;
  outC->_L48 = outC->_L4.v_static;
  outC->_L11 = kcg_lit_int64(0);
  outC->_L3 = pos_BG;
  outC->_L38 = outC->_L4.d_static_abs;
  outC->_L9 = outC->_L38 - outC->_L3;
  /* _L10= */
  if (outC->_L5) {
    outC->_L10 = outC->_L9;
  }
  else {
    outC->_L10 = outC->_L11;
  }
  if (outC->every) {
    /* _L45=(TA_Lib_internal::TrainLength_Correction#1)/ */
    TrainLength_Correction_TA_Lib_internal(
      &outC->_L2,
      outC->_L46,
      outC->_L47,
      outC->_L48,
      outC->_L10,
      &outC->Context_TrainLength_Correction_1);
    op_call = outC->Context_TrainLength_Correction_1.corrected_distance;
  }
  kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(&outC->_L50, &outC->_L4);
  if (kcg_true) {
    outC->_L50.q_train_length_corr = outC->_L49;
  }
  if (outC->every) {
    outC->_L45 = op_call;
  }
  else {
    outC->_L45 = outC->_L10;
  }
  outC->_L40 = i;
  kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(&outC->_L7, &outC->_L50);
  if (kcg_true) {
    outC->_L7.d_static_LRBG = outC->_L45;
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L39, &outC->_L2);
  if ((kcg_lit_int64(0) <= outC->_L40) & (outC->_L40 < kcg_lit_int64(50))) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &outC->_L39[outC->_L40],
      &outC->_L7);
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    &outC->ProfileNormalized_LRBG,
    &outC->_L39);
}

#ifndef KCG_USER_DEFINED_INIT
void SSP_Normalize_Profile_loop_init_TA_SSP_new(
  outC_SSP_Normalize_Profile_loop_TA_SSP_new *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;

  outC->_L50.valid = kcg_true;
  outC->_L50.d_static_abs = kcg_lit_int64(0);
  outC->_L50.d_static_LRBG = kcg_lit_int64(0);
  outC->_L50.q_train_length_corr = kcg_true;
  outC->_L50.v_static = kcg_lit_int64(0);
  outC->_L49 = kcg_true;
  outC->_L48 = kcg_lit_int64(0);
  outC->_L47 = kcg_lit_int64(0);
  outC->_L46 = kcg_lit_int64(0);
  outC->_L45 = kcg_lit_int64(0);
  outC->_L44 = kcg_true;
  outC->_L40 = kcg_lit_int64(0);
  for (idx = 0; idx < 50; idx++) {
    outC->_L39[idx].valid = kcg_true;
    outC->_L39[idx].d_static_abs = kcg_lit_int64(0);
    outC->_L39[idx].d_static_LRBG = kcg_lit_int64(0);
    outC->_L39[idx].q_train_length_corr = kcg_true;
    outC->_L39[idx].v_static = kcg_lit_int64(0);
  }
  outC->_L38 = kcg_lit_int64(0);
  outC->_L11 = kcg_lit_int64(0);
  outC->_L10 = kcg_lit_int64(0);
  outC->_L9 = kcg_lit_int64(0);
  outC->_L7.valid = kcg_true;
  outC->_L7.d_static_abs = kcg_lit_int64(0);
  outC->_L7.d_static_LRBG = kcg_lit_int64(0);
  outC->_L7.q_train_length_corr = kcg_true;
  outC->_L7.v_static = kcg_lit_int64(0);
  outC->_L5 = kcg_true;
  outC->_L4.valid = kcg_true;
  outC->_L4.d_static_abs = kcg_lit_int64(0);
  outC->_L4.d_static_LRBG = kcg_lit_int64(0);
  outC->_L4.q_train_length_corr = kcg_true;
  outC->_L4.v_static = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 50; idx1++) {
    outC->_L2[idx1].valid = kcg_true;
    outC->_L2[idx1].d_static_abs = kcg_lit_int64(0);
    outC->_L2[idx1].d_static_LRBG = kcg_lit_int64(0);
    outC->_L2[idx1].q_train_length_corr = kcg_true;
    outC->_L2[idx1].v_static = kcg_lit_int64(0);
  }
  outC->_L1 = kcg_lit_int64(0);
  outC->every = kcg_true;
  for (idx2 = 0; idx2 < 50; idx2++) {
    outC->ProfileNormalized_LRBG[idx2].valid = kcg_true;
    outC->ProfileNormalized_LRBG[idx2].d_static_abs = kcg_lit_int64(0);
    outC->ProfileNormalized_LRBG[idx2].d_static_LRBG = kcg_lit_int64(0);
    outC->ProfileNormalized_LRBG[idx2].q_train_length_corr = kcg_true;
    outC->ProfileNormalized_LRBG[idx2].v_static = kcg_lit_int64(0);
  }
  /* _L45=(TA_Lib_internal::TrainLength_Correction#1)/ */
  TrainLength_Correction_init_TA_Lib_internal(
    &outC->Context_TrainLength_Correction_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SSP_Normalize_Profile_loop_reset_TA_SSP_new(
  outC_SSP_Normalize_Profile_loop_TA_SSP_new *outC)
{
  /* _L45=(TA_Lib_internal::TrainLength_Correction#1)/ */
  TrainLength_Correction_reset_TA_Lib_internal(
    &outC->Context_TrainLength_Correction_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SSP_Normalize_Profile_loop_TA_SSP_new.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

