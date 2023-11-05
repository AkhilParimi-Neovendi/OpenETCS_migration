/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MA_Request_Supervision_TA_MA_Request.h"

/* TA_MA_Request::MA_Request_Supervision/ */
void MA_Request_Supervision_TA_MA_Request(
  /* ma_RequestParams/ */
  P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg *ma_RequestParams,
  /* ma_received/ */
  kcg_bool ma_received,
  /* in_triggerMA/ */
  kcg_bool in_triggerMA,
  /* trainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* systemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* preindicationLocation/ */
  L_internal_Type_Obu_BasicTypes_Pkg preindicationLocation,
  /* odometry/ */
  odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* MAs/ */
  MovementAuthority_t_TrackAtlasTypes *MAs,
  /* fromDriver/ */
  Driver2MAR_T_TA_MA_Request *fromDriver,
  /* trackDescrDeleted/ */
  kcg_bool trackDescrDeleted,
  /* modeLevel/ */
  T_Mode_Level_Level_And_Mode_Types_Pkg *modeLevel,
  outC_MA_Request_Supervision_TA_MA_Request *outC)
{
  static kcg_bool op_call;
  static kcg_bool _1_op_call;
  static kcg_bool _2_op_call;
  /* pendingReq/ */
  static kcg_bool pendingReq_partial;
  /* SM1: */
  static _116_SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  static _117_SSM_TR_SM1 SM1_fired_partial;
  /* pendingReq/ */
  static kcg_bool _3_pendingReq_partial;
  /* SM1: */
  static _116_SSM_ST_SM1 _4_SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool _5_SM1_reset_nxt_partial;
  /* SM1: */
  static _117_SSM_TR_SM1 _6_SM1_fired_partial;
  /* pendingReq/ */
  static kcg_bool _7_pendingReq_partial;
  /* SM1: */
  static _116_SSM_ST_SM1 _8_SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool _9_SM1_reset_nxt_partial;
  /* SM1: */
  static _117_SSM_TR_SM1 _10_SM1_fired_partial;
  /* SM1: */
  static _116_SSM_ST_SM1 SM1_state_act_partial;
  /* SM1: */
  static kcg_bool SM1_reset_act_partial;
  /* SM1: */
  static _117_SSM_TR_SM1 SM1_fired_strong_partial;
  /* SM1:init:<1> */
  static kcg_bool tr_1_guard_init_SM1;
  /* SM1: */
  static _116_SSM_ST_SM1 _11_SM1_state_act_partial;
  /* SM1: */
  static kcg_bool _12_SM1_reset_act_partial;
  /* SM1: */
  static _117_SSM_TR_SM1 _13_SM1_fired_strong_partial;
  /* SM1:NoReqPending:<1> */
  static kcg_bool tr_1_guard_NoReqPending_SM1;
  /* SM1: */
  static _116_SSM_ST_SM1 _14_SM1_state_act_partial;
  /* SM1: */
  static kcg_bool _15_SM1_reset_act_partial;
  /* SM1: */
  static _117_SSM_TR_SM1 _16_SM1_fired_strong_partial;
  /* SM1:ReqPending:<1> */
  static kcg_bool tr_1_guard_ReqPending_SM1;
  static kcg_bool noname;
  /* pendingReq/ */
  static kcg_bool last_pendingReq;
  /* triggerMA/ */
  static kcg_bool last_triggerMA;
  /* in_triggerMA/ */
  static kcg_bool last_in_triggerMA;
  /* SM1: */
  static kcg_bool SM1_reset_sel;
  /* SM1: */
  static kcg_bool SM1_reset_prv;

  last_in_triggerMA = outC->mem_in_triggerMA;
  outC->mem_in_triggerMA = in_triggerMA;
  kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(
    &outC->_L1,
    ma_RequestParams);
  outC->_L41 = outC->_L1.t_mar;
  outC->_L43 = kcg_lit_int32(255);
  outC->_L80 = outC->_L43 != outC->_L41;
  outC->every1 = outC->_L80;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L2, trainPosition);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L9, odometry);
  outC->_L6 = preindicationLocation;
  if (outC->every1) {
    /* _L73=(TA_MA_Request::op_3_8_2_3_a)/ */
    op_3_8_2_3_a_TA_MA_Request(
      outC->_L41,
      &outC->_L2,
      &outC->_L9,
      outC->_L6,
      &outC->Context_op_3_8_2_3_a);
    _1_op_call = outC->Context_op_3_8_2_3_a.exception;
    op_call = outC->Context_op_3_8_2_3_a.triggerMA;
  }
  outC->_L30 = outC->_L1.t_timeoutrqst;
  outC->_L38 = kcg_lit_int32(1023);
  outC->_L81 = outC->_L38 != outC->_L30;
  outC->every = outC->_L81;
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&outC->_L24, MAs);
  if (outC->every) {
    /* _L46=(TA_MA_Request::op_3_8_2_3_b)/ */
    op_3_8_2_3_b_TA_MA_Request(
      outC->_L30,
      &outC->_L24,
      &outC->Context_op_3_8_2_3_b);
    _2_op_call = outC->Context_op_3_8_2_3_b.triggerMA;
  }
  last_pendingReq = outC->pendingReq;
  last_triggerMA = outC->triggerMA;
  kcg_copy_Driver2MAR_T_TA_MA_Request(&outC->_L67, fromDriver);
  outC->_L72 = outC->_L67.driverSelectsStart;
  outC->_L71 = outC->_L67.trackAheadFree;
  outC->_L68 = trackDescrDeleted;
  outC->_L49 = outC->_L1.t_cycrqst;
  outC->_L66 = in_triggerMA;
  outC->_L3 = systemTime;
  /* _L55=(TA_MA_Request::op_RepeatReq#1)/ */
  op_RepeatReq_TA_MA_Request(
    outC->_L49,
    outC->_L66,
    outC->_L3,
    &outC->Context_op_RepeatReq_1);
  outC->_L55 = outC->Context_op_RepeatReq_1.trigger;
  outC->_L74 = outC->Context_op_RepeatReq_1.exception;
  outC->_L94 = kcg_lit_int32(0);
  outC->_L93 = outC->_L49 != outC->_L94;
  outC->_L51 = kcg_lit_int32(255);
  outC->_L82 = outC->_L51 != outC->_L49;
  outC->SM1_state_sel = outC->SM1_state_nxt;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_ReqPending_SM1 :
      tr_1_guard_ReqPending_SM1 = ma_received == kcg_true;
      if (tr_1_guard_ReqPending_SM1) {
        _14_SM1_state_act_partial = SSM_st_NoReqPending_SM1;
      }
      else {
        _14_SM1_state_act_partial = SSM_st_ReqPending_SM1;
      }
      outC->SM1_state_act = _14_SM1_state_act_partial;
      break;
    case SSM_st_NoReqPending_SM1 :
      tr_1_guard_NoReqPending_SM1 = in_triggerMA == kcg_true;
      if (tr_1_guard_NoReqPending_SM1) {
        _11_SM1_state_act_partial = SSM_st_ReqPending_SM1;
      }
      else {
        _11_SM1_state_act_partial = SSM_st_NoReqPending_SM1;
      }
      outC->SM1_state_act = _11_SM1_state_act_partial;
      break;
    case SSM_st_init_SM1 :
      tr_1_guard_init_SM1 = kcg_true;
      if (tr_1_guard_init_SM1) {
        SM1_state_act_partial = SSM_st_NoReqPending_SM1;
      }
      else {
        SM1_state_act_partial = SSM_st_init_SM1;
      }
      outC->SM1_state_act = SM1_state_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_ReqPending_SM1 :
      outC->_L4_ReqPending_SM1 = kcg_true;
      _7_pendingReq_partial = outC->_L4_ReqPending_SM1;
      outC->pendingReq = _7_pendingReq_partial;
      break;
    case SSM_st_NoReqPending_SM1 :
      outC->_L1_NoReqPending_SM1 = kcg_false;
      _3_pendingReq_partial = outC->_L1_NoReqPending_SM1;
      outC->pendingReq = _3_pendingReq_partial;
      break;
    case SSM_st_init_SM1 :
      pendingReq_partial = last_pendingReq;
      outC->pendingReq = pendingReq_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L60 = outC->pendingReq;
  outC->_L59 = outC->_L60 & outC->_L82 & outC->_L93 & outC->_L55;
  outC->_L48 = kcg_false;
  if (outC->every) {
    outC->_L46 = _2_op_call;
  }
  else {
    outC->_L46 = outC->_L48;
  }
  /* _L79=(digital::RisingEdge#2)/ */
  RisingEdge_digital(outC->_L46, &outC->Context_RisingEdge_2);
  outC->_L79 = outC->Context_RisingEdge_2.RE_Output;
  outC->_L40 = kcg_false;
  if (outC->every1) {
    outC->_L23 = op_call;
  }
  else {
    outC->_L23 = outC->_L40;
  }
  /* _L78=(digital::RisingEdge#1)/ */
  RisingEdge_digital(outC->_L23, &outC->Context_RisingEdge_1);
  outC->_L78 = outC->Context_RisingEdge_1.RE_Output;
  outC->_L22 = outC->_L78 | outC->_L79 | outC->_L59 | outC->_L68 | outC->_L71 |
    outC->_L72;
  outC->_L89 = M_LEVEL_Level_3;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&outC->_L83, modeLevel);
  outC->_L88 = outC->_L83.level;
  outC->_L90 = outC->_L88 == outC->_L89;
  outC->_L87 = M_LEVEL_Level_2;
  outC->_L85 = outC->_L83.level;
  outC->_L86 = outC->_L85 == outC->_L87;
  outC->_L91 = outC->_L86 | outC->_L90;
  outC->_L95 = outC->_L91 & outC->_L22;
  outC->errorInRepeatReq = outC->_L74;
  outC->_L77 = outC->errorInRepeatReq;
  if (outC->every1) {
    outC->_L73 = _1_op_call;
  }
  else {
    outC->_L73 = outC->_L40;
  }
  outC->_L76 = outC->_L73 | outC->_L77;
  outC->exception = outC->_L76;
  outC->_L61 = ma_received;
  noname = outC->_L61;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_ReqPending_SM1 :
      if (tr_1_guard_ReqPending_SM1) {
        _16_SM1_fired_strong_partial = SSM_TR_ReqPending_NoReqPending_1_ReqPending_SM1;
      }
      else {
        _16_SM1_fired_strong_partial = _134_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _16_SM1_fired_strong_partial;
      break;
    case SSM_st_NoReqPending_SM1 :
      if (tr_1_guard_NoReqPending_SM1) {
        _13_SM1_fired_strong_partial =
          SSM_TR_NoReqPending_ReqPending_1_NoReqPending_SM1;
      }
      else {
        _13_SM1_fired_strong_partial = _134_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _13_SM1_fired_strong_partial;
      break;
    case SSM_st_init_SM1 :
      if (tr_1_guard_init_SM1) {
        SM1_fired_strong_partial = SSM_TR_init_NoReqPending_1_init_SM1;
      }
      else {
        SM1_fired_strong_partial = _134_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = SM1_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_ReqPending_SM1 :
      _10_SM1_fired_partial = outC->SM1_fired_strong;
      _9_SM1_reset_nxt_partial = kcg_false;
      _8_SM1_state_nxt_partial = SSM_st_ReqPending_SM1;
      outC->SM1_state_nxt = _8_SM1_state_nxt_partial;
      break;
    case SSM_st_NoReqPending_SM1 :
      _6_SM1_fired_partial = outC->SM1_fired_strong;
      _5_SM1_reset_nxt_partial = kcg_false;
      _4_SM1_state_nxt_partial = SSM_st_NoReqPending_SM1;
      outC->SM1_state_nxt = _4_SM1_state_nxt_partial;
      break;
    case SSM_st_init_SM1 :
      SM1_fired_partial = outC->SM1_fired_strong;
      SM1_reset_nxt_partial = kcg_false;
      SM1_state_nxt_partial = SSM_st_init_SM1;
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_ReqPending_SM1 :
      outC->SM1_reset_nxt = _9_SM1_reset_nxt_partial;
      outC->SM1_fired = _10_SM1_fired_partial;
      break;
    case SSM_st_NoReqPending_SM1 :
      outC->SM1_reset_nxt = _5_SM1_reset_nxt_partial;
      outC->SM1_fired = _6_SM1_fired_partial;
      break;
    case SSM_st_init_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_ReqPending_SM1 :
      _15_SM1_reset_act_partial = tr_1_guard_ReqPending_SM1;
      break;
    case SSM_st_NoReqPending_SM1 :
      _12_SM1_reset_act_partial = tr_1_guard_NoReqPending_SM1;
      break;
    case SSM_st_init_SM1 :
      SM1_reset_act_partial = tr_1_guard_init_SM1;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_ReqPending_SM1 :
      outC->SM1_reset_act = _15_SM1_reset_act_partial;
      break;
    case SSM_st_NoReqPending_SM1 :
      outC->SM1_reset_act = _12_SM1_reset_act_partial;
      break;
    case SSM_st_init_SM1 :
      outC->SM1_reset_act = SM1_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->triggerMA = outC->_L95;
}

#ifndef KCG_USER_DEFINED_INIT
void MA_Request_Supervision_init_TA_MA_Request(
  outC_MA_Request_Supervision_TA_MA_Request *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;

  outC->_L95 = kcg_true;
  outC->_L94 = kcg_lit_int32(0);
  outC->_L93 = kcg_true;
  outC->_L91 = kcg_true;
  outC->_L88 = M_LEVEL_Level_0;
  outC->_L89 = M_LEVEL_Level_0;
  outC->_L90 = kcg_true;
  outC->_L87 = M_LEVEL_Level_0;
  outC->_L86 = kcg_true;
  outC->_L85 = M_LEVEL_Level_0;
  outC->_L83.compatibleModeAndLevel = kcg_true;
  outC->_L83.level = M_LEVEL_Level_0;
  outC->_L83.newLevel = kcg_true;
  outC->_L83.Mode = M_MODE_Full_Supervision;
  outC->_L83.newMode = kcg_true;
  outC->_L82 = kcg_true;
  outC->_L81 = kcg_true;
  outC->_L80 = kcg_true;
  outC->_L79 = kcg_true;
  outC->_L78 = kcg_true;
  outC->_L77 = kcg_true;
  outC->_L76 = kcg_true;
  outC->_L74 = kcg_true;
  outC->_L73 = kcg_true;
  outC->_L71 = kcg_true;
  outC->_L72 = kcg_true;
  outC->_L68 = kcg_true;
  outC->_L67.trackAheadFree = kcg_true;
  outC->_L67.driverSelectsStart = kcg_true;
  outC->_L66 = kcg_true;
  outC->_L61 = kcg_true;
  outC->_L60 = kcg_true;
  outC->_L59 = kcg_true;
  outC->_L55 = kcg_true;
  outC->_L51 = kcg_lit_int32(0);
  outC->_L49 = kcg_lit_int32(0);
  outC->_L48 = kcg_true;
  outC->_L46 = kcg_true;
  outC->_L43 = kcg_lit_int32(0);
  outC->_L41 = kcg_lit_int32(0);
  outC->_L40 = kcg_true;
  outC->_L38 = kcg_lit_int32(0);
  outC->_L30 = kcg_lit_int32(0);
  outC->_L24.valid = kcg_true;
  outC->_L24.Level = MA_L1_TrackAtlasTypes;
  outC->_L24.q_dir = Q_DIR_Reverse;
  outC->_L24.v_main = kcg_lit_int32(0);
  outC->_L24.v_loa = kcg_lit_int32(0);
  outC->_L24.t_loa_unlimited = kcg_true;
  outC->_L24.t_loa = kcg_lit_int32(0);
  outC->_L24.n_iter = kcg_lit_int32(0);
  for (idx = 0; idx < 10; idx++) {
    outC->_L24.sections[idx].valid = kcg_true;
    outC->_L24.sections[idx].q_endsection = kcg_true;
    outC->_L24.sections[idx].l_section = kcg_lit_int32(0);
    outC->_L24.sections[idx].q_sectiontimer = kcg_true;
    outC->_L24.sections[idx].t_sectiontimer = kcg_lit_int32(0);
    outC->_L24.sections[idx].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L24.q_dangerpoint = kcg_true;
  outC->_L24.dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L24.dangerpoint.v_release = kcg_lit_int32(0);
  outC->_L24.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L24.q_overlap = kcg_true;
  outC->_L24.overlap.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L24.overlap.v_release = kcg_lit_int32(0);
  outC->_L24.overlap.calc_v_release_onboard = kcg_true;
  outC->_L24.q_endtimer = kcg_true;
  outC->_L24.endtimer_t.t_endtimer = kcg_lit_int32(0);
  outC->_L24.endtimer_t.d_endtimerstoploc = kcg_lit_int32(0);
  outC->_L23 = kcg_true;
  outC->_L22 = kcg_true;
  outC->_L9.valid = kcg_true;
  outC->_L9.timestamp = kcg_lit_int32(0);
  outC->_L9.odo.o_nominal = kcg_lit_int32(0);
  outC->_L9.odo.o_min = kcg_lit_int32(0);
  outC->_L9.odo.o_max = kcg_lit_int32(0);
  outC->_L9.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L9.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L9.speed.v_lower = kcg_lit_int32(0);
  outC->_L9.speed.v_upper = kcg_lit_int32(0);
  outC->_L9.acceleration = kcg_lit_int32(0);
  outC->_L9.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L9.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L6 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L2.valid = kcg_true;
  outC->_L2.timestamp = kcg_lit_int32(0);
  outC->_L2.trainPositionIsUnknown = kcg_true;
  outC->_L2.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L2.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L2.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L2.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L2.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L2.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L2.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L2.LRBG.valid = kcg_true;
  outC->_L2.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L2.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L2.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L2.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L2.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L2.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L2.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L2.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L2.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L2.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L2.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L2.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L2.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L2.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L2.LRBG.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L2.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L2.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L2.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(
      0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(
      0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(
      0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L2.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L2.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int32(0);
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx1].q_scale = Q_SCALE_10_cm_scale;
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int32(0);
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int32(0);
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int32(0);
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int32(0);
  }
  outC->_L2.LRBG.missed = kcg_true;
  outC->_L2.prvLRBG.valid = kcg_true;
  outC->_L2.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L2.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L2.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L2.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L2.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L2.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L2.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L2.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx2].valid = kcg_true;
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx2].nid_LRBG = kcg_lit_int32(0);
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx2].q_scale = Q_SCALE_10_cm_scale;
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx2].d_link = kcg_lit_int32(0);
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx2].nid_c = kcg_lit_int32(0);
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx2].nid_bg = kcg_lit_int32(0);
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx2].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx2].q_locacc = kcg_lit_int32(0);
  }
  outC->_L2.prvLRBG.missed = kcg_true;
  outC->_L2.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L2.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L2.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L2.linkingIsUsedOnboard = kcg_true;
  outC->_L2.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L2.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L2.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L1.valid = kcg_true;
  outC->_L1.q_dir = Q_DIR_Reverse;
  outC->_L1.t_mar = kcg_lit_int32(0);
  outC->_L1.t_timeoutrqst = kcg_lit_int32(0);
  outC->_L1.t_cycrqst = kcg_lit_int32(0);
  outC->errorInRepeatReq = kcg_true;
  outC->SM1_fired = _134_SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = _134_SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_init_SM1;
  outC->SM1_state_sel = SSM_st_init_SM1;
  outC->every1 = kcg_true;
  outC->every = kcg_true;
  outC->_L4_ReqPending_SM1 = kcg_true;
  outC->_L1_NoReqPending_SM1 = kcg_true;
  outC->exception = kcg_true;
  /* _L78=(digital::RisingEdge#1)/ */
  RisingEdge_init_digital(&outC->Context_RisingEdge_1);
  /* _L79=(digital::RisingEdge#2)/ */
  RisingEdge_init_digital(&outC->Context_RisingEdge_2);
  /* _L55=(TA_MA_Request::op_RepeatReq#1)/ */
  op_RepeatReq_init_TA_MA_Request(&outC->Context_op_RepeatReq_1);
  /* _L46=(TA_MA_Request::op_3_8_2_3_b)/ */
  op_3_8_2_3_b_init_TA_MA_Request(&outC->Context_op_3_8_2_3_b);
  /* _L73=(TA_MA_Request::op_3_8_2_3_a)/ */
  op_3_8_2_3_a_init_TA_MA_Request(&outC->Context_op_3_8_2_3_a);
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = SSM_st_init_SM1;
  outC->triggerMA = kcg_false;
  outC->pendingReq = kcg_false;
  outC->mem_in_triggerMA = kcg_false;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MA_Request_Supervision_reset_TA_MA_Request(
  outC_MA_Request_Supervision_TA_MA_Request *outC)
{
  /* _L78=(digital::RisingEdge#1)/ */
  RisingEdge_reset_digital(&outC->Context_RisingEdge_1);
  /* _L79=(digital::RisingEdge#2)/ */
  RisingEdge_reset_digital(&outC->Context_RisingEdge_2);
  /* _L55=(TA_MA_Request::op_RepeatReq#1)/ */
  op_RepeatReq_reset_TA_MA_Request(&outC->Context_op_RepeatReq_1);
  /* _L46=(TA_MA_Request::op_3_8_2_3_b)/ */
  op_3_8_2_3_b_reset_TA_MA_Request(&outC->Context_op_3_8_2_3_b);
  /* _L73=(TA_MA_Request::op_3_8_2_3_a)/ */
  op_3_8_2_3_a_reset_TA_MA_Request(&outC->Context_op_3_8_2_3_a);
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = SSM_st_init_SM1;
  outC->triggerMA = kcg_false;
  outC->pendingReq = kcg_false;
  outC->mem_in_triggerMA = kcg_false;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MA_Request_Supervision_TA_MA_Request.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

