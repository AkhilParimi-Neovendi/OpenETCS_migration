/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoveMAAbsolute_new_TA_Lib_internal.h"

/* TA_Lib_internal::MoveMAAbsolute_new/ */
void MoveMAAbsolute_new_TA_Lib_internal(
  /* ProfileIn/ */
  MovementAuthority_t_TrackAtlasTypes *ProfileIn,
  /* pos_LRBG/ */
  L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  outC_MoveMAAbsolute_new_TA_Lib_internal *outC)
{
  static kcg_size idx;
  static MovementAuthoritySectionlist_t_TrackAtlasTypes acc;
  static kcg_size idx1;
  static DP_or_OL_t_TrackAtlasTypes op_call;
  static DP_or_OL_t_TrackAtlasTypes _2_op_call;

  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&outC->_L103, ProfileIn);
  outC->_L123 = outC->_L103.q_overlap;
  outC->every1 = outC->_L123;
  kcg_copy_DP_or_OL_t_TrackAtlasTypes(&outC->_L114, &outC->_L103.overlap);
  outC->_L109 = pos_LRBG;
  if (outC->every1) {
    /* _L106=(TA_Lib_internal::Move_DP_or_OL_new#2)/ */
    Move_DP_or_OL_new_TA_Lib_internal(
      &outC->_L114,
      outC->_L109,
      &outC->Context_Move_DP_or_OL_new_2);
    kcg_copy_DP_or_OL_t_TrackAtlasTypes(
      &op_call,
      &outC->Context_Move_DP_or_OL_new_2.DP_or_OL_out);
  }
  outC->_L124 = outC->_L103.q_dangerpoint;
  outC->every = outC->_L124;
  kcg_copy_DP_or_OL_t_TrackAtlasTypes(&outC->_L115, &outC->_L103.dangerpoint);
  outC->_L120 = pos_LRBG;
  if (outC->every) {
    /* _L119=(TA_Lib_internal::Move_DP_or_OL_new#1)/ */
    Move_DP_or_OL_new_TA_Lib_internal(
      &outC->_L115,
      outC->_L120,
      &outC->Context_Move_DP_or_OL_new_1);
    kcg_copy_DP_or_OL_t_TrackAtlasTypes(
      &_2_op_call,
      &outC->Context_Move_DP_or_OL_new_1.DP_or_OL_out);
  }
  if (outC->every1) {
    kcg_copy_DP_or_OL_t_TrackAtlasTypes(&outC->_L106, &op_call);
  }
  else {
    kcg_copy_DP_or_OL_t_TrackAtlasTypes(
      &outC->_L106,
      (DP_or_OL_t_TrackAtlasTypes *) &DEFAULT_OL_TrackAtlasTypes);
  }
  if (outC->every) {
    kcg_copy_DP_or_OL_t_TrackAtlasTypes(&outC->_L119, &_2_op_call);
  }
  else {
    kcg_copy_DP_or_OL_t_TrackAtlasTypes(
      &outC->_L119,
      (DP_or_OL_t_TrackAtlasTypes *) &DEFAULT_DP_TrackAtlasTypes);
  }
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&outC->_L121, &outC->_L103);
  if (kcg_true) {
    kcg_copy_DP_or_OL_t_TrackAtlasTypes(&outC->_L121.dangerpoint, &outC->_L119);
  }
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&outC->_L122, &outC->_L121);
  if (kcg_true) {
    kcg_copy_DP_or_OL_t_TrackAtlasTypes(&outC->_L122.overlap, &outC->_L106);
  }
  kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(
    &outC->_L72,
    &outC->_L103.sections);
  outC->_L37 = pos_LRBG;
  /* _L40/ */
  for (idx = 0; idx < 10; idx++) {
    outC->_L40[idx] = outC->_L37;
  }
  kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(
    &outC->_L4,
    &outC->_L72);
  /* _L4= */
  for (idx1 = 0; idx1 < 10; idx1++) {
    kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(&acc, &outC->_L4);
    /* _L4=(TA_Lib_internal::MoveMAAbsolute_Loop_new#1)/ */
    MoveMAAbsolute_Loop_new_TA_Lib_internal(
      /* _L4= */(kcg_int64) idx1,
      &acc,
      outC->_L40[idx1],
      &outC->Context_MoveMAAbsolute_Loop_new_1[idx1]);
    kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(
      &outC->_L4,
      &outC->Context_MoveMAAbsolute_Loop_new_1[idx1].ProfileOut);
  }
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&outC->_L101, &outC->_L122);
  if (kcg_true) {
    kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(
      &outC->_L101.sections,
      &outC->_L4);
  }
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&outC->ProfileOut, &outC->_L101);
}

#ifndef KCG_USER_DEFINED_INIT
void MoveMAAbsolute_new_init_TA_Lib_internal(
  outC_MoveMAAbsolute_new_TA_Lib_internal *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;
  static kcg_size idx8;

  outC->_L124 = kcg_true;
  outC->_L123 = kcg_true;
  outC->_L122.valid = kcg_true;
  outC->_L122.Level = MA_L1_TrackAtlasTypes;
  outC->_L122.q_dir = Q_DIR_Reverse;
  outC->_L122.v_main = kcg_lit_int64(0);
  outC->_L122.v_loa = kcg_lit_int64(0);
  outC->_L122.t_loa_unlimited = kcg_true;
  outC->_L122.t_loa = kcg_lit_int64(0);
  outC->_L122.n_iter = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 10; idx1++) {
    outC->_L122.sections[idx1].valid = kcg_true;
    outC->_L122.sections[idx1].q_endsection = kcg_true;
    outC->_L122.sections[idx1].l_section = kcg_lit_int64(0);
    outC->_L122.sections[idx1].q_sectiontimer = kcg_true;
    outC->_L122.sections[idx1].t_sectiontimer = kcg_lit_int64(0);
    outC->_L122.sections[idx1].d_sectiontimerstoploc = kcg_lit_int64(0);
  }
  outC->_L122.q_dangerpoint = kcg_true;
  outC->_L122.dangerpoint.d_DP_or_OL = kcg_lit_int64(0);
  outC->_L122.dangerpoint.v_release = kcg_lit_int64(0);
  outC->_L122.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L122.q_overlap = kcg_true;
  outC->_L122.overlap.d_DP_or_OL = kcg_lit_int64(0);
  outC->_L122.overlap.v_release = kcg_lit_int64(0);
  outC->_L122.overlap.calc_v_release_onboard = kcg_true;
  outC->_L122.q_endtimer = kcg_true;
  outC->_L122.endtimer_t.t_endtimer = kcg_lit_int64(0);
  outC->_L122.endtimer_t.d_endtimerstoploc = kcg_lit_int64(0);
  outC->_L121.valid = kcg_true;
  outC->_L121.Level = MA_L1_TrackAtlasTypes;
  outC->_L121.q_dir = Q_DIR_Reverse;
  outC->_L121.v_main = kcg_lit_int64(0);
  outC->_L121.v_loa = kcg_lit_int64(0);
  outC->_L121.t_loa_unlimited = kcg_true;
  outC->_L121.t_loa = kcg_lit_int64(0);
  outC->_L121.n_iter = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 10; idx2++) {
    outC->_L121.sections[idx2].valid = kcg_true;
    outC->_L121.sections[idx2].q_endsection = kcg_true;
    outC->_L121.sections[idx2].l_section = kcg_lit_int64(0);
    outC->_L121.sections[idx2].q_sectiontimer = kcg_true;
    outC->_L121.sections[idx2].t_sectiontimer = kcg_lit_int64(0);
    outC->_L121.sections[idx2].d_sectiontimerstoploc = kcg_lit_int64(0);
  }
  outC->_L121.q_dangerpoint = kcg_true;
  outC->_L121.dangerpoint.d_DP_or_OL = kcg_lit_int64(0);
  outC->_L121.dangerpoint.v_release = kcg_lit_int64(0);
  outC->_L121.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L121.q_overlap = kcg_true;
  outC->_L121.overlap.d_DP_or_OL = kcg_lit_int64(0);
  outC->_L121.overlap.v_release = kcg_lit_int64(0);
  outC->_L121.overlap.calc_v_release_onboard = kcg_true;
  outC->_L121.q_endtimer = kcg_true;
  outC->_L121.endtimer_t.t_endtimer = kcg_lit_int64(0);
  outC->_L121.endtimer_t.d_endtimerstoploc = kcg_lit_int64(0);
  outC->_L119.d_DP_or_OL = kcg_lit_int64(0);
  outC->_L119.v_release = kcg_lit_int64(0);
  outC->_L119.calc_v_release_onboard = kcg_true;
  outC->_L120 = kcg_lit_int64(0);
  outC->_L115.d_DP_or_OL = kcg_lit_int64(0);
  outC->_L115.v_release = kcg_lit_int64(0);
  outC->_L115.calc_v_release_onboard = kcg_true;
  outC->_L114.d_DP_or_OL = kcg_lit_int64(0);
  outC->_L114.v_release = kcg_lit_int64(0);
  outC->_L114.calc_v_release_onboard = kcg_true;
  outC->_L109 = kcg_lit_int64(0);
  outC->_L106.d_DP_or_OL = kcg_lit_int64(0);
  outC->_L106.v_release = kcg_lit_int64(0);
  outC->_L106.calc_v_release_onboard = kcg_true;
  outC->_L101.valid = kcg_true;
  outC->_L101.Level = MA_L1_TrackAtlasTypes;
  outC->_L101.q_dir = Q_DIR_Reverse;
  outC->_L101.v_main = kcg_lit_int64(0);
  outC->_L101.v_loa = kcg_lit_int64(0);
  outC->_L101.t_loa_unlimited = kcg_true;
  outC->_L101.t_loa = kcg_lit_int64(0);
  outC->_L101.n_iter = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 10; idx3++) {
    outC->_L101.sections[idx3].valid = kcg_true;
    outC->_L101.sections[idx3].q_endsection = kcg_true;
    outC->_L101.sections[idx3].l_section = kcg_lit_int64(0);
    outC->_L101.sections[idx3].q_sectiontimer = kcg_true;
    outC->_L101.sections[idx3].t_sectiontimer = kcg_lit_int64(0);
    outC->_L101.sections[idx3].d_sectiontimerstoploc = kcg_lit_int64(0);
  }
  outC->_L101.q_dangerpoint = kcg_true;
  outC->_L101.dangerpoint.d_DP_or_OL = kcg_lit_int64(0);
  outC->_L101.dangerpoint.v_release = kcg_lit_int64(0);
  outC->_L101.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L101.q_overlap = kcg_true;
  outC->_L101.overlap.d_DP_or_OL = kcg_lit_int64(0);
  outC->_L101.overlap.v_release = kcg_lit_int64(0);
  outC->_L101.overlap.calc_v_release_onboard = kcg_true;
  outC->_L101.q_endtimer = kcg_true;
  outC->_L101.endtimer_t.t_endtimer = kcg_lit_int64(0);
  outC->_L101.endtimer_t.d_endtimerstoploc = kcg_lit_int64(0);
  outC->_L103.valid = kcg_true;
  outC->_L103.Level = MA_L1_TrackAtlasTypes;
  outC->_L103.q_dir = Q_DIR_Reverse;
  outC->_L103.v_main = kcg_lit_int64(0);
  outC->_L103.v_loa = kcg_lit_int64(0);
  outC->_L103.t_loa_unlimited = kcg_true;
  outC->_L103.t_loa = kcg_lit_int64(0);
  outC->_L103.n_iter = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 10; idx4++) {
    outC->_L103.sections[idx4].valid = kcg_true;
    outC->_L103.sections[idx4].q_endsection = kcg_true;
    outC->_L103.sections[idx4].l_section = kcg_lit_int64(0);
    outC->_L103.sections[idx4].q_sectiontimer = kcg_true;
    outC->_L103.sections[idx4].t_sectiontimer = kcg_lit_int64(0);
    outC->_L103.sections[idx4].d_sectiontimerstoploc = kcg_lit_int64(0);
  }
  outC->_L103.q_dangerpoint = kcg_true;
  outC->_L103.dangerpoint.d_DP_or_OL = kcg_lit_int64(0);
  outC->_L103.dangerpoint.v_release = kcg_lit_int64(0);
  outC->_L103.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L103.q_overlap = kcg_true;
  outC->_L103.overlap.d_DP_or_OL = kcg_lit_int64(0);
  outC->_L103.overlap.v_release = kcg_lit_int64(0);
  outC->_L103.overlap.calc_v_release_onboard = kcg_true;
  outC->_L103.q_endtimer = kcg_true;
  outC->_L103.endtimer_t.t_endtimer = kcg_lit_int64(0);
  outC->_L103.endtimer_t.d_endtimerstoploc = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 10; idx5++) {
    outC->_L72[idx5].valid = kcg_true;
    outC->_L72[idx5].q_endsection = kcg_true;
    outC->_L72[idx5].l_section = kcg_lit_int64(0);
    outC->_L72[idx5].q_sectiontimer = kcg_true;
    outC->_L72[idx5].t_sectiontimer = kcg_lit_int64(0);
    outC->_L72[idx5].d_sectiontimerstoploc = kcg_lit_int64(0);
  }
  for (idx6 = 0; idx6 < 10; idx6++) {
    outC->_L40[idx6] = kcg_lit_int64(0);
  }
  outC->_L37 = kcg_lit_int64(0);
  for (idx7 = 0; idx7 < 10; idx7++) {
    outC->_L4[idx7].valid = kcg_true;
    outC->_L4[idx7].q_endsection = kcg_true;
    outC->_L4[idx7].l_section = kcg_lit_int64(0);
    outC->_L4[idx7].q_sectiontimer = kcg_true;
    outC->_L4[idx7].t_sectiontimer = kcg_lit_int64(0);
    outC->_L4[idx7].d_sectiontimerstoploc = kcg_lit_int64(0);
  }
  outC->every1 = kcg_true;
  outC->every = kcg_true;
  outC->ProfileOut.valid = kcg_true;
  outC->ProfileOut.Level = MA_L1_TrackAtlasTypes;
  outC->ProfileOut.q_dir = Q_DIR_Reverse;
  outC->ProfileOut.v_main = kcg_lit_int64(0);
  outC->ProfileOut.v_loa = kcg_lit_int64(0);
  outC->ProfileOut.t_loa_unlimited = kcg_true;
  outC->ProfileOut.t_loa = kcg_lit_int64(0);
  outC->ProfileOut.n_iter = kcg_lit_int64(0);
  for (idx8 = 0; idx8 < 10; idx8++) {
    outC->ProfileOut.sections[idx8].valid = kcg_true;
    outC->ProfileOut.sections[idx8].q_endsection = kcg_true;
    outC->ProfileOut.sections[idx8].l_section = kcg_lit_int64(0);
    outC->ProfileOut.sections[idx8].q_sectiontimer = kcg_true;
    outC->ProfileOut.sections[idx8].t_sectiontimer = kcg_lit_int64(0);
    outC->ProfileOut.sections[idx8].d_sectiontimerstoploc = kcg_lit_int64(0);
  }
  outC->ProfileOut.q_dangerpoint = kcg_true;
  outC->ProfileOut.dangerpoint.d_DP_or_OL = kcg_lit_int64(0);
  outC->ProfileOut.dangerpoint.v_release = kcg_lit_int64(0);
  outC->ProfileOut.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->ProfileOut.q_overlap = kcg_true;
  outC->ProfileOut.overlap.d_DP_or_OL = kcg_lit_int64(0);
  outC->ProfileOut.overlap.v_release = kcg_lit_int64(0);
  outC->ProfileOut.overlap.calc_v_release_onboard = kcg_true;
  outC->ProfileOut.q_endtimer = kcg_true;
  outC->ProfileOut.endtimer_t.t_endtimer = kcg_lit_int64(0);
  outC->ProfileOut.endtimer_t.d_endtimerstoploc = kcg_lit_int64(0);
  for (idx = 0; idx < 10; idx++) {
    /* _L4=(TA_Lib_internal::MoveMAAbsolute_Loop_new#1)/ */
    MoveMAAbsolute_Loop_new_init_TA_Lib_internal(
      &outC->Context_MoveMAAbsolute_Loop_new_1[idx]);
  }
  /* _L119=(TA_Lib_internal::Move_DP_or_OL_new#1)/ */
  Move_DP_or_OL_new_init_TA_Lib_internal(&outC->Context_Move_DP_or_OL_new_1);
  /* _L106=(TA_Lib_internal::Move_DP_or_OL_new#2)/ */
  Move_DP_or_OL_new_init_TA_Lib_internal(&outC->Context_Move_DP_or_OL_new_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MoveMAAbsolute_new_reset_TA_Lib_internal(
  outC_MoveMAAbsolute_new_TA_Lib_internal *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 10; idx++) {
    /* _L4=(TA_Lib_internal::MoveMAAbsolute_Loop_new#1)/ */
    MoveMAAbsolute_Loop_new_reset_TA_Lib_internal(
      &outC->Context_MoveMAAbsolute_Loop_new_1[idx]);
  }
  /* _L119=(TA_Lib_internal::Move_DP_or_OL_new#1)/ */
  Move_DP_or_OL_new_reset_TA_Lib_internal(&outC->Context_Move_DP_or_OL_new_1);
  /* _L106=(TA_Lib_internal::Move_DP_or_OL_new#2)/ */
  Move_DP_or_OL_new_reset_TA_Lib_internal(&outC->Context_Move_DP_or_OL_new_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MoveMAAbsolute_new_TA_Lib_internal.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

