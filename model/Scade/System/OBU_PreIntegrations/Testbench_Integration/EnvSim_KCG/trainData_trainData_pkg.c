/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "trainData_trainData_pkg.h"

/* trainData_pkg::trainData/ */
void trainData_trainData_pkg(
  /* reset/ */
  kcg_bool reset,
  /* trainDatafromTIU/ */
  trainData_T_TIU_Types_Pkg *trainDatafromTIU,
  /* trainDatafromDriver/ */
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *trainDatafromDriver,
  /* trainDataAckfromDriver/ */
  DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *trainDataAckfromDriver,
  /* trackMessages/ */
  ReceivedMessage_T_Common_Types_Pkg *trackMessages,
  /* eventsForTrainData/ */
  trainData_Events_T_trainData_Types_pkg *eventsForTrainData,
  /* nidEngine/ */
  NID_ENGINE nidEngine,
  /* p0_positionReport/ */
  PT0_PositionReport_T_Packet_TrainTypes_Pkg *p0_positionReport,
  /* p1_positionReport/ */
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *p1_positionReport,
  /* inMessageBus/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *inMessageBus,
  /* inVersion/ */
  M_VERSION inVersion,
  /* t_train/ */
  T_TRAIN t_train,
  outC_trainData_trainData_pkg *outC)
{
  static kcg_bool op_call;
  static kcg_bool _1_op_call;
  static kcg_bool _2_op_call;
  static kcg_bool _3_op_call;
  static trainDataStatus_T_trainData_Types_pkg _4_op_call;
  /* outMessageBus/ */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus outMessageBus_partial;
  /* trainDataStatus/ */
  static trainDataStatus_T_trainData_Types_pkg trainDataStatus_partial;
  /* outMessageBus/ */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _5_outMessageBus_partial;
  /* trainDataStatus/ */
  static trainDataStatus_T_trainData_Types_pkg _6_trainDataStatus_partial;
  /* outMessageBus/ */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _7_outMessageBus_partial;
  /* trainDataStatus/ */
  static trainDataStatus_T_trainData_Types_pkg _8_trainDataStatus_partial;
  /* outMessageBus/ */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _9_outMessageBus_partial;
  /* trainDataStatus/ */
  static trainDataStatus_T_trainData_Types_pkg _10_trainDataStatus_partial;
  /* trainDataStatus/ */
  static trainDataStatus_T_trainData_Types_pkg _11_trainDataStatus_partial;
  /* outMessageBus/ */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _12_outMessageBus_partial;
  /* trainDataStatus/ */
  static trainDataStatus_T_trainData_Types_pkg _13_trainDataStatus_partial;
  /* outMessageBus/ */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _14_outMessageBus_partial;
  /* trainDataStatus/ */
  static trainDataStatus_T_trainData_Types_pkg last_trainDataStatus;

  kcg_copy_trainDataStatus_T_trainData_Types_pkg(
    &last_trainDataStatus,
    &outC->trainDataStatus);
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(
    &outC->_L45,
    &last_trainDataStatus);
  outC->_L46 = outC->_L45.waitingForRBCResponse;
  outC->every2 = outC->_L46;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L4, trackMessages);
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(
    &outC->_L62,
    &last_trainDataStatus);
  outC->_L61 = outC->_L62.RBCsystemVersionOnboard;
  outC->_L66 = !outC->_L61;
  outC->every = outC->_L66;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L63, trackMessages);
  if (outC->every) {
    /* _L68=(trainData_pkg::checkRBCSystemVersion#1)/ */
    checkRBCSystemVersion_trainData_pkg(
      &outC->_L63,
      &outC->_L62,
      &outC->Context_checkRBCSystemVersion_1);
    kcg_copy_trainDataStatus_T_trainData_Types_pkg(
      &_4_op_call,
      &outC->Context_checkRBCSystemVersion_1.updatedStatus);
    kcg_copy_trainDataStatus_T_trainData_Types_pkg(&outC->_L68, &_4_op_call);
  }
  else {
    kcg_copy_trainDataStatus_T_trainData_Types_pkg(&outC->_L68, &outC->_L62);
  }
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(
    &outC->statusAfterCheck,
    &outC->_L68);
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(
    &outC->_L47,
    &outC->statusAfterCheck);
  if (outC->every2) {
    /* _L42=(trainData_pkg::checkRadioMessages#1)/ */
    checkRadioMessages_trainData_pkg(
      &outC->_L4,
      &outC->_L47,
      &outC->Context_checkRadioMessages_1);
    _1_op_call = outC->Context_checkRadioMessages_1.ackReceived;
    op_call = outC->Context_checkRadioMessages_1.ackRequested;
  }
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(
    &outC->_L51,
    &outC->statusAfterCheck);
  outC->_L50 = outC->_L51.validatedbyRBC;
  outC->every1 = outC->_L50;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L56, trackMessages);
  if (outC->every1) {
    /* _L54=(trainData_pkg::checkAcknowledgmentGeneral#1)/ */
    checkAcknowledgmentGeneral_trainData_pkg(
      &outC->_L56,
      &outC->Context_checkAcknowledgmentGeneral_1);
    _3_op_call = outC->Context_checkAcknowledgmentGeneral_1.ackReceived;
    _2_op_call = outC->Context_checkAcknowledgmentGeneral_1.ackRequested;
  }
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(
    &outC->_L18,
    &outC->statusAfterCheck);
  outC->_L70 = outC->_L18.RBCsystemVersionOnboard;
  kcg_copy_trainData_Events_T_trainData_Types_pkg(
    &outC->_L28,
    eventsForTrainData);
  outC->_L59 = outC->_L28.MoRCreadyFlag;
  outC->_L27 = outC->_L28.communicationSessionEstablished;
  outC->_L60 = outC->_L27 & outC->_L59;
  outC->_L52 = kcg_false;
  if (outC->every1) {
    outC->_L55 = _2_op_call;
  }
  else {
    outC->_L55 = outC->_L52;
  }
  outC->_L48 = kcg_false;
  if (outC->every2) {
    outC->_L49 = op_call;
  }
  else {
    outC->_L49 = outC->_L48;
  }
  outC->_L58 = outC->_L49 | outC->_L55;
  if (outC->every1) {
    outC->_L54 = _3_op_call;
  }
  else {
    outC->_L54 = outC->_L52;
  }
  if (outC->every2) {
    outC->_L42 = _1_op_call;
  }
  else {
    outC->_L42 = outC->_L48;
  }
  outC->_L57 = outC->_L42 | outC->_L54;
  outC->ackRequested = outC->_L58;
  outC->_L21 = outC->_L18.validatedbyRBC;
  outC->_L22 = !outC->_L21;
  kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L40,
    trainDataAckfromDriver);
  outC->ackReceived = outC->_L57;
  outC->IfBlock1_clock = outC->ackReceived & outC->ackRequested;
  if (outC->IfBlock1_clock) {
  }
  else {
    outC->else_clock_IfBlock1 = outC->ackReceived & (!outC->ackRequested);
  }
  outC->_L24 = outC->_L18.waitingForRBCResponse;
  outC->_L25 = !outC->_L24;
  outC->_L20 = outC->_L18.validatedByDriver;
  outC->_L19 = outC->_L18.valid;
  outC->_L23 = outC->_L19 & outC->_L20 & outC->_L22 & outC->_L25 & outC->_L70 &
    outC->_L60;
  outC->sendValidateToRBC = outC->_L23;
  if (outC->IfBlock1_clock) {
  }
  else if (outC->else_clock_IfBlock1) {
  }
  else {
    outC->else_clock_else_IfBlock1 = outC->sendValidateToRBC;
  }
  outC->_L32 = reset;
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L33, trainDatafromTIU);
  kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->_L34,
    trainDatafromDriver);
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(
    &outC->_L36,
    &outC->statusAfterCheck);
  kcg_copy_trainData_Events_T_trainData_Types_pkg(
    &outC->_L37,
    eventsForTrainData);
  /* _L31=(trainData_pkg::trainDataStorage#1)/ */
  trainDataStorage_trainData_pkg(
    outC->_L32,
    &outC->_L33,
    &outC->_L34,
    &outC->_L40,
    &outC->_L36,
    &outC->_L37,
    &outC->Context_trainDataStorage_1);
  kcg_copy_trainData_T_TIU_Types_Pkg(
    &outC->_L31,
    &outC->Context_trainDataStorage_1.actualTrainData);
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(
    &outC->_L30,
    &outC->Context_trainDataStorage_1.updatedStatus);
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(
    &outC->statusForOutput,
    &outC->_L30);
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L3_then_IfBlock1 = t_train;
    outC->_L7_then_IfBlock1 = nidEngine;
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->_L5_then_IfBlock1,
      trackMessages);
    outC->_L6_then_IfBlock1 = outC->_L5_then_IfBlock1.Radio_Common_Header.t_train;
    kcg_copy_trainDataStatus_T_trainData_Types_pkg(
      &outC->_L8_then_IfBlock1,
      &outC->statusForOutput);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->_L10_then_IfBlock1,
      inMessageBus);
    outC->_L11_then_IfBlock1 = inVersion;
    /* IfBlock1:then:_L2=(trainData_pkg::sendAcknowledgementRBC#1)/ */
    sendAcknowledgementRBC_trainData_pkg(
      outC->_L3_then_IfBlock1,
      outC->_L7_then_IfBlock1,
      outC->_L6_then_IfBlock1,
      &outC->_L8_then_IfBlock1,
      &outC->_L10_then_IfBlock1,
      outC->_L11_then_IfBlock1,
      &outC->Context_sendAcknowledgementRBC_1);
    kcg_copy_trainDataStatus_T_trainData_Types_pkg(
      &outC->_L2_then_IfBlock1,
      &outC->Context_sendAcknowledgementRBC_1.updatedStatus);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->_L9_then_IfBlock1,
      &outC->Context_sendAcknowledgementRBC_1.outMessageBus);
    kcg_copy_trainDataStatus_T_trainData_Types_pkg(
      &trainDataStatus_partial,
      &outC->_L2_then_IfBlock1);
    kcg_copy_trainDataStatus_T_trainData_Types_pkg(
      &outC->trainDataStatus,
      &trainDataStatus_partial);
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L6_then_else_IfBlock1 = kcg_false;
      outC->_L5_then_else_IfBlock1 = kcg_true;
      kcg_copy_trainDataStatus_T_trainData_Types_pkg(
        &outC->_L1_then_else_IfBlock1,
        &outC->statusForOutput);
      kcg_copy_trainDataStatus_T_trainData_Types_pkg(
        &outC->_L4_then_else_IfBlock1,
        &outC->_L1_then_else_IfBlock1);
      if (kcg_true) {
        outC->_L4_then_else_IfBlock1.validatedbyRBC = outC->_L5_then_else_IfBlock1;
      }
      kcg_copy_trainDataStatus_T_trainData_Types_pkg(
        &outC->_L7_then_else_IfBlock1,
        &outC->_L4_then_else_IfBlock1);
      if (kcg_true) {
        outC->_L7_then_else_IfBlock1.waitingForRBCResponse =
          outC->_L6_then_else_IfBlock1;
      }
      kcg_copy_trainDataStatus_T_trainData_Types_pkg(
        &_13_trainDataStatus_partial,
        &outC->_L7_then_else_IfBlock1);
      kcg_copy_trainDataStatus_T_trainData_Types_pkg(
        &_6_trainDataStatus_partial,
        &_13_trainDataStatus_partial);
    }
    else {
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        kcg_copy_trainData_T_TIU_Types_Pkg(
          &outC->_L8_then_else_else_IfBlock1,
          trainDatafromTIU);
        outC->_L3_then_else_else_IfBlock1 = t_train;
        outC->_L7_then_else_else_IfBlock1 = nidEngine;
        kcg_copy_trainDataStatus_T_trainData_Types_pkg(
          &outC->_L10_then_else_else_IfBlock1,
          &outC->statusForOutput);
        kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
          &outC->_L9_then_else_else_IfBlock1,
          p0_positionReport);
        kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
          &outC->_L11_then_else_else_IfBlock1,
          p1_positionReport);
        kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
          &outC->_L13_then_else_else_IfBlock1,
          inMessageBus);
        outC->_L14_then_else_else_IfBlock1 = inVersion;
        /* IfBlock1:else:else:then:_L2=(trainData_pkg::sendValidTrainDataRBC#1)/ */
        sendValidTrainDataRBC_trainData_pkg(
          &outC->_L8_then_else_else_IfBlock1,
          outC->_L3_then_else_else_IfBlock1,
          outC->_L7_then_else_else_IfBlock1,
          &outC->_L10_then_else_else_IfBlock1,
          &outC->_L9_then_else_else_IfBlock1,
          &outC->_L11_then_else_else_IfBlock1,
          &outC->_L13_then_else_else_IfBlock1,
          outC->_L14_then_else_else_IfBlock1,
          &outC->Context_sendValidTrainDataRBC_1);
        kcg_copy_trainDataStatus_T_trainData_Types_pkg(
          &outC->_L2_then_else_else_IfBlock1,
          &outC->Context_sendValidTrainDataRBC_1.updatedStatus);
        kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
          &outC->_L12_then_else_else_IfBlock1,
          &outC->Context_sendValidTrainDataRBC_1.outMessageBus);
        kcg_copy_trainDataStatus_T_trainData_Types_pkg(
          &_8_trainDataStatus_partial,
          &outC->_L2_then_else_else_IfBlock1);
        kcg_copy_trainDataStatus_T_trainData_Types_pkg(
          &_11_trainDataStatus_partial,
          &_8_trainDataStatus_partial);
      }
      else {
        kcg_copy_trainDataStatus_T_trainData_Types_pkg(
          &outC->_L3_else_else_else_IfBlock1,
          &outC->statusForOutput);
        kcg_copy_trainDataStatus_T_trainData_Types_pkg(
          &_10_trainDataStatus_partial,
          &outC->_L3_else_else_else_IfBlock1);
        kcg_copy_trainDataStatus_T_trainData_Types_pkg(
          &_11_trainDataStatus_partial,
          &_10_trainDataStatus_partial);
      }
      kcg_copy_trainDataStatus_T_trainData_Types_pkg(
        &_6_trainDataStatus_partial,
        &_11_trainDataStatus_partial);
    }
    kcg_copy_trainDataStatus_T_trainData_Types_pkg(
      &outC->trainDataStatus,
      &_6_trainDataStatus_partial);
  }
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(
    &outC->_L39,
    &outC->trainDataStatus);
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(
    &outC->updatedStatus,
    &outC->_L39);
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->trainData, &outC->_L31);
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L38, &outC->trainData);
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->actualTrainData, &outC->_L38);
  kcg_copy_trainData_Trigger_T_trainData_Types_pkg(
    &outC->_L29,
    (trainData_Trigger_T_trainData_Types_pkg *) &cNoTrigger_trainData_Types_pkg);
  kcg_copy_trainData_Trigger_T_trainData_Types_pkg(
    &outC->triggerFromTrainData,
    &outC->_L29);
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outMessageBus_partial,
      &outC->_L9_then_IfBlock1);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->outMessageBus,
      &outMessageBus_partial);
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &outC->_L9_then_else_IfBlock1,
        inMessageBus);
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &_14_outMessageBus_partial,
        &outC->_L9_then_else_IfBlock1);
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &_5_outMessageBus_partial,
        &_14_outMessageBus_partial);
    }
    else {
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
          &_7_outMessageBus_partial,
          &outC->_L12_then_else_else_IfBlock1);
        kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
          &_12_outMessageBus_partial,
          &_7_outMessageBus_partial);
      }
      else {
        kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
          &outC->_L4_else_else_else_IfBlock1,
          inMessageBus);
        kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
          &_9_outMessageBus_partial,
          &outC->_L4_else_else_else_IfBlock1);
        kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
          &_12_outMessageBus_partial,
          &_9_outMessageBus_partial);
      }
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &_5_outMessageBus_partial,
        &_12_outMessageBus_partial);
    }
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->outMessageBus,
      &_5_outMessageBus_partial);
  }
}

#ifndef KCG_USER_DEFINED_INIT
void trainData_init_trainData_pkg(outC_trainData_trainData_pkg *outC)
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

  outC->_L70 = kcg_true;
  outC->_L68.valid = kcg_true;
  outC->_L68.validatedByDriver = kcg_true;
  outC->_L68.RBCsystemVersionOnboard = kcg_true;
  outC->_L68.validatedbyRBC = kcg_true;
  outC->_L68.waitingForRBCResponse = kcg_true;
  outC->_L68.driverIsModificationTrainData = kcg_true;
  outC->_L68.timeStampValidateToRBC = kcg_lit_int32(0);
  outC->_L66 = kcg_true;
  outC->_L61 = kcg_true;
  outC->_L62.valid = kcg_true;
  outC->_L62.validatedByDriver = kcg_true;
  outC->_L62.RBCsystemVersionOnboard = kcg_true;
  outC->_L62.validatedbyRBC = kcg_true;
  outC->_L62.waitingForRBCResponse = kcg_true;
  outC->_L62.driverIsModificationTrainData = kcg_true;
  outC->_L62.timeStampValidateToRBC = kcg_lit_int32(0);
  outC->_L63.valid = kcg_true;
  outC->_L63.source = msrc_undefined_Common_Types_Pkg;
  outC->_L63.radioMetadata.t_train_reference = kcg_true;
  outC->_L63.radioMetadata.nid_em = kcg_true;
  outC->_L63.radioMetadata.q_scale = kcg_true;
  outC->_L63.radioMetadata.d_sr = kcg_true;
  outC->_L63.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L63.radioMetadata.d_ref = kcg_true;
  outC->_L63.radioMetadata.q_dir = kcg_true;
  outC->_L63.radioMetadata.d_emergencystop = kcg_true;
  outC->_L63.radioMetadata.m_version = kcg_true;
  outC->_L63.BG_Common_Header.valid = kcg_true;
  outC->_L63.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L63.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L63.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L63.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L63.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L63.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L63.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L63.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L63.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L63.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L63.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L63.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L63.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L63.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L63.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L63.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L63.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L63.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L63.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L63.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L63.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L63.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L63.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L63.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L63.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L63.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L63.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L63.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L63.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L63.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L63.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L63.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L63.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L63.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L63.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L63.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L63.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L63.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L63.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L63.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L63.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L63.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx = 0; idx < 30; idx++) {
    outC->_L63.packets.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L63.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L63.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L63.packets.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L63.packets.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L63.packets.PacketData[idx1] = kcg_lit_int32(0);
  }
  outC->_L63.sendingRBC.valid = kcg_true;
  outC->_L63.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L63.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L63.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L60 = kcg_true;
  outC->_L59 = kcg_true;
  outC->_L58 = kcg_true;
  outC->_L57 = kcg_true;
  outC->_L50 = kcg_true;
  outC->_L51.valid = kcg_true;
  outC->_L51.validatedByDriver = kcg_true;
  outC->_L51.RBCsystemVersionOnboard = kcg_true;
  outC->_L51.validatedbyRBC = kcg_true;
  outC->_L51.waitingForRBCResponse = kcg_true;
  outC->_L51.driverIsModificationTrainData = kcg_true;
  outC->_L51.timeStampValidateToRBC = kcg_lit_int32(0);
  outC->_L52 = kcg_true;
  outC->_L55 = kcg_true;
  outC->_L54 = kcg_true;
  outC->_L56.valid = kcg_true;
  outC->_L56.source = msrc_undefined_Common_Types_Pkg;
  outC->_L56.radioMetadata.t_train_reference = kcg_true;
  outC->_L56.radioMetadata.nid_em = kcg_true;
  outC->_L56.radioMetadata.q_scale = kcg_true;
  outC->_L56.radioMetadata.d_sr = kcg_true;
  outC->_L56.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L56.radioMetadata.d_ref = kcg_true;
  outC->_L56.radioMetadata.q_dir = kcg_true;
  outC->_L56.radioMetadata.d_emergencystop = kcg_true;
  outC->_L56.radioMetadata.m_version = kcg_true;
  outC->_L56.BG_Common_Header.valid = kcg_true;
  outC->_L56.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L56.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L56.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L56.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L56.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L56.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L56.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L56.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L56.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L56.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L56.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L56.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L56.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L56.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L56.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L56.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L56.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L56.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L56.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L56.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L56.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L56.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L56.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L56.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L56.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L56.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L56.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L56.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L56.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L56.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L56.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L56.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L56.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L56.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L56.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L56.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L56.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L56.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L56.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L56.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L56.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L56.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L56.packets.PacketHeaders[idx2].nid_packet = kcg_lit_int32(0);
    outC->_L56.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L56.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L56.packets.PacketHeaders[idx2].startAddress = kcg_lit_int32(0);
    outC->_L56.packets.PacketHeaders[idx2].endAddress = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L56.packets.PacketData[idx3] = kcg_lit_int32(0);
  }
  outC->_L56.sendingRBC.valid = kcg_true;
  outC->_L56.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L56.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L56.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L49 = kcg_true;
  outC->_L48 = kcg_true;
  outC->_L47.valid = kcg_true;
  outC->_L47.validatedByDriver = kcg_true;
  outC->_L47.RBCsystemVersionOnboard = kcg_true;
  outC->_L47.validatedbyRBC = kcg_true;
  outC->_L47.waitingForRBCResponse = kcg_true;
  outC->_L47.driverIsModificationTrainData = kcg_true;
  outC->_L47.timeStampValidateToRBC = kcg_lit_int32(0);
  outC->_L46 = kcg_true;
  outC->_L45.valid = kcg_true;
  outC->_L45.validatedByDriver = kcg_true;
  outC->_L45.RBCsystemVersionOnboard = kcg_true;
  outC->_L45.validatedbyRBC = kcg_true;
  outC->_L45.waitingForRBCResponse = kcg_true;
  outC->_L45.driverIsModificationTrainData = kcg_true;
  outC->_L45.timeStampValidateToRBC = kcg_lit_int32(0);
  outC->_L42 = kcg_true;
  outC->_L22 = kcg_true;
  outC->_L40.valid = kcg_true;
  outC->_L40.systemTime = kcg_lit_int32(0);
  outC->_L40.acknowledged = kcg_true;
  outC->_L39.valid = kcg_true;
  outC->_L39.validatedByDriver = kcg_true;
  outC->_L39.RBCsystemVersionOnboard = kcg_true;
  outC->_L39.validatedbyRBC = kcg_true;
  outC->_L39.waitingForRBCResponse = kcg_true;
  outC->_L39.driverIsModificationTrainData = kcg_true;
  outC->_L39.timeStampValidateToRBC = kcg_lit_int32(0);
  outC->_L38.valid = kcg_true;
  outC->_L38.acknowledgedByDriver = kcg_true;
  outC->_L38.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L38.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L38.trainLength = kcg_lit_int32(0);
  outC->_L38.brakePerctage = kcg_lit_int32(0);
  outC->_L38.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L38.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L38.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L38.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L38.axleNumber = kcg_lit_int32(0);
  outC->_L38.numberNationalSystems = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 5; idx4++) {
    outC->_L38.nationSystems[idx4] = kcg_lit_int32(0);
  }
  outC->_L38.numberTractionSystems = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 4; idx5++) {
    outC->_L38.tractionSystem[idx5].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L38.tractionSystem[idx5].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L37.trainStandStill = kcg_true;
  outC->_L37.driverRequestModify = kcg_true;
  outC->_L37.communicationSessionEstablished = kcg_true;
  outC->_L37.safeRadioConnectionLost = kcg_true;
  outC->_L37.approachingRBCarea = kcg_true;
  outC->_L37.MoRCreadyFlag = kcg_true;
  outC->_L36.valid = kcg_true;
  outC->_L36.validatedByDriver = kcg_true;
  outC->_L36.RBCsystemVersionOnboard = kcg_true;
  outC->_L36.validatedbyRBC = kcg_true;
  outC->_L36.waitingForRBCResponse = kcg_true;
  outC->_L36.driverIsModificationTrainData = kcg_true;
  outC->_L36.timeStampValidateToRBC = kcg_lit_int32(0);
  outC->_L34.valid = kcg_true;
  outC->_L34.systemTime = kcg_lit_int32(0);
  outC->_L34.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L34.l_train = kcg_lit_int32(0);
  outC->_L34.m_brakeperct = kcg_lit_int32(0);
  outC->_L34.v_maxTrain = kcg_lit_int32(0);
  outC->_L34.m_axleLoad = M_AXLELOADCAT_A;
  outC->_L34.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->_L34.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L33.valid = kcg_true;
  outC->_L33.acknowledgedByDriver = kcg_true;
  outC->_L33.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L33.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L33.trainLength = kcg_lit_int32(0);
  outC->_L33.brakePerctage = kcg_lit_int32(0);
  outC->_L33.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L33.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L33.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L33.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L33.axleNumber = kcg_lit_int32(0);
  outC->_L33.numberNationalSystems = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 5; idx6++) {
    outC->_L33.nationSystems[idx6] = kcg_lit_int32(0);
  }
  outC->_L33.numberTractionSystems = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 4; idx7++) {
    outC->_L33.tractionSystem[idx7].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L33.tractionSystem[idx7].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L32 = kcg_true;
  outC->_L30.valid = kcg_true;
  outC->_L30.validatedByDriver = kcg_true;
  outC->_L30.RBCsystemVersionOnboard = kcg_true;
  outC->_L30.validatedbyRBC = kcg_true;
  outC->_L30.waitingForRBCResponse = kcg_true;
  outC->_L30.driverIsModificationTrainData = kcg_true;
  outC->_L30.timeStampValidateToRBC = kcg_lit_int32(0);
  outC->_L31.valid = kcg_true;
  outC->_L31.acknowledgedByDriver = kcg_true;
  outC->_L31.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L31.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L31.trainLength = kcg_lit_int32(0);
  outC->_L31.brakePerctage = kcg_lit_int32(0);
  outC->_L31.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L31.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L31.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L31.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L31.axleNumber = kcg_lit_int32(0);
  outC->_L31.numberNationalSystems = kcg_lit_int32(0);
  for (idx8 = 0; idx8 < 5; idx8++) {
    outC->_L31.nationSystems[idx8] = kcg_lit_int32(0);
  }
  outC->_L31.numberTractionSystems = kcg_lit_int32(0);
  for (idx9 = 0; idx9 < 4; idx9++) {
    outC->_L31.tractionSystem[idx9].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L31.tractionSystem[idx9].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L29.brakeTrigger = kcg_true;
  outC->_L29.driverRequestModify = kcg_true;
  outC->_L29.shortenLocationBasedInformation = kcg_true;
  outC->_L29.deleteMA = kcg_true;
  outC->_L29.trainLengthIncreased = kcg_true;
  outC->_L28.trainStandStill = kcg_true;
  outC->_L28.driverRequestModify = kcg_true;
  outC->_L28.communicationSessionEstablished = kcg_true;
  outC->_L28.safeRadioConnectionLost = kcg_true;
  outC->_L28.approachingRBCarea = kcg_true;
  outC->_L28.MoRCreadyFlag = kcg_true;
  outC->_L27 = kcg_true;
  outC->_L25 = kcg_true;
  outC->_L24 = kcg_true;
  outC->_L23 = kcg_true;
  outC->_L21 = kcg_true;
  outC->_L20 = kcg_true;
  outC->_L19 = kcg_true;
  outC->_L18.valid = kcg_true;
  outC->_L18.validatedByDriver = kcg_true;
  outC->_L18.RBCsystemVersionOnboard = kcg_true;
  outC->_L18.validatedbyRBC = kcg_true;
  outC->_L18.waitingForRBCResponse = kcg_true;
  outC->_L18.driverIsModificationTrainData = kcg_true;
  outC->_L18.timeStampValidateToRBC = kcg_lit_int32(0);
  outC->_L4.valid = kcg_true;
  outC->_L4.source = msrc_undefined_Common_Types_Pkg;
  outC->_L4.radioMetadata.t_train_reference = kcg_true;
  outC->_L4.radioMetadata.nid_em = kcg_true;
  outC->_L4.radioMetadata.q_scale = kcg_true;
  outC->_L4.radioMetadata.d_sr = kcg_true;
  outC->_L4.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L4.radioMetadata.d_ref = kcg_true;
  outC->_L4.radioMetadata.q_dir = kcg_true;
  outC->_L4.radioMetadata.d_emergencystop = kcg_true;
  outC->_L4.radioMetadata.m_version = kcg_true;
  outC->_L4.BG_Common_Header.valid = kcg_true;
  outC->_L4.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L4.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L4.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L4.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L4.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L4.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L4.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L4.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L4.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L4.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L4.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L4.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L4.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L4.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L4.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L4.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L4.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L4.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L4.BG_Common_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L4.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L4.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L4.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L4.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L4.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L4.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L4.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L4.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L4.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L4.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L4.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L4.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L4.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L4.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L4.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L4.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L4.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L4.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L4.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L4.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L4.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L4.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L4.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->_L4.packets.PacketHeaders[idx10].nid_packet = kcg_lit_int32(0);
    outC->_L4.packets.PacketHeaders[idx10].q_dir = Q_DIR_Reverse;
    outC->_L4.packets.PacketHeaders[idx10].valid = kcg_true;
    outC->_L4.packets.PacketHeaders[idx10].startAddress = kcg_lit_int32(0);
    outC->_L4.packets.PacketHeaders[idx10].endAddress = kcg_lit_int32(0);
  }
  for (idx11 = 0; idx11 < 500; idx11++) {
    outC->_L4.packets.PacketData[idx11] = kcg_lit_int32(0);
  }
  outC->_L4.sendingRBC.valid = kcg_true;
  outC->_L4.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L4.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L4.sendingRBC.device_id = kcg_lit_int32(0);
  outC->statusAfterCheck.valid = kcg_true;
  outC->statusAfterCheck.validatedByDriver = kcg_true;
  outC->statusAfterCheck.RBCsystemVersionOnboard = kcg_true;
  outC->statusAfterCheck.validatedbyRBC = kcg_true;
  outC->statusAfterCheck.waitingForRBCResponse = kcg_true;
  outC->statusAfterCheck.driverIsModificationTrainData = kcg_true;
  outC->statusAfterCheck.timeStampValidateToRBC = kcg_lit_int32(0);
  outC->ackRequested = kcg_true;
  outC->statusForOutput.valid = kcg_true;
  outC->statusForOutput.validatedByDriver = kcg_true;
  outC->statusForOutput.RBCsystemVersionOnboard = kcg_true;
  outC->statusForOutput.validatedbyRBC = kcg_true;
  outC->statusForOutput.waitingForRBCResponse = kcg_true;
  outC->statusForOutput.driverIsModificationTrainData = kcg_true;
  outC->statusForOutput.timeStampValidateToRBC = kcg_lit_int32(0);
  outC->trainData.valid = kcg_true;
  outC->trainData.acknowledgedByDriver = kcg_true;
  outC->trainData.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->trainData.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->trainData.trainLength = kcg_lit_int32(0);
  outC->trainData.brakePerctage = kcg_lit_int32(0);
  outC->trainData.maxTrainSpeed = kcg_lit_int32(0);
  outC->trainData.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->trainData.axleLoadCategory = M_AXLELOADCAT_A;
  outC->trainData.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->trainData.axleNumber = kcg_lit_int32(0);
  outC->trainData.numberNationalSystems = kcg_lit_int32(0);
  for (idx12 = 0; idx12 < 5; idx12++) {
    outC->trainData.nationSystems[idx12] = kcg_lit_int32(0);
  }
  outC->trainData.numberTractionSystems = kcg_lit_int32(0);
  for (idx13 = 0; idx13 < 4; idx13++) {
    outC->trainData.tractionSystem[idx13].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->trainData.tractionSystem[idx13].nid_ctraction = kcg_lit_int32(0);
  }
  outC->sendValidateToRBC = kcg_true;
  outC->ackReceived = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->every2 = kcg_true;
  outC->every1 = kcg_true;
  outC->every = kcg_true;
  for (idx15 = 0; idx15 < 5; idx15++) {
    outC->_L9_then_else_IfBlock1[idx15].Message.valid = kcg_true;
    outC->_L9_then_else_IfBlock1[idx15].Message.nid_message = kcg_lit_int32(0);
    outC->_L9_then_else_IfBlock1[idx15].Message.l_message = kcg_lit_int32(0);
    outC->_L9_then_else_IfBlock1[idx15].Message.t_train = kcg_lit_int32(0);
    outC->_L9_then_else_IfBlock1[idx15].Message.nid_engine = kcg_lit_int32(0);
    outC->_L9_then_else_IfBlock1[idx15].Message.field1 = kcg_lit_int32(0);
    outC->_L9_then_else_IfBlock1[idx15].Message.field2 = kcg_lit_int32(0);
    outC->_L9_then_else_IfBlock1[idx15].Message.field3 = kcg_lit_int32(0);
    for (idx14 = 0; idx14 < 50; idx14++) {
      outC->_L9_then_else_IfBlock1[idx15].OptionalPackets[idx14] = kcg_lit_int32(0);
    }
  }
  outC->_L6_then_else_IfBlock1 = kcg_true;
  outC->_L7_then_else_IfBlock1.valid = kcg_true;
  outC->_L7_then_else_IfBlock1.validatedByDriver = kcg_true;
  outC->_L7_then_else_IfBlock1.RBCsystemVersionOnboard = kcg_true;
  outC->_L7_then_else_IfBlock1.validatedbyRBC = kcg_true;
  outC->_L7_then_else_IfBlock1.waitingForRBCResponse = kcg_true;
  outC->_L7_then_else_IfBlock1.driverIsModificationTrainData = kcg_true;
  outC->_L7_then_else_IfBlock1.timeStampValidateToRBC = kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock1.valid = kcg_true;
  outC->_L4_then_else_IfBlock1.validatedByDriver = kcg_true;
  outC->_L4_then_else_IfBlock1.RBCsystemVersionOnboard = kcg_true;
  outC->_L4_then_else_IfBlock1.validatedbyRBC = kcg_true;
  outC->_L4_then_else_IfBlock1.waitingForRBCResponse = kcg_true;
  outC->_L4_then_else_IfBlock1.driverIsModificationTrainData = kcg_true;
  outC->_L4_then_else_IfBlock1.timeStampValidateToRBC = kcg_lit_int32(0);
  outC->_L5_then_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_IfBlock1.valid = kcg_true;
  outC->_L1_then_else_IfBlock1.validatedByDriver = kcg_true;
  outC->_L1_then_else_IfBlock1.RBCsystemVersionOnboard = kcg_true;
  outC->_L1_then_else_IfBlock1.validatedbyRBC = kcg_true;
  outC->_L1_then_else_IfBlock1.waitingForRBCResponse = kcg_true;
  outC->_L1_then_else_IfBlock1.driverIsModificationTrainData = kcg_true;
  outC->_L1_then_else_IfBlock1.timeStampValidateToRBC = kcg_lit_int32(0);
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L3_else_else_else_IfBlock1.valid = kcg_true;
  outC->_L3_else_else_else_IfBlock1.validatedByDriver = kcg_true;
  outC->_L3_else_else_else_IfBlock1.RBCsystemVersionOnboard = kcg_true;
  outC->_L3_else_else_else_IfBlock1.validatedbyRBC = kcg_true;
  outC->_L3_else_else_else_IfBlock1.waitingForRBCResponse = kcg_true;
  outC->_L3_else_else_else_IfBlock1.driverIsModificationTrainData = kcg_true;
  outC->_L3_else_else_else_IfBlock1.timeStampValidateToRBC = kcg_lit_int32(0);
  for (idx17 = 0; idx17 < 5; idx17++) {
    outC->_L4_else_else_else_IfBlock1[idx17].Message.valid = kcg_true;
    outC->_L4_else_else_else_IfBlock1[idx17].Message.nid_message = kcg_lit_int32(0);
    outC->_L4_else_else_else_IfBlock1[idx17].Message.l_message = kcg_lit_int32(0);
    outC->_L4_else_else_else_IfBlock1[idx17].Message.t_train = kcg_lit_int32(0);
    outC->_L4_else_else_else_IfBlock1[idx17].Message.nid_engine = kcg_lit_int32(0);
    outC->_L4_else_else_else_IfBlock1[idx17].Message.field1 = kcg_lit_int32(0);
    outC->_L4_else_else_else_IfBlock1[idx17].Message.field2 = kcg_lit_int32(0);
    outC->_L4_else_else_else_IfBlock1[idx17].Message.field3 = kcg_lit_int32(0);
    for (idx16 = 0; idx16 < 50; idx16++) {
      outC->_L4_else_else_else_IfBlock1[idx17].OptionalPackets[idx16] =
        kcg_lit_int32(0);
    }
  }
  outC->_L7_then_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L3_then_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L2_then_else_else_IfBlock1.valid = kcg_true;
  outC->_L2_then_else_else_IfBlock1.validatedByDriver = kcg_true;
  outC->_L2_then_else_else_IfBlock1.RBCsystemVersionOnboard = kcg_true;
  outC->_L2_then_else_else_IfBlock1.validatedbyRBC = kcg_true;
  outC->_L2_then_else_else_IfBlock1.waitingForRBCResponse = kcg_true;
  outC->_L2_then_else_else_IfBlock1.driverIsModificationTrainData = kcg_true;
  outC->_L2_then_else_else_IfBlock1.timeStampValidateToRBC = kcg_lit_int32(0);
  outC->_L8_then_else_else_IfBlock1.valid = kcg_true;
  outC->_L8_then_else_else_IfBlock1.acknowledgedByDriver = kcg_true;
  outC->_L8_then_else_else_IfBlock1.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L8_then_else_else_IfBlock1.cantDeficientcy =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L8_then_else_else_IfBlock1.trainLength = kcg_lit_int32(0);
  outC->_L8_then_else_else_IfBlock1.brakePerctage = kcg_lit_int32(0);
  outC->_L8_then_else_else_IfBlock1.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L8_then_else_else_IfBlock1.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L8_then_else_else_IfBlock1.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L8_then_else_else_IfBlock1.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L8_then_else_else_IfBlock1.axleNumber = kcg_lit_int32(0);
  outC->_L8_then_else_else_IfBlock1.numberNationalSystems = kcg_lit_int32(0);
  for (idx18 = 0; idx18 < 5; idx18++) {
    outC->_L8_then_else_else_IfBlock1.nationSystems[idx18] = kcg_lit_int32(0);
  }
  outC->_L8_then_else_else_IfBlock1.numberTractionSystems = kcg_lit_int32(0);
  for (idx19 = 0; idx19 < 4; idx19++) {
    outC->_L8_then_else_else_IfBlock1.tractionSystem[idx19].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L8_then_else_else_IfBlock1.tractionSystem[idx19].nid_ctraction =
      kcg_lit_int32(0);
  }
  outC->_L9_then_else_else_IfBlock1.valid = kcg_true;
  outC->_L9_then_else_else_IfBlock1.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->_L9_then_else_else_IfBlock1.packet0.L_PACKET = kcg_lit_int32(0);
  outC->_L9_then_else_else_IfBlock1.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L9_then_else_else_IfBlock1.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->_L9_then_else_else_IfBlock1.packet0.D_LRBG = kcg_lit_int32(0);
  outC->_L9_then_else_else_IfBlock1.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L9_then_else_else_IfBlock1.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L9_then_else_else_IfBlock1.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L9_then_else_else_IfBlock1.packet0.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L9_then_else_else_IfBlock1.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L9_then_else_else_IfBlock1.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->_L9_then_else_else_IfBlock1.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->_L9_then_else_else_IfBlock1.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L9_then_else_else_IfBlock1.packet0.mode = M_MODE_Full_Supervision;
  outC->_L9_then_else_else_IfBlock1.packet0.level = M_LEVEL_Level_0;
  outC->_L9_then_else_else_IfBlock1.packet0.NID_NTC = kcg_lit_int32(0);
  outC->_L10_then_else_else_IfBlock1.valid = kcg_true;
  outC->_L10_then_else_else_IfBlock1.validatedByDriver = kcg_true;
  outC->_L10_then_else_else_IfBlock1.RBCsystemVersionOnboard = kcg_true;
  outC->_L10_then_else_else_IfBlock1.validatedbyRBC = kcg_true;
  outC->_L10_then_else_else_IfBlock1.waitingForRBCResponse = kcg_true;
  outC->_L10_then_else_else_IfBlock1.driverIsModificationTrainData = kcg_true;
  outC->_L10_then_else_else_IfBlock1.timeStampValidateToRBC = kcg_lit_int32(0);
  outC->_L11_then_else_else_IfBlock1.valid = kcg_true;
  outC->_L11_then_else_else_IfBlock1.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->_L11_then_else_else_IfBlock1.packet1.L_PACKET = kcg_lit_int32(0);
  outC->_L11_then_else_else_IfBlock1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L11_then_else_else_IfBlock1.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->_L11_then_else_else_IfBlock1.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->_L11_then_else_else_IfBlock1.packet1.D_LRBG = kcg_lit_int32(0);
  outC->_L11_then_else_else_IfBlock1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L11_then_else_else_IfBlock1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L11_then_else_else_IfBlock1.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L11_then_else_else_IfBlock1.packet1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L11_then_else_else_IfBlock1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L11_then_else_else_IfBlock1.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->_L11_then_else_else_IfBlock1.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->_L11_then_else_else_IfBlock1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L11_then_else_else_IfBlock1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L11_then_else_else_IfBlock1.packet1.level = M_LEVEL_Level_0;
  outC->_L11_then_else_else_IfBlock1.packet1.NID_NTC = kcg_lit_int32(0);
  for (idx21 = 0; idx21 < 5; idx21++) {
    outC->_L12_then_else_else_IfBlock1[idx21].Message.valid = kcg_true;
    outC->_L12_then_else_else_IfBlock1[idx21].Message.nid_message =
      kcg_lit_int32(0);
    outC->_L12_then_else_else_IfBlock1[idx21].Message.l_message = kcg_lit_int32(0);
    outC->_L12_then_else_else_IfBlock1[idx21].Message.t_train = kcg_lit_int32(0);
    outC->_L12_then_else_else_IfBlock1[idx21].Message.nid_engine = kcg_lit_int32(0);
    outC->_L12_then_else_else_IfBlock1[idx21].Message.field1 = kcg_lit_int32(0);
    outC->_L12_then_else_else_IfBlock1[idx21].Message.field2 = kcg_lit_int32(0);
    outC->_L12_then_else_else_IfBlock1[idx21].Message.field3 = kcg_lit_int32(0);
    for (idx20 = 0; idx20 < 50; idx20++) {
      outC->_L12_then_else_else_IfBlock1[idx21].OptionalPackets[idx20] =
        kcg_lit_int32(0);
    }
  }
  for (idx23 = 0; idx23 < 5; idx23++) {
    outC->_L13_then_else_else_IfBlock1[idx23].Message.valid = kcg_true;
    outC->_L13_then_else_else_IfBlock1[idx23].Message.nid_message =
      kcg_lit_int32(0);
    outC->_L13_then_else_else_IfBlock1[idx23].Message.l_message = kcg_lit_int32(0);
    outC->_L13_then_else_else_IfBlock1[idx23].Message.t_train = kcg_lit_int32(0);
    outC->_L13_then_else_else_IfBlock1[idx23].Message.nid_engine = kcg_lit_int32(0);
    outC->_L13_then_else_else_IfBlock1[idx23].Message.field1 = kcg_lit_int32(0);
    outC->_L13_then_else_else_IfBlock1[idx23].Message.field2 = kcg_lit_int32(0);
    outC->_L13_then_else_else_IfBlock1[idx23].Message.field3 = kcg_lit_int32(0);
    for (idx22 = 0; idx22 < 50; idx22++) {
      outC->_L13_then_else_else_IfBlock1[idx23].OptionalPackets[idx22] =
        kcg_lit_int32(0);
    }
  }
  outC->_L14_then_else_else_IfBlock1 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L2_then_IfBlock1.valid = kcg_true;
  outC->_L2_then_IfBlock1.validatedByDriver = kcg_true;
  outC->_L2_then_IfBlock1.RBCsystemVersionOnboard = kcg_true;
  outC->_L2_then_IfBlock1.validatedbyRBC = kcg_true;
  outC->_L2_then_IfBlock1.waitingForRBCResponse = kcg_true;
  outC->_L2_then_IfBlock1.driverIsModificationTrainData = kcg_true;
  outC->_L2_then_IfBlock1.timeStampValidateToRBC = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.valid = kcg_true;
  outC->_L5_then_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L5_then_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L5_then_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L5_then_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L5_then_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L5_then_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L5_then_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L5_then_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L5_then_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L5_then_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L5_then_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L5_then_IfBlock1.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L5_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5_then_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L5_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L5_then_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L5_then_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L5_then_IfBlock1.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(
      0);
  outC->_L5_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(
      0);
  outC->_L5_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(
      0);
  outC->_L5_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L5_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L5_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L5_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L5_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L5_then_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L5_then_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.Radio_Common_Header.t_train_reference = kcg_lit_int32(
      0);
  outC->_L5_then_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L5_then_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L5_then_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx24 = 0; idx24 < 30; idx24++) {
    outC->_L5_then_IfBlock1.packets.PacketHeaders[idx24].nid_packet =
      kcg_lit_int32(0);
    outC->_L5_then_IfBlock1.packets.PacketHeaders[idx24].q_dir = Q_DIR_Reverse;
    outC->_L5_then_IfBlock1.packets.PacketHeaders[idx24].valid = kcg_true;
    outC->_L5_then_IfBlock1.packets.PacketHeaders[idx24].startAddress =
      kcg_lit_int32(0);
    outC->_L5_then_IfBlock1.packets.PacketHeaders[idx24].endAddress =
      kcg_lit_int32(0);
  }
  for (idx25 = 0; idx25 < 500; idx25++) {
    outC->_L5_then_IfBlock1.packets.PacketData[idx25] = kcg_lit_int32(0);
  }
  outC->_L5_then_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L5_then_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L7_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.valid = kcg_true;
  outC->_L8_then_IfBlock1.validatedByDriver = kcg_true;
  outC->_L8_then_IfBlock1.RBCsystemVersionOnboard = kcg_true;
  outC->_L8_then_IfBlock1.validatedbyRBC = kcg_true;
  outC->_L8_then_IfBlock1.waitingForRBCResponse = kcg_true;
  outC->_L8_then_IfBlock1.driverIsModificationTrainData = kcg_true;
  outC->_L8_then_IfBlock1.timeStampValidateToRBC = kcg_lit_int32(0);
  for (idx27 = 0; idx27 < 5; idx27++) {
    outC->_L9_then_IfBlock1[idx27].Message.valid = kcg_true;
    outC->_L9_then_IfBlock1[idx27].Message.nid_message = kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx27].Message.l_message = kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx27].Message.t_train = kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx27].Message.nid_engine = kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx27].Message.field1 = kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx27].Message.field2 = kcg_lit_int32(0);
    outC->_L9_then_IfBlock1[idx27].Message.field3 = kcg_lit_int32(0);
    for (idx26 = 0; idx26 < 50; idx26++) {
      outC->_L9_then_IfBlock1[idx27].OptionalPackets[idx26] = kcg_lit_int32(0);
    }
  }
  for (idx29 = 0; idx29 < 5; idx29++) {
    outC->_L10_then_IfBlock1[idx29].Message.valid = kcg_true;
    outC->_L10_then_IfBlock1[idx29].Message.nid_message = kcg_lit_int32(0);
    outC->_L10_then_IfBlock1[idx29].Message.l_message = kcg_lit_int32(0);
    outC->_L10_then_IfBlock1[idx29].Message.t_train = kcg_lit_int32(0);
    outC->_L10_then_IfBlock1[idx29].Message.nid_engine = kcg_lit_int32(0);
    outC->_L10_then_IfBlock1[idx29].Message.field1 = kcg_lit_int32(0);
    outC->_L10_then_IfBlock1[idx29].Message.field2 = kcg_lit_int32(0);
    outC->_L10_then_IfBlock1[idx29].Message.field3 = kcg_lit_int32(0);
    for (idx28 = 0; idx28 < 50; idx28++) {
      outC->_L10_then_IfBlock1[idx29].OptionalPackets[idx28] = kcg_lit_int32(0);
    }
  }
  outC->_L11_then_IfBlock1 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx31 = 0; idx31 < 5; idx31++) {
    outC->outMessageBus[idx31].Message.valid = kcg_true;
    outC->outMessageBus[idx31].Message.nid_message = kcg_lit_int32(0);
    outC->outMessageBus[idx31].Message.l_message = kcg_lit_int32(0);
    outC->outMessageBus[idx31].Message.t_train = kcg_lit_int32(0);
    outC->outMessageBus[idx31].Message.nid_engine = kcg_lit_int32(0);
    outC->outMessageBus[idx31].Message.field1 = kcg_lit_int32(0);
    outC->outMessageBus[idx31].Message.field2 = kcg_lit_int32(0);
    outC->outMessageBus[idx31].Message.field3 = kcg_lit_int32(0);
    for (idx30 = 0; idx30 < 50; idx30++) {
      outC->outMessageBus[idx31].OptionalPackets[idx30] = kcg_lit_int32(0);
    }
  }
  outC->updatedStatus.valid = kcg_true;
  outC->updatedStatus.validatedByDriver = kcg_true;
  outC->updatedStatus.RBCsystemVersionOnboard = kcg_true;
  outC->updatedStatus.validatedbyRBC = kcg_true;
  outC->updatedStatus.waitingForRBCResponse = kcg_true;
  outC->updatedStatus.driverIsModificationTrainData = kcg_true;
  outC->updatedStatus.timeStampValidateToRBC = kcg_lit_int32(0);
  outC->triggerFromTrainData.brakeTrigger = kcg_true;
  outC->triggerFromTrainData.driverRequestModify = kcg_true;
  outC->triggerFromTrainData.shortenLocationBasedInformation = kcg_true;
  outC->triggerFromTrainData.deleteMA = kcg_true;
  outC->triggerFromTrainData.trainLengthIncreased = kcg_true;
  outC->actualTrainData.valid = kcg_true;
  outC->actualTrainData.acknowledgedByDriver = kcg_true;
  outC->actualTrainData.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->actualTrainData.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->actualTrainData.trainLength = kcg_lit_int32(0);
  outC->actualTrainData.brakePerctage = kcg_lit_int32(0);
  outC->actualTrainData.maxTrainSpeed = kcg_lit_int32(0);
  outC->actualTrainData.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->actualTrainData.axleLoadCategory = M_AXLELOADCAT_A;
  outC->actualTrainData.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->actualTrainData.axleNumber = kcg_lit_int32(0);
  outC->actualTrainData.numberNationalSystems = kcg_lit_int32(0);
  for (idx32 = 0; idx32 < 5; idx32++) {
    outC->actualTrainData.nationSystems[idx32] = kcg_lit_int32(0);
  }
  outC->actualTrainData.numberTractionSystems = kcg_lit_int32(0);
  for (idx33 = 0; idx33 < 4; idx33++) {
    outC->actualTrainData.tractionSystem[idx33].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->actualTrainData.tractionSystem[idx33].nid_ctraction = kcg_lit_int32(0);
  }
  /* IfBlock1:then:_L2=(trainData_pkg::sendAcknowledgementRBC#1)/ */
  sendAcknowledgementRBC_init_trainData_pkg(
    &outC->Context_sendAcknowledgementRBC_1);
  /* IfBlock1:else:else:then:_L2=(trainData_pkg::sendValidTrainDataRBC#1)/ */
  sendValidTrainDataRBC_init_trainData_pkg(
    &outC->Context_sendValidTrainDataRBC_1);
  /* _L31=(trainData_pkg::trainDataStorage#1)/ */
  trainDataStorage_init_trainData_pkg(&outC->Context_trainDataStorage_1);
  /* _L54=(trainData_pkg::checkAcknowledgmentGeneral#1)/ */
  checkAcknowledgmentGeneral_init_trainData_pkg(
    &outC->Context_checkAcknowledgmentGeneral_1);
  /* _L42=(trainData_pkg::checkRadioMessages#1)/ */
  checkRadioMessages_init_trainData_pkg(&outC->Context_checkRadioMessages_1);
  /* _L68=(trainData_pkg::checkRBCSystemVersion#1)/ */
  checkRBCSystemVersion_init_trainData_pkg(
    &outC->Context_checkRBCSystemVersion_1);
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(
    &outC->trainDataStatus,
    (trainDataStatus_T_trainData_Types_pkg *) &cNoStates_trainData_Types_pkg);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void trainData_reset_trainData_pkg(outC_trainData_trainData_pkg *outC)
{
  /* IfBlock1:then:_L2=(trainData_pkg::sendAcknowledgementRBC#1)/ */
  sendAcknowledgementRBC_reset_trainData_pkg(
    &outC->Context_sendAcknowledgementRBC_1);
  /* IfBlock1:else:else:then:_L2=(trainData_pkg::sendValidTrainDataRBC#1)/ */
  sendValidTrainDataRBC_reset_trainData_pkg(
    &outC->Context_sendValidTrainDataRBC_1);
  /* _L31=(trainData_pkg::trainDataStorage#1)/ */
  trainDataStorage_reset_trainData_pkg(&outC->Context_trainDataStorage_1);
  /* _L54=(trainData_pkg::checkAcknowledgmentGeneral#1)/ */
  checkAcknowledgmentGeneral_reset_trainData_pkg(
    &outC->Context_checkAcknowledgmentGeneral_1);
  /* _L42=(trainData_pkg::checkRadioMessages#1)/ */
  checkRadioMessages_reset_trainData_pkg(&outC->Context_checkRadioMessages_1);
  /* _L68=(trainData_pkg::checkRBCSystemVersion#1)/ */
  checkRBCSystemVersion_reset_trainData_pkg(
    &outC->Context_checkRBCSystemVersion_1);
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(
    &outC->trainDataStatus,
    (trainDataStatus_T_trainData_Types_pkg *) &cNoStates_trainData_Types_pkg);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** trainData_trainData_pkg.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

