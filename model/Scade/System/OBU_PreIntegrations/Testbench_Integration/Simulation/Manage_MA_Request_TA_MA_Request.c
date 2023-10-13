/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Manage_MA_Request_TA_MA_Request.h"

/* TA_MA_Request::Manage_MA_Request/ */
void Manage_MA_Request_TA_MA_Request(
  /* trainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* systemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* message_in/ */
  ReceivedMessage_T_Common_Types_Pkg *message_in,
  /* preindicationLocation/ */
  L_internal_Type_Obu_BasicTypes_Pkg preindicationLocation,
  /* odometry/ */
  odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* MAs/ */
  MovementAuthority_t_TrackAtlasTypes *MAs,
  /* fromDriver/ */
  Driver2MAR_T_TA_MA_Request *fromDriver,
  /* trackDescrDeleted/ */
  kcg_bool trackDescrDeleted,
  /* trainProps/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* packet0/ */
  PT0_PositionReport_T_Packet_TrainTypes_Pkg *packet0,
  /* packet1/ */
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1,
  /* t_train/ */
  T_TRAIN t_train,
  /* bus_in/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *bus_in,
  /* modeLevel/ */
  T_Mode_Level_Level_And_Mode_Types_Pkg *modeLevel,
  outC_Manage_MA_Request_TA_MA_Request *outC)
{
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus op_call;
  static kcg_bool noname;
  /* triggerMA/ */
  static kcg_bool last_triggerMA;

  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L5, message_in);
  /* _L6=(TA_MA_Request::Receive_MA_RequestParameters#1)/ */
  Receive_MA_RequestParameters_TA_MA_Request(
    &outC->_L5,
    &outC->Context_Receive_MA_RequestParameters_1);
  outC->_L6 = outC->Context_Receive_MA_RequestParameters_1.IsNew;
  kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(
    &outC->_L7,
    &outC->Context_Receive_MA_RequestParameters_1.MA_RequestParams);
  outC->_L26 = outC->Context_Receive_MA_RequestParameters_1.ma_received;
  last_triggerMA = outC->triggerMA;
  outC->_L15 = last_triggerMA;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L2, trainPosition);
  outC->_L3 = systemTime;
  outC->_L16 = preindicationLocation;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L17, odometry);
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&outC->_L18, MAs);
  kcg_copy_Driver2MAR_T_TA_MA_Request(&outC->_L27, fromDriver);
  outC->_L21 = trackDescrDeleted;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&outC->_L34, modeLevel);
  /* _L11=(TA_MA_Request::MA_Request_Supervision#1)/ */
  MA_Request_Supervision_TA_MA_Request(
    &outC->_L7,
    outC->_L26,
    outC->_L15,
    &outC->_L2,
    outC->_L3,
    outC->_L16,
    &outC->_L17,
    &outC->_L18,
    &outC->_L27,
    outC->_L21,
    &outC->_L34,
    &outC->Context_MA_Request_Supervision_1);
  outC->_L11 = outC->Context_MA_Request_Supervision_1.triggerMA;
  outC->_L31 = outC->Context_MA_Request_Supervision_1.exception;
  outC->every = outC->_L11;
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&outC->_L24, trainProps);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&outC->_L28, packet0);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(&outC->_L29, packet1);
  outC->_L30 = t_train;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&outC->_L33, bus_in);
  if (outC->every) {
    /* _L32=(TA_MA_Request::Build_MA_request#1)/ */
    Build_MA_request_TA_MA_Request(
      outC->_L21,
      &outC->_L24,
      &outC->_L28,
      &outC->_L29,
      outC->_L30,
      &outC->_L33,
      &outC->Context_Build_MA_request_1);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &op_call,
      &outC->Context_Build_MA_request_1.bus_out);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&outC->_L32, &op_call);
  }
  else {
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&outC->_L32, &outC->_L33);
  }
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->bus_out,
    &outC->_L32);
  outC->exception = outC->_L31;
  noname = outC->_L6;
  outC->triggerMA = outC->_L11;
}

#ifndef KCG_USER_DEFINED_INIT
void Manage_MA_Request_init_TA_MA_Request(
  outC_Manage_MA_Request_TA_MA_Request *outC)
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

  outC->_L34.compatibleModeAndLevel = kcg_true;
  outC->_L34.level = M_LEVEL_Level_0;
  outC->_L34.newLevel = kcg_true;
  outC->_L34.Mode = M_MODE_Full_Supervision;
  outC->_L34.newMode = kcg_true;
  for (idx1 = 0; idx1 < 5; idx1++) {
    outC->_L33[idx1].Message.valid = kcg_true;
    outC->_L33[idx1].Message.nid_message = kcg_lit_int64(0);
    outC->_L33[idx1].Message.l_message = kcg_lit_int64(0);
    outC->_L33[idx1].Message.t_train = kcg_lit_int64(0);
    outC->_L33[idx1].Message.nid_engine = kcg_lit_int64(0);
    outC->_L33[idx1].Message.field1 = kcg_lit_int64(0);
    outC->_L33[idx1].Message.field2 = kcg_lit_int64(0);
    outC->_L33[idx1].Message.field3 = kcg_lit_int64(0);
    for (idx = 0; idx < 50; idx++) {
      outC->_L33[idx1].OptionalPackets[idx] = kcg_lit_int64(0);
    }
  }
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L32[idx3].Message.valid = kcg_true;
    outC->_L32[idx3].Message.nid_message = kcg_lit_int64(0);
    outC->_L32[idx3].Message.l_message = kcg_lit_int64(0);
    outC->_L32[idx3].Message.t_train = kcg_lit_int64(0);
    outC->_L32[idx3].Message.nid_engine = kcg_lit_int64(0);
    outC->_L32[idx3].Message.field1 = kcg_lit_int64(0);
    outC->_L32[idx3].Message.field2 = kcg_lit_int64(0);
    outC->_L32[idx3].Message.field3 = kcg_lit_int64(0);
    for (idx2 = 0; idx2 < 50; idx2++) {
      outC->_L32[idx3].OptionalPackets[idx2] = kcg_lit_int64(0);
    }
  }
  outC->_L31 = kcg_true;
  outC->_L30 = kcg_lit_int64(0);
  outC->_L29.valid = kcg_true;
  outC->_L29.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L29.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L29.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L29.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L29.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L29.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L29.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L29.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L29.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L29.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L29.packet1.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L29.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L29.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L29.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L29.packet1.mode = M_MODE_Full_Supervision;
  outC->_L29.packet1.level = M_LEVEL_Level_0;
  outC->_L29.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L28.valid = kcg_true;
  outC->_L28.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L28.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L28.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L28.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L28.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L28.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L28.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L28.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L28.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L28.packet0.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L28.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L28.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L28.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L28.packet0.mode = M_MODE_Full_Supervision;
  outC->_L28.packet0.level = M_LEVEL_Level_0;
  outC->_L28.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L27.trackAheadFree = kcg_true;
  outC->_L27.driverSelectsStart = kcg_true;
  outC->_L18.valid = kcg_true;
  outC->_L18.Level = MA_L1_TrackAtlasTypes;
  outC->_L18.q_dir = Q_DIR_Reverse;
  outC->_L18.v_main = kcg_lit_int64(0);
  outC->_L18.v_loa = kcg_lit_int64(0);
  outC->_L18.t_loa_unlimited = kcg_true;
  outC->_L18.t_loa = kcg_lit_int64(0);
  outC->_L18.n_iter = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 10; idx4++) {
    outC->_L18.sections[idx4].valid = kcg_true;
    outC->_L18.sections[idx4].q_endsection = kcg_true;
    outC->_L18.sections[idx4].l_section = kcg_lit_int64(0);
    outC->_L18.sections[idx4].q_sectiontimer = kcg_true;
    outC->_L18.sections[idx4].t_sectiontimer = kcg_lit_int64(0);
    outC->_L18.sections[idx4].d_sectiontimerstoploc = kcg_lit_int64(0);
  }
  outC->_L18.q_dangerpoint = kcg_true;
  outC->_L18.dangerpoint.d_DP_or_OL = kcg_lit_int64(0);
  outC->_L18.dangerpoint.v_release = kcg_lit_int64(0);
  outC->_L18.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L18.q_overlap = kcg_true;
  outC->_L18.overlap.d_DP_or_OL = kcg_lit_int64(0);
  outC->_L18.overlap.v_release = kcg_lit_int64(0);
  outC->_L18.overlap.calc_v_release_onboard = kcg_true;
  outC->_L18.q_endtimer = kcg_true;
  outC->_L18.endtimer_t.t_endtimer = kcg_lit_int64(0);
  outC->_L18.endtimer_t.d_endtimerstoploc = kcg_lit_int64(0);
  outC->_L26 = kcg_true;
  outC->_L24.nid_engine = kcg_lit_int64(0);
  outC->_L24.nid_operational = kcg_lit_int64(0);
  outC->_L24.l_train = kcg_lit_int64(0);
  outC->_L24.d_baliseAntenna_2_frontend.nominal = kcg_lit_int64(0);
  outC->_L24.d_baliseAntenna_2_frontend.d_min = kcg_lit_int64(0);
  outC->_L24.d_baliseAntenna_2_frontend.d_max = kcg_lit_int64(0);
  outC->_L24.d_frontend_2_rearend.nominal = kcg_lit_int64(0);
  outC->_L24.d_frontend_2_rearend.d_min = kcg_lit_int64(0);
  outC->_L24.d_frontend_2_rearend.d_max = kcg_lit_int64(0);
  outC->_L24.locationAccuracy_DefaultValue.nominal = kcg_lit_int64(0);
  outC->_L24.locationAccuracy_DefaultValue.d_min = kcg_lit_int64(0);
  outC->_L24.locationAccuracy_DefaultValue.d_max = kcg_lit_int64(0);
  outC->_L24.centerDetectionAcc_DefaultValue.nominal = kcg_lit_int64(0);
  outC->_L24.centerDetectionAcc_DefaultValue.d_min = kcg_lit_int64(0);
  outC->_L24.centerDetectionAcc_DefaultValue.d_max = kcg_lit_int64(0);
  outC->_L21 = kcg_true;
  outC->_L17.valid = kcg_true;
  outC->_L17.timestamp = kcg_lit_int64(0);
  outC->_L17.odo.o_nominal = kcg_lit_int64(0);
  outC->_L17.odo.o_min = kcg_lit_int64(0);
  outC->_L17.odo.o_max = kcg_lit_int64(0);
  outC->_L17.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L17.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L17.speed.v_lower = kcg_lit_int64(0);
  outC->_L17.speed.v_upper = kcg_lit_int64(0);
  outC->_L17.acceleration = kcg_lit_int64(0);
  outC->_L17.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L17.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L16 = kcg_lit_int64(0);
  outC->_L15 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L7.valid = kcg_true;
  outC->_L7.q_dir = Q_DIR_Reverse;
  outC->_L7.t_mar = kcg_lit_int64(0);
  outC->_L7.t_timeoutrqst = kcg_lit_int64(0);
  outC->_L7.t_cycrqst = kcg_lit_int64(0);
  outC->_L6 = kcg_true;
  outC->_L5.valid = kcg_true;
  outC->_L5.source = msrc_undefined_Common_Types_Pkg;
  outC->_L5.radioMetadata.t_train_reference = kcg_true;
  outC->_L5.radioMetadata.nid_em = kcg_true;
  outC->_L5.radioMetadata.q_scale = kcg_true;
  outC->_L5.radioMetadata.d_sr = kcg_true;
  outC->_L5.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L5.radioMetadata.d_ref = kcg_true;
  outC->_L5.radioMetadata.q_dir = kcg_true;
  outC->_L5.radioMetadata.d_emergencystop = kcg_true;
  outC->_L5.radioMetadata.m_version = kcg_true;
  outC->_L5.BG_Common_Header.valid = kcg_true;
  outC->_L5.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L5.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L5.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L5.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L5.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L5.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L5.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L5.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L5.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L5.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L5.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L5.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L5.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L5.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L5.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L5.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L5.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L5.BG_Common_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L5.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L5.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L5.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L5.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L5.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L5.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L5.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L5.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L5.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L5.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L5.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L5.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L5.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L5.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L5.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L5.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L5.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L5.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L5.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L5.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L5.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L5.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L5.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx5 = 0; idx5 < 30; idx5++) {
    outC->_L5.packets.PacketHeaders[idx5].nid_packet = kcg_lit_int64(0);
    outC->_L5.packets.PacketHeaders[idx5].q_dir = Q_DIR_Reverse;
    outC->_L5.packets.PacketHeaders[idx5].valid = kcg_true;
    outC->_L5.packets.PacketHeaders[idx5].startAddress = kcg_lit_int64(0);
    outC->_L5.packets.PacketHeaders[idx5].endAddress = kcg_lit_int64(0);
  }
  for (idx6 = 0; idx6 < 500; idx6++) {
    outC->_L5.packets.PacketData[idx6] = kcg_lit_int64(0);
  }
  outC->_L5.sendingRBC.valid = kcg_true;
  outC->_L5.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L5.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L5.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  outC->_L2.valid = kcg_true;
  outC->_L2.timestamp = kcg_lit_int64(0);
  outC->_L2.trainPositionIsUnknown = kcg_true;
  outC->_L2.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L2.trainPosition.nominal = kcg_lit_int64(0);
  outC->_L2.trainPosition.d_min = kcg_lit_int64(0);
  outC->_L2.trainPosition.d_max = kcg_lit_int64(0);
  outC->_L2.estimatedFrontEndPosition = kcg_lit_int64(0);
  outC->_L2.minSafeFrontEndPosition = kcg_lit_int64(0);
  outC->_L2.maxSafeFrontEndPostion = kcg_lit_int64(0);
  outC->_L2.LRBG.valid = kcg_true;
  outC->_L2.LRBG.nid_c = kcg_lit_int64(0);
  outC->_L2.LRBG.nid_bg = kcg_lit_int64(0);
  outC->_L2.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L2.LRBG.location.nominal = kcg_lit_int64(0);
  outC->_L2.LRBG.location.d_min = kcg_lit_int64(0);
  outC->_L2.LRBG.location.d_max = kcg_lit_int64(0);
  outC->_L2.LRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L2.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L2.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L2.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L2.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L2.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L2.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L2.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L2.LRBG.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L2.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L2.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L2.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(
      0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(
      0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(
      0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L2.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L2.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx7 = 0; idx7 < 33; idx7++) {
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx7].valid = kcg_true;
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx7].nid_LRBG = kcg_lit_int64(0);
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx7].q_dir = Q_DIR_Reverse;
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx7].q_scale = Q_SCALE_10_cm_scale;
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx7].d_link = kcg_lit_int64(0);
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx7].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx7].nid_c = kcg_lit_int64(0);
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx7].nid_bg = kcg_lit_int64(0);
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx7].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx7].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx7].q_locacc = kcg_lit_int64(0);
  }
  outC->_L2.LRBG.missed = kcg_true;
  outC->_L2.prvLRBG.valid = kcg_true;
  outC->_L2.prvLRBG.nid_c = kcg_lit_int64(0);
  outC->_L2.prvLRBG.nid_bg = kcg_lit_int64(0);
  outC->_L2.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L2.prvLRBG.location.nominal = kcg_lit_int64(0);
  outC->_L2.prvLRBG.location.d_min = kcg_lit_int64(0);
  outC->_L2.prvLRBG.location.d_max = kcg_lit_int64(0);
  outC->_L2.prvLRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L2.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx8 = 0; idx8 < 33; idx8++) {
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx8].valid = kcg_true;
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx8].nid_LRBG = kcg_lit_int64(0);
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx8].q_dir = Q_DIR_Reverse;
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx8].q_scale = Q_SCALE_10_cm_scale;
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx8].d_link = kcg_lit_int64(0);
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx8].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx8].nid_c = kcg_lit_int64(0);
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx8].nid_bg = kcg_lit_int64(0);
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx8].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx8].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx8].q_locacc = kcg_lit_int64(0);
  }
  outC->_L2.prvLRBG.missed = kcg_true;
  outC->_L2.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L2.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L2.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L2.linkingIsUsedOnboard = kcg_true;
  outC->_L2.estimatedRearEndPosition = kcg_lit_int64(0);
  outC->_L2.minSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L2.maxSafeRearEndPosition = kcg_lit_int64(0);
  outC->exception = kcg_true;
  outC->every = kcg_true;
  for (idx10 = 0; idx10 < 5; idx10++) {
    outC->bus_out[idx10].Message.valid = kcg_true;
    outC->bus_out[idx10].Message.nid_message = kcg_lit_int64(0);
    outC->bus_out[idx10].Message.l_message = kcg_lit_int64(0);
    outC->bus_out[idx10].Message.t_train = kcg_lit_int64(0);
    outC->bus_out[idx10].Message.nid_engine = kcg_lit_int64(0);
    outC->bus_out[idx10].Message.field1 = kcg_lit_int64(0);
    outC->bus_out[idx10].Message.field2 = kcg_lit_int64(0);
    outC->bus_out[idx10].Message.field3 = kcg_lit_int64(0);
    for (idx9 = 0; idx9 < 50; idx9++) {
      outC->bus_out[idx10].OptionalPackets[idx9] = kcg_lit_int64(0);
    }
  }
  /* _L32=(TA_MA_Request::Build_MA_request#1)/ */
  Build_MA_request_init_TA_MA_Request(&outC->Context_Build_MA_request_1);
  /* _L11=(TA_MA_Request::MA_Request_Supervision#1)/ */
  MA_Request_Supervision_init_TA_MA_Request(
    &outC->Context_MA_Request_Supervision_1);
  /* _L6=(TA_MA_Request::Receive_MA_RequestParameters#1)/ */
  Receive_MA_RequestParameters_init_TA_MA_Request(
    &outC->Context_Receive_MA_RequestParameters_1);
  outC->triggerMA = kcg_false;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Manage_MA_Request_reset_TA_MA_Request(
  outC_Manage_MA_Request_TA_MA_Request *outC)
{
  /* _L32=(TA_MA_Request::Build_MA_request#1)/ */
  Build_MA_request_reset_TA_MA_Request(&outC->Context_Build_MA_request_1);
  /* _L11=(TA_MA_Request::MA_Request_Supervision#1)/ */
  MA_Request_Supervision_reset_TA_MA_Request(
    &outC->Context_MA_Request_Supervision_1);
  /* _L6=(TA_MA_Request::Receive_MA_RequestParameters#1)/ */
  Receive_MA_RequestParameters_reset_TA_MA_Request(
    &outC->Context_Receive_MA_RequestParameters_1);
  outC->triggerMA = kcg_false;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_Manage_MA_Request_TA_MA_Request(
  SV_Manage_MA_Request_TA_MA_Request *SV,
  outC_Manage_MA_Request_TA_MA_Request *outC)
{
  kcg_save_SV_Receive_MA_RequestParameters_TA_MA_Request(
    &SV->Context_Receive_MA_RequestParameters_1,
    &outC->Context_Receive_MA_RequestParameters_1);
  kcg_save_SV_MA_Request_Supervision_TA_MA_Request(
    &SV->Context_MA_Request_Supervision_1,
    &outC->Context_MA_Request_Supervision_1);
  kcg_save_SV_Build_MA_request_TA_MA_Request(
    &SV->Context_Build_MA_request_1,
    &outC->Context_Build_MA_request_1);
  SV->Context_triggerMA = outC->triggerMA;
}

void kcg_load_SV_Manage_MA_Request_TA_MA_Request(
  outC_Manage_MA_Request_TA_MA_Request *outC,
  SV_Manage_MA_Request_TA_MA_Request *SV)
{
  kcg_load_SV_Receive_MA_RequestParameters_TA_MA_Request(
    &outC->Context_Receive_MA_RequestParameters_1,
    &SV->Context_Receive_MA_RequestParameters_1);
  kcg_load_SV_MA_Request_Supervision_TA_MA_Request(
    &outC->Context_MA_Request_Supervision_1,
    &SV->Context_MA_Request_Supervision_1);
  kcg_load_SV_Build_MA_request_TA_MA_Request(
    &outC->Context_Build_MA_request_1,
    &SV->Context_Build_MA_request_1);
  outC->triggerMA = SV->Context_triggerMA;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Manage_MA_Request_TA_MA_Request.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

