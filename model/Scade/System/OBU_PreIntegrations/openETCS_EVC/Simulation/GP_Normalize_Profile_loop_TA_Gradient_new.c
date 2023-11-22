/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Normalize_Profile_loop_TA_Gradient_new.h"

/* TA_Gradient_new::GP_Normalize_Profile_loop/ */
void GP_Normalize_Profile_loop_TA_Gradient_new(
  /* i/ */
  kcg_int32 i,
  /* ProfileIn/ */
  GradientProfile_t_TrackAtlasTypes *ProfileIn,
  /* pos_BG/ */
  L_internal_Type_Obu_BasicTypes_Pkg pos_BG,
  outC_GP_Normalize_Profile_loop_TA_Gradient_new *outC)
{
  outC->_L37 = kcg_lit_int32(0);
  outC->_L1 = i;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L2, ProfileIn);
  if ((kcg_lit_int32(0) <= outC->_L1) & (outC->_L1 < kcg_lit_int32(50))) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(&outC->_L4, &outC->_L2[outC->_L1]);
  }
  else {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &outC->_L4,
      (Gradient_section_t_TrackAtlasTypes *) &DEFAULT_GP_Section_TA_Gradient_new);
  }
  outC->Loc_Section_Abs = outC->_L4.Loc_Absolute;
  outC->_L25 = outC->Loc_Section_Abs;
  outC->_L17 = kcg_lit_int32(1);
  outC->_L15 = i;
  outC->_L16 = outC->_L15 + outC->_L17;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L14, ProfileIn);
  if ((kcg_lit_int32(0) <= outC->_L16) & (outC->_L16 < kcg_lit_int32(50))) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &outC->_L13,
      &outC->_L14[outC->_L16]);
  }
  else {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &outC->_L13,
      (Gradient_section_t_TrackAtlasTypes *) &DEFAULT_GP_Section_TA_Gradient_new);
  }
  outC->_L20 = outC->_L13.Loc_Absolute;
  outC->_L26 = outC->_L20 - outC->_L25;
  outC->_L36 = outC->_L26 > outC->_L37;
  outC->_L35 = kcg_lit_int32(0);
  /* _L24= */
  if (outC->_L36) {
    outC->_L24 = outC->_L26;
  }
  else {
    outC->_L24 = outC->_L35;
  }
  outC->L_Gradient = outC->_L24;
  outC->_L31 = outC->L_Gradient;
  outC->_L11 = kcg_lit_int32(0);
  outC->_L3 = pos_BG;
  outC->_L9 = outC->Loc_Section_Abs - outC->_L3;
  outC->_L5 = outC->_L4.valid;
  /* _L10= */
  if (outC->_L5) {
    outC->_L10 = outC->_L9;
  }
  else {
    outC->_L10 = outC->_L11;
  }
  kcg_copy_Gradient_section_t_TrackAtlasTypes(&outC->_L7, &outC->_L4);
  if (kcg_true) {
    outC->_L7.Loc_LRBG = outC->_L10;
  }
  kcg_copy_Gradient_section_t_TrackAtlasTypes(
    &outC->Ga_section_at_LRBG,
    &outC->_L7);
  kcg_copy_Gradient_section_t_TrackAtlasTypes(
    &outC->_L12,
    &outC->Ga_section_at_LRBG);
  kcg_copy_Gradient_section_t_TrackAtlasTypes(&outC->_L34, &outC->_L12);
  if (kcg_true) {
    outC->_L34.L_Gradient = outC->_L31;
  }
  outC->_L33 = i;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L30, ProfileIn);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L32, &outC->_L30);
  if ((kcg_lit_int32(0) <= outC->_L33) & (outC->_L33 < kcg_lit_int32(50))) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &outC->_L32[outC->_L33],
      &outC->_L34);
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->ProfileNormalized_LRBG,
    &outC->_L32);
}

#ifndef KCG_USER_DEFINED_INIT
void GP_Normalize_Profile_loop_init_TA_Gradient_new(
  outC_GP_Normalize_Profile_loop_TA_Gradient_new *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;

  outC->_L37 = kcg_lit_int32(0);
  outC->_L36 = kcg_true;
  outC->_L35 = kcg_lit_int32(0);
  outC->_L12.valid = kcg_true;
  outC->_L12.Loc_Absolute = kcg_lit_int32(0);
  outC->_L12.Loc_LRBG = kcg_lit_int32(0);
  outC->_L12.Gradient = kcg_lit_int32(0);
  outC->_L12.L_Gradient = kcg_lit_int32(0);
  for (idx = 0; idx < 50; idx++) {
    outC->_L30[idx].valid = kcg_true;
    outC->_L30[idx].Loc_Absolute = kcg_lit_int32(0);
    outC->_L30[idx].Loc_LRBG = kcg_lit_int32(0);
    outC->_L30[idx].Gradient = kcg_lit_int32(0);
    outC->_L30[idx].L_Gradient = kcg_lit_int32(0);
  }
  outC->_L31 = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 50; idx1++) {
    outC->_L32[idx1].valid = kcg_true;
    outC->_L32[idx1].Loc_Absolute = kcg_lit_int32(0);
    outC->_L32[idx1].Loc_LRBG = kcg_lit_int32(0);
    outC->_L32[idx1].Gradient = kcg_lit_int32(0);
    outC->_L32[idx1].L_Gradient = kcg_lit_int32(0);
  }
  outC->_L33 = kcg_lit_int32(0);
  outC->_L34.valid = kcg_true;
  outC->_L34.Loc_Absolute = kcg_lit_int32(0);
  outC->_L34.Loc_LRBG = kcg_lit_int32(0);
  outC->_L34.Gradient = kcg_lit_int32(0);
  outC->_L34.L_Gradient = kcg_lit_int32(0);
  outC->_L26 = kcg_lit_int32(0);
  outC->_L25 = kcg_lit_int32(0);
  outC->_L24 = kcg_lit_int32(0);
  outC->_L20 = kcg_lit_int32(0);
  outC->_L17 = kcg_lit_int32(0);
  outC->_L16 = kcg_lit_int32(0);
  outC->_L13.valid = kcg_true;
  outC->_L13.Loc_Absolute = kcg_lit_int32(0);
  outC->_L13.Loc_LRBG = kcg_lit_int32(0);
  outC->_L13.Gradient = kcg_lit_int32(0);
  outC->_L13.L_Gradient = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 50; idx2++) {
    outC->_L14[idx2].valid = kcg_true;
    outC->_L14[idx2].Loc_Absolute = kcg_lit_int32(0);
    outC->_L14[idx2].Loc_LRBG = kcg_lit_int32(0);
    outC->_L14[idx2].Gradient = kcg_lit_int32(0);
    outC->_L14[idx2].L_Gradient = kcg_lit_int32(0);
  }
  outC->_L15 = kcg_lit_int32(0);
  outC->_L11 = kcg_lit_int32(0);
  outC->_L10 = kcg_lit_int32(0);
  outC->_L9 = kcg_lit_int32(0);
  outC->_L7.valid = kcg_true;
  outC->_L7.Loc_Absolute = kcg_lit_int32(0);
  outC->_L7.Loc_LRBG = kcg_lit_int32(0);
  outC->_L7.Gradient = kcg_lit_int32(0);
  outC->_L7.L_Gradient = kcg_lit_int32(0);
  outC->_L5 = kcg_true;
  outC->_L4.valid = kcg_true;
  outC->_L4.Loc_Absolute = kcg_lit_int32(0);
  outC->_L4.Loc_LRBG = kcg_lit_int32(0);
  outC->_L4.Gradient = kcg_lit_int32(0);
  outC->_L4.L_Gradient = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 50; idx3++) {
    outC->_L2[idx3].valid = kcg_true;
    outC->_L2[idx3].Loc_Absolute = kcg_lit_int32(0);
    outC->_L2[idx3].Loc_LRBG = kcg_lit_int32(0);
    outC->_L2[idx3].Gradient = kcg_lit_int32(0);
    outC->_L2[idx3].L_Gradient = kcg_lit_int32(0);
  }
  outC->_L1 = kcg_lit_int32(0);
  outC->L_Gradient = kcg_lit_int32(0);
  outC->Ga_section_at_LRBG.valid = kcg_true;
  outC->Ga_section_at_LRBG.Loc_Absolute = kcg_lit_int32(0);
  outC->Ga_section_at_LRBG.Loc_LRBG = kcg_lit_int32(0);
  outC->Ga_section_at_LRBG.Gradient = kcg_lit_int32(0);
  outC->Ga_section_at_LRBG.L_Gradient = kcg_lit_int32(0);
  outC->Loc_Section_Abs = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 50; idx4++) {
    outC->ProfileNormalized_LRBG[idx4].valid = kcg_true;
    outC->ProfileNormalized_LRBG[idx4].Loc_Absolute = kcg_lit_int32(0);
    outC->ProfileNormalized_LRBG[idx4].Loc_LRBG = kcg_lit_int32(0);
    outC->ProfileNormalized_LRBG[idx4].Gradient = kcg_lit_int32(0);
    outC->ProfileNormalized_LRBG[idx4].L_Gradient = kcg_lit_int32(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void GP_Normalize_Profile_loop_reset_TA_Gradient_new(
  outC_GP_Normalize_Profile_loop_TA_Gradient_new *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** GP_Normalize_Profile_loop_TA_Gradient_new.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

