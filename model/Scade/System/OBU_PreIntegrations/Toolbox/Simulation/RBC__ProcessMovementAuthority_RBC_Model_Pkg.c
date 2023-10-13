/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC__ProcessMovementAuthority_RBC_Model_Pkg.h"

/* RBC_Model_Pkg::RBC__ProcessMovementAuthority/ */
void RBC__ProcessMovementAuthority_RBC_Model_Pkg(
  /* inDataBus/ */
  RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* inRadioTrainTrackMessage/ */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  /* inTriggeredRadioTrackTrainMessage/ */
  CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessage,
  outC_RBC__ProcessMovementAuthority_RBC_Model_Pkg *outC)
{
  /* radioTrackTrainMessageWasSentTimestamp/ */
  T_TRAIN radioTrackTrainMessageWasSentTimestamp_partial;
  /* session/ */
  SessionManagement_T session_partial;
  /* messageQueue/ */
  _2_RadioTrackTrainMessageQueue_T messageQueue_partial;
  /* MOVEMENT_AUTHORITY_SM: */
  SSM_ST_MOVEMENT_AUTHORITY_SM MOVEMENT_AUTHORITY_SM_state_nxt_partial;
  /* MOVEMENT_AUTHORITY_SM: */
  kcg_bool MOVEMENT_AUTHORITY_SM_reset_nxt_partial;
  /* MOVEMENT_AUTHORITY_SM: */
  SSM_TR_MOVEMENT_AUTHORITY_SM MOVEMENT_AUTHORITY_SM_fired_partial;
  /* radioTrackTrainMessageWasSentTimestamp/ */
  T_TRAIN _1_radioTrackTrainMessageWasSentTimestamp_partial;
  /* session/ */
  SessionManagement_T _2_session_partial;
  /* messageQueue/ */
  _2_RadioTrackTrainMessageQueue_T _3_messageQueue_partial;
  /* MOVEMENT_AUTHORITY_SM: */
  SSM_ST_MOVEMENT_AUTHORITY_SM _4_MOVEMENT_AUTHORITY_SM_state_nxt_partial;
  /* MOVEMENT_AUTHORITY_SM: */
  kcg_bool _5_MOVEMENT_AUTHORITY_SM_reset_nxt_partial;
  /* MOVEMENT_AUTHORITY_SM: */
  SSM_TR_MOVEMENT_AUTHORITY_SM _6_MOVEMENT_AUTHORITY_SM_fired_partial;
  /* session/ */
  SessionManagement_T _7_session_partial;
  /* session/ */
  SessionManagement_T _8_session_partial;
  /* radioTrackTrainMessageWasSentTimestamp/ */
  T_TRAIN _9_radioTrackTrainMessageWasSentTimestamp_partial;
  /* session/ */
  SessionManagement_T _10_session_partial;
  /* messageQueue/ */
  _2_RadioTrackTrainMessageQueue_T _11_messageQueue_partial;
  /* MOVEMENT_AUTHORITY_SM: */
  SSM_ST_MOVEMENT_AUTHORITY_SM _12_MOVEMENT_AUTHORITY_SM_state_nxt_partial;
  /* MOVEMENT_AUTHORITY_SM: */
  kcg_bool _13_MOVEMENT_AUTHORITY_SM_reset_nxt_partial;
  /* MOVEMENT_AUTHORITY_SM: */
  SSM_TR_MOVEMENT_AUTHORITY_SM _14_MOVEMENT_AUTHORITY_SM_fired_partial;
  /* radioTrackTrainMessageWasSentTimestamp/ */
  T_TRAIN _15_radioTrackTrainMessageWasSentTimestamp_partial;
  /* session/ */
  SessionManagement_T _16_session_partial;
  /* messageQueue/ */
  _2_RadioTrackTrainMessageQueue_T _17_messageQueue_partial;
  /* MOVEMENT_AUTHORITY_SM: */
  SSM_ST_MOVEMENT_AUTHORITY_SM _18_MOVEMENT_AUTHORITY_SM_state_nxt_partial;
  /* MOVEMENT_AUTHORITY_SM: */
  kcg_bool _19_MOVEMENT_AUTHORITY_SM_reset_nxt_partial;
  /* MOVEMENT_AUTHORITY_SM: */
  SSM_TR_MOVEMENT_AUTHORITY_SM _20_MOVEMENT_AUTHORITY_SM_fired_partial;
  /* radioTrackTrainMessageWasSentTimestamp/ */
  T_TRAIN _21_radioTrackTrainMessageWasSentTimestamp_partial;
  /* session/ */
  SessionManagement_T _22_session_partial;
  /* messageQueue/ */
  _2_RadioTrackTrainMessageQueue_T _23_messageQueue_partial;
  /* MOVEMENT_AUTHORITY_SM: */
  SSM_ST_MOVEMENT_AUTHORITY_SM _24_MOVEMENT_AUTHORITY_SM_state_nxt_partial;
  /* MOVEMENT_AUTHORITY_SM: */
  kcg_bool _25_MOVEMENT_AUTHORITY_SM_reset_nxt_partial;
  /* MOVEMENT_AUTHORITY_SM: */
  SSM_TR_MOVEMENT_AUTHORITY_SM _26_MOVEMENT_AUTHORITY_SM_fired_partial;
  /* radioTrackTrainMessageWasSentTimestamp/ */
  T_TRAIN _27_radioTrackTrainMessageWasSentTimestamp_partial;
  /* session/ */
  SessionManagement_T _28_session_partial;
  /* messageQueue/ */
  _2_RadioTrackTrainMessageQueue_T _29_messageQueue_partial;
  /* MOVEMENT_AUTHORITY_SM: */
  SSM_ST_MOVEMENT_AUTHORITY_SM _30_MOVEMENT_AUTHORITY_SM_state_nxt_partial;
  /* MOVEMENT_AUTHORITY_SM: */
  kcg_bool _31_MOVEMENT_AUTHORITY_SM_reset_nxt_partial;
  /* MOVEMENT_AUTHORITY_SM: */
  SSM_TR_MOVEMENT_AUTHORITY_SM _32_MOVEMENT_AUTHORITY_SM_fired_partial;
  /* MOVEMENT_AUTHORITY_SM: */
  SSM_ST_MOVEMENT_AUTHORITY_SM MOVEMENT_AUTHORITY_SM_state_act_partial;
  /* MOVEMENT_AUTHORITY_SM: */
  kcg_bool MOVEMENT_AUTHORITY_SM_reset_act_partial;
  /* MOVEMENT_AUTHORITY_SM: */
  SSM_TR_MOVEMENT_AUTHORITY_SM MOVEMENT_AUTHORITY_SM_fired_strong_partial;
  /* MOVEMENT_AUTHORITY_SM:IDLE:<2> */
  kcg_bool tr_2_guard_IDLE_MOVEMENT_AUTHORITY_SM;
  /* MOVEMENT_AUTHORITY_SM:IDLE:<1> */
  kcg_bool tr_1_guard_IDLE_MOVEMENT_AUTHORITY_SM;
  /* MOVEMENT_AUTHORITY_SM: */
  SSM_ST_MOVEMENT_AUTHORITY_SM _33_MOVEMENT_AUTHORITY_SM_state_act_partial;
  /* MOVEMENT_AUTHORITY_SM: */
  kcg_bool _34_MOVEMENT_AUTHORITY_SM_reset_act_partial;
  /* MOVEMENT_AUTHORITY_SM: */
  SSM_TR_MOVEMENT_AUTHORITY_SM _35_MOVEMENT_AUTHORITY_SM_fired_strong_partial;
  /* MOVEMENT_AUTHORITY_SM:SEND_MA:<2> */
  kcg_bool tr_2_guard_SEND_MA_MOVEMENT_AUTHORITY_SM;
  /* MOVEMENT_AUTHORITY_SM:SEND_MA:<1> */
  kcg_bool tr_1_guard_SEND_MA_MOVEMENT_AUTHORITY_SM;
  /* MOVEMENT_AUTHORITY_SM: */
  SSM_ST_MOVEMENT_AUTHORITY_SM _36_MOVEMENT_AUTHORITY_SM_state_act_partial;
  /* MOVEMENT_AUTHORITY_SM: */
  kcg_bool _37_MOVEMENT_AUTHORITY_SM_reset_act_partial;
  /* MOVEMENT_AUTHORITY_SM: */
  SSM_TR_MOVEMENT_AUTHORITY_SM _38_MOVEMENT_AUTHORITY_SM_fired_strong_partial;
  /* MOVEMENT_AUTHORITY_SM:AWAIT_ACKNOWLEDGEMENT:<1> */
  kcg_bool tr_1_guard_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
  /* MOVEMENT_AUTHORITY_SM: */
  SSM_ST_MOVEMENT_AUTHORITY_SM _39_MOVEMENT_AUTHORITY_SM_state_act_partial;
  /* MOVEMENT_AUTHORITY_SM: */
  kcg_bool _40_MOVEMENT_AUTHORITY_SM_reset_act_partial;
  /* MOVEMENT_AUTHORITY_SM: */
  SSM_TR_MOVEMENT_AUTHORITY_SM _41_MOVEMENT_AUTHORITY_SM_fired_strong_partial;
  /* MOVEMENT_AUTHORITY_SM:TRY_PROCESS_ACKNOWLEDGEMENT:<5> */
  kcg_bool tr_5_guard_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
  /* MOVEMENT_AUTHORITY_SM:TRY_PROCESS_ACKNOWLEDGEMENT:<4> */
  kcg_bool tr_4_guard_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
  /* MOVEMENT_AUTHORITY_SM:TRY_PROCESS_ACKNOWLEDGEMENT:<3> */
  kcg_bool tr_3_guard_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
  /* MOVEMENT_AUTHORITY_SM:TRY_PROCESS_ACKNOWLEDGEMENT:<2> */
  kcg_bool tr_2_guard_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
  /* MOVEMENT_AUTHORITY_SM:TRY_PROCESS_ACKNOWLEDGEMENT:<1> */
  kcg_bool tr_1_guard_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
  /* MOVEMENT_AUTHORITY_SM: */
  SSM_ST_MOVEMENT_AUTHORITY_SM _42_MOVEMENT_AUTHORITY_SM_state_act_partial;
  /* MOVEMENT_AUTHORITY_SM: */
  kcg_bool _43_MOVEMENT_AUTHORITY_SM_reset_act_partial;
  /* MOVEMENT_AUTHORITY_SM: */
  SSM_TR_MOVEMENT_AUTHORITY_SM _44_MOVEMENT_AUTHORITY_SM_fired_strong_partial;
  /* MOVEMENT_AUTHORITY_SM:AWAIT_MA:<1> */
  kcg_bool tr_1_guard_AWAIT_MA_MOVEMENT_AUTHORITY_SM;
  /* MOVEMENT_AUTHORITY_SM: */
  SSM_ST_MOVEMENT_AUTHORITY_SM _45_MOVEMENT_AUTHORITY_SM_state_act_partial;
  /* MOVEMENT_AUTHORITY_SM: */
  kcg_bool _46_MOVEMENT_AUTHORITY_SM_reset_act_partial;
  /* MOVEMENT_AUTHORITY_SM: */
  SSM_TR_MOVEMENT_AUTHORITY_SM _47_MOVEMENT_AUTHORITY_SM_fired_strong_partial;
  /* MOVEMENT_AUTHORITY_SM:UPDATE_POSITION:<2> */
  kcg_bool tr_2_guard_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM;
  /* MOVEMENT_AUTHORITY_SM:UPDATE_POSITION:<1> */
  kcg_bool tr_1_guard_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM;
  /* invalidAcknowledgement/ */
  kcg_bool last_invalidAcknowledgement;
  /* validAcknowledgement/ */
  kcg_bool last_validAcknowledgement;
  /* radioTrackTrainMessageWasSentTimestamp/ */
  T_TRAIN last_radioTrackTrainMessageWasSentTimestamp;
  /* MOVEMENT_AUTHORITY_SM: */
  kcg_bool MOVEMENT_AUTHORITY_SM_reset_sel;
  /* MOVEMENT_AUTHORITY_SM: */
  kcg_bool MOVEMENT_AUTHORITY_SM_reset_prv;

  last_invalidAcknowledgement = outC->invalidAcknowledgement;
  last_validAcknowledgement = outC->validAcknowledgement;
  last_radioTrackTrainMessageWasSentTimestamp =
    outC->radioTrackTrainMessageWasSentTimestamp;
  outC->MOVEMENT_AUTHORITY_SM_state_sel = outC->MOVEMENT_AUTHORITY_SM_state_nxt;
  switch (outC->MOVEMENT_AUTHORITY_SM_state_sel) {
    case SSM_st_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM :
      tr_2_guard_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM = kcg_true;
      break;
    default :
      /* this branch is empty */
      break;
  }
  kcg_copy_CompressedRadioMessage_TM(
    &outC->_L96,
    inTriggeredRadioTrackTrainMessage);
  kcg_copy_CompressedRadioMessage_TM(&outC->radioTrackTrainMessage, &outC->_L96);
  kcg_copy_CompressedRadioMessage_TM(&outC->_L99, &outC->radioTrackTrainMessage);
  /* _L90=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#6)/ */
  RadioTrackTrainMessage__G_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_L99,
    &outC->_11_Context_RadioTrackTrainMessage__GetHeader_6);
  kcg_copy_Radio_TrackTrain_Header_T_TM(
    &outC->_L90,
    &outC->_11_Context_RadioTrackTrainMessage__GetHeader_6.outRadioTrackTrainHeader);
  /* _L89=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#5)/ */
  RadioTrackTrainHeader__Ge_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_L90,
    &outC->_10_Context_RadioTrackTrainHeader__Get_NID_MESSAGE_5);
  outC->_L89 =
    outC->_10_Context_RadioTrackTrainHeader__Get_NID_MESSAGE_5.out_NID_MESSAGE;
  outC->radioTrackTrainMessageId = outC->_L89;
  switch (outC->MOVEMENT_AUTHORITY_SM_state_sel) {
    case SSM_st_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM :
      tr_1_guard_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM =
        outC->radioTrackTrainMessageId == kcg_lit_int64(3);
      if (tr_1_guard_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM) {
        _45_MOVEMENT_AUTHORITY_SM_state_act_partial =
          SSM_st_SEND_MA_MOVEMENT_AUTHORITY_SM;
      }
      else if (tr_2_guard_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM) {
        _45_MOVEMENT_AUTHORITY_SM_state_act_partial =
          SSM_st_AWAIT_MA_MOVEMENT_AUTHORITY_SM;
      }
      else {
        _45_MOVEMENT_AUTHORITY_SM_state_act_partial =
          SSM_st_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM;
      }
      break;
    case SSM_st_AWAIT_MA_MOVEMENT_AUTHORITY_SM :
      tr_1_guard_AWAIT_MA_MOVEMENT_AUTHORITY_SM =
        outC->radioTrackTrainMessageId == kcg_lit_int64(3);
      if (tr_1_guard_AWAIT_MA_MOVEMENT_AUTHORITY_SM) {
        _42_MOVEMENT_AUTHORITY_SM_state_act_partial =
          SSM_st_SEND_MA_MOVEMENT_AUTHORITY_SM;
      }
      else {
        _42_MOVEMENT_AUTHORITY_SM_state_act_partial =
          SSM_st_AWAIT_MA_MOVEMENT_AUTHORITY_SM;
      }
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM :
      tr_5_guard_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM =
        last_invalidAcknowledgement;
      break;
    default :
      /* this branch is empty */
      break;
  }
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->_L92,
    inRadioTrainTrackMessage);
  /* _L93=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#5)/ */
  RadioTrainTrackMessage__G_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L92,
    &outC->_9_Context_RadioTrainTrackMessage__GetHeader_5);
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
    &outC->_L93,
    &outC->_9_Context_RadioTrainTrackMessage__GetHeader_5.outRadioTrainTrackHeader);
  /* _L94=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_MESSAGE#2)/ */
  _100_RadioTrainTrackHeade_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L93,
    &outC->_8_Context_RadioTrainTrackHeader__Get_NID_MESSAGE_2);
  outC->_L94 =
    outC->_8_Context_RadioTrainTrackHeader__Get_NID_MESSAGE_2.out_NID_MESSAGE;
  outC->radioTrainTrackMessageId = outC->_L94;
  /* MOVEMENT_AUTHORITY_SM: */
  switch (outC->MOVEMENT_AUTHORITY_SM_state_sel) {
    case SSM_st_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM :
      outC->MOVEMENT_AUTHORITY_SM_state_act =
        _45_MOVEMENT_AUTHORITY_SM_state_act_partial;
      break;
    case SSM_st_AWAIT_MA_MOVEMENT_AUTHORITY_SM :
      outC->MOVEMENT_AUTHORITY_SM_state_act =
        _42_MOVEMENT_AUTHORITY_SM_state_act_partial;
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM :
      tr_4_guard_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM =
        last_invalidAcknowledgement & ((outC->radioTrainTrackMessageId ==
            kcg_lit_int64(146)) | (outC->radioTrainTrackMessageId ==
            kcg_lit_int64(137)));
      tr_3_guard_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM =
        last_validAcknowledgement;
      tr_2_guard_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM =
        last_validAcknowledgement & (outC->radioTrainTrackMessageId ==
          kcg_lit_int64(132));
      tr_1_guard_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM =
        last_validAcknowledgement & ((outC->radioTrackTrainMessageId ==
            kcg_lit_int64(3)) | ((outC->radioTrackTrainMessageId ==
              kcg_lit_int64(3)) & (outC->radioTrainTrackMessageId ==
              kcg_lit_int64(132))));
      if (tr_1_guard_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM) {
        _39_MOVEMENT_AUTHORITY_SM_state_act_partial =
          SSM_st_SEND_MA_MOVEMENT_AUTHORITY_SM;
      }
      else if (tr_2_guard_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM) {
        _39_MOVEMENT_AUTHORITY_SM_state_act_partial =
          SSM_st_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM;
      }
      else if (tr_3_guard_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM) {
        _39_MOVEMENT_AUTHORITY_SM_state_act_partial = SSM_st_IDLE_MOVEMENT_AUTHORITY_SM;
      }
      else if (tr_4_guard_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM) {
        _39_MOVEMENT_AUTHORITY_SM_state_act_partial =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
      }
      else if (tr_5_guard_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM) {
        _39_MOVEMENT_AUTHORITY_SM_state_act_partial =
          SSM_st_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
      }
      else {
        _39_MOVEMENT_AUTHORITY_SM_state_act_partial =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
      }
      outC->MOVEMENT_AUTHORITY_SM_state_act =
        _39_MOVEMENT_AUTHORITY_SM_state_act_partial;
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM :
      tr_1_guard_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM =
        (outC->radioTrainTrackMessageId == kcg_lit_int64(146)) |
        (outC->radioTrainTrackMessageId == kcg_lit_int64(137));
      if (tr_1_guard_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM) {
        _36_MOVEMENT_AUTHORITY_SM_state_act_partial =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
      }
      else {
        _36_MOVEMENT_AUTHORITY_SM_state_act_partial =
          SSM_st_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
      }
      outC->MOVEMENT_AUTHORITY_SM_state_act =
        _36_MOVEMENT_AUTHORITY_SM_state_act_partial;
      break;
    case SSM_st_SEND_MA_MOVEMENT_AUTHORITY_SM :
      tr_2_guard_SEND_MA_MOVEMENT_AUTHORITY_SM =
        (outC->radioTrainTrackMessageId != kcg_lit_int64(146)) &
        (outC->radioTrainTrackMessageId != kcg_lit_int64(137));
      tr_1_guard_SEND_MA_MOVEMENT_AUTHORITY_SM =
        (outC->radioTrainTrackMessageId == kcg_lit_int64(146)) |
        (outC->radioTrainTrackMessageId == kcg_lit_int64(137));
      if (tr_1_guard_SEND_MA_MOVEMENT_AUTHORITY_SM) {
        _33_MOVEMENT_AUTHORITY_SM_state_act_partial =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
      }
      else if (tr_2_guard_SEND_MA_MOVEMENT_AUTHORITY_SM) {
        _33_MOVEMENT_AUTHORITY_SM_state_act_partial =
          SSM_st_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
      }
      else {
        _33_MOVEMENT_AUTHORITY_SM_state_act_partial =
          SSM_st_SEND_MA_MOVEMENT_AUTHORITY_SM;
      }
      outC->MOVEMENT_AUTHORITY_SM_state_act =
        _33_MOVEMENT_AUTHORITY_SM_state_act_partial;
      break;
    case SSM_st_IDLE_MOVEMENT_AUTHORITY_SM :
      tr_2_guard_IDLE_MOVEMENT_AUTHORITY_SM = outC->radioTrainTrackMessageId ==
        kcg_lit_int64(132);
      tr_1_guard_IDLE_MOVEMENT_AUTHORITY_SM = (outC->radioTrackTrainMessageId ==
          kcg_lit_int64(3)) | ((outC->radioTrackTrainMessageId == kcg_lit_int64(
              3)) & (outC->radioTrainTrackMessageId == kcg_lit_int64(132)));
      if (tr_1_guard_IDLE_MOVEMENT_AUTHORITY_SM) {
        MOVEMENT_AUTHORITY_SM_state_act_partial = SSM_st_SEND_MA_MOVEMENT_AUTHORITY_SM;
      }
      else if (tr_2_guard_IDLE_MOVEMENT_AUTHORITY_SM) {
        MOVEMENT_AUTHORITY_SM_state_act_partial =
          SSM_st_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM;
      }
      else {
        MOVEMENT_AUTHORITY_SM_state_act_partial = SSM_st_IDLE_MOVEMENT_AUTHORITY_SM;
      }
      outC->MOVEMENT_AUTHORITY_SM_state_act = MOVEMENT_AUTHORITY_SM_state_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* MOVEMENT_AUTHORITY_SM: */
  switch (outC->MOVEMENT_AUTHORITY_SM_state_act) {
    case SSM_st_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM :
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM,
        inDataBus);
      kcg_copy_SessionManagement_T(
        &outC->_L11_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM,
        &outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session);
      /* MOVEMENT_AUTHORITY_SM:UPDATE_POSITION:_L3=(RBC_Session_Pkg::SessionManagement__GetPosData#1)/ */
      SessionManagement__GetPosData_RBC_Session_Pkg(
        &outC->_L11_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM,
        &outC->_7_Context_SessionManagement__GetPosData_1);
      kcg_copy_PosData_T(
        &outC->_L3_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM,
        &outC->_7_Context_SessionManagement__GetPosData_1.outPositionManagement);
      kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
        &outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM,
        inRadioTrainTrackMessage);
      /* MOVEMENT_AUTHORITY_SM:UPDATE_POSITION:_L5=(RBC_Session_Pkg::PosData__Update#1)/ */
      PosData__Update_RBC_Session_Pkg(
        &outC->_L3_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM,
        &outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM,
        &outC->Context_PosData__Update_1);
      kcg_copy_PosData_T(
        &outC->_L5_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM,
        &outC->Context_PosData__Update_1.outPosData);
      /* MOVEMENT_AUTHORITY_SM:UPDATE_POSITION:_L4=(RBC_Session_Pkg::SessionManagement__SetPosData#1)/ */
      SessionManagement__SetPosData_RBC_Session_Pkg(
        &outC->_L11_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM,
        &outC->_L5_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM,
        &outC->_6_Context_SessionManagement__SetPosData_1);
      kcg_copy_SessionManagement_T(
        &outC->_L4_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM,
        &outC->_6_Context_SessionManagement__SetPosData_1.outSessionManagement);
      kcg_copy_SessionManagement_T(
        &_28_session_partial,
        &outC->_L4_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM);
      kcg_copy_SessionManagement_T(&outC->session, &_28_session_partial);
      break;
    case SSM_st_AWAIT_MA_MOVEMENT_AUTHORITY_SM :
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM,
        inDataBus);
      kcg_copy_SessionManagement_T(
        &outC->_L4_AWAIT_MA_MOVEMENT_AUTHORITY_SM,
        &outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.session);
      kcg_copy_SessionManagement_T(
        &_22_session_partial,
        &outC->_L4_AWAIT_MA_MOVEMENT_AUTHORITY_SM);
      kcg_copy_SessionManagement_T(&outC->session, &_22_session_partial);
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM :
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM,
        inDataBus);
      kcg_copy_SessionManagement_T(
        &outC->_L32_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM,
        &outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session);
      kcg_copy_SessionManagement_T(
        &_16_session_partial,
        &outC->_L32_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM);
      kcg_copy_SessionManagement_T(&outC->session, &_16_session_partial);
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM :
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM,
        inDataBus);
      kcg_copy_SessionManagement_T(
        &outC->_L18_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM,
        &outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session);
      kcg_copy_SessionManagement_T(
        &_10_session_partial,
        &outC->_L18_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM);
      kcg_copy_SessionManagement_T(&outC->session, &_10_session_partial);
      break;
    case SSM_st_SEND_MA_MOVEMENT_AUTHORITY_SM :
      outC->IfBlock1_clock_SEND_MA_MOVEMENT_AUTHORITY_SM =
        (outC->radioTrackTrainMessageId == kcg_lit_int64(3)) &
        (outC->radioTrainTrackMessageId == kcg_lit_int64(132));
      /* MOVEMENT_AUTHORITY_SM:SEND_MA:IfBlock1: */
      if (outC->IfBlock1_clock_SEND_MA_MOVEMENT_AUTHORITY_SM) {
        kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
          &outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM,
          inDataBus);
        kcg_copy_SessionManagement_T(
          &outC->_L7_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM,
          &outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session);
        /* MOVEMENT_AUTHORITY_SM:SEND_MA:IfBlock1:then:_L1=(RBC_Session_Pkg::SessionManagement__GetPosData#3)/ */
        SessionManagement__GetPosData_RBC_Session_Pkg(
          &outC->_L7_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM,
          &outC->Context_SessionManagement__GetPosData_3);
        kcg_copy_PosData_T(
          &outC->_L1_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM,
          &outC->Context_SessionManagement__GetPosData_3.outPositionManagement);
        kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
          &outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM,
          inRadioTrainTrackMessage);
        /* MOVEMENT_AUTHORITY_SM:SEND_MA:IfBlock1:then:_L2=(RBC_Session_Pkg::PosData__Update#3)/ */
        PosData__Update_RBC_Session_Pkg(
          &outC->_L1_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM,
          &outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM,
          &outC->Context_PosData__Update_3);
        kcg_copy_PosData_T(
          &outC->_L2_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM,
          &outC->Context_PosData__Update_3.outPosData);
        /* MOVEMENT_AUTHORITY_SM:SEND_MA:IfBlock1:then:_L4=(RBC_Session_Pkg::SessionManagement__SetPosData#3)/ */
        SessionManagement__SetPosData_RBC_Session_Pkg(
          &outC->_L7_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM,
          &outC->_L2_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM,
          &outC->Context_SessionManagement__SetPosData_3);
        kcg_copy_SessionManagement_T(
          &outC->_L4_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM,
          &outC->Context_SessionManagement__SetPosData_3.outSessionManagement);
        kcg_copy_SessionManagement_T(
          &_8_session_partial,
          &outC->_L4_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM);
        kcg_copy_SessionManagement_T(&_2_session_partial, &_8_session_partial);
      }
      else {
        kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
          &outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM,
          inDataBus);
        kcg_copy_SessionManagement_T(
          &outC->_L4_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM,
          &outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session);
        kcg_copy_SessionManagement_T(
          &_7_session_partial,
          &outC->_L4_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM);
        kcg_copy_SessionManagement_T(&_2_session_partial, &_7_session_partial);
      }
      kcg_copy_SessionManagement_T(&outC->session, &_2_session_partial);
      break;
    case SSM_st_IDLE_MOVEMENT_AUTHORITY_SM :
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM,
        inDataBus);
      kcg_copy_SessionManagement_T(
        &outC->_L5_IDLE_MOVEMENT_AUTHORITY_SM,
        &outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.session);
      kcg_copy_SessionManagement_T(
        &session_partial,
        &outC->_L5_IDLE_MOVEMENT_AUTHORITY_SM);
      kcg_copy_SessionManagement_T(&outC->session, &session_partial);
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  kcg_copy_SessionManagement_T(&outC->_L105, &outC->session);
  /* MOVEMENT_AUTHORITY_SM: */
  switch (outC->MOVEMENT_AUTHORITY_SM_state_act) {
    case SSM_st_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM :
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM,
        inDataBus);
      kcg_copy__2_RadioTrackTrainMessageQueue_T(
        &outC->_L9_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM,
        &outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.messageQueue);
      kcg_copy__2_RadioTrackTrainMessageQueue_T(
        &_29_messageQueue_partial,
        &outC->_L9_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM);
      kcg_copy__2_RadioTrackTrainMessageQueue_T(
        &outC->messageQueue,
        &_29_messageQueue_partial);
      break;
    case SSM_st_AWAIT_MA_MOVEMENT_AUTHORITY_SM :
      kcg_copy__2_RadioTrackTrainMessageQueue_T(
        &outC->_L5_AWAIT_MA_MOVEMENT_AUTHORITY_SM,
        &outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.messageQueue);
      kcg_copy__2_RadioTrackTrainMessageQueue_T(
        &_23_messageQueue_partial,
        &outC->_L5_AWAIT_MA_MOVEMENT_AUTHORITY_SM);
      kcg_copy__2_RadioTrackTrainMessageQueue_T(
        &outC->messageQueue,
        &_23_messageQueue_partial);
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM :
      kcg_copy__2_RadioTrackTrainMessageQueue_T(
        &outC->_L33_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM,
        &outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue);
      kcg_copy__2_RadioTrackTrainMessageQueue_T(
        &_17_messageQueue_partial,
        &outC->_L33_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM);
      kcg_copy__2_RadioTrackTrainMessageQueue_T(
        &outC->messageQueue,
        &_17_messageQueue_partial);
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM :
      kcg_copy__2_RadioTrackTrainMessageQueue_T(
        &outC->_L17_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM,
        &outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue);
      kcg_copy__2_RadioTrackTrainMessageQueue_T(
        &_11_messageQueue_partial,
        &outC->_L17_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM);
      kcg_copy__2_RadioTrackTrainMessageQueue_T(
        &outC->messageQueue,
        &_11_messageQueue_partial);
      break;
    case SSM_st_SEND_MA_MOVEMENT_AUTHORITY_SM :
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM,
        inDataBus);
      kcg_copy__2_RadioTrackTrainMessageQueue_T(
        &outC->_L33_SEND_MA_MOVEMENT_AUTHORITY_SM,
        &outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue);
      kcg_copy_CompressedRadioMessage_TM(
        &outC->_L32_SEND_MA_MOVEMENT_AUTHORITY_SM,
        &outC->radioTrackTrainMessage);
      /* MOVEMENT_AUTHORITY_SM:SEND_MA:_L30=(RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__Create#2)/ */
      _51_RadioTrackTrainMessageQue_RBC_Collections_Pkg(
        &outC->_L32_SEND_MA_MOVEMENT_AUTHORITY_SM,
        &outC->_5_Context_RadioTrackTrainMessageQueueEntry__Create_2);
      kcg_copy_RadioTrackTrainMessageQueueEntry_T(
        &outC->_L30_SEND_MA_MOVEMENT_AUTHORITY_SM,
        &outC->_5_Context_RadioTrackTrainMessageQueueEntry__Create_2.outRadioTrackTrainMessageQueueEntry);
      /* MOVEMENT_AUTHORITY_SM:SEND_MA:_L29=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut#2)/ */
      _50_RadioTrackTrainMessageQue_RBC_Collections_Pkg(
        &outC->_L33_SEND_MA_MOVEMENT_AUTHORITY_SM,
        &outC->_L30_SEND_MA_MOVEMENT_AUTHORITY_SM,
        &outC->Context_RadioTrackTrainMessageQueue__TryPut_2);
      kcg_copy__2_RadioTrackTrainMessageQueue_T(
        &outC->_L29_SEND_MA_MOVEMENT_AUTHORITY_SM,
        &outC->Context_RadioTrackTrainMessageQueue__TryPut_2.outRadioTrackTrainMessageQueue);
      kcg_copy__2_RadioTrackTrainMessageQueue_T(
        &_3_messageQueue_partial,
        &outC->_L29_SEND_MA_MOVEMENT_AUTHORITY_SM);
      kcg_copy__2_RadioTrackTrainMessageQueue_T(
        &outC->messageQueue,
        &_3_messageQueue_partial);
      break;
    case SSM_st_IDLE_MOVEMENT_AUTHORITY_SM :
      kcg_copy__2_RadioTrackTrainMessageQueue_T(
        &outC->_L3_IDLE_MOVEMENT_AUTHORITY_SM,
        &outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.messageQueue);
      kcg_copy__2_RadioTrackTrainMessageQueue_T(
        &messageQueue_partial,
        &outC->_L3_IDLE_MOVEMENT_AUTHORITY_SM);
      kcg_copy__2_RadioTrackTrainMessageQueue_T(
        &outC->messageQueue,
        &messageQueue_partial);
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  kcg_copy__2_RadioTrackTrainMessageQueue_T(&outC->_L107, &outC->messageQueue);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->_L108, inDataBus);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->_L109, &outC->_L108);
  if (kcg_true) {
    kcg_copy__2_RadioTrackTrainMessageQueue_T(
      &outC->_L109.messageQueue,
      &outC->_L107);
  }
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->_L112, &outC->_L109);
  if (kcg_true) {
    kcg_copy_SessionManagement_T(&outC->_L112.session, &outC->_L105);
  }
  kcg_copy_CompressedRadioMessage_TM(
    &outC->_L106,
    inTriggeredRadioTrackTrainMessage);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->outTriggeredRadioTrackTrainMessage,
    &outC->_L106);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->outDataBus, &outC->_L112);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->_L111,
    inRadioTrainTrackMessage);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->outRadioTrainTrackMessage,
    &outC->_L111);
  switch (outC->MOVEMENT_AUTHORITY_SM_state_act) {
    case SSM_st_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM :
      _27_radioTrackTrainMessageWasSentTimestamp_partial =
        last_radioTrackTrainMessageWasSentTimestamp;
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* MOVEMENT_AUTHORITY_SM: */
  switch (outC->MOVEMENT_AUTHORITY_SM_state_sel) {
    case SSM_st_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM :
      if (tr_1_guard_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM) {
        _47_MOVEMENT_AUTHORITY_SM_fired_strong_partial =
          SSM_TR_UPDATE_POSITION_SEND_MA_1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM;
      }
      else if (tr_2_guard_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM) {
        _47_MOVEMENT_AUTHORITY_SM_fired_strong_partial =
          SSM_TR_UPDATE_POSITION_AWAIT_MA_2_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM;
      }
      else {
        _47_MOVEMENT_AUTHORITY_SM_fired_strong_partial =
          SSM_TR_no_trans_MOVEMENT_AUTHORITY_SM;
      }
      outC->MOVEMENT_AUTHORITY_SM_fired_strong =
        _47_MOVEMENT_AUTHORITY_SM_fired_strong_partial;
      break;
    case SSM_st_AWAIT_MA_MOVEMENT_AUTHORITY_SM :
      if (tr_1_guard_AWAIT_MA_MOVEMENT_AUTHORITY_SM) {
        _44_MOVEMENT_AUTHORITY_SM_fired_strong_partial =
          SSM_TR_AWAIT_MA_SEND_MA_1_AWAIT_MA_MOVEMENT_AUTHORITY_SM;
      }
      else {
        _44_MOVEMENT_AUTHORITY_SM_fired_strong_partial =
          SSM_TR_no_trans_MOVEMENT_AUTHORITY_SM;
      }
      outC->MOVEMENT_AUTHORITY_SM_fired_strong =
        _44_MOVEMENT_AUTHORITY_SM_fired_strong_partial;
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM :
      if (tr_1_guard_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM) {
        _41_MOVEMENT_AUTHORITY_SM_fired_strong_partial =
          SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_SEND_MA_1_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
      }
      else if (tr_2_guard_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM) {
        _41_MOVEMENT_AUTHORITY_SM_fired_strong_partial =
          _164_SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_UPDATE_POSITION_2_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
      }
      else if (tr_3_guard_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM) {
        _41_MOVEMENT_AUTHORITY_SM_fired_strong_partial =
          _165_SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_IDLE_3_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
      }
      else if (tr_4_guard_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM) {
        _41_MOVEMENT_AUTHORITY_SM_fired_strong_partial =
          _166_SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_TRY_PROCESS_ACKNOWLEDGEMENT_4_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
      }
      else if (tr_5_guard_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM) {
        _41_MOVEMENT_AUTHORITY_SM_fired_strong_partial =
          _167_SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_AWAIT_ACKNOWLEDGEMENT_5_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
      }
      else {
        _41_MOVEMENT_AUTHORITY_SM_fired_strong_partial =
          SSM_TR_no_trans_MOVEMENT_AUTHORITY_SM;
      }
      outC->MOVEMENT_AUTHORITY_SM_fired_strong =
        _41_MOVEMENT_AUTHORITY_SM_fired_strong_partial;
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM :
      if (tr_1_guard_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM) {
        _38_MOVEMENT_AUTHORITY_SM_fired_strong_partial =
          SSM_TR_AWAIT_ACKNOWLEDGEMENT_TRY_PROCESS_ACKNOWLEDGEMENT_1_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
      }
      else {
        _38_MOVEMENT_AUTHORITY_SM_fired_strong_partial =
          SSM_TR_no_trans_MOVEMENT_AUTHORITY_SM;
      }
      outC->MOVEMENT_AUTHORITY_SM_fired_strong =
        _38_MOVEMENT_AUTHORITY_SM_fired_strong_partial;
      break;
    case SSM_st_SEND_MA_MOVEMENT_AUTHORITY_SM :
      if (tr_1_guard_SEND_MA_MOVEMENT_AUTHORITY_SM) {
        _35_MOVEMENT_AUTHORITY_SM_fired_strong_partial =
          SSM_TR_SEND_MA_TRY_PROCESS_ACKNOWLEDGEMENT_1_SEND_MA_MOVEMENT_AUTHORITY_SM;
      }
      else if (tr_2_guard_SEND_MA_MOVEMENT_AUTHORITY_SM) {
        _35_MOVEMENT_AUTHORITY_SM_fired_strong_partial =
          SSM_TR_SEND_MA_AWAIT_ACKNOWLEDGEMENT_2_SEND_MA_MOVEMENT_AUTHORITY_SM;
      }
      else {
        _35_MOVEMENT_AUTHORITY_SM_fired_strong_partial =
          SSM_TR_no_trans_MOVEMENT_AUTHORITY_SM;
      }
      outC->MOVEMENT_AUTHORITY_SM_fired_strong =
        _35_MOVEMENT_AUTHORITY_SM_fired_strong_partial;
      break;
    case SSM_st_IDLE_MOVEMENT_AUTHORITY_SM :
      if (tr_1_guard_IDLE_MOVEMENT_AUTHORITY_SM) {
        MOVEMENT_AUTHORITY_SM_fired_strong_partial =
          SSM_TR_IDLE_SEND_MA_1_IDLE_MOVEMENT_AUTHORITY_SM;
      }
      else if (tr_2_guard_IDLE_MOVEMENT_AUTHORITY_SM) {
        MOVEMENT_AUTHORITY_SM_fired_strong_partial =
          SSM_TR_IDLE_UPDATE_POSITION_2_IDLE_MOVEMENT_AUTHORITY_SM;
      }
      else {
        MOVEMENT_AUTHORITY_SM_fired_strong_partial =
          SSM_TR_no_trans_MOVEMENT_AUTHORITY_SM;
      }
      outC->MOVEMENT_AUTHORITY_SM_fired_strong =
        MOVEMENT_AUTHORITY_SM_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* MOVEMENT_AUTHORITY_SM: */
  switch (outC->MOVEMENT_AUTHORITY_SM_state_act) {
    case SSM_st_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM :
      _32_MOVEMENT_AUTHORITY_SM_fired_partial =
        outC->MOVEMENT_AUTHORITY_SM_fired_strong;
      _31_MOVEMENT_AUTHORITY_SM_reset_nxt_partial = kcg_false;
      _30_MOVEMENT_AUTHORITY_SM_state_nxt_partial =
        SSM_st_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM;
      outC->radioTrackTrainMessageWasSentTimestamp =
        _27_radioTrackTrainMessageWasSentTimestamp_partial;
      outC->MOVEMENT_AUTHORITY_SM_state_nxt =
        _30_MOVEMENT_AUTHORITY_SM_state_nxt_partial;
      break;
    case SSM_st_AWAIT_MA_MOVEMENT_AUTHORITY_SM :
      _21_radioTrackTrainMessageWasSentTimestamp_partial =
        last_radioTrackTrainMessageWasSentTimestamp;
      _26_MOVEMENT_AUTHORITY_SM_fired_partial =
        outC->MOVEMENT_AUTHORITY_SM_fired_strong;
      _25_MOVEMENT_AUTHORITY_SM_reset_nxt_partial = kcg_false;
      _24_MOVEMENT_AUTHORITY_SM_state_nxt_partial =
        SSM_st_AWAIT_MA_MOVEMENT_AUTHORITY_SM;
      outC->radioTrackTrainMessageWasSentTimestamp =
        _21_radioTrackTrainMessageWasSentTimestamp_partial;
      outC->MOVEMENT_AUTHORITY_SM_state_nxt =
        _24_MOVEMENT_AUTHORITY_SM_state_nxt_partial;
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM :
      _20_MOVEMENT_AUTHORITY_SM_fired_partial =
        outC->MOVEMENT_AUTHORITY_SM_fired_strong;
      _19_MOVEMENT_AUTHORITY_SM_reset_nxt_partial = kcg_false;
      _18_MOVEMENT_AUTHORITY_SM_state_nxt_partial =
        SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM,
        inDataBus);
      kcg_copy_CompressedRadioMessage_TM(
        &outC->_L36_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM,
        &outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage);
      kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
        &outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM,
        inRadioTrainTrackMessage);
      /* MOVEMENT_AUTHORITY_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L27=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#4)/ */
      RadioTrainTrackMessage__G_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
        &outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM,
        &outC->Context_RadioTrainTrackMessage__GetHeader_4);
      kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
        &outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM,
        &outC->Context_RadioTrainTrackMessage__GetHeader_4.outRadioTrainTrackHeader);
      /* MOVEMENT_AUTHORITY_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L29=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_T_TRAIN_Ref#2)/ */
      _56_RadioTrainTrackHeader__Ge_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
        &outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM,
        &outC->Context_RadioTrainTrackHeader__Get_T_TRAIN_Ref_2);
      outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM =
        outC->Context_RadioTrainTrackHeader__Get_T_TRAIN_Ref_2.out_T_TRAIN_Ref;
      outC->radioTrainTrackMessageTimestamp_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM =
        outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
      outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM = kcg_lit_int64(3);
      /* MOVEMENT_AUTHORITY_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L19=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#5)/ */
      RadioTrackTrainMessage__G_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &outC->_L36_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM,
        &outC->_4_Context_RadioTrackTrainMessage__GetHeader_5);
      kcg_copy_Radio_TrackTrain_Header_T_TM(
        &outC->_L19_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM,
        &outC->_4_Context_RadioTrackTrainMessage__GetHeader_5.outRadioTrackTrainHeader);
      /* MOVEMENT_AUTHORITY_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L22=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#4)/ */
      RadioTrackTrainHeader__Ge_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &outC->_L19_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM,
        &outC->_3_Context_RadioTrackTrainHeader__Get_NID_MESSAGE_4);
      outC->_L22_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM =
        outC->_3_Context_RadioTrackTrainHeader__Get_NID_MESSAGE_4.out_NID_MESSAGE;
      outC->_L26_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM =
        outC->_L22_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM ==
        outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
      outC->_L24_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM =
        last_radioTrackTrainMessageWasSentTimestamp;
      /* MOVEMENT_AUTHORITY_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L20=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_T_TRAIN#3)/ */
      _55_RadioTrackTrainHeader__Ge_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &outC->_L19_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM,
        &outC->_2_Context_RadioTrackTrainHeader__Get_T_TRAIN_3);
      outC->_L20_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM =
        outC->_2_Context_RadioTrackTrainHeader__Get_T_TRAIN_3.out_T_TRAIN;
      /* MOVEMENT_AUTHORITY_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L21= */
      if (outC->_L26_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM) {
        outC->_L21_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM =
          outC->_L20_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
      }
      else {
        outC->_L21_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM =
          outC->_L24_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
      }
      _15_radioTrackTrainMessageWasSentTimestamp_partial =
        outC->_L21_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
      outC->IfBlock1_clock_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM =
        outC->radioTrainTrackMessageTimestamp_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM ==
        _15_radioTrackTrainMessageWasSentTimestamp_partial;
      outC->radioTrackTrainMessageWasSentTimestamp =
        _15_radioTrackTrainMessageWasSentTimestamp_partial;
      outC->MOVEMENT_AUTHORITY_SM_state_nxt =
        _18_MOVEMENT_AUTHORITY_SM_state_nxt_partial;
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM :
      _14_MOVEMENT_AUTHORITY_SM_fired_partial =
        outC->MOVEMENT_AUTHORITY_SM_fired_strong;
      _13_MOVEMENT_AUTHORITY_SM_reset_nxt_partial = kcg_false;
      _12_MOVEMENT_AUTHORITY_SM_state_nxt_partial =
        SSM_st_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM,
        inDataBus);
      kcg_copy_CompressedRadioMessage_TM(
        &outC->_L19_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM,
        &outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage);
      outC->_L13_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM =
        last_radioTrackTrainMessageWasSentTimestamp;
      /* MOVEMENT_AUTHORITY_SM:AWAIT_ACKNOWLEDGEMENT:_L3=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#4)/ */
      RadioTrackTrainMessage__G_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &outC->_L19_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM,
        &outC->Context_RadioTrackTrainMessage__GetHeader_4);
      kcg_copy_Radio_TrackTrain_Header_T_TM(
        &outC->_L3_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM,
        &outC->Context_RadioTrackTrainMessage__GetHeader_4.outRadioTrackTrainHeader);
      /* MOVEMENT_AUTHORITY_SM:AWAIT_ACKNOWLEDGEMENT:_L9=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_T_TRAIN#2)/ */
      _55_RadioTrackTrainHeader__Ge_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &outC->_L3_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM,
        &outC->_1_Context_RadioTrackTrainHeader__Get_T_TRAIN_2);
      outC->_L9_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM =
        outC->_1_Context_RadioTrackTrainHeader__Get_T_TRAIN_2.out_T_TRAIN;
      outC->_L8_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM = kcg_lit_int64(3);
      /* MOVEMENT_AUTHORITY_SM:AWAIT_ACKNOWLEDGEMENT:_L4=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#3)/ */
      RadioTrackTrainHeader__Ge_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &outC->_L3_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM,
        &outC->Context_RadioTrackTrainHeader__Get_NID_MESSAGE_3);
      outC->_L4_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM =
        outC->Context_RadioTrackTrainHeader__Get_NID_MESSAGE_3.out_NID_MESSAGE;
      outC->_L7_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM =
        outC->_L4_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM ==
        outC->_L8_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
      /* MOVEMENT_AUTHORITY_SM:AWAIT_ACKNOWLEDGEMENT:_L6= */
      if (outC->_L7_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM) {
        outC->_L6_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM =
          outC->_L9_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
      }
      else {
        outC->_L6_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM =
          outC->_L13_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
      }
      _9_radioTrackTrainMessageWasSentTimestamp_partial =
        outC->_L6_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
      outC->radioTrackTrainMessageWasSentTimestamp =
        _9_radioTrackTrainMessageWasSentTimestamp_partial;
      outC->MOVEMENT_AUTHORITY_SM_state_nxt =
        _12_MOVEMENT_AUTHORITY_SM_state_nxt_partial;
      break;
    case SSM_st_SEND_MA_MOVEMENT_AUTHORITY_SM :
      _1_radioTrackTrainMessageWasSentTimestamp_partial =
        last_radioTrackTrainMessageWasSentTimestamp;
      _6_MOVEMENT_AUTHORITY_SM_fired_partial =
        outC->MOVEMENT_AUTHORITY_SM_fired_strong;
      _5_MOVEMENT_AUTHORITY_SM_reset_nxt_partial = kcg_false;
      _4_MOVEMENT_AUTHORITY_SM_state_nxt_partial =
        SSM_st_SEND_MA_MOVEMENT_AUTHORITY_SM;
      outC->radioTrackTrainMessageWasSentTimestamp =
        _1_radioTrackTrainMessageWasSentTimestamp_partial;
      outC->MOVEMENT_AUTHORITY_SM_state_nxt =
        _4_MOVEMENT_AUTHORITY_SM_state_nxt_partial;
      break;
    case SSM_st_IDLE_MOVEMENT_AUTHORITY_SM :
      radioTrackTrainMessageWasSentTimestamp_partial =
        last_radioTrackTrainMessageWasSentTimestamp;
      MOVEMENT_AUTHORITY_SM_fired_partial = outC->MOVEMENT_AUTHORITY_SM_fired_strong;
      MOVEMENT_AUTHORITY_SM_reset_nxt_partial = kcg_false;
      MOVEMENT_AUTHORITY_SM_state_nxt_partial = SSM_st_IDLE_MOVEMENT_AUTHORITY_SM;
      outC->radioTrackTrainMessageWasSentTimestamp =
        radioTrackTrainMessageWasSentTimestamp_partial;
      outC->MOVEMENT_AUTHORITY_SM_state_nxt = MOVEMENT_AUTHORITY_SM_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  MOVEMENT_AUTHORITY_SM_reset_sel = outC->MOVEMENT_AUTHORITY_SM_reset_nxt;
  /* MOVEMENT_AUTHORITY_SM: */
  switch (outC->MOVEMENT_AUTHORITY_SM_state_act) {
    case SSM_st_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM :
      outC->MOVEMENT_AUTHORITY_SM_reset_nxt =
        _31_MOVEMENT_AUTHORITY_SM_reset_nxt_partial;
      outC->MOVEMENT_AUTHORITY_SM_fired = _32_MOVEMENT_AUTHORITY_SM_fired_partial;
      break;
    case SSM_st_AWAIT_MA_MOVEMENT_AUTHORITY_SM :
      outC->MOVEMENT_AUTHORITY_SM_reset_nxt =
        _25_MOVEMENT_AUTHORITY_SM_reset_nxt_partial;
      outC->MOVEMENT_AUTHORITY_SM_fired = _26_MOVEMENT_AUTHORITY_SM_fired_partial;
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM :
      outC->MOVEMENT_AUTHORITY_SM_reset_nxt =
        _19_MOVEMENT_AUTHORITY_SM_reset_nxt_partial;
      outC->MOVEMENT_AUTHORITY_SM_fired = _20_MOVEMENT_AUTHORITY_SM_fired_partial;
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM :
      outC->MOVEMENT_AUTHORITY_SM_reset_nxt =
        _13_MOVEMENT_AUTHORITY_SM_reset_nxt_partial;
      outC->MOVEMENT_AUTHORITY_SM_fired = _14_MOVEMENT_AUTHORITY_SM_fired_partial;
      break;
    case SSM_st_SEND_MA_MOVEMENT_AUTHORITY_SM :
      outC->MOVEMENT_AUTHORITY_SM_reset_nxt =
        _5_MOVEMENT_AUTHORITY_SM_reset_nxt_partial;
      outC->MOVEMENT_AUTHORITY_SM_fired = _6_MOVEMENT_AUTHORITY_SM_fired_partial;
      break;
    case SSM_st_IDLE_MOVEMENT_AUTHORITY_SM :
      outC->MOVEMENT_AUTHORITY_SM_reset_nxt = MOVEMENT_AUTHORITY_SM_reset_nxt_partial;
      outC->MOVEMENT_AUTHORITY_SM_fired = MOVEMENT_AUTHORITY_SM_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->MOVEMENT_AUTHORITY_SM_state_sel) {
    case SSM_st_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM :
      if (tr_1_guard_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM) {
        _46_MOVEMENT_AUTHORITY_SM_reset_act_partial = kcg_true;
      }
      else {
        _46_MOVEMENT_AUTHORITY_SM_reset_act_partial =
          tr_2_guard_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM;
      }
      break;
    case SSM_st_AWAIT_MA_MOVEMENT_AUTHORITY_SM :
      _43_MOVEMENT_AUTHORITY_SM_reset_act_partial =
        tr_1_guard_AWAIT_MA_MOVEMENT_AUTHORITY_SM;
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM :
      if (tr_1_guard_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM) {
        _40_MOVEMENT_AUTHORITY_SM_reset_act_partial = kcg_true;
      }
      else if (tr_2_guard_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM) {
        _40_MOVEMENT_AUTHORITY_SM_reset_act_partial = kcg_true;
      }
      else if (tr_3_guard_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM) {
        _40_MOVEMENT_AUTHORITY_SM_reset_act_partial = kcg_true;
      }
      else if (tr_4_guard_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM) {
        _40_MOVEMENT_AUTHORITY_SM_reset_act_partial = kcg_true;
      }
      else {
        _40_MOVEMENT_AUTHORITY_SM_reset_act_partial =
          tr_5_guard_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
      }
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM :
      _37_MOVEMENT_AUTHORITY_SM_reset_act_partial =
        tr_1_guard_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
      break;
    case SSM_st_SEND_MA_MOVEMENT_AUTHORITY_SM :
      if (tr_1_guard_SEND_MA_MOVEMENT_AUTHORITY_SM) {
        _34_MOVEMENT_AUTHORITY_SM_reset_act_partial = kcg_true;
      }
      else {
        _34_MOVEMENT_AUTHORITY_SM_reset_act_partial =
          tr_2_guard_SEND_MA_MOVEMENT_AUTHORITY_SM;
      }
      break;
    case SSM_st_IDLE_MOVEMENT_AUTHORITY_SM :
      if (tr_1_guard_IDLE_MOVEMENT_AUTHORITY_SM) {
        MOVEMENT_AUTHORITY_SM_reset_act_partial = kcg_true;
      }
      else {
        MOVEMENT_AUTHORITY_SM_reset_act_partial = tr_2_guard_IDLE_MOVEMENT_AUTHORITY_SM;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  MOVEMENT_AUTHORITY_SM_reset_prv = outC->MOVEMENT_AUTHORITY_SM_reset_act;
  /* MOVEMENT_AUTHORITY_SM: */
  switch (outC->MOVEMENT_AUTHORITY_SM_state_sel) {
    case SSM_st_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM :
      outC->MOVEMENT_AUTHORITY_SM_reset_act =
        _46_MOVEMENT_AUTHORITY_SM_reset_act_partial;
      break;
    case SSM_st_AWAIT_MA_MOVEMENT_AUTHORITY_SM :
      outC->MOVEMENT_AUTHORITY_SM_reset_act =
        _43_MOVEMENT_AUTHORITY_SM_reset_act_partial;
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM :
      outC->MOVEMENT_AUTHORITY_SM_reset_act =
        _40_MOVEMENT_AUTHORITY_SM_reset_act_partial;
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM :
      outC->MOVEMENT_AUTHORITY_SM_reset_act =
        _37_MOVEMENT_AUTHORITY_SM_reset_act_partial;
      break;
    case SSM_st_SEND_MA_MOVEMENT_AUTHORITY_SM :
      outC->MOVEMENT_AUTHORITY_SM_reset_act =
        _34_MOVEMENT_AUTHORITY_SM_reset_act_partial;
      break;
    case SSM_st_IDLE_MOVEMENT_AUTHORITY_SM :
      outC->MOVEMENT_AUTHORITY_SM_reset_act = MOVEMENT_AUTHORITY_SM_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* MOVEMENT_AUTHORITY_SM: */
  switch (outC->MOVEMENT_AUTHORITY_SM_state_act) {
    case SSM_st_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM :
      outC->validAcknowledgement = kcg_false;
      outC->invalidAcknowledgement = kcg_false;
      break;
    case SSM_st_AWAIT_MA_MOVEMENT_AUTHORITY_SM :
      outC->validAcknowledgement = kcg_false;
      outC->invalidAcknowledgement = kcg_false;
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM :
      /* MOVEMENT_AUTHORITY_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1: */
      if (outC->IfBlock1_clock_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM) {
        outC->validAcknowledgement = kcg_true;
        outC->invalidAcknowledgement = kcg_false;
      }
      else {
        outC->validAcknowledgement = kcg_false;
        outC->invalidAcknowledgement = kcg_true;
      }
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM :
      outC->validAcknowledgement = kcg_false;
      outC->invalidAcknowledgement = kcg_false;
      break;
    case SSM_st_SEND_MA_MOVEMENT_AUTHORITY_SM :
      outC->validAcknowledgement = kcg_false;
      outC->invalidAcknowledgement = kcg_false;
      break;
    case SSM_st_IDLE_MOVEMENT_AUTHORITY_SM :
      outC->validAcknowledgement = kcg_false;
      outC->invalidAcknowledgement = kcg_false;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void RBC__ProcessMovementAuthority_init_RBC_Model_Pkg(
  outC_RBC__ProcessMovementAuthority_RBC_Model_Pkg *outC)
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
  kcg_size idx10;
  kcg_size idx11;
  kcg_size idx12;
  kcg_size idx13;
  kcg_size idx14;
  kcg_size idx15;
  kcg_size idx16;
  kcg_size idx17;
  kcg_size idx18;
  kcg_size idx19;
  kcg_size idx20;
  kcg_size idx21;
  kcg_size idx22;
  kcg_size idx23;
  kcg_size idx24;
  kcg_size idx25;
  kcg_size idx26;
  kcg_size idx27;
  kcg_size idx28;
  kcg_size idx29;
  kcg_size idx30;
  kcg_size idx31;
  kcg_size idx32;
  kcg_size idx33;
  kcg_size idx34;
  kcg_size idx35;
  kcg_size idx36;
  kcg_size idx37;
  kcg_size idx38;
  kcg_size idx39;
  kcg_size idx40;
  kcg_size idx41;
  kcg_size idx42;
  kcg_size idx43;
  kcg_size idx44;
  kcg_size idx45;
  kcg_size idx46;
  kcg_size idx47;
  kcg_size idx48;
  kcg_size idx49;
  kcg_size idx50;
  kcg_size idx51;
  kcg_size idx52;
  kcg_size idx53;
  kcg_size idx54;
  kcg_size idx55;
  kcg_size idx56;
  kcg_size idx57;
  kcg_size idx58;
  kcg_size idx59;
  kcg_size idx60;
  kcg_size idx61;
  kcg_size idx62;
  kcg_size idx63;
  kcg_size idx64;
  kcg_size idx65;
  kcg_size idx66;
  kcg_size idx67;
  kcg_size idx68;
  kcg_size idx69;
  kcg_size idx70;
  kcg_size idx71;
  kcg_size idx72;
  kcg_size idx73;
  kcg_size idx74;
  kcg_size idx75;
  kcg_size idx76;
  kcg_size idx77;
  kcg_size idx78;
  kcg_size idx79;
  kcg_size idx80;
  kcg_size idx81;
  kcg_size idx82;
  kcg_size idx83;
  kcg_size idx84;
  kcg_size idx85;
  kcg_size idx86;
  kcg_size idx87;
  kcg_size idx88;
  kcg_size idx89;
  kcg_size idx90;
  kcg_size idx91;
  kcg_size idx92;
  kcg_size idx93;
  kcg_size idx94;
  kcg_size idx95;
  kcg_size idx96;
  kcg_size idx97;
  kcg_size idx98;
  kcg_size idx99;
  kcg_size idx100;
  kcg_size idx101;
  kcg_size idx102;
  kcg_size idx103;
  kcg_size idx104;
  kcg_size idx105;
  kcg_size idx106;
  kcg_size idx107;
  kcg_size idx108;
  kcg_size idx109;
  kcg_size idx110;
  kcg_size idx111;
  kcg_size idx112;
  kcg_size idx113;
  kcg_size idx114;
  kcg_size idx115;
  kcg_size idx116;
  kcg_size idx117;
  kcg_size idx118;
  kcg_size idx119;
  kcg_size idx120;
  kcg_size idx121;
  kcg_size idx122;
  kcg_size idx123;
  kcg_size idx124;
  kcg_size idx125;
  kcg_size idx126;
  kcg_size idx127;
  kcg_size idx128;
  kcg_size idx129;
  kcg_size idx130;
  kcg_size idx131;
  kcg_size idx132;
  kcg_size idx133;
  kcg_size idx134;
  kcg_size idx135;
  kcg_size idx136;
  kcg_size idx137;
  kcg_size idx138;
  kcg_size idx139;
  kcg_size idx140;
  kcg_size idx141;
  kcg_size idx142;
  kcg_size idx143;
  kcg_size idx144;
  kcg_size idx145;
  kcg_size idx146;
  kcg_size idx147;
  kcg_size idx148;
  kcg_size idx149;
  kcg_size idx150;
  kcg_size idx151;
  kcg_size idx152;
  kcg_size idx153;
  kcg_size idx154;
  kcg_size idx155;
  kcg_size idx156;
  kcg_size idx157;
  kcg_size idx158;
  kcg_size idx159;
  kcg_size idx160;
  kcg_size idx161;
  kcg_size idx162;
  kcg_size idx163;
  kcg_size idx164;
  kcg_size idx165;
  kcg_size idx166;
  kcg_size idx167;
  kcg_size idx168;
  kcg_size idx169;
  kcg_size idx170;
  kcg_size idx171;
  kcg_size idx172;
  kcg_size idx173;
  kcg_size idx174;
  kcg_size idx175;
  kcg_size idx176;
  kcg_size idx177;
  kcg_size idx178;
  kcg_size idx179;
  kcg_size idx180;
  kcg_size idx181;
  kcg_size idx182;
  kcg_size idx183;
  kcg_size idx184;
  kcg_size idx185;
  kcg_size idx186;
  kcg_size idx187;
  kcg_size idx188;
  kcg_size idx189;
  kcg_size idx190;
  kcg_size idx191;
  kcg_size idx192;
  kcg_size idx193;
  kcg_size idx194;
  kcg_size idx195;
  kcg_size idx196;
  kcg_size idx197;
  kcg_size idx198;
  kcg_size idx199;
  kcg_size idx200;
  kcg_size idx201;
  kcg_size idx202;
  kcg_size idx203;
  kcg_size idx204;
  kcg_size idx205;
  kcg_size idx206;
  kcg_size idx207;
  kcg_size idx208;
  kcg_size idx209;
  kcg_size idx210;
  kcg_size idx211;
  kcg_size idx212;
  kcg_size idx213;
  kcg_size idx214;
  kcg_size idx215;
  kcg_size idx216;
  kcg_size idx217;
  kcg_size idx218;
  kcg_size idx219;
  kcg_size idx220;
  kcg_size idx221;
  kcg_size idx222;
  kcg_size idx223;
  kcg_size idx224;
  kcg_size idx225;
  kcg_size idx226;
  kcg_size idx227;
  kcg_size idx228;
  kcg_size idx229;
  kcg_size idx230;
  kcg_size idx231;
  kcg_size idx232;
  kcg_size idx233;
  kcg_size idx234;
  kcg_size idx235;
  kcg_size idx236;
  kcg_size idx237;
  kcg_size idx238;
  kcg_size idx239;
  kcg_size idx240;
  kcg_size idx241;
  kcg_size idx242;
  kcg_size idx243;
  kcg_size idx244;
  kcg_size idx245;
  kcg_size idx246;
  kcg_size idx247;
  kcg_size idx248;
  kcg_size idx249;
  kcg_size idx250;
  kcg_size idx251;
  kcg_size idx252;
  kcg_size idx253;
  kcg_size idx254;
  kcg_size idx255;
  kcg_size idx256;
  kcg_size idx257;
  kcg_size idx258;
  kcg_size idx259;
  kcg_size idx260;
  kcg_size idx261;
  kcg_size idx262;
  kcg_size idx263;
  kcg_size idx264;
  kcg_size idx265;
  kcg_size idx266;
  kcg_size idx267;
  kcg_size idx268;
  kcg_size idx269;
  kcg_size idx270;
  kcg_size idx271;
  kcg_size idx272;
  kcg_size idx273;
  kcg_size idx274;
  kcg_size idx275;
  kcg_size idx276;
  kcg_size idx277;

  outC->_L105.m_TrainData.nid_engine = kcg_lit_int64(0);
  outC->_L105.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 1; idx1++) {
    outC->_L105.m_TrainData.m_OnboardPhoneNumbers[idx1].valid = kcg_true;
    for (idx = 0; idx < 15; idx++) {
      outC->_L105.m_TrainData.m_OnboardPhoneNumbers[idx1].telephoneNumber[idx] =
        kcg_lit_int64(0);
    }
  }
  outC->_L105.m_TrainData.t_train_ref = kcg_lit_int64(0);
  outC->_L105.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L105.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L105.m_TrainData.l_train = kcg_lit_int64(0);
  outC->_L105.m_TrainData.v_maxtrain = kcg_lit_int64(0);
  outC->_L105.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L105.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L105.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L105.m_TrainData.n_axle = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 4; idx2++) {
    outC->_L105.m_TrainData.m_TractionIdentities[idx2].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L105.m_TrainData.m_TractionIdentities[idx2].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L105.m_TrainData.m_NationalSystemIdentities[idx3] = kcg_lit_int64(0);
  }
  outC->_L105.m_TrainData.nid_operational = kcg_lit_int64(0);
  outC->_L105.m_PosData.nid_lrbg = kcg_lit_int64(0);
  outC->_L105.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L105.m_PosData.d_lrbg = kcg_lit_int64(0);
  outC->_L105.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L105.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L105.m_PosData.l_doubtover = kcg_lit_int64(0);
  outC->_L105.m_PosData.l_doubtunder = kcg_lit_int64(0);
  outC->_L105.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L105.m_PosData.l_trainint = kcg_lit_int64(0);
  outC->_L105.m_PosData.v_train = kcg_lit_int64(0);
  outC->_L105.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L105.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L105.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L105.m_PosData.nid_ntc = kcg_lit_int64(0);
  outC->_L105.m_PosData.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L106.Header.radioDevice = kcg_lit_int64(0);
  outC->_L106.Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L106.Header.nid_message = kcg_lit_int64(0);
  outC->_L106.Header.t_train = kcg_lit_int64(0);
  outC->_L106.Header.m_ack = kcg_lit_int64(0);
  outC->_L106.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L106.Header.t_train_reference = kcg_lit_int64(0);
  outC->_L106.Header.nid_em = kcg_lit_int64(0);
  outC->_L106.Header.q_scale = kcg_lit_int64(0);
  outC->_L106.Header.d_sr = kcg_lit_int64(0);
  outC->_L106.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L106.Header.d_ref = kcg_lit_int64(0);
  outC->_L106.Header.q_dir = kcg_lit_int64(0);
  outC->_L106.Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L106.Header.m_version = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L106.Messages.PacketHeaders[idx4].nid_packet = kcg_lit_int64(0);
    outC->_L106.Messages.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L106.Messages.PacketHeaders[idx4].valid = kcg_true;
    outC->_L106.Messages.PacketHeaders[idx4].startAddress = kcg_lit_int64(0);
    outC->_L106.Messages.PacketHeaders[idx4].endAddress = kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L106.Messages.PacketData[idx5] = kcg_lit_int64(0);
  }
  for (idx8 = 0; idx8 < 8; idx8++) {
    outC->_L107.m_Entries[idx8].m_IsValid = kcg_true;
    outC->_L107.m_Entries[idx8].m_Entry.Header.radioDevice = kcg_lit_int64(0);
    outC->_L107.m_Entries[idx8].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L107.m_Entries[idx8].m_Entry.Header.nid_message = kcg_lit_int64(0);
    outC->_L107.m_Entries[idx8].m_Entry.Header.t_train = kcg_lit_int64(0);
    outC->_L107.m_Entries[idx8].m_Entry.Header.m_ack = kcg_lit_int64(0);
    outC->_L107.m_Entries[idx8].m_Entry.Header.nid_lrbg = kcg_lit_int64(0);
    outC->_L107.m_Entries[idx8].m_Entry.Header.t_train_reference = kcg_lit_int64(0);
    outC->_L107.m_Entries[idx8].m_Entry.Header.nid_em = kcg_lit_int64(0);
    outC->_L107.m_Entries[idx8].m_Entry.Header.q_scale = kcg_lit_int64(0);
    outC->_L107.m_Entries[idx8].m_Entry.Header.d_sr = kcg_lit_int64(0);
    outC->_L107.m_Entries[idx8].m_Entry.Header.t_sh_rqst = kcg_lit_int64(0);
    outC->_L107.m_Entries[idx8].m_Entry.Header.d_ref = kcg_lit_int64(0);
    outC->_L107.m_Entries[idx8].m_Entry.Header.q_dir = kcg_lit_int64(0);
    outC->_L107.m_Entries[idx8].m_Entry.Header.d_emergencystop = kcg_lit_int64(0);
    outC->_L107.m_Entries[idx8].m_Entry.Header.m_version = kcg_lit_int64(0);
    for (idx6 = 0; idx6 < 30; idx6++) {
      outC->_L107.m_Entries[idx8].m_Entry.Messages.PacketHeaders[idx6].nid_packet =
        kcg_lit_int64(0);
      outC->_L107.m_Entries[idx8].m_Entry.Messages.PacketHeaders[idx6].q_dir =
        Q_DIR_Reverse;
      outC->_L107.m_Entries[idx8].m_Entry.Messages.PacketHeaders[idx6].valid =
        kcg_true;
      outC->_L107.m_Entries[idx8].m_Entry.Messages.PacketHeaders[idx6].startAddress =
        kcg_lit_int64(0);
      outC->_L107.m_Entries[idx8].m_Entry.Messages.PacketHeaders[idx6].endAddress =
        kcg_lit_int64(0);
    }
    for (idx7 = 0; idx7 < 500; idx7++) {
      outC->_L107.m_Entries[idx8].m_Entry.Messages.PacketData[idx7] =
        kcg_lit_int64(0);
    }
  }
  outC->_L108.session.m_TrainData.nid_engine = kcg_lit_int64(0);
  outC->_L108.session.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int64(
      0);
  for (idx10 = 0; idx10 < 1; idx10++) {
    outC->_L108.session.m_TrainData.m_OnboardPhoneNumbers[idx10].valid = kcg_true;
    for (idx9 = 0; idx9 < 15; idx9++) {
      outC->_L108.session.m_TrainData.m_OnboardPhoneNumbers[idx10].telephoneNumber[idx9] =
        kcg_lit_int64(0);
    }
  }
  outC->_L108.session.m_TrainData.t_train_ref = kcg_lit_int64(0);
  outC->_L108.session.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L108.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L108.session.m_TrainData.l_train = kcg_lit_int64(0);
  outC->_L108.session.m_TrainData.v_maxtrain = kcg_lit_int64(0);
  outC->_L108.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L108.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L108.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L108.session.m_TrainData.n_axle = kcg_lit_int64(0);
  for (idx11 = 0; idx11 < 4; idx11++) {
    outC->_L108.session.m_TrainData.m_TractionIdentities[idx11].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L108.session.m_TrainData.m_TractionIdentities[idx11].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx12 = 0; idx12 < 5; idx12++) {
    outC->_L108.session.m_TrainData.m_NationalSystemIdentities[idx12] =
      kcg_lit_int64(0);
  }
  outC->_L108.session.m_TrainData.nid_operational = kcg_lit_int64(0);
  outC->_L108.session.m_PosData.nid_lrbg = kcg_lit_int64(0);
  outC->_L108.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L108.session.m_PosData.d_lrbg = kcg_lit_int64(0);
  outC->_L108.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L108.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L108.session.m_PosData.l_doubtover = kcg_lit_int64(0);
  outC->_L108.session.m_PosData.l_doubtunder = kcg_lit_int64(0);
  outC->_L108.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L108.session.m_PosData.l_trainint = kcg_lit_int64(0);
  outC->_L108.session.m_PosData.v_train = kcg_lit_int64(0);
  outC->_L108.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L108.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L108.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L108.session.m_PosData.nid_ntc = kcg_lit_int64(0);
  outC->_L108.session.m_PosData.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L108.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L108.config.m_NationalParams.nid_c = kcg_lit_int64(0);
  outC->_L108.config.m_NationalParams.v_nvshunt = kcg_lit_int64(0);
  outC->_L108.config.m_NationalParams.v_nvstff = kcg_lit_int64(0);
  outC->_L108.config.m_NationalParams.v_nvonsight = kcg_lit_int64(0);
  outC->_L108.config.m_NationalParams.v_nvunfit = kcg_lit_int64(0);
  outC->_L108.config.m_NationalParams.v_nvrel = kcg_lit_int64(0);
  outC->_L108.config.m_NationalParams.t_nvcontact = kcg_lit_int64(0);
  outC->_L108.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L108.config.m_MAReqParams.t_mar = kcg_lit_int64(0);
  outC->_L108.config.m_MAReqParams.t_timeoutrqst = kcg_lit_int64(0);
  outC->_L108.config.m_MAReqParams.t_cycrqst = kcg_lit_int64(0);
  outC->_L108.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L108.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L108.config.m_PosRepParams.t_cycloc = kcg_lit_int64(0);
  outC->_L108.config.m_PosRepParams.d_cycloc = kcg_lit_int64(0);
  outC->_L108.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L108.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx13 = 0; idx13 < 32; idx13++) {
    outC->_L108.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx13].d_loc =
      kcg_lit_int64(0);
    outC->_L108.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx13].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx14 = 0; idx14 < 16; idx14++) {
    outC->_L108.diagnostic[idx14].valid = kcg_true;
    outC->_L108.diagnostic[idx14].count = kcg_lit_int64(0);
    outC->_L108.diagnostic[idx14].timestamp = kcg_lit_int64(0);
    outC->_L108.diagnostic[idx14].diagType = DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L108.diagnostic[idx14].diagSrc = DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L108.diagnostic[idx14].diagText = DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx17 = 0; idx17 < 8; idx17++) {
    outC->_L108.messageQueue.m_Entries[idx17].m_IsValid = kcg_true;
    outC->_L108.messageQueue.m_Entries[idx17].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L108.messageQueue.m_Entries[idx17].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L108.messageQueue.m_Entries[idx17].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L108.messageQueue.m_Entries[idx17].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L108.messageQueue.m_Entries[idx17].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L108.messageQueue.m_Entries[idx17].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L108.messageQueue.m_Entries[idx17].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L108.messageQueue.m_Entries[idx17].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L108.messageQueue.m_Entries[idx17].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L108.messageQueue.m_Entries[idx17].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L108.messageQueue.m_Entries[idx17].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L108.messageQueue.m_Entries[idx17].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L108.messageQueue.m_Entries[idx17].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L108.messageQueue.m_Entries[idx17].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L108.messageQueue.m_Entries[idx17].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx15 = 0; idx15 < 30; idx15++) {
      outC->_L108.messageQueue.m_Entries[idx17].m_Entry.Messages.PacketHeaders[idx15].nid_packet =
        kcg_lit_int64(0);
      outC->_L108.messageQueue.m_Entries[idx17].m_Entry.Messages.PacketHeaders[idx15].q_dir =
        Q_DIR_Reverse;
      outC->_L108.messageQueue.m_Entries[idx17].m_Entry.Messages.PacketHeaders[idx15].valid =
        kcg_true;
      outC->_L108.messageQueue.m_Entries[idx17].m_Entry.Messages.PacketHeaders[idx15].startAddress =
        kcg_lit_int64(0);
      outC->_L108.messageQueue.m_Entries[idx17].m_Entry.Messages.PacketHeaders[idx15].endAddress =
        kcg_lit_int64(0);
    }
    for (idx16 = 0; idx16 < 500; idx16++) {
      outC->_L108.messageQueue.m_Entries[idx17].m_Entry.Messages.PacketData[idx16] =
        kcg_lit_int64(0);
    }
  }
  outC->_L108.clockk.m_Value = kcg_lit_int64(0);
  outC->_L108.lastSentTrackTrainMessage.Header.radioDevice = kcg_lit_int64(0);
  outC->_L108.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L108.lastSentTrackTrainMessage.Header.nid_message = kcg_lit_int64(0);
  outC->_L108.lastSentTrackTrainMessage.Header.t_train = kcg_lit_int64(0);
  outC->_L108.lastSentTrackTrainMessage.Header.m_ack = kcg_lit_int64(0);
  outC->_L108.lastSentTrackTrainMessage.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L108.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L108.lastSentTrackTrainMessage.Header.nid_em = kcg_lit_int64(0);
  outC->_L108.lastSentTrackTrainMessage.Header.q_scale = kcg_lit_int64(0);
  outC->_L108.lastSentTrackTrainMessage.Header.d_sr = kcg_lit_int64(0);
  outC->_L108.lastSentTrackTrainMessage.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L108.lastSentTrackTrainMessage.Header.d_ref = kcg_lit_int64(0);
  outC->_L108.lastSentTrackTrainMessage.Header.q_dir = kcg_lit_int64(0);
  outC->_L108.lastSentTrackTrainMessage.Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L108.lastSentTrackTrainMessage.Header.m_version = kcg_lit_int64(0);
  for (idx18 = 0; idx18 < 30; idx18++) {
    outC->_L108.lastSentTrackTrainMessage.Messages.PacketHeaders[idx18].nid_packet =
      kcg_lit_int64(0);
    outC->_L108.lastSentTrackTrainMessage.Messages.PacketHeaders[idx18].q_dir =
      Q_DIR_Reverse;
    outC->_L108.lastSentTrackTrainMessage.Messages.PacketHeaders[idx18].valid =
      kcg_true;
    outC->_L108.lastSentTrackTrainMessage.Messages.PacketHeaders[idx18].startAddress =
      kcg_lit_int64(0);
    outC->_L108.lastSentTrackTrainMessage.Messages.PacketHeaders[idx18].endAddress =
      kcg_lit_int64(0);
  }
  for (idx19 = 0; idx19 < 500; idx19++) {
    outC->_L108.lastSentTrackTrainMessage.Messages.PacketData[idx19] =
      kcg_lit_int64(0);
  }
  outC->_L109.session.m_TrainData.nid_engine = kcg_lit_int64(0);
  outC->_L109.session.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int64(
      0);
  for (idx21 = 0; idx21 < 1; idx21++) {
    outC->_L109.session.m_TrainData.m_OnboardPhoneNumbers[idx21].valid = kcg_true;
    for (idx20 = 0; idx20 < 15; idx20++) {
      outC->_L109.session.m_TrainData.m_OnboardPhoneNumbers[idx21].telephoneNumber[idx20] =
        kcg_lit_int64(0);
    }
  }
  outC->_L109.session.m_TrainData.t_train_ref = kcg_lit_int64(0);
  outC->_L109.session.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L109.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L109.session.m_TrainData.l_train = kcg_lit_int64(0);
  outC->_L109.session.m_TrainData.v_maxtrain = kcg_lit_int64(0);
  outC->_L109.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L109.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L109.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L109.session.m_TrainData.n_axle = kcg_lit_int64(0);
  for (idx22 = 0; idx22 < 4; idx22++) {
    outC->_L109.session.m_TrainData.m_TractionIdentities[idx22].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L109.session.m_TrainData.m_TractionIdentities[idx22].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx23 = 0; idx23 < 5; idx23++) {
    outC->_L109.session.m_TrainData.m_NationalSystemIdentities[idx23] =
      kcg_lit_int64(0);
  }
  outC->_L109.session.m_TrainData.nid_operational = kcg_lit_int64(0);
  outC->_L109.session.m_PosData.nid_lrbg = kcg_lit_int64(0);
  outC->_L109.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L109.session.m_PosData.d_lrbg = kcg_lit_int64(0);
  outC->_L109.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L109.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L109.session.m_PosData.l_doubtover = kcg_lit_int64(0);
  outC->_L109.session.m_PosData.l_doubtunder = kcg_lit_int64(0);
  outC->_L109.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L109.session.m_PosData.l_trainint = kcg_lit_int64(0);
  outC->_L109.session.m_PosData.v_train = kcg_lit_int64(0);
  outC->_L109.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L109.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L109.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L109.session.m_PosData.nid_ntc = kcg_lit_int64(0);
  outC->_L109.session.m_PosData.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L109.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L109.config.m_NationalParams.nid_c = kcg_lit_int64(0);
  outC->_L109.config.m_NationalParams.v_nvshunt = kcg_lit_int64(0);
  outC->_L109.config.m_NationalParams.v_nvstff = kcg_lit_int64(0);
  outC->_L109.config.m_NationalParams.v_nvonsight = kcg_lit_int64(0);
  outC->_L109.config.m_NationalParams.v_nvunfit = kcg_lit_int64(0);
  outC->_L109.config.m_NationalParams.v_nvrel = kcg_lit_int64(0);
  outC->_L109.config.m_NationalParams.t_nvcontact = kcg_lit_int64(0);
  outC->_L109.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L109.config.m_MAReqParams.t_mar = kcg_lit_int64(0);
  outC->_L109.config.m_MAReqParams.t_timeoutrqst = kcg_lit_int64(0);
  outC->_L109.config.m_MAReqParams.t_cycrqst = kcg_lit_int64(0);
  outC->_L109.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L109.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L109.config.m_PosRepParams.t_cycloc = kcg_lit_int64(0);
  outC->_L109.config.m_PosRepParams.d_cycloc = kcg_lit_int64(0);
  outC->_L109.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L109.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx24 = 0; idx24 < 32; idx24++) {
    outC->_L109.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx24].d_loc =
      kcg_lit_int64(0);
    outC->_L109.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx24].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx25 = 0; idx25 < 16; idx25++) {
    outC->_L109.diagnostic[idx25].valid = kcg_true;
    outC->_L109.diagnostic[idx25].count = kcg_lit_int64(0);
    outC->_L109.diagnostic[idx25].timestamp = kcg_lit_int64(0);
    outC->_L109.diagnostic[idx25].diagType = DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L109.diagnostic[idx25].diagSrc = DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L109.diagnostic[idx25].diagText = DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx28 = 0; idx28 < 8; idx28++) {
    outC->_L109.messageQueue.m_Entries[idx28].m_IsValid = kcg_true;
    outC->_L109.messageQueue.m_Entries[idx28].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L109.messageQueue.m_Entries[idx28].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L109.messageQueue.m_Entries[idx28].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L109.messageQueue.m_Entries[idx28].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L109.messageQueue.m_Entries[idx28].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L109.messageQueue.m_Entries[idx28].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L109.messageQueue.m_Entries[idx28].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L109.messageQueue.m_Entries[idx28].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L109.messageQueue.m_Entries[idx28].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L109.messageQueue.m_Entries[idx28].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L109.messageQueue.m_Entries[idx28].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L109.messageQueue.m_Entries[idx28].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L109.messageQueue.m_Entries[idx28].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L109.messageQueue.m_Entries[idx28].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L109.messageQueue.m_Entries[idx28].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx26 = 0; idx26 < 30; idx26++) {
      outC->_L109.messageQueue.m_Entries[idx28].m_Entry.Messages.PacketHeaders[idx26].nid_packet =
        kcg_lit_int64(0);
      outC->_L109.messageQueue.m_Entries[idx28].m_Entry.Messages.PacketHeaders[idx26].q_dir =
        Q_DIR_Reverse;
      outC->_L109.messageQueue.m_Entries[idx28].m_Entry.Messages.PacketHeaders[idx26].valid =
        kcg_true;
      outC->_L109.messageQueue.m_Entries[idx28].m_Entry.Messages.PacketHeaders[idx26].startAddress =
        kcg_lit_int64(0);
      outC->_L109.messageQueue.m_Entries[idx28].m_Entry.Messages.PacketHeaders[idx26].endAddress =
        kcg_lit_int64(0);
    }
    for (idx27 = 0; idx27 < 500; idx27++) {
      outC->_L109.messageQueue.m_Entries[idx28].m_Entry.Messages.PacketData[idx27] =
        kcg_lit_int64(0);
    }
  }
  outC->_L109.clockk.m_Value = kcg_lit_int64(0);
  outC->_L109.lastSentTrackTrainMessage.Header.radioDevice = kcg_lit_int64(0);
  outC->_L109.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L109.lastSentTrackTrainMessage.Header.nid_message = kcg_lit_int64(0);
  outC->_L109.lastSentTrackTrainMessage.Header.t_train = kcg_lit_int64(0);
  outC->_L109.lastSentTrackTrainMessage.Header.m_ack = kcg_lit_int64(0);
  outC->_L109.lastSentTrackTrainMessage.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L109.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L109.lastSentTrackTrainMessage.Header.nid_em = kcg_lit_int64(0);
  outC->_L109.lastSentTrackTrainMessage.Header.q_scale = kcg_lit_int64(0);
  outC->_L109.lastSentTrackTrainMessage.Header.d_sr = kcg_lit_int64(0);
  outC->_L109.lastSentTrackTrainMessage.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L109.lastSentTrackTrainMessage.Header.d_ref = kcg_lit_int64(0);
  outC->_L109.lastSentTrackTrainMessage.Header.q_dir = kcg_lit_int64(0);
  outC->_L109.lastSentTrackTrainMessage.Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L109.lastSentTrackTrainMessage.Header.m_version = kcg_lit_int64(0);
  for (idx29 = 0; idx29 < 30; idx29++) {
    outC->_L109.lastSentTrackTrainMessage.Messages.PacketHeaders[idx29].nid_packet =
      kcg_lit_int64(0);
    outC->_L109.lastSentTrackTrainMessage.Messages.PacketHeaders[idx29].q_dir =
      Q_DIR_Reverse;
    outC->_L109.lastSentTrackTrainMessage.Messages.PacketHeaders[idx29].valid =
      kcg_true;
    outC->_L109.lastSentTrackTrainMessage.Messages.PacketHeaders[idx29].startAddress =
      kcg_lit_int64(0);
    outC->_L109.lastSentTrackTrainMessage.Messages.PacketHeaders[idx29].endAddress =
      kcg_lit_int64(0);
  }
  for (idx30 = 0; idx30 < 500; idx30++) {
    outC->_L109.lastSentTrackTrainMessage.Messages.PacketData[idx30] =
      kcg_lit_int64(0);
  }
  outC->_L111.present = kcg_true;
  outC->_L111.header.present = kcg_true;
  outC->_L111.header.nid_message = kcg_lit_int64(0);
  outC->_L111.header.t_train = kcg_lit_int64(0);
  outC->_L111.header.nid_engine = kcg_lit_int64(0);
  outC->_L111.header.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L111.header.xT_TRAIN = kcg_lit_int64(0);
  outC->_L111.header.xNID_EM = kcg_lit_int64(0);
  outC->_L111.header.xQ_EMERGENCYSTOP =
    _12_Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L111.header.xNID_TEXTMESSAGE = kcg_lit_int64(0);
  outC->_L111.packets.p0.valid = kcg_true;
  outC->_L111.packets.p0.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L111.packets.p0.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L111.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L111.packets.p0.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L111.packets.p0.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L111.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L111.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L111.packets.p0.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L111.packets.p0.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L111.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L111.packets.p0.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L111.packets.p0.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L111.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L111.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L111.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L111.packets.p0.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L111.packets.p1.valid = kcg_true;
  outC->_L111.packets.p1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L111.packets.p1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L111.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L111.packets.p1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L111.packets.p1.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L111.packets.p1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L111.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L111.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L111.packets.p1.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L111.packets.p1.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L111.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L111.packets.p1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L111.packets.p1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L111.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L111.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L111.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L111.packets.p1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L111.packets.p3.valid = kcg_true;
  outC->_L111.packets.p3.number = kcg_lit_int64(0);
  for (idx32 = 0; idx32 < 1; idx32++) {
    outC->_L111.packets.p3.aNID_RADIO[idx32].valid = kcg_true;
    for (idx31 = 0; idx31 < 15; idx31++) {
      outC->_L111.packets.p3.aNID_RADIO[idx32].telephoneNumber[idx31] =
        kcg_lit_int64(0);
    }
  }
  outC->_L111.packets.p4.valid = kcg_true;
  outC->_L111.packets.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L111.packets.p5.valid = kcg_true;
  outC->_L111.packets.p5.TrainRunningNumber = kcg_lit_int64(0);
  outC->_L111.packets.p9.valid = kcg_true;
  outC->_L111.packets.p9.transitionInformation = kcg_lit_int64(0);
  outC->_L111.packets.p11.valid = kcg_true;
  outC->_L111.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L111.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L111.packets.p11.l_train = kcg_lit_int64(0);
  outC->_L111.packets.p11.v_maxtrain = kcg_lit_int64(0);
  outC->_L111.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L111.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L111.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L111.packets.p11.n_axle = kcg_lit_int64(0);
  outC->_L111.packets.p11.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx33 = 0; idx33 < 4; idx33++) {
    outC->_L111.packets.p11.tractionIdentity[idx33].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L111.packets.p11.tractionIdentity[idx33].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->_L111.packets.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx34 = 0; idx34 < 5; idx34++) {
    outC->_L111.packets.p11.nid_ntc[idx34] = kcg_lit_int64(0);
  }
  outC->_L112.session.m_TrainData.nid_engine = kcg_lit_int64(0);
  outC->_L112.session.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int64(
      0);
  for (idx36 = 0; idx36 < 1; idx36++) {
    outC->_L112.session.m_TrainData.m_OnboardPhoneNumbers[idx36].valid = kcg_true;
    for (idx35 = 0; idx35 < 15; idx35++) {
      outC->_L112.session.m_TrainData.m_OnboardPhoneNumbers[idx36].telephoneNumber[idx35] =
        kcg_lit_int64(0);
    }
  }
  outC->_L112.session.m_TrainData.t_train_ref = kcg_lit_int64(0);
  outC->_L112.session.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L112.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L112.session.m_TrainData.l_train = kcg_lit_int64(0);
  outC->_L112.session.m_TrainData.v_maxtrain = kcg_lit_int64(0);
  outC->_L112.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L112.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L112.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L112.session.m_TrainData.n_axle = kcg_lit_int64(0);
  for (idx37 = 0; idx37 < 4; idx37++) {
    outC->_L112.session.m_TrainData.m_TractionIdentities[idx37].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L112.session.m_TrainData.m_TractionIdentities[idx37].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx38 = 0; idx38 < 5; idx38++) {
    outC->_L112.session.m_TrainData.m_NationalSystemIdentities[idx38] =
      kcg_lit_int64(0);
  }
  outC->_L112.session.m_TrainData.nid_operational = kcg_lit_int64(0);
  outC->_L112.session.m_PosData.nid_lrbg = kcg_lit_int64(0);
  outC->_L112.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L112.session.m_PosData.d_lrbg = kcg_lit_int64(0);
  outC->_L112.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L112.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L112.session.m_PosData.l_doubtover = kcg_lit_int64(0);
  outC->_L112.session.m_PosData.l_doubtunder = kcg_lit_int64(0);
  outC->_L112.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L112.session.m_PosData.l_trainint = kcg_lit_int64(0);
  outC->_L112.session.m_PosData.v_train = kcg_lit_int64(0);
  outC->_L112.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L112.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L112.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L112.session.m_PosData.nid_ntc = kcg_lit_int64(0);
  outC->_L112.session.m_PosData.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L112.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L112.config.m_NationalParams.nid_c = kcg_lit_int64(0);
  outC->_L112.config.m_NationalParams.v_nvshunt = kcg_lit_int64(0);
  outC->_L112.config.m_NationalParams.v_nvstff = kcg_lit_int64(0);
  outC->_L112.config.m_NationalParams.v_nvonsight = kcg_lit_int64(0);
  outC->_L112.config.m_NationalParams.v_nvunfit = kcg_lit_int64(0);
  outC->_L112.config.m_NationalParams.v_nvrel = kcg_lit_int64(0);
  outC->_L112.config.m_NationalParams.t_nvcontact = kcg_lit_int64(0);
  outC->_L112.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L112.config.m_MAReqParams.t_mar = kcg_lit_int64(0);
  outC->_L112.config.m_MAReqParams.t_timeoutrqst = kcg_lit_int64(0);
  outC->_L112.config.m_MAReqParams.t_cycrqst = kcg_lit_int64(0);
  outC->_L112.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L112.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L112.config.m_PosRepParams.t_cycloc = kcg_lit_int64(0);
  outC->_L112.config.m_PosRepParams.d_cycloc = kcg_lit_int64(0);
  outC->_L112.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L112.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx39 = 0; idx39 < 32; idx39++) {
    outC->_L112.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx39].d_loc =
      kcg_lit_int64(0);
    outC->_L112.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx39].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx40 = 0; idx40 < 16; idx40++) {
    outC->_L112.diagnostic[idx40].valid = kcg_true;
    outC->_L112.diagnostic[idx40].count = kcg_lit_int64(0);
    outC->_L112.diagnostic[idx40].timestamp = kcg_lit_int64(0);
    outC->_L112.diagnostic[idx40].diagType = DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L112.diagnostic[idx40].diagSrc = DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L112.diagnostic[idx40].diagText = DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx43 = 0; idx43 < 8; idx43++) {
    outC->_L112.messageQueue.m_Entries[idx43].m_IsValid = kcg_true;
    outC->_L112.messageQueue.m_Entries[idx43].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L112.messageQueue.m_Entries[idx43].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L112.messageQueue.m_Entries[idx43].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L112.messageQueue.m_Entries[idx43].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L112.messageQueue.m_Entries[idx43].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L112.messageQueue.m_Entries[idx43].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L112.messageQueue.m_Entries[idx43].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L112.messageQueue.m_Entries[idx43].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L112.messageQueue.m_Entries[idx43].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L112.messageQueue.m_Entries[idx43].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L112.messageQueue.m_Entries[idx43].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L112.messageQueue.m_Entries[idx43].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L112.messageQueue.m_Entries[idx43].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L112.messageQueue.m_Entries[idx43].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L112.messageQueue.m_Entries[idx43].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx41 = 0; idx41 < 30; idx41++) {
      outC->_L112.messageQueue.m_Entries[idx43].m_Entry.Messages.PacketHeaders[idx41].nid_packet =
        kcg_lit_int64(0);
      outC->_L112.messageQueue.m_Entries[idx43].m_Entry.Messages.PacketHeaders[idx41].q_dir =
        Q_DIR_Reverse;
      outC->_L112.messageQueue.m_Entries[idx43].m_Entry.Messages.PacketHeaders[idx41].valid =
        kcg_true;
      outC->_L112.messageQueue.m_Entries[idx43].m_Entry.Messages.PacketHeaders[idx41].startAddress =
        kcg_lit_int64(0);
      outC->_L112.messageQueue.m_Entries[idx43].m_Entry.Messages.PacketHeaders[idx41].endAddress =
        kcg_lit_int64(0);
    }
    for (idx42 = 0; idx42 < 500; idx42++) {
      outC->_L112.messageQueue.m_Entries[idx43].m_Entry.Messages.PacketData[idx42] =
        kcg_lit_int64(0);
    }
  }
  outC->_L112.clockk.m_Value = kcg_lit_int64(0);
  outC->_L112.lastSentTrackTrainMessage.Header.radioDevice = kcg_lit_int64(0);
  outC->_L112.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L112.lastSentTrackTrainMessage.Header.nid_message = kcg_lit_int64(0);
  outC->_L112.lastSentTrackTrainMessage.Header.t_train = kcg_lit_int64(0);
  outC->_L112.lastSentTrackTrainMessage.Header.m_ack = kcg_lit_int64(0);
  outC->_L112.lastSentTrackTrainMessage.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L112.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L112.lastSentTrackTrainMessage.Header.nid_em = kcg_lit_int64(0);
  outC->_L112.lastSentTrackTrainMessage.Header.q_scale = kcg_lit_int64(0);
  outC->_L112.lastSentTrackTrainMessage.Header.d_sr = kcg_lit_int64(0);
  outC->_L112.lastSentTrackTrainMessage.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L112.lastSentTrackTrainMessage.Header.d_ref = kcg_lit_int64(0);
  outC->_L112.lastSentTrackTrainMessage.Header.q_dir = kcg_lit_int64(0);
  outC->_L112.lastSentTrackTrainMessage.Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L112.lastSentTrackTrainMessage.Header.m_version = kcg_lit_int64(0);
  for (idx44 = 0; idx44 < 30; idx44++) {
    outC->_L112.lastSentTrackTrainMessage.Messages.PacketHeaders[idx44].nid_packet =
      kcg_lit_int64(0);
    outC->_L112.lastSentTrackTrainMessage.Messages.PacketHeaders[idx44].q_dir =
      Q_DIR_Reverse;
    outC->_L112.lastSentTrackTrainMessage.Messages.PacketHeaders[idx44].valid =
      kcg_true;
    outC->_L112.lastSentTrackTrainMessage.Messages.PacketHeaders[idx44].startAddress =
      kcg_lit_int64(0);
    outC->_L112.lastSentTrackTrainMessage.Messages.PacketHeaders[idx44].endAddress =
      kcg_lit_int64(0);
  }
  for (idx45 = 0; idx45 < 500; idx45++) {
    outC->_L112.lastSentTrackTrainMessage.Messages.PacketData[idx45] =
      kcg_lit_int64(0);
  }
  outC->_L99.Header.radioDevice = kcg_lit_int64(0);
  outC->_L99.Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L99.Header.nid_message = kcg_lit_int64(0);
  outC->_L99.Header.t_train = kcg_lit_int64(0);
  outC->_L99.Header.m_ack = kcg_lit_int64(0);
  outC->_L99.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L99.Header.t_train_reference = kcg_lit_int64(0);
  outC->_L99.Header.nid_em = kcg_lit_int64(0);
  outC->_L99.Header.q_scale = kcg_lit_int64(0);
  outC->_L99.Header.d_sr = kcg_lit_int64(0);
  outC->_L99.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L99.Header.d_ref = kcg_lit_int64(0);
  outC->_L99.Header.q_dir = kcg_lit_int64(0);
  outC->_L99.Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L99.Header.m_version = kcg_lit_int64(0);
  for (idx46 = 0; idx46 < 30; idx46++) {
    outC->_L99.Messages.PacketHeaders[idx46].nid_packet = kcg_lit_int64(0);
    outC->_L99.Messages.PacketHeaders[idx46].q_dir = Q_DIR_Reverse;
    outC->_L99.Messages.PacketHeaders[idx46].valid = kcg_true;
    outC->_L99.Messages.PacketHeaders[idx46].startAddress = kcg_lit_int64(0);
    outC->_L99.Messages.PacketHeaders[idx46].endAddress = kcg_lit_int64(0);
  }
  for (idx47 = 0; idx47 < 500; idx47++) {
    outC->_L99.Messages.PacketData[idx47] = kcg_lit_int64(0);
  }
  outC->_L96.Header.radioDevice = kcg_lit_int64(0);
  outC->_L96.Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L96.Header.nid_message = kcg_lit_int64(0);
  outC->_L96.Header.t_train = kcg_lit_int64(0);
  outC->_L96.Header.m_ack = kcg_lit_int64(0);
  outC->_L96.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L96.Header.t_train_reference = kcg_lit_int64(0);
  outC->_L96.Header.nid_em = kcg_lit_int64(0);
  outC->_L96.Header.q_scale = kcg_lit_int64(0);
  outC->_L96.Header.d_sr = kcg_lit_int64(0);
  outC->_L96.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L96.Header.d_ref = kcg_lit_int64(0);
  outC->_L96.Header.q_dir = kcg_lit_int64(0);
  outC->_L96.Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L96.Header.m_version = kcg_lit_int64(0);
  for (idx48 = 0; idx48 < 30; idx48++) {
    outC->_L96.Messages.PacketHeaders[idx48].nid_packet = kcg_lit_int64(0);
    outC->_L96.Messages.PacketHeaders[idx48].q_dir = Q_DIR_Reverse;
    outC->_L96.Messages.PacketHeaders[idx48].valid = kcg_true;
    outC->_L96.Messages.PacketHeaders[idx48].startAddress = kcg_lit_int64(0);
    outC->_L96.Messages.PacketHeaders[idx48].endAddress = kcg_lit_int64(0);
  }
  for (idx49 = 0; idx49 < 500; idx49++) {
    outC->_L96.Messages.PacketData[idx49] = kcg_lit_int64(0);
  }
  outC->_L92.present = kcg_true;
  outC->_L92.header.present = kcg_true;
  outC->_L92.header.nid_message = kcg_lit_int64(0);
  outC->_L92.header.t_train = kcg_lit_int64(0);
  outC->_L92.header.nid_engine = kcg_lit_int64(0);
  outC->_L92.header.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L92.header.xT_TRAIN = kcg_lit_int64(0);
  outC->_L92.header.xNID_EM = kcg_lit_int64(0);
  outC->_L92.header.xQ_EMERGENCYSTOP =
    _12_Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L92.header.xNID_TEXTMESSAGE = kcg_lit_int64(0);
  outC->_L92.packets.p0.valid = kcg_true;
  outC->_L92.packets.p0.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L92.packets.p0.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L92.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L92.packets.p0.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L92.packets.p0.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L92.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L92.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L92.packets.p0.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L92.packets.p0.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L92.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L92.packets.p0.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L92.packets.p0.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L92.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L92.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L92.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L92.packets.p0.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L92.packets.p1.valid = kcg_true;
  outC->_L92.packets.p1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L92.packets.p1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L92.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L92.packets.p1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L92.packets.p1.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L92.packets.p1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L92.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L92.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L92.packets.p1.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L92.packets.p1.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L92.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L92.packets.p1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L92.packets.p1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L92.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L92.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L92.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L92.packets.p1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L92.packets.p3.valid = kcg_true;
  outC->_L92.packets.p3.number = kcg_lit_int64(0);
  for (idx51 = 0; idx51 < 1; idx51++) {
    outC->_L92.packets.p3.aNID_RADIO[idx51].valid = kcg_true;
    for (idx50 = 0; idx50 < 15; idx50++) {
      outC->_L92.packets.p3.aNID_RADIO[idx51].telephoneNumber[idx50] =
        kcg_lit_int64(0);
    }
  }
  outC->_L92.packets.p4.valid = kcg_true;
  outC->_L92.packets.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L92.packets.p5.valid = kcg_true;
  outC->_L92.packets.p5.TrainRunningNumber = kcg_lit_int64(0);
  outC->_L92.packets.p9.valid = kcg_true;
  outC->_L92.packets.p9.transitionInformation = kcg_lit_int64(0);
  outC->_L92.packets.p11.valid = kcg_true;
  outC->_L92.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L92.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L92.packets.p11.l_train = kcg_lit_int64(0);
  outC->_L92.packets.p11.v_maxtrain = kcg_lit_int64(0);
  outC->_L92.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L92.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L92.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L92.packets.p11.n_axle = kcg_lit_int64(0);
  outC->_L92.packets.p11.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx52 = 0; idx52 < 4; idx52++) {
    outC->_L92.packets.p11.tractionIdentity[idx52].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L92.packets.p11.tractionIdentity[idx52].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L92.packets.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx53 = 0; idx53 < 5; idx53++) {
    outC->_L92.packets.p11.nid_ntc[idx53] = kcg_lit_int64(0);
  }
  outC->_L93.present = kcg_true;
  outC->_L93.nid_message = kcg_lit_int64(0);
  outC->_L93.t_train = kcg_lit_int64(0);
  outC->_L93.nid_engine = kcg_lit_int64(0);
  outC->_L93.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L93.xT_TRAIN = kcg_lit_int64(0);
  outC->_L93.xNID_EM = kcg_lit_int64(0);
  outC->_L93.xQ_EMERGENCYSTOP =
    _12_Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L93.xNID_TEXTMESSAGE = kcg_lit_int64(0);
  outC->_L94 = kcg_lit_int64(0);
  outC->_L89 = kcg_lit_int64(0);
  outC->_L90.radioDevice = kcg_lit_int64(0);
  outC->_L90.receivedSystemTime = kcg_lit_int64(0);
  outC->_L90.nid_message = kcg_lit_int64(0);
  outC->_L90.t_train = kcg_lit_int64(0);
  outC->_L90.m_ack = kcg_lit_int64(0);
  outC->_L90.nid_lrbg = kcg_lit_int64(0);
  outC->_L90.t_train_reference = kcg_lit_int64(0);
  outC->_L90.nid_em = kcg_lit_int64(0);
  outC->_L90.q_scale = kcg_lit_int64(0);
  outC->_L90.d_sr = kcg_lit_int64(0);
  outC->_L90.t_sh_rqst = kcg_lit_int64(0);
  outC->_L90.d_ref = kcg_lit_int64(0);
  outC->_L90.q_dir = kcg_lit_int64(0);
  outC->_L90.d_emergencystop = kcg_lit_int64(0);
  outC->_L90.m_version = kcg_lit_int64(0);
  for (idx56 = 0; idx56 < 8; idx56++) {
    outC->messageQueue.m_Entries[idx56].m_IsValid = kcg_true;
    outC->messageQueue.m_Entries[idx56].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->messageQueue.m_Entries[idx56].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->messageQueue.m_Entries[idx56].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->messageQueue.m_Entries[idx56].m_Entry.Header.t_train = kcg_lit_int64(0);
    outC->messageQueue.m_Entries[idx56].m_Entry.Header.m_ack = kcg_lit_int64(0);
    outC->messageQueue.m_Entries[idx56].m_Entry.Header.nid_lrbg = kcg_lit_int64(0);
    outC->messageQueue.m_Entries[idx56].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->messageQueue.m_Entries[idx56].m_Entry.Header.nid_em = kcg_lit_int64(0);
    outC->messageQueue.m_Entries[idx56].m_Entry.Header.q_scale = kcg_lit_int64(0);
    outC->messageQueue.m_Entries[idx56].m_Entry.Header.d_sr = kcg_lit_int64(0);
    outC->messageQueue.m_Entries[idx56].m_Entry.Header.t_sh_rqst = kcg_lit_int64(0);
    outC->messageQueue.m_Entries[idx56].m_Entry.Header.d_ref = kcg_lit_int64(0);
    outC->messageQueue.m_Entries[idx56].m_Entry.Header.q_dir = kcg_lit_int64(0);
    outC->messageQueue.m_Entries[idx56].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->messageQueue.m_Entries[idx56].m_Entry.Header.m_version = kcg_lit_int64(0);
    for (idx54 = 0; idx54 < 30; idx54++) {
      outC->messageQueue.m_Entries[idx56].m_Entry.Messages.PacketHeaders[idx54].nid_packet =
        kcg_lit_int64(0);
      outC->messageQueue.m_Entries[idx56].m_Entry.Messages.PacketHeaders[idx54].q_dir =
        Q_DIR_Reverse;
      outC->messageQueue.m_Entries[idx56].m_Entry.Messages.PacketHeaders[idx54].valid =
        kcg_true;
      outC->messageQueue.m_Entries[idx56].m_Entry.Messages.PacketHeaders[idx54].startAddress =
        kcg_lit_int64(0);
      outC->messageQueue.m_Entries[idx56].m_Entry.Messages.PacketHeaders[idx54].endAddress =
        kcg_lit_int64(0);
    }
    for (idx55 = 0; idx55 < 500; idx55++) {
      outC->messageQueue.m_Entries[idx56].m_Entry.Messages.PacketData[idx55] =
        kcg_lit_int64(0);
    }
  }
  outC->session.m_TrainData.nid_engine = kcg_lit_int64(0);
  outC->session.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int64(0);
  for (idx58 = 0; idx58 < 1; idx58++) {
    outC->session.m_TrainData.m_OnboardPhoneNumbers[idx58].valid = kcg_true;
    for (idx57 = 0; idx57 < 15; idx57++) {
      outC->session.m_TrainData.m_OnboardPhoneNumbers[idx58].telephoneNumber[idx57] =
        kcg_lit_int64(0);
    }
  }
  outC->session.m_TrainData.t_train_ref = kcg_lit_int64(0);
  outC->session.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->session.m_TrainData.l_train = kcg_lit_int64(0);
  outC->session.m_TrainData.v_maxtrain = kcg_lit_int64(0);
  outC->session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->session.m_TrainData.n_axle = kcg_lit_int64(0);
  for (idx59 = 0; idx59 < 4; idx59++) {
    outC->session.m_TrainData.m_TractionIdentities[idx59].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->session.m_TrainData.m_TractionIdentities[idx59].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx60 = 0; idx60 < 5; idx60++) {
    outC->session.m_TrainData.m_NationalSystemIdentities[idx60] = kcg_lit_int64(0);
  }
  outC->session.m_TrainData.nid_operational = kcg_lit_int64(0);
  outC->session.m_PosData.nid_lrbg = kcg_lit_int64(0);
  outC->session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->session.m_PosData.d_lrbg = kcg_lit_int64(0);
  outC->session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->session.m_PosData.l_doubtover = kcg_lit_int64(0);
  outC->session.m_PosData.l_doubtunder = kcg_lit_int64(0);
  outC->session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->session.m_PosData.l_trainint = kcg_lit_int64(0);
  outC->session.m_PosData.v_train = kcg_lit_int64(0);
  outC->session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->session.m_PosData.nid_ntc = kcg_lit_int64(0);
  outC->session.m_PosData.nid_prvlrbg = kcg_lit_int64(0);
  outC->radioTrackTrainMessage.Header.radioDevice = kcg_lit_int64(0);
  outC->radioTrackTrainMessage.Header.receivedSystemTime = kcg_lit_int64(0);
  outC->radioTrackTrainMessage.Header.nid_message = kcg_lit_int64(0);
  outC->radioTrackTrainMessage.Header.t_train = kcg_lit_int64(0);
  outC->radioTrackTrainMessage.Header.m_ack = kcg_lit_int64(0);
  outC->radioTrackTrainMessage.Header.nid_lrbg = kcg_lit_int64(0);
  outC->radioTrackTrainMessage.Header.t_train_reference = kcg_lit_int64(0);
  outC->radioTrackTrainMessage.Header.nid_em = kcg_lit_int64(0);
  outC->radioTrackTrainMessage.Header.q_scale = kcg_lit_int64(0);
  outC->radioTrackTrainMessage.Header.d_sr = kcg_lit_int64(0);
  outC->radioTrackTrainMessage.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->radioTrackTrainMessage.Header.d_ref = kcg_lit_int64(0);
  outC->radioTrackTrainMessage.Header.q_dir = kcg_lit_int64(0);
  outC->radioTrackTrainMessage.Header.d_emergencystop = kcg_lit_int64(0);
  outC->radioTrackTrainMessage.Header.m_version = kcg_lit_int64(0);
  for (idx61 = 0; idx61 < 30; idx61++) {
    outC->radioTrackTrainMessage.Messages.PacketHeaders[idx61].nid_packet =
      kcg_lit_int64(0);
    outC->radioTrackTrainMessage.Messages.PacketHeaders[idx61].q_dir =
      Q_DIR_Reverse;
    outC->radioTrackTrainMessage.Messages.PacketHeaders[idx61].valid = kcg_true;
    outC->radioTrackTrainMessage.Messages.PacketHeaders[idx61].startAddress =
      kcg_lit_int64(0);
    outC->radioTrackTrainMessage.Messages.PacketHeaders[idx61].endAddress =
      kcg_lit_int64(0);
  }
  for (idx62 = 0; idx62 < 500; idx62++) {
    outC->radioTrackTrainMessage.Messages.PacketData[idx62] = kcg_lit_int64(0);
  }
  outC->radioTrackTrainMessageId = kcg_lit_int64(0);
  outC->radioTrainTrackMessageId = kcg_lit_int64(0);
  outC->MOVEMENT_AUTHORITY_SM_fired = SSM_TR_no_trans_MOVEMENT_AUTHORITY_SM;
  outC->MOVEMENT_AUTHORITY_SM_fired_strong =
    SSM_TR_no_trans_MOVEMENT_AUTHORITY_SM;
  outC->MOVEMENT_AUTHORITY_SM_state_act = SSM_st_IDLE_MOVEMENT_AUTHORITY_SM;
  outC->MOVEMENT_AUTHORITY_SM_state_sel = SSM_st_IDLE_MOVEMENT_AUTHORITY_SM;
  outC->_L5_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.nid_lrbg = kcg_lit_int64(0);
  outC->_L5_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.q_scale = Q_SCALE_10_cm_scale;
  outC->_L5_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.d_lrbg = kcg_lit_int64(0);
  outC->_L5_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L5_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L5_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.l_doubtover = kcg_lit_int64(0);
  outC->_L5_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.l_doubtunder = kcg_lit_int64(0);
  outC->_L5_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L5_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.l_trainint = kcg_lit_int64(0);
  outC->_L5_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.v_train = kcg_lit_int64(0);
  outC->_L5_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L5_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_mode =
    M_MODE_Full_Supervision;
  outC->_L5_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_level = M_LEVEL_Level_0;
  outC->_L5_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.nid_ntc = kcg_lit_int64(0);
  outC->_L5_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L4_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L4_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx64 = 0; idx64 < 1; idx64++) {
    outC->_L4_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_TrainData.m_OnboardPhoneNumbers[idx64].valid =
      kcg_true;
    for (idx63 = 0; idx63 < 15; idx63++) {
      outC->_L4_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_TrainData.m_OnboardPhoneNumbers[idx64].telephoneNumber[idx63] =
        kcg_lit_int64(0);
    }
  }
  outC->_L4_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L4_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L4_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L4_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L4_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L4_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L4_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L4_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L4_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx65 = 0; idx65 < 4; idx65++) {
    outC->_L4_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_TrainData.m_TractionIdentities[idx65].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L4_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_TrainData.m_TractionIdentities[idx65].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx66 = 0; idx66 < 5; idx66++) {
    outC->_L4_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_TrainData.m_NationalSystemIdentities[idx66] =
      kcg_lit_int64(0);
  }
  outC->_L4_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L4_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L4_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L4_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L4_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L4_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L4_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L4_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L4_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L4_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L4_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L4_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L4_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L4_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L4_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L4_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L3_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.nid_lrbg = kcg_lit_int64(0);
  outC->_L3_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.q_scale = Q_SCALE_10_cm_scale;
  outC->_L3_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.d_lrbg = kcg_lit_int64(0);
  outC->_L3_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L3_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L3_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.l_doubtover = kcg_lit_int64(0);
  outC->_L3_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.l_doubtunder = kcg_lit_int64(0);
  outC->_L3_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L3_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.l_trainint = kcg_lit_int64(0);
  outC->_L3_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.v_train = kcg_lit_int64(0);
  outC->_L3_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L3_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_mode =
    M_MODE_Full_Supervision;
  outC->_L3_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_level = M_LEVEL_Level_0;
  outC->_L3_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.nid_ntc = kcg_lit_int64(0);
  outC->_L3_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.present = kcg_true;
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.header.present = kcg_true;
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.header.nid_message =
    kcg_lit_int64(0);
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.header.t_train =
    kcg_lit_int64(0);
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.header.nid_engine =
    kcg_lit_int64(0);
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.header.xT_TRAIN =
    kcg_lit_int64(0);
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.header.xNID_EM =
    kcg_lit_int64(0);
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.header.xQ_EMERGENCYSTOP =
    _12_Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.header.xNID_TEXTMESSAGE =
    kcg_lit_int64(0);
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p0.valid = kcg_true;
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p0.packet0.NID_PACKET =
    kcg_lit_int64(0);
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p0.packet0.L_PACKET =
    kcg_lit_int64(0);
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p0.packet0.qscale =
    Q_SCALE_10_cm_scale;
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p0.packet0.NID_LRBG =
    kcg_lit_int64(0);
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p0.packet0.D_LRBG =
    kcg_lit_int64(0);
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p0.packet0.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p0.packet0.dlrbg =
    Q_DLRBG_Reverse;
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p0.packet0.L_DOUBTOVER =
    kcg_lit_int64(0);
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p0.packet0.L_DOUBTUNDER =
    kcg_lit_int64(0);
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p0.packet0.L_TRAININT =
    kcg_lit_int64(0);
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p0.packet0.V_TRAIN =
    kcg_lit_int64(0);
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p0.packet0.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p0.packet0.mode =
    M_MODE_Full_Supervision;
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p0.packet0.level =
    M_LEVEL_Level_0;
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p0.packet0.NID_NTC =
    kcg_lit_int64(0);
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p1.valid = kcg_true;
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.NID_PACKET =
    kcg_lit_int64(0);
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.L_PACKET =
    kcg_lit_int64(0);
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.qscale =
    Q_SCALE_10_cm_scale;
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.NID_LRBG =
    kcg_lit_int64(0);
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.NID_PRVLRBG =
    kcg_lit_int64(0);
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.D_LRBG =
    kcg_lit_int64(0);
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.dlrbg =
    Q_DLRBG_Reverse;
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.L_DOUBTOVER =
    kcg_lit_int64(0);
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.L_DOUBTUNDER =
    kcg_lit_int64(0);
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.L_TRAININT =
    kcg_lit_int64(0);
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.V_TRAIN =
    kcg_lit_int64(0);
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.mode =
    M_MODE_Full_Supervision;
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.level =
    M_LEVEL_Level_0;
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.NID_NTC =
    kcg_lit_int64(0);
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p3.valid = kcg_true;
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p3.number =
    kcg_lit_int64(0);
  for (idx68 = 0; idx68 < 1; idx68++) {
    outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p3.aNID_RADIO[idx68].valid =
      kcg_true;
    for (idx67 = 0; idx67 < 15; idx67++) {
      outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p3.aNID_RADIO[idx68].telephoneNumber[idx67] =
        kcg_lit_int64(0);
    }
  }
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p4.valid = kcg_true;
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p5.valid = kcg_true;
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p5.TrainRunningNumber =
    kcg_lit_int64(0);
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p9.valid = kcg_true;
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p9.transitionInformation =
    kcg_lit_int64(0);
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p11.valid = kcg_true;
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p11.l_train =
    kcg_lit_int64(0);
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p11.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p11.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p11.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p11.n_axle =
    kcg_lit_int64(0);
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p11.nIter_tractionIdentity =
    kcg_lit_int64(0);
  for (idx69 = 0; idx69 < 4; idx69++) {
    outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p11.tractionIdentity[idx69].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p11.tractionIdentity[idx69].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p11.nIter_ntc =
    kcg_lit_int64(0);
  for (idx70 = 0; idx70 < 5; idx70++) {
    outC->_L1_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.packets.p11.nid_ntc[idx70] =
      kcg_lit_int64(0);
  }
  for (idx73 = 0; idx73 < 8; idx73++) {
    outC->_L9_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_Entries[idx73].m_IsValid =
      kcg_true;
    outC->_L9_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_Entries[idx73].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L9_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_Entries[idx73].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L9_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_Entries[idx73].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L9_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_Entries[idx73].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L9_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_Entries[idx73].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L9_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_Entries[idx73].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L9_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_Entries[idx73].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L9_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_Entries[idx73].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L9_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_Entries[idx73].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L9_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_Entries[idx73].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L9_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_Entries[idx73].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L9_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_Entries[idx73].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L9_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_Entries[idx73].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L9_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_Entries[idx73].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L9_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_Entries[idx73].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx71 = 0; idx71 < 30; idx71++) {
      outC->_L9_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_Entries[idx73].m_Entry.Messages.PacketHeaders[idx71].nid_packet =
        kcg_lit_int64(0);
      outC->_L9_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_Entries[idx73].m_Entry.Messages.PacketHeaders[idx71].q_dir =
        Q_DIR_Reverse;
      outC->_L9_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_Entries[idx73].m_Entry.Messages.PacketHeaders[idx71].valid =
        kcg_true;
      outC->_L9_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_Entries[idx73].m_Entry.Messages.PacketHeaders[idx71].startAddress =
        kcg_lit_int64(0);
      outC->_L9_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_Entries[idx73].m_Entry.Messages.PacketHeaders[idx71].endAddress =
        kcg_lit_int64(0);
    }
    for (idx72 = 0; idx72 < 500; idx72++) {
      outC->_L9_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_Entries[idx73].m_Entry.Messages.PacketData[idx72] =
        kcg_lit_int64(0);
    }
  }
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx75 = 0; idx75 < 1; idx75++) {
    outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx75].valid =
      kcg_true;
    for (idx74 = 0; idx74 < 15; idx74++) {
      outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx75].telephoneNumber[idx74] =
        kcg_lit_int64(0);
    }
  }
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx76 = 0; idx76 < 4; idx76++) {
    outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_TractionIdentities[idx76].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_TractionIdentities[idx76].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx77 = 0; idx77 < 5; idx77++) {
    outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_NationalSystemIdentities[idx77] =
      kcg_lit_int64(0);
  }
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.nid_c =
    kcg_lit_int64(0);
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvshunt =
    kcg_lit_int64(0);
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvstff =
    kcg_lit_int64(0);
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvonsight =
    kcg_lit_int64(0);
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvunfit =
    kcg_lit_int64(0);
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvrel =
    kcg_lit_int64(0);
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.t_nvcontact =
    kcg_lit_int64(0);
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.config.m_MAReqParams.q_dir =
    Q_DIR_Reverse;
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.config.m_MAReqParams.t_mar =
    kcg_lit_int64(0);
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.config.m_MAReqParams.t_timeoutrqst =
    kcg_lit_int64(0);
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.config.m_MAReqParams.t_cycrqst =
    kcg_lit_int64(0);
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.q_dir =
    Q_DIR_Reverse;
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.t_cycloc =
    kcg_lit_int64(0);
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.d_cycloc =
    kcg_lit_int64(0);
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.m_loc =
    M_LOC_Now;
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx78 = 0; idx78 < 32; idx78++) {
    outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx78].d_loc =
      kcg_lit_int64(0);
    outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx78].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx79 = 0; idx79 < 16; idx79++) {
    outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.diagnostic[idx79].valid =
      kcg_true;
    outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.diagnostic[idx79].count =
      kcg_lit_int64(0);
    outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.diagnostic[idx79].timestamp =
      kcg_lit_int64(0);
    outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.diagnostic[idx79].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.diagnostic[idx79].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.diagnostic[idx79].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx82 = 0; idx82 < 8; idx82++) {
    outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx82].m_IsValid =
      kcg_true;
    outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx82].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx82].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx82].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx82].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx82].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx82].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx82].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx82].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx82].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx82].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx82].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx82].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx82].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx82].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx82].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx80 = 0; idx80 < 30; idx80++) {
      outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx82].m_Entry.Messages.PacketHeaders[idx80].nid_packet =
        kcg_lit_int64(0);
      outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx82].m_Entry.Messages.PacketHeaders[idx80].q_dir =
        Q_DIR_Reverse;
      outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx82].m_Entry.Messages.PacketHeaders[idx80].valid =
        kcg_true;
      outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx82].m_Entry.Messages.PacketHeaders[idx80].startAddress =
        kcg_lit_int64(0);
      outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx82].m_Entry.Messages.PacketHeaders[idx80].endAddress =
        kcg_lit_int64(0);
    }
    for (idx81 = 0; idx81 < 500; idx81++) {
      outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx82].m_Entry.Messages.PacketData[idx81] =
        kcg_lit_int64(0);
    }
  }
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.clockk.m_Value =
    kcg_lit_int64(0);
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int64(0);
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int64(0);
  for (idx83 = 0; idx83 < 30; idx83++) {
    outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx83].nid_packet =
      kcg_lit_int64(0);
    outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx83].q_dir =
      Q_DIR_Reverse;
    outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx83].valid =
      kcg_true;
    outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx83].startAddress =
      kcg_lit_int64(0);
    outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx83].endAddress =
      kcg_lit_int64(0);
  }
  for (idx84 = 0; idx84 < 500; idx84++) {
    outC->_L7_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketData[idx84] =
      kcg_lit_int64(0);
  }
  outC->_L11_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L11_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx86 = 0; idx86 < 1; idx86++) {
    outC->_L11_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_TrainData.m_OnboardPhoneNumbers[idx86].valid =
      kcg_true;
    for (idx85 = 0; idx85 < 15; idx85++) {
      outC->_L11_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_TrainData.m_OnboardPhoneNumbers[idx86].telephoneNumber[idx85] =
        kcg_lit_int64(0);
    }
  }
  outC->_L11_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L11_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L11_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L11_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L11_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L11_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L11_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L11_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L11_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx87 = 0; idx87 < 4; idx87++) {
    outC->_L11_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_TrainData.m_TractionIdentities[idx87].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L11_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_TrainData.m_TractionIdentities[idx87].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx88 = 0; idx88 < 5; idx88++) {
    outC->_L11_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_TrainData.m_NationalSystemIdentities[idx88] =
      kcg_lit_int64(0);
  }
  outC->_L11_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L11_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L11_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L11_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L11_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L11_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L11_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L11_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L11_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L11_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L11_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L11_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L11_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L11_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L11_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L11_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx90 = 0; idx90 < 1; idx90++) {
    outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx90].valid =
      kcg_true;
    for (idx89 = 0; idx89 < 15; idx89++) {
      outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx90].telephoneNumber[idx89] =
        kcg_lit_int64(0);
    }
  }
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx91 = 0; idx91 < 4; idx91++) {
    outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_TractionIdentities[idx91].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_TractionIdentities[idx91].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx92 = 0; idx92 < 5; idx92++) {
    outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_NationalSystemIdentities[idx92] =
      kcg_lit_int64(0);
  }
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.session.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.nid_c =
    kcg_lit_int64(0);
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvshunt =
    kcg_lit_int64(0);
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvstff =
    kcg_lit_int64(0);
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvonsight =
    kcg_lit_int64(0);
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvunfit =
    kcg_lit_int64(0);
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvrel =
    kcg_lit_int64(0);
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.t_nvcontact =
    kcg_lit_int64(0);
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.config.m_MAReqParams.q_dir =
    Q_DIR_Reverse;
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.config.m_MAReqParams.t_mar =
    kcg_lit_int64(0);
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.config.m_MAReqParams.t_timeoutrqst =
    kcg_lit_int64(0);
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.config.m_MAReqParams.t_cycrqst =
    kcg_lit_int64(0);
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.q_dir =
    Q_DIR_Reverse;
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.t_cycloc =
    kcg_lit_int64(0);
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.d_cycloc =
    kcg_lit_int64(0);
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.m_loc =
    M_LOC_Now;
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx93 = 0; idx93 < 32; idx93++) {
    outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx93].d_loc =
      kcg_lit_int64(0);
    outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx93].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx94 = 0; idx94 < 16; idx94++) {
    outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.diagnostic[idx94].valid =
      kcg_true;
    outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.diagnostic[idx94].count =
      kcg_lit_int64(0);
    outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.diagnostic[idx94].timestamp =
      kcg_lit_int64(0);
    outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.diagnostic[idx94].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.diagnostic[idx94].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.diagnostic[idx94].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx97 = 0; idx97 < 8; idx97++) {
    outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx97].m_IsValid =
      kcg_true;
    outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx97].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx97].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx97].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx97].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx97].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx97].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx97].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx97].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx97].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx97].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx97].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx97].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx97].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx97].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx97].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx95 = 0; idx95 < 30; idx95++) {
      outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx97].m_Entry.Messages.PacketHeaders[idx95].nid_packet =
        kcg_lit_int64(0);
      outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx97].m_Entry.Messages.PacketHeaders[idx95].q_dir =
        Q_DIR_Reverse;
      outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx97].m_Entry.Messages.PacketHeaders[idx95].valid =
        kcg_true;
      outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx97].m_Entry.Messages.PacketHeaders[idx95].startAddress =
        kcg_lit_int64(0);
      outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx97].m_Entry.Messages.PacketHeaders[idx95].endAddress =
        kcg_lit_int64(0);
    }
    for (idx96 = 0; idx96 < 500; idx96++) {
      outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx97].m_Entry.Messages.PacketData[idx96] =
        kcg_lit_int64(0);
    }
  }
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.clockk.m_Value =
    kcg_lit_int64(0);
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int64(0);
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int64(0);
  for (idx98 = 0; idx98 < 30; idx98++) {
    outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx98].nid_packet =
      kcg_lit_int64(0);
    outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx98].q_dir =
      Q_DIR_Reverse;
    outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx98].valid =
      kcg_true;
    outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx98].startAddress =
      kcg_lit_int64(0);
    outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx98].endAddress =
      kcg_lit_int64(0);
  }
  for (idx99 = 0; idx99 < 500; idx99++) {
    outC->_L10_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketData[idx99] =
      kcg_lit_int64(0);
  }
  for (idx102 = 0; idx102 < 8; idx102++) {
    outC->_L5_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx102].m_IsValid = kcg_true;
    outC->_L5_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx102].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L5_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx102].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L5_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx102].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L5_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx102].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L5_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx102].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L5_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx102].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L5_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx102].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L5_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx102].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L5_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx102].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L5_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx102].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L5_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx102].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L5_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx102].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L5_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx102].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L5_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx102].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L5_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx102].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx100 = 0; idx100 < 30; idx100++) {
      outC->_L5_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx102].m_Entry.Messages.PacketHeaders[idx100].nid_packet =
        kcg_lit_int64(0);
      outC->_L5_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx102].m_Entry.Messages.PacketHeaders[idx100].q_dir =
        Q_DIR_Reverse;
      outC->_L5_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx102].m_Entry.Messages.PacketHeaders[idx100].valid =
        kcg_true;
      outC->_L5_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx102].m_Entry.Messages.PacketHeaders[idx100].startAddress =
        kcg_lit_int64(0);
      outC->_L5_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx102].m_Entry.Messages.PacketHeaders[idx100].endAddress =
        kcg_lit_int64(0);
    }
    for (idx101 = 0; idx101 < 500; idx101++) {
      outC->_L5_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx102].m_Entry.Messages.PacketData[idx101] =
        kcg_lit_int64(0);
    }
  }
  outC->_L4_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L4_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx104 = 0; idx104 < 1; idx104++) {
    outC->_L4_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.m_OnboardPhoneNumbers[idx104].valid =
      kcg_true;
    for (idx103 = 0; idx103 < 15; idx103++) {
      outC->_L4_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.m_OnboardPhoneNumbers[idx104].telephoneNumber[idx103] =
        kcg_lit_int64(0);
    }
  }
  outC->_L4_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L4_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L4_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L4_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.l_train = kcg_lit_int64(0);
  outC->_L4_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L4_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L4_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L4_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L4_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.n_axle = kcg_lit_int64(0);
  for (idx105 = 0; idx105 < 4; idx105++) {
    outC->_L4_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.m_TractionIdentities[idx105].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L4_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.m_TractionIdentities[idx105].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx106 = 0; idx106 < 5; idx106++) {
    outC->_L4_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.m_NationalSystemIdentities[idx106] =
      kcg_lit_int64(0);
  }
  outC->_L4_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L4_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_PosData.nid_lrbg = kcg_lit_int64(0);
  outC->_L4_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L4_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_PosData.d_lrbg = kcg_lit_int64(0);
  outC->_L4_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L4_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L4_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L4_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L4_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L4_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_PosData.l_trainint = kcg_lit_int64(
      0);
  outC->_L4_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_PosData.v_train = kcg_lit_int64(0);
  outC->_L4_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L4_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L4_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L4_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_PosData.nid_ntc = kcg_lit_int64(0);
  outC->_L4_AWAIT_MA_MOVEMENT_AUTHORITY_SM.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx108 = 0; idx108 < 1; idx108++) {
    outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx108].valid =
      kcg_true;
    for (idx107 = 0; idx107 < 15; idx107++) {
      outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx108].telephoneNumber[idx107] =
        kcg_lit_int64(0);
    }
  }
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx109 = 0; idx109 < 4; idx109++) {
    outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_TractionIdentities[idx109].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_TractionIdentities[idx109].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx110 = 0; idx110 < 5; idx110++) {
    outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_NationalSystemIdentities[idx110] =
      kcg_lit_int64(0);
  }
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.nid_c =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvshunt =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvstff =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvonsight =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvunfit =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvrel =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.t_nvcontact =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.config.m_MAReqParams.q_dir =
    Q_DIR_Reverse;
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.config.m_MAReqParams.t_mar =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.config.m_MAReqParams.t_timeoutrqst =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.config.m_MAReqParams.t_cycrqst =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.q_dir =
    Q_DIR_Reverse;
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.t_cycloc =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.d_cycloc =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.m_loc =
    M_LOC_Now;
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx111 = 0; idx111 < 32; idx111++) {
    outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx111].d_loc =
      kcg_lit_int64(0);
    outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx111].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx112 = 0; idx112 < 16; idx112++) {
    outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.diagnostic[idx112].valid = kcg_true;
    outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.diagnostic[idx112].count =
      kcg_lit_int64(0);
    outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.diagnostic[idx112].timestamp =
      kcg_lit_int64(0);
    outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.diagnostic[idx112].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.diagnostic[idx112].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.diagnostic[idx112].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx115 = 0; idx115 < 8; idx115++) {
    outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx115].m_IsValid =
      kcg_true;
    outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx115].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx115].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx115].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx115].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx115].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx115].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx115].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx115].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx115].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx115].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx115].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx115].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx115].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx115].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx115].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx113 = 0; idx113 < 30; idx113++) {
      outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx115].m_Entry.Messages.PacketHeaders[idx113].nid_packet =
        kcg_lit_int64(0);
      outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx115].m_Entry.Messages.PacketHeaders[idx113].q_dir =
        Q_DIR_Reverse;
      outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx115].m_Entry.Messages.PacketHeaders[idx113].valid =
        kcg_true;
      outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx115].m_Entry.Messages.PacketHeaders[idx113].startAddress =
        kcg_lit_int64(0);
      outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx115].m_Entry.Messages.PacketHeaders[idx113].endAddress =
        kcg_lit_int64(0);
    }
    for (idx114 = 0; idx114 < 500; idx114++) {
      outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx115].m_Entry.Messages.PacketData[idx114] =
        kcg_lit_int64(0);
    }
  }
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.clockk.m_Value = kcg_lit_int64(0);
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int64(0);
  for (idx116 = 0; idx116 < 30; idx116++) {
    outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx116].nid_packet =
      kcg_lit_int64(0);
    outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx116].q_dir =
      Q_DIR_Reverse;
    outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx116].valid =
      kcg_true;
    outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx116].startAddress =
      kcg_lit_int64(0);
    outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx116].endAddress =
      kcg_lit_int64(0);
  }
  for (idx117 = 0; idx117 < 500; idx117++) {
    outC->_L3_AWAIT_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketData[idx117] =
      kcg_lit_int64(0);
  }
  outC->IfBlock1_clock_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM =
    kcg_true;
  outC->radioTrainTrackMessageTimestamp_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM =
    kcg_lit_int64(0);
  outC->_L26_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM = kcg_true;
  outC->_L24_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM = kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM = kcg_lit_int64(0);
  outC->_L22_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM = kcg_lit_int64(0);
  outC->_L21_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM = kcg_lit_int64(0);
  outC->_L20_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM = kcg_lit_int64(0);
  outC->_L19_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.radioDevice =
    kcg_lit_int64(0);
  outC->_L19_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L19_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.nid_message =
    kcg_lit_int64(0);
  outC->_L19_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.t_train =
    kcg_lit_int64(0);
  outC->_L19_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_ack =
    kcg_lit_int64(0);
  outC->_L19_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L19_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.t_train_reference =
    kcg_lit_int64(0);
  outC->_L19_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.nid_em =
    kcg_lit_int64(0);
  outC->_L19_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.q_scale =
    kcg_lit_int64(0);
  outC->_L19_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.d_sr =
    kcg_lit_int64(0);
  outC->_L19_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L19_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.d_ref =
    kcg_lit_int64(0);
  outC->_L19_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.q_dir =
    kcg_lit_int64(0);
  outC->_L19_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L19_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_version =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM = kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.present = kcg_true;
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.header.present =
    kcg_true;
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.header.nid_message =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.header.t_train =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.header.nid_engine =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.header.xT_TRAIN =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.header.xNID_EM =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.header.xQ_EMERGENCYSTOP =
    _12_Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.header.xNID_TEXTMESSAGE =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p0.valid =
    kcg_true;
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p0.packet0.NID_PACKET =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p0.packet0.L_PACKET =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p0.packet0.qscale =
    Q_SCALE_10_cm_scale;
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p0.packet0.NID_LRBG =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p0.packet0.D_LRBG =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p0.packet0.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p0.packet0.dlrbg =
    Q_DLRBG_Reverse;
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p0.packet0.L_DOUBTOVER =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p0.packet0.L_DOUBTUNDER =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p0.packet0.L_TRAININT =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p0.packet0.V_TRAIN =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p0.packet0.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p0.packet0.mode =
    M_MODE_Full_Supervision;
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p0.packet0.level =
    M_LEVEL_Level_0;
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p0.packet0.NID_NTC =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p1.valid =
    kcg_true;
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.NID_PACKET =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.L_PACKET =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.qscale =
    Q_SCALE_10_cm_scale;
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.NID_LRBG =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.NID_PRVLRBG =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.D_LRBG =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.dlrbg =
    Q_DLRBG_Reverse;
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.L_DOUBTOVER =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.L_DOUBTUNDER =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.L_TRAININT =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.V_TRAIN =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.mode =
    M_MODE_Full_Supervision;
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.level =
    M_LEVEL_Level_0;
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.NID_NTC =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p3.valid =
    kcg_true;
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p3.number =
    kcg_lit_int64(0);
  for (idx119 = 0; idx119 < 1; idx119++) {
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p3.aNID_RADIO[idx119].valid =
      kcg_true;
    for (idx118 = 0; idx118 < 15; idx118++) {
      outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p3.aNID_RADIO[idx119].telephoneNumber[idx118] =
        kcg_lit_int64(0);
    }
  }
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p4.valid =
    kcg_true;
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p5.valid =
    kcg_true;
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p5.TrainRunningNumber =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p9.valid =
    kcg_true;
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p9.transitionInformation =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p11.valid =
    kcg_true;
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p11.l_train =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p11.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p11.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p11.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p11.n_axle =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p11.nIter_tractionIdentity =
    kcg_lit_int64(0);
  for (idx120 = 0; idx120 < 4; idx120++) {
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p11.tractionIdentity[idx120].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p11.tractionIdentity[idx120].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p11.nIter_ntc =
    kcg_lit_int64(0);
  for (idx121 = 0; idx121 < 5; idx121++) {
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.packets.p11.nid_ntc[idx121] =
      kcg_lit_int64(0);
  }
  outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.present = kcg_true;
  outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.nid_message =
    kcg_lit_int64(0);
  outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.t_train =
    kcg_lit_int64(0);
  outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.nid_engine =
    kcg_lit_int64(0);
  outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.xT_TRAIN =
    kcg_lit_int64(0);
  outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.xNID_EM =
    kcg_lit_int64(0);
  outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.xQ_EMERGENCYSTOP =
    _12_Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.xNID_TEXTMESSAGE =
    kcg_lit_int64(0);
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx123 = 0; idx123 < 1; idx123++) {
    outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx123].valid =
      kcg_true;
    for (idx122 = 0; idx122 < 15; idx122++) {
      outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx123].telephoneNumber[idx122] =
        kcg_lit_int64(0);
    }
  }
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx124 = 0; idx124 < 4; idx124++) {
    outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_TractionIdentities[idx124].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_TractionIdentities[idx124].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx125 = 0; idx125 < 5; idx125++) {
    outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_NationalSystemIdentities[idx125] =
      kcg_lit_int64(0);
  }
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.nid_c =
    kcg_lit_int64(0);
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvshunt =
    kcg_lit_int64(0);
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvstff =
    kcg_lit_int64(0);
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvonsight =
    kcg_lit_int64(0);
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvunfit =
    kcg_lit_int64(0);
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvrel =
    kcg_lit_int64(0);
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.t_nvcontact =
    kcg_lit_int64(0);
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_MAReqParams.q_dir =
    Q_DIR_Reverse;
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_MAReqParams.t_mar =
    kcg_lit_int64(0);
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_MAReqParams.t_timeoutrqst =
    kcg_lit_int64(0);
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_MAReqParams.t_cycrqst =
    kcg_lit_int64(0);
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.q_dir =
    Q_DIR_Reverse;
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.t_cycloc =
    kcg_lit_int64(0);
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.d_cycloc =
    kcg_lit_int64(0);
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.m_loc =
    M_LOC_Now;
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx126 = 0; idx126 < 32; idx126++) {
    outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx126].d_loc =
      kcg_lit_int64(0);
    outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx126].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx127 = 0; idx127 < 16; idx127++) {
    outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.diagnostic[idx127].valid =
      kcg_true;
    outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.diagnostic[idx127].count =
      kcg_lit_int64(0);
    outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.diagnostic[idx127].timestamp =
      kcg_lit_int64(0);
    outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.diagnostic[idx127].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.diagnostic[idx127].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.diagnostic[idx127].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx130 = 0; idx130 < 8; idx130++) {
    outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx130].m_IsValid =
      kcg_true;
    outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx130].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx130].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx130].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx130].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx130].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx130].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx130].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx130].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx130].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx130].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx130].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx130].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx130].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx130].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx130].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx128 = 0; idx128 < 30; idx128++) {
      outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx130].m_Entry.Messages.PacketHeaders[idx128].nid_packet =
        kcg_lit_int64(0);
      outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx130].m_Entry.Messages.PacketHeaders[idx128].q_dir =
        Q_DIR_Reverse;
      outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx130].m_Entry.Messages.PacketHeaders[idx128].valid =
        kcg_true;
      outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx130].m_Entry.Messages.PacketHeaders[idx128].startAddress =
        kcg_lit_int64(0);
      outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx130].m_Entry.Messages.PacketHeaders[idx128].endAddress =
        kcg_lit_int64(0);
    }
    for (idx129 = 0; idx129 < 500; idx129++) {
      outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx130].m_Entry.Messages.PacketData[idx129] =
        kcg_lit_int64(0);
    }
  }
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.clockk.m_Value =
    kcg_lit_int64(0);
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int64(0);
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int64(0);
  for (idx131 = 0; idx131 < 30; idx131++) {
    outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx131].nid_packet =
      kcg_lit_int64(0);
    outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx131].q_dir =
      Q_DIR_Reverse;
    outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx131].valid =
      kcg_true;
    outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx131].startAddress =
      kcg_lit_int64(0);
    outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx131].endAddress =
      kcg_lit_int64(0);
  }
  for (idx132 = 0; idx132 < 500; idx132++) {
    outC->_L34_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketData[idx132] =
      kcg_lit_int64(0);
  }
  for (idx135 = 0; idx135 < 8; idx135++) {
    outC->_L33_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_Entries[idx135].m_IsValid =
      kcg_true;
    outC->_L33_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_Entries[idx135].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L33_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_Entries[idx135].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L33_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_Entries[idx135].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L33_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_Entries[idx135].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L33_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_Entries[idx135].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L33_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_Entries[idx135].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L33_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_Entries[idx135].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L33_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_Entries[idx135].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L33_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_Entries[idx135].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L33_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_Entries[idx135].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L33_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_Entries[idx135].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L33_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_Entries[idx135].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L33_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_Entries[idx135].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L33_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_Entries[idx135].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L33_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_Entries[idx135].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx133 = 0; idx133 < 30; idx133++) {
      outC->_L33_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_Entries[idx135].m_Entry.Messages.PacketHeaders[idx133].nid_packet =
        kcg_lit_int64(0);
      outC->_L33_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_Entries[idx135].m_Entry.Messages.PacketHeaders[idx133].q_dir =
        Q_DIR_Reverse;
      outC->_L33_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_Entries[idx135].m_Entry.Messages.PacketHeaders[idx133].valid =
        kcg_true;
      outC->_L33_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_Entries[idx135].m_Entry.Messages.PacketHeaders[idx133].startAddress =
        kcg_lit_int64(0);
      outC->_L33_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_Entries[idx135].m_Entry.Messages.PacketHeaders[idx133].endAddress =
        kcg_lit_int64(0);
    }
    for (idx134 = 0; idx134 < 500; idx134++) {
      outC->_L33_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_Entries[idx135].m_Entry.Messages.PacketData[idx134] =
        kcg_lit_int64(0);
    }
  }
  outC->_L32_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L32_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx137 = 0; idx137 < 1; idx137++) {
    outC->_L32_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_TrainData.m_OnboardPhoneNumbers[idx137].valid =
      kcg_true;
    for (idx136 = 0; idx136 < 15; idx136++) {
      outC->_L32_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_TrainData.m_OnboardPhoneNumbers[idx137].telephoneNumber[idx136] =
        kcg_lit_int64(0);
    }
  }
  outC->_L32_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L32_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L32_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L32_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L32_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L32_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L32_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L32_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L32_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx138 = 0; idx138 < 4; idx138++) {
    outC->_L32_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_TrainData.m_TractionIdentities[idx138].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L32_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_TrainData.m_TractionIdentities[idx138].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx139 = 0; idx139 < 5; idx139++) {
    outC->_L32_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_TrainData.m_NationalSystemIdentities[idx139] =
      kcg_lit_int64(0);
  }
  outC->_L32_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L32_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L32_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L32_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L32_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L32_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L32_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L32_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L32_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L32_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L32_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L32_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L32_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L32_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L32_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L32_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L36_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L36_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L36_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L36_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.Header.t_train =
    kcg_lit_int64(0);
  outC->_L36_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L36_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L36_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L36_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L36_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L36_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L36_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L36_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L36_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L36_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L36_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.Header.m_version =
    kcg_lit_int64(0);
  for (idx140 = 0; idx140 < 30; idx140++) {
    outC->_L36_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.Messages.PacketHeaders[idx140].nid_packet =
      kcg_lit_int64(0);
    outC->_L36_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.Messages.PacketHeaders[idx140].q_dir =
      Q_DIR_Reverse;
    outC->_L36_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.Messages.PacketHeaders[idx140].valid =
      kcg_true;
    outC->_L36_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.Messages.PacketHeaders[idx140].startAddress =
      kcg_lit_int64(0);
    outC->_L36_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.Messages.PacketHeaders[idx140].endAddress =
      kcg_lit_int64(0);
  }
  for (idx141 = 0; idx141 < 500; idx141++) {
    outC->_L36_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.Messages.PacketData[idx141] =
      kcg_lit_int64(0);
  }
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx143 = 0; idx143 < 1; idx143++) {
    outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx143].valid =
      kcg_true;
    for (idx142 = 0; idx142 < 15; idx142++) {
      outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx143].telephoneNumber[idx142] =
        kcg_lit_int64(0);
    }
  }
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx144 = 0; idx144 < 4; idx144++) {
    outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_TractionIdentities[idx144].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_TractionIdentities[idx144].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx145 = 0; idx145 < 5; idx145++) {
    outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_NationalSystemIdentities[idx145] =
      kcg_lit_int64(0);
  }
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.nid_c =
    kcg_lit_int64(0);
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvshunt =
    kcg_lit_int64(0);
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvstff =
    kcg_lit_int64(0);
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvonsight =
    kcg_lit_int64(0);
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvunfit =
    kcg_lit_int64(0);
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvrel =
    kcg_lit_int64(0);
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.t_nvcontact =
    kcg_lit_int64(0);
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_MAReqParams.q_dir =
    Q_DIR_Reverse;
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_MAReqParams.t_mar =
    kcg_lit_int64(0);
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_MAReqParams.t_timeoutrqst =
    kcg_lit_int64(0);
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_MAReqParams.t_cycrqst =
    kcg_lit_int64(0);
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.q_dir =
    Q_DIR_Reverse;
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.t_cycloc =
    kcg_lit_int64(0);
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.d_cycloc =
    kcg_lit_int64(0);
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.m_loc =
    M_LOC_Now;
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx146 = 0; idx146 < 32; idx146++) {
    outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx146].d_loc =
      kcg_lit_int64(0);
    outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx146].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx147 = 0; idx147 < 16; idx147++) {
    outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.diagnostic[idx147].valid =
      kcg_true;
    outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.diagnostic[idx147].count =
      kcg_lit_int64(0);
    outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.diagnostic[idx147].timestamp =
      kcg_lit_int64(0);
    outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.diagnostic[idx147].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.diagnostic[idx147].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.diagnostic[idx147].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx150 = 0; idx150 < 8; idx150++) {
    outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx150].m_IsValid =
      kcg_true;
    outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx150].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx150].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx150].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx150].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx150].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx150].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx150].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx150].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx150].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx150].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx150].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx150].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx150].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx150].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx150].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx148 = 0; idx148 < 30; idx148++) {
      outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx150].m_Entry.Messages.PacketHeaders[idx148].nid_packet =
        kcg_lit_int64(0);
      outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx150].m_Entry.Messages.PacketHeaders[idx148].q_dir =
        Q_DIR_Reverse;
      outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx150].m_Entry.Messages.PacketHeaders[idx148].valid =
        kcg_true;
      outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx150].m_Entry.Messages.PacketHeaders[idx148].startAddress =
        kcg_lit_int64(0);
      outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx150].m_Entry.Messages.PacketHeaders[idx148].endAddress =
        kcg_lit_int64(0);
    }
    for (idx149 = 0; idx149 < 500; idx149++) {
      outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx150].m_Entry.Messages.PacketData[idx149] =
        kcg_lit_int64(0);
    }
  }
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.clockk.m_Value =
    kcg_lit_int64(0);
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int64(0);
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int64(0);
  for (idx151 = 0; idx151 < 30; idx151++) {
    outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx151].nid_packet =
      kcg_lit_int64(0);
    outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx151].q_dir =
      Q_DIR_Reverse;
    outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx151].valid =
      kcg_true;
    outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx151].startAddress =
      kcg_lit_int64(0);
    outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx151].endAddress =
      kcg_lit_int64(0);
  }
  for (idx152 = 0; idx152 < 500; idx152++) {
    outC->_L35_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketData[idx152] =
      kcg_lit_int64(0);
  }
  outC->_L9_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM = kcg_lit_int64(0);
  outC->_L8_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM = kcg_lit_int64(0);
  outC->_L7_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM = kcg_true;
  outC->_L6_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM = kcg_lit_int64(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM = kcg_lit_int64(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.radioDevice =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.nid_message =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.t_train = kcg_lit_int64(
      0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_ack = kcg_lit_int64(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.t_train_reference =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.nid_em = kcg_lit_int64(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.q_scale = kcg_lit_int64(
      0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.d_sr = kcg_lit_int64(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.d_ref = kcg_lit_int64(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.q_dir = kcg_lit_int64(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_version =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM = kcg_lit_int64(0);
  outC->_L18_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L18_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx154 = 0; idx154 < 1; idx154++) {
    outC->_L18_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_TrainData.m_OnboardPhoneNumbers[idx154].valid =
      kcg_true;
    for (idx153 = 0; idx153 < 15; idx153++) {
      outC->_L18_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_TrainData.m_OnboardPhoneNumbers[idx154].telephoneNumber[idx153] =
        kcg_lit_int64(0);
    }
  }
  outC->_L18_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L18_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L18_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L18_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L18_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L18_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L18_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L18_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L18_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx155 = 0; idx155 < 4; idx155++) {
    outC->_L18_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_TrainData.m_TractionIdentities[idx155].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L18_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_TrainData.m_TractionIdentities[idx155].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx156 = 0; idx156 < 5; idx156++) {
    outC->_L18_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_TrainData.m_NationalSystemIdentities[idx156] =
      kcg_lit_int64(0);
  }
  outC->_L18_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L18_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L18_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L18_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L18_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L18_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L18_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L18_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L18_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L18_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L18_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L18_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L18_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L18_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L18_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L18_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  for (idx159 = 0; idx159 < 8; idx159++) {
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_Entries[idx159].m_IsValid =
      kcg_true;
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_Entries[idx159].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_Entries[idx159].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_Entries[idx159].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_Entries[idx159].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_Entries[idx159].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_Entries[idx159].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_Entries[idx159].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_Entries[idx159].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_Entries[idx159].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_Entries[idx159].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_Entries[idx159].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_Entries[idx159].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_Entries[idx159].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_Entries[idx159].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_Entries[idx159].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx157 = 0; idx157 < 30; idx157++) {
      outC->_L17_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_Entries[idx159].m_Entry.Messages.PacketHeaders[idx157].nid_packet =
        kcg_lit_int64(0);
      outC->_L17_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_Entries[idx159].m_Entry.Messages.PacketHeaders[idx157].q_dir =
        Q_DIR_Reverse;
      outC->_L17_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_Entries[idx159].m_Entry.Messages.PacketHeaders[idx157].valid =
        kcg_true;
      outC->_L17_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_Entries[idx159].m_Entry.Messages.PacketHeaders[idx157].startAddress =
        kcg_lit_int64(0);
      outC->_L17_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_Entries[idx159].m_Entry.Messages.PacketHeaders[idx157].endAddress =
        kcg_lit_int64(0);
    }
    for (idx158 = 0; idx158 < 500; idx158++) {
      outC->_L17_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.m_Entries[idx159].m_Entry.Messages.PacketData[idx158] =
        kcg_lit_int64(0);
    }
  }
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx161 = 0; idx161 < 1; idx161++) {
    outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx161].valid =
      kcg_true;
    for (idx160 = 0; idx160 < 15; idx160++) {
      outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx161].telephoneNumber[idx160] =
        kcg_lit_int64(0);
    }
  }
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx162 = 0; idx162 < 4; idx162++) {
    outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_TractionIdentities[idx162].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_TractionIdentities[idx162].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx163 = 0; idx163 < 5; idx163++) {
    outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_NationalSystemIdentities[idx163] =
      kcg_lit_int64(0);
  }
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.nid_c =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvshunt =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvstff =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvonsight =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvunfit =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvrel =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.t_nvcontact =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_MAReqParams.q_dir =
    Q_DIR_Reverse;
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_MAReqParams.t_mar =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_MAReqParams.t_timeoutrqst =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_MAReqParams.t_cycrqst =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.q_dir =
    Q_DIR_Reverse;
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.t_cycloc =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.d_cycloc =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.m_loc =
    M_LOC_Now;
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx164 = 0; idx164 < 32; idx164++) {
    outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx164].d_loc =
      kcg_lit_int64(0);
    outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx164].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx165 = 0; idx165 < 16; idx165++) {
    outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.diagnostic[idx165].valid =
      kcg_true;
    outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.diagnostic[idx165].count =
      kcg_lit_int64(0);
    outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.diagnostic[idx165].timestamp =
      kcg_lit_int64(0);
    outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.diagnostic[idx165].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.diagnostic[idx165].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.diagnostic[idx165].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx168 = 0; idx168 < 8; idx168++) {
    outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx168].m_IsValid =
      kcg_true;
    outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx168].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx168].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx168].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx168].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx168].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx168].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx168].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx168].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx168].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx168].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx168].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx168].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx168].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx168].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx168].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx166 = 0; idx166 < 30; idx166++) {
      outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx168].m_Entry.Messages.PacketHeaders[idx166].nid_packet =
        kcg_lit_int64(0);
      outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx168].m_Entry.Messages.PacketHeaders[idx166].q_dir =
        Q_DIR_Reverse;
      outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx168].m_Entry.Messages.PacketHeaders[idx166].valid =
        kcg_true;
      outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx168].m_Entry.Messages.PacketHeaders[idx166].startAddress =
        kcg_lit_int64(0);
      outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx168].m_Entry.Messages.PacketHeaders[idx166].endAddress =
        kcg_lit_int64(0);
    }
    for (idx167 = 0; idx167 < 500; idx167++) {
      outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx168].m_Entry.Messages.PacketData[idx167] =
        kcg_lit_int64(0);
    }
  }
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.clockk.m_Value =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int64(0);
  for (idx169 = 0; idx169 < 30; idx169++) {
    outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx169].nid_packet =
      kcg_lit_int64(0);
    outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx169].q_dir =
      Q_DIR_Reverse;
    outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx169].valid =
      kcg_true;
    outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx169].startAddress =
      kcg_lit_int64(0);
    outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx169].endAddress =
      kcg_lit_int64(0);
  }
  for (idx170 = 0; idx170 < 500; idx170++) {
    outC->_L16_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketData[idx170] =
      kcg_lit_int64(0);
  }
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx172 = 0; idx172 < 1; idx172++) {
    outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx172].valid =
      kcg_true;
    for (idx171 = 0; idx171 < 15; idx171++) {
      outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx172].telephoneNumber[idx171] =
        kcg_lit_int64(0);
    }
  }
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx173 = 0; idx173 < 4; idx173++) {
    outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_TractionIdentities[idx173].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_TractionIdentities[idx173].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx174 = 0; idx174 < 5; idx174++) {
    outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_NationalSystemIdentities[idx174] =
      kcg_lit_int64(0);
  }
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.session.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.nid_c =
    kcg_lit_int64(0);
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvshunt =
    kcg_lit_int64(0);
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvstff =
    kcg_lit_int64(0);
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvonsight =
    kcg_lit_int64(0);
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvunfit =
    kcg_lit_int64(0);
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvrel =
    kcg_lit_int64(0);
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.t_nvcontact =
    kcg_lit_int64(0);
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_MAReqParams.q_dir =
    Q_DIR_Reverse;
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_MAReqParams.t_mar =
    kcg_lit_int64(0);
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_MAReqParams.t_timeoutrqst =
    kcg_lit_int64(0);
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_MAReqParams.t_cycrqst =
    kcg_lit_int64(0);
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.q_dir =
    Q_DIR_Reverse;
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.t_cycloc =
    kcg_lit_int64(0);
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.d_cycloc =
    kcg_lit_int64(0);
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.m_loc =
    M_LOC_Now;
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx175 = 0; idx175 < 32; idx175++) {
    outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx175].d_loc =
      kcg_lit_int64(0);
    outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx175].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx176 = 0; idx176 < 16; idx176++) {
    outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.diagnostic[idx176].valid =
      kcg_true;
    outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.diagnostic[idx176].count =
      kcg_lit_int64(0);
    outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.diagnostic[idx176].timestamp =
      kcg_lit_int64(0);
    outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.diagnostic[idx176].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.diagnostic[idx176].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.diagnostic[idx176].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx179 = 0; idx179 < 8; idx179++) {
    outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx179].m_IsValid =
      kcg_true;
    outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx179].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx179].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx179].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx179].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx179].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx179].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx179].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx179].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx179].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx179].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx179].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx179].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx179].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx179].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx179].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx177 = 0; idx177 < 30; idx177++) {
      outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx179].m_Entry.Messages.PacketHeaders[idx177].nid_packet =
        kcg_lit_int64(0);
      outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx179].m_Entry.Messages.PacketHeaders[idx177].q_dir =
        Q_DIR_Reverse;
      outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx179].m_Entry.Messages.PacketHeaders[idx177].valid =
        kcg_true;
      outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx179].m_Entry.Messages.PacketHeaders[idx177].startAddress =
        kcg_lit_int64(0);
      outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx179].m_Entry.Messages.PacketHeaders[idx177].endAddress =
        kcg_lit_int64(0);
    }
    for (idx178 = 0; idx178 < 500; idx178++) {
      outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx179].m_Entry.Messages.PacketData[idx178] =
        kcg_lit_int64(0);
    }
  }
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.clockk.m_Value =
    kcg_lit_int64(0);
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int64(0);
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int64(0);
  for (idx180 = 0; idx180 < 30; idx180++) {
    outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx180].nid_packet =
      kcg_lit_int64(0);
    outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx180].q_dir =
      Q_DIR_Reverse;
    outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx180].valid =
      kcg_true;
    outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx180].startAddress =
      kcg_lit_int64(0);
    outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx180].endAddress =
      kcg_lit_int64(0);
  }
  for (idx181 = 0; idx181 < 500; idx181++) {
    outC->_L20_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketData[idx181] =
      kcg_lit_int64(0);
  }
  outC->_L19_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L19_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L19_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L19_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.Header.t_train =
    kcg_lit_int64(0);
  outC->_L19_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L19_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L19_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L19_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L19_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L19_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L19_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L19_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L19_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L19_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L19_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.Header.m_version =
    kcg_lit_int64(0);
  for (idx182 = 0; idx182 < 30; idx182++) {
    outC->_L19_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.Messages.PacketHeaders[idx182].nid_packet =
      kcg_lit_int64(0);
    outC->_L19_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.Messages.PacketHeaders[idx182].q_dir =
      Q_DIR_Reverse;
    outC->_L19_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.Messages.PacketHeaders[idx182].valid =
      kcg_true;
    outC->_L19_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.Messages.PacketHeaders[idx182].startAddress =
      kcg_lit_int64(0);
    outC->_L19_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.Messages.PacketHeaders[idx182].endAddress =
      kcg_lit_int64(0);
  }
  for (idx183 = 0; idx183 < 500; idx183++) {
    outC->_L19_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM.Messages.PacketData[idx183] =
      kcg_lit_int64(0);
  }
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx185 = 0; idx185 < 1; idx185++) {
    outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx185].valid =
      kcg_true;
    for (idx184 = 0; idx184 < 15; idx184++) {
      outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx185].telephoneNumber[idx184] =
        kcg_lit_int64(0);
    }
  }
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx186 = 0; idx186 < 4; idx186++) {
    outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_TractionIdentities[idx186].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_TractionIdentities[idx186].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx187 = 0; idx187 < 5; idx187++) {
    outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_NationalSystemIdentities[idx187] =
      kcg_lit_int64(0);
  }
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.nid_c =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvshunt =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvstff =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvonsight =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvunfit =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvrel =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.t_nvcontact =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_MAReqParams.q_dir =
    Q_DIR_Reverse;
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_MAReqParams.t_mar =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_MAReqParams.t_timeoutrqst =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_MAReqParams.t_cycrqst =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.q_dir =
    Q_DIR_Reverse;
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.t_cycloc =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.d_cycloc =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.m_loc =
    M_LOC_Now;
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx188 = 0; idx188 < 32; idx188++) {
    outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx188].d_loc =
      kcg_lit_int64(0);
    outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx188].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx189 = 0; idx189 < 16; idx189++) {
    outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.diagnostic[idx189].valid =
      kcg_true;
    outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.diagnostic[idx189].count =
      kcg_lit_int64(0);
    outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.diagnostic[idx189].timestamp =
      kcg_lit_int64(0);
    outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.diagnostic[idx189].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.diagnostic[idx189].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.diagnostic[idx189].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx192 = 0; idx192 < 8; idx192++) {
    outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx192].m_IsValid =
      kcg_true;
    outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx192].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx192].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx192].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx192].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx192].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx192].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx192].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx192].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx192].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx192].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx192].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx192].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx192].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx192].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx192].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx190 = 0; idx190 < 30; idx190++) {
      outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx192].m_Entry.Messages.PacketHeaders[idx190].nid_packet =
        kcg_lit_int64(0);
      outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx192].m_Entry.Messages.PacketHeaders[idx190].q_dir =
        Q_DIR_Reverse;
      outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx192].m_Entry.Messages.PacketHeaders[idx190].valid =
        kcg_true;
      outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx192].m_Entry.Messages.PacketHeaders[idx190].startAddress =
        kcg_lit_int64(0);
      outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx192].m_Entry.Messages.PacketHeaders[idx190].endAddress =
        kcg_lit_int64(0);
    }
    for (idx191 = 0; idx191 < 500; idx191++) {
      outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx192].m_Entry.Messages.PacketData[idx191] =
        kcg_lit_int64(0);
    }
  }
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.clockk.m_Value =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int64(0);
  for (idx193 = 0; idx193 < 30; idx193++) {
    outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx193].nid_packet =
      kcg_lit_int64(0);
    outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx193].q_dir =
      Q_DIR_Reverse;
    outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx193].valid =
      kcg_true;
    outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx193].startAddress =
      kcg_lit_int64(0);
    outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx193].endAddress =
      kcg_lit_int64(0);
  }
  for (idx194 = 0; idx194 < 500; idx194++) {
    outC->_L6_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketData[idx194] =
      kcg_lit_int64(0);
  }
  outC->_L7_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L7_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx196 = 0; idx196 < 1; idx196++) {
    outC->_L7_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.m_OnboardPhoneNumbers[idx196].valid =
      kcg_true;
    for (idx195 = 0; idx195 < 15; idx195++) {
      outC->_L7_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.m_OnboardPhoneNumbers[idx196].telephoneNumber[idx195] =
        kcg_lit_int64(0);
    }
  }
  outC->_L7_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L7_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L7_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L7_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L7_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L7_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L7_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L7_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L7_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx197 = 0; idx197 < 4; idx197++) {
    outC->_L7_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.m_TractionIdentities[idx197].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L7_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.m_TractionIdentities[idx197].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx198 = 0; idx198 < 5; idx198++) {
    outC->_L7_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.m_NationalSystemIdentities[idx198] =
      kcg_lit_int64(0);
  }
  outC->_L7_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L7_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L7_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L7_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L7_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L7_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L7_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L7_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L7_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L7_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L7_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L7_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L7_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L7_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L7_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L7_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L1_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.d_lrbg = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L1_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L1_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.l_doubtover =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L1_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.l_trainint =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.v_train = kcg_lit_int64(
      0);
  outC->_L1_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L1_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_mode =
    M_MODE_Full_Supervision;
  outC->_L1_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_level = M_LEVEL_Level_0;
  outC->_L1_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.nid_ntc = kcg_lit_int64(
      0);
  outC->_L1_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L2_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.d_lrbg = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L2_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L2_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.l_doubtover =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L2_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.l_trainint =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.v_train = kcg_lit_int64(
      0);
  outC->_L2_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L2_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_mode =
    M_MODE_Full_Supervision;
  outC->_L2_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_level = M_LEVEL_Level_0;
  outC->_L2_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.nid_ntc = kcg_lit_int64(
      0);
  outC->_L2_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.present = kcg_true;
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.header.present = kcg_true;
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.header.nid_message =
    kcg_lit_int64(0);
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.header.t_train =
    kcg_lit_int64(0);
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.header.nid_engine =
    kcg_lit_int64(0);
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.header.xT_TRAIN =
    kcg_lit_int64(0);
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.header.xNID_EM =
    kcg_lit_int64(0);
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.header.xQ_EMERGENCYSTOP =
    _12_Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.header.xNID_TEXTMESSAGE =
    kcg_lit_int64(0);
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p0.valid =
    kcg_true;
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p0.packet0.NID_PACKET =
    kcg_lit_int64(0);
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p0.packet0.L_PACKET =
    kcg_lit_int64(0);
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p0.packet0.qscale =
    Q_SCALE_10_cm_scale;
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p0.packet0.NID_LRBG =
    kcg_lit_int64(0);
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p0.packet0.D_LRBG =
    kcg_lit_int64(0);
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p0.packet0.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p0.packet0.dlrbg =
    Q_DLRBG_Reverse;
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p0.packet0.L_DOUBTOVER =
    kcg_lit_int64(0);
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p0.packet0.L_DOUBTUNDER =
    kcg_lit_int64(0);
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p0.packet0.L_TRAININT =
    kcg_lit_int64(0);
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p0.packet0.V_TRAIN =
    kcg_lit_int64(0);
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p0.packet0.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p0.packet0.mode =
    M_MODE_Full_Supervision;
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p0.packet0.level =
    M_LEVEL_Level_0;
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p0.packet0.NID_NTC =
    kcg_lit_int64(0);
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p1.valid =
    kcg_true;
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.NID_PACKET =
    kcg_lit_int64(0);
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.L_PACKET =
    kcg_lit_int64(0);
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.qscale =
    Q_SCALE_10_cm_scale;
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.NID_LRBG =
    kcg_lit_int64(0);
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.NID_PRVLRBG =
    kcg_lit_int64(0);
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.D_LRBG =
    kcg_lit_int64(0);
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.dlrbg =
    Q_DLRBG_Reverse;
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.L_DOUBTOVER =
    kcg_lit_int64(0);
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.L_DOUBTUNDER =
    kcg_lit_int64(0);
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.L_TRAININT =
    kcg_lit_int64(0);
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.V_TRAIN =
    kcg_lit_int64(0);
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.mode =
    M_MODE_Full_Supervision;
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.level =
    M_LEVEL_Level_0;
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p1.packet1.NID_NTC =
    kcg_lit_int64(0);
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p3.valid =
    kcg_true;
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p3.number =
    kcg_lit_int64(0);
  for (idx200 = 0; idx200 < 1; idx200++) {
    outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p3.aNID_RADIO[idx200].valid =
      kcg_true;
    for (idx199 = 0; idx199 < 15; idx199++) {
      outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p3.aNID_RADIO[idx200].telephoneNumber[idx199] =
        kcg_lit_int64(0);
    }
  }
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p4.valid =
    kcg_true;
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p5.valid =
    kcg_true;
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p5.TrainRunningNumber =
    kcg_lit_int64(0);
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p9.valid =
    kcg_true;
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p9.transitionInformation =
    kcg_lit_int64(0);
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p11.valid =
    kcg_true;
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p11.l_train =
    kcg_lit_int64(0);
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p11.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p11.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p11.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p11.n_axle =
    kcg_lit_int64(0);
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p11.nIter_tractionIdentity =
    kcg_lit_int64(0);
  for (idx201 = 0; idx201 < 4; idx201++) {
    outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p11.tractionIdentity[idx201].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p11.tractionIdentity[idx201].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p11.nIter_ntc =
    kcg_lit_int64(0);
  for (idx202 = 0; idx202 < 5; idx202++) {
    outC->_L3_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.packets.p11.nid_ntc[idx202] =
      kcg_lit_int64(0);
  }
  outC->_L4_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L4_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx204 = 0; idx204 < 1; idx204++) {
    outC->_L4_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.m_OnboardPhoneNumbers[idx204].valid =
      kcg_true;
    for (idx203 = 0; idx203 < 15; idx203++) {
      outC->_L4_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.m_OnboardPhoneNumbers[idx204].telephoneNumber[idx203] =
        kcg_lit_int64(0);
    }
  }
  outC->_L4_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L4_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L4_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L4_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L4_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L4_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L4_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L4_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L4_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx205 = 0; idx205 < 4; idx205++) {
    outC->_L4_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.m_TractionIdentities[idx205].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L4_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.m_TractionIdentities[idx205].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx206 = 0; idx206 < 5; idx206++) {
    outC->_L4_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.m_NationalSystemIdentities[idx206] =
      kcg_lit_int64(0);
  }
  outC->_L4_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L4_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L4_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L4_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L4_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L4_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L4_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L4_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L4_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L4_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L4_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L4_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L4_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L4_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L4_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L4_then_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx208 = 0; idx208 < 1; idx208++) {
    outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx208].valid =
      kcg_true;
    for (idx207 = 0; idx207 < 15; idx207++) {
      outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx208].telephoneNumber[idx207] =
        kcg_lit_int64(0);
    }
  }
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx209 = 0; idx209 < 4; idx209++) {
    outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_TractionIdentities[idx209].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_TractionIdentities[idx209].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx210 = 0; idx210 < 5; idx210++) {
    outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_NationalSystemIdentities[idx210] =
      kcg_lit_int64(0);
  }
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.nid_c =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvshunt =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvstff =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvonsight =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvunfit =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvrel =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.t_nvcontact =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_MAReqParams.q_dir =
    Q_DIR_Reverse;
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_MAReqParams.t_mar =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_MAReqParams.t_timeoutrqst =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_MAReqParams.t_cycrqst =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.q_dir =
    Q_DIR_Reverse;
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.t_cycloc =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.d_cycloc =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.m_loc =
    M_LOC_Now;
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx211 = 0; idx211 < 32; idx211++) {
    outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx211].d_loc =
      kcg_lit_int64(0);
    outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx211].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx212 = 0; idx212 < 16; idx212++) {
    outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.diagnostic[idx212].valid =
      kcg_true;
    outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.diagnostic[idx212].count =
      kcg_lit_int64(0);
    outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.diagnostic[idx212].timestamp =
      kcg_lit_int64(0);
    outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.diagnostic[idx212].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.diagnostic[idx212].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.diagnostic[idx212].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx215 = 0; idx215 < 8; idx215++) {
    outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx215].m_IsValid =
      kcg_true;
    outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx215].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx215].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx215].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx215].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx215].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx215].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx215].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx215].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx215].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx215].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx215].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx215].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx215].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx215].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx215].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx213 = 0; idx213 < 30; idx213++) {
      outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx215].m_Entry.Messages.PacketHeaders[idx213].nid_packet =
        kcg_lit_int64(0);
      outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx215].m_Entry.Messages.PacketHeaders[idx213].q_dir =
        Q_DIR_Reverse;
      outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx215].m_Entry.Messages.PacketHeaders[idx213].valid =
        kcg_true;
      outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx215].m_Entry.Messages.PacketHeaders[idx213].startAddress =
        kcg_lit_int64(0);
      outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx215].m_Entry.Messages.PacketHeaders[idx213].endAddress =
        kcg_lit_int64(0);
    }
    for (idx214 = 0; idx214 < 500; idx214++) {
      outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx215].m_Entry.Messages.PacketData[idx214] =
        kcg_lit_int64(0);
    }
  }
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.clockk.m_Value =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int64(0);
  for (idx216 = 0; idx216 < 30; idx216++) {
    outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx216].nid_packet =
      kcg_lit_int64(0);
    outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx216].q_dir =
      Q_DIR_Reverse;
    outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx216].valid =
      kcg_true;
    outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx216].startAddress =
      kcg_lit_int64(0);
    outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx216].endAddress =
      kcg_lit_int64(0);
  }
  for (idx217 = 0; idx217 < 500; idx217++) {
    outC->_L3_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketData[idx217] =
      kcg_lit_int64(0);
  }
  outC->_L4_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L4_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx219 = 0; idx219 < 1; idx219++) {
    outC->_L4_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.m_OnboardPhoneNumbers[idx219].valid =
      kcg_true;
    for (idx218 = 0; idx218 < 15; idx218++) {
      outC->_L4_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.m_OnboardPhoneNumbers[idx219].telephoneNumber[idx218] =
        kcg_lit_int64(0);
    }
  }
  outC->_L4_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L4_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L4_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L4_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L4_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L4_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L4_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L4_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L4_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx220 = 0; idx220 < 4; idx220++) {
    outC->_L4_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.m_TractionIdentities[idx220].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L4_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.m_TractionIdentities[idx220].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx221 = 0; idx221 < 5; idx221++) {
    outC->_L4_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.m_NationalSystemIdentities[idx221] =
      kcg_lit_int64(0);
  }
  outC->_L4_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L4_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L4_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L4_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L4_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L4_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L4_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L4_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L4_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L4_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L4_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L4_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L4_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L4_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L4_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L4_else_IfBlock1_SEND_MA_MOVEMENT_AUTHORITY_SM.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->IfBlock1_clock_SEND_MA_MOVEMENT_AUTHORITY_SM = kcg_true;
  outC->_L30_SEND_MA_MOVEMENT_AUTHORITY_SM.m_IsValid = kcg_true;
  outC->_L30_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entry.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L30_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entry.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L30_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entry.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L30_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entry.Header.t_train =
    kcg_lit_int64(0);
  outC->_L30_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entry.Header.m_ack = kcg_lit_int64(
      0);
  outC->_L30_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entry.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L30_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entry.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L30_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entry.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L30_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entry.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L30_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entry.Header.d_sr = kcg_lit_int64(0);
  outC->_L30_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entry.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L30_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entry.Header.d_ref = kcg_lit_int64(
      0);
  outC->_L30_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entry.Header.q_dir = kcg_lit_int64(
      0);
  outC->_L30_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entry.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L30_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entry.Header.m_version =
    kcg_lit_int64(0);
  for (idx222 = 0; idx222 < 30; idx222++) {
    outC->_L30_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entry.Messages.PacketHeaders[idx222].nid_packet =
      kcg_lit_int64(0);
    outC->_L30_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entry.Messages.PacketHeaders[idx222].q_dir =
      Q_DIR_Reverse;
    outC->_L30_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entry.Messages.PacketHeaders[idx222].valid =
      kcg_true;
    outC->_L30_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entry.Messages.PacketHeaders[idx222].startAddress =
      kcg_lit_int64(0);
    outC->_L30_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entry.Messages.PacketHeaders[idx222].endAddress =
      kcg_lit_int64(0);
  }
  for (idx223 = 0; idx223 < 500; idx223++) {
    outC->_L30_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entry.Messages.PacketData[idx223] =
      kcg_lit_int64(0);
  }
  for (idx226 = 0; idx226 < 8; idx226++) {
    outC->_L29_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx226].m_IsValid = kcg_true;
    outC->_L29_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx226].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L29_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx226].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L29_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx226].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L29_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx226].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L29_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx226].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L29_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx226].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L29_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx226].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L29_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx226].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L29_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx226].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L29_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx226].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L29_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx226].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L29_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx226].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L29_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx226].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L29_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx226].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L29_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx226].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx224 = 0; idx224 < 30; idx224++) {
      outC->_L29_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx226].m_Entry.Messages.PacketHeaders[idx224].nid_packet =
        kcg_lit_int64(0);
      outC->_L29_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx226].m_Entry.Messages.PacketHeaders[idx224].q_dir =
        Q_DIR_Reverse;
      outC->_L29_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx226].m_Entry.Messages.PacketHeaders[idx224].valid =
        kcg_true;
      outC->_L29_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx226].m_Entry.Messages.PacketHeaders[idx224].startAddress =
        kcg_lit_int64(0);
      outC->_L29_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx226].m_Entry.Messages.PacketHeaders[idx224].endAddress =
        kcg_lit_int64(0);
    }
    for (idx225 = 0; idx225 < 500; idx225++) {
      outC->_L29_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx226].m_Entry.Messages.PacketData[idx225] =
        kcg_lit_int64(0);
    }
  }
  outC->_L32_SEND_MA_MOVEMENT_AUTHORITY_SM.Header.radioDevice = kcg_lit_int64(0);
  outC->_L32_SEND_MA_MOVEMENT_AUTHORITY_SM.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L32_SEND_MA_MOVEMENT_AUTHORITY_SM.Header.nid_message = kcg_lit_int64(0);
  outC->_L32_SEND_MA_MOVEMENT_AUTHORITY_SM.Header.t_train = kcg_lit_int64(0);
  outC->_L32_SEND_MA_MOVEMENT_AUTHORITY_SM.Header.m_ack = kcg_lit_int64(0);
  outC->_L32_SEND_MA_MOVEMENT_AUTHORITY_SM.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L32_SEND_MA_MOVEMENT_AUTHORITY_SM.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L32_SEND_MA_MOVEMENT_AUTHORITY_SM.Header.nid_em = kcg_lit_int64(0);
  outC->_L32_SEND_MA_MOVEMENT_AUTHORITY_SM.Header.q_scale = kcg_lit_int64(0);
  outC->_L32_SEND_MA_MOVEMENT_AUTHORITY_SM.Header.d_sr = kcg_lit_int64(0);
  outC->_L32_SEND_MA_MOVEMENT_AUTHORITY_SM.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L32_SEND_MA_MOVEMENT_AUTHORITY_SM.Header.d_ref = kcg_lit_int64(0);
  outC->_L32_SEND_MA_MOVEMENT_AUTHORITY_SM.Header.q_dir = kcg_lit_int64(0);
  outC->_L32_SEND_MA_MOVEMENT_AUTHORITY_SM.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L32_SEND_MA_MOVEMENT_AUTHORITY_SM.Header.m_version = kcg_lit_int64(0);
  for (idx227 = 0; idx227 < 30; idx227++) {
    outC->_L32_SEND_MA_MOVEMENT_AUTHORITY_SM.Messages.PacketHeaders[idx227].nid_packet =
      kcg_lit_int64(0);
    outC->_L32_SEND_MA_MOVEMENT_AUTHORITY_SM.Messages.PacketHeaders[idx227].q_dir =
      Q_DIR_Reverse;
    outC->_L32_SEND_MA_MOVEMENT_AUTHORITY_SM.Messages.PacketHeaders[idx227].valid =
      kcg_true;
    outC->_L32_SEND_MA_MOVEMENT_AUTHORITY_SM.Messages.PacketHeaders[idx227].startAddress =
      kcg_lit_int64(0);
    outC->_L32_SEND_MA_MOVEMENT_AUTHORITY_SM.Messages.PacketHeaders[idx227].endAddress =
      kcg_lit_int64(0);
  }
  for (idx228 = 0; idx228 < 500; idx228++) {
    outC->_L32_SEND_MA_MOVEMENT_AUTHORITY_SM.Messages.PacketData[idx228] =
      kcg_lit_int64(0);
  }
  for (idx231 = 0; idx231 < 8; idx231++) {
    outC->_L33_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx231].m_IsValid = kcg_true;
    outC->_L33_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx231].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L33_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx231].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L33_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx231].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L33_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx231].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L33_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx231].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L33_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx231].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L33_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx231].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L33_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx231].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L33_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx231].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L33_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx231].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L33_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx231].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L33_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx231].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L33_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx231].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L33_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx231].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L33_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx231].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx229 = 0; idx229 < 30; idx229++) {
      outC->_L33_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx231].m_Entry.Messages.PacketHeaders[idx229].nid_packet =
        kcg_lit_int64(0);
      outC->_L33_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx231].m_Entry.Messages.PacketHeaders[idx229].q_dir =
        Q_DIR_Reverse;
      outC->_L33_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx231].m_Entry.Messages.PacketHeaders[idx229].valid =
        kcg_true;
      outC->_L33_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx231].m_Entry.Messages.PacketHeaders[idx229].startAddress =
        kcg_lit_int64(0);
      outC->_L33_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx231].m_Entry.Messages.PacketHeaders[idx229].endAddress =
        kcg_lit_int64(0);
    }
    for (idx230 = 0; idx230 < 500; idx230++) {
      outC->_L33_SEND_MA_MOVEMENT_AUTHORITY_SM.m_Entries[idx231].m_Entry.Messages.PacketData[idx230] =
        kcg_lit_int64(0);
    }
  }
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx233 = 0; idx233 < 1; idx233++) {
    outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx233].valid =
      kcg_true;
    for (idx232 = 0; idx232 < 15; idx232++) {
      outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx233].telephoneNumber[idx232] =
        kcg_lit_int64(0);
    }
  }
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx234 = 0; idx234 < 4; idx234++) {
    outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_TractionIdentities[idx234].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_TractionIdentities[idx234].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx235 = 0; idx235 < 5; idx235++) {
    outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_NationalSystemIdentities[idx235] =
      kcg_lit_int64(0);
  }
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.session.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.nid_c =
    kcg_lit_int64(0);
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvshunt =
    kcg_lit_int64(0);
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvstff =
    kcg_lit_int64(0);
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvonsight =
    kcg_lit_int64(0);
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvunfit =
    kcg_lit_int64(0);
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvrel =
    kcg_lit_int64(0);
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.t_nvcontact =
    kcg_lit_int64(0);
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_MAReqParams.q_dir =
    Q_DIR_Reverse;
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_MAReqParams.t_mar =
    kcg_lit_int64(0);
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_MAReqParams.t_timeoutrqst =
    kcg_lit_int64(0);
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_MAReqParams.t_cycrqst =
    kcg_lit_int64(0);
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.q_dir =
    Q_DIR_Reverse;
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.t_cycloc =
    kcg_lit_int64(0);
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.d_cycloc =
    kcg_lit_int64(0);
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.m_loc =
    M_LOC_Now;
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx236 = 0; idx236 < 32; idx236++) {
    outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx236].d_loc =
      kcg_lit_int64(0);
    outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx236].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx237 = 0; idx237 < 16; idx237++) {
    outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.diagnostic[idx237].valid = kcg_true;
    outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.diagnostic[idx237].count =
      kcg_lit_int64(0);
    outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.diagnostic[idx237].timestamp =
      kcg_lit_int64(0);
    outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.diagnostic[idx237].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.diagnostic[idx237].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.diagnostic[idx237].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx240 = 0; idx240 < 8; idx240++) {
    outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx240].m_IsValid =
      kcg_true;
    outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx240].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx240].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx240].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx240].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx240].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx240].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx240].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx240].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx240].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx240].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx240].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx240].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx240].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx240].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx240].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx238 = 0; idx238 < 30; idx238++) {
      outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx240].m_Entry.Messages.PacketHeaders[idx238].nid_packet =
        kcg_lit_int64(0);
      outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx240].m_Entry.Messages.PacketHeaders[idx238].q_dir =
        Q_DIR_Reverse;
      outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx240].m_Entry.Messages.PacketHeaders[idx238].valid =
        kcg_true;
      outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx240].m_Entry.Messages.PacketHeaders[idx238].startAddress =
        kcg_lit_int64(0);
      outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx240].m_Entry.Messages.PacketHeaders[idx238].endAddress =
        kcg_lit_int64(0);
    }
    for (idx239 = 0; idx239 < 500; idx239++) {
      outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx240].m_Entry.Messages.PacketData[idx239] =
        kcg_lit_int64(0);
    }
  }
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.clockk.m_Value = kcg_lit_int64(0);
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int64(0);
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int64(0);
  for (idx241 = 0; idx241 < 30; idx241++) {
    outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx241].nid_packet =
      kcg_lit_int64(0);
    outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx241].q_dir =
      Q_DIR_Reverse;
    outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx241].valid =
      kcg_true;
    outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx241].startAddress =
      kcg_lit_int64(0);
    outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx241].endAddress =
      kcg_lit_int64(0);
  }
  for (idx242 = 0; idx242 < 500; idx242++) {
    outC->_L35_SEND_MA_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketData[idx242] =
      kcg_lit_int64(0);
  }
  outC->_L5_IDLE_MOVEMENT_AUTHORITY_SM.m_TrainData.nid_engine = kcg_lit_int64(0);
  outC->_L5_IDLE_MOVEMENT_AUTHORITY_SM.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx244 = 0; idx244 < 1; idx244++) {
    outC->_L5_IDLE_MOVEMENT_AUTHORITY_SM.m_TrainData.m_OnboardPhoneNumbers[idx244].valid =
      kcg_true;
    for (idx243 = 0; idx243 < 15; idx243++) {
      outC->_L5_IDLE_MOVEMENT_AUTHORITY_SM.m_TrainData.m_OnboardPhoneNumbers[idx244].telephoneNumber[idx243] =
        kcg_lit_int64(0);
    }
  }
  outC->_L5_IDLE_MOVEMENT_AUTHORITY_SM.m_TrainData.t_train_ref = kcg_lit_int64(0);
  outC->_L5_IDLE_MOVEMENT_AUTHORITY_SM.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L5_IDLE_MOVEMENT_AUTHORITY_SM.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L5_IDLE_MOVEMENT_AUTHORITY_SM.m_TrainData.l_train = kcg_lit_int64(0);
  outC->_L5_IDLE_MOVEMENT_AUTHORITY_SM.m_TrainData.v_maxtrain = kcg_lit_int64(0);
  outC->_L5_IDLE_MOVEMENT_AUTHORITY_SM.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L5_IDLE_MOVEMENT_AUTHORITY_SM.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L5_IDLE_MOVEMENT_AUTHORITY_SM.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L5_IDLE_MOVEMENT_AUTHORITY_SM.m_TrainData.n_axle = kcg_lit_int64(0);
  for (idx245 = 0; idx245 < 4; idx245++) {
    outC->_L5_IDLE_MOVEMENT_AUTHORITY_SM.m_TrainData.m_TractionIdentities[idx245].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L5_IDLE_MOVEMENT_AUTHORITY_SM.m_TrainData.m_TractionIdentities[idx245].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx246 = 0; idx246 < 5; idx246++) {
    outC->_L5_IDLE_MOVEMENT_AUTHORITY_SM.m_TrainData.m_NationalSystemIdentities[idx246] =
      kcg_lit_int64(0);
  }
  outC->_L5_IDLE_MOVEMENT_AUTHORITY_SM.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L5_IDLE_MOVEMENT_AUTHORITY_SM.m_PosData.nid_lrbg = kcg_lit_int64(0);
  outC->_L5_IDLE_MOVEMENT_AUTHORITY_SM.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L5_IDLE_MOVEMENT_AUTHORITY_SM.m_PosData.d_lrbg = kcg_lit_int64(0);
  outC->_L5_IDLE_MOVEMENT_AUTHORITY_SM.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L5_IDLE_MOVEMENT_AUTHORITY_SM.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L5_IDLE_MOVEMENT_AUTHORITY_SM.m_PosData.l_doubtover = kcg_lit_int64(0);
  outC->_L5_IDLE_MOVEMENT_AUTHORITY_SM.m_PosData.l_doubtunder = kcg_lit_int64(0);
  outC->_L5_IDLE_MOVEMENT_AUTHORITY_SM.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L5_IDLE_MOVEMENT_AUTHORITY_SM.m_PosData.l_trainint = kcg_lit_int64(0);
  outC->_L5_IDLE_MOVEMENT_AUTHORITY_SM.m_PosData.v_train = kcg_lit_int64(0);
  outC->_L5_IDLE_MOVEMENT_AUTHORITY_SM.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L5_IDLE_MOVEMENT_AUTHORITY_SM.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L5_IDLE_MOVEMENT_AUTHORITY_SM.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L5_IDLE_MOVEMENT_AUTHORITY_SM.m_PosData.nid_ntc = kcg_lit_int64(0);
  outC->_L5_IDLE_MOVEMENT_AUTHORITY_SM.m_PosData.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.session.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx248 = 0; idx248 < 1; idx248++) {
    outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx248].valid =
      kcg_true;
    for (idx247 = 0; idx247 < 15; idx247++) {
      outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx248].telephoneNumber[idx247] =
        kcg_lit_int64(0);
    }
  }
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.session.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.session.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.session.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.session.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx249 = 0; idx249 < 4; idx249++) {
    outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_TractionIdentities[idx249].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_TractionIdentities[idx249].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx250 = 0; idx250 < 5; idx250++) {
    outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.session.m_TrainData.m_NationalSystemIdentities[idx250] =
      kcg_lit_int64(0);
  }
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.session.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.session.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.session.m_PosData.d_lrbg = kcg_lit_int64(
      0);
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.session.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.session.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.session.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.session.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.session.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.session.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.session.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.session.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.session.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.nid_c =
    kcg_lit_int64(0);
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvshunt =
    kcg_lit_int64(0);
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvstff =
    kcg_lit_int64(0);
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvonsight =
    kcg_lit_int64(0);
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvunfit =
    kcg_lit_int64(0);
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.v_nvrel =
    kcg_lit_int64(0);
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.config.m_NationalParams.t_nvcontact =
    kcg_lit_int64(0);
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.config.m_MAReqParams.t_mar =
    kcg_lit_int64(0);
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.config.m_MAReqParams.t_timeoutrqst =
    kcg_lit_int64(0);
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.config.m_MAReqParams.t_cycrqst =
    kcg_lit_int64(0);
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.q_dir =
    Q_DIR_Reverse;
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.t_cycloc =
    kcg_lit_int64(0);
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.d_cycloc =
    kcg_lit_int64(0);
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx251 = 0; idx251 < 32; idx251++) {
    outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx251].d_loc =
      kcg_lit_int64(0);
    outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx251].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx252 = 0; idx252 < 16; idx252++) {
    outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.diagnostic[idx252].valid = kcg_true;
    outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.diagnostic[idx252].count =
      kcg_lit_int64(0);
    outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.diagnostic[idx252].timestamp =
      kcg_lit_int64(0);
    outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.diagnostic[idx252].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.diagnostic[idx252].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.diagnostic[idx252].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx255 = 0; idx255 < 8; idx255++) {
    outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx255].m_IsValid =
      kcg_true;
    outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx255].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx255].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx255].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx255].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx255].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx255].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx255].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx255].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx255].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx255].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx255].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx255].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx255].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx255].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx255].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx253 = 0; idx253 < 30; idx253++) {
      outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx255].m_Entry.Messages.PacketHeaders[idx253].nid_packet =
        kcg_lit_int64(0);
      outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx255].m_Entry.Messages.PacketHeaders[idx253].q_dir =
        Q_DIR_Reverse;
      outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx255].m_Entry.Messages.PacketHeaders[idx253].valid =
        kcg_true;
      outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx255].m_Entry.Messages.PacketHeaders[idx253].startAddress =
        kcg_lit_int64(0);
      outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx255].m_Entry.Messages.PacketHeaders[idx253].endAddress =
        kcg_lit_int64(0);
    }
    for (idx254 = 0; idx254 < 500; idx254++) {
      outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.messageQueue.m_Entries[idx255].m_Entry.Messages.PacketData[idx254] =
        kcg_lit_int64(0);
    }
  }
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.clockk.m_Value = kcg_lit_int64(0);
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int64(0);
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int64(0);
  for (idx256 = 0; idx256 < 30; idx256++) {
    outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx256].nid_packet =
      kcg_lit_int64(0);
    outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx256].q_dir =
      Q_DIR_Reverse;
    outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx256].valid =
      kcg_true;
    outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx256].startAddress =
      kcg_lit_int64(0);
    outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx256].endAddress =
      kcg_lit_int64(0);
  }
  for (idx257 = 0; idx257 < 500; idx257++) {
    outC->_L4_IDLE_MOVEMENT_AUTHORITY_SM.lastSentTrackTrainMessage.Messages.PacketData[idx257] =
      kcg_lit_int64(0);
  }
  for (idx260 = 0; idx260 < 8; idx260++) {
    outC->_L3_IDLE_MOVEMENT_AUTHORITY_SM.m_Entries[idx260].m_IsValid = kcg_true;
    outC->_L3_IDLE_MOVEMENT_AUTHORITY_SM.m_Entries[idx260].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L3_IDLE_MOVEMENT_AUTHORITY_SM.m_Entries[idx260].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L3_IDLE_MOVEMENT_AUTHORITY_SM.m_Entries[idx260].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L3_IDLE_MOVEMENT_AUTHORITY_SM.m_Entries[idx260].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L3_IDLE_MOVEMENT_AUTHORITY_SM.m_Entries[idx260].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L3_IDLE_MOVEMENT_AUTHORITY_SM.m_Entries[idx260].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L3_IDLE_MOVEMENT_AUTHORITY_SM.m_Entries[idx260].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L3_IDLE_MOVEMENT_AUTHORITY_SM.m_Entries[idx260].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L3_IDLE_MOVEMENT_AUTHORITY_SM.m_Entries[idx260].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L3_IDLE_MOVEMENT_AUTHORITY_SM.m_Entries[idx260].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L3_IDLE_MOVEMENT_AUTHORITY_SM.m_Entries[idx260].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L3_IDLE_MOVEMENT_AUTHORITY_SM.m_Entries[idx260].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L3_IDLE_MOVEMENT_AUTHORITY_SM.m_Entries[idx260].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L3_IDLE_MOVEMENT_AUTHORITY_SM.m_Entries[idx260].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L3_IDLE_MOVEMENT_AUTHORITY_SM.m_Entries[idx260].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx258 = 0; idx258 < 30; idx258++) {
      outC->_L3_IDLE_MOVEMENT_AUTHORITY_SM.m_Entries[idx260].m_Entry.Messages.PacketHeaders[idx258].nid_packet =
        kcg_lit_int64(0);
      outC->_L3_IDLE_MOVEMENT_AUTHORITY_SM.m_Entries[idx260].m_Entry.Messages.PacketHeaders[idx258].q_dir =
        Q_DIR_Reverse;
      outC->_L3_IDLE_MOVEMENT_AUTHORITY_SM.m_Entries[idx260].m_Entry.Messages.PacketHeaders[idx258].valid =
        kcg_true;
      outC->_L3_IDLE_MOVEMENT_AUTHORITY_SM.m_Entries[idx260].m_Entry.Messages.PacketHeaders[idx258].startAddress =
        kcg_lit_int64(0);
      outC->_L3_IDLE_MOVEMENT_AUTHORITY_SM.m_Entries[idx260].m_Entry.Messages.PacketHeaders[idx258].endAddress =
        kcg_lit_int64(0);
    }
    for (idx259 = 0; idx259 < 500; idx259++) {
      outC->_L3_IDLE_MOVEMENT_AUTHORITY_SM.m_Entries[idx260].m_Entry.Messages.PacketData[idx259] =
        kcg_lit_int64(0);
    }
  }
  outC->outTriggeredRadioTrackTrainMessage.Header.radioDevice = kcg_lit_int64(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.nid_message = kcg_lit_int64(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.t_train = kcg_lit_int64(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.m_ack = kcg_lit_int64(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.nid_lrbg = kcg_lit_int64(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.nid_em = kcg_lit_int64(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.q_scale = kcg_lit_int64(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.d_sr = kcg_lit_int64(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.d_ref = kcg_lit_int64(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.q_dir = kcg_lit_int64(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.m_version = kcg_lit_int64(0);
  for (idx261 = 0; idx261 < 30; idx261++) {
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketHeaders[idx261].nid_packet =
      kcg_lit_int64(0);
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketHeaders[idx261].q_dir =
      Q_DIR_Reverse;
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketHeaders[idx261].valid =
      kcg_true;
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketHeaders[idx261].startAddress =
      kcg_lit_int64(0);
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketHeaders[idx261].endAddress =
      kcg_lit_int64(0);
  }
  for (idx262 = 0; idx262 < 500; idx262++) {
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketData[idx262] =
      kcg_lit_int64(0);
  }
  outC->outRadioTrainTrackMessage.present = kcg_true;
  outC->outRadioTrainTrackMessage.header.present = kcg_true;
  outC->outRadioTrainTrackMessage.header.nid_message = kcg_lit_int64(0);
  outC->outRadioTrainTrackMessage.header.t_train = kcg_lit_int64(0);
  outC->outRadioTrainTrackMessage.header.nid_engine = kcg_lit_int64(0);
  outC->outRadioTrainTrackMessage.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->outRadioTrainTrackMessage.header.xT_TRAIN = kcg_lit_int64(0);
  outC->outRadioTrainTrackMessage.header.xNID_EM = kcg_lit_int64(0);
  outC->outRadioTrainTrackMessage.header.xQ_EMERGENCYSTOP =
    _12_Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->outRadioTrainTrackMessage.header.xNID_TEXTMESSAGE = kcg_lit_int64(0);
  outC->outRadioTrainTrackMessage.packets.p0.valid = kcg_true;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.NID_PACKET = kcg_lit_int64(
      0);
  outC->outRadioTrainTrackMessage.packets.p0.packet0.L_PACKET = kcg_lit_int64(0);
  outC->outRadioTrainTrackMessage.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->outRadioTrainTrackMessage.packets.p0.packet0.D_LRBG = kcg_lit_int64(0);
  outC->outRadioTrainTrackMessage.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.L_DOUBTOVER =
    kcg_lit_int64(0);
  outC->outRadioTrainTrackMessage.packets.p0.packet0.L_DOUBTUNDER =
    kcg_lit_int64(0);
  outC->outRadioTrainTrackMessage.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.L_TRAININT = kcg_lit_int64(
      0);
  outC->outRadioTrainTrackMessage.packets.p0.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->outRadioTrainTrackMessage.packets.p0.packet0.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.mode =
    M_MODE_Full_Supervision;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.NID_NTC = kcg_lit_int64(0);
  outC->outRadioTrainTrackMessage.packets.p1.valid = kcg_true;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.NID_PACKET = kcg_lit_int64(
      0);
  outC->outRadioTrainTrackMessage.packets.p1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->outRadioTrainTrackMessage.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->outRadioTrainTrackMessage.packets.p1.packet1.NID_PRVLRBG =
    kcg_lit_int64(0);
  outC->outRadioTrainTrackMessage.packets.p1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->outRadioTrainTrackMessage.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.L_DOUBTOVER =
    kcg_lit_int64(0);
  outC->outRadioTrainTrackMessage.packets.p1.packet1.L_DOUBTUNDER =
    kcg_lit_int64(0);
  outC->outRadioTrainTrackMessage.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.L_TRAININT = kcg_lit_int64(
      0);
  outC->outRadioTrainTrackMessage.packets.p1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->outRadioTrainTrackMessage.packets.p1.packet1.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.mode =
    M_MODE_Full_Supervision;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->outRadioTrainTrackMessage.packets.p3.valid = kcg_true;
  outC->outRadioTrainTrackMessage.packets.p3.number = kcg_lit_int64(0);
  for (idx264 = 0; idx264 < 1; idx264++) {
    outC->outRadioTrainTrackMessage.packets.p3.aNID_RADIO[idx264].valid = kcg_true;
    for (idx263 = 0; idx263 < 15; idx263++) {
      outC->outRadioTrainTrackMessage.packets.p3.aNID_RADIO[idx264].telephoneNumber[idx263] =
        kcg_lit_int64(0);
    }
  }
  outC->outRadioTrainTrackMessage.packets.p4.valid = kcg_true;
  outC->outRadioTrainTrackMessage.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->outRadioTrainTrackMessage.packets.p5.valid = kcg_true;
  outC->outRadioTrainTrackMessage.packets.p5.TrainRunningNumber = kcg_lit_int64(
      0);
  outC->outRadioTrainTrackMessage.packets.p9.valid = kcg_true;
  outC->outRadioTrainTrackMessage.packets.p9.transitionInformation =
    kcg_lit_int64(0);
  outC->outRadioTrainTrackMessage.packets.p11.valid = kcg_true;
  outC->outRadioTrainTrackMessage.packets.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->outRadioTrainTrackMessage.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->outRadioTrainTrackMessage.packets.p11.l_train = kcg_lit_int64(0);
  outC->outRadioTrainTrackMessage.packets.p11.v_maxtrain = kcg_lit_int64(0);
  outC->outRadioTrainTrackMessage.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->outRadioTrainTrackMessage.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->outRadioTrainTrackMessage.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->outRadioTrainTrackMessage.packets.p11.n_axle = kcg_lit_int64(0);
  outC->outRadioTrainTrackMessage.packets.p11.nIter_tractionIdentity =
    kcg_lit_int64(0);
  for (idx265 = 0; idx265 < 4; idx265++) {
    outC->outRadioTrainTrackMessage.packets.p11.tractionIdentity[idx265].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->outRadioTrainTrackMessage.packets.p11.tractionIdentity[idx265].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->outRadioTrainTrackMessage.packets.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx266 = 0; idx266 < 5; idx266++) {
    outC->outRadioTrainTrackMessage.packets.p11.nid_ntc[idx266] = kcg_lit_int64(0);
  }
  outC->outDataBus.session.m_TrainData.nid_engine = kcg_lit_int64(0);
  outC->outDataBus.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx268 = 0; idx268 < 1; idx268++) {
    outC->outDataBus.session.m_TrainData.m_OnboardPhoneNumbers[idx268].valid =
      kcg_true;
    for (idx267 = 0; idx267 < 15; idx267++) {
      outC->outDataBus.session.m_TrainData.m_OnboardPhoneNumbers[idx268].telephoneNumber[idx267] =
        kcg_lit_int64(0);
    }
  }
  outC->outDataBus.session.m_TrainData.t_train_ref = kcg_lit_int64(0);
  outC->outDataBus.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->outDataBus.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->outDataBus.session.m_TrainData.l_train = kcg_lit_int64(0);
  outC->outDataBus.session.m_TrainData.v_maxtrain = kcg_lit_int64(0);
  outC->outDataBus.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->outDataBus.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->outDataBus.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->outDataBus.session.m_TrainData.n_axle = kcg_lit_int64(0);
  for (idx269 = 0; idx269 < 4; idx269++) {
    outC->outDataBus.session.m_TrainData.m_TractionIdentities[idx269].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->outDataBus.session.m_TrainData.m_TractionIdentities[idx269].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx270 = 0; idx270 < 5; idx270++) {
    outC->outDataBus.session.m_TrainData.m_NationalSystemIdentities[idx270] =
      kcg_lit_int64(0);
  }
  outC->outDataBus.session.m_TrainData.nid_operational = kcg_lit_int64(0);
  outC->outDataBus.session.m_PosData.nid_lrbg = kcg_lit_int64(0);
  outC->outDataBus.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->outDataBus.session.m_PosData.d_lrbg = kcg_lit_int64(0);
  outC->outDataBus.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->outDataBus.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->outDataBus.session.m_PosData.l_doubtover = kcg_lit_int64(0);
  outC->outDataBus.session.m_PosData.l_doubtunder = kcg_lit_int64(0);
  outC->outDataBus.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->outDataBus.session.m_PosData.l_trainint = kcg_lit_int64(0);
  outC->outDataBus.session.m_PosData.v_train = kcg_lit_int64(0);
  outC->outDataBus.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->outDataBus.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->outDataBus.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->outDataBus.session.m_PosData.nid_ntc = kcg_lit_int64(0);
  outC->outDataBus.session.m_PosData.nid_prvlrbg = kcg_lit_int64(0);
  outC->outDataBus.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->outDataBus.config.m_NationalParams.nid_c = kcg_lit_int64(0);
  outC->outDataBus.config.m_NationalParams.v_nvshunt = kcg_lit_int64(0);
  outC->outDataBus.config.m_NationalParams.v_nvstff = kcg_lit_int64(0);
  outC->outDataBus.config.m_NationalParams.v_nvonsight = kcg_lit_int64(0);
  outC->outDataBus.config.m_NationalParams.v_nvunfit = kcg_lit_int64(0);
  outC->outDataBus.config.m_NationalParams.v_nvrel = kcg_lit_int64(0);
  outC->outDataBus.config.m_NationalParams.t_nvcontact = kcg_lit_int64(0);
  outC->outDataBus.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->outDataBus.config.m_MAReqParams.t_mar = kcg_lit_int64(0);
  outC->outDataBus.config.m_MAReqParams.t_timeoutrqst = kcg_lit_int64(0);
  outC->outDataBus.config.m_MAReqParams.t_cycrqst = kcg_lit_int64(0);
  outC->outDataBus.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->outDataBus.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->outDataBus.config.m_PosRepParams.t_cycloc = kcg_lit_int64(0);
  outC->outDataBus.config.m_PosRepParams.d_cycloc = kcg_lit_int64(0);
  outC->outDataBus.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->outDataBus.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx271 = 0; idx271 < 32; idx271++) {
    outC->outDataBus.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx271].d_loc =
      kcg_lit_int64(0);
    outC->outDataBus.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx271].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx272 = 0; idx272 < 16; idx272++) {
    outC->outDataBus.diagnostic[idx272].valid = kcg_true;
    outC->outDataBus.diagnostic[idx272].count = kcg_lit_int64(0);
    outC->outDataBus.diagnostic[idx272].timestamp = kcg_lit_int64(0);
    outC->outDataBus.diagnostic[idx272].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->outDataBus.diagnostic[idx272].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->outDataBus.diagnostic[idx272].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx275 = 0; idx275 < 8; idx275++) {
    outC->outDataBus.messageQueue.m_Entries[idx275].m_IsValid = kcg_true;
    outC->outDataBus.messageQueue.m_Entries[idx275].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx275].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx275].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx275].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx275].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx275].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx275].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx275].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx275].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx275].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx275].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx275].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx275].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx275].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx275].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx273 = 0; idx273 < 30; idx273++) {
      outC->outDataBus.messageQueue.m_Entries[idx275].m_Entry.Messages.PacketHeaders[idx273].nid_packet =
        kcg_lit_int64(0);
      outC->outDataBus.messageQueue.m_Entries[idx275].m_Entry.Messages.PacketHeaders[idx273].q_dir =
        Q_DIR_Reverse;
      outC->outDataBus.messageQueue.m_Entries[idx275].m_Entry.Messages.PacketHeaders[idx273].valid =
        kcg_true;
      outC->outDataBus.messageQueue.m_Entries[idx275].m_Entry.Messages.PacketHeaders[idx273].startAddress =
        kcg_lit_int64(0);
      outC->outDataBus.messageQueue.m_Entries[idx275].m_Entry.Messages.PacketHeaders[idx273].endAddress =
        kcg_lit_int64(0);
    }
    for (idx274 = 0; idx274 < 500; idx274++) {
      outC->outDataBus.messageQueue.m_Entries[idx275].m_Entry.Messages.PacketData[idx274] =
        kcg_lit_int64(0);
    }
  }
  outC->outDataBus.clockk.m_Value = kcg_lit_int64(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.radioDevice = kcg_lit_int64(
      0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.nid_message = kcg_lit_int64(
      0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.t_train = kcg_lit_int64(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.m_ack = kcg_lit_int64(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.nid_lrbg = kcg_lit_int64(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.nid_em = kcg_lit_int64(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.q_scale = kcg_lit_int64(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.d_sr = kcg_lit_int64(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.d_ref = kcg_lit_int64(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.q_dir = kcg_lit_int64(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.m_version = kcg_lit_int64(0);
  for (idx276 = 0; idx276 < 30; idx276++) {
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[idx276].nid_packet =
      kcg_lit_int64(0);
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[idx276].q_dir =
      Q_DIR_Reverse;
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[idx276].valid =
      kcg_true;
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[idx276].startAddress =
      kcg_lit_int64(0);
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[idx276].endAddress =
      kcg_lit_int64(0);
  }
  for (idx277 = 0; idx277 < 500; idx277++) {
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketData[idx277] =
      kcg_lit_int64(0);
  }
  /* MOVEMENT_AUTHORITY_SM:AWAIT_ACKNOWLEDGEMENT:_L4=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#3)/ */
  RadioTrackTrainHeader__Ge_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Get_NID_MESSAGE_3);
  /* MOVEMENT_AUTHORITY_SM:AWAIT_ACKNOWLEDGEMENT:_L9=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_T_TRAIN#2)/ */
  _55_RadioTrackTrainHeader__Ge_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_1_Context_RadioTrackTrainHeader__Get_T_TRAIN_2);
  /* MOVEMENT_AUTHORITY_SM:AWAIT_ACKNOWLEDGEMENT:_L3=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#4)/ */
  RadioTrackTrainMessage__G_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainMessage__GetHeader_4);
  /* MOVEMENT_AUTHORITY_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L20=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_T_TRAIN#3)/ */
  _55_RadioTrackTrainHeader__Ge_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_2_Context_RadioTrackTrainHeader__Get_T_TRAIN_3);
  /* MOVEMENT_AUTHORITY_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L22=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#4)/ */
  RadioTrackTrainHeader__Ge_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_3_Context_RadioTrackTrainHeader__Get_NID_MESSAGE_4);
  /* MOVEMENT_AUTHORITY_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L19=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#5)/ */
  RadioTrackTrainMessage__G_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_4_Context_RadioTrackTrainMessage__GetHeader_5);
  /* MOVEMENT_AUTHORITY_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L29=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_T_TRAIN_Ref#2)/ */
  _56_RadioTrainTrackHeader__Ge_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackHeader__Get_T_TRAIN_Ref_2);
  /* MOVEMENT_AUTHORITY_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L27=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#4)/ */
  RadioTrainTrackMessage__G_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackMessage__GetHeader_4);
  /* MOVEMENT_AUTHORITY_SM:SEND_MA:_L29=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut#2)/ */
  _50_RadioTrackTrainMessageQue_init_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueue__TryPut_2);
  /* MOVEMENT_AUTHORITY_SM:SEND_MA:_L30=(RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__Create#2)/ */
  _51_RadioTrackTrainMessageQue_init_RBC_Collections_Pkg(
    &outC->_5_Context_RadioTrackTrainMessageQueueEntry__Create_2);
  /* MOVEMENT_AUTHORITY_SM:SEND_MA:IfBlock1:then:_L4=(RBC_Session_Pkg::SessionManagement__SetPosData#3)/ */
  SessionManagement__SetPosData_init_RBC_Session_Pkg(
    &outC->Context_SessionManagement__SetPosData_3);
  /* MOVEMENT_AUTHORITY_SM:SEND_MA:IfBlock1:then:_L2=(RBC_Session_Pkg::PosData__Update#3)/ */
  PosData__Update_init_RBC_Session_Pkg(&outC->Context_PosData__Update_3);
  /* MOVEMENT_AUTHORITY_SM:SEND_MA:IfBlock1:then:_L1=(RBC_Session_Pkg::SessionManagement__GetPosData#3)/ */
  SessionManagement__GetPosData_init_RBC_Session_Pkg(
    &outC->Context_SessionManagement__GetPosData_3);
  /* MOVEMENT_AUTHORITY_SM:UPDATE_POSITION:_L4=(RBC_Session_Pkg::SessionManagement__SetPosData#1)/ */
  SessionManagement__SetPosData_init_RBC_Session_Pkg(
    &outC->_6_Context_SessionManagement__SetPosData_1);
  /* MOVEMENT_AUTHORITY_SM:UPDATE_POSITION:_L5=(RBC_Session_Pkg::PosData__Update#1)/ */
  PosData__Update_init_RBC_Session_Pkg(&outC->Context_PosData__Update_1);
  /* MOVEMENT_AUTHORITY_SM:UPDATE_POSITION:_L3=(RBC_Session_Pkg::SessionManagement__GetPosData#1)/ */
  SessionManagement__GetPosData_init_RBC_Session_Pkg(
    &outC->_7_Context_SessionManagement__GetPosData_1);
  /* _L94=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_MESSAGE#2)/ */
  _100_RadioTrainTrackHeade_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_8_Context_RadioTrainTrackHeader__Get_NID_MESSAGE_2);
  /* _L93=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#5)/ */
  RadioTrainTrackMessage__G_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_9_Context_RadioTrainTrackMessage__GetHeader_5);
  /* _L89=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#5)/ */
  RadioTrackTrainHeader__Ge_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_10_Context_RadioTrackTrainHeader__Get_NID_MESSAGE_5);
  /* _L90=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#6)/ */
  RadioTrackTrainMessage__G_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_11_Context_RadioTrackTrainMessage__GetHeader_6);
  outC->MOVEMENT_AUTHORITY_SM_reset_act = kcg_false;
  outC->MOVEMENT_AUTHORITY_SM_reset_nxt = kcg_false;
  outC->MOVEMENT_AUTHORITY_SM_state_nxt = SSM_st_IDLE_MOVEMENT_AUTHORITY_SM;
  outC->radioTrackTrainMessageWasSentTimestamp = T_TRAIN_MIN;
  outC->validAcknowledgement = kcg_false;
  outC->invalidAcknowledgement = kcg_false;
}
#endif /* KCG_USER_DEFINED_INIT */


void RBC__ProcessMovementAuthority_reset_RBC_Model_Pkg(
  outC_RBC__ProcessMovementAuthority_RBC_Model_Pkg *outC)
{
  /* MOVEMENT_AUTHORITY_SM:AWAIT_ACKNOWLEDGEMENT:_L4=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#3)/ */
  RadioTrackTrainHeader__Ge_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Get_NID_MESSAGE_3);
  /* MOVEMENT_AUTHORITY_SM:AWAIT_ACKNOWLEDGEMENT:_L9=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_T_TRAIN#2)/ */
  _55_RadioTrackTrainHeader__Ge_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_1_Context_RadioTrackTrainHeader__Get_T_TRAIN_2);
  /* MOVEMENT_AUTHORITY_SM:AWAIT_ACKNOWLEDGEMENT:_L3=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#4)/ */
  RadioTrackTrainMessage__G_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainMessage__GetHeader_4);
  /* MOVEMENT_AUTHORITY_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L20=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_T_TRAIN#3)/ */
  _55_RadioTrackTrainHeader__Ge_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_2_Context_RadioTrackTrainHeader__Get_T_TRAIN_3);
  /* MOVEMENT_AUTHORITY_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L22=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#4)/ */
  RadioTrackTrainHeader__Ge_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_3_Context_RadioTrackTrainHeader__Get_NID_MESSAGE_4);
  /* MOVEMENT_AUTHORITY_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L19=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#5)/ */
  RadioTrackTrainMessage__G_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_4_Context_RadioTrackTrainMessage__GetHeader_5);
  /* MOVEMENT_AUTHORITY_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L29=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_T_TRAIN_Ref#2)/ */
  _56_RadioTrainTrackHeader__Ge_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackHeader__Get_T_TRAIN_Ref_2);
  /* MOVEMENT_AUTHORITY_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L27=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#4)/ */
  RadioTrainTrackMessage__G_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackMessage__GetHeader_4);
  /* MOVEMENT_AUTHORITY_SM:SEND_MA:_L29=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut#2)/ */
  _50_RadioTrackTrainMessageQue_reset_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueue__TryPut_2);
  /* MOVEMENT_AUTHORITY_SM:SEND_MA:_L30=(RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__Create#2)/ */
  _51_RadioTrackTrainMessageQue_reset_RBC_Collections_Pkg(
    &outC->_5_Context_RadioTrackTrainMessageQueueEntry__Create_2);
  /* MOVEMENT_AUTHORITY_SM:SEND_MA:IfBlock1:then:_L4=(RBC_Session_Pkg::SessionManagement__SetPosData#3)/ */
  SessionManagement__SetPosData_reset_RBC_Session_Pkg(
    &outC->Context_SessionManagement__SetPosData_3);
  /* MOVEMENT_AUTHORITY_SM:SEND_MA:IfBlock1:then:_L2=(RBC_Session_Pkg::PosData__Update#3)/ */
  PosData__Update_reset_RBC_Session_Pkg(&outC->Context_PosData__Update_3);
  /* MOVEMENT_AUTHORITY_SM:SEND_MA:IfBlock1:then:_L1=(RBC_Session_Pkg::SessionManagement__GetPosData#3)/ */
  SessionManagement__GetPosData_reset_RBC_Session_Pkg(
    &outC->Context_SessionManagement__GetPosData_3);
  /* MOVEMENT_AUTHORITY_SM:UPDATE_POSITION:_L4=(RBC_Session_Pkg::SessionManagement__SetPosData#1)/ */
  SessionManagement__SetPosData_reset_RBC_Session_Pkg(
    &outC->_6_Context_SessionManagement__SetPosData_1);
  /* MOVEMENT_AUTHORITY_SM:UPDATE_POSITION:_L5=(RBC_Session_Pkg::PosData__Update#1)/ */
  PosData__Update_reset_RBC_Session_Pkg(&outC->Context_PosData__Update_1);
  /* MOVEMENT_AUTHORITY_SM:UPDATE_POSITION:_L3=(RBC_Session_Pkg::SessionManagement__GetPosData#1)/ */
  SessionManagement__GetPosData_reset_RBC_Session_Pkg(
    &outC->_7_Context_SessionManagement__GetPosData_1);
  /* _L94=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_MESSAGE#2)/ */
  _100_RadioTrainTrackHeade_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_8_Context_RadioTrainTrackHeader__Get_NID_MESSAGE_2);
  /* _L93=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#5)/ */
  RadioTrainTrackMessage__G_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_9_Context_RadioTrainTrackMessage__GetHeader_5);
  /* _L89=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#5)/ */
  RadioTrackTrainHeader__Ge_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_10_Context_RadioTrackTrainHeader__Get_NID_MESSAGE_5);
  /* _L90=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#6)/ */
  RadioTrackTrainMessage__G_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_11_Context_RadioTrackTrainMessage__GetHeader_6);
  outC->MOVEMENT_AUTHORITY_SM_reset_act = kcg_false;
  outC->MOVEMENT_AUTHORITY_SM_reset_nxt = kcg_false;
  outC->MOVEMENT_AUTHORITY_SM_state_nxt = SSM_st_IDLE_MOVEMENT_AUTHORITY_SM;
  outC->radioTrackTrainMessageWasSentTimestamp = T_TRAIN_MIN;
  outC->validAcknowledgement = kcg_false;
  outC->invalidAcknowledgement = kcg_false;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RBC__ProcessMovementAuthority_RBC_Model_Pkg.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

