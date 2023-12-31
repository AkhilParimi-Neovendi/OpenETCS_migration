/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_229_FindStartOfNewGradie_TA_Lib_internal.h"

/* TA_Lib_internal::FindStartOfNewGradientProfileAbs/ */
void _229_FindStartOfNewGradie_TA_Lib_internal(
  /* Profile_in/ */
  GradientProfile_t_TrackAtlasTypes *Profile_in,
  /* New_Profile/ */
  GradientProfile_t_TrackAtlasTypes *New_Profile,
  outC__229_FindStartOfNewGradie_TA_Lib_internal *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_int32 acc;
  kcg_size idx2;
  kcg_int32 noname;

  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L1, New_Profile);
  outC->_L2 = outC->_L1[0].Loc_Absolute;
  /* _L198/ */
  for (idx = 0; idx < 50; idx++) {
    outC->_L198[idx] = outC->_L2;
  }
  outC->_L100 = kcg_lit_int32(0);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L93, Profile_in);
  /* _L98/ */
  for (idx1 = 0; idx1 < 50; idx1++) {
    kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L98[idx1], &outC->_L93);
  }
  outC->_L96 = kcg_true;
  outC->_L99 = outC->_L100;
  /* _L94= */
  if (outC->_L96) {
    /* _L94= */
    for (idx2 = 0; idx2 < 50; idx2++) {
      acc = outC->_L99;
      /* _L94=(TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP#1)/ */
      FindStartOfNewGradientPro_TA_Lib_internal(
        /* _L94= */(kcg_int32) idx2,
        acc,
        outC->_L198[idx2],
        &outC->_L98[idx2],
        &outC->Context_FindStartOfNewGradientProfileAbs_LOOP_1[idx2]);
      outC->_L99 =
        outC->Context_FindStartOfNewGradientProfileAbs_LOOP_1[idx2].relevant_section;
      outC->_L94 = /* _L94= */(kcg_int32) (idx2 + 1);
      /* _L94= */
      if (!outC->Context_FindStartOfNewGradientProfileAbs_LOOP_1[idx2].cont) {
        break;
      }
    }
  }
  else {
    outC->_L94 = kcg_lit_int32(0);
  }
  noname = outC->_L94;
  outC->relevant_section = outC->_L99;
}

#ifndef KCG_USER_DEFINED_INIT
void _229_FindStartOfNewGradie_init_TA_Lib_internal(
  outC__229_FindStartOfNewGradie_TA_Lib_internal *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;

  for (idx1 = 0; idx1 < 50; idx1++) {
    outC->_L198[idx1] = kcg_lit_int32(0);
  }
  outC->_L100 = kcg_lit_int32(0);
  outC->_L99 = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 50; idx3++) {
    for (idx2 = 0; idx2 < 50; idx2++) {
      outC->_L98[idx3][idx2].valid = kcg_true;
      outC->_L98[idx3][idx2].Loc_Absolute = kcg_lit_int32(0);
      outC->_L98[idx3][idx2].Loc_LRBG = kcg_lit_int32(0);
      outC->_L98[idx3][idx2].Gradient = kcg_lit_int32(0);
      outC->_L98[idx3][idx2].L_Gradient = kcg_lit_int32(0);
    }
  }
  outC->_L96 = kcg_true;
  outC->_L94 = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 50; idx4++) {
    outC->_L93[idx4].valid = kcg_true;
    outC->_L93[idx4].Loc_Absolute = kcg_lit_int32(0);
    outC->_L93[idx4].Loc_LRBG = kcg_lit_int32(0);
    outC->_L93[idx4].Gradient = kcg_lit_int32(0);
    outC->_L93[idx4].L_Gradient = kcg_lit_int32(0);
  }
  outC->_L2 = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 50; idx5++) {
    outC->_L1[idx5].valid = kcg_true;
    outC->_L1[idx5].Loc_Absolute = kcg_lit_int32(0);
    outC->_L1[idx5].Loc_LRBG = kcg_lit_int32(0);
    outC->_L1[idx5].Gradient = kcg_lit_int32(0);
    outC->_L1[idx5].L_Gradient = kcg_lit_int32(0);
  }
  outC->relevant_section = kcg_lit_int32(0);
  for (idx = 0; idx < 50; idx++) {
    /* _L94=(TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP#1)/ */
    FindStartOfNewGradientPro_init_TA_Lib_internal(
      &outC->Context_FindStartOfNewGradientProfileAbs_LOOP_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void _229_FindStartOfNewGradie_reset_TA_Lib_internal(
  outC__229_FindStartOfNewGradie_TA_Lib_internal *outC)
{
  kcg_size idx;

  for (idx = 0; idx < 50; idx++) {
    /* _L94=(TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP#1)/ */
    FindStartOfNewGradientPro_reset_TA_Lib_internal(
      &outC->Context_FindStartOfNewGradientProfileAbs_LOOP_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** _229_FindStartOfNewGradie_TA_Lib_internal.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

