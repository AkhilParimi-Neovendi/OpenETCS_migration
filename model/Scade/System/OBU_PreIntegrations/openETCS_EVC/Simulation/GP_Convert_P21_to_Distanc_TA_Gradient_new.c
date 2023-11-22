/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Convert_P21_to_Distanc_TA_Gradient_new.h"

/* TA_Gradient_new::GP_Convert_P21_to_DistanceProfile_loop/ */
void GP_Convert_P21_to_Distanc_TA_Gradient_new(
  /* i/ */
  kcg_int32 i,
  /* ProfileAccu/ */
  GradientProfile_t_TrackAtlasTypes *ProfileAccu,
  /* SectionIn/ */
  P021_OBU_sectionlist_enum_T_TM *SectionIn,
  /* q_scale/ */
  Q_SCALE q_scale,
  outC_GP_Convert_P21_to_Distanc_TA_Gradient_new *outC)
{
  outC->_L153 = kcg_lit_int32(0);
  outC->_L145 = kcg_lit_int32(1);
  outC->_L144 = i;
  outC->_L146 = outC->_L144 - outC->_L145;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L142, ProfileAccu);
  if ((kcg_lit_int32(0) <= outC->_L146) & (outC->_L146 < kcg_lit_int32(50))) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &outC->_L143,
      &outC->_L142[outC->_L146]);
  }
  else {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &outC->_L143,
      (Gradient_section_t_TrackAtlasTypes *) &DEFAULT_GP_Section_TA_Gradient_new);
  }
  outC->_L148 = outC->_L143.Loc_LRBG;
  outC->_L139 = q_scale;
  outC->_L134 = i;
  kcg_copy_P021_OBU_sectionlist_enum_T_TM(&outC->_L121, SectionIn);
  if ((kcg_lit_int32(0) <= outC->_L134) & (outC->_L134 < kcg_lit_int32(33))) {
    kcg_copy_P021_section_enum_T_TM(&outC->_L123, &outC->_L121[outC->_L134]);
  }
  else {
    kcg_copy_P021_section_enum_T_TM(
      &outC->_L123,
      (P021_section_enum_T_TM *) &DEFAULT_P021_OBU_section_TM);
  }
  outC->_L138 = outC->_L123.d_gradient;
  /* _L135=(TA_Lib_internal::Normalize_Distance_d_internal_t#3)/ */
  Normalize_Distance_d_inte_TA_Lib_internal(
    outC->_L139,
    outC->_L138,
    &outC->_1_Context_Normalize_Distance_d_internal_t_3);
  outC->_L135 = outC->_1_Context_Normalize_Distance_d_internal_t_3.d_internal;
  outC->_L150 = outC->_L135 + outC->_L148;
  outC->_L130 = outC->_L123.valid;
  /* _L152= */
  if (outC->_L130) {
    outC->_L152 = outC->_L150;
  }
  else {
    outC->_L152 = outC->_L153;
  }
  outC->_L147 = outC->_L143.Loc_Absolute;
  outC->_L149 = outC->_L135 + outC->_L147;
  /* _L151= */
  if (outC->_L130) {
    outC->_L151 = outC->_L149;
  }
  else {
    outC->_L151 = outC->_L153;
  }
  outC->_L126 = kcg_lit_int32(1);
  outC->_L141 = outC->_L134 + outC->_L126;
  kcg_copy_P021_OBU_sectionlist_enum_T_TM(&outC->_L128, SectionIn);
  if ((kcg_lit_int32(0) <= outC->_L141) & (outC->_L141 < kcg_lit_int32(33))) {
    kcg_copy_P021_section_enum_T_TM(&outC->_L140, &outC->_L128[outC->_L141]);
  }
  else {
    kcg_copy_P021_section_enum_T_TM(
      &outC->_L140,
      (P021_section_enum_T_TM *) &DEFAULT_P021_OBU_section_TM);
  }
  outC->_L137 = outC->_L140.d_gradient;
  outC->_L129 = outC->_L123.q_gdir;
  outC->_L124 = outC->_L123.g_a;
  /* _L127=(TA_Lib_internal::EVAL_Q_GDIR#2)/ */
  EVAL_Q_GDIR_TA_Lib_internal(
    outC->_L129,
    outC->_L124,
    &outC->Context_EVAL_Q_GDIR_2);
  outC->_L127 = outC->Context_EVAL_Q_GDIR_2.gradient;
  /* _L122=(TA_Lib_internal::Normalize_Distance_d_internal_t#4)/ */
  Normalize_Distance_d_inte_TA_Lib_internal(
    outC->_L139,
    outC->_L137,
    &outC->Context_Normalize_Distance_d_internal_t_4);
  outC->_L122 = outC->Context_Normalize_Distance_d_internal_t_4.d_internal;
  outC->_L136.valid = outC->_L130;
  outC->_L136.Loc_Absolute = outC->_L151;
  outC->_L136.Loc_LRBG = outC->_L152;
  outC->_L136.Gradient = outC->_L127;
  outC->_L136.L_Gradient = outC->_L122;
  outC->_L131 = i;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L125, ProfileAccu);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L133, &outC->_L125);
  if ((kcg_lit_int32(0) <= outC->_L131) & (outC->_L131 < kcg_lit_int32(50))) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &outC->_L133[outC->_L131],
      &outC->_L136);
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->GradientProfile,
    &outC->_L133);
}

#ifndef KCG_USER_DEFINED_INIT
void GP_Convert_P21_to_Distanc_init_TA_Gradient_new(
  outC_GP_Convert_P21_to_Distanc_TA_Gradient_new *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;

  outC->_L153 = kcg_lit_int32(0);
  outC->_L152 = kcg_lit_int32(0);
  outC->_L151 = kcg_lit_int32(0);
  outC->_L150 = kcg_lit_int32(0);
  outC->_L149 = kcg_lit_int32(0);
  outC->_L148 = kcg_lit_int32(0);
  outC->_L147 = kcg_lit_int32(0);
  outC->_L146 = kcg_lit_int32(0);
  outC->_L145 = kcg_lit_int32(0);
  outC->_L144 = kcg_lit_int32(0);
  outC->_L143.valid = kcg_true;
  outC->_L143.Loc_Absolute = kcg_lit_int32(0);
  outC->_L143.Loc_LRBG = kcg_lit_int32(0);
  outC->_L143.Gradient = kcg_lit_int32(0);
  outC->_L143.L_Gradient = kcg_lit_int32(0);
  for (idx = 0; idx < 50; idx++) {
    outC->_L142[idx].valid = kcg_true;
    outC->_L142[idx].Loc_Absolute = kcg_lit_int32(0);
    outC->_L142[idx].Loc_LRBG = kcg_lit_int32(0);
    outC->_L142[idx].Gradient = kcg_lit_int32(0);
    outC->_L142[idx].L_Gradient = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L121[idx1].valid = kcg_true;
    outC->_L121[idx1].d_gradient = kcg_lit_int32(0);
    outC->_L121[idx1].q_gdir = Q_GDIR_downhill;
    outC->_L121[idx1].g_a = kcg_lit_int32(0);
  }
  outC->_L122 = kcg_lit_int32(0);
  outC->_L123.valid = kcg_true;
  outC->_L123.d_gradient = kcg_lit_int32(0);
  outC->_L123.q_gdir = Q_GDIR_downhill;
  outC->_L123.g_a = kcg_lit_int32(0);
  outC->_L124 = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 50; idx2++) {
    outC->_L125[idx2].valid = kcg_true;
    outC->_L125[idx2].Loc_Absolute = kcg_lit_int32(0);
    outC->_L125[idx2].Loc_LRBG = kcg_lit_int32(0);
    outC->_L125[idx2].Gradient = kcg_lit_int32(0);
    outC->_L125[idx2].L_Gradient = kcg_lit_int32(0);
  }
  outC->_L126 = kcg_lit_int32(0);
  outC->_L127 = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L128[idx3].valid = kcg_true;
    outC->_L128[idx3].d_gradient = kcg_lit_int32(0);
    outC->_L128[idx3].q_gdir = Q_GDIR_downhill;
    outC->_L128[idx3].g_a = kcg_lit_int32(0);
  }
  outC->_L129 = Q_GDIR_downhill;
  outC->_L130 = kcg_true;
  outC->_L131 = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 50; idx4++) {
    outC->_L133[idx4].valid = kcg_true;
    outC->_L133[idx4].Loc_Absolute = kcg_lit_int32(0);
    outC->_L133[idx4].Loc_LRBG = kcg_lit_int32(0);
    outC->_L133[idx4].Gradient = kcg_lit_int32(0);
    outC->_L133[idx4].L_Gradient = kcg_lit_int32(0);
  }
  outC->_L134 = kcg_lit_int32(0);
  outC->_L135 = kcg_lit_int32(0);
  outC->_L136.valid = kcg_true;
  outC->_L136.Loc_Absolute = kcg_lit_int32(0);
  outC->_L136.Loc_LRBG = kcg_lit_int32(0);
  outC->_L136.Gradient = kcg_lit_int32(0);
  outC->_L136.L_Gradient = kcg_lit_int32(0);
  outC->_L137 = kcg_lit_int32(0);
  outC->_L138 = kcg_lit_int32(0);
  outC->_L139 = Q_SCALE_10_cm_scale;
  outC->_L140.valid = kcg_true;
  outC->_L140.d_gradient = kcg_lit_int32(0);
  outC->_L140.q_gdir = Q_GDIR_downhill;
  outC->_L140.g_a = kcg_lit_int32(0);
  outC->_L141 = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 50; idx5++) {
    outC->GradientProfile[idx5].valid = kcg_true;
    outC->GradientProfile[idx5].Loc_Absolute = kcg_lit_int32(0);
    outC->GradientProfile[idx5].Loc_LRBG = kcg_lit_int32(0);
    outC->GradientProfile[idx5].Gradient = kcg_lit_int32(0);
    outC->GradientProfile[idx5].L_Gradient = kcg_lit_int32(0);
  }
  /* _L122=(TA_Lib_internal::Normalize_Distance_d_internal_t#4)/ */
  Normalize_Distance_d_inte_init_TA_Lib_internal(
    &outC->Context_Normalize_Distance_d_internal_t_4);
  /* _L127=(TA_Lib_internal::EVAL_Q_GDIR#2)/ */
  EVAL_Q_GDIR_init_TA_Lib_internal(&outC->Context_EVAL_Q_GDIR_2);
  /* _L135=(TA_Lib_internal::Normalize_Distance_d_internal_t#3)/ */
  Normalize_Distance_d_inte_init_TA_Lib_internal(
    &outC->_1_Context_Normalize_Distance_d_internal_t_3);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void GP_Convert_P21_to_Distanc_reset_TA_Gradient_new(
  outC_GP_Convert_P21_to_Distanc_TA_Gradient_new *outC)
{
  /* _L122=(TA_Lib_internal::Normalize_Distance_d_internal_t#4)/ */
  Normalize_Distance_d_inte_reset_TA_Lib_internal(
    &outC->Context_Normalize_Distance_d_internal_t_4);
  /* _L127=(TA_Lib_internal::EVAL_Q_GDIR#2)/ */
  EVAL_Q_GDIR_reset_TA_Lib_internal(&outC->Context_EVAL_Q_GDIR_2);
  /* _L135=(TA_Lib_internal::Normalize_Distance_d_internal_t#3)/ */
  Normalize_Distance_d_inte_reset_TA_Lib_internal(
    &outC->_1_Context_Normalize_Distance_d_internal_t_3);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** GP_Convert_P21_to_Distanc_TA_Gradient_new.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

