/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ProvidePositionReport_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::ProvidePositionReport/ */
void ProvidePositionReport_ProvidePositionReport_Pkg(
  /* posBGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* trainPos/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* odometry/ */
  odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* trainProps/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* trackInfo/ */
  LocationBasedEvents_T_ProvidePositionReport_Pkg *trackInfo,
  /* inMessage/ */
  ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* systemTime/ */
  SystemTime_T_ProvidePositionReport_Pkg systemTime,
  /* rcbComm/ */
  RBC_Communication_T_ProvidePositionReport_Pkg *rcbComm,
  /* train2trackStatus/ */
  TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  /* prvDirTrain/ */
  Q_DIRTRAIN prvDirTrain,
  /* BG_LinkingConsistencyError/ */
  kcg_bool BG_LinkingConsistencyError,
  /* LinkedBG_MessageConsistencyError/ */
  kcg_bool LinkedBG_MessageConsistencyError,
  /* UnlinkedBG_MessageConsistencyError/ */
  kcg_bool UnlinkedBG_MessageConsistencyError,
  /* RadioMessageConsistencyError/ */
  kcg_bool RadioMessageConsistencyError,
  /* RadioSequenceError/ */
  kcg_bool RadioSequenceError,
  /* RadioSafeRadioConnectionError/ */
  kcg_bool RadioSafeRadioConnectionError,
  /* SafetyCriticalFailure/ */
  kcg_bool SafetyCriticalFailure,
  /* DoubleLinkingError/ */
  kcg_bool DoubleLinkingError,
  /* DoubleRepositioningError/ */
  kcg_bool DoubleRepositioningError,
  /* modeLevelStatus/ */
  ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *modeLevelStatus,
  /* reportedBGs/ */
  ReportedBGList_T_ProvidePositionReport_Pkg *reportedBGs,
  /* MessageBus/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* inVersion/ */
  M_VERSION inVersion,
  /* t_train/ */
  T_TRAIN t_train,
  outC_ProvidePositionReport_ProvidePositionReport_Pkg *outC)
{
  static PT5_TrainRunningNumber_Packet_TrainTypes_Pkg op_call;
  static PT4_ErrorReporting_T_Packet_TrainTypes_Pkg _1_op_call;
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _2_op_call;
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _3_op_call;
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _4_op_call;
  /* reportedBGs/ */
  static ReportedBGList_T_ProvidePositionReport_Pkg last_reportedBGs;
  /* modeLevelStatus/ */
  static ModeLevel2PositionReport_T_ProvidePositionReport_Pkg last_modeLevelStatus;
  /* odometry/ */
  static odometry_T_Obu_BasicTypes_Pkg last_odometry;

  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&last_odometry, &outC->mem_odometry);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->mem_odometry, odometry);
  kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(
    &last_modeLevelStatus,
    &outC->mem_modeLevelStatus);
  kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(
    &outC->mem_modeLevelStatus,
    modeLevelStatus);
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
    &last_reportedBGs,
    &outC->mem_reportedBGs);
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
    &outC->mem_reportedBGs,
    reportedBGs);
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
    &outC->_L329,
    &last_reportedBGs);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L11, inMessage);
  /* _L328=(ProvidePositionReport_Pkg::ReceiveReportParameters#1)/ */
  ReceiveReportParameters_ProvidePositionReport_Pkg(
    &outC->_L329,
    &outC->_L11,
    &outC->Context_ReceiveReportParameters_1);
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
    &outC->_L328,
    &outC->Context_ReceiveReportParameters_1.out_reportedBGs);
  outC->_L314 = outC->Context_ReceiveReportParameters_1.present;
  kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(
    &outC->_L307,
    &outC->Context_ReceiveReportParameters_1.posRepParam);
  outC->_L12 = systemTime;
  kcg_copy_RBC_Communication_T_ProvidePositionReport_Pkg(&outC->_L15, rcbComm);
  kcg_copy_LocationBasedEvents_T_ProvidePositionReport_Pkg(
    &outC->_L10,
    trackInfo);
  kcg_copy_TrainToTrackStatus_T_BG_Types_Pkg(&outC->_L13, train2trackStatus);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L5, trainPos);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L290, odometry);
  kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(
    &outC->_L291,
    modeLevelStatus);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L4, posBGs);
  /* _L312=(ProvidePositionReport_Pkg::PosReport_Supervision#1)/ */
  PosReport_Supervision_ProvidePositionReport_Pkg(
    outC->_L314,
    &outC->_L307,
    outC->_L12,
    &outC->_L15,
    &outC->_L10,
    &outC->_L13,
    &outC->_L5,
    &outC->_L290,
    &outC->_L291,
    &outC->_L4,
    &outC->Context_PosReport_Supervision_1);
  outC->_L312 = outC->Context_PosReport_Supervision_1.trigger;
  outC->every = outC->_L312;
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&outC->_L6, trainProps);
  outC->_L277 = prvDirTrain;
  /* _L346=(ProvidePositionReport_Pkg::Build_Packets0_1#1)/ */
  Build_Packets0_1_ProvidePositionReport_Pkg(
    &outC->_L6,
    &outC->_L4,
    &outC->_L291,
    &outC->_L290,
    &outC->_L5,
    &outC->_L13,
    outC->_L277,
    &outC->Context_Build_Packets0_1_1);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &outC->_L346,
    &outC->Context_Build_Packets0_1_1.packet0);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &outC->_L343,
    &outC->Context_Build_Packets0_1_1.packet1);
  outC->_L281 = BG_LinkingConsistencyError;
  outC->_L282 = LinkedBG_MessageConsistencyError;
  outC->_L283 = UnlinkedBG_MessageConsistencyError;
  outC->_L284 = RadioMessageConsistencyError;
  outC->_L285 = RadioSequenceError;
  outC->_L286 = RadioSafeRadioConnectionError;
  outC->_L287 = SafetyCriticalFailure;
  outC->_L288 = DoubleLinkingError;
  outC->_L289 = DoubleRepositioningError;
  /* _L279=(ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager#1)/ */
  ErrorManager_ProvidePositionReport_Pkg_PositionReportErrorManager_Pkg(
    outC->_L281,
    outC->_L282,
    outC->_L283,
    outC->_L284,
    outC->_L285,
    outC->_L286,
    outC->_L287,
    outC->_L288,
    outC->_L289,
    &outC->Context_ErrorManager_1);
  kcg_copy__33_array(&outC->_L279, &outC->Context_ErrorManager_1.errorVector);
  outC->_L347 = t_train;
  if (outC->every) {
    /* _L297=(ProvidePositionReport_Pkg::Build_PosReport#1)/ */
    Build_PosReport_ProvidePositionReport_Pkg(
      &outC->_L6,
      &outC->_L346,
      &outC->_L343,
      &outC->_L279,
      outC->_L347,
      &outC->Context_Build_PosReport_1);
    kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
      &_4_op_call,
      &outC->Context_Build_PosReport_1.posRepHeader);
    kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
      &_3_op_call,
      &outC->Context_Build_PosReport_1.packet0);
    kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
      &_2_op_call,
      &outC->Context_Build_PosReport_1.packet1);
    kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(
      &_1_op_call,
      &outC->Context_Build_PosReport_1.packet4);
    kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
      &op_call,
      &outC->Context_Build_PosReport_1.packet5);
  }
  outC->_L351 = inVersion;
  outC->_L350 = t_train;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&outC->_L349, MessageBus);
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
    &outC->_L300,
    (Radio_TrainTrack_Header_T_Radio_Types_Pkg *)
      &emptyHeader_ProvidePositionReport_Pkg);
  if (outC->every) {
    kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(&outC->_L297, &_4_op_call);
  }
  else {
    kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(&outC->_L297, &outC->_L300);
  }
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &outC->_L299,
    (PT0_PositionReport_T_Packet_TrainTypes_Pkg *)
      &emptyPacket0_ProvidePositionReport_Pkg);
  if (outC->every) {
    kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&outC->_L293, &_3_op_call);
  }
  else {
    kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&outC->_L293, &outC->_L299);
  }
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &outC->_L303,
    (PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *)
      &emptyPacket1_ProvidePositionReport_Pkg);
  if (outC->every) {
    kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
      &outC->_L294,
      &_2_op_call);
  }
  else {
    kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
      &outC->_L294,
      &outC->_L303);
  }
  kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(
    &outC->_L302,
    (PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *)
      &emptyPacket4_ProvidePositionReport_Pkg);
  if (outC->every) {
    kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(&outC->_L295, &_1_op_call);
  }
  else {
    kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(&outC->_L295, &outC->_L302);
  }
  kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
    &outC->_L301,
    (PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *)
      &emptyPacket5_ProvidePositionReport_Pkg);
  if (outC->every) {
    kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(&outC->_L296, &op_call);
  }
  else {
    kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
      &outC->_L296,
      &outC->_L301);
  }
  /* _L333=(ProvidePositionReport_Pkg::AggregatePackets#1)/ */
  AggregatePackets_ProvidePositionReport_Pkg(
    &outC->_L293,
    &outC->_L294,
    &outC->_L295,
    &outC->_L296,
    &outC->Context_AggregatePackets_1);
  kcg_copy_outPackets_T_Common_Types_Pkg(
    &outC->_L333,
    &outC->Context_AggregatePackets_1.outPackets);
  outC->_L340.present = outC->_L312;
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
    &outC->_L340.header,
    &outC->_L297);
  kcg_copy_outPackets_T_Common_Types_Pkg(&outC->_L340.packets, &outC->_L333);
  /* _L348=(radioOutput_Pkg::nextGen_Msg136#1)/ */
  nextGen_Msg136_radioOutput_Pkg(
    &outC->_L349,
    &outC->_L340,
    outC->_L351,
    outC->_L350,
    &outC->Context_nextGen_Msg136_1);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->_L348,
    &outC->Context_nextGen_Msg136_1.MessageBus_out);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->posReport,
    &outC->_L348);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &outC->packet1,
    &outC->_L343);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &outC->packet0,
    &outC->_L346);
  /* _L332=(ProvidePositionReport_Pkg::AddBGToFIFO)/ */
  AddBGToFIFO_ProvidePositionReport_Pkg(
    &outC->_L328,
    outC->_L312,
    &outC->_L5,
    &outC->Context_AddBGToFIFO);
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
    &outC->_L332,
    &outC->Context_AddBGToFIFO.out_reportedBGs);
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
    &outC->out_reportedBGs,
    &outC->_L332);
}

#ifndef KCG_USER_DEFINED_INIT
void ProvidePositionReport_init_ProvidePositionReport_Pkg(
  outC_ProvidePositionReport_ProvidePositionReport_Pkg *outC)
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

  outC->_L351 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L350 = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 5; idx1++) {
    outC->_L349[idx1].Message.valid = kcg_true;
    outC->_L349[idx1].Message.nid_message = kcg_lit_int64(0);
    outC->_L349[idx1].Message.l_message = kcg_lit_int64(0);
    outC->_L349[idx1].Message.t_train = kcg_lit_int64(0);
    outC->_L349[idx1].Message.nid_engine = kcg_lit_int64(0);
    outC->_L349[idx1].Message.field1 = kcg_lit_int64(0);
    outC->_L349[idx1].Message.field2 = kcg_lit_int64(0);
    outC->_L349[idx1].Message.field3 = kcg_lit_int64(0);
    for (idx = 0; idx < 50; idx++) {
      outC->_L349[idx1].OptionalPackets[idx] = kcg_lit_int64(0);
    }
  }
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L348[idx3].Message.valid = kcg_true;
    outC->_L348[idx3].Message.nid_message = kcg_lit_int64(0);
    outC->_L348[idx3].Message.l_message = kcg_lit_int64(0);
    outC->_L348[idx3].Message.t_train = kcg_lit_int64(0);
    outC->_L348[idx3].Message.nid_engine = kcg_lit_int64(0);
    outC->_L348[idx3].Message.field1 = kcg_lit_int64(0);
    outC->_L348[idx3].Message.field2 = kcg_lit_int64(0);
    outC->_L348[idx3].Message.field3 = kcg_lit_int64(0);
    for (idx2 = 0; idx2 < 50; idx2++) {
      outC->_L348[idx3].OptionalPackets[idx2] = kcg_lit_int64(0);
    }
  }
  outC->_L347 = kcg_lit_int64(0);
  outC->_L346.valid = kcg_true;
  outC->_L346.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L346.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L346.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L346.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L346.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L346.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L346.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L346.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L346.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L346.packet0.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L346.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L346.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L346.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L346.packet0.mode = M_MODE_Full_Supervision;
  outC->_L346.packet0.level = M_LEVEL_Level_0;
  outC->_L346.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L343.valid = kcg_true;
  outC->_L343.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L343.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L343.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L343.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L343.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L343.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L343.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L343.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L343.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L343.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L343.packet1.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L343.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L343.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L343.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L343.packet1.mode = M_MODE_Full_Supervision;
  outC->_L343.packet1.level = M_LEVEL_Level_0;
  outC->_L343.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L340.present = kcg_true;
  outC->_L340.header.present = kcg_true;
  outC->_L340.header.nid_message = kcg_lit_int64(0);
  outC->_L340.header.t_train = kcg_lit_int64(0);
  outC->_L340.header.nid_engine = kcg_lit_int64(0);
  outC->_L340.header.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L340.header.xT_TRAIN = kcg_lit_int64(0);
  outC->_L340.header.xNID_EM = kcg_lit_int64(0);
  outC->_L340.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L340.header.xNID_TEXTMESSAGE = kcg_lit_int64(0);
  outC->_L340.packets.p0.valid = kcg_true;
  outC->_L340.packets.p0.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L340.packets.p0.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L340.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L340.packets.p0.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L340.packets.p0.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L340.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L340.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L340.packets.p0.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L340.packets.p0.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L340.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L340.packets.p0.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L340.packets.p0.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L340.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L340.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L340.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L340.packets.p0.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L340.packets.p1.valid = kcg_true;
  outC->_L340.packets.p1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L340.packets.p1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L340.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L340.packets.p1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L340.packets.p1.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L340.packets.p1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L340.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L340.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L340.packets.p1.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L340.packets.p1.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L340.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L340.packets.p1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L340.packets.p1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L340.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L340.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L340.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L340.packets.p1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L340.packets.p3.valid = kcg_true;
  outC->_L340.packets.p3.number = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 1; idx5++) {
    outC->_L340.packets.p3.aNID_RADIO[idx5].valid = kcg_true;
    for (idx4 = 0; idx4 < 15; idx4++) {
      outC->_L340.packets.p3.aNID_RADIO[idx5].telephoneNumber[idx4] =
        kcg_lit_int64(0);
    }
  }
  outC->_L340.packets.p4.valid = kcg_true;
  outC->_L340.packets.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L340.packets.p5.valid = kcg_true;
  outC->_L340.packets.p5.TrainRunningNumber = kcg_lit_int64(0);
  outC->_L340.packets.p9.valid = kcg_true;
  outC->_L340.packets.p9.transitionInformation = kcg_lit_int64(0);
  outC->_L340.packets.p11.valid = kcg_true;
  outC->_L340.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L340.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L340.packets.p11.l_train = kcg_lit_int64(0);
  outC->_L340.packets.p11.v_maxtrain = kcg_lit_int64(0);
  outC->_L340.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L340.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L340.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L340.packets.p11.n_axle = kcg_lit_int64(0);
  outC->_L340.packets.p11.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 4; idx6++) {
    outC->_L340.packets.p11.tractionIdentity[idx6].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L340.packets.p11.tractionIdentity[idx6].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L340.packets.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx7 = 0; idx7 < 5; idx7++) {
    outC->_L340.packets.p11.nid_ntc[idx7] = kcg_lit_int64(0);
  }
  outC->_L333.p0.valid = kcg_true;
  outC->_L333.p0.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L333.p0.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L333.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L333.p0.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L333.p0.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L333.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L333.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L333.p0.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L333.p0.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L333.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L333.p0.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L333.p0.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L333.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L333.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L333.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L333.p0.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L333.p1.valid = kcg_true;
  outC->_L333.p1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L333.p1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L333.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L333.p1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L333.p1.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L333.p1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L333.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L333.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L333.p1.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L333.p1.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L333.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L333.p1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L333.p1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L333.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L333.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L333.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L333.p1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L333.p3.valid = kcg_true;
  outC->_L333.p3.number = kcg_lit_int64(0);
  for (idx9 = 0; idx9 < 1; idx9++) {
    outC->_L333.p3.aNID_RADIO[idx9].valid = kcg_true;
    for (idx8 = 0; idx8 < 15; idx8++) {
      outC->_L333.p3.aNID_RADIO[idx9].telephoneNumber[idx8] = kcg_lit_int64(0);
    }
  }
  outC->_L333.p4.valid = kcg_true;
  outC->_L333.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L333.p5.valid = kcg_true;
  outC->_L333.p5.TrainRunningNumber = kcg_lit_int64(0);
  outC->_L333.p9.valid = kcg_true;
  outC->_L333.p9.transitionInformation = kcg_lit_int64(0);
  outC->_L333.p11.valid = kcg_true;
  outC->_L333.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L333.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L333.p11.l_train = kcg_lit_int64(0);
  outC->_L333.p11.v_maxtrain = kcg_lit_int64(0);
  outC->_L333.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L333.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L333.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L333.p11.n_axle = kcg_lit_int64(0);
  outC->_L333.p11.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx10 = 0; idx10 < 4; idx10++) {
    outC->_L333.p11.tractionIdentity[idx10].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L333.p11.tractionIdentity[idx10].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L333.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx11 = 0; idx11 < 5; idx11++) {
    outC->_L333.p11.nid_ntc[idx11] = kcg_lit_int64(0);
  }
  for (idx12 = 0; idx12 < 8; idx12++) {
    outC->_L332[idx12].valid = kcg_true;
    outC->_L332[idx12].nidBG = kcg_lit_int64(0);
    outC->_L332[idx12].location.nominal = kcg_lit_int64(0);
    outC->_L332[idx12].location.d_min = kcg_lit_int64(0);
    outC->_L332[idx12].location.d_max = kcg_lit_int64(0);
  }
  for (idx13 = 0; idx13 < 8; idx13++) {
    outC->_L329[idx13].valid = kcg_true;
    outC->_L329[idx13].nidBG = kcg_lit_int64(0);
    outC->_L329[idx13].location.nominal = kcg_lit_int64(0);
    outC->_L329[idx13].location.d_min = kcg_lit_int64(0);
    outC->_L329[idx13].location.d_max = kcg_lit_int64(0);
  }
  for (idx14 = 0; idx14 < 8; idx14++) {
    outC->_L328[idx14].valid = kcg_true;
    outC->_L328[idx14].nidBG = kcg_lit_int64(0);
    outC->_L328[idx14].location.nominal = kcg_lit_int64(0);
    outC->_L328[idx14].location.d_min = kcg_lit_int64(0);
    outC->_L328[idx14].location.d_max = kcg_lit_int64(0);
  }
  outC->_L314 = kcg_true;
  outC->_L312 = kcg_true;
  outC->_L307.valid = kcg_true;
  outC->_L307.nid_packet = kcg_lit_int64(0);
  outC->_L307.q_dir = Q_DIR_Reverse;
  outC->_L307.l_packet = kcg_lit_int64(0);
  outC->_L307.q_scale = Q_SCALE_10_cm_scale;
  outC->_L307.t_cycloc = kcg_lit_int64(0);
  outC->_L307.d_cycloc = kcg_lit_int64(0);
  outC->_L307.m_loc = M_LOC_Now;
  outC->_L307.n_iter = kcg_lit_int64(0);
  for (idx15 = 0; idx15 < 2; idx15++) {
    outC->_L307.iterPacket58List[idx15].d_loc = kcg_lit_int64(0);
    outC->_L307.iterPacket58List[idx15].q_lgtloc = Q_LGTLOC_Min_safe_rear_end;
  }
  outC->_L299.valid = kcg_true;
  outC->_L299.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L299.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L299.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L299.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L299.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L299.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L299.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L299.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L299.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L299.packet0.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L299.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L299.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L299.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L299.packet0.mode = M_MODE_Full_Supervision;
  outC->_L299.packet0.level = M_LEVEL_Level_0;
  outC->_L299.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L300.present = kcg_true;
  outC->_L300.nid_message = kcg_lit_int64(0);
  outC->_L300.t_train = kcg_lit_int64(0);
  outC->_L300.nid_engine = kcg_lit_int64(0);
  outC->_L300.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L300.xT_TRAIN = kcg_lit_int64(0);
  outC->_L300.xNID_EM = kcg_lit_int64(0);
  outC->_L300.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L300.xNID_TEXTMESSAGE = kcg_lit_int64(0);
  outC->_L301.valid = kcg_true;
  outC->_L301.TrainRunningNumber = kcg_lit_int64(0);
  outC->_L302.valid = kcg_true;
  outC->_L302.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L303.valid = kcg_true;
  outC->_L303.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L303.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L303.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L303.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L303.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L303.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L303.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L303.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L303.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L303.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L303.packet1.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L303.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L303.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L303.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L303.packet1.mode = M_MODE_Full_Supervision;
  outC->_L303.packet1.level = M_LEVEL_Level_0;
  outC->_L303.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L293.valid = kcg_true;
  outC->_L293.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L293.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L293.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L293.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L293.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L293.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L293.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L293.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L293.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L293.packet0.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L293.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L293.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L293.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L293.packet0.mode = M_MODE_Full_Supervision;
  outC->_L293.packet0.level = M_LEVEL_Level_0;
  outC->_L293.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L294.valid = kcg_true;
  outC->_L294.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L294.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L294.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L294.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L294.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L294.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L294.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L294.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L294.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L294.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L294.packet1.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L294.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L294.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L294.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L294.packet1.mode = M_MODE_Full_Supervision;
  outC->_L294.packet1.level = M_LEVEL_Level_0;
  outC->_L294.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L295.valid = kcg_true;
  outC->_L295.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L296.valid = kcg_true;
  outC->_L296.TrainRunningNumber = kcg_lit_int64(0);
  outC->_L297.present = kcg_true;
  outC->_L297.nid_message = kcg_lit_int64(0);
  outC->_L297.t_train = kcg_lit_int64(0);
  outC->_L297.nid_engine = kcg_lit_int64(0);
  outC->_L297.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L297.xT_TRAIN = kcg_lit_int64(0);
  outC->_L297.xNID_EM = kcg_lit_int64(0);
  outC->_L297.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L297.xNID_TEXTMESSAGE = kcg_lit_int64(0);
  outC->_L291.currMode = M_MODE_Full_Supervision;
  outC->_L291.currLevel = M_LEVEL_Level_0;
  outC->_L291.levelTransitionBorderPassed = kcg_true;
  outC->_L290.valid = kcg_true;
  outC->_L290.timestamp = kcg_lit_int64(0);
  outC->_L290.odo.o_nominal = kcg_lit_int64(0);
  outC->_L290.odo.o_min = kcg_lit_int64(0);
  outC->_L290.odo.o_max = kcg_lit_int64(0);
  outC->_L290.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L290.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L290.speed.v_lower = kcg_lit_int64(0);
  outC->_L290.speed.v_upper = kcg_lit_int64(0);
  outC->_L290.acceleration = kcg_lit_int64(0);
  outC->_L290.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L290.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L289 = kcg_true;
  outC->_L288 = kcg_true;
  outC->_L287 = kcg_true;
  outC->_L286 = kcg_true;
  outC->_L285 = kcg_true;
  outC->_L284 = kcg_true;
  outC->_L283 = kcg_true;
  outC->_L282 = kcg_true;
  outC->_L281 = kcg_true;
  for (idx16 = 0; idx16 < 9; idx16++) {
    outC->_L279[idx16].present = kcg_true;
    outC->_L279[idx16].errorType = M_ERROR_Balise_group_linking_consistency_error;
  }
  outC->_L277 = Q_DIRTRAIN_Reverse;
  outC->_L15.newSessionEstablished = kcg_true;
  outC->_L13.nid_ntc = kcg_lit_int64(0);
  outC->_L13.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L12 = kcg_lit_int64(0);
  outC->_L11.valid = kcg_true;
  outC->_L11.source = msrc_undefined_Common_Types_Pkg;
  outC->_L11.radioMetadata.t_train_reference = kcg_true;
  outC->_L11.radioMetadata.nid_em = kcg_true;
  outC->_L11.radioMetadata.q_scale = kcg_true;
  outC->_L11.radioMetadata.d_sr = kcg_true;
  outC->_L11.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L11.radioMetadata.d_ref = kcg_true;
  outC->_L11.radioMetadata.q_dir = kcg_true;
  outC->_L11.radioMetadata.d_emergencystop = kcg_true;
  outC->_L11.radioMetadata.m_version = kcg_true;
  outC->_L11.BG_Common_Header.valid = kcg_true;
  outC->_L11.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L11.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L11.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L11.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L11.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L11.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L11.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L11.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L11.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L11.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L11.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L11.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L11.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L11.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L11.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L11.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L11.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L11.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L11.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L11.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L11.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L11.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L11.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L11.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L11.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L11.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L11.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L11.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L11.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L11.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L11.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L11.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L11.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L11.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L11.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L11.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L11.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L11.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L11.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L11.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L11.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L11.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx17 = 0; idx17 < 30; idx17++) {
    outC->_L11.packets.PacketHeaders[idx17].nid_packet = kcg_lit_int64(0);
    outC->_L11.packets.PacketHeaders[idx17].q_dir = Q_DIR_Reverse;
    outC->_L11.packets.PacketHeaders[idx17].valid = kcg_true;
    outC->_L11.packets.PacketHeaders[idx17].startAddress = kcg_lit_int64(0);
    outC->_L11.packets.PacketHeaders[idx17].endAddress = kcg_lit_int64(0);
  }
  for (idx18 = 0; idx18 < 500; idx18++) {
    outC->_L11.packets.PacketData[idx18] = kcg_lit_int64(0);
  }
  outC->_L11.sendingRBC.valid = kcg_true;
  outC->_L11.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L11.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L11.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L10.minSafeRearEndPassed = kcg_true;
  outC->_L10.maxSafeFrontEndPassed = kcg_true;
  outC->_L6.nid_engine = kcg_lit_int64(0);
  outC->_L6.nid_operational = kcg_lit_int64(0);
  outC->_L6.l_train = kcg_lit_int64(0);
  outC->_L6.d_baliseAntenna_2_frontend.nominal = kcg_lit_int64(0);
  outC->_L6.d_baliseAntenna_2_frontend.d_min = kcg_lit_int64(0);
  outC->_L6.d_baliseAntenna_2_frontend.d_max = kcg_lit_int64(0);
  outC->_L6.d_frontend_2_rearend.nominal = kcg_lit_int64(0);
  outC->_L6.d_frontend_2_rearend.d_min = kcg_lit_int64(0);
  outC->_L6.d_frontend_2_rearend.d_max = kcg_lit_int64(0);
  outC->_L6.locationAccuracy_DefaultValue.nominal = kcg_lit_int64(0);
  outC->_L6.locationAccuracy_DefaultValue.d_min = kcg_lit_int64(0);
  outC->_L6.locationAccuracy_DefaultValue.d_max = kcg_lit_int64(0);
  outC->_L6.centerDetectionAcc_DefaultValue.nominal = kcg_lit_int64(0);
  outC->_L6.centerDetectionAcc_DefaultValue.d_min = kcg_lit_int64(0);
  outC->_L6.centerDetectionAcc_DefaultValue.d_max = kcg_lit_int64(0);
  outC->_L5.valid = kcg_true;
  outC->_L5.timestamp = kcg_lit_int64(0);
  outC->_L5.trainPositionIsUnknown = kcg_true;
  outC->_L5.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L5.trainPosition.nominal = kcg_lit_int64(0);
  outC->_L5.trainPosition.d_min = kcg_lit_int64(0);
  outC->_L5.trainPosition.d_max = kcg_lit_int64(0);
  outC->_L5.estimatedFrontEndPosition = kcg_lit_int64(0);
  outC->_L5.minSafeFrontEndPosition = kcg_lit_int64(0);
  outC->_L5.maxSafeFrontEndPostion = kcg_lit_int64(0);
  outC->_L5.LRBG.valid = kcg_true;
  outC->_L5.LRBG.nid_c = kcg_lit_int64(0);
  outC->_L5.LRBG.nid_bg = kcg_lit_int64(0);
  outC->_L5.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L5.LRBG.location.nominal = kcg_lit_int64(0);
  outC->_L5.LRBG.location.d_min = kcg_lit_int64(0);
  outC->_L5.LRBG.location.d_max = kcg_lit_int64(0);
  outC->_L5.LRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L5.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L5.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L5.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L5.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L5.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L5.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L5.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L5.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L5.LRBG.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L5.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L5.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L5.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(
      0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(
      0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(
      0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L5.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L5.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L5.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx19 = 0; idx19 < 33; idx19++) {
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx19].valid = kcg_true;
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx19].nid_LRBG = kcg_lit_int64(0);
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx19].q_dir = Q_DIR_Reverse;
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx19].q_scale = Q_SCALE_10_cm_scale;
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx19].d_link = kcg_lit_int64(0);
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx19].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx19].nid_c = kcg_lit_int64(0);
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx19].nid_bg = kcg_lit_int64(0);
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx19].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx19].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx19].q_locacc = kcg_lit_int64(0);
  }
  outC->_L5.LRBG.missed = kcg_true;
  outC->_L5.prvLRBG.valid = kcg_true;
  outC->_L5.prvLRBG.nid_c = kcg_lit_int64(0);
  outC->_L5.prvLRBG.nid_bg = kcg_lit_int64(0);
  outC->_L5.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L5.prvLRBG.location.nominal = kcg_lit_int64(0);
  outC->_L5.prvLRBG.location.d_min = kcg_lit_int64(0);
  outC->_L5.prvLRBG.location.d_max = kcg_lit_int64(0);
  outC->_L5.prvLRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L5.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx20 = 0; idx20 < 33; idx20++) {
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx20].valid = kcg_true;
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx20].nid_LRBG = kcg_lit_int64(0);
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx20].q_dir = Q_DIR_Reverse;
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx20].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx20].d_link = kcg_lit_int64(0);
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx20].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx20].nid_c = kcg_lit_int64(0);
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx20].nid_bg = kcg_lit_int64(0);
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx20].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx20].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx20].q_locacc = kcg_lit_int64(0);
  }
  outC->_L5.prvLRBG.missed = kcg_true;
  outC->_L5.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L5.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L5.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L5.linkingIsUsedOnboard = kcg_true;
  outC->_L5.estimatedRearEndPosition = kcg_lit_int64(0);
  outC->_L5.minSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L5.maxSafeRearEndPosition = kcg_lit_int64(0);
  for (idx22 = 0; idx22 < 41; idx22++) {
    outC->_L4[idx22].valid = kcg_true;
    outC->_L4[idx22].nid_c = kcg_lit_int64(0);
    outC->_L4[idx22].nid_bg = kcg_lit_int64(0);
    outC->_L4[idx22].q_link = Q_LINK_Unlinked;
    outC->_L4[idx22].location.nominal = kcg_lit_int64(0);
    outC->_L4[idx22].location.d_min = kcg_lit_int64(0);
    outC->_L4[idx22].location.d_max = kcg_lit_int64(0);
    outC->_L4[idx22].seqNoOnTrack = kcg_lit_int64(0);
    outC->_L4[idx22].infoFromLinking.valid = kcg_true;
    outC->_L4[idx22].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
    outC->_L4[idx22].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
    outC->_L4[idx22].infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
    outC->_L4[idx22].infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
    outC->_L4[idx22].infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
    outC->_L4[idx22].infoFromLinking.d_link.nominal = kcg_lit_int64(0);
    outC->_L4[idx22].infoFromLinking.d_link.d_min = kcg_lit_int64(0);
    outC->_L4[idx22].infoFromLinking.d_link.d_max = kcg_lit_int64(0);
    outC->_L4[idx22].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L4[idx22].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
    outC->_L4[idx22].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L4[idx22].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L4[idx22].infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
    outC->_L4[idx22].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L4[idx22].infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
    outC->_L4[idx22].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
    outC->_L4[idx22].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L4[idx22].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L4[idx22].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
    outC->_L4[idx22].infoFromPassing.valid = kcg_true;
    outC->_L4[idx22].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L4[idx22].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L4[idx22].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L4[idx22].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L4[idx22].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L4[idx22].infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
    outC->_L4[idx22].infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
    outC->_L4[idx22].infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
    outC->_L4[idx22].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L4[idx22].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L4[idx22].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->_L4[idx22].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L4[idx22].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->_L4[idx22].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->_L4[idx22].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L4[idx22].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L4[idx22].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L4[idx22].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L4[idx22].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->_L4[idx22].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L4[idx22].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L4[idx22].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L4[idx22].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L4[idx22].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L4[idx22].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L4[idx22].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L4[idx22].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L4[idx22].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx21 = 0; idx21 < 33; idx21++) {
      outC->_L4[idx22].infoFromPassing.linkedBGs[idx21].valid = kcg_true;
      outC->_L4[idx22].infoFromPassing.linkedBGs[idx21].nid_LRBG = kcg_lit_int64(0);
      outC->_L4[idx22].infoFromPassing.linkedBGs[idx21].q_dir = Q_DIR_Reverse;
      outC->_L4[idx22].infoFromPassing.linkedBGs[idx21].q_scale = Q_SCALE_10_cm_scale;
      outC->_L4[idx22].infoFromPassing.linkedBGs[idx21].d_link = kcg_lit_int64(0);
      outC->_L4[idx22].infoFromPassing.linkedBGs[idx21].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L4[idx22].infoFromPassing.linkedBGs[idx21].nid_c = kcg_lit_int64(0);
      outC->_L4[idx22].infoFromPassing.linkedBGs[idx21].nid_bg = kcg_lit_int64(0);
      outC->_L4[idx22].infoFromPassing.linkedBGs[idx21].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L4[idx22].infoFromPassing.linkedBGs[idx21].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L4[idx22].infoFromPassing.linkedBGs[idx21].q_locacc = kcg_lit_int64(0);
    }
    outC->_L4[idx22].missed = kcg_true;
  }
  outC->every = kcg_true;
  for (idx24 = 0; idx24 < 5; idx24++) {
    outC->posReport[idx24].Message.valid = kcg_true;
    outC->posReport[idx24].Message.nid_message = kcg_lit_int64(0);
    outC->posReport[idx24].Message.l_message = kcg_lit_int64(0);
    outC->posReport[idx24].Message.t_train = kcg_lit_int64(0);
    outC->posReport[idx24].Message.nid_engine = kcg_lit_int64(0);
    outC->posReport[idx24].Message.field1 = kcg_lit_int64(0);
    outC->posReport[idx24].Message.field2 = kcg_lit_int64(0);
    outC->posReport[idx24].Message.field3 = kcg_lit_int64(0);
    for (idx23 = 0; idx23 < 50; idx23++) {
      outC->posReport[idx24].OptionalPackets[idx23] = kcg_lit_int64(0);
    }
  }
  outC->packet1.valid = kcg_true;
  outC->packet1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->packet1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->packet1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->packet1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->packet1.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->packet1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->packet1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->packet1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->packet1.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->packet1.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->packet1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->packet1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->packet1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->packet1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->packet1.packet1.mode = M_MODE_Full_Supervision;
  outC->packet1.packet1.level = M_LEVEL_Level_0;
  outC->packet1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->packet0.valid = kcg_true;
  outC->packet0.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->packet0.packet0.L_PACKET = kcg_lit_int64(0);
  outC->packet0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->packet0.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->packet0.packet0.D_LRBG = kcg_lit_int64(0);
  outC->packet0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->packet0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->packet0.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->packet0.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->packet0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->packet0.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->packet0.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->packet0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->packet0.packet0.mode = M_MODE_Full_Supervision;
  outC->packet0.packet0.level = M_LEVEL_Level_0;
  outC->packet0.packet0.NID_NTC = kcg_lit_int64(0);
  for (idx25 = 0; idx25 < 8; idx25++) {
    outC->out_reportedBGs[idx25].valid = kcg_true;
    outC->out_reportedBGs[idx25].nidBG = kcg_lit_int64(0);
    outC->out_reportedBGs[idx25].location.nominal = kcg_lit_int64(0);
    outC->out_reportedBGs[idx25].location.d_min = kcg_lit_int64(0);
    outC->out_reportedBGs[idx25].location.d_max = kcg_lit_int64(0);
  }
  /* _L332=(ProvidePositionReport_Pkg::AddBGToFIFO)/ */
  AddBGToFIFO_init_ProvidePositionReport_Pkg(&outC->Context_AddBGToFIFO);
  /* _L348=(radioOutput_Pkg::nextGen_Msg136#1)/ */
  nextGen_Msg136_init_radioOutput_Pkg(&outC->Context_nextGen_Msg136_1);
  /* _L333=(ProvidePositionReport_Pkg::AggregatePackets#1)/ */
  AggregatePackets_init_ProvidePositionReport_Pkg(
    &outC->Context_AggregatePackets_1);
  /* _L297=(ProvidePositionReport_Pkg::Build_PosReport#1)/ */
  Build_PosReport_init_ProvidePositionReport_Pkg(
    &outC->Context_Build_PosReport_1);
  /* _L279=(ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager#1)/ */
  ErrorManager_init_ProvidePositionReport_Pkg_PositionReportErrorManager_Pkg(
    &outC->Context_ErrorManager_1);
  /* _L346=(ProvidePositionReport_Pkg::Build_Packets0_1#1)/ */
  Build_Packets0_1_init_ProvidePositionReport_Pkg(
    &outC->Context_Build_Packets0_1_1);
  /* _L312=(ProvidePositionReport_Pkg::PosReport_Supervision#1)/ */
  PosReport_Supervision_init_ProvidePositionReport_Pkg(
    &outC->Context_PosReport_Supervision_1);
  /* _L328=(ProvidePositionReport_Pkg::ReceiveReportParameters#1)/ */
  ReceiveReportParameters_init_ProvidePositionReport_Pkg(
    &outC->Context_ReceiveReportParameters_1);
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
    &outC->mem_reportedBGs,
    (ReportedBGList_T_ProvidePositionReport_Pkg *)
      &cReportedBGList_ProvidePositionReport_Pkg);
  kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(
    &outC->mem_modeLevelStatus,
    (ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *)
      &cModeAndLevelStatus_ProvidePositionReport_Pkg);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
    &outC->mem_odometry,
    (odometry_T_Obu_BasicTypes_Pkg *) &cOdomerty_ProvidePositionReport_Pkg);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ProvidePositionReport_reset_ProvidePositionReport_Pkg(
  outC_ProvidePositionReport_ProvidePositionReport_Pkg *outC)
{
  /* _L332=(ProvidePositionReport_Pkg::AddBGToFIFO)/ */
  AddBGToFIFO_reset_ProvidePositionReport_Pkg(&outC->Context_AddBGToFIFO);
  /* _L348=(radioOutput_Pkg::nextGen_Msg136#1)/ */
  nextGen_Msg136_reset_radioOutput_Pkg(&outC->Context_nextGen_Msg136_1);
  /* _L333=(ProvidePositionReport_Pkg::AggregatePackets#1)/ */
  AggregatePackets_reset_ProvidePositionReport_Pkg(
    &outC->Context_AggregatePackets_1);
  /* _L297=(ProvidePositionReport_Pkg::Build_PosReport#1)/ */
  Build_PosReport_reset_ProvidePositionReport_Pkg(
    &outC->Context_Build_PosReport_1);
  /* _L279=(ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager#1)/ */
  ErrorManager_reset_ProvidePositionReport_Pkg_PositionReportErrorManager_Pkg(
    &outC->Context_ErrorManager_1);
  /* _L346=(ProvidePositionReport_Pkg::Build_Packets0_1#1)/ */
  Build_Packets0_1_reset_ProvidePositionReport_Pkg(
    &outC->Context_Build_Packets0_1_1);
  /* _L312=(ProvidePositionReport_Pkg::PosReport_Supervision#1)/ */
  PosReport_Supervision_reset_ProvidePositionReport_Pkg(
    &outC->Context_PosReport_Supervision_1);
  /* _L328=(ProvidePositionReport_Pkg::ReceiveReportParameters#1)/ */
  ReceiveReportParameters_reset_ProvidePositionReport_Pkg(
    &outC->Context_ReceiveReportParameters_1);
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
    &outC->mem_reportedBGs,
    (ReportedBGList_T_ProvidePositionReport_Pkg *)
      &cReportedBGList_ProvidePositionReport_Pkg);
  kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(
    &outC->mem_modeLevelStatus,
    (ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *)
      &cModeAndLevelStatus_ProvidePositionReport_Pkg);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
    &outC->mem_odometry,
    (odometry_T_Obu_BasicTypes_Pkg *) &cOdomerty_ProvidePositionReport_Pkg);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ProvidePositionReport_ProvidePositionReport_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

