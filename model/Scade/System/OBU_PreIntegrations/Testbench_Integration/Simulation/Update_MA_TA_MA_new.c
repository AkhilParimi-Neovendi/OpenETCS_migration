/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Update_MA_TA_MA_new.h"

/* TA_MA_new::Update_MA/ */
void Update_MA_TA_MA_new(
  /* ProfileIn/ */
  MovementAuthority_t_TrackAtlasTypes *ProfileIn,
  outC_Update_MA_TA_MA_new *outC)
{
  /* MA_in_force/ */
  static MovementAuthority_t_TrackAtlasTypes MA_in_force_partial;
  /* MA_in_force/ */
  static MovementAuthority_t_TrackAtlasTypes _1_MA_in_force_partial;
  /* MA_in_force/ */
  static MovementAuthority_t_TrackAtlasTypes _2_MA_in_force_partial;
  /* MA_in_force/ */
  static MovementAuthority_t_TrackAtlasTypes _3_MA_in_force_partial;
  /* MA_in_force/ */
  static MovementAuthority_t_TrackAtlasTypes last_MA_in_force;

  kcg_copy_MovementAuthority_t_TrackAtlasTypes(
    &last_MA_in_force,
    &outC->MA_in_force);
  outC->_L68 = keep_MA_TA_MA_new;
  outC->_L67 = replace_MA_TA_MA_new;
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&outC->_L34, ProfileIn);
  outC->_L65 = outC->_L34.valid;
  /* _L66= */
  if (outC->_L65) {
    outC->_L66 = outC->_L67;
  }
  else {
    outC->_L66 = outC->_L68;
  }
  outC->action = outC->_L66;
  outC->IfBlock1_clock = outC->action == replace_MA_TA_MA_new;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_MovementAuthority_t_TrackAtlasTypes(
      &outC->_L1_then_IfBlock1,
      ProfileIn);
    kcg_copy_MovementAuthority_t_TrackAtlasTypes(
      &MA_in_force_partial,
      &outC->_L1_then_IfBlock1);
    kcg_copy_MovementAuthority_t_TrackAtlasTypes(
      &outC->MA_in_force,
      &MA_in_force_partial);
  }
  else {
    outC->else_clock_IfBlock1 = outC->action == delete_MA_TA_MA_new;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      kcg_copy_MovementAuthority_t_TrackAtlasTypes(
        &outC->_L1_then_else_IfBlock1,
        (MovementAuthority_t_TrackAtlasTypes *)
          &DEFAULT_MovementAuthority_TrackAtlasTypes);
      kcg_copy_MovementAuthority_t_TrackAtlasTypes(
        &_3_MA_in_force_partial,
        &outC->_L1_then_else_IfBlock1);
      kcg_copy_MovementAuthority_t_TrackAtlasTypes(
        &_1_MA_in_force_partial,
        &_3_MA_in_force_partial);
    }
    else {
      kcg_copy_MovementAuthority_t_TrackAtlasTypes(
        &outC->_L3_else_else_IfBlock1,
        &last_MA_in_force);
      kcg_copy_MovementAuthority_t_TrackAtlasTypes(
        &_2_MA_in_force_partial,
        &outC->_L3_else_else_IfBlock1);
      kcg_copy_MovementAuthority_t_TrackAtlasTypes(
        &_1_MA_in_force_partial,
        &_2_MA_in_force_partial);
    }
    kcg_copy_MovementAuthority_t_TrackAtlasTypes(
      &outC->MA_in_force,
      &_1_MA_in_force_partial);
  }
}

#ifndef KCG_USER_DEFINED_INIT
void Update_MA_init_TA_MA_new(outC_Update_MA_TA_MA_new *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  outC->_L68 = replace_TA_MA_new;
  outC->_L67 = replace_TA_MA_new;
  outC->_L66 = replace_TA_MA_new;
  outC->_L65 = kcg_true;
  outC->_L34.valid = kcg_true;
  outC->_L34.Level = MA_L1_TrackAtlasTypes;
  outC->_L34.q_dir = Q_DIR_Reverse;
  outC->_L34.v_main = kcg_lit_int32(0);
  outC->_L34.v_loa = kcg_lit_int32(0);
  outC->_L34.t_loa_unlimited = kcg_true;
  outC->_L34.t_loa = kcg_lit_int32(0);
  outC->_L34.n_iter = kcg_lit_int32(0);
  for (idx = 0; idx < 10; idx++) {
    outC->_L34.sections[idx].valid = kcg_true;
    outC->_L34.sections[idx].q_endsection = kcg_true;
    outC->_L34.sections[idx].l_section = kcg_lit_int32(0);
    outC->_L34.sections[idx].q_sectiontimer = kcg_true;
    outC->_L34.sections[idx].t_sectiontimer = kcg_lit_int32(0);
    outC->_L34.sections[idx].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L34.q_dangerpoint = kcg_true;
  outC->_L34.dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L34.dangerpoint.v_release = kcg_lit_int32(0);
  outC->_L34.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L34.q_overlap = kcg_true;
  outC->_L34.overlap.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L34.overlap.v_release = kcg_lit_int32(0);
  outC->_L34.overlap.calc_v_release_onboard = kcg_true;
  outC->_L34.q_endtimer = kcg_true;
  outC->_L34.endtimer_t.t_endtimer = kcg_lit_int32(0);
  outC->_L34.endtimer_t.d_endtimerstoploc = kcg_lit_int32(0);
  outC->action = replace_TA_MA_new;
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_then_else_IfBlock1.valid = kcg_true;
  outC->_L1_then_else_IfBlock1.Level = MA_L1_TrackAtlasTypes;
  outC->_L1_then_else_IfBlock1.q_dir = Q_DIR_Reverse;
  outC->_L1_then_else_IfBlock1.v_main = kcg_lit_int32(0);
  outC->_L1_then_else_IfBlock1.v_loa = kcg_lit_int32(0);
  outC->_L1_then_else_IfBlock1.t_loa_unlimited = kcg_true;
  outC->_L1_then_else_IfBlock1.t_loa = kcg_lit_int32(0);
  outC->_L1_then_else_IfBlock1.n_iter = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 10; idx1++) {
    outC->_L1_then_else_IfBlock1.sections[idx1].valid = kcg_true;
    outC->_L1_then_else_IfBlock1.sections[idx1].q_endsection = kcg_true;
    outC->_L1_then_else_IfBlock1.sections[idx1].l_section = kcg_lit_int32(0);
    outC->_L1_then_else_IfBlock1.sections[idx1].q_sectiontimer = kcg_true;
    outC->_L1_then_else_IfBlock1.sections[idx1].t_sectiontimer = kcg_lit_int32(0);
    outC->_L1_then_else_IfBlock1.sections[idx1].d_sectiontimerstoploc =
      kcg_lit_int32(0);
  }
  outC->_L1_then_else_IfBlock1.q_dangerpoint = kcg_true;
  outC->_L1_then_else_IfBlock1.dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L1_then_else_IfBlock1.dangerpoint.v_release = kcg_lit_int32(0);
  outC->_L1_then_else_IfBlock1.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L1_then_else_IfBlock1.q_overlap = kcg_true;
  outC->_L1_then_else_IfBlock1.overlap.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L1_then_else_IfBlock1.overlap.v_release = kcg_lit_int32(0);
  outC->_L1_then_else_IfBlock1.overlap.calc_v_release_onboard = kcg_true;
  outC->_L1_then_else_IfBlock1.q_endtimer = kcg_true;
  outC->_L1_then_else_IfBlock1.endtimer_t.t_endtimer = kcg_lit_int32(0);
  outC->_L1_then_else_IfBlock1.endtimer_t.d_endtimerstoploc = kcg_lit_int32(0);
  outC->_L3_else_else_IfBlock1.valid = kcg_true;
  outC->_L3_else_else_IfBlock1.Level = MA_L1_TrackAtlasTypes;
  outC->_L3_else_else_IfBlock1.q_dir = Q_DIR_Reverse;
  outC->_L3_else_else_IfBlock1.v_main = kcg_lit_int32(0);
  outC->_L3_else_else_IfBlock1.v_loa = kcg_lit_int32(0);
  outC->_L3_else_else_IfBlock1.t_loa_unlimited = kcg_true;
  outC->_L3_else_else_IfBlock1.t_loa = kcg_lit_int32(0);
  outC->_L3_else_else_IfBlock1.n_iter = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 10; idx2++) {
    outC->_L3_else_else_IfBlock1.sections[idx2].valid = kcg_true;
    outC->_L3_else_else_IfBlock1.sections[idx2].q_endsection = kcg_true;
    outC->_L3_else_else_IfBlock1.sections[idx2].l_section = kcg_lit_int32(0);
    outC->_L3_else_else_IfBlock1.sections[idx2].q_sectiontimer = kcg_true;
    outC->_L3_else_else_IfBlock1.sections[idx2].t_sectiontimer = kcg_lit_int32(0);
    outC->_L3_else_else_IfBlock1.sections[idx2].d_sectiontimerstoploc =
      kcg_lit_int32(0);
  }
  outC->_L3_else_else_IfBlock1.q_dangerpoint = kcg_true;
  outC->_L3_else_else_IfBlock1.dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L3_else_else_IfBlock1.dangerpoint.v_release = kcg_lit_int32(0);
  outC->_L3_else_else_IfBlock1.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L3_else_else_IfBlock1.q_overlap = kcg_true;
  outC->_L3_else_else_IfBlock1.overlap.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L3_else_else_IfBlock1.overlap.v_release = kcg_lit_int32(0);
  outC->_L3_else_else_IfBlock1.overlap.calc_v_release_onboard = kcg_true;
  outC->_L3_else_else_IfBlock1.q_endtimer = kcg_true;
  outC->_L3_else_else_IfBlock1.endtimer_t.t_endtimer = kcg_lit_int32(0);
  outC->_L3_else_else_IfBlock1.endtimer_t.d_endtimerstoploc = kcg_lit_int32(0);
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1.valid = kcg_true;
  outC->_L1_then_IfBlock1.Level = MA_L1_TrackAtlasTypes;
  outC->_L1_then_IfBlock1.q_dir = Q_DIR_Reverse;
  outC->_L1_then_IfBlock1.v_main = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.v_loa = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.t_loa_unlimited = kcg_true;
  outC->_L1_then_IfBlock1.t_loa = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.n_iter = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 10; idx3++) {
    outC->_L1_then_IfBlock1.sections[idx3].valid = kcg_true;
    outC->_L1_then_IfBlock1.sections[idx3].q_endsection = kcg_true;
    outC->_L1_then_IfBlock1.sections[idx3].l_section = kcg_lit_int32(0);
    outC->_L1_then_IfBlock1.sections[idx3].q_sectiontimer = kcg_true;
    outC->_L1_then_IfBlock1.sections[idx3].t_sectiontimer = kcg_lit_int32(0);
    outC->_L1_then_IfBlock1.sections[idx3].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L1_then_IfBlock1.q_dangerpoint = kcg_true;
  outC->_L1_then_IfBlock1.dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.dangerpoint.v_release = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L1_then_IfBlock1.q_overlap = kcg_true;
  outC->_L1_then_IfBlock1.overlap.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.overlap.v_release = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.overlap.calc_v_release_onboard = kcg_true;
  outC->_L1_then_IfBlock1.q_endtimer = kcg_true;
  outC->_L1_then_IfBlock1.endtimer_t.t_endtimer = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.endtimer_t.d_endtimerstoploc = kcg_lit_int32(0);
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(
    &outC->MA_in_force,
    (MovementAuthority_t_TrackAtlasTypes *)
      &DEFAULT_MovementAuthority_TrackAtlasTypes);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Update_MA_reset_TA_MA_new(outC_Update_MA_TA_MA_new *outC)
{
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(
    &outC->MA_in_force,
    (MovementAuthority_t_TrackAtlasTypes *)
      &DEFAULT_MovementAuthority_TrackAtlasTypes);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_Update_MA_TA_MA_new(
  SV_Update_MA_TA_MA_new *SV,
  outC_Update_MA_TA_MA_new *outC)
{
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(
    &SV->Context_MA_in_force,
    &outC->MA_in_force);
}

void kcg_load_SV_Update_MA_TA_MA_new(
  outC_Update_MA_TA_MA_new *outC,
  SV_Update_MA_TA_MA_new *SV)
{
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(
    &outC->MA_in_force,
    &SV->Context_MA_in_force);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Update_MA_TA_MA_new.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

