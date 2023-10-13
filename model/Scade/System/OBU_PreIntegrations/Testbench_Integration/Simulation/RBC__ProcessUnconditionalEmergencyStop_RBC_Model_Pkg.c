/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC__ProcessUnconditionalEmergencyStop_RBC_Model_Pkg.h"

/* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop/ */
void RBC__ProcessUnconditionalEmergencyStop_RBC_Model_Pkg(
  /* inDataBus/ */
  RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* inRadioTrainTrackMessage/ */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  /* inTriggeredRadioTrackTrainMessage/ */
  CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessage,
  outC_RBC__ProcessUnconditionalEmergencyStop_RBC_Model_Pkg *outC)
{
  /* radioTrackTrainMessageWasSentEmergencyStopId/ */
  static NID_EM radioTrackTrainMessageWasSentEmergencyStopId_partial;
  /* messageQueue/ */
  static RadioTrackTrainMessageQueue_T messageQueue_partial;
  /* session/ */
  static SessionManagement_T session_partial;
  /* UNCONDITIONAL_EMERGENCY_STOP_SM: */
  static SSM_ST_UNCONDITIONAL_EMERGENCY_STOP_SM UNCONDITIONAL_EMERGENCY_STOP_SM_state_nxt_partial;
  /* UNCONDITIONAL_EMERGENCY_STOP_SM: */
  static kcg_bool UNCONDITIONAL_EMERGENCY_STOP_SM_reset_nxt_partial;
  /* UNCONDITIONAL_EMERGENCY_STOP_SM: */
  static SSM_TR_UNCONDITIONAL_EMERGENCY_STOP_SM UNCONDITIONAL_EMERGENCY_STOP_SM_fired_partial;
  /* radioTrackTrainMessageWasSentEmergencyStopId/ */
  static NID_EM _1_radioTrackTrainMessageWasSentEmergencyStopId_partial;
  /* messageQueue/ */
  static RadioTrackTrainMessageQueue_T _2_messageQueue_partial;
  /* session/ */
  static SessionManagement_T _3_session_partial;
  /* UNCONDITIONAL_EMERGENCY_STOP_SM: */
  static SSM_ST_UNCONDITIONAL_EMERGENCY_STOP_SM _4_UNCONDITIONAL_EMERGENCY_STOP_SM_state_nxt_partial;
  /* UNCONDITIONAL_EMERGENCY_STOP_SM: */
  static kcg_bool _5_UNCONDITIONAL_EMERGENCY_STOP_SM_reset_nxt_partial;
  /* UNCONDITIONAL_EMERGENCY_STOP_SM: */
  static SSM_TR_UNCONDITIONAL_EMERGENCY_STOP_SM _6_UNCONDITIONAL_EMERGENCY_STOP_SM_fired_partial;
  /* radioTrackTrainMessageWasSentEmergencyStopId/ */
  static NID_EM _7_radioTrackTrainMessageWasSentEmergencyStopId_partial;
  /* messageQueue/ */
  static RadioTrackTrainMessageQueue_T _8_messageQueue_partial;
  /* session/ */
  static SessionManagement_T _9_session_partial;
  /* UNCONDITIONAL_EMERGENCY_STOP_SM: */
  static SSM_ST_UNCONDITIONAL_EMERGENCY_STOP_SM _10_UNCONDITIONAL_EMERGENCY_STOP_SM_state_nxt_partial;
  /* UNCONDITIONAL_EMERGENCY_STOP_SM: */
  static kcg_bool _11_UNCONDITIONAL_EMERGENCY_STOP_SM_reset_nxt_partial;
  /* UNCONDITIONAL_EMERGENCY_STOP_SM: */
  static SSM_TR_UNCONDITIONAL_EMERGENCY_STOP_SM _12_UNCONDITIONAL_EMERGENCY_STOP_SM_fired_partial;
  /* radioTrackTrainMessageWasSentEmergencyStopId/ */
  static NID_EM _13_radioTrackTrainMessageWasSentEmergencyStopId_partial;
  /* messageQueue/ */
  static RadioTrackTrainMessageQueue_T _14_messageQueue_partial;
  /* session/ */
  static SessionManagement_T _15_session_partial;
  /* UNCONDITIONAL_EMERGENCY_STOP_SM: */
  static SSM_ST_UNCONDITIONAL_EMERGENCY_STOP_SM _16_UNCONDITIONAL_EMERGENCY_STOP_SM_state_nxt_partial;
  /* UNCONDITIONAL_EMERGENCY_STOP_SM: */
  static kcg_bool _17_UNCONDITIONAL_EMERGENCY_STOP_SM_reset_nxt_partial;
  /* UNCONDITIONAL_EMERGENCY_STOP_SM: */
  static SSM_TR_UNCONDITIONAL_EMERGENCY_STOP_SM _18_UNCONDITIONAL_EMERGENCY_STOP_SM_fired_partial;
  /* session/ */
  static SessionManagement_T _19_session_partial;
  /* session/ */
  static SessionManagement_T _20_session_partial;
  /* UNCONDITIONAL_EMERGENCY_STOP_SM: */
  static SSM_ST_UNCONDITIONAL_EMERGENCY_STOP_SM UNCONDITIONAL_EMERGENCY_STOP_SM_state_act_partial;
  /* UNCONDITIONAL_EMERGENCY_STOP_SM: */
  static kcg_bool UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act_partial;
  /* UNCONDITIONAL_EMERGENCY_STOP_SM: */
  static SSM_TR_UNCONDITIONAL_EMERGENCY_STOP_SM UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong_partial;
  /* UNCONDITIONAL_EMERGENCY_STOP_SM:IDLE:<1> */
  static kcg_bool tr_1_guard_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM;
  /* UNCONDITIONAL_EMERGENCY_STOP_SM: */
  static SSM_ST_UNCONDITIONAL_EMERGENCY_STOP_SM _21_UNCONDITIONAL_EMERGENCY_STOP_SM_state_act_partial;
  /* UNCONDITIONAL_EMERGENCY_STOP_SM: */
  static kcg_bool _22_UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act_partial;
  /* UNCONDITIONAL_EMERGENCY_STOP_SM: */
  static SSM_TR_UNCONDITIONAL_EMERGENCY_STOP_SM _23_UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong_partial;
  /* UNCONDITIONAL_EMERGENCY_STOP_SM:SEND_UNCONDITIONAL_EMERGENCY_STOP:<2> */
  static kcg_bool tr_2_guard_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM;
  /* UNCONDITIONAL_EMERGENCY_STOP_SM:SEND_UNCONDITIONAL_EMERGENCY_STOP:<1> */
  static kcg_bool tr_1_guard_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM;
  /* UNCONDITIONAL_EMERGENCY_STOP_SM: */
  static SSM_ST_UNCONDITIONAL_EMERGENCY_STOP_SM _24_UNCONDITIONAL_EMERGENCY_STOP_SM_state_act_partial;
  /* UNCONDITIONAL_EMERGENCY_STOP_SM: */
  static kcg_bool _25_UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act_partial;
  /* UNCONDITIONAL_EMERGENCY_STOP_SM: */
  static SSM_TR_UNCONDITIONAL_EMERGENCY_STOP_SM _26_UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong_partial;
  /* UNCONDITIONAL_EMERGENCY_STOP_SM:AWAIT_ACKNOWLEDGEMENT:<1> */
  static kcg_bool tr_1_guard_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
  /* UNCONDITIONAL_EMERGENCY_STOP_SM: */
  static SSM_ST_UNCONDITIONAL_EMERGENCY_STOP_SM _27_UNCONDITIONAL_EMERGENCY_STOP_SM_state_act_partial;
  /* UNCONDITIONAL_EMERGENCY_STOP_SM: */
  static kcg_bool _28_UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act_partial;
  /* UNCONDITIONAL_EMERGENCY_STOP_SM: */
  static SSM_TR_UNCONDITIONAL_EMERGENCY_STOP_SM _29_UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong_partial;
  /* UNCONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:<4> */
  static kcg_bool tr_4_guard_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
  /* UNCONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:<3> */
  static kcg_bool tr_3_guard_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
  /* UNCONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:<2> */
  static kcg_bool tr_2_guard_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
  /* UNCONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:<1> */
  static kcg_bool tr_1_guard_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
  /* invalidAck/ */
  static kcg_bool last_invalidAck;
  /* validAck/ */
  static kcg_bool last_validAck;
  /* radioTrackTrainMessageWasSentEmergencyStopId/ */
  static NID_EM last_radioTrackTrainMessageWasSentEmergencyStopId;
  /* UNCONDITIONAL_EMERGENCY_STOP_SM: */
  static kcg_bool UNCONDITIONAL_EMERGENCY_STOP_SM_reset_sel;
  /* UNCONDITIONAL_EMERGENCY_STOP_SM: */
  static kcg_bool UNCONDITIONAL_EMERGENCY_STOP_SM_reset_prv;

  last_invalidAck = outC->invalidAck;
  last_validAck = outC->validAck;
  last_radioTrackTrainMessageWasSentEmergencyStopId =
    outC->radioTrackTrainMessageWasSentEmergencyStopId;
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->_L81,
    inRadioTrainTrackMessage);
  outC->UNCONDITIONAL_EMERGENCY_STOP_SM_state_sel =
    outC->UNCONDITIONAL_EMERGENCY_STOP_SM_state_nxt;
  switch (outC->UNCONDITIONAL_EMERGENCY_STOP_SM_state_sel) {
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM :
      tr_4_guard_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM =
        last_invalidAck;
      break;
    default :
      /* this branch is empty */
      break;
  }
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->_L68,
    inRadioTrainTrackMessage);
  /* _L66=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#1)/ */
  RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L68,
    &outC->Context_RadioTrainTrackMessage__GetHeader_1);
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
    &outC->_L66,
    &outC->Context_RadioTrainTrackMessage__GetHeader_1.outRadioTrainTrackHeader);
  /* _L67=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_MESSAGE#1)/ */
  RadioTrainTrackHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L66,
    &outC->Context_RadioTrainTrackHeader__Get_NID_MESSAGE_1);
  outC->_L67 =
    outC->Context_RadioTrainTrackHeader__Get_NID_MESSAGE_1.out_NID_MESSAGE;
  outC->radioTrainTrackMessageId = outC->_L67;
  switch (outC->UNCONDITIONAL_EMERGENCY_STOP_SM_state_sel) {
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM :
      tr_3_guard_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM =
        last_invalidAck & (outC->radioTrainTrackMessageId == kcg_lit_int64(147));
      tr_2_guard_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM =
        last_validAck;
      break;
    default :
      /* this branch is empty */
      break;
  }
  kcg_copy_CompressedRadioMessage_TM(
    &outC->_L60,
    inTriggeredRadioTrackTrainMessage);
  kcg_copy_CompressedRadioMessage_TM(&outC->radioTrackTrainMessage, &outC->_L60);
  kcg_copy_CompressedRadioMessage_TM(&outC->_L64, &outC->radioTrackTrainMessage);
  /* _L65=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#1)/ */
  RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_L64,
    &outC->Context_RadioTrackTrainMessage__GetHeader_1);
  kcg_copy_Radio_TrackTrain_Header_T_TM(
    &outC->_L65,
    &outC->Context_RadioTrackTrainMessage__GetHeader_1.outRadioTrackTrainHeader);
  /* _L63=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#1)/ */
  RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_L65,
    &outC->Context_RadioTrackTrainHeader__Get_NID_MESSAGE_1);
  outC->_L63 =
    outC->Context_RadioTrackTrainHeader__Get_NID_MESSAGE_1.out_NID_MESSAGE;
  outC->radioTrackTrainMessageId = outC->_L63;
  /* UNCONDITIONAL_EMERGENCY_STOP_SM: */
  switch (outC->UNCONDITIONAL_EMERGENCY_STOP_SM_state_sel) {
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM :
      tr_1_guard_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM =
        last_validAck & (outC->radioTrackTrainMessageId == kcg_lit_int64(16));
      if (tr_1_guard_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM) {
        _27_UNCONDITIONAL_EMERGENCY_STOP_SM_state_act_partial =
          SSM_st_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      else if (tr_2_guard_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM) {
        _27_UNCONDITIONAL_EMERGENCY_STOP_SM_state_act_partial =
          SSM_st_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      else if (tr_3_guard_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM) {
        _27_UNCONDITIONAL_EMERGENCY_STOP_SM_state_act_partial =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      else if (tr_4_guard_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM) {
        _27_UNCONDITIONAL_EMERGENCY_STOP_SM_state_act_partial =
          SSM_st_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      else {
        _27_UNCONDITIONAL_EMERGENCY_STOP_SM_state_act_partial =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      outC->UNCONDITIONAL_EMERGENCY_STOP_SM_state_act =
        _27_UNCONDITIONAL_EMERGENCY_STOP_SM_state_act_partial;
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM :
      tr_1_guard_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM =
        outC->radioTrainTrackMessageId == kcg_lit_int64(147);
      if (tr_1_guard_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM) {
        _24_UNCONDITIONAL_EMERGENCY_STOP_SM_state_act_partial =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      else {
        _24_UNCONDITIONAL_EMERGENCY_STOP_SM_state_act_partial =
          SSM_st_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      outC->UNCONDITIONAL_EMERGENCY_STOP_SM_state_act =
        _24_UNCONDITIONAL_EMERGENCY_STOP_SM_state_act_partial;
      break;
    case SSM_st_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM :
      tr_2_guard_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM =
        outC->radioTrainTrackMessageId != kcg_lit_int64(147);
      tr_1_guard_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM =
        outC->radioTrainTrackMessageId == kcg_lit_int64(147);
      if (tr_1_guard_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM) {
        _21_UNCONDITIONAL_EMERGENCY_STOP_SM_state_act_partial =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      else if (tr_2_guard_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM) {
        _21_UNCONDITIONAL_EMERGENCY_STOP_SM_state_act_partial =
          SSM_st_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      else {
        _21_UNCONDITIONAL_EMERGENCY_STOP_SM_state_act_partial =
          SSM_st_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      outC->UNCONDITIONAL_EMERGENCY_STOP_SM_state_act =
        _21_UNCONDITIONAL_EMERGENCY_STOP_SM_state_act_partial;
      break;
    case SSM_st_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM :
      tr_1_guard_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM =
        outC->radioTrackTrainMessageId == kcg_lit_int64(16);
      if (tr_1_guard_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM) {
        UNCONDITIONAL_EMERGENCY_STOP_SM_state_act_partial =
          SSM_st_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      else {
        UNCONDITIONAL_EMERGENCY_STOP_SM_state_act_partial =
          SSM_st_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      outC->UNCONDITIONAL_EMERGENCY_STOP_SM_state_act =
        UNCONDITIONAL_EMERGENCY_STOP_SM_state_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* UNCONDITIONAL_EMERGENCY_STOP_SM: */
  switch (outC->UNCONDITIONAL_EMERGENCY_STOP_SM_state_act) {
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM :
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM,
        inDataBus);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->_L40_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM,
        &outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_14_messageQueue_partial,
        &outC->_L40_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->messageQueue,
        &_14_messageQueue_partial);
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM :
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM,
        inDataBus);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->_L3_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM,
        &outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_8_messageQueue_partial,
        &outC->_L3_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->messageQueue,
        &_8_messageQueue_partial);
      break;
    case SSM_st_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM :
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM,
        inDataBus);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->_L62_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM,
        &outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue);
      kcg_copy_CompressedRadioMessage_TM(
        &outC->_L52_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM,
        &outC->radioTrackTrainMessage);
      /* UNCONDITIONAL_EMERGENCY_STOP_SM:SEND_UNCONDITIONAL_EMERGENCY_STOP:_L59=(RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__Create#3)/ */
      RadioTrackTrainMessageQueueEntry__Create_RBC_Collections_Pkg(
        &outC->_L52_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM,
        &outC->Context_RadioTrackTrainMessageQueueEntry__Create_3);
      kcg_copy_RadioTrackTrainMessageQueueEntry_T(
        &outC->_L59_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM,
        &outC->Context_RadioTrackTrainMessageQueueEntry__Create_3.outRadioTrackTrainMessageQueueEntry);
      /* UNCONDITIONAL_EMERGENCY_STOP_SM:SEND_UNCONDITIONAL_EMERGENCY_STOP:_L57=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut#3)/ */
      RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg(
        &outC->_L62_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM,
        &outC->_L59_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM,
        &outC->Context_RadioTrackTrainMessageQueue__TryPut_3);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->_L57_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM,
        &outC->Context_RadioTrackTrainMessageQueue__TryPut_3.outRadioTrackTrainMessageQueue);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_2_messageQueue_partial,
        &outC->_L57_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->messageQueue,
        &_2_messageQueue_partial);
      break;
    case SSM_st_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM :
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM,
        inDataBus);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->_L4_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM,
        &outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &messageQueue_partial,
        &outC->_L4_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->messageQueue,
        &messageQueue_partial);
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  kcg_copy_RadioTrackTrainMessageQueue_T(&outC->_L80, &outC->messageQueue);
  /* UNCONDITIONAL_EMERGENCY_STOP_SM: */
  switch (outC->UNCONDITIONAL_EMERGENCY_STOP_SM_state_act) {
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM :
      kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
        &outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM,
        inRadioTrainTrackMessage);
      /* UNCONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L26=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#3)/ */
      RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
        &outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM,
        &outC->Context_RadioTrainTrackMessage__GetHeader_3);
      kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
        &outC->_L26_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM,
        &outC->Context_RadioTrainTrackMessage__GetHeader_3.outRadioTrainTrackHeader);
      /* UNCONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L38=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_Q_EMERGENCYSTOP#1)/ */
      RadioTrainTrackHeader__Get_Q_EMERGENCYSTOP_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
        &outC->_L26_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM,
        &outC->Context_RadioTrainTrackHeader__Get_Q_EMERGENCYSTOP_1);
      outC->_L38_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM =
        outC->Context_RadioTrainTrackHeader__Get_Q_EMERGENCYSTOP_1.out_Q_EMERGENCYSTOP;
      outC->qualifierEmergencyStop_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM =
        outC->_L38_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
      _13_radioTrackTrainMessageWasSentEmergencyStopId_partial =
        last_radioTrackTrainMessageWasSentEmergencyStopId;
      /* UNCONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L27=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_EM#1)/ */
      RadioTrainTrackHeader__Get_NID_EM_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
        &outC->_L26_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM,
        &outC->Context_RadioTrainTrackHeader__Get_NID_EM_1);
      outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM =
        outC->Context_RadioTrainTrackHeader__Get_NID_EM_1.out_NID_EM;
      outC->emergencyStopId_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM =
        outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
      outC->IfBlock1_clock_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM =
        (outC->emergencyStopId_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM ==
          _13_radioTrackTrainMessageWasSentEmergencyStopId_partial) &
        (outC->qualifierEmergencyStop_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM ==
          Q_EMERGENCYSTOP_Unconditional_Emergency_Stop_accepted);
      /* UNCONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1: */
      if (outC->IfBlock1_clock_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM) {
        kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
          &outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM,
          inDataBus);
        kcg_copy_SessionManagement_T(
          &outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM,
          &outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session);
        /* UNCONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1:then:_L10=(RBC_Session_Pkg::SessionManagement__GetPosData#5)/ */
        SessionManagement__GetPosData_RBC_Session_Pkg(
          &outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM,
          &outC->Context_SessionManagement__GetPosData_5);
        kcg_copy_PosData_T(
          &outC->_L10_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM,
          &outC->Context_SessionManagement__GetPosData_5.outPositionManagement);
        kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
          &outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM,
          inRadioTrainTrackMessage);
        /* UNCONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1:then:_L11=(RBC_Session_Pkg::PosData__Update#5)/ */
        PosData__Update_RBC_Session_Pkg(
          &outC->_L10_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM,
          &outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM,
          &outC->Context_PosData__Update_5);
        kcg_copy_PosData_T(
          &outC->_L11_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM,
          &outC->Context_PosData__Update_5.outPosData);
        /* UNCONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1:then:_L13=(RBC_Session_Pkg::SessionManagement__SetPosData#5)/ */
        SessionManagement__SetPosData_RBC_Session_Pkg(
          &outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM,
          &outC->_L11_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM,
          &outC->Context_SessionManagement__SetPosData_5);
        kcg_copy_SessionManagement_T(
          &outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM,
          &outC->Context_SessionManagement__SetPosData_5.outSessionManagement);
        kcg_copy_SessionManagement_T(
          &_20_session_partial,
          &outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM);
        kcg_copy_SessionManagement_T(&_15_session_partial, &_20_session_partial);
      }
      else {
        kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
          &outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM,
          inDataBus);
        kcg_copy_SessionManagement_T(
          &outC->_L3_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM,
          &outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session);
        kcg_copy_SessionManagement_T(
          &_19_session_partial,
          &outC->_L3_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM);
        kcg_copy_SessionManagement_T(&_15_session_partial, &_19_session_partial);
      }
      kcg_copy_SessionManagement_T(&outC->session, &_15_session_partial);
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM :
      kcg_copy_SessionManagement_T(
        &outC->_L5_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM,
        &outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session);
      kcg_copy_SessionManagement_T(
        &_9_session_partial,
        &outC->_L5_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM);
      kcg_copy_SessionManagement_T(&outC->session, &_9_session_partial);
      break;
    case SSM_st_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM :
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM,
        inDataBus);
      kcg_copy_SessionManagement_T(
        &outC->_L64_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM,
        &outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session);
      kcg_copy_SessionManagement_T(
        &_3_session_partial,
        &outC->_L64_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM);
      kcg_copy_SessionManagement_T(&outC->session, &_3_session_partial);
      break;
    case SSM_st_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM :
      kcg_copy_SessionManagement_T(
        &outC->_L3_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM,
        &outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.session);
      kcg_copy_SessionManagement_T(
        &session_partial,
        &outC->_L3_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM);
      kcg_copy_SessionManagement_T(&outC->session, &session_partial);
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  kcg_copy_SessionManagement_T(&outC->_L77, &outC->session);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->_L75, inDataBus);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->_L78, &outC->_L75);
  if (kcg_true) {
    kcg_copy_RadioTrackTrainMessageQueue_T(&outC->_L78.messageQueue, &outC->_L80);
  }
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->_L79, &outC->_L78);
  if (kcg_true) {
    kcg_copy_SessionManagement_T(&outC->_L79.session, &outC->_L77);
  }
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->outDataBus, &outC->_L79);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->_L74,
    inTriggeredRadioTrackTrainMessage);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->outTriggeredRadioTrackTrainMessage,
    &outC->_L74);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->outRadioTrainTrackMessage,
    &outC->_L81);
  /* UNCONDITIONAL_EMERGENCY_STOP_SM: */
  switch (outC->UNCONDITIONAL_EMERGENCY_STOP_SM_state_sel) {
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM :
      if (tr_1_guard_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM) {
        _29_UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong_partial =
          SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_SEND_UNCONDITIONAL_EMERGENCY_STOP_1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      else if (tr_2_guard_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM) {
        _29_UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong_partial =
          SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_IDLE_2_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      else if (tr_3_guard_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM) {
        _29_UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong_partial =
          SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_TRY_PROCESS_ACKNOWLEDGEMENT_3_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      else if (tr_4_guard_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM) {
        _29_UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong_partial =
          SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_AWAIT_ACKNOWLEDGEMENT_4_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      else {
        _29_UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong_partial =
          SSM_TR_no_trans_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      outC->UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong =
        _29_UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong_partial;
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM :
      if (tr_1_guard_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM) {
        _26_UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong_partial =
          SSM_TR_AWAIT_ACKNOWLEDGEMENT_TRY_PROCESS_ACKNOWLEDGEMENT_1_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      else {
        _26_UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong_partial =
          SSM_TR_no_trans_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      outC->UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong =
        _26_UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong_partial;
      break;
    case SSM_st_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM :
      if (tr_1_guard_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM) {
        _23_UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong_partial =
          SSM_TR_SEND_UNCONDITIONAL_EMERGENCY_STOP_TRY_PROCESS_ACKNOWLEDGEMENT_1_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      else if (tr_2_guard_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM) {
        _23_UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong_partial =
          SSM_TR_SEND_UNCONDITIONAL_EMERGENCY_STOP_AWAIT_ACKNOWLEDGEMENT_2_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      else {
        _23_UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong_partial =
          SSM_TR_no_trans_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      outC->UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong =
        _23_UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong_partial;
      break;
    case SSM_st_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM :
      if (tr_1_guard_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM) {
        UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong_partial =
          SSM_TR_IDLE_SEND_UNCONDITIONAL_EMERGENCY_STOP_1_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      else {
        UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong_partial =
          SSM_TR_no_trans_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      outC->UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong =
        UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* UNCONDITIONAL_EMERGENCY_STOP_SM: */
  switch (outC->UNCONDITIONAL_EMERGENCY_STOP_SM_state_act) {
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM :
      _18_UNCONDITIONAL_EMERGENCY_STOP_SM_fired_partial =
        outC->UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong;
      _17_UNCONDITIONAL_EMERGENCY_STOP_SM_reset_nxt_partial = kcg_false;
      _16_UNCONDITIONAL_EMERGENCY_STOP_SM_state_nxt_partial =
        SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
      outC->radioTrackTrainMessageWasSentEmergencyStopId =
        _13_radioTrackTrainMessageWasSentEmergencyStopId_partial;
      outC->UNCONDITIONAL_EMERGENCY_STOP_SM_state_nxt =
        _16_UNCONDITIONAL_EMERGENCY_STOP_SM_state_nxt_partial;
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM :
      _7_radioTrackTrainMessageWasSentEmergencyStopId_partial =
        last_radioTrackTrainMessageWasSentEmergencyStopId;
      _12_UNCONDITIONAL_EMERGENCY_STOP_SM_fired_partial =
        outC->UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong;
      _11_UNCONDITIONAL_EMERGENCY_STOP_SM_reset_nxt_partial = kcg_false;
      _10_UNCONDITIONAL_EMERGENCY_STOP_SM_state_nxt_partial =
        SSM_st_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
      outC->radioTrackTrainMessageWasSentEmergencyStopId =
        _7_radioTrackTrainMessageWasSentEmergencyStopId_partial;
      outC->UNCONDITIONAL_EMERGENCY_STOP_SM_state_nxt =
        _10_UNCONDITIONAL_EMERGENCY_STOP_SM_state_nxt_partial;
      break;
    case SSM_st_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM :
      _6_UNCONDITIONAL_EMERGENCY_STOP_SM_fired_partial =
        outC->UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong;
      _5_UNCONDITIONAL_EMERGENCY_STOP_SM_reset_nxt_partial = kcg_false;
      _4_UNCONDITIONAL_EMERGENCY_STOP_SM_state_nxt_partial =
        SSM_st_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM;
      /* UNCONDITIONAL_EMERGENCY_STOP_SM:SEND_UNCONDITIONAL_EMERGENCY_STOP:_L56=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#3)/ */
      RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &outC->_L52_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM,
        &outC->Context_RadioTrackTrainMessage__GetHeader_3);
      kcg_copy_Radio_TrackTrain_Header_T_TM(
        &outC->_L56_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM,
        &outC->Context_RadioTrackTrainMessage__GetHeader_3.outRadioTrackTrainHeader);
      /* UNCONDITIONAL_EMERGENCY_STOP_SM:SEND_UNCONDITIONAL_EMERGENCY_STOP:_L54=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_EM#1)/ */
      RadioTrackTrainHeader__Get_NID_EM_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &outC->_L56_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM,
        &outC->Context_RadioTrackTrainHeader__Get_NID_EM_1);
      outC->_L54_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM =
        outC->Context_RadioTrackTrainHeader__Get_NID_EM_1.out_NID_EM;
      _1_radioTrackTrainMessageWasSentEmergencyStopId_partial =
        outC->_L54_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM;
      outC->radioTrackTrainMessageWasSentEmergencyStopId =
        _1_radioTrackTrainMessageWasSentEmergencyStopId_partial;
      outC->UNCONDITIONAL_EMERGENCY_STOP_SM_state_nxt =
        _4_UNCONDITIONAL_EMERGENCY_STOP_SM_state_nxt_partial;
      break;
    case SSM_st_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM :
      radioTrackTrainMessageWasSentEmergencyStopId_partial =
        last_radioTrackTrainMessageWasSentEmergencyStopId;
      UNCONDITIONAL_EMERGENCY_STOP_SM_fired_partial =
        outC->UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong;
      UNCONDITIONAL_EMERGENCY_STOP_SM_reset_nxt_partial = kcg_false;
      UNCONDITIONAL_EMERGENCY_STOP_SM_state_nxt_partial =
        SSM_st_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM;
      outC->radioTrackTrainMessageWasSentEmergencyStopId =
        radioTrackTrainMessageWasSentEmergencyStopId_partial;
      outC->UNCONDITIONAL_EMERGENCY_STOP_SM_state_nxt =
        UNCONDITIONAL_EMERGENCY_STOP_SM_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  UNCONDITIONAL_EMERGENCY_STOP_SM_reset_sel =
    outC->UNCONDITIONAL_EMERGENCY_STOP_SM_reset_nxt;
  /* UNCONDITIONAL_EMERGENCY_STOP_SM: */
  switch (outC->UNCONDITIONAL_EMERGENCY_STOP_SM_state_act) {
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM :
      outC->UNCONDITIONAL_EMERGENCY_STOP_SM_reset_nxt =
        _17_UNCONDITIONAL_EMERGENCY_STOP_SM_reset_nxt_partial;
      outC->UNCONDITIONAL_EMERGENCY_STOP_SM_fired =
        _18_UNCONDITIONAL_EMERGENCY_STOP_SM_fired_partial;
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM :
      outC->UNCONDITIONAL_EMERGENCY_STOP_SM_reset_nxt =
        _11_UNCONDITIONAL_EMERGENCY_STOP_SM_reset_nxt_partial;
      outC->UNCONDITIONAL_EMERGENCY_STOP_SM_fired =
        _12_UNCONDITIONAL_EMERGENCY_STOP_SM_fired_partial;
      break;
    case SSM_st_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM :
      outC->UNCONDITIONAL_EMERGENCY_STOP_SM_reset_nxt =
        _5_UNCONDITIONAL_EMERGENCY_STOP_SM_reset_nxt_partial;
      outC->UNCONDITIONAL_EMERGENCY_STOP_SM_fired =
        _6_UNCONDITIONAL_EMERGENCY_STOP_SM_fired_partial;
      break;
    case SSM_st_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM :
      outC->UNCONDITIONAL_EMERGENCY_STOP_SM_reset_nxt =
        UNCONDITIONAL_EMERGENCY_STOP_SM_reset_nxt_partial;
      outC->UNCONDITIONAL_EMERGENCY_STOP_SM_fired =
        UNCONDITIONAL_EMERGENCY_STOP_SM_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->UNCONDITIONAL_EMERGENCY_STOP_SM_state_sel) {
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM :
      if (tr_1_guard_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM) {
        _28_UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act_partial = kcg_true;
      }
      else if (tr_2_guard_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM) {
        _28_UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act_partial = kcg_true;
      }
      else if (tr_3_guard_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM) {
        _28_UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act_partial = kcg_true;
      }
      else {
        _28_UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act_partial =
          tr_4_guard_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM :
      _25_UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act_partial =
        tr_1_guard_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
      break;
    case SSM_st_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM :
      if (tr_1_guard_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM) {
        _22_UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act_partial = kcg_true;
      }
      else {
        _22_UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act_partial =
          tr_2_guard_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      break;
    case SSM_st_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM :
      UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act_partial =
        tr_1_guard_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  UNCONDITIONAL_EMERGENCY_STOP_SM_reset_prv =
    outC->UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act;
  /* UNCONDITIONAL_EMERGENCY_STOP_SM: */
  switch (outC->UNCONDITIONAL_EMERGENCY_STOP_SM_state_sel) {
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM :
      outC->UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act =
        _28_UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act_partial;
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM :
      outC->UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act =
        _25_UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act_partial;
      break;
    case SSM_st_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM :
      outC->UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act =
        _22_UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act_partial;
      break;
    case SSM_st_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM :
      outC->UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act =
        UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* UNCONDITIONAL_EMERGENCY_STOP_SM: */
  switch (outC->UNCONDITIONAL_EMERGENCY_STOP_SM_state_act) {
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM :
      /* UNCONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1: */
      if (outC->IfBlock1_clock_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM) {
        outC->validAck = kcg_true;
        outC->invalidAck = kcg_false;
      }
      else {
        outC->validAck = kcg_false;
        outC->invalidAck = kcg_true;
      }
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM :
      outC->validAck = kcg_false;
      outC->invalidAck = kcg_false;
      break;
    case SSM_st_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM :
      outC->validAck = kcg_false;
      outC->invalidAck = kcg_false;
      break;
    case SSM_st_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM :
      outC->validAck = kcg_false;
      outC->invalidAck = kcg_false;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void RBC__ProcessUnconditionalEmergencyStop_init_RBC_Model_Pkg(
  outC_RBC__ProcessUnconditionalEmergencyStop_RBC_Model_Pkg *outC)
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
  static kcg_size idx200;
  static kcg_size idx201;
  static kcg_size idx202;
  static kcg_size idx203;
  static kcg_size idx204;
  static kcg_size idx205;
  static kcg_size idx206;
  static kcg_size idx207;

  outC->_L74.Header.radioDevice = kcg_lit_int64(0);
  outC->_L74.Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L74.Header.nid_message = kcg_lit_int64(0);
  outC->_L74.Header.t_train = kcg_lit_int64(0);
  outC->_L74.Header.m_ack = kcg_lit_int64(0);
  outC->_L74.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L74.Header.t_train_reference = kcg_lit_int64(0);
  outC->_L74.Header.nid_em = kcg_lit_int64(0);
  outC->_L74.Header.q_scale = kcg_lit_int64(0);
  outC->_L74.Header.d_sr = kcg_lit_int64(0);
  outC->_L74.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L74.Header.d_ref = kcg_lit_int64(0);
  outC->_L74.Header.q_dir = kcg_lit_int64(0);
  outC->_L74.Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L74.Header.m_version = kcg_lit_int64(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L74.Messages.PacketHeaders[idx].nid_packet = kcg_lit_int64(0);
    outC->_L74.Messages.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L74.Messages.PacketHeaders[idx].valid = kcg_true;
    outC->_L74.Messages.PacketHeaders[idx].startAddress = kcg_lit_int64(0);
    outC->_L74.Messages.PacketHeaders[idx].endAddress = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L74.Messages.PacketData[idx1] = kcg_lit_int64(0);
  }
  outC->_L75.session.m_TrainData.nid_engine = kcg_lit_int64(0);
  outC->_L75.session.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 1; idx3++) {
    outC->_L75.session.m_TrainData.m_OnboardPhoneNumbers[idx3].valid = kcg_true;
    for (idx2 = 0; idx2 < 15; idx2++) {
      outC->_L75.session.m_TrainData.m_OnboardPhoneNumbers[idx3].telephoneNumber[idx2] =
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
  for (idx4 = 0; idx4 < 4; idx4++) {
    outC->_L75.session.m_TrainData.m_TractionIdentities[idx4].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L75.session.m_TrainData.m_TractionIdentities[idx4].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 5; idx5++) {
    outC->_L75.session.m_TrainData.m_NationalSystemIdentities[idx5] =
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
  for (idx6 = 0; idx6 < 32; idx6++) {
    outC->_L75.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx6].d_loc =
      kcg_lit_int64(0);
    outC->_L75.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx6].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx7 = 0; idx7 < 16; idx7++) {
    outC->_L75.diagnostic[idx7].valid = kcg_true;
    outC->_L75.diagnostic[idx7].count = kcg_lit_int64(0);
    outC->_L75.diagnostic[idx7].timestamp = kcg_lit_int64(0);
    outC->_L75.diagnostic[idx7].diagType = DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L75.diagnostic[idx7].diagSrc = DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L75.diagnostic[idx7].diagText = DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx10 = 0; idx10 < 8; idx10++) {
    outC->_L75.messageQueue.m_Entries[idx10].m_IsValid = kcg_true;
    outC->_L75.messageQueue.m_Entries[idx10].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L75.messageQueue.m_Entries[idx10].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L75.messageQueue.m_Entries[idx10].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L75.messageQueue.m_Entries[idx10].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L75.messageQueue.m_Entries[idx10].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L75.messageQueue.m_Entries[idx10].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L75.messageQueue.m_Entries[idx10].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L75.messageQueue.m_Entries[idx10].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L75.messageQueue.m_Entries[idx10].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L75.messageQueue.m_Entries[idx10].m_Entry.Header.d_sr = kcg_lit_int64(0);
    outC->_L75.messageQueue.m_Entries[idx10].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L75.messageQueue.m_Entries[idx10].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L75.messageQueue.m_Entries[idx10].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L75.messageQueue.m_Entries[idx10].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L75.messageQueue.m_Entries[idx10].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx8 = 0; idx8 < 30; idx8++) {
      outC->_L75.messageQueue.m_Entries[idx10].m_Entry.Messages.PacketHeaders[idx8].nid_packet =
        kcg_lit_int64(0);
      outC->_L75.messageQueue.m_Entries[idx10].m_Entry.Messages.PacketHeaders[idx8].q_dir =
        Q_DIR_Reverse;
      outC->_L75.messageQueue.m_Entries[idx10].m_Entry.Messages.PacketHeaders[idx8].valid =
        kcg_true;
      outC->_L75.messageQueue.m_Entries[idx10].m_Entry.Messages.PacketHeaders[idx8].startAddress =
        kcg_lit_int64(0);
      outC->_L75.messageQueue.m_Entries[idx10].m_Entry.Messages.PacketHeaders[idx8].endAddress =
        kcg_lit_int64(0);
    }
    for (idx9 = 0; idx9 < 500; idx9++) {
      outC->_L75.messageQueue.m_Entries[idx10].m_Entry.Messages.PacketData[idx9] =
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
  for (idx11 = 0; idx11 < 30; idx11++) {
    outC->_L75.lastSentTrackTrainMessage.Messages.PacketHeaders[idx11].nid_packet =
      kcg_lit_int64(0);
    outC->_L75.lastSentTrackTrainMessage.Messages.PacketHeaders[idx11].q_dir =
      Q_DIR_Reverse;
    outC->_L75.lastSentTrackTrainMessage.Messages.PacketHeaders[idx11].valid =
      kcg_true;
    outC->_L75.lastSentTrackTrainMessage.Messages.PacketHeaders[idx11].startAddress =
      kcg_lit_int64(0);
    outC->_L75.lastSentTrackTrainMessage.Messages.PacketHeaders[idx11].endAddress =
      kcg_lit_int64(0);
  }
  for (idx12 = 0; idx12 < 500; idx12++) {
    outC->_L75.lastSentTrackTrainMessage.Messages.PacketData[idx12] =
      kcg_lit_int64(0);
  }
  outC->_L77.m_TrainData.nid_engine = kcg_lit_int64(0);
  outC->_L77.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int64(0);
  for (idx14 = 0; idx14 < 1; idx14++) {
    outC->_L77.m_TrainData.m_OnboardPhoneNumbers[idx14].valid = kcg_true;
    for (idx13 = 0; idx13 < 15; idx13++) {
      outC->_L77.m_TrainData.m_OnboardPhoneNumbers[idx14].telephoneNumber[idx13] =
        kcg_lit_int64(0);
    }
  }
  outC->_L77.m_TrainData.t_train_ref = kcg_lit_int64(0);
  outC->_L77.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L77.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L77.m_TrainData.l_train = kcg_lit_int64(0);
  outC->_L77.m_TrainData.v_maxtrain = kcg_lit_int64(0);
  outC->_L77.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L77.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L77.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L77.m_TrainData.n_axle = kcg_lit_int64(0);
  for (idx15 = 0; idx15 < 4; idx15++) {
    outC->_L77.m_TrainData.m_TractionIdentities[idx15].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L77.m_TrainData.m_TractionIdentities[idx15].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx16 = 0; idx16 < 5; idx16++) {
    outC->_L77.m_TrainData.m_NationalSystemIdentities[idx16] = kcg_lit_int64(0);
  }
  outC->_L77.m_TrainData.nid_operational = kcg_lit_int64(0);
  outC->_L77.m_PosData.nid_lrbg = kcg_lit_int64(0);
  outC->_L77.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L77.m_PosData.d_lrbg = kcg_lit_int64(0);
  outC->_L77.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L77.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L77.m_PosData.l_doubtover = kcg_lit_int64(0);
  outC->_L77.m_PosData.l_doubtunder = kcg_lit_int64(0);
  outC->_L77.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L77.m_PosData.l_trainint = kcg_lit_int64(0);
  outC->_L77.m_PosData.v_train = kcg_lit_int64(0);
  outC->_L77.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L77.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L77.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L77.m_PosData.nid_ntc = kcg_lit_int64(0);
  outC->_L77.m_PosData.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L78.session.m_TrainData.nid_engine = kcg_lit_int64(0);
  outC->_L78.session.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int64(0);
  for (idx18 = 0; idx18 < 1; idx18++) {
    outC->_L78.session.m_TrainData.m_OnboardPhoneNumbers[idx18].valid = kcg_true;
    for (idx17 = 0; idx17 < 15; idx17++) {
      outC->_L78.session.m_TrainData.m_OnboardPhoneNumbers[idx18].telephoneNumber[idx17] =
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
  for (idx19 = 0; idx19 < 4; idx19++) {
    outC->_L78.session.m_TrainData.m_TractionIdentities[idx19].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L78.session.m_TrainData.m_TractionIdentities[idx19].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx20 = 0; idx20 < 5; idx20++) {
    outC->_L78.session.m_TrainData.m_NationalSystemIdentities[idx20] =
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
  for (idx21 = 0; idx21 < 32; idx21++) {
    outC->_L78.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx21].d_loc =
      kcg_lit_int64(0);
    outC->_L78.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx21].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx22 = 0; idx22 < 16; idx22++) {
    outC->_L78.diagnostic[idx22].valid = kcg_true;
    outC->_L78.diagnostic[idx22].count = kcg_lit_int64(0);
    outC->_L78.diagnostic[idx22].timestamp = kcg_lit_int64(0);
    outC->_L78.diagnostic[idx22].diagType = DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L78.diagnostic[idx22].diagSrc = DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L78.diagnostic[idx22].diagText = DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx25 = 0; idx25 < 8; idx25++) {
    outC->_L78.messageQueue.m_Entries[idx25].m_IsValid = kcg_true;
    outC->_L78.messageQueue.m_Entries[idx25].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L78.messageQueue.m_Entries[idx25].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L78.messageQueue.m_Entries[idx25].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L78.messageQueue.m_Entries[idx25].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L78.messageQueue.m_Entries[idx25].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L78.messageQueue.m_Entries[idx25].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L78.messageQueue.m_Entries[idx25].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L78.messageQueue.m_Entries[idx25].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L78.messageQueue.m_Entries[idx25].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L78.messageQueue.m_Entries[idx25].m_Entry.Header.d_sr = kcg_lit_int64(0);
    outC->_L78.messageQueue.m_Entries[idx25].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L78.messageQueue.m_Entries[idx25].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L78.messageQueue.m_Entries[idx25].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L78.messageQueue.m_Entries[idx25].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L78.messageQueue.m_Entries[idx25].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx23 = 0; idx23 < 30; idx23++) {
      outC->_L78.messageQueue.m_Entries[idx25].m_Entry.Messages.PacketHeaders[idx23].nid_packet =
        kcg_lit_int64(0);
      outC->_L78.messageQueue.m_Entries[idx25].m_Entry.Messages.PacketHeaders[idx23].q_dir =
        Q_DIR_Reverse;
      outC->_L78.messageQueue.m_Entries[idx25].m_Entry.Messages.PacketHeaders[idx23].valid =
        kcg_true;
      outC->_L78.messageQueue.m_Entries[idx25].m_Entry.Messages.PacketHeaders[idx23].startAddress =
        kcg_lit_int64(0);
      outC->_L78.messageQueue.m_Entries[idx25].m_Entry.Messages.PacketHeaders[idx23].endAddress =
        kcg_lit_int64(0);
    }
    for (idx24 = 0; idx24 < 500; idx24++) {
      outC->_L78.messageQueue.m_Entries[idx25].m_Entry.Messages.PacketData[idx24] =
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
  for (idx26 = 0; idx26 < 30; idx26++) {
    outC->_L78.lastSentTrackTrainMessage.Messages.PacketHeaders[idx26].nid_packet =
      kcg_lit_int64(0);
    outC->_L78.lastSentTrackTrainMessage.Messages.PacketHeaders[idx26].q_dir =
      Q_DIR_Reverse;
    outC->_L78.lastSentTrackTrainMessage.Messages.PacketHeaders[idx26].valid =
      kcg_true;
    outC->_L78.lastSentTrackTrainMessage.Messages.PacketHeaders[idx26].startAddress =
      kcg_lit_int64(0);
    outC->_L78.lastSentTrackTrainMessage.Messages.PacketHeaders[idx26].endAddress =
      kcg_lit_int64(0);
  }
  for (idx27 = 0; idx27 < 500; idx27++) {
    outC->_L78.lastSentTrackTrainMessage.Messages.PacketData[idx27] =
      kcg_lit_int64(0);
  }
  outC->_L79.session.m_TrainData.nid_engine = kcg_lit_int64(0);
  outC->_L79.session.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int64(0);
  for (idx29 = 0; idx29 < 1; idx29++) {
    outC->_L79.session.m_TrainData.m_OnboardPhoneNumbers[idx29].valid = kcg_true;
    for (idx28 = 0; idx28 < 15; idx28++) {
      outC->_L79.session.m_TrainData.m_OnboardPhoneNumbers[idx29].telephoneNumber[idx28] =
        kcg_lit_int64(0);
    }
  }
  outC->_L79.session.m_TrainData.t_train_ref = kcg_lit_int64(0);
  outC->_L79.session.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L79.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L79.session.m_TrainData.l_train = kcg_lit_int64(0);
  outC->_L79.session.m_TrainData.v_maxtrain = kcg_lit_int64(0);
  outC->_L79.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L79.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L79.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L79.session.m_TrainData.n_axle = kcg_lit_int64(0);
  for (idx30 = 0; idx30 < 4; idx30++) {
    outC->_L79.session.m_TrainData.m_TractionIdentities[idx30].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L79.session.m_TrainData.m_TractionIdentities[idx30].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx31 = 0; idx31 < 5; idx31++) {
    outC->_L79.session.m_TrainData.m_NationalSystemIdentities[idx31] =
      kcg_lit_int64(0);
  }
  outC->_L79.session.m_TrainData.nid_operational = kcg_lit_int64(0);
  outC->_L79.session.m_PosData.nid_lrbg = kcg_lit_int64(0);
  outC->_L79.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L79.session.m_PosData.d_lrbg = kcg_lit_int64(0);
  outC->_L79.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L79.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L79.session.m_PosData.l_doubtover = kcg_lit_int64(0);
  outC->_L79.session.m_PosData.l_doubtunder = kcg_lit_int64(0);
  outC->_L79.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L79.session.m_PosData.l_trainint = kcg_lit_int64(0);
  outC->_L79.session.m_PosData.v_train = kcg_lit_int64(0);
  outC->_L79.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L79.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L79.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L79.session.m_PosData.nid_ntc = kcg_lit_int64(0);
  outC->_L79.session.m_PosData.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L79.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L79.config.m_NationalParams.nid_c = kcg_lit_int64(0);
  outC->_L79.config.m_NationalParams.v_nvshunt = kcg_lit_int64(0);
  outC->_L79.config.m_NationalParams.v_nvstff = kcg_lit_int64(0);
  outC->_L79.config.m_NationalParams.v_nvonsight = kcg_lit_int64(0);
  outC->_L79.config.m_NationalParams.v_nvunfit = kcg_lit_int64(0);
  outC->_L79.config.m_NationalParams.v_nvrel = kcg_lit_int64(0);
  outC->_L79.config.m_NationalParams.t_nvcontact = kcg_lit_int64(0);
  outC->_L79.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L79.config.m_MAReqParams.t_mar = kcg_lit_int64(0);
  outC->_L79.config.m_MAReqParams.t_timeoutrqst = kcg_lit_int64(0);
  outC->_L79.config.m_MAReqParams.t_cycrqst = kcg_lit_int64(0);
  outC->_L79.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L79.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L79.config.m_PosRepParams.t_cycloc = kcg_lit_int64(0);
  outC->_L79.config.m_PosRepParams.d_cycloc = kcg_lit_int64(0);
  outC->_L79.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L79.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx32 = 0; idx32 < 32; idx32++) {
    outC->_L79.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx32].d_loc =
      kcg_lit_int64(0);
    outC->_L79.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx32].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx33 = 0; idx33 < 16; idx33++) {
    outC->_L79.diagnostic[idx33].valid = kcg_true;
    outC->_L79.diagnostic[idx33].count = kcg_lit_int64(0);
    outC->_L79.diagnostic[idx33].timestamp = kcg_lit_int64(0);
    outC->_L79.diagnostic[idx33].diagType = DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L79.diagnostic[idx33].diagSrc = DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L79.diagnostic[idx33].diagText = DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx36 = 0; idx36 < 8; idx36++) {
    outC->_L79.messageQueue.m_Entries[idx36].m_IsValid = kcg_true;
    outC->_L79.messageQueue.m_Entries[idx36].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L79.messageQueue.m_Entries[idx36].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L79.messageQueue.m_Entries[idx36].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L79.messageQueue.m_Entries[idx36].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L79.messageQueue.m_Entries[idx36].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L79.messageQueue.m_Entries[idx36].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L79.messageQueue.m_Entries[idx36].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L79.messageQueue.m_Entries[idx36].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L79.messageQueue.m_Entries[idx36].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L79.messageQueue.m_Entries[idx36].m_Entry.Header.d_sr = kcg_lit_int64(0);
    outC->_L79.messageQueue.m_Entries[idx36].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L79.messageQueue.m_Entries[idx36].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L79.messageQueue.m_Entries[idx36].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L79.messageQueue.m_Entries[idx36].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L79.messageQueue.m_Entries[idx36].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx34 = 0; idx34 < 30; idx34++) {
      outC->_L79.messageQueue.m_Entries[idx36].m_Entry.Messages.PacketHeaders[idx34].nid_packet =
        kcg_lit_int64(0);
      outC->_L79.messageQueue.m_Entries[idx36].m_Entry.Messages.PacketHeaders[idx34].q_dir =
        Q_DIR_Reverse;
      outC->_L79.messageQueue.m_Entries[idx36].m_Entry.Messages.PacketHeaders[idx34].valid =
        kcg_true;
      outC->_L79.messageQueue.m_Entries[idx36].m_Entry.Messages.PacketHeaders[idx34].startAddress =
        kcg_lit_int64(0);
      outC->_L79.messageQueue.m_Entries[idx36].m_Entry.Messages.PacketHeaders[idx34].endAddress =
        kcg_lit_int64(0);
    }
    for (idx35 = 0; idx35 < 500; idx35++) {
      outC->_L79.messageQueue.m_Entries[idx36].m_Entry.Messages.PacketData[idx35] =
        kcg_lit_int64(0);
    }
  }
  outC->_L79.clockk.m_Value = kcg_lit_int64(0);
  outC->_L79.lastSentTrackTrainMessage.Header.radioDevice = kcg_lit_int64(0);
  outC->_L79.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L79.lastSentTrackTrainMessage.Header.nid_message = kcg_lit_int64(0);
  outC->_L79.lastSentTrackTrainMessage.Header.t_train = kcg_lit_int64(0);
  outC->_L79.lastSentTrackTrainMessage.Header.m_ack = kcg_lit_int64(0);
  outC->_L79.lastSentTrackTrainMessage.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L79.lastSentTrackTrainMessage.Header.t_train_reference = kcg_lit_int64(
      0);
  outC->_L79.lastSentTrackTrainMessage.Header.nid_em = kcg_lit_int64(0);
  outC->_L79.lastSentTrackTrainMessage.Header.q_scale = kcg_lit_int64(0);
  outC->_L79.lastSentTrackTrainMessage.Header.d_sr = kcg_lit_int64(0);
  outC->_L79.lastSentTrackTrainMessage.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L79.lastSentTrackTrainMessage.Header.d_ref = kcg_lit_int64(0);
  outC->_L79.lastSentTrackTrainMessage.Header.q_dir = kcg_lit_int64(0);
  outC->_L79.lastSentTrackTrainMessage.Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L79.lastSentTrackTrainMessage.Header.m_version = kcg_lit_int64(0);
  for (idx37 = 0; idx37 < 30; idx37++) {
    outC->_L79.lastSentTrackTrainMessage.Messages.PacketHeaders[idx37].nid_packet =
      kcg_lit_int64(0);
    outC->_L79.lastSentTrackTrainMessage.Messages.PacketHeaders[idx37].q_dir =
      Q_DIR_Reverse;
    outC->_L79.lastSentTrackTrainMessage.Messages.PacketHeaders[idx37].valid =
      kcg_true;
    outC->_L79.lastSentTrackTrainMessage.Messages.PacketHeaders[idx37].startAddress =
      kcg_lit_int64(0);
    outC->_L79.lastSentTrackTrainMessage.Messages.PacketHeaders[idx37].endAddress =
      kcg_lit_int64(0);
  }
  for (idx38 = 0; idx38 < 500; idx38++) {
    outC->_L79.lastSentTrackTrainMessage.Messages.PacketData[idx38] =
      kcg_lit_int64(0);
  }
  for (idx41 = 0; idx41 < 8; idx41++) {
    outC->_L80.m_Entries[idx41].m_IsValid = kcg_true;
    outC->_L80.m_Entries[idx41].m_Entry.Header.radioDevice = kcg_lit_int64(0);
    outC->_L80.m_Entries[idx41].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L80.m_Entries[idx41].m_Entry.Header.nid_message = kcg_lit_int64(0);
    outC->_L80.m_Entries[idx41].m_Entry.Header.t_train = kcg_lit_int64(0);
    outC->_L80.m_Entries[idx41].m_Entry.Header.m_ack = kcg_lit_int64(0);
    outC->_L80.m_Entries[idx41].m_Entry.Header.nid_lrbg = kcg_lit_int64(0);
    outC->_L80.m_Entries[idx41].m_Entry.Header.t_train_reference = kcg_lit_int64(0);
    outC->_L80.m_Entries[idx41].m_Entry.Header.nid_em = kcg_lit_int64(0);
    outC->_L80.m_Entries[idx41].m_Entry.Header.q_scale = kcg_lit_int64(0);
    outC->_L80.m_Entries[idx41].m_Entry.Header.d_sr = kcg_lit_int64(0);
    outC->_L80.m_Entries[idx41].m_Entry.Header.t_sh_rqst = kcg_lit_int64(0);
    outC->_L80.m_Entries[idx41].m_Entry.Header.d_ref = kcg_lit_int64(0);
    outC->_L80.m_Entries[idx41].m_Entry.Header.q_dir = kcg_lit_int64(0);
    outC->_L80.m_Entries[idx41].m_Entry.Header.d_emergencystop = kcg_lit_int64(0);
    outC->_L80.m_Entries[idx41].m_Entry.Header.m_version = kcg_lit_int64(0);
    for (idx39 = 0; idx39 < 30; idx39++) {
      outC->_L80.m_Entries[idx41].m_Entry.Messages.PacketHeaders[idx39].nid_packet =
        kcg_lit_int64(0);
      outC->_L80.m_Entries[idx41].m_Entry.Messages.PacketHeaders[idx39].q_dir =
        Q_DIR_Reverse;
      outC->_L80.m_Entries[idx41].m_Entry.Messages.PacketHeaders[idx39].valid =
        kcg_true;
      outC->_L80.m_Entries[idx41].m_Entry.Messages.PacketHeaders[idx39].startAddress =
        kcg_lit_int64(0);
      outC->_L80.m_Entries[idx41].m_Entry.Messages.PacketHeaders[idx39].endAddress =
        kcg_lit_int64(0);
    }
    for (idx40 = 0; idx40 < 500; idx40++) {
      outC->_L80.m_Entries[idx41].m_Entry.Messages.PacketData[idx40] =
        kcg_lit_int64(0);
    }
  }
  outC->_L81.present = kcg_true;
  outC->_L81.header.present = kcg_true;
  outC->_L81.header.nid_message = kcg_lit_int64(0);
  outC->_L81.header.t_train = kcg_lit_int64(0);
  outC->_L81.header.nid_engine = kcg_lit_int64(0);
  outC->_L81.header.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L81.header.xT_TRAIN = kcg_lit_int64(0);
  outC->_L81.header.xNID_EM = kcg_lit_int64(0);
  outC->_L81.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L81.header.xNID_TEXTMESSAGE = kcg_lit_int64(0);
  outC->_L81.packets.p0.valid = kcg_true;
  outC->_L81.packets.p0.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L81.packets.p0.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L81.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L81.packets.p0.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L81.packets.p0.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L81.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L81.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L81.packets.p0.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L81.packets.p0.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L81.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L81.packets.p0.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L81.packets.p0.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L81.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L81.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L81.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L81.packets.p0.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L81.packets.p1.valid = kcg_true;
  outC->_L81.packets.p1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L81.packets.p1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L81.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L81.packets.p1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L81.packets.p1.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L81.packets.p1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L81.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L81.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L81.packets.p1.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L81.packets.p1.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L81.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L81.packets.p1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L81.packets.p1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L81.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L81.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L81.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L81.packets.p1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L81.packets.p3.valid = kcg_true;
  outC->_L81.packets.p3.number = kcg_lit_int64(0);
  for (idx43 = 0; idx43 < 1; idx43++) {
    outC->_L81.packets.p3.aNID_RADIO[idx43].valid = kcg_true;
    for (idx42 = 0; idx42 < 15; idx42++) {
      outC->_L81.packets.p3.aNID_RADIO[idx43].telephoneNumber[idx42] =
        kcg_lit_int64(0);
    }
  }
  outC->_L81.packets.p4.valid = kcg_true;
  outC->_L81.packets.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L81.packets.p5.valid = kcg_true;
  outC->_L81.packets.p5.TrainRunningNumber = kcg_lit_int64(0);
  outC->_L81.packets.p9.valid = kcg_true;
  outC->_L81.packets.p9.transitionInformation = kcg_lit_int64(0);
  outC->_L81.packets.p11.valid = kcg_true;
  outC->_L81.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L81.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L81.packets.p11.l_train = kcg_lit_int64(0);
  outC->_L81.packets.p11.v_maxtrain = kcg_lit_int64(0);
  outC->_L81.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L81.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L81.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L81.packets.p11.n_axle = kcg_lit_int64(0);
  outC->_L81.packets.p11.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx44 = 0; idx44 < 4; idx44++) {
    outC->_L81.packets.p11.tractionIdentity[idx44].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L81.packets.p11.tractionIdentity[idx44].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L81.packets.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx45 = 0; idx45 < 5; idx45++) {
    outC->_L81.packets.p11.nid_ntc[idx45] = kcg_lit_int64(0);
  }
  outC->_L66.present = kcg_true;
  outC->_L66.nid_message = kcg_lit_int64(0);
  outC->_L66.t_train = kcg_lit_int64(0);
  outC->_L66.nid_engine = kcg_lit_int64(0);
  outC->_L66.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L66.xT_TRAIN = kcg_lit_int64(0);
  outC->_L66.xNID_EM = kcg_lit_int64(0);
  outC->_L66.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L66.xNID_TEXTMESSAGE = kcg_lit_int64(0);
  outC->_L67 = kcg_lit_int64(0);
  outC->_L68.present = kcg_true;
  outC->_L68.header.present = kcg_true;
  outC->_L68.header.nid_message = kcg_lit_int64(0);
  outC->_L68.header.t_train = kcg_lit_int64(0);
  outC->_L68.header.nid_engine = kcg_lit_int64(0);
  outC->_L68.header.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L68.header.xT_TRAIN = kcg_lit_int64(0);
  outC->_L68.header.xNID_EM = kcg_lit_int64(0);
  outC->_L68.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L68.header.xNID_TEXTMESSAGE = kcg_lit_int64(0);
  outC->_L68.packets.p0.valid = kcg_true;
  outC->_L68.packets.p0.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L68.packets.p0.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L68.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L68.packets.p0.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L68.packets.p0.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L68.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L68.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L68.packets.p0.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L68.packets.p0.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L68.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L68.packets.p0.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L68.packets.p0.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L68.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L68.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L68.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L68.packets.p0.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L68.packets.p1.valid = kcg_true;
  outC->_L68.packets.p1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L68.packets.p1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L68.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L68.packets.p1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L68.packets.p1.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L68.packets.p1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L68.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L68.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L68.packets.p1.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L68.packets.p1.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L68.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L68.packets.p1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L68.packets.p1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L68.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L68.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L68.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L68.packets.p1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L68.packets.p3.valid = kcg_true;
  outC->_L68.packets.p3.number = kcg_lit_int64(0);
  for (idx47 = 0; idx47 < 1; idx47++) {
    outC->_L68.packets.p3.aNID_RADIO[idx47].valid = kcg_true;
    for (idx46 = 0; idx46 < 15; idx46++) {
      outC->_L68.packets.p3.aNID_RADIO[idx47].telephoneNumber[idx46] =
        kcg_lit_int64(0);
    }
  }
  outC->_L68.packets.p4.valid = kcg_true;
  outC->_L68.packets.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L68.packets.p5.valid = kcg_true;
  outC->_L68.packets.p5.TrainRunningNumber = kcg_lit_int64(0);
  outC->_L68.packets.p9.valid = kcg_true;
  outC->_L68.packets.p9.transitionInformation = kcg_lit_int64(0);
  outC->_L68.packets.p11.valid = kcg_true;
  outC->_L68.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L68.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L68.packets.p11.l_train = kcg_lit_int64(0);
  outC->_L68.packets.p11.v_maxtrain = kcg_lit_int64(0);
  outC->_L68.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L68.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L68.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L68.packets.p11.n_axle = kcg_lit_int64(0);
  outC->_L68.packets.p11.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx48 = 0; idx48 < 4; idx48++) {
    outC->_L68.packets.p11.tractionIdentity[idx48].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L68.packets.p11.tractionIdentity[idx48].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L68.packets.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx49 = 0; idx49 < 5; idx49++) {
    outC->_L68.packets.p11.nid_ntc[idx49] = kcg_lit_int64(0);
  }
  outC->_L63 = kcg_lit_int64(0);
  outC->_L64.Header.radioDevice = kcg_lit_int64(0);
  outC->_L64.Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L64.Header.nid_message = kcg_lit_int64(0);
  outC->_L64.Header.t_train = kcg_lit_int64(0);
  outC->_L64.Header.m_ack = kcg_lit_int64(0);
  outC->_L64.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L64.Header.t_train_reference = kcg_lit_int64(0);
  outC->_L64.Header.nid_em = kcg_lit_int64(0);
  outC->_L64.Header.q_scale = kcg_lit_int64(0);
  outC->_L64.Header.d_sr = kcg_lit_int64(0);
  outC->_L64.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L64.Header.d_ref = kcg_lit_int64(0);
  outC->_L64.Header.q_dir = kcg_lit_int64(0);
  outC->_L64.Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L64.Header.m_version = kcg_lit_int64(0);
  for (idx50 = 0; idx50 < 30; idx50++) {
    outC->_L64.Messages.PacketHeaders[idx50].nid_packet = kcg_lit_int64(0);
    outC->_L64.Messages.PacketHeaders[idx50].q_dir = Q_DIR_Reverse;
    outC->_L64.Messages.PacketHeaders[idx50].valid = kcg_true;
    outC->_L64.Messages.PacketHeaders[idx50].startAddress = kcg_lit_int64(0);
    outC->_L64.Messages.PacketHeaders[idx50].endAddress = kcg_lit_int64(0);
  }
  for (idx51 = 0; idx51 < 500; idx51++) {
    outC->_L64.Messages.PacketData[idx51] = kcg_lit_int64(0);
  }
  outC->_L65.radioDevice = kcg_lit_int64(0);
  outC->_L65.receivedSystemTime = kcg_lit_int64(0);
  outC->_L65.nid_message = kcg_lit_int64(0);
  outC->_L65.t_train = kcg_lit_int64(0);
  outC->_L65.m_ack = kcg_lit_int64(0);
  outC->_L65.nid_lrbg = kcg_lit_int64(0);
  outC->_L65.t_train_reference = kcg_lit_int64(0);
  outC->_L65.nid_em = kcg_lit_int64(0);
  outC->_L65.q_scale = kcg_lit_int64(0);
  outC->_L65.d_sr = kcg_lit_int64(0);
  outC->_L65.t_sh_rqst = kcg_lit_int64(0);
  outC->_L65.d_ref = kcg_lit_int64(0);
  outC->_L65.q_dir = kcg_lit_int64(0);
  outC->_L65.d_emergencystop = kcg_lit_int64(0);
  outC->_L65.m_version = kcg_lit_int64(0);
  outC->_L60.Header.radioDevice = kcg_lit_int64(0);
  outC->_L60.Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L60.Header.nid_message = kcg_lit_int64(0);
  outC->_L60.Header.t_train = kcg_lit_int64(0);
  outC->_L60.Header.m_ack = kcg_lit_int64(0);
  outC->_L60.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L60.Header.t_train_reference = kcg_lit_int64(0);
  outC->_L60.Header.nid_em = kcg_lit_int64(0);
  outC->_L60.Header.q_scale = kcg_lit_int64(0);
  outC->_L60.Header.d_sr = kcg_lit_int64(0);
  outC->_L60.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L60.Header.d_ref = kcg_lit_int64(0);
  outC->_L60.Header.q_dir = kcg_lit_int64(0);
  outC->_L60.Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L60.Header.m_version = kcg_lit_int64(0);
  for (idx52 = 0; idx52 < 30; idx52++) {
    outC->_L60.Messages.PacketHeaders[idx52].nid_packet = kcg_lit_int64(0);
    outC->_L60.Messages.PacketHeaders[idx52].q_dir = Q_DIR_Reverse;
    outC->_L60.Messages.PacketHeaders[idx52].valid = kcg_true;
    outC->_L60.Messages.PacketHeaders[idx52].startAddress = kcg_lit_int64(0);
    outC->_L60.Messages.PacketHeaders[idx52].endAddress = kcg_lit_int64(0);
  }
  for (idx53 = 0; idx53 < 500; idx53++) {
    outC->_L60.Messages.PacketData[idx53] = kcg_lit_int64(0);
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
  outC->UNCONDITIONAL_EMERGENCY_STOP_SM_fired =
    SSM_TR_no_trans_UNCONDITIONAL_EMERGENCY_STOP_SM;
  outC->UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong =
    SSM_TR_no_trans_UNCONDITIONAL_EMERGENCY_STOP_SM;
  outC->UNCONDITIONAL_EMERGENCY_STOP_SM_state_act =
    SSM_st_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM;
  outC->UNCONDITIONAL_EMERGENCY_STOP_SM_state_sel =
    SSM_st_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM;
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx64 = 0; idx64 < 1; idx64++) {
    outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_OnboardPhoneNumbers[idx64].valid =
      kcg_true;
    for (idx63 = 0; idx63 < 15; idx63++) {
      outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_OnboardPhoneNumbers[idx64].telephoneNumber[idx63] =
        kcg_lit_int64(0);
    }
  }
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx65 = 0; idx65 < 4; idx65++) {
    outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_TractionIdentities[idx65].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_TractionIdentities[idx65].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx66 = 0; idx66 < 5; idx66++) {
    outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_NationalSystemIdentities[idx66] =
      kcg_lit_int64(0);
  }
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx68 = 0; idx68 < 1; idx68++) {
    outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx68].valid =
      kcg_true;
    for (idx67 = 0; idx67 < 15; idx67++) {
      outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx68].telephoneNumber[idx67] =
        kcg_lit_int64(0);
    }
  }
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx69 = 0; idx69 < 4; idx69++) {
    outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_TractionIdentities[idx69].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_TractionIdentities[idx69].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx70 = 0; idx70 < 5; idx70++) {
    outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_NationalSystemIdentities[idx70] =
      kcg_lit_int64(0);
  }
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.nid_c =
    kcg_lit_int64(0);
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvshunt =
    kcg_lit_int64(0);
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvstff =
    kcg_lit_int64(0);
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvonsight =
    kcg_lit_int64(0);
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvunfit =
    kcg_lit_int64(0);
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvrel =
    kcg_lit_int64(0);
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.t_nvcontact =
    kcg_lit_int64(0);
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.q_dir =
    Q_DIR_Reverse;
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.t_mar =
    kcg_lit_int64(0);
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.t_timeoutrqst =
    kcg_lit_int64(0);
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.t_cycrqst =
    kcg_lit_int64(0);
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.q_dir =
    Q_DIR_Reverse;
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.t_cycloc =
    kcg_lit_int64(0);
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.d_cycloc =
    kcg_lit_int64(0);
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_loc =
    M_LOC_Now;
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx71 = 0; idx71 < 32; idx71++) {
    outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx71].d_loc =
      kcg_lit_int64(0);
    outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx71].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx72 = 0; idx72 < 16; idx72++) {
    outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx72].valid =
      kcg_true;
    outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx72].count =
      kcg_lit_int64(0);
    outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx72].timestamp =
      kcg_lit_int64(0);
    outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx72].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx72].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx72].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx75 = 0; idx75 < 8; idx75++) {
    outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx75].m_IsValid =
      kcg_true;
    outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx75].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx75].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx75].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx75].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx75].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx75].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx75].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx75].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx75].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx75].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx75].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx75].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx75].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx75].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx75].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx73 = 0; idx73 < 30; idx73++) {
      outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx75].m_Entry.Messages.PacketHeaders[idx73].nid_packet =
        kcg_lit_int64(0);
      outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx75].m_Entry.Messages.PacketHeaders[idx73].q_dir =
        Q_DIR_Reverse;
      outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx75].m_Entry.Messages.PacketHeaders[idx73].valid =
        kcg_true;
      outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx75].m_Entry.Messages.PacketHeaders[idx73].startAddress =
        kcg_lit_int64(0);
      outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx75].m_Entry.Messages.PacketHeaders[idx73].endAddress =
        kcg_lit_int64(0);
    }
    for (idx74 = 0; idx74 < 500; idx74++) {
      outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx75].m_Entry.Messages.PacketData[idx74] =
        kcg_lit_int64(0);
    }
  }
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.clockk.m_Value =
    kcg_lit_int64(0);
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int64(0);
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int64(0);
  for (idx76 = 0; idx76 < 30; idx76++) {
    outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx76].nid_packet =
      kcg_lit_int64(0);
    outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx76].q_dir =
      Q_DIR_Reverse;
    outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx76].valid =
      kcg_true;
    outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx76].startAddress =
      kcg_lit_int64(0);
    outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx76].endAddress =
      kcg_lit_int64(0);
  }
  for (idx77 = 0; idx77 < 500; idx77++) {
    outC->_L15_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketData[idx77] =
      kcg_lit_int64(0);
  }
  outC->_L10_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L10_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L10_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.d_lrbg =
    kcg_lit_int64(0);
  outC->_L10_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L10_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L10_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.l_doubtover =
    kcg_lit_int64(0);
  outC->_L10_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L10_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L10_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.l_trainint =
    kcg_lit_int64(0);
  outC->_L10_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.v_train =
    kcg_lit_int64(0);
  outC->_L10_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L10_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_mode =
    M_MODE_Full_Supervision;
  outC->_L10_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_level =
    M_LEVEL_Level_0;
  outC->_L10_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.nid_ntc =
    kcg_lit_int64(0);
  outC->_L10_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L11_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L11_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L11_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.d_lrbg =
    kcg_lit_int64(0);
  outC->_L11_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L11_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L11_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.l_doubtover =
    kcg_lit_int64(0);
  outC->_L11_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L11_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L11_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.l_trainint =
    kcg_lit_int64(0);
  outC->_L11_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.v_train =
    kcg_lit_int64(0);
  outC->_L11_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L11_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_mode =
    M_MODE_Full_Supervision;
  outC->_L11_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_level =
    M_LEVEL_Level_0;
  outC->_L11_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.nid_ntc =
    kcg_lit_int64(0);
  outC->_L11_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.present =
    kcg_true;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.header.present =
    kcg_true;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.header.nid_message =
    kcg_lit_int64(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.header.t_train =
    kcg_lit_int64(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.header.nid_engine =
    kcg_lit_int64(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.header.xT_TRAIN =
    kcg_lit_int64(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.header.xNID_EM =
    kcg_lit_int64(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.header.xNID_TEXTMESSAGE =
    kcg_lit_int64(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p0.valid =
    kcg_true;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.NID_PACKET =
    kcg_lit_int64(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.L_PACKET =
    kcg_lit_int64(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.qscale =
    Q_SCALE_10_cm_scale;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.NID_LRBG =
    kcg_lit_int64(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.D_LRBG =
    kcg_lit_int64(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.dlrbg =
    Q_DLRBG_Reverse;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.L_DOUBTOVER =
    kcg_lit_int64(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.L_DOUBTUNDER =
    kcg_lit_int64(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.L_TRAININT =
    kcg_lit_int64(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.V_TRAIN =
    kcg_lit_int64(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.mode =
    M_MODE_Full_Supervision;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.level =
    M_LEVEL_Level_0;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.NID_NTC =
    kcg_lit_int64(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p1.valid =
    kcg_true;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.NID_PACKET =
    kcg_lit_int64(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.L_PACKET =
    kcg_lit_int64(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.qscale =
    Q_SCALE_10_cm_scale;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.NID_LRBG =
    kcg_lit_int64(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.NID_PRVLRBG =
    kcg_lit_int64(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.D_LRBG =
    kcg_lit_int64(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.dlrbg =
    Q_DLRBG_Reverse;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.L_DOUBTOVER =
    kcg_lit_int64(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.L_DOUBTUNDER =
    kcg_lit_int64(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.L_TRAININT =
    kcg_lit_int64(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.V_TRAIN =
    kcg_lit_int64(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.mode =
    M_MODE_Full_Supervision;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.level =
    M_LEVEL_Level_0;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.NID_NTC =
    kcg_lit_int64(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p3.valid =
    kcg_true;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p3.number =
    kcg_lit_int64(0);
  for (idx79 = 0; idx79 < 1; idx79++) {
    outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p3.aNID_RADIO[idx79].valid =
      kcg_true;
    for (idx78 = 0; idx78 < 15; idx78++) {
      outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p3.aNID_RADIO[idx79].telephoneNumber[idx78] =
        kcg_lit_int64(0);
    }
  }
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p4.valid =
    kcg_true;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p5.valid =
    kcg_true;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p5.TrainRunningNumber =
    kcg_lit_int64(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p9.valid =
    kcg_true;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p9.transitionInformation =
    kcg_lit_int64(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p11.valid =
    kcg_true;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p11.l_train =
    kcg_lit_int64(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p11.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p11.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p11.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p11.n_axle =
    kcg_lit_int64(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p11.nIter_tractionIdentity =
    kcg_lit_int64(0);
  for (idx80 = 0; idx80 < 4; idx80++) {
    outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p11.tractionIdentity[idx80].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p11.tractionIdentity[idx80].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p11.nIter_ntc =
    kcg_lit_int64(0);
  for (idx81 = 0; idx81 < 5; idx81++) {
    outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p11.nid_ntc[idx81] =
      kcg_lit_int64(0);
  }
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx83 = 0; idx83 < 1; idx83++) {
    outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_OnboardPhoneNumbers[idx83].valid =
      kcg_true;
    for (idx82 = 0; idx82 < 15; idx82++) {
      outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_OnboardPhoneNumbers[idx83].telephoneNumber[idx82] =
        kcg_lit_int64(0);
    }
  }
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx84 = 0; idx84 < 4; idx84++) {
    outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_TractionIdentities[idx84].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_TractionIdentities[idx84].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx85 = 0; idx85 < 5; idx85++) {
    outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_NationalSystemIdentities[idx85] =
      kcg_lit_int64(0);
  }
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx87 = 0; idx87 < 1; idx87++) {
    outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx87].valid =
      kcg_true;
    for (idx86 = 0; idx86 < 15; idx86++) {
      outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx87].telephoneNumber[idx86] =
        kcg_lit_int64(0);
    }
  }
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx88 = 0; idx88 < 4; idx88++) {
    outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_TractionIdentities[idx88].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_TractionIdentities[idx88].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx89 = 0; idx89 < 5; idx89++) {
    outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_NationalSystemIdentities[idx89] =
      kcg_lit_int64(0);
  }
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.nid_c =
    kcg_lit_int64(0);
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvshunt =
    kcg_lit_int64(0);
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvstff =
    kcg_lit_int64(0);
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvonsight =
    kcg_lit_int64(0);
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvunfit =
    kcg_lit_int64(0);
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvrel =
    kcg_lit_int64(0);
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.t_nvcontact =
    kcg_lit_int64(0);
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.q_dir =
    Q_DIR_Reverse;
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.t_mar =
    kcg_lit_int64(0);
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.t_timeoutrqst =
    kcg_lit_int64(0);
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.t_cycrqst =
    kcg_lit_int64(0);
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.q_dir =
    Q_DIR_Reverse;
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.t_cycloc =
    kcg_lit_int64(0);
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.d_cycloc =
    kcg_lit_int64(0);
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_loc =
    M_LOC_Now;
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx90 = 0; idx90 < 32; idx90++) {
    outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx90].d_loc =
      kcg_lit_int64(0);
    outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx90].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx91 = 0; idx91 < 16; idx91++) {
    outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx91].valid =
      kcg_true;
    outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx91].count =
      kcg_lit_int64(0);
    outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx91].timestamp =
      kcg_lit_int64(0);
    outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx91].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx91].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx91].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx94 = 0; idx94 < 8; idx94++) {
    outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx94].m_IsValid =
      kcg_true;
    outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx94].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx94].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx94].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx94].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx94].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx94].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx94].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx94].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx94].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx94].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx94].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx94].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx94].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx94].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx94].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx92 = 0; idx92 < 30; idx92++) {
      outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx94].m_Entry.Messages.PacketHeaders[idx92].nid_packet =
        kcg_lit_int64(0);
      outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx94].m_Entry.Messages.PacketHeaders[idx92].q_dir =
        Q_DIR_Reverse;
      outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx94].m_Entry.Messages.PacketHeaders[idx92].valid =
        kcg_true;
      outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx94].m_Entry.Messages.PacketHeaders[idx92].startAddress =
        kcg_lit_int64(0);
      outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx94].m_Entry.Messages.PacketHeaders[idx92].endAddress =
        kcg_lit_int64(0);
    }
    for (idx93 = 0; idx93 < 500; idx93++) {
      outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx94].m_Entry.Messages.PacketData[idx93] =
        kcg_lit_int64(0);
    }
  }
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.clockk.m_Value =
    kcg_lit_int64(0);
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int64(0);
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int64(0);
  for (idx95 = 0; idx95 < 30; idx95++) {
    outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx95].nid_packet =
      kcg_lit_int64(0);
    outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx95].q_dir =
      Q_DIR_Reverse;
    outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx95].valid =
      kcg_true;
    outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx95].startAddress =
      kcg_lit_int64(0);
    outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx95].endAddress =
      kcg_lit_int64(0);
  }
  for (idx96 = 0; idx96 < 500; idx96++) {
    outC->_L2_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketData[idx96] =
      kcg_lit_int64(0);
  }
  outC->_L3_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx98 = 0; idx98 < 1; idx98++) {
    outC->_L3_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_OnboardPhoneNumbers[idx98].valid =
      kcg_true;
    for (idx97 = 0; idx97 < 15; idx97++) {
      outC->_L3_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_OnboardPhoneNumbers[idx98].telephoneNumber[idx97] =
        kcg_lit_int64(0);
    }
  }
  outC->_L3_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L3_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L3_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L3_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L3_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L3_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx99 = 0; idx99 < 4; idx99++) {
    outC->_L3_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_TractionIdentities[idx99].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L3_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_TractionIdentities[idx99].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx100 = 0; idx100 < 5; idx100++) {
    outC->_L3_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_NationalSystemIdentities[idx100] =
      kcg_lit_int64(0);
  }
  outC->_L3_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L3_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L3_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L3_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L3_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L3_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L3_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L3_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->IfBlock1_clock_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM =
    kcg_true;
  outC->emergencyStopId_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM =
    kcg_lit_int64(0);
  outC->qualifierEmergencyStop_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.present =
    kcg_true;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.header.present =
    kcg_true;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.header.nid_message =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.header.t_train =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.header.nid_engine =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.header.xT_TRAIN =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.header.xNID_EM =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.header.xNID_TEXTMESSAGE =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p0.valid =
    kcg_true;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.NID_PACKET =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.L_PACKET =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.qscale =
    Q_SCALE_10_cm_scale;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.NID_LRBG =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.D_LRBG =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.dlrbg =
    Q_DLRBG_Reverse;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.L_DOUBTOVER =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.L_DOUBTUNDER =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.L_TRAININT =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.V_TRAIN =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.mode =
    M_MODE_Full_Supervision;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.level =
    M_LEVEL_Level_0;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.NID_NTC =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p1.valid =
    kcg_true;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.NID_PACKET =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.L_PACKET =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.qscale =
    Q_SCALE_10_cm_scale;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.NID_LRBG =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.NID_PRVLRBG =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.D_LRBG =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.dlrbg =
    Q_DLRBG_Reverse;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.L_DOUBTOVER =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.L_DOUBTUNDER =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.L_TRAININT =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.V_TRAIN =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.mode =
    M_MODE_Full_Supervision;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.level =
    M_LEVEL_Level_0;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.NID_NTC =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p3.valid =
    kcg_true;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p3.number =
    kcg_lit_int64(0);
  for (idx102 = 0; idx102 < 1; idx102++) {
    outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p3.aNID_RADIO[idx102].valid =
      kcg_true;
    for (idx101 = 0; idx101 < 15; idx101++) {
      outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p3.aNID_RADIO[idx102].telephoneNumber[idx101] =
        kcg_lit_int64(0);
    }
  }
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p4.valid =
    kcg_true;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p5.valid =
    kcg_true;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p5.TrainRunningNumber =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p9.valid =
    kcg_true;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p9.transitionInformation =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p11.valid =
    kcg_true;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p11.l_train =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p11.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p11.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p11.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p11.n_axle =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p11.nIter_tractionIdentity =
    kcg_lit_int64(0);
  for (idx103 = 0; idx103 < 4; idx103++) {
    outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p11.tractionIdentity[idx103].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p11.tractionIdentity[idx103].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p11.nIter_ntc =
    kcg_lit_int64(0);
  for (idx104 = 0; idx104 < 5; idx104++) {
    outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.packets.p11.nid_ntc[idx104] =
      kcg_lit_int64(0);
  }
  outC->_L26_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.present =
    kcg_true;
  outC->_L26_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.nid_message =
    kcg_lit_int64(0);
  outC->_L26_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.t_train =
    kcg_lit_int64(0);
  outC->_L26_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.nid_engine =
    kcg_lit_int64(0);
  outC->_L26_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L26_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.xT_TRAIN =
    kcg_lit_int64(0);
  outC->_L26_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.xNID_EM =
    kcg_lit_int64(0);
  outC->_L26_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L26_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.xNID_TEXTMESSAGE =
    kcg_lit_int64(0);
  outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM =
    kcg_lit_int64(0);
  outC->_L38_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx106 = 0; idx106 < 1; idx106++) {
    outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx106].valid =
      kcg_true;
    for (idx105 = 0; idx105 < 15; idx105++) {
      outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx106].telephoneNumber[idx105] =
        kcg_lit_int64(0);
    }
  }
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx107 = 0; idx107 < 4; idx107++) {
    outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_TractionIdentities[idx107].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_TractionIdentities[idx107].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx108 = 0; idx108 < 5; idx108++) {
    outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_NationalSystemIdentities[idx108] =
      kcg_lit_int64(0);
  }
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.nid_c =
    kcg_lit_int64(0);
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvshunt =
    kcg_lit_int64(0);
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvstff =
    kcg_lit_int64(0);
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvonsight =
    kcg_lit_int64(0);
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvunfit =
    kcg_lit_int64(0);
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvrel =
    kcg_lit_int64(0);
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.t_nvcontact =
    kcg_lit_int64(0);
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.q_dir =
    Q_DIR_Reverse;
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.t_mar =
    kcg_lit_int64(0);
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.t_timeoutrqst =
    kcg_lit_int64(0);
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.t_cycrqst =
    kcg_lit_int64(0);
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.q_dir =
    Q_DIR_Reverse;
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.t_cycloc =
    kcg_lit_int64(0);
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.d_cycloc =
    kcg_lit_int64(0);
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_loc =
    M_LOC_Now;
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx109 = 0; idx109 < 32; idx109++) {
    outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx109].d_loc =
      kcg_lit_int64(0);
    outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx109].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx110 = 0; idx110 < 16; idx110++) {
    outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx110].valid =
      kcg_true;
    outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx110].count =
      kcg_lit_int64(0);
    outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx110].timestamp =
      kcg_lit_int64(0);
    outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx110].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx110].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx110].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx113 = 0; idx113 < 8; idx113++) {
    outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx113].m_IsValid =
      kcg_true;
    outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx113].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx113].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx113].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx113].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx113].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx113].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx113].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx113].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx113].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx113].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx113].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx113].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx113].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx113].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx113].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx111 = 0; idx111 < 30; idx111++) {
      outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx113].m_Entry.Messages.PacketHeaders[idx111].nid_packet =
        kcg_lit_int64(0);
      outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx113].m_Entry.Messages.PacketHeaders[idx111].q_dir =
        Q_DIR_Reverse;
      outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx113].m_Entry.Messages.PacketHeaders[idx111].valid =
        kcg_true;
      outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx113].m_Entry.Messages.PacketHeaders[idx111].startAddress =
        kcg_lit_int64(0);
      outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx113].m_Entry.Messages.PacketHeaders[idx111].endAddress =
        kcg_lit_int64(0);
    }
    for (idx112 = 0; idx112 < 500; idx112++) {
      outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx113].m_Entry.Messages.PacketData[idx112] =
        kcg_lit_int64(0);
    }
  }
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.clockk.m_Value =
    kcg_lit_int64(0);
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int64(0);
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int64(0);
  for (idx114 = 0; idx114 < 30; idx114++) {
    outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx114].nid_packet =
      kcg_lit_int64(0);
    outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx114].q_dir =
      Q_DIR_Reverse;
    outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx114].valid =
      kcg_true;
    outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx114].startAddress =
      kcg_lit_int64(0);
    outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx114].endAddress =
      kcg_lit_int64(0);
  }
  for (idx115 = 0; idx115 < 500; idx115++) {
    outC->_L41_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketData[idx115] =
      kcg_lit_int64(0);
  }
  for (idx118 = 0; idx118 < 8; idx118++) {
    outC->_L40_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx118].m_IsValid =
      kcg_true;
    outC->_L40_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx118].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L40_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx118].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L40_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx118].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L40_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx118].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L40_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx118].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L40_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx118].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L40_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx118].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L40_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx118].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L40_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx118].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L40_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx118].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L40_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx118].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L40_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx118].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L40_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx118].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L40_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx118].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L40_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx118].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx116 = 0; idx116 < 30; idx116++) {
      outC->_L40_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx118].m_Entry.Messages.PacketHeaders[idx116].nid_packet =
        kcg_lit_int64(0);
      outC->_L40_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx118].m_Entry.Messages.PacketHeaders[idx116].q_dir =
        Q_DIR_Reverse;
      outC->_L40_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx118].m_Entry.Messages.PacketHeaders[idx116].valid =
        kcg_true;
      outC->_L40_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx118].m_Entry.Messages.PacketHeaders[idx116].startAddress =
        kcg_lit_int64(0);
      outC->_L40_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx118].m_Entry.Messages.PacketHeaders[idx116].endAddress =
        kcg_lit_int64(0);
    }
    for (idx117 = 0; idx117 < 500; idx117++) {
      outC->_L40_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx118].m_Entry.Messages.PacketData[idx117] =
        kcg_lit_int64(0);
    }
  }
  outC->_L5_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L5_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx120 = 0; idx120 < 1; idx120++) {
    outC->_L5_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_OnboardPhoneNumbers[idx120].valid =
      kcg_true;
    for (idx119 = 0; idx119 < 15; idx119++) {
      outC->_L5_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_OnboardPhoneNumbers[idx120].telephoneNumber[idx119] =
        kcg_lit_int64(0);
    }
  }
  outC->_L5_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L5_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L5_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L5_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L5_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L5_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L5_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L5_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L5_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx121 = 0; idx121 < 4; idx121++) {
    outC->_L5_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_TractionIdentities[idx121].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L5_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_TractionIdentities[idx121].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx122 = 0; idx122 < 5; idx122++) {
    outC->_L5_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_NationalSystemIdentities[idx122] =
      kcg_lit_int64(0);
  }
  outC->_L5_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L5_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L5_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L5_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L5_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L5_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L5_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L5_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L5_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L5_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L5_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L5_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L5_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L5_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L5_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L5_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx124 = 0; idx124 < 1; idx124++) {
    outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx124].valid =
      kcg_true;
    for (idx123 = 0; idx123 < 15; idx123++) {
      outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx124].telephoneNumber[idx123] =
        kcg_lit_int64(0);
    }
  }
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx125 = 0; idx125 < 4; idx125++) {
    outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_TractionIdentities[idx125].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_TractionIdentities[idx125].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx126 = 0; idx126 < 5; idx126++) {
    outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_NationalSystemIdentities[idx126] =
      kcg_lit_int64(0);
  }
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.nid_c =
    kcg_lit_int64(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvshunt =
    kcg_lit_int64(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvstff =
    kcg_lit_int64(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvonsight =
    kcg_lit_int64(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvunfit =
    kcg_lit_int64(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvrel =
    kcg_lit_int64(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.t_nvcontact =
    kcg_lit_int64(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.q_dir =
    Q_DIR_Reverse;
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.t_mar =
    kcg_lit_int64(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.t_timeoutrqst =
    kcg_lit_int64(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.t_cycrqst =
    kcg_lit_int64(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.q_dir =
    Q_DIR_Reverse;
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.t_cycloc =
    kcg_lit_int64(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.d_cycloc =
    kcg_lit_int64(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_loc =
    M_LOC_Now;
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx127 = 0; idx127 < 32; idx127++) {
    outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx127].d_loc =
      kcg_lit_int64(0);
    outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx127].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx128 = 0; idx128 < 16; idx128++) {
    outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx128].valid =
      kcg_true;
    outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx128].count =
      kcg_lit_int64(0);
    outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx128].timestamp =
      kcg_lit_int64(0);
    outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx128].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx128].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx128].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx131 = 0; idx131 < 8; idx131++) {
    outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx131].m_IsValid =
      kcg_true;
    outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx131].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx131].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx131].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx131].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx131].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx131].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx131].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx131].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx131].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx131].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx131].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx131].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx131].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx131].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx131].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx129 = 0; idx129 < 30; idx129++) {
      outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx131].m_Entry.Messages.PacketHeaders[idx129].nid_packet =
        kcg_lit_int64(0);
      outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx131].m_Entry.Messages.PacketHeaders[idx129].q_dir =
        Q_DIR_Reverse;
      outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx131].m_Entry.Messages.PacketHeaders[idx129].valid =
        kcg_true;
      outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx131].m_Entry.Messages.PacketHeaders[idx129].startAddress =
        kcg_lit_int64(0);
      outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx131].m_Entry.Messages.PacketHeaders[idx129].endAddress =
        kcg_lit_int64(0);
    }
    for (idx130 = 0; idx130 < 500; idx130++) {
      outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx131].m_Entry.Messages.PacketData[idx130] =
        kcg_lit_int64(0);
    }
  }
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.clockk.m_Value =
    kcg_lit_int64(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int64(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int64(0);
  for (idx132 = 0; idx132 < 30; idx132++) {
    outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx132].nid_packet =
      kcg_lit_int64(0);
    outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx132].q_dir =
      Q_DIR_Reverse;
    outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx132].valid =
      kcg_true;
    outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx132].startAddress =
      kcg_lit_int64(0);
    outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx132].endAddress =
      kcg_lit_int64(0);
  }
  for (idx133 = 0; idx133 < 500; idx133++) {
    outC->_L4_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketData[idx133] =
      kcg_lit_int64(0);
  }
  for (idx136 = 0; idx136 < 8; idx136++) {
    outC->_L3_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx136].m_IsValid =
      kcg_true;
    outC->_L3_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx136].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L3_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx136].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L3_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx136].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L3_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx136].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L3_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx136].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L3_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx136].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L3_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx136].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L3_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx136].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L3_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx136].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L3_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx136].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L3_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx136].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L3_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx136].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L3_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx136].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L3_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx136].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L3_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx136].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx134 = 0; idx134 < 30; idx134++) {
      outC->_L3_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx136].m_Entry.Messages.PacketHeaders[idx134].nid_packet =
        kcg_lit_int64(0);
      outC->_L3_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx136].m_Entry.Messages.PacketHeaders[idx134].q_dir =
        Q_DIR_Reverse;
      outC->_L3_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx136].m_Entry.Messages.PacketHeaders[idx134].valid =
        kcg_true;
      outC->_L3_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx136].m_Entry.Messages.PacketHeaders[idx134].startAddress =
        kcg_lit_int64(0);
      outC->_L3_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx136].m_Entry.Messages.PacketHeaders[idx134].endAddress =
        kcg_lit_int64(0);
    }
    for (idx135 = 0; idx135 < 500; idx135++) {
      outC->_L3_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx136].m_Entry.Messages.PacketData[idx135] =
        kcg_lit_int64(0);
    }
  }
  outC->_L52_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L52_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L52_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L52_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.Header.t_train =
    kcg_lit_int64(0);
  outC->_L52_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L52_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L52_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L52_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L52_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L52_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L52_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L52_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L52_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L52_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L52_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.Header.m_version =
    kcg_lit_int64(0);
  for (idx137 = 0; idx137 < 30; idx137++) {
    outC->_L52_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.Messages.PacketHeaders[idx137].nid_packet =
      kcg_lit_int64(0);
    outC->_L52_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.Messages.PacketHeaders[idx137].q_dir =
      Q_DIR_Reverse;
    outC->_L52_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.Messages.PacketHeaders[idx137].valid =
      kcg_true;
    outC->_L52_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.Messages.PacketHeaders[idx137].startAddress =
      kcg_lit_int64(0);
    outC->_L52_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.Messages.PacketHeaders[idx137].endAddress =
      kcg_lit_int64(0);
  }
  for (idx138 = 0; idx138 < 500; idx138++) {
    outC->_L52_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.Messages.PacketData[idx138] =
      kcg_lit_int64(0);
  }
  outC->_L54_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM =
    kcg_lit_int64(0);
  outC->_L56_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.radioDevice =
    kcg_lit_int64(0);
  outC->_L56_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L56_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.nid_message =
    kcg_lit_int64(0);
  outC->_L56_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.t_train =
    kcg_lit_int64(0);
  outC->_L56_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_ack =
    kcg_lit_int64(0);
  outC->_L56_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L56_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.t_train_reference =
    kcg_lit_int64(0);
  outC->_L56_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.nid_em =
    kcg_lit_int64(0);
  outC->_L56_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.q_scale =
    kcg_lit_int64(0);
  outC->_L56_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.d_sr =
    kcg_lit_int64(0);
  outC->_L56_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L56_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.d_ref =
    kcg_lit_int64(0);
  outC->_L56_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.q_dir =
    kcg_lit_int64(0);
  outC->_L56_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L56_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_version =
    kcg_lit_int64(0);
  outC->_L59_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_IsValid =
    kcg_true;
  outC->_L59_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entry.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L59_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entry.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L59_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entry.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L59_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entry.Header.t_train =
    kcg_lit_int64(0);
  outC->_L59_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entry.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L59_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entry.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L59_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entry.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L59_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entry.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L59_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entry.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L59_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entry.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L59_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entry.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L59_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entry.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L59_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entry.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L59_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entry.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L59_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entry.Header.m_version =
    kcg_lit_int64(0);
  for (idx139 = 0; idx139 < 30; idx139++) {
    outC->_L59_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entry.Messages.PacketHeaders[idx139].nid_packet =
      kcg_lit_int64(0);
    outC->_L59_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entry.Messages.PacketHeaders[idx139].q_dir =
      Q_DIR_Reverse;
    outC->_L59_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entry.Messages.PacketHeaders[idx139].valid =
      kcg_true;
    outC->_L59_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entry.Messages.PacketHeaders[idx139].startAddress =
      kcg_lit_int64(0);
    outC->_L59_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entry.Messages.PacketHeaders[idx139].endAddress =
      kcg_lit_int64(0);
  }
  for (idx140 = 0; idx140 < 500; idx140++) {
    outC->_L59_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entry.Messages.PacketData[idx140] =
      kcg_lit_int64(0);
  }
  for (idx143 = 0; idx143 < 8; idx143++) {
    outC->_L57_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx143].m_IsValid =
      kcg_true;
    outC->_L57_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx143].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L57_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx143].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L57_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx143].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L57_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx143].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L57_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx143].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L57_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx143].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L57_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx143].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L57_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx143].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L57_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx143].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L57_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx143].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L57_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx143].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L57_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx143].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L57_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx143].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L57_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx143].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L57_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx143].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx141 = 0; idx141 < 30; idx141++) {
      outC->_L57_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx143].m_Entry.Messages.PacketHeaders[idx141].nid_packet =
        kcg_lit_int64(0);
      outC->_L57_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx143].m_Entry.Messages.PacketHeaders[idx141].q_dir =
        Q_DIR_Reverse;
      outC->_L57_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx143].m_Entry.Messages.PacketHeaders[idx141].valid =
        kcg_true;
      outC->_L57_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx143].m_Entry.Messages.PacketHeaders[idx141].startAddress =
        kcg_lit_int64(0);
      outC->_L57_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx143].m_Entry.Messages.PacketHeaders[idx141].endAddress =
        kcg_lit_int64(0);
    }
    for (idx142 = 0; idx142 < 500; idx142++) {
      outC->_L57_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx143].m_Entry.Messages.PacketData[idx142] =
        kcg_lit_int64(0);
    }
  }
  outC->_L64_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L64_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx145 = 0; idx145 < 1; idx145++) {
    outC->_L64_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_OnboardPhoneNumbers[idx145].valid =
      kcg_true;
    for (idx144 = 0; idx144 < 15; idx144++) {
      outC->_L64_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_OnboardPhoneNumbers[idx145].telephoneNumber[idx144] =
        kcg_lit_int64(0);
    }
  }
  outC->_L64_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L64_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L64_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L64_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L64_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L64_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L64_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L64_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L64_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx146 = 0; idx146 < 4; idx146++) {
    outC->_L64_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_TractionIdentities[idx146].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L64_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_TractionIdentities[idx146].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx147 = 0; idx147 < 5; idx147++) {
    outC->_L64_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_NationalSystemIdentities[idx147] =
      kcg_lit_int64(0);
  }
  outC->_L64_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L64_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L64_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L64_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L64_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L64_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L64_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L64_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L64_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L64_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L64_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L64_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L64_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L64_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L64_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L64_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx149 = 0; idx149 < 1; idx149++) {
    outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx149].valid =
      kcg_true;
    for (idx148 = 0; idx148 < 15; idx148++) {
      outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx149].telephoneNumber[idx148] =
        kcg_lit_int64(0);
    }
  }
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx150 = 0; idx150 < 4; idx150++) {
    outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_TractionIdentities[idx150].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_TractionIdentities[idx150].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx151 = 0; idx151 < 5; idx151++) {
    outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_NationalSystemIdentities[idx151] =
      kcg_lit_int64(0);
  }
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.nid_c =
    kcg_lit_int64(0);
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvshunt =
    kcg_lit_int64(0);
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvstff =
    kcg_lit_int64(0);
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvonsight =
    kcg_lit_int64(0);
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvunfit =
    kcg_lit_int64(0);
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvrel =
    kcg_lit_int64(0);
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.t_nvcontact =
    kcg_lit_int64(0);
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.q_dir =
    Q_DIR_Reverse;
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.t_mar =
    kcg_lit_int64(0);
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.t_timeoutrqst =
    kcg_lit_int64(0);
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.t_cycrqst =
    kcg_lit_int64(0);
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.q_dir =
    Q_DIR_Reverse;
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.t_cycloc =
    kcg_lit_int64(0);
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.d_cycloc =
    kcg_lit_int64(0);
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_loc =
    M_LOC_Now;
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx152 = 0; idx152 < 32; idx152++) {
    outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx152].d_loc =
      kcg_lit_int64(0);
    outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx152].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx153 = 0; idx153 < 16; idx153++) {
    outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx153].valid =
      kcg_true;
    outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx153].count =
      kcg_lit_int64(0);
    outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx153].timestamp =
      kcg_lit_int64(0);
    outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx153].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx153].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx153].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx156 = 0; idx156 < 8; idx156++) {
    outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx156].m_IsValid =
      kcg_true;
    outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx156].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx156].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx156].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx156].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx156].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx156].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx156].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx156].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx156].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx156].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx156].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx156].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx156].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx156].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx156].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx154 = 0; idx154 < 30; idx154++) {
      outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx156].m_Entry.Messages.PacketHeaders[idx154].nid_packet =
        kcg_lit_int64(0);
      outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx156].m_Entry.Messages.PacketHeaders[idx154].q_dir =
        Q_DIR_Reverse;
      outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx156].m_Entry.Messages.PacketHeaders[idx154].valid =
        kcg_true;
      outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx156].m_Entry.Messages.PacketHeaders[idx154].startAddress =
        kcg_lit_int64(0);
      outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx156].m_Entry.Messages.PacketHeaders[idx154].endAddress =
        kcg_lit_int64(0);
    }
    for (idx155 = 0; idx155 < 500; idx155++) {
      outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx156].m_Entry.Messages.PacketData[idx155] =
        kcg_lit_int64(0);
    }
  }
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.clockk.m_Value =
    kcg_lit_int64(0);
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int64(0);
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int64(0);
  for (idx157 = 0; idx157 < 30; idx157++) {
    outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx157].nid_packet =
      kcg_lit_int64(0);
    outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx157].q_dir =
      Q_DIR_Reverse;
    outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx157].valid =
      kcg_true;
    outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx157].startAddress =
      kcg_lit_int64(0);
    outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx157].endAddress =
      kcg_lit_int64(0);
  }
  for (idx158 = 0; idx158 < 500; idx158++) {
    outC->_L63_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketData[idx158] =
      kcg_lit_int64(0);
  }
  for (idx161 = 0; idx161 < 8; idx161++) {
    outC->_L62_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx161].m_IsValid =
      kcg_true;
    outC->_L62_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx161].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L62_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx161].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L62_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx161].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L62_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx161].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L62_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx161].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L62_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx161].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L62_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx161].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L62_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx161].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L62_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx161].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L62_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx161].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L62_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx161].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L62_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx161].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L62_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx161].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L62_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx161].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L62_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx161].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx159 = 0; idx159 < 30; idx159++) {
      outC->_L62_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx161].m_Entry.Messages.PacketHeaders[idx159].nid_packet =
        kcg_lit_int64(0);
      outC->_L62_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx161].m_Entry.Messages.PacketHeaders[idx159].q_dir =
        Q_DIR_Reverse;
      outC->_L62_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx161].m_Entry.Messages.PacketHeaders[idx159].valid =
        kcg_true;
      outC->_L62_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx161].m_Entry.Messages.PacketHeaders[idx159].startAddress =
        kcg_lit_int64(0);
      outC->_L62_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx161].m_Entry.Messages.PacketHeaders[idx159].endAddress =
        kcg_lit_int64(0);
    }
    for (idx160 = 0; idx160 < 500; idx160++) {
      outC->_L62_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx161].m_Entry.Messages.PacketData[idx160] =
        kcg_lit_int64(0);
    }
  }
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx163 = 0; idx163 < 1; idx163++) {
    outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx163].valid =
      kcg_true;
    for (idx162 = 0; idx162 < 15; idx162++) {
      outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx163].telephoneNumber[idx162] =
        kcg_lit_int64(0);
    }
  }
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx164 = 0; idx164 < 4; idx164++) {
    outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_TractionIdentities[idx164].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_TractionIdentities[idx164].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx165 = 0; idx165 < 5; idx165++) {
    outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_NationalSystemIdentities[idx165] =
      kcg_lit_int64(0);
  }
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.nid_c =
    kcg_lit_int64(0);
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvshunt =
    kcg_lit_int64(0);
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvstff =
    kcg_lit_int64(0);
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvonsight =
    kcg_lit_int64(0);
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvunfit =
    kcg_lit_int64(0);
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvrel =
    kcg_lit_int64(0);
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.t_nvcontact =
    kcg_lit_int64(0);
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.q_dir =
    Q_DIR_Reverse;
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.t_mar =
    kcg_lit_int64(0);
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.t_timeoutrqst =
    kcg_lit_int64(0);
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.t_cycrqst =
    kcg_lit_int64(0);
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.q_dir =
    Q_DIR_Reverse;
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.t_cycloc =
    kcg_lit_int64(0);
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.d_cycloc =
    kcg_lit_int64(0);
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_loc =
    M_LOC_Now;
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx166 = 0; idx166 < 32; idx166++) {
    outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx166].d_loc =
      kcg_lit_int64(0);
    outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx166].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx167 = 0; idx167 < 16; idx167++) {
    outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx167].valid =
      kcg_true;
    outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx167].count =
      kcg_lit_int64(0);
    outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx167].timestamp =
      kcg_lit_int64(0);
    outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx167].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx167].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx167].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx170 = 0; idx170 < 8; idx170++) {
    outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx170].m_IsValid =
      kcg_true;
    outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx170].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx170].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx170].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx170].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx170].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx170].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx170].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx170].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx170].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx170].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx170].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx170].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx170].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx170].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx170].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx168 = 0; idx168 < 30; idx168++) {
      outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx170].m_Entry.Messages.PacketHeaders[idx168].nid_packet =
        kcg_lit_int64(0);
      outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx170].m_Entry.Messages.PacketHeaders[idx168].q_dir =
        Q_DIR_Reverse;
      outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx170].m_Entry.Messages.PacketHeaders[idx168].valid =
        kcg_true;
      outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx170].m_Entry.Messages.PacketHeaders[idx168].startAddress =
        kcg_lit_int64(0);
      outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx170].m_Entry.Messages.PacketHeaders[idx168].endAddress =
        kcg_lit_int64(0);
    }
    for (idx169 = 0; idx169 < 500; idx169++) {
      outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx170].m_Entry.Messages.PacketData[idx169] =
        kcg_lit_int64(0);
    }
  }
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.clockk.m_Value =
    kcg_lit_int64(0);
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int64(0);
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int64(0);
  for (idx171 = 0; idx171 < 30; idx171++) {
    outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx171].nid_packet =
      kcg_lit_int64(0);
    outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx171].q_dir =
      Q_DIR_Reverse;
    outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx171].valid =
      kcg_true;
    outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx171].startAddress =
      kcg_lit_int64(0);
    outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx171].endAddress =
      kcg_lit_int64(0);
  }
  for (idx172 = 0; idx172 < 500; idx172++) {
    outC->_L65_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketData[idx172] =
      kcg_lit_int64(0);
  }
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx174 = 0; idx174 < 1; idx174++) {
    outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx174].valid =
      kcg_true;
    for (idx173 = 0; idx173 < 15; idx173++) {
      outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx174].telephoneNumber[idx173] =
        kcg_lit_int64(0);
    }
  }
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx175 = 0; idx175 < 4; idx175++) {
    outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_TractionIdentities[idx175].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_TractionIdentities[idx175].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx176 = 0; idx176 < 5; idx176++) {
    outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_NationalSystemIdentities[idx176] =
      kcg_lit_int64(0);
  }
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.nid_c =
    kcg_lit_int64(0);
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvshunt =
    kcg_lit_int64(0);
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvstff =
    kcg_lit_int64(0);
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvonsight =
    kcg_lit_int64(0);
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvunfit =
    kcg_lit_int64(0);
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvrel =
    kcg_lit_int64(0);
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.t_nvcontact =
    kcg_lit_int64(0);
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.q_dir =
    Q_DIR_Reverse;
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.t_mar =
    kcg_lit_int64(0);
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.t_timeoutrqst =
    kcg_lit_int64(0);
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.t_cycrqst =
    kcg_lit_int64(0);
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.q_dir =
    Q_DIR_Reverse;
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.t_cycloc =
    kcg_lit_int64(0);
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.d_cycloc =
    kcg_lit_int64(0);
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_loc =
    M_LOC_Now;
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx177 = 0; idx177 < 32; idx177++) {
    outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx177].d_loc =
      kcg_lit_int64(0);
    outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx177].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx178 = 0; idx178 < 16; idx178++) {
    outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx178].valid =
      kcg_true;
    outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx178].count =
      kcg_lit_int64(0);
    outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx178].timestamp =
      kcg_lit_int64(0);
    outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx178].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx178].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx178].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx181 = 0; idx181 < 8; idx181++) {
    outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx181].m_IsValid =
      kcg_true;
    outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx181].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx181].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx181].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx181].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx181].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx181].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx181].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx181].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx181].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx181].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx181].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx181].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx181].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx181].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx181].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx179 = 0; idx179 < 30; idx179++) {
      outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx181].m_Entry.Messages.PacketHeaders[idx179].nid_packet =
        kcg_lit_int64(0);
      outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx181].m_Entry.Messages.PacketHeaders[idx179].q_dir =
        Q_DIR_Reverse;
      outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx181].m_Entry.Messages.PacketHeaders[idx179].valid =
        kcg_true;
      outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx181].m_Entry.Messages.PacketHeaders[idx179].startAddress =
        kcg_lit_int64(0);
      outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx181].m_Entry.Messages.PacketHeaders[idx179].endAddress =
        kcg_lit_int64(0);
    }
    for (idx180 = 0; idx180 < 500; idx180++) {
      outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx181].m_Entry.Messages.PacketData[idx180] =
        kcg_lit_int64(0);
    }
  }
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.clockk.m_Value = kcg_lit_int64(
      0);
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int64(0);
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int64(0);
  for (idx182 = 0; idx182 < 30; idx182++) {
    outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx182].nid_packet =
      kcg_lit_int64(0);
    outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx182].q_dir =
      Q_DIR_Reverse;
    outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx182].valid =
      kcg_true;
    outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx182].startAddress =
      kcg_lit_int64(0);
    outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx182].endAddress =
      kcg_lit_int64(0);
  }
  for (idx183 = 0; idx183 < 500; idx183++) {
    outC->_L5_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketData[idx183] =
      kcg_lit_int64(0);
  }
  for (idx186 = 0; idx186 < 8; idx186++) {
    outC->_L4_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx186].m_IsValid =
      kcg_true;
    outC->_L4_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx186].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L4_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx186].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L4_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx186].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L4_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx186].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L4_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx186].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L4_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx186].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L4_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx186].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L4_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx186].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L4_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx186].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L4_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx186].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L4_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx186].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L4_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx186].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L4_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx186].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L4_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx186].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L4_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx186].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx184 = 0; idx184 < 30; idx184++) {
      outC->_L4_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx186].m_Entry.Messages.PacketHeaders[idx184].nid_packet =
        kcg_lit_int64(0);
      outC->_L4_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx186].m_Entry.Messages.PacketHeaders[idx184].q_dir =
        Q_DIR_Reverse;
      outC->_L4_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx186].m_Entry.Messages.PacketHeaders[idx184].valid =
        kcg_true;
      outC->_L4_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx186].m_Entry.Messages.PacketHeaders[idx184].startAddress =
        kcg_lit_int64(0);
      outC->_L4_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx186].m_Entry.Messages.PacketHeaders[idx184].endAddress =
        kcg_lit_int64(0);
    }
    for (idx185 = 0; idx185 < 500; idx185++) {
      outC->_L4_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx186].m_Entry.Messages.PacketData[idx185] =
        kcg_lit_int64(0);
    }
  }
  outC->_L3_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L3_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx188 = 0; idx188 < 1; idx188++) {
    outC->_L3_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_OnboardPhoneNumbers[idx188].valid =
      kcg_true;
    for (idx187 = 0; idx187 < 15; idx187++) {
      outC->_L3_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_OnboardPhoneNumbers[idx188].telephoneNumber[idx187] =
        kcg_lit_int64(0);
    }
  }
  outC->_L3_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L3_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L3_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L3_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L3_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L3_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L3_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L3_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L3_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx189 = 0; idx189 < 4; idx189++) {
    outC->_L3_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_TractionIdentities[idx189].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L3_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_TractionIdentities[idx189].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx190 = 0; idx190 < 5; idx190++) {
    outC->_L3_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_NationalSystemIdentities[idx190] =
      kcg_lit_int64(0);
  }
  outC->_L3_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L3_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L3_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L3_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L3_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L3_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L3_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L3_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L3_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L3_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L3_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L3_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L3_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L3_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L3_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L3_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
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
  for (idx191 = 0; idx191 < 30; idx191++) {
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketHeaders[idx191].nid_packet =
      kcg_lit_int64(0);
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketHeaders[idx191].q_dir =
      Q_DIR_Reverse;
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketHeaders[idx191].valid =
      kcg_true;
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketHeaders[idx191].startAddress =
      kcg_lit_int64(0);
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketHeaders[idx191].endAddress =
      kcg_lit_int64(0);
  }
  for (idx192 = 0; idx192 < 500; idx192++) {
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketData[idx192] =
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
  for (idx194 = 0; idx194 < 1; idx194++) {
    outC->outRadioTrainTrackMessage.packets.p3.aNID_RADIO[idx194].valid = kcg_true;
    for (idx193 = 0; idx193 < 15; idx193++) {
      outC->outRadioTrainTrackMessage.packets.p3.aNID_RADIO[idx194].telephoneNumber[idx193] =
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
  for (idx195 = 0; idx195 < 4; idx195++) {
    outC->outRadioTrainTrackMessage.packets.p11.tractionIdentity[idx195].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->outRadioTrainTrackMessage.packets.p11.tractionIdentity[idx195].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->outRadioTrainTrackMessage.packets.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx196 = 0; idx196 < 5; idx196++) {
    outC->outRadioTrainTrackMessage.packets.p11.nid_ntc[idx196] = kcg_lit_int64(0);
  }
  outC->outDataBus.session.m_TrainData.nid_engine = kcg_lit_int64(0);
  outC->outDataBus.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx198 = 0; idx198 < 1; idx198++) {
    outC->outDataBus.session.m_TrainData.m_OnboardPhoneNumbers[idx198].valid =
      kcg_true;
    for (idx197 = 0; idx197 < 15; idx197++) {
      outC->outDataBus.session.m_TrainData.m_OnboardPhoneNumbers[idx198].telephoneNumber[idx197] =
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
  for (idx199 = 0; idx199 < 4; idx199++) {
    outC->outDataBus.session.m_TrainData.m_TractionIdentities[idx199].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->outDataBus.session.m_TrainData.m_TractionIdentities[idx199].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx200 = 0; idx200 < 5; idx200++) {
    outC->outDataBus.session.m_TrainData.m_NationalSystemIdentities[idx200] =
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
  for (idx201 = 0; idx201 < 32; idx201++) {
    outC->outDataBus.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx201].d_loc =
      kcg_lit_int64(0);
    outC->outDataBus.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx201].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx202 = 0; idx202 < 16; idx202++) {
    outC->outDataBus.diagnostic[idx202].valid = kcg_true;
    outC->outDataBus.diagnostic[idx202].count = kcg_lit_int64(0);
    outC->outDataBus.diagnostic[idx202].timestamp = kcg_lit_int64(0);
    outC->outDataBus.diagnostic[idx202].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->outDataBus.diagnostic[idx202].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->outDataBus.diagnostic[idx202].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx205 = 0; idx205 < 8; idx205++) {
    outC->outDataBus.messageQueue.m_Entries[idx205].m_IsValid = kcg_true;
    outC->outDataBus.messageQueue.m_Entries[idx205].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx205].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx205].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx205].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx205].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx205].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx205].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx205].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx205].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx205].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx205].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx205].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx205].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx205].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx205].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx203 = 0; idx203 < 30; idx203++) {
      outC->outDataBus.messageQueue.m_Entries[idx205].m_Entry.Messages.PacketHeaders[idx203].nid_packet =
        kcg_lit_int64(0);
      outC->outDataBus.messageQueue.m_Entries[idx205].m_Entry.Messages.PacketHeaders[idx203].q_dir =
        Q_DIR_Reverse;
      outC->outDataBus.messageQueue.m_Entries[idx205].m_Entry.Messages.PacketHeaders[idx203].valid =
        kcg_true;
      outC->outDataBus.messageQueue.m_Entries[idx205].m_Entry.Messages.PacketHeaders[idx203].startAddress =
        kcg_lit_int64(0);
      outC->outDataBus.messageQueue.m_Entries[idx205].m_Entry.Messages.PacketHeaders[idx203].endAddress =
        kcg_lit_int64(0);
    }
    for (idx204 = 0; idx204 < 500; idx204++) {
      outC->outDataBus.messageQueue.m_Entries[idx205].m_Entry.Messages.PacketData[idx204] =
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
  for (idx206 = 0; idx206 < 30; idx206++) {
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[idx206].nid_packet =
      kcg_lit_int64(0);
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[idx206].q_dir =
      Q_DIR_Reverse;
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[idx206].valid =
      kcg_true;
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[idx206].startAddress =
      kcg_lit_int64(0);
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[idx206].endAddress =
      kcg_lit_int64(0);
  }
  for (idx207 = 0; idx207 < 500; idx207++) {
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketData[idx207] =
      kcg_lit_int64(0);
  }
  /* UNCONDITIONAL_EMERGENCY_STOP_SM:SEND_UNCONDITIONAL_EMERGENCY_STOP:_L54=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_EM#1)/ */
  RadioTrackTrainHeader__Get_NID_EM_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Get_NID_EM_1);
  /* UNCONDITIONAL_EMERGENCY_STOP_SM:SEND_UNCONDITIONAL_EMERGENCY_STOP:_L56=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#3)/ */
  RadioTrackTrainMessage__GetHeader_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainMessage__GetHeader_3);
  /* UNCONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1:then:_L13=(RBC_Session_Pkg::SessionManagement__SetPosData#5)/ */
  SessionManagement__SetPosData_init_RBC_Session_Pkg(
    &outC->Context_SessionManagement__SetPosData_5);
  /* UNCONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1:then:_L11=(RBC_Session_Pkg::PosData__Update#5)/ */
  PosData__Update_init_RBC_Session_Pkg(&outC->Context_PosData__Update_5);
  /* UNCONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1:then:_L10=(RBC_Session_Pkg::SessionManagement__GetPosData#5)/ */
  SessionManagement__GetPosData_init_RBC_Session_Pkg(
    &outC->Context_SessionManagement__GetPosData_5);
  /* UNCONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L27=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_EM#1)/ */
  RadioTrainTrackHeader__Get_NID_EM_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackHeader__Get_NID_EM_1);
  /* UNCONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L38=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_Q_EMERGENCYSTOP#1)/ */
  RadioTrainTrackHeader__Get_Q_EMERGENCYSTOP_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackHeader__Get_Q_EMERGENCYSTOP_1);
  /* UNCONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L26=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#3)/ */
  RadioTrainTrackMessage__GetHeader_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackMessage__GetHeader_3);
  /* UNCONDITIONAL_EMERGENCY_STOP_SM:SEND_UNCONDITIONAL_EMERGENCY_STOP:_L57=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut#3)/ */
  RadioTrackTrainMessageQueue__TryPut_init_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueue__TryPut_3);
  /* UNCONDITIONAL_EMERGENCY_STOP_SM:SEND_UNCONDITIONAL_EMERGENCY_STOP:_L59=(RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__Create#3)/ */
  RadioTrackTrainMessageQueueEntry__Create_init_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueueEntry__Create_3);
  /* _L63=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#1)/ */
  RadioTrackTrainHeader__Get_NID_MESSAGE_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Get_NID_MESSAGE_1);
  /* _L65=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#1)/ */
  RadioTrackTrainMessage__GetHeader_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainMessage__GetHeader_1);
  /* _L67=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_MESSAGE#1)/ */
  RadioTrainTrackHeader__Get_NID_MESSAGE_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackHeader__Get_NID_MESSAGE_1);
  /* _L66=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#1)/ */
  RadioTrainTrackMessage__GetHeader_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackMessage__GetHeader_1);
  outC->UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act = kcg_false;
  outC->UNCONDITIONAL_EMERGENCY_STOP_SM_reset_nxt = kcg_false;
  outC->UNCONDITIONAL_EMERGENCY_STOP_SM_state_nxt =
    SSM_st_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM;
  outC->radioTrackTrainMessageWasSentEmergencyStopId = NID_EM_DEFAULT;
  outC->validAck = kcg_false;
  outC->invalidAck = kcg_false;
}
#endif /* KCG_USER_DEFINED_INIT */


void RBC__ProcessUnconditionalEmergencyStop_reset_RBC_Model_Pkg(
  outC_RBC__ProcessUnconditionalEmergencyStop_RBC_Model_Pkg *outC)
{
  /* UNCONDITIONAL_EMERGENCY_STOP_SM:SEND_UNCONDITIONAL_EMERGENCY_STOP:_L54=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_EM#1)/ */
  RadioTrackTrainHeader__Get_NID_EM_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Get_NID_EM_1);
  /* UNCONDITIONAL_EMERGENCY_STOP_SM:SEND_UNCONDITIONAL_EMERGENCY_STOP:_L56=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#3)/ */
  RadioTrackTrainMessage__GetHeader_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainMessage__GetHeader_3);
  /* UNCONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1:then:_L13=(RBC_Session_Pkg::SessionManagement__SetPosData#5)/ */
  SessionManagement__SetPosData_reset_RBC_Session_Pkg(
    &outC->Context_SessionManagement__SetPosData_5);
  /* UNCONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1:then:_L11=(RBC_Session_Pkg::PosData__Update#5)/ */
  PosData__Update_reset_RBC_Session_Pkg(&outC->Context_PosData__Update_5);
  /* UNCONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1:then:_L10=(RBC_Session_Pkg::SessionManagement__GetPosData#5)/ */
  SessionManagement__GetPosData_reset_RBC_Session_Pkg(
    &outC->Context_SessionManagement__GetPosData_5);
  /* UNCONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L27=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_EM#1)/ */
  RadioTrainTrackHeader__Get_NID_EM_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackHeader__Get_NID_EM_1);
  /* UNCONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L38=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_Q_EMERGENCYSTOP#1)/ */
  RadioTrainTrackHeader__Get_Q_EMERGENCYSTOP_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackHeader__Get_Q_EMERGENCYSTOP_1);
  /* UNCONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L26=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#3)/ */
  RadioTrainTrackMessage__GetHeader_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackMessage__GetHeader_3);
  /* UNCONDITIONAL_EMERGENCY_STOP_SM:SEND_UNCONDITIONAL_EMERGENCY_STOP:_L57=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut#3)/ */
  RadioTrackTrainMessageQueue__TryPut_reset_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueue__TryPut_3);
  /* UNCONDITIONAL_EMERGENCY_STOP_SM:SEND_UNCONDITIONAL_EMERGENCY_STOP:_L59=(RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__Create#3)/ */
  RadioTrackTrainMessageQueueEntry__Create_reset_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueueEntry__Create_3);
  /* _L63=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#1)/ */
  RadioTrackTrainHeader__Get_NID_MESSAGE_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Get_NID_MESSAGE_1);
  /* _L65=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#1)/ */
  RadioTrackTrainMessage__GetHeader_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainMessage__GetHeader_1);
  /* _L67=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_MESSAGE#1)/ */
  RadioTrainTrackHeader__Get_NID_MESSAGE_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackHeader__Get_NID_MESSAGE_1);
  /* _L66=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#1)/ */
  RadioTrainTrackMessage__GetHeader_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackMessage__GetHeader_1);
  outC->UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act = kcg_false;
  outC->UNCONDITIONAL_EMERGENCY_STOP_SM_reset_nxt = kcg_false;
  outC->UNCONDITIONAL_EMERGENCY_STOP_SM_state_nxt =
    SSM_st_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM;
  outC->radioTrackTrainMessageWasSentEmergencyStopId = NID_EM_DEFAULT;
  outC->validAck = kcg_false;
  outC->invalidAck = kcg_false;
}


void kcg_save_SV_RBC__ProcessUnconditionalEmergencyStop_RBC_Model_Pkg(
  SV_RBC__ProcessUnconditionalEmergencyStop_RBC_Model_Pkg *SV,
  outC_RBC__ProcessUnconditionalEmergencyStop_RBC_Model_Pkg *outC)
{
  SV->Context_radioTrackTrainMessageWasSentEmergencyStopId =
    outC->radioTrackTrainMessageWasSentEmergencyStopId;
  SV->Context_UNCONDITIONAL_EMERGENCY_STOP_SM_reset_nxt =
    outC->UNCONDITIONAL_EMERGENCY_STOP_SM_reset_nxt;
  SV->Context_UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act =
    outC->UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act;
  SV->Context_UNCONDITIONAL_EMERGENCY_STOP_SM_state_nxt =
    outC->UNCONDITIONAL_EMERGENCY_STOP_SM_state_nxt;
  SV->Context_validAck = outC->validAck;
  SV->Context_invalidAck = outC->invalidAck;
}

void kcg_load_SV_RBC__ProcessUnconditionalEmergencyStop_RBC_Model_Pkg(
  outC_RBC__ProcessUnconditionalEmergencyStop_RBC_Model_Pkg *outC,
  SV_RBC__ProcessUnconditionalEmergencyStop_RBC_Model_Pkg *SV)
{
  outC->radioTrackTrainMessageWasSentEmergencyStopId =
    SV->Context_radioTrackTrainMessageWasSentEmergencyStopId;
  outC->UNCONDITIONAL_EMERGENCY_STOP_SM_reset_nxt =
    SV->Context_UNCONDITIONAL_EMERGENCY_STOP_SM_reset_nxt;
  outC->UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act =
    SV->Context_UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act;
  outC->UNCONDITIONAL_EMERGENCY_STOP_SM_state_nxt =
    SV->Context_UNCONDITIONAL_EMERGENCY_STOP_SM_state_nxt;
  outC->validAck = SV->Context_validAck;
  outC->invalidAck = SV->Context_invalidAck;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RBC__ProcessUnconditionalEmergencyStop_RBC_Model_Pkg.c
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

