/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "genMsgToBus_RCM_Utils_Pkg_encoders.h"

/* RCM_Utils_Pkg::encoders::genMsgToBus/ */
void genMsgToBus_RCM_Utils_Pkg_encoders(
  /* msgToTrackTriggers/ */
  msgToTrackTriggers_T_RCM_MsgTypes_Pkg *msgToTrackTriggers,
  /* t_train/ */
  T_TRAIN t_train,
  /* t_train_global/ */
  T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* msgBus_in/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *msgBus_in,
  /* nid_engine/ */
  NID_ENGINE nid_engine,
  /* onboardPhoneNumbers_b/ */
  P003_TM_TrainToTrack *onboardPhoneNumbers_b,
  /* m_version/ */
  M_VERSION m_version,
  outC_genMsgToBus_RCM_Utils_Pkg_encoders *outC)
{
  /* msgBus_out/ */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus msgBus_out_partial;
  static kcg_int32 noname;
  /* msgBus_out/ */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _1_msgBus_out_partial;
  /* msgBus_out/ */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _2_msgBus_out_partial;
  static kcg_int32 _3_noname;
  /* msgBus_out/ */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _4_msgBus_out_partial;
  /* msgBus_out/ */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _5_msgBus_out_partial;
  static kcg_int32 _6_noname;
  /* msgBus_out/ */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _7_msgBus_out_partial;
  /* msgBus_out/ */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _8_msgBus_out_partial;
  static kcg_int32 _9_noname;
  /* msgBus_out/ */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _10_msgBus_out_partial;

  outC->_L6_Mean_1_int32 = kcg_lit_int32(2);
  outC->_L9 = t_train;
  outC->I2_Mean_1_int32 = outC->_L9;
  outC->_L2_Mean_1_int32 = outC->I2_Mean_1_int32;
  outC->_L6 = t_train_global;
  outC->I1_Mean_1_int32 = outC->_L6;
  outC->_L1_Mean_1_int32 = outC->I1_Mean_1_int32;
  outC->_L4_Mean_1_int32 = outC->_L1_Mean_1_int32 + outC->_L2_Mean_1_int32;
  outC->_L3_Mean_1_int32 = outC->_L4_Mean_1_int32 / outC->_L6_Mean_1_int32;
  outC->Me_output_Mean_1_int32 = outC->_L3_Mean_1_int32;
  outC->_L10 = outC->Me_output_Mean_1_int32;
  outC->_L11 = outC->_L10;
  outC->t_train_global_l = outC->_L11;
  kcg_copy_msgToTrackTriggers_T_RCM_MsgTypes_Pkg(&outC->_L1, msgToTrackTriggers);
  outC->_L4 = outC->_L1.m159_sessionEstablished;
  outC->m159_sessionEstablished = outC->_L4;
  outC->_L3 = outC->_L1.m156_terminationOfACommunicationSession;
  outC->m156_terminationOfACommunicationSession = outC->_L3;
  outC->_L2 = outC->_L1.m155_initiationOfACommunicationSession;
  outC->m155_initiationOfACommunicationSession = outC->_L2;
  outC->_L5 = outC->_L1.m154_noCompatibleVersionSupported;
  outC->m154_noCompatibleVersionSupported = outC->_L5;
  outC->IfBlock1_clock = outC->m155_initiationOfACommunicationSession;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L17_then_IfBlock1 = outC->t_train_global_l;
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->_L13_then_IfBlock1,
      msgBus_in);
    outC->_L9_then_IfBlock1 = kcg_true;
    outC->_L8_then_IfBlock1 = co155_Initiation_of_a_communication_session_Id_Pkg;
    outC->_L10_then_IfBlock1 = kcg_lit_int32(0);
    outC->_L7_then_IfBlock1 = t_train;
    outC->_L5_then_IfBlock1 = nid_engine;
    outC->_L14_then_IfBlock1.valid = outC->_L9_then_IfBlock1;
    outC->_L14_then_IfBlock1.nid_message = outC->_L8_then_IfBlock1;
    outC->_L14_then_IfBlock1.l_message = outC->_L10_then_IfBlock1;
    outC->_L14_then_IfBlock1.t_train = outC->_L7_then_IfBlock1;
    outC->_L14_then_IfBlock1.nid_engine = outC->_L5_then_IfBlock1;
    outC->_L15_then_IfBlock1 = m_version;
    /* IfBlock1:then:_L11=(TM_radio_messages::Send_M155#1)/ */
    Send_M155_TM_radio_messages(
      outC->_L17_then_IfBlock1,
      &outC->_L13_then_IfBlock1,
      &outC->_L14_then_IfBlock1,
      outC->_L15_then_IfBlock1,
      &outC->Context_Send_M155_1);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->_L11_then_IfBlock1,
      &outC->Context_Send_M155_1.MessageBus_out);
    outC->_L16_then_IfBlock1 = outC->Context_Send_M155_1.t_train_assigned;
    noname = outC->_L16_then_IfBlock1;
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &msgBus_out_partial,
      &outC->_L11_then_IfBlock1);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->msgBus_out,
      &msgBus_out_partial);
  }
  else {
    outC->else_clock_IfBlock1 = outC->m156_terminationOfACommunicationSession;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L13_then_else_IfBlock1 = outC->t_train_global_l;
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &outC->_L9_then_else_IfBlock1,
        msgBus_in);
      outC->_L5_then_else_IfBlock1 = kcg_true;
      outC->_L4_then_else_IfBlock1 =
        co156_Termination_of_a_communication_session_Id_Pkg;
      outC->_L6_then_else_IfBlock1 = kcg_lit_int32(0);
      outC->_L3_then_else_IfBlock1 = t_train;
      outC->_L1_then_else_IfBlock1 = nid_engine;
      outC->_L10_then_else_IfBlock1.valid = outC->_L5_then_else_IfBlock1;
      outC->_L10_then_else_IfBlock1.nid_message = outC->_L4_then_else_IfBlock1;
      outC->_L10_then_else_IfBlock1.l_message = outC->_L6_then_else_IfBlock1;
      outC->_L10_then_else_IfBlock1.t_train = outC->_L3_then_else_IfBlock1;
      outC->_L10_then_else_IfBlock1.nid_engine = outC->_L1_then_else_IfBlock1;
      outC->_L11_then_else_IfBlock1 = m_version;
      /* IfBlock1:else:then:_L7=(TM_radio_messages::Send_M156#1)/ */
      Send_M156_TM_radio_messages(
        outC->_L13_then_else_IfBlock1,
        &outC->_L9_then_else_IfBlock1,
        &outC->_L10_then_else_IfBlock1,
        outC->_L11_then_else_IfBlock1,
        &outC->Context_Send_M156_1);
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &outC->_L7_then_else_IfBlock1,
        &outC->Context_Send_M156_1.MessageBus_out);
      outC->_L12_then_else_IfBlock1 = outC->Context_Send_M156_1.t_train_assigned;
      _9_noname = outC->_L12_then_else_IfBlock1;
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &_10_msgBus_out_partial,
        &outC->_L7_then_else_IfBlock1);
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &_1_msgBus_out_partial,
        &_10_msgBus_out_partial);
    }
    else {
      outC->else_clock_else_IfBlock1 = outC->m159_sessionEstablished;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L30_then_else_else_IfBlock1 = outC->t_train_global_l;
        kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
          &outC->_L19_then_else_else_IfBlock1,
          msgBus_in);
        outC->_L10_then_else_else_IfBlock1 = kcg_true;
        outC->_L1_then_else_else_IfBlock1 = co159_Session_established_Id_Pkg;
        outC->_L16_then_else_else_IfBlock1 = kcg_lit_int32(0);
        outC->_L11_then_else_else_IfBlock1 = t_train;
        outC->_L9_then_else_else_IfBlock1 = nid_engine;
        outC->_L25_then_else_else_IfBlock1.valid = outC->_L10_then_else_else_IfBlock1;
        outC->_L25_then_else_else_IfBlock1.nid_message =
          outC->_L1_then_else_else_IfBlock1;
        outC->_L25_then_else_else_IfBlock1.l_message =
          outC->_L16_then_else_else_IfBlock1;
        outC->_L25_then_else_else_IfBlock1.t_train = outC->_L11_then_else_else_IfBlock1;
        outC->_L25_then_else_else_IfBlock1.nid_engine =
          outC->_L9_then_else_else_IfBlock1;
        kcg_copy_P003_TM_TrainToTrack(
          &outC->_L27_then_else_else_IfBlock1,
          onboardPhoneNumbers_b);
        outC->_L28_then_else_else_IfBlock1 = m_version;
        /* IfBlock1:else:else:then:_L17=(TM_radio_messages::Send_M159#2)/ */
        Send_M159_TM_radio_messages(
          outC->_L30_then_else_else_IfBlock1,
          &outC->_L19_then_else_else_IfBlock1,
          &outC->_L25_then_else_else_IfBlock1,
          &outC->_L27_then_else_else_IfBlock1,
          outC->_L28_then_else_else_IfBlock1,
          &outC->Context_Send_M159_2);
        kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
          &outC->_L17_then_else_else_IfBlock1,
          &outC->Context_Send_M159_2.MessageBus_out);
        outC->_L29_then_else_else_IfBlock1 = outC->Context_Send_M159_2.t_train_assigned;
        _3_noname = outC->_L29_then_else_else_IfBlock1;
        kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
          &_2_msgBus_out_partial,
          &outC->_L17_then_else_else_IfBlock1);
        kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
          &_8_msgBus_out_partial,
          &_2_msgBus_out_partial);
      }
      else {
        outC->else_clock_else_else_IfBlock1 = outC->m154_noCompatibleVersionSupported;
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L14_then_else_else_else_IfBlock1 = outC->t_train_global_l;
          kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
            &outC->_L10_then_else_else_else_IfBlock1,
            msgBus_in);
          outC->_L5_then_else_else_else_IfBlock1 = kcg_true;
          outC->_L6_then_else_else_else_IfBlock1 =
            co154_No_Compatible_Version_Support_Id_Pkg;
          outC->_L7_then_else_else_else_IfBlock1 = kcg_lit_int32(0);
          outC->_L2_then_else_else_else_IfBlock1 = t_train;
          outC->_L4_then_else_else_else_IfBlock1 = nid_engine;
          outC->_L12_then_else_else_else_IfBlock1.valid =
            outC->_L5_then_else_else_else_IfBlock1;
          outC->_L12_then_else_else_else_IfBlock1.nid_message =
            outC->_L6_then_else_else_else_IfBlock1;
          outC->_L12_then_else_else_else_IfBlock1.l_message =
            outC->_L7_then_else_else_else_IfBlock1;
          outC->_L12_then_else_else_else_IfBlock1.t_train =
            outC->_L2_then_else_else_else_IfBlock1;
          outC->_L12_then_else_else_else_IfBlock1.nid_engine =
            outC->_L4_then_else_else_else_IfBlock1;
          outC->_L11_then_else_else_else_IfBlock1 = m_version;
          /* IfBlock1:else:else:else:then:_L8=(TM_radio_messages::Send_M154#1)/ */
          Send_M154_TM_radio_messages(
            outC->_L14_then_else_else_else_IfBlock1,
            &outC->_L10_then_else_else_else_IfBlock1,
            &outC->_L12_then_else_else_else_IfBlock1,
            outC->_L11_then_else_else_else_IfBlock1,
            &outC->Context_Send_M154_1);
          kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
            &outC->_L8_then_else_else_else_IfBlock1,
            &outC->Context_Send_M154_1.MessageBus_out);
          outC->_L13_then_else_else_else_IfBlock1 =
            outC->Context_Send_M154_1.t_train_assigned;
          _6_noname = outC->_L13_then_else_else_else_IfBlock1;
          kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
            &_7_msgBus_out_partial,
            &outC->_L8_then_else_else_else_IfBlock1);
          kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
            &_4_msgBus_out_partial,
            &_7_msgBus_out_partial);
        }
        else {
          kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
            &outC->_L2_else_else_else_else_IfBlock1,
            msgBus_in);
          kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
            &_5_msgBus_out_partial,
            &outC->_L2_else_else_else_else_IfBlock1);
          kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
            &_4_msgBus_out_partial,
            &_5_msgBus_out_partial);
        }
        kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
          &_8_msgBus_out_partial,
          &_4_msgBus_out_partial);
      }
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &_1_msgBus_out_partial,
        &_8_msgBus_out_partial);
    }
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->msgBus_out,
      &_1_msgBus_out_partial);
  }
}

#ifndef KCG_USER_DEFINED_INIT
void genMsgToBus_init_RCM_Utils_Pkg_encoders(
  outC_genMsgToBus_RCM_Utils_Pkg_encoders *outC)
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

  outC->_L11 = kcg_lit_int32(0);
  outC->_L10 = kcg_lit_int32(0);
  outC->_L9 = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  outC->_L2 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L1.m155_initiationOfACommunicationSession = kcg_true;
  outC->_L1.m156_terminationOfACommunicationSession = kcg_true;
  outC->_L1.m159_sessionEstablished = kcg_true;
  outC->_L1.m154_noCompatibleVersionSupported = kcg_true;
  outC->t_train_global_l = kcg_lit_int32(0);
  outC->m154_noCompatibleVersionSupported = kcg_true;
  outC->m155_initiationOfACommunicationSession = kcg_true;
  outC->m156_terminationOfACommunicationSession = kcg_true;
  outC->m159_sessionEstablished = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L13_then_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L12_then_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L11_then_else_IfBlock1 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L10_then_else_IfBlock1.valid = kcg_true;
  outC->_L10_then_else_IfBlock1.nid_message = kcg_lit_int32(0);
  outC->_L10_then_else_IfBlock1.l_message = kcg_lit_int32(0);
  outC->_L10_then_else_IfBlock1.t_train = kcg_lit_int32(0);
  outC->_L10_then_else_IfBlock1.nid_engine = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 5; idx1++) {
    outC->_L9_then_else_IfBlock1[idx1].Message.valid = kcg_true;
    outC->_L9_then_else_IfBlock1[idx1].Message.nid_message = kcg_lit_int32(0);
    outC->_L9_then_else_IfBlock1[idx1].Message.l_message = kcg_lit_int32(0);
    outC->_L9_then_else_IfBlock1[idx1].Message.t_train = kcg_lit_int32(0);
    outC->_L9_then_else_IfBlock1[idx1].Message.nid_engine = kcg_lit_int32(0);
    outC->_L9_then_else_IfBlock1[idx1].Message.field1 = kcg_lit_int32(0);
    outC->_L9_then_else_IfBlock1[idx1].Message.field2 = kcg_lit_int32(0);
    outC->_L9_then_else_IfBlock1[idx1].Message.field3 = kcg_lit_int32(0);
    for (idx = 0; idx < 50; idx++) {
      outC->_L9_then_else_IfBlock1[idx1].OptionalPackets[idx] = kcg_lit_int32(0);
    }
  }
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L7_then_else_IfBlock1[idx3].Message.valid = kcg_true;
    outC->_L7_then_else_IfBlock1[idx3].Message.nid_message = kcg_lit_int32(0);
    outC->_L7_then_else_IfBlock1[idx3].Message.l_message = kcg_lit_int32(0);
    outC->_L7_then_else_IfBlock1[idx3].Message.t_train = kcg_lit_int32(0);
    outC->_L7_then_else_IfBlock1[idx3].Message.nid_engine = kcg_lit_int32(0);
    outC->_L7_then_else_IfBlock1[idx3].Message.field1 = kcg_lit_int32(0);
    outC->_L7_then_else_IfBlock1[idx3].Message.field2 = kcg_lit_int32(0);
    outC->_L7_then_else_IfBlock1[idx3].Message.field3 = kcg_lit_int32(0);
    for (idx2 = 0; idx2 < 50; idx2++) {
      outC->_L7_then_else_IfBlock1[idx3].OptionalPackets[idx2] = kcg_lit_int32(0);
    }
  }
  outC->_L6_then_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L5_then_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L3_then_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L4_then_else_IfBlock1 = kcg_lit_int32(0);
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L14_then_else_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L13_then_else_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L12_then_else_else_else_IfBlock1.valid = kcg_true;
  outC->_L12_then_else_else_else_IfBlock1.nid_message = kcg_lit_int32(0);
  outC->_L12_then_else_else_else_IfBlock1.l_message = kcg_lit_int32(0);
  outC->_L12_then_else_else_else_IfBlock1.t_train = kcg_lit_int32(0);
  outC->_L12_then_else_else_else_IfBlock1.nid_engine = kcg_lit_int32(0);
  outC->_L11_then_else_else_else_IfBlock1 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx5 = 0; idx5 < 5; idx5++) {
    outC->_L10_then_else_else_else_IfBlock1[idx5].Message.valid = kcg_true;
    outC->_L10_then_else_else_else_IfBlock1[idx5].Message.nid_message =
      kcg_lit_int32(0);
    outC->_L10_then_else_else_else_IfBlock1[idx5].Message.l_message =
      kcg_lit_int32(0);
    outC->_L10_then_else_else_else_IfBlock1[idx5].Message.t_train =
      kcg_lit_int32(0);
    outC->_L10_then_else_else_else_IfBlock1[idx5].Message.nid_engine =
      kcg_lit_int32(0);
    outC->_L10_then_else_else_else_IfBlock1[idx5].Message.field1 = kcg_lit_int32(0);
    outC->_L10_then_else_else_else_IfBlock1[idx5].Message.field2 = kcg_lit_int32(0);
    outC->_L10_then_else_else_else_IfBlock1[idx5].Message.field3 = kcg_lit_int32(0);
    for (idx4 = 0; idx4 < 50; idx4++) {
      outC->_L10_then_else_else_else_IfBlock1[idx5].OptionalPackets[idx4] =
        kcg_lit_int32(0);
    }
  }
  for (idx7 = 0; idx7 < 5; idx7++) {
    outC->_L8_then_else_else_else_IfBlock1[idx7].Message.valid = kcg_true;
    outC->_L8_then_else_else_else_IfBlock1[idx7].Message.nid_message =
      kcg_lit_int32(0);
    outC->_L8_then_else_else_else_IfBlock1[idx7].Message.l_message =
      kcg_lit_int32(0);
    outC->_L8_then_else_else_else_IfBlock1[idx7].Message.t_train = kcg_lit_int32(0);
    outC->_L8_then_else_else_else_IfBlock1[idx7].Message.nid_engine =
      kcg_lit_int32(0);
    outC->_L8_then_else_else_else_IfBlock1[idx7].Message.field1 = kcg_lit_int32(0);
    outC->_L8_then_else_else_else_IfBlock1[idx7].Message.field2 = kcg_lit_int32(0);
    outC->_L8_then_else_else_else_IfBlock1[idx7].Message.field3 = kcg_lit_int32(0);
    for (idx6 = 0; idx6 < 50; idx6++) {
      outC->_L8_then_else_else_else_IfBlock1[idx7].OptionalPackets[idx6] =
        kcg_lit_int32(0);
    }
  }
  outC->_L7_then_else_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L6_then_else_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L5_then_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L4_then_else_else_else_IfBlock1 = kcg_lit_int32(0);
  for (idx9 = 0; idx9 < 5; idx9++) {
    outC->_L2_else_else_else_else_IfBlock1[idx9].Message.valid = kcg_true;
    outC->_L2_else_else_else_else_IfBlock1[idx9].Message.nid_message =
      kcg_lit_int32(0);
    outC->_L2_else_else_else_else_IfBlock1[idx9].Message.l_message =
      kcg_lit_int32(0);
    outC->_L2_else_else_else_else_IfBlock1[idx9].Message.t_train = kcg_lit_int32(0);
    outC->_L2_else_else_else_else_IfBlock1[idx9].Message.nid_engine =
      kcg_lit_int32(0);
    outC->_L2_else_else_else_else_IfBlock1[idx9].Message.field1 = kcg_lit_int32(0);
    outC->_L2_else_else_else_else_IfBlock1[idx9].Message.field2 = kcg_lit_int32(0);
    outC->_L2_else_else_else_else_IfBlock1[idx9].Message.field3 = kcg_lit_int32(0);
    for (idx8 = 0; idx8 < 50; idx8++) {
      outC->_L2_else_else_else_else_IfBlock1[idx9].OptionalPackets[idx8] =
        kcg_lit_int32(0);
    }
  }
  outC->else_clock_else_else_IfBlock1 = kcg_true;
  for (idx11 = 0; idx11 < 5; idx11++) {
    outC->_L17_then_else_else_IfBlock1[idx11].Message.valid = kcg_true;
    outC->_L17_then_else_else_IfBlock1[idx11].Message.nid_message =
      kcg_lit_int32(0);
    outC->_L17_then_else_else_IfBlock1[idx11].Message.l_message = kcg_lit_int32(0);
    outC->_L17_then_else_else_IfBlock1[idx11].Message.t_train = kcg_lit_int32(0);
    outC->_L17_then_else_else_IfBlock1[idx11].Message.nid_engine = kcg_lit_int32(0);
    outC->_L17_then_else_else_IfBlock1[idx11].Message.field1 = kcg_lit_int32(0);
    outC->_L17_then_else_else_IfBlock1[idx11].Message.field2 = kcg_lit_int32(0);
    outC->_L17_then_else_else_IfBlock1[idx11].Message.field3 = kcg_lit_int32(0);
    for (idx10 = 0; idx10 < 50; idx10++) {
      outC->_L17_then_else_else_IfBlock1[idx11].OptionalPackets[idx10] =
        kcg_lit_int32(0);
    }
  }
  for (idx13 = 0; idx13 < 5; idx13++) {
    outC->_L19_then_else_else_IfBlock1[idx13].Message.valid = kcg_true;
    outC->_L19_then_else_else_IfBlock1[idx13].Message.nid_message =
      kcg_lit_int32(0);
    outC->_L19_then_else_else_IfBlock1[idx13].Message.l_message = kcg_lit_int32(0);
    outC->_L19_then_else_else_IfBlock1[idx13].Message.t_train = kcg_lit_int32(0);
    outC->_L19_then_else_else_IfBlock1[idx13].Message.nid_engine = kcg_lit_int32(0);
    outC->_L19_then_else_else_IfBlock1[idx13].Message.field1 = kcg_lit_int32(0);
    outC->_L19_then_else_else_IfBlock1[idx13].Message.field2 = kcg_lit_int32(0);
    outC->_L19_then_else_else_IfBlock1[idx13].Message.field3 = kcg_lit_int32(0);
    for (idx12 = 0; idx12 < 50; idx12++) {
      outC->_L19_then_else_else_IfBlock1[idx13].OptionalPackets[idx12] =
        kcg_lit_int32(0);
    }
  }
  outC->_L25_then_else_else_IfBlock1.valid = kcg_true;
  outC->_L25_then_else_else_IfBlock1.nid_message = kcg_lit_int32(0);
  outC->_L25_then_else_else_IfBlock1.l_message = kcg_lit_int32(0);
  outC->_L25_then_else_else_IfBlock1.t_train = kcg_lit_int32(0);
  outC->_L25_then_else_else_IfBlock1.nid_engine = kcg_lit_int32(0);
  outC->_L27_then_else_else_IfBlock1.valid = kcg_true;
  outC->_L27_then_else_else_IfBlock1.nid_packet = kcg_lit_int32(0);
  outC->_L27_then_else_else_IfBlock1.l_packet = kcg_lit_int32(0);
  outC->_L27_then_else_else_IfBlock1.n_iter = kcg_lit_int32(0);
  for (idx14 = 0; idx14 < 5; idx14++) {
    outC->_L27_then_else_else_IfBlock1.nid_radio[idx14] = kcg_lit_int32(0);
  }
  outC->_L1_then_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L9_then_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L10_then_else_else_IfBlock1 = kcg_true;
  outC->_L11_then_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L16_then_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L28_then_else_else_IfBlock1 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L29_then_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L30_then_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L8_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L7_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L9_then_IfBlock1 = kcg_true;
  outC->_L10_then_IfBlock1 = kcg_lit_int32(0);
  for (idx16 = 0; idx16 < 5; idx16++) {
    outC->_L11_then_IfBlock1[idx16].Message.valid = kcg_true;
    outC->_L11_then_IfBlock1[idx16].Message.nid_message = kcg_lit_int32(0);
    outC->_L11_then_IfBlock1[idx16].Message.l_message = kcg_lit_int32(0);
    outC->_L11_then_IfBlock1[idx16].Message.t_train = kcg_lit_int32(0);
    outC->_L11_then_IfBlock1[idx16].Message.nid_engine = kcg_lit_int32(0);
    outC->_L11_then_IfBlock1[idx16].Message.field1 = kcg_lit_int32(0);
    outC->_L11_then_IfBlock1[idx16].Message.field2 = kcg_lit_int32(0);
    outC->_L11_then_IfBlock1[idx16].Message.field3 = kcg_lit_int32(0);
    for (idx15 = 0; idx15 < 50; idx15++) {
      outC->_L11_then_IfBlock1[idx16].OptionalPackets[idx15] = kcg_lit_int32(0);
    }
  }
  for (idx18 = 0; idx18 < 5; idx18++) {
    outC->_L13_then_IfBlock1[idx18].Message.valid = kcg_true;
    outC->_L13_then_IfBlock1[idx18].Message.nid_message = kcg_lit_int32(0);
    outC->_L13_then_IfBlock1[idx18].Message.l_message = kcg_lit_int32(0);
    outC->_L13_then_IfBlock1[idx18].Message.t_train = kcg_lit_int32(0);
    outC->_L13_then_IfBlock1[idx18].Message.nid_engine = kcg_lit_int32(0);
    outC->_L13_then_IfBlock1[idx18].Message.field1 = kcg_lit_int32(0);
    outC->_L13_then_IfBlock1[idx18].Message.field2 = kcg_lit_int32(0);
    outC->_L13_then_IfBlock1[idx18].Message.field3 = kcg_lit_int32(0);
    for (idx17 = 0; idx17 < 50; idx17++) {
      outC->_L13_then_IfBlock1[idx18].OptionalPackets[idx17] = kcg_lit_int32(0);
    }
  }
  outC->_L14_then_IfBlock1.valid = kcg_true;
  outC->_L14_then_IfBlock1.nid_message = kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.l_message = kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.t_train = kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.nid_engine = kcg_lit_int32(0);
  outC->_L15_then_IfBlock1 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L16_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L17_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L1_Mean_1_int32 = kcg_lit_int32(0);
  outC->_L2_Mean_1_int32 = kcg_lit_int32(0);
  outC->_L3_Mean_1_int32 = kcg_lit_int32(0);
  outC->_L4_Mean_1_int32 = kcg_lit_int32(0);
  outC->_L6_Mean_1_int32 = kcg_lit_int32(0);
  outC->I1_Mean_1_int32 = kcg_lit_int32(0);
  outC->I2_Mean_1_int32 = kcg_lit_int32(0);
  outC->Me_output_Mean_1_int32 = kcg_lit_int32(0);
  for (idx20 = 0; idx20 < 5; idx20++) {
    outC->msgBus_out[idx20].Message.valid = kcg_true;
    outC->msgBus_out[idx20].Message.nid_message = kcg_lit_int32(0);
    outC->msgBus_out[idx20].Message.l_message = kcg_lit_int32(0);
    outC->msgBus_out[idx20].Message.t_train = kcg_lit_int32(0);
    outC->msgBus_out[idx20].Message.nid_engine = kcg_lit_int32(0);
    outC->msgBus_out[idx20].Message.field1 = kcg_lit_int32(0);
    outC->msgBus_out[idx20].Message.field2 = kcg_lit_int32(0);
    outC->msgBus_out[idx20].Message.field3 = kcg_lit_int32(0);
    for (idx19 = 0; idx19 < 50; idx19++) {
      outC->msgBus_out[idx20].OptionalPackets[idx19] = kcg_lit_int32(0);
    }
  }
  /* IfBlock1:then:_L11=(TM_radio_messages::Send_M155#1)/ */
  Send_M155_init_TM_radio_messages(&outC->Context_Send_M155_1);
  /* IfBlock1:else:then:_L7=(TM_radio_messages::Send_M156#1)/ */
  Send_M156_init_TM_radio_messages(&outC->Context_Send_M156_1);
  /* IfBlock1:else:else:then:_L17=(TM_radio_messages::Send_M159#2)/ */
  Send_M159_init_TM_radio_messages(&outC->Context_Send_M159_2);
  /* IfBlock1:else:else:else:then:_L8=(TM_radio_messages::Send_M154#1)/ */
  Send_M154_init_TM_radio_messages(&outC->Context_Send_M154_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void genMsgToBus_reset_RCM_Utils_Pkg_encoders(
  outC_genMsgToBus_RCM_Utils_Pkg_encoders *outC)
{
  /* IfBlock1:then:_L11=(TM_radio_messages::Send_M155#1)/ */
  Send_M155_reset_TM_radio_messages(&outC->Context_Send_M155_1);
  /* IfBlock1:else:then:_L7=(TM_radio_messages::Send_M156#1)/ */
  Send_M156_reset_TM_radio_messages(&outC->Context_Send_M156_1);
  /* IfBlock1:else:else:then:_L17=(TM_radio_messages::Send_M159#2)/ */
  Send_M159_reset_TM_radio_messages(&outC->Context_Send_M159_2);
  /* IfBlock1:else:else:else:then:_L8=(TM_radio_messages::Send_M154#1)/ */
  Send_M154_reset_TM_radio_messages(&outC->Context_Send_M154_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_genMsgToBus_RCM_Utils_Pkg_encoders(
  SV_genMsgToBus_RCM_Utils_Pkg_encoders *SV,
  outC_genMsgToBus_RCM_Utils_Pkg_encoders *outC)
{
  kcg_save_SV_Send_M154_TM_radio_messages(
    &SV->Context_Send_M154_1,
    &outC->Context_Send_M154_1);
  kcg_save_SV_Send_M159_TM_radio_messages(
    &SV->Context_Send_M159_2,
    &outC->Context_Send_M159_2);
  kcg_save_SV_Send_M156_TM_radio_messages(
    &SV->Context_Send_M156_1,
    &outC->Context_Send_M156_1);
  kcg_save_SV_Send_M155_TM_radio_messages(
    &SV->Context_Send_M155_1,
    &outC->Context_Send_M155_1);
}

void kcg_load_SV_genMsgToBus_RCM_Utils_Pkg_encoders(
  outC_genMsgToBus_RCM_Utils_Pkg_encoders *outC,
  SV_genMsgToBus_RCM_Utils_Pkg_encoders *SV)
{
  kcg_load_SV_Send_M154_TM_radio_messages(
    &outC->Context_Send_M154_1,
    &SV->Context_Send_M154_1);
  kcg_load_SV_Send_M159_TM_radio_messages(
    &outC->Context_Send_M159_2,
    &SV->Context_Send_M159_2);
  kcg_load_SV_Send_M156_TM_radio_messages(
    &outC->Context_Send_M156_1,
    &SV->Context_Send_M156_1);
  kcg_load_SV_Send_M155_TM_radio_messages(
    &outC->Context_Send_M155_1,
    &SV->Context_Send_M155_1);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** genMsgToBus_RCM_Utils_Pkg_encoders.c
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

