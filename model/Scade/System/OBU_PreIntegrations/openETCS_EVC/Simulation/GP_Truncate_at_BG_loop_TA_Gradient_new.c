/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Truncate_at_BG_loop_TA_Gradient_new.h"

/* TA_Gradient_new::GP_Truncate_at_BG_loop/ */
void GP_Truncate_at_BG_loop_TA_Gradient_new(
  /* i/ */
  kcg_int32 i,
  /* Acc/ */
  GradientProfile_t_TrackAtlasTypes *Acc,
  /* Profile_in/ */
  GradientProfile_t_TrackAtlasTypes *Profile_in,
  /* Pointer/ */
  kcg_int32 Pointer,
  outC_GP_Truncate_at_BG_loop_TA_Gradient_new *outC)
{
  outC->_L4 = Pointer;
  outC->_L6 = i;
  outC->_L7 = outC->_L6 + outC->_L4;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L3, Profile_in);
  if ((kcg_lit_int32(0) <= outC->_L7) & (outC->_L7 < kcg_lit_int32(50))) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(&outC->_L8, &outC->_L3[outC->_L7]);
  }
  else {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &outC->_L8,
      (Gradient_section_t_TrackAtlasTypes *) &DEFAULT_GP_Section_TA_Gradient_new);
  }
  outC->_L9 = outC->_L8.valid;
  outC->_L1 = i;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L2, Acc);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L5, &outC->_L2);
  if ((kcg_lit_int32(0) <= outC->_L1) & (outC->_L1 < kcg_lit_int32(50))) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(&outC->_L5[outC->_L1], &outC->_L8);
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->Profile_out, &outC->_L5);
  outC->cont = outC->_L9;
}

#ifndef KCG_USER_DEFINED_INIT
void GP_Truncate_at_BG_loop_init_TA_Gradient_new(
  outC_GP_Truncate_at_BG_loop_TA_Gradient_new *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;

  outC->_L9 = kcg_true;
  outC->_L8.valid = kcg_true;
  outC->_L8.Loc_Absolute = kcg_lit_int32(0);
  outC->_L8.Loc_LRBG = kcg_lit_int32(0);
  outC->_L8.Gradient = kcg_lit_int32(0);
  outC->_L8.L_Gradient = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  for (idx = 0; idx < 50; idx++) {
    outC->_L5[idx].valid = kcg_true;
    outC->_L5[idx].Loc_Absolute = kcg_lit_int32(0);
    outC->_L5[idx].Loc_LRBG = kcg_lit_int32(0);
    outC->_L5[idx].Gradient = kcg_lit_int32(0);
    outC->_L5[idx].L_Gradient = kcg_lit_int32(0);
  }
  outC->_L4 = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 50; idx1++) {
    outC->_L3[idx1].valid = kcg_true;
    outC->_L3[idx1].Loc_Absolute = kcg_lit_int32(0);
    outC->_L3[idx1].Loc_LRBG = kcg_lit_int32(0);
    outC->_L3[idx1].Gradient = kcg_lit_int32(0);
    outC->_L3[idx1].L_Gradient = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 50; idx2++) {
    outC->_L2[idx2].valid = kcg_true;
    outC->_L2[idx2].Loc_Absolute = kcg_lit_int32(0);
    outC->_L2[idx2].Loc_LRBG = kcg_lit_int32(0);
    outC->_L2[idx2].Gradient = kcg_lit_int32(0);
    outC->_L2[idx2].L_Gradient = kcg_lit_int32(0);
  }
  outC->_L1 = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 50; idx3++) {
    outC->Profile_out[idx3].valid = kcg_true;
    outC->Profile_out[idx3].Loc_Absolute = kcg_lit_int32(0);
    outC->Profile_out[idx3].Loc_LRBG = kcg_lit_int32(0);
    outC->Profile_out[idx3].Gradient = kcg_lit_int32(0);
    outC->Profile_out[idx3].L_Gradient = kcg_lit_int32(0);
  }
  outC->cont = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void GP_Truncate_at_BG_loop_reset_TA_Gradient_new(
  outC_GP_Truncate_at_BG_loop_TA_Gradient_new *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** GP_Truncate_at_BG_loop_TA_Gradient_new.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

