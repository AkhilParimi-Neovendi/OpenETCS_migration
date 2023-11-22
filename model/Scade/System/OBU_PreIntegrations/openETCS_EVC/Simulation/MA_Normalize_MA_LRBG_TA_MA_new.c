/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MA_Normalize_MA_LRBG_TA_MA_new.h"

/* TA_MA_new::MA_Normalize_MA_LRBG/ */
void MA_Normalize_MA_LRBG_TA_MA_new(
  /* ProfileIn/ */
  MovementAuthority_t_TrackAtlasTypes *ProfileIn,
  /* pos_BG/ */
  L_internal_Type_Obu_BasicTypes_Pkg pos_BG,
  outC_MA_Normalize_MA_LRBG_TA_MA_new *outC)
{
  kcg_size idx;
  MovementAuthoritySectionlist_t_TrackAtlasTypes acc;
  kcg_size idx1;

  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&outC->_L72, ProfileIn);
  outC->_L2 = pos_BG;
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&outC->_L1, ProfileIn);
  /* _L35=(TA_MA_new::Normalize_DP_and_OL_LRBG#1)/ */
  Normalize_DP_and_OL_LRBG_TA_MA_new(
    outC->_L2,
    &outC->_L1,
    &outC->Context_Normalize_DP_and_OL_LRBG_1);
  kcg_copy_DP_or_OL_t_TrackAtlasTypes(
    &outC->_L35,
    &outC->Context_Normalize_DP_and_OL_LRBG_1.dangerpoint);
  kcg_copy_DP_or_OL_t_TrackAtlasTypes(
    &outC->_L36,
    &outC->Context_Normalize_DP_and_OL_LRBG_1.overlap);
  kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(
    &outC->_L37,
    &outC->_L1.sections);
  /* _L4/ */
  for (idx = 0; idx < 50; idx++) {
    outC->_L4[idx] = outC->_L2;
  }
  kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(
    &outC->_L3,
    &outC->_L37);
  /* _L3= */
  for (idx1 = 0; idx1 < 50; idx1++) {
    kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(&acc, &outC->_L3);
    /* _L3=(TA_MA_new::MA_Normalize_Sections_loop#1)/ */
    MA_Normalize_Sections_loop_TA_MA_new(
      /* _L3= */(kcg_int32) idx1,
      &acc,
      outC->_L4[idx1],
      &outC->Context_MA_Normalize_Sections_loop_1[idx1]);
    kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(
      &outC->_L3,
      &outC->Context_MA_Normalize_Sections_loop_1[idx1].ProfileNormalized_LRBG);
  }
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&outC->_L68, &outC->_L72);
  if (kcg_true) {
    kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(
      &outC->_L68.sections,
      &outC->_L3);
  }
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&outC->_L69, &outC->_L68);
  if (kcg_true) {
    kcg_copy_DP_or_OL_t_TrackAtlasTypes(&outC->_L69.dangerpoint, &outC->_L35);
  }
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&outC->_L70, &outC->_L69);
  if (kcg_true) {
    kcg_copy_DP_or_OL_t_TrackAtlasTypes(&outC->_L70.overlap, &outC->_L36);
  }
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(
    &outC->ProfileNormalized_LRBG,
    &outC->_L70);
}

#ifndef KCG_USER_DEFINED_INIT
void MA_Normalize_MA_LRBG_init_TA_MA_new(
  outC_MA_Normalize_MA_LRBG_TA_MA_new *outC)
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

  outC->_L72.valid = kcg_true;
  outC->_L72.Level = MA_L1_TrackAtlasTypes;
  outC->_L72.q_dir = Q_DIR_Reverse;
  outC->_L72.v_main = kcg_lit_int32(0);
  outC->_L72.v_loa = kcg_lit_int32(0);
  outC->_L72.t_loa_unlimited = kcg_true;
  outC->_L72.t_loa = kcg_lit_int32(0);
  outC->_L72.n_iter = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 10; idx1++) {
    outC->_L72.sections[idx1].valid = kcg_true;
    outC->_L72.sections[idx1].q_endsection = kcg_true;
    outC->_L72.sections[idx1].l_section = kcg_lit_int32(0);
    outC->_L72.sections[idx1].q_sectiontimer = kcg_true;
    outC->_L72.sections[idx1].t_sectiontimer = kcg_lit_int32(0);
    outC->_L72.sections[idx1].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L72.q_dangerpoint = kcg_true;
  outC->_L72.dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L72.dangerpoint.v_release = kcg_lit_int32(0);
  outC->_L72.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L72.q_overlap = kcg_true;
  outC->_L72.overlap.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L72.overlap.v_release = kcg_lit_int32(0);
  outC->_L72.overlap.calc_v_release_onboard = kcg_true;
  outC->_L72.q_endtimer = kcg_true;
  outC->_L72.endtimer_t.t_endtimer = kcg_lit_int32(0);
  outC->_L72.endtimer_t.d_endtimerstoploc = kcg_lit_int32(0);
  outC->_L70.valid = kcg_true;
  outC->_L70.Level = MA_L1_TrackAtlasTypes;
  outC->_L70.q_dir = Q_DIR_Reverse;
  outC->_L70.v_main = kcg_lit_int32(0);
  outC->_L70.v_loa = kcg_lit_int32(0);
  outC->_L70.t_loa_unlimited = kcg_true;
  outC->_L70.t_loa = kcg_lit_int32(0);
  outC->_L70.n_iter = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 10; idx2++) {
    outC->_L70.sections[idx2].valid = kcg_true;
    outC->_L70.sections[idx2].q_endsection = kcg_true;
    outC->_L70.sections[idx2].l_section = kcg_lit_int32(0);
    outC->_L70.sections[idx2].q_sectiontimer = kcg_true;
    outC->_L70.sections[idx2].t_sectiontimer = kcg_lit_int32(0);
    outC->_L70.sections[idx2].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L70.q_dangerpoint = kcg_true;
  outC->_L70.dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L70.dangerpoint.v_release = kcg_lit_int32(0);
  outC->_L70.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L70.q_overlap = kcg_true;
  outC->_L70.overlap.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L70.overlap.v_release = kcg_lit_int32(0);
  outC->_L70.overlap.calc_v_release_onboard = kcg_true;
  outC->_L70.q_endtimer = kcg_true;
  outC->_L70.endtimer_t.t_endtimer = kcg_lit_int32(0);
  outC->_L70.endtimer_t.d_endtimerstoploc = kcg_lit_int32(0);
  outC->_L69.valid = kcg_true;
  outC->_L69.Level = MA_L1_TrackAtlasTypes;
  outC->_L69.q_dir = Q_DIR_Reverse;
  outC->_L69.v_main = kcg_lit_int32(0);
  outC->_L69.v_loa = kcg_lit_int32(0);
  outC->_L69.t_loa_unlimited = kcg_true;
  outC->_L69.t_loa = kcg_lit_int32(0);
  outC->_L69.n_iter = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 10; idx3++) {
    outC->_L69.sections[idx3].valid = kcg_true;
    outC->_L69.sections[idx3].q_endsection = kcg_true;
    outC->_L69.sections[idx3].l_section = kcg_lit_int32(0);
    outC->_L69.sections[idx3].q_sectiontimer = kcg_true;
    outC->_L69.sections[idx3].t_sectiontimer = kcg_lit_int32(0);
    outC->_L69.sections[idx3].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L69.q_dangerpoint = kcg_true;
  outC->_L69.dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L69.dangerpoint.v_release = kcg_lit_int32(0);
  outC->_L69.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L69.q_overlap = kcg_true;
  outC->_L69.overlap.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L69.overlap.v_release = kcg_lit_int32(0);
  outC->_L69.overlap.calc_v_release_onboard = kcg_true;
  outC->_L69.q_endtimer = kcg_true;
  outC->_L69.endtimer_t.t_endtimer = kcg_lit_int32(0);
  outC->_L69.endtimer_t.d_endtimerstoploc = kcg_lit_int32(0);
  outC->_L68.valid = kcg_true;
  outC->_L68.Level = MA_L1_TrackAtlasTypes;
  outC->_L68.q_dir = Q_DIR_Reverse;
  outC->_L68.v_main = kcg_lit_int32(0);
  outC->_L68.v_loa = kcg_lit_int32(0);
  outC->_L68.t_loa_unlimited = kcg_true;
  outC->_L68.t_loa = kcg_lit_int32(0);
  outC->_L68.n_iter = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 10; idx4++) {
    outC->_L68.sections[idx4].valid = kcg_true;
    outC->_L68.sections[idx4].q_endsection = kcg_true;
    outC->_L68.sections[idx4].l_section = kcg_lit_int32(0);
    outC->_L68.sections[idx4].q_sectiontimer = kcg_true;
    outC->_L68.sections[idx4].t_sectiontimer = kcg_lit_int32(0);
    outC->_L68.sections[idx4].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L68.q_dangerpoint = kcg_true;
  outC->_L68.dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L68.dangerpoint.v_release = kcg_lit_int32(0);
  outC->_L68.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L68.q_overlap = kcg_true;
  outC->_L68.overlap.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L68.overlap.v_release = kcg_lit_int32(0);
  outC->_L68.overlap.calc_v_release_onboard = kcg_true;
  outC->_L68.q_endtimer = kcg_true;
  outC->_L68.endtimer_t.t_endtimer = kcg_lit_int32(0);
  outC->_L68.endtimer_t.d_endtimerstoploc = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 10; idx5++) {
    outC->_L37[idx5].valid = kcg_true;
    outC->_L37[idx5].q_endsection = kcg_true;
    outC->_L37[idx5].l_section = kcg_lit_int32(0);
    outC->_L37[idx5].q_sectiontimer = kcg_true;
    outC->_L37[idx5].t_sectiontimer = kcg_lit_int32(0);
    outC->_L37[idx5].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L35.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L35.v_release = kcg_lit_int32(0);
  outC->_L35.calc_v_release_onboard = kcg_true;
  outC->_L36.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L36.v_release = kcg_lit_int32(0);
  outC->_L36.calc_v_release_onboard = kcg_true;
  for (idx6 = 0; idx6 < 50; idx6++) {
    outC->_L4[idx6] = kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 10; idx7++) {
    outC->_L3[idx7].valid = kcg_true;
    outC->_L3[idx7].q_endsection = kcg_true;
    outC->_L3[idx7].l_section = kcg_lit_int32(0);
    outC->_L3[idx7].q_sectiontimer = kcg_true;
    outC->_L3[idx7].t_sectiontimer = kcg_lit_int32(0);
    outC->_L3[idx7].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L2 = kcg_lit_int32(0);
  outC->_L1.valid = kcg_true;
  outC->_L1.Level = MA_L1_TrackAtlasTypes;
  outC->_L1.q_dir = Q_DIR_Reverse;
  outC->_L1.v_main = kcg_lit_int32(0);
  outC->_L1.v_loa = kcg_lit_int32(0);
  outC->_L1.t_loa_unlimited = kcg_true;
  outC->_L1.t_loa = kcg_lit_int32(0);
  outC->_L1.n_iter = kcg_lit_int32(0);
  for (idx8 = 0; idx8 < 10; idx8++) {
    outC->_L1.sections[idx8].valid = kcg_true;
    outC->_L1.sections[idx8].q_endsection = kcg_true;
    outC->_L1.sections[idx8].l_section = kcg_lit_int32(0);
    outC->_L1.sections[idx8].q_sectiontimer = kcg_true;
    outC->_L1.sections[idx8].t_sectiontimer = kcg_lit_int32(0);
    outC->_L1.sections[idx8].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L1.q_dangerpoint = kcg_true;
  outC->_L1.dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L1.dangerpoint.v_release = kcg_lit_int32(0);
  outC->_L1.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L1.q_overlap = kcg_true;
  outC->_L1.overlap.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L1.overlap.v_release = kcg_lit_int32(0);
  outC->_L1.overlap.calc_v_release_onboard = kcg_true;
  outC->_L1.q_endtimer = kcg_true;
  outC->_L1.endtimer_t.t_endtimer = kcg_lit_int32(0);
  outC->_L1.endtimer_t.d_endtimerstoploc = kcg_lit_int32(0);
  outC->ProfileNormalized_LRBG.valid = kcg_true;
  outC->ProfileNormalized_LRBG.Level = MA_L1_TrackAtlasTypes;
  outC->ProfileNormalized_LRBG.q_dir = Q_DIR_Reverse;
  outC->ProfileNormalized_LRBG.v_main = kcg_lit_int32(0);
  outC->ProfileNormalized_LRBG.v_loa = kcg_lit_int32(0);
  outC->ProfileNormalized_LRBG.t_loa_unlimited = kcg_true;
  outC->ProfileNormalized_LRBG.t_loa = kcg_lit_int32(0);
  outC->ProfileNormalized_LRBG.n_iter = kcg_lit_int32(0);
  for (idx9 = 0; idx9 < 10; idx9++) {
    outC->ProfileNormalized_LRBG.sections[idx9].valid = kcg_true;
    outC->ProfileNormalized_LRBG.sections[idx9].q_endsection = kcg_true;
    outC->ProfileNormalized_LRBG.sections[idx9].l_section = kcg_lit_int32(0);
    outC->ProfileNormalized_LRBG.sections[idx9].q_sectiontimer = kcg_true;
    outC->ProfileNormalized_LRBG.sections[idx9].t_sectiontimer = kcg_lit_int32(0);
    outC->ProfileNormalized_LRBG.sections[idx9].d_sectiontimerstoploc =
      kcg_lit_int32(0);
  }
  outC->ProfileNormalized_LRBG.q_dangerpoint = kcg_true;
  outC->ProfileNormalized_LRBG.dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->ProfileNormalized_LRBG.dangerpoint.v_release = kcg_lit_int32(0);
  outC->ProfileNormalized_LRBG.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->ProfileNormalized_LRBG.q_overlap = kcg_true;
  outC->ProfileNormalized_LRBG.overlap.d_DP_or_OL = kcg_lit_int32(0);
  outC->ProfileNormalized_LRBG.overlap.v_release = kcg_lit_int32(0);
  outC->ProfileNormalized_LRBG.overlap.calc_v_release_onboard = kcg_true;
  outC->ProfileNormalized_LRBG.q_endtimer = kcg_true;
  outC->ProfileNormalized_LRBG.endtimer_t.t_endtimer = kcg_lit_int32(0);
  outC->ProfileNormalized_LRBG.endtimer_t.d_endtimerstoploc = kcg_lit_int32(0);
  for (idx = 0; idx < 50; idx++) {
    /* _L3=(TA_MA_new::MA_Normalize_Sections_loop#1)/ */
    MA_Normalize_Sections_loop_init_TA_MA_new(
      &outC->Context_MA_Normalize_Sections_loop_1[idx]);
  }
  /* _L35=(TA_MA_new::Normalize_DP_and_OL_LRBG#1)/ */
  Normalize_DP_and_OL_LRBG_init_TA_MA_new(
    &outC->Context_Normalize_DP_and_OL_LRBG_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MA_Normalize_MA_LRBG_reset_TA_MA_new(
  outC_MA_Normalize_MA_LRBG_TA_MA_new *outC)
{
  kcg_size idx;

  for (idx = 0; idx < 50; idx++) {
    /* _L3=(TA_MA_new::MA_Normalize_Sections_loop#1)/ */
    MA_Normalize_Sections_loop_reset_TA_MA_new(
      &outC->Context_MA_Normalize_Sections_loop_1[idx]);
  }
  /* _L35=(TA_MA_new::Normalize_DP_and_OL_LRBG#1)/ */
  Normalize_DP_and_OL_LRBG_reset_TA_MA_new(
    &outC->Context_Normalize_DP_and_OL_LRBG_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MA_Normalize_MA_LRBG_TA_MA_new.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

