/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC__ProcessTripAndPostTrip_RBC_Model_Pkg.h"

/* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip/ */
void RBC__ProcessTripAndPostTrip_RBC_Model_Pkg(
  /* inDataBus/ */
  RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* inRadioTrainTrackMessage/ */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  /* inTriggeredRadioTrackTrainMessage/ */
  CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessage,
  outC_RBC__ProcessTripAndPostTrip_RBC_Model_Pkg *outC)
{
  /* recognitionMessageWasSentTimestamp/ */
  static T_TRAIN recognitionMessageWasSentTimestamp_partial;
  /* messageQueue/ */
  static RadioTrackTrainMessageQueue_T messageQueue_partial;
  /* session/ */
  static SessionManagement_T session_partial;
  /* TRIP_AND_POST_TRIP_SM: */
  static SSM_ST_TRIP_AND_POST_TRIP_SM TRIP_AND_POST_TRIP_SM_state_nxt_partial;
  /* TRIP_AND_POST_TRIP_SM: */
  static kcg_bool TRIP_AND_POST_TRIP_SM_reset_nxt_partial;
  /* TRIP_AND_POST_TRIP_SM: */
  static SSM_TR_TRIP_AND_POST_TRIP_SM TRIP_AND_POST_TRIP_SM_fired_partial;
  /* recognitionMessageWasSentTimestamp/ */
  static T_TRAIN _1_recognitionMessageWasSentTimestamp_partial;
  /* messageQueue/ */
  static RadioTrackTrainMessageQueue_T _2_messageQueue_partial;
  /* session/ */
  static SessionManagement_T _3_session_partial;
  /* TRIP_AND_POST_TRIP_SM: */
  static SSM_ST_TRIP_AND_POST_TRIP_SM _4_TRIP_AND_POST_TRIP_SM_state_nxt_partial;
  /* TRIP_AND_POST_TRIP_SM: */
  static kcg_bool _5_TRIP_AND_POST_TRIP_SM_reset_nxt_partial;
  /* TRIP_AND_POST_TRIP_SM: */
  static SSM_TR_TRIP_AND_POST_TRIP_SM _6_TRIP_AND_POST_TRIP_SM_fired_partial;
  /* recognitionMessageWasSentTimestamp/ */
  static T_TRAIN _7_recognitionMessageWasSentTimestamp_partial;
  /* messageQueue/ */
  static RadioTrackTrainMessageQueue_T _8_messageQueue_partial;
  /* session/ */
  static SessionManagement_T _9_session_partial;
  /* TRIP_AND_POST_TRIP_SM: */
  static SSM_ST_TRIP_AND_POST_TRIP_SM _10_TRIP_AND_POST_TRIP_SM_state_nxt_partial;
  /* TRIP_AND_POST_TRIP_SM: */
  static kcg_bool _11_TRIP_AND_POST_TRIP_SM_reset_nxt_partial;
  /* TRIP_AND_POST_TRIP_SM: */
  static SSM_TR_TRIP_AND_POST_TRIP_SM _12_TRIP_AND_POST_TRIP_SM_fired_partial;
  /* recognitionMessageWasSentTimestamp/ */
  static T_TRAIN _13_recognitionMessageWasSentTimestamp_partial;
  /* messageQueue/ */
  static RadioTrackTrainMessageQueue_T _14_messageQueue_partial;
  /* session/ */
  static SessionManagement_T _15_session_partial;
  /* TRIP_AND_POST_TRIP_SM: */
  static SSM_ST_TRIP_AND_POST_TRIP_SM _16_TRIP_AND_POST_TRIP_SM_state_nxt_partial;
  /* TRIP_AND_POST_TRIP_SM: */
  static kcg_bool _17_TRIP_AND_POST_TRIP_SM_reset_nxt_partial;
  /* TRIP_AND_POST_TRIP_SM: */
  static SSM_TR_TRIP_AND_POST_TRIP_SM _18_TRIP_AND_POST_TRIP_SM_fired_partial;
  /* recognitionMessageWasSentTimestamp/ */
  static T_TRAIN _19_recognitionMessageWasSentTimestamp_partial;
  /* messageQueue/ */
  static RadioTrackTrainMessageQueue_T _20_messageQueue_partial;
  /* session/ */
  static SessionManagement_T _21_session_partial;
  /* TRIP_AND_POST_TRIP_SM: */
  static SSM_ST_TRIP_AND_POST_TRIP_SM _22_TRIP_AND_POST_TRIP_SM_state_nxt_partial;
  /* TRIP_AND_POST_TRIP_SM: */
  static kcg_bool _23_TRIP_AND_POST_TRIP_SM_reset_nxt_partial;
  /* TRIP_AND_POST_TRIP_SM: */
  static SSM_TR_TRIP_AND_POST_TRIP_SM _24_TRIP_AND_POST_TRIP_SM_fired_partial;
  /* TRIP_AND_POST_TRIP_SM: */
  static SSM_ST_TRIP_AND_POST_TRIP_SM TRIP_AND_POST_TRIP_SM_state_act_partial;
  /* TRIP_AND_POST_TRIP_SM: */
  static kcg_bool TRIP_AND_POST_TRIP_SM_reset_act_partial;
  /* TRIP_AND_POST_TRIP_SM: */
  static SSM_TR_TRIP_AND_POST_TRIP_SM TRIP_AND_POST_TRIP_SM_fired_strong_partial;
  /* TRIP_AND_POST_TRIP_SM:IDLE:<1> */
  static kcg_bool tr_1_guard_IDLE_TRIP_AND_POST_TRIP_SM;
  /* TRIP_AND_POST_TRIP_SM: */
  static SSM_ST_TRIP_AND_POST_TRIP_SM _25_TRIP_AND_POST_TRIP_SM_state_act_partial;
  /* TRIP_AND_POST_TRIP_SM: */
  static kcg_bool _26_TRIP_AND_POST_TRIP_SM_reset_act_partial;
  /* TRIP_AND_POST_TRIP_SM: */
  static SSM_TR_TRIP_AND_POST_TRIP_SM _27_TRIP_AND_POST_TRIP_SM_fired_strong_partial;
  /* TRIP_AND_POST_TRIP_SM:MODE_TRIP:<1> */
  static kcg_bool tr_1_guard_MODE_TRIP_TRIP_AND_POST_TRIP_SM;
  /* TRIP_AND_POST_TRIP_SM: */
  static SSM_ST_TRIP_AND_POST_TRIP_SM _28_TRIP_AND_POST_TRIP_SM_state_act_partial;
  /* TRIP_AND_POST_TRIP_SM: */
  static kcg_bool _29_TRIP_AND_POST_TRIP_SM_reset_act_partial;
  /* TRIP_AND_POST_TRIP_SM: */
  static SSM_TR_TRIP_AND_POST_TRIP_SM _30_TRIP_AND_POST_TRIP_SM_fired_strong_partial;
  /* TRIP_AND_POST_TRIP_SM:MODE_POST_TRIP:<1> */
  static kcg_bool tr_1_guard_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM;
  /* TRIP_AND_POST_TRIP_SM: */
  static SSM_ST_TRIP_AND_POST_TRIP_SM _31_TRIP_AND_POST_TRIP_SM_state_act_partial;
  /* TRIP_AND_POST_TRIP_SM: */
  static kcg_bool _32_TRIP_AND_POST_TRIP_SM_reset_act_partial;
  /* TRIP_AND_POST_TRIP_SM: */
  static SSM_TR_TRIP_AND_POST_TRIP_SM _33_TRIP_AND_POST_TRIP_SM_fired_strong_partial;
  /* TRIP_AND_POST_TRIP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:<3> */
  static kcg_bool tr_3_guard_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM;
  /* TRIP_AND_POST_TRIP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:<2> */
  static kcg_bool tr_2_guard_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM;
  /* TRIP_AND_POST_TRIP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:<1> */
  static kcg_bool tr_1_guard_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM;
  /* TRIP_AND_POST_TRIP_SM: */
  static SSM_ST_TRIP_AND_POST_TRIP_SM _34_TRIP_AND_POST_TRIP_SM_state_act_partial;
  /* TRIP_AND_POST_TRIP_SM: */
  static kcg_bool _35_TRIP_AND_POST_TRIP_SM_reset_act_partial;
  /* TRIP_AND_POST_TRIP_SM: */
  static SSM_TR_TRIP_AND_POST_TRIP_SM _36_TRIP_AND_POST_TRIP_SM_fired_strong_partial;
  /* TRIP_AND_POST_TRIP_SM:SEND_MSG_06:<1> */
  static kcg_bool tr_1_guard_SEND_MSG_06_TRIP_AND_POST_TRIP_SM;
  /* invalidAck/ */
  static kcg_bool last_invalidAck;
  /* validAck/ */
  static kcg_bool last_validAck;
  static M_LEVEL noname;
  static kcg_bool _37_noname;
  /* recognitionMessageWasSentTimestamp/ */
  static T_TRAIN last_recognitionMessageWasSentTimestamp;
  /* TRIP_AND_POST_TRIP_SM: */
  static kcg_bool TRIP_AND_POST_TRIP_SM_reset_sel;
  /* TRIP_AND_POST_TRIP_SM: */
  static kcg_bool TRIP_AND_POST_TRIP_SM_reset_prv;

  last_invalidAck = outC->invalidAck;
  last_validAck = outC->validAck;
  last_recognitionMessageWasSentTimestamp =
    outC->recognitionMessageWasSentTimestamp;
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->_L94,
    inRadioTrainTrackMessage);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->_L93, inDataBus);
  outC->TRIP_AND_POST_TRIP_SM_state_sel = outC->TRIP_AND_POST_TRIP_SM_state_nxt;
  switch (outC->TRIP_AND_POST_TRIP_SM_state_sel) {
    case SSM_st_SEND_MSG_06_TRIP_AND_POST_TRIP_SM :
      tr_1_guard_SEND_MSG_06_TRIP_AND_POST_TRIP_SM = kcg_true;
      if (tr_1_guard_SEND_MSG_06_TRIP_AND_POST_TRIP_SM) {
        _34_TRIP_AND_POST_TRIP_SM_state_act_partial =
          SSM_st_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM;
      }
      else {
        _34_TRIP_AND_POST_TRIP_SM_state_act_partial =
          SSM_st_SEND_MSG_06_TRIP_AND_POST_TRIP_SM;
      }
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM :
      tr_3_guard_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM = last_invalidAck;
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
  switch (outC->TRIP_AND_POST_TRIP_SM_state_sel) {
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM :
      tr_2_guard_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM =
        last_invalidAck & (outC->radioTrainTrackMessageId == kcg_lit_int64(136));
      tr_1_guard_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM = last_validAck;
      if (tr_1_guard_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM) {
        _31_TRIP_AND_POST_TRIP_SM_state_act_partial = SSM_st_IDLE_TRIP_AND_POST_TRIP_SM;
      }
      else if (tr_2_guard_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM) {
        _31_TRIP_AND_POST_TRIP_SM_state_act_partial =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM;
      }
      else if (tr_3_guard_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM) {
        _31_TRIP_AND_POST_TRIP_SM_state_act_partial =
          SSM_st_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM;
      }
      else {
        _31_TRIP_AND_POST_TRIP_SM_state_act_partial =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM;
      }
      break;
    case SSM_st_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM :
      tr_1_guard_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM =
        outC->radioTrainTrackMessageId == kcg_lit_int64(136);
      if (tr_1_guard_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM) {
        _28_TRIP_AND_POST_TRIP_SM_state_act_partial =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM;
      }
      else {
        _28_TRIP_AND_POST_TRIP_SM_state_act_partial =
          SSM_st_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* _L82=(RBC_Model_Pkg::RBC__ProcessModeAndLevel#3)/ */
  RBC__ProcessModeAndLevel_RBC_Model_Pkg(
    &outC->_L68,
    &outC->Context_RBC__ProcessModeAndLevel_3);
  outC->_L82 = outC->Context_RBC__ProcessModeAndLevel_3.out_mode;
  outC->_L83 = outC->Context_RBC__ProcessModeAndLevel_3.out_modeChanged;
  outC->_L84 = outC->Context_RBC__ProcessModeAndLevel_3.out_level;
  outC->_L85 = outC->Context_RBC__ProcessModeAndLevel_3.out_levelChanged;
  outC->modeChanged = outC->_L83;
  outC->mode = outC->_L82;
  /* TRIP_AND_POST_TRIP_SM: */
  switch (outC->TRIP_AND_POST_TRIP_SM_state_sel) {
    case SSM_st_SEND_MSG_06_TRIP_AND_POST_TRIP_SM :
      outC->TRIP_AND_POST_TRIP_SM_state_act =
        _34_TRIP_AND_POST_TRIP_SM_state_act_partial;
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM :
      outC->TRIP_AND_POST_TRIP_SM_state_act =
        _31_TRIP_AND_POST_TRIP_SM_state_act_partial;
      break;
    case SSM_st_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM :
      outC->TRIP_AND_POST_TRIP_SM_state_act =
        _28_TRIP_AND_POST_TRIP_SM_state_act_partial;
      break;
    case SSM_st_MODE_TRIP_TRIP_AND_POST_TRIP_SM :
      tr_1_guard_MODE_TRIP_TRIP_AND_POST_TRIP_SM = (outC->mode ==
          M_MODE_Post_Trip) & (outC->modeChanged == kcg_true);
      if (tr_1_guard_MODE_TRIP_TRIP_AND_POST_TRIP_SM) {
        _25_TRIP_AND_POST_TRIP_SM_state_act_partial =
          SSM_st_SEND_MSG_06_TRIP_AND_POST_TRIP_SM;
      }
      else {
        _25_TRIP_AND_POST_TRIP_SM_state_act_partial =
          SSM_st_MODE_TRIP_TRIP_AND_POST_TRIP_SM;
      }
      outC->TRIP_AND_POST_TRIP_SM_state_act =
        _25_TRIP_AND_POST_TRIP_SM_state_act_partial;
      break;
    case SSM_st_IDLE_TRIP_AND_POST_TRIP_SM :
      tr_1_guard_IDLE_TRIP_AND_POST_TRIP_SM = (outC->mode == M_MODE_Trip) &
        (outC->modeChanged == kcg_true);
      if (tr_1_guard_IDLE_TRIP_AND_POST_TRIP_SM) {
        TRIP_AND_POST_TRIP_SM_state_act_partial =
          SSM_st_MODE_TRIP_TRIP_AND_POST_TRIP_SM;
      }
      else {
        TRIP_AND_POST_TRIP_SM_state_act_partial = SSM_st_IDLE_TRIP_AND_POST_TRIP_SM;
      }
      outC->TRIP_AND_POST_TRIP_SM_state_act = TRIP_AND_POST_TRIP_SM_state_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* TRIP_AND_POST_TRIP_SM: */
  switch (outC->TRIP_AND_POST_TRIP_SM_state_act) {
    case SSM_st_SEND_MSG_06_TRIP_AND_POST_TRIP_SM :
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM,
        inDataBus);
      kcg_copy_SessionManagement_T(
        &outC->_L12_SEND_MSG_06_TRIP_AND_POST_TRIP_SM,
        &outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session);
      kcg_copy_SessionManagement_T(
        &_21_session_partial,
        &outC->_L12_SEND_MSG_06_TRIP_AND_POST_TRIP_SM);
      kcg_copy_SessionManagement_T(&outC->session, &_21_session_partial);
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM :
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM,
        inDataBus);
      kcg_copy_SessionManagement_T(
        &outC->_L24_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM,
        &outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session);
      kcg_copy_SessionManagement_T(
        &_15_session_partial,
        &outC->_L24_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM);
      kcg_copy_SessionManagement_T(&outC->session, &_15_session_partial);
      break;
    case SSM_st_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM :
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM,
        inDataBus);
      kcg_copy_SessionManagement_T(
        &outC->_L28_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM,
        &outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session);
      kcg_copy_SessionManagement_T(
        &_9_session_partial,
        &outC->_L28_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM);
      kcg_copy_SessionManagement_T(&outC->session, &_9_session_partial);
      break;
    case SSM_st_MODE_TRIP_TRIP_AND_POST_TRIP_SM :
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM,
        inDataBus);
      kcg_copy_SessionManagement_T(
        &outC->_L64_MODE_TRIP_TRIP_AND_POST_TRIP_SM,
        &outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.session);
      kcg_copy_SessionManagement_T(
        &_3_session_partial,
        &outC->_L64_MODE_TRIP_TRIP_AND_POST_TRIP_SM);
      kcg_copy_SessionManagement_T(&outC->session, &_3_session_partial);
      break;
    case SSM_st_IDLE_TRIP_AND_POST_TRIP_SM :
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM,
        inDataBus);
      kcg_copy_SessionManagement_T(
        &outC->_L5_IDLE_TRIP_AND_POST_TRIP_SM,
        &outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.session);
      kcg_copy_SessionManagement_T(
        &session_partial,
        &outC->_L5_IDLE_TRIP_AND_POST_TRIP_SM);
      kcg_copy_SessionManagement_T(&outC->session, &session_partial);
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  kcg_copy_SessionManagement_T(&outC->_L89, &outC->session);
  /* TRIP_AND_POST_TRIP_SM: */
  switch (outC->TRIP_AND_POST_TRIP_SM_state_act) {
    case SSM_st_SEND_MSG_06_TRIP_AND_POST_TRIP_SM :
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM,
        inDataBus);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->_L10_SEND_MSG_06_TRIP_AND_POST_TRIP_SM,
        &outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.messageQueue);
      outC->_L3_SEND_MSG_06_TRIP_AND_POST_TRIP_SM = T_TRAIN_MIN;
      outC->_L2_SEND_MSG_06_TRIP_AND_POST_TRIP_SM = M_ACK_Acknowledgement_required;
      /* TRIP_AND_POST_TRIP_SM:SEND_MSG_06:_L6=(RBC_Session_Pkg::SessionManagement__GetPosData#3)/ */
      SessionManagement__GetPosData_RBC_Session_Pkg(
        &outC->_L12_SEND_MSG_06_TRIP_AND_POST_TRIP_SM,
        &outC->Context_SessionManagement__GetPosData_3);
      kcg_copy_PosData_T(
        &outC->_L6_SEND_MSG_06_TRIP_AND_POST_TRIP_SM,
        &outC->Context_SessionManagement__GetPosData_3.outPositionManagement);
      /* TRIP_AND_POST_TRIP_SM:SEND_MSG_06:_L9=(RBC_Session_Pkg::PosData__Get_NID_LRBG#3)/ */
      PosData__Get_NID_LRBG_RBC_Session_Pkg(
        &outC->_L6_SEND_MSG_06_TRIP_AND_POST_TRIP_SM,
        &outC->Context_PosData__Get_NID_LRBG_3);
      outC->_L9_SEND_MSG_06_TRIP_AND_POST_TRIP_SM =
        outC->Context_PosData__Get_NID_LRBG_3.out_NID_LRBG;
      /* TRIP_AND_POST_TRIP_SM:SEND_MSG_06:_L5=(RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg006_BSL2#3)/ */
      RadioTrackTrainFactory__CreateMsg006_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
        outC->_L3_SEND_MSG_06_TRIP_AND_POST_TRIP_SM,
        outC->_L2_SEND_MSG_06_TRIP_AND_POST_TRIP_SM,
        outC->_L9_SEND_MSG_06_TRIP_AND_POST_TRIP_SM,
        &outC->Context_RadioTrackTrainFactory__CreateMsg006_BSL2_3);
      kcg_copy_CompressedRadioMessage_TM(
        &outC->_L5_SEND_MSG_06_TRIP_AND_POST_TRIP_SM,
        &outC->Context_RadioTrackTrainFactory__CreateMsg006_BSL2_3.outRadioTrackTrainMessage);
      /* TRIP_AND_POST_TRIP_SM:SEND_MSG_06:_L7=(RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__Create#3)/ */
      RadioTrackTrainMessageQueueEntry__Create_RBC_Collections_Pkg(
        &outC->_L5_SEND_MSG_06_TRIP_AND_POST_TRIP_SM,
        &outC->Context_RadioTrackTrainMessageQueueEntry__Create_3);
      kcg_copy_RadioTrackTrainMessageQueueEntry_T(
        &outC->_L7_SEND_MSG_06_TRIP_AND_POST_TRIP_SM,
        &outC->Context_RadioTrackTrainMessageQueueEntry__Create_3.outRadioTrackTrainMessageQueueEntry);
      /* TRIP_AND_POST_TRIP_SM:SEND_MSG_06:_L4=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut#3)/ */
      RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg(
        &outC->_L10_SEND_MSG_06_TRIP_AND_POST_TRIP_SM,
        &outC->_L7_SEND_MSG_06_TRIP_AND_POST_TRIP_SM,
        &outC->Context_RadioTrackTrainMessageQueue__TryPut_3);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->_L4_SEND_MSG_06_TRIP_AND_POST_TRIP_SM,
        &outC->Context_RadioTrackTrainMessageQueue__TryPut_3.outRadioTrackTrainMessageQueue);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_20_messageQueue_partial,
        &outC->_L4_SEND_MSG_06_TRIP_AND_POST_TRIP_SM);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->messageQueue,
        &_20_messageQueue_partial);
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM :
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->_L22_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM,
        &outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.messageQueue);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_14_messageQueue_partial,
        &outC->_L22_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->messageQueue,
        &_14_messageQueue_partial);
      break;
    case SSM_st_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM :
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->_L26_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM,
        &outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_8_messageQueue_partial,
        &outC->_L26_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->messageQueue,
        &_8_messageQueue_partial);
      break;
    case SSM_st_MODE_TRIP_TRIP_AND_POST_TRIP_SM :
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->_L66_MODE_TRIP_TRIP_AND_POST_TRIP_SM,
        &outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_2_messageQueue_partial,
        &outC->_L66_MODE_TRIP_TRIP_AND_POST_TRIP_SM);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->messageQueue,
        &_2_messageQueue_partial);
      break;
    case SSM_st_IDLE_TRIP_AND_POST_TRIP_SM :
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->_L3_IDLE_TRIP_AND_POST_TRIP_SM,
        &outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.messageQueue);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &messageQueue_partial,
        &outC->_L3_IDLE_TRIP_AND_POST_TRIP_SM);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->messageQueue,
        &messageQueue_partial);
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  kcg_copy_RadioTrackTrainMessageQueue_T(&outC->_L90, &outC->messageQueue);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->_L91, &outC->_L93);
  if (kcg_true) {
    kcg_copy_RadioTrackTrainMessageQueue_T(&outC->_L91.messageQueue, &outC->_L90);
  }
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->_L92, &outC->_L91);
  if (kcg_true) {
    kcg_copy_SessionManagement_T(&outC->_L92.session, &outC->_L89);
  }
  kcg_copy_CompressedRadioMessage_TM(
    &outC->_L87,
    inTriggeredRadioTrackTrainMessage);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->outTriggeredRadioTrackTrainMessage,
    &outC->_L87);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->outRadioTrainTrackMessage,
    &outC->_L94);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->outDataBus, &outC->_L92);
  _37_noname = outC->_L85;
  noname = outC->_L84;
  switch (outC->TRIP_AND_POST_TRIP_SM_state_act) {
    case SSM_st_SEND_MSG_06_TRIP_AND_POST_TRIP_SM :
      _19_recognitionMessageWasSentTimestamp_partial =
        last_recognitionMessageWasSentTimestamp;
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* TRIP_AND_POST_TRIP_SM: */
  switch (outC->TRIP_AND_POST_TRIP_SM_state_sel) {
    case SSM_st_SEND_MSG_06_TRIP_AND_POST_TRIP_SM :
      if (tr_1_guard_SEND_MSG_06_TRIP_AND_POST_TRIP_SM) {
        _36_TRIP_AND_POST_TRIP_SM_fired_strong_partial =
          SSM_TR_SEND_MSG_06_MODE_POST_TRIP_1_SEND_MSG_06_TRIP_AND_POST_TRIP_SM;
      }
      else {
        _36_TRIP_AND_POST_TRIP_SM_fired_strong_partial =
          SSM_TR_no_trans_TRIP_AND_POST_TRIP_SM;
      }
      outC->TRIP_AND_POST_TRIP_SM_fired_strong =
        _36_TRIP_AND_POST_TRIP_SM_fired_strong_partial;
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM :
      if (tr_1_guard_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM) {
        _33_TRIP_AND_POST_TRIP_SM_fired_strong_partial =
          SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_IDLE_1_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM;
      }
      else if (tr_2_guard_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM) {
        _33_TRIP_AND_POST_TRIP_SM_fired_strong_partial =
          SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_TRY_PROCESS_ACKNOWLEDGEMENT_2_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM;
      }
      else if (tr_3_guard_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM) {
        _33_TRIP_AND_POST_TRIP_SM_fired_strong_partial =
          SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_MODE_POST_TRIP_3_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM;
      }
      else {
        _33_TRIP_AND_POST_TRIP_SM_fired_strong_partial =
          SSM_TR_no_trans_TRIP_AND_POST_TRIP_SM;
      }
      outC->TRIP_AND_POST_TRIP_SM_fired_strong =
        _33_TRIP_AND_POST_TRIP_SM_fired_strong_partial;
      break;
    case SSM_st_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM :
      if (tr_1_guard_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM) {
        _30_TRIP_AND_POST_TRIP_SM_fired_strong_partial =
          SSM_TR_MODE_POST_TRIP_TRY_PROCESS_ACKNOWLEDGEMENT_1_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM;
      }
      else {
        _30_TRIP_AND_POST_TRIP_SM_fired_strong_partial =
          SSM_TR_no_trans_TRIP_AND_POST_TRIP_SM;
      }
      outC->TRIP_AND_POST_TRIP_SM_fired_strong =
        _30_TRIP_AND_POST_TRIP_SM_fired_strong_partial;
      break;
    case SSM_st_MODE_TRIP_TRIP_AND_POST_TRIP_SM :
      if (tr_1_guard_MODE_TRIP_TRIP_AND_POST_TRIP_SM) {
        _27_TRIP_AND_POST_TRIP_SM_fired_strong_partial =
          SSM_TR_MODE_TRIP_SEND_MSG_06_1_MODE_TRIP_TRIP_AND_POST_TRIP_SM;
      }
      else {
        _27_TRIP_AND_POST_TRIP_SM_fired_strong_partial =
          SSM_TR_no_trans_TRIP_AND_POST_TRIP_SM;
      }
      outC->TRIP_AND_POST_TRIP_SM_fired_strong =
        _27_TRIP_AND_POST_TRIP_SM_fired_strong_partial;
      break;
    case SSM_st_IDLE_TRIP_AND_POST_TRIP_SM :
      if (tr_1_guard_IDLE_TRIP_AND_POST_TRIP_SM) {
        TRIP_AND_POST_TRIP_SM_fired_strong_partial =
          SSM_TR_IDLE_MODE_TRIP_1_IDLE_TRIP_AND_POST_TRIP_SM;
      }
      else {
        TRIP_AND_POST_TRIP_SM_fired_strong_partial =
          SSM_TR_no_trans_TRIP_AND_POST_TRIP_SM;
      }
      outC->TRIP_AND_POST_TRIP_SM_fired_strong =
        TRIP_AND_POST_TRIP_SM_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* TRIP_AND_POST_TRIP_SM: */
  switch (outC->TRIP_AND_POST_TRIP_SM_state_act) {
    case SSM_st_SEND_MSG_06_TRIP_AND_POST_TRIP_SM :
      _24_TRIP_AND_POST_TRIP_SM_fired_partial =
        outC->TRIP_AND_POST_TRIP_SM_fired_strong;
      _23_TRIP_AND_POST_TRIP_SM_reset_nxt_partial = kcg_false;
      _22_TRIP_AND_POST_TRIP_SM_state_nxt_partial =
        SSM_st_SEND_MSG_06_TRIP_AND_POST_TRIP_SM;
      outC->recognitionMessageWasSentTimestamp =
        _19_recognitionMessageWasSentTimestamp_partial;
      outC->TRIP_AND_POST_TRIP_SM_state_nxt =
        _22_TRIP_AND_POST_TRIP_SM_state_nxt_partial;
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM :
      _18_TRIP_AND_POST_TRIP_SM_fired_partial =
        outC->TRIP_AND_POST_TRIP_SM_fired_strong;
      _17_TRIP_AND_POST_TRIP_SM_reset_nxt_partial = kcg_false;
      _16_TRIP_AND_POST_TRIP_SM_state_nxt_partial =
        SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM;
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM,
        inDataBus);
      kcg_copy_CompressedRadioMessage_TM(
        &outC->_L26_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM,
        &outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage);
      outC->_L21_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM =
        last_recognitionMessageWasSentTimestamp;
      /* TRIP_AND_POST_TRIP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L16=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#3)/ */
      RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &outC->_L26_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM,
        &outC->Context_RadioTrackTrainMessage__GetHeader_3);
      kcg_copy_Radio_TrackTrain_Header_T_TM(
        &outC->_L16_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM,
        &outC->Context_RadioTrackTrainMessage__GetHeader_3.outRadioTrackTrainHeader);
      /* TRIP_AND_POST_TRIP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L18=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_T_TRAIN#2)/ */
      RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &outC->_L16_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM,
        &outC->Context_RadioTrackTrainHeader__Get_T_TRAIN_2);
      outC->_L18_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM =
        outC->Context_RadioTrackTrainHeader__Get_T_TRAIN_2.out_T_TRAIN;
      outC->_L13_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM = kcg_lit_int64(6);
      /* TRIP_AND_POST_TRIP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L15=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#3)/ */
      RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &outC->_L16_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM,
        &outC->Context_RadioTrackTrainHeader__Get_NID_MESSAGE_3);
      outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM =
        outC->Context_RadioTrackTrainHeader__Get_NID_MESSAGE_3.out_NID_MESSAGE;
      outC->_L14_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM =
        outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM ==
        outC->_L13_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM;
      /* TRIP_AND_POST_TRIP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L19= */
      if (outC->_L14_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM) {
        outC->_L19_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM =
          outC->_L18_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM;
      }
      else {
        outC->_L19_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM =
          outC->_L21_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM;
      }
      _13_recognitionMessageWasSentTimestamp_partial =
        outC->_L19_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM;
      kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
        &outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM,
        inRadioTrainTrackMessage);
      /* TRIP_AND_POST_TRIP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L1=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#2)/ */
      RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
        &outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM,
        &outC->Context_RadioTrainTrackMessage__GetHeader_2);
      kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
        &outC->_L1_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM,
        &outC->Context_RadioTrainTrackMessage__GetHeader_2.outRadioTrainTrackHeader);
      /* TRIP_AND_POST_TRIP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L8=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_T_TRAIN_Ref#1)/ */
      RadioTrainTrackHeader__Get_T_TRAIN_Ref_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
        &outC->_L1_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM,
        &outC->Context_RadioTrainTrackHeader__Get_T_TRAIN_Ref_1);
      outC->_L8_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM =
        outC->Context_RadioTrainTrackHeader__Get_T_TRAIN_Ref_1.out_T_TRAIN_Ref;
      outC->acknowledgementMessageTimestamp_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM =
        outC->_L8_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM;
      outC->IfBlock1_clock_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM =
        outC->acknowledgementMessageTimestamp_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM ==
        _13_recognitionMessageWasSentTimestamp_partial;
      outC->recognitionMessageWasSentTimestamp =
        _13_recognitionMessageWasSentTimestamp_partial;
      outC->TRIP_AND_POST_TRIP_SM_state_nxt =
        _16_TRIP_AND_POST_TRIP_SM_state_nxt_partial;
      break;
    case SSM_st_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM :
      _12_TRIP_AND_POST_TRIP_SM_fired_partial =
        outC->TRIP_AND_POST_TRIP_SM_fired_strong;
      _11_TRIP_AND_POST_TRIP_SM_reset_nxt_partial = kcg_false;
      _10_TRIP_AND_POST_TRIP_SM_state_nxt_partial =
        SSM_st_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM;
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM,
        inDataBus);
      kcg_copy_CompressedRadioMessage_TM(
        &outC->_L30_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM,
        &outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage);
      /* TRIP_AND_POST_TRIP_SM:MODE_POST_TRIP:_L25=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#5)/ */
      RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &outC->_L30_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM,
        &outC->Context_RadioTrackTrainMessage__GetHeader_5);
      kcg_copy_Radio_TrackTrain_Header_T_TM(
        &outC->_L25_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM,
        &outC->Context_RadioTrackTrainMessage__GetHeader_5.outRadioTrackTrainHeader);
      outC->_L23_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM = kcg_lit_int64(6);
      outC->_L20_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM =
        last_recognitionMessageWasSentTimestamp;
      /* TRIP_AND_POST_TRIP_SM:MODE_POST_TRIP:_L19=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_T_TRAIN#4)/ */
      RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &outC->_L25_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM,
        &outC->Context_RadioTrackTrainHeader__Get_T_TRAIN_4);
      outC->_L19_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM =
        outC->Context_RadioTrackTrainHeader__Get_T_TRAIN_4.out_T_TRAIN;
      /* TRIP_AND_POST_TRIP_SM:MODE_POST_TRIP:_L18=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#5)/ */
      RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &outC->_L25_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM,
        &outC->Context_RadioTrackTrainHeader__Get_NID_MESSAGE_5);
      outC->_L18_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM =
        outC->Context_RadioTrackTrainHeader__Get_NID_MESSAGE_5.out_NID_MESSAGE;
      outC->_L21_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM =
        outC->_L18_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM ==
        outC->_L23_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM;
      /* TRIP_AND_POST_TRIP_SM:MODE_POST_TRIP:_L22= */
      if (outC->_L21_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM) {
        outC->_L22_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM =
          outC->_L19_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM;
      }
      else {
        outC->_L22_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM =
          outC->_L20_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM;
      }
      _7_recognitionMessageWasSentTimestamp_partial =
        outC->_L22_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM;
      outC->recognitionMessageWasSentTimestamp =
        _7_recognitionMessageWasSentTimestamp_partial;
      outC->TRIP_AND_POST_TRIP_SM_state_nxt =
        _10_TRIP_AND_POST_TRIP_SM_state_nxt_partial;
      break;
    case SSM_st_MODE_TRIP_TRIP_AND_POST_TRIP_SM :
      _1_recognitionMessageWasSentTimestamp_partial =
        last_recognitionMessageWasSentTimestamp;
      _6_TRIP_AND_POST_TRIP_SM_fired_partial =
        outC->TRIP_AND_POST_TRIP_SM_fired_strong;
      _5_TRIP_AND_POST_TRIP_SM_reset_nxt_partial = kcg_false;
      _4_TRIP_AND_POST_TRIP_SM_state_nxt_partial =
        SSM_st_MODE_TRIP_TRIP_AND_POST_TRIP_SM;
      outC->recognitionMessageWasSentTimestamp =
        _1_recognitionMessageWasSentTimestamp_partial;
      outC->TRIP_AND_POST_TRIP_SM_state_nxt =
        _4_TRIP_AND_POST_TRIP_SM_state_nxt_partial;
      break;
    case SSM_st_IDLE_TRIP_AND_POST_TRIP_SM :
      recognitionMessageWasSentTimestamp_partial =
        last_recognitionMessageWasSentTimestamp;
      TRIP_AND_POST_TRIP_SM_fired_partial = outC->TRIP_AND_POST_TRIP_SM_fired_strong;
      TRIP_AND_POST_TRIP_SM_reset_nxt_partial = kcg_false;
      TRIP_AND_POST_TRIP_SM_state_nxt_partial = SSM_st_IDLE_TRIP_AND_POST_TRIP_SM;
      outC->recognitionMessageWasSentTimestamp =
        recognitionMessageWasSentTimestamp_partial;
      outC->TRIP_AND_POST_TRIP_SM_state_nxt = TRIP_AND_POST_TRIP_SM_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  TRIP_AND_POST_TRIP_SM_reset_sel = outC->TRIP_AND_POST_TRIP_SM_reset_nxt;
  /* TRIP_AND_POST_TRIP_SM: */
  switch (outC->TRIP_AND_POST_TRIP_SM_state_act) {
    case SSM_st_SEND_MSG_06_TRIP_AND_POST_TRIP_SM :
      outC->TRIP_AND_POST_TRIP_SM_reset_nxt =
        _23_TRIP_AND_POST_TRIP_SM_reset_nxt_partial;
      outC->TRIP_AND_POST_TRIP_SM_fired = _24_TRIP_AND_POST_TRIP_SM_fired_partial;
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM :
      outC->TRIP_AND_POST_TRIP_SM_reset_nxt =
        _17_TRIP_AND_POST_TRIP_SM_reset_nxt_partial;
      outC->TRIP_AND_POST_TRIP_SM_fired = _18_TRIP_AND_POST_TRIP_SM_fired_partial;
      break;
    case SSM_st_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM :
      outC->TRIP_AND_POST_TRIP_SM_reset_nxt =
        _11_TRIP_AND_POST_TRIP_SM_reset_nxt_partial;
      outC->TRIP_AND_POST_TRIP_SM_fired = _12_TRIP_AND_POST_TRIP_SM_fired_partial;
      break;
    case SSM_st_MODE_TRIP_TRIP_AND_POST_TRIP_SM :
      outC->TRIP_AND_POST_TRIP_SM_reset_nxt =
        _5_TRIP_AND_POST_TRIP_SM_reset_nxt_partial;
      outC->TRIP_AND_POST_TRIP_SM_fired = _6_TRIP_AND_POST_TRIP_SM_fired_partial;
      break;
    case SSM_st_IDLE_TRIP_AND_POST_TRIP_SM :
      outC->TRIP_AND_POST_TRIP_SM_reset_nxt = TRIP_AND_POST_TRIP_SM_reset_nxt_partial;
      outC->TRIP_AND_POST_TRIP_SM_fired = TRIP_AND_POST_TRIP_SM_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->TRIP_AND_POST_TRIP_SM_state_sel) {
    case SSM_st_SEND_MSG_06_TRIP_AND_POST_TRIP_SM :
      _35_TRIP_AND_POST_TRIP_SM_reset_act_partial =
        tr_1_guard_SEND_MSG_06_TRIP_AND_POST_TRIP_SM;
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM :
      if (tr_1_guard_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM) {
        _32_TRIP_AND_POST_TRIP_SM_reset_act_partial = kcg_true;
      }
      else if (tr_2_guard_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM) {
        _32_TRIP_AND_POST_TRIP_SM_reset_act_partial = kcg_true;
      }
      else {
        _32_TRIP_AND_POST_TRIP_SM_reset_act_partial =
          tr_3_guard_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM;
      }
      break;
    case SSM_st_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM :
      _29_TRIP_AND_POST_TRIP_SM_reset_act_partial =
        tr_1_guard_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM;
      break;
    case SSM_st_MODE_TRIP_TRIP_AND_POST_TRIP_SM :
      _26_TRIP_AND_POST_TRIP_SM_reset_act_partial =
        tr_1_guard_MODE_TRIP_TRIP_AND_POST_TRIP_SM;
      break;
    case SSM_st_IDLE_TRIP_AND_POST_TRIP_SM :
      TRIP_AND_POST_TRIP_SM_reset_act_partial = tr_1_guard_IDLE_TRIP_AND_POST_TRIP_SM;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  TRIP_AND_POST_TRIP_SM_reset_prv = outC->TRIP_AND_POST_TRIP_SM_reset_act;
  /* TRIP_AND_POST_TRIP_SM: */
  switch (outC->TRIP_AND_POST_TRIP_SM_state_sel) {
    case SSM_st_SEND_MSG_06_TRIP_AND_POST_TRIP_SM :
      outC->TRIP_AND_POST_TRIP_SM_reset_act =
        _35_TRIP_AND_POST_TRIP_SM_reset_act_partial;
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM :
      outC->TRIP_AND_POST_TRIP_SM_reset_act =
        _32_TRIP_AND_POST_TRIP_SM_reset_act_partial;
      break;
    case SSM_st_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM :
      outC->TRIP_AND_POST_TRIP_SM_reset_act =
        _29_TRIP_AND_POST_TRIP_SM_reset_act_partial;
      break;
    case SSM_st_MODE_TRIP_TRIP_AND_POST_TRIP_SM :
      outC->TRIP_AND_POST_TRIP_SM_reset_act =
        _26_TRIP_AND_POST_TRIP_SM_reset_act_partial;
      break;
    case SSM_st_IDLE_TRIP_AND_POST_TRIP_SM :
      outC->TRIP_AND_POST_TRIP_SM_reset_act = TRIP_AND_POST_TRIP_SM_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* TRIP_AND_POST_TRIP_SM: */
  switch (outC->TRIP_AND_POST_TRIP_SM_state_act) {
    case SSM_st_SEND_MSG_06_TRIP_AND_POST_TRIP_SM :
      outC->validAck = kcg_false;
      outC->invalidAck = kcg_false;
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM :
      /* TRIP_AND_POST_TRIP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:IfBlock1: */
      if (outC->IfBlock1_clock_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM) {
        outC->validAck = kcg_true;
        outC->invalidAck = kcg_false;
      }
      else {
        outC->validAck = kcg_false;
        outC->invalidAck = kcg_true;
      }
      break;
    case SSM_st_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM :
      outC->validAck = kcg_false;
      outC->invalidAck = kcg_false;
      break;
    case SSM_st_MODE_TRIP_TRIP_AND_POST_TRIP_SM :
      outC->validAck = kcg_false;
      outC->invalidAck = kcg_false;
      break;
    case SSM_st_IDLE_TRIP_AND_POST_TRIP_SM :
      outC->validAck = kcg_false;
      outC->invalidAck = kcg_false;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void RBC__ProcessTripAndPostTrip_init_RBC_Model_Pkg(
  outC_RBC__ProcessTripAndPostTrip_RBC_Model_Pkg *outC)
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
  static kcg_size idx208;
  static kcg_size idx209;
  static kcg_size idx210;
  static kcg_size idx211;

  outC->_L87.Header.radioDevice = kcg_lit_int64(0);
  outC->_L87.Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L87.Header.nid_message = kcg_lit_int64(0);
  outC->_L87.Header.t_train = kcg_lit_int64(0);
  outC->_L87.Header.m_ack = kcg_lit_int64(0);
  outC->_L87.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L87.Header.t_train_reference = kcg_lit_int64(0);
  outC->_L87.Header.nid_em = kcg_lit_int64(0);
  outC->_L87.Header.q_scale = kcg_lit_int64(0);
  outC->_L87.Header.d_sr = kcg_lit_int64(0);
  outC->_L87.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L87.Header.d_ref = kcg_lit_int64(0);
  outC->_L87.Header.q_dir = kcg_lit_int64(0);
  outC->_L87.Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L87.Header.m_version = kcg_lit_int64(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L87.Messages.PacketHeaders[idx].nid_packet = kcg_lit_int64(0);
    outC->_L87.Messages.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L87.Messages.PacketHeaders[idx].valid = kcg_true;
    outC->_L87.Messages.PacketHeaders[idx].startAddress = kcg_lit_int64(0);
    outC->_L87.Messages.PacketHeaders[idx].endAddress = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L87.Messages.PacketData[idx1] = kcg_lit_int64(0);
  }
  outC->_L89.m_TrainData.nid_engine = kcg_lit_int64(0);
  outC->_L89.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 1; idx3++) {
    outC->_L89.m_TrainData.m_OnboardPhoneNumbers[idx3].valid = kcg_true;
    for (idx2 = 0; idx2 < 15; idx2++) {
      outC->_L89.m_TrainData.m_OnboardPhoneNumbers[idx3].telephoneNumber[idx2] =
        kcg_lit_int64(0);
    }
  }
  outC->_L89.m_TrainData.t_train_ref = kcg_lit_int64(0);
  outC->_L89.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L89.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L89.m_TrainData.l_train = kcg_lit_int64(0);
  outC->_L89.m_TrainData.v_maxtrain = kcg_lit_int64(0);
  outC->_L89.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L89.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L89.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L89.m_TrainData.n_axle = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 4; idx4++) {
    outC->_L89.m_TrainData.m_TractionIdentities[idx4].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L89.m_TrainData.m_TractionIdentities[idx4].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 5; idx5++) {
    outC->_L89.m_TrainData.m_NationalSystemIdentities[idx5] = kcg_lit_int64(0);
  }
  outC->_L89.m_TrainData.nid_operational = kcg_lit_int64(0);
  outC->_L89.m_PosData.nid_lrbg = kcg_lit_int64(0);
  outC->_L89.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L89.m_PosData.d_lrbg = kcg_lit_int64(0);
  outC->_L89.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L89.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L89.m_PosData.l_doubtover = kcg_lit_int64(0);
  outC->_L89.m_PosData.l_doubtunder = kcg_lit_int64(0);
  outC->_L89.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L89.m_PosData.l_trainint = kcg_lit_int64(0);
  outC->_L89.m_PosData.v_train = kcg_lit_int64(0);
  outC->_L89.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L89.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L89.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L89.m_PosData.nid_ntc = kcg_lit_int64(0);
  outC->_L89.m_PosData.nid_prvlrbg = kcg_lit_int64(0);
  for (idx8 = 0; idx8 < 8; idx8++) {
    outC->_L90.m_Entries[idx8].m_IsValid = kcg_true;
    outC->_L90.m_Entries[idx8].m_Entry.Header.radioDevice = kcg_lit_int64(0);
    outC->_L90.m_Entries[idx8].m_Entry.Header.receivedSystemTime = kcg_lit_int64(0);
    outC->_L90.m_Entries[idx8].m_Entry.Header.nid_message = kcg_lit_int64(0);
    outC->_L90.m_Entries[idx8].m_Entry.Header.t_train = kcg_lit_int64(0);
    outC->_L90.m_Entries[idx8].m_Entry.Header.m_ack = kcg_lit_int64(0);
    outC->_L90.m_Entries[idx8].m_Entry.Header.nid_lrbg = kcg_lit_int64(0);
    outC->_L90.m_Entries[idx8].m_Entry.Header.t_train_reference = kcg_lit_int64(0);
    outC->_L90.m_Entries[idx8].m_Entry.Header.nid_em = kcg_lit_int64(0);
    outC->_L90.m_Entries[idx8].m_Entry.Header.q_scale = kcg_lit_int64(0);
    outC->_L90.m_Entries[idx8].m_Entry.Header.d_sr = kcg_lit_int64(0);
    outC->_L90.m_Entries[idx8].m_Entry.Header.t_sh_rqst = kcg_lit_int64(0);
    outC->_L90.m_Entries[idx8].m_Entry.Header.d_ref = kcg_lit_int64(0);
    outC->_L90.m_Entries[idx8].m_Entry.Header.q_dir = kcg_lit_int64(0);
    outC->_L90.m_Entries[idx8].m_Entry.Header.d_emergencystop = kcg_lit_int64(0);
    outC->_L90.m_Entries[idx8].m_Entry.Header.m_version = kcg_lit_int64(0);
    for (idx6 = 0; idx6 < 30; idx6++) {
      outC->_L90.m_Entries[idx8].m_Entry.Messages.PacketHeaders[idx6].nid_packet =
        kcg_lit_int64(0);
      outC->_L90.m_Entries[idx8].m_Entry.Messages.PacketHeaders[idx6].q_dir =
        Q_DIR_Reverse;
      outC->_L90.m_Entries[idx8].m_Entry.Messages.PacketHeaders[idx6].valid =
        kcg_true;
      outC->_L90.m_Entries[idx8].m_Entry.Messages.PacketHeaders[idx6].startAddress =
        kcg_lit_int64(0);
      outC->_L90.m_Entries[idx8].m_Entry.Messages.PacketHeaders[idx6].endAddress =
        kcg_lit_int64(0);
    }
    for (idx7 = 0; idx7 < 500; idx7++) {
      outC->_L90.m_Entries[idx8].m_Entry.Messages.PacketData[idx7] = kcg_lit_int64(0);
    }
  }
  outC->_L91.session.m_TrainData.nid_engine = kcg_lit_int64(0);
  outC->_L91.session.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int64(0);
  for (idx10 = 0; idx10 < 1; idx10++) {
    outC->_L91.session.m_TrainData.m_OnboardPhoneNumbers[idx10].valid = kcg_true;
    for (idx9 = 0; idx9 < 15; idx9++) {
      outC->_L91.session.m_TrainData.m_OnboardPhoneNumbers[idx10].telephoneNumber[idx9] =
        kcg_lit_int64(0);
    }
  }
  outC->_L91.session.m_TrainData.t_train_ref = kcg_lit_int64(0);
  outC->_L91.session.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L91.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L91.session.m_TrainData.l_train = kcg_lit_int64(0);
  outC->_L91.session.m_TrainData.v_maxtrain = kcg_lit_int64(0);
  outC->_L91.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L91.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L91.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L91.session.m_TrainData.n_axle = kcg_lit_int64(0);
  for (idx11 = 0; idx11 < 4; idx11++) {
    outC->_L91.session.m_TrainData.m_TractionIdentities[idx11].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L91.session.m_TrainData.m_TractionIdentities[idx11].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx12 = 0; idx12 < 5; idx12++) {
    outC->_L91.session.m_TrainData.m_NationalSystemIdentities[idx12] =
      kcg_lit_int64(0);
  }
  outC->_L91.session.m_TrainData.nid_operational = kcg_lit_int64(0);
  outC->_L91.session.m_PosData.nid_lrbg = kcg_lit_int64(0);
  outC->_L91.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L91.session.m_PosData.d_lrbg = kcg_lit_int64(0);
  outC->_L91.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L91.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L91.session.m_PosData.l_doubtover = kcg_lit_int64(0);
  outC->_L91.session.m_PosData.l_doubtunder = kcg_lit_int64(0);
  outC->_L91.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L91.session.m_PosData.l_trainint = kcg_lit_int64(0);
  outC->_L91.session.m_PosData.v_train = kcg_lit_int64(0);
  outC->_L91.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L91.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L91.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L91.session.m_PosData.nid_ntc = kcg_lit_int64(0);
  outC->_L91.session.m_PosData.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L91.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L91.config.m_NationalParams.nid_c = kcg_lit_int64(0);
  outC->_L91.config.m_NationalParams.v_nvshunt = kcg_lit_int64(0);
  outC->_L91.config.m_NationalParams.v_nvstff = kcg_lit_int64(0);
  outC->_L91.config.m_NationalParams.v_nvonsight = kcg_lit_int64(0);
  outC->_L91.config.m_NationalParams.v_nvunfit = kcg_lit_int64(0);
  outC->_L91.config.m_NationalParams.v_nvrel = kcg_lit_int64(0);
  outC->_L91.config.m_NationalParams.t_nvcontact = kcg_lit_int64(0);
  outC->_L91.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L91.config.m_MAReqParams.t_mar = kcg_lit_int64(0);
  outC->_L91.config.m_MAReqParams.t_timeoutrqst = kcg_lit_int64(0);
  outC->_L91.config.m_MAReqParams.t_cycrqst = kcg_lit_int64(0);
  outC->_L91.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L91.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L91.config.m_PosRepParams.t_cycloc = kcg_lit_int64(0);
  outC->_L91.config.m_PosRepParams.d_cycloc = kcg_lit_int64(0);
  outC->_L91.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L91.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx13 = 0; idx13 < 32; idx13++) {
    outC->_L91.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx13].d_loc =
      kcg_lit_int64(0);
    outC->_L91.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx13].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx14 = 0; idx14 < 16; idx14++) {
    outC->_L91.diagnostic[idx14].valid = kcg_true;
    outC->_L91.diagnostic[idx14].count = kcg_lit_int64(0);
    outC->_L91.diagnostic[idx14].timestamp = kcg_lit_int64(0);
    outC->_L91.diagnostic[idx14].diagType = DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L91.diagnostic[idx14].diagSrc = DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L91.diagnostic[idx14].diagText = DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx17 = 0; idx17 < 8; idx17++) {
    outC->_L91.messageQueue.m_Entries[idx17].m_IsValid = kcg_true;
    outC->_L91.messageQueue.m_Entries[idx17].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L91.messageQueue.m_Entries[idx17].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L91.messageQueue.m_Entries[idx17].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L91.messageQueue.m_Entries[idx17].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L91.messageQueue.m_Entries[idx17].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L91.messageQueue.m_Entries[idx17].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L91.messageQueue.m_Entries[idx17].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L91.messageQueue.m_Entries[idx17].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L91.messageQueue.m_Entries[idx17].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L91.messageQueue.m_Entries[idx17].m_Entry.Header.d_sr = kcg_lit_int64(0);
    outC->_L91.messageQueue.m_Entries[idx17].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L91.messageQueue.m_Entries[idx17].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L91.messageQueue.m_Entries[idx17].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L91.messageQueue.m_Entries[idx17].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L91.messageQueue.m_Entries[idx17].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx15 = 0; idx15 < 30; idx15++) {
      outC->_L91.messageQueue.m_Entries[idx17].m_Entry.Messages.PacketHeaders[idx15].nid_packet =
        kcg_lit_int64(0);
      outC->_L91.messageQueue.m_Entries[idx17].m_Entry.Messages.PacketHeaders[idx15].q_dir =
        Q_DIR_Reverse;
      outC->_L91.messageQueue.m_Entries[idx17].m_Entry.Messages.PacketHeaders[idx15].valid =
        kcg_true;
      outC->_L91.messageQueue.m_Entries[idx17].m_Entry.Messages.PacketHeaders[idx15].startAddress =
        kcg_lit_int64(0);
      outC->_L91.messageQueue.m_Entries[idx17].m_Entry.Messages.PacketHeaders[idx15].endAddress =
        kcg_lit_int64(0);
    }
    for (idx16 = 0; idx16 < 500; idx16++) {
      outC->_L91.messageQueue.m_Entries[idx17].m_Entry.Messages.PacketData[idx16] =
        kcg_lit_int64(0);
    }
  }
  outC->_L91.clockk.m_Value = kcg_lit_int64(0);
  outC->_L91.lastSentTrackTrainMessage.Header.radioDevice = kcg_lit_int64(0);
  outC->_L91.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L91.lastSentTrackTrainMessage.Header.nid_message = kcg_lit_int64(0);
  outC->_L91.lastSentTrackTrainMessage.Header.t_train = kcg_lit_int64(0);
  outC->_L91.lastSentTrackTrainMessage.Header.m_ack = kcg_lit_int64(0);
  outC->_L91.lastSentTrackTrainMessage.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L91.lastSentTrackTrainMessage.Header.t_train_reference = kcg_lit_int64(
      0);
  outC->_L91.lastSentTrackTrainMessage.Header.nid_em = kcg_lit_int64(0);
  outC->_L91.lastSentTrackTrainMessage.Header.q_scale = kcg_lit_int64(0);
  outC->_L91.lastSentTrackTrainMessage.Header.d_sr = kcg_lit_int64(0);
  outC->_L91.lastSentTrackTrainMessage.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L91.lastSentTrackTrainMessage.Header.d_ref = kcg_lit_int64(0);
  outC->_L91.lastSentTrackTrainMessage.Header.q_dir = kcg_lit_int64(0);
  outC->_L91.lastSentTrackTrainMessage.Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L91.lastSentTrackTrainMessage.Header.m_version = kcg_lit_int64(0);
  for (idx18 = 0; idx18 < 30; idx18++) {
    outC->_L91.lastSentTrackTrainMessage.Messages.PacketHeaders[idx18].nid_packet =
      kcg_lit_int64(0);
    outC->_L91.lastSentTrackTrainMessage.Messages.PacketHeaders[idx18].q_dir =
      Q_DIR_Reverse;
    outC->_L91.lastSentTrackTrainMessage.Messages.PacketHeaders[idx18].valid =
      kcg_true;
    outC->_L91.lastSentTrackTrainMessage.Messages.PacketHeaders[idx18].startAddress =
      kcg_lit_int64(0);
    outC->_L91.lastSentTrackTrainMessage.Messages.PacketHeaders[idx18].endAddress =
      kcg_lit_int64(0);
  }
  for (idx19 = 0; idx19 < 500; idx19++) {
    outC->_L91.lastSentTrackTrainMessage.Messages.PacketData[idx19] =
      kcg_lit_int64(0);
  }
  outC->_L92.session.m_TrainData.nid_engine = kcg_lit_int64(0);
  outC->_L92.session.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int64(0);
  for (idx21 = 0; idx21 < 1; idx21++) {
    outC->_L92.session.m_TrainData.m_OnboardPhoneNumbers[idx21].valid = kcg_true;
    for (idx20 = 0; idx20 < 15; idx20++) {
      outC->_L92.session.m_TrainData.m_OnboardPhoneNumbers[idx21].telephoneNumber[idx20] =
        kcg_lit_int64(0);
    }
  }
  outC->_L92.session.m_TrainData.t_train_ref = kcg_lit_int64(0);
  outC->_L92.session.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L92.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L92.session.m_TrainData.l_train = kcg_lit_int64(0);
  outC->_L92.session.m_TrainData.v_maxtrain = kcg_lit_int64(0);
  outC->_L92.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L92.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L92.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L92.session.m_TrainData.n_axle = kcg_lit_int64(0);
  for (idx22 = 0; idx22 < 4; idx22++) {
    outC->_L92.session.m_TrainData.m_TractionIdentities[idx22].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L92.session.m_TrainData.m_TractionIdentities[idx22].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx23 = 0; idx23 < 5; idx23++) {
    outC->_L92.session.m_TrainData.m_NationalSystemIdentities[idx23] =
      kcg_lit_int64(0);
  }
  outC->_L92.session.m_TrainData.nid_operational = kcg_lit_int64(0);
  outC->_L92.session.m_PosData.nid_lrbg = kcg_lit_int64(0);
  outC->_L92.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L92.session.m_PosData.d_lrbg = kcg_lit_int64(0);
  outC->_L92.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L92.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L92.session.m_PosData.l_doubtover = kcg_lit_int64(0);
  outC->_L92.session.m_PosData.l_doubtunder = kcg_lit_int64(0);
  outC->_L92.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L92.session.m_PosData.l_trainint = kcg_lit_int64(0);
  outC->_L92.session.m_PosData.v_train = kcg_lit_int64(0);
  outC->_L92.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L92.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L92.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L92.session.m_PosData.nid_ntc = kcg_lit_int64(0);
  outC->_L92.session.m_PosData.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L92.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L92.config.m_NationalParams.nid_c = kcg_lit_int64(0);
  outC->_L92.config.m_NationalParams.v_nvshunt = kcg_lit_int64(0);
  outC->_L92.config.m_NationalParams.v_nvstff = kcg_lit_int64(0);
  outC->_L92.config.m_NationalParams.v_nvonsight = kcg_lit_int64(0);
  outC->_L92.config.m_NationalParams.v_nvunfit = kcg_lit_int64(0);
  outC->_L92.config.m_NationalParams.v_nvrel = kcg_lit_int64(0);
  outC->_L92.config.m_NationalParams.t_nvcontact = kcg_lit_int64(0);
  outC->_L92.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L92.config.m_MAReqParams.t_mar = kcg_lit_int64(0);
  outC->_L92.config.m_MAReqParams.t_timeoutrqst = kcg_lit_int64(0);
  outC->_L92.config.m_MAReqParams.t_cycrqst = kcg_lit_int64(0);
  outC->_L92.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L92.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L92.config.m_PosRepParams.t_cycloc = kcg_lit_int64(0);
  outC->_L92.config.m_PosRepParams.d_cycloc = kcg_lit_int64(0);
  outC->_L92.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L92.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx24 = 0; idx24 < 32; idx24++) {
    outC->_L92.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx24].d_loc =
      kcg_lit_int64(0);
    outC->_L92.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx24].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx25 = 0; idx25 < 16; idx25++) {
    outC->_L92.diagnostic[idx25].valid = kcg_true;
    outC->_L92.diagnostic[idx25].count = kcg_lit_int64(0);
    outC->_L92.diagnostic[idx25].timestamp = kcg_lit_int64(0);
    outC->_L92.diagnostic[idx25].diagType = DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L92.diagnostic[idx25].diagSrc = DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L92.diagnostic[idx25].diagText = DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx28 = 0; idx28 < 8; idx28++) {
    outC->_L92.messageQueue.m_Entries[idx28].m_IsValid = kcg_true;
    outC->_L92.messageQueue.m_Entries[idx28].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L92.messageQueue.m_Entries[idx28].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L92.messageQueue.m_Entries[idx28].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L92.messageQueue.m_Entries[idx28].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L92.messageQueue.m_Entries[idx28].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L92.messageQueue.m_Entries[idx28].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L92.messageQueue.m_Entries[idx28].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L92.messageQueue.m_Entries[idx28].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L92.messageQueue.m_Entries[idx28].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L92.messageQueue.m_Entries[idx28].m_Entry.Header.d_sr = kcg_lit_int64(0);
    outC->_L92.messageQueue.m_Entries[idx28].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L92.messageQueue.m_Entries[idx28].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L92.messageQueue.m_Entries[idx28].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L92.messageQueue.m_Entries[idx28].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L92.messageQueue.m_Entries[idx28].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx26 = 0; idx26 < 30; idx26++) {
      outC->_L92.messageQueue.m_Entries[idx28].m_Entry.Messages.PacketHeaders[idx26].nid_packet =
        kcg_lit_int64(0);
      outC->_L92.messageQueue.m_Entries[idx28].m_Entry.Messages.PacketHeaders[idx26].q_dir =
        Q_DIR_Reverse;
      outC->_L92.messageQueue.m_Entries[idx28].m_Entry.Messages.PacketHeaders[idx26].valid =
        kcg_true;
      outC->_L92.messageQueue.m_Entries[idx28].m_Entry.Messages.PacketHeaders[idx26].startAddress =
        kcg_lit_int64(0);
      outC->_L92.messageQueue.m_Entries[idx28].m_Entry.Messages.PacketHeaders[idx26].endAddress =
        kcg_lit_int64(0);
    }
    for (idx27 = 0; idx27 < 500; idx27++) {
      outC->_L92.messageQueue.m_Entries[idx28].m_Entry.Messages.PacketData[idx27] =
        kcg_lit_int64(0);
    }
  }
  outC->_L92.clockk.m_Value = kcg_lit_int64(0);
  outC->_L92.lastSentTrackTrainMessage.Header.radioDevice = kcg_lit_int64(0);
  outC->_L92.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L92.lastSentTrackTrainMessage.Header.nid_message = kcg_lit_int64(0);
  outC->_L92.lastSentTrackTrainMessage.Header.t_train = kcg_lit_int64(0);
  outC->_L92.lastSentTrackTrainMessage.Header.m_ack = kcg_lit_int64(0);
  outC->_L92.lastSentTrackTrainMessage.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L92.lastSentTrackTrainMessage.Header.t_train_reference = kcg_lit_int64(
      0);
  outC->_L92.lastSentTrackTrainMessage.Header.nid_em = kcg_lit_int64(0);
  outC->_L92.lastSentTrackTrainMessage.Header.q_scale = kcg_lit_int64(0);
  outC->_L92.lastSentTrackTrainMessage.Header.d_sr = kcg_lit_int64(0);
  outC->_L92.lastSentTrackTrainMessage.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L92.lastSentTrackTrainMessage.Header.d_ref = kcg_lit_int64(0);
  outC->_L92.lastSentTrackTrainMessage.Header.q_dir = kcg_lit_int64(0);
  outC->_L92.lastSentTrackTrainMessage.Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L92.lastSentTrackTrainMessage.Header.m_version = kcg_lit_int64(0);
  for (idx29 = 0; idx29 < 30; idx29++) {
    outC->_L92.lastSentTrackTrainMessage.Messages.PacketHeaders[idx29].nid_packet =
      kcg_lit_int64(0);
    outC->_L92.lastSentTrackTrainMessage.Messages.PacketHeaders[idx29].q_dir =
      Q_DIR_Reverse;
    outC->_L92.lastSentTrackTrainMessage.Messages.PacketHeaders[idx29].valid =
      kcg_true;
    outC->_L92.lastSentTrackTrainMessage.Messages.PacketHeaders[idx29].startAddress =
      kcg_lit_int64(0);
    outC->_L92.lastSentTrackTrainMessage.Messages.PacketHeaders[idx29].endAddress =
      kcg_lit_int64(0);
  }
  for (idx30 = 0; idx30 < 500; idx30++) {
    outC->_L92.lastSentTrackTrainMessage.Messages.PacketData[idx30] =
      kcg_lit_int64(0);
  }
  outC->_L93.session.m_TrainData.nid_engine = kcg_lit_int64(0);
  outC->_L93.session.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int64(0);
  for (idx32 = 0; idx32 < 1; idx32++) {
    outC->_L93.session.m_TrainData.m_OnboardPhoneNumbers[idx32].valid = kcg_true;
    for (idx31 = 0; idx31 < 15; idx31++) {
      outC->_L93.session.m_TrainData.m_OnboardPhoneNumbers[idx32].telephoneNumber[idx31] =
        kcg_lit_int64(0);
    }
  }
  outC->_L93.session.m_TrainData.t_train_ref = kcg_lit_int64(0);
  outC->_L93.session.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L93.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L93.session.m_TrainData.l_train = kcg_lit_int64(0);
  outC->_L93.session.m_TrainData.v_maxtrain = kcg_lit_int64(0);
  outC->_L93.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L93.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L93.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L93.session.m_TrainData.n_axle = kcg_lit_int64(0);
  for (idx33 = 0; idx33 < 4; idx33++) {
    outC->_L93.session.m_TrainData.m_TractionIdentities[idx33].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L93.session.m_TrainData.m_TractionIdentities[idx33].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx34 = 0; idx34 < 5; idx34++) {
    outC->_L93.session.m_TrainData.m_NationalSystemIdentities[idx34] =
      kcg_lit_int64(0);
  }
  outC->_L93.session.m_TrainData.nid_operational = kcg_lit_int64(0);
  outC->_L93.session.m_PosData.nid_lrbg = kcg_lit_int64(0);
  outC->_L93.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L93.session.m_PosData.d_lrbg = kcg_lit_int64(0);
  outC->_L93.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L93.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L93.session.m_PosData.l_doubtover = kcg_lit_int64(0);
  outC->_L93.session.m_PosData.l_doubtunder = kcg_lit_int64(0);
  outC->_L93.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L93.session.m_PosData.l_trainint = kcg_lit_int64(0);
  outC->_L93.session.m_PosData.v_train = kcg_lit_int64(0);
  outC->_L93.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L93.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L93.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L93.session.m_PosData.nid_ntc = kcg_lit_int64(0);
  outC->_L93.session.m_PosData.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L93.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L93.config.m_NationalParams.nid_c = kcg_lit_int64(0);
  outC->_L93.config.m_NationalParams.v_nvshunt = kcg_lit_int64(0);
  outC->_L93.config.m_NationalParams.v_nvstff = kcg_lit_int64(0);
  outC->_L93.config.m_NationalParams.v_nvonsight = kcg_lit_int64(0);
  outC->_L93.config.m_NationalParams.v_nvunfit = kcg_lit_int64(0);
  outC->_L93.config.m_NationalParams.v_nvrel = kcg_lit_int64(0);
  outC->_L93.config.m_NationalParams.t_nvcontact = kcg_lit_int64(0);
  outC->_L93.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L93.config.m_MAReqParams.t_mar = kcg_lit_int64(0);
  outC->_L93.config.m_MAReqParams.t_timeoutrqst = kcg_lit_int64(0);
  outC->_L93.config.m_MAReqParams.t_cycrqst = kcg_lit_int64(0);
  outC->_L93.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L93.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L93.config.m_PosRepParams.t_cycloc = kcg_lit_int64(0);
  outC->_L93.config.m_PosRepParams.d_cycloc = kcg_lit_int64(0);
  outC->_L93.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L93.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx35 = 0; idx35 < 32; idx35++) {
    outC->_L93.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx35].d_loc =
      kcg_lit_int64(0);
    outC->_L93.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx35].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx36 = 0; idx36 < 16; idx36++) {
    outC->_L93.diagnostic[idx36].valid = kcg_true;
    outC->_L93.diagnostic[idx36].count = kcg_lit_int64(0);
    outC->_L93.diagnostic[idx36].timestamp = kcg_lit_int64(0);
    outC->_L93.diagnostic[idx36].diagType = DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L93.diagnostic[idx36].diagSrc = DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L93.diagnostic[idx36].diagText = DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx39 = 0; idx39 < 8; idx39++) {
    outC->_L93.messageQueue.m_Entries[idx39].m_IsValid = kcg_true;
    outC->_L93.messageQueue.m_Entries[idx39].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L93.messageQueue.m_Entries[idx39].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L93.messageQueue.m_Entries[idx39].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L93.messageQueue.m_Entries[idx39].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L93.messageQueue.m_Entries[idx39].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L93.messageQueue.m_Entries[idx39].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L93.messageQueue.m_Entries[idx39].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L93.messageQueue.m_Entries[idx39].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L93.messageQueue.m_Entries[idx39].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L93.messageQueue.m_Entries[idx39].m_Entry.Header.d_sr = kcg_lit_int64(0);
    outC->_L93.messageQueue.m_Entries[idx39].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L93.messageQueue.m_Entries[idx39].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L93.messageQueue.m_Entries[idx39].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L93.messageQueue.m_Entries[idx39].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L93.messageQueue.m_Entries[idx39].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx37 = 0; idx37 < 30; idx37++) {
      outC->_L93.messageQueue.m_Entries[idx39].m_Entry.Messages.PacketHeaders[idx37].nid_packet =
        kcg_lit_int64(0);
      outC->_L93.messageQueue.m_Entries[idx39].m_Entry.Messages.PacketHeaders[idx37].q_dir =
        Q_DIR_Reverse;
      outC->_L93.messageQueue.m_Entries[idx39].m_Entry.Messages.PacketHeaders[idx37].valid =
        kcg_true;
      outC->_L93.messageQueue.m_Entries[idx39].m_Entry.Messages.PacketHeaders[idx37].startAddress =
        kcg_lit_int64(0);
      outC->_L93.messageQueue.m_Entries[idx39].m_Entry.Messages.PacketHeaders[idx37].endAddress =
        kcg_lit_int64(0);
    }
    for (idx38 = 0; idx38 < 500; idx38++) {
      outC->_L93.messageQueue.m_Entries[idx39].m_Entry.Messages.PacketData[idx38] =
        kcg_lit_int64(0);
    }
  }
  outC->_L93.clockk.m_Value = kcg_lit_int64(0);
  outC->_L93.lastSentTrackTrainMessage.Header.radioDevice = kcg_lit_int64(0);
  outC->_L93.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L93.lastSentTrackTrainMessage.Header.nid_message = kcg_lit_int64(0);
  outC->_L93.lastSentTrackTrainMessage.Header.t_train = kcg_lit_int64(0);
  outC->_L93.lastSentTrackTrainMessage.Header.m_ack = kcg_lit_int64(0);
  outC->_L93.lastSentTrackTrainMessage.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L93.lastSentTrackTrainMessage.Header.t_train_reference = kcg_lit_int64(
      0);
  outC->_L93.lastSentTrackTrainMessage.Header.nid_em = kcg_lit_int64(0);
  outC->_L93.lastSentTrackTrainMessage.Header.q_scale = kcg_lit_int64(0);
  outC->_L93.lastSentTrackTrainMessage.Header.d_sr = kcg_lit_int64(0);
  outC->_L93.lastSentTrackTrainMessage.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L93.lastSentTrackTrainMessage.Header.d_ref = kcg_lit_int64(0);
  outC->_L93.lastSentTrackTrainMessage.Header.q_dir = kcg_lit_int64(0);
  outC->_L93.lastSentTrackTrainMessage.Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L93.lastSentTrackTrainMessage.Header.m_version = kcg_lit_int64(0);
  for (idx40 = 0; idx40 < 30; idx40++) {
    outC->_L93.lastSentTrackTrainMessage.Messages.PacketHeaders[idx40].nid_packet =
      kcg_lit_int64(0);
    outC->_L93.lastSentTrackTrainMessage.Messages.PacketHeaders[idx40].q_dir =
      Q_DIR_Reverse;
    outC->_L93.lastSentTrackTrainMessage.Messages.PacketHeaders[idx40].valid =
      kcg_true;
    outC->_L93.lastSentTrackTrainMessage.Messages.PacketHeaders[idx40].startAddress =
      kcg_lit_int64(0);
    outC->_L93.lastSentTrackTrainMessage.Messages.PacketHeaders[idx40].endAddress =
      kcg_lit_int64(0);
  }
  for (idx41 = 0; idx41 < 500; idx41++) {
    outC->_L93.lastSentTrackTrainMessage.Messages.PacketData[idx41] =
      kcg_lit_int64(0);
  }
  outC->_L94.present = kcg_true;
  outC->_L94.header.present = kcg_true;
  outC->_L94.header.nid_message = kcg_lit_int64(0);
  outC->_L94.header.t_train = kcg_lit_int64(0);
  outC->_L94.header.nid_engine = kcg_lit_int64(0);
  outC->_L94.header.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L94.header.xT_TRAIN = kcg_lit_int64(0);
  outC->_L94.header.xNID_EM = kcg_lit_int64(0);
  outC->_L94.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L94.header.xNID_TEXTMESSAGE = kcg_lit_int64(0);
  outC->_L94.packets.p0.valid = kcg_true;
  outC->_L94.packets.p0.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L94.packets.p0.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L94.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L94.packets.p0.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L94.packets.p0.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L94.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L94.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L94.packets.p0.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L94.packets.p0.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L94.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L94.packets.p0.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L94.packets.p0.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L94.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L94.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L94.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L94.packets.p0.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L94.packets.p1.valid = kcg_true;
  outC->_L94.packets.p1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L94.packets.p1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L94.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L94.packets.p1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L94.packets.p1.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L94.packets.p1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L94.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L94.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L94.packets.p1.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L94.packets.p1.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L94.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L94.packets.p1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L94.packets.p1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L94.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L94.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L94.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L94.packets.p1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L94.packets.p3.valid = kcg_true;
  outC->_L94.packets.p3.number = kcg_lit_int64(0);
  for (idx43 = 0; idx43 < 1; idx43++) {
    outC->_L94.packets.p3.aNID_RADIO[idx43].valid = kcg_true;
    for (idx42 = 0; idx42 < 15; idx42++) {
      outC->_L94.packets.p3.aNID_RADIO[idx43].telephoneNumber[idx42] =
        kcg_lit_int64(0);
    }
  }
  outC->_L94.packets.p4.valid = kcg_true;
  outC->_L94.packets.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L94.packets.p5.valid = kcg_true;
  outC->_L94.packets.p5.TrainRunningNumber = kcg_lit_int64(0);
  outC->_L94.packets.p9.valid = kcg_true;
  outC->_L94.packets.p9.transitionInformation = kcg_lit_int64(0);
  outC->_L94.packets.p11.valid = kcg_true;
  outC->_L94.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L94.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L94.packets.p11.l_train = kcg_lit_int64(0);
  outC->_L94.packets.p11.v_maxtrain = kcg_lit_int64(0);
  outC->_L94.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L94.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L94.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L94.packets.p11.n_axle = kcg_lit_int64(0);
  outC->_L94.packets.p11.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx44 = 0; idx44 < 4; idx44++) {
    outC->_L94.packets.p11.tractionIdentity[idx44].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L94.packets.p11.tractionIdentity[idx44].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L94.packets.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx45 = 0; idx45 < 5; idx45++) {
    outC->_L94.packets.p11.nid_ntc[idx45] = kcg_lit_int64(0);
  }
  outC->_L82 = M_MODE_Full_Supervision;
  outC->_L83 = kcg_true;
  outC->_L84 = M_LEVEL_Level_0;
  outC->_L85 = kcg_true;
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
  outC->session.m_TrainData.nid_engine = kcg_lit_int64(0);
  outC->session.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int64(0);
  for (idx51 = 0; idx51 < 1; idx51++) {
    outC->session.m_TrainData.m_OnboardPhoneNumbers[idx51].valid = kcg_true;
    for (idx50 = 0; idx50 < 15; idx50++) {
      outC->session.m_TrainData.m_OnboardPhoneNumbers[idx51].telephoneNumber[idx50] =
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
  for (idx52 = 0; idx52 < 4; idx52++) {
    outC->session.m_TrainData.m_TractionIdentities[idx52].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->session.m_TrainData.m_TractionIdentities[idx52].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx53 = 0; idx53 < 5; idx53++) {
    outC->session.m_TrainData.m_NationalSystemIdentities[idx53] = kcg_lit_int64(0);
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
  outC->mode = M_MODE_Full_Supervision;
  outC->modeChanged = kcg_true;
  outC->radioTrainTrackMessageId = kcg_lit_int64(0);
  outC->TRIP_AND_POST_TRIP_SM_fired = SSM_TR_no_trans_TRIP_AND_POST_TRIP_SM;
  outC->TRIP_AND_POST_TRIP_SM_fired_strong =
    SSM_TR_no_trans_TRIP_AND_POST_TRIP_SM;
  outC->TRIP_AND_POST_TRIP_SM_state_act = SSM_st_IDLE_TRIP_AND_POST_TRIP_SM;
  outC->TRIP_AND_POST_TRIP_SM_state_sel = SSM_st_IDLE_TRIP_AND_POST_TRIP_SM;
  outC->_L9_SEND_MSG_06_TRIP_AND_POST_TRIP_SM = kcg_lit_int64(0);
  outC->_L7_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_IsValid = kcg_true;
  outC->_L7_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entry.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L7_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entry.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L7_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entry.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L7_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entry.Header.t_train =
    kcg_lit_int64(0);
  outC->_L7_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entry.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L7_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entry.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L7_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entry.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L7_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entry.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L7_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entry.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L7_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entry.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L7_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entry.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L7_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entry.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L7_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entry.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L7_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entry.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L7_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entry.Header.m_version =
    kcg_lit_int64(0);
  for (idx57 = 0; idx57 < 30; idx57++) {
    outC->_L7_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entry.Messages.PacketHeaders[idx57].nid_packet =
      kcg_lit_int64(0);
    outC->_L7_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entry.Messages.PacketHeaders[idx57].q_dir =
      Q_DIR_Reverse;
    outC->_L7_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entry.Messages.PacketHeaders[idx57].valid =
      kcg_true;
    outC->_L7_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entry.Messages.PacketHeaders[idx57].startAddress =
      kcg_lit_int64(0);
    outC->_L7_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entry.Messages.PacketHeaders[idx57].endAddress =
      kcg_lit_int64(0);
  }
  for (idx58 = 0; idx58 < 500; idx58++) {
    outC->_L7_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entry.Messages.PacketData[idx58] =
      kcg_lit_int64(0);
  }
  outC->_L6_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.nid_lrbg = kcg_lit_int64(0);
  outC->_L6_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.q_scale = Q_SCALE_10_cm_scale;
  outC->_L6_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.d_lrbg = kcg_lit_int64(0);
  outC->_L6_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L6_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L6_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.l_doubtover = kcg_lit_int64(0);
  outC->_L6_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.l_doubtunder = kcg_lit_int64(0);
  outC->_L6_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L6_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.l_trainint = kcg_lit_int64(0);
  outC->_L6_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.v_train = kcg_lit_int64(0);
  outC->_L6_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L6_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_mode = M_MODE_Full_Supervision;
  outC->_L6_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_level = M_LEVEL_Level_0;
  outC->_L6_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.nid_ntc = kcg_lit_int64(0);
  outC->_L6_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L5_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L5_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L5_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L5_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.Header.t_train = kcg_lit_int64(0);
  outC->_L5_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.Header.m_ack = kcg_lit_int64(0);
  outC->_L5_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L5_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L5_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.Header.nid_em = kcg_lit_int64(0);
  outC->_L5_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.Header.q_scale = kcg_lit_int64(0);
  outC->_L5_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.Header.d_sr = kcg_lit_int64(0);
  outC->_L5_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L5_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.Header.d_ref = kcg_lit_int64(0);
  outC->_L5_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.Header.q_dir = kcg_lit_int64(0);
  outC->_L5_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L5_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.Header.m_version = kcg_lit_int64(0);
  for (idx59 = 0; idx59 < 30; idx59++) {
    outC->_L5_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.Messages.PacketHeaders[idx59].nid_packet =
      kcg_lit_int64(0);
    outC->_L5_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.Messages.PacketHeaders[idx59].q_dir =
      Q_DIR_Reverse;
    outC->_L5_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.Messages.PacketHeaders[idx59].valid =
      kcg_true;
    outC->_L5_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.Messages.PacketHeaders[idx59].startAddress =
      kcg_lit_int64(0);
    outC->_L5_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.Messages.PacketHeaders[idx59].endAddress =
      kcg_lit_int64(0);
  }
  for (idx60 = 0; idx60 < 500; idx60++) {
    outC->_L5_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.Messages.PacketData[idx60] =
      kcg_lit_int64(0);
  }
  for (idx63 = 0; idx63 < 8; idx63++) {
    outC->_L4_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entries[idx63].m_IsValid =
      kcg_true;
    outC->_L4_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entries[idx63].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L4_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entries[idx63].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L4_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entries[idx63].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L4_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entries[idx63].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L4_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entries[idx63].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L4_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entries[idx63].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L4_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entries[idx63].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L4_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entries[idx63].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L4_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entries[idx63].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L4_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entries[idx63].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L4_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entries[idx63].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L4_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entries[idx63].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L4_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entries[idx63].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L4_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entries[idx63].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L4_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entries[idx63].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx61 = 0; idx61 < 30; idx61++) {
      outC->_L4_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entries[idx63].m_Entry.Messages.PacketHeaders[idx61].nid_packet =
        kcg_lit_int64(0);
      outC->_L4_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entries[idx63].m_Entry.Messages.PacketHeaders[idx61].q_dir =
        Q_DIR_Reverse;
      outC->_L4_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entries[idx63].m_Entry.Messages.PacketHeaders[idx61].valid =
        kcg_true;
      outC->_L4_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entries[idx63].m_Entry.Messages.PacketHeaders[idx61].startAddress =
        kcg_lit_int64(0);
      outC->_L4_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entries[idx63].m_Entry.Messages.PacketHeaders[idx61].endAddress =
        kcg_lit_int64(0);
    }
    for (idx62 = 0; idx62 < 500; idx62++) {
      outC->_L4_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entries[idx63].m_Entry.Messages.PacketData[idx62] =
        kcg_lit_int64(0);
    }
  }
  outC->_L3_SEND_MSG_06_TRIP_AND_POST_TRIP_SM = kcg_lit_int64(0);
  outC->_L2_SEND_MSG_06_TRIP_AND_POST_TRIP_SM = M_ACK_No_acknowledgement_required;
  outC->_L12_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L12_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx65 = 0; idx65 < 1; idx65++) {
    outC->_L12_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_TrainData.m_OnboardPhoneNumbers[idx65].valid =
      kcg_true;
    for (idx64 = 0; idx64 < 15; idx64++) {
      outC->_L12_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_TrainData.m_OnboardPhoneNumbers[idx65].telephoneNumber[idx64] =
        kcg_lit_int64(0);
    }
  }
  outC->_L12_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L12_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L12_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L12_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L12_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L12_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L12_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L12_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L12_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx66 = 0; idx66 < 4; idx66++) {
    outC->_L12_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_TrainData.m_TractionIdentities[idx66].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L12_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_TrainData.m_TractionIdentities[idx66].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx67 = 0; idx67 < 5; idx67++) {
    outC->_L12_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_TrainData.m_NationalSystemIdentities[idx67] =
      kcg_lit_int64(0);
  }
  outC->_L12_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L12_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L12_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L12_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_PosData.d_lrbg = kcg_lit_int64(
      0);
  outC->_L12_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L12_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L12_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L12_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L12_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L12_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L12_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L12_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L12_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L12_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L12_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L12_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx69 = 0; idx69 < 1; idx69++) {
    outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx69].valid =
      kcg_true;
    for (idx68 = 0; idx68 < 15; idx68++) {
      outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx69].telephoneNumber[idx68] =
        kcg_lit_int64(0);
    }
  }
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx70 = 0; idx70 < 4; idx70++) {
    outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_TractionIdentities[idx70].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_TractionIdentities[idx70].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx71 = 0; idx71 < 5; idx71++) {
    outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_NationalSystemIdentities[idx71] =
      kcg_lit_int64(0);
  }
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.nid_c =
    kcg_lit_int64(0);
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.v_nvshunt =
    kcg_lit_int64(0);
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.v_nvstff =
    kcg_lit_int64(0);
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.v_nvonsight =
    kcg_lit_int64(0);
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.v_nvunfit =
    kcg_lit_int64(0);
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.v_nvrel =
    kcg_lit_int64(0);
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.t_nvcontact =
    kcg_lit_int64(0);
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.config.m_MAReqParams.q_dir =
    Q_DIR_Reverse;
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.config.m_MAReqParams.t_mar =
    kcg_lit_int64(0);
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.config.m_MAReqParams.t_timeoutrqst =
    kcg_lit_int64(0);
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.config.m_MAReqParams.t_cycrqst =
    kcg_lit_int64(0);
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.q_dir =
    Q_DIR_Reverse;
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.t_cycloc =
    kcg_lit_int64(0);
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.d_cycloc =
    kcg_lit_int64(0);
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.m_loc =
    M_LOC_Now;
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx72 = 0; idx72 < 32; idx72++) {
    outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx72].d_loc =
      kcg_lit_int64(0);
    outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx72].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx73 = 0; idx73 < 16; idx73++) {
    outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.diagnostic[idx73].valid = kcg_true;
    outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.diagnostic[idx73].count =
      kcg_lit_int64(0);
    outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.diagnostic[idx73].timestamp =
      kcg_lit_int64(0);
    outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.diagnostic[idx73].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.diagnostic[idx73].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.diagnostic[idx73].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx76 = 0; idx76 < 8; idx76++) {
    outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx76].m_IsValid =
      kcg_true;
    outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx76].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx76].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx76].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx76].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx76].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx76].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx76].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx76].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx76].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx76].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx76].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx76].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx76].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx76].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx76].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx74 = 0; idx74 < 30; idx74++) {
      outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx76].m_Entry.Messages.PacketHeaders[idx74].nid_packet =
        kcg_lit_int64(0);
      outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx76].m_Entry.Messages.PacketHeaders[idx74].q_dir =
        Q_DIR_Reverse;
      outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx76].m_Entry.Messages.PacketHeaders[idx74].valid =
        kcg_true;
      outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx76].m_Entry.Messages.PacketHeaders[idx74].startAddress =
        kcg_lit_int64(0);
      outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx76].m_Entry.Messages.PacketHeaders[idx74].endAddress =
        kcg_lit_int64(0);
    }
    for (idx75 = 0; idx75 < 500; idx75++) {
      outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx76].m_Entry.Messages.PacketData[idx75] =
        kcg_lit_int64(0);
    }
  }
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.clockk.m_Value = kcg_lit_int64(0);
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int64(0);
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int64(0);
  for (idx77 = 0; idx77 < 30; idx77++) {
    outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx77].nid_packet =
      kcg_lit_int64(0);
    outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx77].q_dir =
      Q_DIR_Reverse;
    outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx77].valid =
      kcg_true;
    outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx77].startAddress =
      kcg_lit_int64(0);
    outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx77].endAddress =
      kcg_lit_int64(0);
  }
  for (idx78 = 0; idx78 < 500; idx78++) {
    outC->_L11_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Messages.PacketData[idx78] =
      kcg_lit_int64(0);
  }
  for (idx81 = 0; idx81 < 8; idx81++) {
    outC->_L10_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entries[idx81].m_IsValid =
      kcg_true;
    outC->_L10_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entries[idx81].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L10_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entries[idx81].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L10_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entries[idx81].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L10_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entries[idx81].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L10_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entries[idx81].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L10_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entries[idx81].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L10_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entries[idx81].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L10_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entries[idx81].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L10_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entries[idx81].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L10_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entries[idx81].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L10_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entries[idx81].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L10_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entries[idx81].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L10_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entries[idx81].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L10_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entries[idx81].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L10_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entries[idx81].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx79 = 0; idx79 < 30; idx79++) {
      outC->_L10_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entries[idx81].m_Entry.Messages.PacketHeaders[idx79].nid_packet =
        kcg_lit_int64(0);
      outC->_L10_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entries[idx81].m_Entry.Messages.PacketHeaders[idx79].q_dir =
        Q_DIR_Reverse;
      outC->_L10_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entries[idx81].m_Entry.Messages.PacketHeaders[idx79].valid =
        kcg_true;
      outC->_L10_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entries[idx81].m_Entry.Messages.PacketHeaders[idx79].startAddress =
        kcg_lit_int64(0);
      outC->_L10_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entries[idx81].m_Entry.Messages.PacketHeaders[idx79].endAddress =
        kcg_lit_int64(0);
    }
    for (idx80 = 0; idx80 < 500; idx80++) {
      outC->_L10_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.m_Entries[idx81].m_Entry.Messages.PacketData[idx80] =
        kcg_lit_int64(0);
    }
  }
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx83 = 0; idx83 < 1; idx83++) {
    outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx83].valid =
      kcg_true;
    for (idx82 = 0; idx82 < 15; idx82++) {
      outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx83].telephoneNumber[idx82] =
        kcg_lit_int64(0);
    }
  }
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx84 = 0; idx84 < 4; idx84++) {
    outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_TractionIdentities[idx84].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_TractionIdentities[idx84].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx85 = 0; idx85 < 5; idx85++) {
    outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_NationalSystemIdentities[idx85] =
      kcg_lit_int64(0);
  }
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.session.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.nid_c =
    kcg_lit_int64(0);
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.v_nvshunt =
    kcg_lit_int64(0);
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.v_nvstff =
    kcg_lit_int64(0);
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.v_nvonsight =
    kcg_lit_int64(0);
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.v_nvunfit =
    kcg_lit_int64(0);
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.v_nvrel =
    kcg_lit_int64(0);
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.t_nvcontact =
    kcg_lit_int64(0);
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.config.m_MAReqParams.q_dir =
    Q_DIR_Reverse;
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.config.m_MAReqParams.t_mar =
    kcg_lit_int64(0);
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.config.m_MAReqParams.t_timeoutrqst =
    kcg_lit_int64(0);
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.config.m_MAReqParams.t_cycrqst =
    kcg_lit_int64(0);
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.q_dir =
    Q_DIR_Reverse;
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.t_cycloc =
    kcg_lit_int64(0);
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.d_cycloc =
    kcg_lit_int64(0);
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.m_loc =
    M_LOC_Now;
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx86 = 0; idx86 < 32; idx86++) {
    outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx86].d_loc =
      kcg_lit_int64(0);
    outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx86].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx87 = 0; idx87 < 16; idx87++) {
    outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.diagnostic[idx87].valid = kcg_true;
    outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.diagnostic[idx87].count =
      kcg_lit_int64(0);
    outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.diagnostic[idx87].timestamp =
      kcg_lit_int64(0);
    outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.diagnostic[idx87].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.diagnostic[idx87].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.diagnostic[idx87].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx90 = 0; idx90 < 8; idx90++) {
    outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx90].m_IsValid =
      kcg_true;
    outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx90].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx90].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx90].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx90].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx90].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx90].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx90].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx90].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx90].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx90].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx90].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx90].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx90].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx90].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx90].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx88 = 0; idx88 < 30; idx88++) {
      outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx90].m_Entry.Messages.PacketHeaders[idx88].nid_packet =
        kcg_lit_int64(0);
      outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx90].m_Entry.Messages.PacketHeaders[idx88].q_dir =
        Q_DIR_Reverse;
      outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx90].m_Entry.Messages.PacketHeaders[idx88].valid =
        kcg_true;
      outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx90].m_Entry.Messages.PacketHeaders[idx88].startAddress =
        kcg_lit_int64(0);
      outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx90].m_Entry.Messages.PacketHeaders[idx88].endAddress =
        kcg_lit_int64(0);
    }
    for (idx89 = 0; idx89 < 500; idx89++) {
      outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx90].m_Entry.Messages.PacketData[idx89] =
        kcg_lit_int64(0);
    }
  }
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.clockk.m_Value = kcg_lit_int64(0);
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int64(0);
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int64(0);
  for (idx91 = 0; idx91 < 30; idx91++) {
    outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx91].nid_packet =
      kcg_lit_int64(0);
    outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx91].q_dir =
      Q_DIR_Reverse;
    outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx91].valid =
      kcg_true;
    outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx91].startAddress =
      kcg_lit_int64(0);
    outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx91].endAddress =
      kcg_lit_int64(0);
  }
  for (idx92 = 0; idx92 < 500; idx92++) {
    outC->_L13_SEND_MSG_06_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Messages.PacketData[idx92] =
      kcg_lit_int64(0);
  }
  outC->IfBlock1_clock_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM =
    kcg_true;
  outC->acknowledgementMessageTimestamp_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM =
    kcg_lit_int64(0);
  outC->_L8_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM = kcg_lit_int64(0);
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.present = kcg_true;
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.header.present =
    kcg_true;
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.header.nid_message =
    kcg_lit_int64(0);
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.header.t_train =
    kcg_lit_int64(0);
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.header.nid_engine =
    kcg_lit_int64(0);
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.header.xT_TRAIN =
    kcg_lit_int64(0);
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.header.xNID_EM =
    kcg_lit_int64(0);
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.header.xNID_TEXTMESSAGE =
    kcg_lit_int64(0);
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p0.valid =
    kcg_true;
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p0.packet0.NID_PACKET =
    kcg_lit_int64(0);
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p0.packet0.L_PACKET =
    kcg_lit_int64(0);
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p0.packet0.qscale =
    Q_SCALE_10_cm_scale;
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p0.packet0.NID_LRBG =
    kcg_lit_int64(0);
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p0.packet0.D_LRBG =
    kcg_lit_int64(0);
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p0.packet0.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p0.packet0.dlrbg =
    Q_DLRBG_Reverse;
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p0.packet0.L_DOUBTOVER =
    kcg_lit_int64(0);
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p0.packet0.L_DOUBTUNDER =
    kcg_lit_int64(0);
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p0.packet0.L_TRAININT =
    kcg_lit_int64(0);
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p0.packet0.V_TRAIN =
    kcg_lit_int64(0);
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p0.packet0.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p0.packet0.mode =
    M_MODE_Full_Supervision;
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p0.packet0.level =
    M_LEVEL_Level_0;
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p0.packet0.NID_NTC =
    kcg_lit_int64(0);
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p1.valid =
    kcg_true;
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p1.packet1.NID_PACKET =
    kcg_lit_int64(0);
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p1.packet1.L_PACKET =
    kcg_lit_int64(0);
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p1.packet1.qscale =
    Q_SCALE_10_cm_scale;
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p1.packet1.NID_LRBG =
    kcg_lit_int64(0);
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p1.packet1.NID_PRVLRBG =
    kcg_lit_int64(0);
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p1.packet1.D_LRBG =
    kcg_lit_int64(0);
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p1.packet1.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p1.packet1.dlrbg =
    Q_DLRBG_Reverse;
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p1.packet1.L_DOUBTOVER =
    kcg_lit_int64(0);
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p1.packet1.L_DOUBTUNDER =
    kcg_lit_int64(0);
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p1.packet1.L_TRAININT =
    kcg_lit_int64(0);
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p1.packet1.V_TRAIN =
    kcg_lit_int64(0);
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p1.packet1.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p1.packet1.mode =
    M_MODE_Full_Supervision;
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p1.packet1.level =
    M_LEVEL_Level_0;
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p1.packet1.NID_NTC =
    kcg_lit_int64(0);
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p3.valid =
    kcg_true;
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p3.number =
    kcg_lit_int64(0);
  for (idx94 = 0; idx94 < 1; idx94++) {
    outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p3.aNID_RADIO[idx94].valid =
      kcg_true;
    for (idx93 = 0; idx93 < 15; idx93++) {
      outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p3.aNID_RADIO[idx94].telephoneNumber[idx93] =
        kcg_lit_int64(0);
    }
  }
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p4.valid =
    kcg_true;
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p5.valid =
    kcg_true;
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p5.TrainRunningNumber =
    kcg_lit_int64(0);
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p9.valid =
    kcg_true;
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p9.transitionInformation =
    kcg_lit_int64(0);
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p11.valid =
    kcg_true;
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p11.l_train =
    kcg_lit_int64(0);
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p11.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p11.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p11.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p11.n_axle =
    kcg_lit_int64(0);
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p11.nIter_tractionIdentity =
    kcg_lit_int64(0);
  for (idx95 = 0; idx95 < 4; idx95++) {
    outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p11.tractionIdentity[idx95].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p11.tractionIdentity[idx95].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p11.nIter_ntc =
    kcg_lit_int64(0);
  for (idx96 = 0; idx96 < 5; idx96++) {
    outC->_L4_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.packets.p11.nid_ntc[idx96] =
      kcg_lit_int64(0);
  }
  outC->_L1_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.present = kcg_true;
  outC->_L1_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.nid_message =
    kcg_lit_int64(0);
  outC->_L1_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.t_train =
    kcg_lit_int64(0);
  outC->_L1_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.nid_engine =
    kcg_lit_int64(0);
  outC->_L1_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L1_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.xT_TRAIN =
    kcg_lit_int64(0);
  outC->_L1_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.xNID_EM =
    kcg_lit_int64(0);
  outC->_L1_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L1_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.xNID_TEXTMESSAGE =
    kcg_lit_int64(0);
  outC->_L19_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM = kcg_lit_int64(0);
  outC->_L18_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM = kcg_lit_int64(0);
  outC->_L16_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.radioDevice =
    kcg_lit_int64(0);
  outC->_L16_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L16_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.nid_message =
    kcg_lit_int64(0);
  outC->_L16_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.t_train =
    kcg_lit_int64(0);
  outC->_L16_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_ack =
    kcg_lit_int64(0);
  outC->_L16_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L16_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.t_train_reference =
    kcg_lit_int64(0);
  outC->_L16_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.nid_em =
    kcg_lit_int64(0);
  outC->_L16_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.q_scale =
    kcg_lit_int64(0);
  outC->_L16_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.d_sr =
    kcg_lit_int64(0);
  outC->_L16_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L16_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.d_ref =
    kcg_lit_int64(0);
  outC->_L16_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.q_dir =
    kcg_lit_int64(0);
  outC->_L16_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L16_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_version =
    kcg_lit_int64(0);
  outC->_L15_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM = kcg_lit_int64(0);
  outC->_L14_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM = kcg_true;
  outC->_L13_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM = kcg_lit_int64(0);
  outC->_L21_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM = kcg_lit_int64(0);
  outC->_L24_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L24_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx98 = 0; idx98 < 1; idx98++) {
    outC->_L24_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_TrainData.m_OnboardPhoneNumbers[idx98].valid =
      kcg_true;
    for (idx97 = 0; idx97 < 15; idx97++) {
      outC->_L24_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_TrainData.m_OnboardPhoneNumbers[idx98].telephoneNumber[idx97] =
        kcg_lit_int64(0);
    }
  }
  outC->_L24_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L24_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L24_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L24_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L24_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L24_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L24_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L24_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L24_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx99 = 0; idx99 < 4; idx99++) {
    outC->_L24_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_TrainData.m_TractionIdentities[idx99].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L24_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_TrainData.m_TractionIdentities[idx99].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx100 = 0; idx100 < 5; idx100++) {
    outC->_L24_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_TrainData.m_NationalSystemIdentities[idx100] =
      kcg_lit_int64(0);
  }
  outC->_L24_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L24_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L24_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L24_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L24_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L24_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L24_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L24_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L24_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L24_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L24_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L24_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L24_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L24_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L24_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L24_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx102 = 0; idx102 < 1; idx102++) {
    outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx102].valid =
      kcg_true;
    for (idx101 = 0; idx101 < 15; idx101++) {
      outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx102].telephoneNumber[idx101] =
        kcg_lit_int64(0);
    }
  }
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx103 = 0; idx103 < 4; idx103++) {
    outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_TractionIdentities[idx103].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_TractionIdentities[idx103].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx104 = 0; idx104 < 5; idx104++) {
    outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_NationalSystemIdentities[idx104] =
      kcg_lit_int64(0);
  }
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.nid_c =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.v_nvshunt =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.v_nvstff =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.v_nvonsight =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.v_nvunfit =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.v_nvrel =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.t_nvcontact =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.config.m_MAReqParams.q_dir =
    Q_DIR_Reverse;
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.config.m_MAReqParams.t_mar =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.config.m_MAReqParams.t_timeoutrqst =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.config.m_MAReqParams.t_cycrqst =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.q_dir =
    Q_DIR_Reverse;
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.t_cycloc =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.d_cycloc =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.m_loc =
    M_LOC_Now;
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx105 = 0; idx105 < 32; idx105++) {
    outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx105].d_loc =
      kcg_lit_int64(0);
    outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx105].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx106 = 0; idx106 < 16; idx106++) {
    outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.diagnostic[idx106].valid =
      kcg_true;
    outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.diagnostic[idx106].count =
      kcg_lit_int64(0);
    outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.diagnostic[idx106].timestamp =
      kcg_lit_int64(0);
    outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.diagnostic[idx106].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.diagnostic[idx106].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.diagnostic[idx106].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx109 = 0; idx109 < 8; idx109++) {
    outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx109].m_IsValid =
      kcg_true;
    outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx109].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx109].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx109].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx109].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx109].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx109].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx109].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx109].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx109].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx109].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx109].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx109].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx109].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx109].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx109].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx107 = 0; idx107 < 30; idx107++) {
      outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx109].m_Entry.Messages.PacketHeaders[idx107].nid_packet =
        kcg_lit_int64(0);
      outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx109].m_Entry.Messages.PacketHeaders[idx107].q_dir =
        Q_DIR_Reverse;
      outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx109].m_Entry.Messages.PacketHeaders[idx107].valid =
        kcg_true;
      outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx109].m_Entry.Messages.PacketHeaders[idx107].startAddress =
        kcg_lit_int64(0);
      outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx109].m_Entry.Messages.PacketHeaders[idx107].endAddress =
        kcg_lit_int64(0);
    }
    for (idx108 = 0; idx108 < 500; idx108++) {
      outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx109].m_Entry.Messages.PacketData[idx108] =
        kcg_lit_int64(0);
    }
  }
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.clockk.m_Value =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int64(0);
  for (idx110 = 0; idx110 < 30; idx110++) {
    outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx110].nid_packet =
      kcg_lit_int64(0);
    outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx110].q_dir =
      Q_DIR_Reverse;
    outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx110].valid =
      kcg_true;
    outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx110].startAddress =
      kcg_lit_int64(0);
    outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx110].endAddress =
      kcg_lit_int64(0);
  }
  for (idx111 = 0; idx111 < 500; idx111++) {
    outC->_L23_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Messages.PacketData[idx111] =
      kcg_lit_int64(0);
  }
  for (idx114 = 0; idx114 < 8; idx114++) {
    outC->_L22_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_Entries[idx114].m_IsValid =
      kcg_true;
    outC->_L22_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_Entries[idx114].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L22_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_Entries[idx114].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L22_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_Entries[idx114].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L22_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_Entries[idx114].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L22_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_Entries[idx114].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L22_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_Entries[idx114].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L22_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_Entries[idx114].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L22_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_Entries[idx114].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L22_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_Entries[idx114].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L22_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_Entries[idx114].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L22_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_Entries[idx114].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L22_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_Entries[idx114].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L22_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_Entries[idx114].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L22_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_Entries[idx114].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L22_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_Entries[idx114].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx112 = 0; idx112 < 30; idx112++) {
      outC->_L22_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_Entries[idx114].m_Entry.Messages.PacketHeaders[idx112].nid_packet =
        kcg_lit_int64(0);
      outC->_L22_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_Entries[idx114].m_Entry.Messages.PacketHeaders[idx112].q_dir =
        Q_DIR_Reverse;
      outC->_L22_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_Entries[idx114].m_Entry.Messages.PacketHeaders[idx112].valid =
        kcg_true;
      outC->_L22_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_Entries[idx114].m_Entry.Messages.PacketHeaders[idx112].startAddress =
        kcg_lit_int64(0);
      outC->_L22_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_Entries[idx114].m_Entry.Messages.PacketHeaders[idx112].endAddress =
        kcg_lit_int64(0);
    }
    for (idx113 = 0; idx113 < 500; idx113++) {
      outC->_L22_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.m_Entries[idx114].m_Entry.Messages.PacketData[idx113] =
        kcg_lit_int64(0);
    }
  }
  outC->_L26_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L26_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L26_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L26_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.Header.t_train =
    kcg_lit_int64(0);
  outC->_L26_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L26_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L26_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L26_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L26_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L26_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L26_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L26_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L26_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L26_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L26_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.Header.m_version =
    kcg_lit_int64(0);
  for (idx115 = 0; idx115 < 30; idx115++) {
    outC->_L26_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.Messages.PacketHeaders[idx115].nid_packet =
      kcg_lit_int64(0);
    outC->_L26_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.Messages.PacketHeaders[idx115].q_dir =
      Q_DIR_Reverse;
    outC->_L26_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.Messages.PacketHeaders[idx115].valid =
      kcg_true;
    outC->_L26_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.Messages.PacketHeaders[idx115].startAddress =
      kcg_lit_int64(0);
    outC->_L26_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.Messages.PacketHeaders[idx115].endAddress =
      kcg_lit_int64(0);
  }
  for (idx116 = 0; idx116 < 500; idx116++) {
    outC->_L26_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.Messages.PacketData[idx116] =
      kcg_lit_int64(0);
  }
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx118 = 0; idx118 < 1; idx118++) {
    outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx118].valid =
      kcg_true;
    for (idx117 = 0; idx117 < 15; idx117++) {
      outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx118].telephoneNumber[idx117] =
        kcg_lit_int64(0);
    }
  }
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx119 = 0; idx119 < 4; idx119++) {
    outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_TractionIdentities[idx119].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_TractionIdentities[idx119].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx120 = 0; idx120 < 5; idx120++) {
    outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_NationalSystemIdentities[idx120] =
      kcg_lit_int64(0);
  }
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.session.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.nid_c =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.v_nvshunt =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.v_nvstff =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.v_nvonsight =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.v_nvunfit =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.v_nvrel =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.t_nvcontact =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.config.m_MAReqParams.q_dir =
    Q_DIR_Reverse;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.config.m_MAReqParams.t_mar =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.config.m_MAReqParams.t_timeoutrqst =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.config.m_MAReqParams.t_cycrqst =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.q_dir =
    Q_DIR_Reverse;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.t_cycloc =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.d_cycloc =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.m_loc =
    M_LOC_Now;
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx121 = 0; idx121 < 32; idx121++) {
    outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx121].d_loc =
      kcg_lit_int64(0);
    outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx121].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx122 = 0; idx122 < 16; idx122++) {
    outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.diagnostic[idx122].valid =
      kcg_true;
    outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.diagnostic[idx122].count =
      kcg_lit_int64(0);
    outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.diagnostic[idx122].timestamp =
      kcg_lit_int64(0);
    outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.diagnostic[idx122].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.diagnostic[idx122].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.diagnostic[idx122].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx125 = 0; idx125 < 8; idx125++) {
    outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx125].m_IsValid =
      kcg_true;
    outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx125].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx125].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx125].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx125].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx125].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx125].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx125].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx125].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx125].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx125].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx125].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx125].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx125].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx125].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx125].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx123 = 0; idx123 < 30; idx123++) {
      outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx125].m_Entry.Messages.PacketHeaders[idx123].nid_packet =
        kcg_lit_int64(0);
      outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx125].m_Entry.Messages.PacketHeaders[idx123].q_dir =
        Q_DIR_Reverse;
      outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx125].m_Entry.Messages.PacketHeaders[idx123].valid =
        kcg_true;
      outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx125].m_Entry.Messages.PacketHeaders[idx123].startAddress =
        kcg_lit_int64(0);
      outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx125].m_Entry.Messages.PacketHeaders[idx123].endAddress =
        kcg_lit_int64(0);
    }
    for (idx124 = 0; idx124 < 500; idx124++) {
      outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx125].m_Entry.Messages.PacketData[idx124] =
        kcg_lit_int64(0);
    }
  }
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.clockk.m_Value =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int64(0);
  for (idx126 = 0; idx126 < 30; idx126++) {
    outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx126].nid_packet =
      kcg_lit_int64(0);
    outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx126].q_dir =
      Q_DIR_Reverse;
    outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx126].valid =
      kcg_true;
    outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx126].startAddress =
      kcg_lit_int64(0);
    outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx126].endAddress =
      kcg_lit_int64(0);
  }
  for (idx127 = 0; idx127 < 500; idx127++) {
    outC->_L25_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Messages.PacketData[idx127] =
      kcg_lit_int64(0);
  }
  outC->_L25_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.radioDevice = kcg_lit_int64(0);
  outC->_L25_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L25_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.nid_message = kcg_lit_int64(0);
  outC->_L25_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.t_train = kcg_lit_int64(0);
  outC->_L25_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_ack = kcg_lit_int64(0);
  outC->_L25_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.nid_lrbg = kcg_lit_int64(0);
  outC->_L25_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.t_train_reference =
    kcg_lit_int64(0);
  outC->_L25_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.nid_em = kcg_lit_int64(0);
  outC->_L25_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.q_scale = kcg_lit_int64(0);
  outC->_L25_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.d_sr = kcg_lit_int64(0);
  outC->_L25_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.t_sh_rqst = kcg_lit_int64(0);
  outC->_L25_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.d_ref = kcg_lit_int64(0);
  outC->_L25_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.q_dir = kcg_lit_int64(0);
  outC->_L25_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L25_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_version = kcg_lit_int64(0);
  outC->_L23_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM = kcg_lit_int64(0);
  outC->_L22_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM = kcg_lit_int64(0);
  outC->_L21_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM = kcg_true;
  outC->_L20_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM = kcg_lit_int64(0);
  outC->_L19_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM = kcg_lit_int64(0);
  outC->_L18_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM = kcg_lit_int64(0);
  outC->_L28_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L28_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx129 = 0; idx129 < 1; idx129++) {
    outC->_L28_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_TrainData.m_OnboardPhoneNumbers[idx129].valid =
      kcg_true;
    for (idx128 = 0; idx128 < 15; idx128++) {
      outC->_L28_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_TrainData.m_OnboardPhoneNumbers[idx129].telephoneNumber[idx128] =
        kcg_lit_int64(0);
    }
  }
  outC->_L28_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L28_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L28_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L28_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L28_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L28_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L28_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L28_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L28_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx130 = 0; idx130 < 4; idx130++) {
    outC->_L28_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_TrainData.m_TractionIdentities[idx130].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L28_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_TrainData.m_TractionIdentities[idx130].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx131 = 0; idx131 < 5; idx131++) {
    outC->_L28_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_TrainData.m_NationalSystemIdentities[idx131] =
      kcg_lit_int64(0);
  }
  outC->_L28_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L28_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L28_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L28_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L28_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L28_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L28_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L28_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L28_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L28_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L28_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L28_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L28_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L28_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L28_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L28_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx133 = 0; idx133 < 1; idx133++) {
    outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx133].valid =
      kcg_true;
    for (idx132 = 0; idx132 < 15; idx132++) {
      outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx133].telephoneNumber[idx132] =
        kcg_lit_int64(0);
    }
  }
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx134 = 0; idx134 < 4; idx134++) {
    outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_TractionIdentities[idx134].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_TractionIdentities[idx134].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx135 = 0; idx135 < 5; idx135++) {
    outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_NationalSystemIdentities[idx135] =
      kcg_lit_int64(0);
  }
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.nid_c =
    kcg_lit_int64(0);
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.v_nvshunt =
    kcg_lit_int64(0);
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.v_nvstff =
    kcg_lit_int64(0);
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.v_nvonsight =
    kcg_lit_int64(0);
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.v_nvunfit =
    kcg_lit_int64(0);
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.v_nvrel =
    kcg_lit_int64(0);
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.t_nvcontact =
    kcg_lit_int64(0);
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.config.m_MAReqParams.q_dir =
    Q_DIR_Reverse;
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.config.m_MAReqParams.t_mar =
    kcg_lit_int64(0);
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.config.m_MAReqParams.t_timeoutrqst =
    kcg_lit_int64(0);
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.config.m_MAReqParams.t_cycrqst =
    kcg_lit_int64(0);
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.q_dir =
    Q_DIR_Reverse;
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.t_cycloc =
    kcg_lit_int64(0);
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.d_cycloc =
    kcg_lit_int64(0);
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.m_loc =
    M_LOC_Now;
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx136 = 0; idx136 < 32; idx136++) {
    outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx136].d_loc =
      kcg_lit_int64(0);
    outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx136].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx137 = 0; idx137 < 16; idx137++) {
    outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.diagnostic[idx137].valid =
      kcg_true;
    outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.diagnostic[idx137].count =
      kcg_lit_int64(0);
    outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.diagnostic[idx137].timestamp =
      kcg_lit_int64(0);
    outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.diagnostic[idx137].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.diagnostic[idx137].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.diagnostic[idx137].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx140 = 0; idx140 < 8; idx140++) {
    outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx140].m_IsValid =
      kcg_true;
    outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx140].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx140].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx140].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx140].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx140].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx140].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx140].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx140].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx140].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx140].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx140].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx140].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx140].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx140].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx140].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx138 = 0; idx138 < 30; idx138++) {
      outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx140].m_Entry.Messages.PacketHeaders[idx138].nid_packet =
        kcg_lit_int64(0);
      outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx140].m_Entry.Messages.PacketHeaders[idx138].q_dir =
        Q_DIR_Reverse;
      outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx140].m_Entry.Messages.PacketHeaders[idx138].valid =
        kcg_true;
      outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx140].m_Entry.Messages.PacketHeaders[idx138].startAddress =
        kcg_lit_int64(0);
      outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx140].m_Entry.Messages.PacketHeaders[idx138].endAddress =
        kcg_lit_int64(0);
    }
    for (idx139 = 0; idx139 < 500; idx139++) {
      outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx140].m_Entry.Messages.PacketData[idx139] =
        kcg_lit_int64(0);
    }
  }
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.clockk.m_Value =
    kcg_lit_int64(0);
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int64(0);
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int64(0);
  for (idx141 = 0; idx141 < 30; idx141++) {
    outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx141].nid_packet =
      kcg_lit_int64(0);
    outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx141].q_dir =
      Q_DIR_Reverse;
    outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx141].valid =
      kcg_true;
    outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx141].startAddress =
      kcg_lit_int64(0);
    outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx141].endAddress =
      kcg_lit_int64(0);
  }
  for (idx142 = 0; idx142 < 500; idx142++) {
    outC->_L27_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Messages.PacketData[idx142] =
      kcg_lit_int64(0);
  }
  for (idx145 = 0; idx145 < 8; idx145++) {
    outC->_L26_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_Entries[idx145].m_IsValid =
      kcg_true;
    outC->_L26_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_Entries[idx145].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L26_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_Entries[idx145].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L26_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_Entries[idx145].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L26_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_Entries[idx145].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L26_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_Entries[idx145].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L26_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_Entries[idx145].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L26_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_Entries[idx145].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L26_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_Entries[idx145].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L26_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_Entries[idx145].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L26_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_Entries[idx145].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L26_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_Entries[idx145].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L26_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_Entries[idx145].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L26_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_Entries[idx145].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L26_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_Entries[idx145].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L26_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_Entries[idx145].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx143 = 0; idx143 < 30; idx143++) {
      outC->_L26_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_Entries[idx145].m_Entry.Messages.PacketHeaders[idx143].nid_packet =
        kcg_lit_int64(0);
      outC->_L26_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_Entries[idx145].m_Entry.Messages.PacketHeaders[idx143].q_dir =
        Q_DIR_Reverse;
      outC->_L26_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_Entries[idx145].m_Entry.Messages.PacketHeaders[idx143].valid =
        kcg_true;
      outC->_L26_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_Entries[idx145].m_Entry.Messages.PacketHeaders[idx143].startAddress =
        kcg_lit_int64(0);
      outC->_L26_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_Entries[idx145].m_Entry.Messages.PacketHeaders[idx143].endAddress =
        kcg_lit_int64(0);
    }
    for (idx144 = 0; idx144 < 500; idx144++) {
      outC->_L26_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.m_Entries[idx145].m_Entry.Messages.PacketData[idx144] =
        kcg_lit_int64(0);
    }
  }
  outC->_L30_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L30_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L30_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L30_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.Header.t_train =
    kcg_lit_int64(0);
  outC->_L30_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.Header.m_ack = kcg_lit_int64(0);
  outC->_L30_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L30_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L30_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.Header.nid_em = kcg_lit_int64(
      0);
  outC->_L30_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L30_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.Header.d_sr = kcg_lit_int64(0);
  outC->_L30_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L30_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.Header.d_ref = kcg_lit_int64(0);
  outC->_L30_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.Header.q_dir = kcg_lit_int64(0);
  outC->_L30_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L30_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.Header.m_version =
    kcg_lit_int64(0);
  for (idx146 = 0; idx146 < 30; idx146++) {
    outC->_L30_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.Messages.PacketHeaders[idx146].nid_packet =
      kcg_lit_int64(0);
    outC->_L30_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.Messages.PacketHeaders[idx146].q_dir =
      Q_DIR_Reverse;
    outC->_L30_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.Messages.PacketHeaders[idx146].valid =
      kcg_true;
    outC->_L30_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.Messages.PacketHeaders[idx146].startAddress =
      kcg_lit_int64(0);
    outC->_L30_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.Messages.PacketHeaders[idx146].endAddress =
      kcg_lit_int64(0);
  }
  for (idx147 = 0; idx147 < 500; idx147++) {
    outC->_L30_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.Messages.PacketData[idx147] =
      kcg_lit_int64(0);
  }
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx149 = 0; idx149 < 1; idx149++) {
    outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx149].valid =
      kcg_true;
    for (idx148 = 0; idx148 < 15; idx148++) {
      outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx149].telephoneNumber[idx148] =
        kcg_lit_int64(0);
    }
  }
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx150 = 0; idx150 < 4; idx150++) {
    outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_TractionIdentities[idx150].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_TractionIdentities[idx150].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx151 = 0; idx151 < 5; idx151++) {
    outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_NationalSystemIdentities[idx151] =
      kcg_lit_int64(0);
  }
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.session.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.nid_c =
    kcg_lit_int64(0);
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.v_nvshunt =
    kcg_lit_int64(0);
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.v_nvstff =
    kcg_lit_int64(0);
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.v_nvonsight =
    kcg_lit_int64(0);
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.v_nvunfit =
    kcg_lit_int64(0);
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.v_nvrel =
    kcg_lit_int64(0);
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.t_nvcontact =
    kcg_lit_int64(0);
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.config.m_MAReqParams.q_dir =
    Q_DIR_Reverse;
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.config.m_MAReqParams.t_mar =
    kcg_lit_int64(0);
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.config.m_MAReqParams.t_timeoutrqst =
    kcg_lit_int64(0);
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.config.m_MAReqParams.t_cycrqst =
    kcg_lit_int64(0);
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.q_dir =
    Q_DIR_Reverse;
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.t_cycloc =
    kcg_lit_int64(0);
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.d_cycloc =
    kcg_lit_int64(0);
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.m_loc =
    M_LOC_Now;
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx152 = 0; idx152 < 32; idx152++) {
    outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx152].d_loc =
      kcg_lit_int64(0);
    outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx152].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx153 = 0; idx153 < 16; idx153++) {
    outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.diagnostic[idx153].valid =
      kcg_true;
    outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.diagnostic[idx153].count =
      kcg_lit_int64(0);
    outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.diagnostic[idx153].timestamp =
      kcg_lit_int64(0);
    outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.diagnostic[idx153].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.diagnostic[idx153].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.diagnostic[idx153].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx156 = 0; idx156 < 8; idx156++) {
    outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx156].m_IsValid =
      kcg_true;
    outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx156].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx156].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx156].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx156].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx156].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx156].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx156].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx156].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx156].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx156].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx156].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx156].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx156].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx156].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx156].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx154 = 0; idx154 < 30; idx154++) {
      outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx156].m_Entry.Messages.PacketHeaders[idx154].nid_packet =
        kcg_lit_int64(0);
      outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx156].m_Entry.Messages.PacketHeaders[idx154].q_dir =
        Q_DIR_Reverse;
      outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx156].m_Entry.Messages.PacketHeaders[idx154].valid =
        kcg_true;
      outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx156].m_Entry.Messages.PacketHeaders[idx154].startAddress =
        kcg_lit_int64(0);
      outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx156].m_Entry.Messages.PacketHeaders[idx154].endAddress =
        kcg_lit_int64(0);
    }
    for (idx155 = 0; idx155 < 500; idx155++) {
      outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx156].m_Entry.Messages.PacketData[idx155] =
        kcg_lit_int64(0);
    }
  }
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.clockk.m_Value =
    kcg_lit_int64(0);
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int64(0);
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int64(0);
  for (idx157 = 0; idx157 < 30; idx157++) {
    outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx157].nid_packet =
      kcg_lit_int64(0);
    outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx157].q_dir =
      Q_DIR_Reverse;
    outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx157].valid =
      kcg_true;
    outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx157].startAddress =
      kcg_lit_int64(0);
    outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx157].endAddress =
      kcg_lit_int64(0);
  }
  for (idx158 = 0; idx158 < 500; idx158++) {
    outC->_L29_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Messages.PacketData[idx158] =
      kcg_lit_int64(0);
  }
  for (idx161 = 0; idx161 < 8; idx161++) {
    outC->_L66_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_Entries[idx161].m_IsValid =
      kcg_true;
    outC->_L66_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_Entries[idx161].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L66_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_Entries[idx161].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L66_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_Entries[idx161].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L66_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_Entries[idx161].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L66_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_Entries[idx161].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L66_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_Entries[idx161].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L66_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_Entries[idx161].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L66_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_Entries[idx161].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L66_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_Entries[idx161].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L66_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_Entries[idx161].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L66_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_Entries[idx161].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L66_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_Entries[idx161].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L66_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_Entries[idx161].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L66_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_Entries[idx161].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L66_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_Entries[idx161].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx159 = 0; idx159 < 30; idx159++) {
      outC->_L66_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_Entries[idx161].m_Entry.Messages.PacketHeaders[idx159].nid_packet =
        kcg_lit_int64(0);
      outC->_L66_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_Entries[idx161].m_Entry.Messages.PacketHeaders[idx159].q_dir =
        Q_DIR_Reverse;
      outC->_L66_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_Entries[idx161].m_Entry.Messages.PacketHeaders[idx159].valid =
        kcg_true;
      outC->_L66_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_Entries[idx161].m_Entry.Messages.PacketHeaders[idx159].startAddress =
        kcg_lit_int64(0);
      outC->_L66_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_Entries[idx161].m_Entry.Messages.PacketHeaders[idx159].endAddress =
        kcg_lit_int64(0);
    }
    for (idx160 = 0; idx160 < 500; idx160++) {
      outC->_L66_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_Entries[idx161].m_Entry.Messages.PacketData[idx160] =
        kcg_lit_int64(0);
    }
  }
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx163 = 0; idx163 < 1; idx163++) {
    outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx163].valid =
      kcg_true;
    for (idx162 = 0; idx162 < 15; idx162++) {
      outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx163].telephoneNumber[idx162] =
        kcg_lit_int64(0);
    }
  }
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx164 = 0; idx164 < 4; idx164++) {
    outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_TractionIdentities[idx164].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_TractionIdentities[idx164].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx165 = 0; idx165 < 5; idx165++) {
    outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_NationalSystemIdentities[idx165] =
      kcg_lit_int64(0);
  }
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.session.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.session.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.session.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.session.m_PosData.d_lrbg =
    kcg_lit_int64(0);
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.session.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.session.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.session.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.session.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.session.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.session.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.session.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.session.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.session.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.session.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.session.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.nid_c =
    kcg_lit_int64(0);
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.v_nvshunt =
    kcg_lit_int64(0);
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.v_nvstff =
    kcg_lit_int64(0);
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.v_nvonsight =
    kcg_lit_int64(0);
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.v_nvunfit =
    kcg_lit_int64(0);
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.v_nvrel =
    kcg_lit_int64(0);
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.t_nvcontact =
    kcg_lit_int64(0);
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.config.m_MAReqParams.q_dir =
    Q_DIR_Reverse;
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.config.m_MAReqParams.t_mar =
    kcg_lit_int64(0);
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.config.m_MAReqParams.t_timeoutrqst =
    kcg_lit_int64(0);
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.config.m_MAReqParams.t_cycrqst =
    kcg_lit_int64(0);
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.q_dir =
    Q_DIR_Reverse;
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.t_cycloc =
    kcg_lit_int64(0);
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.d_cycloc =
    kcg_lit_int64(0);
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.m_loc =
    M_LOC_Now;
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx166 = 0; idx166 < 32; idx166++) {
    outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx166].d_loc =
      kcg_lit_int64(0);
    outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx166].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx167 = 0; idx167 < 16; idx167++) {
    outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.diagnostic[idx167].valid = kcg_true;
    outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.diagnostic[idx167].count =
      kcg_lit_int64(0);
    outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.diagnostic[idx167].timestamp =
      kcg_lit_int64(0);
    outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.diagnostic[idx167].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.diagnostic[idx167].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.diagnostic[idx167].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx170 = 0; idx170 < 8; idx170++) {
    outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx170].m_IsValid =
      kcg_true;
    outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx170].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx170].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx170].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx170].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx170].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx170].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx170].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx170].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx170].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx170].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx170].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx170].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx170].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx170].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx170].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx168 = 0; idx168 < 30; idx168++) {
      outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx170].m_Entry.Messages.PacketHeaders[idx168].nid_packet =
        kcg_lit_int64(0);
      outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx170].m_Entry.Messages.PacketHeaders[idx168].q_dir =
        Q_DIR_Reverse;
      outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx170].m_Entry.Messages.PacketHeaders[idx168].valid =
        kcg_true;
      outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx170].m_Entry.Messages.PacketHeaders[idx168].startAddress =
        kcg_lit_int64(0);
      outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx170].m_Entry.Messages.PacketHeaders[idx168].endAddress =
        kcg_lit_int64(0);
    }
    for (idx169 = 0; idx169 < 500; idx169++) {
      outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx170].m_Entry.Messages.PacketData[idx169] =
        kcg_lit_int64(0);
    }
  }
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.clockk.m_Value = kcg_lit_int64(0);
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int64(0);
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int64(0);
  for (idx171 = 0; idx171 < 30; idx171++) {
    outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx171].nid_packet =
      kcg_lit_int64(0);
    outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx171].q_dir =
      Q_DIR_Reverse;
    outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx171].valid =
      kcg_true;
    outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx171].startAddress =
      kcg_lit_int64(0);
    outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx171].endAddress =
      kcg_lit_int64(0);
  }
  for (idx172 = 0; idx172 < 500; idx172++) {
    outC->_L65_MODE_TRIP_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Messages.PacketData[idx172] =
      kcg_lit_int64(0);
  }
  outC->_L64_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L64_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx174 = 0; idx174 < 1; idx174++) {
    outC->_L64_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_TrainData.m_OnboardPhoneNumbers[idx174].valid =
      kcg_true;
    for (idx173 = 0; idx173 < 15; idx173++) {
      outC->_L64_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_TrainData.m_OnboardPhoneNumbers[idx174].telephoneNumber[idx173] =
        kcg_lit_int64(0);
    }
  }
  outC->_L64_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L64_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L64_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L64_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L64_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L64_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L64_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L64_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L64_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_TrainData.n_axle = kcg_lit_int64(
      0);
  for (idx175 = 0; idx175 < 4; idx175++) {
    outC->_L64_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_TrainData.m_TractionIdentities[idx175].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L64_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_TrainData.m_TractionIdentities[idx175].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx176 = 0; idx176 < 5; idx176++) {
    outC->_L64_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_TrainData.m_NationalSystemIdentities[idx176] =
      kcg_lit_int64(0);
  }
  outC->_L64_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L64_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_PosData.nid_lrbg = kcg_lit_int64(
      0);
  outC->_L64_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L64_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_PosData.d_lrbg = kcg_lit_int64(0);
  outC->_L64_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L64_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L64_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L64_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L64_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L64_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L64_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_PosData.v_train = kcg_lit_int64(0);
  outC->_L64_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L64_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L64_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L64_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_PosData.nid_ntc = kcg_lit_int64(0);
  outC->_L64_MODE_TRIP_TRIP_AND_POST_TRIP_SM.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L5_IDLE_TRIP_AND_POST_TRIP_SM.m_TrainData.nid_engine = kcg_lit_int64(0);
  outC->_L5_IDLE_TRIP_AND_POST_TRIP_SM.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx178 = 0; idx178 < 1; idx178++) {
    outC->_L5_IDLE_TRIP_AND_POST_TRIP_SM.m_TrainData.m_OnboardPhoneNumbers[idx178].valid =
      kcg_true;
    for (idx177 = 0; idx177 < 15; idx177++) {
      outC->_L5_IDLE_TRIP_AND_POST_TRIP_SM.m_TrainData.m_OnboardPhoneNumbers[idx178].telephoneNumber[idx177] =
        kcg_lit_int64(0);
    }
  }
  outC->_L5_IDLE_TRIP_AND_POST_TRIP_SM.m_TrainData.t_train_ref = kcg_lit_int64(0);
  outC->_L5_IDLE_TRIP_AND_POST_TRIP_SM.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L5_IDLE_TRIP_AND_POST_TRIP_SM.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L5_IDLE_TRIP_AND_POST_TRIP_SM.m_TrainData.l_train = kcg_lit_int64(0);
  outC->_L5_IDLE_TRIP_AND_POST_TRIP_SM.m_TrainData.v_maxtrain = kcg_lit_int64(0);
  outC->_L5_IDLE_TRIP_AND_POST_TRIP_SM.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L5_IDLE_TRIP_AND_POST_TRIP_SM.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L5_IDLE_TRIP_AND_POST_TRIP_SM.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L5_IDLE_TRIP_AND_POST_TRIP_SM.m_TrainData.n_axle = kcg_lit_int64(0);
  for (idx179 = 0; idx179 < 4; idx179++) {
    outC->_L5_IDLE_TRIP_AND_POST_TRIP_SM.m_TrainData.m_TractionIdentities[idx179].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L5_IDLE_TRIP_AND_POST_TRIP_SM.m_TrainData.m_TractionIdentities[idx179].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx180 = 0; idx180 < 5; idx180++) {
    outC->_L5_IDLE_TRIP_AND_POST_TRIP_SM.m_TrainData.m_NationalSystemIdentities[idx180] =
      kcg_lit_int64(0);
  }
  outC->_L5_IDLE_TRIP_AND_POST_TRIP_SM.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L5_IDLE_TRIP_AND_POST_TRIP_SM.m_PosData.nid_lrbg = kcg_lit_int64(0);
  outC->_L5_IDLE_TRIP_AND_POST_TRIP_SM.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L5_IDLE_TRIP_AND_POST_TRIP_SM.m_PosData.d_lrbg = kcg_lit_int64(0);
  outC->_L5_IDLE_TRIP_AND_POST_TRIP_SM.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L5_IDLE_TRIP_AND_POST_TRIP_SM.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L5_IDLE_TRIP_AND_POST_TRIP_SM.m_PosData.l_doubtover = kcg_lit_int64(0);
  outC->_L5_IDLE_TRIP_AND_POST_TRIP_SM.m_PosData.l_doubtunder = kcg_lit_int64(0);
  outC->_L5_IDLE_TRIP_AND_POST_TRIP_SM.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L5_IDLE_TRIP_AND_POST_TRIP_SM.m_PosData.l_trainint = kcg_lit_int64(0);
  outC->_L5_IDLE_TRIP_AND_POST_TRIP_SM.m_PosData.v_train = kcg_lit_int64(0);
  outC->_L5_IDLE_TRIP_AND_POST_TRIP_SM.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L5_IDLE_TRIP_AND_POST_TRIP_SM.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L5_IDLE_TRIP_AND_POST_TRIP_SM.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L5_IDLE_TRIP_AND_POST_TRIP_SM.m_PosData.nid_ntc = kcg_lit_int64(0);
  outC->_L5_IDLE_TRIP_AND_POST_TRIP_SM.m_PosData.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.session.m_TrainData.nid_engine =
    kcg_lit_int64(0);
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx182 = 0; idx182 < 1; idx182++) {
    outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx182].valid =
      kcg_true;
    for (idx181 = 0; idx181 < 15; idx181++) {
      outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_OnboardPhoneNumbers[idx182].telephoneNumber[idx181] =
        kcg_lit_int64(0);
    }
  }
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.session.m_TrainData.t_train_ref =
    kcg_lit_int64(0);
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.session.m_TrainData.l_train =
    kcg_lit_int64(0);
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.session.m_TrainData.v_maxtrain =
    kcg_lit_int64(0);
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.session.m_TrainData.n_axle =
    kcg_lit_int64(0);
  for (idx183 = 0; idx183 < 4; idx183++) {
    outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_TractionIdentities[idx183].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_TractionIdentities[idx183].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx184 = 0; idx184 < 5; idx184++) {
    outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.session.m_TrainData.m_NationalSystemIdentities[idx184] =
      kcg_lit_int64(0);
  }
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.session.m_TrainData.nid_operational =
    kcg_lit_int64(0);
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.session.m_PosData.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.session.m_PosData.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.session.m_PosData.d_lrbg = kcg_lit_int64(
      0);
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.session.m_PosData.q_dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.session.m_PosData.q_dlrbg =
    Q_DLRBG_Reverse;
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.session.m_PosData.l_doubtover =
    kcg_lit_int64(0);
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.session.m_PosData.l_doubtunder =
    kcg_lit_int64(0);
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.session.m_PosData.l_trainint =
    kcg_lit_int64(0);
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.session.m_PosData.v_train =
    kcg_lit_int64(0);
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.session.m_PosData.q_dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.session.m_PosData.m_mode =
    M_MODE_Full_Supervision;
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.session.m_PosData.m_level =
    M_LEVEL_Level_0;
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.session.m_PosData.nid_ntc =
    kcg_lit_int64(0);
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.session.m_PosData.nid_prvlrbg =
    kcg_lit_int64(0);
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.nid_c =
    kcg_lit_int64(0);
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.v_nvshunt =
    kcg_lit_int64(0);
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.v_nvstff =
    kcg_lit_int64(0);
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.v_nvonsight =
    kcg_lit_int64(0);
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.v_nvunfit =
    kcg_lit_int64(0);
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.v_nvrel =
    kcg_lit_int64(0);
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.config.m_NationalParams.t_nvcontact =
    kcg_lit_int64(0);
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.config.m_MAReqParams.t_mar =
    kcg_lit_int64(0);
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.config.m_MAReqParams.t_timeoutrqst =
    kcg_lit_int64(0);
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.config.m_MAReqParams.t_cycrqst =
    kcg_lit_int64(0);
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.q_dir =
    Q_DIR_Reverse;
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.t_cycloc =
    kcg_lit_int64(0);
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.d_cycloc =
    kcg_lit_int64(0);
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx185 = 0; idx185 < 32; idx185++) {
    outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx185].d_loc =
      kcg_lit_int64(0);
    outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx185].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx186 = 0; idx186 < 16; idx186++) {
    outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.diagnostic[idx186].valid = kcg_true;
    outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.diagnostic[idx186].count =
      kcg_lit_int64(0);
    outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.diagnostic[idx186].timestamp =
      kcg_lit_int64(0);
    outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.diagnostic[idx186].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.diagnostic[idx186].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.diagnostic[idx186].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx189 = 0; idx189 < 8; idx189++) {
    outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx189].m_IsValid =
      kcg_true;
    outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx189].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx189].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx189].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx189].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx189].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx189].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx189].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx189].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx189].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx189].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx189].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx189].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx189].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx189].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx189].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx187 = 0; idx187 < 30; idx187++) {
      outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx189].m_Entry.Messages.PacketHeaders[idx187].nid_packet =
        kcg_lit_int64(0);
      outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx189].m_Entry.Messages.PacketHeaders[idx187].q_dir =
        Q_DIR_Reverse;
      outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx189].m_Entry.Messages.PacketHeaders[idx187].valid =
        kcg_true;
      outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx189].m_Entry.Messages.PacketHeaders[idx187].startAddress =
        kcg_lit_int64(0);
      outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx189].m_Entry.Messages.PacketHeaders[idx187].endAddress =
        kcg_lit_int64(0);
    }
    for (idx188 = 0; idx188 < 500; idx188++) {
      outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.messageQueue.m_Entries[idx189].m_Entry.Messages.PacketData[idx188] =
        kcg_lit_int64(0);
    }
  }
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.clockk.m_Value = kcg_lit_int64(0);
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int64(0);
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int64(0);
  for (idx190 = 0; idx190 < 30; idx190++) {
    outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx190].nid_packet =
      kcg_lit_int64(0);
    outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx190].q_dir =
      Q_DIR_Reverse;
    outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx190].valid =
      kcg_true;
    outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx190].startAddress =
      kcg_lit_int64(0);
    outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Messages.PacketHeaders[idx190].endAddress =
      kcg_lit_int64(0);
  }
  for (idx191 = 0; idx191 < 500; idx191++) {
    outC->_L4_IDLE_TRIP_AND_POST_TRIP_SM.lastSentTrackTrainMessage.Messages.PacketData[idx191] =
      kcg_lit_int64(0);
  }
  for (idx194 = 0; idx194 < 8; idx194++) {
    outC->_L3_IDLE_TRIP_AND_POST_TRIP_SM.m_Entries[idx194].m_IsValid = kcg_true;
    outC->_L3_IDLE_TRIP_AND_POST_TRIP_SM.m_Entries[idx194].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L3_IDLE_TRIP_AND_POST_TRIP_SM.m_Entries[idx194].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L3_IDLE_TRIP_AND_POST_TRIP_SM.m_Entries[idx194].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L3_IDLE_TRIP_AND_POST_TRIP_SM.m_Entries[idx194].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L3_IDLE_TRIP_AND_POST_TRIP_SM.m_Entries[idx194].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L3_IDLE_TRIP_AND_POST_TRIP_SM.m_Entries[idx194].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L3_IDLE_TRIP_AND_POST_TRIP_SM.m_Entries[idx194].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L3_IDLE_TRIP_AND_POST_TRIP_SM.m_Entries[idx194].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L3_IDLE_TRIP_AND_POST_TRIP_SM.m_Entries[idx194].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L3_IDLE_TRIP_AND_POST_TRIP_SM.m_Entries[idx194].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L3_IDLE_TRIP_AND_POST_TRIP_SM.m_Entries[idx194].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L3_IDLE_TRIP_AND_POST_TRIP_SM.m_Entries[idx194].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L3_IDLE_TRIP_AND_POST_TRIP_SM.m_Entries[idx194].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L3_IDLE_TRIP_AND_POST_TRIP_SM.m_Entries[idx194].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L3_IDLE_TRIP_AND_POST_TRIP_SM.m_Entries[idx194].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx192 = 0; idx192 < 30; idx192++) {
      outC->_L3_IDLE_TRIP_AND_POST_TRIP_SM.m_Entries[idx194].m_Entry.Messages.PacketHeaders[idx192].nid_packet =
        kcg_lit_int64(0);
      outC->_L3_IDLE_TRIP_AND_POST_TRIP_SM.m_Entries[idx194].m_Entry.Messages.PacketHeaders[idx192].q_dir =
        Q_DIR_Reverse;
      outC->_L3_IDLE_TRIP_AND_POST_TRIP_SM.m_Entries[idx194].m_Entry.Messages.PacketHeaders[idx192].valid =
        kcg_true;
      outC->_L3_IDLE_TRIP_AND_POST_TRIP_SM.m_Entries[idx194].m_Entry.Messages.PacketHeaders[idx192].startAddress =
        kcg_lit_int64(0);
      outC->_L3_IDLE_TRIP_AND_POST_TRIP_SM.m_Entries[idx194].m_Entry.Messages.PacketHeaders[idx192].endAddress =
        kcg_lit_int64(0);
    }
    for (idx193 = 0; idx193 < 500; idx193++) {
      outC->_L3_IDLE_TRIP_AND_POST_TRIP_SM.m_Entries[idx194].m_Entry.Messages.PacketData[idx193] =
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
  for (idx195 = 0; idx195 < 30; idx195++) {
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketHeaders[idx195].nid_packet =
      kcg_lit_int64(0);
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketHeaders[idx195].q_dir =
      Q_DIR_Reverse;
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketHeaders[idx195].valid =
      kcg_true;
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketHeaders[idx195].startAddress =
      kcg_lit_int64(0);
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketHeaders[idx195].endAddress =
      kcg_lit_int64(0);
  }
  for (idx196 = 0; idx196 < 500; idx196++) {
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketData[idx196] =
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
  for (idx198 = 0; idx198 < 1; idx198++) {
    outC->outRadioTrainTrackMessage.packets.p3.aNID_RADIO[idx198].valid = kcg_true;
    for (idx197 = 0; idx197 < 15; idx197++) {
      outC->outRadioTrainTrackMessage.packets.p3.aNID_RADIO[idx198].telephoneNumber[idx197] =
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
  for (idx199 = 0; idx199 < 4; idx199++) {
    outC->outRadioTrainTrackMessage.packets.p11.tractionIdentity[idx199].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->outRadioTrainTrackMessage.packets.p11.tractionIdentity[idx199].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->outRadioTrainTrackMessage.packets.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx200 = 0; idx200 < 5; idx200++) {
    outC->outRadioTrainTrackMessage.packets.p11.nid_ntc[idx200] = kcg_lit_int64(0);
  }
  outC->outDataBus.session.m_TrainData.nid_engine = kcg_lit_int64(0);
  outC->outDataBus.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx202 = 0; idx202 < 1; idx202++) {
    outC->outDataBus.session.m_TrainData.m_OnboardPhoneNumbers[idx202].valid =
      kcg_true;
    for (idx201 = 0; idx201 < 15; idx201++) {
      outC->outDataBus.session.m_TrainData.m_OnboardPhoneNumbers[idx202].telephoneNumber[idx201] =
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
  for (idx203 = 0; idx203 < 4; idx203++) {
    outC->outDataBus.session.m_TrainData.m_TractionIdentities[idx203].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->outDataBus.session.m_TrainData.m_TractionIdentities[idx203].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx204 = 0; idx204 < 5; idx204++) {
    outC->outDataBus.session.m_TrainData.m_NationalSystemIdentities[idx204] =
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
  for (idx205 = 0; idx205 < 32; idx205++) {
    outC->outDataBus.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx205].d_loc =
      kcg_lit_int64(0);
    outC->outDataBus.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx205].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx206 = 0; idx206 < 16; idx206++) {
    outC->outDataBus.diagnostic[idx206].valid = kcg_true;
    outC->outDataBus.diagnostic[idx206].count = kcg_lit_int64(0);
    outC->outDataBus.diagnostic[idx206].timestamp = kcg_lit_int64(0);
    outC->outDataBus.diagnostic[idx206].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->outDataBus.diagnostic[idx206].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->outDataBus.diagnostic[idx206].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx209 = 0; idx209 < 8; idx209++) {
    outC->outDataBus.messageQueue.m_Entries[idx209].m_IsValid = kcg_true;
    outC->outDataBus.messageQueue.m_Entries[idx209].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx209].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx209].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx209].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx209].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx209].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx209].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx209].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx209].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx209].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx209].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx209].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx209].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx209].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx209].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx207 = 0; idx207 < 30; idx207++) {
      outC->outDataBus.messageQueue.m_Entries[idx209].m_Entry.Messages.PacketHeaders[idx207].nid_packet =
        kcg_lit_int64(0);
      outC->outDataBus.messageQueue.m_Entries[idx209].m_Entry.Messages.PacketHeaders[idx207].q_dir =
        Q_DIR_Reverse;
      outC->outDataBus.messageQueue.m_Entries[idx209].m_Entry.Messages.PacketHeaders[idx207].valid =
        kcg_true;
      outC->outDataBus.messageQueue.m_Entries[idx209].m_Entry.Messages.PacketHeaders[idx207].startAddress =
        kcg_lit_int64(0);
      outC->outDataBus.messageQueue.m_Entries[idx209].m_Entry.Messages.PacketHeaders[idx207].endAddress =
        kcg_lit_int64(0);
    }
    for (idx208 = 0; idx208 < 500; idx208++) {
      outC->outDataBus.messageQueue.m_Entries[idx209].m_Entry.Messages.PacketData[idx208] =
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
  for (idx210 = 0; idx210 < 30; idx210++) {
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[idx210].nid_packet =
      kcg_lit_int64(0);
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[idx210].q_dir =
      Q_DIR_Reverse;
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[idx210].valid =
      kcg_true;
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[idx210].startAddress =
      kcg_lit_int64(0);
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[idx210].endAddress =
      kcg_lit_int64(0);
  }
  for (idx211 = 0; idx211 < 500; idx211++) {
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketData[idx211] =
      kcg_lit_int64(0);
  }
  /* TRIP_AND_POST_TRIP_SM:MODE_POST_TRIP:_L18=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#5)/ */
  RadioTrackTrainHeader__Get_NID_MESSAGE_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Get_NID_MESSAGE_5);
  /* TRIP_AND_POST_TRIP_SM:MODE_POST_TRIP:_L19=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_T_TRAIN#4)/ */
  RadioTrackTrainHeader__Get_T_TRAIN_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Get_T_TRAIN_4);
  /* TRIP_AND_POST_TRIP_SM:MODE_POST_TRIP:_L25=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#5)/ */
  RadioTrackTrainMessage__GetHeader_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainMessage__GetHeader_5);
  /* TRIP_AND_POST_TRIP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L8=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_T_TRAIN_Ref#1)/ */
  RadioTrainTrackHeader__Get_T_TRAIN_Ref_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackHeader__Get_T_TRAIN_Ref_1);
  /* TRIP_AND_POST_TRIP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L1=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#2)/ */
  RadioTrainTrackMessage__GetHeader_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackMessage__GetHeader_2);
  /* TRIP_AND_POST_TRIP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L15=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#3)/ */
  RadioTrackTrainHeader__Get_NID_MESSAGE_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Get_NID_MESSAGE_3);
  /* TRIP_AND_POST_TRIP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L18=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_T_TRAIN#2)/ */
  RadioTrackTrainHeader__Get_T_TRAIN_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Get_T_TRAIN_2);
  /* TRIP_AND_POST_TRIP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L16=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#3)/ */
  RadioTrackTrainMessage__GetHeader_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainMessage__GetHeader_3);
  /* TRIP_AND_POST_TRIP_SM:SEND_MSG_06:_L4=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut#3)/ */
  RadioTrackTrainMessageQueue__TryPut_init_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueue__TryPut_3);
  /* TRIP_AND_POST_TRIP_SM:SEND_MSG_06:_L7=(RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__Create#3)/ */
  RadioTrackTrainMessageQueueEntry__Create_init_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueueEntry__Create_3);
  /* TRIP_AND_POST_TRIP_SM:SEND_MSG_06:_L5=(RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg006_BSL2#3)/ */
  RadioTrackTrainFactory__CreateMsg006_BSL2_init_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
    &outC->Context_RadioTrackTrainFactory__CreateMsg006_BSL2_3);
  /* TRIP_AND_POST_TRIP_SM:SEND_MSG_06:_L9=(RBC_Session_Pkg::PosData__Get_NID_LRBG#3)/ */
  PosData__Get_NID_LRBG_init_RBC_Session_Pkg(
    &outC->Context_PosData__Get_NID_LRBG_3);
  /* TRIP_AND_POST_TRIP_SM:SEND_MSG_06:_L6=(RBC_Session_Pkg::SessionManagement__GetPosData#3)/ */
  SessionManagement__GetPosData_init_RBC_Session_Pkg(
    &outC->Context_SessionManagement__GetPosData_3);
  /* _L82=(RBC_Model_Pkg::RBC__ProcessModeAndLevel#3)/ */
  RBC__ProcessModeAndLevel_init_RBC_Model_Pkg(
    &outC->Context_RBC__ProcessModeAndLevel_3);
  /* _L67=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_MESSAGE#1)/ */
  RadioTrainTrackHeader__Get_NID_MESSAGE_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackHeader__Get_NID_MESSAGE_1);
  /* _L66=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#1)/ */
  RadioTrainTrackMessage__GetHeader_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackMessage__GetHeader_1);
  outC->TRIP_AND_POST_TRIP_SM_reset_act = kcg_false;
  outC->TRIP_AND_POST_TRIP_SM_reset_nxt = kcg_false;
  outC->TRIP_AND_POST_TRIP_SM_state_nxt = SSM_st_IDLE_TRIP_AND_POST_TRIP_SM;
  outC->recognitionMessageWasSentTimestamp = T_TRAIN_MIN;
  outC->validAck = kcg_false;
  outC->invalidAck = kcg_false;
}
#endif /* KCG_USER_DEFINED_INIT */


void RBC__ProcessTripAndPostTrip_reset_RBC_Model_Pkg(
  outC_RBC__ProcessTripAndPostTrip_RBC_Model_Pkg *outC)
{
  /* TRIP_AND_POST_TRIP_SM:MODE_POST_TRIP:_L18=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#5)/ */
  RadioTrackTrainHeader__Get_NID_MESSAGE_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Get_NID_MESSAGE_5);
  /* TRIP_AND_POST_TRIP_SM:MODE_POST_TRIP:_L19=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_T_TRAIN#4)/ */
  RadioTrackTrainHeader__Get_T_TRAIN_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Get_T_TRAIN_4);
  /* TRIP_AND_POST_TRIP_SM:MODE_POST_TRIP:_L25=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#5)/ */
  RadioTrackTrainMessage__GetHeader_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainMessage__GetHeader_5);
  /* TRIP_AND_POST_TRIP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L8=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_T_TRAIN_Ref#1)/ */
  RadioTrainTrackHeader__Get_T_TRAIN_Ref_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackHeader__Get_T_TRAIN_Ref_1);
  /* TRIP_AND_POST_TRIP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L1=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#2)/ */
  RadioTrainTrackMessage__GetHeader_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackMessage__GetHeader_2);
  /* TRIP_AND_POST_TRIP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L15=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE#3)/ */
  RadioTrackTrainHeader__Get_NID_MESSAGE_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Get_NID_MESSAGE_3);
  /* TRIP_AND_POST_TRIP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L18=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_T_TRAIN#2)/ */
  RadioTrackTrainHeader__Get_T_TRAIN_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Get_T_TRAIN_2);
  /* TRIP_AND_POST_TRIP_SM:TRY_PROCESS_ACKNOWLEDGEMENT:_L16=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#3)/ */
  RadioTrackTrainMessage__GetHeader_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainMessage__GetHeader_3);
  /* TRIP_AND_POST_TRIP_SM:SEND_MSG_06:_L4=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut#3)/ */
  RadioTrackTrainMessageQueue__TryPut_reset_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueue__TryPut_3);
  /* TRIP_AND_POST_TRIP_SM:SEND_MSG_06:_L7=(RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__Create#3)/ */
  RadioTrackTrainMessageQueueEntry__Create_reset_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueueEntry__Create_3);
  /* TRIP_AND_POST_TRIP_SM:SEND_MSG_06:_L5=(RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg006_BSL2#3)/ */
  RadioTrackTrainFactory__CreateMsg006_BSL2_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
    &outC->Context_RadioTrackTrainFactory__CreateMsg006_BSL2_3);
  /* TRIP_AND_POST_TRIP_SM:SEND_MSG_06:_L9=(RBC_Session_Pkg::PosData__Get_NID_LRBG#3)/ */
  PosData__Get_NID_LRBG_reset_RBC_Session_Pkg(
    &outC->Context_PosData__Get_NID_LRBG_3);
  /* TRIP_AND_POST_TRIP_SM:SEND_MSG_06:_L6=(RBC_Session_Pkg::SessionManagement__GetPosData#3)/ */
  SessionManagement__GetPosData_reset_RBC_Session_Pkg(
    &outC->Context_SessionManagement__GetPosData_3);
  /* _L82=(RBC_Model_Pkg::RBC__ProcessModeAndLevel#3)/ */
  RBC__ProcessModeAndLevel_reset_RBC_Model_Pkg(
    &outC->Context_RBC__ProcessModeAndLevel_3);
  /* _L67=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_MESSAGE#1)/ */
  RadioTrainTrackHeader__Get_NID_MESSAGE_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackHeader__Get_NID_MESSAGE_1);
  /* _L66=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#1)/ */
  RadioTrainTrackMessage__GetHeader_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackMessage__GetHeader_1);
  outC->TRIP_AND_POST_TRIP_SM_reset_act = kcg_false;
  outC->TRIP_AND_POST_TRIP_SM_reset_nxt = kcg_false;
  outC->TRIP_AND_POST_TRIP_SM_state_nxt = SSM_st_IDLE_TRIP_AND_POST_TRIP_SM;
  outC->recognitionMessageWasSentTimestamp = T_TRAIN_MIN;
  outC->validAck = kcg_false;
  outC->invalidAck = kcg_false;
}


void kcg_save_SV_RBC__ProcessTripAndPostTrip_RBC_Model_Pkg(
  SV_RBC__ProcessTripAndPostTrip_RBC_Model_Pkg *SV,
  outC_RBC__ProcessTripAndPostTrip_RBC_Model_Pkg *outC)
{
  kcg_save_SV_RBC__ProcessModeAndLevel_RBC_Model_Pkg(
    &SV->Context_RBC__ProcessModeAndLevel_3,
    &outC->Context_RBC__ProcessModeAndLevel_3);
  SV->Context_recognitionMessageWasSentTimestamp =
    outC->recognitionMessageWasSentTimestamp;
  SV->Context_TRIP_AND_POST_TRIP_SM_reset_nxt =
    outC->TRIP_AND_POST_TRIP_SM_reset_nxt;
  SV->Context_TRIP_AND_POST_TRIP_SM_reset_act =
    outC->TRIP_AND_POST_TRIP_SM_reset_act;
  SV->Context_TRIP_AND_POST_TRIP_SM_state_nxt =
    outC->TRIP_AND_POST_TRIP_SM_state_nxt;
  SV->Context_validAck = outC->validAck;
  SV->Context_invalidAck = outC->invalidAck;
}

void kcg_load_SV_RBC__ProcessTripAndPostTrip_RBC_Model_Pkg(
  outC_RBC__ProcessTripAndPostTrip_RBC_Model_Pkg *outC,
  SV_RBC__ProcessTripAndPostTrip_RBC_Model_Pkg *SV)
{
  kcg_load_SV_RBC__ProcessModeAndLevel_RBC_Model_Pkg(
    &outC->Context_RBC__ProcessModeAndLevel_3,
    &SV->Context_RBC__ProcessModeAndLevel_3);
  outC->recognitionMessageWasSentTimestamp =
    SV->Context_recognitionMessageWasSentTimestamp;
  outC->TRIP_AND_POST_TRIP_SM_reset_nxt =
    SV->Context_TRIP_AND_POST_TRIP_SM_reset_nxt;
  outC->TRIP_AND_POST_TRIP_SM_reset_act =
    SV->Context_TRIP_AND_POST_TRIP_SM_reset_act;
  outC->TRIP_AND_POST_TRIP_SM_state_nxt =
    SV->Context_TRIP_AND_POST_TRIP_SM_state_nxt;
  outC->validAck = SV->Context_validAck;
  outC->invalidAck = SV->Context_invalidAck;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RBC__ProcessTripAndPostTrip_RBC_Model_Pkg.c
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

