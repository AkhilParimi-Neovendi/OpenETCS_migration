/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP_new.h"

/* TA_SSP_new::SSP_Convert_P27V1_to_DistanceProfile_loop/ */
void SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP_new(
  /* i/ */
  kcg_int64 i,
  /* ProfileAccu/ */
  StaticSpeedProfile_t_TrackAtlasTypes *ProfileAccu,
  /* SectionIn/ */
  P027V1_OBU_sectionlist_enum_T_TM_baseline2 *SectionIn,
  /* q_scale/ */
  Q_SCALE q_scale,
  outC_SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP_new *outC)
{
  outC->_L134 = i;
  kcg_copy_P027V1_OBU_sectionlist_enum_T_TM_baseline2(&outC->_L121, SectionIn);
  if ((kcg_lit_int64(0) <= outC->_L134) & (outC->_L134 < kcg_lit_int64(33))) {
    kcg_copy_P027V1_section_enum_T_TM_baseline2(
      &outC->_L123,
      &outC->_L121[outC->_L134]);
  }
  else {
    kcg_copy_P027V1_section_enum_T_TM_baseline2(
      &outC->_L123,
      (P027V1_section_enum_T_TM_baseline2 *)
        &DEFAULT_P027v1_OBU_section_TM_baseline2);
  }
  outC->_L159 = outC->_L123.q_front;
  /* _L160=(TA_Lib_internal::Eval_Q_Front#1)/ */
  Eval_Q_Front_TA_Lib_internal(outC->_L159, &outC->Context_Eval_Q_Front_1);
  outC->_L160 = outC->Context_Eval_Q_Front_1.add_train_length;
  outC->_L158 = kcg_lit_int64(0);
  outC->_L145 = kcg_lit_int64(1);
  outC->_L144 = i;
  outC->_L146 = outC->_L144 - outC->_L145;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L142, ProfileAccu);
  if ((kcg_lit_int64(0) <= outC->_L146) & (outC->_L146 < kcg_lit_int64(50))) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &outC->_L143,
      &outC->_L142[outC->_L146]);
  }
  else {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &outC->_L143,
      (StaticSpeedSection_t_TrackAtlasTypes *)
        &DEFAULT_StaticSpeedSection_TrackAtlasTypes);
  }
  outC->_L148 = outC->_L143.d_static_LRBG;
  outC->_L139 = q_scale;
  outC->_L138 = outC->_L123.d_static;
  /* _L135=(TA_Lib_internal::Normalize_Distance_d_internal_t#2)/ */
  Normalize_Distance_d_internal_t_TA_Lib_internal(
    outC->_L139,
    outC->_L138,
    &outC->Context_Normalize_Distance_d_internal_t_2);
  outC->_L135 = outC->Context_Normalize_Distance_d_internal_t_2.d_internal;
  outC->_L157 = outC->_L135 + outC->_L148;
  outC->_L130 = outC->_L123.valid;
  /* _L156= */
  if (outC->_L130) {
    outC->_L156 = outC->_L157;
  }
  else {
    outC->_L156 = outC->_L158;
  }
  outC->_L147 = outC->_L143.d_static_abs;
  outC->_L154 = outC->_L135 + outC->_L147;
  /* _L155= */
  if (outC->_L130) {
    outC->_L155 = outC->_L154;
  }
  else {
    outC->_L155 = outC->_L158;
  }
  outC->_L137 = outC->_L123.v_static;
  outC->_L136.valid = outC->_L130;
  outC->_L136.d_static_abs = outC->_L155;
  outC->_L136.d_static_LRBG = outC->_L156;
  outC->_L136.q_train_length_corr = outC->_L160;
  outC->_L136.v_static = outC->_L137;
  outC->_L131 = i;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L125, ProfileAccu);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L133, &outC->_L125);
  if ((kcg_lit_int64(0) <= outC->_L131) & (outC->_L131 < kcg_lit_int64(50))) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &outC->_L133[outC->_L131],
      &outC->_L136);
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    &outC->SpeedtProfile,
    &outC->_L133);
}

#ifndef KCG_USER_DEFINED_INIT
void SSP_Convert_P27V1_to_DistanceProfile_loop_init_TA_SSP_new(
  outC_SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP_new *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;

  outC->_L160 = kcg_true;
  outC->_L159 =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  outC->_L158 = kcg_lit_int64(0);
  outC->_L157 = kcg_lit_int64(0);
  outC->_L156 = kcg_lit_int64(0);
  outC->_L155 = kcg_lit_int64(0);
  outC->_L154 = kcg_lit_int64(0);
  outC->_L148 = kcg_lit_int64(0);
  outC->_L147 = kcg_lit_int64(0);
  outC->_L146 = kcg_lit_int64(0);
  outC->_L145 = kcg_lit_int64(0);
  outC->_L144 = kcg_lit_int64(0);
  outC->_L143.valid = kcg_true;
  outC->_L143.d_static_abs = kcg_lit_int64(0);
  outC->_L143.d_static_LRBG = kcg_lit_int64(0);
  outC->_L143.q_train_length_corr = kcg_true;
  outC->_L143.v_static = kcg_lit_int64(0);
  for (idx = 0; idx < 50; idx++) {
    outC->_L142[idx].valid = kcg_true;
    outC->_L142[idx].d_static_abs = kcg_lit_int64(0);
    outC->_L142[idx].d_static_LRBG = kcg_lit_int64(0);
    outC->_L142[idx].q_train_length_corr = kcg_true;
    outC->_L142[idx].v_static = kcg_lit_int64(0);
  }
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L121[idx2].valid = kcg_true;
    outC->_L121[idx2].d_static = kcg_lit_int64(0);
    outC->_L121[idx2].v_static = kcg_lit_int64(0);
    outC->_L121[idx2].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    outC->_L121[idx2].n_iter = kcg_lit_int64(0);
    for (idx1 = 0; idx1 < 32; idx1++) {
      outC->_L121[idx2].SECTIONS_q_diff[idx1].valid = kcg_true;
      outC->_L121[idx2].SECTIONS_q_diff[idx1].nc_diff = kcg_lit_int64(0);
      outC->_L121[idx2].SECTIONS_q_diff[idx1].v_diff = kcg_lit_int64(0);
    }
  }
  outC->_L123.valid = kcg_true;
  outC->_L123.d_static = kcg_lit_int64(0);
  outC->_L123.v_static = kcg_lit_int64(0);
  outC->_L123.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  outC->_L123.n_iter = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 32; idx3++) {
    outC->_L123.SECTIONS_q_diff[idx3].valid = kcg_true;
    outC->_L123.SECTIONS_q_diff[idx3].nc_diff = kcg_lit_int64(0);
    outC->_L123.SECTIONS_q_diff[idx3].v_diff = kcg_lit_int64(0);
  }
  for (idx4 = 0; idx4 < 50; idx4++) {
    outC->_L125[idx4].valid = kcg_true;
    outC->_L125[idx4].d_static_abs = kcg_lit_int64(0);
    outC->_L125[idx4].d_static_LRBG = kcg_lit_int64(0);
    outC->_L125[idx4].q_train_length_corr = kcg_true;
    outC->_L125[idx4].v_static = kcg_lit_int64(0);
  }
  outC->_L130 = kcg_true;
  outC->_L131 = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 50; idx5++) {
    outC->_L133[idx5].valid = kcg_true;
    outC->_L133[idx5].d_static_abs = kcg_lit_int64(0);
    outC->_L133[idx5].d_static_LRBG = kcg_lit_int64(0);
    outC->_L133[idx5].q_train_length_corr = kcg_true;
    outC->_L133[idx5].v_static = kcg_lit_int64(0);
  }
  outC->_L134 = kcg_lit_int64(0);
  outC->_L135 = kcg_lit_int64(0);
  outC->_L136.valid = kcg_true;
  outC->_L136.d_static_abs = kcg_lit_int64(0);
  outC->_L136.d_static_LRBG = kcg_lit_int64(0);
  outC->_L136.q_train_length_corr = kcg_true;
  outC->_L136.v_static = kcg_lit_int64(0);
  outC->_L137 = kcg_lit_int64(0);
  outC->_L138 = kcg_lit_int64(0);
  outC->_L139 = Q_SCALE_10_cm_scale;
  for (idx6 = 0; idx6 < 50; idx6++) {
    outC->SpeedtProfile[idx6].valid = kcg_true;
    outC->SpeedtProfile[idx6].d_static_abs = kcg_lit_int64(0);
    outC->SpeedtProfile[idx6].d_static_LRBG = kcg_lit_int64(0);
    outC->SpeedtProfile[idx6].q_train_length_corr = kcg_true;
    outC->SpeedtProfile[idx6].v_static = kcg_lit_int64(0);
  }
  /* _L135=(TA_Lib_internal::Normalize_Distance_d_internal_t#2)/ */
  Normalize_Distance_d_internal_t_init_TA_Lib_internal(
    &outC->Context_Normalize_Distance_d_internal_t_2);
  /* _L160=(TA_Lib_internal::Eval_Q_Front#1)/ */
  Eval_Q_Front_init_TA_Lib_internal(&outC->Context_Eval_Q_Front_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SSP_Convert_P27V1_to_DistanceProfile_loop_reset_TA_SSP_new(
  outC_SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP_new *outC)
{
  /* _L135=(TA_Lib_internal::Normalize_Distance_d_internal_t#2)/ */
  Normalize_Distance_d_internal_t_reset_TA_Lib_internal(
    &outC->Context_Normalize_Distance_d_internal_t_2);
  /* _L160=(TA_Lib_internal::Eval_Q_Front#1)/ */
  Eval_Q_Front_reset_TA_Lib_internal(&outC->Context_Eval_Q_Front_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP_new.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

