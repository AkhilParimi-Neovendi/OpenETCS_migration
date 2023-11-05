/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "flagsFromMessages_InformationFilter_Pkg.h"

/* InformationFilter_Pkg::flagsFromMessages/ */
void flagsFromMessages_InformationFilter_Pkg(
  /* doReset/ */
  kcg_bool doReset,
  /* actualMessage/ */
  ReceivedMessage_T_Common_Types_Pkg *actualMessage,
  /* inFilterEvents/ */
  filterRelatedEvents_T_Common_Types_Pkg *inFilterEvents,
  outC_flagsFromMessages_InformationFilter_Pkg *outC)
{
  /* L2L3_transitionPending/ */
  static kcg_bool L2L3_transitionPending_partial;
  /* L1_transitionPending/ */
  static kcg_bool L1_transitionPending_partial;
  /* NTC_transitionPending/ */
  static kcg_bool NTC_transitionPending_partial;
  /* L2L3_transitionPending/ */
  static kcg_bool _1_L2L3_transitionPending_partial;
  /* L1_transitionPending/ */
  static kcg_bool _2_L1_transitionPending_partial;
  /* NTC_transitionPending/ */
  static kcg_bool _3_NTC_transitionPending_partial;
  /* NTC_transitionPending/ */
  static kcg_bool _4_NTC_transitionPending_partial;
  /* L1_transitionPending/ */
  static kcg_bool _5_L1_transitionPending_partial;
  /* L2L3_transitionPending/ */
  static kcg_bool _6_L2L3_transitionPending_partial;
  /* NTC_transitionPending/ */
  static kcg_bool _7_NTC_transitionPending_partial;
  /* L1_transitionPending/ */
  static kcg_bool _8_L1_transitionPending_partial;
  /* L2L3_transitionPending/ */
  static kcg_bool _9_L2L3_transitionPending_partial;
  static P012_OBU_T_TM noname;
  static P015_OBU_T_TM _10_noname;
  static P021_OBU_T_TM _11_noname;
  static kcg_bool _12_noname;
  static kcg_bool _13_noname;
  /* NTC_transitionPending/ */
  static kcg_bool last_NTC_transitionPending;
  /* p27valid/ */
  static kcg_bool last_p27valid;
  /* p21valid/ */
  static kcg_bool last_p21valid;
  /* p15valid/ */
  static kcg_bool last_p15valid;
  /* p12valid/ */
  static kcg_bool last_p12valid;
  /* L1_transitionPending/ */
  static kcg_bool last_L1_transitionPending;
  /* L2L3_transitionPending/ */
  static kcg_bool last_L2L3_transitionPending;

  last_NTC_transitionPending = outC->NTC_transitionPending;
  last_p27valid = outC->p27valid;
  last_p21valid = outC->p21valid;
  last_p15valid = outC->p15valid;
  last_p12valid = outC->p12valid;
  last_L1_transitionPending = outC->L1_transitionPending;
  last_L2L3_transitionPending = outC->L2L3_transitionPending;
  outC->_L246 = msrc_Euroradio_Common_Types_Pkg;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L155, actualMessage);
  outC->_L244 = outC->_L155.source;
  outC->_L245 = outC->_L244 == outC->_L246;
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L247,
    &outC->_L155.Radio_Common_Header);
  outC->_L248 = outC->_L247.nid_message;
  outC->_L249 = cm03_Movement_Authority_Id_Pkg;
  outC->_L250 = outC->_L249 == outC->_L248;
  outC->_L251 = outC->_L250 & outC->_L245;
  outC->isMsg3 = outC->_L251;
  outC->_L252 = outC->isMsg3;
  _13_noname = outC->_L252;
  outC->_L241 = outC->_L155.source;
  outC->_L243 = msrc_Eurobalise_Common_Types_Pkg;
  outC->_L242 = outC->_L243 == outC->_L241;
  outC->isBalise = outC->_L242;
  outC->_L253 = outC->isBalise;
  _12_noname = outC->_L253;
  outC->_L193 = last_p12valid;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L154,
    &outC->_L155.packets);
  /* _L177=(TM::Read_P012#1)/ */
  Read_P012_TM(&outC->_L154, &outC->Context_Read_P012_1);
  outC->_L177 = outC->Context_Read_P012_1.received;
  kcg_copy_P012_OBU_T_TM(&outC->_L178, &outC->Context_Read_P012_1.P012_OBU_out);
  outC->_L192 = outC->_L177 | outC->_L193;
  outC->_L207 = doReset;
  outC->_L208 = !outC->_L207;
  outC->_L206 = outC->_L208 & outC->_L192;
  outC->p12valid = outC->_L206;
  outC->_L218 = outC->p12valid;
  /* _L158=(TM::Read_P041#1)/ */
  Read_P041_TM(&outC->_L154, &outC->Context_Read_P041_1);
  outC->_L158 = outC->Context_Read_P041_1.received;
  kcg_copy_P041_OBU_T_TM(&outC->_L159, &outC->Context_Read_P041_1.P041_OBU_out);
  outC->p41valid = outC->_L158;
  outC->IfBlock1_clock = outC->p41valid;
  if (outC->IfBlock1_clock) {
    outC->_L31_then_IfBlock1 = M_LEVELTR_Level_NTC_specified_by_NID_NTC;
    kcg_copy_P041_section_enum_T_TM(
      &outC->_L5_then_IfBlock1,
      (P041_section_enum_T_TM *) &cNoP41Element_InformationFilter_Pkg);
    outC->_L23_then_IfBlock1 = kcg_lit_int32(0);
  }
  else {
    outC->else_clock_IfBlock1 = doReset;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L3_then_else_IfBlock1 = kcg_false;
      _7_NTC_transitionPending_partial = outC->_L3_then_else_IfBlock1;
      _3_NTC_transitionPending_partial = _7_NTC_transitionPending_partial;
    }
    else {
      outC->_L12_else_else_IfBlock1 = last_NTC_transitionPending;
      _4_NTC_transitionPending_partial = outC->_L12_else_else_IfBlock1;
      _3_NTC_transitionPending_partial = _4_NTC_transitionPending_partial;
    }
  }
  kcg_copy_P041_OBU_T_TM(&outC->p41, &outC->_L159);
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_P041_OBU_T_TM(&outC->_L28_then_IfBlock1, &outC->p41);
    kcg_copy_P041_OBU_sectionlist_enum_T_TM(
      &outC->_L25_then_IfBlock1,
      &outC->_L28_then_IfBlock1.sections);
    if ((kcg_lit_int32(0) <= outC->_L23_then_IfBlock1) &
      (outC->_L23_then_IfBlock1 < kcg_lit_int32(33))) {
      kcg_copy_P041_section_enum_T_TM(
        &outC->_L6_then_IfBlock1,
        &outC->_L25_then_IfBlock1[outC->_L23_then_IfBlock1]);
    }
    else {
      kcg_copy_P041_section_enum_T_TM(
        &outC->_L6_then_IfBlock1,
        &outC->_L5_then_IfBlock1);
    }
    outC->_L4_then_IfBlock1 = outC->_L6_then_IfBlock1.m_leveltr;
    outC->_L30_then_IfBlock1 = outC->_L4_then_IfBlock1 == outC->_L31_then_IfBlock1;
    NTC_transitionPending_partial = outC->_L30_then_IfBlock1;
    outC->NTC_transitionPending = NTC_transitionPending_partial;
  }
  else {
    outC->NTC_transitionPending = _3_NTC_transitionPending_partial;
  }
  outC->_L223 = outC->NTC_transitionPending;
  outC->_L224 = outC->_L223 | outC->_L218;
  outC->_L200 = last_p15valid;
  /* _L181=(TM::Read_P015#1)/ */
  Read_P015_TM(&outC->_L154, &outC->Context_Read_P015_1);
  outC->_L181 = outC->Context_Read_P015_1.received;
  kcg_copy_P015_OBU_T_TM(&outC->_L182, &outC->Context_Read_P015_1.P015_OBU_out);
  outC->_L201 = outC->_L181 | outC->_L200;
  outC->_L211 = doReset;
  outC->_L209 = !outC->_L211;
  outC->_L210 = outC->_L209 & outC->_L201;
  outC->p15valid = outC->_L210;
  outC->_L219 = outC->p15valid;
  outC->_L202 = last_p21valid;
  /* _L183=(TM::Read_P021#1)/ */
  Read_P021_TM(&outC->_L154, &outC->Context_Read_P021_1);
  outC->_L183 = outC->Context_Read_P021_1.received;
  kcg_copy_P021_OBU_T_TM(&outC->_L184, &outC->Context_Read_P021_1.P021_OBU_out);
  outC->_L203 = outC->_L183 | outC->_L202;
  outC->_L214 = doReset;
  outC->_L212 = !outC->_L214;
  outC->_L213 = outC->_L212 & outC->_L203;
  outC->p21valid = outC->_L213;
  outC->_L220 = outC->p21valid;
  outC->_L205 = last_p27valid;
  /* _L185=(TM_specific::Read_P027V1_Legacy_for_ML#1)/ */
  Read_P027V1_Legacy_for_ML_TM_specific(
    &outC->_L154,
    &outC->Context_Read_P027V1_Legacy_for_ML_1);
  kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg(
    &outC->_L185,
    &outC->Context_Read_P027V1_Legacy_for_ML_1.P027_legacy_out);
  outC->_L191 = outC->_L185.valid;
  outC->_L204 = outC->_L191 | outC->_L205;
  outC->_L215 = doReset;
  outC->_L217 = !outC->_L215;
  outC->_L216 = outC->_L217 & outC->_L204;
  outC->p27valid = outC->_L216;
  outC->_L221 = outC->p27valid;
  outC->_L222.P12_received = outC->_L224;
  outC->_L222.P15_received = outC->_L219;
  outC->_L222.P21_received = outC->_L220;
  outC->_L222.P27_received = outC->_L221;
  kcg_copy_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg(
    &outC->IF_toML,
    &outC->_L222);
  kcg_copy_P021_OBU_T_TM(&_11_noname, &outC->_L184);
  kcg_copy_P015_OBU_T_TM(&_10_noname, &outC->_L182);
  kcg_copy_P012_OBU_T_TM(&noname, &outC->_L178);
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L20_then_IfBlock1 = M_LEVELTR_Level_1;
    outC->_L13_then_IfBlock1 = outC->_L4_then_IfBlock1 == outC->_L20_then_IfBlock1;
    L1_transitionPending_partial = outC->_L13_then_IfBlock1;
    outC->L1_transitionPending = L1_transitionPending_partial;
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      _8_L1_transitionPending_partial = outC->_L3_then_else_IfBlock1;
      _2_L1_transitionPending_partial = _8_L1_transitionPending_partial;
    }
    else {
      outC->_L10_else_else_IfBlock1 = last_L1_transitionPending;
      _5_L1_transitionPending_partial = outC->_L10_else_else_IfBlock1;
      _2_L1_transitionPending_partial = _5_L1_transitionPending_partial;
    }
    outC->L1_transitionPending = _2_L1_transitionPending_partial;
  }
  outC->_L173 = outC->L1_transitionPending;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L19_then_IfBlock1 = M_LEVELTR_Level_3;
    outC->_L7_then_IfBlock1 = outC->_L4_then_IfBlock1 == outC->_L19_then_IfBlock1;
    outC->_L10_then_IfBlock1 = M_LEVELTR_Level_2;
    outC->_L21_then_IfBlock1 = outC->_L10_then_IfBlock1 == outC->_L4_then_IfBlock1;
    outC->_L3_then_IfBlock1 = outC->_L21_then_IfBlock1 | outC->_L7_then_IfBlock1;
    L2L3_transitionPending_partial = outC->_L3_then_IfBlock1;
    outC->L2L3_transitionPending = L2L3_transitionPending_partial;
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      _9_L2L3_transitionPending_partial = outC->_L3_then_else_IfBlock1;
      _1_L2L3_transitionPending_partial = _9_L2L3_transitionPending_partial;
    }
    else {
      outC->_L11_else_else_IfBlock1 = last_L2L3_transitionPending;
      _6_L2L3_transitionPending_partial = outC->_L11_else_else_IfBlock1;
      _1_L2L3_transitionPending_partial = _6_L2L3_transitionPending_partial;
    }
    outC->L2L3_transitionPending = _1_L2L3_transitionPending_partial;
  }
  outC->_L172 = outC->L2L3_transitionPending;
  outC->_L171 = outC->L2L3_transitionPending;
  kcg_copy_filterRelatedEvents_T_Common_Types_Pkg(&outC->_L166, inFilterEvents);
  kcg_copy_filterRelatedEvents_T_Common_Types_Pkg(&outC->_L167, &outC->_L166);
  if (kcg_true) {
    outC->_L167.pendingL12L3Transition = outC->_L171;
  }
  kcg_copy_filterRelatedEvents_T_Common_Types_Pkg(&outC->_L170, &outC->_L167);
  if (kcg_true) {
    outC->_L170.SPPAndGradientOnBoard = outC->_L172;
  }
  kcg_copy_filterRelatedEvents_T_Common_Types_Pkg(&outC->_L168, &outC->_L170);
  if (kcg_true) {
    outC->_L168.pendingL1Transition = outC->_L173;
  }
  kcg_copy_filterRelatedEvents_T_Common_Types_Pkg(
    &outC->outFilterEvents,
    &outC->_L168);
}

#ifndef KCG_USER_DEFINED_INIT
void flagsFromMessages_init_InformationFilter_Pkg(
  outC_flagsFromMessages_InformationFilter_Pkg *outC)
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

  outC->_L253 = kcg_true;
  outC->_L252 = kcg_true;
  outC->_L251 = kcg_true;
  outC->_L250 = kcg_true;
  outC->_L249 = kcg_lit_int32(0);
  outC->_L248 = kcg_lit_int32(0);
  outC->_L247.radioDevice = kcg_lit_int32(0);
  outC->_L247.receivedSystemTime = kcg_lit_int32(0);
  outC->_L247.nid_message = kcg_lit_int32(0);
  outC->_L247.t_train = kcg_lit_int32(0);
  outC->_L247.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L247.nid_lrbg = kcg_lit_int32(0);
  outC->_L247.t_train_reference = kcg_lit_int32(0);
  outC->_L247.nid_em = kcg_lit_int32(0);
  outC->_L247.q_scale = Q_SCALE_10_cm_scale;
  outC->_L247.d_sr = kcg_lit_int32(0);
  outC->_L247.t_sh_rqst = kcg_lit_int32(0);
  outC->_L247.d_ref = kcg_lit_int32(0);
  outC->_L247.q_dir = Q_DIR_Reverse;
  outC->_L247.d_emergencystop = kcg_lit_int32(0);
  outC->_L247.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L246 = msrc_undefined_Common_Types_Pkg;
  outC->_L245 = kcg_true;
  outC->_L244 = msrc_undefined_Common_Types_Pkg;
  outC->_L243 = msrc_undefined_Common_Types_Pkg;
  outC->_L242 = kcg_true;
  outC->_L241 = msrc_undefined_Common_Types_Pkg;
  outC->_L224 = kcg_true;
  outC->_L223 = kcg_true;
  outC->_L222.P12_received = kcg_true;
  outC->_L222.P15_received = kcg_true;
  outC->_L222.P21_received = kcg_true;
  outC->_L222.P27_received = kcg_true;
  outC->_L221 = kcg_true;
  outC->_L220 = kcg_true;
  outC->_L219 = kcg_true;
  outC->_L218 = kcg_true;
  outC->_L215 = kcg_true;
  outC->_L216 = kcg_true;
  outC->_L217 = kcg_true;
  outC->_L212 = kcg_true;
  outC->_L213 = kcg_true;
  outC->_L214 = kcg_true;
  outC->_L209 = kcg_true;
  outC->_L210 = kcg_true;
  outC->_L211 = kcg_true;
  outC->_L208 = kcg_true;
  outC->_L207 = kcg_true;
  outC->_L206 = kcg_true;
  outC->_L204 = kcg_true;
  outC->_L205 = kcg_true;
  outC->_L202 = kcg_true;
  outC->_L203 = kcg_true;
  outC->_L200 = kcg_true;
  outC->_L201 = kcg_true;
  outC->_L193 = kcg_true;
  outC->_L192 = kcg_true;
  outC->_L191 = kcg_true;
  outC->_L185.valid = kcg_true;
  outC->_L185.q_dir = Q_DIR_Reverse;
  outC->_L185.q_scale = Q_SCALE_10_cm_scale;
  outC->_L185.d_static = kcg_lit_int32(0);
  outC->_L185.v_static = kcg_lit_int32(0);
  outC->_L185.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (idx = 0; idx < 7; idx++) {
    outC->_L185.diffArray[idx].valid = kcg_true;
    outC->_L185.diffArray[idx].q_diff = Q_DIFF_Cant_Deficiency_specific_category;
    outC->_L185.diffArray[idx].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->_L185.diffArray[idx].nc_diff = kcg_lit_int32(0);
    outC->_L185.diffArray[idx].v_diff = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 7; idx2++) {
    outC->_L185.SSPArray[idx2].valid = kcg_true;
    outC->_L185.SSPArray[idx2].d_static = kcg_lit_int32(0);
    outC->_L185.SSPArray[idx2].v_static = kcg_lit_int32(0);
    outC->_L185.SSPArray[idx2].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (idx1 = 0; idx1 < 7; idx1++) {
      outC->_L185.SSPArray[idx2].diffArray[idx1].valid = kcg_true;
      outC->_L185.SSPArray[idx2].diffArray[idx1].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->_L185.SSPArray[idx2].diffArray[idx1].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->_L185.SSPArray[idx2].diffArray[idx1].nc_diff = kcg_lit_int32(0);
      outC->_L185.SSPArray[idx2].diffArray[idx1].v_diff = kcg_lit_int32(0);
    }
  }
  outC->_L184.valid = kcg_true;
  outC->_L184.q_dir = Q_DIR_Reverse;
  outC->_L184.q_scale = Q_SCALE_10_cm_scale;
  outC->_L184.n_iter = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L184.sections[idx3].valid = kcg_true;
    outC->_L184.sections[idx3].d_gradient = kcg_lit_int32(0);
    outC->_L184.sections[idx3].q_gdir = Q_GDIR_downhill;
    outC->_L184.sections[idx3].g_a = kcg_lit_int32(0);
  }
  outC->_L183 = kcg_true;
  outC->_L182.valid = kcg_true;
  outC->_L182.q_dir = Q_DIR_Reverse;
  outC->_L182.q_scale = Q_SCALE_10_cm_scale;
  outC->_L182.v_loa = kcg_lit_int32(0);
  outC->_L182.t_loa = kcg_lit_int32(0);
  outC->_L182.n_iter = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 32; idx4++) {
    outC->_L182.sections[idx4].valid = kcg_true;
    outC->_L182.sections[idx4].l_section = kcg_lit_int32(0);
    outC->_L182.sections[idx4].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L182.sections[idx4].t_sectiontimer = kcg_lit_int32(0);
    outC->_L182.sections[idx4].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L182.l_endsection = kcg_lit_int32(0);
  outC->_L182.q_sectiontimer = Q_SECTIONTIMER_No_Section_Timer_information;
  outC->_L182.t_sectiontimer = kcg_lit_int32(0);
  outC->_L182.d_sectiontimerstoploc = kcg_lit_int32(0);
  outC->_L182.q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
  outC->_L182.t_endtimer = kcg_lit_int32(0);
  outC->_L182.d_endtimerstartloc = kcg_lit_int32(0);
  outC->_L182.q_dangerpoint = Q_DANGERPOINT_No_danger_point_information;
  outC->_L182.d_dp = kcg_lit_int32(0);
  outC->_L182.v_releasedp = kcg_lit_int32(0);
  outC->_L182.q_overlap = Q_OVERLAP_No_overlap_information;
  outC->_L182.d_startol = kcg_lit_int32(0);
  outC->_L182.t_ol = kcg_lit_int32(0);
  outC->_L182.d_ol = kcg_lit_int32(0);
  outC->_L182.v_releaseol = kcg_lit_int32(0);
  outC->_L181 = kcg_true;
  outC->_L178.valid = kcg_true;
  outC->_L178.q_dir = Q_DIR_Reverse;
  outC->_L178.q_scale = Q_SCALE_10_cm_scale;
  outC->_L178.v_main = kcg_lit_int32(0);
  outC->_L178.v_loa = kcg_lit_int32(0);
  outC->_L178.t_loa = kcg_lit_int32(0);
  outC->_L178.n_iter = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 32; idx5++) {
    outC->_L178.sections[idx5].valid = kcg_true;
    outC->_L178.sections[idx5].l_section = kcg_lit_int32(0);
    outC->_L178.sections[idx5].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L178.sections[idx5].t_sectiontimer = kcg_lit_int32(0);
    outC->_L178.sections[idx5].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L178.l_endsection = kcg_lit_int32(0);
  outC->_L178.q_sectiontimer = Q_SECTIONTIMER_No_Section_Timer_information;
  outC->_L178.t_sectiontimer = kcg_lit_int32(0);
  outC->_L178.d_sectiontimerstoploc = kcg_lit_int32(0);
  outC->_L178.q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
  outC->_L178.t_endtimer = kcg_lit_int32(0);
  outC->_L178.d_endtimerstartloc = kcg_lit_int32(0);
  outC->_L178.q_dangerpoint = Q_DANGERPOINT_No_danger_point_information;
  outC->_L178.d_dp = kcg_lit_int32(0);
  outC->_L178.v_releasedp = kcg_lit_int32(0);
  outC->_L178.q_overlap = Q_OVERLAP_No_overlap_information;
  outC->_L178.d_startol = kcg_lit_int32(0);
  outC->_L178.t_ol = kcg_lit_int32(0);
  outC->_L178.d_ol = kcg_lit_int32(0);
  outC->_L178.v_releaseol = kcg_lit_int32(0);
  outC->_L177 = kcg_true;
  outC->_L173 = kcg_true;
  outC->_L172 = kcg_true;
  outC->_L171 = kcg_true;
  outC->_L166.pendingL1Transition = kcg_true;
  outC->_L166.pendingL12L3Transition = kcg_true;
  outC->_L166.pendingAckOfTrainDataFromRBC = kcg_true;
  outC->_L166.emergencyStopAccepted = kcg_true;
  outC->_L166.lastAckTextMessageId = kcg_lit_int32(0);
  outC->_L166.pendingNTCTransition = kcg_true;
  outC->_L166.SPPAndGradientOnBoard = kcg_true;
  outC->_L166.MACoverNotFullLength = kcg_true;
  outC->_L167.pendingL1Transition = kcg_true;
  outC->_L167.pendingL12L3Transition = kcg_true;
  outC->_L167.pendingAckOfTrainDataFromRBC = kcg_true;
  outC->_L167.emergencyStopAccepted = kcg_true;
  outC->_L167.lastAckTextMessageId = kcg_lit_int32(0);
  outC->_L167.pendingNTCTransition = kcg_true;
  outC->_L167.SPPAndGradientOnBoard = kcg_true;
  outC->_L167.MACoverNotFullLength = kcg_true;
  outC->_L168.pendingL1Transition = kcg_true;
  outC->_L168.pendingL12L3Transition = kcg_true;
  outC->_L168.pendingAckOfTrainDataFromRBC = kcg_true;
  outC->_L168.emergencyStopAccepted = kcg_true;
  outC->_L168.lastAckTextMessageId = kcg_lit_int32(0);
  outC->_L168.pendingNTCTransition = kcg_true;
  outC->_L168.SPPAndGradientOnBoard = kcg_true;
  outC->_L168.MACoverNotFullLength = kcg_true;
  outC->_L170.pendingL1Transition = kcg_true;
  outC->_L170.pendingL12L3Transition = kcg_true;
  outC->_L170.pendingAckOfTrainDataFromRBC = kcg_true;
  outC->_L170.emergencyStopAccepted = kcg_true;
  outC->_L170.lastAckTextMessageId = kcg_lit_int32(0);
  outC->_L170.pendingNTCTransition = kcg_true;
  outC->_L170.SPPAndGradientOnBoard = kcg_true;
  outC->_L170.MACoverNotFullLength = kcg_true;
  outC->_L158 = kcg_true;
  outC->_L159.valid = kcg_true;
  outC->_L159.q_dir = Q_DIR_Reverse;
  outC->_L159.q_scale = Q_SCALE_10_cm_scale;
  outC->_L159.d_leveltr = kcg_lit_int32(0);
  outC->_L159.n_iter = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 33; idx6++) {
    outC->_L159.sections[idx6].valid = kcg_true;
    outC->_L159.sections[idx6].m_leveltr = M_LEVELTR_Level_0;
    outC->_L159.sections[idx6].nid_ntc = kcg_lit_int32(0);
    outC->_L159.sections[idx6].l_ackleveltr = kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 30; idx7++) {
    outC->_L154.PacketHeaders[idx7].nid_packet = kcg_lit_int32(0);
    outC->_L154.PacketHeaders[idx7].q_dir = Q_DIR_Reverse;
    outC->_L154.PacketHeaders[idx7].valid = kcg_true;
    outC->_L154.PacketHeaders[idx7].startAddress = kcg_lit_int32(0);
    outC->_L154.PacketHeaders[idx7].endAddress = kcg_lit_int32(0);
  }
  for (idx8 = 0; idx8 < 500; idx8++) {
    outC->_L154.PacketData[idx8] = kcg_lit_int32(0);
  }
  outC->_L155.valid = kcg_true;
  outC->_L155.source = msrc_undefined_Common_Types_Pkg;
  outC->_L155.radioMetadata.t_train_reference = kcg_true;
  outC->_L155.radioMetadata.nid_em = kcg_true;
  outC->_L155.radioMetadata.q_scale = kcg_true;
  outC->_L155.radioMetadata.d_sr = kcg_true;
  outC->_L155.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L155.radioMetadata.d_ref = kcg_true;
  outC->_L155.radioMetadata.q_dir = kcg_true;
  outC->_L155.radioMetadata.d_emergencystop = kcg_true;
  outC->_L155.radioMetadata.m_version = kcg_true;
  outC->_L155.BG_Common_Header.valid = kcg_true;
  outC->_L155.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L155.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L155.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L155.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L155.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L155.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L155.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L155.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L155.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L155.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L155.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L155.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L155.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L155.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L155.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L155.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L155.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L155.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L155.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L155.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L155.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L155.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L155.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L155.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L155.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L155.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L155.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L155.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L155.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L155.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L155.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L155.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L155.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L155.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L155.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L155.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L155.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L155.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L155.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L155.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L155.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L155.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx9 = 0; idx9 < 30; idx9++) {
    outC->_L155.packets.PacketHeaders[idx9].nid_packet = kcg_lit_int32(0);
    outC->_L155.packets.PacketHeaders[idx9].q_dir = Q_DIR_Reverse;
    outC->_L155.packets.PacketHeaders[idx9].valid = kcg_true;
    outC->_L155.packets.PacketHeaders[idx9].startAddress = kcg_lit_int32(0);
    outC->_L155.packets.PacketHeaders[idx9].endAddress = kcg_lit_int32(0);
  }
  for (idx10 = 0; idx10 < 500; idx10++) {
    outC->_L155.packets.PacketData[idx10] = kcg_lit_int32(0);
  }
  outC->_L155.sendingRBC.valid = kcg_true;
  outC->_L155.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L155.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L155.sendingRBC.device_id = kcg_lit_int32(0);
  outC->isMsg3 = kcg_true;
  outC->isBalise = kcg_true;
  outC->p41.valid = kcg_true;
  outC->p41.q_dir = Q_DIR_Reverse;
  outC->p41.q_scale = Q_SCALE_10_cm_scale;
  outC->p41.d_leveltr = kcg_lit_int32(0);
  outC->p41.n_iter = kcg_lit_int32(0);
  for (idx11 = 0; idx11 < 33; idx11++) {
    outC->p41.sections[idx11].valid = kcg_true;
    outC->p41.sections[idx11].m_leveltr = M_LEVELTR_Level_0;
    outC->p41.sections[idx11].nid_ntc = kcg_lit_int32(0);
    outC->p41.sections[idx11].l_ackleveltr = kcg_lit_int32(0);
  }
  outC->p41valid = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L3_then_else_IfBlock1 = kcg_true;
  outC->_L12_else_else_IfBlock1 = kcg_true;
  outC->_L11_else_else_IfBlock1 = kcg_true;
  outC->_L10_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  for (idx12 = 0; idx12 < 33; idx12++) {
    outC->_L25_then_IfBlock1[idx12].valid = kcg_true;
    outC->_L25_then_IfBlock1[idx12].m_leveltr = M_LEVELTR_Level_0;
    outC->_L25_then_IfBlock1[idx12].nid_ntc = kcg_lit_int32(0);
    outC->_L25_then_IfBlock1[idx12].l_ackleveltr = kcg_lit_int32(0);
  }
  outC->_L23_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L21_then_IfBlock1 = kcg_true;
  outC->_L20_then_IfBlock1 = M_LEVELTR_Level_0;
  outC->_L19_then_IfBlock1 = M_LEVELTR_Level_0;
  outC->_L13_then_IfBlock1 = kcg_true;
  outC->_L10_then_IfBlock1 = M_LEVELTR_Level_0;
  outC->_L7_then_IfBlock1 = kcg_true;
  outC->_L6_then_IfBlock1.valid = kcg_true;
  outC->_L6_then_IfBlock1.m_leveltr = M_LEVELTR_Level_0;
  outC->_L6_then_IfBlock1.nid_ntc = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1.l_ackleveltr = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.valid = kcg_true;
  outC->_L5_then_IfBlock1.m_leveltr = M_LEVELTR_Level_0;
  outC->_L5_then_IfBlock1.nid_ntc = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.l_ackleveltr = kcg_lit_int32(0);
  outC->_L4_then_IfBlock1 = M_LEVELTR_Level_0;
  outC->_L3_then_IfBlock1 = kcg_true;
  outC->_L28_then_IfBlock1.valid = kcg_true;
  outC->_L28_then_IfBlock1.q_dir = Q_DIR_Reverse;
  outC->_L28_then_IfBlock1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L28_then_IfBlock1.d_leveltr = kcg_lit_int32(0);
  outC->_L28_then_IfBlock1.n_iter = kcg_lit_int32(0);
  for (idx13 = 0; idx13 < 33; idx13++) {
    outC->_L28_then_IfBlock1.sections[idx13].valid = kcg_true;
    outC->_L28_then_IfBlock1.sections[idx13].m_leveltr = M_LEVELTR_Level_0;
    outC->_L28_then_IfBlock1.sections[idx13].nid_ntc = kcg_lit_int32(0);
    outC->_L28_then_IfBlock1.sections[idx13].l_ackleveltr = kcg_lit_int32(0);
  }
  outC->_L31_then_IfBlock1 = M_LEVELTR_Level_0;
  outC->_L30_then_IfBlock1 = kcg_true;
  outC->IF_toML.P12_received = kcg_true;
  outC->IF_toML.P15_received = kcg_true;
  outC->IF_toML.P21_received = kcg_true;
  outC->IF_toML.P27_received = kcg_true;
  outC->outFilterEvents.pendingL1Transition = kcg_true;
  outC->outFilterEvents.pendingL12L3Transition = kcg_true;
  outC->outFilterEvents.pendingAckOfTrainDataFromRBC = kcg_true;
  outC->outFilterEvents.emergencyStopAccepted = kcg_true;
  outC->outFilterEvents.lastAckTextMessageId = kcg_lit_int32(0);
  outC->outFilterEvents.pendingNTCTransition = kcg_true;
  outC->outFilterEvents.SPPAndGradientOnBoard = kcg_true;
  outC->outFilterEvents.MACoverNotFullLength = kcg_true;
  /* _L185=(TM_specific::Read_P027V1_Legacy_for_ML#1)/ */
  Read_P027V1_Legacy_for_ML_init_TM_specific(
    &outC->Context_Read_P027V1_Legacy_for_ML_1);
  /* _L183=(TM::Read_P021#1)/ */ Read_P021_init_TM(&outC->Context_Read_P021_1);
  /* _L181=(TM::Read_P015#1)/ */ Read_P015_init_TM(&outC->Context_Read_P015_1);
  /* _L158=(TM::Read_P041#1)/ */ Read_P041_init_TM(&outC->Context_Read_P041_1);
  /* _L177=(TM::Read_P012#1)/ */ Read_P012_init_TM(&outC->Context_Read_P012_1);
  outC->L2L3_transitionPending = kcg_false;
  outC->L1_transitionPending = kcg_false;
  outC->p12valid = kcg_false;
  outC->p15valid = kcg_false;
  outC->p21valid = kcg_false;
  outC->p27valid = kcg_false;
  outC->NTC_transitionPending = kcg_false;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void flagsFromMessages_reset_InformationFilter_Pkg(
  outC_flagsFromMessages_InformationFilter_Pkg *outC)
{
  /* _L185=(TM_specific::Read_P027V1_Legacy_for_ML#1)/ */
  Read_P027V1_Legacy_for_ML_reset_TM_specific(
    &outC->Context_Read_P027V1_Legacy_for_ML_1);
  /* _L183=(TM::Read_P021#1)/ */ Read_P021_reset_TM(&outC->Context_Read_P021_1);
  /* _L181=(TM::Read_P015#1)/ */ Read_P015_reset_TM(&outC->Context_Read_P015_1);
  /* _L158=(TM::Read_P041#1)/ */ Read_P041_reset_TM(&outC->Context_Read_P041_1);
  /* _L177=(TM::Read_P012#1)/ */ Read_P012_reset_TM(&outC->Context_Read_P012_1);
  outC->L2L3_transitionPending = kcg_false;
  outC->L1_transitionPending = kcg_false;
  outC->p12valid = kcg_false;
  outC->p15valid = kcg_false;
  outC->p21valid = kcg_false;
  outC->p27valid = kcg_false;
  outC->NTC_transitionPending = kcg_false;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_flagsFromMessages_InformationFilter_Pkg(
  SV_flagsFromMessages_InformationFilter_Pkg *SV,
  outC_flagsFromMessages_InformationFilter_Pkg *outC)
{
  SV->Context_NTC_transitionPending = outC->NTC_transitionPending;
  SV->Context_p27valid = outC->p27valid;
  SV->Context_p21valid = outC->p21valid;
  SV->Context_p15valid = outC->p15valid;
  SV->Context_p12valid = outC->p12valid;
  SV->Context_L1_transitionPending = outC->L1_transitionPending;
  SV->Context_L2L3_transitionPending = outC->L2L3_transitionPending;
}

void kcg_load_SV_flagsFromMessages_InformationFilter_Pkg(
  outC_flagsFromMessages_InformationFilter_Pkg *outC,
  SV_flagsFromMessages_InformationFilter_Pkg *SV)
{
  outC->NTC_transitionPending = SV->Context_NTC_transitionPending;
  outC->p27valid = SV->Context_p27valid;
  outC->p21valid = SV->Context_p21valid;
  outC->p15valid = SV->Context_p15valid;
  outC->p12valid = SV->Context_p12valid;
  outC->L1_transitionPending = SV->Context_L1_transitionPending;
  outC->L2L3_transitionPending = SV->Context_L2L3_transitionPending;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** flagsFromMessages_InformationFilter_Pkg.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

