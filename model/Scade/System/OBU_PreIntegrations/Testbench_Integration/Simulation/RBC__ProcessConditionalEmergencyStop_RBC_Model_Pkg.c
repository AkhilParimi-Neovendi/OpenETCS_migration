/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg.h"

/* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop/ */
void RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg(
  /* inDataBus/ */
  RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* inRadioTrainTrackMessage/ */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  /* inTriggeredRadioTrackTrainMessage/ */
  CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessage,
  outC_RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg *outC)
{
  /* radioTrackTrainMessageWasSentEmergencyStopId/ */
  static NID_EM radioTrackTrainMessageWasSentEmergencyStopId_partial;
  /* messageQueue/ */
  static RadioTrackTrainMessageQueue_T messageQueue_partial;
  /* session/ */
  static SessionManagement_T session_partial;
  /* CONDITIONAL_EMERGENCY_STOP_SM: */
  static SSM_ST_CONDITIONAL_EMERGENCY_STOP_SM CONDITIONAL_EMERGENCY_STOP_SM_state_nxt_partial;
  /* CONDITIONAL_EMERGENCY_STOP_SM: */
  static kcg_bool CONDITIONAL_EMERGENCY_STOP_SM_reset_nxt_partial;
  /* CONDITIONAL_EMERGENCY_STOP_SM: */
  static SSM_TR_CONDITIONAL_EMERGENCY_STOP_SM CONDITIONAL_EMERGENCY_STOP_SM_fired_partial;
  /* radioTrackTrainMessageWasSentEmergencyStopId/ */
  static NID_EM _1_radioTrackTrainMessageWasSentEmergencyStopId_partial;
  /* messageQueue/ */
  static RadioTrackTrainMessageQueue_T _2_messageQueue_partial;
  /* session/ */
  static SessionManagement_T _3_session_partial;
  /* CONDITIONAL_EMERGENCY_STOP_SM: */
  static SSM_ST_CONDITIONAL_EMERGENCY_STOP_SM _4_CONDITIONAL_EMERGENCY_STOP_SM_state_nxt_partial;
  /* CONDITIONAL_EMERGENCY_STOP_SM: */
  static kcg_bool _5_CONDITIONAL_EMERGENCY_STOP_SM_reset_nxt_partial;
  /* CONDITIONAL_EMERGENCY_STOP_SM: */
  static SSM_TR_CONDITIONAL_EMERGENCY_STOP_SM _6_CONDITIONAL_EMERGENCY_STOP_SM_fired_partial;
  /* radioTrackTrainMessageWasSentEmergencyStopId/ */
  static NID_EM _7_radioTrackTrainMessageWasSentEmergencyStopId_partial;
  /* messageQueue/ */
  static RadioTrackTrainMessageQueue_T _8_messageQueue_partial;
  /* session/ */
  static SessionManagement_T _9_session_partial;
  /* CONDITIONAL_EMERGENCY_STOP_SM: */
  static SSM_ST_CONDITIONAL_EMERGENCY_STOP_SM _10_CONDITIONAL_EMERGENCY_STOP_SM_state_nxt_partial;
  /* CONDITIONAL_EMERGENCY_STOP_SM: */
  static kcg_bool _11_CONDITIONAL_EMERGENCY_STOP_SM_reset_nxt_partial;
  /* CONDITIONAL_EMERGENCY_STOP_SM: */
  static SSM_TR_CONDITIONAL_EMERGENCY_STOP_SM _12_CONDITIONAL_EMERGENCY_STOP_SM_fired_partial;
  /* radioTrackTrainMessageWasSentEmergencyStopId/ */
  static NID_EM _13_radioTrackTrainMessageWasSentEmergencyStopId_partial;
  /* messageQueue/ */
  static RadioTrackTrainMessageQueue_T _14_messageQueue_partial;
  /* session/ */
  static SessionManagement_T _15_session_partial;
  /* CONDITIONAL_EMERGENCY_STOP_SM: */
  static SSM_ST_CONDITIONAL_EMERGENCY_STOP_SM _16_CONDITIONAL_EMERGENCY_STOP_SM_state_nxt_partial;
  /* CONDITIONAL_EMERGENCY_STOP_SM: */
  static kcg_bool _17_CONDITIONAL_EMERGENCY_STOP_SM_reset_nxt_partial;
  /* CONDITIONAL_EMERGENCY_STOP_SM: */
  static SSM_TR_CONDITIONAL_EMERGENCY_STOP_SM _18_CONDITIONAL_EMERGENCY_STOP_SM_fired_partial;
  /* session/ */
  static SessionManagement_T _19_session_partial;
  static Q_EMERGENCYSTOP noname;
  /* session/ */
  static SessionManagement_T _20_session_partial;
  /* CONDITIONAL_EMERGENCY_STOP_SM: */
  static SSM_ST_CONDITIONAL_EMERGENCY_STOP_SM CONDITIONAL_EMERGENCY_STOP_SM_state_act_partial;
  /* CONDITIONAL_EMERGENCY_STOP_SM: */
  static kcg_bool CONDITIONAL_EMERGENCY_STOP_SM_reset_act_partial;
  /* CONDITIONAL_EMERGENCY_STOP_SM: */
  static SSM_TR_CONDITIONAL_EMERGENCY_STOP_SM CONDITIONAL_EMERGENCY_STOP_SM_fired_strong_partial;
  /* CONDITIONAL_EMERGENCY_STOP_SM:IDLE:<1> */
  static kcg_bool tr_1_guard_IDLE_CONDITIONAL_EMERGENCY_STOP_SM;
  /* CONDITIONAL_EMERGENCY_STOP_SM: */
  static SSM_ST_CONDITIONAL_EMERGENCY_STOP_SM _21_CONDITIONAL_EMERGENCY_STOP_SM_state_act_partial;
  /* CONDITIONAL_EMERGENCY_STOP_SM: */
  static kcg_bool _22_CONDITIONAL_EMERGENCY_STOP_SM_reset_act_partial;
  /* CONDITIONAL_EMERGENCY_STOP_SM: */
  static SSM_TR_CONDITIONAL_EMERGENCY_STOP_SM _23_CONDITIONAL_EMERGENCY_STOP_SM_fired_strong_partial;
  /* CONDITIONAL_EMERGENCY_STOP_SM:SEND_CONDITIONAL_EMERGENCY_STOP:<2> */
  static kcg_bool tr_2_guard_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM;
  /* CONDITIONAL_EMERGENCY_STOP_SM:SEND_CONDITIONAL_EMERGENCY_STOP:<1> */
  static kcg_bool tr_1_guard_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM;
  /* CONDITIONAL_EMERGENCY_STOP_SM: */
  static SSM_ST_CONDITIONAL_EMERGENCY_STOP_SM _24_CONDITIONAL_EMERGENCY_STOP_SM_state_act_partial;
  /* CONDITIONAL_EMERGENCY_STOP_SM: */
  static kcg_bool _25_CONDITIONAL_EMERGENCY_STOP_SM_reset_act_partial;
  /* CONDITIONAL_EMERGENCY_STOP_SM: */
  static SSM_TR_CONDITIONAL_EMERGENCY_STOP_SM _26_CONDITIONAL_EMERGENCY_STOP_SM_fired_strong_partial;
  /* CONDITIONAL_EMERGENCY_STOP_SM:AWAIT_ACKNOWLEDGEMENT:<1> */
  static kcg_bool tr_1_guard_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
  /* CONDITIONAL_EMERGENCY_STOP_SM: */
  static SSM_ST_CONDITIONAL_EMERGENCY_STOP_SM _27_CONDITIONAL_EMERGENCY_STOP_SM_state_act_partial;
  /* CONDITIONAL_EMERGENCY_STOP_SM: */
  static kcg_bool _28_CONDITIONAL_EMERGENCY_STOP_SM_reset_act_partial;
  /* CONDITIONAL_EMERGENCY_STOP_SM: */
  static SSM_TR_CONDITIONAL_EMERGENCY_STOP_SM _29_CONDITIONAL_EMERGENCY_STOP_SM_fired_strong_partial;
  /* CONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:<4> */
  static kcg_bool tr_4_guard_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
  /* CONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:<3> */
  static kcg_bool tr_3_guard_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
  /* CONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:<2> */
  static kcg_bool tr_2_guard_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
  /* CONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:<1> */
  static kcg_bool tr_1_guard_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
  /* session/ */
  static SessionManagement_T last_session;
  /* invalidAck/ */
  static kcg_bool last_invalidAck;
  /* validAck/ */
  static kcg_bool last_validAck;
  /* radioTrackTrainMessageWasSentEmergencyStopId/ */
  static NID_EM last_radioTrackTrainMessageWasSentEmergencyStopId;
  /* CONDITIONAL_EMERGENCY_STOP_SM: */
  static kcg_bool CONDITIONAL_EMERGENCY_STOP_SM_reset_sel;
  /* CONDITIONAL_EMERGENCY_STOP_SM: */
  static kcg_bool CONDITIONAL_EMERGENCY_STOP_SM_reset_prv;

  kcg_copy_SessionManagement_T(&last_session, &outC->session);
  last_invalidAck = outC->invalidAck;
  last_validAck = outC->validAck;
  last_radioTrackTrainMessageWasSentEmergencyStopId =
    outC->radioTrackTrainMessageWasSentEmergencyStopId;
  outC->CONDITIONAL_EMERGENCY_STOP_SM_state_sel =
    outC->CONDITIONAL_EMERGENCY_STOP_SM_state_nxt;
  switch (outC->CONDITIONAL_EMERGENCY_STOP_SM_state_sel) {
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM :
      tr_4_guard_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM =
        last_invalidAck;
      break;
    default :
      /* this branch is empty */
      break;
  }
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->_L68,
    inRadioTrainTrackMessage);
  /* _L66=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#4)/ */
  RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L68,
    &outC->Context_RadioTrainTrackMessage__GetHeader_4);
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
    &outC->_L66,
    &outC->Context_RadioTrainTrackMessage__GetHeader_4.outRadioTrainTrackHeader);
  /* _L67=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_MESSAGE#2)/ */
  RadioTrainTrackHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L66,
    &outC->Context_RadioTrainTrackHeader__Get_NID_MESSAGE_2);
  outC->_L67 =
    outC->Context_RadioTrainTrackHeader__Get_NID_MESSAGE_2.out_NID_MESSAGE;
  outC->radioTrainTrackMessageId = outC->_L67;
  switch (outC->CONDITIONAL_EMERGENCY_STOP_SM_state_sel) {
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM :
      tr_3_guard_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM =
        last_invalidAck & (outC->radioTrainTrackMessageId == kcg_lit_int32(147));
      tr_2_guard_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM =
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
  /* _L65=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#4)/ */
  RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_L64,
    &outC->Context_RadioTrackTrainMessage__GetHeader_4);
  kcg_copy_Radio_TrackTrain_Header_T_TM(
    &outC->_L65,
    &outC->Context_RadioTrackTrainMessage__GetHeader_4.outRadioTrackTrainHeader);
  /* _L63=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#2)/ */
  RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_L65,
    &outC->Context_RadioTrackTrainHeader__Get_NID_MESSAGE_2);
  outC->_L63 =
    outC->Context_RadioTrackTrainHeader__Get_NID_MESSAGE_2.out_NID_MESSAGE;
  outC->radioTrackTrainMessageId = outC->_L63;
  /* CONDITIONAL_EMERGENCY_STOP_SM: */
  switch (outC->CONDITIONAL_EMERGENCY_STOP_SM_state_sel) {
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM :
      tr_1_guard_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM =
        last_validAck & (outC->radioTrackTrainMessageId == kcg_lit_int32(15));
      if (tr_1_guard_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM) {
        _27_CONDITIONAL_EMERGENCY_STOP_SM_state_act_partial =
          SSM_st_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      else if (tr_2_guard_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM) {
        _27_CONDITIONAL_EMERGENCY_STOP_SM_state_act_partial =
          SSM_st_IDLE_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      else if (tr_3_guard_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM) {
        _27_CONDITIONAL_EMERGENCY_STOP_SM_state_act_partial =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      else if (tr_4_guard_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM) {
        _27_CONDITIONAL_EMERGENCY_STOP_SM_state_act_partial =
          SSM_st_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      else {
        _27_CONDITIONAL_EMERGENCY_STOP_SM_state_act_partial =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      outC->CONDITIONAL_EMERGENCY_STOP_SM_state_act =
        _27_CONDITIONAL_EMERGENCY_STOP_SM_state_act_partial;
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM :
      tr_1_guard_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM =
        outC->radioTrainTrackMessageId == kcg_lit_int32(147);
      if (tr_1_guard_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM) {
        _24_CONDITIONAL_EMERGENCY_STOP_SM_state_act_partial =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      else {
        _24_CONDITIONAL_EMERGENCY_STOP_SM_state_act_partial =
          SSM_st_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      outC->CONDITIONAL_EMERGENCY_STOP_SM_state_act =
        _24_CONDITIONAL_EMERGENCY_STOP_SM_state_act_partial;
      break;
    case SSM_st_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM :
      tr_2_guard_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM =
        outC->radioTrainTrackMessageId != kcg_lit_int32(147);
      tr_1_guard_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM =
        outC->radioTrainTrackMessageId == kcg_lit_int32(147);
      if (tr_1_guard_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM) {
        _21_CONDITIONAL_EMERGENCY_STOP_SM_state_act_partial =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      else if (tr_2_guard_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM) {
        _21_CONDITIONAL_EMERGENCY_STOP_SM_state_act_partial =
          SSM_st_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      else {
        _21_CONDITIONAL_EMERGENCY_STOP_SM_state_act_partial =
          SSM_st_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      outC->CONDITIONAL_EMERGENCY_STOP_SM_state_act =
        _21_CONDITIONAL_EMERGENCY_STOP_SM_state_act_partial;
      break;
    case SSM_st_IDLE_CONDITIONAL_EMERGENCY_STOP_SM :
      tr_1_guard_IDLE_CONDITIONAL_EMERGENCY_STOP_SM =
        outC->radioTrackTrainMessageId == kcg_lit_int32(15);
      if (tr_1_guard_IDLE_CONDITIONAL_EMERGENCY_STOP_SM) {
        CONDITIONAL_EMERGENCY_STOP_SM_state_act_partial =
          SSM_st_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      else {
        CONDITIONAL_EMERGENCY_STOP_SM_state_act_partial =
          SSM_st_IDLE_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      outC->CONDITIONAL_EMERGENCY_STOP_SM_state_act =
        CONDITIONAL_EMERGENCY_STOP_SM_state_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* CONDITIONAL_EMERGENCY_STOP_SM: */
  switch (outC->CONDITIONAL_EMERGENCY_STOP_SM_state_act) {
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM :
      _13_radioTrackTrainMessageWasSentEmergencyStopId_partial =
        last_radioTrackTrainMessageWasSentEmergencyStopId;
      kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
        &outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM,
        inRadioTrainTrackMessage);
      /* CONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L26=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#3)/ */
      RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
        &outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM,
        &outC->Context_RadioTrainTrackMessage__GetHeader_3);
      kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
        &outC->_L26_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM,
        &outC->Context_RadioTrainTrackMessage__GetHeader_3.outRadioTrainTrackHeader);
      /* CONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L27=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_EM#1)/ */
      RadioTrainTrackHeader__Get_NID_EM_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
        &outC->_L26_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM,
        &outC->Context_RadioTrainTrackHeader__Get_NID_EM_1);
      outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM =
        outC->Context_RadioTrainTrackHeader__Get_NID_EM_1.out_NID_EM;
      outC->emergencyStopId_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM =
        outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
      outC->IfBlock1_clock_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM =
        outC->emergencyStopId_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM ==
        _13_radioTrackTrainMessageWasSentEmergencyStopId_partial;
      /* CONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1: */
      if (outC->IfBlock1_clock_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM) {
        kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
          &outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM,
          inDataBus);
        kcg_copy_SessionManagement_T(
          &outC->_L20_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM,
          &outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session);
        /* CONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1:then:_L10=(RBC_Session_Pkg::SessionManagement__GetPosData#5)/ */
        SessionManagement__GetPosData_RBC_Session_Pkg(
          &outC->_L20_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM,
          &outC->Context_SessionManagement__GetPosData_5);
        kcg_copy_PosData_T(
          &outC->_L10_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM,
          &outC->Context_SessionManagement__GetPosData_5.outPositionManagement);
        kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
          &outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM,
          inRadioTrainTrackMessage);
        /* CONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1:then:_L11=(RBC_Session_Pkg::PosData__Update#5)/ */
        PosData__Update_RBC_Session_Pkg(
          &outC->_L10_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM,
          &outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM,
          &outC->Context_PosData__Update_5);
        kcg_copy_PosData_T(
          &outC->_L11_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM,
          &outC->Context_PosData__Update_5.outPosData);
        /* CONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1:then:_L13=(RBC_Session_Pkg::SessionManagement__SetPosData#5)/ */
        SessionManagement__SetPosData_RBC_Session_Pkg(
          &outC->_L20_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM,
          &outC->_L11_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM,
          &outC->Context_SessionManagement__SetPosData_5);
        kcg_copy_SessionManagement_T(
          &outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM,
          &outC->Context_SessionManagement__SetPosData_5.outSessionManagement);
        kcg_copy_SessionManagement_T(
          &_20_session_partial,
          &outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM);
        kcg_copy_SessionManagement_T(&_15_session_partial, &_20_session_partial);
      }
      else {
        kcg_copy_SessionManagement_T(&_19_session_partial, &last_session);
        kcg_copy_SessionManagement_T(&_15_session_partial, &_19_session_partial);
      }
      kcg_copy_SessionManagement_T(&outC->session, &_15_session_partial);
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM :
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM,
        inDataBus);
      kcg_copy_SessionManagement_T(
        &outC->_L4_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM,
        &outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session);
      kcg_copy_SessionManagement_T(
        &_9_session_partial,
        &outC->_L4_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM);
      kcg_copy_SessionManagement_T(&outC->session, &_9_session_partial);
      break;
    case SSM_st_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM :
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM,
        inDataBus);
      kcg_copy_SessionManagement_T(
        &outC->_L62_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM,
        &outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session);
      kcg_copy_SessionManagement_T(
        &_3_session_partial,
        &outC->_L62_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM);
      kcg_copy_SessionManagement_T(&outC->session, &_3_session_partial);
      break;
    case SSM_st_IDLE_CONDITIONAL_EMERGENCY_STOP_SM :
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM,
        inDataBus);
      kcg_copy_SessionManagement_T(
        &outC->_L4_IDLE_CONDITIONAL_EMERGENCY_STOP_SM,
        &outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.session);
      kcg_copy_SessionManagement_T(
        &session_partial,
        &outC->_L4_IDLE_CONDITIONAL_EMERGENCY_STOP_SM);
      kcg_copy_SessionManagement_T(&outC->session, &session_partial);
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  kcg_copy_SessionManagement_T(&outC->_L80, &outC->session);
  /* CONDITIONAL_EMERGENCY_STOP_SM: */
  switch (outC->CONDITIONAL_EMERGENCY_STOP_SM_state_act) {
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM :
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM,
        inDataBus);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->_L36_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM,
        &outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_14_messageQueue_partial,
        &outC->_L36_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->messageQueue,
        &_14_messageQueue_partial);
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM :
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->_L5_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM,
        &outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_8_messageQueue_partial,
        &outC->_L5_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->messageQueue,
        &_8_messageQueue_partial);
      break;
    case SSM_st_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM :
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM,
        inDataBus);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->_L70_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM,
        &outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue);
      kcg_copy_CompressedRadioMessage_TM(
        &outC->_L52_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM,
        &outC->radioTrackTrainMessage);
      /* CONDITIONAL_EMERGENCY_STOP_SM:SEND_CONDITIONAL_EMERGENCY_STOP:_L59=(RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__Create#3)/ */
      RadioTrackTrainMessageQueueEntry__Create_RBC_Collections_Pkg(
        &outC->_L52_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM,
        &outC->Context_RadioTrackTrainMessageQueueEntry__Create_3);
      kcg_copy_RadioTrackTrainMessageQueueEntry_T(
        &outC->_L59_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM,
        &outC->Context_RadioTrackTrainMessageQueueEntry__Create_3.outRadioTrackTrainMessageQueueEntry);
      /* CONDITIONAL_EMERGENCY_STOP_SM:SEND_CONDITIONAL_EMERGENCY_STOP:_L57=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut#3)/ */
      RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg(
        &outC->_L70_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM,
        &outC->_L59_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM,
        &outC->Context_RadioTrackTrainMessageQueue__TryPut_3);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->_L57_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM,
        &outC->Context_RadioTrackTrainMessageQueue__TryPut_3.outRadioTrackTrainMessageQueue);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_2_messageQueue_partial,
        &outC->_L57_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->messageQueue,
        &_2_messageQueue_partial);
      break;
    case SSM_st_IDLE_CONDITIONAL_EMERGENCY_STOP_SM :
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->_L5_IDLE_CONDITIONAL_EMERGENCY_STOP_SM,
        &outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &messageQueue_partial,
        &outC->_L5_IDLE_CONDITIONAL_EMERGENCY_STOP_SM);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->messageQueue,
        &messageQueue_partial);
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  kcg_copy_RadioTrackTrainMessageQueue_T(&outC->_L78, &outC->messageQueue);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->_L76, inDataBus);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->_L75, &outC->_L76);
  if (kcg_true) {
    kcg_copy_RadioTrackTrainMessageQueue_T(&outC->_L75.messageQueue, &outC->_L78);
  }
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->_L79, &outC->_L75);
  if (kcg_true) {
    kcg_copy_SessionManagement_T(&outC->_L79.session, &outC->_L80);
  }
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->outDataBus, &outC->_L79);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->_L72,
    inTriggeredRadioTrackTrainMessage);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->outTriggeredRadioTrackTrainMessage,
    &outC->_L72);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->_L69,
    inRadioTrainTrackMessage);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->outRadioTrainTrackMessage,
    &outC->_L69);
  /* CONDITIONAL_EMERGENCY_STOP_SM: */
  switch (outC->CONDITIONAL_EMERGENCY_STOP_SM_state_sel) {
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM :
      if (tr_1_guard_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM) {
        _29_CONDITIONAL_EMERGENCY_STOP_SM_fired_strong_partial =
          SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_SEND_CONDITIONAL_EMERGENCY_STOP_1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      else if (tr_2_guard_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM) {
        _29_CONDITIONAL_EMERGENCY_STOP_SM_fired_strong_partial =
          SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_IDLE_2_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      else if (tr_3_guard_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM) {
        _29_CONDITIONAL_EMERGENCY_STOP_SM_fired_strong_partial =
          SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_TRY_PROCESS_ACKNOWLEDGEMENT_3_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      else if (tr_4_guard_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM) {
        _29_CONDITIONAL_EMERGENCY_STOP_SM_fired_strong_partial =
          SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_AWAIT_ACKNOWLEDGEMENT_4_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      else {
        _29_CONDITIONAL_EMERGENCY_STOP_SM_fired_strong_partial =
          SSM_TR_no_trans_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      outC->CONDITIONAL_EMERGENCY_STOP_SM_fired_strong =
        _29_CONDITIONAL_EMERGENCY_STOP_SM_fired_strong_partial;
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM :
      if (tr_1_guard_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM) {
        _26_CONDITIONAL_EMERGENCY_STOP_SM_fired_strong_partial =
          SSM_TR_AWAIT_ACKNOWLEDGEMENT_TRY_PROCESS_ACKNOWLEDGEMENT_1_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      else {
        _26_CONDITIONAL_EMERGENCY_STOP_SM_fired_strong_partial =
          SSM_TR_no_trans_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      outC->CONDITIONAL_EMERGENCY_STOP_SM_fired_strong =
        _26_CONDITIONAL_EMERGENCY_STOP_SM_fired_strong_partial;
      break;
    case SSM_st_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM :
      if (tr_1_guard_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM) {
        _23_CONDITIONAL_EMERGENCY_STOP_SM_fired_strong_partial =
          SSM_TR_SEND_CONDITIONAL_EMERGENCY_STOP_TRY_PROCESS_ACKNOWLEDGEMENT_1_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      else if (tr_2_guard_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM) {
        _23_CONDITIONAL_EMERGENCY_STOP_SM_fired_strong_partial =
          SSM_TR_SEND_CONDITIONAL_EMERGENCY_STOP_AWAIT_ACKNOWLEDGEMENT_2_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      else {
        _23_CONDITIONAL_EMERGENCY_STOP_SM_fired_strong_partial =
          SSM_TR_no_trans_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      outC->CONDITIONAL_EMERGENCY_STOP_SM_fired_strong =
        _23_CONDITIONAL_EMERGENCY_STOP_SM_fired_strong_partial;
      break;
    case SSM_st_IDLE_CONDITIONAL_EMERGENCY_STOP_SM :
      if (tr_1_guard_IDLE_CONDITIONAL_EMERGENCY_STOP_SM) {
        CONDITIONAL_EMERGENCY_STOP_SM_fired_strong_partial =
          SSM_TR_IDLE_SEND_CONDITIONAL_EMERGENCY_STOP_1_IDLE_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      else {
        CONDITIONAL_EMERGENCY_STOP_SM_fired_strong_partial =
          SSM_TR_no_trans_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      outC->CONDITIONAL_EMERGENCY_STOP_SM_fired_strong =
        CONDITIONAL_EMERGENCY_STOP_SM_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* CONDITIONAL_EMERGENCY_STOP_SM: */
  switch (outC->CONDITIONAL_EMERGENCY_STOP_SM_state_act) {
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM :
      _18_CONDITIONAL_EMERGENCY_STOP_SM_fired_partial =
        outC->CONDITIONAL_EMERGENCY_STOP_SM_fired_strong;
      _17_CONDITIONAL_EMERGENCY_STOP_SM_reset_nxt_partial = kcg_false;
      _16_CONDITIONAL_EMERGENCY_STOP_SM_state_nxt_partial =
        SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
      if (outC->IfBlock1_clock_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM) {
        kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
          &outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM,
          inRadioTrainTrackMessage);
        /* CONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1:then:_L17=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#5)/ */
        RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
          &outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM,
          &outC->Context_RadioTrainTrackMessage__GetHeader_5);
        kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
          &outC->_L17_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM,
          &outC->Context_RadioTrainTrackMessage__GetHeader_5.outRadioTrainTrackHeader);
        /* CONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1:then:_L16=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_Q_EMERGENCYSTOP#1)/ */
        RadioTrainTrackHeader__Get_Q_EMERGENCYSTOP_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
          &outC->_L17_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM,
          &outC->Context_RadioTrainTrackHeader__Get_Q_EMERGENCYSTOP_1);
        outC->_L16_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM =
          outC->Context_RadioTrainTrackHeader__Get_Q_EMERGENCYSTOP_1.out_Q_EMERGENCYSTOP;
        noname =
          outC->_L16_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      outC->radioTrackTrainMessageWasSentEmergencyStopId =
        _13_radioTrackTrainMessageWasSentEmergencyStopId_partial;
      outC->CONDITIONAL_EMERGENCY_STOP_SM_state_nxt =
        _16_CONDITIONAL_EMERGENCY_STOP_SM_state_nxt_partial;
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM :
      _7_radioTrackTrainMessageWasSentEmergencyStopId_partial =
        last_radioTrackTrainMessageWasSentEmergencyStopId;
      _12_CONDITIONAL_EMERGENCY_STOP_SM_fired_partial =
        outC->CONDITIONAL_EMERGENCY_STOP_SM_fired_strong;
      _11_CONDITIONAL_EMERGENCY_STOP_SM_reset_nxt_partial = kcg_false;
      _10_CONDITIONAL_EMERGENCY_STOP_SM_state_nxt_partial =
        SSM_st_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
      outC->radioTrackTrainMessageWasSentEmergencyStopId =
        _7_radioTrackTrainMessageWasSentEmergencyStopId_partial;
      outC->CONDITIONAL_EMERGENCY_STOP_SM_state_nxt =
        _10_CONDITIONAL_EMERGENCY_STOP_SM_state_nxt_partial;
      break;
    case SSM_st_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM :
      _6_CONDITIONAL_EMERGENCY_STOP_SM_fired_partial =
        outC->CONDITIONAL_EMERGENCY_STOP_SM_fired_strong;
      _5_CONDITIONAL_EMERGENCY_STOP_SM_reset_nxt_partial = kcg_false;
      _4_CONDITIONAL_EMERGENCY_STOP_SM_state_nxt_partial =
        SSM_st_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM;
      /* CONDITIONAL_EMERGENCY_STOP_SM:SEND_CONDITIONAL_EMERGENCY_STOP:_L56=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#3)/ */
      RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &outC->_L52_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM,
        &outC->Context_RadioTrackTrainMessage__GetHeader_3);
      kcg_copy_Radio_TrackTrain_Header_T_TM(
        &outC->_L56_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM,
        &outC->Context_RadioTrackTrainMessage__GetHeader_3.outRadioTrackTrainHeader);
      /* CONDITIONAL_EMERGENCY_STOP_SM:SEND_CONDITIONAL_EMERGENCY_STOP:_L54=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_EM#1)/ */
      RadioTrackTrainHeader__Get_NID_EM_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &outC->_L56_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM,
        &outC->Context_RadioTrackTrainHeader__Get_NID_EM_1);
      outC->_L54_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM =
        outC->Context_RadioTrackTrainHeader__Get_NID_EM_1.out_NID_EM;
      _1_radioTrackTrainMessageWasSentEmergencyStopId_partial =
        outC->_L54_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM;
      outC->radioTrackTrainMessageWasSentEmergencyStopId =
        _1_radioTrackTrainMessageWasSentEmergencyStopId_partial;
      outC->CONDITIONAL_EMERGENCY_STOP_SM_state_nxt =
        _4_CONDITIONAL_EMERGENCY_STOP_SM_state_nxt_partial;
      break;
    case SSM_st_IDLE_CONDITIONAL_EMERGENCY_STOP_SM :
      radioTrackTrainMessageWasSentEmergencyStopId_partial =
        last_radioTrackTrainMessageWasSentEmergencyStopId;
      CONDITIONAL_EMERGENCY_STOP_SM_fired_partial =
        outC->CONDITIONAL_EMERGENCY_STOP_SM_fired_strong;
      CONDITIONAL_EMERGENCY_STOP_SM_reset_nxt_partial = kcg_false;
      CONDITIONAL_EMERGENCY_STOP_SM_state_nxt_partial =
        SSM_st_IDLE_CONDITIONAL_EMERGENCY_STOP_SM;
      outC->radioTrackTrainMessageWasSentEmergencyStopId =
        radioTrackTrainMessageWasSentEmergencyStopId_partial;
      outC->CONDITIONAL_EMERGENCY_STOP_SM_state_nxt =
        CONDITIONAL_EMERGENCY_STOP_SM_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  CONDITIONAL_EMERGENCY_STOP_SM_reset_sel =
    outC->CONDITIONAL_EMERGENCY_STOP_SM_reset_nxt;
  /* CONDITIONAL_EMERGENCY_STOP_SM: */
  switch (outC->CONDITIONAL_EMERGENCY_STOP_SM_state_act) {
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM :
      outC->CONDITIONAL_EMERGENCY_STOP_SM_reset_nxt =
        _17_CONDITIONAL_EMERGENCY_STOP_SM_reset_nxt_partial;
      outC->CONDITIONAL_EMERGENCY_STOP_SM_fired =
        _18_CONDITIONAL_EMERGENCY_STOP_SM_fired_partial;
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM :
      outC->CONDITIONAL_EMERGENCY_STOP_SM_reset_nxt =
        _11_CONDITIONAL_EMERGENCY_STOP_SM_reset_nxt_partial;
      outC->CONDITIONAL_EMERGENCY_STOP_SM_fired =
        _12_CONDITIONAL_EMERGENCY_STOP_SM_fired_partial;
      break;
    case SSM_st_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM :
      outC->CONDITIONAL_EMERGENCY_STOP_SM_reset_nxt =
        _5_CONDITIONAL_EMERGENCY_STOP_SM_reset_nxt_partial;
      outC->CONDITIONAL_EMERGENCY_STOP_SM_fired =
        _6_CONDITIONAL_EMERGENCY_STOP_SM_fired_partial;
      break;
    case SSM_st_IDLE_CONDITIONAL_EMERGENCY_STOP_SM :
      outC->CONDITIONAL_EMERGENCY_STOP_SM_reset_nxt =
        CONDITIONAL_EMERGENCY_STOP_SM_reset_nxt_partial;
      outC->CONDITIONAL_EMERGENCY_STOP_SM_fired =
        CONDITIONAL_EMERGENCY_STOP_SM_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->CONDITIONAL_EMERGENCY_STOP_SM_state_sel) {
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM :
      if (tr_1_guard_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM) {
        _28_CONDITIONAL_EMERGENCY_STOP_SM_reset_act_partial = kcg_true;
      }
      else if (tr_2_guard_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM) {
        _28_CONDITIONAL_EMERGENCY_STOP_SM_reset_act_partial = kcg_true;
      }
      else if (tr_3_guard_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM) {
        _28_CONDITIONAL_EMERGENCY_STOP_SM_reset_act_partial = kcg_true;
      }
      else {
        _28_CONDITIONAL_EMERGENCY_STOP_SM_reset_act_partial =
          tr_4_guard_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM :
      _25_CONDITIONAL_EMERGENCY_STOP_SM_reset_act_partial =
        tr_1_guard_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
      break;
    case SSM_st_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM :
      if (tr_1_guard_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM) {
        _22_CONDITIONAL_EMERGENCY_STOP_SM_reset_act_partial = kcg_true;
      }
      else {
        _22_CONDITIONAL_EMERGENCY_STOP_SM_reset_act_partial =
          tr_2_guard_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      break;
    case SSM_st_IDLE_CONDITIONAL_EMERGENCY_STOP_SM :
      CONDITIONAL_EMERGENCY_STOP_SM_reset_act_partial =
        tr_1_guard_IDLE_CONDITIONAL_EMERGENCY_STOP_SM;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  CONDITIONAL_EMERGENCY_STOP_SM_reset_prv =
    outC->CONDITIONAL_EMERGENCY_STOP_SM_reset_act;
  /* CONDITIONAL_EMERGENCY_STOP_SM: */
  switch (outC->CONDITIONAL_EMERGENCY_STOP_SM_state_sel) {
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM :
      outC->CONDITIONAL_EMERGENCY_STOP_SM_reset_act =
        _28_CONDITIONAL_EMERGENCY_STOP_SM_reset_act_partial;
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM :
      outC->CONDITIONAL_EMERGENCY_STOP_SM_reset_act =
        _25_CONDITIONAL_EMERGENCY_STOP_SM_reset_act_partial;
      break;
    case SSM_st_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM :
      outC->CONDITIONAL_EMERGENCY_STOP_SM_reset_act =
        _22_CONDITIONAL_EMERGENCY_STOP_SM_reset_act_partial;
      break;
    case SSM_st_IDLE_CONDITIONAL_EMERGENCY_STOP_SM :
      outC->CONDITIONAL_EMERGENCY_STOP_SM_reset_act =
        CONDITIONAL_EMERGENCY_STOP_SM_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* CONDITIONAL_EMERGENCY_STOP_SM: */
  switch (outC->CONDITIONAL_EMERGENCY_STOP_SM_state_act) {
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM :
      /* CONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1: */
      if (outC->IfBlock1_clock_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM) {
        outC->validAck = kcg_true;
        outC->invalidAck = kcg_false;
      }
      else {
        outC->validAck = kcg_false;
        outC->invalidAck = kcg_true;
      }
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM :
      outC->validAck = kcg_false;
      outC->invalidAck = kcg_false;
      break;
    case SSM_st_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM :
      outC->validAck = kcg_false;
      outC->invalidAck = kcg_false;
      break;
    case SSM_st_IDLE_CONDITIONAL_EMERGENCY_STOP_SM :
      outC->validAck = kcg_false;
      outC->invalidAck = kcg_false;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void RBC__ProcessConditionalEmergencyStop_init_RBC_Model_Pkg(
  outC_RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg *outC)
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

  outC->_L80.m_TrainData.nid_engine = kcg_lit_int32(0);
  outC->_L80.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 1; idx1++) {
    outC->_L80.m_TrainData.m_OnboardPhoneNumbers[idx1].valid = kcg_true;
    for (idx = 0; idx < 15; idx++) {
      outC->_L80.m_TrainData.m_OnboardPhoneNumbers[idx1].telephoneNumber[idx] =
        kcg_lit_int32(0);
    }
  }
  outC->_L80.m_TrainData.t_train_ref = kcg_lit_int32(0);
  outC->_L80.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L80.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L80.m_TrainData.l_train = kcg_lit_int32(0);
  outC->_L80.m_TrainData.v_maxtrain = kcg_lit_int32(0);
  outC->_L80.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L80.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L80.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L80.m_TrainData.n_axle = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 4; idx2++) {
    outC->_L80.m_TrainData.m_TractionIdentities[idx2].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L80.m_TrainData.m_TractionIdentities[idx2].nid_ctraction =
      kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L80.m_TrainData.m_NationalSystemIdentities[idx3] = kcg_lit_int32(0);
  }
  outC->_L80.m_TrainData.nid_operational = kcg_lit_int32(0);
  outC->_L80.m_PosData.nid_lrbg = kcg_lit_int32(0);
  outC->_L80.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L80.m_PosData.d_lrbg = kcg_lit_int32(0);
  outC->_L80.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L80.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L80.m_PosData.l_doubtover = kcg_lit_int32(0);
  outC->_L80.m_PosData.l_doubtunder = kcg_lit_int32(0);
  outC->_L80.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L80.m_PosData.l_trainint = kcg_lit_int32(0);
  outC->_L80.m_PosData.v_train = kcg_lit_int32(0);
  outC->_L80.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L80.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L80.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L80.m_PosData.nid_ntc = kcg_lit_int32(0);
  outC->_L80.m_PosData.nid_prvlrbg = kcg_lit_int32(0);
  outC->_L79.session.m_TrainData.nid_engine = kcg_lit_int32(0);
  outC->_L79.session.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 1; idx5++) {
    outC->_L79.session.m_TrainData.m_OnboardPhoneNumbers[idx5].valid = kcg_true;
    for (idx4 = 0; idx4 < 15; idx4++) {
      outC->_L79.session.m_TrainData.m_OnboardPhoneNumbers[idx5].telephoneNumber[idx4] =
        kcg_lit_int32(0);
    }
  }
  outC->_L79.session.m_TrainData.t_train_ref = kcg_lit_int32(0);
  outC->_L79.session.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L79.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L79.session.m_TrainData.l_train = kcg_lit_int32(0);
  outC->_L79.session.m_TrainData.v_maxtrain = kcg_lit_int32(0);
  outC->_L79.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L79.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L79.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L79.session.m_TrainData.n_axle = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 4; idx6++) {
    outC->_L79.session.m_TrainData.m_TractionIdentities[idx6].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L79.session.m_TrainData.m_TractionIdentities[idx6].nid_ctraction =
      kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 5; idx7++) {
    outC->_L79.session.m_TrainData.m_NationalSystemIdentities[idx7] =
      kcg_lit_int32(0);
  }
  outC->_L79.session.m_TrainData.nid_operational = kcg_lit_int32(0);
  outC->_L79.session.m_PosData.nid_lrbg = kcg_lit_int32(0);
  outC->_L79.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L79.session.m_PosData.d_lrbg = kcg_lit_int32(0);
  outC->_L79.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L79.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L79.session.m_PosData.l_doubtover = kcg_lit_int32(0);
  outC->_L79.session.m_PosData.l_doubtunder = kcg_lit_int32(0);
  outC->_L79.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L79.session.m_PosData.l_trainint = kcg_lit_int32(0);
  outC->_L79.session.m_PosData.v_train = kcg_lit_int32(0);
  outC->_L79.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L79.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L79.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L79.session.m_PosData.nid_ntc = kcg_lit_int32(0);
  outC->_L79.session.m_PosData.nid_prvlrbg = kcg_lit_int32(0);
  outC->_L79.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L79.config.m_NationalParams.nid_c = kcg_lit_int32(0);
  outC->_L79.config.m_NationalParams.v_nvshunt = kcg_lit_int32(0);
  outC->_L79.config.m_NationalParams.v_nvstff = kcg_lit_int32(0);
  outC->_L79.config.m_NationalParams.v_nvonsight = kcg_lit_int32(0);
  outC->_L79.config.m_NationalParams.v_nvunfit = kcg_lit_int32(0);
  outC->_L79.config.m_NationalParams.v_nvrel = kcg_lit_int32(0);
  outC->_L79.config.m_NationalParams.t_nvcontact = kcg_lit_int32(0);
  outC->_L79.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L79.config.m_MAReqParams.t_mar = kcg_lit_int32(0);
  outC->_L79.config.m_MAReqParams.t_timeoutrqst = kcg_lit_int32(0);
  outC->_L79.config.m_MAReqParams.t_cycrqst = kcg_lit_int32(0);
  outC->_L79.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L79.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L79.config.m_PosRepParams.t_cycloc = kcg_lit_int32(0);
  outC->_L79.config.m_PosRepParams.d_cycloc = kcg_lit_int32(0);
  outC->_L79.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L79.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int32(0);
  for (idx8 = 0; idx8 < 32; idx8++) {
    outC->_L79.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx8].d_loc =
      kcg_lit_int32(0);
    outC->_L79.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx8].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx9 = 0; idx9 < 16; idx9++) {
    outC->_L79.diagnostic[idx9].valid = kcg_true;
    outC->_L79.diagnostic[idx9].count = kcg_lit_int32(0);
    outC->_L79.diagnostic[idx9].timestamp = kcg_lit_int32(0);
    outC->_L79.diagnostic[idx9].diagType = DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L79.diagnostic[idx9].diagSrc = DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L79.diagnostic[idx9].diagText = DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx12 = 0; idx12 < 8; idx12++) {
    outC->_L79.messageQueue.m_Entries[idx12].m_IsValid = kcg_true;
    outC->_L79.messageQueue.m_Entries[idx12].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L79.messageQueue.m_Entries[idx12].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L79.messageQueue.m_Entries[idx12].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->_L79.messageQueue.m_Entries[idx12].m_Entry.Header.t_train =
      kcg_lit_int32(0);
    outC->_L79.messageQueue.m_Entries[idx12].m_Entry.Header.m_ack =
      kcg_lit_int32(0);
    outC->_L79.messageQueue.m_Entries[idx12].m_Entry.Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->_L79.messageQueue.m_Entries[idx12].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L79.messageQueue.m_Entries[idx12].m_Entry.Header.nid_em =
      kcg_lit_int32(0);
    outC->_L79.messageQueue.m_Entries[idx12].m_Entry.Header.q_scale =
      kcg_lit_int32(0);
    outC->_L79.messageQueue.m_Entries[idx12].m_Entry.Header.d_sr = kcg_lit_int32(0);
    outC->_L79.messageQueue.m_Entries[idx12].m_Entry.Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->_L79.messageQueue.m_Entries[idx12].m_Entry.Header.d_ref =
      kcg_lit_int32(0);
    outC->_L79.messageQueue.m_Entries[idx12].m_Entry.Header.q_dir =
      kcg_lit_int32(0);
    outC->_L79.messageQueue.m_Entries[idx12].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L79.messageQueue.m_Entries[idx12].m_Entry.Header.m_version =
      kcg_lit_int32(0);
    for (idx10 = 0; idx10 < 30; idx10++) {
      outC->_L79.messageQueue.m_Entries[idx12].m_Entry.Messages.PacketHeaders[idx10].nid_packet =
        kcg_lit_int32(0);
      outC->_L79.messageQueue.m_Entries[idx12].m_Entry.Messages.PacketHeaders[idx10].q_dir =
        Q_DIR_Reverse;
      outC->_L79.messageQueue.m_Entries[idx12].m_Entry.Messages.PacketHeaders[idx10].valid =
        kcg_true;
      outC->_L79.messageQueue.m_Entries[idx12].m_Entry.Messages.PacketHeaders[idx10].startAddress =
        kcg_lit_int32(0);
      outC->_L79.messageQueue.m_Entries[idx12].m_Entry.Messages.PacketHeaders[idx10].endAddress =
        kcg_lit_int32(0);
    }
    for (idx11 = 0; idx11 < 500; idx11++) {
      outC->_L79.messageQueue.m_Entries[idx12].m_Entry.Messages.PacketData[idx11] =
        kcg_lit_int32(0);
    }
  }
  outC->_L79.clockk.m_Value = kcg_lit_int32(0);
  outC->_L79.lastSentTrackTrainMessage.Header.radioDevice = kcg_lit_int32(0);
  outC->_L79.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L79.lastSentTrackTrainMessage.Header.nid_message = kcg_lit_int32(0);
  outC->_L79.lastSentTrackTrainMessage.Header.t_train = kcg_lit_int32(0);
  outC->_L79.lastSentTrackTrainMessage.Header.m_ack = kcg_lit_int32(0);
  outC->_L79.lastSentTrackTrainMessage.Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L79.lastSentTrackTrainMessage.Header.t_train_reference = kcg_lit_int32(
      0);
  outC->_L79.lastSentTrackTrainMessage.Header.nid_em = kcg_lit_int32(0);
  outC->_L79.lastSentTrackTrainMessage.Header.q_scale = kcg_lit_int32(0);
  outC->_L79.lastSentTrackTrainMessage.Header.d_sr = kcg_lit_int32(0);
  outC->_L79.lastSentTrackTrainMessage.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L79.lastSentTrackTrainMessage.Header.d_ref = kcg_lit_int32(0);
  outC->_L79.lastSentTrackTrainMessage.Header.q_dir = kcg_lit_int32(0);
  outC->_L79.lastSentTrackTrainMessage.Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L79.lastSentTrackTrainMessage.Header.m_version = kcg_lit_int32(0);
  for (idx13 = 0; idx13 < 30; idx13++) {
    outC->_L79.lastSentTrackTrainMessage.Messages.PacketHeaders[idx13].nid_packet =
      kcg_lit_int32(0);
    outC->_L79.lastSentTrackTrainMessage.Messages.PacketHeaders[idx13].q_dir =
      Q_DIR_Reverse;
    outC->_L79.lastSentTrackTrainMessage.Messages.PacketHeaders[idx13].valid =
      kcg_true;
    outC->_L79.lastSentTrackTrainMessage.Messages.PacketHeaders[idx13].startAddress =
      kcg_lit_int32(0);
    outC->_L79.lastSentTrackTrainMessage.Messages.PacketHeaders[idx13].endAddress =
      kcg_lit_int32(0);
  }
  for (idx14 = 0; idx14 < 500; idx14++) {
    outC->_L79.lastSentTrackTrainMessage.Messages.PacketData[idx14] =
      kcg_lit_int32(0);
  }
  for (idx17 = 0; idx17 < 8; idx17++) {
    outC->_L78.m_Entries[idx17].m_IsValid = kcg_true;
    outC->_L78.m_Entries[idx17].m_Entry.Header.radioDevice = kcg_lit_int32(0);
    outC->_L78.m_Entries[idx17].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L78.m_Entries[idx17].m_Entry.Header.nid_message = kcg_lit_int32(0);
    outC->_L78.m_Entries[idx17].m_Entry.Header.t_train = kcg_lit_int32(0);
    outC->_L78.m_Entries[idx17].m_Entry.Header.m_ack = kcg_lit_int32(0);
    outC->_L78.m_Entries[idx17].m_Entry.Header.nid_lrbg = kcg_lit_int32(0);
    outC->_L78.m_Entries[idx17].m_Entry.Header.t_train_reference = kcg_lit_int32(0);
    outC->_L78.m_Entries[idx17].m_Entry.Header.nid_em = kcg_lit_int32(0);
    outC->_L78.m_Entries[idx17].m_Entry.Header.q_scale = kcg_lit_int32(0);
    outC->_L78.m_Entries[idx17].m_Entry.Header.d_sr = kcg_lit_int32(0);
    outC->_L78.m_Entries[idx17].m_Entry.Header.t_sh_rqst = kcg_lit_int32(0);
    outC->_L78.m_Entries[idx17].m_Entry.Header.d_ref = kcg_lit_int32(0);
    outC->_L78.m_Entries[idx17].m_Entry.Header.q_dir = kcg_lit_int32(0);
    outC->_L78.m_Entries[idx17].m_Entry.Header.d_emergencystop = kcg_lit_int32(0);
    outC->_L78.m_Entries[idx17].m_Entry.Header.m_version = kcg_lit_int32(0);
    for (idx15 = 0; idx15 < 30; idx15++) {
      outC->_L78.m_Entries[idx17].m_Entry.Messages.PacketHeaders[idx15].nid_packet =
        kcg_lit_int32(0);
      outC->_L78.m_Entries[idx17].m_Entry.Messages.PacketHeaders[idx15].q_dir =
        Q_DIR_Reverse;
      outC->_L78.m_Entries[idx17].m_Entry.Messages.PacketHeaders[idx15].valid =
        kcg_true;
      outC->_L78.m_Entries[idx17].m_Entry.Messages.PacketHeaders[idx15].startAddress =
        kcg_lit_int32(0);
      outC->_L78.m_Entries[idx17].m_Entry.Messages.PacketHeaders[idx15].endAddress =
        kcg_lit_int32(0);
    }
    for (idx16 = 0; idx16 < 500; idx16++) {
      outC->_L78.m_Entries[idx17].m_Entry.Messages.PacketData[idx16] =
        kcg_lit_int32(0);
    }
  }
  outC->_L75.session.m_TrainData.nid_engine = kcg_lit_int32(0);
  outC->_L75.session.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int32(0);
  for (idx19 = 0; idx19 < 1; idx19++) {
    outC->_L75.session.m_TrainData.m_OnboardPhoneNumbers[idx19].valid = kcg_true;
    for (idx18 = 0; idx18 < 15; idx18++) {
      outC->_L75.session.m_TrainData.m_OnboardPhoneNumbers[idx19].telephoneNumber[idx18] =
        kcg_lit_int32(0);
    }
  }
  outC->_L75.session.m_TrainData.t_train_ref = kcg_lit_int32(0);
  outC->_L75.session.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L75.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L75.session.m_TrainData.l_train = kcg_lit_int32(0);
  outC->_L75.session.m_TrainData.v_maxtrain = kcg_lit_int32(0);
  outC->_L75.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L75.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L75.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L75.session.m_TrainData.n_axle = kcg_lit_int32(0);
  for (idx20 = 0; idx20 < 4; idx20++) {
    outC->_L75.session.m_TrainData.m_TractionIdentities[idx20].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L75.session.m_TrainData.m_TractionIdentities[idx20].nid_ctraction =
      kcg_lit_int32(0);
  }
  for (idx21 = 0; idx21 < 5; idx21++) {
    outC->_L75.session.m_TrainData.m_NationalSystemIdentities[idx21] =
      kcg_lit_int32(0);
  }
  outC->_L75.session.m_TrainData.nid_operational = kcg_lit_int32(0);
  outC->_L75.session.m_PosData.nid_lrbg = kcg_lit_int32(0);
  outC->_L75.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L75.session.m_PosData.d_lrbg = kcg_lit_int32(0);
  outC->_L75.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L75.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L75.session.m_PosData.l_doubtover = kcg_lit_int32(0);
  outC->_L75.session.m_PosData.l_doubtunder = kcg_lit_int32(0);
  outC->_L75.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L75.session.m_PosData.l_trainint = kcg_lit_int32(0);
  outC->_L75.session.m_PosData.v_train = kcg_lit_int32(0);
  outC->_L75.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L75.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L75.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L75.session.m_PosData.nid_ntc = kcg_lit_int32(0);
  outC->_L75.session.m_PosData.nid_prvlrbg = kcg_lit_int32(0);
  outC->_L75.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L75.config.m_NationalParams.nid_c = kcg_lit_int32(0);
  outC->_L75.config.m_NationalParams.v_nvshunt = kcg_lit_int32(0);
  outC->_L75.config.m_NationalParams.v_nvstff = kcg_lit_int32(0);
  outC->_L75.config.m_NationalParams.v_nvonsight = kcg_lit_int32(0);
  outC->_L75.config.m_NationalParams.v_nvunfit = kcg_lit_int32(0);
  outC->_L75.config.m_NationalParams.v_nvrel = kcg_lit_int32(0);
  outC->_L75.config.m_NationalParams.t_nvcontact = kcg_lit_int32(0);
  outC->_L75.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L75.config.m_MAReqParams.t_mar = kcg_lit_int32(0);
  outC->_L75.config.m_MAReqParams.t_timeoutrqst = kcg_lit_int32(0);
  outC->_L75.config.m_MAReqParams.t_cycrqst = kcg_lit_int32(0);
  outC->_L75.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L75.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L75.config.m_PosRepParams.t_cycloc = kcg_lit_int32(0);
  outC->_L75.config.m_PosRepParams.d_cycloc = kcg_lit_int32(0);
  outC->_L75.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L75.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int32(0);
  for (idx22 = 0; idx22 < 32; idx22++) {
    outC->_L75.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx22].d_loc =
      kcg_lit_int32(0);
    outC->_L75.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx22].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx23 = 0; idx23 < 16; idx23++) {
    outC->_L75.diagnostic[idx23].valid = kcg_true;
    outC->_L75.diagnostic[idx23].count = kcg_lit_int32(0);
    outC->_L75.diagnostic[idx23].timestamp = kcg_lit_int32(0);
    outC->_L75.diagnostic[idx23].diagType = DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L75.diagnostic[idx23].diagSrc = DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L75.diagnostic[idx23].diagText = DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx26 = 0; idx26 < 8; idx26++) {
    outC->_L75.messageQueue.m_Entries[idx26].m_IsValid = kcg_true;
    outC->_L75.messageQueue.m_Entries[idx26].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L75.messageQueue.m_Entries[idx26].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L75.messageQueue.m_Entries[idx26].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->_L75.messageQueue.m_Entries[idx26].m_Entry.Header.t_train =
      kcg_lit_int32(0);
    outC->_L75.messageQueue.m_Entries[idx26].m_Entry.Header.m_ack =
      kcg_lit_int32(0);
    outC->_L75.messageQueue.m_Entries[idx26].m_Entry.Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->_L75.messageQueue.m_Entries[idx26].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L75.messageQueue.m_Entries[idx26].m_Entry.Header.nid_em =
      kcg_lit_int32(0);
    outC->_L75.messageQueue.m_Entries[idx26].m_Entry.Header.q_scale =
      kcg_lit_int32(0);
    outC->_L75.messageQueue.m_Entries[idx26].m_Entry.Header.d_sr = kcg_lit_int32(0);
    outC->_L75.messageQueue.m_Entries[idx26].m_Entry.Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->_L75.messageQueue.m_Entries[idx26].m_Entry.Header.d_ref =
      kcg_lit_int32(0);
    outC->_L75.messageQueue.m_Entries[idx26].m_Entry.Header.q_dir =
      kcg_lit_int32(0);
    outC->_L75.messageQueue.m_Entries[idx26].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L75.messageQueue.m_Entries[idx26].m_Entry.Header.m_version =
      kcg_lit_int32(0);
    for (idx24 = 0; idx24 < 30; idx24++) {
      outC->_L75.messageQueue.m_Entries[idx26].m_Entry.Messages.PacketHeaders[idx24].nid_packet =
        kcg_lit_int32(0);
      outC->_L75.messageQueue.m_Entries[idx26].m_Entry.Messages.PacketHeaders[idx24].q_dir =
        Q_DIR_Reverse;
      outC->_L75.messageQueue.m_Entries[idx26].m_Entry.Messages.PacketHeaders[idx24].valid =
        kcg_true;
      outC->_L75.messageQueue.m_Entries[idx26].m_Entry.Messages.PacketHeaders[idx24].startAddress =
        kcg_lit_int32(0);
      outC->_L75.messageQueue.m_Entries[idx26].m_Entry.Messages.PacketHeaders[idx24].endAddress =
        kcg_lit_int32(0);
    }
    for (idx25 = 0; idx25 < 500; idx25++) {
      outC->_L75.messageQueue.m_Entries[idx26].m_Entry.Messages.PacketData[idx25] =
        kcg_lit_int32(0);
    }
  }
  outC->_L75.clockk.m_Value = kcg_lit_int32(0);
  outC->_L75.lastSentTrackTrainMessage.Header.radioDevice = kcg_lit_int32(0);
  outC->_L75.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L75.lastSentTrackTrainMessage.Header.nid_message = kcg_lit_int32(0);
  outC->_L75.lastSentTrackTrainMessage.Header.t_train = kcg_lit_int32(0);
  outC->_L75.lastSentTrackTrainMessage.Header.m_ack = kcg_lit_int32(0);
  outC->_L75.lastSentTrackTrainMessage.Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L75.lastSentTrackTrainMessage.Header.t_train_reference = kcg_lit_int32(
      0);
  outC->_L75.lastSentTrackTrainMessage.Header.nid_em = kcg_lit_int32(0);
  outC->_L75.lastSentTrackTrainMessage.Header.q_scale = kcg_lit_int32(0);
  outC->_L75.lastSentTrackTrainMessage.Header.d_sr = kcg_lit_int32(0);
  outC->_L75.lastSentTrackTrainMessage.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L75.lastSentTrackTrainMessage.Header.d_ref = kcg_lit_int32(0);
  outC->_L75.lastSentTrackTrainMessage.Header.q_dir = kcg_lit_int32(0);
  outC->_L75.lastSentTrackTrainMessage.Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L75.lastSentTrackTrainMessage.Header.m_version = kcg_lit_int32(0);
  for (idx27 = 0; idx27 < 30; idx27++) {
    outC->_L75.lastSentTrackTrainMessage.Messages.PacketHeaders[idx27].nid_packet =
      kcg_lit_int32(0);
    outC->_L75.lastSentTrackTrainMessage.Messages.PacketHeaders[idx27].q_dir =
      Q_DIR_Reverse;
    outC->_L75.lastSentTrackTrainMessage.Messages.PacketHeaders[idx27].valid =
      kcg_true;
    outC->_L75.lastSentTrackTrainMessage.Messages.PacketHeaders[idx27].startAddress =
      kcg_lit_int32(0);
    outC->_L75.lastSentTrackTrainMessage.Messages.PacketHeaders[idx27].endAddress =
      kcg_lit_int32(0);
  }
  for (idx28 = 0; idx28 < 500; idx28++) {
    outC->_L75.lastSentTrackTrainMessage.Messages.PacketData[idx28] =
      kcg_lit_int32(0);
  }
  outC->_L76.session.m_TrainData.nid_engine = kcg_lit_int32(0);
  outC->_L76.session.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int32(0);
  for (idx30 = 0; idx30 < 1; idx30++) {
    outC->_L76.session.m_TrainData.m_OnboardPhoneNumbers[idx30].valid = kcg_true;
    for (idx29 = 0; idx29 < 15; idx29++) {
      outC->_L76.session.m_TrainData.m_OnboardPhoneNumbers[idx30].telephoneNumber[idx29] =
        kcg_lit_int32(0);
    }
  }
  outC->_L76.session.m_TrainData.t_train_ref = kcg_lit_int32(0);
  outC->_L76.session.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L76.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L76.session.m_TrainData.l_train = kcg_lit_int32(0);
  outC->_L76.session.m_TrainData.v_maxtrain = kcg_lit_int32(0);
  outC->_L76.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L76.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L76.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L76.session.m_TrainData.n_axle = kcg_lit_int32(0);
  for (idx31 = 0; idx31 < 4; idx31++) {
    outC->_L76.session.m_TrainData.m_TractionIdentities[idx31].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L76.session.m_TrainData.m_TractionIdentities[idx31].nid_ctraction =
      kcg_lit_int32(0);
  }
  for (idx32 = 0; idx32 < 5; idx32++) {
    outC->_L76.session.m_TrainData.m_NationalSystemIdentities[idx32] =
      kcg_lit_int32(0);
  }
  outC->_L76.session.m_TrainData.nid_operational = kcg_lit_int32(0);
  outC->_L76.session.m_PosData.nid_lrbg = kcg_lit_int32(0);
  outC->_L76.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L76.session.m_PosData.d_lrbg = kcg_lit_int32(0);
  outC->_L76.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L76.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L76.session.m_PosData.l_doubtover = kcg_lit_int32(0);
  outC->_L76.session.m_PosData.l_doubtunder = kcg_lit_int32(0);
  outC->_L76.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L76.session.m_PosData.l_trainint = kcg_lit_int32(0);
  outC->_L76.session.m_PosData.v_train = kcg_lit_int32(0);
  outC->_L76.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L76.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L76.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L76.session.m_PosData.nid_ntc = kcg_lit_int32(0);
  outC->_L76.session.m_PosData.nid_prvlrbg = kcg_lit_int32(0);
  outC->_L76.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L76.config.m_NationalParams.nid_c = kcg_lit_int32(0);
  outC->_L76.config.m_NationalParams.v_nvshunt = kcg_lit_int32(0);
  outC->_L76.config.m_NationalParams.v_nvstff = kcg_lit_int32(0);
  outC->_L76.config.m_NationalParams.v_nvonsight = kcg_lit_int32(0);
  outC->_L76.config.m_NationalParams.v_nvunfit = kcg_lit_int32(0);
  outC->_L76.config.m_NationalParams.v_nvrel = kcg_lit_int32(0);
  outC->_L76.config.m_NationalParams.t_nvcontact = kcg_lit_int32(0);
  outC->_L76.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L76.config.m_MAReqParams.t_mar = kcg_lit_int32(0);
  outC->_L76.config.m_MAReqParams.t_timeoutrqst = kcg_lit_int32(0);
  outC->_L76.config.m_MAReqParams.t_cycrqst = kcg_lit_int32(0);
  outC->_L76.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L76.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L76.config.m_PosRepParams.t_cycloc = kcg_lit_int32(0);
  outC->_L76.config.m_PosRepParams.d_cycloc = kcg_lit_int32(0);
  outC->_L76.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L76.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int32(0);
  for (idx33 = 0; idx33 < 32; idx33++) {
    outC->_L76.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx33].d_loc =
      kcg_lit_int32(0);
    outC->_L76.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx33].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx34 = 0; idx34 < 16; idx34++) {
    outC->_L76.diagnostic[idx34].valid = kcg_true;
    outC->_L76.diagnostic[idx34].count = kcg_lit_int32(0);
    outC->_L76.diagnostic[idx34].timestamp = kcg_lit_int32(0);
    outC->_L76.diagnostic[idx34].diagType = DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L76.diagnostic[idx34].diagSrc = DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L76.diagnostic[idx34].diagText = DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx37 = 0; idx37 < 8; idx37++) {
    outC->_L76.messageQueue.m_Entries[idx37].m_IsValid = kcg_true;
    outC->_L76.messageQueue.m_Entries[idx37].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L76.messageQueue.m_Entries[idx37].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L76.messageQueue.m_Entries[idx37].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->_L76.messageQueue.m_Entries[idx37].m_Entry.Header.t_train =
      kcg_lit_int32(0);
    outC->_L76.messageQueue.m_Entries[idx37].m_Entry.Header.m_ack =
      kcg_lit_int32(0);
    outC->_L76.messageQueue.m_Entries[idx37].m_Entry.Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->_L76.messageQueue.m_Entries[idx37].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L76.messageQueue.m_Entries[idx37].m_Entry.Header.nid_em =
      kcg_lit_int32(0);
    outC->_L76.messageQueue.m_Entries[idx37].m_Entry.Header.q_scale =
      kcg_lit_int32(0);
    outC->_L76.messageQueue.m_Entries[idx37].m_Entry.Header.d_sr = kcg_lit_int32(0);
    outC->_L76.messageQueue.m_Entries[idx37].m_Entry.Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->_L76.messageQueue.m_Entries[idx37].m_Entry.Header.d_ref =
      kcg_lit_int32(0);
    outC->_L76.messageQueue.m_Entries[idx37].m_Entry.Header.q_dir =
      kcg_lit_int32(0);
    outC->_L76.messageQueue.m_Entries[idx37].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L76.messageQueue.m_Entries[idx37].m_Entry.Header.m_version =
      kcg_lit_int32(0);
    for (idx35 = 0; idx35 < 30; idx35++) {
      outC->_L76.messageQueue.m_Entries[idx37].m_Entry.Messages.PacketHeaders[idx35].nid_packet =
        kcg_lit_int32(0);
      outC->_L76.messageQueue.m_Entries[idx37].m_Entry.Messages.PacketHeaders[idx35].q_dir =
        Q_DIR_Reverse;
      outC->_L76.messageQueue.m_Entries[idx37].m_Entry.Messages.PacketHeaders[idx35].valid =
        kcg_true;
      outC->_L76.messageQueue.m_Entries[idx37].m_Entry.Messages.PacketHeaders[idx35].startAddress =
        kcg_lit_int32(0);
      outC->_L76.messageQueue.m_Entries[idx37].m_Entry.Messages.PacketHeaders[idx35].endAddress =
        kcg_lit_int32(0);
    }
    for (idx36 = 0; idx36 < 500; idx36++) {
      outC->_L76.messageQueue.m_Entries[idx37].m_Entry.Messages.PacketData[idx36] =
        kcg_lit_int32(0);
    }
  }
  outC->_L76.clockk.m_Value = kcg_lit_int32(0);
  outC->_L76.lastSentTrackTrainMessage.Header.radioDevice = kcg_lit_int32(0);
  outC->_L76.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L76.lastSentTrackTrainMessage.Header.nid_message = kcg_lit_int32(0);
  outC->_L76.lastSentTrackTrainMessage.Header.t_train = kcg_lit_int32(0);
  outC->_L76.lastSentTrackTrainMessage.Header.m_ack = kcg_lit_int32(0);
  outC->_L76.lastSentTrackTrainMessage.Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L76.lastSentTrackTrainMessage.Header.t_train_reference = kcg_lit_int32(
      0);
  outC->_L76.lastSentTrackTrainMessage.Header.nid_em = kcg_lit_int32(0);
  outC->_L76.lastSentTrackTrainMessage.Header.q_scale = kcg_lit_int32(0);
  outC->_L76.lastSentTrackTrainMessage.Header.d_sr = kcg_lit_int32(0);
  outC->_L76.lastSentTrackTrainMessage.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L76.lastSentTrackTrainMessage.Header.d_ref = kcg_lit_int32(0);
  outC->_L76.lastSentTrackTrainMessage.Header.q_dir = kcg_lit_int32(0);
  outC->_L76.lastSentTrackTrainMessage.Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L76.lastSentTrackTrainMessage.Header.m_version = kcg_lit_int32(0);
  for (idx38 = 0; idx38 < 30; idx38++) {
    outC->_L76.lastSentTrackTrainMessage.Messages.PacketHeaders[idx38].nid_packet =
      kcg_lit_int32(0);
    outC->_L76.lastSentTrackTrainMessage.Messages.PacketHeaders[idx38].q_dir =
      Q_DIR_Reverse;
    outC->_L76.lastSentTrackTrainMessage.Messages.PacketHeaders[idx38].valid =
      kcg_true;
    outC->_L76.lastSentTrackTrainMessage.Messages.PacketHeaders[idx38].startAddress =
      kcg_lit_int32(0);
    outC->_L76.lastSentTrackTrainMessage.Messages.PacketHeaders[idx38].endAddress =
      kcg_lit_int32(0);
  }
  for (idx39 = 0; idx39 < 500; idx39++) {
    outC->_L76.lastSentTrackTrainMessage.Messages.PacketData[idx39] =
      kcg_lit_int32(0);
  }
  outC->_L69.present = kcg_true;
  outC->_L69.header.present = kcg_true;
  outC->_L69.header.nid_message = kcg_lit_int32(0);
  outC->_L69.header.t_train = kcg_lit_int32(0);
  outC->_L69.header.nid_engine = kcg_lit_int32(0);
  outC->_L69.header.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L69.header.xT_TRAIN = kcg_lit_int32(0);
  outC->_L69.header.xNID_EM = kcg_lit_int32(0);
  outC->_L69.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L69.header.xNID_TEXTMESSAGE = kcg_lit_int32(0);
  outC->_L69.packets.p0.valid = kcg_true;
  outC->_L69.packets.p0.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->_L69.packets.p0.packet0.L_PACKET = kcg_lit_int32(0);
  outC->_L69.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L69.packets.p0.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->_L69.packets.p0.packet0.D_LRBG = kcg_lit_int32(0);
  outC->_L69.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L69.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L69.packets.p0.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L69.packets.p0.packet0.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L69.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L69.packets.p0.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->_L69.packets.p0.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->_L69.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L69.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L69.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L69.packets.p0.packet0.NID_NTC = kcg_lit_int32(0);
  outC->_L69.packets.p1.valid = kcg_true;
  outC->_L69.packets.p1.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->_L69.packets.p1.packet1.L_PACKET = kcg_lit_int32(0);
  outC->_L69.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L69.packets.p1.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->_L69.packets.p1.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->_L69.packets.p1.packet1.D_LRBG = kcg_lit_int32(0);
  outC->_L69.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L69.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L69.packets.p1.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L69.packets.p1.packet1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L69.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L69.packets.p1.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->_L69.packets.p1.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->_L69.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L69.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L69.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L69.packets.p1.packet1.NID_NTC = kcg_lit_int32(0);
  outC->_L69.packets.p3.valid = kcg_true;
  outC->_L69.packets.p3.number = kcg_lit_int32(0);
  for (idx41 = 0; idx41 < 1; idx41++) {
    outC->_L69.packets.p3.aNID_RADIO[idx41].valid = kcg_true;
    for (idx40 = 0; idx40 < 15; idx40++) {
      outC->_L69.packets.p3.aNID_RADIO[idx41].telephoneNumber[idx40] =
        kcg_lit_int32(0);
    }
  }
  outC->_L69.packets.p4.valid = kcg_true;
  outC->_L69.packets.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L69.packets.p5.valid = kcg_true;
  outC->_L69.packets.p5.TrainRunningNumber = kcg_lit_int32(0);
  outC->_L69.packets.p9.valid = kcg_true;
  outC->_L69.packets.p9.transitionInformation = kcg_lit_int32(0);
  outC->_L69.packets.p11.valid = kcg_true;
  outC->_L69.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L69.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L69.packets.p11.l_train = kcg_lit_int32(0);
  outC->_L69.packets.p11.v_maxtrain = kcg_lit_int32(0);
  outC->_L69.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L69.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L69.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L69.packets.p11.n_axle = kcg_lit_int32(0);
  outC->_L69.packets.p11.nIter_tractionIdentity = kcg_lit_int32(0);
  for (idx42 = 0; idx42 < 4; idx42++) {
    outC->_L69.packets.p11.tractionIdentity[idx42].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L69.packets.p11.tractionIdentity[idx42].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L69.packets.p11.nIter_ntc = kcg_lit_int32(0);
  for (idx43 = 0; idx43 < 5; idx43++) {
    outC->_L69.packets.p11.nid_ntc[idx43] = kcg_lit_int32(0);
  }
  outC->_L72.Header.radioDevice = kcg_lit_int32(0);
  outC->_L72.Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L72.Header.nid_message = kcg_lit_int32(0);
  outC->_L72.Header.t_train = kcg_lit_int32(0);
  outC->_L72.Header.m_ack = kcg_lit_int32(0);
  outC->_L72.Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L72.Header.t_train_reference = kcg_lit_int32(0);
  outC->_L72.Header.nid_em = kcg_lit_int32(0);
  outC->_L72.Header.q_scale = kcg_lit_int32(0);
  outC->_L72.Header.d_sr = kcg_lit_int32(0);
  outC->_L72.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L72.Header.d_ref = kcg_lit_int32(0);
  outC->_L72.Header.q_dir = kcg_lit_int32(0);
  outC->_L72.Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L72.Header.m_version = kcg_lit_int32(0);
  for (idx44 = 0; idx44 < 30; idx44++) {
    outC->_L72.Messages.PacketHeaders[idx44].nid_packet = kcg_lit_int32(0);
    outC->_L72.Messages.PacketHeaders[idx44].q_dir = Q_DIR_Reverse;
    outC->_L72.Messages.PacketHeaders[idx44].valid = kcg_true;
    outC->_L72.Messages.PacketHeaders[idx44].startAddress = kcg_lit_int32(0);
    outC->_L72.Messages.PacketHeaders[idx44].endAddress = kcg_lit_int32(0);
  }
  for (idx45 = 0; idx45 < 500; idx45++) {
    outC->_L72.Messages.PacketData[idx45] = kcg_lit_int32(0);
  }
  outC->_L66.present = kcg_true;
  outC->_L66.nid_message = kcg_lit_int32(0);
  outC->_L66.t_train = kcg_lit_int32(0);
  outC->_L66.nid_engine = kcg_lit_int32(0);
  outC->_L66.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L66.xT_TRAIN = kcg_lit_int32(0);
  outC->_L66.xNID_EM = kcg_lit_int32(0);
  outC->_L66.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L66.xNID_TEXTMESSAGE = kcg_lit_int32(0);
  outC->_L67 = kcg_lit_int32(0);
  outC->_L68.present = kcg_true;
  outC->_L68.header.present = kcg_true;
  outC->_L68.header.nid_message = kcg_lit_int32(0);
  outC->_L68.header.t_train = kcg_lit_int32(0);
  outC->_L68.header.nid_engine = kcg_lit_int32(0);
  outC->_L68.header.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L68.header.xT_TRAIN = kcg_lit_int32(0);
  outC->_L68.header.xNID_EM = kcg_lit_int32(0);
  outC->_L68.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L68.header.xNID_TEXTMESSAGE = kcg_lit_int32(0);
  outC->_L68.packets.p0.valid = kcg_true;
  outC->_L68.packets.p0.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->_L68.packets.p0.packet0.L_PACKET = kcg_lit_int32(0);
  outC->_L68.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L68.packets.p0.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->_L68.packets.p0.packet0.D_LRBG = kcg_lit_int32(0);
  outC->_L68.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L68.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L68.packets.p0.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L68.packets.p0.packet0.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L68.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L68.packets.p0.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->_L68.packets.p0.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->_L68.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L68.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L68.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L68.packets.p0.packet0.NID_NTC = kcg_lit_int32(0);
  outC->_L68.packets.p1.valid = kcg_true;
  outC->_L68.packets.p1.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->_L68.packets.p1.packet1.L_PACKET = kcg_lit_int32(0);
  outC->_L68.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L68.packets.p1.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->_L68.packets.p1.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->_L68.packets.p1.packet1.D_LRBG = kcg_lit_int32(0);
  outC->_L68.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L68.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L68.packets.p1.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L68.packets.p1.packet1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L68.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L68.packets.p1.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->_L68.packets.p1.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->_L68.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L68.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L68.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L68.packets.p1.packet1.NID_NTC = kcg_lit_int32(0);
  outC->_L68.packets.p3.valid = kcg_true;
  outC->_L68.packets.p3.number = kcg_lit_int32(0);
  for (idx47 = 0; idx47 < 1; idx47++) {
    outC->_L68.packets.p3.aNID_RADIO[idx47].valid = kcg_true;
    for (idx46 = 0; idx46 < 15; idx46++) {
      outC->_L68.packets.p3.aNID_RADIO[idx47].telephoneNumber[idx46] =
        kcg_lit_int32(0);
    }
  }
  outC->_L68.packets.p4.valid = kcg_true;
  outC->_L68.packets.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L68.packets.p5.valid = kcg_true;
  outC->_L68.packets.p5.TrainRunningNumber = kcg_lit_int32(0);
  outC->_L68.packets.p9.valid = kcg_true;
  outC->_L68.packets.p9.transitionInformation = kcg_lit_int32(0);
  outC->_L68.packets.p11.valid = kcg_true;
  outC->_L68.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L68.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L68.packets.p11.l_train = kcg_lit_int32(0);
  outC->_L68.packets.p11.v_maxtrain = kcg_lit_int32(0);
  outC->_L68.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L68.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L68.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L68.packets.p11.n_axle = kcg_lit_int32(0);
  outC->_L68.packets.p11.nIter_tractionIdentity = kcg_lit_int32(0);
  for (idx48 = 0; idx48 < 4; idx48++) {
    outC->_L68.packets.p11.tractionIdentity[idx48].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L68.packets.p11.tractionIdentity[idx48].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L68.packets.p11.nIter_ntc = kcg_lit_int32(0);
  for (idx49 = 0; idx49 < 5; idx49++) {
    outC->_L68.packets.p11.nid_ntc[idx49] = kcg_lit_int32(0);
  }
  outC->_L63 = kcg_lit_int32(0);
  outC->_L64.Header.radioDevice = kcg_lit_int32(0);
  outC->_L64.Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L64.Header.nid_message = kcg_lit_int32(0);
  outC->_L64.Header.t_train = kcg_lit_int32(0);
  outC->_L64.Header.m_ack = kcg_lit_int32(0);
  outC->_L64.Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L64.Header.t_train_reference = kcg_lit_int32(0);
  outC->_L64.Header.nid_em = kcg_lit_int32(0);
  outC->_L64.Header.q_scale = kcg_lit_int32(0);
  outC->_L64.Header.d_sr = kcg_lit_int32(0);
  outC->_L64.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L64.Header.d_ref = kcg_lit_int32(0);
  outC->_L64.Header.q_dir = kcg_lit_int32(0);
  outC->_L64.Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L64.Header.m_version = kcg_lit_int32(0);
  for (idx50 = 0; idx50 < 30; idx50++) {
    outC->_L64.Messages.PacketHeaders[idx50].nid_packet = kcg_lit_int32(0);
    outC->_L64.Messages.PacketHeaders[idx50].q_dir = Q_DIR_Reverse;
    outC->_L64.Messages.PacketHeaders[idx50].valid = kcg_true;
    outC->_L64.Messages.PacketHeaders[idx50].startAddress = kcg_lit_int32(0);
    outC->_L64.Messages.PacketHeaders[idx50].endAddress = kcg_lit_int32(0);
  }
  for (idx51 = 0; idx51 < 500; idx51++) {
    outC->_L64.Messages.PacketData[idx51] = kcg_lit_int32(0);
  }
  outC->_L65.radioDevice = kcg_lit_int32(0);
  outC->_L65.receivedSystemTime = kcg_lit_int32(0);
  outC->_L65.nid_message = kcg_lit_int32(0);
  outC->_L65.t_train = kcg_lit_int32(0);
  outC->_L65.m_ack = kcg_lit_int32(0);
  outC->_L65.nid_lrbg = kcg_lit_int32(0);
  outC->_L65.t_train_reference = kcg_lit_int32(0);
  outC->_L65.nid_em = kcg_lit_int32(0);
  outC->_L65.q_scale = kcg_lit_int32(0);
  outC->_L65.d_sr = kcg_lit_int32(0);
  outC->_L65.t_sh_rqst = kcg_lit_int32(0);
  outC->_L65.d_ref = kcg_lit_int32(0);
  outC->_L65.q_dir = kcg_lit_int32(0);
  outC->_L65.d_emergencystop = kcg_lit_int32(0);
  outC->_L65.m_version = kcg_lit_int32(0);
  outC->_L60.Header.radioDevice = kcg_lit_int32(0);
  outC->_L60.Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L60.Header.nid_message = kcg_lit_int32(0);
  outC->_L60.Header.t_train = kcg_lit_int32(0);
  outC->_L60.Header.m_ack = kcg_lit_int32(0);
  outC->_L60.Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L60.Header.t_train_reference = kcg_lit_int32(0);
  outC->_L60.Header.nid_em = kcg_lit_int32(0);
  outC->_L60.Header.q_scale = kcg_lit_int32(0);
  outC->_L60.Header.d_sr = kcg_lit_int32(0);
  outC->_L60.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L60.Header.d_ref = kcg_lit_int32(0);
  outC->_L60.Header.q_dir = kcg_lit_int32(0);
  outC->_L60.Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L60.Header.m_version = kcg_lit_int32(0);
  for (idx52 = 0; idx52 < 30; idx52++) {
    outC->_L60.Messages.PacketHeaders[idx52].nid_packet = kcg_lit_int32(0);
    outC->_L60.Messages.PacketHeaders[idx52].q_dir = Q_DIR_Reverse;
    outC->_L60.Messages.PacketHeaders[idx52].valid = kcg_true;
    outC->_L60.Messages.PacketHeaders[idx52].startAddress = kcg_lit_int32(0);
    outC->_L60.Messages.PacketHeaders[idx52].endAddress = kcg_lit_int32(0);
  }
  for (idx53 = 0; idx53 < 500; idx53++) {
    outC->_L60.Messages.PacketData[idx53] = kcg_lit_int32(0);
  }
  for (idx56 = 0; idx56 < 8; idx56++) {
    outC->messageQueue.m_Entries[idx56].m_IsValid = kcg_true;
    outC->messageQueue.m_Entries[idx56].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->messageQueue.m_Entries[idx56].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->messageQueue.m_Entries[idx56].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->messageQueue.m_Entries[idx56].m_Entry.Header.t_train = kcg_lit_int32(0);
    outC->messageQueue.m_Entries[idx56].m_Entry.Header.m_ack = kcg_lit_int32(0);
    outC->messageQueue.m_Entries[idx56].m_Entry.Header.nid_lrbg = kcg_lit_int32(0);
    outC->messageQueue.m_Entries[idx56].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->messageQueue.m_Entries[idx56].m_Entry.Header.nid_em = kcg_lit_int32(0);
    outC->messageQueue.m_Entries[idx56].m_Entry.Header.q_scale = kcg_lit_int32(0);
    outC->messageQueue.m_Entries[idx56].m_Entry.Header.d_sr = kcg_lit_int32(0);
    outC->messageQueue.m_Entries[idx56].m_Entry.Header.t_sh_rqst = kcg_lit_int32(0);
    outC->messageQueue.m_Entries[idx56].m_Entry.Header.d_ref = kcg_lit_int32(0);
    outC->messageQueue.m_Entries[idx56].m_Entry.Header.q_dir = kcg_lit_int32(0);
    outC->messageQueue.m_Entries[idx56].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->messageQueue.m_Entries[idx56].m_Entry.Header.m_version = kcg_lit_int32(0);
    for (idx54 = 0; idx54 < 30; idx54++) {
      outC->messageQueue.m_Entries[idx56].m_Entry.Messages.PacketHeaders[idx54].nid_packet =
        kcg_lit_int32(0);
      outC->messageQueue.m_Entries[idx56].m_Entry.Messages.PacketHeaders[idx54].q_dir =
        Q_DIR_Reverse;
      outC->messageQueue.m_Entries[idx56].m_Entry.Messages.PacketHeaders[idx54].valid =
        kcg_true;
      outC->messageQueue.m_Entries[idx56].m_Entry.Messages.PacketHeaders[idx54].startAddress =
        kcg_lit_int32(0);
      outC->messageQueue.m_Entries[idx56].m_Entry.Messages.PacketHeaders[idx54].endAddress =
        kcg_lit_int32(0);
    }
    for (idx55 = 0; idx55 < 500; idx55++) {
      outC->messageQueue.m_Entries[idx56].m_Entry.Messages.PacketData[idx55] =
        kcg_lit_int32(0);
    }
  }
  outC->radioTrackTrainMessage.Header.radioDevice = kcg_lit_int32(0);
  outC->radioTrackTrainMessage.Header.receivedSystemTime = kcg_lit_int32(0);
  outC->radioTrackTrainMessage.Header.nid_message = kcg_lit_int32(0);
  outC->radioTrackTrainMessage.Header.t_train = kcg_lit_int32(0);
  outC->radioTrackTrainMessage.Header.m_ack = kcg_lit_int32(0);
  outC->radioTrackTrainMessage.Header.nid_lrbg = kcg_lit_int32(0);
  outC->radioTrackTrainMessage.Header.t_train_reference = kcg_lit_int32(0);
  outC->radioTrackTrainMessage.Header.nid_em = kcg_lit_int32(0);
  outC->radioTrackTrainMessage.Header.q_scale = kcg_lit_int32(0);
  outC->radioTrackTrainMessage.Header.d_sr = kcg_lit_int32(0);
  outC->radioTrackTrainMessage.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->radioTrackTrainMessage.Header.d_ref = kcg_lit_int32(0);
  outC->radioTrackTrainMessage.Header.q_dir = kcg_lit_int32(0);
  outC->radioTrackTrainMessage.Header.d_emergencystop = kcg_lit_int32(0);
  outC->radioTrackTrainMessage.Header.m_version = kcg_lit_int32(0);
  for (idx57 = 0; idx57 < 30; idx57++) {
    outC->radioTrackTrainMessage.Messages.PacketHeaders[idx57].nid_packet =
      kcg_lit_int32(0);
    outC->radioTrackTrainMessage.Messages.PacketHeaders[idx57].q_dir =
      Q_DIR_Reverse;
    outC->radioTrackTrainMessage.Messages.PacketHeaders[idx57].valid = kcg_true;
    outC->radioTrackTrainMessage.Messages.PacketHeaders[idx57].startAddress =
      kcg_lit_int32(0);
    outC->radioTrackTrainMessage.Messages.PacketHeaders[idx57].endAddress =
      kcg_lit_int32(0);
  }
  for (idx58 = 0; idx58 < 500; idx58++) {
    outC->radioTrackTrainMessage.Messages.PacketData[idx58] = kcg_lit_int32(0);
  }
  outC->radioTrackTrainMessageId = kcg_lit_int32(0);
  outC->radioTrainTrackMessageId = kcg_lit_int32(0);
  outC->CONDITIONAL_EMERGENCY_STOP_SM_fired =
    SSM_TR_no_trans_CONDITIONAL_EMERGENCY_STOP_SM;
  outC->CONDITIONAL_EMERGENCY_STOP_SM_fired_strong =
    SSM_TR_no_trans_CONDITIONAL_EMERGENCY_STOP_SM;
  outC->CONDITIONAL_EMERGENCY_STOP_SM_state_act =
    SSM_st_IDLE_CONDITIONAL_EMERGENCY_STOP_SM;
  outC->CONDITIONAL_EMERGENCY_STOP_SM_state_sel =
    SSM_st_IDLE_CONDITIONAL_EMERGENCY_STOP_SM;
  outC->_L20_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.nid_engine =
    kcg_lit_int32(0);
  outC->_L20_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int32(0);
  for (idx60 = 0; idx60 < 1; idx60++) {
    outC->_L20_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_OnboardPhoneNumbers[idx60].valid =
      kcg_true;
    for (idx59 = 0; idx59 < 15; idx59++) {
      outC->_L20_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_OnboardPhoneNumbers[idx60].telephoneNumber[idx59] =
        kcg_lit_int32(0);
    }
  }
  outC->_L20_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.t_train_ref =
    kcg_lit_int32(0);
  outC->_L20_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L20_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L20_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.l_train =
    kcg_lit_int32(0);
  outC->_L20_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.v_maxtrain =
    kcg_lit_int32(0);
  outC->_L20_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L20_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L20_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L20_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.n_axle =
    kcg_lit_int32(0);
  for (idx61 = 0; idx61 < 4; idx61++) {
    outC->_L20_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_TractionIdentities[idx61].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L20_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_TractionIdentities[idx61].nid_ctraction =
      kcg_lit_int32(0);
  }
  for (idx62 = 0; idx62 < 5; idx62++) {
    outC->_L20_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_NationalSystemIdentities[idx62] =
      kcg_lit_int32(0);
  }
  outC->_L20_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.nid_operational =
    kcg_lit_int32(0);
  outC->_L20_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L20_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L20_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.d_lrbg =
    kcg_lit_int32(0);
  outC->_L20_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L20_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L20_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.l_doubtover =
    kcg_lit_int32(0);
  outC->_L20_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.l_doubtunder =
    kcg_lit_int32(0);
  outC->_L20_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L20_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.l_trainint =
    kcg_lit_int32(0);
  outC->_L20_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.v_train =
    kcg_lit_int32(0);
  outC->_L20_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L20_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L20_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L20_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.nid_ntc =
    kcg_lit_int32(0);
  outC->_L20_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.nid_prvlrbg =
    kcg_lit_int32(0);
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nid_engine =
    kcg_lit_int32(0);
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int32(0);
  for (idx64 = 0; idx64 < 1; idx64++) {
    outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx64].valid =
      kcg_true;
    for (idx63 = 0; idx63 < 15; idx63++) {
      outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx64].telephoneNumber[idx63] =
        kcg_lit_int32(0);
    }
  }
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.t_train_ref =
    kcg_lit_int32(0);
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.l_train =
    kcg_lit_int32(0);
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.v_maxtrain =
    kcg_lit_int32(0);
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.n_axle =
    kcg_lit_int32(0);
  for (idx65 = 0; idx65 < 4; idx65++) {
    outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_TractionIdentities[idx65].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_TractionIdentities[idx65].nid_ctraction =
      kcg_lit_int32(0);
  }
  for (idx66 = 0; idx66 < 5; idx66++) {
    outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_NationalSystemIdentities[idx66] =
      kcg_lit_int32(0);
  }
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nid_operational =
    kcg_lit_int32(0);
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.d_lrbg =
    kcg_lit_int32(0);
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.l_doubtover =
    kcg_lit_int32(0);
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.l_doubtunder =
    kcg_lit_int32(0);
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.l_trainint =
    kcg_lit_int32(0);
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.v_train =
    kcg_lit_int32(0);
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.nid_ntc =
    kcg_lit_int32(0);
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.nid_prvlrbg =
    kcg_lit_int32(0);
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.nid_c =
    kcg_lit_int32(0);
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvshunt =
    kcg_lit_int32(0);
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvstff =
    kcg_lit_int32(0);
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvonsight =
    kcg_lit_int32(0);
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvunfit =
    kcg_lit_int32(0);
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvrel =
    kcg_lit_int32(0);
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.t_nvcontact =
    kcg_lit_int32(0);
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.q_dir =
    Q_DIR_Reverse;
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.t_mar =
    kcg_lit_int32(0);
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.t_timeoutrqst =
    kcg_lit_int32(0);
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.t_cycrqst =
    kcg_lit_int32(0);
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.q_dir =
    Q_DIR_Reverse;
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.t_cycloc =
    kcg_lit_int32(0);
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.d_cycloc =
    kcg_lit_int32(0);
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_loc =
    M_LOC_Now;
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int32(0);
  for (idx67 = 0; idx67 < 32; idx67++) {
    outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx67].d_loc =
      kcg_lit_int32(0);
    outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx67].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx68 = 0; idx68 < 16; idx68++) {
    outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx68].valid =
      kcg_true;
    outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx68].count =
      kcg_lit_int32(0);
    outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx68].timestamp =
      kcg_lit_int32(0);
    outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx68].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx68].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx68].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx71 = 0; idx71 < 8; idx71++) {
    outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx71].m_IsValid =
      kcg_true;
    outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx71].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx71].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx71].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx71].m_Entry.Header.t_train =
      kcg_lit_int32(0);
    outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx71].m_Entry.Header.m_ack =
      kcg_lit_int32(0);
    outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx71].m_Entry.Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx71].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx71].m_Entry.Header.nid_em =
      kcg_lit_int32(0);
    outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx71].m_Entry.Header.q_scale =
      kcg_lit_int32(0);
    outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx71].m_Entry.Header.d_sr =
      kcg_lit_int32(0);
    outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx71].m_Entry.Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx71].m_Entry.Header.d_ref =
      kcg_lit_int32(0);
    outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx71].m_Entry.Header.q_dir =
      kcg_lit_int32(0);
    outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx71].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx71].m_Entry.Header.m_version =
      kcg_lit_int32(0);
    for (idx69 = 0; idx69 < 30; idx69++) {
      outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx71].m_Entry.Messages.PacketHeaders[idx69].nid_packet =
        kcg_lit_int32(0);
      outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx71].m_Entry.Messages.PacketHeaders[idx69].q_dir =
        Q_DIR_Reverse;
      outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx71].m_Entry.Messages.PacketHeaders[idx69].valid =
        kcg_true;
      outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx71].m_Entry.Messages.PacketHeaders[idx69].startAddress =
        kcg_lit_int32(0);
      outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx71].m_Entry.Messages.PacketHeaders[idx69].endAddress =
        kcg_lit_int32(0);
    }
    for (idx70 = 0; idx70 < 500; idx70++) {
      outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx71].m_Entry.Messages.PacketData[idx70] =
        kcg_lit_int32(0);
    }
  }
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.clockk.m_Value =
    kcg_lit_int32(0);
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int32(0);
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int32(0);
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int32(0);
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int32(0);
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int32(0);
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int32(0);
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int32(0);
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int32(0);
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int32(0);
  for (idx72 = 0; idx72 < 30; idx72++) {
    outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx72].nid_packet =
      kcg_lit_int32(0);
    outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx72].q_dir =
      Q_DIR_Reverse;
    outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx72].valid =
      kcg_true;
    outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx72].startAddress =
      kcg_lit_int32(0);
    outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx72].endAddress =
      kcg_lit_int32(0);
  }
  for (idx73 = 0; idx73 < 500; idx73++) {
    outC->_L21_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketData[idx73] =
      kcg_lit_int32(0);
  }
  outC->_L17_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.present =
    kcg_true;
  outC->_L17_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.nid_message =
    kcg_lit_int32(0);
  outC->_L17_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.t_train =
    kcg_lit_int32(0);
  outC->_L17_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.nid_engine =
    kcg_lit_int32(0);
  outC->_L17_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L17_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.xT_TRAIN =
    kcg_lit_int32(0);
  outC->_L17_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.xNID_EM =
    kcg_lit_int32(0);
  outC->_L17_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L17_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.xNID_TEXTMESSAGE =
    kcg_lit_int32(0);
  outC->_L16_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.present =
    kcg_true;
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.header.present =
    kcg_true;
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.header.nid_message =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.header.t_train =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.header.nid_engine =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.header.xT_TRAIN =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.header.xNID_EM =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.header.xNID_TEXTMESSAGE =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.valid =
    kcg_true;
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.NID_PACKET =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.L_PACKET =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.qscale =
    Q_SCALE_10_cm_scale;
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.NID_LRBG =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.D_LRBG =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.dlrbg =
    Q_DLRBG_Reverse;
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.L_DOUBTOVER =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.L_DOUBTUNDER =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.L_TRAININT =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.V_TRAIN =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.mode =
    M_MODE_Full_Supervision;
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.level =
    M_LEVEL_Level_0;
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.NID_NTC =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.valid =
    kcg_true;
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.NID_PACKET =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.L_PACKET =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.qscale =
    Q_SCALE_10_cm_scale;
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.NID_LRBG =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.NID_PRVLRBG =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.D_LRBG =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.dlrbg =
    Q_DLRBG_Reverse;
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.L_DOUBTOVER =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.L_DOUBTUNDER =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.L_TRAININT =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.V_TRAIN =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.mode =
    M_MODE_Full_Supervision;
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.level =
    M_LEVEL_Level_0;
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.NID_NTC =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p3.valid =
    kcg_true;
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p3.number =
    kcg_lit_int32(0);
  for (idx75 = 0; idx75 < 1; idx75++) {
    outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p3.aNID_RADIO[idx75].valid =
      kcg_true;
    for (idx74 = 0; idx74 < 15; idx74++) {
      outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p3.aNID_RADIO[idx75].telephoneNumber[idx74] =
        kcg_lit_int32(0);
    }
  }
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p4.valid =
    kcg_true;
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p5.valid =
    kcg_true;
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p5.TrainRunningNumber =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p9.valid =
    kcg_true;
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p9.transitionInformation =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p11.valid =
    kcg_true;
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p11.l_train =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p11.v_maxtrain =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p11.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p11.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p11.n_axle =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p11.nIter_tractionIdentity =
    kcg_lit_int32(0);
  for (idx76 = 0; idx76 < 4; idx76++) {
    outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p11.tractionIdentity[idx76].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p11.tractionIdentity[idx76].nid_ctraction =
      kcg_lit_int32(0);
  }
  outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p11.nIter_ntc =
    kcg_lit_int32(0);
  for (idx77 = 0; idx77 < 5; idx77++) {
    outC->_L14_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p11.nid_ntc[idx77] =
      kcg_lit_int32(0);
  }
  outC->_L10_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L10_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L10_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.d_lrbg =
    kcg_lit_int32(0);
  outC->_L10_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L10_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L10_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.l_doubtover =
    kcg_lit_int32(0);
  outC->_L10_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.l_doubtunder =
    kcg_lit_int32(0);
  outC->_L10_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L10_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.l_trainint =
    kcg_lit_int32(0);
  outC->_L10_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.v_train =
    kcg_lit_int32(0);
  outC->_L10_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L10_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_mode =
    M_MODE_Full_Supervision;
  outC->_L10_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_level =
    M_LEVEL_Level_0;
  outC->_L10_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.nid_ntc =
    kcg_lit_int32(0);
  outC->_L10_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.nid_prvlrbg =
    kcg_lit_int32(0);
  outC->_L11_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L11_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L11_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.d_lrbg =
    kcg_lit_int32(0);
  outC->_L11_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L11_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L11_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.l_doubtover =
    kcg_lit_int32(0);
  outC->_L11_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.l_doubtunder =
    kcg_lit_int32(0);
  outC->_L11_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L11_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.l_trainint =
    kcg_lit_int32(0);
  outC->_L11_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.v_train =
    kcg_lit_int32(0);
  outC->_L11_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L11_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_mode =
    M_MODE_Full_Supervision;
  outC->_L11_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_level =
    M_LEVEL_Level_0;
  outC->_L11_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.nid_ntc =
    kcg_lit_int32(0);
  outC->_L11_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.nid_prvlrbg =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.present =
    kcg_true;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.header.present =
    kcg_true;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.header.nid_message =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.header.t_train =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.header.nid_engine =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.header.xT_TRAIN =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.header.xNID_EM =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.header.xNID_TEXTMESSAGE =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.valid =
    kcg_true;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.NID_PACKET =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.L_PACKET =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.qscale =
    Q_SCALE_10_cm_scale;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.NID_LRBG =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.D_LRBG =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.dlrbg =
    Q_DLRBG_Reverse;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.L_DOUBTOVER =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.L_DOUBTUNDER =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.L_TRAININT =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.V_TRAIN =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.mode =
    M_MODE_Full_Supervision;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.level =
    M_LEVEL_Level_0;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.NID_NTC =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.valid =
    kcg_true;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.NID_PACKET =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.L_PACKET =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.qscale =
    Q_SCALE_10_cm_scale;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.NID_LRBG =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.NID_PRVLRBG =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.D_LRBG =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.dlrbg =
    Q_DLRBG_Reverse;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.L_DOUBTOVER =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.L_DOUBTUNDER =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.L_TRAININT =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.V_TRAIN =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.mode =
    M_MODE_Full_Supervision;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.level =
    M_LEVEL_Level_0;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.NID_NTC =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p3.valid =
    kcg_true;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p3.number =
    kcg_lit_int32(0);
  for (idx79 = 0; idx79 < 1; idx79++) {
    outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p3.aNID_RADIO[idx79].valid =
      kcg_true;
    for (idx78 = 0; idx78 < 15; idx78++) {
      outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p3.aNID_RADIO[idx79].telephoneNumber[idx78] =
        kcg_lit_int32(0);
    }
  }
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p4.valid =
    kcg_true;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p5.valid =
    kcg_true;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p5.TrainRunningNumber =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p9.valid =
    kcg_true;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p9.transitionInformation =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p11.valid =
    kcg_true;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p11.l_train =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p11.v_maxtrain =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p11.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p11.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p11.n_axle =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p11.nIter_tractionIdentity =
    kcg_lit_int32(0);
  for (idx80 = 0; idx80 < 4; idx80++) {
    outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p11.tractionIdentity[idx80].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p11.tractionIdentity[idx80].nid_ctraction =
      kcg_lit_int32(0);
  }
  outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p11.nIter_ntc =
    kcg_lit_int32(0);
  for (idx81 = 0; idx81 < 5; idx81++) {
    outC->_L12_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p11.nid_ntc[idx81] =
      kcg_lit_int32(0);
  }
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.nid_engine =
    kcg_lit_int32(0);
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int32(0);
  for (idx83 = 0; idx83 < 1; idx83++) {
    outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_OnboardPhoneNumbers[idx83].valid =
      kcg_true;
    for (idx82 = 0; idx82 < 15; idx82++) {
      outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_OnboardPhoneNumbers[idx83].telephoneNumber[idx82] =
        kcg_lit_int32(0);
    }
  }
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.t_train_ref =
    kcg_lit_int32(0);
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.l_train =
    kcg_lit_int32(0);
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.v_maxtrain =
    kcg_lit_int32(0);
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.n_axle =
    kcg_lit_int32(0);
  for (idx84 = 0; idx84 < 4; idx84++) {
    outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_TractionIdentities[idx84].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_TractionIdentities[idx84].nid_ctraction =
      kcg_lit_int32(0);
  }
  for (idx85 = 0; idx85 < 5; idx85++) {
    outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_NationalSystemIdentities[idx85] =
      kcg_lit_int32(0);
  }
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.nid_operational =
    kcg_lit_int32(0);
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.d_lrbg =
    kcg_lit_int32(0);
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.l_doubtover =
    kcg_lit_int32(0);
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.l_doubtunder =
    kcg_lit_int32(0);
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.l_trainint =
    kcg_lit_int32(0);
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.v_train =
    kcg_lit_int32(0);
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.nid_ntc =
    kcg_lit_int32(0);
  outC->_L13_then_IfBlock1_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.nid_prvlrbg =
    kcg_lit_int32(0);
  outC->IfBlock1_clock_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM =
    kcg_true;
  outC->emergencyStopId_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM =
    kcg_lit_int32(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.present =
    kcg_true;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.header.present =
    kcg_true;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.header.nid_message =
    kcg_lit_int32(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.header.t_train =
    kcg_lit_int32(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.header.nid_engine =
    kcg_lit_int32(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.header.xT_TRAIN =
    kcg_lit_int32(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.header.xNID_EM =
    kcg_lit_int32(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.header.xNID_TEXTMESSAGE =
    kcg_lit_int32(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.valid =
    kcg_true;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.NID_PACKET =
    kcg_lit_int32(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.L_PACKET =
    kcg_lit_int32(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.qscale =
    Q_SCALE_10_cm_scale;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.NID_LRBG =
    kcg_lit_int32(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.D_LRBG =
    kcg_lit_int32(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.dlrbg =
    Q_DLRBG_Reverse;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.L_DOUBTOVER =
    kcg_lit_int32(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.L_DOUBTUNDER =
    kcg_lit_int32(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.L_TRAININT =
    kcg_lit_int32(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.V_TRAIN =
    kcg_lit_int32(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.mode =
    M_MODE_Full_Supervision;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.level =
    M_LEVEL_Level_0;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p0.packet0.NID_NTC =
    kcg_lit_int32(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.valid =
    kcg_true;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.NID_PACKET =
    kcg_lit_int32(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.L_PACKET =
    kcg_lit_int32(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.qscale =
    Q_SCALE_10_cm_scale;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.NID_LRBG =
    kcg_lit_int32(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.NID_PRVLRBG =
    kcg_lit_int32(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.D_LRBG =
    kcg_lit_int32(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.dlrbg =
    Q_DLRBG_Reverse;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.L_DOUBTOVER =
    kcg_lit_int32(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.L_DOUBTUNDER =
    kcg_lit_int32(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.L_TRAININT =
    kcg_lit_int32(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.V_TRAIN =
    kcg_lit_int32(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.mode =
    M_MODE_Full_Supervision;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.level =
    M_LEVEL_Level_0;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p1.packet1.NID_NTC =
    kcg_lit_int32(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p3.valid =
    kcg_true;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p3.number =
    kcg_lit_int32(0);
  for (idx87 = 0; idx87 < 1; idx87++) {
    outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p3.aNID_RADIO[idx87].valid =
      kcg_true;
    for (idx86 = 0; idx86 < 15; idx86++) {
      outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p3.aNID_RADIO[idx87].telephoneNumber[idx86] =
        kcg_lit_int32(0);
    }
  }
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p4.valid =
    kcg_true;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p5.valid =
    kcg_true;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p5.TrainRunningNumber =
    kcg_lit_int32(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p9.valid =
    kcg_true;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p9.transitionInformation =
    kcg_lit_int32(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p11.valid =
    kcg_true;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p11.l_train =
    kcg_lit_int32(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p11.v_maxtrain =
    kcg_lit_int32(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p11.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p11.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p11.n_axle =
    kcg_lit_int32(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p11.nIter_tractionIdentity =
    kcg_lit_int32(0);
  for (idx88 = 0; idx88 < 4; idx88++) {
    outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p11.tractionIdentity[idx88].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p11.tractionIdentity[idx88].nid_ctraction =
      kcg_lit_int32(0);
  }
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p11.nIter_ntc =
    kcg_lit_int32(0);
  for (idx89 = 0; idx89 < 5; idx89++) {
    outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.packets.p11.nid_ntc[idx89] =
      kcg_lit_int32(0);
  }
  outC->_L26_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.present =
    kcg_true;
  outC->_L26_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.nid_message =
    kcg_lit_int32(0);
  outC->_L26_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.t_train =
    kcg_lit_int32(0);
  outC->_L26_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.nid_engine =
    kcg_lit_int32(0);
  outC->_L26_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L26_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.xT_TRAIN =
    kcg_lit_int32(0);
  outC->_L26_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.xNID_EM =
    kcg_lit_int32(0);
  outC->_L26_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L26_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.xNID_TEXTMESSAGE =
    kcg_lit_int32(0);
  outC->_L27_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM =
    kcg_lit_int32(0);
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nid_engine =
    kcg_lit_int32(0);
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int32(0);
  for (idx91 = 0; idx91 < 1; idx91++) {
    outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx91].valid =
      kcg_true;
    for (idx90 = 0; idx90 < 15; idx90++) {
      outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx91].telephoneNumber[idx90] =
        kcg_lit_int32(0);
    }
  }
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.t_train_ref =
    kcg_lit_int32(0);
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.l_train =
    kcg_lit_int32(0);
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.v_maxtrain =
    kcg_lit_int32(0);
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.n_axle =
    kcg_lit_int32(0);
  for (idx92 = 0; idx92 < 4; idx92++) {
    outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_TractionIdentities[idx92].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_TractionIdentities[idx92].nid_ctraction =
      kcg_lit_int32(0);
  }
  for (idx93 = 0; idx93 < 5; idx93++) {
    outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_NationalSystemIdentities[idx93] =
      kcg_lit_int32(0);
  }
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nid_operational =
    kcg_lit_int32(0);
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.d_lrbg =
    kcg_lit_int32(0);
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.l_doubtover =
    kcg_lit_int32(0);
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.l_doubtunder =
    kcg_lit_int32(0);
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.l_trainint =
    kcg_lit_int32(0);
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.v_train =
    kcg_lit_int32(0);
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.nid_ntc =
    kcg_lit_int32(0);
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.nid_prvlrbg =
    kcg_lit_int32(0);
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.nid_c =
    kcg_lit_int32(0);
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvshunt =
    kcg_lit_int32(0);
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvstff =
    kcg_lit_int32(0);
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvonsight =
    kcg_lit_int32(0);
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvunfit =
    kcg_lit_int32(0);
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvrel =
    kcg_lit_int32(0);
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.t_nvcontact =
    kcg_lit_int32(0);
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.q_dir =
    Q_DIR_Reverse;
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.t_mar =
    kcg_lit_int32(0);
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.t_timeoutrqst =
    kcg_lit_int32(0);
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.t_cycrqst =
    kcg_lit_int32(0);
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.q_dir =
    Q_DIR_Reverse;
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.t_cycloc =
    kcg_lit_int32(0);
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.d_cycloc =
    kcg_lit_int32(0);
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_loc =
    M_LOC_Now;
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int32(0);
  for (idx94 = 0; idx94 < 32; idx94++) {
    outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx94].d_loc =
      kcg_lit_int32(0);
    outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx94].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx95 = 0; idx95 < 16; idx95++) {
    outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx95].valid =
      kcg_true;
    outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx95].count =
      kcg_lit_int32(0);
    outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx95].timestamp =
      kcg_lit_int32(0);
    outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx95].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx95].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx95].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx98 = 0; idx98 < 8; idx98++) {
    outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx98].m_IsValid =
      kcg_true;
    outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx98].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx98].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx98].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx98].m_Entry.Header.t_train =
      kcg_lit_int32(0);
    outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx98].m_Entry.Header.m_ack =
      kcg_lit_int32(0);
    outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx98].m_Entry.Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx98].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx98].m_Entry.Header.nid_em =
      kcg_lit_int32(0);
    outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx98].m_Entry.Header.q_scale =
      kcg_lit_int32(0);
    outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx98].m_Entry.Header.d_sr =
      kcg_lit_int32(0);
    outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx98].m_Entry.Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx98].m_Entry.Header.d_ref =
      kcg_lit_int32(0);
    outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx98].m_Entry.Header.q_dir =
      kcg_lit_int32(0);
    outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx98].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx98].m_Entry.Header.m_version =
      kcg_lit_int32(0);
    for (idx96 = 0; idx96 < 30; idx96++) {
      outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx98].m_Entry.Messages.PacketHeaders[idx96].nid_packet =
        kcg_lit_int32(0);
      outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx98].m_Entry.Messages.PacketHeaders[idx96].q_dir =
        Q_DIR_Reverse;
      outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx98].m_Entry.Messages.PacketHeaders[idx96].valid =
        kcg_true;
      outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx98].m_Entry.Messages.PacketHeaders[idx96].startAddress =
        kcg_lit_int32(0);
      outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx98].m_Entry.Messages.PacketHeaders[idx96].endAddress =
        kcg_lit_int32(0);
    }
    for (idx97 = 0; idx97 < 500; idx97++) {
      outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx98].m_Entry.Messages.PacketData[idx97] =
        kcg_lit_int32(0);
    }
  }
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.clockk.m_Value =
    kcg_lit_int32(0);
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int32(0);
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int32(0);
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int32(0);
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int32(0);
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int32(0);
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int32(0);
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int32(0);
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int32(0);
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int32(0);
  for (idx99 = 0; idx99 < 30; idx99++) {
    outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx99].nid_packet =
      kcg_lit_int32(0);
    outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx99].q_dir =
      Q_DIR_Reverse;
    outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx99].valid =
      kcg_true;
    outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx99].startAddress =
      kcg_lit_int32(0);
    outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx99].endAddress =
      kcg_lit_int32(0);
  }
  for (idx100 = 0; idx100 < 500; idx100++) {
    outC->_L37_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketData[idx100] =
      kcg_lit_int32(0);
  }
  for (idx103 = 0; idx103 < 8; idx103++) {
    outC->_L36_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx103].m_IsValid =
      kcg_true;
    outC->_L36_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx103].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L36_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx103].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L36_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx103].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->_L36_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx103].m_Entry.Header.t_train =
      kcg_lit_int32(0);
    outC->_L36_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx103].m_Entry.Header.m_ack =
      kcg_lit_int32(0);
    outC->_L36_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx103].m_Entry.Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->_L36_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx103].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L36_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx103].m_Entry.Header.nid_em =
      kcg_lit_int32(0);
    outC->_L36_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx103].m_Entry.Header.q_scale =
      kcg_lit_int32(0);
    outC->_L36_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx103].m_Entry.Header.d_sr =
      kcg_lit_int32(0);
    outC->_L36_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx103].m_Entry.Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->_L36_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx103].m_Entry.Header.d_ref =
      kcg_lit_int32(0);
    outC->_L36_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx103].m_Entry.Header.q_dir =
      kcg_lit_int32(0);
    outC->_L36_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx103].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L36_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx103].m_Entry.Header.m_version =
      kcg_lit_int32(0);
    for (idx101 = 0; idx101 < 30; idx101++) {
      outC->_L36_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx103].m_Entry.Messages.PacketHeaders[idx101].nid_packet =
        kcg_lit_int32(0);
      outC->_L36_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx103].m_Entry.Messages.PacketHeaders[idx101].q_dir =
        Q_DIR_Reverse;
      outC->_L36_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx103].m_Entry.Messages.PacketHeaders[idx101].valid =
        kcg_true;
      outC->_L36_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx103].m_Entry.Messages.PacketHeaders[idx101].startAddress =
        kcg_lit_int32(0);
      outC->_L36_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx103].m_Entry.Messages.PacketHeaders[idx101].endAddress =
        kcg_lit_int32(0);
    }
    for (idx102 = 0; idx102 < 500; idx102++) {
      outC->_L36_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx103].m_Entry.Messages.PacketData[idx102] =
        kcg_lit_int32(0);
    }
  }
  for (idx106 = 0; idx106 < 8; idx106++) {
    outC->_L5_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx106].m_IsValid =
      kcg_true;
    outC->_L5_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx106].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L5_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx106].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L5_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx106].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->_L5_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx106].m_Entry.Header.t_train =
      kcg_lit_int32(0);
    outC->_L5_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx106].m_Entry.Header.m_ack =
      kcg_lit_int32(0);
    outC->_L5_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx106].m_Entry.Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->_L5_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx106].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L5_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx106].m_Entry.Header.nid_em =
      kcg_lit_int32(0);
    outC->_L5_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx106].m_Entry.Header.q_scale =
      kcg_lit_int32(0);
    outC->_L5_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx106].m_Entry.Header.d_sr =
      kcg_lit_int32(0);
    outC->_L5_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx106].m_Entry.Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->_L5_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx106].m_Entry.Header.d_ref =
      kcg_lit_int32(0);
    outC->_L5_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx106].m_Entry.Header.q_dir =
      kcg_lit_int32(0);
    outC->_L5_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx106].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L5_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx106].m_Entry.Header.m_version =
      kcg_lit_int32(0);
    for (idx104 = 0; idx104 < 30; idx104++) {
      outC->_L5_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx106].m_Entry.Messages.PacketHeaders[idx104].nid_packet =
        kcg_lit_int32(0);
      outC->_L5_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx106].m_Entry.Messages.PacketHeaders[idx104].q_dir =
        Q_DIR_Reverse;
      outC->_L5_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx106].m_Entry.Messages.PacketHeaders[idx104].valid =
        kcg_true;
      outC->_L5_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx106].m_Entry.Messages.PacketHeaders[idx104].startAddress =
        kcg_lit_int32(0);
      outC->_L5_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx106].m_Entry.Messages.PacketHeaders[idx104].endAddress =
        kcg_lit_int32(0);
    }
    for (idx105 = 0; idx105 < 500; idx105++) {
      outC->_L5_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx106].m_Entry.Messages.PacketData[idx105] =
        kcg_lit_int32(0);
    }
  }
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.nid_engine =
    kcg_lit_int32(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int32(0);
  for (idx108 = 0; idx108 < 1; idx108++) {
    outC->_L4_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_OnboardPhoneNumbers[idx108].valid =
      kcg_true;
    for (idx107 = 0; idx107 < 15; idx107++) {
      outC->_L4_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_OnboardPhoneNumbers[idx108].telephoneNumber[idx107] =
        kcg_lit_int32(0);
    }
  }
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.t_train_ref =
    kcg_lit_int32(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.l_train =
    kcg_lit_int32(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.v_maxtrain =
    kcg_lit_int32(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.n_axle =
    kcg_lit_int32(0);
  for (idx109 = 0; idx109 < 4; idx109++) {
    outC->_L4_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_TractionIdentities[idx109].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L4_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_TractionIdentities[idx109].nid_ctraction =
      kcg_lit_int32(0);
  }
  for (idx110 = 0; idx110 < 5; idx110++) {
    outC->_L4_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_NationalSystemIdentities[idx110] =
      kcg_lit_int32(0);
  }
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.nid_operational =
    kcg_lit_int32(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.d_lrbg =
    kcg_lit_int32(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.l_doubtover =
    kcg_lit_int32(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.l_doubtunder =
    kcg_lit_int32(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.l_trainint =
    kcg_lit_int32(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.v_train =
    kcg_lit_int32(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.nid_ntc =
    kcg_lit_int32(0);
  outC->_L4_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.nid_prvlrbg =
    kcg_lit_int32(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nid_engine =
    kcg_lit_int32(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int32(0);
  for (idx112 = 0; idx112 < 1; idx112++) {
    outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx112].valid =
      kcg_true;
    for (idx111 = 0; idx111 < 15; idx111++) {
      outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx112].telephoneNumber[idx111] =
        kcg_lit_int32(0);
    }
  }
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.t_train_ref =
    kcg_lit_int32(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.l_train =
    kcg_lit_int32(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.v_maxtrain =
    kcg_lit_int32(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.n_axle =
    kcg_lit_int32(0);
  for (idx113 = 0; idx113 < 4; idx113++) {
    outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_TractionIdentities[idx113].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_TractionIdentities[idx113].nid_ctraction =
      kcg_lit_int32(0);
  }
  for (idx114 = 0; idx114 < 5; idx114++) {
    outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_NationalSystemIdentities[idx114] =
      kcg_lit_int32(0);
  }
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nid_operational =
    kcg_lit_int32(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.d_lrbg =
    kcg_lit_int32(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.l_doubtover =
    kcg_lit_int32(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.l_doubtunder =
    kcg_lit_int32(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.l_trainint =
    kcg_lit_int32(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.v_train =
    kcg_lit_int32(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.nid_ntc =
    kcg_lit_int32(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.nid_prvlrbg =
    kcg_lit_int32(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.nid_c =
    kcg_lit_int32(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvshunt =
    kcg_lit_int32(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvstff =
    kcg_lit_int32(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvonsight =
    kcg_lit_int32(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvunfit =
    kcg_lit_int32(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvrel =
    kcg_lit_int32(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.t_nvcontact =
    kcg_lit_int32(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.q_dir =
    Q_DIR_Reverse;
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.t_mar =
    kcg_lit_int32(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.t_timeoutrqst =
    kcg_lit_int32(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.t_cycrqst =
    kcg_lit_int32(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.q_dir =
    Q_DIR_Reverse;
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.t_cycloc =
    kcg_lit_int32(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.d_cycloc =
    kcg_lit_int32(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_loc =
    M_LOC_Now;
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int32(0);
  for (idx115 = 0; idx115 < 32; idx115++) {
    outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx115].d_loc =
      kcg_lit_int32(0);
    outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx115].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx116 = 0; idx116 < 16; idx116++) {
    outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx116].valid =
      kcg_true;
    outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx116].count =
      kcg_lit_int32(0);
    outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx116].timestamp =
      kcg_lit_int32(0);
    outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx116].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx116].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx116].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx119 = 0; idx119 < 8; idx119++) {
    outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx119].m_IsValid =
      kcg_true;
    outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx119].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx119].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx119].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx119].m_Entry.Header.t_train =
      kcg_lit_int32(0);
    outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx119].m_Entry.Header.m_ack =
      kcg_lit_int32(0);
    outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx119].m_Entry.Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx119].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx119].m_Entry.Header.nid_em =
      kcg_lit_int32(0);
    outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx119].m_Entry.Header.q_scale =
      kcg_lit_int32(0);
    outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx119].m_Entry.Header.d_sr =
      kcg_lit_int32(0);
    outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx119].m_Entry.Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx119].m_Entry.Header.d_ref =
      kcg_lit_int32(0);
    outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx119].m_Entry.Header.q_dir =
      kcg_lit_int32(0);
    outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx119].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx119].m_Entry.Header.m_version =
      kcg_lit_int32(0);
    for (idx117 = 0; idx117 < 30; idx117++) {
      outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx119].m_Entry.Messages.PacketHeaders[idx117].nid_packet =
        kcg_lit_int32(0);
      outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx119].m_Entry.Messages.PacketHeaders[idx117].q_dir =
        Q_DIR_Reverse;
      outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx119].m_Entry.Messages.PacketHeaders[idx117].valid =
        kcg_true;
      outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx119].m_Entry.Messages.PacketHeaders[idx117].startAddress =
        kcg_lit_int32(0);
      outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx119].m_Entry.Messages.PacketHeaders[idx117].endAddress =
        kcg_lit_int32(0);
    }
    for (idx118 = 0; idx118 < 500; idx118++) {
      outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx119].m_Entry.Messages.PacketData[idx118] =
        kcg_lit_int32(0);
    }
  }
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.clockk.m_Value =
    kcg_lit_int32(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int32(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int32(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int32(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int32(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int32(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int32(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int32(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int32(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int32(0);
  for (idx120 = 0; idx120 < 30; idx120++) {
    outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx120].nid_packet =
      kcg_lit_int32(0);
    outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx120].q_dir =
      Q_DIR_Reverse;
    outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx120].valid =
      kcg_true;
    outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx120].startAddress =
      kcg_lit_int32(0);
    outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx120].endAddress =
      kcg_lit_int32(0);
  }
  for (idx121 = 0; idx121 < 500; idx121++) {
    outC->_L3_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketData[idx121] =
      kcg_lit_int32(0);
  }
  outC->_L52_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L52_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L52_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.Header.nid_message =
    kcg_lit_int32(0);
  outC->_L52_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.Header.t_train =
    kcg_lit_int32(0);
  outC->_L52_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.Header.m_ack =
    kcg_lit_int32(0);
  outC->_L52_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L52_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L52_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.Header.nid_em =
    kcg_lit_int32(0);
  outC->_L52_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.Header.q_scale =
    kcg_lit_int32(0);
  outC->_L52_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.Header.d_sr =
    kcg_lit_int32(0);
  outC->_L52_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L52_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.Header.d_ref =
    kcg_lit_int32(0);
  outC->_L52_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.Header.q_dir =
    kcg_lit_int32(0);
  outC->_L52_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L52_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.Header.m_version =
    kcg_lit_int32(0);
  for (idx122 = 0; idx122 < 30; idx122++) {
    outC->_L52_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.Messages.PacketHeaders[idx122].nid_packet =
      kcg_lit_int32(0);
    outC->_L52_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.Messages.PacketHeaders[idx122].q_dir =
      Q_DIR_Reverse;
    outC->_L52_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.Messages.PacketHeaders[idx122].valid =
      kcg_true;
    outC->_L52_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.Messages.PacketHeaders[idx122].startAddress =
      kcg_lit_int32(0);
    outC->_L52_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.Messages.PacketHeaders[idx122].endAddress =
      kcg_lit_int32(0);
  }
  for (idx123 = 0; idx123 < 500; idx123++) {
    outC->_L52_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.Messages.PacketData[idx123] =
      kcg_lit_int32(0);
  }
  outC->_L54_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM =
    kcg_lit_int32(0);
  outC->_L56_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.radioDevice =
    kcg_lit_int32(0);
  outC->_L56_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L56_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.nid_message =
    kcg_lit_int32(0);
  outC->_L56_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.t_train =
    kcg_lit_int32(0);
  outC->_L56_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_ack =
    kcg_lit_int32(0);
  outC->_L56_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L56_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.t_train_reference =
    kcg_lit_int32(0);
  outC->_L56_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.nid_em =
    kcg_lit_int32(0);
  outC->_L56_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.q_scale =
    kcg_lit_int32(0);
  outC->_L56_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.d_sr =
    kcg_lit_int32(0);
  outC->_L56_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L56_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.d_ref =
    kcg_lit_int32(0);
  outC->_L56_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.q_dir =
    kcg_lit_int32(0);
  outC->_L56_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L56_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_version =
    kcg_lit_int32(0);
  outC->_L59_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_IsValid =
    kcg_true;
  outC->_L59_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entry.Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L59_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entry.Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L59_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entry.Header.nid_message =
    kcg_lit_int32(0);
  outC->_L59_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entry.Header.t_train =
    kcg_lit_int32(0);
  outC->_L59_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entry.Header.m_ack =
    kcg_lit_int32(0);
  outC->_L59_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entry.Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L59_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entry.Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L59_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entry.Header.nid_em =
    kcg_lit_int32(0);
  outC->_L59_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entry.Header.q_scale =
    kcg_lit_int32(0);
  outC->_L59_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entry.Header.d_sr =
    kcg_lit_int32(0);
  outC->_L59_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entry.Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L59_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entry.Header.d_ref =
    kcg_lit_int32(0);
  outC->_L59_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entry.Header.q_dir =
    kcg_lit_int32(0);
  outC->_L59_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entry.Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L59_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entry.Header.m_version =
    kcg_lit_int32(0);
  for (idx124 = 0; idx124 < 30; idx124++) {
    outC->_L59_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entry.Messages.PacketHeaders[idx124].nid_packet =
      kcg_lit_int32(0);
    outC->_L59_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entry.Messages.PacketHeaders[idx124].q_dir =
      Q_DIR_Reverse;
    outC->_L59_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entry.Messages.PacketHeaders[idx124].valid =
      kcg_true;
    outC->_L59_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entry.Messages.PacketHeaders[idx124].startAddress =
      kcg_lit_int32(0);
    outC->_L59_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entry.Messages.PacketHeaders[idx124].endAddress =
      kcg_lit_int32(0);
  }
  for (idx125 = 0; idx125 < 500; idx125++) {
    outC->_L59_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entry.Messages.PacketData[idx125] =
      kcg_lit_int32(0);
  }
  for (idx128 = 0; idx128 < 8; idx128++) {
    outC->_L57_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx128].m_IsValid =
      kcg_true;
    outC->_L57_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx128].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L57_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx128].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L57_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx128].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->_L57_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx128].m_Entry.Header.t_train =
      kcg_lit_int32(0);
    outC->_L57_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx128].m_Entry.Header.m_ack =
      kcg_lit_int32(0);
    outC->_L57_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx128].m_Entry.Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->_L57_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx128].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L57_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx128].m_Entry.Header.nid_em =
      kcg_lit_int32(0);
    outC->_L57_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx128].m_Entry.Header.q_scale =
      kcg_lit_int32(0);
    outC->_L57_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx128].m_Entry.Header.d_sr =
      kcg_lit_int32(0);
    outC->_L57_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx128].m_Entry.Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->_L57_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx128].m_Entry.Header.d_ref =
      kcg_lit_int32(0);
    outC->_L57_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx128].m_Entry.Header.q_dir =
      kcg_lit_int32(0);
    outC->_L57_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx128].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L57_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx128].m_Entry.Header.m_version =
      kcg_lit_int32(0);
    for (idx126 = 0; idx126 < 30; idx126++) {
      outC->_L57_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx128].m_Entry.Messages.PacketHeaders[idx126].nid_packet =
        kcg_lit_int32(0);
      outC->_L57_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx128].m_Entry.Messages.PacketHeaders[idx126].q_dir =
        Q_DIR_Reverse;
      outC->_L57_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx128].m_Entry.Messages.PacketHeaders[idx126].valid =
        kcg_true;
      outC->_L57_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx128].m_Entry.Messages.PacketHeaders[idx126].startAddress =
        kcg_lit_int32(0);
      outC->_L57_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx128].m_Entry.Messages.PacketHeaders[idx126].endAddress =
        kcg_lit_int32(0);
    }
    for (idx127 = 0; idx127 < 500; idx127++) {
      outC->_L57_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx128].m_Entry.Messages.PacketData[idx127] =
        kcg_lit_int32(0);
    }
  }
  outC->_L62_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.nid_engine =
    kcg_lit_int32(0);
  outC->_L62_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int32(0);
  for (idx130 = 0; idx130 < 1; idx130++) {
    outC->_L62_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_OnboardPhoneNumbers[idx130].valid =
      kcg_true;
    for (idx129 = 0; idx129 < 15; idx129++) {
      outC->_L62_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_OnboardPhoneNumbers[idx130].telephoneNumber[idx129] =
        kcg_lit_int32(0);
    }
  }
  outC->_L62_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.t_train_ref =
    kcg_lit_int32(0);
  outC->_L62_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L62_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L62_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.l_train =
    kcg_lit_int32(0);
  outC->_L62_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.v_maxtrain =
    kcg_lit_int32(0);
  outC->_L62_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L62_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L62_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L62_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.n_axle =
    kcg_lit_int32(0);
  for (idx131 = 0; idx131 < 4; idx131++) {
    outC->_L62_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_TractionIdentities[idx131].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L62_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_TractionIdentities[idx131].nid_ctraction =
      kcg_lit_int32(0);
  }
  for (idx132 = 0; idx132 < 5; idx132++) {
    outC->_L62_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_NationalSystemIdentities[idx132] =
      kcg_lit_int32(0);
  }
  outC->_L62_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.nid_operational =
    kcg_lit_int32(0);
  outC->_L62_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L62_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L62_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.d_lrbg =
    kcg_lit_int32(0);
  outC->_L62_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L62_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L62_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.l_doubtover =
    kcg_lit_int32(0);
  outC->_L62_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.l_doubtunder =
    kcg_lit_int32(0);
  outC->_L62_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L62_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.l_trainint =
    kcg_lit_int32(0);
  outC->_L62_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.v_train =
    kcg_lit_int32(0);
  outC->_L62_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L62_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L62_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L62_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.nid_ntc =
    kcg_lit_int32(0);
  outC->_L62_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.nid_prvlrbg =
    kcg_lit_int32(0);
  for (idx135 = 0; idx135 < 8; idx135++) {
    outC->_L70_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx135].m_IsValid =
      kcg_true;
    outC->_L70_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx135].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L70_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx135].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L70_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx135].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->_L70_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx135].m_Entry.Header.t_train =
      kcg_lit_int32(0);
    outC->_L70_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx135].m_Entry.Header.m_ack =
      kcg_lit_int32(0);
    outC->_L70_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx135].m_Entry.Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->_L70_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx135].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L70_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx135].m_Entry.Header.nid_em =
      kcg_lit_int32(0);
    outC->_L70_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx135].m_Entry.Header.q_scale =
      kcg_lit_int32(0);
    outC->_L70_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx135].m_Entry.Header.d_sr =
      kcg_lit_int32(0);
    outC->_L70_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx135].m_Entry.Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->_L70_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx135].m_Entry.Header.d_ref =
      kcg_lit_int32(0);
    outC->_L70_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx135].m_Entry.Header.q_dir =
      kcg_lit_int32(0);
    outC->_L70_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx135].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L70_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx135].m_Entry.Header.m_version =
      kcg_lit_int32(0);
    for (idx133 = 0; idx133 < 30; idx133++) {
      outC->_L70_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx135].m_Entry.Messages.PacketHeaders[idx133].nid_packet =
        kcg_lit_int32(0);
      outC->_L70_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx135].m_Entry.Messages.PacketHeaders[idx133].q_dir =
        Q_DIR_Reverse;
      outC->_L70_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx135].m_Entry.Messages.PacketHeaders[idx133].valid =
        kcg_true;
      outC->_L70_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx135].m_Entry.Messages.PacketHeaders[idx133].startAddress =
        kcg_lit_int32(0);
      outC->_L70_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx135].m_Entry.Messages.PacketHeaders[idx133].endAddress =
        kcg_lit_int32(0);
    }
    for (idx134 = 0; idx134 < 500; idx134++) {
      outC->_L70_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx135].m_Entry.Messages.PacketData[idx134] =
        kcg_lit_int32(0);
    }
  }
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nid_engine =
    kcg_lit_int32(0);
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int32(0);
  for (idx137 = 0; idx137 < 1; idx137++) {
    outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx137].valid =
      kcg_true;
    for (idx136 = 0; idx136 < 15; idx136++) {
      outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx137].telephoneNumber[idx136] =
        kcg_lit_int32(0);
    }
  }
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.t_train_ref =
    kcg_lit_int32(0);
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.l_train =
    kcg_lit_int32(0);
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.v_maxtrain =
    kcg_lit_int32(0);
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.n_axle =
    kcg_lit_int32(0);
  for (idx138 = 0; idx138 < 4; idx138++) {
    outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_TractionIdentities[idx138].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_TractionIdentities[idx138].nid_ctraction =
      kcg_lit_int32(0);
  }
  for (idx139 = 0; idx139 < 5; idx139++) {
    outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_NationalSystemIdentities[idx139] =
      kcg_lit_int32(0);
  }
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nid_operational =
    kcg_lit_int32(0);
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.d_lrbg =
    kcg_lit_int32(0);
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.l_doubtover =
    kcg_lit_int32(0);
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.l_doubtunder =
    kcg_lit_int32(0);
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.l_trainint =
    kcg_lit_int32(0);
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.v_train =
    kcg_lit_int32(0);
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.nid_ntc =
    kcg_lit_int32(0);
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.nid_prvlrbg =
    kcg_lit_int32(0);
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.nid_c =
    kcg_lit_int32(0);
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvshunt =
    kcg_lit_int32(0);
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvstff =
    kcg_lit_int32(0);
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvonsight =
    kcg_lit_int32(0);
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvunfit =
    kcg_lit_int32(0);
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvrel =
    kcg_lit_int32(0);
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.t_nvcontact =
    kcg_lit_int32(0);
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.q_dir =
    Q_DIR_Reverse;
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.t_mar =
    kcg_lit_int32(0);
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.t_timeoutrqst =
    kcg_lit_int32(0);
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.t_cycrqst =
    kcg_lit_int32(0);
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.q_dir =
    Q_DIR_Reverse;
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.t_cycloc =
    kcg_lit_int32(0);
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.d_cycloc =
    kcg_lit_int32(0);
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_loc =
    M_LOC_Now;
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int32(0);
  for (idx140 = 0; idx140 < 32; idx140++) {
    outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx140].d_loc =
      kcg_lit_int32(0);
    outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx140].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx141 = 0; idx141 < 16; idx141++) {
    outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx141].valid =
      kcg_true;
    outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx141].count =
      kcg_lit_int32(0);
    outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx141].timestamp =
      kcg_lit_int32(0);
    outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx141].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx141].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx141].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx144 = 0; idx144 < 8; idx144++) {
    outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx144].m_IsValid =
      kcg_true;
    outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx144].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx144].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx144].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx144].m_Entry.Header.t_train =
      kcg_lit_int32(0);
    outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx144].m_Entry.Header.m_ack =
      kcg_lit_int32(0);
    outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx144].m_Entry.Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx144].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx144].m_Entry.Header.nid_em =
      kcg_lit_int32(0);
    outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx144].m_Entry.Header.q_scale =
      kcg_lit_int32(0);
    outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx144].m_Entry.Header.d_sr =
      kcg_lit_int32(0);
    outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx144].m_Entry.Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx144].m_Entry.Header.d_ref =
      kcg_lit_int32(0);
    outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx144].m_Entry.Header.q_dir =
      kcg_lit_int32(0);
    outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx144].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx144].m_Entry.Header.m_version =
      kcg_lit_int32(0);
    for (idx142 = 0; idx142 < 30; idx142++) {
      outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx144].m_Entry.Messages.PacketHeaders[idx142].nid_packet =
        kcg_lit_int32(0);
      outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx144].m_Entry.Messages.PacketHeaders[idx142].q_dir =
        Q_DIR_Reverse;
      outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx144].m_Entry.Messages.PacketHeaders[idx142].valid =
        kcg_true;
      outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx144].m_Entry.Messages.PacketHeaders[idx142].startAddress =
        kcg_lit_int32(0);
      outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx144].m_Entry.Messages.PacketHeaders[idx142].endAddress =
        kcg_lit_int32(0);
    }
    for (idx143 = 0; idx143 < 500; idx143++) {
      outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx144].m_Entry.Messages.PacketData[idx143] =
        kcg_lit_int32(0);
    }
  }
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.clockk.m_Value =
    kcg_lit_int32(0);
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int32(0);
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int32(0);
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int32(0);
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int32(0);
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int32(0);
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int32(0);
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int32(0);
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int32(0);
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int32(0);
  for (idx145 = 0; idx145 < 30; idx145++) {
    outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx145].nid_packet =
      kcg_lit_int32(0);
    outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx145].q_dir =
      Q_DIR_Reverse;
    outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx145].valid =
      kcg_true;
    outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx145].startAddress =
      kcg_lit_int32(0);
    outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx145].endAddress =
      kcg_lit_int32(0);
  }
  for (idx146 = 0; idx146 < 500; idx146++) {
    outC->_L64_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketData[idx146] =
      kcg_lit_int32(0);
  }
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nid_engine =
    kcg_lit_int32(0);
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int32(0);
  for (idx148 = 0; idx148 < 1; idx148++) {
    outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx148].valid =
      kcg_true;
    for (idx147 = 0; idx147 < 15; idx147++) {
      outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx148].telephoneNumber[idx147] =
        kcg_lit_int32(0);
    }
  }
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.t_train_ref =
    kcg_lit_int32(0);
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.l_train =
    kcg_lit_int32(0);
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.v_maxtrain =
    kcg_lit_int32(0);
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.n_axle =
    kcg_lit_int32(0);
  for (idx149 = 0; idx149 < 4; idx149++) {
    outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_TractionIdentities[idx149].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_TractionIdentities[idx149].nid_ctraction =
      kcg_lit_int32(0);
  }
  for (idx150 = 0; idx150 < 5; idx150++) {
    outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_NationalSystemIdentities[idx150] =
      kcg_lit_int32(0);
  }
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nid_operational =
    kcg_lit_int32(0);
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.d_lrbg =
    kcg_lit_int32(0);
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.l_doubtover =
    kcg_lit_int32(0);
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.l_doubtunder =
    kcg_lit_int32(0);
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.l_trainint =
    kcg_lit_int32(0);
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.v_train =
    kcg_lit_int32(0);
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.nid_ntc =
    kcg_lit_int32(0);
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.nid_prvlrbg =
    kcg_lit_int32(0);
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.nid_c =
    kcg_lit_int32(0);
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvshunt =
    kcg_lit_int32(0);
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvstff =
    kcg_lit_int32(0);
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvonsight =
    kcg_lit_int32(0);
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvunfit =
    kcg_lit_int32(0);
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvrel =
    kcg_lit_int32(0);
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.t_nvcontact =
    kcg_lit_int32(0);
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.q_dir =
    Q_DIR_Reverse;
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.t_mar =
    kcg_lit_int32(0);
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.t_timeoutrqst =
    kcg_lit_int32(0);
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.t_cycrqst =
    kcg_lit_int32(0);
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.q_dir =
    Q_DIR_Reverse;
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.t_cycloc =
    kcg_lit_int32(0);
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.d_cycloc =
    kcg_lit_int32(0);
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_loc =
    M_LOC_Now;
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int32(0);
  for (idx151 = 0; idx151 < 32; idx151++) {
    outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx151].d_loc =
      kcg_lit_int32(0);
    outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx151].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx152 = 0; idx152 < 16; idx152++) {
    outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx152].valid =
      kcg_true;
    outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx152].count =
      kcg_lit_int32(0);
    outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx152].timestamp =
      kcg_lit_int32(0);
    outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx152].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx152].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx152].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx155 = 0; idx155 < 8; idx155++) {
    outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx155].m_IsValid =
      kcg_true;
    outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx155].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx155].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx155].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx155].m_Entry.Header.t_train =
      kcg_lit_int32(0);
    outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx155].m_Entry.Header.m_ack =
      kcg_lit_int32(0);
    outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx155].m_Entry.Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx155].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx155].m_Entry.Header.nid_em =
      kcg_lit_int32(0);
    outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx155].m_Entry.Header.q_scale =
      kcg_lit_int32(0);
    outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx155].m_Entry.Header.d_sr =
      kcg_lit_int32(0);
    outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx155].m_Entry.Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx155].m_Entry.Header.d_ref =
      kcg_lit_int32(0);
    outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx155].m_Entry.Header.q_dir =
      kcg_lit_int32(0);
    outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx155].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx155].m_Entry.Header.m_version =
      kcg_lit_int32(0);
    for (idx153 = 0; idx153 < 30; idx153++) {
      outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx155].m_Entry.Messages.PacketHeaders[idx153].nid_packet =
        kcg_lit_int32(0);
      outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx155].m_Entry.Messages.PacketHeaders[idx153].q_dir =
        Q_DIR_Reverse;
      outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx155].m_Entry.Messages.PacketHeaders[idx153].valid =
        kcg_true;
      outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx155].m_Entry.Messages.PacketHeaders[idx153].startAddress =
        kcg_lit_int32(0);
      outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx155].m_Entry.Messages.PacketHeaders[idx153].endAddress =
        kcg_lit_int32(0);
    }
    for (idx154 = 0; idx154 < 500; idx154++) {
      outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx155].m_Entry.Messages.PacketData[idx154] =
        kcg_lit_int32(0);
    }
  }
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.clockk.m_Value =
    kcg_lit_int32(0);
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int32(0);
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int32(0);
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int32(0);
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int32(0);
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int32(0);
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int32(0);
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int32(0);
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int32(0);
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int32(0);
  for (idx156 = 0; idx156 < 30; idx156++) {
    outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx156].nid_packet =
      kcg_lit_int32(0);
    outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx156].q_dir =
      Q_DIR_Reverse;
    outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx156].valid =
      kcg_true;
    outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx156].startAddress =
      kcg_lit_int32(0);
    outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx156].endAddress =
      kcg_lit_int32(0);
  }
  for (idx157 = 0; idx157 < 500; idx157++) {
    outC->_L71_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketData[idx157] =
      kcg_lit_int32(0);
  }
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nid_engine =
    kcg_lit_int32(0);
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int32(0);
  for (idx159 = 0; idx159 < 1; idx159++) {
    outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx159].valid =
      kcg_true;
    for (idx158 = 0; idx158 < 15; idx158++) {
      outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx159].telephoneNumber[idx158] =
        kcg_lit_int32(0);
    }
  }
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.t_train_ref =
    kcg_lit_int32(0);
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.l_train =
    kcg_lit_int32(0);
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.v_maxtrain =
    kcg_lit_int32(0);
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.n_axle =
    kcg_lit_int32(0);
  for (idx160 = 0; idx160 < 4; idx160++) {
    outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_TractionIdentities[idx160].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_TractionIdentities[idx160].nid_ctraction =
      kcg_lit_int32(0);
  }
  for (idx161 = 0; idx161 < 5; idx161++) {
    outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.m_NationalSystemIdentities[idx161] =
      kcg_lit_int32(0);
  }
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.session.m_TrainData.nid_operational =
    kcg_lit_int32(0);
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.d_lrbg =
    kcg_lit_int32(0);
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.l_doubtover =
    kcg_lit_int32(0);
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.l_doubtunder =
    kcg_lit_int32(0);
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.l_trainint =
    kcg_lit_int32(0);
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.v_train =
    kcg_lit_int32(0);
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.nid_ntc =
    kcg_lit_int32(0);
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.session.m_PosData.nid_prvlrbg =
    kcg_lit_int32(0);
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.nid_c =
    kcg_lit_int32(0);
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvshunt =
    kcg_lit_int32(0);
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvstff =
    kcg_lit_int32(0);
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvonsight =
    kcg_lit_int32(0);
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvunfit =
    kcg_lit_int32(0);
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.v_nvrel =
    kcg_lit_int32(0);
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.config.m_NationalParams.t_nvcontact =
    kcg_lit_int32(0);
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.q_dir =
    Q_DIR_Reverse;
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.t_mar =
    kcg_lit_int32(0);
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.t_timeoutrqst =
    kcg_lit_int32(0);
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.config.m_MAReqParams.t_cycrqst =
    kcg_lit_int32(0);
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.q_dir =
    Q_DIR_Reverse;
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.t_cycloc =
    kcg_lit_int32(0);
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.d_cycloc =
    kcg_lit_int32(0);
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_loc =
    M_LOC_Now;
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int32(0);
  for (idx162 = 0; idx162 < 32; idx162++) {
    outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx162].d_loc =
      kcg_lit_int32(0);
    outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx162].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx163 = 0; idx163 < 16; idx163++) {
    outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx163].valid =
      kcg_true;
    outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx163].count =
      kcg_lit_int32(0);
    outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx163].timestamp =
      kcg_lit_int32(0);
    outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx163].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx163].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.diagnostic[idx163].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx166 = 0; idx166 < 8; idx166++) {
    outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx166].m_IsValid =
      kcg_true;
    outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx166].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx166].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx166].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx166].m_Entry.Header.t_train =
      kcg_lit_int32(0);
    outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx166].m_Entry.Header.m_ack =
      kcg_lit_int32(0);
    outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx166].m_Entry.Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx166].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx166].m_Entry.Header.nid_em =
      kcg_lit_int32(0);
    outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx166].m_Entry.Header.q_scale =
      kcg_lit_int32(0);
    outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx166].m_Entry.Header.d_sr =
      kcg_lit_int32(0);
    outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx166].m_Entry.Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx166].m_Entry.Header.d_ref =
      kcg_lit_int32(0);
    outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx166].m_Entry.Header.q_dir =
      kcg_lit_int32(0);
    outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx166].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx166].m_Entry.Header.m_version =
      kcg_lit_int32(0);
    for (idx164 = 0; idx164 < 30; idx164++) {
      outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx166].m_Entry.Messages.PacketHeaders[idx164].nid_packet =
        kcg_lit_int32(0);
      outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx166].m_Entry.Messages.PacketHeaders[idx164].q_dir =
        Q_DIR_Reverse;
      outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx166].m_Entry.Messages.PacketHeaders[idx164].valid =
        kcg_true;
      outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx166].m_Entry.Messages.PacketHeaders[idx164].startAddress =
        kcg_lit_int32(0);
      outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx166].m_Entry.Messages.PacketHeaders[idx164].endAddress =
        kcg_lit_int32(0);
    }
    for (idx165 = 0; idx165 < 500; idx165++) {
      outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.messageQueue.m_Entries[idx166].m_Entry.Messages.PacketData[idx165] =
        kcg_lit_int32(0);
    }
  }
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.clockk.m_Value = kcg_lit_int32(0);
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int32(0);
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int32(0);
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int32(0);
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int32(0);
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int32(0);
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int32(0);
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int32(0);
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int32(0);
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int32(0);
  for (idx167 = 0; idx167 < 30; idx167++) {
    outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx167].nid_packet =
      kcg_lit_int32(0);
    outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx167].q_dir =
      Q_DIR_Reverse;
    outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx167].valid =
      kcg_true;
    outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx167].startAddress =
      kcg_lit_int32(0);
    outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx167].endAddress =
      kcg_lit_int32(0);
  }
  for (idx168 = 0; idx168 < 500; idx168++) {
    outC->_L3_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.lastSentTrackTrainMessage.Messages.PacketData[idx168] =
      kcg_lit_int32(0);
  }
  outC->_L4_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.nid_engine =
    kcg_lit_int32(0);
  outC->_L4_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int32(0);
  for (idx170 = 0; idx170 < 1; idx170++) {
    outC->_L4_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_OnboardPhoneNumbers[idx170].valid =
      kcg_true;
    for (idx169 = 0; idx169 < 15; idx169++) {
      outC->_L4_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_OnboardPhoneNumbers[idx170].telephoneNumber[idx169] =
        kcg_lit_int32(0);
    }
  }
  outC->_L4_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.t_train_ref =
    kcg_lit_int32(0);
  outC->_L4_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L4_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L4_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.l_train =
    kcg_lit_int32(0);
  outC->_L4_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.v_maxtrain =
    kcg_lit_int32(0);
  outC->_L4_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L4_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L4_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L4_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.n_axle =
    kcg_lit_int32(0);
  for (idx171 = 0; idx171 < 4; idx171++) {
    outC->_L4_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_TractionIdentities[idx171].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L4_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_TractionIdentities[idx171].nid_ctraction =
      kcg_lit_int32(0);
  }
  for (idx172 = 0; idx172 < 5; idx172++) {
    outC->_L4_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.m_NationalSystemIdentities[idx172] =
      kcg_lit_int32(0);
  }
  outC->_L4_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_TrainData.nid_operational =
    kcg_lit_int32(0);
  outC->_L4_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L4_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L4_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.d_lrbg = kcg_lit_int32(
      0);
  outC->_L4_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L4_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L4_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.l_doubtover =
    kcg_lit_int32(0);
  outC->_L4_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.l_doubtunder =
    kcg_lit_int32(0);
  outC->_L4_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L4_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.l_trainint =
    kcg_lit_int32(0);
  outC->_L4_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.v_train =
    kcg_lit_int32(0);
  outC->_L4_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L4_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L4_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L4_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.nid_ntc =
    kcg_lit_int32(0);
  outC->_L4_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_PosData.nid_prvlrbg =
    kcg_lit_int32(0);
  for (idx175 = 0; idx175 < 8; idx175++) {
    outC->_L5_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx175].m_IsValid =
      kcg_true;
    outC->_L5_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx175].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L5_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx175].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L5_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx175].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->_L5_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx175].m_Entry.Header.t_train =
      kcg_lit_int32(0);
    outC->_L5_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx175].m_Entry.Header.m_ack =
      kcg_lit_int32(0);
    outC->_L5_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx175].m_Entry.Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->_L5_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx175].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L5_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx175].m_Entry.Header.nid_em =
      kcg_lit_int32(0);
    outC->_L5_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx175].m_Entry.Header.q_scale =
      kcg_lit_int32(0);
    outC->_L5_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx175].m_Entry.Header.d_sr =
      kcg_lit_int32(0);
    outC->_L5_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx175].m_Entry.Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->_L5_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx175].m_Entry.Header.d_ref =
      kcg_lit_int32(0);
    outC->_L5_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx175].m_Entry.Header.q_dir =
      kcg_lit_int32(0);
    outC->_L5_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx175].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L5_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx175].m_Entry.Header.m_version =
      kcg_lit_int32(0);
    for (idx173 = 0; idx173 < 30; idx173++) {
      outC->_L5_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx175].m_Entry.Messages.PacketHeaders[idx173].nid_packet =
        kcg_lit_int32(0);
      outC->_L5_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx175].m_Entry.Messages.PacketHeaders[idx173].q_dir =
        Q_DIR_Reverse;
      outC->_L5_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx175].m_Entry.Messages.PacketHeaders[idx173].valid =
        kcg_true;
      outC->_L5_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx175].m_Entry.Messages.PacketHeaders[idx173].startAddress =
        kcg_lit_int32(0);
      outC->_L5_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx175].m_Entry.Messages.PacketHeaders[idx173].endAddress =
        kcg_lit_int32(0);
    }
    for (idx174 = 0; idx174 < 500; idx174++) {
      outC->_L5_IDLE_CONDITIONAL_EMERGENCY_STOP_SM.m_Entries[idx175].m_Entry.Messages.PacketData[idx174] =
        kcg_lit_int32(0);
    }
  }
  outC->session.m_TrainData.nid_engine = kcg_lit_int32(0);
  outC->session.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int32(0);
  for (idx177 = 0; idx177 < 1; idx177++) {
    outC->session.m_TrainData.m_OnboardPhoneNumbers[idx177].valid = kcg_true;
    for (idx176 = 0; idx176 < 15; idx176++) {
      outC->session.m_TrainData.m_OnboardPhoneNumbers[idx177].telephoneNumber[idx176] =
        kcg_lit_int32(0);
    }
  }
  outC->session.m_TrainData.t_train_ref = kcg_lit_int32(0);
  outC->session.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->session.m_TrainData.l_train = kcg_lit_int32(0);
  outC->session.m_TrainData.v_maxtrain = kcg_lit_int32(0);
  outC->session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->session.m_TrainData.n_axle = kcg_lit_int32(0);
  for (idx178 = 0; idx178 < 4; idx178++) {
    outC->session.m_TrainData.m_TractionIdentities[idx178].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->session.m_TrainData.m_TractionIdentities[idx178].nid_ctraction =
      kcg_lit_int32(0);
  }
  for (idx179 = 0; idx179 < 5; idx179++) {
    outC->session.m_TrainData.m_NationalSystemIdentities[idx179] = kcg_lit_int32(0);
  }
  outC->session.m_TrainData.nid_operational = kcg_lit_int32(0);
  outC->session.m_PosData.nid_lrbg = kcg_lit_int32(0);
  outC->session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->session.m_PosData.d_lrbg = kcg_lit_int32(0);
  outC->session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->session.m_PosData.l_doubtover = kcg_lit_int32(0);
  outC->session.m_PosData.l_doubtunder = kcg_lit_int32(0);
  outC->session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->session.m_PosData.l_trainint = kcg_lit_int32(0);
  outC->session.m_PosData.v_train = kcg_lit_int32(0);
  outC->session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->session.m_PosData.nid_ntc = kcg_lit_int32(0);
  outC->session.m_PosData.nid_prvlrbg = kcg_lit_int32(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.radioDevice = kcg_lit_int32(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.nid_message = kcg_lit_int32(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.t_train = kcg_lit_int32(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.m_ack = kcg_lit_int32(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.nid_lrbg = kcg_lit_int32(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int32(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.nid_em = kcg_lit_int32(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.q_scale = kcg_lit_int32(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.d_sr = kcg_lit_int32(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.d_ref = kcg_lit_int32(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.q_dir = kcg_lit_int32(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.m_version = kcg_lit_int32(0);
  for (idx180 = 0; idx180 < 30; idx180++) {
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketHeaders[idx180].nid_packet =
      kcg_lit_int32(0);
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketHeaders[idx180].q_dir =
      Q_DIR_Reverse;
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketHeaders[idx180].valid =
      kcg_true;
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketHeaders[idx180].startAddress =
      kcg_lit_int32(0);
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketHeaders[idx180].endAddress =
      kcg_lit_int32(0);
  }
  for (idx181 = 0; idx181 < 500; idx181++) {
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketData[idx181] =
      kcg_lit_int32(0);
  }
  outC->outRadioTrainTrackMessage.present = kcg_true;
  outC->outRadioTrainTrackMessage.header.present = kcg_true;
  outC->outRadioTrainTrackMessage.header.nid_message = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.header.t_train = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.header.nid_engine = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->outRadioTrainTrackMessage.header.xT_TRAIN = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.header.xNID_EM = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->outRadioTrainTrackMessage.header.xNID_TEXTMESSAGE = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p0.valid = kcg_true;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.NID_PACKET = kcg_lit_int32(
      0);
  outC->outRadioTrainTrackMessage.packets.p0.packet0.L_PACKET = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p0.packet0.D_LRBG = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.L_DOUBTOVER =
    kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p0.packet0.L_DOUBTUNDER =
    kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.L_TRAININT = kcg_lit_int32(
      0);
  outC->outRadioTrainTrackMessage.packets.p0.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p0.packet0.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.mode =
    M_MODE_Full_Supervision;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.NID_NTC = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p1.valid = kcg_true;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.NID_PACKET = kcg_lit_int32(
      0);
  outC->outRadioTrainTrackMessage.packets.p1.packet1.L_PACKET = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p1.packet1.NID_PRVLRBG =
    kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p1.packet1.D_LRBG = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.L_DOUBTOVER =
    kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p1.packet1.L_DOUBTUNDER =
    kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.L_TRAININT = kcg_lit_int32(
      0);
  outC->outRadioTrainTrackMessage.packets.p1.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p1.packet1.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.mode =
    M_MODE_Full_Supervision;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.NID_NTC = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p3.valid = kcg_true;
  outC->outRadioTrainTrackMessage.packets.p3.number = kcg_lit_int32(0);
  for (idx183 = 0; idx183 < 1; idx183++) {
    outC->outRadioTrainTrackMessage.packets.p3.aNID_RADIO[idx183].valid = kcg_true;
    for (idx182 = 0; idx182 < 15; idx182++) {
      outC->outRadioTrainTrackMessage.packets.p3.aNID_RADIO[idx183].telephoneNumber[idx182] =
        kcg_lit_int32(0);
    }
  }
  outC->outRadioTrainTrackMessage.packets.p4.valid = kcg_true;
  outC->outRadioTrainTrackMessage.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->outRadioTrainTrackMessage.packets.p5.valid = kcg_true;
  outC->outRadioTrainTrackMessage.packets.p5.TrainRunningNumber = kcg_lit_int32(
      0);
  outC->outRadioTrainTrackMessage.packets.p9.valid = kcg_true;
  outC->outRadioTrainTrackMessage.packets.p9.transitionInformation =
    kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p11.valid = kcg_true;
  outC->outRadioTrainTrackMessage.packets.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->outRadioTrainTrackMessage.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->outRadioTrainTrackMessage.packets.p11.l_train = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p11.v_maxtrain = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->outRadioTrainTrackMessage.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->outRadioTrainTrackMessage.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->outRadioTrainTrackMessage.packets.p11.n_axle = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p11.nIter_tractionIdentity =
    kcg_lit_int32(0);
  for (idx184 = 0; idx184 < 4; idx184++) {
    outC->outRadioTrainTrackMessage.packets.p11.tractionIdentity[idx184].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->outRadioTrainTrackMessage.packets.p11.tractionIdentity[idx184].nid_ctraction =
      kcg_lit_int32(0);
  }
  outC->outRadioTrainTrackMessage.packets.p11.nIter_ntc = kcg_lit_int32(0);
  for (idx185 = 0; idx185 < 5; idx185++) {
    outC->outRadioTrainTrackMessage.packets.p11.nid_ntc[idx185] = kcg_lit_int32(0);
  }
  outC->outDataBus.session.m_TrainData.nid_engine = kcg_lit_int32(0);
  outC->outDataBus.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int32(0);
  for (idx187 = 0; idx187 < 1; idx187++) {
    outC->outDataBus.session.m_TrainData.m_OnboardPhoneNumbers[idx187].valid =
      kcg_true;
    for (idx186 = 0; idx186 < 15; idx186++) {
      outC->outDataBus.session.m_TrainData.m_OnboardPhoneNumbers[idx187].telephoneNumber[idx186] =
        kcg_lit_int32(0);
    }
  }
  outC->outDataBus.session.m_TrainData.t_train_ref = kcg_lit_int32(0);
  outC->outDataBus.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->outDataBus.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->outDataBus.session.m_TrainData.l_train = kcg_lit_int32(0);
  outC->outDataBus.session.m_TrainData.v_maxtrain = kcg_lit_int32(0);
  outC->outDataBus.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->outDataBus.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->outDataBus.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->outDataBus.session.m_TrainData.n_axle = kcg_lit_int32(0);
  for (idx188 = 0; idx188 < 4; idx188++) {
    outC->outDataBus.session.m_TrainData.m_TractionIdentities[idx188].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->outDataBus.session.m_TrainData.m_TractionIdentities[idx188].nid_ctraction =
      kcg_lit_int32(0);
  }
  for (idx189 = 0; idx189 < 5; idx189++) {
    outC->outDataBus.session.m_TrainData.m_NationalSystemIdentities[idx189] =
      kcg_lit_int32(0);
  }
  outC->outDataBus.session.m_TrainData.nid_operational = kcg_lit_int32(0);
  outC->outDataBus.session.m_PosData.nid_lrbg = kcg_lit_int32(0);
  outC->outDataBus.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->outDataBus.session.m_PosData.d_lrbg = kcg_lit_int32(0);
  outC->outDataBus.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->outDataBus.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->outDataBus.session.m_PosData.l_doubtover = kcg_lit_int32(0);
  outC->outDataBus.session.m_PosData.l_doubtunder = kcg_lit_int32(0);
  outC->outDataBus.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->outDataBus.session.m_PosData.l_trainint = kcg_lit_int32(0);
  outC->outDataBus.session.m_PosData.v_train = kcg_lit_int32(0);
  outC->outDataBus.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->outDataBus.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->outDataBus.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->outDataBus.session.m_PosData.nid_ntc = kcg_lit_int32(0);
  outC->outDataBus.session.m_PosData.nid_prvlrbg = kcg_lit_int32(0);
  outC->outDataBus.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->outDataBus.config.m_NationalParams.nid_c = kcg_lit_int32(0);
  outC->outDataBus.config.m_NationalParams.v_nvshunt = kcg_lit_int32(0);
  outC->outDataBus.config.m_NationalParams.v_nvstff = kcg_lit_int32(0);
  outC->outDataBus.config.m_NationalParams.v_nvonsight = kcg_lit_int32(0);
  outC->outDataBus.config.m_NationalParams.v_nvunfit = kcg_lit_int32(0);
  outC->outDataBus.config.m_NationalParams.v_nvrel = kcg_lit_int32(0);
  outC->outDataBus.config.m_NationalParams.t_nvcontact = kcg_lit_int32(0);
  outC->outDataBus.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->outDataBus.config.m_MAReqParams.t_mar = kcg_lit_int32(0);
  outC->outDataBus.config.m_MAReqParams.t_timeoutrqst = kcg_lit_int32(0);
  outC->outDataBus.config.m_MAReqParams.t_cycrqst = kcg_lit_int32(0);
  outC->outDataBus.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->outDataBus.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->outDataBus.config.m_PosRepParams.t_cycloc = kcg_lit_int32(0);
  outC->outDataBus.config.m_PosRepParams.d_cycloc = kcg_lit_int32(0);
  outC->outDataBus.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->outDataBus.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int32(0);
  for (idx190 = 0; idx190 < 32; idx190++) {
    outC->outDataBus.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx190].d_loc =
      kcg_lit_int32(0);
    outC->outDataBus.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx190].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx191 = 0; idx191 < 16; idx191++) {
    outC->outDataBus.diagnostic[idx191].valid = kcg_true;
    outC->outDataBus.diagnostic[idx191].count = kcg_lit_int32(0);
    outC->outDataBus.diagnostic[idx191].timestamp = kcg_lit_int32(0);
    outC->outDataBus.diagnostic[idx191].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->outDataBus.diagnostic[idx191].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->outDataBus.diagnostic[idx191].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx194 = 0; idx194 < 8; idx194++) {
    outC->outDataBus.messageQueue.m_Entries[idx194].m_IsValid = kcg_true;
    outC->outDataBus.messageQueue.m_Entries[idx194].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->outDataBus.messageQueue.m_Entries[idx194].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->outDataBus.messageQueue.m_Entries[idx194].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->outDataBus.messageQueue.m_Entries[idx194].m_Entry.Header.t_train =
      kcg_lit_int32(0);
    outC->outDataBus.messageQueue.m_Entries[idx194].m_Entry.Header.m_ack =
      kcg_lit_int32(0);
    outC->outDataBus.messageQueue.m_Entries[idx194].m_Entry.Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->outDataBus.messageQueue.m_Entries[idx194].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->outDataBus.messageQueue.m_Entries[idx194].m_Entry.Header.nid_em =
      kcg_lit_int32(0);
    outC->outDataBus.messageQueue.m_Entries[idx194].m_Entry.Header.q_scale =
      kcg_lit_int32(0);
    outC->outDataBus.messageQueue.m_Entries[idx194].m_Entry.Header.d_sr =
      kcg_lit_int32(0);
    outC->outDataBus.messageQueue.m_Entries[idx194].m_Entry.Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->outDataBus.messageQueue.m_Entries[idx194].m_Entry.Header.d_ref =
      kcg_lit_int32(0);
    outC->outDataBus.messageQueue.m_Entries[idx194].m_Entry.Header.q_dir =
      kcg_lit_int32(0);
    outC->outDataBus.messageQueue.m_Entries[idx194].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->outDataBus.messageQueue.m_Entries[idx194].m_Entry.Header.m_version =
      kcg_lit_int32(0);
    for (idx192 = 0; idx192 < 30; idx192++) {
      outC->outDataBus.messageQueue.m_Entries[idx194].m_Entry.Messages.PacketHeaders[idx192].nid_packet =
        kcg_lit_int32(0);
      outC->outDataBus.messageQueue.m_Entries[idx194].m_Entry.Messages.PacketHeaders[idx192].q_dir =
        Q_DIR_Reverse;
      outC->outDataBus.messageQueue.m_Entries[idx194].m_Entry.Messages.PacketHeaders[idx192].valid =
        kcg_true;
      outC->outDataBus.messageQueue.m_Entries[idx194].m_Entry.Messages.PacketHeaders[idx192].startAddress =
        kcg_lit_int32(0);
      outC->outDataBus.messageQueue.m_Entries[idx194].m_Entry.Messages.PacketHeaders[idx192].endAddress =
        kcg_lit_int32(0);
    }
    for (idx193 = 0; idx193 < 500; idx193++) {
      outC->outDataBus.messageQueue.m_Entries[idx194].m_Entry.Messages.PacketData[idx193] =
        kcg_lit_int32(0);
    }
  }
  outC->outDataBus.clockk.m_Value = kcg_lit_int32(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.radioDevice = kcg_lit_int32(
      0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.nid_message = kcg_lit_int32(
      0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.t_train = kcg_lit_int32(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.m_ack = kcg_lit_int32(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.nid_lrbg = kcg_lit_int32(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int32(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.nid_em = kcg_lit_int32(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.q_scale = kcg_lit_int32(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.d_sr = kcg_lit_int32(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.d_ref = kcg_lit_int32(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.q_dir = kcg_lit_int32(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.m_version = kcg_lit_int32(0);
  for (idx195 = 0; idx195 < 30; idx195++) {
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[idx195].nid_packet =
      kcg_lit_int32(0);
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[idx195].q_dir =
      Q_DIR_Reverse;
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[idx195].valid =
      kcg_true;
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[idx195].startAddress =
      kcg_lit_int32(0);
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[idx195].endAddress =
      kcg_lit_int32(0);
  }
  for (idx196 = 0; idx196 < 500; idx196++) {
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketData[idx196] =
      kcg_lit_int32(0);
  }
  /* CONDITIONAL_EMERGENCY_STOP_SM:SEND_CONDITIONAL_EMERGENCY_STOP:_L54=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_EM#1)/ */
  RadioTrackTrainHeader__Get_NID_EM_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Get_NID_EM_1);
  /* CONDITIONAL_EMERGENCY_STOP_SM:SEND_CONDITIONAL_EMERGENCY_STOP:_L56=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#3)/ */
  RadioTrackTrainMessage__GetHeader_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainMessage__GetHeader_3);
  /* CONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1:then:_L16=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_Q_EMERGENCYSTOP#1)/ */
  RadioTrainTrackHeader__Get_Q_EMERGENCYSTOP_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackHeader__Get_Q_EMERGENCYSTOP_1);
  /* CONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1:then:_L17=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#5)/ */
  RadioTrainTrackMessage__GetHeader_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackMessage__GetHeader_5);
  /* CONDITIONAL_EMERGENCY_STOP_SM:SEND_CONDITIONAL_EMERGENCY_STOP:_L57=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut#3)/ */
  RadioTrackTrainMessageQueue__TryPut_init_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueue__TryPut_3);
  /* CONDITIONAL_EMERGENCY_STOP_SM:SEND_CONDITIONAL_EMERGENCY_STOP:_L59=(RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__Create#3)/ */
  RadioTrackTrainMessageQueueEntry__Create_init_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueueEntry__Create_3);
  /* CONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1:then:_L13=(RBC_Session_Pkg::SessionManagement__SetPosData#5)/ */
  SessionManagement__SetPosData_init_RBC_Session_Pkg(
    &outC->Context_SessionManagement__SetPosData_5);
  /* CONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1:then:_L11=(RBC_Session_Pkg::PosData__Update#5)/ */
  PosData__Update_init_RBC_Session_Pkg(&outC->Context_PosData__Update_5);
  /* CONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1:then:_L10=(RBC_Session_Pkg::SessionManagement__GetPosData#5)/ */
  SessionManagement__GetPosData_init_RBC_Session_Pkg(
    &outC->Context_SessionManagement__GetPosData_5);
  /* CONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L27=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_EM#1)/ */
  RadioTrainTrackHeader__Get_NID_EM_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackHeader__Get_NID_EM_1);
  /* CONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L26=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#3)/ */
  RadioTrainTrackMessage__GetHeader_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackMessage__GetHeader_3);
  /* _L63=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#2)/ */
  RadioTrackTrainHeader__Get_NID_MESSAGE_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Get_NID_MESSAGE_2);
  /* _L65=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#4)/ */
  RadioTrackTrainMessage__GetHeader_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainMessage__GetHeader_4);
  /* _L67=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_MESSAGE#2)/ */
  RadioTrainTrackHeader__Get_NID_MESSAGE_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackHeader__Get_NID_MESSAGE_2);
  /* _L66=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#4)/ */
  RadioTrainTrackMessage__GetHeader_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackMessage__GetHeader_4);
  outC->CONDITIONAL_EMERGENCY_STOP_SM_reset_act = kcg_false;
  outC->CONDITIONAL_EMERGENCY_STOP_SM_reset_nxt = kcg_false;
  outC->CONDITIONAL_EMERGENCY_STOP_SM_state_nxt =
    SSM_st_IDLE_CONDITIONAL_EMERGENCY_STOP_SM;
  outC->radioTrackTrainMessageWasSentEmergencyStopId = NID_EM_DEFAULT;
  outC->validAck = kcg_false;
  outC->invalidAck = kcg_false;
}
#endif /* KCG_USER_DEFINED_INIT */


void RBC__ProcessConditionalEmergencyStop_reset_RBC_Model_Pkg(
  outC_RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg *outC)
{
  /* CONDITIONAL_EMERGENCY_STOP_SM:SEND_CONDITIONAL_EMERGENCY_STOP:_L54=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_EM#1)/ */
  RadioTrackTrainHeader__Get_NID_EM_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Get_NID_EM_1);
  /* CONDITIONAL_EMERGENCY_STOP_SM:SEND_CONDITIONAL_EMERGENCY_STOP:_L56=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#3)/ */
  RadioTrackTrainMessage__GetHeader_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainMessage__GetHeader_3);
  /* CONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1:then:_L16=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_Q_EMERGENCYSTOP#1)/ */
  RadioTrainTrackHeader__Get_Q_EMERGENCYSTOP_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackHeader__Get_Q_EMERGENCYSTOP_1);
  /* CONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1:then:_L17=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#5)/ */
  RadioTrainTrackMessage__GetHeader_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackMessage__GetHeader_5);
  /* CONDITIONAL_EMERGENCY_STOP_SM:SEND_CONDITIONAL_EMERGENCY_STOP:_L57=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut#3)/ */
  RadioTrackTrainMessageQueue__TryPut_reset_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueue__TryPut_3);
  /* CONDITIONAL_EMERGENCY_STOP_SM:SEND_CONDITIONAL_EMERGENCY_STOP:_L59=(RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__Create#3)/ */
  RadioTrackTrainMessageQueueEntry__Create_reset_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueueEntry__Create_3);
  /* CONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1:then:_L13=(RBC_Session_Pkg::SessionManagement__SetPosData#5)/ */
  SessionManagement__SetPosData_reset_RBC_Session_Pkg(
    &outC->Context_SessionManagement__SetPosData_5);
  /* CONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1:then:_L11=(RBC_Session_Pkg::PosData__Update#5)/ */
  PosData__Update_reset_RBC_Session_Pkg(&outC->Context_PosData__Update_5);
  /* CONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1:then:_L10=(RBC_Session_Pkg::SessionManagement__GetPosData#5)/ */
  SessionManagement__GetPosData_reset_RBC_Session_Pkg(
    &outC->Context_SessionManagement__GetPosData_5);
  /* CONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L27=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_EM#1)/ */
  RadioTrainTrackHeader__Get_NID_EM_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackHeader__Get_NID_EM_1);
  /* CONDITIONAL_EMERGENCY_STOP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L26=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#3)/ */
  RadioTrainTrackMessage__GetHeader_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackMessage__GetHeader_3);
  /* _L63=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#2)/ */
  RadioTrackTrainHeader__Get_NID_MESSAGE_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Get_NID_MESSAGE_2);
  /* _L65=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#4)/ */
  RadioTrackTrainMessage__GetHeader_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainMessage__GetHeader_4);
  /* _L67=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_MESSAGE#2)/ */
  RadioTrainTrackHeader__Get_NID_MESSAGE_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackHeader__Get_NID_MESSAGE_2);
  /* _L66=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#4)/ */
  RadioTrainTrackMessage__GetHeader_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackMessage__GetHeader_4);
  outC->CONDITIONAL_EMERGENCY_STOP_SM_reset_act = kcg_false;
  outC->CONDITIONAL_EMERGENCY_STOP_SM_reset_nxt = kcg_false;
  outC->CONDITIONAL_EMERGENCY_STOP_SM_state_nxt =
    SSM_st_IDLE_CONDITIONAL_EMERGENCY_STOP_SM;
  outC->radioTrackTrainMessageWasSentEmergencyStopId = NID_EM_DEFAULT;
  outC->validAck = kcg_false;
  outC->invalidAck = kcg_false;
}


void kcg_save_SV_RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg(
  SV_RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg *SV,
  outC_RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg *outC)
{
  kcg_copy_SessionManagement_T(&SV->Context_session, &outC->session);
  SV->Context_radioTrackTrainMessageWasSentEmergencyStopId =
    outC->radioTrackTrainMessageWasSentEmergencyStopId;
  SV->Context_CONDITIONAL_EMERGENCY_STOP_SM_reset_nxt =
    outC->CONDITIONAL_EMERGENCY_STOP_SM_reset_nxt;
  SV->Context_CONDITIONAL_EMERGENCY_STOP_SM_reset_act =
    outC->CONDITIONAL_EMERGENCY_STOP_SM_reset_act;
  SV->Context_CONDITIONAL_EMERGENCY_STOP_SM_state_nxt =
    outC->CONDITIONAL_EMERGENCY_STOP_SM_state_nxt;
  SV->Context_validAck = outC->validAck;
  SV->Context_invalidAck = outC->invalidAck;
}

void kcg_load_SV_RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg(
  outC_RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg *outC,
  SV_RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg *SV)
{
  kcg_copy_SessionManagement_T(&outC->session, &SV->Context_session);
  outC->radioTrackTrainMessageWasSentEmergencyStopId =
    SV->Context_radioTrackTrainMessageWasSentEmergencyStopId;
  outC->CONDITIONAL_EMERGENCY_STOP_SM_reset_nxt =
    SV->Context_CONDITIONAL_EMERGENCY_STOP_SM_reset_nxt;
  outC->CONDITIONAL_EMERGENCY_STOP_SM_reset_act =
    SV->Context_CONDITIONAL_EMERGENCY_STOP_SM_reset_act;
  outC->CONDITIONAL_EMERGENCY_STOP_SM_state_nxt =
    SV->Context_CONDITIONAL_EMERGENCY_STOP_SM_state_nxt;
  outC->validAck = SV->Context_validAck;
  outC->invalidAck = SV->Context_invalidAck;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg.c
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

