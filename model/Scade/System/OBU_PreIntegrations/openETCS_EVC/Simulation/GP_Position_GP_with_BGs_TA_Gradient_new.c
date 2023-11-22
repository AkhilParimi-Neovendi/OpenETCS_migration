/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Position_GP_with_BGs_TA_Gradient_new.h"

/* TA_Gradient_new::GP_Position_GP_with_BGs/ */
void GP_Position_GP_with_BGs_TA_Gradient_new(
  /* ProfileIn/ */
  GradientProfile_t_TrackAtlasTypes *ProfileIn,
  /* pos_LRBG/ */
  L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* pos_prvLRBG/ */
  L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* there_is_prvLRBG/ */
  kcg_bool there_is_prvLRBG,
  /* LastProfile/ */
  GradientProfile_t_TrackAtlasTypes *LastProfile,
  outC_GP_Position_GP_with_BGs_TA_Gradient_new *outC)
{
  kcg_bool noname;

  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L4, ProfileIn);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L5, LastProfile);
  /* _L6=(TA_Gradient_new::GP_Merge_New_P21_to_Profile#1)/ */
  GP_Merge_New_P21_to_Profile_TA_Gradient_new(
    &outC->_L4,
    &outC->_L5,
    &outC->Context_GP_Merge_New_P21_to_Profile_1);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->_L6,
    &outC->Context_GP_Merge_New_P21_to_Profile_1.GradientdProfile_out);
  outC->_L9 = pos_LRBG;
  /* _L16=(TA_Gradient_new::GP_Normalize_Profile#1)/ */
  GP_Normalize_Profile_TA_Gradient_new(
    &outC->_L6,
    outC->_L9,
    &outC->Context_GP_Normalize_Profile_1);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->_L16,
    &outC->Context_GP_Normalize_Profile_1.ProfileNormalized_LRBG);
  /* _L22=(TA_Gradient_new::GP_Truncate_at_BG#2)/ */
  GP_Truncate_at_BG_TA_Gradient_new(
    &outC->_L16,
    &outC->Context_GP_Truncate_at_BG_2);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->_L22,
    &outC->Context_GP_Truncate_at_BG_2.Profile_out);
  outC->_L27 = pos_LRBG;
  /* _L24=(TA_Gradient_new::GP_Correct_StartSection#1)/ */
  GP_Correct_StartSection_TA_Gradient_new(
    &outC->_L22,
    outC->_L27,
    &outC->Context_GP_Correct_StartSection_1);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->_L24,
    &outC->Context_GP_Correct_StartSection_1.Profile_out);
  outC->_L28 = outC->_L24[0].valid;
  outC->available = outC->_L28;
  outC->_L8 = pos_prvLRBG;
  /* _L18=(TA_Gradient_new::GP_Normalize_Profile#2)/ */
  GP_Normalize_Profile_TA_Gradient_new(
    &outC->_L6,
    outC->_L8,
    &outC->Context_GP_Normalize_Profile_2);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->_L18,
    &outC->Context_GP_Normalize_Profile_2.ProfileNormalized_LRBG);
  /* _L23=(TA_Gradient_new::GP_Truncate_at_BG#3)/ */
  GP_Truncate_at_BG_TA_Gradient_new(
    &outC->_L18,
    &outC->Context_GP_Truncate_at_BG_3);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->_L23,
    &outC->Context_GP_Truncate_at_BG_3.Profile_out);
  outC->_L15 = there_is_prvLRBG;
  noname = outC->_L15;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->ProfileLoopOut, &outC->_L23);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->ProfileOut, &outC->_L24);
}

#ifndef KCG_USER_DEFINED_INIT
void GP_Position_GP_with_BGs_init_TA_Gradient_new(
  outC_GP_Position_GP_with_BGs_TA_Gradient_new *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;
  kcg_size idx7;
  kcg_size idx8;
  kcg_size idx9;

  outC->_L28 = kcg_true;
  outC->_L27 = kcg_lit_int32(0);
  for (idx = 0; idx < 50; idx++) {
    outC->_L24[idx].valid = kcg_true;
    outC->_L24[idx].Loc_Absolute = kcg_lit_int32(0);
    outC->_L24[idx].Loc_LRBG = kcg_lit_int32(0);
    outC->_L24[idx].Gradient = kcg_lit_int32(0);
    outC->_L24[idx].L_Gradient = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 50; idx1++) {
    outC->_L23[idx1].valid = kcg_true;
    outC->_L23[idx1].Loc_Absolute = kcg_lit_int32(0);
    outC->_L23[idx1].Loc_LRBG = kcg_lit_int32(0);
    outC->_L23[idx1].Gradient = kcg_lit_int32(0);
    outC->_L23[idx1].L_Gradient = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 50; idx2++) {
    outC->_L22[idx2].valid = kcg_true;
    outC->_L22[idx2].Loc_Absolute = kcg_lit_int32(0);
    outC->_L22[idx2].Loc_LRBG = kcg_lit_int32(0);
    outC->_L22[idx2].Gradient = kcg_lit_int32(0);
    outC->_L22[idx2].L_Gradient = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 50; idx3++) {
    outC->_L18[idx3].valid = kcg_true;
    outC->_L18[idx3].Loc_Absolute = kcg_lit_int32(0);
    outC->_L18[idx3].Loc_LRBG = kcg_lit_int32(0);
    outC->_L18[idx3].Gradient = kcg_lit_int32(0);
    outC->_L18[idx3].L_Gradient = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 50; idx4++) {
    outC->_L16[idx4].valid = kcg_true;
    outC->_L16[idx4].Loc_Absolute = kcg_lit_int32(0);
    outC->_L16[idx4].Loc_LRBG = kcg_lit_int32(0);
    outC->_L16[idx4].Gradient = kcg_lit_int32(0);
    outC->_L16[idx4].L_Gradient = kcg_lit_int32(0);
  }
  outC->_L15 = kcg_true;
  for (idx5 = 0; idx5 < 50; idx5++) {
    outC->_L6[idx5].valid = kcg_true;
    outC->_L6[idx5].Loc_Absolute = kcg_lit_int32(0);
    outC->_L6[idx5].Loc_LRBG = kcg_lit_int32(0);
    outC->_L6[idx5].Gradient = kcg_lit_int32(0);
    outC->_L6[idx5].L_Gradient = kcg_lit_int32(0);
  }
  outC->_L9 = kcg_lit_int32(0);
  outC->_L8 = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 50; idx6++) {
    outC->_L5[idx6].valid = kcg_true;
    outC->_L5[idx6].Loc_Absolute = kcg_lit_int32(0);
    outC->_L5[idx6].Loc_LRBG = kcg_lit_int32(0);
    outC->_L5[idx6].Gradient = kcg_lit_int32(0);
    outC->_L5[idx6].L_Gradient = kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 50; idx7++) {
    outC->_L4[idx7].valid = kcg_true;
    outC->_L4[idx7].Loc_Absolute = kcg_lit_int32(0);
    outC->_L4[idx7].Loc_LRBG = kcg_lit_int32(0);
    outC->_L4[idx7].Gradient = kcg_lit_int32(0);
    outC->_L4[idx7].L_Gradient = kcg_lit_int32(0);
  }
  for (idx8 = 0; idx8 < 50; idx8++) {
    outC->ProfileLoopOut[idx8].valid = kcg_true;
    outC->ProfileLoopOut[idx8].Loc_Absolute = kcg_lit_int32(0);
    outC->ProfileLoopOut[idx8].Loc_LRBG = kcg_lit_int32(0);
    outC->ProfileLoopOut[idx8].Gradient = kcg_lit_int32(0);
    outC->ProfileLoopOut[idx8].L_Gradient = kcg_lit_int32(0);
  }
  outC->available = kcg_true;
  for (idx9 = 0; idx9 < 50; idx9++) {
    outC->ProfileOut[idx9].valid = kcg_true;
    outC->ProfileOut[idx9].Loc_Absolute = kcg_lit_int32(0);
    outC->ProfileOut[idx9].Loc_LRBG = kcg_lit_int32(0);
    outC->ProfileOut[idx9].Gradient = kcg_lit_int32(0);
    outC->ProfileOut[idx9].L_Gradient = kcg_lit_int32(0);
  }
  /* _L23=(TA_Gradient_new::GP_Truncate_at_BG#3)/ */
  GP_Truncate_at_BG_init_TA_Gradient_new(&outC->Context_GP_Truncate_at_BG_3);
  /* _L18=(TA_Gradient_new::GP_Normalize_Profile#2)/ */
  GP_Normalize_Profile_init_TA_Gradient_new(
    &outC->Context_GP_Normalize_Profile_2);
  /* _L24=(TA_Gradient_new::GP_Correct_StartSection#1)/ */
  GP_Correct_StartSection_init_TA_Gradient_new(
    &outC->Context_GP_Correct_StartSection_1);
  /* _L22=(TA_Gradient_new::GP_Truncate_at_BG#2)/ */
  GP_Truncate_at_BG_init_TA_Gradient_new(&outC->Context_GP_Truncate_at_BG_2);
  /* _L16=(TA_Gradient_new::GP_Normalize_Profile#1)/ */
  GP_Normalize_Profile_init_TA_Gradient_new(
    &outC->Context_GP_Normalize_Profile_1);
  /* _L6=(TA_Gradient_new::GP_Merge_New_P21_to_Profile#1)/ */
  GP_Merge_New_P21_to_Profile_init_TA_Gradient_new(
    &outC->Context_GP_Merge_New_P21_to_Profile_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void GP_Position_GP_with_BGs_reset_TA_Gradient_new(
  outC_GP_Position_GP_with_BGs_TA_Gradient_new *outC)
{
  /* _L23=(TA_Gradient_new::GP_Truncate_at_BG#3)/ */
  GP_Truncate_at_BG_reset_TA_Gradient_new(&outC->Context_GP_Truncate_at_BG_3);
  /* _L18=(TA_Gradient_new::GP_Normalize_Profile#2)/ */
  GP_Normalize_Profile_reset_TA_Gradient_new(
    &outC->Context_GP_Normalize_Profile_2);
  /* _L24=(TA_Gradient_new::GP_Correct_StartSection#1)/ */
  GP_Correct_StartSection_reset_TA_Gradient_new(
    &outC->Context_GP_Correct_StartSection_1);
  /* _L22=(TA_Gradient_new::GP_Truncate_at_BG#2)/ */
  GP_Truncate_at_BG_reset_TA_Gradient_new(&outC->Context_GP_Truncate_at_BG_2);
  /* _L16=(TA_Gradient_new::GP_Normalize_Profile#1)/ */
  GP_Normalize_Profile_reset_TA_Gradient_new(
    &outC->Context_GP_Normalize_Profile_1);
  /* _L6=(TA_Gradient_new::GP_Merge_New_P21_to_Profile#1)/ */
  GP_Merge_New_P21_to_Profile_reset_TA_Gradient_new(
    &outC->Context_GP_Merge_New_P21_to_Profile_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** GP_Position_GP_with_BGs_TA_Gradient_new.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

