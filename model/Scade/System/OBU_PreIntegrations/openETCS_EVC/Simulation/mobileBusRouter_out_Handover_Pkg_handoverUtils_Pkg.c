/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:31
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg.h"

/* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out/ */
void mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg(
  /* morcMsgTriggersToRBC_1/ */
  msgToTrackTriggers_T_RCM_MsgTypes_Pkg *morcMsgTriggersToRBC_1,
  /* morcMsgTriggersToRBC_2/ */
  msgToTrackTriggers_T_RCM_MsgTypes_Pkg *morcMsgTriggersToRBC_2,
  /* useInformationFromAcceptingRBC/ */
  kcg_bool useInformationFromAcceptingRBC,
  /* handingOverRBC_is_RBC_1/ */
  kcg_bool handingOverRBC_is_RBC_1,
  /* sendPositionReport_2_acceptingRBC/ */
  kcg_bool sendPositionReport_2_acceptingRBC,
  /* sendPositionReport_2_handingOverRBC/ */
  kcg_bool sendPositionReport_2_handingOverRBC,
  /* sendPositionReport_2_RBC_1/ */
  kcg_bool sendPositionReport_2_RBC_1,
  /* sendPositionReport_2_RBC_2/ */
  kcg_bool sendPositionReport_2_RBC_2,
  /* sendTrainData_2_acceptingRBC/ */
  kcg_bool sendTrainData_2_acceptingRBC,
  /* t_train/ */
  T_TRAIN t_train,
  /* t_train_global/ */
  T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* msgBusToRBC_in/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *msgBusToRBC_in,
  /* sessionManagementAbility/ */
  abilityToHandleCommunicationSessions_Handover_Pkg sessionManagementAbility,
  /* nid_engine/ */
  NID_ENGINE nid_engine,
  /* onboardPhoneNumbers_b/ */
  P003_TM_TrainToTrack *onboardPhoneNumbers_b,
  /* m_version/ */
  M_VERSION m_version,
  outC_mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg *outC)
{
  /* msgBus_2_RBC_1/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus msgBus_2_RBC_1_partial;
  /* msgBus_2_RBC_2/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus msgBus_2_RBC_2_partial;
  /* msgBus_2_RBC_1/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _1_msgBus_2_RBC_1_partial;
  /* msgBus_2_RBC_2/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _2_msgBus_2_RBC_2_partial;
  kcg_int32 noname;
  kcg_int32 _3_noname;
  kcg_int32 _4_noname;
  kcg_bool _5_noname;
  kcg_int32 _6_noname;

  outC->IfBlock1_clock = sessionManagementAbility ==
    isAbleToManageOneSession_Handover_Pkg;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->_L30_then_IfBlock1,
      (M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *)
        &cIdleBus_Handover_Pkg_handoverUtils_Pkg);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &msgBus_2_RBC_2_partial,
      &outC->_L30_then_IfBlock1);
    kcg_copy_msgToTrackTriggers_T_RCM_MsgTypes_Pkg(
      &outC->_L23_then_IfBlock1,
      morcMsgTriggersToRBC_1);
    outC->_L24_then_IfBlock1 = t_train;
    outC->_L25_then_IfBlock1 = t_train_global;
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->_L26_then_IfBlock1,
      msgBusToRBC_in);
    outC->_L27_then_IfBlock1 = nid_engine;
    kcg_copy_P003_TM_TrainToTrack(&outC->_L28_then_IfBlock1, onboardPhoneNumbers_b);
    outC->_L29_then_IfBlock1 = m_version;
    /* IfBlock1:then:_L22=(RCM_Utils_Pkg::encoders::genMsgToBus#3)/ */
    genMsgToBus_RCM_Utils_Pkg_encoders(
      &outC->_L23_then_IfBlock1,
      outC->_L24_then_IfBlock1,
      outC->_L25_then_IfBlock1,
      &outC->_L26_then_IfBlock1,
      outC->_L27_then_IfBlock1,
      &outC->_L28_then_IfBlock1,
      outC->_L29_then_IfBlock1,
      &outC->Context_genMsgToBus_3);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->_L22_then_IfBlock1,
      &outC->Context_genMsgToBus_3.msgBus_out);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &msgBus_2_RBC_1_partial,
      &outC->_L22_then_IfBlock1);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->msgBus_2_RBC_1,
      &msgBus_2_RBC_1_partial);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->msgBus_2_RBC_2,
      &msgBus_2_RBC_2_partial);
  }
  else {
    outC->_L84_else_IfBlock1 = sendPositionReport_2_RBC_1;
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->_L296_else_IfBlock1,
      msgBusToRBC_in);
    /* IfBlock1:else:_L294=(RCM_Utils_Pkg::encoders::extractPositionReportFromBus#1)/ */
    extractPositionReportFromBus_RCM_Utils_Pkg_encoders(
      &outC->_L296_else_IfBlock1,
      &outC->Context_extractPositionReportFromBus_1);
    outC->_L294_else_IfBlock1 = outC->Context_extractPositionReportFromBus_1.found;
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &outC->_L295_else_IfBlock1,
      &outC->Context_extractPositionReportFromBus_1.positionReport);
    kcg_copy_msgToTrackTriggers_T_RCM_MsgTypes_Pkg(
      &outC->_L102_else_IfBlock1,
      morcMsgTriggersToRBC_1);
    outC->_L103_else_IfBlock1 = t_train;
    outC->_L104_else_IfBlock1 = t_train_global;
    outC->_L82_else_IfBlock1 = sendPositionReport_2_acceptingRBC;
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->_L78_else_IfBlock1,
      (M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *)
        &cIdleBus_Handover_Pkg_handoverUtils_Pkg);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->_L77_else_IfBlock1,
      msgBusToRBC_in);
    outC->_L72_else_IfBlock1 = useInformationFromAcceptingRBC;
    /* IfBlock1:else:_L76= */
    if (outC->_L72_else_IfBlock1) {
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &outC->_L76_else_IfBlock1,
        &outC->_L77_else_IfBlock1);
    }
    else {
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &outC->_L76_else_IfBlock1,
        &outC->_L78_else_IfBlock1);
    }
    outC->_L299_else_IfBlock1 = t_train_global;
    /* IfBlock1:else:_L297=(RCM_Utils_Pkg::encoders::mergeMsgToBus#1)/ */
    mergeMsgToBus_RCM_Utils_Pkg_encoders(
      outC->_L82_else_IfBlock1,
      outC->_L294_else_IfBlock1,
      &outC->_L295_else_IfBlock1,
      &outC->_L76_else_IfBlock1,
      outC->_L299_else_IfBlock1,
      &outC->Context_mergeMsgToBus_1);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->_L297_else_IfBlock1,
      &outC->Context_mergeMsgToBus_1.messageBus_out);
    outC->_L298_else_IfBlock1 = outC->Context_mergeMsgToBus_1.t_train_assigned;
    outC->_L83_else_IfBlock1 = sendPositionReport_2_handingOverRBC;
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->_L75_else_IfBlock1,
      (M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *)
        &cIdleBus_Handover_Pkg_handoverUtils_Pkg);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->_L71_else_IfBlock1,
      msgBusToRBC_in);
    outC->_L74_else_IfBlock1 = !outC->_L72_else_IfBlock1;
    /* IfBlock1:else:_L73= */
    if (outC->_L74_else_IfBlock1) {
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &outC->_L73_else_IfBlock1,
        &outC->_L71_else_IfBlock1);
    }
    else {
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &outC->_L73_else_IfBlock1,
        &outC->_L75_else_IfBlock1);
    }
    /* IfBlock1:else:_L304=(RCM_Utils_Pkg::encoders::mergeMsgToBus#4)/ */
    mergeMsgToBus_RCM_Utils_Pkg_encoders(
      outC->_L83_else_IfBlock1,
      outC->_L294_else_IfBlock1,
      &outC->_L295_else_IfBlock1,
      &outC->_L73_else_IfBlock1,
      outC->_L299_else_IfBlock1,
      &outC->Context_mergeMsgToBus_4);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->_L304_else_IfBlock1,
      &outC->Context_mergeMsgToBus_4.messageBus_out);
    outC->_L305_else_IfBlock1 = outC->Context_mergeMsgToBus_4.t_train_assigned;
    outC->_L79_else_IfBlock1 = handingOverRBC_is_RBC_1;
    /* IfBlock1:else:_L80= */
    if (outC->_L79_else_IfBlock1) {
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &outC->_L80_else_IfBlock1,
        &outC->_L304_else_IfBlock1);
    }
    else {
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &outC->_L80_else_IfBlock1,
        &outC->_L297_else_IfBlock1);
    }
    outC->_L105_else_IfBlock1 = nid_engine;
    kcg_copy_P003_TM_TrainToTrack(
      &outC->_L106_else_IfBlock1,
      onboardPhoneNumbers_b);
    outC->_L107_else_IfBlock1 = m_version;
    /* IfBlock1:else:_L100=(RCM_Utils_Pkg::encoders::genMsgToBus#1)/ */
    genMsgToBus_RCM_Utils_Pkg_encoders(
      &outC->_L102_else_IfBlock1,
      outC->_L103_else_IfBlock1,
      outC->_L104_else_IfBlock1,
      &outC->_L80_else_IfBlock1,
      outC->_L105_else_IfBlock1,
      &outC->_L106_else_IfBlock1,
      outC->_L107_else_IfBlock1,
      &outC->Context_genMsgToBus_1);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->_L100_else_IfBlock1,
      &outC->Context_genMsgToBus_1.msgBus_out);
    outC->_L308_else_IfBlock1 = t_train_global;
    /* IfBlock1:else:_L311=(RCM_Utils_Pkg::encoders::mergeMsgToBus#7)/ */
    mergeMsgToBus_RCM_Utils_Pkg_encoders(
      outC->_L84_else_IfBlock1,
      outC->_L294_else_IfBlock1,
      &outC->_L295_else_IfBlock1,
      &outC->_L100_else_IfBlock1,
      outC->_L308_else_IfBlock1,
      &outC->Context_mergeMsgToBus_7);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->_L311_else_IfBlock1,
      &outC->Context_mergeMsgToBus_7.messageBus_out);
    outC->_L312_else_IfBlock1 = outC->Context_mergeMsgToBus_7.t_train_assigned;
    noname = outC->_L312_else_IfBlock1;
    outC->_L85_else_IfBlock1 = sendPositionReport_2_RBC_2;
    kcg_copy_msgToTrackTriggers_T_RCM_MsgTypes_Pkg(
      &outC->_L114_else_IfBlock1,
      morcMsgTriggersToRBC_2);
    outC->_L112_else_IfBlock1 = t_train;
    outC->_L113_else_IfBlock1 = t_train_global;
    /* IfBlock1:else:_L81= */
    if (outC->_L79_else_IfBlock1) {
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &outC->_L81_else_IfBlock1,
        &outC->_L297_else_IfBlock1);
    }
    else {
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &outC->_L81_else_IfBlock1,
        &outC->_L304_else_IfBlock1);
    }
    outC->_L110_else_IfBlock1 = nid_engine;
    kcg_copy_P003_TM_TrainToTrack(
      &outC->_L111_else_IfBlock1,
      onboardPhoneNumbers_b);
    outC->_L109_else_IfBlock1 = m_version;
    /* IfBlock1:else:_L108=(RCM_Utils_Pkg::encoders::genMsgToBus#2)/ */
    genMsgToBus_RCM_Utils_Pkg_encoders(
      &outC->_L114_else_IfBlock1,
      outC->_L112_else_IfBlock1,
      outC->_L113_else_IfBlock1,
      &outC->_L81_else_IfBlock1,
      outC->_L110_else_IfBlock1,
      &outC->_L111_else_IfBlock1,
      outC->_L109_else_IfBlock1,
      &outC->Context_genMsgToBus_2);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->_L108_else_IfBlock1,
      &outC->Context_genMsgToBus_2.msgBus_out);
    /* IfBlock1:else:_L306=(RCM_Utils_Pkg::encoders::mergeMsgToBus#5)/ */
    mergeMsgToBus_RCM_Utils_Pkg_encoders(
      outC->_L85_else_IfBlock1,
      outC->_L294_else_IfBlock1,
      &outC->_L295_else_IfBlock1,
      &outC->_L108_else_IfBlock1,
      outC->_L308_else_IfBlock1,
      &outC->Context_mergeMsgToBus_5);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->_L306_else_IfBlock1,
      &outC->Context_mergeMsgToBus_5.messageBus_out);
    outC->_L307_else_IfBlock1 = outC->Context_mergeMsgToBus_5.t_train_assigned;
    _3_noname = outC->_L307_else_IfBlock1;
    _4_noname = outC->_L305_else_IfBlock1;
    outC->_L86_else_IfBlock1 = sendTrainData_2_acceptingRBC;
    _5_noname = outC->_L86_else_IfBlock1;
    _6_noname = outC->_L298_else_IfBlock1;
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &_2_msgBus_2_RBC_2_partial,
      &outC->_L306_else_IfBlock1);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &_1_msgBus_2_RBC_1_partial,
      &outC->_L311_else_IfBlock1);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->msgBus_2_RBC_1,
      &_1_msgBus_2_RBC_1_partial);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->msgBus_2_RBC_2,
      &_2_msgBus_2_RBC_2_partial);
  }
}

#ifndef KCG_USER_DEFINED_INIT
void mobileBusRouter_out_init_Handover_Pkg_handoverUtils_Pkg(
  outC_mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg *outC)
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

  outC->IfBlock1_clock = kcg_true;
  for (idx1 = 0; idx1 < 5; idx1++) {
    outC->_L71_else_IfBlock1[idx1].Message.valid = kcg_true;
    outC->_L71_else_IfBlock1[idx1].Message.nid_message = kcg_lit_int32(0);
    outC->_L71_else_IfBlock1[idx1].Message.l_message = kcg_lit_int32(0);
    outC->_L71_else_IfBlock1[idx1].Message.t_train = kcg_lit_int32(0);
    outC->_L71_else_IfBlock1[idx1].Message.nid_engine = kcg_lit_int32(0);
    outC->_L71_else_IfBlock1[idx1].Message.field1 = kcg_lit_int32(0);
    outC->_L71_else_IfBlock1[idx1].Message.field2 = kcg_lit_int32(0);
    outC->_L71_else_IfBlock1[idx1].Message.field3 = kcg_lit_int32(0);
    for (idx = 0; idx < 50; idx++) {
      outC->_L71_else_IfBlock1[idx1].OptionalPackets[idx] = kcg_lit_int32(0);
    }
  }
  outC->_L72_else_IfBlock1 = kcg_true;
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L73_else_IfBlock1[idx3].Message.valid = kcg_true;
    outC->_L73_else_IfBlock1[idx3].Message.nid_message = kcg_lit_int32(0);
    outC->_L73_else_IfBlock1[idx3].Message.l_message = kcg_lit_int32(0);
    outC->_L73_else_IfBlock1[idx3].Message.t_train = kcg_lit_int32(0);
    outC->_L73_else_IfBlock1[idx3].Message.nid_engine = kcg_lit_int32(0);
    outC->_L73_else_IfBlock1[idx3].Message.field1 = kcg_lit_int32(0);
    outC->_L73_else_IfBlock1[idx3].Message.field2 = kcg_lit_int32(0);
    outC->_L73_else_IfBlock1[idx3].Message.field3 = kcg_lit_int32(0);
    for (idx2 = 0; idx2 < 50; idx2++) {
      outC->_L73_else_IfBlock1[idx3].OptionalPackets[idx2] = kcg_lit_int32(0);
    }
  }
  outC->_L74_else_IfBlock1 = kcg_true;
  for (idx5 = 0; idx5 < 5; idx5++) {
    outC->_L75_else_IfBlock1[idx5].Message.valid = kcg_true;
    outC->_L75_else_IfBlock1[idx5].Message.nid_message = kcg_lit_int32(0);
    outC->_L75_else_IfBlock1[idx5].Message.l_message = kcg_lit_int32(0);
    outC->_L75_else_IfBlock1[idx5].Message.t_train = kcg_lit_int32(0);
    outC->_L75_else_IfBlock1[idx5].Message.nid_engine = kcg_lit_int32(0);
    outC->_L75_else_IfBlock1[idx5].Message.field1 = kcg_lit_int32(0);
    outC->_L75_else_IfBlock1[idx5].Message.field2 = kcg_lit_int32(0);
    outC->_L75_else_IfBlock1[idx5].Message.field3 = kcg_lit_int32(0);
    for (idx4 = 0; idx4 < 50; idx4++) {
      outC->_L75_else_IfBlock1[idx5].OptionalPackets[idx4] = kcg_lit_int32(0);
    }
  }
  for (idx7 = 0; idx7 < 5; idx7++) {
    outC->_L76_else_IfBlock1[idx7].Message.valid = kcg_true;
    outC->_L76_else_IfBlock1[idx7].Message.nid_message = kcg_lit_int32(0);
    outC->_L76_else_IfBlock1[idx7].Message.l_message = kcg_lit_int32(0);
    outC->_L76_else_IfBlock1[idx7].Message.t_train = kcg_lit_int32(0);
    outC->_L76_else_IfBlock1[idx7].Message.nid_engine = kcg_lit_int32(0);
    outC->_L76_else_IfBlock1[idx7].Message.field1 = kcg_lit_int32(0);
    outC->_L76_else_IfBlock1[idx7].Message.field2 = kcg_lit_int32(0);
    outC->_L76_else_IfBlock1[idx7].Message.field3 = kcg_lit_int32(0);
    for (idx6 = 0; idx6 < 50; idx6++) {
      outC->_L76_else_IfBlock1[idx7].OptionalPackets[idx6] = kcg_lit_int32(0);
    }
  }
  for (idx9 = 0; idx9 < 5; idx9++) {
    outC->_L77_else_IfBlock1[idx9].Message.valid = kcg_true;
    outC->_L77_else_IfBlock1[idx9].Message.nid_message = kcg_lit_int32(0);
    outC->_L77_else_IfBlock1[idx9].Message.l_message = kcg_lit_int32(0);
    outC->_L77_else_IfBlock1[idx9].Message.t_train = kcg_lit_int32(0);
    outC->_L77_else_IfBlock1[idx9].Message.nid_engine = kcg_lit_int32(0);
    outC->_L77_else_IfBlock1[idx9].Message.field1 = kcg_lit_int32(0);
    outC->_L77_else_IfBlock1[idx9].Message.field2 = kcg_lit_int32(0);
    outC->_L77_else_IfBlock1[idx9].Message.field3 = kcg_lit_int32(0);
    for (idx8 = 0; idx8 < 50; idx8++) {
      outC->_L77_else_IfBlock1[idx9].OptionalPackets[idx8] = kcg_lit_int32(0);
    }
  }
  for (idx11 = 0; idx11 < 5; idx11++) {
    outC->_L78_else_IfBlock1[idx11].Message.valid = kcg_true;
    outC->_L78_else_IfBlock1[idx11].Message.nid_message = kcg_lit_int32(0);
    outC->_L78_else_IfBlock1[idx11].Message.l_message = kcg_lit_int32(0);
    outC->_L78_else_IfBlock1[idx11].Message.t_train = kcg_lit_int32(0);
    outC->_L78_else_IfBlock1[idx11].Message.nid_engine = kcg_lit_int32(0);
    outC->_L78_else_IfBlock1[idx11].Message.field1 = kcg_lit_int32(0);
    outC->_L78_else_IfBlock1[idx11].Message.field2 = kcg_lit_int32(0);
    outC->_L78_else_IfBlock1[idx11].Message.field3 = kcg_lit_int32(0);
    for (idx10 = 0; idx10 < 50; idx10++) {
      outC->_L78_else_IfBlock1[idx11].OptionalPackets[idx10] = kcg_lit_int32(0);
    }
  }
  outC->_L79_else_IfBlock1 = kcg_true;
  for (idx13 = 0; idx13 < 5; idx13++) {
    outC->_L80_else_IfBlock1[idx13].Message.valid = kcg_true;
    outC->_L80_else_IfBlock1[idx13].Message.nid_message = kcg_lit_int32(0);
    outC->_L80_else_IfBlock1[idx13].Message.l_message = kcg_lit_int32(0);
    outC->_L80_else_IfBlock1[idx13].Message.t_train = kcg_lit_int32(0);
    outC->_L80_else_IfBlock1[idx13].Message.nid_engine = kcg_lit_int32(0);
    outC->_L80_else_IfBlock1[idx13].Message.field1 = kcg_lit_int32(0);
    outC->_L80_else_IfBlock1[idx13].Message.field2 = kcg_lit_int32(0);
    outC->_L80_else_IfBlock1[idx13].Message.field3 = kcg_lit_int32(0);
    for (idx12 = 0; idx12 < 50; idx12++) {
      outC->_L80_else_IfBlock1[idx13].OptionalPackets[idx12] = kcg_lit_int32(0);
    }
  }
  for (idx15 = 0; idx15 < 5; idx15++) {
    outC->_L81_else_IfBlock1[idx15].Message.valid = kcg_true;
    outC->_L81_else_IfBlock1[idx15].Message.nid_message = kcg_lit_int32(0);
    outC->_L81_else_IfBlock1[idx15].Message.l_message = kcg_lit_int32(0);
    outC->_L81_else_IfBlock1[idx15].Message.t_train = kcg_lit_int32(0);
    outC->_L81_else_IfBlock1[idx15].Message.nid_engine = kcg_lit_int32(0);
    outC->_L81_else_IfBlock1[idx15].Message.field1 = kcg_lit_int32(0);
    outC->_L81_else_IfBlock1[idx15].Message.field2 = kcg_lit_int32(0);
    outC->_L81_else_IfBlock1[idx15].Message.field3 = kcg_lit_int32(0);
    for (idx14 = 0; idx14 < 50; idx14++) {
      outC->_L81_else_IfBlock1[idx15].OptionalPackets[idx14] = kcg_lit_int32(0);
    }
  }
  outC->_L82_else_IfBlock1 = kcg_true;
  outC->_L83_else_IfBlock1 = kcg_true;
  outC->_L84_else_IfBlock1 = kcg_true;
  outC->_L85_else_IfBlock1 = kcg_true;
  outC->_L86_else_IfBlock1 = kcg_true;
  for (idx17 = 0; idx17 < 5; idx17++) {
    outC->_L100_else_IfBlock1[idx17].Message.valid = kcg_true;
    outC->_L100_else_IfBlock1[idx17].Message.nid_message = kcg_lit_int32(0);
    outC->_L100_else_IfBlock1[idx17].Message.l_message = kcg_lit_int32(0);
    outC->_L100_else_IfBlock1[idx17].Message.t_train = kcg_lit_int32(0);
    outC->_L100_else_IfBlock1[idx17].Message.nid_engine = kcg_lit_int32(0);
    outC->_L100_else_IfBlock1[idx17].Message.field1 = kcg_lit_int32(0);
    outC->_L100_else_IfBlock1[idx17].Message.field2 = kcg_lit_int32(0);
    outC->_L100_else_IfBlock1[idx17].Message.field3 = kcg_lit_int32(0);
    for (idx16 = 0; idx16 < 50; idx16++) {
      outC->_L100_else_IfBlock1[idx17].OptionalPackets[idx16] = kcg_lit_int32(0);
    }
  }
  outC->_L102_else_IfBlock1.m155_initiationOfACommunicationSession = kcg_true;
  outC->_L102_else_IfBlock1.m156_terminationOfACommunicationSession = kcg_true;
  outC->_L102_else_IfBlock1.m159_sessionEstablished = kcg_true;
  outC->_L102_else_IfBlock1.m154_noCompatibleVersionSupported = kcg_true;
  outC->_L103_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L104_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L105_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L106_else_IfBlock1.valid = kcg_true;
  outC->_L106_else_IfBlock1.nid_packet = kcg_lit_int32(0);
  outC->_L106_else_IfBlock1.l_packet = kcg_lit_int32(0);
  outC->_L106_else_IfBlock1.n_iter = kcg_lit_int32(0);
  for (idx18 = 0; idx18 < 5; idx18++) {
    outC->_L106_else_IfBlock1.nid_radio[idx18] = kcg_lit_int32(0);
  }
  outC->_L107_else_IfBlock1 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx20 = 0; idx20 < 5; idx20++) {
    outC->_L108_else_IfBlock1[idx20].Message.valid = kcg_true;
    outC->_L108_else_IfBlock1[idx20].Message.nid_message = kcg_lit_int32(0);
    outC->_L108_else_IfBlock1[idx20].Message.l_message = kcg_lit_int32(0);
    outC->_L108_else_IfBlock1[idx20].Message.t_train = kcg_lit_int32(0);
    outC->_L108_else_IfBlock1[idx20].Message.nid_engine = kcg_lit_int32(0);
    outC->_L108_else_IfBlock1[idx20].Message.field1 = kcg_lit_int32(0);
    outC->_L108_else_IfBlock1[idx20].Message.field2 = kcg_lit_int32(0);
    outC->_L108_else_IfBlock1[idx20].Message.field3 = kcg_lit_int32(0);
    for (idx19 = 0; idx19 < 50; idx19++) {
      outC->_L108_else_IfBlock1[idx20].OptionalPackets[idx19] = kcg_lit_int32(0);
    }
  }
  outC->_L111_else_IfBlock1.valid = kcg_true;
  outC->_L111_else_IfBlock1.nid_packet = kcg_lit_int32(0);
  outC->_L111_else_IfBlock1.l_packet = kcg_lit_int32(0);
  outC->_L111_else_IfBlock1.n_iter = kcg_lit_int32(0);
  for (idx21 = 0; idx21 < 5; idx21++) {
    outC->_L111_else_IfBlock1.nid_radio[idx21] = kcg_lit_int32(0);
  }
  outC->_L110_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L109_else_IfBlock1 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L113_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L112_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L114_else_IfBlock1.m155_initiationOfACommunicationSession = kcg_true;
  outC->_L114_else_IfBlock1.m156_terminationOfACommunicationSession = kcg_true;
  outC->_L114_else_IfBlock1.m159_sessionEstablished = kcg_true;
  outC->_L114_else_IfBlock1.m154_noCompatibleVersionSupported = kcg_true;
  outC->_L295_else_IfBlock1.Message.valid = kcg_true;
  outC->_L295_else_IfBlock1.Message.nid_message = kcg_lit_int32(0);
  outC->_L295_else_IfBlock1.Message.l_message = kcg_lit_int32(0);
  outC->_L295_else_IfBlock1.Message.t_train = kcg_lit_int32(0);
  outC->_L295_else_IfBlock1.Message.nid_engine = kcg_lit_int32(0);
  outC->_L295_else_IfBlock1.Message.field1 = kcg_lit_int32(0);
  outC->_L295_else_IfBlock1.Message.field2 = kcg_lit_int32(0);
  outC->_L295_else_IfBlock1.Message.field3 = kcg_lit_int32(0);
  for (idx22 = 0; idx22 < 50; idx22++) {
    outC->_L295_else_IfBlock1.OptionalPackets[idx22] = kcg_lit_int32(0);
  }
  outC->_L294_else_IfBlock1 = kcg_true;
  for (idx24 = 0; idx24 < 5; idx24++) {
    outC->_L296_else_IfBlock1[idx24].Message.valid = kcg_true;
    outC->_L296_else_IfBlock1[idx24].Message.nid_message = kcg_lit_int32(0);
    outC->_L296_else_IfBlock1[idx24].Message.l_message = kcg_lit_int32(0);
    outC->_L296_else_IfBlock1[idx24].Message.t_train = kcg_lit_int32(0);
    outC->_L296_else_IfBlock1[idx24].Message.nid_engine = kcg_lit_int32(0);
    outC->_L296_else_IfBlock1[idx24].Message.field1 = kcg_lit_int32(0);
    outC->_L296_else_IfBlock1[idx24].Message.field2 = kcg_lit_int32(0);
    outC->_L296_else_IfBlock1[idx24].Message.field3 = kcg_lit_int32(0);
    for (idx23 = 0; idx23 < 50; idx23++) {
      outC->_L296_else_IfBlock1[idx24].OptionalPackets[idx23] = kcg_lit_int32(0);
    }
  }
  outC->_L298_else_IfBlock1 = kcg_lit_int32(0);
  for (idx26 = 0; idx26 < 5; idx26++) {
    outC->_L297_else_IfBlock1[idx26].Message.valid = kcg_true;
    outC->_L297_else_IfBlock1[idx26].Message.nid_message = kcg_lit_int32(0);
    outC->_L297_else_IfBlock1[idx26].Message.l_message = kcg_lit_int32(0);
    outC->_L297_else_IfBlock1[idx26].Message.t_train = kcg_lit_int32(0);
    outC->_L297_else_IfBlock1[idx26].Message.nid_engine = kcg_lit_int32(0);
    outC->_L297_else_IfBlock1[idx26].Message.field1 = kcg_lit_int32(0);
    outC->_L297_else_IfBlock1[idx26].Message.field2 = kcg_lit_int32(0);
    outC->_L297_else_IfBlock1[idx26].Message.field3 = kcg_lit_int32(0);
    for (idx25 = 0; idx25 < 50; idx25++) {
      outC->_L297_else_IfBlock1[idx26].OptionalPackets[idx25] = kcg_lit_int32(0);
    }
  }
  outC->_L299_else_IfBlock1 = kcg_lit_int32(0);
  for (idx28 = 0; idx28 < 5; idx28++) {
    outC->_L304_else_IfBlock1[idx28].Message.valid = kcg_true;
    outC->_L304_else_IfBlock1[idx28].Message.nid_message = kcg_lit_int32(0);
    outC->_L304_else_IfBlock1[idx28].Message.l_message = kcg_lit_int32(0);
    outC->_L304_else_IfBlock1[idx28].Message.t_train = kcg_lit_int32(0);
    outC->_L304_else_IfBlock1[idx28].Message.nid_engine = kcg_lit_int32(0);
    outC->_L304_else_IfBlock1[idx28].Message.field1 = kcg_lit_int32(0);
    outC->_L304_else_IfBlock1[idx28].Message.field2 = kcg_lit_int32(0);
    outC->_L304_else_IfBlock1[idx28].Message.field3 = kcg_lit_int32(0);
    for (idx27 = 0; idx27 < 50; idx27++) {
      outC->_L304_else_IfBlock1[idx28].OptionalPackets[idx27] = kcg_lit_int32(0);
    }
  }
  outC->_L305_else_IfBlock1 = kcg_lit_int32(0);
  for (idx30 = 0; idx30 < 5; idx30++) {
    outC->_L306_else_IfBlock1[idx30].Message.valid = kcg_true;
    outC->_L306_else_IfBlock1[idx30].Message.nid_message = kcg_lit_int32(0);
    outC->_L306_else_IfBlock1[idx30].Message.l_message = kcg_lit_int32(0);
    outC->_L306_else_IfBlock1[idx30].Message.t_train = kcg_lit_int32(0);
    outC->_L306_else_IfBlock1[idx30].Message.nid_engine = kcg_lit_int32(0);
    outC->_L306_else_IfBlock1[idx30].Message.field1 = kcg_lit_int32(0);
    outC->_L306_else_IfBlock1[idx30].Message.field2 = kcg_lit_int32(0);
    outC->_L306_else_IfBlock1[idx30].Message.field3 = kcg_lit_int32(0);
    for (idx29 = 0; idx29 < 50; idx29++) {
      outC->_L306_else_IfBlock1[idx30].OptionalPackets[idx29] = kcg_lit_int32(0);
    }
  }
  outC->_L307_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L308_else_IfBlock1 = kcg_lit_int32(0);
  for (idx32 = 0; idx32 < 5; idx32++) {
    outC->_L311_else_IfBlock1[idx32].Message.valid = kcg_true;
    outC->_L311_else_IfBlock1[idx32].Message.nid_message = kcg_lit_int32(0);
    outC->_L311_else_IfBlock1[idx32].Message.l_message = kcg_lit_int32(0);
    outC->_L311_else_IfBlock1[idx32].Message.t_train = kcg_lit_int32(0);
    outC->_L311_else_IfBlock1[idx32].Message.nid_engine = kcg_lit_int32(0);
    outC->_L311_else_IfBlock1[idx32].Message.field1 = kcg_lit_int32(0);
    outC->_L311_else_IfBlock1[idx32].Message.field2 = kcg_lit_int32(0);
    outC->_L311_else_IfBlock1[idx32].Message.field3 = kcg_lit_int32(0);
    for (idx31 = 0; idx31 < 50; idx31++) {
      outC->_L311_else_IfBlock1[idx32].OptionalPackets[idx31] = kcg_lit_int32(0);
    }
  }
  outC->_L312_else_IfBlock1 = kcg_lit_int32(0);
  for (idx34 = 0; idx34 < 5; idx34++) {
    outC->_L22_then_IfBlock1[idx34].Message.valid = kcg_true;
    outC->_L22_then_IfBlock1[idx34].Message.nid_message = kcg_lit_int32(0);
    outC->_L22_then_IfBlock1[idx34].Message.l_message = kcg_lit_int32(0);
    outC->_L22_then_IfBlock1[idx34].Message.t_train = kcg_lit_int32(0);
    outC->_L22_then_IfBlock1[idx34].Message.nid_engine = kcg_lit_int32(0);
    outC->_L22_then_IfBlock1[idx34].Message.field1 = kcg_lit_int32(0);
    outC->_L22_then_IfBlock1[idx34].Message.field2 = kcg_lit_int32(0);
    outC->_L22_then_IfBlock1[idx34].Message.field3 = kcg_lit_int32(0);
    for (idx33 = 0; idx33 < 50; idx33++) {
      outC->_L22_then_IfBlock1[idx34].OptionalPackets[idx33] = kcg_lit_int32(0);
    }
  }
  outC->_L23_then_IfBlock1.m155_initiationOfACommunicationSession = kcg_true;
  outC->_L23_then_IfBlock1.m156_terminationOfACommunicationSession = kcg_true;
  outC->_L23_then_IfBlock1.m159_sessionEstablished = kcg_true;
  outC->_L23_then_IfBlock1.m154_noCompatibleVersionSupported = kcg_true;
  outC->_L24_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L25_then_IfBlock1 = kcg_lit_int32(0);
  for (idx36 = 0; idx36 < 5; idx36++) {
    outC->_L26_then_IfBlock1[idx36].Message.valid = kcg_true;
    outC->_L26_then_IfBlock1[idx36].Message.nid_message = kcg_lit_int32(0);
    outC->_L26_then_IfBlock1[idx36].Message.l_message = kcg_lit_int32(0);
    outC->_L26_then_IfBlock1[idx36].Message.t_train = kcg_lit_int32(0);
    outC->_L26_then_IfBlock1[idx36].Message.nid_engine = kcg_lit_int32(0);
    outC->_L26_then_IfBlock1[idx36].Message.field1 = kcg_lit_int32(0);
    outC->_L26_then_IfBlock1[idx36].Message.field2 = kcg_lit_int32(0);
    outC->_L26_then_IfBlock1[idx36].Message.field3 = kcg_lit_int32(0);
    for (idx35 = 0; idx35 < 50; idx35++) {
      outC->_L26_then_IfBlock1[idx36].OptionalPackets[idx35] = kcg_lit_int32(0);
    }
  }
  outC->_L27_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L28_then_IfBlock1.valid = kcg_true;
  outC->_L28_then_IfBlock1.nid_packet = kcg_lit_int32(0);
  outC->_L28_then_IfBlock1.l_packet = kcg_lit_int32(0);
  outC->_L28_then_IfBlock1.n_iter = kcg_lit_int32(0);
  for (idx37 = 0; idx37 < 5; idx37++) {
    outC->_L28_then_IfBlock1.nid_radio[idx37] = kcg_lit_int32(0);
  }
  outC->_L29_then_IfBlock1 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx39 = 0; idx39 < 5; idx39++) {
    outC->_L30_then_IfBlock1[idx39].Message.valid = kcg_true;
    outC->_L30_then_IfBlock1[idx39].Message.nid_message = kcg_lit_int32(0);
    outC->_L30_then_IfBlock1[idx39].Message.l_message = kcg_lit_int32(0);
    outC->_L30_then_IfBlock1[idx39].Message.t_train = kcg_lit_int32(0);
    outC->_L30_then_IfBlock1[idx39].Message.nid_engine = kcg_lit_int32(0);
    outC->_L30_then_IfBlock1[idx39].Message.field1 = kcg_lit_int32(0);
    outC->_L30_then_IfBlock1[idx39].Message.field2 = kcg_lit_int32(0);
    outC->_L30_then_IfBlock1[idx39].Message.field3 = kcg_lit_int32(0);
    for (idx38 = 0; idx38 < 50; idx38++) {
      outC->_L30_then_IfBlock1[idx39].OptionalPackets[idx38] = kcg_lit_int32(0);
    }
  }
  for (idx41 = 0; idx41 < 5; idx41++) {
    outC->msgBus_2_RBC_2[idx41].Message.valid = kcg_true;
    outC->msgBus_2_RBC_2[idx41].Message.nid_message = kcg_lit_int32(0);
    outC->msgBus_2_RBC_2[idx41].Message.l_message = kcg_lit_int32(0);
    outC->msgBus_2_RBC_2[idx41].Message.t_train = kcg_lit_int32(0);
    outC->msgBus_2_RBC_2[idx41].Message.nid_engine = kcg_lit_int32(0);
    outC->msgBus_2_RBC_2[idx41].Message.field1 = kcg_lit_int32(0);
    outC->msgBus_2_RBC_2[idx41].Message.field2 = kcg_lit_int32(0);
    outC->msgBus_2_RBC_2[idx41].Message.field3 = kcg_lit_int32(0);
    for (idx40 = 0; idx40 < 50; idx40++) {
      outC->msgBus_2_RBC_2[idx41].OptionalPackets[idx40] = kcg_lit_int32(0);
    }
  }
  for (idx43 = 0; idx43 < 5; idx43++) {
    outC->msgBus_2_RBC_1[idx43].Message.valid = kcg_true;
    outC->msgBus_2_RBC_1[idx43].Message.nid_message = kcg_lit_int32(0);
    outC->msgBus_2_RBC_1[idx43].Message.l_message = kcg_lit_int32(0);
    outC->msgBus_2_RBC_1[idx43].Message.t_train = kcg_lit_int32(0);
    outC->msgBus_2_RBC_1[idx43].Message.nid_engine = kcg_lit_int32(0);
    outC->msgBus_2_RBC_1[idx43].Message.field1 = kcg_lit_int32(0);
    outC->msgBus_2_RBC_1[idx43].Message.field2 = kcg_lit_int32(0);
    outC->msgBus_2_RBC_1[idx43].Message.field3 = kcg_lit_int32(0);
    for (idx42 = 0; idx42 < 50; idx42++) {
      outC->msgBus_2_RBC_1[idx43].OptionalPackets[idx42] = kcg_lit_int32(0);
    }
  }
  /* IfBlock1:then:_L22=(RCM_Utils_Pkg::encoders::genMsgToBus#3)/ */
  genMsgToBus_init_RCM_Utils_Pkg_encoders(&outC->Context_genMsgToBus_3);
  /* IfBlock1:else:_L306=(RCM_Utils_Pkg::encoders::mergeMsgToBus#5)/ */
  mergeMsgToBus_init_RCM_Utils_Pkg_encoders(&outC->Context_mergeMsgToBus_5);
  /* IfBlock1:else:_L108=(RCM_Utils_Pkg::encoders::genMsgToBus#2)/ */
  genMsgToBus_init_RCM_Utils_Pkg_encoders(&outC->Context_genMsgToBus_2);
  /* IfBlock1:else:_L311=(RCM_Utils_Pkg::encoders::mergeMsgToBus#7)/ */
  mergeMsgToBus_init_RCM_Utils_Pkg_encoders(&outC->Context_mergeMsgToBus_7);
  /* IfBlock1:else:_L100=(RCM_Utils_Pkg::encoders::genMsgToBus#1)/ */
  genMsgToBus_init_RCM_Utils_Pkg_encoders(&outC->Context_genMsgToBus_1);
  /* IfBlock1:else:_L304=(RCM_Utils_Pkg::encoders::mergeMsgToBus#4)/ */
  mergeMsgToBus_init_RCM_Utils_Pkg_encoders(&outC->Context_mergeMsgToBus_4);
  /* IfBlock1:else:_L297=(RCM_Utils_Pkg::encoders::mergeMsgToBus#1)/ */
  mergeMsgToBus_init_RCM_Utils_Pkg_encoders(&outC->Context_mergeMsgToBus_1);
  /* IfBlock1:else:_L294=(RCM_Utils_Pkg::encoders::extractPositionReportFromBus#1)/ */
  extractPositionReportFromBus_init_RCM_Utils_Pkg_encoders(
    &outC->Context_extractPositionReportFromBus_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void mobileBusRouter_out_reset_Handover_Pkg_handoverUtils_Pkg(
  outC_mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg *outC)
{
  /* IfBlock1:then:_L22=(RCM_Utils_Pkg::encoders::genMsgToBus#3)/ */
  genMsgToBus_reset_RCM_Utils_Pkg_encoders(&outC->Context_genMsgToBus_3);
  /* IfBlock1:else:_L306=(RCM_Utils_Pkg::encoders::mergeMsgToBus#5)/ */
  mergeMsgToBus_reset_RCM_Utils_Pkg_encoders(&outC->Context_mergeMsgToBus_5);
  /* IfBlock1:else:_L108=(RCM_Utils_Pkg::encoders::genMsgToBus#2)/ */
  genMsgToBus_reset_RCM_Utils_Pkg_encoders(&outC->Context_genMsgToBus_2);
  /* IfBlock1:else:_L311=(RCM_Utils_Pkg::encoders::mergeMsgToBus#7)/ */
  mergeMsgToBus_reset_RCM_Utils_Pkg_encoders(&outC->Context_mergeMsgToBus_7);
  /* IfBlock1:else:_L100=(RCM_Utils_Pkg::encoders::genMsgToBus#1)/ */
  genMsgToBus_reset_RCM_Utils_Pkg_encoders(&outC->Context_genMsgToBus_1);
  /* IfBlock1:else:_L304=(RCM_Utils_Pkg::encoders::mergeMsgToBus#4)/ */
  mergeMsgToBus_reset_RCM_Utils_Pkg_encoders(&outC->Context_mergeMsgToBus_4);
  /* IfBlock1:else:_L297=(RCM_Utils_Pkg::encoders::mergeMsgToBus#1)/ */
  mergeMsgToBus_reset_RCM_Utils_Pkg_encoders(&outC->Context_mergeMsgToBus_1);
  /* IfBlock1:else:_L294=(RCM_Utils_Pkg::encoders::extractPositionReportFromBus#1)/ */
  extractPositionReportFromBus_reset_RCM_Utils_Pkg_encoders(
    &outC->Context_extractPositionReportFromBus_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg.c
** Generation date: 2023-11-06T13:54:31
*************************************************************$ */

