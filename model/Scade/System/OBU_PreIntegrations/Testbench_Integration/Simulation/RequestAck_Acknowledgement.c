/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RequestAck_Acknowledgement.h"

/* Acknowledgement::RequestAck/ */
void RequestAck_Acknowledgement(
  /* isAckNeeded/ */
  kcg_bool isAckNeeded,
  /* selected_level_transition/ */
  T_LevelTransition_Level_And_Mode_Types_Pkg *selected_level_transition,
  /* trainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* levelAck/ */
  kcg_bool levelAck,
  /* IsNewLevel/ */
  kcg_bool IsNewLevel,
  outC_RequestAck_Acknowledgement *outC)
{
  /* needsAckFromDriver/ */
  static kcg_bool needsAckFromDriver_partial;
  /* service_brake/ */
  static kcg_bool service_brake_partial;
  /* SM1: */
  static _134_SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  static _135_SSM_TR_SM1 SM1_fired_partial;
  /* needsAckFromDriver/ */
  static kcg_bool _1_needsAckFromDriver_partial;
  /* service_brake/ */
  static kcg_bool _2_service_brake_partial;
  /* SM1: */
  static _134_SSM_ST_SM1 _3_SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool _4_SM1_reset_nxt_partial;
  /* SM1: */
  static _135_SSM_TR_SM1 _5_SM1_fired_partial;
  /* needsAckFromDriver/ */
  static kcg_bool _6_needsAckFromDriver_partial;
  /* service_brake/ */
  static kcg_bool _7_service_brake_partial;
  /* SM1: */
  static _134_SSM_ST_SM1 _8_SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool _9_SM1_reset_nxt_partial;
  /* SM1: */
  static _135_SSM_TR_SM1 _10_SM1_fired_partial;
  /* SM1: */
  static _134_SSM_ST_SM1 SM1_state_act_partial;
  /* SM1: */
  static kcg_bool SM1_reset_act_partial;
  /* SM1: */
  static _135_SSM_TR_SM1 SM1_fired_strong_partial;
  /* SM1:Waiting:<1> */
  static kcg_bool tr_1_guard_Waiting_SM1;
  /* SM1: */
  static _134_SSM_ST_SM1 _11_SM1_state_act_partial;
  /* SM1: */
  static kcg_bool _12_SM1_reset_act_partial;
  /* SM1: */
  static _135_SSM_TR_SM1 _13_SM1_fired_strong_partial;
  /* SM1:LaunchRequest:<2> */
  static kcg_bool tr_2_guard_LaunchRequest_SM1;
  /* SM1:LaunchRequest:<1> */
  static kcg_bool tr_1_guard_LaunchRequest_SM1;
  /* SM1: */
  static _134_SSM_ST_SM1 _14_SM1_state_act_partial;
  /* SM1: */
  static kcg_bool _15_SM1_reset_act_partial;
  /* SM1: */
  static _135_SSM_TR_SM1 _16_SM1_fired_strong_partial;
  /* SM1:AckReceived:<1> */
  static kcg_bool tr_1_guard_AckReceived_SM1;
  static M_LEVEL noname;
  static T_TransitionType_Level_And_Mode_Types_Pkg _17_noname;
  static NID_LRBG _18_noname;
  static L_internal_Type_Obu_BasicTypes_Pkg _19_noname;
  /* SM1: */
  static kcg_bool SM1_reset_sel;
  /* SM1: */
  static kcg_bool SM1_reset_prv;

  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->_L16,
    selected_level_transition);
  outC->_L26 = outC->_L16.referenceLocation;
  _19_noname = outC->_L26;
  outC->_L27 = outC->_L16.LRBG;
  _18_noname = outC->_L27;
  outC->_L29 = outC->_L16.is_set;
  outC->Loc_isSet = outC->_L29;
  kcg_copy_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg(
    &outC->_L28,
    &outC->_L16.transition);
  outC->_L21 = outC->_L28.AckLength;
  outC->Loc_AckLength = outC->_L21;
  outC->_L25 = outC->Loc_AckLength;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L14, trainPosition);
  outC->_L13 = outC->_L14.maxSafeFrontEndPostion;
  outC->Loc_MaxSafeFrontEnd = outC->_L13;
  outC->_L24 = outC->Loc_MaxSafeFrontEnd;
  outC->_L18 = outC->_L28.position;
  outC->Loc_Position = outC->_L18;
  outC->_L23 = outC->Loc_Position;
  /* _L22=(Acknowledgement::Position_In_Ack_Area#1)/ */
  Position_In_Ack_Area_Acknowledgement(
    outC->_L24,
    outC->_L23,
    outC->_L25,
    &outC->Context_Position_In_Ack_Area_1);
  outC->_L22 = outC->Context_Position_In_Ack_Area_1.Position_In_Ack_Area;
  outC->Loc_PositionInAckArea = outC->_L22;
  outC->_L20 = outC->_L28.immediateAck;
  outC->Loc_Immediate = outC->_L20;
  outC->_L19 = outC->_L28.transitionType;
  _17_noname = outC->_L19;
  outC->_L17 = outC->_L28.level;
  noname = outC->_L17;
  outC->SM1_state_sel = outC->SM1_state_nxt;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_AckReceived_SM1 :
      tr_1_guard_AckReceived_SM1 = (!outC->Loc_PositionInAckArea) | (!isAckNeeded);
      if (tr_1_guard_AckReceived_SM1) {
        _14_SM1_state_act_partial = SSM_st_Waiting_SM1;
      }
      else {
        _14_SM1_state_act_partial = SSM_st_AckReceived_SM1;
      }
      outC->SM1_state_act = _14_SM1_state_act_partial;
      if (tr_1_guard_AckReceived_SM1) {
        _16_SM1_fired_strong_partial = SSM_TR_AckReceived_Waiting_1_AckReceived_SM1;
      }
      else {
        _16_SM1_fired_strong_partial = _149_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _16_SM1_fired_strong_partial;
      break;
    case SSM_st_LaunchRequest_SM1 :
      tr_2_guard_LaunchRequest_SM1 = levelAck & outC->Loc_PositionInAckArea;
      tr_1_guard_LaunchRequest_SM1 = (levelAck &
          (!outC->Loc_PositionInAckArea)) | (!isAckNeeded);
      if (tr_1_guard_LaunchRequest_SM1) {
        _11_SM1_state_act_partial = SSM_st_Waiting_SM1;
      }
      else if (tr_2_guard_LaunchRequest_SM1) {
        _11_SM1_state_act_partial = SSM_st_AckReceived_SM1;
      }
      else {
        _11_SM1_state_act_partial = SSM_st_LaunchRequest_SM1;
      }
      outC->SM1_state_act = _11_SM1_state_act_partial;
      if (tr_1_guard_LaunchRequest_SM1) {
        _13_SM1_fired_strong_partial = SSM_TR_LaunchRequest_Waiting_1_LaunchRequest_SM1;
      }
      else if (tr_2_guard_LaunchRequest_SM1) {
        _13_SM1_fired_strong_partial =
          SSM_TR_LaunchRequest_AckReceived_2_LaunchRequest_SM1;
      }
      else {
        _13_SM1_fired_strong_partial = _149_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _13_SM1_fired_strong_partial;
      break;
    case SSM_st_Waiting_SM1 :
      tr_1_guard_Waiting_SM1 = isAckNeeded & outC->Loc_isSet;
      if (tr_1_guard_Waiting_SM1) {
        SM1_state_act_partial = SSM_st_LaunchRequest_SM1;
      }
      else {
        SM1_state_act_partial = SSM_st_Waiting_SM1;
      }
      outC->SM1_state_act = SM1_state_act_partial;
      if (tr_1_guard_Waiting_SM1) {
        SM1_fired_strong_partial = SSM_TR_Waiting_LaunchRequest_1_Waiting_SM1;
      }
      else {
        SM1_fired_strong_partial = _149_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = SM1_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_AckReceived_SM1 :
      _10_SM1_fired_partial = outC->SM1_fired_strong;
      _9_SM1_reset_nxt_partial = kcg_false;
      _8_SM1_state_nxt_partial = SSM_st_AckReceived_SM1;
      outC->_L2_AckReceived_SM1 = kcg_false;
      outC->_L1_AckReceived_SM1 = kcg_false;
      _7_service_brake_partial = outC->_L2_AckReceived_SM1;
      _6_needsAckFromDriver_partial = outC->_L1_AckReceived_SM1;
      outC->needsAckFromDriver = _6_needsAckFromDriver_partial;
      outC->service_brake = _7_service_brake_partial;
      outC->SM1_state_nxt = _8_SM1_state_nxt_partial;
      break;
    case SSM_st_LaunchRequest_SM1 :
      _5_SM1_fired_partial = outC->SM1_fired_strong;
      _4_SM1_reset_nxt_partial = kcg_false;
      _3_SM1_state_nxt_partial = SSM_st_LaunchRequest_SM1;
      outC->_L13_LaunchRequest_SM1 = IsNewLevel;
      _2_service_brake_partial = outC->_L13_LaunchRequest_SM1;
      outC->_L12_LaunchRequest_SM1 = outC->Loc_PositionInAckArea;
      outC->_L11_LaunchRequest_SM1 = outC->Loc_Immediate;
      outC->_L10_LaunchRequest_SM1 = outC->_L11_LaunchRequest_SM1 |
        outC->_L12_LaunchRequest_SM1;
      _1_needsAckFromDriver_partial = outC->_L10_LaunchRequest_SM1;
      outC->needsAckFromDriver = _1_needsAckFromDriver_partial;
      outC->service_brake = _2_service_brake_partial;
      outC->SM1_state_nxt = _3_SM1_state_nxt_partial;
      break;
    case SSM_st_Waiting_SM1 :
      SM1_fired_partial = outC->SM1_fired_strong;
      SM1_reset_nxt_partial = kcg_false;
      SM1_state_nxt_partial = SSM_st_Waiting_SM1;
      outC->_L2_Waiting_SM1 = kcg_false;
      service_brake_partial = outC->_L2_Waiting_SM1;
      outC->_L1_Waiting_SM1 = kcg_false;
      needsAckFromDriver_partial = outC->_L1_Waiting_SM1;
      outC->needsAckFromDriver = needsAckFromDriver_partial;
      outC->service_brake = service_brake_partial;
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_AckReceived_SM1 :
      outC->SM1_reset_nxt = _9_SM1_reset_nxt_partial;
      outC->SM1_fired = _10_SM1_fired_partial;
      break;
    case SSM_st_LaunchRequest_SM1 :
      outC->SM1_reset_nxt = _4_SM1_reset_nxt_partial;
      outC->SM1_fired = _5_SM1_fired_partial;
      break;
    case SSM_st_Waiting_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_AckReceived_SM1 :
      _15_SM1_reset_act_partial = tr_1_guard_AckReceived_SM1;
      break;
    case SSM_st_LaunchRequest_SM1 :
      if (tr_1_guard_LaunchRequest_SM1) {
        _12_SM1_reset_act_partial = kcg_true;
      }
      else {
        _12_SM1_reset_act_partial = tr_2_guard_LaunchRequest_SM1;
      }
      break;
    case SSM_st_Waiting_SM1 :
      SM1_reset_act_partial = tr_1_guard_Waiting_SM1;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_AckReceived_SM1 :
      outC->SM1_reset_act = _15_SM1_reset_act_partial;
      break;
    case SSM_st_LaunchRequest_SM1 :
      outC->SM1_reset_act = _12_SM1_reset_act_partial;
      break;
    case SSM_st_Waiting_SM1 :
      outC->SM1_reset_act = SM1_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void RequestAck_init_Acknowledgement(outC_RequestAck_Acknowledgement *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L26 = kcg_lit_int64(0);
  outC->_L27 = kcg_lit_int64(0);
  outC->_L28.level = M_LEVEL_Level_0;
  outC->_L28.position = kcg_lit_int64(0);
  outC->_L28.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L28.immediateAck = kcg_true;
  outC->_L28.AckLength = kcg_lit_int64(0);
  outC->_L29 = kcg_true;
  outC->_L25 = kcg_lit_int64(0);
  outC->_L24 = kcg_lit_int64(0);
  outC->_L23 = kcg_lit_int64(0);
  outC->_L22 = kcg_true;
  outC->_L16.is_set = kcg_true;
  outC->_L16.transition.level = M_LEVEL_Level_0;
  outC->_L16.transition.position = kcg_lit_int64(0);
  outC->_L16.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L16.transition.immediateAck = kcg_true;
  outC->_L16.transition.AckLength = kcg_lit_int64(0);
  outC->_L16.LRBG = kcg_lit_int64(0);
  outC->_L16.referenceLocation = kcg_lit_int64(0);
  outC->_L21 = kcg_lit_int64(0);
  outC->_L20 = kcg_true;
  outC->_L19 = M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L18 = kcg_lit_int64(0);
  outC->_L17 = M_LEVEL_Level_0;
  outC->_L13 = kcg_lit_int64(0);
  outC->_L14.valid = kcg_true;
  outC->_L14.timestamp = kcg_lit_int64(0);
  outC->_L14.trainPositionIsUnknown = kcg_true;
  outC->_L14.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L14.trainPosition.nominal = kcg_lit_int64(0);
  outC->_L14.trainPosition.d_min = kcg_lit_int64(0);
  outC->_L14.trainPosition.d_max = kcg_lit_int64(0);
  outC->_L14.estimatedFrontEndPosition = kcg_lit_int64(0);
  outC->_L14.minSafeFrontEndPosition = kcg_lit_int64(0);
  outC->_L14.maxSafeFrontEndPostion = kcg_lit_int64(0);
  outC->_L14.LRBG.valid = kcg_true;
  outC->_L14.LRBG.nid_c = kcg_lit_int64(0);
  outC->_L14.LRBG.nid_bg = kcg_lit_int64(0);
  outC->_L14.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L14.LRBG.location.nominal = kcg_lit_int64(0);
  outC->_L14.LRBG.location.d_min = kcg_lit_int64(0);
  outC->_L14.LRBG.location.d_max = kcg_lit_int64(0);
  outC->_L14.LRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L14.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L14.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L14.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L14.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L14.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L14.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L14.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L14.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L14.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L14.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L14.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L14.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L14.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L14.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L14.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L14.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L14.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L14.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L14.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L14.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L14.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L14.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L14.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L14.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L14.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L14.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L14.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L14.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L14.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L14.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L14.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L14.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L14.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L14.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L14.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L14.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L14.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L14.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L14.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L14.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L14.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L14.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L14.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L14.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L14.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L14.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L14.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L14.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L14.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L14.LRBG.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L14.LRBG.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int64(0);
    outC->_L14.LRBG.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L14.LRBG.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L14.LRBG.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int64(0);
    outC->_L14.LRBG.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L14.LRBG.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int64(0);
    outC->_L14.LRBG.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int64(0);
    outC->_L14.LRBG.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L14.LRBG.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L14.LRBG.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int64(0);
  }
  outC->_L14.LRBG.missed = kcg_true;
  outC->_L14.prvLRBG.valid = kcg_true;
  outC->_L14.prvLRBG.nid_c = kcg_lit_int64(0);
  outC->_L14.prvLRBG.nid_bg = kcg_lit_int64(0);
  outC->_L14.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L14.prvLRBG.location.nominal = kcg_lit_int64(0);
  outC->_L14.prvLRBG.location.d_min = kcg_lit_int64(0);
  outC->_L14.prvLRBG.location.d_max = kcg_lit_int64(0);
  outC->_L14.prvLRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L14.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L14.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L14.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L14.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L14.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L14.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L14.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L14.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L14.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L14.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L14.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L14.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L14.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L14.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L14.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L14.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L14.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L14.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L14.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L14.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L14.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L14.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L14.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L14.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L14.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L14.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L14.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L14.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L14.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L14.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L14.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L14.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L14.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L14.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L14.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L14.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L14.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L14.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L14.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L14.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L14.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L14.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L14.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L14.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L14.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L14.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L14.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L14.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L14.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L14.prvLRBG.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L14.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int64(0);
    outC->_L14.prvLRBG.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L14.prvLRBG.infoFromPassing.linkedBGs[idx1].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L14.prvLRBG.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int64(0);
    outC->_L14.prvLRBG.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L14.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int64(0);
    outC->_L14.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int64(0);
    outC->_L14.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L14.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L14.prvLRBG.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int64(0);
  }
  outC->_L14.prvLRBG.missed = kcg_true;
  outC->_L14.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L14.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L14.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L14.linkingIsUsedOnboard = kcg_true;
  outC->_L14.estimatedRearEndPosition = kcg_lit_int64(0);
  outC->_L14.minSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L14.maxSafeRearEndPosition = kcg_lit_int64(0);
  outC->Loc_isSet = kcg_true;
  outC->Loc_PositionInAckArea = kcg_true;
  outC->Loc_AckLength = kcg_lit_int64(0);
  outC->Loc_Immediate = kcg_true;
  outC->Loc_Position = kcg_lit_int64(0);
  outC->Loc_MaxSafeFrontEnd = kcg_lit_int64(0);
  outC->SM1_fired = _149_SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = _149_SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_Waiting_SM1;
  outC->SM1_state_sel = SSM_st_Waiting_SM1;
  outC->_L1_AckReceived_SM1 = kcg_true;
  outC->_L2_AckReceived_SM1 = kcg_true;
  outC->_L10_LaunchRequest_SM1 = kcg_true;
  outC->_L11_LaunchRequest_SM1 = kcg_true;
  outC->_L12_LaunchRequest_SM1 = kcg_true;
  outC->_L13_LaunchRequest_SM1 = kcg_true;
  outC->_L1_Waiting_SM1 = kcg_true;
  outC->_L2_Waiting_SM1 = kcg_true;
  outC->service_brake = kcg_true;
  outC->needsAckFromDriver = kcg_true;
  /* _L22=(Acknowledgement::Position_In_Ack_Area#1)/ */
  Position_In_Ack_Area_init_Acknowledgement(
    &outC->Context_Position_In_Ack_Area_1);
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = SSM_st_Waiting_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RequestAck_reset_Acknowledgement(outC_RequestAck_Acknowledgement *outC)
{
  /* _L22=(Acknowledgement::Position_In_Ack_Area#1)/ */
  Position_In_Ack_Area_reset_Acknowledgement(
    &outC->Context_Position_In_Ack_Area_1);
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = SSM_st_Waiting_SM1;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_RequestAck_Acknowledgement(
  SV_RequestAck_Acknowledgement *SV,
  outC_RequestAck_Acknowledgement *outC)
{
  SV->Context_SM1_reset_nxt = outC->SM1_reset_nxt;
  SV->Context_SM1_reset_act = outC->SM1_reset_act;
  SV->Context_SM1_state_nxt = outC->SM1_state_nxt;
}

void kcg_load_SV_RequestAck_Acknowledgement(
  outC_RequestAck_Acknowledgement *outC,
  SV_RequestAck_Acknowledgement *SV)
{
  outC->SM1_reset_nxt = SV->Context_SM1_reset_nxt;
  outC->SM1_reset_act = SV->Context_SM1_reset_act;
  outC->SM1_state_nxt = SV->Context_SM1_state_nxt;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RequestAck_Acknowledgement.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

