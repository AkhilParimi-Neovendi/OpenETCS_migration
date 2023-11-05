/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MA_Convert_P15_to_DistanceProfile_TA_MA_new.h"

/* TA_MA_new::MA_Convert_P15_to_DistanceProfile/ */
void MA_Convert_P15_to_DistanceProfile_TA_MA_new(
  /* Packet15_in/ */
  P015_OBU_T_TM *Packet15_in,
  /* NV_in/ */
  P003V1_OBU_T_TM_baseline2 *NV_in,
  outC_MA_Convert_P15_to_DistanceProfile_TA_MA_new *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static AccuDistanceProfileMA_TA_MA_new acc;
  static kcg_size idx3;

  kcg_copy_MovementAuthority_t_TrackAtlasTypes(
    &outC->_L169,
    (MovementAuthority_t_TrackAtlasTypes *)
      &DEFAULT_MovementAuthority_TrackAtlasTypes);
  kcg_copy_P015_OBU_T_TM(&outC->_L137, Packet15_in);
  outC->_L138 = outC->_L137.valid;
  outC->_L139 = MA_level23_TA_MA_new;
  outC->_L141 = outC->_L137.q_dir;
  outC->_L140 = DEFAULT_v_main_TA_MA_new;
  outC->_L149 = outC->_L137.v_loa;
  /* _L145=(TA_Lib_internal::EVAL_T_LOA#2)/ */
  EVAL_T_LOA_TA_Lib_internal(&outC->_L137, &outC->Context_EVAL_T_LOA_2);
  outC->_L145 = outC->Context_EVAL_T_LOA_2.t_loa_unlimited;
  outC->_L146 = outC->Context_EVAL_T_LOA_2.t_loa_out;
  outC->_L142 = outC->_L137.n_iter;
  kcg_copy_AccuDistanceProfileMA_TA_MA_new(
    &outC->_L83,
    (AccuDistanceProfileMA_TA_MA_new *) &DEFAULT_AccuDistanceProfileMA_TA_MA_new);
  /* _L134=(TA_MA_new::Pack_Endsection#1)/ */
  Pack_Endsection_TA_MA_new(&outC->_L137, &outC->Context_Pack_Endsection_1);
  kcg_copy_P015_section_enum_T_TM(
    &outC->_L134,
    &outC->Context_Pack_Endsection_1.endsection);
  outC->_L163 = outC->_L137.n_iter;
  kcg_copy_P015_OBU_sectionlist_enum_T_TM(&outC->_L71, &outC->_L137.sections);
  kcg_copy_P015_OBU_sectionlist_enum_T_TM(&outC->_L166, &outC->_L71);
  if ((kcg_lit_int32(0) <= outC->_L163) & (outC->_L163 < kcg_lit_int32(32))) {
    kcg_copy_P015_section_enum_T_TM(&outC->_L166[outC->_L163], &outC->_L134);
  }
  /* _L74/ */
  for (idx = 0; idx < 10; idx++) {
    kcg_copy_P015_OBU_sectionlist_enum_T_TM(&outC->_L74[idx], &outC->_L166);
  }
  /* _L167/ */
  for (idx1 = 0; idx1 < 10; idx1++) {
    outC->_L167[idx1] = outC->_L163;
  }
  outC->_L65 = outC->_L137.q_scale;
  /* _L76/ */
  for (idx2 = 0; idx2 < 10; idx2++) {
    outC->_L76[idx2] = outC->_L65;
  }
  kcg_copy_AccuDistanceProfileMA_TA_MA_new(&outC->_L77, &outC->_L83);
  /* _L77= */
  for (idx3 = 0; idx3 < 10; idx3++) {
    kcg_copy_AccuDistanceProfileMA_TA_MA_new(&acc, &outC->_L77);
    /* _L77=(TA_MA_new::MA_Convert_P15_to_DistanceProfile_loop#1)/ */
    MA_Convert_P15_to_DistanceProfile_loop_TA_MA_new(
      /* _L77= */(kcg_int32) idx3,
      &acc,
      &outC->_L74[idx3],
      outC->_L167[idx3],
      outC->_L76[idx3],
      &outC->Context_MA_Convert_P15_to_DistanceProfile_loop_1[idx3]);
    kcg_copy_AccuDistanceProfileMA_TA_MA_new(
      &outC->_L77,
      &outC->Context_MA_Convert_P15_to_DistanceProfile_loop_1[idx3].SpeedtProfile);
  }
  kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(
    &outC->_L161,
    &outC->_L77.sections);
  outC->_L162 = outC->_L77.d_endsection;
  kcg_copy_P003V1_OBU_T_TM_baseline2(&outC->_L152, NV_in);
  /* _L130=(TA_MA_new::Normalize_Dangerpoint#1)/ */
  Normalize_Dangerpoint_TA_MA_new(
    outC->_L162,
    &outC->_L137,
    &outC->_L152,
    &outC->Context_Normalize_Dangerpoint_1);
  outC->_L130 = outC->Context_Normalize_Dangerpoint_1.q_dangerpoint;
  kcg_copy_DP_or_OL_t_TrackAtlasTypes(
    &outC->_L131,
    &outC->Context_Normalize_Dangerpoint_1.dangerpoint);
  /* _L132=(TA_MA_new::Normalize_Overlap#1)/ */
  Normalize_Overlap_TA_MA_new(
    outC->_L162,
    &outC->_L137,
    &outC->_L152,
    &outC->Context_Normalize_Overlap_1);
  outC->_L132 = outC->Context_Normalize_Overlap_1.q_overlap;
  kcg_copy_DP_or_OL_t_TrackAtlasTypes(
    &outC->_L133,
    &outC->Context_Normalize_Overlap_1.overlap);
  outC->_L157 = kcg_false;
  kcg_copy_Endtimer_t_TrackAtlasTypes(
    &outC->_L156,
    (Endtimer_t_TrackAtlasTypes *) &DEFAULT_Endtimer_TrackAtlasTypes);
  outC->_L128.valid = outC->_L138;
  outC->_L128.Level = outC->_L139;
  outC->_L128.q_dir = outC->_L141;
  outC->_L128.v_main = outC->_L140;
  outC->_L128.v_loa = outC->_L149;
  outC->_L128.t_loa_unlimited = outC->_L145;
  outC->_L128.t_loa = outC->_L146;
  outC->_L128.n_iter = outC->_L142;
  kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(
    &outC->_L128.sections,
    &outC->_L161);
  outC->_L128.q_dangerpoint = outC->_L130;
  kcg_copy_DP_or_OL_t_TrackAtlasTypes(&outC->_L128.dangerpoint, &outC->_L131);
  outC->_L128.q_overlap = outC->_L132;
  kcg_copy_DP_or_OL_t_TrackAtlasTypes(&outC->_L128.overlap, &outC->_L133);
  outC->_L128.q_endtimer = outC->_L157;
  kcg_copy_Endtimer_t_TrackAtlasTypes(&outC->_L128.endtimer_t, &outC->_L156);
  /* _L168= */
  if (outC->_L138) {
    kcg_copy_MovementAuthority_t_TrackAtlasTypes(&outC->_L168, &outC->_L128);
  }
  else {
    kcg_copy_MovementAuthority_t_TrackAtlasTypes(&outC->_L168, &outC->_L169);
  }
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(
    &outC->MovementAuthority,
    &outC->_L168);
}

#ifndef KCG_USER_DEFINED_INIT
void MA_Convert_P15_to_DistanceProfile_init_TA_MA_new(
  outC_MA_Convert_P15_to_DistanceProfile_TA_MA_new *outC)
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
  static kcg_size idx9;
  static kcg_size idx10;
  static kcg_size idx11;
  static kcg_size idx12;
  static kcg_size idx13;
  static kcg_size idx14;
  static kcg_size idx15;

  outC->_L169.valid = kcg_true;
  outC->_L169.Level = MA_L1_TrackAtlasTypes;
  outC->_L169.q_dir = Q_DIR_Reverse;
  outC->_L169.v_main = kcg_lit_int32(0);
  outC->_L169.v_loa = kcg_lit_int32(0);
  outC->_L169.t_loa_unlimited = kcg_true;
  outC->_L169.t_loa = kcg_lit_int32(0);
  outC->_L169.n_iter = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 10; idx1++) {
    outC->_L169.sections[idx1].valid = kcg_true;
    outC->_L169.sections[idx1].q_endsection = kcg_true;
    outC->_L169.sections[idx1].l_section = kcg_lit_int32(0);
    outC->_L169.sections[idx1].q_sectiontimer = kcg_true;
    outC->_L169.sections[idx1].t_sectiontimer = kcg_lit_int32(0);
    outC->_L169.sections[idx1].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L169.q_dangerpoint = kcg_true;
  outC->_L169.dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L169.dangerpoint.v_release = kcg_lit_int32(0);
  outC->_L169.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L169.q_overlap = kcg_true;
  outC->_L169.overlap.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L169.overlap.v_release = kcg_lit_int32(0);
  outC->_L169.overlap.calc_v_release_onboard = kcg_true;
  outC->_L169.q_endtimer = kcg_true;
  outC->_L169.endtimer_t.t_endtimer = kcg_lit_int32(0);
  outC->_L169.endtimer_t.d_endtimerstoploc = kcg_lit_int32(0);
  outC->_L168.valid = kcg_true;
  outC->_L168.Level = MA_L1_TrackAtlasTypes;
  outC->_L168.q_dir = Q_DIR_Reverse;
  outC->_L168.v_main = kcg_lit_int32(0);
  outC->_L168.v_loa = kcg_lit_int32(0);
  outC->_L168.t_loa_unlimited = kcg_true;
  outC->_L168.t_loa = kcg_lit_int32(0);
  outC->_L168.n_iter = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 10; idx2++) {
    outC->_L168.sections[idx2].valid = kcg_true;
    outC->_L168.sections[idx2].q_endsection = kcg_true;
    outC->_L168.sections[idx2].l_section = kcg_lit_int32(0);
    outC->_L168.sections[idx2].q_sectiontimer = kcg_true;
    outC->_L168.sections[idx2].t_sectiontimer = kcg_lit_int32(0);
    outC->_L168.sections[idx2].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L168.q_dangerpoint = kcg_true;
  outC->_L168.dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L168.dangerpoint.v_release = kcg_lit_int32(0);
  outC->_L168.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L168.q_overlap = kcg_true;
  outC->_L168.overlap.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L168.overlap.v_release = kcg_lit_int32(0);
  outC->_L168.overlap.calc_v_release_onboard = kcg_true;
  outC->_L168.q_endtimer = kcg_true;
  outC->_L168.endtimer_t.t_endtimer = kcg_lit_int32(0);
  outC->_L168.endtimer_t.d_endtimerstoploc = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 10; idx3++) {
    outC->_L167[idx3] = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 32; idx4++) {
    outC->_L166[idx4].valid = kcg_true;
    outC->_L166[idx4].l_section = kcg_lit_int32(0);
    outC->_L166[idx4].q_sectiontimer = Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L166[idx4].t_sectiontimer = kcg_lit_int32(0);
    outC->_L166[idx4].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L163 = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 10; idx5++) {
    outC->_L161[idx5].valid = kcg_true;
    outC->_L161[idx5].q_endsection = kcg_true;
    outC->_L161[idx5].l_section = kcg_lit_int32(0);
    outC->_L161[idx5].q_sectiontimer = kcg_true;
    outC->_L161[idx5].t_sectiontimer = kcg_lit_int32(0);
    outC->_L161[idx5].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L162 = kcg_lit_int32(0);
  outC->_L156.t_endtimer = kcg_lit_int32(0);
  outC->_L156.d_endtimerstoploc = kcg_lit_int32(0);
  outC->_L157 = kcg_true;
  outC->_L152.valid = kcg_true;
  outC->_L152.q_dir = Q_DIR_Reverse;
  outC->_L152.q_scale = Q_SCALE_10_cm_scale;
  outC->_L152.d_validnv = kcg_lit_int32(0);
  outC->_L152.n_iter = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 32; idx6++) {
    outC->_L152.SECTIONS[idx6].valid = kcg_true;
    outC->_L152.SECTIONS[idx6].nid_c = kcg_lit_int32(0);
  }
  outC->_L152.v_nvshunt = kcg_lit_int32(0);
  outC->_L152.v_nvstff = kcg_lit_int32(0);
  outC->_L152.v_nvonsight = kcg_lit_int32(0);
  outC->_L152.v_nvunfit = kcg_lit_int32(0);
  outC->_L152.v_nvrel = kcg_lit_int32(0);
  outC->_L152.d_nvroll = kcg_lit_int32(0);
  outC->_L152.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L152.q_nvemrrls =
    Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L152.v_nvallowovtrp = kcg_lit_int32(0);
  outC->_L152.v_nvsopovtrp = kcg_lit_int32(0);
  outC->_L152.d_nvovtrp = kcg_lit_int32(0);
  outC->_L152.t_nvovtrp = kcg_lit_int32(0);
  outC->_L152.d_nvpotrp = kcg_lit_int32(0);
  outC->_L152.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L152.t_nvcontact = kcg_lit_int32(0);
  outC->_L152.m_nvderun = M_NVDERUN_No;
  outC->_L152.d_nvstff = kcg_lit_int32(0);
  outC->_L152.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L149 = kcg_lit_int32(0);
  outC->_L146 = kcg_lit_int32(0);
  outC->_L145 = kcg_true;
  outC->_L142 = kcg_lit_int32(0);
  outC->_L141 = Q_DIR_Reverse;
  outC->_L140 = kcg_lit_int32(0);
  outC->_L139 = MA_L1_TrackAtlasTypes;
  outC->_L138 = kcg_true;
  outC->_L137.valid = kcg_true;
  outC->_L137.q_dir = Q_DIR_Reverse;
  outC->_L137.q_scale = Q_SCALE_10_cm_scale;
  outC->_L137.v_loa = kcg_lit_int32(0);
  outC->_L137.t_loa = kcg_lit_int32(0);
  outC->_L137.n_iter = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 32; idx7++) {
    outC->_L137.sections[idx7].valid = kcg_true;
    outC->_L137.sections[idx7].l_section = kcg_lit_int32(0);
    outC->_L137.sections[idx7].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L137.sections[idx7].t_sectiontimer = kcg_lit_int32(0);
    outC->_L137.sections[idx7].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L137.l_endsection = kcg_lit_int32(0);
  outC->_L137.q_sectiontimer = Q_SECTIONTIMER_No_Section_Timer_information;
  outC->_L137.t_sectiontimer = kcg_lit_int32(0);
  outC->_L137.d_sectiontimerstoploc = kcg_lit_int32(0);
  outC->_L137.q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
  outC->_L137.t_endtimer = kcg_lit_int32(0);
  outC->_L137.d_endtimerstartloc = kcg_lit_int32(0);
  outC->_L137.q_dangerpoint = Q_DANGERPOINT_No_danger_point_information;
  outC->_L137.d_dp = kcg_lit_int32(0);
  outC->_L137.v_releasedp = kcg_lit_int32(0);
  outC->_L137.q_overlap = Q_OVERLAP_No_overlap_information;
  outC->_L137.d_startol = kcg_lit_int32(0);
  outC->_L137.t_ol = kcg_lit_int32(0);
  outC->_L137.d_ol = kcg_lit_int32(0);
  outC->_L137.v_releaseol = kcg_lit_int32(0);
  outC->_L134.valid = kcg_true;
  outC->_L134.l_section = kcg_lit_int32(0);
  outC->_L134.q_sectiontimer = Q_SECTIONTIMER_No_Section_Timer_information;
  outC->_L134.t_sectiontimer = kcg_lit_int32(0);
  outC->_L134.d_sectiontimerstoploc = kcg_lit_int32(0);
  outC->_L133.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L133.v_release = kcg_lit_int32(0);
  outC->_L133.calc_v_release_onboard = kcg_true;
  outC->_L132 = kcg_true;
  outC->_L131.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L131.v_release = kcg_lit_int32(0);
  outC->_L131.calc_v_release_onboard = kcg_true;
  outC->_L130 = kcg_true;
  outC->_L128.valid = kcg_true;
  outC->_L128.Level = MA_L1_TrackAtlasTypes;
  outC->_L128.q_dir = Q_DIR_Reverse;
  outC->_L128.v_main = kcg_lit_int32(0);
  outC->_L128.v_loa = kcg_lit_int32(0);
  outC->_L128.t_loa_unlimited = kcg_true;
  outC->_L128.t_loa = kcg_lit_int32(0);
  outC->_L128.n_iter = kcg_lit_int32(0);
  for (idx8 = 0; idx8 < 10; idx8++) {
    outC->_L128.sections[idx8].valid = kcg_true;
    outC->_L128.sections[idx8].q_endsection = kcg_true;
    outC->_L128.sections[idx8].l_section = kcg_lit_int32(0);
    outC->_L128.sections[idx8].q_sectiontimer = kcg_true;
    outC->_L128.sections[idx8].t_sectiontimer = kcg_lit_int32(0);
    outC->_L128.sections[idx8].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L128.q_dangerpoint = kcg_true;
  outC->_L128.dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L128.dangerpoint.v_release = kcg_lit_int32(0);
  outC->_L128.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L128.q_overlap = kcg_true;
  outC->_L128.overlap.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L128.overlap.v_release = kcg_lit_int32(0);
  outC->_L128.overlap.calc_v_release_onboard = kcg_true;
  outC->_L128.q_endtimer = kcg_true;
  outC->_L128.endtimer_t.t_endtimer = kcg_lit_int32(0);
  outC->_L128.endtimer_t.d_endtimerstoploc = kcg_lit_int32(0);
  for (idx9 = 0; idx9 < 10; idx9++) {
    outC->_L83.sections[idx9].valid = kcg_true;
    outC->_L83.sections[idx9].q_endsection = kcg_true;
    outC->_L83.sections[idx9].l_section = kcg_lit_int32(0);
    outC->_L83.sections[idx9].q_sectiontimer = kcg_true;
    outC->_L83.sections[idx9].t_sectiontimer = kcg_lit_int32(0);
    outC->_L83.sections[idx9].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L83.d_endsection = kcg_lit_int32(0);
  for (idx10 = 0; idx10 < 10; idx10++) {
    outC->_L77.sections[idx10].valid = kcg_true;
    outC->_L77.sections[idx10].q_endsection = kcg_true;
    outC->_L77.sections[idx10].l_section = kcg_lit_int32(0);
    outC->_L77.sections[idx10].q_sectiontimer = kcg_true;
    outC->_L77.sections[idx10].t_sectiontimer = kcg_lit_int32(0);
    outC->_L77.sections[idx10].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L77.d_endsection = kcg_lit_int32(0);
  for (idx11 = 0; idx11 < 10; idx11++) {
    outC->_L76[idx11] = Q_SCALE_10_cm_scale;
  }
  for (idx13 = 0; idx13 < 10; idx13++) {
    for (idx12 = 0; idx12 < 32; idx12++) {
      outC->_L74[idx13][idx12].valid = kcg_true;
      outC->_L74[idx13][idx12].l_section = kcg_lit_int32(0);
      outC->_L74[idx13][idx12].q_sectiontimer =
        Q_SECTIONTIMER_No_Section_Timer_information;
      outC->_L74[idx13][idx12].t_sectiontimer = kcg_lit_int32(0);
      outC->_L74[idx13][idx12].d_sectiontimerstoploc = kcg_lit_int32(0);
    }
  }
  outC->_L65 = Q_SCALE_10_cm_scale;
  for (idx14 = 0; idx14 < 32; idx14++) {
    outC->_L71[idx14].valid = kcg_true;
    outC->_L71[idx14].l_section = kcg_lit_int32(0);
    outC->_L71[idx14].q_sectiontimer = Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L71[idx14].t_sectiontimer = kcg_lit_int32(0);
    outC->_L71[idx14].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->MovementAuthority.valid = kcg_true;
  outC->MovementAuthority.Level = MA_L1_TrackAtlasTypes;
  outC->MovementAuthority.q_dir = Q_DIR_Reverse;
  outC->MovementAuthority.v_main = kcg_lit_int32(0);
  outC->MovementAuthority.v_loa = kcg_lit_int32(0);
  outC->MovementAuthority.t_loa_unlimited = kcg_true;
  outC->MovementAuthority.t_loa = kcg_lit_int32(0);
  outC->MovementAuthority.n_iter = kcg_lit_int32(0);
  for (idx15 = 0; idx15 < 10; idx15++) {
    outC->MovementAuthority.sections[idx15].valid = kcg_true;
    outC->MovementAuthority.sections[idx15].q_endsection = kcg_true;
    outC->MovementAuthority.sections[idx15].l_section = kcg_lit_int32(0);
    outC->MovementAuthority.sections[idx15].q_sectiontimer = kcg_true;
    outC->MovementAuthority.sections[idx15].t_sectiontimer = kcg_lit_int32(0);
    outC->MovementAuthority.sections[idx15].d_sectiontimerstoploc =
      kcg_lit_int32(0);
  }
  outC->MovementAuthority.q_dangerpoint = kcg_true;
  outC->MovementAuthority.dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->MovementAuthority.dangerpoint.v_release = kcg_lit_int32(0);
  outC->MovementAuthority.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->MovementAuthority.q_overlap = kcg_true;
  outC->MovementAuthority.overlap.d_DP_or_OL = kcg_lit_int32(0);
  outC->MovementAuthority.overlap.v_release = kcg_lit_int32(0);
  outC->MovementAuthority.overlap.calc_v_release_onboard = kcg_true;
  outC->MovementAuthority.q_endtimer = kcg_true;
  outC->MovementAuthority.endtimer_t.t_endtimer = kcg_lit_int32(0);
  outC->MovementAuthority.endtimer_t.d_endtimerstoploc = kcg_lit_int32(0);
  /* _L132=(TA_MA_new::Normalize_Overlap#1)/ */
  Normalize_Overlap_init_TA_MA_new(&outC->Context_Normalize_Overlap_1);
  /* _L130=(TA_MA_new::Normalize_Dangerpoint#1)/ */
  Normalize_Dangerpoint_init_TA_MA_new(&outC->Context_Normalize_Dangerpoint_1);
  for (idx = 0; idx < 10; idx++) {
    /* _L77=(TA_MA_new::MA_Convert_P15_to_DistanceProfile_loop#1)/ */
    MA_Convert_P15_to_DistanceProfile_loop_init_TA_MA_new(
      &outC->Context_MA_Convert_P15_to_DistanceProfile_loop_1[idx]);
  }
  /* _L134=(TA_MA_new::Pack_Endsection#1)/ */
  Pack_Endsection_init_TA_MA_new(&outC->Context_Pack_Endsection_1);
  /* _L145=(TA_Lib_internal::EVAL_T_LOA#2)/ */
  EVAL_T_LOA_init_TA_Lib_internal(&outC->Context_EVAL_T_LOA_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MA_Convert_P15_to_DistanceProfile_reset_TA_MA_new(
  outC_MA_Convert_P15_to_DistanceProfile_TA_MA_new *outC)
{
  static kcg_size idx;

  /* _L132=(TA_MA_new::Normalize_Overlap#1)/ */
  Normalize_Overlap_reset_TA_MA_new(&outC->Context_Normalize_Overlap_1);
  /* _L130=(TA_MA_new::Normalize_Dangerpoint#1)/ */
  Normalize_Dangerpoint_reset_TA_MA_new(&outC->Context_Normalize_Dangerpoint_1);
  for (idx = 0; idx < 10; idx++) {
    /* _L77=(TA_MA_new::MA_Convert_P15_to_DistanceProfile_loop#1)/ */
    MA_Convert_P15_to_DistanceProfile_loop_reset_TA_MA_new(
      &outC->Context_MA_Convert_P15_to_DistanceProfile_loop_1[idx]);
  }
  /* _L134=(TA_MA_new::Pack_Endsection#1)/ */
  Pack_Endsection_reset_TA_MA_new(&outC->Context_Pack_Endsection_1);
  /* _L145=(TA_Lib_internal::EVAL_T_LOA#2)/ */
  EVAL_T_LOA_reset_TA_Lib_internal(&outC->Context_EVAL_T_LOA_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MA_Convert_P15_to_DistanceProfile_TA_MA_new.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

