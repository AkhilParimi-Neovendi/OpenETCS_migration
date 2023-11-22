/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Merge_New_P21_to_Profi_TA_Gradient_new.h"

/* TA_Gradient_new::GP_Merge_New_P21_to_Profile_loop/ */
void GP_Merge_New_P21_to_Profi_TA_Gradient_new(
  /* i/ */
  kcg_int32 i,
  /* GP/ */
  GradientProfile_t_TrackAtlasTypes *GP,
  /* First_Section_To_Replace/ */
  kcg_int32 First_Section_To_Replace,
  /* new_GP_received/ */
  GradientProfile_t_TrackAtlasTypes *new_GP_received,
  outC_GP_Merge_New_P21_to_Profi_TA_Gradient_new *outC)
{
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L20, GP);
  outC->_L11 = i;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L6, new_GP_received);
  if ((kcg_lit_int32(0) <= outC->_L11) & (outC->_L11 < kcg_lit_int32(50))) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &outC->_L15,
      &outC->_L6[outC->_L11]);
  }
  else {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &outC->_L15,
      (Gradient_section_t_TrackAtlasTypes *)
        &DEFAULT_GradientSection_TrackAtlasTypes);
  }
  outC->_L4 = First_Section_To_Replace;
  outC->_L5 = i;
  outC->_L7 = outC->_L5 + outC->_L4;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L19, &outC->_L20);
  if ((kcg_lit_int32(0) <= outC->_L7) & (outC->_L7 < kcg_lit_int32(50))) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &outC->_L19[outC->_L7],
      &outC->_L15);
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->GradientProfile_out,
    &outC->_L19);
}

#ifndef KCG_USER_DEFINED_INIT
void GP_Merge_New_P21_to_Profi_init_TA_Gradient_new(
  outC_GP_Merge_New_P21_to_Profi_TA_Gradient_new *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;

  for (idx = 0; idx < 50; idx++) {
    outC->_L20[idx].valid = kcg_true;
    outC->_L20[idx].Loc_Absolute = kcg_lit_int32(0);
    outC->_L20[idx].Loc_LRBG = kcg_lit_int32(0);
    outC->_L20[idx].Gradient = kcg_lit_int32(0);
    outC->_L20[idx].L_Gradient = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 50; idx1++) {
    outC->_L19[idx1].valid = kcg_true;
    outC->_L19[idx1].Loc_Absolute = kcg_lit_int32(0);
    outC->_L19[idx1].Loc_LRBG = kcg_lit_int32(0);
    outC->_L19[idx1].Gradient = kcg_lit_int32(0);
    outC->_L19[idx1].L_Gradient = kcg_lit_int32(0);
  }
  outC->_L15.valid = kcg_true;
  outC->_L15.Loc_Absolute = kcg_lit_int32(0);
  outC->_L15.Loc_LRBG = kcg_lit_int32(0);
  outC->_L15.Gradient = kcg_lit_int32(0);
  outC->_L15.L_Gradient = kcg_lit_int32(0);
  outC->_L11 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 50; idx2++) {
    outC->_L6[idx2].valid = kcg_true;
    outC->_L6[idx2].Loc_Absolute = kcg_lit_int32(0);
    outC->_L6[idx2].Loc_LRBG = kcg_lit_int32(0);
    outC->_L6[idx2].Gradient = kcg_lit_int32(0);
    outC->_L6[idx2].L_Gradient = kcg_lit_int32(0);
  }
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 50; idx3++) {
    outC->GradientProfile_out[idx3].valid = kcg_true;
    outC->GradientProfile_out[idx3].Loc_Absolute = kcg_lit_int32(0);
    outC->GradientProfile_out[idx3].Loc_LRBG = kcg_lit_int32(0);
    outC->GradientProfile_out[idx3].Gradient = kcg_lit_int32(0);
    outC->GradientProfile_out[idx3].L_Gradient = kcg_lit_int32(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void GP_Merge_New_P21_to_Profi_reset_TA_Gradient_new(
  outC_GP_Merge_New_P21_to_Profi_TA_Gradient_new *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** GP_Merge_New_P21_to_Profi_TA_Gradient_new.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

