/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Manage_EmergencyStop_TA_EmergencyStop.h"

/* TA_EmergencyStop::Manage_EmergencyStop/ */
void Manage_EmergencyStop_TA_EmergencyStop(
  /* messageIn/ */
  ReceivedMessage_T_Common_Types_Pkg *messageIn,
  /* t_train/ */
  T_TRAIN t_train,
  /* trainProps/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* packet0/ */
  PT0_PositionReport_T_Packet_TrainTypes_Pkg *packet0,
  /* packet1/ */
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1,
  /* TrainPositionIn/ */
  trainPosition_T_TrainPosition_Types_Pck *TrainPositionIn,
  /* currentEOA/ */
  L_internal_Type_Obu_BasicTypes_Pkg currentEOA,
  /* bus_in/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *bus_in,
  outC_Manage_EmergencyStop_TA_EmergencyStop *outC)
{
  static Radio_TrainTrack_Message_T_TM_transitional op_call;
  static M_147_T_TM_radio_messages _1_op_call;
  static kcg_int64 noname;

  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L1, messageIn);
  /* _L35=(TA_EmergencyStop::ES_ReceiveAndControl#1)/ */
  ES_ReceiveAndControl_TA_EmergencyStop(
    &outC->_L1,
    &outC->Context_ES_ReceiveAndControl_1);
  outC->_L35 = outC->Context_ES_ReceiveAndControl_1.receivedMsg15;
  outC->_L20 = outC->Context_ES_ReceiveAndControl_1.receivedMsg16;
  outC->_L33 = outC->Context_ES_ReceiveAndControl_1.receivedMsg18;
  outC->_L34 = outC->Context_ES_ReceiveAndControl_1.sendMsg147;
  outC->sendMsg147 = outC->_L34;
  outC->_L62 = outC->sendMsg147;
  outC->every1 = outC->_L62;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L53, messageIn);
  outC->_L52 = outC->_L35 | outC->_L20 | outC->_L33;
  outC->receivedESMsg = outC->_L52;
  outC->_L51 = outC->receivedESMsg;
  /* _L46=(TA_EmergencyStop::ES_ExtractMsgParams#3)/ */
  ES_ExtractMsgParams_TA_EmergencyStop(
    &outC->_L53,
    outC->_L51,
    &outC->Context_ES_ExtractMsgParams_3);
  outC->_L46 = outC->Context_ES_ExtractMsgParams_3.nid_em;
  outC->_L83 = outC->Context_ES_ExtractMsgParams_3.q_scale;
  outC->_L86 = outC->Context_ES_ExtractMsgParams_3.d_ref;
  outC->_L85 = outC->Context_ES_ExtractMsgParams_3.q_dir;
  outC->_L84 = outC->Context_ES_ExtractMsgParams_3.d_emergencystop;
  outC->nid_em = outC->_L46;
  outC->_L63 = outC->nid_em;
  outC->_L68 = t_train;
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&outC->_L69, trainProps);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&outC->_L70, packet0);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(&outC->_L71, packet1);
  outC->receivedMsg16 = outC->_L20;
  outC->_L101 = outC->receivedMsg16;
  outC->_L82 = outC->nid_em;
  outC->q_scale = outC->_L83;
  outC->_L88 = outC->q_scale;
  outC->d_ref = outC->_L86;
  outC->_L89 = outC->d_ref;
  outC->q_dir = outC->_L85;
  outC->_L87 = outC->q_dir;
  outC->d_emergencystop = outC->_L84;
  outC->_L90 = outC->d_emergencystop;
  outC->receivedMsg15 = outC->_L35;
  outC->_L91 = outC->receivedMsg15;
  outC->receivedMsg18 = outC->_L33;
  outC->_L92 = outC->receivedMsg18;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L95, TrainPositionIn);
  outC->_L105 = currentEOA;
  /* _L78=(TA_EmergencyStop::ES_Process_Conditional#1)/ */
  ES_Process_Conditional_TA_EmergencyStop(
    outC->_L82,
    outC->_L88,
    outC->_L89,
    outC->_L87,
    outC->_L90,
    outC->_L91,
    outC->_L92,
    &outC->_L95,
    outC->_L105,
    &outC->Context_ES_Process_Conditional_1);
  outC->_L78 = outC->Context_ES_Process_Conditional_1.cesAccepted;
  outC->_L103 = outC->Context_ES_Process_Conditional_1.updateEOA;
  outC->_L79 = outC->Context_ES_Process_Conditional_1.newEOA;
  outC->_L93 = outC->Context_ES_Process_Conditional_1.cesActive;
  outC->_L94 = outC->Context_ES_Process_Conditional_1.cesRevoked;
  outC->triggerCES = outC->_L78;
  outC->_L102 = outC->triggerCES;
  outC->cesUpdateEOA = outC->_L103;
  outC->_L107 = outC->cesUpdateEOA;
  if (outC->every1) {
    /* _L60=(TA_EmergencyStop::ES_Build_Acknowledgement#2)/ */
    ES_Build_Acknowledgement_TA_EmergencyStop(
      outC->_L63,
      outC->_L68,
      &outC->_L69,
      &outC->_L70,
      &outC->_L71,
      outC->_L101,
      outC->_L102,
      outC->_L107,
      &outC->Context_ES_Build_Acknowledgement_2);
    kcg_copy_Radio_TrainTrack_Message_T_TM_transitional(
      &op_call,
      &outC->Context_ES_Build_Acknowledgement_2.message147);
  }
  outC->every = outC->_L62;
  outC->_L124 = outC->nid_em;
  outC->_L118 = t_train;
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&outC->_L122, trainProps);
  outC->_L121 = outC->receivedMsg16;
  outC->_L119 = outC->triggerCES;
  outC->_L117 = outC->cesUpdateEOA;
  if (outC->every) {
    /* _L116=(TA_EmergencyStop::ES_Build_AcknowledgementNew#1)/ */
    ES_Build_AcknowledgementNew_TA_EmergencyStop(
      outC->_L124,
      outC->_L118,
      &outC->_L122,
      outC->_L121,
      outC->_L119,
      outC->_L117,
      &outC->Context_ES_Build_AcknowledgementNew_1);
    kcg_copy_M_147_T_TM_radio_messages(
      &_1_op_call,
      &outC->Context_ES_Build_AcknowledgementNew_1.m147);
  }
  outC->_L113 = t_train;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&outC->_L125, bus_in);
  if (outC->every) {
    kcg_copy_M_147_T_TM_radio_messages(&outC->_L116, &_1_op_call);
  }
  else {
    kcg_copy_M_147_T_TM_radio_messages(
      &outC->_L116,
      (M_147_T_TM_radio_messages *) &DEFAULT_M147_TA_EmergencyStop);
  }
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&outC->_L115, packet0);
  /* _L114=(TM_conversions_TrainToTrack::C_legacy_P000#1)/ */
  C_legacy_P000_TM_conversions_TrainToTrack(
    &outC->_L115,
    &outC->Context_C_legacy_P000_1);
  kcg_copy_P000_TM_TrainToTrack(&outC->_L114, &outC->Context_C_legacy_P000_1.p);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(&outC->_L112, packet1);
  /* _L110=(TM_conversions_TrainToTrack::C_legacy_P001#1)/ */
  C_legacy_P001_TM_conversions_TrainToTrack(
    &outC->_L112,
    &outC->Context_C_legacy_P001_1);
  kcg_copy_P001_TM_TrainToTrack(&outC->_L110, &outC->Context_C_legacy_P001_1.p);
  outC->_L109 = cM_version_MA_Request;
  /* _L111=(TM_radio_messages::Send_M147#2)/ */
  Send_M147_TM_radio_messages(
    outC->_L113,
    &outC->_L125,
    &outC->_L116,
    &outC->_L114,
    &outC->_L110,
    outC->_L109,
    &outC->Context_Send_M147_2);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->_L111,
    &outC->Context_Send_M147_2.MessageBus_out);
  outC->_L126 = outC->Context_Send_M147_2.t_train_assigned;
  noname = outC->_L126;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->bus_out,
    &outC->_L111);
  outC->_L104 = outC->cesUpdateEOA;
  outC->updateEOA = outC->_L104;
  outC->_L99 = outC->triggerCES;
  outC->cesEOA = outC->_L79;
  outC->_L98 = outC->cesEOA;
  outC->revokeCES = outC->_L94;
  outC->_L97 = outC->revokeCES;
  outC->cesRevoked = outC->_L97;
  outC->cesActive = outC->_L93;
  outC->newEOA = outC->_L98;
  outC->cesAccepted = outC->_L99;
  outC->_L72 = outC->cesActive;
  outC->_L59 = outC->nid_em;
  outC->_L64 = outC->receivedMsg16;
  outC->_L65 = outC->receivedMsg18;
  /* _L57=(TA_EmergencyStop::ES_Process_Unconditional#1)/ */
  ES_Process_Unconditional_TA_EmergencyStop(
    outC->_L59,
    outC->_L64,
    outC->_L65,
    &outC->Context_ES_Process_Unconditional_1);
  outC->_L57 = outC->Context_ES_Process_Unconditional_1.uesActive;
  outC->uesActive = outC->_L57;
  outC->_L61 = outC->uesActive;
  outC->_L73 = outC->_L61 | outC->_L72;
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->_L67,
    (Radio_TrainTrack_Message_T_Radio_Types_Pkg *) &cMSG147_NONE_TA_EmergencyStop);
  outC->tripTrain = outC->_L61;
  if (outC->every1) {
    kcg_copy_Radio_TrainTrack_Message_T_TM_transitional(&outC->_L60, &op_call);
  }
  else {
    kcg_copy_Radio_TrainTrack_Message_T_TM_transitional(&outC->_L60, &outC->_L67);
  }
  kcg_copy_Radio_TrainTrack_Message_T_TM_transitional(
    &outC->message147,
    &outC->_L60);
  outC->rejectNewMA = outC->_L73;
}

#ifndef KCG_USER_DEFINED_INIT
void Manage_EmergencyStop_init_TA_EmergencyStop(
  outC_Manage_EmergencyStop_TA_EmergencyStop *outC)
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

  outC->_L126 = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 5; idx1++) {
    outC->_L125[idx1].Message.valid = kcg_true;
    outC->_L125[idx1].Message.nid_message = kcg_lit_int64(0);
    outC->_L125[idx1].Message.l_message = kcg_lit_int64(0);
    outC->_L125[idx1].Message.t_train = kcg_lit_int64(0);
    outC->_L125[idx1].Message.nid_engine = kcg_lit_int64(0);
    outC->_L125[idx1].Message.field1 = kcg_lit_int64(0);
    outC->_L125[idx1].Message.field2 = kcg_lit_int64(0);
    outC->_L125[idx1].Message.field3 = kcg_lit_int64(0);
    for (idx = 0; idx < 50; idx++) {
      outC->_L125[idx1].OptionalPackets[idx] = kcg_lit_int64(0);
    }
  }
  outC->_L117 = kcg_true;
  outC->_L118 = kcg_lit_int64(0);
  outC->_L119 = kcg_true;
  outC->_L121 = kcg_true;
  outC->_L122.nid_engine = kcg_lit_int64(0);
  outC->_L122.nid_operational = kcg_lit_int64(0);
  outC->_L122.l_train = kcg_lit_int64(0);
  outC->_L122.d_baliseAntenna_2_frontend.nominal = kcg_lit_int64(0);
  outC->_L122.d_baliseAntenna_2_frontend.d_min = kcg_lit_int64(0);
  outC->_L122.d_baliseAntenna_2_frontend.d_max = kcg_lit_int64(0);
  outC->_L122.d_frontend_2_rearend.nominal = kcg_lit_int64(0);
  outC->_L122.d_frontend_2_rearend.d_min = kcg_lit_int64(0);
  outC->_L122.d_frontend_2_rearend.d_max = kcg_lit_int64(0);
  outC->_L122.locationAccuracy_DefaultValue.nominal = kcg_lit_int64(0);
  outC->_L122.locationAccuracy_DefaultValue.d_min = kcg_lit_int64(0);
  outC->_L122.locationAccuracy_DefaultValue.d_max = kcg_lit_int64(0);
  outC->_L122.centerDetectionAcc_DefaultValue.nominal = kcg_lit_int64(0);
  outC->_L122.centerDetectionAcc_DefaultValue.d_min = kcg_lit_int64(0);
  outC->_L122.centerDetectionAcc_DefaultValue.d_max = kcg_lit_int64(0);
  outC->_L124 = kcg_lit_int64(0);
  outC->_L116.valid = kcg_true;
  outC->_L116.nid_message = kcg_lit_int64(0);
  outC->_L116.l_message = kcg_lit_int64(0);
  outC->_L116.t_train = kcg_lit_int64(0);
  outC->_L116.nid_engine = kcg_lit_int64(0);
  outC->_L116.nid_em = kcg_lit_int64(0);
  outC->_L116.q_emergencystop =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L109 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L110.valid = kcg_true;
  outC->_L110.nid_packet = kcg_lit_int64(0);
  outC->_L110.l_packet = kcg_lit_int64(0);
  outC->_L110.q_scale = Q_SCALE_10_cm_scale;
  outC->_L110.nid_lrbg = kcg_lit_int64(0);
  outC->_L110.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L110.d_lrbg = kcg_lit_int64(0);
  outC->_L110.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L110.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L110.l_doubtover = kcg_lit_int64(0);
  outC->_L110.l_doubtunder = kcg_lit_int64(0);
  outC->_L110.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L110.l_trainint = kcg_lit_int64(0);
  outC->_L110.v_train = kcg_lit_int64(0);
  outC->_L110.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L110.m_mode = M_MODE_Full_Supervision;
  outC->_L110.m_level = M_LEVEL_Level_0;
  outC->_L110.nid_ntc = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L111[idx3].Message.valid = kcg_true;
    outC->_L111[idx3].Message.nid_message = kcg_lit_int64(0);
    outC->_L111[idx3].Message.l_message = kcg_lit_int64(0);
    outC->_L111[idx3].Message.t_train = kcg_lit_int64(0);
    outC->_L111[idx3].Message.nid_engine = kcg_lit_int64(0);
    outC->_L111[idx3].Message.field1 = kcg_lit_int64(0);
    outC->_L111[idx3].Message.field2 = kcg_lit_int64(0);
    outC->_L111[idx3].Message.field3 = kcg_lit_int64(0);
    for (idx2 = 0; idx2 < 50; idx2++) {
      outC->_L111[idx3].OptionalPackets[idx2] = kcg_lit_int64(0);
    }
  }
  outC->_L112.valid = kcg_true;
  outC->_L112.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L112.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L112.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L112.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L112.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L112.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L112.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L112.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L112.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L112.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L112.packet1.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L112.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L112.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L112.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L112.packet1.mode = M_MODE_Full_Supervision;
  outC->_L112.packet1.level = M_LEVEL_Level_0;
  outC->_L112.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L113 = kcg_lit_int64(0);
  outC->_L114.valid = kcg_true;
  outC->_L114.nid_packet = kcg_lit_int64(0);
  outC->_L114.l_packet = kcg_lit_int64(0);
  outC->_L114.q_scale = Q_SCALE_10_cm_scale;
  outC->_L114.nid_lrbg = kcg_lit_int64(0);
  outC->_L114.d_lrbg = kcg_lit_int64(0);
  outC->_L114.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L114.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L114.l_doubtover = kcg_lit_int64(0);
  outC->_L114.l_doubtunder = kcg_lit_int64(0);
  outC->_L114.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L114.l_trainint = kcg_lit_int64(0);
  outC->_L114.v_train = kcg_lit_int64(0);
  outC->_L114.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L114.m_mode = M_MODE_Full_Supervision;
  outC->_L114.m_level = M_LEVEL_Level_0;
  outC->_L114.nid_ntc = kcg_lit_int64(0);
  outC->_L115.valid = kcg_true;
  outC->_L115.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L115.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L115.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L115.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L115.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L115.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L115.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L115.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L115.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L115.packet0.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L115.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L115.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L115.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L115.packet0.mode = M_MODE_Full_Supervision;
  outC->_L115.packet0.level = M_LEVEL_Level_0;
  outC->_L115.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L107 = kcg_true;
  outC->_L105 = kcg_lit_int64(0);
  outC->_L104 = kcg_true;
  outC->_L103 = kcg_true;
  outC->_L102 = kcg_true;
  outC->_L101 = kcg_true;
  outC->_L99 = kcg_true;
  outC->_L98 = kcg_lit_int64(0);
  outC->_L97 = kcg_true;
  outC->_L95.valid = kcg_true;
  outC->_L95.timestamp = kcg_lit_int64(0);
  outC->_L95.trainPositionIsUnknown = kcg_true;
  outC->_L95.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L95.trainPosition.nominal = kcg_lit_int64(0);
  outC->_L95.trainPosition.d_min = kcg_lit_int64(0);
  outC->_L95.trainPosition.d_max = kcg_lit_int64(0);
  outC->_L95.estimatedFrontEndPosition = kcg_lit_int64(0);
  outC->_L95.minSafeFrontEndPosition = kcg_lit_int64(0);
  outC->_L95.maxSafeFrontEndPostion = kcg_lit_int64(0);
  outC->_L95.LRBG.valid = kcg_true;
  outC->_L95.LRBG.nid_c = kcg_lit_int64(0);
  outC->_L95.LRBG.nid_bg = kcg_lit_int64(0);
  outC->_L95.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L95.LRBG.location.nominal = kcg_lit_int64(0);
  outC->_L95.LRBG.location.d_min = kcg_lit_int64(0);
  outC->_L95.LRBG.location.d_max = kcg_lit_int64(0);
  outC->_L95.LRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L95.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L95.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L95.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L95.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L95.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L95.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L95.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L95.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L95.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L95.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L95.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L95.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L95.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L95.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L95.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L95.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L95.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L95.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L95.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L95.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L95.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L95.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L95.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L95.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L95.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L95.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L95.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L95.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L95.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L95.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L95.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L95.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L95.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L95.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L95.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L95.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L95.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L95.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L95.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L95.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L95.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L95.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L95.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L95.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L95.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L95.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L95.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L95.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L95.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx4 = 0; idx4 < 33; idx4++) {
    outC->_L95.LRBG.infoFromPassing.linkedBGs[idx4].valid = kcg_true;
    outC->_L95.LRBG.infoFromPassing.linkedBGs[idx4].nid_LRBG = kcg_lit_int64(0);
    outC->_L95.LRBG.infoFromPassing.linkedBGs[idx4].q_dir = Q_DIR_Reverse;
    outC->_L95.LRBG.infoFromPassing.linkedBGs[idx4].q_scale = Q_SCALE_10_cm_scale;
    outC->_L95.LRBG.infoFromPassing.linkedBGs[idx4].d_link = kcg_lit_int64(0);
    outC->_L95.LRBG.infoFromPassing.linkedBGs[idx4].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L95.LRBG.infoFromPassing.linkedBGs[idx4].nid_c = kcg_lit_int64(0);
    outC->_L95.LRBG.infoFromPassing.linkedBGs[idx4].nid_bg = kcg_lit_int64(0);
    outC->_L95.LRBG.infoFromPassing.linkedBGs[idx4].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L95.LRBG.infoFromPassing.linkedBGs[idx4].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L95.LRBG.infoFromPassing.linkedBGs[idx4].q_locacc = kcg_lit_int64(0);
  }
  outC->_L95.LRBG.missed = kcg_true;
  outC->_L95.prvLRBG.valid = kcg_true;
  outC->_L95.prvLRBG.nid_c = kcg_lit_int64(0);
  outC->_L95.prvLRBG.nid_bg = kcg_lit_int64(0);
  outC->_L95.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L95.prvLRBG.location.nominal = kcg_lit_int64(0);
  outC->_L95.prvLRBG.location.d_min = kcg_lit_int64(0);
  outC->_L95.prvLRBG.location.d_max = kcg_lit_int64(0);
  outC->_L95.prvLRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L95.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L95.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L95.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L95.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L95.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L95.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L95.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L95.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L95.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L95.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L95.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L95.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L95.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L95.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L95.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L95.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L95.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L95.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L95.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L95.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L95.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L95.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L95.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L95.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L95.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L95.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L95.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L95.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L95.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L95.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L95.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L95.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L95.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L95.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L95.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L95.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L95.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L95.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L95.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L95.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L95.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L95.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L95.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L95.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L95.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L95.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L95.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L95.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L95.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx5 = 0; idx5 < 33; idx5++) {
    outC->_L95.prvLRBG.infoFromPassing.linkedBGs[idx5].valid = kcg_true;
    outC->_L95.prvLRBG.infoFromPassing.linkedBGs[idx5].nid_LRBG = kcg_lit_int64(0);
    outC->_L95.prvLRBG.infoFromPassing.linkedBGs[idx5].q_dir = Q_DIR_Reverse;
    outC->_L95.prvLRBG.infoFromPassing.linkedBGs[idx5].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L95.prvLRBG.infoFromPassing.linkedBGs[idx5].d_link = kcg_lit_int64(0);
    outC->_L95.prvLRBG.infoFromPassing.linkedBGs[idx5].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L95.prvLRBG.infoFromPassing.linkedBGs[idx5].nid_c = kcg_lit_int64(0);
    outC->_L95.prvLRBG.infoFromPassing.linkedBGs[idx5].nid_bg = kcg_lit_int64(0);
    outC->_L95.prvLRBG.infoFromPassing.linkedBGs[idx5].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L95.prvLRBG.infoFromPassing.linkedBGs[idx5].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L95.prvLRBG.infoFromPassing.linkedBGs[idx5].q_locacc = kcg_lit_int64(0);
  }
  outC->_L95.prvLRBG.missed = kcg_true;
  outC->_L95.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L95.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L95.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L95.linkingIsUsedOnboard = kcg_true;
  outC->_L95.estimatedRearEndPosition = kcg_lit_int64(0);
  outC->_L95.minSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L95.maxSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L94 = kcg_true;
  outC->_L93 = kcg_true;
  outC->_L92 = kcg_true;
  outC->_L91 = kcg_true;
  outC->_L90 = kcg_lit_int64(0);
  outC->_L89 = kcg_lit_int64(0);
  outC->_L88 = Q_SCALE_10_cm_scale;
  outC->_L87 = Q_DIR_Reverse;
  outC->_L86 = kcg_lit_int64(0);
  outC->_L85 = Q_DIR_Reverse;
  outC->_L84 = kcg_lit_int64(0);
  outC->_L83 = Q_SCALE_10_cm_scale;
  outC->_L82 = kcg_lit_int64(0);
  outC->_L78 = kcg_true;
  outC->_L79 = kcg_lit_int64(0);
  outC->_L73 = kcg_true;
  outC->_L72 = kcg_true;
  outC->_L71.valid = kcg_true;
  outC->_L71.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L71.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L71.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L71.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L71.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L71.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L71.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L71.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L71.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L71.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L71.packet1.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L71.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L71.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L71.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L71.packet1.mode = M_MODE_Full_Supervision;
  outC->_L71.packet1.level = M_LEVEL_Level_0;
  outC->_L71.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L70.valid = kcg_true;
  outC->_L70.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L70.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L70.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L70.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L70.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L70.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L70.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L70.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L70.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L70.packet0.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L70.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L70.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L70.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L70.packet0.mode = M_MODE_Full_Supervision;
  outC->_L70.packet0.level = M_LEVEL_Level_0;
  outC->_L70.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L69.nid_engine = kcg_lit_int64(0);
  outC->_L69.nid_operational = kcg_lit_int64(0);
  outC->_L69.l_train = kcg_lit_int64(0);
  outC->_L69.d_baliseAntenna_2_frontend.nominal = kcg_lit_int64(0);
  outC->_L69.d_baliseAntenna_2_frontend.d_min = kcg_lit_int64(0);
  outC->_L69.d_baliseAntenna_2_frontend.d_max = kcg_lit_int64(0);
  outC->_L69.d_frontend_2_rearend.nominal = kcg_lit_int64(0);
  outC->_L69.d_frontend_2_rearend.d_min = kcg_lit_int64(0);
  outC->_L69.d_frontend_2_rearend.d_max = kcg_lit_int64(0);
  outC->_L69.locationAccuracy_DefaultValue.nominal = kcg_lit_int64(0);
  outC->_L69.locationAccuracy_DefaultValue.d_min = kcg_lit_int64(0);
  outC->_L69.locationAccuracy_DefaultValue.d_max = kcg_lit_int64(0);
  outC->_L69.centerDetectionAcc_DefaultValue.nominal = kcg_lit_int64(0);
  outC->_L69.centerDetectionAcc_DefaultValue.d_min = kcg_lit_int64(0);
  outC->_L69.centerDetectionAcc_DefaultValue.d_max = kcg_lit_int64(0);
  outC->_L68 = kcg_lit_int64(0);
  outC->_L67.present = kcg_true;
  outC->_L67.header.present = kcg_true;
  outC->_L67.header.nid_message = kcg_lit_int64(0);
  outC->_L67.header.t_train = kcg_lit_int64(0);
  outC->_L67.header.nid_engine = kcg_lit_int64(0);
  outC->_L67.header.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L67.header.xT_TRAIN = kcg_lit_int64(0);
  outC->_L67.header.xNID_EM = kcg_lit_int64(0);
  outC->_L67.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L67.header.xNID_TEXTMESSAGE = kcg_lit_int64(0);
  outC->_L67.packets.p0.valid = kcg_true;
  outC->_L67.packets.p0.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L67.packets.p0.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L67.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L67.packets.p0.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L67.packets.p0.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L67.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L67.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L67.packets.p0.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L67.packets.p0.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L67.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L67.packets.p0.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L67.packets.p0.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L67.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L67.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L67.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L67.packets.p0.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L67.packets.p1.valid = kcg_true;
  outC->_L67.packets.p1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L67.packets.p1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L67.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L67.packets.p1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L67.packets.p1.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L67.packets.p1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L67.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L67.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L67.packets.p1.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L67.packets.p1.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L67.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L67.packets.p1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L67.packets.p1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L67.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L67.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L67.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L67.packets.p1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L67.packets.p3.valid = kcg_true;
  outC->_L67.packets.p3.number = kcg_lit_int64(0);
  for (idx7 = 0; idx7 < 1; idx7++) {
    outC->_L67.packets.p3.aNID_RADIO[idx7].valid = kcg_true;
    for (idx6 = 0; idx6 < 15; idx6++) {
      outC->_L67.packets.p3.aNID_RADIO[idx7].telephoneNumber[idx6] = kcg_lit_int64(0);
    }
  }
  outC->_L67.packets.p4.valid = kcg_true;
  outC->_L67.packets.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L67.packets.p5.valid = kcg_true;
  outC->_L67.packets.p5.TrainRunningNumber = kcg_lit_int64(0);
  outC->_L67.packets.p9.valid = kcg_true;
  outC->_L67.packets.p9.transitionInformation = kcg_lit_int64(0);
  outC->_L67.packets.p11.valid = kcg_true;
  outC->_L67.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L67.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L67.packets.p11.l_train = kcg_lit_int64(0);
  outC->_L67.packets.p11.v_maxtrain = kcg_lit_int64(0);
  outC->_L67.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L67.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L67.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L67.packets.p11.n_axle = kcg_lit_int64(0);
  outC->_L67.packets.p11.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx8 = 0; idx8 < 4; idx8++) {
    outC->_L67.packets.p11.tractionIdentity[idx8].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L67.packets.p11.tractionIdentity[idx8].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L67.packets.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx9 = 0; idx9 < 5; idx9++) {
    outC->_L67.packets.p11.nid_ntc[idx9] = kcg_lit_int64(0);
  }
  outC->_L65 = kcg_true;
  outC->_L64 = kcg_true;
  outC->_L63 = kcg_lit_int64(0);
  outC->_L62 = kcg_true;
  outC->_L61 = kcg_true;
  outC->_L60.present = kcg_true;
  outC->_L60.header.present = kcg_true;
  outC->_L60.header.nid_message = kcg_lit_int64(0);
  outC->_L60.header.t_train = kcg_lit_int64(0);
  outC->_L60.header.nid_engine = kcg_lit_int64(0);
  outC->_L60.header.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L60.header.xT_TRAIN = kcg_lit_int64(0);
  outC->_L60.header.xNID_EM = kcg_lit_int64(0);
  outC->_L60.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L60.header.xNID_TEXTMESSAGE = kcg_lit_int64(0);
  outC->_L60.packets.p0.valid = kcg_true;
  outC->_L60.packets.p0.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L60.packets.p0.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L60.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L60.packets.p0.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L60.packets.p0.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L60.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L60.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L60.packets.p0.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L60.packets.p0.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L60.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L60.packets.p0.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L60.packets.p0.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L60.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L60.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L60.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L60.packets.p0.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L60.packets.p1.valid = kcg_true;
  outC->_L60.packets.p1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L60.packets.p1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L60.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L60.packets.p1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L60.packets.p1.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L60.packets.p1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L60.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L60.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L60.packets.p1.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L60.packets.p1.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L60.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L60.packets.p1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L60.packets.p1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L60.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L60.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L60.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L60.packets.p1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L60.packets.p3.valid = kcg_true;
  outC->_L60.packets.p3.number = kcg_lit_int64(0);
  for (idx11 = 0; idx11 < 1; idx11++) {
    outC->_L60.packets.p3.aNID_RADIO[idx11].valid = kcg_true;
    for (idx10 = 0; idx10 < 15; idx10++) {
      outC->_L60.packets.p3.aNID_RADIO[idx11].telephoneNumber[idx10] =
        kcg_lit_int64(0);
    }
  }
  outC->_L60.packets.p4.valid = kcg_true;
  outC->_L60.packets.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L60.packets.p5.valid = kcg_true;
  outC->_L60.packets.p5.TrainRunningNumber = kcg_lit_int64(0);
  outC->_L60.packets.p9.valid = kcg_true;
  outC->_L60.packets.p9.transitionInformation = kcg_lit_int64(0);
  outC->_L60.packets.p11.valid = kcg_true;
  outC->_L60.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L60.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L60.packets.p11.l_train = kcg_lit_int64(0);
  outC->_L60.packets.p11.v_maxtrain = kcg_lit_int64(0);
  outC->_L60.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L60.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L60.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L60.packets.p11.n_axle = kcg_lit_int64(0);
  outC->_L60.packets.p11.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx12 = 0; idx12 < 4; idx12++) {
    outC->_L60.packets.p11.tractionIdentity[idx12].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L60.packets.p11.tractionIdentity[idx12].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L60.packets.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx13 = 0; idx13 < 5; idx13++) {
    outC->_L60.packets.p11.nid_ntc[idx13] = kcg_lit_int64(0);
  }
  outC->_L59 = kcg_lit_int64(0);
  outC->_L57 = kcg_true;
  outC->_L53.valid = kcg_true;
  outC->_L53.source = msrc_undefined_Common_Types_Pkg;
  outC->_L53.radioMetadata.t_train_reference = kcg_true;
  outC->_L53.radioMetadata.nid_em = kcg_true;
  outC->_L53.radioMetadata.q_scale = kcg_true;
  outC->_L53.radioMetadata.d_sr = kcg_true;
  outC->_L53.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L53.radioMetadata.d_ref = kcg_true;
  outC->_L53.radioMetadata.q_dir = kcg_true;
  outC->_L53.radioMetadata.d_emergencystop = kcg_true;
  outC->_L53.radioMetadata.m_version = kcg_true;
  outC->_L53.BG_Common_Header.valid = kcg_true;
  outC->_L53.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L53.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L53.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L53.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L53.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L53.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L53.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L53.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L53.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L53.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L53.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L53.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L53.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L53.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L53.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L53.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L53.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L53.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L53.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L53.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L53.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L53.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L53.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L53.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L53.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L53.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L53.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L53.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L53.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L53.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L53.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L53.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L53.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L53.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L53.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L53.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L53.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L53.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L53.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L53.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L53.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L53.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx14 = 0; idx14 < 30; idx14++) {
    outC->_L53.packets.PacketHeaders[idx14].nid_packet = kcg_lit_int64(0);
    outC->_L53.packets.PacketHeaders[idx14].q_dir = Q_DIR_Reverse;
    outC->_L53.packets.PacketHeaders[idx14].valid = kcg_true;
    outC->_L53.packets.PacketHeaders[idx14].startAddress = kcg_lit_int64(0);
    outC->_L53.packets.PacketHeaders[idx14].endAddress = kcg_lit_int64(0);
  }
  for (idx15 = 0; idx15 < 500; idx15++) {
    outC->_L53.packets.PacketData[idx15] = kcg_lit_int64(0);
  }
  outC->_L53.sendingRBC.valid = kcg_true;
  outC->_L53.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L53.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L53.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L52 = kcg_true;
  outC->_L51 = kcg_true;
  outC->_L46 = kcg_lit_int64(0);
  outC->_L35 = kcg_true;
  outC->_L34 = kcg_true;
  outC->_L33 = kcg_true;
  outC->_L20 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L1.radioMetadata.t_train_reference = kcg_true;
  outC->_L1.radioMetadata.nid_em = kcg_true;
  outC->_L1.radioMetadata.q_scale = kcg_true;
  outC->_L1.radioMetadata.d_sr = kcg_true;
  outC->_L1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L1.radioMetadata.d_ref = kcg_true;
  outC->_L1.radioMetadata.q_dir = kcg_true;
  outC->_L1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L1.radioMetadata.m_version = kcg_true;
  outC->_L1.BG_Common_Header.valid = kcg_true;
  outC->_L1.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L1.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L1.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L1.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L1.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L1.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx16 = 0; idx16 < 30; idx16++) {
    outC->_L1.packets.PacketHeaders[idx16].nid_packet = kcg_lit_int64(0);
    outC->_L1.packets.PacketHeaders[idx16].q_dir = Q_DIR_Reverse;
    outC->_L1.packets.PacketHeaders[idx16].valid = kcg_true;
    outC->_L1.packets.PacketHeaders[idx16].startAddress = kcg_lit_int64(0);
    outC->_L1.packets.PacketHeaders[idx16].endAddress = kcg_lit_int64(0);
  }
  for (idx17 = 0; idx17 < 500; idx17++) {
    outC->_L1.packets.PacketData[idx17] = kcg_lit_int64(0);
  }
  outC->_L1.sendingRBC.valid = kcg_true;
  outC->_L1.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L1.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L1.sendingRBC.device_id = kcg_lit_int64(0);
  outC->cesUpdateEOA = kcg_true;
  outC->revokeCES = kcg_true;
  outC->d_emergencystop = kcg_lit_int64(0);
  outC->q_dir = Q_DIR_Reverse;
  outC->d_ref = kcg_lit_int64(0);
  outC->q_scale = Q_SCALE_10_cm_scale;
  outC->cesEOA = kcg_lit_int64(0);
  outC->triggerCES = kcg_true;
  outC->cesActive = kcg_true;
  outC->uesActive = kcg_true;
  outC->nid_em = kcg_lit_int64(0);
  outC->sendMsg147 = kcg_true;
  outC->receivedESMsg = kcg_true;
  outC->receivedMsg18 = kcg_true;
  outC->receivedMsg15 = kcg_true;
  outC->receivedMsg16 = kcg_true;
  outC->every1 = kcg_true;
  outC->every = kcg_true;
  for (idx19 = 0; idx19 < 5; idx19++) {
    outC->bus_out[idx19].Message.valid = kcg_true;
    outC->bus_out[idx19].Message.nid_message = kcg_lit_int64(0);
    outC->bus_out[idx19].Message.l_message = kcg_lit_int64(0);
    outC->bus_out[idx19].Message.t_train = kcg_lit_int64(0);
    outC->bus_out[idx19].Message.nid_engine = kcg_lit_int64(0);
    outC->bus_out[idx19].Message.field1 = kcg_lit_int64(0);
    outC->bus_out[idx19].Message.field2 = kcg_lit_int64(0);
    outC->bus_out[idx19].Message.field3 = kcg_lit_int64(0);
    for (idx18 = 0; idx18 < 50; idx18++) {
      outC->bus_out[idx19].OptionalPackets[idx18] = kcg_lit_int64(0);
    }
  }
  outC->cesRevoked = kcg_true;
  outC->newEOA = kcg_lit_int64(0);
  outC->updateEOA = kcg_true;
  outC->cesAccepted = kcg_true;
  outC->tripTrain = kcg_true;
  outC->message147.present = kcg_true;
  outC->message147.header.present = kcg_true;
  outC->message147.header.nid_message = kcg_lit_int64(0);
  outC->message147.header.t_train = kcg_lit_int64(0);
  outC->message147.header.nid_engine = kcg_lit_int64(0);
  outC->message147.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->message147.header.xT_TRAIN = kcg_lit_int64(0);
  outC->message147.header.xNID_EM = kcg_lit_int64(0);
  outC->message147.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->message147.header.xNID_TEXTMESSAGE = kcg_lit_int64(0);
  outC->message147.packets.p0.valid = kcg_true;
  outC->message147.packets.p0.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->message147.packets.p0.packet0.L_PACKET = kcg_lit_int64(0);
  outC->message147.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->message147.packets.p0.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->message147.packets.p0.packet0.D_LRBG = kcg_lit_int64(0);
  outC->message147.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->message147.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->message147.packets.p0.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->message147.packets.p0.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->message147.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->message147.packets.p0.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->message147.packets.p0.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->message147.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->message147.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->message147.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->message147.packets.p0.packet0.NID_NTC = kcg_lit_int64(0);
  outC->message147.packets.p1.valid = kcg_true;
  outC->message147.packets.p1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->message147.packets.p1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->message147.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->message147.packets.p1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->message147.packets.p1.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->message147.packets.p1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->message147.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->message147.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->message147.packets.p1.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->message147.packets.p1.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->message147.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->message147.packets.p1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->message147.packets.p1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->message147.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->message147.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->message147.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->message147.packets.p1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->message147.packets.p3.valid = kcg_true;
  outC->message147.packets.p3.number = kcg_lit_int64(0);
  for (idx21 = 0; idx21 < 1; idx21++) {
    outC->message147.packets.p3.aNID_RADIO[idx21].valid = kcg_true;
    for (idx20 = 0; idx20 < 15; idx20++) {
      outC->message147.packets.p3.aNID_RADIO[idx21].telephoneNumber[idx20] =
        kcg_lit_int64(0);
    }
  }
  outC->message147.packets.p4.valid = kcg_true;
  outC->message147.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->message147.packets.p5.valid = kcg_true;
  outC->message147.packets.p5.TrainRunningNumber = kcg_lit_int64(0);
  outC->message147.packets.p9.valid = kcg_true;
  outC->message147.packets.p9.transitionInformation = kcg_lit_int64(0);
  outC->message147.packets.p11.valid = kcg_true;
  outC->message147.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->message147.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->message147.packets.p11.l_train = kcg_lit_int64(0);
  outC->message147.packets.p11.v_maxtrain = kcg_lit_int64(0);
  outC->message147.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->message147.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->message147.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->message147.packets.p11.n_axle = kcg_lit_int64(0);
  outC->message147.packets.p11.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx22 = 0; idx22 < 4; idx22++) {
    outC->message147.packets.p11.tractionIdentity[idx22].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->message147.packets.p11.tractionIdentity[idx22].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->message147.packets.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx23 = 0; idx23 < 5; idx23++) {
    outC->message147.packets.p11.nid_ntc[idx23] = kcg_lit_int64(0);
  }
  outC->rejectNewMA = kcg_true;
  /* _L57=(TA_EmergencyStop::ES_Process_Unconditional#1)/ */
  ES_Process_Unconditional_init_TA_EmergencyStop(
    &outC->Context_ES_Process_Unconditional_1);
  /* _L111=(TM_radio_messages::Send_M147#2)/ */
  Send_M147_init_TM_radio_messages(&outC->Context_Send_M147_2);
  /* _L110=(TM_conversions_TrainToTrack::C_legacy_P001#1)/ */
  C_legacy_P001_init_TM_conversions_TrainToTrack(
    &outC->Context_C_legacy_P001_1);
  /* _L114=(TM_conversions_TrainToTrack::C_legacy_P000#1)/ */
  C_legacy_P000_init_TM_conversions_TrainToTrack(
    &outC->Context_C_legacy_P000_1);
  /* _L116=(TA_EmergencyStop::ES_Build_AcknowledgementNew#1)/ */
  ES_Build_AcknowledgementNew_init_TA_EmergencyStop(
    &outC->Context_ES_Build_AcknowledgementNew_1);
  /* _L60=(TA_EmergencyStop::ES_Build_Acknowledgement#2)/ */
  ES_Build_Acknowledgement_init_TA_EmergencyStop(
    &outC->Context_ES_Build_Acknowledgement_2);
  /* _L78=(TA_EmergencyStop::ES_Process_Conditional#1)/ */
  ES_Process_Conditional_init_TA_EmergencyStop(
    &outC->Context_ES_Process_Conditional_1);
  /* _L46=(TA_EmergencyStop::ES_ExtractMsgParams#3)/ */
  ES_ExtractMsgParams_init_TA_EmergencyStop(
    &outC->Context_ES_ExtractMsgParams_3);
  /* _L35=(TA_EmergencyStop::ES_ReceiveAndControl#1)/ */
  ES_ReceiveAndControl_init_TA_EmergencyStop(
    &outC->Context_ES_ReceiveAndControl_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Manage_EmergencyStop_reset_TA_EmergencyStop(
  outC_Manage_EmergencyStop_TA_EmergencyStop *outC)
{
  /* _L57=(TA_EmergencyStop::ES_Process_Unconditional#1)/ */
  ES_Process_Unconditional_reset_TA_EmergencyStop(
    &outC->Context_ES_Process_Unconditional_1);
  /* _L111=(TM_radio_messages::Send_M147#2)/ */
  Send_M147_reset_TM_radio_messages(&outC->Context_Send_M147_2);
  /* _L110=(TM_conversions_TrainToTrack::C_legacy_P001#1)/ */
  C_legacy_P001_reset_TM_conversions_TrainToTrack(
    &outC->Context_C_legacy_P001_1);
  /* _L114=(TM_conversions_TrainToTrack::C_legacy_P000#1)/ */
  C_legacy_P000_reset_TM_conversions_TrainToTrack(
    &outC->Context_C_legacy_P000_1);
  /* _L116=(TA_EmergencyStop::ES_Build_AcknowledgementNew#1)/ */
  ES_Build_AcknowledgementNew_reset_TA_EmergencyStop(
    &outC->Context_ES_Build_AcknowledgementNew_1);
  /* _L60=(TA_EmergencyStop::ES_Build_Acknowledgement#2)/ */
  ES_Build_Acknowledgement_reset_TA_EmergencyStop(
    &outC->Context_ES_Build_Acknowledgement_2);
  /* _L78=(TA_EmergencyStop::ES_Process_Conditional#1)/ */
  ES_Process_Conditional_reset_TA_EmergencyStop(
    &outC->Context_ES_Process_Conditional_1);
  /* _L46=(TA_EmergencyStop::ES_ExtractMsgParams#3)/ */
  ES_ExtractMsgParams_reset_TA_EmergencyStop(
    &outC->Context_ES_ExtractMsgParams_3);
  /* _L35=(TA_EmergencyStop::ES_ReceiveAndControl#1)/ */
  ES_ReceiveAndControl_reset_TA_EmergencyStop(
    &outC->Context_ES_ReceiveAndControl_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_Manage_EmergencyStop_TA_EmergencyStop(
  SV_Manage_EmergencyStop_TA_EmergencyStop *SV,
  outC_Manage_EmergencyStop_TA_EmergencyStop *outC)
{
  kcg_save_SV_ES_Process_Conditional_TA_EmergencyStop(
    &SV->Context_ES_Process_Conditional_1,
    &outC->Context_ES_Process_Conditional_1);
  kcg_save_SV_Send_M147_TM_radio_messages(
    &SV->Context_Send_M147_2,
    &outC->Context_Send_M147_2);
  kcg_save_SV_ES_Process_Unconditional_TA_EmergencyStop(
    &SV->Context_ES_Process_Unconditional_1,
    &outC->Context_ES_Process_Unconditional_1);
}

void kcg_load_SV_Manage_EmergencyStop_TA_EmergencyStop(
  outC_Manage_EmergencyStop_TA_EmergencyStop *outC,
  SV_Manage_EmergencyStop_TA_EmergencyStop *SV)
{
  kcg_load_SV_ES_Process_Conditional_TA_EmergencyStop(
    &outC->Context_ES_Process_Conditional_1,
    &SV->Context_ES_Process_Conditional_1);
  kcg_load_SV_Send_M147_TM_radio_messages(
    &outC->Context_Send_M147_2,
    &SV->Context_Send_M147_2);
  kcg_load_SV_ES_Process_Unconditional_TA_EmergencyStop(
    &outC->Context_ES_Process_Unconditional_1,
    &SV->Context_ES_Process_Unconditional_1);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Manage_EmergencyStop_TA_EmergencyStop.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

