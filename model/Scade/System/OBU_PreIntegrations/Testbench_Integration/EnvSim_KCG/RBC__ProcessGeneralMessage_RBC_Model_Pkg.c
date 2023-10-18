/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC__ProcessGeneralMessage_RBC_Model_Pkg.h"

/* RBC_Model_Pkg::RBC__ProcessGeneralMessage/ */
void RBC__ProcessGeneralMessage_RBC_Model_Pkg(
  /* inDataBus/ */
  RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* inRadioTrainTrackMessage/ */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  /* inTriggeredRadioTrackTrainMessage/ */
  CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessage,
  outC_RBC__ProcessGeneralMessage_RBC_Model_Pkg *outC)
{
  /* ackRequired/ */
  static kcg_bool ackRequired_partial;
  /* radioTrackTrainMessageWasSentTimestamp/ */
  static T_TRAIN radioTrackTrainMessageWasSentTimestamp_partial;
  /* session/ */
  static SessionManagement_T session_partial;
  /* messageQueue/ */
  static RadioTrackTrainMessageQueue_T messageQueue_partial;
  /* GENERAL_MESSAGE_SM: */
  static SSM_ST_GENERAL_MESSAGE_SM GENERAL_MESSAGE_SM_state_nxt_partial;
  /* GENERAL_MESSAGE_SM: */
  static kcg_bool GENERAL_MESSAGE_SM_reset_nxt_partial;
  /* GENERAL_MESSAGE_SM: */
  static SSM_TR_GENERAL_MESSAGE_SM GENERAL_MESSAGE_SM_fired_partial;
  /* ackRequired/ */
  static kcg_bool _1_ackRequired_partial;
  /* radioTrackTrainMessageWasSentTimestamp/ */
  static T_TRAIN _2_radioTrackTrainMessageWasSentTimestamp_partial;
  /* session/ */
  static SessionManagement_T _3_session_partial;
  /* messageQueue/ */
  static RadioTrackTrainMessageQueue_T _4_messageQueue_partial;
  /* GENERAL_MESSAGE_SM: */
  static SSM_ST_GENERAL_MESSAGE_SM _5_GENERAL_MESSAGE_SM_state_nxt_partial;
  /* GENERAL_MESSAGE_SM: */
  static kcg_bool _6_GENERAL_MESSAGE_SM_reset_nxt_partial;
  /* GENERAL_MESSAGE_SM: */
  static SSM_TR_GENERAL_MESSAGE_SM _7_GENERAL_MESSAGE_SM_fired_partial;
  /* ackRequired/ */
  static kcg_bool _8_ackRequired_partial;
  /* radioTrackTrainMessageWasSentTimestamp/ */
  static T_TRAIN _9_radioTrackTrainMessageWasSentTimestamp_partial;
  /* session/ */
  static SessionManagement_T _10_session_partial;
  /* messageQueue/ */
  static RadioTrackTrainMessageQueue_T _11_messageQueue_partial;
  /* GENERAL_MESSAGE_SM: */
  static SSM_ST_GENERAL_MESSAGE_SM _12_GENERAL_MESSAGE_SM_state_nxt_partial;
  /* GENERAL_MESSAGE_SM: */
  static kcg_bool _13_GENERAL_MESSAGE_SM_reset_nxt_partial;
  /* GENERAL_MESSAGE_SM: */
  static SSM_TR_GENERAL_MESSAGE_SM _14_GENERAL_MESSAGE_SM_fired_partial;
  /* ackRequired/ */
  static kcg_bool _15_ackRequired_partial;
  /* radioTrackTrainMessageWasSentTimestamp/ */
  static T_TRAIN _16_radioTrackTrainMessageWasSentTimestamp_partial;
  /* session/ */
  static SessionManagement_T _17_session_partial;
  /* messageQueue/ */
  static RadioTrackTrainMessageQueue_T _18_messageQueue_partial;
  /* GENERAL_MESSAGE_SM: */
  static SSM_ST_GENERAL_MESSAGE_SM _19_GENERAL_MESSAGE_SM_state_nxt_partial;
  /* GENERAL_MESSAGE_SM: */
  static kcg_bool _20_GENERAL_MESSAGE_SM_reset_nxt_partial;
  /* GENERAL_MESSAGE_SM: */
  static SSM_TR_GENERAL_MESSAGE_SM _21_GENERAL_MESSAGE_SM_fired_partial;
  /* GENERAL_MESSAGE_SM: */
  static SSM_ST_GENERAL_MESSAGE_SM GENERAL_MESSAGE_SM_state_act_partial;
  /* GENERAL_MESSAGE_SM: */
  static kcg_bool GENERAL_MESSAGE_SM_reset_act_partial;
  /* GENERAL_MESSAGE_SM: */
  static SSM_TR_GENERAL_MESSAGE_SM GENERAL_MESSAGE_SM_fired_strong_partial;
  /* GENERAL_MESSAGE_SM:IDLE:<1> */
  static kcg_bool tr_1_guard_IDLE_GENERAL_MESSAGE_SM;
  /* GENERAL_MESSAGE_SM: */
  static SSM_ST_GENERAL_MESSAGE_SM _22_GENERAL_MESSAGE_SM_state_act_partial;
  /* GENERAL_MESSAGE_SM: */
  static kcg_bool _23_GENERAL_MESSAGE_SM_reset_act_partial;
  /* GENERAL_MESSAGE_SM: */
  static SSM_TR_GENERAL_MESSAGE_SM _24_GENERAL_MESSAGE_SM_fired_strong_partial;
  /* GENERAL_MESSAGE_SM:SEND_GENERAL_MESSAGE:<3> */
  static kcg_bool tr_3_guard_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM;
  /* GENERAL_MESSAGE_SM:SEND_GENERAL_MESSAGE:<2> */
  static kcg_bool tr_2_guard_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM;
  /* GENERAL_MESSAGE_SM:SEND_GENERAL_MESSAGE:<1> */
  static kcg_bool tr_1_guard_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM;
  /* GENERAL_MESSAGE_SM: */
  static SSM_ST_GENERAL_MESSAGE_SM _25_GENERAL_MESSAGE_SM_state_act_partial;
  /* GENERAL_MESSAGE_SM: */
  static kcg_bool _26_GENERAL_MESSAGE_SM_reset_act_partial;
  /* GENERAL_MESSAGE_SM: */
  static SSM_TR_GENERAL_MESSAGE_SM _27_GENERAL_MESSAGE_SM_fired_strong_partial;
  /* GENERAL_MESSAGE_SM:AWAIT_ACKNOWLEDGEMENT:<1> */
  static kcg_bool tr_1_guard_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM;
  /* GENERAL_MESSAGE_SM: */
  static SSM_ST_GENERAL_MESSAGE_SM _28_GENERAL_MESSAGE_SM_state_act_partial;
  /* GENERAL_MESSAGE_SM: */
  static kcg_bool _29_GENERAL_MESSAGE_SM_reset_act_partial;
  /* GENERAL_MESSAGE_SM: */
  static SSM_TR_GENERAL_MESSAGE_SM _30_GENERAL_MESSAGE_SM_fired_strong_partial;
  /* GENERAL_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:<4> */
  static kcg_bool tr_4_guard_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM;
  /* GENERAL_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:<3> */
  static kcg_bool tr_3_guard_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM;
  /* GENERAL_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:<2> */
  static kcg_bool tr_2_guard_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM;
  /* GENERAL_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:<1> */
  static kcg_bool tr_1_guard_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM;
  /* invalidAck/ */
  static kcg_bool last_invalidAck;
  /* validAck/ */
  static kcg_bool last_validAck;
  /* radioTrackTrainMessageWasSentTimestamp/ */
  static T_TRAIN last_radioTrackTrainMessageWasSentTimestamp;
  /* ackRequired/ */
  static kcg_bool last_ackRequired;
  /* GENERAL_MESSAGE_SM: */
  static kcg_bool GENERAL_MESSAGE_SM_reset_sel;
  /* GENERAL_MESSAGE_SM: */
  static kcg_bool GENERAL_MESSAGE_SM_reset_prv;

  last_invalidAck = outC->invalidAck;
  last_validAck = outC->validAck;
  last_radioTrackTrainMessageWasSentTimestamp =
    outC->radioTrackTrainMessageWasSentTimestamp;
  last_ackRequired = outC->ackRequired;
  outC->GENERAL_MESSAGE_SM_state_sel = outC->GENERAL_MESSAGE_SM_state_nxt;
  switch (outC->GENERAL_MESSAGE_SM_state_sel) {
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM :
      tr_4_guard_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM = last_invalidAck;
      break;
    default :
      /* this branch is empty */
      break;
  }
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->_L66,
    inRadioTrainTrackMessage);
  /* _L68=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#6)/ */
  RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L66,
    &outC->Context_RadioTrainTrackMessage__GetHeader_6);
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
    &outC->_L68,
    &outC->Context_RadioTrainTrackMessage__GetHeader_6.outRadioTrainTrackHeader);
  /* _L67=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_MESSAGE#2)/ */
  RadioTrainTrackHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L68,
    &outC->Context_RadioTrainTrackHeader__Get_NID_MESSAGE_2);
  outC->_L67 =
    outC->Context_RadioTrainTrackHeader__Get_NID_MESSAGE_2.out_NID_MESSAGE;
  outC->radioTrainTrackMessageId = outC->_L67;
  switch (outC->GENERAL_MESSAGE_SM_state_sel) {
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM :
      tr_3_guard_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM =
        last_invalidAck & (outC->radioTrainTrackMessageId == kcg_lit_int64(146));
      tr_2_guard_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM = last_validAck;
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
  /* _L61=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#7)/ */
  RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_L59,
    &outC->Context_RadioTrackTrainMessage__GetHeader_7);
  kcg_copy_Radio_TrackTrain_Header_T_TM(
    &outC->_L61,
    &outC->Context_RadioTrackTrainMessage__GetHeader_7.outRadioTrackTrainHeader);
  /* _L60=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#5)/ */
  RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_L61,
    &outC->Context_RadioTrackTrainHeader__Get_NID_MESSAGE_5);
  outC->_L60 =
    outC->Context_RadioTrackTrainHeader__Get_NID_MESSAGE_5.out_NID_MESSAGE;
  outC->radioTrackTrainMessageId = outC->_L60;
  /* GENERAL_MESSAGE_SM: */
  switch (outC->GENERAL_MESSAGE_SM_state_sel) {
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM :
      tr_1_guard_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM =
        last_validAck & (outC->radioTrackTrainMessageId == kcg_lit_int64(24));
      if (tr_1_guard_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM) {
        _28_GENERAL_MESSAGE_SM_state_act_partial =
          SSM_st_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM;
      }
      else if (tr_2_guard_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM) {
        _28_GENERAL_MESSAGE_SM_state_act_partial = SSM_st_IDLE_GENERAL_MESSAGE_SM;
      }
      else if (tr_3_guard_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM) {
        _28_GENERAL_MESSAGE_SM_state_act_partial =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM;
      }
      else if (tr_4_guard_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM) {
        _28_GENERAL_MESSAGE_SM_state_act_partial =
          SSM_st_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM;
      }
      else {
        _28_GENERAL_MESSAGE_SM_state_act_partial =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM;
      }
      outC->GENERAL_MESSAGE_SM_state_act = _28_GENERAL_MESSAGE_SM_state_act_partial;
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM :
      tr_1_guard_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM =
        outC->radioTrainTrackMessageId == kcg_lit_int64(146);
      if (tr_1_guard_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM) {
        _25_GENERAL_MESSAGE_SM_state_act_partial =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM;
      }
      else {
        _25_GENERAL_MESSAGE_SM_state_act_partial =
          SSM_st_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM;
      }
      outC->GENERAL_MESSAGE_SM_state_act = _25_GENERAL_MESSAGE_SM_state_act_partial;
      break;
    case SSM_st_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM :
      tr_3_guard_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM = !last_ackRequired;
      tr_2_guard_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM = last_ackRequired &
        (outC->radioTrainTrackMessageId != kcg_lit_int64(146));
      tr_1_guard_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM = last_ackRequired &
        (outC->radioTrainTrackMessageId == kcg_lit_int64(146));
      if (tr_1_guard_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM) {
        _22_GENERAL_MESSAGE_SM_state_act_partial =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM;
      }
      else if (tr_2_guard_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM) {
        _22_GENERAL_MESSAGE_SM_state_act_partial =
          SSM_st_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM;
      }
      else if (tr_3_guard_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM) {
        _22_GENERAL_MESSAGE_SM_state_act_partial = SSM_st_IDLE_GENERAL_MESSAGE_SM;
      }
      else {
        _22_GENERAL_MESSAGE_SM_state_act_partial =
          SSM_st_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM;
      }
      outC->GENERAL_MESSAGE_SM_state_act = _22_GENERAL_MESSAGE_SM_state_act_partial;
      break;
    case SSM_st_IDLE_GENERAL_MESSAGE_SM :
      tr_1_guard_IDLE_GENERAL_MESSAGE_SM = outC->radioTrackTrainMessageId ==
        kcg_lit_int64(24);
      if (tr_1_guard_IDLE_GENERAL_MESSAGE_SM) {
        GENERAL_MESSAGE_SM_state_act_partial =
          SSM_st_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM;
      }
      else {
        GENERAL_MESSAGE_SM_state_act_partial = SSM_st_IDLE_GENERAL_MESSAGE_SM;
      }
      outC->GENERAL_MESSAGE_SM_state_act = GENERAL_MESSAGE_SM_state_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* GENERAL_MESSAGE_SM: */
  switch (outC->GENERAL_MESSAGE_SM_state_act) {
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM :
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM,
        inDataBus);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM,
        &outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_18_messageQueue_partial,
        &outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->messageQueue,
        &_18_messageQueue_partial);
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM :
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM,
        inDataBus);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->_L14_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM,
        &outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_11_messageQueue_partial,
        &outC->_L14_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->messageQueue,
        &_11_messageQueue_partial);
      break;
    case SSM_st_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM :
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM,
        inDataBus);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->_L46_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM,
        &outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.messageQueue);
      kcg_copy_CompressedRadioMessage_TM(
        &outC->_L26_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM,
        &outC->radioTrackTrainMessage);
      /* GENERAL_MESSAGE_SM:SEND_GENERAL_MESSAGE:_L22=(RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__Create#1)/ */
      RadioTrackTrainMessageQueueEntry__Create_RBC_Collections_Pkg(
        &outC->_L26_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM,
        &outC->Context_RadioTrackTrainMessageQueueEntry__Create_1);
      kcg_copy_RadioTrackTrainMessageQueueEntry_T(
        &outC->_L22_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM,
        &outC->Context_RadioTrackTrainMessageQueueEntry__Create_1.outRadioTrackTrainMessageQueueEntry);
      /* GENERAL_MESSAGE_SM:SEND_GENERAL_MESSAGE:_L20=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut#1)/ */
      RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg(
        &outC->_L46_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM,
        &outC->_L22_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM,
        &outC->Context_RadioTrackTrainMessageQueue__TryPut_1);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->_L20_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM,
        &outC->Context_RadioTrackTrainMessageQueue__TryPut_1.outRadioTrackTrainMessageQueue);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_4_messageQueue_partial,
        &outC->_L20_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->messageQueue,
        &_4_messageQueue_partial);
      break;
    case SSM_st_IDLE_GENERAL_MESSAGE_SM :
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &outC->_L4_IDLE_GENERAL_MESSAGE_SM,
        inDataBus);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->_L5_IDLE_GENERAL_MESSAGE_SM,
        &outC->_L4_IDLE_GENERAL_MESSAGE_SM.messageQueue);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &messageQueue_partial,
        &outC->_L5_IDLE_GENERAL_MESSAGE_SM);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->messageQueue,
        &messageQueue_partial);
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  kcg_copy_RadioTrackTrainMessageQueue_T(&outC->_L81, &outC->messageQueue);
  /* GENERAL_MESSAGE_SM: */
  switch (outC->GENERAL_MESSAGE_SM_state_act) {
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM :
      kcg_copy_SessionManagement_T(
        &outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM,
        &outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session);
      kcg_copy_SessionManagement_T(
        &_17_session_partial,
        &outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM);
      kcg_copy_SessionManagement_T(&outC->session, &_17_session_partial);
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM :
      kcg_copy_SessionManagement_T(
        &outC->_L15_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM,
        &outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session);
      kcg_copy_SessionManagement_T(
        &_10_session_partial,
        &outC->_L15_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM);
      kcg_copy_SessionManagement_T(&outC->session, &_10_session_partial);
      break;
    case SSM_st_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM :
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM,
        inDataBus);
      kcg_copy_SessionManagement_T(
        &outC->_L38_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM,
        &outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session);
      kcg_copy_SessionManagement_T(
        &_3_session_partial,
        &outC->_L38_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM);
      kcg_copy_SessionManagement_T(&outC->session, &_3_session_partial);
      break;
    case SSM_st_IDLE_GENERAL_MESSAGE_SM :
      kcg_copy_SessionManagement_T(
        &outC->_L3_IDLE_GENERAL_MESSAGE_SM,
        &outC->_L4_IDLE_GENERAL_MESSAGE_SM.session);
      kcg_copy_SessionManagement_T(
        &session_partial,
        &outC->_L3_IDLE_GENERAL_MESSAGE_SM);
      kcg_copy_SessionManagement_T(&outC->session, &session_partial);
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  kcg_copy_SessionManagement_T(&outC->_L76, &outC->session);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->_L74, inDataBus);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->_L77, &outC->_L74);
  if (kcg_true) {
    kcg_copy_RadioTrackTrainMessageQueue_T(&outC->_L77.messageQueue, &outC->_L81);
  }
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->_L78, &outC->_L77);
  if (kcg_true) {
    kcg_copy_SessionManagement_T(&outC->_L78.session, &outC->_L76);
  }
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->outDataBus, &outC->_L78);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->_L80,
    inRadioTrainTrackMessage);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->_L79,
    inTriggeredRadioTrackTrainMessage);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->outRadioTrainTrackMessage,
    &outC->_L80);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->outTriggeredRadioTrackTrainMessage,
    &outC->_L79);
  switch (outC->GENERAL_MESSAGE_SM_state_act) {
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM :
      _15_ackRequired_partial = last_ackRequired;
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* GENERAL_MESSAGE_SM: */
  switch (outC->GENERAL_MESSAGE_SM_state_sel) {
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM :
      if (tr_1_guard_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM) {
        _30_GENERAL_MESSAGE_SM_fired_strong_partial =
          SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_SEND_GENERAL_MESSAGE_1_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAG;
      }
      else if (tr_2_guard_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM) {
        _30_GENERAL_MESSAGE_SM_fired_strong_partial =
          SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_IDLE_2_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM;
      }
      else if (tr_3_guard_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM) {
        _30_GENERAL_MESSAGE_SM_fired_strong_partial =
          SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_TRY_PROCESS_ACKNOWLEDGEMENT_3_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL;
      }
      else if (tr_4_guard_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM) {
        _30_GENERAL_MESSAGE_SM_fired_strong_partial =
          SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_AWAIT_ACKNOWLEDGEMENT_4_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSA;
      }
      else {
        _30_GENERAL_MESSAGE_SM_fired_strong_partial =
          SSM_TR_no_trans_GENERAL_MESSAGE_SM;
      }
      outC->GENERAL_MESSAGE_SM_fired_strong =
        _30_GENERAL_MESSAGE_SM_fired_strong_partial;
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM :
      if (tr_1_guard_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM) {
        _27_GENERAL_MESSAGE_SM_fired_strong_partial =
          SSM_TR_AWAIT_ACKNOWLEDGEMENT_TRY_PROCESS_ACKNOWLEDGEMENT_1_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM;
      }
      else {
        _27_GENERAL_MESSAGE_SM_fired_strong_partial =
          SSM_TR_no_trans_GENERAL_MESSAGE_SM;
      }
      outC->GENERAL_MESSAGE_SM_fired_strong =
        _27_GENERAL_MESSAGE_SM_fired_strong_partial;
      break;
    case SSM_st_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM :
      if (tr_1_guard_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM) {
        _24_GENERAL_MESSAGE_SM_fired_strong_partial =
          SSM_TR_SEND_GENERAL_MESSAGE_TRY_PROCESS_ACKNOWLEDGEMENT_1_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM;
      }
      else if (tr_2_guard_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM) {
        _24_GENERAL_MESSAGE_SM_fired_strong_partial =
          SSM_TR_SEND_GENERAL_MESSAGE_AWAIT_ACKNOWLEDGEMENT_2_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM;
      }
      else if (tr_3_guard_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM) {
        _24_GENERAL_MESSAGE_SM_fired_strong_partial =
          SSM_TR_SEND_GENERAL_MESSAGE_IDLE_3_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM;
      }
      else {
        _24_GENERAL_MESSAGE_SM_fired_strong_partial =
          SSM_TR_no_trans_GENERAL_MESSAGE_SM;
      }
      outC->GENERAL_MESSAGE_SM_fired_strong =
        _24_GENERAL_MESSAGE_SM_fired_strong_partial;
      break;
    case SSM_st_IDLE_GENERAL_MESSAGE_SM :
      if (tr_1_guard_IDLE_GENERAL_MESSAGE_SM) {
        GENERAL_MESSAGE_SM_fired_strong_partial =
          SSM_TR_IDLE_SEND_GENERAL_MESSAGE_1_IDLE_GENERAL_MESSAGE_SM;
      }
      else {
        GENERAL_MESSAGE_SM_fired_strong_partial = SSM_TR_no_trans_GENERAL_MESSAGE_SM;
      }
      outC->GENERAL_MESSAGE_SM_fired_strong = GENERAL_MESSAGE_SM_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* GENERAL_MESSAGE_SM: */
  switch (outC->GENERAL_MESSAGE_SM_state_act) {
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM :
      _21_GENERAL_MESSAGE_SM_fired_partial = outC->GENERAL_MESSAGE_SM_fired_strong;
      _20_GENERAL_MESSAGE_SM_reset_nxt_partial = kcg_false;
      _19_GENERAL_MESSAGE_SM_state_nxt_partial =
        SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM;
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM,
        inDataBus);
      kcg_copy_CompressedRadioMessage_TM(
        &outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM,
        &outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage);
      outC->_L24_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM =
        last_radioTrackTrainMessageWasSentTimestamp;
      /* GENERAL_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L23=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#5)/ */
      RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM,
        &outC->Context_RadioTrackTrainMessage__GetHeader_5);
      kcg_copy_Radio_TrackTrain_Header_T_TM(
        &outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM,
        &outC->Context_RadioTrackTrainMessage__GetHeader_5.outRadioTrackTrainHeader);
      /* GENERAL_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L22=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#4)/ */
      RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM,
        &outC->Context_RadioTrackTrainHeader__Get_NID_MESSAGE_4);
      outC->_L22_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM =
        outC->Context_RadioTrackTrainHeader__Get_NID_MESSAGE_4.out_NID_MESSAGE;
      /* GENERAL_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L20=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_T_TRAIN#3)/ */
      RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM,
        &outC->Context_RadioTrackTrainHeader__Get_T_TRAIN_3);
      outC->_L20_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM =
        outC->Context_RadioTrackTrainHeader__Get_T_TRAIN_3.out_T_TRAIN;
      outC->_L19_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM = kcg_lit_int64(24);
      outC->_L18_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM =
        outC->_L22_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM ==
        outC->_L19_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM;
      /* GENERAL_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L21= */
      if (outC->_L18_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM) {
        outC->_L21_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM =
          outC->_L20_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM;
      }
      else {
        outC->_L21_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM =
          outC->_L24_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM;
      }
      _16_radioTrackTrainMessageWasSentTimestamp_partial =
        outC->_L21_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM;
      kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
        &outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM,
        inRadioTrainTrackMessage);
      /* GENERAL_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L14=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#5)/ */
      RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
        &outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM,
        &outC->Context_RadioTrainTrackMessage__GetHeader_5);
      kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
        &outC->_L14_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM,
        &outC->Context_RadioTrainTrackMessage__GetHeader_5.outRadioTrainTrackHeader);
      /* GENERAL_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L16=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_T_TRAIN_Ref#2)/ */
      RadioTrainTrackHeader__Get_T_TRAIN_Ref_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
        &outC->_L14_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM,
        &outC->Context_RadioTrainTrackHeader__Get_T_TRAIN_Ref_2);
      outC->_L16_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM =
        outC->Context_RadioTrainTrackHeader__Get_T_TRAIN_Ref_2.out_T_TRAIN_Ref;
      outC->radioTrainTrackMessageTimestamp_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM =
        outC->_L16_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM;
      outC->IfBlock1_clock_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM =
        outC->radioTrainTrackMessageTimestamp_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM ==
        _16_radioTrackTrainMessageWasSentTimestamp_partial;
      outC->ackRequired = _15_ackRequired_partial;
      outC->radioTrackTrainMessageWasSentTimestamp =
        _16_radioTrackTrainMessageWasSentTimestamp_partial;
      outC->GENERAL_MESSAGE_SM_state_nxt = _19_GENERAL_MESSAGE_SM_state_nxt_partial;
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM :
      _8_ackRequired_partial = last_ackRequired;
      _14_GENERAL_MESSAGE_SM_fired_partial = outC->GENERAL_MESSAGE_SM_fired_strong;
      _13_GENERAL_MESSAGE_SM_reset_nxt_partial = kcg_false;
      _12_GENERAL_MESSAGE_SM_state_nxt_partial =
        SSM_st_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM;
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM,
        inDataBus);
      kcg_copy_CompressedRadioMessage_TM(
        &outC->_L16_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM,
        &outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage);
      outC->_L7_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM =
        last_radioTrackTrainMessageWasSentTimestamp;
      /* GENERAL_MESSAGE_SM:AWAIT_ACKNOWLEDGEMENT:_L3=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#4)/ */
      RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &outC->_L16_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM,
        &outC->Context_RadioTrackTrainMessage__GetHeader_4);
      kcg_copy_Radio_TrackTrain_Header_T_TM(
        &outC->_L3_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM,
        &outC->Context_RadioTrackTrainMessage__GetHeader_4.outRadioTrackTrainHeader);
      /* GENERAL_MESSAGE_SM:AWAIT_ACKNOWLEDGEMENT:_L8=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_T_TRAIN#2)/ */
      RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &outC->_L3_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM,
        &outC->Context_RadioTrackTrainHeader__Get_T_TRAIN_2);
      outC->_L8_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM =
        outC->Context_RadioTrackTrainHeader__Get_T_TRAIN_2.out_T_TRAIN;
      outC->_L5_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM = kcg_lit_int64(24);
      /* GENERAL_MESSAGE_SM:AWAIT_ACKNOWLEDGEMENT:_L6=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#3)/ */
      RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &outC->_L3_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM,
        &outC->Context_RadioTrackTrainHeader__Get_NID_MESSAGE_3);
      outC->_L6_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM =
        outC->Context_RadioTrackTrainHeader__Get_NID_MESSAGE_3.out_NID_MESSAGE;
      outC->_L4_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM =
        outC->_L6_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM ==
        outC->_L5_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM;
      /* GENERAL_MESSAGE_SM:AWAIT_ACKNOWLEDGEMENT:_L9= */
      if (outC->_L4_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM) {
        outC->_L9_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM =
          outC->_L8_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM;
      }
      else {
        outC->_L9_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM =
          outC->_L7_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM;
      }
      _9_radioTrackTrainMessageWasSentTimestamp_partial =
        outC->_L9_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM;
      outC->ackRequired = _8_ackRequired_partial;
      outC->radioTrackTrainMessageWasSentTimestamp =
        _9_radioTrackTrainMessageWasSentTimestamp_partial;
      outC->GENERAL_MESSAGE_SM_state_nxt = _12_GENERAL_MESSAGE_SM_state_nxt_partial;
      break;
    case SSM_st_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM :
      _2_radioTrackTrainMessageWasSentTimestamp_partial =
        last_radioTrackTrainMessageWasSentTimestamp;
      _7_GENERAL_MESSAGE_SM_fired_partial = outC->GENERAL_MESSAGE_SM_fired_strong;
      _6_GENERAL_MESSAGE_SM_reset_nxt_partial = kcg_false;
      _5_GENERAL_MESSAGE_SM_state_nxt_partial =
        SSM_st_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM;
      outC->_L32_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM =
        M_ACK_Acknowledgement_required;
      /* GENERAL_MESSAGE_SM:SEND_GENERAL_MESSAGE:_L34=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#10)/ */
      RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &outC->_L26_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM,
        &outC->Context_RadioTrackTrainMessage__GetHeader_10);
      kcg_copy_Radio_TrackTrain_Header_T_TM(
        &outC->_L34_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM,
        &outC->Context_RadioTrackTrainMessage__GetHeader_10.outRadioTrackTrainHeader);
      /* GENERAL_MESSAGE_SM:SEND_GENERAL_MESSAGE:_L33=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_M_ACK#2)/ */
      RadioTrackTrainHeader__Get_M_ACK_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &outC->_L34_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM,
        &outC->Context_RadioTrackTrainHeader__Get_M_ACK_2);
      outC->_L33_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM =
        outC->Context_RadioTrackTrainHeader__Get_M_ACK_2.out_M_ACK;
      outC->ack_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM =
        outC->_L33_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM;
      outC->_L27_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM =
        outC->ack_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM;
      outC->_L35_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM =
        outC->_L27_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM ==
        outC->_L32_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM;
      outC->_L31_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM = kcg_false;
      outC->_L29_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM = kcg_true;
      /* GENERAL_MESSAGE_SM:SEND_GENERAL_MESSAGE:_L30= */
      if (outC->_L35_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM) {
        outC->_L30_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM =
          outC->_L29_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM;
      }
      else {
        outC->_L30_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM =
          outC->_L31_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM;
      }
      _1_ackRequired_partial = outC->_L30_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM;
      outC->ackRequired = _1_ackRequired_partial;
      outC->radioTrackTrainMessageWasSentTimestamp =
        _2_radioTrackTrainMessageWasSentTimestamp_partial;
      outC->GENERAL_MESSAGE_SM_state_nxt = _5_GENERAL_MESSAGE_SM_state_nxt_partial;
      break;
    case SSM_st_IDLE_GENERAL_MESSAGE_SM :
      radioTrackTrainMessageWasSentTimestamp_partial =
        last_radioTrackTrainMessageWasSentTimestamp;
      ackRequired_partial = last_ackRequired;
      GENERAL_MESSAGE_SM_fired_partial = outC->GENERAL_MESSAGE_SM_fired_strong;
      GENERAL_MESSAGE_SM_reset_nxt_partial = kcg_false;
      GENERAL_MESSAGE_SM_state_nxt_partial = SSM_st_IDLE_GENERAL_MESSAGE_SM;
      outC->ackRequired = ackRequired_partial;
      outC->radioTrackTrainMessageWasSentTimestamp =
        radioTrackTrainMessageWasSentTimestamp_partial;
      outC->GENERAL_MESSAGE_SM_state_nxt = GENERAL_MESSAGE_SM_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  GENERAL_MESSAGE_SM_reset_sel = outC->GENERAL_MESSAGE_SM_reset_nxt;
  /* GENERAL_MESSAGE_SM: */
  switch (outC->GENERAL_MESSAGE_SM_state_act) {
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM :
      outC->GENERAL_MESSAGE_SM_reset_nxt = _20_GENERAL_MESSAGE_SM_reset_nxt_partial;
      outC->GENERAL_MESSAGE_SM_fired = _21_GENERAL_MESSAGE_SM_fired_partial;
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM :
      outC->GENERAL_MESSAGE_SM_reset_nxt = _13_GENERAL_MESSAGE_SM_reset_nxt_partial;
      outC->GENERAL_MESSAGE_SM_fired = _14_GENERAL_MESSAGE_SM_fired_partial;
      break;
    case SSM_st_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM :
      outC->GENERAL_MESSAGE_SM_reset_nxt = _6_GENERAL_MESSAGE_SM_reset_nxt_partial;
      outC->GENERAL_MESSAGE_SM_fired = _7_GENERAL_MESSAGE_SM_fired_partial;
      break;
    case SSM_st_IDLE_GENERAL_MESSAGE_SM :
      outC->GENERAL_MESSAGE_SM_reset_nxt = GENERAL_MESSAGE_SM_reset_nxt_partial;
      outC->GENERAL_MESSAGE_SM_fired = GENERAL_MESSAGE_SM_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->GENERAL_MESSAGE_SM_state_sel) {
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM :
      if (tr_1_guard_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM) {
        _29_GENERAL_MESSAGE_SM_reset_act_partial = kcg_true;
      }
      else if (tr_2_guard_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM) {
        _29_GENERAL_MESSAGE_SM_reset_act_partial = kcg_true;
      }
      else if (tr_3_guard_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM) {
        _29_GENERAL_MESSAGE_SM_reset_act_partial = kcg_true;
      }
      else {
        _29_GENERAL_MESSAGE_SM_reset_act_partial =
          tr_4_guard_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM;
      }
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM :
      _26_GENERAL_MESSAGE_SM_reset_act_partial =
        tr_1_guard_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM;
      break;
    case SSM_st_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM :
      if (tr_1_guard_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM) {
        _23_GENERAL_MESSAGE_SM_reset_act_partial = kcg_true;
      }
      else if (tr_2_guard_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM) {
        _23_GENERAL_MESSAGE_SM_reset_act_partial = kcg_true;
      }
      else {
        _23_GENERAL_MESSAGE_SM_reset_act_partial =
          tr_3_guard_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM;
      }
      break;
    case SSM_st_IDLE_GENERAL_MESSAGE_SM :
      GENERAL_MESSAGE_SM_reset_act_partial = tr_1_guard_IDLE_GENERAL_MESSAGE_SM;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  GENERAL_MESSAGE_SM_reset_prv = outC->GENERAL_MESSAGE_SM_reset_act;
  /* GENERAL_MESSAGE_SM: */
  switch (outC->GENERAL_MESSAGE_SM_state_sel) {
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM :
      outC->GENERAL_MESSAGE_SM_reset_act = _29_GENERAL_MESSAGE_SM_reset_act_partial;
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM :
      outC->GENERAL_MESSAGE_SM_reset_act = _26_GENERAL_MESSAGE_SM_reset_act_partial;
      break;
    case SSM_st_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM :
      outC->GENERAL_MESSAGE_SM_reset_act = _23_GENERAL_MESSAGE_SM_reset_act_partial;
      break;
    case SSM_st_IDLE_GENERAL_MESSAGE_SM :
      outC->GENERAL_MESSAGE_SM_reset_act = GENERAL_MESSAGE_SM_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* GENERAL_MESSAGE_SM: */
  switch (outC->GENERAL_MESSAGE_SM_state_act) {
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM :
      /* GENERAL_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1: */
      if (outC->IfBlock1_clock_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM) {
        outC->validAck = kcg_true;
        outC->invalidAck = kcg_false;
      }
      else {
        outC->validAck = kcg_false;
        outC->invalidAck = kcg_true;
      }
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM :
      outC->validAck = kcg_false;
      outC->invalidAck = kcg_false;
      break;
    case SSM_st_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM :
      outC->validAck = kcg_false;
      outC->invalidAck = kcg_false;
      break;
    case SSM_st_IDLE_GENERAL_MESSAGE_SM :
      outC->validAck = kcg_false;
      outC->invalidAck = kcg_false;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void RBC__ProcessGeneralMessage_init_RBC_Model_Pkg(
  outC_RBC__ProcessGeneralMessage_RBC_Model_Pkg *outC)
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
  static kcg_size idx16;
  static kcg_size idx17;
  static kcg_size idx18;
  static kcg_size idx19;
  static kcg_size idx20;
  static kcg_size idx21;
  static kcg_size idx22;
  static kcg_size idx23;
  static kcg_size idx24;
  static kcg_size idx25;
  static kcg_size idx26;
  static kcg_size idx27;
  static kcg_size idx28;
  static kcg_size idx29;
  static kcg_size idx30;
  static kcg_size idx31;
  static kcg_size idx32;
  static kcg_size idx33;
  static kcg_size idx34;
  static kcg_size idx35;
  static kcg_size idx36;
  static kcg_size idx37;
  static kcg_size idx38;
  static kcg_size idx39;
  static kcg_size idx40;
  static kcg_size idx41;
  static kcg_size idx42;
  static kcg_size idx43;
  static kcg_size idx44;
  static kcg_size idx45;
  static kcg_size idx46;
  static kcg_size idx47;
  static kcg_size idx48;
  static kcg_size idx49;
  static kcg_size idx50;
  static kcg_size idx51;
  static kcg_size idx52;
  static kcg_size idx53;
  static kcg_size idx54;
  static kcg_size idx55;
  static kcg_size idx56;
  static kcg_size idx57;
  static kcg_size idx58;
  static kcg_size idx59;
  static kcg_size idx60;
  static kcg_size idx61;
  static kcg_size idx62;
  static kcg_size idx63;
  static kcg_size idx64;
  static kcg_size idx65;
  static kcg_size idx66;
  static kcg_size idx67;
  static kcg_size idx68;
  static kcg_size idx69;
  static kcg_size idx70;
  static kcg_size idx71;
  static kcg_size idx72;
  static kcg_size idx73;
  static kcg_size idx74;
  static kcg_size idx75;
  static kcg_size idx76;
  static kcg_size idx77;
  static kcg_size idx78;
  static kcg_size idx79;
  static kcg_size idx80;
  static kcg_size idx81;
  static kcg_size idx82;
  static kcg_size idx83;
  static kcg_size idx84;
  static kcg_size idx85;
  static kcg_size idx86;
  static kcg_size idx87;
  static kcg_size idx88;
  static kcg_size idx89;
  static kcg_size idx90;
  static kcg_size idx91;
  static kcg_size idx92;
  static kcg_size idx93;
  static kcg_size idx94;
  static kcg_size idx95;
  static kcg_size idx96;
  static kcg_size idx97;
  static kcg_size idx98;
  static kcg_size idx99;
  static kcg_size idx100;
  static kcg_size idx101;
  static kcg_size idx102;
  static kcg_size idx103;
  static kcg_size idx104;
  static kcg_size idx105;
  static kcg_size idx106;
  static kcg_size idx107;
  static kcg_size idx108;
  static kcg_size idx109;
  static kcg_size idx110;
  static kcg_size idx111;
  static kcg_size idx112;
  static kcg_size idx113;
  static kcg_size idx114;
  static kcg_size idx115;
  static kcg_size idx116;
  static kcg_size idx117;
  static kcg_size idx118;
  static kcg_size idx119;
  static kcg_size idx120;
  static kcg_size idx121;
  static kcg_size idx122;
  static kcg_size idx123;
  static kcg_size idx124;
  static kcg_size idx125;
  static kcg_size idx126;
  static kcg_size idx127;
  static kcg_size idx128;
  static kcg_size idx129;
  static kcg_size idx130;
  static kcg_size idx131;
  static kcg_size idx132;
  static kcg_size idx133;
  static kcg_size idx134;
  static kcg_size idx135;
  static kcg_size idx136;
  static kcg_size idx137;
  static kcg_size idx138;
  static kcg_size idx139;
  static kcg_size idx140;
  static kcg_size idx141;
  static kcg_size idx142;
  static kcg_size idx143;
  static kcg_size idx144;
  static kcg_size idx145;
  static kcg_size idx146;
  static kcg_size idx147;
  static kcg_size idx148;
  static kcg_size idx149;
  static kcg_size idx150;
  static kcg_size idx151;
  static kcg_size idx152;
  static kcg_size idx153;
  static kcg_size idx154;
  static kcg_size idx155;
  static kcg_size idx156;
  static kcg_size idx157;
  static kcg_size idx158;
  static kcg_size idx159;
  static kcg_size idx160;
  static kcg_size idx161;
  static kcg_size idx162;
  static kcg_size idx163;
  static kcg_size idx164;
  static kcg_size idx165;
  static kcg_size idx166;
  static kcg_size idx167;
  static kcg_size idx168;
  static kcg_size idx169;
  static kcg_size idx170;
  static kcg_size idx171;
  static kcg_size idx172;
  static kcg_size idx173;
  static kcg_size idx174;
  static kcg_size idx175;
  static kcg_size idx176;
  static kcg_size idx177;
  static kcg_size idx178;
  static kcg_size idx179;
  static kcg_size idx180;
  static kcg_size idx181;
  static kcg_size idx182;
  static kcg_size idx183;
  static kcg_size idx184;
  static kcg_size idx185;
  static kcg_size idx186;
  static kcg_size idx187;
  static kcg_size idx188;
  static kcg_size idx189;
  static kcg_size idx190;
  static kcg_size idx191;
  static kcg_size idx192;
  static kcg_size idx193;
  static kcg_size idx194;
  static kcg_size idx195;
  static kcg_size idx196;
  static kcg_size idx197;
  static kcg_size idx198;
  static kcg_size idx199;

  outC->_L74.session.m_TrainData.nid_engine = kcg_lit_int64(0);
  outC->_L74.session.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 1; idx1++) {
    outC->_L74.session.m_TrainData.m_OnboardPhoneNumbers[idx1].valid = kcg_true;
    for (idx = 0; idx < 15; idx++) {
      outC->_L74.session.m_TrainData.m_OnboardPhoneNumbers[idx1].telephoneNumber[idx] =
        kcg_lit_int64(0);
    }
  }
  outC->_L74.session.m_TrainData.t_train_ref = kcg_lit_int64(0);
  outC->_L74.session.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L74.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L74.session.m_TrainData.l_train = kcg_lit_int64(0);
  outC->_L74.session.m_TrainData.v_maxtrain = kcg_lit_int64(0);
  outC->_L74.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L74.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L74.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L74.session.m_TrainData.n_axle = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 4; idx2++) {
    outC->_L74.session.m_TrainData.m_TractionIdentities[idx2].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L74.session.m_TrainData.m_TractionIdentities[idx2].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L74.session.m_TrainData.m_NationalSystemIdentities[idx3] =
      kcg_lit_int64(0);
  }
  outC->_L74.session.m_TrainData.nid_operational = kcg_lit_int64(0);
  outC->_L74.session.m_PosData.nid_lrbg = kcg_lit_int64(0);
  outC->_L74.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L74.session.m_PosData.d_lrbg = kcg_lit_int64(0);
  outC->_L74.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L74.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L74.session.m_PosData.l_doubtover = kcg_lit_int64(0);
  outC->_L74.session.m_PosData.l_doubtunder = kcg_lit_int64(0);
  outC->_L74.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L74.session.m_PosData.l_trainint = kcg_lit_int64(0);
  outC->_L74.session.m_PosData.v_train = kcg_lit_int64(0);
  outC->_L74.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L74.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L74.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L74.session.m_PosData.nid_ntc = kcg_lit_int64(0);
  outC->_L74.session.m_PosData.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L74.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L74.config.m_NationalParams.nid_c = kcg_lit_int64(0);
  outC->_L74.config.m_NationalParams.v_nvshunt = kcg_lit_int64(0);
  outC->_L74.config.m_NationalParams.v_nvstff = kcg_lit_int64(0);
  outC->_L74.config.m_NationalParams.v_nvonsight = kcg_lit_int64(0);
  outC->_L74.config.m_NationalParams.v_nvunfit = kcg_lit_int64(0);
  outC->_L74.config.m_NationalParams.v_nvrel = kcg_lit_int64(0);
  outC->_L74.config.m_NationalParams.t_nvcontact = kcg_lit_int64(0);
  outC->_L74.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L74.config.m_MAReqParams.t_mar = kcg_lit_int64(0);
  outC->_L74.config.m_MAReqParams.t_timeoutrqst = kcg_lit_int64(0);
  outC->_L74.config.m_MAReqParams.t_cycrqst = kcg_lit_int64(0);
  outC->_L74.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L74.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L74.config.m_PosRepParams.t_cycloc = kcg_lit_int64(0);
  outC->_L74.config.m_PosRepParams.d_cycloc = kcg_lit_int64(0);
  outC->_L74.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L74.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 32; idx4++) {
    outC->_L74.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx4].d_loc =
      kcg_lit_int64(0);
    outC->_L74.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx4].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx5 = 0; idx5 < 16; idx5++) {
    outC->_L74.diagnostic[idx5].valid = kcg_true;
    outC->_L74.diagnostic[idx5].count = kcg_lit_int64(0);
    outC->_L74.diagnostic[idx5].timestamp = kcg_lit_int64(0);
    outC->_L74.diagnostic[idx5].diagType = DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L74.diagnostic[idx5].diagSrc = DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L74.diagnostic[idx5].diagText = DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx8 = 0; idx8 < 8; idx8++) {
    outC->_L74.messageQueue.m_Entries[idx8].m_IsValid = kcg_true;
    outC->_L74.messageQueue.m_Entries[idx8].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L74.messageQueue.m_Entries[idx8].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L74.messageQueue.m_Entries[idx8].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L74.messageQueue.m_Entries[idx8].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L74.messageQueue.m_Entries[idx8].m_Entry.Header.m_ack = kcg_lit_int64(0);
    outC->_L74.messageQueue.m_Entries[idx8].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L74.messageQueue.m_Entries[idx8].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L74.messageQueue.m_Entries[idx8].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L74.messageQueue.m_Entries[idx8].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L74.messageQueue.m_Entries[idx8].m_Entry.Header.d_sr = kcg_lit_int64(0);
    outC->_L74.messageQueue.m_Entries[idx8].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L74.messageQueue.m_Entries[idx8].m_Entry.Header.d_ref = kcg_lit_int64(0);
    outC->_L74.messageQueue.m_Entries[idx8].m_Entry.Header.q_dir = kcg_lit_int64(0);
    outC->_L74.messageQueue.m_Entries[idx8].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L74.messageQueue.m_Entries[idx8].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx6 = 0; idx6 < 30; idx6++) {
      outC->_L74.messageQueue.m_Entries[idx8].m_Entry.Messages.PacketHeaders[idx6].nid_packet =
        kcg_lit_int64(0);
      outC->_L74.messageQueue.m_Entries[idx8].m_Entry.Messages.PacketHeaders[idx6].q_dir =
        Q_DIR_Reverse;
      outC->_L74.messageQueue.m_Entries[idx8].m_Entry.Messages.PacketHeaders[idx6].valid =
        kcg_true;
      outC->_L74.messageQueue.m_Entries[idx8].m_Entry.Messages.PacketHeaders[idx6].startAddress =
        kcg_lit_int64(0);
      outC->_L74.messageQueue.m_Entries[idx8].m_Entry.Messages.PacketHeaders[idx6].endAddress =
        kcg_lit_int64(0);
    }
    for (idx7 = 0; idx7 < 500; idx7++) {
      outC->_L74.messageQueue.m_Entries[idx8].m_Entry.Messages.PacketData[idx7] =
        kcg_lit_int64(0);
    }
  }
  outC->_L74.clockk.m_Value = kcg_lit_int64(0);
  outC->_L74.lastSentTrackTrainMessage.Header.radioDevice = kcg_lit_int64(0);
  outC->_L74.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L74.lastSentTrackTrainMessage.Header.nid_message = kcg_lit_int64(0);
  outC->_L74.lastSentTrackTrainMessage.Header.t_train = kcg_lit_int64(0);
  outC->_L74.lastSentTrackTrainMessage.Header.m_ack = kcg_lit_int64(0);
  outC->_L74.lastSentTrackTrainMessage.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L74.lastSentTrackTrainMessage.Header.t_train_reference = kcg_lit_int64(
      0);
  outC->_L74.lastSentTrackTrainMessage.Header.nid_em = kcg_lit_int64(0);
  outC->_L74.lastSentTrackTrainMessage.Header.q_scale = kcg_lit_int64(0);
  outC->_L74.lastSentTrackTrainMessage.Header.d_sr = kcg_lit_int64(0);
  outC->_L74.lastSentTrackTrainMessage.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L74.lastSentTrackTrainMessage.Header.d_ref = kcg_lit_int64(0);
  outC->_L74.lastSentTrackTrainMessage.Header.q_dir = kcg_lit_int64(0);
  outC->_L74.lastSentTrackTrainMessage.Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L74.lastSentTrackTrainMessage.Header.m_version = kcg_lit_int64(0);
  for (idx9 = 0; idx9 < 30; idx9++) {
    outC->_L74.lastSentTrackTrainMessage.Messages.PacketHeaders[idx9].nid_packet =
      kcg_lit_int64(0);
    outC->_L74.lastSentTrackTrainMessage.Messages.PacketHeaders[idx9].q_dir =
      Q_DIR_Reverse;
    outC->_L74.lastSentTrackTrainMessage.Messages.PacketHeaders[idx9].valid =
      kcg_true;
    outC->_L74.lastSentTrackTrainMessage.Messages.PacketHeaders[idx9].startAddress =
      kcg_lit_int64(0);
    outC->_L74.lastSentTrackTrainMessage.Messages.PacketHeaders[idx9].endAddress =
      kcg_lit_int64(0);
  }
  for (idx10 = 0; idx10 < 500; idx10++) {
    outC->_L74.lastSentTrackTrainMessage.Messages.PacketData[idx10] =
      kcg_lit_int64(0);
  }
  outC->_L76.m_TrainData.nid_engine = kcg_lit_int64(0);
  outC->_L76.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int64(0);
  for (idx12 = 0; idx12 < 1; idx12++) {
    outC->_L76.m_TrainData.m_OnboardPhoneNumbers[idx12].valid = kcg_true;
    for (idx11 = 0; idx11 < 15; idx11++) {
      outC->_L76.m_TrainData.m_OnboardPhoneNumbers[idx12].telephoneNumber[idx11] =
        kcg_lit_int64(0);
    }
  }
  outC->_L76.m_TrainData.t_train_ref = kcg_lit_int64(0);
  outC->_L76.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L76.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L76.m_TrainData.l_train = kcg_lit_int64(0);
  outC->_L76.m_TrainData.v_maxtrain = kcg_lit_int64(0);
  outC->_L76.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L76.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L76.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L76.m_TrainData.n_axle = kcg_lit_int64(0);
  for (idx13 = 0; idx13 < 4; idx13++) {
    outC->_L76.m_TrainData.m_TractionIdentities[idx13].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L76.m_TrainData.m_TractionIdentities[idx13].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx14 = 0; idx14 < 5; idx14++) {
    outC->_L76.m_TrainData.m_NationalSystemIdentities[idx14] = kcg_lit_int64(0);
  }
  outC->_L76.m_TrainData.nid_operational = kcg_lit_int64(0);
  outC->_L76.m_PosData.nid_lrbg = kcg_lit_int64(0);
  outC->_L76.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L76.m_PosData.d_lrbg = kcg_lit_int64(0);
  outC->_L76.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L76.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L76.m_PosData.l_doubtover = kcg_lit_int64(0);
  outC->_L76.m_PosData.l_doubtunder = kcg_lit_int64(0);
  outC->_L76.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L76.m_PosData.l_trainint = kcg_lit_int64(0);
  outC->_L76.m_PosData.v_train = kcg_lit_int64(0);
  outC->_L76.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L76.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L76.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L76.m_PosData.nid_ntc = kcg_lit_int64(0);
  outC->_L76.m_PosData.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L77.session.m_TrainData.nid_engine = kcg_lit_int64(0);
  outC->_L77.session.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int64(0);
  for (idx16 = 0; idx16 < 1; idx16++) {
    outC->_L77.session.m_TrainData.m_OnboardPhoneNumbers[idx16].valid = kcg_true;
    for (idx15 = 0; idx15 < 15; idx15++) {
      outC->_L77.session.m_TrainData.m_OnboardPhoneNumbers[idx16].telephoneNumber[idx15] =
        kcg_lit_int64(0);
    }
  }
  outC->_L77.session.m_TrainData.t_train_ref = kcg_lit_int64(0);
  outC->_L77.session.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L77.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L77.session.m_TrainData.l_train = kcg_lit_int64(0);
  outC->_L77.session.m_TrainData.v_maxtrain = kcg_lit_int64(0);
  outC->_L77.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L77.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L77.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L77.session.m_TrainData.n_axle = kcg_lit_int64(0);
  for (idx17 = 0; idx17 < 4; idx17++) {
    outC->_L77.session.m_TrainData.m_TractionIdentities[idx17].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L77.session.m_TrainData.m_TractionIdentities[idx17].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx18 = 0; idx18 < 5; idx18++) {
    outC->_L77.session.m_TrainData.m_NationalSystemIdentities[idx18] =
      kcg_lit_int64(0);
  }
  outC->_L77.session.m_TrainData.nid_operational = kcg_lit_int64(0);
  outC->_L77.session.m_PosData.nid_lrbg = kcg_lit_int64(0);
  outC->_L77.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L77.session.m_PosData.d_lrbg = kcg_lit_int64(0);
  outC->_L77.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L77.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L77.session.m_PosData.l_doubtover = kcg_lit_int64(0);
  outC->_L77.session.m_PosData.l_doubtunder = kcg_lit_int64(0);
  outC->_L77.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L77.session.m_PosData.l_trainint = kcg_lit_int64(0);
  outC->_L77.session.m_PosData.v_train = kcg_lit_int64(0);
  outC->_L77.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L77.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L77.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L77.session.m_PosData.nid_ntc = kcg_lit_int64(0);
  outC->_L77.session.m_PosData.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L77.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L77.config.m_NationalParams.nid_c = kcg_lit_int64(0);
  outC->_L77.config.m_NationalParams.v_nvshunt = kcg_lit_int64(0);
  outC->_L77.config.m_NationalParams.v_nvstff = kcg_lit_int64(0);
  outC->_L77.config.m_NationalParams.v_nvonsight = kcg_lit_int64(0);
  outC->_L77.config.m_NationalParams.v_nvunfit = kcg_lit_int64(0);
  outC->_L77.config.m_NationalParams.v_nvrel = kcg_lit_int64(0);
  outC->_L77.config.m_NationalParams.t_nvcontact = kcg_lit_int64(0);
  outC->_L77.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L77.config.m_MAReqParams.t_mar = kcg_lit_int64(0);
  outC->_L77.config.m_MAReqParams.t_timeoutrqst = kcg_lit_int64(0);
  outC->_L77.config.m_MAReqParams.t_cycrqst = kcg_lit_int64(0);
  outC->_L77.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L77.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L77.config.m_PosRepParams.t_cycloc = kcg_lit_int64(0);
  outC->_L77.config.m_PosRepParams.d_cycloc = kcg_lit_int64(0);
  outC->_L77.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L77.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx19 = 0; idx19 < 32; idx19++) {
    outC->_L77.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx19].d_loc =
      kcg_lit_int64(0);
    outC->_L77.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx19].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx20 = 0; idx20 < 16; idx20++) {
    outC->_L77.diagnostic[idx20].valid = kcg_true;
    outC->_L77.diagnostic[idx20].count = kcg_lit_int64(0);
    outC->_L77.diagnostic[idx20].timestamp = kcg_lit_int64(0);
    outC->_L77.diagnostic[idx20].diagType = DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L77.diagnostic[idx20].diagSrc = DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L77.diagnostic[idx20].diagText = DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx23 = 0; idx23 < 8; idx23++) {
    outC->_L77.messageQueue.m_Entries[idx23].m_IsValid = kcg_true;
    outC->_L77.messageQueue.m_Entries[idx23].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L77.messageQueue.m_Entries[idx23].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L77.messageQueue.m_Entries[idx23].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L77.messageQueue.m_Entries[idx23].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L77.messageQueue.m_Entries[idx23].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L77.messageQueue.m_Entries[idx23].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L77.messageQueue.m_Entries[idx23].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L77.messageQueue.m_Entries[idx23].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L77.messageQueue.m_Entries[idx23].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L77.messageQueue.m_Entries[idx23].m_Entry.Header.d_sr = kcg_lit_int64(0);
    outC->_L77.messageQueue.m_Entries[idx23].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L77.messageQueue.m_Entries[idx23].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L77.messageQueue.m_Entries[idx23].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L77.messageQueue.m_Entries[idx23].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L77.messageQueue.m_Entries[idx23].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx21 = 0; idx21 < 30; idx21++) {
      outC->_L77.messageQueue.m_Entries[idx23].m_Entry.Messages.PacketHeaders[idx21].nid_packet =
        kcg_lit_int64(0);
      outC->_L77.messageQueue.m_Entries[idx23].m_Entry.Messages.PacketHeaders[idx21].q_dir =
        Q_DIR_Reverse;
      outC->_L77.messageQueue.m_Entries[idx23].m_Entry.Messages.PacketHeaders[idx21].valid =
        kcg_true;
      outC->_L77.messageQueue.m_Entries[idx23].m_Entry.Messages.PacketHeaders[idx21].startAddress =
        kcg_lit_int64(0);
      outC->_L77.messageQueue.m_Entries[idx23].m_Entry.Messages.PacketHeaders[idx21].endAddress =
        kcg_lit_int64(0);
    }
    for (idx22 = 0; idx22 < 500; idx22++) {
      outC->_L77.messageQueue.m_Entries[idx23].m_Entry.Messages.PacketData[idx22] =
        kcg_lit_int64(0);
    }
  }
  outC->_L77.clockk.m_Value = kcg_lit_int64(0);
  outC->_L77.lastSentTrackTrainMessage.Header.radioDevice = kcg_lit_int64(0);
  outC->_L77.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L77.lastSentTrackTrainMessage.Header.nid_message = kcg_lit_int64(0);
  outC->_L77.lastSentTrackTrainMessage.Header.t_train = kcg_lit_int64(0);
  outC->_L77.lastSentTrackTrainMessage.Header.m_ack = kcg_lit_int64(0);
  outC->_L77.lastSentTrackTrainMessage.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L77.lastSentTrackTrainMessage.Header.t_train_reference = kcg_lit_int64(
      0);
  outC->_L77.lastSentTrackTrainMessage.Header.nid_em = kcg_lit_int64(0);
  outC->_L77.lastSentTrackTrainMessage.Header.q_scale = kcg_lit_int64(0);
  outC->_L77.lastSentTrackTrainMessage.Header.d_sr = kcg_lit_int64(0);
  outC->_L77.lastSentTrackTrainMessage.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L77.lastSentTrackTrainMessage.Header.d_ref = kcg_lit_int64(0);
  outC->_L77.lastSentTrackTrainMessage.Header.q_dir = kcg_lit_int64(0);
  outC->_L77.lastSentTrackTrainMessage.Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L77.lastSentTrackTrainMessage.Header.m_version = kcg_lit_int64(0);
  for (idx24 = 0; idx24 < 30; idx24++) {
    outC->_L77.lastSentTrackTrainMessage.Messages.PacketHeaders[idx24].nid_packet =
      kcg_lit_int64(0);
    outC->_L77.lastSentTrackTrainMessage.Messages.PacketHeaders[idx24].q_dir =
      Q_DIR_Reverse;
    outC->_L77.lastSentTrackTrainMessage.Messages.PacketHeaders[idx24].valid =
      kcg_true;
    outC->_L77.lastSentTrackTrainMessage.Messages.PacketHeaders[idx24].startAddress =
      kcg_lit_int64(0);
    outC->_L77.lastSentTrackTrainMessage.Messages.PacketHeaders[idx24].endAddress =
      kcg_lit_int64(0);
  }
  for (idx25 = 0; idx25 < 500; idx25++) {
    outC->_L77.lastSentTrackTrainMessage.Messages.PacketData[idx25] =
      kcg_lit_int64(0);
  }
  outC->_L78.session.m_TrainData.nid_engine = kcg_lit_int64(0);
  outC->_L78.session.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int64(0);
  for (idx27 = 0; idx27 < 1; idx27++) {
    outC->_L78.session.m_TrainData.m_OnboardPhoneNumbers[idx27].valid = kcg_true;
    for (idx26 = 0; idx26 < 15; idx26++) {
      outC->_L78.session.m_TrainData.m_OnboardPhoneNumbers[idx27].telephoneNumber[idx26] =
        kcg_lit_int64(0);
    }
  }
  outC->_L78.session.m_TrainData.t_train_ref = kcg_lit_int64(0);
  outC->_L78.session.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L78.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L78.session.m_TrainData.l_train = kcg_lit_int64(0);
  outC->_L78.session.m_TrainData.v_maxtrain = kcg_lit_int64(0);
  outC->_L78.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L78.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L78.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L78.session.m_TrainData.n_axle = kcg_lit_int64(0);
  for (idx28 = 0; idx28 < 4; idx28++) {
    outC->_L78.session.m_TrainData.m_TractionIdentities[idx28].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L78.session.m_TrainData.m_TractionIdentities[idx28].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx29 = 0; idx29 < 5; idx29++) {
    outC->_L78.session.m_TrainData.m_NationalSystemIdentities[idx29] =
      kcg_lit_int64(0);
  }
  outC->_L78.session.m_TrainData.nid_operational = kcg_lit_int64(0);
  outC->_L78.session.m_PosData.nid_lrbg = kcg_lit_int64(0);
  outC->_L78.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L78.session.m_PosData.d_lrbg = kcg_lit_int64(0);
  outC->_L78.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L78.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L78.session.m_PosData.l_doubtover = kcg_lit_int64(0);
  outC->_L78.session.m_PosData.l_doubtunder = kcg_lit_int64(0);
  outC->_L78.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L78.session.m_PosData.l_trainint = kcg_lit_int64(0);
  outC->_L78.session.m_PosData.v_train = kcg_lit_int64(0);
  outC->_L78.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L78.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L78.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L78.session.m_PosData.nid_ntc = kcg_lit_int64(0);
  outC->_L78.session.m_PosData.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L78.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L78.config.m_NationalParams.nid_c = kcg_lit_int64(0);
  outC->_L78.config.m_NationalParams.v_nvshunt = kcg_lit_int64(0);
  outC->_L78.config.m_NationalParams.v_nvstff = kcg_lit_int64(0);
  outC->_L78.config.m_NationalParams.v_nvonsight = kcg_lit_int64(0);
  outC->_L78.config.m_NationalParams.v_nvunfit = kcg_lit_int64(0);
  outC->_L78.config.m_NationalParams.v_nvrel = kcg_lit_int64(0);
  outC->_L78.config.m_NationalParams.t_nvcontact = kcg_lit_int64(0);
  outC->_L78.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L78.config.m_MAReqParams.t_mar = kcg_lit_int64(0);
  outC->_L78.config.m_MAReqParams.t_timeoutrqst = kcg_lit_int64(0);
  outC->_L78.config.m_MAReqParams.t_cycrqst = kcg_lit_int64(0);
  outC->_L78.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L78.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L78.config.m_PosRepParams.t_cycloc = kcg_lit_int64(0);
  outC->_L78.config.m_PosRepParams.d_cycloc = kcg_lit_int64(0);
  outC->_L78.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L78.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx30 = 0; idx30 < 32; idx30++) {
    outC->_L78.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx30].d_loc =
      kcg_lit_int64(0);
    outC->_L78.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx30].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx31 = 0; idx31 < 16; idx31++) {
    outC->_L78.diagnostic[idx31].valid = kcg_true;
    outC->_L78.diagnostic[idx31].count = kcg_lit_int64(0);
    outC->_L78.diagnostic[idx31].timestamp = kcg_lit_int64(0);
    outC->_L78.diagnostic[idx31].diagType = DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L78.diagnostic[idx31].diagSrc = DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L78.diagnostic[idx31].diagText = DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx34 = 0; idx34 < 8; idx34++) {
    outC->_L78.messageQueue.m_Entries[idx34].m_IsValid = kcg_true;
    outC->_L78.messageQueue.m_Entries[idx34].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L78.messageQueue.m_Entries[idx34].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L78.messageQueue.m_Entries[idx34].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L78.messageQueue.m_Entries[idx34].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L78.messageQueue.m_Entries[idx34].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L78.messageQueue.m_Entries[idx34].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L78.messageQueue.m_Entries[idx34].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L78.messageQueue.m_Entries[idx34].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L78.messageQueue.m_Entries[idx34].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L78.messageQueue.m_Entries[idx34].m_Entry.Header.d_sr = kcg_lit_int64(0);
    outC->_L78.messageQueue.m_Entries[idx34].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L78.messageQueue.m_Entries[idx34].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L78.messageQueue.m_Entries[idx34].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L78.messageQueue.m_Entries[idx34].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L78.messageQueue.m_Entries[idx34].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx32 = 0; idx32 < 30; idx32++) {
      outC->_L78.messageQueue.m_Entries[idx34].m_Entry.Messages.PacketHeaders[idx32].nid_packet =
        kcg_lit_int64(0);
      outC->_L78.messageQueue.m_Entries[idx34].m_Entry.Messages.PacketHeaders[idx32].q_dir =
        Q_DIR_Reverse;
      outC->_L78.messageQueue.m_Entries[idx34].m_Entry.Messages.PacketHeaders[idx32].valid =
        kcg_true;
      outC->_L78.messageQueue.m_Entries[idx34].m_Entry.Messages.PacketHeaders[idx32].startAddress =
        kcg_lit_int64(0);
      outC->_L78.messageQueue.m_Entries[idx34].m_Entry.Messages.PacketHeaders[idx32].endAddress =
        kcg_lit_int64(0);
    }
    for (idx33 = 0; idx33 < 500; idx33++) {
      outC->_L78.messageQueue.m_Entries[idx34].m_Entry.Messages.PacketData[idx33] =
        kcg_lit_int64(0);
    }
  }
  outC->_L78.clockk.m_Value = kcg_lit_int64(0);
  outC->_L78.lastSentTrackTrainMessage.Header.radioDevice = kcg_lit_int64(0);
  outC->_L78.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L78.lastSentTrackTrainMessage.Header.nid_message = kcg_lit_int64(0);
  outC->_L78.lastSentTrackTrainMessage.Header.t_train = kcg_lit_int64(0);
  outC->_L78.lastSentTrackTrainMessage.Header.m_ack = kcg_lit_int64(0);
  outC->_L78.lastSentTrackTrainMessage.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L78.lastSentTrackTrainMessage.Header.t_train_reference = kcg_lit_int64(
      0);
  outC->_L78.lastSentTrackTrainMessage.Header.nid_em = kcg_lit_int64(0);
  outC->_L78.lastSentTrackTrainMessage.Header.q_scale = kcg_lit_int64(0);
  outC->_L78.lastSentTrackTrainMessage.Header.d_sr = kcg_lit_int64(0);
  outC->_L78.lastSentTrackTrainMessage.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L78.lastSentTrackTrainMessage.Header.d_ref = kcg_lit_int64(0);
  outC->_L78.lastSentTrackTrainMessage.Header.q_dir = kcg_lit_int64(0);
  outC->_L78.lastSentTrackTrainMessage.Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L78.lastSentTrackTrainMessage.Header.m_version = kcg_lit_int64(0);
  for (idx35 = 0; idx35 < 30; idx35++) {
    outC->_L78.lastSentTrackTrainMessage.Messages.PacketHeaders[idx35].nid_packet =
      kcg_lit_int64(0);
    outC->_L78.lastSentTrackTrainMessage.Messages.PacketHeaders[idx35].q_dir =
      Q_DIR_Reverse;
    outC->_L78.lastSentTrackTrainMessage.Messages.PacketHeaders[idx35].valid =
      kcg_true;
    outC->_L78.lastSentTrackTrainMessage.Messages.PacketHeaders[idx35].startAddress =
      kcg_lit_int64(0);
    outC->_L78.lastSentTrackTrainMessage.Messages.PacketHeaders[idx35].endAddress =
      kcg_lit_int64(0);
  }
  for (idx36 = 0; idx36 < 500; idx36++) {
    outC->_L78.lastSentTrackTrainMessage.Messages.PacketData[idx36] =
      kcg_lit_int64(0);
  }
  outC->_L79.Header.radioDevice = kcg_lit_int64(0);
  outC->_L79.Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L79.Header.nid_message = kcg_lit_int64(0);
  outC->_L79.Header.t_train = kcg_lit_int64(0);
  outC->_L79.Header.m_ack = kcg_lit_int64(0);
  outC->_L79.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L79.Header.t_train_reference = kcg_lit_int64(0);
  outC->_L79.Header.nid_em = kcg_lit_int64(0);
  outC->_L79.Header.q_scale = kcg_lit_int64(0);
  outC->_L79.Header.d_sr = kcg_lit_int64(0);
  outC->_L79.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L79.Header.d_ref = kcg_lit_int64(0);
  outC->_L79.Header.q_dir = kcg_lit_int64(0);
  outC->_L79.Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L79.Header.m_version = kcg_lit_int64(0);
  for (idx37 = 0; idx37 < 30; idx37++) {
    outC->_L79.Messages.PacketHeaders[idx37].nid_packet = kcg_lit_int64(0);
    outC->_L79.Messages.PacketHeaders[idx37].q_dir = Q_DIR_Reverse;
    outC->_L79.Messages.PacketHeaders[idx37].valid = kcg_true;
    outC->_L79.Messages.PacketHeaders[idx37].startAddress = kcg_lit_int64(0);
    outC->_L79.Messages.PacketHeaders[idx37].endAddress = kcg_lit_int64(0);
  }
  for (idx38 = 0; idx38 < 500; idx38++) {
    outC->_L79.Messages.PacketData[idx38] = kcg_lit_int64(0);
  }
  outC->_L80.present = kcg_true;
  outC->_L80.header.present = kcg_true;
  outC->_L80.header.nid_message = kcg_lit_int64(0);
  outC->_L80.header.t_train = kcg_lit_int64(0);
  outC->_L80.header.nid_engine = kcg_lit_int64(0);
  outC->_L80.header.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L80.header.xT_TRAIN = kcg_lit_int64(0);
  outC->_L80.header.xNID_EM = kcg_lit_int64(0);
  outC->_L80.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L80.header.xNID_TEXTMESSAGE = kcg_lit_int64(0);
  outC->_L80.packets.p0.valid = kcg_true;
  outC->_L80.packets.p0.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L80.packets.p0.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L80.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L80.packets.p0.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L80.packets.p0.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L80.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L80.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L80.packets.p0.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L80.packets.p0.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L80.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L80.packets.p0.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L80.packets.p0.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L80.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L80.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L80.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L80.packets.p0.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L80.packets.p1.valid = kcg_true;
  outC->_L80.packets.p1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L80.packets.p1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L80.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L80.packets.p1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L80.packets.p1.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L80.packets.p1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L80.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L80.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L80.packets.p1.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L80.packets.p1.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L80.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L80.packets.p1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L80.packets.p1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L80.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L80.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L80.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L80.packets.p1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L80.packets.p3.valid = kcg_true;
  outC->_L80.packets.p3.number = kcg_lit_int64(0);
  for (idx40 = 0; idx40 < 1; idx40++) {
    outC->_L80.packets.p3.aNID_RADIO[idx40].valid = kcg_true;
    for (idx39 = 0; idx39 < 15; idx39++) {
      outC->_L80.packets.p3.aNID_RADIO[idx40].telephoneNumber[idx39] =
        kcg_lit_int64(0);
    }
  }
  outC->_L80.packets.p4.valid = kcg_true;
  outC->_L80.packets.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L80.packets.p5.valid = kcg_true;
  outC->_L80.packets.p5.TrainRunningNumber = kcg_lit_int64(0);
  outC->_L80.packets.p9.valid = kcg_true;
  outC->_L80.packets.p9.transitionInformation = kcg_lit_int64(0);
  outC->_L80.packets.p11.valid = kcg_true;
  outC->_L80.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L80.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L80.packets.p11.l_train = kcg_lit_int64(0);
  outC->_L80.packets.p11.v_maxtrain = kcg_lit_int64(0);
  outC->_L80.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L80.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L80.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L80.packets.p11.n_axle = kcg_lit_int64(0);
  outC->_L80.packets.p11.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx41 = 0; idx41 < 4; idx41++) {
    outC->_L80.packets.p11.tractionIdentity[idx41].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L80.packets.p11.tractionIdentity[idx41].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L80.packets.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx42 = 0; idx42 < 5; idx42++) {
    outC->_L80.packets.p11.nid_ntc[idx42] = kcg_lit_int64(0);
  }
  for (idx45 = 0; idx45 < 8; idx45++) {
    outC->_L81.m_Entries[idx45].m_IsValid = kcg_true;
    outC->_L81.m_Entries[idx45].m_Entry.Header.radioDevice = kcg_lit_int64(0);
    outC->_L81.m_Entries[idx45].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L81.m_Entries[idx45].m_Entry.Header.nid_message = kcg_lit_int64(0);
    outC->_L81.m_Entries[idx45].m_Entry.Header.t_train = kcg_lit_int64(0);
    outC->_L81.m_Entries[idx45].m_Entry.Header.m_ack = kcg_lit_int64(0);
    outC->_L81.m_Entries[idx45].m_Entry.Header.nid_lrbg = kcg_lit_int64(0);
    outC->_L81.m_Entries[idx45].m_Entry.Header.t_train_reference = kcg_lit_int64(0);
    outC->_L81.m_Entries[idx45].m_Entry.Header.nid_em = kcg_lit_int64(0);
    outC->_L81.m_Entries[idx45].m_Entry.Header.q_scale = kcg_lit_int64(0);
    outC->_L81.m_Entries[idx45].m_Entry.Header.d_sr = kcg_lit_int64(0);
    outC->_L81.m_Entries[idx45].m_Entry.Header.t_sh_rqst = kcg_lit_int64(0);
    outC->_L81.m_Entries[idx45].m_Entry.Header.d_ref = kcg_lit_int64(0);
    outC->_L81.m_Entries[idx45].m_Entry.Header.q_dir = kcg_lit_int64(0);
    outC->_L81.m_Entries[idx45].m_Entry.Header.d_emergencystop = kcg_lit_int64(0);
    outC->_L81.m_Entries[idx45].m_Entry.Header.m_version = kcg_lit_int64(0);
    for (idx43 = 0; idx43 < 30; idx43++) {
      outC->_L81.m_Entries[idx45].m_Entry.Messages.PacketHeaders[idx43].nid_packet =
        kcg_lit_int64(0);
      outC->_L81.m_Entries[idx45].m_Entry.Messages.PacketHeaders[idx43].q_dir =
        Q_DIR_Reverse;
      outC->_L81.m_Entries[idx45].m_Entry.Messages.PacketHeaders[idx43].valid =
        kcg_true;
      outC->_L81.m_Entries[idx45].m_Entry.Messages.PacketHeaders[idx43].startAddress =
        kcg_lit_int64(0);
      outC->_L81.m_Entries[idx45].m_Entry.Messages.PacketHeaders[idx43].endAddress =
        kcg_lit_int64(0);
    }
    for (idx44 = 0; idx44 < 500; idx44++) {
      outC->_L81.m_Entries[idx45].m_Entry.Messages.PacketData[idx44] =
        kcg_lit_int64(0);
    }
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
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
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
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
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
  outC->GENERAL_MESSAGE_SM_fired = SSM_TR_no_trans_GENERAL_MESSAGE_SM;
  outC->GENERAL_MESSAGE_SM_fired_strong = SSM_TR_no_trans_GENERAL_MESSAGE_SM;
  outC->GENERAL_MESSAGE_SM_state_act = SSM_st_IDLE_GENERAL_MESSAGE_SM;
  outC->GENERAL_MESSAGE_SM_state_sel = SSM_st_IDLE_GENERAL_MESSAGE_SM;
  outC->IfBlock1_clock_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM = kcg_true;
  outC->radioTrainTrackMessageTimestamp_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM =
    kcg_lit_int64(0);
  outC->_L16_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM = kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.present = kcg_true;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.header.present =
    kcg_true;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.header.nid_message =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.header.t_train =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.header.nid_engine =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.header.xT_TRAIN =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.header.xNID_EM =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.header.xNID_TEXTMESSAGE =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p0.valid =
    kcg_true;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p0.packet0.NID_PACKET =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p0.packet0.L_PACKET =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p0.packet0.qscale =
    Q_SCALE_10_cm_scale;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p0.packet0.NID_LRBG =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p0.packet0.D_LRBG =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p0.packet0.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p0.packet0.dlrbg =
    Q_DLRBG_Reverse;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p0.packet0.L_DOUBTOVER =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p0.packet0.L_DOUBTUNDER =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p0.packet0.L_TRAININT =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p0.packet0.V_TRAIN =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p0.packet0.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p0.packet0.mode =
    M_MODE_Full_Supervision;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p0.packet0.level =
    M_LEVEL_Level_0;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p0.packet0.NID_NTC =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p1.valid =
    kcg_true;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p1.packet1.NID_PACKET =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p1.packet1.L_PACKET =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p1.packet1.qscale =
    Q_SCALE_10_cm_scale;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p1.packet1.NID_LRBG =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p1.packet1.NID_PRVLRBG =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p1.packet1.D_LRBG =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p1.packet1.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p1.packet1.dlrbg =
    Q_DLRBG_Reverse;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p1.packet1.L_DOUBTOVER =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p1.packet1.L_DOUBTUNDER =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p1.packet1.L_TRAININT =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p1.packet1.V_TRAIN =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p1.packet1.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p1.packet1.mode =
    M_MODE_Full_Supervision;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p1.packet1.level =
    M_LEVEL_Level_0;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p1.packet1.NID_NTC =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p3.valid =
    kcg_true;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p3.number =
    kcg_lit_int64(0);
  for (idx64 = 0; idx64 < 1; idx64++) {
    outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p3.aNID_RADIO[idx64].valid =
      kcg_true;
    for (idx63 = 0; idx63 < 15; idx63++) {
      outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p3.aNID_RADIO[idx64].telephoneNumber[idx63] =
        kcg_lit_int64(0);
    }
  }
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p4.valid =
    kcg_true;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p5.valid =
    kcg_true;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p5.TrainRunningNumber =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p9.valid =
    kcg_true;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p9.transitionInformation =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p11.valid =
    kcg_true;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p11.l_train =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p11.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p11.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p11.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p11.n_axle =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p11.nIter_tractionIdentity =
    kcg_lit_int64(0);
  for (idx65 = 0; idx65 < 4; idx65++) {
    outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p11.tractionIdentity[idx65].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p11.tractionIdentity[idx65].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p11.nIter_ntc =
    kcg_lit_int64(0);
  for (idx66 = 0; idx66 < 5; idx66++) {
    outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.packets.p11.nid_ntc[idx66] =
      kcg_lit_int64(0);
  }
  outC->_L14_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.present = kcg_true;
  outC->_L14_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.nid_message =
    kcg_lit_int64(0);
  outC->_L14_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.t_train =
    kcg_lit_int64(0);
  outC->_L14_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.nid_engine =
    kcg_lit_int64(0);
  outC->_L14_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L14_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.xT_TRAIN =
    kcg_lit_int64(0);
  outC->_L14_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.xNID_EM =
    kcg_lit_int64(0);
  outC->_L14_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L14_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.xNID_TEXTMESSAGE =
    kcg_lit_int64(0);
  outC->_L24_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM = kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.radioDevice =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.nid_message =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.t_train =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_ack =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.t_train_reference =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.nid_em =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.q_scale =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.d_sr =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.d_ref =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.q_dir =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_version =
    kcg_lit_int64(0);
  outC->_L22_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM = kcg_lit_int64(0);
  outC->_L21_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM = kcg_lit_int64(0);
  outC->_L20_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM = kcg_lit_int64(0);
  outC->_L19_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM = kcg_lit_int64(0);
  outC->_L18_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM = kcg_true;
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx68 = 0; idx68 < 1; idx68++) {
    outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_TrainData.m_OnboardPhoneNumbers[idx68].valid =
      kcg_true;
    for (idx67 = 0; idx67 < 15; idx67++) {
      outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_TrainData.m_OnboardPhoneNumbers[idx68].telephoneNumber[idx67] =
        kcg_lit_int64(0);
    }
  }
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx69 = 0; idx69 < 4; idx69++) {
    outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_TrainData.m_TractionIdentities[idx69].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_TrainData.m_TractionIdentities[idx69].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx70 = 0; idx70 < 5; idx70++) {
    outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_TrainData.m_NationalSystemIdentities[idx70] =
      kcg_lit_int64(0);
  }
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L29_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx72 = 0; idx72 < 1; idx72++) {
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx72].valid =
      kcg_true;
    for (idx71 = 0; idx71 < 15; idx71++) {
      outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx72].telephoneNumber[idx71] =
        kcg_lit_int64(0);
    }
  }
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx73 = 0; idx73 < 4; idx73++) {
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.m_TractionIdentities[idx73].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.m_TractionIdentities[idx73].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx74 = 0; idx74 < 5; idx74++) {
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.m_NationalSystemIdentities[idx74] =
      kcg_lit_int64(0);
  }
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_NationalParams.nid_c =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_NationalParams.v_nvshunt =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_NationalParams.v_nvstff =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_NationalParams.v_nvonsight =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_NationalParams.v_nvunfit =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_NationalParams.v_nvrel =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_NationalParams.t_nvcontact =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_MAReqParams.q_dir =
    Q_DIR_Reverse;
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_MAReqParams.t_mar =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_MAReqParams.t_timeoutrqst =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_MAReqParams.t_cycrqst =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_PosRepParams.q_dir =
    Q_DIR_Reverse;
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_PosRepParams.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_PosRepParams.t_cycloc =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_PosRepParams.d_cycloc =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_PosRepParams.m_loc =
    M_LOC_Now;
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx75 = 0; idx75 < 32; idx75++) {
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx75].d_loc =
      kcg_lit_int64(0);
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx75].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx76 = 0; idx76 < 16; idx76++) {
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.diagnostic[idx76].valid =
      kcg_true;
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.diagnostic[idx76].count =
      kcg_lit_int64(0);
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.diagnostic[idx76].timestamp =
      kcg_lit_int64(0);
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.diagnostic[idx76].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.diagnostic[idx76].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.diagnostic[idx76].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx79 = 0; idx79 < 8; idx79++) {
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx79].m_IsValid =
      kcg_true;
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx79].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx79].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx79].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx79].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx79].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx79].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx79].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx79].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx79].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx79].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx79].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx79].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx79].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx79].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx79].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx77 = 0; idx77 < 30; idx77++) {
      outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx79].m_Entry.Messages.PacketHeaders[idx77].nid_packet =
        kcg_lit_int64(0);
      outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx79].m_Entry.Messages.PacketHeaders[idx77].q_dir =
        Q_DIR_Reverse;
      outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx79].m_Entry.Messages.PacketHeaders[idx77].valid =
        kcg_true;
      outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx79].m_Entry.Messages.PacketHeaders[idx77].startAddress =
        kcg_lit_int64(0);
      outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx79].m_Entry.Messages.PacketHeaders[idx77].endAddress =
        kcg_lit_int64(0);
    }
    for (idx78 = 0; idx78 < 500; idx78++) {
      outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx79].m_Entry.Messages.PacketData[idx78] =
        kcg_lit_int64(0);
    }
  }
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.clockk.m_Value =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int64(0);
  for (idx80 = 0; idx80 < 30; idx80++) {
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx80].nid_packet =
      kcg_lit_int64(0);
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx80].q_dir =
      Q_DIR_Reverse;
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx80].valid =
      kcg_true;
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx80].startAddress =
      kcg_lit_int64(0);
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx80].endAddress =
      kcg_lit_int64(0);
  }
  for (idx81 = 0; idx81 < 500; idx81++) {
    outC->_L28_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketData[idx81] =
      kcg_lit_int64(0);
  }
  for (idx84 = 0; idx84 < 8; idx84++) {
    outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_Entries[idx84].m_IsValid =
      kcg_true;
    outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_Entries[idx84].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_Entries[idx84].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_Entries[idx84].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_Entries[idx84].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_Entries[idx84].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_Entries[idx84].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_Entries[idx84].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_Entries[idx84].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_Entries[idx84].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_Entries[idx84].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_Entries[idx84].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_Entries[idx84].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_Entries[idx84].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_Entries[idx84].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_Entries[idx84].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx82 = 0; idx82 < 30; idx82++) {
      outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_Entries[idx84].m_Entry.Messages.PacketHeaders[idx82].nid_packet =
        kcg_lit_int64(0);
      outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_Entries[idx84].m_Entry.Messages.PacketHeaders[idx82].q_dir =
        Q_DIR_Reverse;
      outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_Entries[idx84].m_Entry.Messages.PacketHeaders[idx82].valid =
        kcg_true;
      outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_Entries[idx84].m_Entry.Messages.PacketHeaders[idx82].startAddress =
        kcg_lit_int64(0);
      outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_Entries[idx84].m_Entry.Messages.PacketHeaders[idx82].endAddress =
        kcg_lit_int64(0);
    }
    for (idx83 = 0; idx83 < 500; idx83++) {
      outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_Entries[idx84].m_Entry.Messages.PacketData[idx83] =
        kcg_lit_int64(0);
    }
  }
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx86 = 0; idx86 < 1; idx86++) {
    outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx86].valid =
      kcg_true;
    for (idx85 = 0; idx85 < 15; idx85++) {
      outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx86].telephoneNumber[idx85] =
        kcg_lit_int64(0);
    }
  }
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx87 = 0; idx87 < 4; idx87++) {
    outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.m_TractionIdentities[idx87].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.m_TractionIdentities[idx87].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx88 = 0; idx88 < 5; idx88++) {
    outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.m_NationalSystemIdentities[idx88] =
      kcg_lit_int64(0);
  }
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_NationalParams.nid_c =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_NationalParams.v_nvshunt =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_NationalParams.v_nvstff =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_NationalParams.v_nvonsight =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_NationalParams.v_nvunfit =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_NationalParams.v_nvrel =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_NationalParams.t_nvcontact =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_MAReqParams.q_dir =
    Q_DIR_Reverse;
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_MAReqParams.t_mar =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_MAReqParams.t_timeoutrqst =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_MAReqParams.t_cycrqst =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_PosRepParams.q_dir =
    Q_DIR_Reverse;
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_PosRepParams.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_PosRepParams.t_cycloc =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_PosRepParams.d_cycloc =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_PosRepParams.m_loc =
    M_LOC_Now;
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx89 = 0; idx89 < 32; idx89++) {
    outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx89].d_loc =
      kcg_lit_int64(0);
    outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx89].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx90 = 0; idx90 < 16; idx90++) {
    outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.diagnostic[idx90].valid =
      kcg_true;
    outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.diagnostic[idx90].count =
      kcg_lit_int64(0);
    outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.diagnostic[idx90].timestamp =
      kcg_lit_int64(0);
    outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.diagnostic[idx90].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.diagnostic[idx90].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.diagnostic[idx90].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx93 = 0; idx93 < 8; idx93++) {
    outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx93].m_IsValid =
      kcg_true;
    outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx93].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx93].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx93].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx93].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx93].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx93].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx93].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx93].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx93].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx93].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx93].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx93].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx93].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx93].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx93].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx91 = 0; idx91 < 30; idx91++) {
      outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx93].m_Entry.Messages.PacketHeaders[idx91].nid_packet =
        kcg_lit_int64(0);
      outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx93].m_Entry.Messages.PacketHeaders[idx91].q_dir =
        Q_DIR_Reverse;
      outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx93].m_Entry.Messages.PacketHeaders[idx91].valid =
        kcg_true;
      outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx93].m_Entry.Messages.PacketHeaders[idx91].startAddress =
        kcg_lit_int64(0);
      outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx93].m_Entry.Messages.PacketHeaders[idx91].endAddress =
        kcg_lit_int64(0);
    }
    for (idx92 = 0; idx92 < 500; idx92++) {
      outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx93].m_Entry.Messages.PacketData[idx92] =
        kcg_lit_int64(0);
    }
  }
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.clockk.m_Value =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int64(0);
  for (idx94 = 0; idx94 < 30; idx94++) {
    outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx94].nid_packet =
      kcg_lit_int64(0);
    outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx94].q_dir =
      Q_DIR_Reverse;
    outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx94].valid =
      kcg_true;
    outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx94].startAddress =
      kcg_lit_int64(0);
    outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx94].endAddress =
      kcg_lit_int64(0);
  }
  for (idx95 = 0; idx95 < 500; idx95++) {
    outC->_L31_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketData[idx95] =
      kcg_lit_int64(0);
  }
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.Header.t_train =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.Header.m_version =
    kcg_lit_int64(0);
  for (idx96 = 0; idx96 < 30; idx96++) {
    outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.Messages.PacketHeaders[idx96].nid_packet =
      kcg_lit_int64(0);
    outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.Messages.PacketHeaders[idx96].q_dir =
      Q_DIR_Reverse;
    outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.Messages.PacketHeaders[idx96].valid =
      kcg_true;
    outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.Messages.PacketHeaders[idx96].startAddress =
      kcg_lit_int64(0);
    outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.Messages.PacketHeaders[idx96].endAddress =
      kcg_lit_int64(0);
  }
  for (idx97 = 0; idx97 < 500; idx97++) {
    outC->_L30_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.Messages.PacketData[idx97] =
      kcg_lit_int64(0);
  }
  outC->_L9_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM = kcg_lit_int64(0);
  outC->_L8_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM = kcg_lit_int64(0);
  outC->_L7_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM = kcg_lit_int64(0);
  outC->_L6_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM = kcg_lit_int64(0);
  outC->_L5_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM = kcg_lit_int64(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM = kcg_true;
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.radioDevice =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.nid_message =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.t_train = kcg_lit_int64(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_ack = kcg_lit_int64(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.nid_lrbg = kcg_lit_int64(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.t_train_reference =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.nid_em = kcg_lit_int64(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.q_scale = kcg_lit_int64(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.d_sr = kcg_lit_int64(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.t_sh_rqst = kcg_lit_int64(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.d_ref = kcg_lit_int64(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.q_dir = kcg_lit_int64(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_version = kcg_lit_int64(0);
  outC->_L15_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L15_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx99 = 0; idx99 < 1; idx99++) {
    outC->_L15_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_TrainData.m_OnboardPhoneNumbers[idx99].valid =
      kcg_true;
    for (idx98 = 0; idx98 < 15; idx98++) {
      outC->_L15_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_TrainData.m_OnboardPhoneNumbers[idx99].telephoneNumber[idx98] =
        kcg_lit_int64(0);
    }
  }
  outC->_L15_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L15_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L15_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L15_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L15_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L15_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L15_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L15_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L15_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx100 = 0; idx100 < 4; idx100++) {
    outC->_L15_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_TrainData.m_TractionIdentities[idx100].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L15_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_TrainData.m_TractionIdentities[idx100].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx101 = 0; idx101 < 5; idx101++) {
    outC->_L15_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_TrainData.m_NationalSystemIdentities[idx101] =
      kcg_lit_int64(0);
  }
  outC->_L15_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L15_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L15_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L15_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L15_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L15_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L15_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L15_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L15_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L15_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L15_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L15_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L15_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L15_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L15_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L15_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  for (idx104 = 0; idx104 < 8; idx104++) {
    outC->_L14_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_Entries[idx104].m_IsValid =
      kcg_true;
    outC->_L14_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_Entries[idx104].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L14_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_Entries[idx104].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L14_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_Entries[idx104].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L14_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_Entries[idx104].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L14_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_Entries[idx104].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L14_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_Entries[idx104].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L14_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_Entries[idx104].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L14_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_Entries[idx104].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L14_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_Entries[idx104].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L14_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_Entries[idx104].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L14_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_Entries[idx104].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L14_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_Entries[idx104].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L14_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_Entries[idx104].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L14_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_Entries[idx104].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L14_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_Entries[idx104].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx102 = 0; idx102 < 30; idx102++) {
      outC->_L14_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_Entries[idx104].m_Entry.Messages.PacketHeaders[idx102].nid_packet =
        kcg_lit_int64(0);
      outC->_L14_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_Entries[idx104].m_Entry.Messages.PacketHeaders[idx102].q_dir =
        Q_DIR_Reverse;
      outC->_L14_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_Entries[idx104].m_Entry.Messages.PacketHeaders[idx102].valid =
        kcg_true;
      outC->_L14_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_Entries[idx104].m_Entry.Messages.PacketHeaders[idx102].startAddress =
        kcg_lit_int64(0);
      outC->_L14_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_Entries[idx104].m_Entry.Messages.PacketHeaders[idx102].endAddress =
        kcg_lit_int64(0);
    }
    for (idx103 = 0; idx103 < 500; idx103++) {
      outC->_L14_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.m_Entries[idx104].m_Entry.Messages.PacketData[idx103] =
        kcg_lit_int64(0);
    }
  }
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx106 = 0; idx106 < 1; idx106++) {
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx106].valid =
      kcg_true;
    for (idx105 = 0; idx105 < 15; idx105++) {
      outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx106].telephoneNumber[idx105] =
        kcg_lit_int64(0);
    }
  }
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx107 = 0; idx107 < 4; idx107++) {
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.m_TractionIdentities[idx107].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.m_TractionIdentities[idx107].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx108 = 0; idx108 < 5; idx108++) {
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.m_NationalSystemIdentities[idx108] =
      kcg_lit_int64(0);
  }
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_NationalParams.nid_c =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_NationalParams.v_nvshunt =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_NationalParams.v_nvstff =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_NationalParams.v_nvonsight =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_NationalParams.v_nvunfit =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_NationalParams.v_nvrel =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_NationalParams.t_nvcontact =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_MAReqParams.q_dir =
    Q_DIR_Reverse;
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_MAReqParams.t_mar =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_MAReqParams.t_timeoutrqst =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_MAReqParams.t_cycrqst =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_PosRepParams.q_dir =
    Q_DIR_Reverse;
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_PosRepParams.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_PosRepParams.t_cycloc =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_PosRepParams.d_cycloc =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_PosRepParams.m_loc =
    M_LOC_Now;
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx109 = 0; idx109 < 32; idx109++) {
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx109].d_loc =
      kcg_lit_int64(0);
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx109].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx110 = 0; idx110 < 16; idx110++) {
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.diagnostic[idx110].valid =
      kcg_true;
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.diagnostic[idx110].count =
      kcg_lit_int64(0);
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.diagnostic[idx110].timestamp =
      kcg_lit_int64(0);
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.diagnostic[idx110].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.diagnostic[idx110].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.diagnostic[idx110].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx113 = 0; idx113 < 8; idx113++) {
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx113].m_IsValid =
      kcg_true;
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx113].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx113].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx113].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx113].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx113].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx113].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx113].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx113].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx113].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx113].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx113].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx113].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx113].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx113].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx113].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx111 = 0; idx111 < 30; idx111++) {
      outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx113].m_Entry.Messages.PacketHeaders[idx111].nid_packet =
        kcg_lit_int64(0);
      outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx113].m_Entry.Messages.PacketHeaders[idx111].q_dir =
        Q_DIR_Reverse;
      outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx113].m_Entry.Messages.PacketHeaders[idx111].valid =
        kcg_true;
      outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx113].m_Entry.Messages.PacketHeaders[idx111].startAddress =
        kcg_lit_int64(0);
      outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx113].m_Entry.Messages.PacketHeaders[idx111].endAddress =
        kcg_lit_int64(0);
    }
    for (idx112 = 0; idx112 < 500; idx112++) {
      outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx113].m_Entry.Messages.PacketData[idx112] =
        kcg_lit_int64(0);
    }
  }
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.clockk.m_Value =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int64(0);
  for (idx114 = 0; idx114 < 30; idx114++) {
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx114].nid_packet =
      kcg_lit_int64(0);
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx114].q_dir =
      Q_DIR_Reverse;
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx114].valid =
      kcg_true;
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx114].startAddress =
      kcg_lit_int64(0);
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx114].endAddress =
      kcg_lit_int64(0);
  }
  for (idx115 = 0; idx115 < 500; idx115++) {
    outC->_L13_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketData[idx115] =
      kcg_lit_int64(0);
  }
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx117 = 0; idx117 < 1; idx117++) {
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx117].valid =
      kcg_true;
    for (idx116 = 0; idx116 < 15; idx116++) {
      outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx117].telephoneNumber[idx116] =
        kcg_lit_int64(0);
    }
  }
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx118 = 0; idx118 < 4; idx118++) {
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.m_TractionIdentities[idx118].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.m_TractionIdentities[idx118].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx119 = 0; idx119 < 5; idx119++) {
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.m_NationalSystemIdentities[idx119] =
      kcg_lit_int64(0);
  }
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.session.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_NationalParams.nid_c =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_NationalParams.v_nvshunt =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_NationalParams.v_nvstff =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_NationalParams.v_nvonsight =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_NationalParams.v_nvunfit =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_NationalParams.v_nvrel =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_NationalParams.t_nvcontact =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_MAReqParams.q_dir =
    Q_DIR_Reverse;
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_MAReqParams.t_mar =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_MAReqParams.t_timeoutrqst =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_MAReqParams.t_cycrqst =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_PosRepParams.q_dir =
    Q_DIR_Reverse;
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_PosRepParams.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_PosRepParams.t_cycloc =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_PosRepParams.d_cycloc =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_PosRepParams.m_loc =
    M_LOC_Now;
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx120 = 0; idx120 < 32; idx120++) {
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx120].d_loc =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx120].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx121 = 0; idx121 < 16; idx121++) {
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.diagnostic[idx121].valid =
      kcg_true;
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.diagnostic[idx121].count =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.diagnostic[idx121].timestamp =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.diagnostic[idx121].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.diagnostic[idx121].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.diagnostic[idx121].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx124 = 0; idx124 < 8; idx124++) {
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx124].m_IsValid =
      kcg_true;
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx124].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx124].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx124].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx124].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx124].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx124].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx124].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx124].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx124].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx124].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx124].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx124].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx124].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx124].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx124].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx122 = 0; idx122 < 30; idx122++) {
      outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx124].m_Entry.Messages.PacketHeaders[idx122].nid_packet =
        kcg_lit_int64(0);
      outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx124].m_Entry.Messages.PacketHeaders[idx122].q_dir =
        Q_DIR_Reverse;
      outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx124].m_Entry.Messages.PacketHeaders[idx122].valid =
        kcg_true;
      outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx124].m_Entry.Messages.PacketHeaders[idx122].startAddress =
        kcg_lit_int64(0);
      outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx124].m_Entry.Messages.PacketHeaders[idx122].endAddress =
        kcg_lit_int64(0);
    }
    for (idx123 = 0; idx123 < 500; idx123++) {
      outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx124].m_Entry.Messages.PacketData[idx123] =
        kcg_lit_int64(0);
    }
  }
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.clockk.m_Value =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int64(0);
  for (idx125 = 0; idx125 < 30; idx125++) {
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx125].nid_packet =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx125].q_dir =
      Q_DIR_Reverse;
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx125].valid =
      kcg_true;
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx125].startAddress =
      kcg_lit_int64(0);
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx125].endAddress =
      kcg_lit_int64(0);
  }
  for (idx126 = 0; idx126 < 500; idx126++) {
    outC->_L17_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketData[idx126] =
      kcg_lit_int64(0);
  }
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.Header.t_train =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L16_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.Header.m_version =
    kcg_lit_int64(0);
  for (idx127 = 0; idx127 < 30; idx127++) {
    outC->_L16_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.Messages.PacketHeaders[idx127].nid_packet =
      kcg_lit_int64(0);
    outC->_L16_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.Messages.PacketHeaders[idx127].q_dir =
      Q_DIR_Reverse;
    outC->_L16_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.Messages.PacketHeaders[idx127].valid =
      kcg_true;
    outC->_L16_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.Messages.PacketHeaders[idx127].startAddress =
      kcg_lit_int64(0);
    outC->_L16_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.Messages.PacketHeaders[idx127].endAddress =
      kcg_lit_int64(0);
  }
  for (idx128 = 0; idx128 < 500; idx128++) {
    outC->_L16_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM.Messages.PacketData[idx128] =
      kcg_lit_int64(0);
  }
  outC->ack_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM =
    M_ACK_No_acknowledgement_required;
  for (idx131 = 0; idx131 < 8; idx131++) {
    outC->_L20_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entries[idx131].m_IsValid =
      kcg_true;
    outC->_L20_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entries[idx131].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L20_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entries[idx131].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L20_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entries[idx131].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L20_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entries[idx131].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L20_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entries[idx131].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L20_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entries[idx131].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L20_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entries[idx131].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L20_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entries[idx131].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L20_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entries[idx131].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L20_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entries[idx131].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L20_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entries[idx131].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L20_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entries[idx131].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L20_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entries[idx131].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L20_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entries[idx131].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L20_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entries[idx131].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx129 = 0; idx129 < 30; idx129++) {
      outC->_L20_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entries[idx131].m_Entry.Messages.PacketHeaders[idx129].nid_packet =
        kcg_lit_int64(0);
      outC->_L20_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entries[idx131].m_Entry.Messages.PacketHeaders[idx129].q_dir =
        Q_DIR_Reverse;
      outC->_L20_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entries[idx131].m_Entry.Messages.PacketHeaders[idx129].valid =
        kcg_true;
      outC->_L20_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entries[idx131].m_Entry.Messages.PacketHeaders[idx129].startAddress =
        kcg_lit_int64(0);
      outC->_L20_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entries[idx131].m_Entry.Messages.PacketHeaders[idx129].endAddress =
        kcg_lit_int64(0);
    }
    for (idx130 = 0; idx130 < 500; idx130++) {
      outC->_L20_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entries[idx131].m_Entry.Messages.PacketData[idx130] =
        kcg_lit_int64(0);
    }
  }
  outC->_L22_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_IsValid = kcg_true;
  outC->_L22_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entry.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L22_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entry.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L22_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entry.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L22_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entry.Header.t_train =
    kcg_lit_int64(0);
  outC->_L22_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entry.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L22_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entry.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L22_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entry.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L22_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entry.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L22_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entry.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L22_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entry.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L22_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entry.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L22_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entry.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L22_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entry.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L22_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entry.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L22_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entry.Header.m_version =
    kcg_lit_int64(0);
  for (idx132 = 0; idx132 < 30; idx132++) {
    outC->_L22_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entry.Messages.PacketHeaders[idx132].nid_packet =
      kcg_lit_int64(0);
    outC->_L22_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entry.Messages.PacketHeaders[idx132].q_dir =
      Q_DIR_Reverse;
    outC->_L22_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entry.Messages.PacketHeaders[idx132].valid =
      kcg_true;
    outC->_L22_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entry.Messages.PacketHeaders[idx132].startAddress =
      kcg_lit_int64(0);
    outC->_L22_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entry.Messages.PacketHeaders[idx132].endAddress =
      kcg_lit_int64(0);
  }
  for (idx133 = 0; idx133 < 500; idx133++) {
    outC->_L22_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entry.Messages.PacketData[idx133] =
      kcg_lit_int64(0);
  }
  outC->_L26_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L26_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L26_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L26_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.Header.t_train =
    kcg_lit_int64(0);
  outC->_L26_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L26_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L26_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L26_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L26_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L26_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L26_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L26_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L26_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L26_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L26_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.Header.m_version =
    kcg_lit_int64(0);
  for (idx134 = 0; idx134 < 30; idx134++) {
    outC->_L26_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.Messages.PacketHeaders[idx134].nid_packet =
      kcg_lit_int64(0);
    outC->_L26_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.Messages.PacketHeaders[idx134].q_dir =
      Q_DIR_Reverse;
    outC->_L26_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.Messages.PacketHeaders[idx134].valid =
      kcg_true;
    outC->_L26_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.Messages.PacketHeaders[idx134].startAddress =
      kcg_lit_int64(0);
    outC->_L26_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.Messages.PacketHeaders[idx134].endAddress =
      kcg_lit_int64(0);
  }
  for (idx135 = 0; idx135 < 500; idx135++) {
    outC->_L26_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.Messages.PacketData[idx135] =
      kcg_lit_int64(0);
  }
  outC->_L35_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM = kcg_true;
  outC->_L34_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.radioDevice =
    kcg_lit_int64(0);
  outC->_L34_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L34_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.nid_message =
    kcg_lit_int64(0);
  outC->_L34_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.t_train = kcg_lit_int64(0);
  outC->_L34_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_ack = kcg_lit_int64(0);
  outC->_L34_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.nid_lrbg = kcg_lit_int64(0);
  outC->_L34_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.t_train_reference =
    kcg_lit_int64(0);
  outC->_L34_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.nid_em = kcg_lit_int64(0);
  outC->_L34_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.q_scale = kcg_lit_int64(0);
  outC->_L34_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.d_sr = kcg_lit_int64(0);
  outC->_L34_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.t_sh_rqst = kcg_lit_int64(0);
  outC->_L34_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.d_ref = kcg_lit_int64(0);
  outC->_L34_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.q_dir = kcg_lit_int64(0);
  outC->_L34_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L34_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_version = kcg_lit_int64(0);
  outC->_L33_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM =
    M_ACK_No_acknowledgement_required;
  outC->_L32_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM =
    M_ACK_No_acknowledgement_required;
  outC->_L31_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM = kcg_true;
  outC->_L30_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM = kcg_true;
  outC->_L29_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM = kcg_true;
  outC->_L27_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM =
    M_ACK_No_acknowledgement_required;
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx137 = 0; idx137 < 1; idx137++) {
    outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx137].valid =
      kcg_true;
    for (idx136 = 0; idx136 < 15; idx136++) {
      outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx137].telephoneNumber[idx136] =
        kcg_lit_int64(0);
    }
  }
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx138 = 0; idx138 < 4; idx138++) {
    outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_TrainData.m_TractionIdentities[idx138].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_TrainData.m_TractionIdentities[idx138].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx139 = 0; idx139 < 5; idx139++) {
    outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_TrainData.m_NationalSystemIdentities[idx139] =
      kcg_lit_int64(0);
  }
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.config.m_NationalParams.nid_c =
    kcg_lit_int64(0);
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.config.m_NationalParams.v_nvshunt =
    kcg_lit_int64(0);
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.config.m_NationalParams.v_nvstff =
    kcg_lit_int64(0);
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.config.m_NationalParams.v_nvonsight =
    kcg_lit_int64(0);
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.config.m_NationalParams.v_nvunfit =
    kcg_lit_int64(0);
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.config.m_NationalParams.v_nvrel =
    kcg_lit_int64(0);
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.config.m_NationalParams.t_nvcontact =
    kcg_lit_int64(0);
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.config.m_MAReqParams.q_dir =
    Q_DIR_Reverse;
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.config.m_MAReqParams.t_mar =
    kcg_lit_int64(0);
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.config.m_MAReqParams.t_timeoutrqst =
    kcg_lit_int64(0);
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.config.m_MAReqParams.t_cycrqst =
    kcg_lit_int64(0);
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.config.m_PosRepParams.q_dir =
    Q_DIR_Reverse;
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.config.m_PosRepParams.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.config.m_PosRepParams.t_cycloc =
    kcg_lit_int64(0);
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.config.m_PosRepParams.d_cycloc =
    kcg_lit_int64(0);
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.config.m_PosRepParams.m_loc =
    M_LOC_Now;
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx140 = 0; idx140 < 32; idx140++) {
    outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx140].d_loc =
      kcg_lit_int64(0);
    outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx140].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx141 = 0; idx141 < 16; idx141++) {
    outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.diagnostic[idx141].valid =
      kcg_true;
    outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.diagnostic[idx141].count =
      kcg_lit_int64(0);
    outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.diagnostic[idx141].timestamp =
      kcg_lit_int64(0);
    outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.diagnostic[idx141].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.diagnostic[idx141].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.diagnostic[idx141].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx144 = 0; idx144 < 8; idx144++) {
    outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx144].m_IsValid =
      kcg_true;
    outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx144].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx144].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx144].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx144].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx144].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx144].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx144].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx144].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx144].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx144].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx144].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx144].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx144].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx144].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx144].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx142 = 0; idx142 < 30; idx142++) {
      outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx144].m_Entry.Messages.PacketHeaders[idx142].nid_packet =
        kcg_lit_int64(0);
      outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx144].m_Entry.Messages.PacketHeaders[idx142].q_dir =
        Q_DIR_Reverse;
      outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx144].m_Entry.Messages.PacketHeaders[idx142].valid =
        kcg_true;
      outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx144].m_Entry.Messages.PacketHeaders[idx142].startAddress =
        kcg_lit_int64(0);
      outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx144].m_Entry.Messages.PacketHeaders[idx142].endAddress =
        kcg_lit_int64(0);
    }
    for (idx143 = 0; idx143 < 500; idx143++) {
      outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx144].m_Entry.Messages.PacketData[idx143] =
        kcg_lit_int64(0);
    }
  }
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.clockk.m_Value =
    kcg_lit_int64(0);
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int64(0);
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int64(0);
  for (idx145 = 0; idx145 < 30; idx145++) {
    outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx145].nid_packet =
      kcg_lit_int64(0);
    outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx145].q_dir =
      Q_DIR_Reverse;
    outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx145].valid =
      kcg_true;
    outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx145].startAddress =
      kcg_lit_int64(0);
    outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx145].endAddress =
      kcg_lit_int64(0);
  }
  for (idx146 = 0; idx146 < 500; idx146++) {
    outC->_L39_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketData[idx146] =
      kcg_lit_int64(0);
  }
  outC->_L38_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L38_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx148 = 0; idx148 < 1; idx148++) {
    outC->_L38_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_TrainData.m_OnboardPhoneNumbers[idx148].valid =
      kcg_true;
    for (idx147 = 0; idx147 < 15; idx147++) {
      outC->_L38_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_TrainData.m_OnboardPhoneNumbers[idx148].telephoneNumber[idx147] =
        kcg_lit_int64(0);
    }
  }
  outC->_L38_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L38_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L38_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L38_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L38_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L38_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L38_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L38_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L38_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx149 = 0; idx149 < 4; idx149++) {
    outC->_L38_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_TrainData.m_TractionIdentities[idx149].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L38_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_TrainData.m_TractionIdentities[idx149].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx150 = 0; idx150 < 5; idx150++) {
    outC->_L38_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_TrainData.m_NationalSystemIdentities[idx150] =
      kcg_lit_int64(0);
  }
  outC->_L38_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L38_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L38_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L38_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L38_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L38_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L38_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L38_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L38_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L38_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L38_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L38_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L38_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L38_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L38_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L38_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx152 = 0; idx152 < 1; idx152++) {
    outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx152].valid =
      kcg_true;
    for (idx151 = 0; idx151 < 15; idx151++) {
      outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx152].telephoneNumber[idx151] =
        kcg_lit_int64(0);
    }
  }
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx153 = 0; idx153 < 4; idx153++) {
    outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_TrainData.m_TractionIdentities[idx153].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_TrainData.m_TractionIdentities[idx153].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx154 = 0; idx154 < 5; idx154++) {
    outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_TrainData.m_NationalSystemIdentities[idx154] =
      kcg_lit_int64(0);
  }
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.session.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.config.m_NationalParams.nid_c =
    kcg_lit_int64(0);
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.config.m_NationalParams.v_nvshunt =
    kcg_lit_int64(0);
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.config.m_NationalParams.v_nvstff =
    kcg_lit_int64(0);
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.config.m_NationalParams.v_nvonsight =
    kcg_lit_int64(0);
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.config.m_NationalParams.v_nvunfit =
    kcg_lit_int64(0);
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.config.m_NationalParams.v_nvrel =
    kcg_lit_int64(0);
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.config.m_NationalParams.t_nvcontact =
    kcg_lit_int64(0);
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.config.m_MAReqParams.q_dir =
    Q_DIR_Reverse;
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.config.m_MAReqParams.t_mar =
    kcg_lit_int64(0);
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.config.m_MAReqParams.t_timeoutrqst =
    kcg_lit_int64(0);
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.config.m_MAReqParams.t_cycrqst =
    kcg_lit_int64(0);
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.config.m_PosRepParams.q_dir =
    Q_DIR_Reverse;
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.config.m_PosRepParams.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.config.m_PosRepParams.t_cycloc =
    kcg_lit_int64(0);
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.config.m_PosRepParams.d_cycloc =
    kcg_lit_int64(0);
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.config.m_PosRepParams.m_loc =
    M_LOC_Now;
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx155 = 0; idx155 < 32; idx155++) {
    outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx155].d_loc =
      kcg_lit_int64(0);
    outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx155].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx156 = 0; idx156 < 16; idx156++) {
    outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.diagnostic[idx156].valid =
      kcg_true;
    outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.diagnostic[idx156].count =
      kcg_lit_int64(0);
    outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.diagnostic[idx156].timestamp =
      kcg_lit_int64(0);
    outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.diagnostic[idx156].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.diagnostic[idx156].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.diagnostic[idx156].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx159 = 0; idx159 < 8; idx159++) {
    outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx159].m_IsValid =
      kcg_true;
    outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx159].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx159].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx159].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx159].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx159].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx159].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx159].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx159].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx159].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx159].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx159].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx159].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx159].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx159].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx159].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx157 = 0; idx157 < 30; idx157++) {
      outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx159].m_Entry.Messages.PacketHeaders[idx157].nid_packet =
        kcg_lit_int64(0);
      outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx159].m_Entry.Messages.PacketHeaders[idx157].q_dir =
        Q_DIR_Reverse;
      outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx159].m_Entry.Messages.PacketHeaders[idx157].valid =
        kcg_true;
      outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx159].m_Entry.Messages.PacketHeaders[idx157].startAddress =
        kcg_lit_int64(0);
      outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx159].m_Entry.Messages.PacketHeaders[idx157].endAddress =
        kcg_lit_int64(0);
    }
    for (idx158 = 0; idx158 < 500; idx158++) {
      outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx159].m_Entry.Messages.PacketData[idx158] =
        kcg_lit_int64(0);
    }
  }
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.clockk.m_Value =
    kcg_lit_int64(0);
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int64(0);
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int64(0);
  for (idx160 = 0; idx160 < 30; idx160++) {
    outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx160].nid_packet =
      kcg_lit_int64(0);
    outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx160].q_dir =
      Q_DIR_Reverse;
    outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx160].valid =
      kcg_true;
    outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx160].startAddress =
      kcg_lit_int64(0);
    outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx160].endAddress =
      kcg_lit_int64(0);
  }
  for (idx161 = 0; idx161 < 500; idx161++) {
    outC->_L47_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketData[idx161] =
      kcg_lit_int64(0);
  }
  for (idx164 = 0; idx164 < 8; idx164++) {
    outC->_L46_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entries[idx164].m_IsValid =
      kcg_true;
    outC->_L46_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entries[idx164].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L46_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entries[idx164].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L46_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entries[idx164].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L46_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entries[idx164].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L46_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entries[idx164].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L46_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entries[idx164].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L46_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entries[idx164].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L46_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entries[idx164].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L46_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entries[idx164].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L46_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entries[idx164].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L46_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entries[idx164].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L46_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entries[idx164].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L46_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entries[idx164].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L46_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entries[idx164].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L46_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entries[idx164].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx162 = 0; idx162 < 30; idx162++) {
      outC->_L46_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entries[idx164].m_Entry.Messages.PacketHeaders[idx162].nid_packet =
        kcg_lit_int64(0);
      outC->_L46_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entries[idx164].m_Entry.Messages.PacketHeaders[idx162].q_dir =
        Q_DIR_Reverse;
      outC->_L46_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entries[idx164].m_Entry.Messages.PacketHeaders[idx162].valid =
        kcg_true;
      outC->_L46_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entries[idx164].m_Entry.Messages.PacketHeaders[idx162].startAddress =
        kcg_lit_int64(0);
      outC->_L46_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entries[idx164].m_Entry.Messages.PacketHeaders[idx162].endAddress =
        kcg_lit_int64(0);
    }
    for (idx163 = 0; idx163 < 500; idx163++) {
      outC->_L46_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM.m_Entries[idx164].m_Entry.Messages.PacketData[idx163] =
        kcg_lit_int64(0);
    }
  }
  for (idx167 = 0; idx167 < 8; idx167++) {
    outC->_L5_IDLE_GENERAL_MESSAGE_SM.m_Entries[idx167].m_IsValid = kcg_true;
    outC->_L5_IDLE_GENERAL_MESSAGE_SM.m_Entries[idx167].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L5_IDLE_GENERAL_MESSAGE_SM.m_Entries[idx167].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L5_IDLE_GENERAL_MESSAGE_SM.m_Entries[idx167].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L5_IDLE_GENERAL_MESSAGE_SM.m_Entries[idx167].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L5_IDLE_GENERAL_MESSAGE_SM.m_Entries[idx167].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L5_IDLE_GENERAL_MESSAGE_SM.m_Entries[idx167].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L5_IDLE_GENERAL_MESSAGE_SM.m_Entries[idx167].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L5_IDLE_GENERAL_MESSAGE_SM.m_Entries[idx167].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L5_IDLE_GENERAL_MESSAGE_SM.m_Entries[idx167].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L5_IDLE_GENERAL_MESSAGE_SM.m_Entries[idx167].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L5_IDLE_GENERAL_MESSAGE_SM.m_Entries[idx167].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L5_IDLE_GENERAL_MESSAGE_SM.m_Entries[idx167].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L5_IDLE_GENERAL_MESSAGE_SM.m_Entries[idx167].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L5_IDLE_GENERAL_MESSAGE_SM.m_Entries[idx167].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L5_IDLE_GENERAL_MESSAGE_SM.m_Entries[idx167].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx165 = 0; idx165 < 30; idx165++) {
      outC->_L5_IDLE_GENERAL_MESSAGE_SM.m_Entries[idx167].m_Entry.Messages.PacketHeaders[idx165].nid_packet =
        kcg_lit_int64(0);
      outC->_L5_IDLE_GENERAL_MESSAGE_SM.m_Entries[idx167].m_Entry.Messages.PacketHeaders[idx165].q_dir =
        Q_DIR_Reverse;
      outC->_L5_IDLE_GENERAL_MESSAGE_SM.m_Entries[idx167].m_Entry.Messages.PacketHeaders[idx165].valid =
        kcg_true;
      outC->_L5_IDLE_GENERAL_MESSAGE_SM.m_Entries[idx167].m_Entry.Messages.PacketHeaders[idx165].startAddress =
        kcg_lit_int64(0);
      outC->_L5_IDLE_GENERAL_MESSAGE_SM.m_Entries[idx167].m_Entry.Messages.PacketHeaders[idx165].endAddress =
        kcg_lit_int64(0);
    }
    for (idx166 = 0; idx166 < 500; idx166++) {
      outC->_L5_IDLE_GENERAL_MESSAGE_SM.m_Entries[idx167].m_Entry.Messages.PacketData[idx166] =
        kcg_lit_int64(0);
    }
  }
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.session.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx169 = 0; idx169 < 1; idx169++) {
    outC->_L4_IDLE_GENERAL_MESSAGE_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx169].valid =
      kcg_true;
    for (idx168 = 0; idx168 < 15; idx168++) {
      outC->_L4_IDLE_GENERAL_MESSAGE_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx169].telephoneNumber[idx168] =
        kcg_lit_int64(0);
    }
  }
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.session.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.session.m_TrainData.l_train = kcg_lit_int64(
      0);
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.session.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.session.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.session.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.session.m_TrainData.n_axle = kcg_lit_int64(0);
  for (idx170 = 0; idx170 < 4; idx170++) {
    outC->_L4_IDLE_GENERAL_MESSAGE_SM.session.m_TrainData.m_TractionIdentities[idx170].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L4_IDLE_GENERAL_MESSAGE_SM.session.m_TrainData.m_TractionIdentities[idx170].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx171 = 0; idx171 < 5; idx171++) {
    outC->_L4_IDLE_GENERAL_MESSAGE_SM.session.m_TrainData.m_NationalSystemIdentities[idx171] =
      kcg_lit_int64(0);
  }
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.session.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.session.m_PosData.nid_lrbg = kcg_lit_int64(0);
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.session.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.session.m_PosData.d_lrbg = kcg_lit_int64(0);
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.session.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.session.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.session.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.session.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.session.m_PosData.v_train = kcg_lit_int64(0);
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.session.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.session.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.session.m_PosData.nid_ntc = kcg_lit_int64(0);
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.session.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.config.m_NationalParams.nid_c =
    kcg_lit_int64(0);
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.config.m_NationalParams.v_nvshunt =
    kcg_lit_int64(0);
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.config.m_NationalParams.v_nvstff =
    kcg_lit_int64(0);
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.config.m_NationalParams.v_nvonsight =
    kcg_lit_int64(0);
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.config.m_NationalParams.v_nvunfit =
    kcg_lit_int64(0);
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.config.m_NationalParams.v_nvrel =
    kcg_lit_int64(0);
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.config.m_NationalParams.t_nvcontact =
    kcg_lit_int64(0);
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.config.m_MAReqParams.t_mar = kcg_lit_int64(0);
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.config.m_MAReqParams.t_timeoutrqst =
    kcg_lit_int64(0);
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.config.m_MAReqParams.t_cycrqst =
    kcg_lit_int64(0);
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.config.m_PosRepParams.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.config.m_PosRepParams.t_cycloc =
    kcg_lit_int64(0);
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.config.m_PosRepParams.d_cycloc =
    kcg_lit_int64(0);
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx172 = 0; idx172 < 32; idx172++) {
    outC->_L4_IDLE_GENERAL_MESSAGE_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx172].d_loc =
      kcg_lit_int64(0);
    outC->_L4_IDLE_GENERAL_MESSAGE_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx172].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx173 = 0; idx173 < 16; idx173++) {
    outC->_L4_IDLE_GENERAL_MESSAGE_SM.diagnostic[idx173].valid = kcg_true;
    outC->_L4_IDLE_GENERAL_MESSAGE_SM.diagnostic[idx173].count = kcg_lit_int64(0);
    outC->_L4_IDLE_GENERAL_MESSAGE_SM.diagnostic[idx173].timestamp =
      kcg_lit_int64(0);
    outC->_L4_IDLE_GENERAL_MESSAGE_SM.diagnostic[idx173].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L4_IDLE_GENERAL_MESSAGE_SM.diagnostic[idx173].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L4_IDLE_GENERAL_MESSAGE_SM.diagnostic[idx173].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx176 = 0; idx176 < 8; idx176++) {
    outC->_L4_IDLE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx176].m_IsValid =
      kcg_true;
    outC->_L4_IDLE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx176].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L4_IDLE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx176].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L4_IDLE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx176].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L4_IDLE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx176].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L4_IDLE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx176].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L4_IDLE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx176].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L4_IDLE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx176].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L4_IDLE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx176].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L4_IDLE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx176].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L4_IDLE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx176].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L4_IDLE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx176].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L4_IDLE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx176].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L4_IDLE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx176].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L4_IDLE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx176].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L4_IDLE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx176].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx174 = 0; idx174 < 30; idx174++) {
      outC->_L4_IDLE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx176].m_Entry.Messages.PacketHeaders[idx174].nid_packet =
        kcg_lit_int64(0);
      outC->_L4_IDLE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx176].m_Entry.Messages.PacketHeaders[idx174].q_dir =
        Q_DIR_Reverse;
      outC->_L4_IDLE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx176].m_Entry.Messages.PacketHeaders[idx174].valid =
        kcg_true;
      outC->_L4_IDLE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx176].m_Entry.Messages.PacketHeaders[idx174].startAddress =
        kcg_lit_int64(0);
      outC->_L4_IDLE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx176].m_Entry.Messages.PacketHeaders[idx174].endAddress =
        kcg_lit_int64(0);
    }
    for (idx175 = 0; idx175 < 500; idx175++) {
      outC->_L4_IDLE_GENERAL_MESSAGE_SM.messageQueue.m_Entries[idx176].m_Entry.Messages.PacketData[idx175] =
        kcg_lit_int64(0);
    }
  }
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.clockk.m_Value = kcg_lit_int64(0);
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int64(0);
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L4_IDLE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int64(0);
  for (idx177 = 0; idx177 < 30; idx177++) {
    outC->_L4_IDLE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx177].nid_packet =
      kcg_lit_int64(0);
    outC->_L4_IDLE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx177].q_dir =
      Q_DIR_Reverse;
    outC->_L4_IDLE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx177].valid =
      kcg_true;
    outC->_L4_IDLE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx177].startAddress =
      kcg_lit_int64(0);
    outC->_L4_IDLE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx177].endAddress =
      kcg_lit_int64(0);
  }
  for (idx178 = 0; idx178 < 500; idx178++) {
    outC->_L4_IDLE_GENERAL_MESSAGE_SM.lastSentTrackTrainMessage.Messages.PacketData[idx178] =
      kcg_lit_int64(0);
  }
  outC->_L3_IDLE_GENERAL_MESSAGE_SM.m_TrainData.nid_engine = kcg_lit_int64(0);
  outC->_L3_IDLE_GENERAL_MESSAGE_SM.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx180 = 0; idx180 < 1; idx180++) {
    outC->_L3_IDLE_GENERAL_MESSAGE_SM.m_TrainData.m_OnboardPhoneNumbers[idx180].valid =
      kcg_true;
    for (idx179 = 0; idx179 < 15; idx179++) {
      outC->_L3_IDLE_GENERAL_MESSAGE_SM.m_TrainData.m_OnboardPhoneNumbers[idx180].telephoneNumber[idx179] =
        kcg_lit_int64(0);
    }
  }
  outC->_L3_IDLE_GENERAL_MESSAGE_SM.m_TrainData.t_train_ref = kcg_lit_int64(0);
  outC->_L3_IDLE_GENERAL_MESSAGE_SM.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L3_IDLE_GENERAL_MESSAGE_SM.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L3_IDLE_GENERAL_MESSAGE_SM.m_TrainData.l_train = kcg_lit_int64(0);
  outC->_L3_IDLE_GENERAL_MESSAGE_SM.m_TrainData.v_maxtrain = kcg_lit_int64(0);
  outC->_L3_IDLE_GENERAL_MESSAGE_SM.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L3_IDLE_GENERAL_MESSAGE_SM.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L3_IDLE_GENERAL_MESSAGE_SM.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L3_IDLE_GENERAL_MESSAGE_SM.m_TrainData.n_axle = kcg_lit_int64(0);
  for (idx181 = 0; idx181 < 4; idx181++) {
    outC->_L3_IDLE_GENERAL_MESSAGE_SM.m_TrainData.m_TractionIdentities[idx181].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L3_IDLE_GENERAL_MESSAGE_SM.m_TrainData.m_TractionIdentities[idx181].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx182 = 0; idx182 < 5; idx182++) {
    outC->_L3_IDLE_GENERAL_MESSAGE_SM.m_TrainData.m_NationalSystemIdentities[idx182] =
      kcg_lit_int64(0);
  }
  outC->_L3_IDLE_GENERAL_MESSAGE_SM.m_TrainData.nid_operational = kcg_lit_int64(
      0);
  outC->_L3_IDLE_GENERAL_MESSAGE_SM.m_PosData.nid_lrbg = kcg_lit_int64(0);
  outC->_L3_IDLE_GENERAL_MESSAGE_SM.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L3_IDLE_GENERAL_MESSAGE_SM.m_PosData.d_lrbg = kcg_lit_int64(0);
  outC->_L3_IDLE_GENERAL_MESSAGE_SM.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L3_IDLE_GENERAL_MESSAGE_SM.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L3_IDLE_GENERAL_MESSAGE_SM.m_PosData.l_doubtover = kcg_lit_int64(0);
  outC->_L3_IDLE_GENERAL_MESSAGE_SM.m_PosData.l_doubtunder = kcg_lit_int64(0);
  outC->_L3_IDLE_GENERAL_MESSAGE_SM.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L3_IDLE_GENERAL_MESSAGE_SM.m_PosData.l_trainint = kcg_lit_int64(0);
  outC->_L3_IDLE_GENERAL_MESSAGE_SM.m_PosData.v_train = kcg_lit_int64(0);
  outC->_L3_IDLE_GENERAL_MESSAGE_SM.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L3_IDLE_GENERAL_MESSAGE_SM.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L3_IDLE_GENERAL_MESSAGE_SM.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L3_IDLE_GENERAL_MESSAGE_SM.m_PosData.nid_ntc = kcg_lit_int64(0);
  outC->_L3_IDLE_GENERAL_MESSAGE_SM.m_PosData.nid_prvlrbg = kcg_lit_int64(0);
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
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
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
  /* GENERAL_MESSAGE_SM:SEND_GENERAL_MESSAGE:_L33=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_M_ACK#2)/ */
  RadioTrackTrainHeader__Get_M_ACK_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Get_M_ACK_2);
  /* GENERAL_MESSAGE_SM:SEND_GENERAL_MESSAGE:_L34=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#10)/ */
  RadioTrackTrainMessage__GetHeader_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainMessage__GetHeader_10);
  /* GENERAL_MESSAGE_SM:AWAIT_ACKNOWLEDGEMENT:_L6=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#3)/ */
  RadioTrackTrainHeader__Get_NID_MESSAGE_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Get_NID_MESSAGE_3);
  /* GENERAL_MESSAGE_SM:AWAIT_ACKNOWLEDGEMENT:_L8=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_T_TRAIN#2)/ */
  RadioTrackTrainHeader__Get_T_TRAIN_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Get_T_TRAIN_2);
  /* GENERAL_MESSAGE_SM:AWAIT_ACKNOWLEDGEMENT:_L3=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#4)/ */
  RadioTrackTrainMessage__GetHeader_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainMessage__GetHeader_4);
  /* GENERAL_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L16=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_T_TRAIN_Ref#2)/ */
  RadioTrainTrackHeader__Get_T_TRAIN_Ref_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackHeader__Get_T_TRAIN_Ref_2);
  /* GENERAL_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L14=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#5)/ */
  RadioTrainTrackMessage__GetHeader_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackMessage__GetHeader_5);
  /* GENERAL_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L20=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_T_TRAIN#3)/ */
  RadioTrackTrainHeader__Get_T_TRAIN_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Get_T_TRAIN_3);
  /* GENERAL_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L22=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#4)/ */
  RadioTrackTrainHeader__Get_NID_MESSAGE_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Get_NID_MESSAGE_4);
  /* GENERAL_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L23=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#5)/ */
  RadioTrackTrainMessage__GetHeader_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainMessage__GetHeader_5);
  /* GENERAL_MESSAGE_SM:SEND_GENERAL_MESSAGE:_L20=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut#1)/ */
  RadioTrackTrainMessageQueue__TryPut_init_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueue__TryPut_1);
  /* GENERAL_MESSAGE_SM:SEND_GENERAL_MESSAGE:_L22=(RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__Create#1)/ */
  RadioTrackTrainMessageQueueEntry__Create_init_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueueEntry__Create_1);
  /* _L60=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#5)/ */
  RadioTrackTrainHeader__Get_NID_MESSAGE_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Get_NID_MESSAGE_5);
  /* _L61=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#7)/ */
  RadioTrackTrainMessage__GetHeader_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainMessage__GetHeader_7);
  /* _L67=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_MESSAGE#2)/ */
  RadioTrainTrackHeader__Get_NID_MESSAGE_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackHeader__Get_NID_MESSAGE_2);
  /* _L68=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#6)/ */
  RadioTrainTrackMessage__GetHeader_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackMessage__GetHeader_6);
  outC->GENERAL_MESSAGE_SM_reset_act = kcg_false;
  outC->GENERAL_MESSAGE_SM_reset_nxt = kcg_false;
  outC->GENERAL_MESSAGE_SM_state_nxt = SSM_st_IDLE_GENERAL_MESSAGE_SM;
  outC->ackRequired = kcg_false;
  outC->radioTrackTrainMessageWasSentTimestamp = T_TRAIN_MIN;
  outC->validAck = kcg_false;
  outC->invalidAck = kcg_false;
}
#endif /* KCG_USER_DEFINED_INIT */


void RBC__ProcessGeneralMessage_reset_RBC_Model_Pkg(
  outC_RBC__ProcessGeneralMessage_RBC_Model_Pkg *outC)
{
  /* GENERAL_MESSAGE_SM:SEND_GENERAL_MESSAGE:_L33=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_M_ACK#2)/ */
  RadioTrackTrainHeader__Get_M_ACK_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Get_M_ACK_2);
  /* GENERAL_MESSAGE_SM:SEND_GENERAL_MESSAGE:_L34=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#10)/ */
  RadioTrackTrainMessage__GetHeader_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainMessage__GetHeader_10);
  /* GENERAL_MESSAGE_SM:AWAIT_ACKNOWLEDGEMENT:_L6=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#3)/ */
  RadioTrackTrainHeader__Get_NID_MESSAGE_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Get_NID_MESSAGE_3);
  /* GENERAL_MESSAGE_SM:AWAIT_ACKNOWLEDGEMENT:_L8=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_T_TRAIN#2)/ */
  RadioTrackTrainHeader__Get_T_TRAIN_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Get_T_TRAIN_2);
  /* GENERAL_MESSAGE_SM:AWAIT_ACKNOWLEDGEMENT:_L3=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#4)/ */
  RadioTrackTrainMessage__GetHeader_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainMessage__GetHeader_4);
  /* GENERAL_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L16=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_T_TRAIN_Ref#2)/ */
  RadioTrainTrackHeader__Get_T_TRAIN_Ref_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackHeader__Get_T_TRAIN_Ref_2);
  /* GENERAL_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L14=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#5)/ */
  RadioTrainTrackMessage__GetHeader_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackMessage__GetHeader_5);
  /* GENERAL_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L20=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_T_TRAIN#3)/ */
  RadioTrackTrainHeader__Get_T_TRAIN_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Get_T_TRAIN_3);
  /* GENERAL_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L22=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#4)/ */
  RadioTrackTrainHeader__Get_NID_MESSAGE_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Get_NID_MESSAGE_4);
  /* GENERAL_MESSAGE_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L23=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#5)/ */
  RadioTrackTrainMessage__GetHeader_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainMessage__GetHeader_5);
  /* GENERAL_MESSAGE_SM:SEND_GENERAL_MESSAGE:_L20=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut#1)/ */
  RadioTrackTrainMessageQueue__TryPut_reset_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueue__TryPut_1);
  /* GENERAL_MESSAGE_SM:SEND_GENERAL_MESSAGE:_L22=(RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__Create#1)/ */
  RadioTrackTrainMessageQueueEntry__Create_reset_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueueEntry__Create_1);
  /* _L60=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#5)/ */
  RadioTrackTrainHeader__Get_NID_MESSAGE_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Get_NID_MESSAGE_5);
  /* _L61=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#7)/ */
  RadioTrackTrainMessage__GetHeader_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainMessage__GetHeader_7);
  /* _L67=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_MESSAGE#2)/ */
  RadioTrainTrackHeader__Get_NID_MESSAGE_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackHeader__Get_NID_MESSAGE_2);
  /* _L68=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#6)/ */
  RadioTrainTrackMessage__GetHeader_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackMessage__GetHeader_6);
  outC->GENERAL_MESSAGE_SM_reset_act = kcg_false;
  outC->GENERAL_MESSAGE_SM_reset_nxt = kcg_false;
  outC->GENERAL_MESSAGE_SM_state_nxt = SSM_st_IDLE_GENERAL_MESSAGE_SM;
  outC->ackRequired = kcg_false;
  outC->radioTrackTrainMessageWasSentTimestamp = T_TRAIN_MIN;
  outC->validAck = kcg_false;
  outC->invalidAck = kcg_false;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RBC__ProcessGeneralMessage_RBC_Model_Pkg.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

