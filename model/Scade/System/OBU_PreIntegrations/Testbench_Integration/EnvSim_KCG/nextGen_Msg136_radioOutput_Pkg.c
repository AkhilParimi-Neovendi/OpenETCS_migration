/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "nextGen_Msg136_radioOutput_Pkg.h"

/* radioOutput_Pkg::nextGen_Msg136/ */
void nextGen_Msg136_radioOutput_Pkg(
  /* MessageBus/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* inFromPositionReport/ */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg *inFromPositionReport,
  /* inVersion/ */
  M_VERSION inVersion,
  /* inT_TRAIN/ */
  T_TRAIN inT_TRAIN,
  outC_nextGen_Msg136_radioOutput_Pkg *outC)
{
  static P000_TM_TrainToTrack op_call;
  static P001_TM_TrainToTrack _1_op_call;
  /* MessageBus_out/ */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus MessageBus_out_partial;
  static kcg_int64 noname;
  /* MessageBus_out/ */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _2_MessageBus_out_partial;

  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->_L9,
    inFromPositionReport);
  outC->_L8 = outC->_L9.present;
  outC->isPresent = outC->_L8;
  outC->IfBlock1_clock = outC->isPresent;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &outC->_L1_then_IfBlock1,
      inFromPositionReport);
    kcg_copy_outPackets_T_Common_Types_Pkg(
      &outC->_L2_then_IfBlock1,
      &outC->_L1_then_IfBlock1.packets);
    kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
      &outC->_L8_then_IfBlock1,
      &outC->_L2_then_IfBlock1.p0);
    outC->_L11_then_IfBlock1 = outC->_L8_then_IfBlock1.valid;
    outC->every = outC->_L11_then_IfBlock1;
    if (outC->every) {
      /* IfBlock1:then:_L10=(radioOutput_Pkg::nextGen_P00#1)/ */
      nextGen_P00_radioOutput_Pkg(
        &outC->_L8_then_IfBlock1,
        &outC->Context_nextGen_P00_1);
      kcg_copy_P000_TM_TrainToTrack(&op_call, &outC->Context_nextGen_P00_1.outP0);
    }
    kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
      &outC->_L14_then_IfBlock1,
      &outC->_L2_then_IfBlock1.p1);
    outC->_L13_then_IfBlock1 = outC->_L14_then_IfBlock1.valid;
    outC->every1 = outC->_L13_then_IfBlock1;
    if (outC->every1) {
      /* IfBlock1:then:_L16=(radioOutput_Pkg::nextGen_P01#2)/ */
      nextGen_P01_radioOutput_Pkg(
        &outC->_L14_then_IfBlock1,
        &outC->Context_nextGen_P01_2);
      kcg_copy_P001_TM_TrainToTrack(&_1_op_call, &outC->Context_nextGen_P01_2.outP1);
    }
    outC->_L22_then_IfBlock1 = inT_TRAIN;
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->_L5_then_IfBlock1,
      MessageBus);
    kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
      &outC->_L3_then_IfBlock1,
      &outC->_L1_then_IfBlock1.header);
    /* IfBlock1:then:_L6=(radioOutput_Pkg::nextGen_MsgHdr136#2)/ */
    nextGen_MsgHdr136_radioOutput_Pkg(
      &outC->_L3_then_IfBlock1,
      &outC->Context_nextGen_MsgHdr136_2);
    kcg_copy_M_136_T_TM_radio_messages(
      &outC->_L6_then_IfBlock1,
      &outC->Context_nextGen_MsgHdr136_2.outnextGenHeader);
    kcg_copy_P000_TM_TrainToTrack(
      &outC->_L12_then_IfBlock1,
      (P000_TM_TrainToTrack *) &noP000_radioOutput_Pkg);
    if (outC->every) {
      kcg_copy_P000_TM_TrainToTrack(&outC->_L10_then_IfBlock1, &op_call);
    }
    else {
      kcg_copy_P000_TM_TrainToTrack(
        &outC->_L10_then_IfBlock1,
        &outC->_L12_then_IfBlock1);
    }
    kcg_copy_P001_TM_TrainToTrack(
      &outC->_L15_then_IfBlock1,
      (P001_TM_TrainToTrack *) &noP001_radioOutput_Pkg);
    if (outC->every1) {
      kcg_copy_P001_TM_TrainToTrack(&outC->_L16_then_IfBlock1, &_1_op_call);
    }
    else {
      kcg_copy_P001_TM_TrainToTrack(
        &outC->_L16_then_IfBlock1,
        &outC->_L15_then_IfBlock1);
    }
    kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(
      &outC->_L17_then_IfBlock1,
      &outC->_L2_then_IfBlock1.p4);
    /* IfBlock1:then:_L18=(radioOutput_Pkg::nextGen_P04#1)/ */
    nextGen_P04_radioOutput_Pkg(
      &outC->_L17_then_IfBlock1,
      &outC->Context_nextGen_P04_1);
    kcg_copy_P004_TM_TrainToTrack(
      &outC->_L18_then_IfBlock1,
      &outC->Context_nextGen_P04_1.outP4);
    kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
      &outC->_L19_then_IfBlock1,
      &outC->_L2_then_IfBlock1.p5);
    /* IfBlock1:then:_L21=(radioOutput_Pkg::nextGen_P05#1)/ */
    nextGen_P05_radioOutput_Pkg(
      &outC->_L19_then_IfBlock1,
      &outC->Context_nextGen_P05_1);
    kcg_copy_P005_TM_TrainToTrack(
      &outC->_L21_then_IfBlock1,
      &outC->Context_nextGen_P05_1.outP5);
    kcg_copy_P044_TM_TrainToTrack(
      &outC->_L20_then_IfBlock1,
      (P044_TM_TrainToTrack *) &noP044_radioOutput_Pkg);
    outC->_L23_then_IfBlock1 = inVersion;
    /* IfBlock1:then:_L4=(TM_radio_messages::Send_M136#2)/ */
    Send_M136_TM_radio_messages(
      outC->_L22_then_IfBlock1,
      &outC->_L5_then_IfBlock1,
      &outC->_L6_then_IfBlock1,
      &outC->_L10_then_IfBlock1,
      &outC->_L16_then_IfBlock1,
      &outC->_L18_then_IfBlock1,
      &outC->_L21_then_IfBlock1,
      &outC->_L20_then_IfBlock1,
      outC->_L23_then_IfBlock1,
      &outC->Context_Send_M136_2);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->_L4_then_IfBlock1,
      &outC->Context_Send_M136_2.MessageBus_out);
    outC->_L24_then_IfBlock1 = outC->Context_Send_M136_2.t_train_assigned;
    noname = outC->_L24_then_IfBlock1;
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &MessageBus_out_partial,
      &outC->_L4_then_IfBlock1);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->MessageBus_out,
      &MessageBus_out_partial);
  }
  else {
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->_L1_else_IfBlock1,
      MessageBus);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &_2_MessageBus_out_partial,
      &outC->_L1_else_IfBlock1);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->MessageBus_out,
      &_2_MessageBus_out_partial);
  }
}

#ifndef KCG_USER_DEFINED_INIT
void nextGen_Msg136_init_radioOutput_Pkg(
  outC_nextGen_Msg136_radioOutput_Pkg *outC)
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

  outC->_L8 = kcg_true;
  outC->_L9.present = kcg_true;
  outC->_L9.header.present = kcg_true;
  outC->_L9.header.nid_message = kcg_lit_int64(0);
  outC->_L9.header.t_train = kcg_lit_int64(0);
  outC->_L9.header.nid_engine = kcg_lit_int64(0);
  outC->_L9.header.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L9.header.xT_TRAIN = kcg_lit_int64(0);
  outC->_L9.header.xNID_EM = kcg_lit_int64(0);
  outC->_L9.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L9.header.xNID_TEXTMESSAGE = kcg_lit_int64(0);
  outC->_L9.packets.p0.valid = kcg_true;
  outC->_L9.packets.p0.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L9.packets.p0.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L9.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L9.packets.p0.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L9.packets.p0.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L9.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L9.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L9.packets.p0.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L9.packets.p0.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L9.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L9.packets.p0.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L9.packets.p0.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L9.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L9.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L9.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L9.packets.p0.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L9.packets.p1.valid = kcg_true;
  outC->_L9.packets.p1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L9.packets.p1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L9.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L9.packets.p1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L9.packets.p1.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L9.packets.p1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L9.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L9.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L9.packets.p1.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L9.packets.p1.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L9.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L9.packets.p1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L9.packets.p1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L9.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L9.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L9.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L9.packets.p1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L9.packets.p3.valid = kcg_true;
  outC->_L9.packets.p3.number = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 1; idx1++) {
    outC->_L9.packets.p3.aNID_RADIO[idx1].valid = kcg_true;
    for (idx = 0; idx < 15; idx++) {
      outC->_L9.packets.p3.aNID_RADIO[idx1].telephoneNumber[idx] = kcg_lit_int64(0);
    }
  }
  outC->_L9.packets.p4.valid = kcg_true;
  outC->_L9.packets.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L9.packets.p5.valid = kcg_true;
  outC->_L9.packets.p5.TrainRunningNumber = kcg_lit_int64(0);
  outC->_L9.packets.p9.valid = kcg_true;
  outC->_L9.packets.p9.transitionInformation = kcg_lit_int64(0);
  outC->_L9.packets.p11.valid = kcg_true;
  outC->_L9.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L9.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L9.packets.p11.l_train = kcg_lit_int64(0);
  outC->_L9.packets.p11.v_maxtrain = kcg_lit_int64(0);
  outC->_L9.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L9.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L9.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L9.packets.p11.n_axle = kcg_lit_int64(0);
  outC->_L9.packets.p11.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 4; idx2++) {
    outC->_L9.packets.p11.tractionIdentity[idx2].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L9.packets.p11.tractionIdentity[idx2].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L9.packets.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L9.packets.p11.nid_ntc[idx3] = kcg_lit_int64(0);
  }
  outC->isPresent = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  for (idx5 = 0; idx5 < 5; idx5++) {
    outC->_L1_else_IfBlock1[idx5].Message.valid = kcg_true;
    outC->_L1_else_IfBlock1[idx5].Message.nid_message = kcg_lit_int64(0);
    outC->_L1_else_IfBlock1[idx5].Message.l_message = kcg_lit_int64(0);
    outC->_L1_else_IfBlock1[idx5].Message.t_train = kcg_lit_int64(0);
    outC->_L1_else_IfBlock1[idx5].Message.nid_engine = kcg_lit_int64(0);
    outC->_L1_else_IfBlock1[idx5].Message.field1 = kcg_lit_int64(0);
    outC->_L1_else_IfBlock1[idx5].Message.field2 = kcg_lit_int64(0);
    outC->_L1_else_IfBlock1[idx5].Message.field3 = kcg_lit_int64(0);
    for (idx4 = 0; idx4 < 50; idx4++) {
      outC->_L1_else_IfBlock1[idx5].OptionalPackets[idx4] = kcg_lit_int64(0);
    }
  }
  outC->every1 = kcg_true;
  outC->every = kcg_true;
  outC->_L6_then_IfBlock1.valid = kcg_true;
  outC->_L6_then_IfBlock1.nid_message = kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.l_message = kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.t_train = kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.nid_engine = kcg_lit_int64(0);
  for (idx7 = 0; idx7 < 5; idx7++) {
    outC->_L5_then_IfBlock1[idx7].Message.valid = kcg_true;
    outC->_L5_then_IfBlock1[idx7].Message.nid_message = kcg_lit_int64(0);
    outC->_L5_then_IfBlock1[idx7].Message.l_message = kcg_lit_int64(0);
    outC->_L5_then_IfBlock1[idx7].Message.t_train = kcg_lit_int64(0);
    outC->_L5_then_IfBlock1[idx7].Message.nid_engine = kcg_lit_int64(0);
    outC->_L5_then_IfBlock1[idx7].Message.field1 = kcg_lit_int64(0);
    outC->_L5_then_IfBlock1[idx7].Message.field2 = kcg_lit_int64(0);
    outC->_L5_then_IfBlock1[idx7].Message.field3 = kcg_lit_int64(0);
    for (idx6 = 0; idx6 < 50; idx6++) {
      outC->_L5_then_IfBlock1[idx7].OptionalPackets[idx6] = kcg_lit_int64(0);
    }
  }
  for (idx9 = 0; idx9 < 5; idx9++) {
    outC->_L4_then_IfBlock1[idx9].Message.valid = kcg_true;
    outC->_L4_then_IfBlock1[idx9].Message.nid_message = kcg_lit_int64(0);
    outC->_L4_then_IfBlock1[idx9].Message.l_message = kcg_lit_int64(0);
    outC->_L4_then_IfBlock1[idx9].Message.t_train = kcg_lit_int64(0);
    outC->_L4_then_IfBlock1[idx9].Message.nid_engine = kcg_lit_int64(0);
    outC->_L4_then_IfBlock1[idx9].Message.field1 = kcg_lit_int64(0);
    outC->_L4_then_IfBlock1[idx9].Message.field2 = kcg_lit_int64(0);
    outC->_L4_then_IfBlock1[idx9].Message.field3 = kcg_lit_int64(0);
    for (idx8 = 0; idx8 < 50; idx8++) {
      outC->_L4_then_IfBlock1[idx9].OptionalPackets[idx8] = kcg_lit_int64(0);
    }
  }
  outC->_L3_then_IfBlock1.present = kcg_true;
  outC->_L3_then_IfBlock1.nid_message = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.t_train = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.nid_engine = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L3_then_IfBlock1.xT_TRAIN = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.xNID_EM = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L3_then_IfBlock1.xNID_TEXTMESSAGE = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.p0.valid = kcg_true;
  outC->_L2_then_IfBlock1.p0.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.p0.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L2_then_IfBlock1.p0.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.p0.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L2_then_IfBlock1.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L2_then_IfBlock1.p0.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.p0.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L2_then_IfBlock1.p0.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.p0.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L2_then_IfBlock1.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L2_then_IfBlock1.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L2_then_IfBlock1.p0.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.p1.valid = kcg_true;
  outC->_L2_then_IfBlock1.p1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.p1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L2_then_IfBlock1.p1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.p1.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.p1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L2_then_IfBlock1.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L2_then_IfBlock1.p1.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.p1.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L2_then_IfBlock1.p1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.p1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L2_then_IfBlock1.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L2_then_IfBlock1.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L2_then_IfBlock1.p1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.p3.valid = kcg_true;
  outC->_L2_then_IfBlock1.p3.number = kcg_lit_int64(0);
  for (idx11 = 0; idx11 < 1; idx11++) {
    outC->_L2_then_IfBlock1.p3.aNID_RADIO[idx11].valid = kcg_true;
    for (idx10 = 0; idx10 < 15; idx10++) {
      outC->_L2_then_IfBlock1.p3.aNID_RADIO[idx11].telephoneNumber[idx10] =
        kcg_lit_int64(0);
    }
  }
  outC->_L2_then_IfBlock1.p4.valid = kcg_true;
  outC->_L2_then_IfBlock1.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->_L2_then_IfBlock1.p5.valid = kcg_true;
  outC->_L2_then_IfBlock1.p5.TrainRunningNumber = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.p9.valid = kcg_true;
  outC->_L2_then_IfBlock1.p9.transitionInformation = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.p11.valid = kcg_true;
  outC->_L2_then_IfBlock1.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L2_then_IfBlock1.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L2_then_IfBlock1.p11.l_train = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.p11.v_maxtrain = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L2_then_IfBlock1.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L2_then_IfBlock1.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L2_then_IfBlock1.p11.n_axle = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.p11.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx12 = 0; idx12 < 4; idx12++) {
    outC->_L2_then_IfBlock1.p11.tractionIdentity[idx12].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L2_then_IfBlock1.p11.tractionIdentity[idx12].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->_L2_then_IfBlock1.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx13 = 0; idx13 < 5; idx13++) {
    outC->_L2_then_IfBlock1.p11.nid_ntc[idx13] = kcg_lit_int64(0);
  }
  outC->_L1_then_IfBlock1.present = kcg_true;
  outC->_L1_then_IfBlock1.header.present = kcg_true;
  outC->_L1_then_IfBlock1.header.nid_message = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.header.t_train = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.header.nid_engine = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L1_then_IfBlock1.header.xT_TRAIN = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.header.xNID_EM = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L1_then_IfBlock1.header.xNID_TEXTMESSAGE = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.packets.p0.valid = kcg_true;
  outC->_L1_then_IfBlock1.packets.p0.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.packets.p0.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L1_then_IfBlock1.packets.p0.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.packets.p0.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L1_then_IfBlock1.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L1_then_IfBlock1.packets.p0.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.packets.p0.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L1_then_IfBlock1.packets.p0.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.packets.p0.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L1_then_IfBlock1.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L1_then_IfBlock1.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L1_then_IfBlock1.packets.p0.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.packets.p1.valid = kcg_true;
  outC->_L1_then_IfBlock1.packets.p1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.packets.p1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L1_then_IfBlock1.packets.p1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.packets.p1.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.packets.p1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L1_then_IfBlock1.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L1_then_IfBlock1.packets.p1.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.packets.p1.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L1_then_IfBlock1.packets.p1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.packets.p1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L1_then_IfBlock1.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L1_then_IfBlock1.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L1_then_IfBlock1.packets.p1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.packets.p3.valid = kcg_true;
  outC->_L1_then_IfBlock1.packets.p3.number = kcg_lit_int64(0);
  for (idx15 = 0; idx15 < 1; idx15++) {
    outC->_L1_then_IfBlock1.packets.p3.aNID_RADIO[idx15].valid = kcg_true;
    for (idx14 = 0; idx14 < 15; idx14++) {
      outC->_L1_then_IfBlock1.packets.p3.aNID_RADIO[idx15].telephoneNumber[idx14] =
        kcg_lit_int64(0);
    }
  }
  outC->_L1_then_IfBlock1.packets.p4.valid = kcg_true;
  outC->_L1_then_IfBlock1.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->_L1_then_IfBlock1.packets.p5.valid = kcg_true;
  outC->_L1_then_IfBlock1.packets.p5.TrainRunningNumber = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.packets.p9.valid = kcg_true;
  outC->_L1_then_IfBlock1.packets.p9.transitionInformation = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.packets.p11.valid = kcg_true;
  outC->_L1_then_IfBlock1.packets.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L1_then_IfBlock1.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L1_then_IfBlock1.packets.p11.l_train = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.packets.p11.v_maxtrain = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L1_then_IfBlock1.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L1_then_IfBlock1.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L1_then_IfBlock1.packets.p11.n_axle = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.packets.p11.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx16 = 0; idx16 < 4; idx16++) {
    outC->_L1_then_IfBlock1.packets.p11.tractionIdentity[idx16].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L1_then_IfBlock1.packets.p11.tractionIdentity[idx16].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->_L1_then_IfBlock1.packets.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx17 = 0; idx17 < 5; idx17++) {
    outC->_L1_then_IfBlock1.packets.p11.nid_ntc[idx17] = kcg_lit_int64(0);
  }
  outC->_L8_then_IfBlock1.valid = kcg_true;
  outC->_L8_then_IfBlock1.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L8_then_IfBlock1.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L8_then_IfBlock1.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L8_then_IfBlock1.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L8_then_IfBlock1.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L8_then_IfBlock1.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L8_then_IfBlock1.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L8_then_IfBlock1.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L8_then_IfBlock1.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L8_then_IfBlock1.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L8_then_IfBlock1.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L8_then_IfBlock1.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L8_then_IfBlock1.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L8_then_IfBlock1.packet0.mode = M_MODE_Full_Supervision;
  outC->_L8_then_IfBlock1.packet0.level = M_LEVEL_Level_0;
  outC->_L8_then_IfBlock1.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L10_then_IfBlock1.valid = kcg_true;
  outC->_L10_then_IfBlock1.nid_packet = kcg_lit_int64(0);
  outC->_L10_then_IfBlock1.l_packet = kcg_lit_int64(0);
  outC->_L10_then_IfBlock1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L10_then_IfBlock1.nid_lrbg = kcg_lit_int64(0);
  outC->_L10_then_IfBlock1.d_lrbg = kcg_lit_int64(0);
  outC->_L10_then_IfBlock1.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L10_then_IfBlock1.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L10_then_IfBlock1.l_doubtover = kcg_lit_int64(0);
  outC->_L10_then_IfBlock1.l_doubtunder = kcg_lit_int64(0);
  outC->_L10_then_IfBlock1.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L10_then_IfBlock1.l_trainint = kcg_lit_int64(0);
  outC->_L10_then_IfBlock1.v_train = kcg_lit_int64(0);
  outC->_L10_then_IfBlock1.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L10_then_IfBlock1.m_mode = M_MODE_Full_Supervision;
  outC->_L10_then_IfBlock1.m_level = M_LEVEL_Level_0;
  outC->_L10_then_IfBlock1.nid_ntc = kcg_lit_int64(0);
  outC->_L11_then_IfBlock1 = kcg_true;
  outC->_L12_then_IfBlock1.valid = kcg_true;
  outC->_L12_then_IfBlock1.nid_packet = kcg_lit_int64(0);
  outC->_L12_then_IfBlock1.l_packet = kcg_lit_int64(0);
  outC->_L12_then_IfBlock1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L12_then_IfBlock1.nid_lrbg = kcg_lit_int64(0);
  outC->_L12_then_IfBlock1.d_lrbg = kcg_lit_int64(0);
  outC->_L12_then_IfBlock1.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L12_then_IfBlock1.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L12_then_IfBlock1.l_doubtover = kcg_lit_int64(0);
  outC->_L12_then_IfBlock1.l_doubtunder = kcg_lit_int64(0);
  outC->_L12_then_IfBlock1.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L12_then_IfBlock1.l_trainint = kcg_lit_int64(0);
  outC->_L12_then_IfBlock1.v_train = kcg_lit_int64(0);
  outC->_L12_then_IfBlock1.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L12_then_IfBlock1.m_mode = M_MODE_Full_Supervision;
  outC->_L12_then_IfBlock1.m_level = M_LEVEL_Level_0;
  outC->_L12_then_IfBlock1.nid_ntc = kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.valid = kcg_true;
  outC->_L16_then_IfBlock1.nid_packet = kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.l_packet = kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L16_then_IfBlock1.nid_lrbg = kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.d_lrbg = kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L16_then_IfBlock1.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L16_then_IfBlock1.l_doubtover = kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.l_doubtunder = kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L16_then_IfBlock1.l_trainint = kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.v_train = kcg_lit_int64(0);
  outC->_L16_then_IfBlock1.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L16_then_IfBlock1.m_mode = M_MODE_Full_Supervision;
  outC->_L16_then_IfBlock1.m_level = M_LEVEL_Level_0;
  outC->_L16_then_IfBlock1.nid_ntc = kcg_lit_int64(0);
  outC->_L15_then_IfBlock1.valid = kcg_true;
  outC->_L15_then_IfBlock1.nid_packet = kcg_lit_int64(0);
  outC->_L15_then_IfBlock1.l_packet = kcg_lit_int64(0);
  outC->_L15_then_IfBlock1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L15_then_IfBlock1.nid_lrbg = kcg_lit_int64(0);
  outC->_L15_then_IfBlock1.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L15_then_IfBlock1.d_lrbg = kcg_lit_int64(0);
  outC->_L15_then_IfBlock1.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L15_then_IfBlock1.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L15_then_IfBlock1.l_doubtover = kcg_lit_int64(0);
  outC->_L15_then_IfBlock1.l_doubtunder = kcg_lit_int64(0);
  outC->_L15_then_IfBlock1.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L15_then_IfBlock1.l_trainint = kcg_lit_int64(0);
  outC->_L15_then_IfBlock1.v_train = kcg_lit_int64(0);
  outC->_L15_then_IfBlock1.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L15_then_IfBlock1.m_mode = M_MODE_Full_Supervision;
  outC->_L15_then_IfBlock1.m_level = M_LEVEL_Level_0;
  outC->_L15_then_IfBlock1.nid_ntc = kcg_lit_int64(0);
  outC->_L14_then_IfBlock1.valid = kcg_true;
  outC->_L14_then_IfBlock1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L14_then_IfBlock1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L14_then_IfBlock1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L14_then_IfBlock1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L14_then_IfBlock1.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L14_then_IfBlock1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L14_then_IfBlock1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L14_then_IfBlock1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L14_then_IfBlock1.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L14_then_IfBlock1.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L14_then_IfBlock1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L14_then_IfBlock1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L14_then_IfBlock1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L14_then_IfBlock1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L14_then_IfBlock1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L14_then_IfBlock1.packet1.level = M_LEVEL_Level_0;
  outC->_L14_then_IfBlock1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L13_then_IfBlock1 = kcg_true;
  outC->_L17_then_IfBlock1.valid = kcg_true;
  outC->_L17_then_IfBlock1.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->_L18_then_IfBlock1.valid = kcg_true;
  outC->_L18_then_IfBlock1.nid_packet = kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.l_packet = kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->_L19_then_IfBlock1.valid = kcg_true;
  outC->_L19_then_IfBlock1.TrainRunningNumber = kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.valid = kcg_true;
  outC->_L20_then_IfBlock1.nid_packet = kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.l_packet = kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.nid_xuser = kcg_lit_int64(0);
  for (idx18 = 0; idx18 < 1; idx18++) {
    outC->_L20_then_IfBlock1.external_data[idx18] = kcg_lit_int64(0);
  }
  outC->_L21_then_IfBlock1.valid = kcg_true;
  outC->_L21_then_IfBlock1.nid_packet = kcg_lit_int64(0);
  outC->_L21_then_IfBlock1.l_packet = kcg_lit_int64(0);
  outC->_L21_then_IfBlock1.nid_opeartional = kcg_lit_int64(0);
  outC->_L22_then_IfBlock1 = kcg_lit_int64(0);
  outC->_L23_then_IfBlock1 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L24_then_IfBlock1 = kcg_lit_int64(0);
  for (idx20 = 0; idx20 < 5; idx20++) {
    outC->MessageBus_out[idx20].Message.valid = kcg_true;
    outC->MessageBus_out[idx20].Message.nid_message = kcg_lit_int64(0);
    outC->MessageBus_out[idx20].Message.l_message = kcg_lit_int64(0);
    outC->MessageBus_out[idx20].Message.t_train = kcg_lit_int64(0);
    outC->MessageBus_out[idx20].Message.nid_engine = kcg_lit_int64(0);
    outC->MessageBus_out[idx20].Message.field1 = kcg_lit_int64(0);
    outC->MessageBus_out[idx20].Message.field2 = kcg_lit_int64(0);
    outC->MessageBus_out[idx20].Message.field3 = kcg_lit_int64(0);
    for (idx19 = 0; idx19 < 50; idx19++) {
      outC->MessageBus_out[idx20].OptionalPackets[idx19] = kcg_lit_int64(0);
    }
  }
  /* IfBlock1:then:_L4=(TM_radio_messages::Send_M136#2)/ */
  Send_M136_init_TM_radio_messages(&outC->Context_Send_M136_2);
  /* IfBlock1:then:_L21=(radioOutput_Pkg::nextGen_P05#1)/ */
  nextGen_P05_init_radioOutput_Pkg(&outC->Context_nextGen_P05_1);
  /* IfBlock1:then:_L18=(radioOutput_Pkg::nextGen_P04#1)/ */
  nextGen_P04_init_radioOutput_Pkg(&outC->Context_nextGen_P04_1);
  /* IfBlock1:then:_L6=(radioOutput_Pkg::nextGen_MsgHdr136#2)/ */
  nextGen_MsgHdr136_init_radioOutput_Pkg(&outC->Context_nextGen_MsgHdr136_2);
  /* IfBlock1:then:_L16=(radioOutput_Pkg::nextGen_P01#2)/ */
  nextGen_P01_init_radioOutput_Pkg(&outC->Context_nextGen_P01_2);
  /* IfBlock1:then:_L10=(radioOutput_Pkg::nextGen_P00#1)/ */
  nextGen_P00_init_radioOutput_Pkg(&outC->Context_nextGen_P00_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void nextGen_Msg136_reset_radioOutput_Pkg(
  outC_nextGen_Msg136_radioOutput_Pkg *outC)
{
  /* IfBlock1:then:_L4=(TM_radio_messages::Send_M136#2)/ */
  Send_M136_reset_TM_radio_messages(&outC->Context_Send_M136_2);
  /* IfBlock1:then:_L21=(radioOutput_Pkg::nextGen_P05#1)/ */
  nextGen_P05_reset_radioOutput_Pkg(&outC->Context_nextGen_P05_1);
  /* IfBlock1:then:_L18=(radioOutput_Pkg::nextGen_P04#1)/ */
  nextGen_P04_reset_radioOutput_Pkg(&outC->Context_nextGen_P04_1);
  /* IfBlock1:then:_L6=(radioOutput_Pkg::nextGen_MsgHdr136#2)/ */
  nextGen_MsgHdr136_reset_radioOutput_Pkg(&outC->Context_nextGen_MsgHdr136_2);
  /* IfBlock1:then:_L16=(radioOutput_Pkg::nextGen_P01#2)/ */
  nextGen_P01_reset_radioOutput_Pkg(&outC->Context_nextGen_P01_2);
  /* IfBlock1:then:_L10=(radioOutput_Pkg::nextGen_P00#1)/ */
  nextGen_P00_reset_radioOutput_Pkg(&outC->Context_nextGen_P00_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** nextGen_Msg136_radioOutput_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

