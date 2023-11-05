/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ExitLevel2or3_OutputToRBC.h"

/* OutputToRBC::ExitLevel2or3/ */
void ExitLevel2or3_OutputToRBC(
  /* new_level/ */
  M_LEVEL new_level,
  /* last_level/ */
  M_LEVEL last_level,
  /* selected_level_transition/ */
  T_LevelTransition_Level_And_Mode_Types_Pkg *selected_level_transition,
  /* trainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  outC_ExitLevel2or3_OutputToRBC *outC)
{
  /* PositionReportNeeded/ */
  static kcg_bool PositionReportNeeded_partial;
  /* Loc_Position/ */
  static M_POSITION Loc_Position_partial;
  /* SM1: */
  static _120_SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  static _121_SSM_TR_SM1 SM1_fired_partial;
  /* SM1:BeforeChange:<1> */
  static kcg_bool tr_1_guard_BeforeChange_SM1;
  /* PositionReportNeeded/ */
  static kcg_bool _1_PositionReportNeeded_partial;
  /* Loc_Position/ */
  static M_POSITION _2_Loc_Position_partial;
  /* SM1: */
  static _120_SSM_ST_SM1 _3_SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool _4_SM1_reset_nxt_partial;
  /* SM1: */
  static _121_SSM_TR_SM1 _5_SM1_fired_partial;
  /* SM1:State2:<1> */
  static kcg_bool tr_1_guard_State2_SM1;
  /* PositionReportNeeded/ */
  static kcg_bool _6_PositionReportNeeded_partial;
  /* PositionReportNeeded/ */
  static kcg_bool _7_PositionReportNeeded_partial;
  /* Loc_Position/ */
  static M_POSITION last_Loc_Position;
  /* SM1: */
  static kcg_bool SM1_reset_sel;
  /* SM1: */
  static kcg_bool SM1_reset_prv;

  last_Loc_Position = outC->Loc_Position;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L26, trainPosition);
  outC->_L15 = outC->_L26.minSafeRearEndPosition;
  outC->Loc_MinSafeRearEnd = outC->_L15;
  outC->SM1_state_sel = outC->SM1_state_nxt;
  outC->SM1_state_act = outC->SM1_state_sel;
  switch (outC->SM1_state_act) {
    case _132_SSM_st_State2_SM1 :
      outC->_L1_State2_SM1 = last_Loc_Position;
      _2_Loc_Position_partial = outC->_L1_State2_SM1;
      tr_1_guard_State2_SM1 = _2_Loc_Position_partial <= outC->Loc_MinSafeRearEnd;
      outC->tr_1_clock_State2_SM1 = tr_1_guard_State2_SM1;
      /* SM1:State2:<1> */
      if (outC->tr_1_clock_State2_SM1) {
        _7_PositionReportNeeded_partial = kcg_true;
        _1_PositionReportNeeded_partial = _7_PositionReportNeeded_partial;
      }
      else {
        _6_PositionReportNeeded_partial = kcg_false;
        _1_PositionReportNeeded_partial = _6_PositionReportNeeded_partial;
      }
      if (tr_1_guard_State2_SM1) {
        _5_SM1_fired_partial = SSM_TR_State2_BeforeChange_1_State2_SM1;
      }
      else {
        _5_SM1_fired_partial = _131_SSM_TR_no_trans_SM1;
      }
      _4_SM1_reset_nxt_partial = tr_1_guard_State2_SM1;
      if (tr_1_guard_State2_SM1) {
        _3_SM1_state_nxt_partial = SSM_st_BeforeChange_SM1;
      }
      else {
        _3_SM1_state_nxt_partial = _132_SSM_st_State2_SM1;
      }
      break;
    case SSM_st_BeforeChange_SM1 :
      PositionReportNeeded_partial = kcg_false;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L11 = new_level == M_LEVEL_Level_NTC_specified_by_NID_NTC;
  outC->_L3 = new_level == M_LEVEL_Level_1;
  outC->_L4 = new_level == M_LEVEL_Level_0;
  outC->_L9 = outC->_L4 | outC->_L3 | outC->_L11;
  outC->_L10 = last_level == M_LEVEL_Level_3;
  outC->_L5 = last_level == M_LEVEL_Level_2;
  outC->_L2 = outC->_L5 | outC->_L10;
  outC->_L6 = new_level;
  outC->_L7 = last_level;
  outC->_L1 = outC->_L7 != outC->_L6;
  outC->_L8 = outC->_L1 & outC->_L2 & outC->_L9;
  outC->Loc_PositionReportToPlan = outC->_L8;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case _132_SSM_st_State2_SM1 :
      outC->PositionReportNeeded = _1_PositionReportNeeded_partial;
      outC->Loc_Position = _2_Loc_Position_partial;
      outC->SM1_state_nxt = _3_SM1_state_nxt_partial;
      break;
    case SSM_st_BeforeChange_SM1 :
      tr_1_guard_BeforeChange_SM1 = outC->Loc_PositionReportToPlan;
      if (tr_1_guard_BeforeChange_SM1) {
        SM1_fired_partial = SSM_TR_BeforeChange_State2_1_BeforeChange_SM1;
      }
      else {
        SM1_fired_partial = _131_SSM_TR_no_trans_SM1;
      }
      SM1_reset_nxt_partial = tr_1_guard_BeforeChange_SM1;
      if (tr_1_guard_BeforeChange_SM1) {
        SM1_state_nxt_partial = _132_SSM_st_State2_SM1;
      }
      else {
        SM1_state_nxt_partial = SSM_st_BeforeChange_SM1;
      }
      kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
        &outC->_L1_BeforeChange_SM1,
        selected_level_transition);
      kcg_copy_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg(
        &outC->_L2_BeforeChange_SM1,
        &outC->_L1_BeforeChange_SM1.transition);
      outC->_L3_BeforeChange_SM1 = outC->_L2_BeforeChange_SM1.position;
      Loc_Position_partial = outC->_L3_BeforeChange_SM1;
      outC->PositionReportNeeded = PositionReportNeeded_partial;
      outC->Loc_Position = Loc_Position_partial;
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case _132_SSM_st_State2_SM1 :
      outC->SM1_reset_nxt = _4_SM1_reset_nxt_partial;
      outC->SM1_fired = _5_SM1_fired_partial;
      break;
    case SSM_st_BeforeChange_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->SM1_fired_strong = _131_SSM_TR_no_trans_SM1;
  SM1_reset_prv = outC->SM1_reset_act;
  outC->SM1_reset_act = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void ExitLevel2or3_init_OutputToRBC(outC_ExitLevel2or3_OutputToRBC *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L26.valid = kcg_true;
  outC->_L26.timestamp = kcg_lit_int32(0);
  outC->_L26.trainPositionIsUnknown = kcg_true;
  outC->_L26.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L26.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L26.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L26.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L26.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L26.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L26.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L26.LRBG.valid = kcg_true;
  outC->_L26.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L26.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L26.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L26.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L26.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L26.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L26.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L26.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L26.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L26.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L26.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L26.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L26.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L26.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L26.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L26.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L26.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L26.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L26.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L26.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L26.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L26.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L26.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L26.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L26.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L26.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L26.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L26.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L26.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L26.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L26.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L26.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L26.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L26.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L26.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L26.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L26.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L26.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L26.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L26.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L26.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L26.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L26.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L26.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L26.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L26.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L26.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L26.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L26.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L26.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L26.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L26.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L26.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L26.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L26.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L26.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L26.LRBG.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L26.LRBG.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int32(0);
    outC->_L26.LRBG.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L26.LRBG.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L26.LRBG.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int32(0);
    outC->_L26.LRBG.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L26.LRBG.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int32(0);
    outC->_L26.LRBG.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int32(0);
    outC->_L26.LRBG.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L26.LRBG.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L26.LRBG.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int32(0);
  }
  outC->_L26.LRBG.missed = kcg_true;
  outC->_L26.prvLRBG.valid = kcg_true;
  outC->_L26.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L26.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L26.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L26.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L26.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L26.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L26.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L26.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L26.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L26.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L26.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L26.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L26.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L26.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L26.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L26.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L26.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L26.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L26.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L26.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L26.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L26.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L26.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L26.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L26.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L26.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L26.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L26.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L26.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L26.prvLRBG.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L26.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int32(0);
    outC->_L26.prvLRBG.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L26.prvLRBG.infoFromPassing.linkedBGs[idx1].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L26.prvLRBG.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int32(0);
    outC->_L26.prvLRBG.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L26.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int32(0);
    outC->_L26.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int32(0);
    outC->_L26.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L26.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L26.prvLRBG.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int32(0);
  }
  outC->_L26.prvLRBG.missed = kcg_true;
  outC->_L26.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L26.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L26.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L26.linkingIsUsedOnboard = kcg_true;
  outC->_L26.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L26.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L26.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L15 = kcg_lit_int32(0);
  outC->_L1 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L6 = M_LEVEL_Level_0;
  outC->_L7 = M_LEVEL_Level_0;
  outC->_L8 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L11 = kcg_true;
  outC->Loc_MinSafeRearEnd = kcg_lit_int32(0);
  outC->Loc_PositionReportToPlan = kcg_true;
  outC->SM1_fired = _131_SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = _131_SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_BeforeChange_SM1;
  outC->SM1_state_sel = SSM_st_BeforeChange_SM1;
  outC->tr_1_clock_State2_SM1 = kcg_true;
  outC->_L1_State2_SM1 = kcg_lit_int32(0);
  outC->_L1_BeforeChange_SM1.is_set = kcg_true;
  outC->_L1_BeforeChange_SM1.transition.level = M_LEVEL_Level_0;
  outC->_L1_BeforeChange_SM1.transition.position = kcg_lit_int32(0);
  outC->_L1_BeforeChange_SM1.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L1_BeforeChange_SM1.transition.immediateAck = kcg_true;
  outC->_L1_BeforeChange_SM1.transition.AckLength = kcg_lit_int32(0);
  outC->_L1_BeforeChange_SM1.LRBG = kcg_lit_int32(0);
  outC->_L1_BeforeChange_SM1.referenceLocation = kcg_lit_int32(0);
  outC->_L2_BeforeChange_SM1.level = M_LEVEL_Level_0;
  outC->_L2_BeforeChange_SM1.position = kcg_lit_int32(0);
  outC->_L2_BeforeChange_SM1.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L2_BeforeChange_SM1.immediateAck = kcg_true;
  outC->_L2_BeforeChange_SM1.AckLength = kcg_lit_int32(0);
  outC->_L3_BeforeChange_SM1 = kcg_lit_int32(0);
  outC->PositionReportNeeded = kcg_true;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = SSM_st_BeforeChange_SM1;
  outC->Loc_Position = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ExitLevel2or3_reset_OutputToRBC(outC_ExitLevel2or3_OutputToRBC *outC)
{
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = SSM_st_BeforeChange_SM1;
  outC->Loc_Position = kcg_lit_int32(0);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ExitLevel2or3_OutputToRBC.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

