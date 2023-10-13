/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Convert_P27V1_to_DistanceProfile_TA_SSP_new.h"

/* TA_SSP_new::SSP_Convert_P27V1_to_DistanceProfile/ */
void SSP_Convert_P27V1_to_DistanceProfile_TA_SSP_new(
  /* Packet27V1_in/ */
  P027V1_OBU_T_TM_baseline2 *Packet27V1_in,
  outC_SSP_Convert_P27V1_to_DistanceProfile_TA_SSP_new *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static StaticSpeedProfile_t_TrackAtlasTypes acc;
  static kcg_size idx2;

  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    &outC->_L83,
    (StaticSpeedProfile_t_TrackAtlasTypes *)
      &DEFAULT_StaticSpeedProfile_TrackAtlasTypes);
  kcg_copy_P027V1_OBU_T_TM_baseline2(&outC->_L73, Packet27V1_in);
  kcg_copy_P027V1_OBU_sectionlist_enum_T_TM_baseline2(
    &outC->_L71,
    &outC->_L73.sections);
  /* _L74/ */
  for (idx = 0; idx < 50; idx++) {
    kcg_copy_P027V1_OBU_sectionlist_enum_T_TM_baseline2(
      &outC->_L74[idx],
      &outC->_L71);
  }
  kcg_copy_P027V1_OBU_T_TM_baseline2(&outC->_L63, Packet27V1_in);
  outC->_L65 = outC->_L63.q_scale;
  /* _L76/ */
  for (idx1 = 0; idx1 < 50; idx1++) {
    outC->_L76[idx1] = outC->_L65;
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L77, &outC->_L83);
  /* _L77= */
  for (idx2 = 0; idx2 < 50; idx2++) {
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&acc, &outC->_L77);
    /* _L77=(TA_SSP_new::SSP_Convert_P27V1_to_DistanceProfile_loop#1)/ */
    SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP_new(
      /* _L77= */(kcg_int64) idx2,
      &acc,
      &outC->_L74[idx2],
      outC->_L76[idx2],
      &outC->Context_SSP_Convert_P27V1_to_DistanceProfile_loop_1[idx2]);
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
      &outC->_L77,
      &outC->Context_SSP_Convert_P27V1_to_DistanceProfile_loop_1[idx2].SpeedtProfile);
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->SpeedProfile, &outC->_L77);
}

#ifndef KCG_USER_DEFINED_INIT
void SSP_Convert_P27V1_to_DistanceProfile_init_TA_SSP_new(
  outC_SSP_Convert_P27V1_to_DistanceProfile_TA_SSP_new *outC)
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
  static kcg_size idx11;
  static kcg_size idx12;
  static kcg_size idx13;

  for (idx1 = 0; idx1 < 50; idx1++) {
    outC->_L83[idx1].valid = kcg_true;
    outC->_L83[idx1].d_static_abs = kcg_lit_int64(0);
    outC->_L83[idx1].d_static_LRBG = kcg_lit_int64(0);
    outC->_L83[idx1].q_train_length_corr = kcg_true;
    outC->_L83[idx1].v_static = kcg_lit_int64(0);
  }
  for (idx2 = 0; idx2 < 50; idx2++) {
    outC->_L77[idx2].valid = kcg_true;
    outC->_L77[idx2].d_static_abs = kcg_lit_int64(0);
    outC->_L77[idx2].d_static_LRBG = kcg_lit_int64(0);
    outC->_L77[idx2].q_train_length_corr = kcg_true;
    outC->_L77[idx2].v_static = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 50; idx3++) {
    outC->_L76[idx3] = Q_SCALE_10_cm_scale;
  }
  for (idx6 = 0; idx6 < 50; idx6++) {
    for (idx5 = 0; idx5 < 33; idx5++) {
      outC->_L74[idx6][idx5].valid = kcg_true;
      outC->_L74[idx6][idx5].d_static = kcg_lit_int64(0);
      outC->_L74[idx6][idx5].v_static = kcg_lit_int64(0);
      outC->_L74[idx6][idx5].q_front =
        Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
      outC->_L74[idx6][idx5].n_iter = kcg_lit_int64(0);
      for (idx4 = 0; idx4 < 32; idx4++) {
        outC->_L74[idx6][idx5].SECTIONS_q_diff[idx4].valid = kcg_true;
        outC->_L74[idx6][idx5].SECTIONS_q_diff[idx4].nc_diff = kcg_lit_int64(0);
        outC->_L74[idx6][idx5].SECTIONS_q_diff[idx4].v_diff = kcg_lit_int64(0);
      }
    }
  }
  outC->_L63.valid = kcg_true;
  outC->_L63.q_dir = Q_DIR_Reverse;
  outC->_L63.q_scale = Q_SCALE_10_cm_scale;
  for (idx8 = 0; idx8 < 33; idx8++) {
    outC->_L63.sections[idx8].valid = kcg_true;
    outC->_L63.sections[idx8].d_static = kcg_lit_int64(0);
    outC->_L63.sections[idx8].v_static = kcg_lit_int64(0);
    outC->_L63.sections[idx8].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    outC->_L63.sections[idx8].n_iter = kcg_lit_int64(0);
    for (idx7 = 0; idx7 < 32; idx7++) {
      outC->_L63.sections[idx8].SECTIONS_q_diff[idx7].valid = kcg_true;
      outC->_L63.sections[idx8].SECTIONS_q_diff[idx7].nc_diff = kcg_lit_int64(0);
      outC->_L63.sections[idx8].SECTIONS_q_diff[idx7].v_diff = kcg_lit_int64(0);
    }
  }
  outC->_L65 = Q_SCALE_10_cm_scale;
  for (idx10 = 0; idx10 < 33; idx10++) {
    outC->_L71[idx10].valid = kcg_true;
    outC->_L71[idx10].d_static = kcg_lit_int64(0);
    outC->_L71[idx10].v_static = kcg_lit_int64(0);
    outC->_L71[idx10].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    outC->_L71[idx10].n_iter = kcg_lit_int64(0);
    for (idx9 = 0; idx9 < 32; idx9++) {
      outC->_L71[idx10].SECTIONS_q_diff[idx9].valid = kcg_true;
      outC->_L71[idx10].SECTIONS_q_diff[idx9].nc_diff = kcg_lit_int64(0);
      outC->_L71[idx10].SECTIONS_q_diff[idx9].v_diff = kcg_lit_int64(0);
    }
  }
  outC->_L73.valid = kcg_true;
  outC->_L73.q_dir = Q_DIR_Reverse;
  outC->_L73.q_scale = Q_SCALE_10_cm_scale;
  for (idx12 = 0; idx12 < 33; idx12++) {
    outC->_L73.sections[idx12].valid = kcg_true;
    outC->_L73.sections[idx12].d_static = kcg_lit_int64(0);
    outC->_L73.sections[idx12].v_static = kcg_lit_int64(0);
    outC->_L73.sections[idx12].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    outC->_L73.sections[idx12].n_iter = kcg_lit_int64(0);
    for (idx11 = 0; idx11 < 32; idx11++) {
      outC->_L73.sections[idx12].SECTIONS_q_diff[idx11].valid = kcg_true;
      outC->_L73.sections[idx12].SECTIONS_q_diff[idx11].nc_diff = kcg_lit_int64(0);
      outC->_L73.sections[idx12].SECTIONS_q_diff[idx11].v_diff = kcg_lit_int64(0);
    }
  }
  for (idx13 = 0; idx13 < 50; idx13++) {
    outC->SpeedProfile[idx13].valid = kcg_true;
    outC->SpeedProfile[idx13].d_static_abs = kcg_lit_int64(0);
    outC->SpeedProfile[idx13].d_static_LRBG = kcg_lit_int64(0);
    outC->SpeedProfile[idx13].q_train_length_corr = kcg_true;
    outC->SpeedProfile[idx13].v_static = kcg_lit_int64(0);
  }
  for (idx = 0; idx < 50; idx++) {
    /* _L77=(TA_SSP_new::SSP_Convert_P27V1_to_DistanceProfile_loop#1)/ */
    SSP_Convert_P27V1_to_DistanceProfile_loop_init_TA_SSP_new(
      &outC->Context_SSP_Convert_P27V1_to_DistanceProfile_loop_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SSP_Convert_P27V1_to_DistanceProfile_reset_TA_SSP_new(
  outC_SSP_Convert_P27V1_to_DistanceProfile_TA_SSP_new *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 50; idx++) {
    /* _L77=(TA_SSP_new::SSP_Convert_P27V1_to_DistanceProfile_loop#1)/ */
    SSP_Convert_P27V1_to_DistanceProfile_loop_reset_TA_SSP_new(
      &outC->Context_SSP_Convert_P27V1_to_DistanceProfile_loop_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SSP_Convert_P27V1_to_DistanceProfile_TA_SSP_new.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

