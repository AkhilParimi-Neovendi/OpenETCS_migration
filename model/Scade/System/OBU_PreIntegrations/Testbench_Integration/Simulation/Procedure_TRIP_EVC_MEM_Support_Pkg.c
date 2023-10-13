/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Procedure_TRIP_EVC_MEM_Support_Pkg.h"

/* EVC_MEM_Support_Pkg::Procedure_TRIP/ */
void Procedure_TRIP_EVC_MEM_Support_Pkg(
  /* inModeAndLevel/ */
  T_Mode_Level_Level_And_Mode_Types_Pkg *inModeAndLevel,
  /* inEBFromML/ */
  kcg_bool inEBFromML,
  /* inTrackMsg/ */
  ReceivedMessage_T_Common_Types_Pkg *inTrackMsg,
  /* inDriverResponse/ */
  kcg_bool inDriverResponse,
  outC_Procedure_TRIP_EVC_MEM_Support_Pkg *outC)
{
  /* TIU_driverWindow/ */
  static kcg_bool TIU_driverWindow_partial;
  /* revokeEB/ */
  static kcg_bool revokeEB_partial;
  /* Revoke_Procedure: */
  static SSM_ST_Revoke_Procedure Revoke_Procedure_state_nxt_partial;
  /* Revoke_Procedure: */
  static kcg_bool Revoke_Procedure_reset_nxt_partial;
  /* Revoke_Procedure: */
  static SSM_TR_Revoke_Procedure Revoke_Procedure_fired_partial;
  /* TIU_driverWindow/ */
  static kcg_bool _1_TIU_driverWindow_partial;
  /* revokeEB/ */
  static kcg_bool _2_revokeEB_partial;
  /* Revoke_Procedure: */
  static SSM_ST_Revoke_Procedure _3_Revoke_Procedure_state_nxt_partial;
  /* Revoke_Procedure: */
  static kcg_bool _4_Revoke_Procedure_reset_nxt_partial;
  /* Revoke_Procedure: */
  static SSM_TR_Revoke_Procedure _5_Revoke_Procedure_fired_partial;
  /* TIU_driverWindow/ */
  static kcg_bool _6_TIU_driverWindow_partial;
  /* revokeEB/ */
  static kcg_bool _7_revokeEB_partial;
  /* Revoke_Procedure: */
  static SSM_ST_Revoke_Procedure _8_Revoke_Procedure_state_nxt_partial;
  /* Revoke_Procedure: */
  static kcg_bool _9_Revoke_Procedure_reset_nxt_partial;
  /* Revoke_Procedure: */
  static SSM_TR_Revoke_Procedure _10_Revoke_Procedure_fired_partial;
  /* TIU_driverWindow/ */
  static kcg_bool _11_TIU_driverWindow_partial;
  /* revokeEB/ */
  static kcg_bool _12_revokeEB_partial;
  /* Revoke_Procedure: */
  static SSM_ST_Revoke_Procedure _13_Revoke_Procedure_state_nxt_partial;
  /* Revoke_Procedure: */
  static kcg_bool _14_Revoke_Procedure_reset_nxt_partial;
  /* Revoke_Procedure: */
  static SSM_TR_Revoke_Procedure _15_Revoke_Procedure_fired_partial;
  /* Revoke_Procedure: */
  static SSM_ST_Revoke_Procedure Revoke_Procedure_state_act_partial;
  /* Revoke_Procedure: */
  static kcg_bool Revoke_Procedure_reset_act_partial;
  /* Revoke_Procedure: */
  static SSM_TR_Revoke_Procedure Revoke_Procedure_fired_strong_partial;
  /* Revoke_Procedure:no_PostTrip:<1> */
  static kcg_bool tr_1_guard_no_PostTrip_Revoke_Procedure;
  /* Revoke_Procedure: */
  static SSM_ST_Revoke_Procedure _16_Revoke_Procedure_state_act_partial;
  /* Revoke_Procedure: */
  static kcg_bool _17_Revoke_Procedure_reset_act_partial;
  /* Revoke_Procedure: */
  static SSM_TR_Revoke_Procedure _18_Revoke_Procedure_fired_strong_partial;
  /* Revoke_Procedure:waitingRBC_Msg18:<2> */
  static kcg_bool tr_2_guard_waitingRBC_Msg18_Revoke_Procedure;
  /* Revoke_Procedure:waitingRBC_Msg18:<1> */
  static kcg_bool tr_1_guard_waitingRBC_Msg18_Revoke_Procedure;
  /* Revoke_Procedure: */
  static SSM_ST_Revoke_Procedure _19_Revoke_Procedure_state_act_partial;
  /* Revoke_Procedure: */
  static kcg_bool _20_Revoke_Procedure_reset_act_partial;
  /* Revoke_Procedure: */
  static SSM_TR_Revoke_Procedure _21_Revoke_Procedure_fired_strong_partial;
  /* Revoke_Procedure:waitingDriverRevoke:<2> */
  static kcg_bool tr_2_guard_waitingDriverRevoke_Revoke_Procedure;
  /* Revoke_Procedure:waitingDriverRevoke:<1> */
  static kcg_bool tr_1_guard_waitingDriverRevoke_Revoke_Procedure;
  /* Revoke_Procedure: */
  static SSM_ST_Revoke_Procedure _22_Revoke_Procedure_state_act_partial;
  /* Revoke_Procedure: */
  static kcg_bool _23_Revoke_Procedure_reset_act_partial;
  /* Revoke_Procedure: */
  static SSM_TR_Revoke_Procedure _24_Revoke_Procedure_fired_strong_partial;
  /* Revoke_Procedure:waitingModeChange:<1> */
  static kcg_bool tr_1_guard_waitingModeChange_Revoke_Procedure;
  /* revokeEB/ */
  static kcg_bool last_revokeEB;
  /* Revoke_Procedure: */
  static kcg_bool Revoke_Procedure_reset_sel;
  /* Revoke_Procedure: */
  static kcg_bool Revoke_Procedure_reset_prv;

  last_revokeEB = outC->revokeEB;
  outC->_L37 = kcg_false;
  outC->Revoke_Procedure_state_sel = outC->Revoke_Procedure_state_nxt;
  outC->_L29 = M_MODE_Post_Trip;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&outC->_L26, inModeAndLevel);
  outC->_L28 = outC->_L26.Mode;
  outC->_L27 = outC->_L28 == outC->_L29;
  outC->isPostTrip = outC->_L27;
  switch (outC->Revoke_Procedure_state_sel) {
    case SSM_st_waitingModeChange_Revoke_Procedure :
      tr_1_guard_waitingModeChange_Revoke_Procedure = !outC->isPostTrip;
      if (tr_1_guard_waitingModeChange_Revoke_Procedure) {
        _22_Revoke_Procedure_state_act_partial = SSM_st_no_PostTrip_Revoke_Procedure;
      }
      else {
        _22_Revoke_Procedure_state_act_partial =
          SSM_st_waitingModeChange_Revoke_Procedure;
      }
      break;
    case SSM_st_waitingDriverRevoke_Revoke_Procedure :
      tr_2_guard_waitingDriverRevoke_Revoke_Procedure = inDriverResponse;
      tr_1_guard_waitingDriverRevoke_Revoke_Procedure = !outC->isPostTrip;
      if (tr_1_guard_waitingDriverRevoke_Revoke_Procedure) {
        _19_Revoke_Procedure_state_act_partial = SSM_st_no_PostTrip_Revoke_Procedure;
      }
      else if (tr_2_guard_waitingDriverRevoke_Revoke_Procedure) {
        _19_Revoke_Procedure_state_act_partial =
          SSM_st_waitingModeChange_Revoke_Procedure;
      }
      else {
        _19_Revoke_Procedure_state_act_partial =
          SSM_st_waitingDriverRevoke_Revoke_Procedure;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  outC->_L24 = cm18_Revocation_of_Emergency_Stop_Id_Pkg;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L18, inTrackMsg);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L20,
    &outC->_L18.Radio_Common_Header);
  outC->_L21 = outC->_L20.nid_message;
  outC->_L23 = outC->_L21 == outC->_L24;
  outC->_L19 = outC->_L18.valid;
  outC->_L22 = outC->_L19 & outC->_L23;
  outC->msg18 = outC->_L22;
  /* Revoke_Procedure: */
  switch (outC->Revoke_Procedure_state_sel) {
    case SSM_st_waitingModeChange_Revoke_Procedure :
      outC->Revoke_Procedure_state_act = _22_Revoke_Procedure_state_act_partial;
      break;
    case SSM_st_waitingDriverRevoke_Revoke_Procedure :
      outC->Revoke_Procedure_state_act = _19_Revoke_Procedure_state_act_partial;
      break;
    case SSM_st_waitingRBC_Msg18_Revoke_Procedure :
      tr_2_guard_waitingRBC_Msg18_Revoke_Procedure = outC->msg18;
      tr_1_guard_waitingRBC_Msg18_Revoke_Procedure = !outC->isPostTrip;
      if (tr_1_guard_waitingRBC_Msg18_Revoke_Procedure) {
        _16_Revoke_Procedure_state_act_partial = SSM_st_no_PostTrip_Revoke_Procedure;
      }
      else if (tr_2_guard_waitingRBC_Msg18_Revoke_Procedure) {
        _16_Revoke_Procedure_state_act_partial =
          SSM_st_waitingDriverRevoke_Revoke_Procedure;
      }
      else {
        _16_Revoke_Procedure_state_act_partial =
          SSM_st_waitingRBC_Msg18_Revoke_Procedure;
      }
      outC->Revoke_Procedure_state_act = _16_Revoke_Procedure_state_act_partial;
      break;
    case SSM_st_no_PostTrip_Revoke_Procedure :
      tr_1_guard_no_PostTrip_Revoke_Procedure = outC->isPostTrip;
      if (tr_1_guard_no_PostTrip_Revoke_Procedure) {
        Revoke_Procedure_state_act_partial = SSM_st_waitingRBC_Msg18_Revoke_Procedure;
      }
      else {
        Revoke_Procedure_state_act_partial = SSM_st_no_PostTrip_Revoke_Procedure;
      }
      outC->Revoke_Procedure_state_act = Revoke_Procedure_state_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* Revoke_Procedure: */
  switch (outC->Revoke_Procedure_state_act) {
    case SSM_st_waitingModeChange_Revoke_Procedure :
      outC->_L1_waitingModeChange_Revoke_Procedure = kcg_true;
      _12_revokeEB_partial = outC->_L1_waitingModeChange_Revoke_Procedure;
      outC->revokeEB = _12_revokeEB_partial;
      break;
    case SSM_st_waitingDriverRevoke_Revoke_Procedure :
      _7_revokeEB_partial = last_revokeEB;
      outC->revokeEB = _7_revokeEB_partial;
      break;
    case SSM_st_waitingRBC_Msg18_Revoke_Procedure :
      _2_revokeEB_partial = last_revokeEB;
      outC->revokeEB = _2_revokeEB_partial;
      break;
    case SSM_st_no_PostTrip_Revoke_Procedure :
      revokeEB_partial = last_revokeEB;
      outC->revokeEB = revokeEB_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L34 = outC->revokeEB;
  outC->_L35 = !outC->_L34;
  /* _L36= */
  if (outC->_L27) {
    outC->_L36 = outC->_L35;
  }
  else {
    outC->_L36 = outC->_L37;
  }
  switch (outC->Revoke_Procedure_state_act) {
    case SSM_st_waitingModeChange_Revoke_Procedure :
      _11_TIU_driverWindow_partial = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* Revoke_Procedure: */
  switch (outC->Revoke_Procedure_state_sel) {
    case SSM_st_waitingModeChange_Revoke_Procedure :
      if (tr_1_guard_waitingModeChange_Revoke_Procedure) {
        _24_Revoke_Procedure_fired_strong_partial =
          SSM_TR_waitingModeChange_no_PostTrip_1_waitingModeChange_Revoke_Procedure;
      }
      else {
        _24_Revoke_Procedure_fired_strong_partial = SSM_TR_no_trans_Revoke_Procedure;
      }
      outC->Revoke_Procedure_fired_strong = _24_Revoke_Procedure_fired_strong_partial;
      break;
    case SSM_st_waitingDriverRevoke_Revoke_Procedure :
      if (tr_1_guard_waitingDriverRevoke_Revoke_Procedure) {
        _21_Revoke_Procedure_fired_strong_partial =
          SSM_TR_waitingDriverRevoke_no_PostTrip_1_waitingDriverRevoke_Revoke_Procedure;
      }
      else if (tr_2_guard_waitingDriverRevoke_Revoke_Procedure) {
        _21_Revoke_Procedure_fired_strong_partial =
          SSM_TR_waitingDriverRevoke_waitingModeChange_2_waitingDriverRevoke_Revoke_Procedure;
      }
      else {
        _21_Revoke_Procedure_fired_strong_partial = SSM_TR_no_trans_Revoke_Procedure;
      }
      outC->Revoke_Procedure_fired_strong = _21_Revoke_Procedure_fired_strong_partial;
      break;
    case SSM_st_waitingRBC_Msg18_Revoke_Procedure :
      if (tr_1_guard_waitingRBC_Msg18_Revoke_Procedure) {
        _18_Revoke_Procedure_fired_strong_partial =
          SSM_TR_waitingRBC_Msg18_no_PostTrip_1_waitingRBC_Msg18_Revoke_Procedure;
      }
      else if (tr_2_guard_waitingRBC_Msg18_Revoke_Procedure) {
        _18_Revoke_Procedure_fired_strong_partial =
          SSM_TR_waitingRBC_Msg18_waitingDriverRevoke_2_waitingRBC_Msg18_Revoke_Procedure;
      }
      else {
        _18_Revoke_Procedure_fired_strong_partial = SSM_TR_no_trans_Revoke_Procedure;
      }
      outC->Revoke_Procedure_fired_strong = _18_Revoke_Procedure_fired_strong_partial;
      break;
    case SSM_st_no_PostTrip_Revoke_Procedure :
      if (tr_1_guard_no_PostTrip_Revoke_Procedure) {
        Revoke_Procedure_fired_strong_partial =
          SSM_TR_no_PostTrip_waitingRBC_Msg18_1_no_PostTrip_Revoke_Procedure;
      }
      else {
        Revoke_Procedure_fired_strong_partial = SSM_TR_no_trans_Revoke_Procedure;
      }
      outC->Revoke_Procedure_fired_strong = Revoke_Procedure_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* Revoke_Procedure: */
  switch (outC->Revoke_Procedure_state_act) {
    case SSM_st_waitingModeChange_Revoke_Procedure :
      _15_Revoke_Procedure_fired_partial = outC->Revoke_Procedure_fired_strong;
      _14_Revoke_Procedure_reset_nxt_partial = kcg_false;
      _13_Revoke_Procedure_state_nxt_partial =
        SSM_st_waitingModeChange_Revoke_Procedure;
      outC->TIU_driverWindow = _11_TIU_driverWindow_partial;
      outC->Revoke_Procedure_state_nxt = _13_Revoke_Procedure_state_nxt_partial;
      break;
    case SSM_st_waitingDriverRevoke_Revoke_Procedure :
      _10_Revoke_Procedure_fired_partial = outC->Revoke_Procedure_fired_strong;
      _9_Revoke_Procedure_reset_nxt_partial = kcg_false;
      _8_Revoke_Procedure_state_nxt_partial =
        SSM_st_waitingDriverRevoke_Revoke_Procedure;
      outC->_L1_waitingDriverRevoke_Revoke_Procedure = kcg_true;
      _6_TIU_driverWindow_partial = outC->_L1_waitingDriverRevoke_Revoke_Procedure;
      outC->TIU_driverWindow = _6_TIU_driverWindow_partial;
      outC->Revoke_Procedure_state_nxt = _8_Revoke_Procedure_state_nxt_partial;
      break;
    case SSM_st_waitingRBC_Msg18_Revoke_Procedure :
      _1_TIU_driverWindow_partial = kcg_false;
      _5_Revoke_Procedure_fired_partial = outC->Revoke_Procedure_fired_strong;
      _4_Revoke_Procedure_reset_nxt_partial = kcg_false;
      _3_Revoke_Procedure_state_nxt_partial =
        SSM_st_waitingRBC_Msg18_Revoke_Procedure;
      outC->TIU_driverWindow = _1_TIU_driverWindow_partial;
      outC->Revoke_Procedure_state_nxt = _3_Revoke_Procedure_state_nxt_partial;
      break;
    case SSM_st_no_PostTrip_Revoke_Procedure :
      TIU_driverWindow_partial = kcg_false;
      Revoke_Procedure_fired_partial = outC->Revoke_Procedure_fired_strong;
      Revoke_Procedure_reset_nxt_partial = kcg_false;
      Revoke_Procedure_state_nxt_partial = SSM_st_no_PostTrip_Revoke_Procedure;
      outC->TIU_driverWindow = TIU_driverWindow_partial;
      outC->Revoke_Procedure_state_nxt = Revoke_Procedure_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  Revoke_Procedure_reset_sel = outC->Revoke_Procedure_reset_nxt;
  /* Revoke_Procedure: */
  switch (outC->Revoke_Procedure_state_act) {
    case SSM_st_waitingModeChange_Revoke_Procedure :
      outC->Revoke_Procedure_reset_nxt = _14_Revoke_Procedure_reset_nxt_partial;
      outC->Revoke_Procedure_fired = _15_Revoke_Procedure_fired_partial;
      break;
    case SSM_st_waitingDriverRevoke_Revoke_Procedure :
      outC->Revoke_Procedure_reset_nxt = _9_Revoke_Procedure_reset_nxt_partial;
      outC->Revoke_Procedure_fired = _10_Revoke_Procedure_fired_partial;
      break;
    case SSM_st_waitingRBC_Msg18_Revoke_Procedure :
      outC->Revoke_Procedure_reset_nxt = _4_Revoke_Procedure_reset_nxt_partial;
      outC->Revoke_Procedure_fired = _5_Revoke_Procedure_fired_partial;
      break;
    case SSM_st_no_PostTrip_Revoke_Procedure :
      outC->Revoke_Procedure_reset_nxt = Revoke_Procedure_reset_nxt_partial;
      outC->Revoke_Procedure_fired = Revoke_Procedure_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->Revoke_Procedure_state_sel) {
    case SSM_st_waitingModeChange_Revoke_Procedure :
      _23_Revoke_Procedure_reset_act_partial =
        tr_1_guard_waitingModeChange_Revoke_Procedure;
      break;
    case SSM_st_waitingDriverRevoke_Revoke_Procedure :
      if (tr_1_guard_waitingDriverRevoke_Revoke_Procedure) {
        _20_Revoke_Procedure_reset_act_partial = kcg_true;
      }
      else {
        _20_Revoke_Procedure_reset_act_partial =
          tr_2_guard_waitingDriverRevoke_Revoke_Procedure;
      }
      break;
    case SSM_st_waitingRBC_Msg18_Revoke_Procedure :
      if (tr_1_guard_waitingRBC_Msg18_Revoke_Procedure) {
        _17_Revoke_Procedure_reset_act_partial = kcg_true;
      }
      else {
        _17_Revoke_Procedure_reset_act_partial =
          tr_2_guard_waitingRBC_Msg18_Revoke_Procedure;
      }
      break;
    case SSM_st_no_PostTrip_Revoke_Procedure :
      Revoke_Procedure_reset_act_partial = tr_1_guard_no_PostTrip_Revoke_Procedure;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  Revoke_Procedure_reset_prv = outC->Revoke_Procedure_reset_act;
  /* Revoke_Procedure: */
  switch (outC->Revoke_Procedure_state_sel) {
    case SSM_st_waitingModeChange_Revoke_Procedure :
      outC->Revoke_Procedure_reset_act = _23_Revoke_Procedure_reset_act_partial;
      break;
    case SSM_st_waitingDriverRevoke_Revoke_Procedure :
      outC->Revoke_Procedure_reset_act = _20_Revoke_Procedure_reset_act_partial;
      break;
    case SSM_st_waitingRBC_Msg18_Revoke_Procedure :
      outC->Revoke_Procedure_reset_act = _17_Revoke_Procedure_reset_act_partial;
      break;
    case SSM_st_no_PostTrip_Revoke_Procedure :
      outC->Revoke_Procedure_reset_act = Revoke_Procedure_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L6 = inEBFromML;
  outC->_L13 = outC->_L6 | outC->_L36;
  outC->outEB = outC->_L13;
}

#ifndef KCG_USER_DEFINED_INIT
void Procedure_TRIP_init_EVC_MEM_Support_Pkg(
  outC_Procedure_TRIP_EVC_MEM_Support_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L37 = kcg_true;
  outC->_L36 = kcg_true;
  outC->_L35 = kcg_true;
  outC->_L34 = kcg_true;
  outC->_L29 = M_MODE_Full_Supervision;
  outC->_L26.compatibleModeAndLevel = kcg_true;
  outC->_L26.level = M_LEVEL_Level_0;
  outC->_L26.newLevel = kcg_true;
  outC->_L26.Mode = M_MODE_Full_Supervision;
  outC->_L26.newMode = kcg_true;
  outC->_L27 = kcg_true;
  outC->_L28 = M_MODE_Full_Supervision;
  outC->_L24 = kcg_lit_int64(0);
  outC->_L23 = kcg_true;
  outC->_L22 = kcg_true;
  outC->_L21 = kcg_lit_int64(0);
  outC->_L20.radioDevice = kcg_lit_int64(0);
  outC->_L20.receivedSystemTime = kcg_lit_int64(0);
  outC->_L20.nid_message = kcg_lit_int64(0);
  outC->_L20.t_train = kcg_lit_int64(0);
  outC->_L20.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L20.nid_lrbg = kcg_lit_int64(0);
  outC->_L20.t_train_reference = kcg_lit_int64(0);
  outC->_L20.nid_em = kcg_lit_int64(0);
  outC->_L20.q_scale = Q_SCALE_10_cm_scale;
  outC->_L20.d_sr = kcg_lit_int64(0);
  outC->_L20.t_sh_rqst = kcg_lit_int64(0);
  outC->_L20.d_ref = kcg_lit_int64(0);
  outC->_L20.q_dir = Q_DIR_Reverse;
  outC->_L20.d_emergencystop = kcg_lit_int64(0);
  outC->_L20.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L19 = kcg_true;
  outC->_L18.valid = kcg_true;
  outC->_L18.source = msrc_undefined_Common_Types_Pkg;
  outC->_L18.radioMetadata.t_train_reference = kcg_true;
  outC->_L18.radioMetadata.nid_em = kcg_true;
  outC->_L18.radioMetadata.q_scale = kcg_true;
  outC->_L18.radioMetadata.d_sr = kcg_true;
  outC->_L18.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L18.radioMetadata.d_ref = kcg_true;
  outC->_L18.radioMetadata.q_dir = kcg_true;
  outC->_L18.radioMetadata.d_emergencystop = kcg_true;
  outC->_L18.radioMetadata.m_version = kcg_true;
  outC->_L18.BG_Common_Header.valid = kcg_true;
  outC->_L18.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L18.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L18.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L18.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L18.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L18.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L18.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L18.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L18.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L18.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L18.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L18.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L18.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L18.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L18.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L18.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L18.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L18.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L18.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L18.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L18.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L18.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L18.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L18.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L18.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L18.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L18.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L18.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L18.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L18.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L18.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L18.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L18.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L18.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L18.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L18.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L18.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L18.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L18.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L18.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L18.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L18.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx = 0; idx < 30; idx++) {
    outC->_L18.packets.PacketHeaders[idx].nid_packet = kcg_lit_int64(0);
    outC->_L18.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L18.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L18.packets.PacketHeaders[idx].startAddress = kcg_lit_int64(0);
    outC->_L18.packets.PacketHeaders[idx].endAddress = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L18.packets.PacketData[idx1] = kcg_lit_int64(0);
  }
  outC->_L18.sendingRBC.valid = kcg_true;
  outC->_L18.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L18.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L18.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L13 = kcg_true;
  outC->_L6 = kcg_true;
  outC->isPostTrip = kcg_true;
  outC->msg18 = kcg_true;
  outC->Revoke_Procedure_fired = SSM_TR_no_trans_Revoke_Procedure;
  outC->Revoke_Procedure_fired_strong = SSM_TR_no_trans_Revoke_Procedure;
  outC->Revoke_Procedure_state_act = SSM_st_no_PostTrip_Revoke_Procedure;
  outC->Revoke_Procedure_state_sel = SSM_st_no_PostTrip_Revoke_Procedure;
  outC->_L1_waitingModeChange_Revoke_Procedure = kcg_true;
  outC->_L1_waitingDriverRevoke_Revoke_Procedure = kcg_true;
  outC->TIU_driverWindow = kcg_true;
  outC->outEB = kcg_true;
  outC->Revoke_Procedure_reset_act = kcg_false;
  outC->Revoke_Procedure_reset_nxt = kcg_false;
  outC->Revoke_Procedure_state_nxt = SSM_st_no_PostTrip_Revoke_Procedure;
  outC->revokeEB = kcg_false;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Procedure_TRIP_reset_EVC_MEM_Support_Pkg(
  outC_Procedure_TRIP_EVC_MEM_Support_Pkg *outC)
{
  outC->Revoke_Procedure_reset_act = kcg_false;
  outC->Revoke_Procedure_reset_nxt = kcg_false;
  outC->Revoke_Procedure_state_nxt = SSM_st_no_PostTrip_Revoke_Procedure;
  outC->revokeEB = kcg_false;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_Procedure_TRIP_EVC_MEM_Support_Pkg(
  SV_Procedure_TRIP_EVC_MEM_Support_Pkg *SV,
  outC_Procedure_TRIP_EVC_MEM_Support_Pkg *outC)
{
  SV->Context_revokeEB = outC->revokeEB;
  SV->Context_Revoke_Procedure_reset_nxt = outC->Revoke_Procedure_reset_nxt;
  SV->Context_Revoke_Procedure_reset_act = outC->Revoke_Procedure_reset_act;
  SV->Context_Revoke_Procedure_state_nxt = outC->Revoke_Procedure_state_nxt;
}

void kcg_load_SV_Procedure_TRIP_EVC_MEM_Support_Pkg(
  outC_Procedure_TRIP_EVC_MEM_Support_Pkg *outC,
  SV_Procedure_TRIP_EVC_MEM_Support_Pkg *SV)
{
  outC->revokeEB = SV->Context_revokeEB;
  outC->Revoke_Procedure_reset_nxt = SV->Context_Revoke_Procedure_reset_nxt;
  outC->Revoke_Procedure_reset_act = SV->Context_Revoke_Procedure_reset_act;
  outC->Revoke_Procedure_state_nxt = SV->Context_Revoke_Procedure_state_nxt;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Procedure_TRIP_EVC_MEM_Support_Pkg.c
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

