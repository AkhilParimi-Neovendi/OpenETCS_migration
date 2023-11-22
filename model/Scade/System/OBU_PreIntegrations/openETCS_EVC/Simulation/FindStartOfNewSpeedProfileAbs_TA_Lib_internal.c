/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FindStartOfNewSpeedProfileAbs_TA_Lib_internal.h"

/* TA_Lib_internal::FindStartOfNewSpeedProfileAbs/ */
void FindStartOfNewSpeedProfileAbs_TA_Lib_internal(
  /* Profile_in/ */
  StaticSpeedProfile_t_TrackAtlasTypes *Profile_in,
  /* New_Profile/ */
  StaticSpeedProfile_t_TrackAtlasTypes *New_Profile,
  outC_FindStartOfNewSpeedProfileAbs_TA_Lib_internal *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_int32 acc;
  kcg_size idx2;
  kcg_int32 noname;

  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L1, New_Profile);
  outC->_L2 = outC->_L1[0].d_static_abs;
  /* _L198/ */
  for (idx = 0; idx < 50; idx++) {
    outC->_L198[idx] = outC->_L2;
  }
  outC->_L100 = kcg_lit_int32(0);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L93, Profile_in);
  /* _L98/ */
  for (idx1 = 0; idx1 < 50; idx1++) {
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L98[idx1], &outC->_L93);
  }
  outC->_L96 = kcg_true;
  outC->_L99 = outC->_L100;
  /* _L94= */
  if (outC->_L96) {
    /* _L94= */
    for (idx2 = 0; idx2 < 50; idx2++) {
      acc = outC->_L99;
      /* _L94=(TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP#1)/ */
      FindStartOfNewSpeedProfil_TA_Lib_internal(
        /* _L94= */(kcg_int32) idx2,
        acc,
        outC->_L198[idx2],
        &outC->_L98[idx2],
        &outC->Context_FindStartOfNewSpeedProfileAbs_LOOP_1[idx2]);
      outC->_L99 =
        outC->Context_FindStartOfNewSpeedProfileAbs_LOOP_1[idx2].relevant_section;
      outC->_L94 = /* _L94= */(kcg_int32) (idx2 + 1);
      /* _L94= */
      if (!outC->Context_FindStartOfNewSpeedProfileAbs_LOOP_1[idx2].cont) {
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
void FindStartOfNewSpeedProfileAbs_init_TA_Lib_internal(
  outC_FindStartOfNewSpeedProfileAbs_TA_Lib_internal *outC)
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
      outC->_L98[idx3][idx2].d_static_abs = kcg_lit_int32(0);
      outC->_L98[idx3][idx2].d_static_LRBG = kcg_lit_int32(0);
      outC->_L98[idx3][idx2].q_train_length_corr = kcg_true;
      outC->_L98[idx3][idx2].v_static = kcg_lit_int32(0);
    }
  }
  outC->_L96 = kcg_true;
  outC->_L94 = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 50; idx4++) {
    outC->_L93[idx4].valid = kcg_true;
    outC->_L93[idx4].d_static_abs = kcg_lit_int32(0);
    outC->_L93[idx4].d_static_LRBG = kcg_lit_int32(0);
    outC->_L93[idx4].q_train_length_corr = kcg_true;
    outC->_L93[idx4].v_static = kcg_lit_int32(0);
  }
  outC->_L2 = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 50; idx5++) {
    outC->_L1[idx5].valid = kcg_true;
    outC->_L1[idx5].d_static_abs = kcg_lit_int32(0);
    outC->_L1[idx5].d_static_LRBG = kcg_lit_int32(0);
    outC->_L1[idx5].q_train_length_corr = kcg_true;
    outC->_L1[idx5].v_static = kcg_lit_int32(0);
  }
  outC->relevant_section = kcg_lit_int32(0);
  for (idx = 0; idx < 50; idx++) {
    /* _L94=(TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP#1)/ */
    FindStartOfNewSpeedProfil_init_TA_Lib_internal(
      &outC->Context_FindStartOfNewSpeedProfileAbs_LOOP_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void FindStartOfNewSpeedProfileAbs_reset_TA_Lib_internal(
  outC_FindStartOfNewSpeedProfileAbs_TA_Lib_internal *outC)
{
  kcg_size idx;

  for (idx = 0; idx < 50; idx++) {
    /* _L94=(TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP#1)/ */
    FindStartOfNewSpeedProfil_reset_TA_Lib_internal(
      &outC->Context_FindStartOfNewSpeedProfileAbs_LOOP_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** FindStartOfNewSpeedProfileAbs_TA_Lib_internal.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

