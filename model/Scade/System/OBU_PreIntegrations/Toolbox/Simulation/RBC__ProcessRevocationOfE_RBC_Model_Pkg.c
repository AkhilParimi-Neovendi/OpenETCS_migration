/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC__ProcessRevocationOfE_RBC_Model_Pkg.h"

/* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop/ */
void RBC__ProcessRevocationOfE_RBC_Model_Pkg(
  /* inDataBus/ */
  RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* inRadioTrainTrackMessage/ */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  /* inTriggeredRadioTrackTrainMessage/ */
  CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessage,
  outC_RBC__ProcessRevocationOfE_RBC_Model_Pkg *outC)
{
  /* ackRequired/ */
  kcg_bool ackRequired_partial;
  /* revocationMessageWasSentTimestamp/ */
  T_TRAIN revocationMessageWasSentTimestamp_partial;
  /* messageQueue/ */
  _2_RadioTrackTrainMessageQueue_T messageQueue_partial;
  /* session/ */
  SessionManagement_T session_partial;
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM: */
  SSM_ST_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_nxt_partial;
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM: */
  kcg_bool _1_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_nxt_partial;
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM: */
  SSM_TR_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM _2_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_partial;
  /* ackRequired/ */
  kcg_bool _3_ackRequired_partial;
  /* revocationMessageWasSentTimestamp/ */
  T_TRAIN _4_revocationMessageWasSentTimestamp_partial;
  /* messageQueue/ */
  _2_RadioTrackTrainMessageQueue_T _5_messageQueue_partial;
  /* session/ */
  SessionManagement_T _6_session_partial;
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM: */
  SSM_ST_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM _7_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_nxt_partial;
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM: */
  kcg_bool _8_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_nxt_partial;
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM: */
  SSM_TR_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM _9_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_partial;
  /* ackRequired/ */
  kcg_bool _10_ackRequired_partial;
  /* revocationMessageWasSentTimestamp/ */
  T_TRAIN _11_revocationMessageWasSentTimestamp_partial;
  /* messageQueue/ */
  _2_RadioTrackTrainMessageQueue_T _12_messageQueue_partial;
  /* session/ */
  SessionManagement_T _13_session_partial;
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM: */
  SSM_ST_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM _14_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_nxt_partial;
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM: */
  kcg_bool _15_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_nxt_partial;
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM: */
  SSM_TR_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM _16_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_partial;
  /* ackRequired/ */
  kcg_bool _17_ackRequired_partial;
  /* revocationMessageWasSentTimestamp/ */
  T_TRAIN _18_revocationMessageWasSentTimestamp_partial;
  /* messageQueue/ */
  _2_RadioTrackTrainMessageQueue_T _19_messageQueue_partial;
  /* session/ */
  SessionManagement_T _20_session_partial;
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM: */
  SSM_ST_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM _21_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_nxt_partial;
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM: */
  kcg_bool _22_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_nxt_partial;
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM: */
  SSM_TR_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM _23_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_partial;
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM: */
  SSM_ST_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM _24_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act_partial;
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM: */
  kcg_bool _25_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_act_partial;
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM: */
  SSM_TR_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM _26_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong_partial;
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:IDLE:<1> */
  kcg_bool tr_1_guard_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM: */
  SSM_ST_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM _27_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act_partial;
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM: */
  kcg_bool _28_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_act_partial;
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM: */
  SSM_TR_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM _29_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong_partial;
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:SEND_REVOCATION_OF_ES_MESSAGE:<3> */
  kcg_bool tr_3_guard_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:SEND_REVOCATION_OF_ES_MESSAGE:<2> */
  kcg_bool tr_2_guard_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:SEND_REVOCATION_OF_ES_MESSAGE:<1> */
  kcg_bool tr_1_guard_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM: */
  SSM_ST_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM _30_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act_partial;
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM: */
  kcg_bool _31_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_act_partial;
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM: */
  SSM_TR_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM _32_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong_partial;
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:AWAIT_ACKNOWLEDGEMENT:<1> */
  kcg_bool tr_1_guard_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM: */
  SSM_ST_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM _33_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act_partial;
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM: */
  kcg_bool _34_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_act_partial;
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM: */
  SSM_TR_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM _35_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong_partial;
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:<4> */
  kcg_bool tr_4_guard_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:<3> */
  kcg_bool tr_3_guard_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:<2> */
  kcg_bool tr_2_guard_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:<1> */
  kcg_bool tr_1_guard_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  /* invalidAck/ */
  kcg_bool last_invalidAck;
  /* validAck/ */
  kcg_bool last_validAck;
  /* revocationMessageWasSentTimestamp/ */
  T_TRAIN last_revocationMessageWasSentTimestamp;
  /* ackRequired/ */
  kcg_bool last_ackRequired;
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM: */
  kcg_bool _36_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_sel;
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM: */
  kcg_bool _37_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_prv;

  last_invalidAck = outC->invalidAck;
  last_validAck = outC->validAck;
  last_revocationMessageWasSentTimestamp =
    outC->revocationMessageWasSentTimestamp;
  last_ackRequired = outC->ackRequired;
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->_L81, inDataBus);
  outC->_15_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_sel =
    outC->REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_nxt;
  switch (outC->_15_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_sel) {
    case _182_SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      tr_4_guard_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
        last_invalidAck;
      break;
    default :
      /* this branch is empty */
      break;
  }
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->_L66,
    inRadioTrainTrackMessage);
  /* _L68=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#1)/ */
  RadioTrainTrackMessage__G_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L66,
    &outC->_13_Context_RadioTrainTrackMessage__GetHeader_1);
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
    &outC->_L68,
    &outC->_13_Context_RadioTrainTrackMessage__GetHeader_1.outRadioTrainTrackHeader);
  /* _L67=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_MESSAGE#1)/ */
  _100_RadioTrainTrackHeade_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L68,
    &outC->_12_Context_RadioTrainTrackHeader__Get_NID_MESSAGE_1);
  outC->_L67 =
    outC->_12_Context_RadioTrainTrackHeader__Get_NID_MESSAGE_1.out_NID_MESSAGE;
  outC->radioTrainTrackMessageId = outC->_L67;
  switch (outC->_15_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_sel) {
    case _182_SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      tr_3_guard_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
        last_invalidAck & (outC->radioTrainTrackMessageId == kcg_lit_int64(146));
      tr_2_guard_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
        last_validAck;
      break;
    default :
      /* this branch is empty */
      break;
  }
  kcg_copy_CompressedRadioMessage_TM(
    &outC->_L58,
    inTriggeredRadioTrackTrainMessage);
  kcg_copy_CompressedRadioMessage_TM(&outC->radioTrackTrainMessage, &outC->_L58);
  kcg_copy_CompressedRadioMessage_TM(&outC->_L59, &outC->radioTrackTrainMessage);
  /* _L61=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#1)/ */
  RadioTrackTrainMessage__G_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_L59,
    &outC->_11_Context_RadioTrackTrainMessage__GetHeader_1);
  kcg_copy_Radio_TrackTrain_Header_T_TM(
    &outC->_L61,
    &outC->_11_Context_RadioTrackTrainMessage__GetHeader_1.outRadioTrackTrainHeader);
  /* _L60=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#1)/ */
  RadioTrackTrainHeader__Ge_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_L61,
    &outC->_10_Context_RadioTrackTrainHeader__Get_NID_MESSAGE_1);
  outC->_L60 =
    outC->_10_Context_RadioTrackTrainHeader__Get_NID_MESSAGE_1.out_NID_MESSAGE;
  outC->radioTrackTrainMessageId = outC->_L60;
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM: */
  switch (outC->_15_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_sel) {
    case _182_SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      tr_1_guard_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
        last_validAck & (outC->radioTrackTrainMessageId == kcg_lit_int64(18));
      if (tr_1_guard_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM) {
        _33_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act_partial =
          SSM_st_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      else if (tr_2_guard_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM) {
        _33_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act_partial =
          SSM_st_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      else if (tr_3_guard_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM) {
        _33_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act_partial =
          _182_SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      else if (tr_4_guard_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM) {
        _33_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act_partial =
          SSM_st_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      else {
        _33_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act_partial =
          _182_SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      outC->_14_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act =
        _33_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act_partial;
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      tr_1_guard_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
        outC->radioTrainTrackMessageId == kcg_lit_int64(146);
      if (tr_1_guard_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM) {
        _30_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act_partial =
          _182_SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      else {
        _30_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act_partial =
          SSM_st_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      outC->_14_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act =
        _30_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act_partial;
      break;
    case SSM_st_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      tr_3_guard_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
        !last_ackRequired;
      tr_2_guard_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
        last_ackRequired & (outC->radioTrainTrackMessageId != kcg_lit_int64(146));
      tr_1_guard_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
        last_ackRequired & (outC->radioTrainTrackMessageId == kcg_lit_int64(146));
      if (tr_1_guard_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM) {
        _27_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act_partial =
          _182_SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      else if (tr_2_guard_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM) {
        _27_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act_partial =
          SSM_st_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      else if (tr_3_guard_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM) {
        _27_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act_partial =
          SSM_st_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      else {
        _27_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act_partial =
          SSM_st_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      outC->_14_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act =
        _27_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act_partial;
      break;
    case SSM_st_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      tr_1_guard_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
        outC->radioTrackTrainMessageId == kcg_lit_int64(18);
      if (tr_1_guard_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM) {
        _24_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act_partial =
          SSM_st_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      else {
        _24_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act_partial =
          SSM_st_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      outC->_14_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act =
        _24_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM: */
  switch (outC->_14_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act) {
    case _182_SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
        inDataBus);
      kcg_copy_SessionManagement_T(
        &outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
        &outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session);
      kcg_copy_SessionManagement_T(
        &_20_session_partial,
        &outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM);
      kcg_copy_SessionManagement_T(&outC->session, &_20_session_partial);
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
        inDataBus);
      kcg_copy_SessionManagement_T(
        &outC->_L14_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
        &outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session);
      kcg_copy_SessionManagement_T(
        &_13_session_partial,
        &outC->_L14_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM);
      kcg_copy_SessionManagement_T(&outC->session, &_13_session_partial);
      break;
    case SSM_st_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
        inDataBus);
      kcg_copy_SessionManagement_T(
        &outC->_L37_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
        &outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session);
      kcg_copy_SessionManagement_T(
        &_6_session_partial,
        &outC->_L37_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM);
      kcg_copy_SessionManagement_T(&outC->session, &_6_session_partial);
      break;
    case SSM_st_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
        inDataBus);
      kcg_copy_SessionManagement_T(
        &outC->_L5_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
        &outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session);
      kcg_copy_SessionManagement_T(
        &session_partial,
        &outC->_L5_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM);
      kcg_copy_SessionManagement_T(&outC->session, &session_partial);
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  kcg_copy_SessionManagement_T(&outC->_L74, &outC->session);
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM: */
  switch (outC->_14_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act) {
    case _182_SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      kcg_copy__2_RadioTrackTrainMessageQueue_T(
        &outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
        &outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue);
      kcg_copy__2_RadioTrackTrainMessageQueue_T(
        &_19_messageQueue_partial,
        &outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM);
      kcg_copy__2_RadioTrackTrainMessageQueue_T(
        &outC->messageQueue,
        &_19_messageQueue_partial);
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      kcg_copy__2_RadioTrackTrainMessageQueue_T(
        &outC->_L15_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
        &outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue);
      kcg_copy__2_RadioTrackTrainMessageQueue_T(
        &_12_messageQueue_partial,
        &outC->_L15_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM);
      kcg_copy__2_RadioTrackTrainMessageQueue_T(
        &outC->messageQueue,
        &_12_messageQueue_partial);
      break;
    case SSM_st_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
        inDataBus);
      kcg_copy__2_RadioTrackTrainMessageQueue_T(
        &outC->_L40_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
        &outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue);
      kcg_copy_CompressedRadioMessage_TM(
        &outC->_L26_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
        &outC->radioTrackTrainMessage);
      /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:SEND_REVOCATION_OF_ES_MESSAGE:_L22=(RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__Create#1)/ */
      _51_RadioTrackTrainMessageQue_RBC_Collections_Pkg(
        &outC->_L26_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
        &outC->_9_Context_RadioTrackTrainMessageQueueEntry__Create_1);
      kcg_copy_RadioTrackTrainMessageQueueEntry_T(
        &outC->_L22_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
        &outC->_9_Context_RadioTrackTrainMessageQueueEntry__Create_1.outRadioTrackTrainMessageQueueEntry);
      /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:SEND_REVOCATION_OF_ES_MESSAGE:_L20=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut#1)/ */
      _50_RadioTrackTrainMessageQue_RBC_Collections_Pkg(
        &outC->_L40_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
        &outC->_L22_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
        &outC->Context_RadioTrackTrainMessageQueue__TryPut_1);
      kcg_copy__2_RadioTrackTrainMessageQueue_T(
        &outC->_L20_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
        &outC->Context_RadioTrackTrainMessageQueue__TryPut_1.outRadioTrackTrainMessageQueue);
      kcg_copy__2_RadioTrackTrainMessageQueue_T(
        &_5_messageQueue_partial,
        &outC->_L20_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM);
      kcg_copy__2_RadioTrackTrainMessageQueue_T(
        &outC->messageQueue,
        &_5_messageQueue_partial);
      break;
    case SSM_st_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      kcg_copy__2_RadioTrackTrainMessageQueue_T(
        &outC->_L3_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
        &outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue);
      kcg_copy__2_RadioTrackTrainMessageQueue_T(
        &messageQueue_partial,
        &outC->_L3_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM);
      kcg_copy__2_RadioTrackTrainMessageQueue_T(
        &outC->messageQueue,
        &messageQueue_partial);
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  kcg_copy__2_RadioTrackTrainMessageQueue_T(&outC->_L79, &outC->messageQueue);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->_L75, &outC->_L81);
  if (kcg_true) {
    kcg_copy__2_RadioTrackTrainMessageQueue_T(
      &outC->_L75.messageQueue,
      &outC->_L79);
  }
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->_L80, &outC->_L75);
  if (kcg_true) {
    kcg_copy_SessionManagement_T(&outC->_L80.session, &outC->_L74);
  }
  kcg_copy_CompressedRadioMessage_TM(
    &outC->_L76,
    inTriggeredRadioTrackTrainMessage);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->outTriggeredRadioTrackTrainMessage,
    &outC->_L76);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->_L77,
    inRadioTrainTrackMessage);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->outDataBus, &outC->_L80);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->outRadioTrainTrackMessage,
    &outC->_L77);
  switch (outC->_14_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act) {
    case _182_SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      _17_ackRequired_partial = last_ackRequired;
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM: */
  switch (outC->_15_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_sel) {
    case _182_SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      if (tr_1_guard_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM) {
        _35_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong_partial =
          _183_SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_SEND_REVOCATION_OF_ES_MESSAGE_1_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      else if (tr_2_guard_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM) {
        _35_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong_partial =
          _184_SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_IDLE_2_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      else if (tr_3_guard_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM) {
        _35_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong_partial =
          _185_SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_TRY_PROCESS_ACKNOWLEDGEMENT_3_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      else if (tr_4_guard_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM) {
        _35_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong_partial =
          _186_SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_AWAIT_ACKNOWLEDGEMENT_4_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      else {
        _35_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong_partial =
          SSM_TR_no_trans_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      outC->_16_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong =
        _35_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong_partial;
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      if (tr_1_guard_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM) {
        _32_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong_partial =
          _187_SSM_TR_AWAIT_ACKNOWLEDGEMENT_TRY_PROCESS_ACKNOWLEDGEMENT_1_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      else {
        _32_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong_partial =
          SSM_TR_no_trans_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      outC->_16_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong =
        _32_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong_partial;
      break;
    case SSM_st_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      if (tr_1_guard_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM) {
        _29_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong_partial =
          SSM_TR_SEND_REVOCATION_OF_ES_MESSAGE_TRY_PROCESS_ACKNOWLEDGEMENT_1_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      else if (tr_2_guard_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM) {
        _29_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong_partial =
          _188_SSM_TR_SEND_REVOCATION_OF_ES_MESSAGE_AWAIT_ACKNOWLEDGEMENT_2_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      else if (tr_3_guard_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM) {
        _29_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong_partial =
          _189_SSM_TR_SEND_REVOCATION_OF_ES_MESSAGE_IDLE_3_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      else {
        _29_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong_partial =
          SSM_TR_no_trans_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      outC->_16_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong =
        _29_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong_partial;
      break;
    case SSM_st_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      if (tr_1_guard_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM) {
        _26_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong_partial =
          SSM_TR_IDLE_SEND_REVOCATION_OF_ES_MESSAGE_1_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      else {
        _26_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong_partial =
          SSM_TR_no_trans_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      outC->_16_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong =
        _26_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM: */
  switch (outC->_14_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act) {
    case _182_SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      _23_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_partial =
        outC->_16_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong;
      _22_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_nxt_partial = kcg_false;
      _21_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_nxt_partial =
        _182_SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
        inDataBus);
      kcg_copy_CompressedRadioMessage_TM(
        &outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
        &outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage);
      outC->_L24_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
        last_revocationMessageWasSentTimestamp;
      /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L23=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#5)/ */
      RadioTrackTrainMessage__G_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
        &outC->_8_Context_RadioTrackTrainMessage__GetHeader_5);
      kcg_copy_Radio_TrackTrain_Header_T_TM(
        &outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
        &outC->_8_Context_RadioTrackTrainMessage__GetHeader_5.outRadioTrackTrainHeader);
      /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L22=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#4)/ */
      RadioTrackTrainHeader__Ge_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
        &outC->_7_Context_RadioTrackTrainHeader__Get_NID_MESSAGE_4);
      outC->_L22_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
        outC->_7_Context_RadioTrackTrainHeader__Get_NID_MESSAGE_4.out_NID_MESSAGE;
      /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L20=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_T_TRAIN#3)/ */
      _55_RadioTrackTrainHeader__Ge_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
        &outC->_6_Context_RadioTrackTrainHeader__Get_T_TRAIN_3);
      outC->_L20_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
        outC->_6_Context_RadioTrackTrainHeader__Get_T_TRAIN_3.out_T_TRAIN;
      outC->_L19_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
        kcg_lit_int64(18);
      outC->_L18_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
        outC->_L22_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM ==
        outC->_L19_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L21= */
      if (outC->_L18_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM) {
        outC->_L21_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
          outC->_L20_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      else {
        outC->_L21_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
          outC->_L24_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      _18_revocationMessageWasSentTimestamp_partial =
        outC->_L21_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
        &outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
        inRadioTrainTrackMessage);
      /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L14=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#5)/ */
      RadioTrainTrackMessage__G_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
        &outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
        &outC->Context_RadioTrainTrackMessage__GetHeader_5);
      kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
        &outC->_L14_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
        &outC->Context_RadioTrainTrackMessage__GetHeader_5.outRadioTrainTrackHeader);
      /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L16=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_T_TRAIN_Ref#2)/ */
      _56_RadioTrainTrackHeader__Ge_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
        &outC->_L14_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
        &outC->Context_RadioTrainTrackHeader__Get_T_TRAIN_Ref_2);
      outC->_L16_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
        outC->Context_RadioTrainTrackHeader__Get_T_TRAIN_Ref_2.out_T_TRAIN_Ref;
      outC->acknowledgementMessageTimestamp_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
        outC->_L16_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      outC->IfBlock1_clock_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
        outC->acknowledgementMessageTimestamp_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM ==
        _18_revocationMessageWasSentTimestamp_partial;
      outC->ackRequired = _17_ackRequired_partial;
      outC->revocationMessageWasSentTimestamp =
        _18_revocationMessageWasSentTimestamp_partial;
      outC->REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_nxt =
        _21_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_nxt_partial;
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      _10_ackRequired_partial = last_ackRequired;
      _16_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_partial =
        outC->_16_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong;
      _15_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_nxt_partial = kcg_false;
      _14_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_nxt_partial =
        SSM_st_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
        inDataBus);
      kcg_copy_CompressedRadioMessage_TM(
        &outC->_L16_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
        &outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage);
      outC->_L7_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
        last_revocationMessageWasSentTimestamp;
      /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:AWAIT_ACKNOWLEDGEMENT:_L3=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#4)/ */
      RadioTrackTrainMessage__G_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &outC->_L16_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
        &outC->_5_Context_RadioTrackTrainMessage__GetHeader_4);
      kcg_copy_Radio_TrackTrain_Header_T_TM(
        &outC->_L3_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
        &outC->_5_Context_RadioTrackTrainMessage__GetHeader_4.outRadioTrackTrainHeader);
      /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:AWAIT_ACKNOWLEDGEMENT:_L8=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_T_TRAIN#2)/ */
      _55_RadioTrackTrainHeader__Ge_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &outC->_L3_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
        &outC->_4_Context_RadioTrackTrainHeader__Get_T_TRAIN_2);
      outC->_L8_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
        outC->_4_Context_RadioTrackTrainHeader__Get_T_TRAIN_2.out_T_TRAIN;
      outC->_L5_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
        kcg_lit_int64(18);
      /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:AWAIT_ACKNOWLEDGEMENT:_L6=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#3)/ */
      RadioTrackTrainHeader__Ge_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &outC->_L3_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
        &outC->_3_Context_RadioTrackTrainHeader__Get_NID_MESSAGE_3);
      outC->_L6_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
        outC->_3_Context_RadioTrackTrainHeader__Get_NID_MESSAGE_3.out_NID_MESSAGE;
      outC->_L4_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
        outC->_L6_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM ==
        outC->_L5_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:AWAIT_ACKNOWLEDGEMENT:_L9= */
      if (outC->_L4_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM) {
        outC->_L9_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
          outC->_L8_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      else {
        outC->_L9_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
          outC->_L7_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      _11_revocationMessageWasSentTimestamp_partial =
        outC->_L9_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      outC->ackRequired = _10_ackRequired_partial;
      outC->revocationMessageWasSentTimestamp =
        _11_revocationMessageWasSentTimestamp_partial;
      outC->REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_nxt =
        _14_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_nxt_partial;
      break;
    case SSM_st_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      _4_revocationMessageWasSentTimestamp_partial =
        last_revocationMessageWasSentTimestamp;
      _9_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_partial =
        outC->_16_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong;
      _8_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_nxt_partial = kcg_false;
      _7_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_nxt_partial =
        SSM_st_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      outC->_L32_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
        M_ACK_Acknowledgement_required;
      /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:SEND_REVOCATION_OF_ES_MESSAGE:_L34=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#10)/ */
      RadioTrackTrainMessage__G_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &outC->_L26_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
        &outC->Context_RadioTrackTrainMessage__GetHeader_10);
      kcg_copy_Radio_TrackTrain_Header_T_TM(
        &outC->_L34_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
        &outC->Context_RadioTrackTrainMessage__GetHeader_10.outRadioTrackTrainHeader);
      /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:SEND_REVOCATION_OF_ES_MESSAGE:_L33=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_M_ACK#2)/ */
      _105_RadioTrackTrainHeade_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &outC->_L34_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
        &outC->Context_RadioTrackTrainHeader__Get_M_ACK_2);
      outC->_L33_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
        outC->Context_RadioTrackTrainHeader__Get_M_ACK_2.out_M_ACK;
      outC->_L35_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
        outC->_L33_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM ==
        outC->_L32_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      outC->_L31_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
        kcg_false;
      outC->_L29_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
        kcg_true;
      /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:SEND_REVOCATION_OF_ES_MESSAGE:_L30= */
      if (outC->_L35_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM) {
        outC->_L30_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
          outC->_L29_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      else {
        outC->_L30_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
          outC->_L31_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      _3_ackRequired_partial =
        outC->_L30_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      outC->ackRequired = _3_ackRequired_partial;
      outC->revocationMessageWasSentTimestamp =
        _4_revocationMessageWasSentTimestamp_partial;
      outC->REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_nxt =
        _7_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_nxt_partial;
      break;
    case SSM_st_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      revocationMessageWasSentTimestamp_partial =
        last_revocationMessageWasSentTimestamp;
      ackRequired_partial = last_ackRequired;
      _2_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_partial =
        outC->_16_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong;
      _1_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_nxt_partial = kcg_false;
      REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_nxt_partial =
        SSM_st_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      outC->ackRequired = ackRequired_partial;
      outC->revocationMessageWasSentTimestamp =
        revocationMessageWasSentTimestamp_partial;
      outC->REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_nxt =
        REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  _36_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_sel =
    outC->_2_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_nxt;
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM: */
  switch (outC->_14_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act) {
    case _182_SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      outC->_2_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_nxt =
        _22_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_nxt_partial;
      outC->_17_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired =
        _23_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_partial;
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      outC->_2_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_nxt =
        _15_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_nxt_partial;
      outC->_17_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired =
        _16_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_partial;
      break;
    case SSM_st_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      outC->_2_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_nxt =
        _8_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_nxt_partial;
      outC->_17_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired =
        _9_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_partial;
      break;
    case SSM_st_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      outC->_2_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_nxt =
        _1_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_nxt_partial;
      outC->_17_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired =
        _2_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->_15_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_sel) {
    case _182_SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      if (tr_1_guard_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM) {
        _34_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_act_partial = kcg_true;
      }
      else if (tr_2_guard_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM) {
        _34_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_act_partial = kcg_true;
      }
      else if (tr_3_guard_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM) {
        _34_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_act_partial = kcg_true;
      }
      else {
        _34_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_act_partial =
          tr_4_guard_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      _31_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_act_partial =
        tr_1_guard_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      break;
    case SSM_st_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      if (tr_1_guard_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM) {
        _28_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_act_partial = kcg_true;
      }
      else if (tr_2_guard_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM) {
        _28_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_act_partial = kcg_true;
      }
      else {
        _28_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_act_partial =
          tr_3_guard_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      break;
    case SSM_st_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      _25_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_act_partial =
        tr_1_guard_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  _37_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_prv =
    outC->_1_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_act;
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM: */
  switch (outC->_15_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_sel) {
    case _182_SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      outC->_1_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_act =
        _34_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_act_partial;
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      outC->_1_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_act =
        _31_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_act_partial;
      break;
    case SSM_st_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      outC->_1_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_act =
        _28_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_act_partial;
      break;
    case SSM_st_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      outC->_1_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_act =
        _25_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM: */
  switch (outC->_14_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act) {
    case _182_SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1: */
      if (outC->IfBlock1_clock_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM) {
        outC->validAck = kcg_true;
        outC->invalidAck = kcg_false;
      }
      else {
        outC->validAck = kcg_false;
        outC->invalidAck = kcg_true;
      }
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      outC->validAck = kcg_false;
      outC->invalidAck = kcg_false;
      break;
    case SSM_st_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      outC->validAck = kcg_false;
      outC->invalidAck = kcg_false;
      break;
    case SSM_st_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      outC->validAck = kcg_false;
      outC->invalidAck = kcg_false;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void RBC__ProcessRevocationOfE_init_RBC_Model_Pkg(
  outC_RBC__ProcessRevocationOfE_RBC_Model_Pkg *outC)
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

  outC->_L74.m_TrainData.nid_engine = kcg_lit_int64(0);
  outC->_L74.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 1; idx1++) {
    outC->_L74.m_TrainData.m_OnboardPhoneNumbers[idx1].valid = kcg_true;
    for (idx = 0; idx < 15; idx++) {
      outC->_L74.m_TrainData.m_OnboardPhoneNumbers[idx1].telephoneNumber[idx] =
        kcg_lit_int64(0);
    }
  }
  outC->_L74.m_TrainData.t_train_ref = kcg_lit_int64(0);
  outC->_L74.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L74.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L74.m_TrainData.l_train = kcg_lit_int64(0);
  outC->_L74.m_TrainData.v_maxtrain = kcg_lit_int64(0);
  outC->_L74.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L74.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L74.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L74.m_TrainData.n_axle = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 4; idx2++) {
    outC->_L74.m_TrainData.m_TractionIdentities[idx2].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L74.m_TrainData.m_TractionIdentities[idx2].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L74.m_TrainData.m_NationalSystemIdentities[idx3] = kcg_lit_int64(0);
  }
  outC->_L74.m_TrainData.nid_operational = kcg_lit_int64(0);
  outC->_L74.m_PosData.nid_lrbg = kcg_lit_int64(0);
  outC->_L74.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L74.m_PosData.d_lrbg = kcg_lit_int64(0);
  outC->_L74.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L74.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L74.m_PosData.l_doubtover = kcg_lit_int64(0);
  outC->_L74.m_PosData.l_doubtunder = kcg_lit_int64(0);
  outC->_L74.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L74.m_PosData.l_trainint = kcg_lit_int64(0);
  outC->_L74.m_PosData.v_train = kcg_lit_int64(0);
  outC->_L74.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L74.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L74.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L74.m_PosData.nid_ntc = kcg_lit_int64(0);
  outC->_L74.m_PosData.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L75.session.m_TrainData.nid_engine = kcg_lit_int64(0);
  outC->_L75.session.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 1; idx5++) {
    outC->_L75.session.m_TrainData.m_OnboardPhoneNumbers[idx5].valid = kcg_true;
    for (idx4 = 0; idx4 < 15; idx4++) {
      outC->_L75.session.m_TrainData.m_OnboardPhoneNumbers[idx5].telephoneNumber[idx4] =
        kcg_lit_int64(0);
    }
  }
  outC->_L75.session.m_TrainData.t_train_ref = kcg_lit_int64(0);
  outC->_L75.session.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L75.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L75.session.m_TrainData.l_train = kcg_lit_int64(0);
  outC->_L75.session.m_TrainData.v_maxtrain = kcg_lit_int64(0);
  outC->_L75.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L75.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L75.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L75.session.m_TrainData.n_axle = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 4; idx6++) {
    outC->_L75.session.m_TrainData.m_TractionIdentities[idx6].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L75.session.m_TrainData.m_TractionIdentities[idx6].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx7 = 0; idx7 < 5; idx7++) {
    outC->_L75.session.m_TrainData.m_NationalSystemIdentities[idx7] =
      kcg_lit_int64(0);
  }
  outC->_L75.session.m_TrainData.nid_operational = kcg_lit_int64(0);
  outC->_L75.session.m_PosData.nid_lrbg = kcg_lit_int64(0);
  outC->_L75.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L75.session.m_PosData.d_lrbg = kcg_lit_int64(0);
  outC->_L75.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L75.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L75.session.m_PosData.l_doubtover = kcg_lit_int64(0);
  outC->_L75.session.m_PosData.l_doubtunder = kcg_lit_int64(0);
  outC->_L75.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L75.session.m_PosData.l_trainint = kcg_lit_int64(0);
  outC->_L75.session.m_PosData.v_train = kcg_lit_int64(0);
  outC->_L75.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L75.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L75.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L75.session.m_PosData.nid_ntc = kcg_lit_int64(0);
  outC->_L75.session.m_PosData.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L75.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L75.config.m_NationalParams.nid_c = kcg_lit_int64(0);
  outC->_L75.config.m_NationalParams.v_nvshunt = kcg_lit_int64(0);
  outC->_L75.config.m_NationalParams.v_nvstff = kcg_lit_int64(0);
  outC->_L75.config.m_NationalParams.v_nvonsight = kcg_lit_int64(0);
  outC->_L75.config.m_NationalParams.v_nvunfit = kcg_lit_int64(0);
  outC->_L75.config.m_NationalParams.v_nvrel = kcg_lit_int64(0);
  outC->_L75.config.m_NationalParams.t_nvcontact = kcg_lit_int64(0);
  outC->_L75.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L75.config.m_MAReqParams.t_mar = kcg_lit_int64(0);
  outC->_L75.config.m_MAReqParams.t_timeoutrqst = kcg_lit_int64(0);
  outC->_L75.config.m_MAReqParams.t_cycrqst = kcg_lit_int64(0);
  outC->_L75.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L75.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L75.config.m_PosRepParams.t_cycloc = kcg_lit_int64(0);
  outC->_L75.config.m_PosRepParams.d_cycloc = kcg_lit_int64(0);
  outC->_L75.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L75.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx8 = 0; idx8 < 32; idx8++) {
    outC->_L75.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx8].d_loc =
      kcg_lit_int64(0);
    outC->_L75.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx8].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx9 = 0; idx9 < 16; idx9++) {
    outC->_L75.diagnostic[idx9].valid = kcg_true;
    outC->_L75.diagnostic[idx9].count = kcg_lit_int64(0);
    outC->_L75.diagnostic[idx9].timestamp = kcg_lit_int64(0);
    outC->_L75.diagnostic[idx9].diagType = DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L75.diagnostic[idx9].diagSrc = DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L75.diagnostic[idx9].diagText = DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx12 = 0; idx12 < 8; idx12++) {
    outC->_L75.messageQueue.m_Entries[idx12].m_IsValid = kcg_true;
    outC->_L75.messageQueue.m_Entries[idx12].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L75.messageQueue.m_Entries[idx12].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L75.messageQueue.m_Entries[idx12].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L75.messageQueue.m_Entries[idx12].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L75.messageQueue.m_Entries[idx12].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L75.messageQueue.m_Entries[idx12].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L75.messageQueue.m_Entries[idx12].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L75.messageQueue.m_Entries[idx12].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L75.messageQueue.m_Entries[idx12].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L75.messageQueue.m_Entries[idx12].m_Entry.Header.d_sr = kcg_lit_int64(0);
    outC->_L75.messageQueue.m_Entries[idx12].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L75.messageQueue.m_Entries[idx12].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L75.messageQueue.m_Entries[idx12].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L75.messageQueue.m_Entries[idx12].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L75.messageQueue.m_Entries[idx12].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx10 = 0; idx10 < 30; idx10++) {
      outC->_L75.messageQueue.m_Entries[idx12].m_Entry.Messages.PacketHeaders[idx10].nid_packet =
        kcg_lit_int64(0);
      outC->_L75.messageQueue.m_Entries[idx12].m_Entry.Messages.PacketHeaders[idx10].q_dir =
        Q_DIR_Reverse;
      outC->_L75.messageQueue.m_Entries[idx12].m_Entry.Messages.PacketHeaders[idx10].valid =
        kcg_true;
      outC->_L75.messageQueue.m_Entries[idx12].m_Entry.Messages.PacketHeaders[idx10].startAddress =
        kcg_lit_int64(0);
      outC->_L75.messageQueue.m_Entries[idx12].m_Entry.Messages.PacketHeaders[idx10].endAddress =
        kcg_lit_int64(0);
    }
    for (idx11 = 0; idx11 < 500; idx11++) {
      outC->_L75.messageQueue.m_Entries[idx12].m_Entry.Messages.PacketData[idx11] =
        kcg_lit_int64(0);
    }
  }
  outC->_L75.clockk.m_Value = kcg_lit_int64(0);
  outC->_L75.lastSentTrackTrainMessage.Header.radioDevice = kcg_lit_int64(0);
  outC->_L75.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L75.lastSentTrackTrainMessage.Header.nid_message = kcg_lit_int64(0);
  outC->_L75.lastSentTrackTrainMessage.Header.t_train = kcg_lit_int64(0);
  outC->_L75.lastSentTrackTrainMessage.Header.m_ack = kcg_lit_int64(0);
  outC->_L75.lastSentTrackTrainMessage.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L75.lastSentTrackTrainMessage.Header.t_train_reference = kcg_lit_int64(
      0);
  outC->_L75.lastSentTrackTrainMessage.Header.nid_em = kcg_lit_int64(0);
  outC->_L75.lastSentTrackTrainMessage.Header.q_scale = kcg_lit_int64(0);
  outC->_L75.lastSentTrackTrainMessage.Header.d_sr = kcg_lit_int64(0);
  outC->_L75.lastSentTrackTrainMessage.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L75.lastSentTrackTrainMessage.Header.d_ref = kcg_lit_int64(0);
  outC->_L75.lastSentTrackTrainMessage.Header.q_dir = kcg_lit_int64(0);
  outC->_L75.lastSentTrackTrainMessage.Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L75.lastSentTrackTrainMessage.Header.m_version = kcg_lit_int64(0);
  for (idx13 = 0; idx13 < 30; idx13++) {
    outC->_L75.lastSentTrackTrainMessage.Messages.PacketHeaders[idx13].nid_packet =
      kcg_lit_int64(0);
    outC->_L75.lastSentTrackTrainMessage.Messages.PacketHeaders[idx13].q_dir =
      Q_DIR_Reverse;
    outC->_L75.lastSentTrackTrainMessage.Messages.PacketHeaders[idx13].valid =
      kcg_true;
    outC->_L75.lastSentTrackTrainMessage.Messages.PacketHeaders[idx13].startAddress =
      kcg_lit_int64(0);
    outC->_L75.lastSentTrackTrainMessage.Messages.PacketHeaders[idx13].endAddress =
      kcg_lit_int64(0);
  }
  for (idx14 = 0; idx14 < 500; idx14++) {
    outC->_L75.lastSentTrackTrainMessage.Messages.PacketData[idx14] =
      kcg_lit_int64(0);
  }
  outC->_L76.Header.radioDevice = kcg_lit_int64(0);
  outC->_L76.Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L76.Header.nid_message = kcg_lit_int64(0);
  outC->_L76.Header.t_train = kcg_lit_int64(0);
  outC->_L76.Header.m_ack = kcg_lit_int64(0);
  outC->_L76.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L76.Header.t_train_reference = kcg_lit_int64(0);
  outC->_L76.Header.nid_em = kcg_lit_int64(0);
  outC->_L76.Header.q_scale = kcg_lit_int64(0);
  outC->_L76.Header.d_sr = kcg_lit_int64(0);
  outC->_L76.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L76.Header.d_ref = kcg_lit_int64(0);
  outC->_L76.Header.q_dir = kcg_lit_int64(0);
  outC->_L76.Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L76.Header.m_version = kcg_lit_int64(0);
  for (idx15 = 0; idx15 < 30; idx15++) {
    outC->_L76.Messages.PacketHeaders[idx15].nid_packet = kcg_lit_int64(0);
    outC->_L76.Messages.PacketHeaders[idx15].q_dir = Q_DIR_Reverse;
    outC->_L76.Messages.PacketHeaders[idx15].valid = kcg_true;
    outC->_L76.Messages.PacketHeaders[idx15].startAddress = kcg_lit_int64(0);
    outC->_L76.Messages.PacketHeaders[idx15].endAddress = kcg_lit_int64(0);
  }
  for (idx16 = 0; idx16 < 500; idx16++) {
    outC->_L76.Messages.PacketData[idx16] = kcg_lit_int64(0);
  }
  outC->_L77.present = kcg_true;
  outC->_L77.header.present = kcg_true;
  outC->_L77.header.nid_message = kcg_lit_int64(0);
  outC->_L77.header.t_train = kcg_lit_int64(0);
  outC->_L77.header.nid_engine = kcg_lit_int64(0);
  outC->_L77.header.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L77.header.xT_TRAIN = kcg_lit_int64(0);
  outC->_L77.header.xNID_EM = kcg_lit_int64(0);
  outC->_L77.header.xQ_EMERGENCYSTOP =
    _12_Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L77.header.xNID_TEXTMESSAGE = kcg_lit_int64(0);
  outC->_L77.packets.p0.valid = kcg_true;
  outC->_L77.packets.p0.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L77.packets.p0.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L77.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L77.packets.p0.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L77.packets.p0.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L77.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L77.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L77.packets.p0.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L77.packets.p0.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L77.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L77.packets.p0.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L77.packets.p0.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L77.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L77.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L77.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L77.packets.p0.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L77.packets.p1.valid = kcg_true;
  outC->_L77.packets.p1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L77.packets.p1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L77.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L77.packets.p1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L77.packets.p1.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L77.packets.p1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L77.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L77.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L77.packets.p1.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L77.packets.p1.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L77.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L77.packets.p1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L77.packets.p1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L77.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L77.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L77.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L77.packets.p1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L77.packets.p3.valid = kcg_true;
  outC->_L77.packets.p3.number = kcg_lit_int64(0);
  for (idx18 = 0; idx18 < 1; idx18++) {
    outC->_L77.packets.p3.aNID_RADIO[idx18].valid = kcg_true;
    for (idx17 = 0; idx17 < 15; idx17++) {
      outC->_L77.packets.p3.aNID_RADIO[idx18].telephoneNumber[idx17] =
        kcg_lit_int64(0);
    }
  }
  outC->_L77.packets.p4.valid = kcg_true;
  outC->_L77.packets.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L77.packets.p5.valid = kcg_true;
  outC->_L77.packets.p5.TrainRunningNumber = kcg_lit_int64(0);
  outC->_L77.packets.p9.valid = kcg_true;
  outC->_L77.packets.p9.transitionInformation = kcg_lit_int64(0);
  outC->_L77.packets.p11.valid = kcg_true;
  outC->_L77.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L77.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L77.packets.p11.l_train = kcg_lit_int64(0);
  outC->_L77.packets.p11.v_maxtrain = kcg_lit_int64(0);
  outC->_L77.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L77.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L77.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L77.packets.p11.n_axle = kcg_lit_int64(0);
  outC->_L77.packets.p11.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx19 = 0; idx19 < 4; idx19++) {
    outC->_L77.packets.p11.tractionIdentity[idx19].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L77.packets.p11.tractionIdentity[idx19].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L77.packets.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx20 = 0; idx20 < 5; idx20++) {
    outC->_L77.packets.p11.nid_ntc[idx20] = kcg_lit_int64(0);
  }
  for (idx23 = 0; idx23 < 8; idx23++) {
    outC->_L79.m_Entries[idx23].m_IsValid = kcg_true;
    outC->_L79.m_Entries[idx23].m_Entry.Header.radioDevice = kcg_lit_int64(0);
    outC->_L79.m_Entries[idx23].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L79.m_Entries[idx23].m_Entry.Header.nid_message = kcg_lit_int64(0);
    outC->_L79.m_Entries[idx23].m_Entry.Header.t_train = kcg_lit_int64(0);
    outC->_L79.m_Entries[idx23].m_Entry.Header.m_ack = kcg_lit_int64(0);
    outC->_L79.m_Entries[idx23].m_Entry.Header.nid_lrbg = kcg_lit_int64(0);
    outC->_L79.m_Entries[idx23].m_Entry.Header.t_train_reference = kcg_lit_int64(0);
    outC->_L79.m_Entries[idx23].m_Entry.Header.nid_em = kcg_lit_int64(0);
    outC->_L79.m_Entries[idx23].m_Entry.Header.q_scale = kcg_lit_int64(0);
    outC->_L79.m_Entries[idx23].m_Entry.Header.d_sr = kcg_lit_int64(0);
    outC->_L79.m_Entries[idx23].m_Entry.Header.t_sh_rqst = kcg_lit_int64(0);
    outC->_L79.m_Entries[idx23].m_Entry.Header.d_ref = kcg_lit_int64(0);
    outC->_L79.m_Entries[idx23].m_Entry.Header.q_dir = kcg_lit_int64(0);
    outC->_L79.m_Entries[idx23].m_Entry.Header.d_emergencystop = kcg_lit_int64(0);
    outC->_L79.m_Entries[idx23].m_Entry.Header.m_version = kcg_lit_int64(0);
    for (idx21 = 0; idx21 < 30; idx21++) {
      outC->_L79.m_Entries[idx23].m_Entry.Messages.PacketHeaders[idx21].nid_packet =
        kcg_lit_int64(0);
      outC->_L79.m_Entries[idx23].m_Entry.Messages.PacketHeaders[idx21].q_dir =
        Q_DIR_Reverse;
      outC->_L79.m_Entries[idx23].m_Entry.Messages.PacketHeaders[idx21].valid =
        kcg_true;
      outC->_L79.m_Entries[idx23].m_Entry.Messages.PacketHeaders[idx21].startAddress =
        kcg_lit_int64(0);
      outC->_L79.m_Entries[idx23].m_Entry.Messages.PacketHeaders[idx21].endAddress =
        kcg_lit_int64(0);
    }
    for (idx22 = 0; idx22 < 500; idx22++) {
      outC->_L79.m_Entries[idx23].m_Entry.Messages.PacketData[idx22] =
        kcg_lit_int64(0);
    }
  }
  outC->_L80.session.m_TrainData.nid_engine = kcg_lit_int64(0);
  outC->_L80.session.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int64(0);
  for (idx25 = 0; idx25 < 1; idx25++) {
    outC->_L80.session.m_TrainData.m_OnboardPhoneNumbers[idx25].valid = kcg_true;
    for (idx24 = 0; idx24 < 15; idx24++) {
      outC->_L80.session.m_TrainData.m_OnboardPhoneNumbers[idx25].telephoneNumber[idx24] =
        kcg_lit_int64(0);
    }
  }
  outC->_L80.session.m_TrainData.t_train_ref = kcg_lit_int64(0);
  outC->_L80.session.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L80.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L80.session.m_TrainData.l_train = kcg_lit_int64(0);
  outC->_L80.session.m_TrainData.v_maxtrain = kcg_lit_int64(0);
  outC->_L80.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L80.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L80.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L80.session.m_TrainData.n_axle = kcg_lit_int64(0);
  for (idx26 = 0; idx26 < 4; idx26++) {
    outC->_L80.session.m_TrainData.m_TractionIdentities[idx26].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L80.session.m_TrainData.m_TractionIdentities[idx26].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx27 = 0; idx27 < 5; idx27++) {
    outC->_L80.session.m_TrainData.m_NationalSystemIdentities[idx27] =
      kcg_lit_int64(0);
  }
  outC->_L80.session.m_TrainData.nid_operational = kcg_lit_int64(0);
  outC->_L80.session.m_PosData.nid_lrbg = kcg_lit_int64(0);
  outC->_L80.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L80.session.m_PosData.d_lrbg = kcg_lit_int64(0);
  outC->_L80.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L80.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L80.session.m_PosData.l_doubtover = kcg_lit_int64(0);
  outC->_L80.session.m_PosData.l_doubtunder = kcg_lit_int64(0);
  outC->_L80.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L80.session.m_PosData.l_trainint = kcg_lit_int64(0);
  outC->_L80.session.m_PosData.v_train = kcg_lit_int64(0);
  outC->_L80.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L80.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L80.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L80.session.m_PosData.nid_ntc = kcg_lit_int64(0);
  outC->_L80.session.m_PosData.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L80.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L80.config.m_NationalParams.nid_c = kcg_lit_int64(0);
  outC->_L80.config.m_NationalParams.v_nvshunt = kcg_lit_int64(0);
  outC->_L80.config.m_NationalParams.v_nvstff = kcg_lit_int64(0);
  outC->_L80.config.m_NationalParams.v_nvonsight = kcg_lit_int64(0);
  outC->_L80.config.m_NationalParams.v_nvunfit = kcg_lit_int64(0);
  outC->_L80.config.m_NationalParams.v_nvrel = kcg_lit_int64(0);
  outC->_L80.config.m_NationalParams.t_nvcontact = kcg_lit_int64(0);
  outC->_L80.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L80.config.m_MAReqParams.t_mar = kcg_lit_int64(0);
  outC->_L80.config.m_MAReqParams.t_timeoutrqst = kcg_lit_int64(0);
  outC->_L80.config.m_MAReqParams.t_cycrqst = kcg_lit_int64(0);
  outC->_L80.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L80.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L80.config.m_PosRepParams.t_cycloc = kcg_lit_int64(0);
  outC->_L80.config.m_PosRepParams.d_cycloc = kcg_lit_int64(0);
  outC->_L80.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L80.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx28 = 0; idx28 < 32; idx28++) {
    outC->_L80.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx28].d_loc =
      kcg_lit_int64(0);
    outC->_L80.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx28].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx29 = 0; idx29 < 16; idx29++) {
    outC->_L80.diagnostic[idx29].valid = kcg_true;
    outC->_L80.diagnostic[idx29].count = kcg_lit_int64(0);
    outC->_L80.diagnostic[idx29].timestamp = kcg_lit_int64(0);
    outC->_L80.diagnostic[idx29].diagType = DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L80.diagnostic[idx29].diagSrc = DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L80.diagnostic[idx29].diagText = DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx32 = 0; idx32 < 8; idx32++) {
    outC->_L80.messageQueue.m_Entries[idx32].m_IsValid = kcg_true;
    outC->_L80.messageQueue.m_Entries[idx32].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L80.messageQueue.m_Entries[idx32].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L80.messageQueue.m_Entries[idx32].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L80.messageQueue.m_Entries[idx32].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L80.messageQueue.m_Entries[idx32].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L80.messageQueue.m_Entries[idx32].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L80.messageQueue.m_Entries[idx32].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L80.messageQueue.m_Entries[idx32].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L80.messageQueue.m_Entries[idx32].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L80.messageQueue.m_Entries[idx32].m_Entry.Header.d_sr = kcg_lit_int64(0);
    outC->_L80.messageQueue.m_Entries[idx32].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L80.messageQueue.m_Entries[idx32].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L80.messageQueue.m_Entries[idx32].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L80.messageQueue.m_Entries[idx32].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L80.messageQueue.m_Entries[idx32].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx30 = 0; idx30 < 30; idx30++) {
      outC->_L80.messageQueue.m_Entries[idx32].m_Entry.Messages.PacketHeaders[idx30].nid_packet =
        kcg_lit_int64(0);
      outC->_L80.messageQueue.m_Entries[idx32].m_Entry.Messages.PacketHeaders[idx30].q_dir =
        Q_DIR_Reverse;
      outC->_L80.messageQueue.m_Entries[idx32].m_Entry.Messages.PacketHeaders[idx30].valid =
        kcg_true;
      outC->_L80.messageQueue.m_Entries[idx32].m_Entry.Messages.PacketHeaders[idx30].startAddress =
        kcg_lit_int64(0);
      outC->_L80.messageQueue.m_Entries[idx32].m_Entry.Messages.PacketHeaders[idx30].endAddress =
        kcg_lit_int64(0);
    }
    for (idx31 = 0; idx31 < 500; idx31++) {
      outC->_L80.messageQueue.m_Entries[idx32].m_Entry.Messages.PacketData[idx31] =
        kcg_lit_int64(0);
    }
  }
  outC->_L80.clockk.m_Value = kcg_lit_int64(0);
  outC->_L80.lastSentTrackTrainMessage.Header.radioDevice = kcg_lit_int64(0);
  outC->_L80.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L80.lastSentTrackTrainMessage.Header.nid_message = kcg_lit_int64(0);
  outC->_L80.lastSentTrackTrainMessage.Header.t_train = kcg_lit_int64(0);
  outC->_L80.lastSentTrackTrainMessage.Header.m_ack = kcg_lit_int64(0);
  outC->_L80.lastSentTrackTrainMessage.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L80.lastSentTrackTrainMessage.Header.t_train_reference = kcg_lit_int64(
      0);
  outC->_L80.lastSentTrackTrainMessage.Header.nid_em = kcg_lit_int64(0);
  outC->_L80.lastSentTrackTrainMessage.Header.q_scale = kcg_lit_int64(0);
  outC->_L80.lastSentTrackTrainMessage.Header.d_sr = kcg_lit_int64(0);
  outC->_L80.lastSentTrackTrainMessage.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L80.lastSentTrackTrainMessage.Header.d_ref = kcg_lit_int64(0);
  outC->_L80.lastSentTrackTrainMessage.Header.q_dir = kcg_lit_int64(0);
  outC->_L80.lastSentTrackTrainMessage.Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L80.lastSentTrackTrainMessage.Header.m_version = kcg_lit_int64(0);
  for (idx33 = 0; idx33 < 30; idx33++) {
    outC->_L80.lastSentTrackTrainMessage.Messages.PacketHeaders[idx33].nid_packet =
      kcg_lit_int64(0);
    outC->_L80.lastSentTrackTrainMessage.Messages.PacketHeaders[idx33].q_dir =
      Q_DIR_Reverse;
    outC->_L80.lastSentTrackTrainMessage.Messages.PacketHeaders[idx33].valid =
      kcg_true;
    outC->_L80.lastSentTrackTrainMessage.Messages.PacketHeaders[idx33].startAddress =
      kcg_lit_int64(0);
    outC->_L80.lastSentTrackTrainMessage.Messages.PacketHeaders[idx33].endAddress =
      kcg_lit_int64(0);
  }
  for (idx34 = 0; idx34 < 500; idx34++) {
    outC->_L80.lastSentTrackTrainMessage.Messages.PacketData[idx34] =
      kcg_lit_int64(0);
  }
  outC->_L81.session.m_TrainData.nid_engine = kcg_lit_int64(0);
  outC->_L81.session.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int64(0);
  for (idx36 = 0; idx36 < 1; idx36++) {
    outC->_L81.session.m_TrainData.m_OnboardPhoneNumbers[idx36].valid = kcg_true;
    for (idx35 = 0; idx35 < 15; idx35++) {
      outC->_L81.session.m_TrainData.m_OnboardPhoneNumbers[idx36].telephoneNumber[idx35] =
        kcg_lit_int64(0);
    }
  }
  outC->_L81.session.m_TrainData.t_train_ref = kcg_lit_int64(0);
  outC->_L81.session.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L81.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L81.session.m_TrainData.l_train = kcg_lit_int64(0);
  outC->_L81.session.m_TrainData.v_maxtrain = kcg_lit_int64(0);
  outC->_L81.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L81.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L81.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L81.session.m_TrainData.n_axle = kcg_lit_int64(0);
  for (idx37 = 0; idx37 < 4; idx37++) {
    outC->_L81.session.m_TrainData.m_TractionIdentities[idx37].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L81.session.m_TrainData.m_TractionIdentities[idx37].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx38 = 0; idx38 < 5; idx38++) {
    outC->_L81.session.m_TrainData.m_NationalSystemIdentities[idx38] =
      kcg_lit_int64(0);
  }
  outC->_L81.session.m_TrainData.nid_operational = kcg_lit_int64(0);
  outC->_L81.session.m_PosData.nid_lrbg = kcg_lit_int64(0);
  outC->_L81.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L81.session.m_PosData.d_lrbg = kcg_lit_int64(0);
  outC->_L81.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L81.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L81.session.m_PosData.l_doubtover = kcg_lit_int64(0);
  outC->_L81.session.m_PosData.l_doubtunder = kcg_lit_int64(0);
  outC->_L81.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L81.session.m_PosData.l_trainint = kcg_lit_int64(0);
  outC->_L81.session.m_PosData.v_train = kcg_lit_int64(0);
  outC->_L81.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L81.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L81.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L81.session.m_PosData.nid_ntc = kcg_lit_int64(0);
  outC->_L81.session.m_PosData.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L81.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L81.config.m_NationalParams.nid_c = kcg_lit_int64(0);
  outC->_L81.config.m_NationalParams.v_nvshunt = kcg_lit_int64(0);
  outC->_L81.config.m_NationalParams.v_nvstff = kcg_lit_int64(0);
  outC->_L81.config.m_NationalParams.v_nvonsight = kcg_lit_int64(0);
  outC->_L81.config.m_NationalParams.v_nvunfit = kcg_lit_int64(0);
  outC->_L81.config.m_NationalParams.v_nvrel = kcg_lit_int64(0);
  outC->_L81.config.m_NationalParams.t_nvcontact = kcg_lit_int64(0);
  outC->_L81.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L81.config.m_MAReqParams.t_mar = kcg_lit_int64(0);
  outC->_L81.config.m_MAReqParams.t_timeoutrqst = kcg_lit_int64(0);
  outC->_L81.config.m_MAReqParams.t_cycrqst = kcg_lit_int64(0);
  outC->_L81.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L81.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L81.config.m_PosRepParams.t_cycloc = kcg_lit_int64(0);
  outC->_L81.config.m_PosRepParams.d_cycloc = kcg_lit_int64(0);
  outC->_L81.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L81.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx39 = 0; idx39 < 32; idx39++) {
    outC->_L81.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx39].d_loc =
      kcg_lit_int64(0);
    outC->_L81.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx39].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx40 = 0; idx40 < 16; idx40++) {
    outC->_L81.diagnostic[idx40].valid = kcg_true;
    outC->_L81.diagnostic[idx40].count = kcg_lit_int64(0);
    outC->_L81.diagnostic[idx40].timestamp = kcg_lit_int64(0);
    outC->_L81.diagnostic[idx40].diagType = DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L81.diagnostic[idx40].diagSrc = DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L81.diagnostic[idx40].diagText = DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx43 = 0; idx43 < 8; idx43++) {
    outC->_L81.messageQueue.m_Entries[idx43].m_IsValid = kcg_true;
    outC->_L81.messageQueue.m_Entries[idx43].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L81.messageQueue.m_Entries[idx43].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L81.messageQueue.m_Entries[idx43].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L81.messageQueue.m_Entries[idx43].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L81.messageQueue.m_Entries[idx43].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L81.messageQueue.m_Entries[idx43].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L81.messageQueue.m_Entries[idx43].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L81.messageQueue.m_Entries[idx43].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L81.messageQueue.m_Entries[idx43].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L81.messageQueue.m_Entries[idx43].m_Entry.Header.d_sr = kcg_lit_int64(0);
    outC->_L81.messageQueue.m_Entries[idx43].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L81.messageQueue.m_Entries[idx43].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L81.messageQueue.m_Entries[idx43].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L81.messageQueue.m_Entries[idx43].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L81.messageQueue.m_Entries[idx43].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx41 = 0; idx41 < 30; idx41++) {
      outC->_L81.messageQueue.m_Entries[idx43].m_Entry.Messages.PacketHeaders[idx41].nid_packet =
        kcg_lit_int64(0);
      outC->_L81.messageQueue.m_Entries[idx43].m_Entry.Messages.PacketHeaders[idx41].q_dir =
        Q_DIR_Reverse;
      outC->_L81.messageQueue.m_Entries[idx43].m_Entry.Messages.PacketHeaders[idx41].valid =
        kcg_true;
      outC->_L81.messageQueue.m_Entries[idx43].m_Entry.Messages.PacketHeaders[idx41].startAddress =
        kcg_lit_int64(0);
      outC->_L81.messageQueue.m_Entries[idx43].m_Entry.Messages.PacketHeaders[idx41].endAddress =
        kcg_lit_int64(0);
    }
    for (idx42 = 0; idx42 < 500; idx42++) {
      outC->_L81.messageQueue.m_Entries[idx43].m_Entry.Messages.PacketData[idx42] =
        kcg_lit_int64(0);
    }
  }
  outC->_L81.clockk.m_Value = kcg_lit_int64(0);
  outC->_L81.lastSentTrackTrainMessage.Header.radioDevice = kcg_lit_int64(0);
  outC->_L81.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L81.lastSentTrackTrainMessage.Header.nid_message = kcg_lit_int64(0);
  outC->_L81.lastSentTrackTrainMessage.Header.t_train = kcg_lit_int64(0);
  outC->_L81.lastSentTrackTrainMessage.Header.m_ack = kcg_lit_int64(0);
  outC->_L81.lastSentTrackTrainMessage.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L81.lastSentTrackTrainMessage.Header.t_train_reference = kcg_lit_int64(
      0);
  outC->_L81.lastSentTrackTrainMessage.Header.nid_em = kcg_lit_int64(0);
  outC->_L81.lastSentTrackTrainMessage.Header.q_scale = kcg_lit_int64(0);
  outC->_L81.lastSentTrackTrainMessage.Header.d_sr = kcg_lit_int64(0);
  outC->_L81.lastSentTrackTrainMessage.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L81.lastSentTrackTrainMessage.Header.d_ref = kcg_lit_int64(0);
  outC->_L81.lastSentTrackTrainMessage.Header.q_dir = kcg_lit_int64(0);
  outC->_L81.lastSentTrackTrainMessage.Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L81.lastSentTrackTrainMessage.Header.m_version = kcg_lit_int64(0);
  for (idx44 = 0; idx44 < 30; idx44++) {
    outC->_L81.lastSentTrackTrainMessage.Messages.PacketHeaders[idx44].nid_packet =
      kcg_lit_int64(0);
    outC->_L81.lastSentTrackTrainMessage.Messages.PacketHeaders[idx44].q_dir =
      Q_DIR_Reverse;
    outC->_L81.lastSentTrackTrainMessage.Messages.PacketHeaders[idx44].valid =
      kcg_true;
    outC->_L81.lastSentTrackTrainMessage.Messages.PacketHeaders[idx44].startAddress =
      kcg_lit_int64(0);
    outC->_L81.lastSentTrackTrainMessage.Messages.PacketHeaders[idx44].endAddress =
      kcg_lit_int64(0);
  }
  for (idx45 = 0; idx45 < 500; idx45++) {
    outC->_L81.lastSentTrackTrainMessage.Messages.PacketData[idx45] =
      kcg_lit_int64(0);
  }
  outC->_L66.present = kcg_true;
  outC->_L66.header.present = kcg_true;
  outC->_L66.header.nid_message = kcg_lit_int64(0);
  outC->_L66.header.t_train = kcg_lit_int64(0);
  outC->_L66.header.nid_engine = kcg_lit_int64(0);
  outC->_L66.header.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L66.header.xT_TRAIN = kcg_lit_int64(0);
  outC->_L66.header.xNID_EM = kcg_lit_int64(0);
  outC->_L66.header.xQ_EMERGENCYSTOP =
    _12_Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L66.header.xNID_TEXTMESSAGE = kcg_lit_int64(0);
  outC->_L66.packets.p0.valid = kcg_true;
  outC->_L66.packets.p0.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L66.packets.p0.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L66.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L66.packets.p0.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L66.packets.p0.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L66.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L66.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L66.packets.p0.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L66.packets.p0.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L66.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L66.packets.p0.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L66.packets.p0.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L66.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L66.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L66.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L66.packets.p0.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L66.packets.p1.valid = kcg_true;
  outC->_L66.packets.p1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L66.packets.p1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L66.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L66.packets.p1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L66.packets.p1.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L66.packets.p1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L66.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L66.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L66.packets.p1.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L66.packets.p1.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L66.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L66.packets.p1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L66.packets.p1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L66.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L66.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L66.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L66.packets.p1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L66.packets.p3.valid = kcg_true;
  outC->_L66.packets.p3.number = kcg_lit_int64(0);
  for (idx47 = 0; idx47 < 1; idx47++) {
    outC->_L66.packets.p3.aNID_RADIO[idx47].valid = kcg_true;
    for (idx46 = 0; idx46 < 15; idx46++) {
      outC->_L66.packets.p3.aNID_RADIO[idx47].telephoneNumber[idx46] =
        kcg_lit_int64(0);
    }
  }
  outC->_L66.packets.p4.valid = kcg_true;
  outC->_L66.packets.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L66.packets.p5.valid = kcg_true;
  outC->_L66.packets.p5.TrainRunningNumber = kcg_lit_int64(0);
  outC->_L66.packets.p9.valid = kcg_true;
  outC->_L66.packets.p9.transitionInformation = kcg_lit_int64(0);
  outC->_L66.packets.p11.valid = kcg_true;
  outC->_L66.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L66.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L66.packets.p11.l_train = kcg_lit_int64(0);
  outC->_L66.packets.p11.v_maxtrain = kcg_lit_int64(0);
  outC->_L66.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L66.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L66.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L66.packets.p11.n_axle = kcg_lit_int64(0);
  outC->_L66.packets.p11.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx48 = 0; idx48 < 4; idx48++) {
    outC->_L66.packets.p11.tractionIdentity[idx48].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L66.packets.p11.tractionIdentity[idx48].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L66.packets.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx49 = 0; idx49 < 5; idx49++) {
    outC->_L66.packets.p11.nid_ntc[idx49] = kcg_lit_int64(0);
  }
  outC->_L67 = kcg_lit_int64(0);
  outC->_L68.present = kcg_true;
  outC->_L68.nid_message = kcg_lit_int64(0);
  outC->_L68.t_train = kcg_lit_int64(0);
  outC->_L68.nid_engine = kcg_lit_int64(0);
  outC->_L68.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L68.xT_TRAIN = kcg_lit_int64(0);
  outC->_L68.xNID_EM = kcg_lit_int64(0);
  outC->_L68.xQ_EMERGENCYSTOP =
    _12_Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L68.xNID_TEXTMESSAGE = kcg_lit_int64(0);
  outC->_L59.Header.radioDevice = kcg_lit_int64(0);
  outC->_L59.Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L59.Header.nid_message = kcg_lit_int64(0);
  outC->_L59.Header.t_train = kcg_lit_int64(0);
  outC->_L59.Header.m_ack = kcg_lit_int64(0);
  outC->_L59.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L59.Header.t_train_reference = kcg_lit_int64(0);
  outC->_L59.Header.nid_em = kcg_lit_int64(0);
  outC->_L59.Header.q_scale = kcg_lit_int64(0);
  outC->_L59.Header.d_sr = kcg_lit_int64(0);
  outC->_L59.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L59.Header.d_ref = kcg_lit_int64(0);
  outC->_L59.Header.q_dir = kcg_lit_int64(0);
  outC->_L59.Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L59.Header.m_version = kcg_lit_int64(0);
  for (idx50 = 0; idx50 < 30; idx50++) {
    outC->_L59.Messages.PacketHeaders[idx50].nid_packet = kcg_lit_int64(0);
    outC->_L59.Messages.PacketHeaders[idx50].q_dir = Q_DIR_Reverse;
    outC->_L59.Messages.PacketHeaders[idx50].valid = kcg_true;
    outC->_L59.Messages.PacketHeaders[idx50].startAddress = kcg_lit_int64(0);
    outC->_L59.Messages.PacketHeaders[idx50].endAddress = kcg_lit_int64(0);
  }
  for (idx51 = 0; idx51 < 500; idx51++) {
    outC->_L59.Messages.PacketData[idx51] = kcg_lit_int64(0);
  }
  outC->_L60 = kcg_lit_int64(0);
  outC->_L61.radioDevice = kcg_lit_int64(0);
  outC->_L61.receivedSystemTime = kcg_lit_int64(0);
  outC->_L61.nid_message = kcg_lit_int64(0);
  outC->_L61.t_train = kcg_lit_int64(0);
  outC->_L61.m_ack = kcg_lit_int64(0);
  outC->_L61.nid_lrbg = kcg_lit_int64(0);
  outC->_L61.t_train_reference = kcg_lit_int64(0);
  outC->_L61.nid_em = kcg_lit_int64(0);
  outC->_L61.q_scale = kcg_lit_int64(0);
  outC->_L61.d_sr = kcg_lit_int64(0);
  outC->_L61.t_sh_rqst = kcg_lit_int64(0);
  outC->_L61.d_ref = kcg_lit_int64(0);
  outC->_L61.q_dir = kcg_lit_int64(0);
  outC->_L61.d_emergencystop = kcg_lit_int64(0);
  outC->_L61.m_version = kcg_lit_int64(0);
  outC->_L58.Header.radioDevice = kcg_lit_int64(0);
  outC->_L58.Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L58.Header.nid_message = kcg_lit_int64(0);
  outC->_L58.Header.t_train = kcg_lit_int64(0);
  outC->_L58.Header.m_ack = kcg_lit_int64(0);
  outC->_L58.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L58.Header.t_train_reference = kcg_lit_int64(0);
  outC->_L58.Header.nid_em = kcg_lit_int64(0);
  outC->_L58.Header.q_scale = kcg_lit_int64(0);
  outC->_L58.Header.d_sr = kcg_lit_int64(0);
  outC->_L58.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L58.Header.d_ref = kcg_lit_int64(0);
  outC->_L58.Header.q_dir = kcg_lit_int64(0);
  outC->_L58.Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L58.Header.m_version = kcg_lit_int64(0);
  for (idx52 = 0; idx52 < 30; idx52++) {
    outC->_L58.Messages.PacketHeaders[idx52].nid_packet = kcg_lit_int64(0);
    outC->_L58.Messages.PacketHeaders[idx52].q_dir = Q_DIR_Reverse;
    outC->_L58.Messages.PacketHeaders[idx52].valid = kcg_true;
    outC->_L58.Messages.PacketHeaders[idx52].startAddress = kcg_lit_int64(0);
    outC->_L58.Messages.PacketHeaders[idx52].endAddress = kcg_lit_int64(0);
  }
  for (idx53 = 0; idx53 < 500; idx53++) {
    outC->_L58.Messages.PacketData[idx53] = kcg_lit_int64(0);
  }
  outC->session.m_TrainData.nid_engine = kcg_lit_int64(0);
  outC->session.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int64(0);
  for (idx55 = 0; idx55 < 1; idx55++) {
    outC->session.m_TrainData.m_OnboardPhoneNumbers[idx55].valid = kcg_true;
    for (idx54 = 0; idx54 < 15; idx54++) {
      outC->session.m_TrainData.m_OnboardPhoneNumbers[idx55].telephoneNumber[idx54] =
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
  for (idx56 = 0; idx56 < 4; idx56++) {
    outC->session.m_TrainData.m_TractionIdentities[idx56].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->session.m_TrainData.m_TractionIdentities[idx56].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx57 = 0; idx57 < 5; idx57++) {
    outC->session.m_TrainData.m_NationalSystemIdentities[idx57] = kcg_lit_int64(0);
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
  for (idx60 = 0; idx60 < 8; idx60++) {
    outC->messageQueue.m_Entries[idx60].m_IsValid = kcg_true;
    outC->messageQueue.m_Entries[idx60].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->messageQueue.m_Entries[idx60].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->messageQueue.m_Entries[idx60].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->messageQueue.m_Entries[idx60].m_Entry.Header.t_train = kcg_lit_int64(0);
    outC->messageQueue.m_Entries[idx60].m_Entry.Header.m_ack = kcg_lit_int64(0);
    outC->messageQueue.m_Entries[idx60].m_Entry.Header.nid_lrbg = kcg_lit_int64(0);
    outC->messageQueue.m_Entries[idx60].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->messageQueue.m_Entries[idx60].m_Entry.Header.nid_em = kcg_lit_int64(0);
    outC->messageQueue.m_Entries[idx60].m_Entry.Header.q_scale = kcg_lit_int64(0);
    outC->messageQueue.m_Entries[idx60].m_Entry.Header.d_sr = kcg_lit_int64(0);
    outC->messageQueue.m_Entries[idx60].m_Entry.Header.t_sh_rqst = kcg_lit_int64(0);
    outC->messageQueue.m_Entries[idx60].m_Entry.Header.d_ref = kcg_lit_int64(0);
    outC->messageQueue.m_Entries[idx60].m_Entry.Header.q_dir = kcg_lit_int64(0);
    outC->messageQueue.m_Entries[idx60].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->messageQueue.m_Entries[idx60].m_Entry.Header.m_version = kcg_lit_int64(0);
    for (idx58 = 0; idx58 < 30; idx58++) {
      outC->messageQueue.m_Entries[idx60].m_Entry.Messages.PacketHeaders[idx58].nid_packet =
        kcg_lit_int64(0);
      outC->messageQueue.m_Entries[idx60].m_Entry.Messages.PacketHeaders[idx58].q_dir =
        Q_DIR_Reverse;
      outC->messageQueue.m_Entries[idx60].m_Entry.Messages.PacketHeaders[idx58].valid =
        kcg_true;
      outC->messageQueue.m_Entries[idx60].m_Entry.Messages.PacketHeaders[idx58].startAddress =
        kcg_lit_int64(0);
      outC->messageQueue.m_Entries[idx60].m_Entry.Messages.PacketHeaders[idx58].endAddress =
        kcg_lit_int64(0);
    }
    for (idx59 = 0; idx59 < 500; idx59++) {
      outC->messageQueue.m_Entries[idx60].m_Entry.Messages.PacketData[idx59] =
        kcg_lit_int64(0);
    }
  }
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
  outC->_17_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired =
    SSM_TR_no_trans_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  outC->_16_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong =
    SSM_TR_no_trans_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  outC->_14_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act =
    SSM_st_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  outC->_15_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_sel =
    SSM_st_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  outC->IfBlock1_clock_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
    kcg_true;
  outC->acknowledgementMessageTimestamp_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
    kcg_lit_int64(0);
  outC->_L16_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.present =
    kcg_true;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.header.present =
    kcg_true;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.header.nid_message =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.header.t_train =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.header.nid_engine =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.header.xT_TRAIN =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.header.xNID_EM =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.header.xQ_EMERGENCYSTOP =
    _12_Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.header.xNID_TEXTMESSAGE =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p0.valid =
    kcg_true;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p0.packet0.NID_PACKET =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p0.packet0.L_PACKET =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p0.packet0.qscale =
    Q_SCALE_10_cm_scale;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p0.packet0.NID_LRBG =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p0.packet0.D_LRBG =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p0.packet0.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p0.packet0.dlrbg =
    Q_DLRBG_Reverse;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p0.packet0.L_DOUBTOVER =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p0.packet0.L_DOUBTUNDER =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p0.packet0.L_TRAININT =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p0.packet0.V_TRAIN =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p0.packet0.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p0.packet0.mode =
    M_MODE_Full_Supervision;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p0.packet0.level =
    M_LEVEL_Level_0;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p0.packet0.NID_NTC =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p1.valid =
    kcg_true;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p1.packet1.NID_PACKET =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p1.packet1.L_PACKET =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p1.packet1.qscale =
    Q_SCALE_10_cm_scale;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p1.packet1.NID_LRBG =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p1.packet1.NID_PRVLRBG =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p1.packet1.D_LRBG =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p1.packet1.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p1.packet1.dlrbg =
    Q_DLRBG_Reverse;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p1.packet1.L_DOUBTOVER =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p1.packet1.L_DOUBTUNDER =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p1.packet1.L_TRAININT =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p1.packet1.V_TRAIN =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p1.packet1.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p1.packet1.mode =
    M_MODE_Full_Supervision;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p1.packet1.level =
    M_LEVEL_Level_0;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p1.packet1.NID_NTC =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p3.valid =
    kcg_true;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p3.number =
    kcg_lit_int64(0);
  for (idx64 = 0; idx64 < 1; idx64++) {
    outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p3.aNID_RADIO[idx64].valid =
      kcg_true;
    for (idx63 = 0; idx63 < 15; idx63++) {
      outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p3.aNID_RADIO[idx64].telephoneNumber[idx63] =
        kcg_lit_int64(0);
    }
  }
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p4.valid =
    kcg_true;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p5.valid =
    kcg_true;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p5.TrainRunningNumber =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p9.valid =
    kcg_true;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p9.transitionInformation =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p11.valid =
    kcg_true;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p11.l_train =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p11.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p11.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p11.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p11.n_axle =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p11.nIter_tractionIdentity =
    kcg_lit_int64(0);
  for (idx65 = 0; idx65 < 4; idx65++) {
    outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p11.tractionIdentity[idx65].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p11.tractionIdentity[idx65].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p11.nIter_ntc =
    kcg_lit_int64(0);
  for (idx66 = 0; idx66 < 5; idx66++) {
    outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.packets.p11.nid_ntc[idx66] =
      kcg_lit_int64(0);
  }
  outC->_L14_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.present =
    kcg_true;
  outC->_L14_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.nid_message =
    kcg_lit_int64(0);
  outC->_L14_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.t_train =
    kcg_lit_int64(0);
  outC->_L14_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.nid_engine =
    kcg_lit_int64(0);
  outC->_L14_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L14_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.xT_TRAIN =
    kcg_lit_int64(0);
  outC->_L14_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.xNID_EM =
    kcg_lit_int64(0);
  outC->_L14_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.xQ_EMERGENCYSTOP =
    _12_Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L14_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.xNID_TEXTMESSAGE =
    kcg_lit_int64(0);
  outC->_L24_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.radioDevice =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.nid_message =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.t_train =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_ack =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.t_train_reference =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.nid_em =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.q_scale =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.d_sr =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.d_ref =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.q_dir =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_version =
    kcg_lit_int64(0);
  outC->_L22_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
    kcg_lit_int64(0);
  outC->_L21_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
    kcg_lit_int64(0);
  outC->_L20_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
    kcg_lit_int64(0);
  outC->_L19_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
    kcg_lit_int64(0);
  outC->_L18_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
    kcg_true;
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx68 = 0; idx68 < 1; idx68++) {
    outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx68].valid =
      kcg_true;
    for (idx67 = 0; idx67 < 15; idx67++) {
      outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx68].telephoneNumber[idx67] =
        kcg_lit_int64(0);
    }
  }
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx69 = 0; idx69 < 4; idx69++) {
    outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_TractionIdentities[idx69].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_TractionIdentities[idx69].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx70 = 0; idx70 < 5; idx70++) {
    outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_NationalSystemIdentities[idx70] =
      kcg_lit_int64(0);
  }
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_NationalParams.nid_c =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_NationalParams.v_nvshunt =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_NationalParams.v_nvstff =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_NationalParams.v_nvonsight =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_NationalParams.v_nvunfit =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_NationalParams.v_nvrel =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_NationalParams.t_nvcontact =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_MAReqParams.q_dir =
    Q_DIR_Reverse;
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_MAReqParams.t_mar =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_MAReqParams.t_timeoutrqst =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_MAReqParams.t_cycrqst =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.q_dir =
    Q_DIR_Reverse;
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.t_cycloc =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.d_cycloc =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.m_loc =
    M_LOC_Now;
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx71 = 0; idx71 < 32; idx71++) {
    outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx71].d_loc =
      kcg_lit_int64(0);
    outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx71].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx72 = 0; idx72 < 16; idx72++) {
    outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.diagnostic[idx72].valid =
      kcg_true;
    outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.diagnostic[idx72].count =
      kcg_lit_int64(0);
    outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.diagnostic[idx72].timestamp =
      kcg_lit_int64(0);
    outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.diagnostic[idx72].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.diagnostic[idx72].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.diagnostic[idx72].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx75 = 0; idx75 < 8; idx75++) {
    outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx75].m_IsValid =
      kcg_true;
    outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx75].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx75].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx75].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx75].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx75].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx75].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx75].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx75].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx75].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx75].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx75].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx75].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx75].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx75].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx75].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx73 = 0; idx73 < 30; idx73++) {
      outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx75].m_Entry.Messages.PacketHeaders[idx73].nid_packet =
        kcg_lit_int64(0);
      outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx75].m_Entry.Messages.PacketHeaders[idx73].q_dir =
        Q_DIR_Reverse;
      outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx75].m_Entry.Messages.PacketHeaders[idx73].valid =
        kcg_true;
      outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx75].m_Entry.Messages.PacketHeaders[idx73].startAddress =
        kcg_lit_int64(0);
      outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx75].m_Entry.Messages.PacketHeaders[idx73].endAddress =
        kcg_lit_int64(0);
    }
    for (idx74 = 0; idx74 < 500; idx74++) {
      outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx75].m_Entry.Messages.PacketData[idx74] =
        kcg_lit_int64(0);
    }
  }
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.clockk.m_Value =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int64(0);
  for (idx76 = 0; idx76 < 30; idx76++) {
    outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx76].nid_packet =
      kcg_lit_int64(0);
    outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx76].q_dir =
      Q_DIR_Reverse;
    outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx76].valid =
      kcg_true;
    outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx76].startAddress =
      kcg_lit_int64(0);
    outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx76].endAddress =
      kcg_lit_int64(0);
  }
  for (idx77 = 0; idx77 < 500; idx77++) {
    outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketData[idx77] =
      kcg_lit_int64(0);
  }
  for (idx80 = 0; idx80 < 8; idx80++) {
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx80].m_IsValid =
      kcg_true;
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx80].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx80].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx80].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx80].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx80].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx80].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx80].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx80].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx80].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx80].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx80].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx80].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx80].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx80].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx80].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx78 = 0; idx78 < 30; idx78++) {
      outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx80].m_Entry.Messages.PacketHeaders[idx78].nid_packet =
        kcg_lit_int64(0);
      outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx80].m_Entry.Messages.PacketHeaders[idx78].q_dir =
        Q_DIR_Reverse;
      outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx80].m_Entry.Messages.PacketHeaders[idx78].valid =
        kcg_true;
      outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx80].m_Entry.Messages.PacketHeaders[idx78].startAddress =
        kcg_lit_int64(0);
      outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx80].m_Entry.Messages.PacketHeaders[idx78].endAddress =
        kcg_lit_int64(0);
    }
    for (idx79 = 0; idx79 < 500; idx79++) {
      outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx80].m_Entry.Messages.PacketData[idx79] =
        kcg_lit_int64(0);
    }
  }
  outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx82 = 0; idx82 < 1; idx82++) {
    outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.m_OnboardPhoneNumbers[idx82].valid =
      kcg_true;
    for (idx81 = 0; idx81 < 15; idx81++) {
      outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.m_OnboardPhoneNumbers[idx82].telephoneNumber[idx81] =
        kcg_lit_int64(0);
    }
  }
  outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx83 = 0; idx83 < 4; idx83++) {
    outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.m_TractionIdentities[idx83].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.m_TractionIdentities[idx83].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx84 = 0; idx84 < 5; idx84++) {
    outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.m_NationalSystemIdentities[idx84] =
      kcg_lit_int64(0);
  }
  outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Header.t_train =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Header.m_version =
    kcg_lit_int64(0);
  for (idx85 = 0; idx85 < 30; idx85++) {
    outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Messages.PacketHeaders[idx85].nid_packet =
      kcg_lit_int64(0);
    outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Messages.PacketHeaders[idx85].q_dir =
      Q_DIR_Reverse;
    outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Messages.PacketHeaders[idx85].valid =
      kcg_true;
    outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Messages.PacketHeaders[idx85].startAddress =
      kcg_lit_int64(0);
    outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Messages.PacketHeaders[idx85].endAddress =
      kcg_lit_int64(0);
  }
  for (idx86 = 0; idx86 < 500; idx86++) {
    outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Messages.PacketData[idx86] =
      kcg_lit_int64(0);
  }
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx88 = 0; idx88 < 1; idx88++) {
    outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx88].valid =
      kcg_true;
    for (idx87 = 0; idx87 < 15; idx87++) {
      outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx88].telephoneNumber[idx87] =
        kcg_lit_int64(0);
    }
  }
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx89 = 0; idx89 < 4; idx89++) {
    outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_TractionIdentities[idx89].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_TractionIdentities[idx89].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx90 = 0; idx90 < 5; idx90++) {
    outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_NationalSystemIdentities[idx90] =
      kcg_lit_int64(0);
  }
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_NationalParams.nid_c =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_NationalParams.v_nvshunt =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_NationalParams.v_nvstff =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_NationalParams.v_nvonsight =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_NationalParams.v_nvunfit =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_NationalParams.v_nvrel =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_NationalParams.t_nvcontact =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_MAReqParams.q_dir =
    Q_DIR_Reverse;
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_MAReqParams.t_mar =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_MAReqParams.t_timeoutrqst =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_MAReqParams.t_cycrqst =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.q_dir =
    Q_DIR_Reverse;
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.t_cycloc =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.d_cycloc =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.m_loc =
    M_LOC_Now;
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx91 = 0; idx91 < 32; idx91++) {
    outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx91].d_loc =
      kcg_lit_int64(0);
    outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx91].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx92 = 0; idx92 < 16; idx92++) {
    outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.diagnostic[idx92].valid =
      kcg_true;
    outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.diagnostic[idx92].count =
      kcg_lit_int64(0);
    outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.diagnostic[idx92].timestamp =
      kcg_lit_int64(0);
    outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.diagnostic[idx92].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.diagnostic[idx92].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.diagnostic[idx92].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx95 = 0; idx95 < 8; idx95++) {
    outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx95].m_IsValid =
      kcg_true;
    outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx95].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx95].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx95].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx95].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx95].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx95].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx95].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx95].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx95].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx95].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx95].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx95].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx95].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx95].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx95].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx93 = 0; idx93 < 30; idx93++) {
      outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx95].m_Entry.Messages.PacketHeaders[idx93].nid_packet =
        kcg_lit_int64(0);
      outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx95].m_Entry.Messages.PacketHeaders[idx93].q_dir =
        Q_DIR_Reverse;
      outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx95].m_Entry.Messages.PacketHeaders[idx93].valid =
        kcg_true;
      outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx95].m_Entry.Messages.PacketHeaders[idx93].startAddress =
        kcg_lit_int64(0);
      outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx95].m_Entry.Messages.PacketHeaders[idx93].endAddress =
        kcg_lit_int64(0);
    }
    for (idx94 = 0; idx94 < 500; idx94++) {
      outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx95].m_Entry.Messages.PacketData[idx94] =
        kcg_lit_int64(0);
    }
  }
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.clockk.m_Value =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int64(0);
  for (idx96 = 0; idx96 < 30; idx96++) {
    outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx96].nid_packet =
      kcg_lit_int64(0);
    outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx96].q_dir =
      Q_DIR_Reverse;
    outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx96].valid =
      kcg_true;
    outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx96].startAddress =
      kcg_lit_int64(0);
    outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx96].endAddress =
      kcg_lit_int64(0);
  }
  for (idx97 = 0; idx97 < 500; idx97++) {
    outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketData[idx97] =
      kcg_lit_int64(0);
  }
  outC->_L9_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
    kcg_lit_int64(0);
  outC->_L8_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
    kcg_lit_int64(0);
  outC->_L7_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
    kcg_lit_int64(0);
  outC->_L6_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
    kcg_lit_int64(0);
  outC->_L5_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
    kcg_lit_int64(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
    kcg_true;
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.radioDevice =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.nid_message =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.t_train =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_ack =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.t_train_reference =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.nid_em =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.q_scale =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.d_sr =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.d_ref =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.q_dir =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_version =
    kcg_lit_int64(0);
  for (idx100 = 0; idx100 < 8; idx100++) {
    outC->_L15_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx100].m_IsValid =
      kcg_true;
    outC->_L15_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx100].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L15_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx100].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L15_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx100].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L15_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx100].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L15_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx100].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L15_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx100].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L15_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx100].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L15_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx100].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L15_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx100].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L15_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx100].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L15_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx100].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L15_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx100].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L15_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx100].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L15_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx100].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L15_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx100].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx98 = 0; idx98 < 30; idx98++) {
      outC->_L15_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx100].m_Entry.Messages.PacketHeaders[idx98].nid_packet =
        kcg_lit_int64(0);
      outC->_L15_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx100].m_Entry.Messages.PacketHeaders[idx98].q_dir =
        Q_DIR_Reverse;
      outC->_L15_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx100].m_Entry.Messages.PacketHeaders[idx98].valid =
        kcg_true;
      outC->_L15_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx100].m_Entry.Messages.PacketHeaders[idx98].startAddress =
        kcg_lit_int64(0);
      outC->_L15_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx100].m_Entry.Messages.PacketHeaders[idx98].endAddress =
        kcg_lit_int64(0);
    }
    for (idx99 = 0; idx99 < 500; idx99++) {
      outC->_L15_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx100].m_Entry.Messages.PacketData[idx99] =
        kcg_lit_int64(0);
    }
  }
  outC->_L14_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L14_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx102 = 0; idx102 < 1; idx102++) {
    outC->_L14_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.m_OnboardPhoneNumbers[idx102].valid =
      kcg_true;
    for (idx101 = 0; idx101 < 15; idx101++) {
      outC->_L14_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.m_OnboardPhoneNumbers[idx102].telephoneNumber[idx101] =
        kcg_lit_int64(0);
    }
  }
  outC->_L14_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L14_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L14_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L14_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L14_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L14_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L14_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L14_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L14_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx103 = 0; idx103 < 4; idx103++) {
    outC->_L14_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.m_TractionIdentities[idx103].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L14_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.m_TractionIdentities[idx103].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx104 = 0; idx104 < 5; idx104++) {
    outC->_L14_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.m_NationalSystemIdentities[idx104] =
      kcg_lit_int64(0);
  }
  outC->_L14_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L14_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L14_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L14_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L14_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L14_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L14_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L14_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L14_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L14_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L14_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L14_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L14_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L14_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L14_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L14_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx106 = 0; idx106 < 1; idx106++) {
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx106].valid =
      kcg_true;
    for (idx105 = 0; idx105 < 15; idx105++) {
      outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx106].telephoneNumber[idx105] =
        kcg_lit_int64(0);
    }
  }
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx107 = 0; idx107 < 4; idx107++) {
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_TractionIdentities[idx107].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_TractionIdentities[idx107].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx108 = 0; idx108 < 5; idx108++) {
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_NationalSystemIdentities[idx108] =
      kcg_lit_int64(0);
  }
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_NationalParams.nid_c =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_NationalParams.v_nvshunt =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_NationalParams.v_nvstff =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_NationalParams.v_nvonsight =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_NationalParams.v_nvunfit =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_NationalParams.v_nvrel =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_NationalParams.t_nvcontact =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_MAReqParams.q_dir =
    Q_DIR_Reverse;
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_MAReqParams.t_mar =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_MAReqParams.t_timeoutrqst =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_MAReqParams.t_cycrqst =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.q_dir =
    Q_DIR_Reverse;
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.t_cycloc =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.d_cycloc =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.m_loc =
    M_LOC_Now;
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx109 = 0; idx109 < 32; idx109++) {
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx109].d_loc =
      kcg_lit_int64(0);
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx109].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx110 = 0; idx110 < 16; idx110++) {
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.diagnostic[idx110].valid =
      kcg_true;
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.diagnostic[idx110].count =
      kcg_lit_int64(0);
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.diagnostic[idx110].timestamp =
      kcg_lit_int64(0);
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.diagnostic[idx110].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.diagnostic[idx110].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.diagnostic[idx110].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx113 = 0; idx113 < 8; idx113++) {
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx113].m_IsValid =
      kcg_true;
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx113].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx113].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx113].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx113].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx113].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx113].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx113].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx113].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx113].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx113].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx113].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx113].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx113].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx113].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx113].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx111 = 0; idx111 < 30; idx111++) {
      outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx113].m_Entry.Messages.PacketHeaders[idx111].nid_packet =
        kcg_lit_int64(0);
      outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx113].m_Entry.Messages.PacketHeaders[idx111].q_dir =
        Q_DIR_Reverse;
      outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx113].m_Entry.Messages.PacketHeaders[idx111].valid =
        kcg_true;
      outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx113].m_Entry.Messages.PacketHeaders[idx111].startAddress =
        kcg_lit_int64(0);
      outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx113].m_Entry.Messages.PacketHeaders[idx111].endAddress =
        kcg_lit_int64(0);
    }
    for (idx112 = 0; idx112 < 500; idx112++) {
      outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx113].m_Entry.Messages.PacketData[idx112] =
        kcg_lit_int64(0);
    }
  }
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.clockk.m_Value =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int64(0);
  for (idx114 = 0; idx114 < 30; idx114++) {
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx114].nid_packet =
      kcg_lit_int64(0);
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx114].q_dir =
      Q_DIR_Reverse;
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx114].valid =
      kcg_true;
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx114].startAddress =
      kcg_lit_int64(0);
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx114].endAddress =
      kcg_lit_int64(0);
  }
  for (idx115 = 0; idx115 < 500; idx115++) {
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketData[idx115] =
      kcg_lit_int64(0);
  }
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx117 = 0; idx117 < 1; idx117++) {
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx117].valid =
      kcg_true;
    for (idx116 = 0; idx116 < 15; idx116++) {
      outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx117].telephoneNumber[idx116] =
        kcg_lit_int64(0);
    }
  }
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx118 = 0; idx118 < 4; idx118++) {
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_TractionIdentities[idx118].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_TractionIdentities[idx118].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx119 = 0; idx119 < 5; idx119++) {
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_NationalSystemIdentities[idx119] =
      kcg_lit_int64(0);
  }
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_NationalParams.nid_c =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_NationalParams.v_nvshunt =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_NationalParams.v_nvstff =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_NationalParams.v_nvonsight =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_NationalParams.v_nvunfit =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_NationalParams.v_nvrel =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_NationalParams.t_nvcontact =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_MAReqParams.q_dir =
    Q_DIR_Reverse;
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_MAReqParams.t_mar =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_MAReqParams.t_timeoutrqst =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_MAReqParams.t_cycrqst =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.q_dir =
    Q_DIR_Reverse;
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.t_cycloc =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.d_cycloc =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.m_loc =
    M_LOC_Now;
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx120 = 0; idx120 < 32; idx120++) {
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx120].d_loc =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx120].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx121 = 0; idx121 < 16; idx121++) {
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.diagnostic[idx121].valid =
      kcg_true;
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.diagnostic[idx121].count =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.diagnostic[idx121].timestamp =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.diagnostic[idx121].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.diagnostic[idx121].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.diagnostic[idx121].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx124 = 0; idx124 < 8; idx124++) {
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx124].m_IsValid =
      kcg_true;
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx124].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx124].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx124].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx124].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx124].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx124].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx124].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx124].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx124].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx124].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx124].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx124].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx124].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx124].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx124].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx122 = 0; idx122 < 30; idx122++) {
      outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx124].m_Entry.Messages.PacketHeaders[idx122].nid_packet =
        kcg_lit_int64(0);
      outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx124].m_Entry.Messages.PacketHeaders[idx122].q_dir =
        Q_DIR_Reverse;
      outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx124].m_Entry.Messages.PacketHeaders[idx122].valid =
        kcg_true;
      outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx124].m_Entry.Messages.PacketHeaders[idx122].startAddress =
        kcg_lit_int64(0);
      outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx124].m_Entry.Messages.PacketHeaders[idx122].endAddress =
        kcg_lit_int64(0);
    }
    for (idx123 = 0; idx123 < 500; idx123++) {
      outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx124].m_Entry.Messages.PacketData[idx123] =
        kcg_lit_int64(0);
    }
  }
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.clockk.m_Value =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int64(0);
  for (idx125 = 0; idx125 < 30; idx125++) {
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx125].nid_packet =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx125].q_dir =
      Q_DIR_Reverse;
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx125].valid =
      kcg_true;
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx125].startAddress =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx125].endAddress =
      kcg_lit_int64(0);
  }
  for (idx126 = 0; idx126 < 500; idx126++) {
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketData[idx126] =
      kcg_lit_int64(0);
  }
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Header.t_train =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Header.m_version =
    kcg_lit_int64(0);
  for (idx127 = 0; idx127 < 30; idx127++) {
    outC->_L16_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Messages.PacketHeaders[idx127].nid_packet =
      kcg_lit_int64(0);
    outC->_L16_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Messages.PacketHeaders[idx127].q_dir =
      Q_DIR_Reverse;
    outC->_L16_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Messages.PacketHeaders[idx127].valid =
      kcg_true;
    outC->_L16_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Messages.PacketHeaders[idx127].startAddress =
      kcg_lit_int64(0);
    outC->_L16_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Messages.PacketHeaders[idx127].endAddress =
      kcg_lit_int64(0);
  }
  for (idx128 = 0; idx128 < 500; idx128++) {
    outC->_L16_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Messages.PacketData[idx128] =
      kcg_lit_int64(0);
  }
  for (idx131 = 0; idx131 < 8; idx131++) {
    outC->_L20_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx131].m_IsValid =
      kcg_true;
    outC->_L20_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx131].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L20_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx131].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L20_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx131].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L20_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx131].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L20_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx131].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L20_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx131].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L20_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx131].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L20_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx131].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L20_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx131].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L20_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx131].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L20_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx131].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L20_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx131].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L20_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx131].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L20_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx131].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L20_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx131].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx129 = 0; idx129 < 30; idx129++) {
      outC->_L20_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx131].m_Entry.Messages.PacketHeaders[idx129].nid_packet =
        kcg_lit_int64(0);
      outC->_L20_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx131].m_Entry.Messages.PacketHeaders[idx129].q_dir =
        Q_DIR_Reverse;
      outC->_L20_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx131].m_Entry.Messages.PacketHeaders[idx129].valid =
        kcg_true;
      outC->_L20_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx131].m_Entry.Messages.PacketHeaders[idx129].startAddress =
        kcg_lit_int64(0);
      outC->_L20_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx131].m_Entry.Messages.PacketHeaders[idx129].endAddress =
        kcg_lit_int64(0);
    }
    for (idx130 = 0; idx130 < 500; idx130++) {
      outC->_L20_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx131].m_Entry.Messages.PacketData[idx130] =
        kcg_lit_int64(0);
    }
  }
  outC->_L22_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_IsValid =
    kcg_true;
  outC->_L22_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entry.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L22_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entry.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L22_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entry.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L22_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entry.Header.t_train =
    kcg_lit_int64(0);
  outC->_L22_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entry.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L22_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entry.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L22_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entry.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L22_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entry.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L22_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entry.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L22_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entry.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L22_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entry.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L22_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entry.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L22_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entry.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L22_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entry.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L22_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entry.Header.m_version =
    kcg_lit_int64(0);
  for (idx132 = 0; idx132 < 30; idx132++) {
    outC->_L22_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entry.Messages.PacketHeaders[idx132].nid_packet =
      kcg_lit_int64(0);
    outC->_L22_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entry.Messages.PacketHeaders[idx132].q_dir =
      Q_DIR_Reverse;
    outC->_L22_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entry.Messages.PacketHeaders[idx132].valid =
      kcg_true;
    outC->_L22_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entry.Messages.PacketHeaders[idx132].startAddress =
      kcg_lit_int64(0);
    outC->_L22_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entry.Messages.PacketHeaders[idx132].endAddress =
      kcg_lit_int64(0);
  }
  for (idx133 = 0; idx133 < 500; idx133++) {
    outC->_L22_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entry.Messages.PacketData[idx133] =
      kcg_lit_int64(0);
  }
  outC->_L26_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L26_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L26_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L26_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Header.t_train =
    kcg_lit_int64(0);
  outC->_L26_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L26_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L26_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L26_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L26_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L26_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L26_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L26_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L26_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L26_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L26_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Header.m_version =
    kcg_lit_int64(0);
  for (idx134 = 0; idx134 < 30; idx134++) {
    outC->_L26_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Messages.PacketHeaders[idx134].nid_packet =
      kcg_lit_int64(0);
    outC->_L26_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Messages.PacketHeaders[idx134].q_dir =
      Q_DIR_Reverse;
    outC->_L26_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Messages.PacketHeaders[idx134].valid =
      kcg_true;
    outC->_L26_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Messages.PacketHeaders[idx134].startAddress =
      kcg_lit_int64(0);
    outC->_L26_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Messages.PacketHeaders[idx134].endAddress =
      kcg_lit_int64(0);
  }
  for (idx135 = 0; idx135 < 500; idx135++) {
    outC->_L26_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.Messages.PacketData[idx135] =
      kcg_lit_int64(0);
  }
  outC->_L35_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
    kcg_true;
  outC->_L34_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.radioDevice =
    kcg_lit_int64(0);
  outC->_L34_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L34_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.nid_message =
    kcg_lit_int64(0);
  outC->_L34_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.t_train =
    kcg_lit_int64(0);
  outC->_L34_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_ack =
    kcg_lit_int64(0);
  outC->_L34_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L34_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.t_train_reference =
    kcg_lit_int64(0);
  outC->_L34_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.nid_em =
    kcg_lit_int64(0);
  outC->_L34_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.q_scale =
    kcg_lit_int64(0);
  outC->_L34_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.d_sr =
    kcg_lit_int64(0);
  outC->_L34_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L34_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.d_ref =
    kcg_lit_int64(0);
  outC->_L34_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.q_dir =
    kcg_lit_int64(0);
  outC->_L34_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L34_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_version =
    kcg_lit_int64(0);
  outC->_L33_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
    M_ACK_No_acknowledgement_required;
  outC->_L32_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
    M_ACK_No_acknowledgement_required;
  outC->_L31_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
    kcg_true;
  outC->_L30_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
    kcg_true;
  outC->_L29_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM =
    kcg_true;
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx137 = 0; idx137 < 1; idx137++) {
    outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx137].valid =
      kcg_true;
    for (idx136 = 0; idx136 < 15; idx136++) {
      outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx137].telephoneNumber[idx136] =
        kcg_lit_int64(0);
    }
  }
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx138 = 0; idx138 < 4; idx138++) {
    outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_TractionIdentities[idx138].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_TractionIdentities[idx138].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx139 = 0; idx139 < 5; idx139++) {
    outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_NationalSystemIdentities[idx139] =
      kcg_lit_int64(0);
  }
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_NationalParams.nid_c =
    kcg_lit_int64(0);
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_NationalParams.v_nvshunt =
    kcg_lit_int64(0);
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_NationalParams.v_nvstff =
    kcg_lit_int64(0);
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_NationalParams.v_nvonsight =
    kcg_lit_int64(0);
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_NationalParams.v_nvunfit =
    kcg_lit_int64(0);
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_NationalParams.v_nvrel =
    kcg_lit_int64(0);
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_NationalParams.t_nvcontact =
    kcg_lit_int64(0);
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_MAReqParams.q_dir =
    Q_DIR_Reverse;
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_MAReqParams.t_mar =
    kcg_lit_int64(0);
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_MAReqParams.t_timeoutrqst =
    kcg_lit_int64(0);
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_MAReqParams.t_cycrqst =
    kcg_lit_int64(0);
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.q_dir =
    Q_DIR_Reverse;
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.t_cycloc =
    kcg_lit_int64(0);
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.d_cycloc =
    kcg_lit_int64(0);
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.m_loc =
    M_LOC_Now;
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx140 = 0; idx140 < 32; idx140++) {
    outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx140].d_loc =
      kcg_lit_int64(0);
    outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx140].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx141 = 0; idx141 < 16; idx141++) {
    outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.diagnostic[idx141].valid =
      kcg_true;
    outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.diagnostic[idx141].count =
      kcg_lit_int64(0);
    outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.diagnostic[idx141].timestamp =
      kcg_lit_int64(0);
    outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.diagnostic[idx141].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.diagnostic[idx141].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.diagnostic[idx141].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx144 = 0; idx144 < 8; idx144++) {
    outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx144].m_IsValid =
      kcg_true;
    outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx144].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx144].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx144].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx144].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx144].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx144].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx144].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx144].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx144].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx144].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx144].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx144].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx144].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx144].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx144].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx142 = 0; idx142 < 30; idx142++) {
      outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx144].m_Entry.Messages.PacketHeaders[idx142].nid_packet =
        kcg_lit_int64(0);
      outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx144].m_Entry.Messages.PacketHeaders[idx142].q_dir =
        Q_DIR_Reverse;
      outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx144].m_Entry.Messages.PacketHeaders[idx142].valid =
        kcg_true;
      outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx144].m_Entry.Messages.PacketHeaders[idx142].startAddress =
        kcg_lit_int64(0);
      outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx144].m_Entry.Messages.PacketHeaders[idx142].endAddress =
        kcg_lit_int64(0);
    }
    for (idx143 = 0; idx143 < 500; idx143++) {
      outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx144].m_Entry.Messages.PacketData[idx143] =
        kcg_lit_int64(0);
    }
  }
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.clockk.m_Value =
    kcg_lit_int64(0);
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int64(0);
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int64(0);
  for (idx145 = 0; idx145 < 30; idx145++) {
    outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx145].nid_packet =
      kcg_lit_int64(0);
    outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx145].q_dir =
      Q_DIR_Reverse;
    outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx145].valid =
      kcg_true;
    outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx145].startAddress =
      kcg_lit_int64(0);
    outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx145].endAddress =
      kcg_lit_int64(0);
  }
  for (idx146 = 0; idx146 < 500; idx146++) {
    outC->_L38_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketData[idx146] =
      kcg_lit_int64(0);
  }
  outC->_L37_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L37_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx148 = 0; idx148 < 1; idx148++) {
    outC->_L37_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.m_OnboardPhoneNumbers[idx148].valid =
      kcg_true;
    for (idx147 = 0; idx147 < 15; idx147++) {
      outC->_L37_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.m_OnboardPhoneNumbers[idx148].telephoneNumber[idx147] =
        kcg_lit_int64(0);
    }
  }
  outC->_L37_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L37_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L37_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L37_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L37_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L37_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L37_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L37_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L37_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx149 = 0; idx149 < 4; idx149++) {
    outC->_L37_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.m_TractionIdentities[idx149].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L37_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.m_TractionIdentities[idx149].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx150 = 0; idx150 < 5; idx150++) {
    outC->_L37_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.m_NationalSystemIdentities[idx150] =
      kcg_lit_int64(0);
  }
  outC->_L37_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L37_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L37_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L37_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L37_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L37_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L37_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L37_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L37_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L37_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L37_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L37_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L37_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L37_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L37_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L37_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx152 = 0; idx152 < 1; idx152++) {
    outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx152].valid =
      kcg_true;
    for (idx151 = 0; idx151 < 15; idx151++) {
      outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx152].telephoneNumber[idx151] =
        kcg_lit_int64(0);
    }
  }
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx153 = 0; idx153 < 4; idx153++) {
    outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_TractionIdentities[idx153].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_TractionIdentities[idx153].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx154 = 0; idx154 < 5; idx154++) {
    outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_NationalSystemIdentities[idx154] =
      kcg_lit_int64(0);
  }
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_NationalParams.nid_c =
    kcg_lit_int64(0);
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_NationalParams.v_nvshunt =
    kcg_lit_int64(0);
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_NationalParams.v_nvstff =
    kcg_lit_int64(0);
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_NationalParams.v_nvonsight =
    kcg_lit_int64(0);
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_NationalParams.v_nvunfit =
    kcg_lit_int64(0);
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_NationalParams.v_nvrel =
    kcg_lit_int64(0);
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_NationalParams.t_nvcontact =
    kcg_lit_int64(0);
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_MAReqParams.q_dir =
    Q_DIR_Reverse;
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_MAReqParams.t_mar =
    kcg_lit_int64(0);
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_MAReqParams.t_timeoutrqst =
    kcg_lit_int64(0);
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_MAReqParams.t_cycrqst =
    kcg_lit_int64(0);
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.q_dir =
    Q_DIR_Reverse;
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.t_cycloc =
    kcg_lit_int64(0);
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.d_cycloc =
    kcg_lit_int64(0);
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.m_loc =
    M_LOC_Now;
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx155 = 0; idx155 < 32; idx155++) {
    outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx155].d_loc =
      kcg_lit_int64(0);
    outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx155].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx156 = 0; idx156 < 16; idx156++) {
    outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.diagnostic[idx156].valid =
      kcg_true;
    outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.diagnostic[idx156].count =
      kcg_lit_int64(0);
    outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.diagnostic[idx156].timestamp =
      kcg_lit_int64(0);
    outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.diagnostic[idx156].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.diagnostic[idx156].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.diagnostic[idx156].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx159 = 0; idx159 < 8; idx159++) {
    outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx159].m_IsValid =
      kcg_true;
    outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx159].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx159].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx159].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx159].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx159].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx159].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx159].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx159].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx159].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx159].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx159].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx159].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx159].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx159].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx159].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx157 = 0; idx157 < 30; idx157++) {
      outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx159].m_Entry.Messages.PacketHeaders[idx157].nid_packet =
        kcg_lit_int64(0);
      outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx159].m_Entry.Messages.PacketHeaders[idx157].q_dir =
        Q_DIR_Reverse;
      outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx159].m_Entry.Messages.PacketHeaders[idx157].valid =
        kcg_true;
      outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx159].m_Entry.Messages.PacketHeaders[idx157].startAddress =
        kcg_lit_int64(0);
      outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx159].m_Entry.Messages.PacketHeaders[idx157].endAddress =
        kcg_lit_int64(0);
    }
    for (idx158 = 0; idx158 < 500; idx158++) {
      outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx159].m_Entry.Messages.PacketData[idx158] =
        kcg_lit_int64(0);
    }
  }
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.clockk.m_Value =
    kcg_lit_int64(0);
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int64(0);
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int64(0);
  for (idx160 = 0; idx160 < 30; idx160++) {
    outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx160].nid_packet =
      kcg_lit_int64(0);
    outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx160].q_dir =
      Q_DIR_Reverse;
    outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx160].valid =
      kcg_true;
    outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx160].startAddress =
      kcg_lit_int64(0);
    outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx160].endAddress =
      kcg_lit_int64(0);
  }
  for (idx161 = 0; idx161 < 500; idx161++) {
    outC->_L41_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketData[idx161] =
      kcg_lit_int64(0);
  }
  for (idx164 = 0; idx164 < 8; idx164++) {
    outC->_L40_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx164].m_IsValid =
      kcg_true;
    outC->_L40_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx164].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L40_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx164].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L40_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx164].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L40_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx164].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L40_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx164].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L40_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx164].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L40_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx164].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L40_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx164].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L40_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx164].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L40_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx164].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L40_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx164].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L40_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx164].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L40_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx164].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L40_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx164].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L40_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx164].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx162 = 0; idx162 < 30; idx162++) {
      outC->_L40_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx164].m_Entry.Messages.PacketHeaders[idx162].nid_packet =
        kcg_lit_int64(0);
      outC->_L40_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx164].m_Entry.Messages.PacketHeaders[idx162].q_dir =
        Q_DIR_Reverse;
      outC->_L40_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx164].m_Entry.Messages.PacketHeaders[idx162].valid =
        kcg_true;
      outC->_L40_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx164].m_Entry.Messages.PacketHeaders[idx162].startAddress =
        kcg_lit_int64(0);
      outC->_L40_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx164].m_Entry.Messages.PacketHeaders[idx162].endAddress =
        kcg_lit_int64(0);
    }
    for (idx163 = 0; idx163 < 500; idx163++) {
      outC->_L40_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx164].m_Entry.Messages.PacketData[idx163] =
        kcg_lit_int64(0);
    }
  }
  outC->_L5_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L5_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx166 = 0; idx166 < 1; idx166++) {
    outC->_L5_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.m_OnboardPhoneNumbers[idx166].valid =
      kcg_true;
    for (idx165 = 0; idx165 < 15; idx165++) {
      outC->_L5_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.m_OnboardPhoneNumbers[idx166].telephoneNumber[idx165] =
        kcg_lit_int64(0);
    }
  }
  outC->_L5_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L5_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L5_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L5_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L5_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L5_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L5_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L5_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L5_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx167 = 0; idx167 < 4; idx167++) {
    outC->_L5_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.m_TractionIdentities[idx167].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L5_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.m_TractionIdentities[idx167].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx168 = 0; idx168 < 5; idx168++) {
    outC->_L5_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.m_NationalSystemIdentities[idx168] =
      kcg_lit_int64(0);
  }
  outC->_L5_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L5_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L5_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L5_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L5_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L5_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L5_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L5_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L5_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L5_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L5_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L5_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L5_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L5_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L5_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L5_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx170 = 0; idx170 < 1; idx170++) {
    outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx170].valid =
      kcg_true;
    for (idx169 = 0; idx169 < 15; idx169++) {
      outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx170].telephoneNumber[idx169] =
        kcg_lit_int64(0);
    }
  }
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx171 = 0; idx171 < 4; idx171++) {
    outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_TractionIdentities[idx171].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_TractionIdentities[idx171].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx172 = 0; idx172 < 5; idx172++) {
    outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.m_NationalSystemIdentities[idx172] =
      kcg_lit_int64(0);
  }
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.session.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_NationalParams.nid_c =
    kcg_lit_int64(0);
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_NationalParams.v_nvshunt =
    kcg_lit_int64(0);
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_NationalParams.v_nvstff =
    kcg_lit_int64(0);
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_NationalParams.v_nvonsight =
    kcg_lit_int64(0);
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_NationalParams.v_nvunfit =
    kcg_lit_int64(0);
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_NationalParams.v_nvrel =
    kcg_lit_int64(0);
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_NationalParams.t_nvcontact =
    kcg_lit_int64(0);
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_MAReqParams.q_dir =
    Q_DIR_Reverse;
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_MAReqParams.t_mar =
    kcg_lit_int64(0);
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_MAReqParams.t_timeoutrqst =
    kcg_lit_int64(0);
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_MAReqParams.t_cycrqst =
    kcg_lit_int64(0);
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.q_dir =
    Q_DIR_Reverse;
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.t_cycloc =
    kcg_lit_int64(0);
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.d_cycloc =
    kcg_lit_int64(0);
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.m_loc =
    M_LOC_Now;
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx173 = 0; idx173 < 32; idx173++) {
    outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx173].d_loc =
      kcg_lit_int64(0);
    outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx173].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx174 = 0; idx174 < 16; idx174++) {
    outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.diagnostic[idx174].valid =
      kcg_true;
    outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.diagnostic[idx174].count =
      kcg_lit_int64(0);
    outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.diagnostic[idx174].timestamp =
      kcg_lit_int64(0);
    outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.diagnostic[idx174].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.diagnostic[idx174].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.diagnostic[idx174].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx177 = 0; idx177 < 8; idx177++) {
    outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx177].m_IsValid =
      kcg_true;
    outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx177].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx177].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx177].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx177].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx177].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx177].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx177].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx177].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx177].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx177].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx177].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx177].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx177].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx177].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx177].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx175 = 0; idx175 < 30; idx175++) {
      outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx177].m_Entry.Messages.PacketHeaders[idx175].nid_packet =
        kcg_lit_int64(0);
      outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx177].m_Entry.Messages.PacketHeaders[idx175].q_dir =
        Q_DIR_Reverse;
      outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx177].m_Entry.Messages.PacketHeaders[idx175].valid =
        kcg_true;
      outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx177].m_Entry.Messages.PacketHeaders[idx175].startAddress =
        kcg_lit_int64(0);
      outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx177].m_Entry.Messages.PacketHeaders[idx175].endAddress =
        kcg_lit_int64(0);
    }
    for (idx176 = 0; idx176 < 500; idx176++) {
      outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.messageQueue.m_Entries[idx177].m_Entry.Messages.PacketData[idx176] =
        kcg_lit_int64(0);
    }
  }
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.clockk.m_Value =
    kcg_lit_int64(0);
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int64(0);
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int64(0);
  for (idx178 = 0; idx178 < 30; idx178++) {
    outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx178].nid_packet =
      kcg_lit_int64(0);
    outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx178].q_dir =
      Q_DIR_Reverse;
    outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx178].valid =
      kcg_true;
    outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx178].startAddress =
      kcg_lit_int64(0);
    outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx178].endAddress =
      kcg_lit_int64(0);
  }
  for (idx179 = 0; idx179 < 500; idx179++) {
    outC->_L4_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketData[idx179] =
      kcg_lit_int64(0);
  }
  for (idx182 = 0; idx182 < 8; idx182++) {
    outC->_L3_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx182].m_IsValid =
      kcg_true;
    outC->_L3_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx182].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L3_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx182].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L3_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx182].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L3_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx182].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L3_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx182].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L3_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx182].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L3_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx182].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L3_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx182].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L3_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx182].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L3_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx182].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L3_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx182].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L3_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx182].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L3_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx182].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L3_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx182].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L3_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx182].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx180 = 0; idx180 < 30; idx180++) {
      outC->_L3_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx182].m_Entry.Messages.PacketHeaders[idx180].nid_packet =
        kcg_lit_int64(0);
      outC->_L3_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx182].m_Entry.Messages.PacketHeaders[idx180].q_dir =
        Q_DIR_Reverse;
      outC->_L3_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx182].m_Entry.Messages.PacketHeaders[idx180].valid =
        kcg_true;
      outC->_L3_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx182].m_Entry.Messages.PacketHeaders[idx180].startAddress =
        kcg_lit_int64(0);
      outC->_L3_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx182].m_Entry.Messages.PacketHeaders[idx180].endAddress =
        kcg_lit_int64(0);
    }
    for (idx181 = 0; idx181 < 500; idx181++) {
      outC->_L3_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM.m_Entries[idx182].m_Entry.Messages.PacketData[idx181] =
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
  for (idx183 = 0; idx183 < 30; idx183++) {
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketHeaders[idx183].nid_packet =
      kcg_lit_int64(0);
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketHeaders[idx183].q_dir =
      Q_DIR_Reverse;
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketHeaders[idx183].valid =
      kcg_true;
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketHeaders[idx183].startAddress =
      kcg_lit_int64(0);
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketHeaders[idx183].endAddress =
      kcg_lit_int64(0);
  }
  for (idx184 = 0; idx184 < 500; idx184++) {
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketData[idx184] =
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
  for (idx186 = 0; idx186 < 1; idx186++) {
    outC->outRadioTrainTrackMessage.packets.p3.aNID_RADIO[idx186].valid = kcg_true;
    for (idx185 = 0; idx185 < 15; idx185++) {
      outC->outRadioTrainTrackMessage.packets.p3.aNID_RADIO[idx186].telephoneNumber[idx185] =
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
  for (idx187 = 0; idx187 < 4; idx187++) {
    outC->outRadioTrainTrackMessage.packets.p11.tractionIdentity[idx187].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->outRadioTrainTrackMessage.packets.p11.tractionIdentity[idx187].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->outRadioTrainTrackMessage.packets.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx188 = 0; idx188 < 5; idx188++) {
    outC->outRadioTrainTrackMessage.packets.p11.nid_ntc[idx188] = kcg_lit_int64(0);
  }
  outC->outDataBus.session.m_TrainData.nid_engine = kcg_lit_int64(0);
  outC->outDataBus.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx190 = 0; idx190 < 1; idx190++) {
    outC->outDataBus.session.m_TrainData.m_OnboardPhoneNumbers[idx190].valid =
      kcg_true;
    for (idx189 = 0; idx189 < 15; idx189++) {
      outC->outDataBus.session.m_TrainData.m_OnboardPhoneNumbers[idx190].telephoneNumber[idx189] =
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
  for (idx191 = 0; idx191 < 4; idx191++) {
    outC->outDataBus.session.m_TrainData.m_TractionIdentities[idx191].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->outDataBus.session.m_TrainData.m_TractionIdentities[idx191].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx192 = 0; idx192 < 5; idx192++) {
    outC->outDataBus.session.m_TrainData.m_NationalSystemIdentities[idx192] =
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
  for (idx193 = 0; idx193 < 32; idx193++) {
    outC->outDataBus.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx193].d_loc =
      kcg_lit_int64(0);
    outC->outDataBus.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx193].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx194 = 0; idx194 < 16; idx194++) {
    outC->outDataBus.diagnostic[idx194].valid = kcg_true;
    outC->outDataBus.diagnostic[idx194].count = kcg_lit_int64(0);
    outC->outDataBus.diagnostic[idx194].timestamp = kcg_lit_int64(0);
    outC->outDataBus.diagnostic[idx194].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->outDataBus.diagnostic[idx194].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->outDataBus.diagnostic[idx194].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx197 = 0; idx197 < 8; idx197++) {
    outC->outDataBus.messageQueue.m_Entries[idx197].m_IsValid = kcg_true;
    outC->outDataBus.messageQueue.m_Entries[idx197].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx197].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx197].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx197].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx197].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx197].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx197].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx197].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx197].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx197].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx197].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx197].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx197].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx197].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx197].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx195 = 0; idx195 < 30; idx195++) {
      outC->outDataBus.messageQueue.m_Entries[idx197].m_Entry.Messages.PacketHeaders[idx195].nid_packet =
        kcg_lit_int64(0);
      outC->outDataBus.messageQueue.m_Entries[idx197].m_Entry.Messages.PacketHeaders[idx195].q_dir =
        Q_DIR_Reverse;
      outC->outDataBus.messageQueue.m_Entries[idx197].m_Entry.Messages.PacketHeaders[idx195].valid =
        kcg_true;
      outC->outDataBus.messageQueue.m_Entries[idx197].m_Entry.Messages.PacketHeaders[idx195].startAddress =
        kcg_lit_int64(0);
      outC->outDataBus.messageQueue.m_Entries[idx197].m_Entry.Messages.PacketHeaders[idx195].endAddress =
        kcg_lit_int64(0);
    }
    for (idx196 = 0; idx196 < 500; idx196++) {
      outC->outDataBus.messageQueue.m_Entries[idx197].m_Entry.Messages.PacketData[idx196] =
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
  for (idx198 = 0; idx198 < 30; idx198++) {
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[idx198].nid_packet =
      kcg_lit_int64(0);
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[idx198].q_dir =
      Q_DIR_Reverse;
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[idx198].valid =
      kcg_true;
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[idx198].startAddress =
      kcg_lit_int64(0);
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[idx198].endAddress =
      kcg_lit_int64(0);
  }
  for (idx199 = 0; idx199 < 500; idx199++) {
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketData[idx199] =
      kcg_lit_int64(0);
  }
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:SEND_REVOCATION_OF_ES_MESSAGE:_L33=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_M_ACK#2)/ */
  _105_RadioTrackTrainHeade_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Get_M_ACK_2);
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:SEND_REVOCATION_OF_ES_MESSAGE:_L34=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#10)/ */
  RadioTrackTrainMessage__G_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainMessage__GetHeader_10);
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:AWAIT_ACKNOWLEDGEMENT:_L6=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#3)/ */
  RadioTrackTrainHeader__Ge_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_3_Context_RadioTrackTrainHeader__Get_NID_MESSAGE_3);
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:AWAIT_ACKNOWLEDGEMENT:_L8=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_T_TRAIN#2)/ */
  _55_RadioTrackTrainHeader__Ge_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_4_Context_RadioTrackTrainHeader__Get_T_TRAIN_2);
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:AWAIT_ACKNOWLEDGEMENT:_L3=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#4)/ */
  RadioTrackTrainMessage__G_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_5_Context_RadioTrackTrainMessage__GetHeader_4);
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L16=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_T_TRAIN_Ref#2)/ */
  _56_RadioTrainTrackHeader__Ge_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackHeader__Get_T_TRAIN_Ref_2);
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L14=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#5)/ */
  RadioTrainTrackMessage__G_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackMessage__GetHeader_5);
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L20=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_T_TRAIN#3)/ */
  _55_RadioTrackTrainHeader__Ge_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_6_Context_RadioTrackTrainHeader__Get_T_TRAIN_3);
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L22=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#4)/ */
  RadioTrackTrainHeader__Ge_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_7_Context_RadioTrackTrainHeader__Get_NID_MESSAGE_4);
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L23=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#5)/ */
  RadioTrackTrainMessage__G_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_8_Context_RadioTrackTrainMessage__GetHeader_5);
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:SEND_REVOCATION_OF_ES_MESSAGE:_L20=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut#1)/ */
  _50_RadioTrackTrainMessageQue_init_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueue__TryPut_1);
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:SEND_REVOCATION_OF_ES_MESSAGE:_L22=(RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__Create#1)/ */
  _51_RadioTrackTrainMessageQue_init_RBC_Collections_Pkg(
    &outC->_9_Context_RadioTrackTrainMessageQueueEntry__Create_1);
  /* _L60=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#1)/ */
  RadioTrackTrainHeader__Ge_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_10_Context_RadioTrackTrainHeader__Get_NID_MESSAGE_1);
  /* _L61=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#1)/ */
  RadioTrackTrainMessage__G_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_11_Context_RadioTrackTrainMessage__GetHeader_1);
  /* _L67=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_MESSAGE#1)/ */
  _100_RadioTrainTrackHeade_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_12_Context_RadioTrainTrackHeader__Get_NID_MESSAGE_1);
  /* _L68=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#1)/ */
  RadioTrainTrackMessage__G_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_13_Context_RadioTrainTrackMessage__GetHeader_1);
  outC->_1_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_act = kcg_false;
  outC->_2_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_nxt = kcg_false;
  outC->REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_nxt =
    SSM_st_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  outC->ackRequired = kcg_false;
  outC->revocationMessageWasSentTimestamp = T_TRAIN_MIN;
  outC->validAck = kcg_false;
  outC->invalidAck = kcg_false;
}
#endif /* KCG_USER_DEFINED_INIT */


void RBC__ProcessRevocationOfE_reset_RBC_Model_Pkg(
  outC_RBC__ProcessRevocationOfE_RBC_Model_Pkg *outC)
{
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:SEND_REVOCATION_OF_ES_MESSAGE:_L33=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_M_ACK#2)/ */
  _105_RadioTrackTrainHeade_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Get_M_ACK_2);
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:SEND_REVOCATION_OF_ES_MESSAGE:_L34=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#10)/ */
  RadioTrackTrainMessage__G_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainMessage__GetHeader_10);
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:AWAIT_ACKNOWLEDGEMENT:_L6=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#3)/ */
  RadioTrackTrainHeader__Ge_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_3_Context_RadioTrackTrainHeader__Get_NID_MESSAGE_3);
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:AWAIT_ACKNOWLEDGEMENT:_L8=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_T_TRAIN#2)/ */
  _55_RadioTrackTrainHeader__Ge_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_4_Context_RadioTrackTrainHeader__Get_T_TRAIN_2);
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:AWAIT_ACKNOWLEDGEMENT:_L3=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#4)/ */
  RadioTrackTrainMessage__G_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_5_Context_RadioTrackTrainMessage__GetHeader_4);
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L16=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_T_TRAIN_Ref#2)/ */
  _56_RadioTrainTrackHeader__Ge_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackHeader__Get_T_TRAIN_Ref_2);
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L14=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#5)/ */
  RadioTrainTrackMessage__G_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackMessage__GetHeader_5);
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L20=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_T_TRAIN#3)/ */
  _55_RadioTrackTrainHeader__Ge_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_6_Context_RadioTrackTrainHeader__Get_T_TRAIN_3);
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L22=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#4)/ */
  RadioTrackTrainHeader__Ge_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_7_Context_RadioTrackTrainHeader__Get_NID_MESSAGE_4);
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L23=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#5)/ */
  RadioTrackTrainMessage__G_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_8_Context_RadioTrackTrainMessage__GetHeader_5);
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:SEND_REVOCATION_OF_ES_MESSAGE:_L20=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut#1)/ */
  _50_RadioTrackTrainMessageQue_reset_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueue__TryPut_1);
  /* REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM:SEND_REVOCATION_OF_ES_MESSAGE:_L22=(RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__Create#1)/ */
  _51_RadioTrackTrainMessageQue_reset_RBC_Collections_Pkg(
    &outC->_9_Context_RadioTrackTrainMessageQueueEntry__Create_1);
  /* _L60=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#1)/ */
  RadioTrackTrainHeader__Ge_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_10_Context_RadioTrackTrainHeader__Get_NID_MESSAGE_1);
  /* _L61=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#1)/ */
  RadioTrackTrainMessage__G_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_11_Context_RadioTrackTrainMessage__GetHeader_1);
  /* _L67=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_MESSAGE#1)/ */
  _100_RadioTrainTrackHeade_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_12_Context_RadioTrainTrackHeader__Get_NID_MESSAGE_1);
  /* _L68=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#1)/ */
  RadioTrainTrackMessage__G_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_13_Context_RadioTrainTrackMessage__GetHeader_1);
  outC->_1_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_act = kcg_false;
  outC->_2_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_nxt = kcg_false;
  outC->REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_nxt =
    SSM_st_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  outC->ackRequired = kcg_false;
  outC->revocationMessageWasSentTimestamp = T_TRAIN_MIN;
  outC->validAck = kcg_false;
  outC->invalidAck = kcg_false;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RBC__ProcessRevocationOfE_RBC_Model_Pkg.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

