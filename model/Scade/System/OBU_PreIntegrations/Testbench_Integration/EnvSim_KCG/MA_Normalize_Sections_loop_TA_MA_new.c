/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MA_Normalize_Sections_loop_TA_MA_new.h"

/* TA_MA_new::MA_Normalize_Sections_loop/ */
void MA_Normalize_Sections_loop_TA_MA_new(
  /* i/ */
  kcg_int64 i,
  /* ProfileIn/ */
  MovementAuthoritySectionlist_t_TrackAtlasTypes *ProfileIn,
  /* pos_BG/ */
  L_internal_Type_Obu_BasicTypes_Pkg pos_BG,
  outC_MA_Normalize_Sections_loop_TA_MA_new *outC)
{
  outC->_L51 = i;
  outC->_L11 = kcg_lit_int64(0);
  outC->_L3 = pos_BG;
  outC->_L1 = i;
  kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(&outC->_L2, ProfileIn);
  if ((kcg_lit_int64(0) <= outC->_L1) & (outC->_L1 < kcg_lit_int64(10))) {
    kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(
      &outC->_L4,
      &outC->_L2[outC->_L1]);
  }
  else {
    kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(
      &outC->_L4,
      (MovementAuthoritySection_t_TrackAtlasTypes *) &DefaultMA_section_TA_MA_new);
  }
  outC->_L45 = outC->_L4.d_sectiontimerstoploc;
  outC->_L47 = outC->_L45 - outC->_L3;
  outC->_L5 = outC->_L4.valid;
  /* _L48= */
  if (outC->_L5) {
    outC->_L48 = outC->_L47;
  }
  else {
    outC->_L48 = outC->_L11;
  }
  outC->_L52 = outC->_L4.l_section;
  outC->_L9 = outC->_L52 - outC->_L3;
  /* _L10= */
  if (outC->_L5) {
    outC->_L10 = outC->_L9;
  }
  else {
    outC->_L10 = outC->_L11;
  }
  kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(&outC->_L7, &outC->_L4);
  if (kcg_true) {
    outC->_L7.l_section = outC->_L10;
  }
  kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(&outC->_L49, &outC->_L7);
  if (kcg_true) {
    outC->_L49.d_sectiontimerstoploc = outC->_L48;
  }
  kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(
    &outC->_L50,
    &outC->_L2);
  if ((kcg_lit_int64(0) <= outC->_L51) & (outC->_L51 < kcg_lit_int64(10))) {
    kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(
      &outC->_L50[outC->_L51],
      &outC->_L49);
  }
  kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(
    &outC->ProfileNormalized_LRBG,
    &outC->_L50);
}

#ifndef KCG_USER_DEFINED_INIT
void MA_Normalize_Sections_loop_init_TA_MA_new(
  outC_MA_Normalize_Sections_loop_TA_MA_new *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;

  outC->_L52 = kcg_lit_int64(0);
  outC->_L51 = kcg_lit_int64(0);
  for (idx = 0; idx < 10; idx++) {
    outC->_L50[idx].valid = kcg_true;
    outC->_L50[idx].q_endsection = kcg_true;
    outC->_L50[idx].l_section = kcg_lit_int64(0);
    outC->_L50[idx].q_sectiontimer = kcg_true;
    outC->_L50[idx].t_sectiontimer = kcg_lit_int64(0);
    outC->_L50[idx].d_sectiontimerstoploc = kcg_lit_int64(0);
  }
  outC->_L49.valid = kcg_true;
  outC->_L49.q_endsection = kcg_true;
  outC->_L49.l_section = kcg_lit_int64(0);
  outC->_L49.q_sectiontimer = kcg_true;
  outC->_L49.t_sectiontimer = kcg_lit_int64(0);
  outC->_L49.d_sectiontimerstoploc = kcg_lit_int64(0);
  outC->_L47 = kcg_lit_int64(0);
  outC->_L48 = kcg_lit_int64(0);
  outC->_L45 = kcg_lit_int64(0);
  outC->_L11 = kcg_lit_int64(0);
  outC->_L10 = kcg_lit_int64(0);
  outC->_L9 = kcg_lit_int64(0);
  outC->_L7.valid = kcg_true;
  outC->_L7.q_endsection = kcg_true;
  outC->_L7.l_section = kcg_lit_int64(0);
  outC->_L7.q_sectiontimer = kcg_true;
  outC->_L7.t_sectiontimer = kcg_lit_int64(0);
  outC->_L7.d_sectiontimerstoploc = kcg_lit_int64(0);
  outC->_L5 = kcg_true;
  outC->_L4.valid = kcg_true;
  outC->_L4.q_endsection = kcg_true;
  outC->_L4.l_section = kcg_lit_int64(0);
  outC->_L4.q_sectiontimer = kcg_true;
  outC->_L4.t_sectiontimer = kcg_lit_int64(0);
  outC->_L4.d_sectiontimerstoploc = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 10; idx1++) {
    outC->_L2[idx1].valid = kcg_true;
    outC->_L2[idx1].q_endsection = kcg_true;
    outC->_L2[idx1].l_section = kcg_lit_int64(0);
    outC->_L2[idx1].q_sectiontimer = kcg_true;
    outC->_L2[idx1].t_sectiontimer = kcg_lit_int64(0);
    outC->_L2[idx1].d_sectiontimerstoploc = kcg_lit_int64(0);
  }
  outC->_L1 = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 10; idx2++) {
    outC->ProfileNormalized_LRBG[idx2].valid = kcg_true;
    outC->ProfileNormalized_LRBG[idx2].q_endsection = kcg_true;
    outC->ProfileNormalized_LRBG[idx2].l_section = kcg_lit_int64(0);
    outC->ProfileNormalized_LRBG[idx2].q_sectiontimer = kcg_true;
    outC->ProfileNormalized_LRBG[idx2].t_sectiontimer = kcg_lit_int64(0);
    outC->ProfileNormalized_LRBG[idx2].d_sectiontimerstoploc = kcg_lit_int64(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MA_Normalize_Sections_loop_reset_TA_MA_new(
  outC_MA_Normalize_Sections_loop_TA_MA_new *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MA_Normalize_Sections_loop_TA_MA_new.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

