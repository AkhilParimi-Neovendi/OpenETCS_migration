/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Correct_StartSection_TA_Gradient_new.h"

/* TA_Gradient_new::GP_Correct_StartSection/ */
void GP_Correct_StartSection_TA_Gradient_new(
  /* Profile_in/ */
  GradientProfile_t_TrackAtlasTypes *Profile_in,
  /* Loc_BG/ */
  kcg_int32 Loc_BG,
  outC_GP_Correct_StartSection_TA_Gradient_new *outC)
{
  static Gradient_section_t_TrackAtlasTypes noname;

  outC->_L10 = Loc_BG;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L1, Profile_in);
  outC->_L9 = outC->_L1[1].Loc_Absolute;
  outC->_L11 = outC->_L9 - outC->_L10;
  outC->_L8 = kcg_lit_int32(0);
  kcg_copy_Gradient_section_t_TrackAtlasTypes(&outC->_L3, &outC->_L1[0]);
  kcg_copy_Gradient_section_t_TrackAtlasTypes(&outC->_L7, &outC->_L3);
  if (kcg_true) {
    outC->_L7.Loc_LRBG = outC->_L8;
  }
  kcg_copy_Gradient_section_t_TrackAtlasTypes(&outC->_L12, &outC->_L7);
  if (kcg_true) {
    outC->_L12.L_Gradient = outC->_L11;
  }
  kcg_copy_Gradient_section_t_TrackAtlasTypes(&noname, &outC->_L12);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L5, &outC->_L1);
  if ((0 <= 0) & (0 < 50)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(&outC->_L5[0], &outC->_L7);
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->Profile_out, &outC->_L5);
}

#ifndef KCG_USER_DEFINED_INIT
void GP_Correct_StartSection_init_TA_Gradient_new(
  outC_GP_Correct_StartSection_TA_Gradient_new *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;

  outC->_L12.valid = kcg_true;
  outC->_L12.Loc_Absolute = kcg_lit_int32(0);
  outC->_L12.Loc_LRBG = kcg_lit_int32(0);
  outC->_L12.Gradient = kcg_lit_int32(0);
  outC->_L12.L_Gradient = kcg_lit_int32(0);
  outC->_L11 = kcg_lit_int32(0);
  outC->_L10 = kcg_lit_int32(0);
  outC->_L9 = kcg_lit_int32(0);
  outC->_L8 = kcg_lit_int32(0);
  outC->_L7.valid = kcg_true;
  outC->_L7.Loc_Absolute = kcg_lit_int32(0);
  outC->_L7.Loc_LRBG = kcg_lit_int32(0);
  outC->_L7.Gradient = kcg_lit_int32(0);
  outC->_L7.L_Gradient = kcg_lit_int32(0);
  for (idx = 0; idx < 50; idx++) {
    outC->_L5[idx].valid = kcg_true;
    outC->_L5[idx].Loc_Absolute = kcg_lit_int32(0);
    outC->_L5[idx].Loc_LRBG = kcg_lit_int32(0);
    outC->_L5[idx].Gradient = kcg_lit_int32(0);
    outC->_L5[idx].L_Gradient = kcg_lit_int32(0);
  }
  outC->_L3.valid = kcg_true;
  outC->_L3.Loc_Absolute = kcg_lit_int32(0);
  outC->_L3.Loc_LRBG = kcg_lit_int32(0);
  outC->_L3.Gradient = kcg_lit_int32(0);
  outC->_L3.L_Gradient = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 50; idx1++) {
    outC->_L1[idx1].valid = kcg_true;
    outC->_L1[idx1].Loc_Absolute = kcg_lit_int32(0);
    outC->_L1[idx1].Loc_LRBG = kcg_lit_int32(0);
    outC->_L1[idx1].Gradient = kcg_lit_int32(0);
    outC->_L1[idx1].L_Gradient = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 50; idx2++) {
    outC->Profile_out[idx2].valid = kcg_true;
    outC->Profile_out[idx2].Loc_Absolute = kcg_lit_int32(0);
    outC->Profile_out[idx2].Loc_LRBG = kcg_lit_int32(0);
    outC->Profile_out[idx2].Gradient = kcg_lit_int32(0);
    outC->Profile_out[idx2].L_Gradient = kcg_lit_int32(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void GP_Correct_StartSection_reset_TA_Gradient_new(
  outC_GP_Correct_StartSection_TA_Gradient_new *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** GP_Correct_StartSection_TA_Gradient_new.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

