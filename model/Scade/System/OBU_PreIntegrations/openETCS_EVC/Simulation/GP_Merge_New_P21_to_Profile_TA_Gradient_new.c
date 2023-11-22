/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Merge_New_P21_to_Profile_TA_Gradient_new.h"

/* TA_Gradient_new::GP_Merge_New_P21_to_Profile/ */
void GP_Merge_New_P21_to_Profile_TA_Gradient_new(
  /* new_GP/ */
  GradientProfile_t_TrackAtlasTypes *new_GP,
  /* Last_GradientProfile_in/ */
  GradientProfile_t_TrackAtlasTypes *Last_GradientProfile_in,
  outC_GP_Merge_New_P21_to_Profile_TA_Gradient_new *outC)
{
  kcg_size idx;
  kcg_size idx1;
  GradientProfile_t_TrackAtlasTypes acc;
  kcg_size idx2;
  kcg_int32 op_call;

  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->_L45,
    Last_GradientProfile_in);
  outC->_L148 = outC->_L45[0].valid;
  outC->every = outC->_L148;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L5, new_GP);
  if (outC->every) {
    /* _L1=(TA_Lib_internal::FindStartOfNewGradientProfileAbs#1)/ */
    _229_FindStartOfNewGradie_TA_Lib_internal(
      &outC->_L45,
      &outC->_L5,
      &outC->Context_FindStartOfNewGradientProfileAbs_1);
    op_call = outC->Context_FindStartOfNewGradientProfileAbs_1.relevant_section;
  }
  /* _L47/ */
  for (idx = 0; idx < 50; idx++) {
    kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L47[idx], &outC->_L5);
  }
  if (outC->every) {
    outC->_L1 = op_call;
  }
  else {
    outC->_L1 = kcg_lit_int32(0);
  }
  /* _L9/ */
  for (idx1 = 0; idx1 < 50; idx1++) {
    outC->_L9[idx1] = outC->_L1;
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L14, &outC->_L45);
  /* _L14= */
  for (idx2 = 0; idx2 < 50; idx2++) {
    kcg_copy_GradientProfile_t_TrackAtlasTypes(&acc, &outC->_L14);
    /* _L14=(TA_Gradient_new::GP_Merge_New_P21_to_Profile_loop#1)/ */
    GP_Merge_New_P21_to_Profi_TA_Gradient_new(
      /* _L14= */(kcg_int32) idx2,
      &acc,
      outC->_L9[idx2],
      &outC->_L47[idx2],
      &outC->Context_GP_Merge_New_P21_to_Profile_loop_1[idx2]);
    kcg_copy_GradientProfile_t_TrackAtlasTypes(
      &outC->_L14,
      &outC->Context_GP_Merge_New_P21_to_Profile_loop_1[idx2].GradientProfile_out);
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->GradientdProfile_out,
    &outC->_L14);
}

#ifndef KCG_USER_DEFINED_INIT
void GP_Merge_New_P21_to_Profile_init_TA_Gradient_new(
  outC_GP_Merge_New_P21_to_Profile_TA_Gradient_new *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;
  kcg_size idx7;

  outC->_L148 = kcg_true;
  for (idx2 = 0; idx2 < 50; idx2++) {
    for (idx1 = 0; idx1 < 50; idx1++) {
      outC->_L47[idx2][idx1].valid = kcg_true;
      outC->_L47[idx2][idx1].Loc_Absolute = kcg_lit_int32(0);
      outC->_L47[idx2][idx1].Loc_LRBG = kcg_lit_int32(0);
      outC->_L47[idx2][idx1].Gradient = kcg_lit_int32(0);
      outC->_L47[idx2][idx1].L_Gradient = kcg_lit_int32(0);
    }
  }
  for (idx3 = 0; idx3 < 50; idx3++) {
    outC->_L45[idx3].valid = kcg_true;
    outC->_L45[idx3].Loc_Absolute = kcg_lit_int32(0);
    outC->_L45[idx3].Loc_LRBG = kcg_lit_int32(0);
    outC->_L45[idx3].Gradient = kcg_lit_int32(0);
    outC->_L45[idx3].L_Gradient = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 50; idx4++) {
    outC->_L14[idx4].valid = kcg_true;
    outC->_L14[idx4].Loc_Absolute = kcg_lit_int32(0);
    outC->_L14[idx4].Loc_LRBG = kcg_lit_int32(0);
    outC->_L14[idx4].Gradient = kcg_lit_int32(0);
    outC->_L14[idx4].L_Gradient = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 50; idx5++) {
    outC->_L9[idx5] = kcg_lit_int32(0);
  }
  for (idx6 = 0; idx6 < 50; idx6++) {
    outC->_L5[idx6].valid = kcg_true;
    outC->_L5[idx6].Loc_Absolute = kcg_lit_int32(0);
    outC->_L5[idx6].Loc_LRBG = kcg_lit_int32(0);
    outC->_L5[idx6].Gradient = kcg_lit_int32(0);
    outC->_L5[idx6].L_Gradient = kcg_lit_int32(0);
  }
  outC->_L1 = kcg_lit_int32(0);
  outC->every = kcg_true;
  for (idx7 = 0; idx7 < 50; idx7++) {
    outC->GradientdProfile_out[idx7].valid = kcg_true;
    outC->GradientdProfile_out[idx7].Loc_Absolute = kcg_lit_int32(0);
    outC->GradientdProfile_out[idx7].Loc_LRBG = kcg_lit_int32(0);
    outC->GradientdProfile_out[idx7].Gradient = kcg_lit_int32(0);
    outC->GradientdProfile_out[idx7].L_Gradient = kcg_lit_int32(0);
  }
  for (idx = 0; idx < 50; idx++) {
    /* _L14=(TA_Gradient_new::GP_Merge_New_P21_to_Profile_loop#1)/ */
    GP_Merge_New_P21_to_Profi_init_TA_Gradient_new(
      &outC->Context_GP_Merge_New_P21_to_Profile_loop_1[idx]);
  }
  /* _L1=(TA_Lib_internal::FindStartOfNewGradientProfileAbs#1)/ */
  _229_FindStartOfNewGradie_init_TA_Lib_internal(
    &outC->Context_FindStartOfNewGradientProfileAbs_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void GP_Merge_New_P21_to_Profile_reset_TA_Gradient_new(
  outC_GP_Merge_New_P21_to_Profile_TA_Gradient_new *outC)
{
  kcg_size idx;

  for (idx = 0; idx < 50; idx++) {
    /* _L14=(TA_Gradient_new::GP_Merge_New_P21_to_Profile_loop#1)/ */
    GP_Merge_New_P21_to_Profi_reset_TA_Gradient_new(
      &outC->Context_GP_Merge_New_P21_to_Profile_loop_1[idx]);
  }
  /* _L1=(TA_Lib_internal::FindStartOfNewGradientProfileAbs#1)/ */
  _229_FindStartOfNewGradie_reset_TA_Lib_internal(
    &outC->Context_FindStartOfNewGradientProfileAbs_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** GP_Merge_New_P21_to_Profile_TA_Gradient_new.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

