/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:31
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "fishHandoverCmds_Handover_Pkg_handoverUtils_Pkg.h"

/* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds/ */
void fishHandoverCmds_Handover_Pkg_handoverUtils_Pkg(
  /* dataFromTrack/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg *dataFromTrack,
  /* dataFromHandingOverRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg *dataFromHandingOverRBC,
  outC_fishHandoverCmds_Handover_Pkg_handoverUtils_Pkg *outC)
{
  P42_SessionManagement_T_Packet_Types_Pkg noname;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg _1_noname;
  kcg_bool _2_noname;

  outC->_L45 = cNID_RADIO_useTheShortNumberStoredOnboard_MoRC_Pck_Coder_Pkg;
  outC->_L187 = /* _L187= */(kcg_int64) outC->_L45;
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&outC->_L4, dataFromHandingOverRBC);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L101, &outC->_L4.packets);
  /* _L102=(TM::Read_P042#1)/ */
  Read_P042_TM(&outC->_L101, &outC->Context_Read_P042_1);
  outC->_L102 = outC->Context_Read_P042_1.received;
  kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg(
    &outC->_L103,
    &outC->Context_Read_P042_1.P042_OBU_out);
  outC->_L94 = outC->_L103.valid;
  outC->_L95 = outC->_L103.q_rbc;
  outC->_L91 = Q_RBC_Terminate_communication_session;
  outC->_L92 = outC->_L91 == outC->_L95;
  outC->_L100 = msrc_Euroradio_Common_Types_Pkg;
  outC->_L98 = outC->_L4.source;
  outC->_L99 = outC->_L98 == outC->_L100;
  outC->_L97 = outC->_L4.valid;
  outC->_L89 = outC->_L97 & outC->_L99 & outC->_L102 & outC->_L92 & outC->_L94;
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&outC->_L1, dataFromTrack);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L47, &outC->_L1.packets);
  /* _L8=(TM::Read_P131#1)/ */
  Read_P131_TM(&outC->_L47, &outC->Context_Read_P131_1);
  outC->_L8 = outC->Context_Read_P131_1.received;
  kcg_copy_P131_OBU_T_TM(&outC->_L79, &outC->Context_Read_P131_1.P131_OBU_out);
  outC->_L28 = outC->_L79.valid;
  outC->_L27 = outC->_L1.valid;
  outC->_L29 = outC->_L27 & outC->_L28 & outC->_L8;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L7, &outC->_L1.packets);
  /* _L6=(TM::Read_P045#1)/ */
  Read_P045_TM(&outC->_L7, &outC->Context_Read_P045_1);
  outC->_L6 = outC->Context_Read_P045_1.received;
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->_L78,
    &outC->Context_Read_P045_1.P045_OBU_out);
  outC->_L109 = outC->_L6 & outC->_L27;
  outC->_L105 = outC->_L109 | outC->_L29 | outC->_L89;
  outC->handoverRelevantCmdValid = outC->_L105;
  outC->_L108 = outC->handoverRelevantCmdValid;
  outC->_L162 = !outC->_L108;
  _2_noname = outC->_L162;
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->_L186,
    (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->_L185,
    (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
  /* _L184= */
  if (outC->_L29) {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&outC->_L184, &outC->_L1);
  }
  else {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&outC->_L184, &outC->_L185);
  }
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &_1_noname,
    &outC->_L78);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->p131_RBCTransitionOrder,
    &outC->_L184);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->_L182,
    (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
  /* _L183= */
  if (outC->_L109) {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&outC->_L183, &outC->_L1);
  }
  else {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&outC->_L183, &outC->_L182);
  }
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&outC->_L107, dataFromTrack);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L113,
    &outC->_L107.packets);
  /* _L114=(TM::Read_P042#2)/ */
  Read_P042_TM(&outC->_L113, &outC->Context_Read_P042_2);
  outC->_L114 = outC->Context_Read_P042_2.received;
  kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg(
    &outC->_L115,
    &outC->Context_Read_P042_2.P042_OBU_out);
  kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg(&noname, &outC->_L115);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->_L181,
    (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
  outC->_L170 = cm32_RBC_RIU_System_Version_Id_Pkg;
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L166,
    &outC->_L107.Radio_Common_Header);
  outC->_L167 = outC->_L166.nid_message;
  outC->_L173 = outC->_L167 == outC->_L170;
  outC->_L169 =
    cm39_Acknowledgement_of_termination_of_a_communication_session_Id_Pkg;
  outC->_L172 = outC->_L167 == outC->_L169;
  outC->_L168 = cm38_Initiation_of_a_Communication_Session_Id_Pkg;
  outC->_L171 = outC->_L167 == outC->_L168;
  outC->_L174 = outC->_L171 | outC->_L172 | outC->_L173;
  outC->_L165 = msrc_Euroradio_Common_Types_Pkg;
  outC->_L163 = outC->_L107.source;
  outC->_L164 = outC->_L163 == outC->_L165;
  outC->_L112 = outC->_L107.valid;
  outC->_L177 = outC->_L112 & outC->_L164 & outC->_L174;
  outC->_L176 = outC->_L112 & outC->_L114;
  outC->_L178 = outC->_L176 | outC->_L177;
  outC->_L179 = outC->_L178 & outC->_L178;
  /* _L180= */
  if (outC->_L179) {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&outC->_L180, &outC->_L107);
  }
  else {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&outC->_L180, &outC->_L181);
  }
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->sessionCmdsFromTrack,
    &outC->_L180);
  /* _L90= */
  if (outC->_L89) {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&outC->_L90, &outC->_L4);
  }
  else {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&outC->_L90, &outC->_L186);
  }
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L51,
    (LocWithInAcc_T_Obu_BasicTypes_Pkg *) &cLocWithInAcc_0_Obu_BasicTypes_Pkg);
  outC->_L49 = outC->_L79.nid_radio;
  outC->_L50 = outC->_L187 == outC->_L49;
  outC->_L43 = outC->_L79.nid_rbc;
  outC->_L46 = cNID_RBC_contactLastKnownRBC_MoRC_Pck_Coder_Pkg;
  outC->_L48 = outC->_L46 == outC->_L43;
  outC->_L41 = outC->_L1.Radio_Common_Header.nid_lrbg;
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L35, &outC->_L1.BG_Common_Header);
  outC->_L36 = outC->_L35.valid;
  outC->_L37 = outC->_L35.nid_c;
  outC->_L39 = outC->_L35.nid_bg;
  /* _L40=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidC_nidBG_2_NIDLRBG#1)/ */
  nidC_nidBG_2_NIDLRBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    outC->_L36,
    outC->_L37,
    outC->_L39,
    &outC->Context_nidC_nidBG_2_NIDLRBG_1);
  outC->_L40 = outC->Context_nidC_nidBG_2_NIDLRBG_1.nidLRBG;
  outC->_L30 = outC->_L1.source;
  outC->_L31 = msrc_Eurobalise_Common_Types_Pkg;
  outC->_L34 = outC->_L31 == outC->_L30;
  /* _L42= */
  if (outC->_L34) {
    outC->_L42 = outC->_L40;
  }
  else {
    outC->_L42 = outC->_L41;
  }
  outC->_L9.valid = outC->_L29;
  outC->_L9.source = outC->_L30;
  outC->_L9.nid_lrbg = outC->_L42;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L9.location, &outC->_L51);
  outC->_L9.contactLastKnownRBC = outC->_L48;
  outC->_L9.useTheShortNumberStoredOnboard = outC->_L50;
  kcg_copy_P131_RBCTransitionOrder_T_Packet_Types_Pkg(
    &outC->_L9.order,
    &outC->_L79);
  kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg(
    &outC->p131_RBCTransitionOrder_decoced,
    &outC->_L9);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->p42_terminateCmd_from_handingOverRBC,
    &outC->_L90);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->p45_radioNetworkRegistrationOrder,
    &outC->_L183);
}

#ifndef KCG_USER_DEFINED_INIT
void fishHandoverCmds_init_Handover_Pkg_handoverUtils_Pkg(
  outC_fishHandoverCmds_Handover_Pkg_handoverUtils_Pkg *outC)
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

  outC->_L187 = kcg_lit_int64(0);
  outC->_L186.valid = kcg_true;
  outC->_L186.source = msrc_undefined_Common_Types_Pkg;
  outC->_L186.radioMetadata.t_train_reference = kcg_true;
  outC->_L186.radioMetadata.nid_em = kcg_true;
  outC->_L186.radioMetadata.q_scale = kcg_true;
  outC->_L186.radioMetadata.d_sr = kcg_true;
  outC->_L186.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L186.radioMetadata.d_ref = kcg_true;
  outC->_L186.radioMetadata.q_dir = kcg_true;
  outC->_L186.radioMetadata.d_emergencystop = kcg_true;
  outC->_L186.radioMetadata.m_version = kcg_true;
  outC->_L186.BG_Common_Header.valid = kcg_true;
  outC->_L186.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L186.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L186.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L186.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L186.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L186.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L186.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L186.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L186.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L186.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L186.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L186.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L186.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L186.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L186.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L186.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L186.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L186.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L186.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L186.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L186.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L186.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L186.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L186.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L186.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L186.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L186.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L186.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L186.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L186.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L186.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L186.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L186.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L186.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L186.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L186.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L186.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L186.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L186.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L186.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L186.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L186.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx = 0; idx < 30; idx++) {
    outC->_L186.packets.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L186.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L186.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L186.packets.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L186.packets.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L186.packets.PacketData[idx1] = kcg_lit_int32(0);
  }
  outC->_L186.sendingRBC.valid = kcg_true;
  outC->_L186.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L186.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L186.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L185.valid = kcg_true;
  outC->_L185.source = msrc_undefined_Common_Types_Pkg;
  outC->_L185.radioMetadata.t_train_reference = kcg_true;
  outC->_L185.radioMetadata.nid_em = kcg_true;
  outC->_L185.radioMetadata.q_scale = kcg_true;
  outC->_L185.radioMetadata.d_sr = kcg_true;
  outC->_L185.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L185.radioMetadata.d_ref = kcg_true;
  outC->_L185.radioMetadata.q_dir = kcg_true;
  outC->_L185.radioMetadata.d_emergencystop = kcg_true;
  outC->_L185.radioMetadata.m_version = kcg_true;
  outC->_L185.BG_Common_Header.valid = kcg_true;
  outC->_L185.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L185.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L185.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L185.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L185.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L185.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L185.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L185.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L185.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L185.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L185.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L185.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L185.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L185.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L185.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L185.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L185.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L185.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L185.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L185.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L185.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L185.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L185.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L185.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L185.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L185.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L185.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L185.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L185.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L185.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L185.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L185.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L185.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L185.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L185.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L185.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L185.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L185.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L185.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L185.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L185.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L185.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L185.packets.PacketHeaders[idx2].nid_packet = kcg_lit_int32(0);
    outC->_L185.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L185.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L185.packets.PacketHeaders[idx2].startAddress = kcg_lit_int32(0);
    outC->_L185.packets.PacketHeaders[idx2].endAddress = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L185.packets.PacketData[idx3] = kcg_lit_int32(0);
  }
  outC->_L185.sendingRBC.valid = kcg_true;
  outC->_L185.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L185.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L185.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L184.valid = kcg_true;
  outC->_L184.source = msrc_undefined_Common_Types_Pkg;
  outC->_L184.radioMetadata.t_train_reference = kcg_true;
  outC->_L184.radioMetadata.nid_em = kcg_true;
  outC->_L184.radioMetadata.q_scale = kcg_true;
  outC->_L184.radioMetadata.d_sr = kcg_true;
  outC->_L184.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L184.radioMetadata.d_ref = kcg_true;
  outC->_L184.radioMetadata.q_dir = kcg_true;
  outC->_L184.radioMetadata.d_emergencystop = kcg_true;
  outC->_L184.radioMetadata.m_version = kcg_true;
  outC->_L184.BG_Common_Header.valid = kcg_true;
  outC->_L184.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L184.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L184.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L184.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L184.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L184.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L184.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L184.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L184.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L184.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L184.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L184.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L184.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L184.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L184.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L184.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L184.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L184.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L184.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L184.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L184.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L184.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L184.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L184.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L184.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L184.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L184.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L184.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L184.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L184.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L184.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L184.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L184.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L184.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L184.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L184.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L184.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L184.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L184.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L184.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L184.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L184.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L184.packets.PacketHeaders[idx4].nid_packet = kcg_lit_int32(0);
    outC->_L184.packets.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L184.packets.PacketHeaders[idx4].valid = kcg_true;
    outC->_L184.packets.PacketHeaders[idx4].startAddress = kcg_lit_int32(0);
    outC->_L184.packets.PacketHeaders[idx4].endAddress = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L184.packets.PacketData[idx5] = kcg_lit_int32(0);
  }
  outC->_L184.sendingRBC.valid = kcg_true;
  outC->_L184.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L184.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L184.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L183.valid = kcg_true;
  outC->_L183.source = msrc_undefined_Common_Types_Pkg;
  outC->_L183.radioMetadata.t_train_reference = kcg_true;
  outC->_L183.radioMetadata.nid_em = kcg_true;
  outC->_L183.radioMetadata.q_scale = kcg_true;
  outC->_L183.radioMetadata.d_sr = kcg_true;
  outC->_L183.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L183.radioMetadata.d_ref = kcg_true;
  outC->_L183.radioMetadata.q_dir = kcg_true;
  outC->_L183.radioMetadata.d_emergencystop = kcg_true;
  outC->_L183.radioMetadata.m_version = kcg_true;
  outC->_L183.BG_Common_Header.valid = kcg_true;
  outC->_L183.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L183.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L183.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L183.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L183.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L183.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L183.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L183.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L183.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L183.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L183.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L183.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L183.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L183.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L183.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L183.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L183.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L183.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L183.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L183.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L183.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L183.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L183.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L183.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L183.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L183.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L183.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L183.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L183.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L183.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L183.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L183.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L183.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L183.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L183.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L183.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L183.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L183.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L183.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L183.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L183.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L183.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->_L183.packets.PacketHeaders[idx6].nid_packet = kcg_lit_int32(0);
    outC->_L183.packets.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->_L183.packets.PacketHeaders[idx6].valid = kcg_true;
    outC->_L183.packets.PacketHeaders[idx6].startAddress = kcg_lit_int32(0);
    outC->_L183.packets.PacketHeaders[idx6].endAddress = kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->_L183.packets.PacketData[idx7] = kcg_lit_int32(0);
  }
  outC->_L183.sendingRBC.valid = kcg_true;
  outC->_L183.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L183.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L183.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L182.valid = kcg_true;
  outC->_L182.source = msrc_undefined_Common_Types_Pkg;
  outC->_L182.radioMetadata.t_train_reference = kcg_true;
  outC->_L182.radioMetadata.nid_em = kcg_true;
  outC->_L182.radioMetadata.q_scale = kcg_true;
  outC->_L182.radioMetadata.d_sr = kcg_true;
  outC->_L182.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L182.radioMetadata.d_ref = kcg_true;
  outC->_L182.radioMetadata.q_dir = kcg_true;
  outC->_L182.radioMetadata.d_emergencystop = kcg_true;
  outC->_L182.radioMetadata.m_version = kcg_true;
  outC->_L182.BG_Common_Header.valid = kcg_true;
  outC->_L182.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L182.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L182.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L182.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L182.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L182.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L182.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L182.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L182.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L182.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L182.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L182.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L182.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L182.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L182.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L182.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L182.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L182.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L182.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L182.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L182.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L182.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L182.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L182.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L182.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L182.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L182.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L182.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L182.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L182.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L182.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L182.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L182.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L182.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L182.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L182.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L182.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L182.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L182.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L182.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L182.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L182.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->_L182.packets.PacketHeaders[idx8].nid_packet = kcg_lit_int32(0);
    outC->_L182.packets.PacketHeaders[idx8].q_dir = Q_DIR_Reverse;
    outC->_L182.packets.PacketHeaders[idx8].valid = kcg_true;
    outC->_L182.packets.PacketHeaders[idx8].startAddress = kcg_lit_int32(0);
    outC->_L182.packets.PacketHeaders[idx8].endAddress = kcg_lit_int32(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->_L182.packets.PacketData[idx9] = kcg_lit_int32(0);
  }
  outC->_L182.sendingRBC.valid = kcg_true;
  outC->_L182.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L182.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L182.sendingRBC.device_id = kcg_lit_int32(0);
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->_L101.PacketHeaders[idx10].nid_packet = kcg_lit_int32(0);
    outC->_L101.PacketHeaders[idx10].q_dir = Q_DIR_Reverse;
    outC->_L101.PacketHeaders[idx10].valid = kcg_true;
    outC->_L101.PacketHeaders[idx10].startAddress = kcg_lit_int32(0);
    outC->_L101.PacketHeaders[idx10].endAddress = kcg_lit_int32(0);
  }
  for (idx11 = 0; idx11 < 500; idx11++) {
    outC->_L101.PacketData[idx11] = kcg_lit_int32(0);
  }
  outC->_L102 = kcg_true;
  outC->_L103.valid = kcg_true;
  outC->_L103.q_dir = Q_DIR_Reverse;
  outC->_L103.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L103.nid_c = kcg_lit_int32(0);
  outC->_L103.nid_rbc = kcg_lit_int32(0);
  outC->_L103.nid_radio = kcg_lit_int64(0);
  outC->_L103.q_sleepsession = Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L181.valid = kcg_true;
  outC->_L181.source = msrc_undefined_Common_Types_Pkg;
  outC->_L181.radioMetadata.t_train_reference = kcg_true;
  outC->_L181.radioMetadata.nid_em = kcg_true;
  outC->_L181.radioMetadata.q_scale = kcg_true;
  outC->_L181.radioMetadata.d_sr = kcg_true;
  outC->_L181.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L181.radioMetadata.d_ref = kcg_true;
  outC->_L181.radioMetadata.q_dir = kcg_true;
  outC->_L181.radioMetadata.d_emergencystop = kcg_true;
  outC->_L181.radioMetadata.m_version = kcg_true;
  outC->_L181.BG_Common_Header.valid = kcg_true;
  outC->_L181.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L181.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L181.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L181.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L181.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L181.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L181.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L181.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L181.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L181.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L181.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L181.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L181.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L181.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L181.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L181.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L181.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L181.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L181.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L181.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L181.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L181.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L181.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L181.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L181.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L181.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L181.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L181.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L181.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L181.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L181.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L181.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L181.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L181.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L181.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L181.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L181.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L181.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L181.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L181.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L181.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L181.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx12 = 0; idx12 < 30; idx12++) {
    outC->_L181.packets.PacketHeaders[idx12].nid_packet = kcg_lit_int32(0);
    outC->_L181.packets.PacketHeaders[idx12].q_dir = Q_DIR_Reverse;
    outC->_L181.packets.PacketHeaders[idx12].valid = kcg_true;
    outC->_L181.packets.PacketHeaders[idx12].startAddress = kcg_lit_int32(0);
    outC->_L181.packets.PacketHeaders[idx12].endAddress = kcg_lit_int32(0);
  }
  for (idx13 = 0; idx13 < 500; idx13++) {
    outC->_L181.packets.PacketData[idx13] = kcg_lit_int32(0);
  }
  outC->_L181.sendingRBC.valid = kcg_true;
  outC->_L181.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L181.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L181.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L180.valid = kcg_true;
  outC->_L180.source = msrc_undefined_Common_Types_Pkg;
  outC->_L180.radioMetadata.t_train_reference = kcg_true;
  outC->_L180.radioMetadata.nid_em = kcg_true;
  outC->_L180.radioMetadata.q_scale = kcg_true;
  outC->_L180.radioMetadata.d_sr = kcg_true;
  outC->_L180.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L180.radioMetadata.d_ref = kcg_true;
  outC->_L180.radioMetadata.q_dir = kcg_true;
  outC->_L180.radioMetadata.d_emergencystop = kcg_true;
  outC->_L180.radioMetadata.m_version = kcg_true;
  outC->_L180.BG_Common_Header.valid = kcg_true;
  outC->_L180.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L180.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L180.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L180.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L180.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L180.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L180.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L180.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L180.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L180.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L180.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L180.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L180.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L180.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L180.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L180.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L180.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L180.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L180.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L180.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L180.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L180.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L180.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L180.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L180.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L180.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L180.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L180.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L180.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L180.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L180.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L180.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L180.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L180.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L180.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L180.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L180.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L180.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L180.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L180.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L180.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L180.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx14 = 0; idx14 < 30; idx14++) {
    outC->_L180.packets.PacketHeaders[idx14].nid_packet = kcg_lit_int32(0);
    outC->_L180.packets.PacketHeaders[idx14].q_dir = Q_DIR_Reverse;
    outC->_L180.packets.PacketHeaders[idx14].valid = kcg_true;
    outC->_L180.packets.PacketHeaders[idx14].startAddress = kcg_lit_int32(0);
    outC->_L180.packets.PacketHeaders[idx14].endAddress = kcg_lit_int32(0);
  }
  for (idx15 = 0; idx15 < 500; idx15++) {
    outC->_L180.packets.PacketData[idx15] = kcg_lit_int32(0);
  }
  outC->_L180.sendingRBC.valid = kcg_true;
  outC->_L180.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L180.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L180.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L179 = kcg_true;
  outC->_L178 = kcg_true;
  outC->_L177 = kcg_true;
  outC->_L176 = kcg_true;
  outC->_L174 = kcg_true;
  outC->_L173 = kcg_true;
  outC->_L172 = kcg_true;
  outC->_L171 = kcg_true;
  outC->_L170 = kcg_lit_int32(0);
  outC->_L169 = kcg_lit_int32(0);
  outC->_L168 = kcg_lit_int32(0);
  outC->_L167 = kcg_lit_int32(0);
  outC->_L166.radioDevice = kcg_lit_int32(0);
  outC->_L166.receivedSystemTime = kcg_lit_int32(0);
  outC->_L166.nid_message = kcg_lit_int32(0);
  outC->_L166.t_train = kcg_lit_int32(0);
  outC->_L166.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L166.nid_lrbg = kcg_lit_int32(0);
  outC->_L166.t_train_reference = kcg_lit_int32(0);
  outC->_L166.nid_em = kcg_lit_int32(0);
  outC->_L166.q_scale = Q_SCALE_10_cm_scale;
  outC->_L166.d_sr = kcg_lit_int32(0);
  outC->_L166.t_sh_rqst = kcg_lit_int32(0);
  outC->_L166.d_ref = kcg_lit_int32(0);
  outC->_L166.q_dir = Q_DIR_Reverse;
  outC->_L166.d_emergencystop = kcg_lit_int32(0);
  outC->_L166.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L165 = msrc_undefined_Common_Types_Pkg;
  outC->_L164 = kcg_true;
  outC->_L163 = msrc_undefined_Common_Types_Pkg;
  outC->_L162 = kcg_true;
  for (idx16 = 0; idx16 < 30; idx16++) {
    outC->_L113.PacketHeaders[idx16].nid_packet = kcg_lit_int32(0);
    outC->_L113.PacketHeaders[idx16].q_dir = Q_DIR_Reverse;
    outC->_L113.PacketHeaders[idx16].valid = kcg_true;
    outC->_L113.PacketHeaders[idx16].startAddress = kcg_lit_int32(0);
    outC->_L113.PacketHeaders[idx16].endAddress = kcg_lit_int32(0);
  }
  for (idx17 = 0; idx17 < 500; idx17++) {
    outC->_L113.PacketData[idx17] = kcg_lit_int32(0);
  }
  outC->_L115.valid = kcg_true;
  outC->_L115.q_dir = Q_DIR_Reverse;
  outC->_L115.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L115.nid_c = kcg_lit_int32(0);
  outC->_L115.nid_rbc = kcg_lit_int32(0);
  outC->_L115.nid_radio = kcg_lit_int64(0);
  outC->_L115.q_sleepsession = Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L114 = kcg_true;
  outC->_L112 = kcg_true;
  outC->_L109 = kcg_true;
  outC->_L108 = kcg_true;
  outC->_L107.valid = kcg_true;
  outC->_L107.source = msrc_undefined_Common_Types_Pkg;
  outC->_L107.radioMetadata.t_train_reference = kcg_true;
  outC->_L107.radioMetadata.nid_em = kcg_true;
  outC->_L107.radioMetadata.q_scale = kcg_true;
  outC->_L107.radioMetadata.d_sr = kcg_true;
  outC->_L107.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L107.radioMetadata.d_ref = kcg_true;
  outC->_L107.radioMetadata.q_dir = kcg_true;
  outC->_L107.radioMetadata.d_emergencystop = kcg_true;
  outC->_L107.radioMetadata.m_version = kcg_true;
  outC->_L107.BG_Common_Header.valid = kcg_true;
  outC->_L107.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L107.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L107.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L107.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L107.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L107.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L107.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L107.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L107.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L107.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L107.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L107.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L107.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L107.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L107.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L107.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L107.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L107.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L107.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L107.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L107.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L107.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L107.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L107.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L107.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L107.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L107.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L107.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L107.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L107.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L107.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L107.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L107.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L107.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L107.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L107.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L107.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L107.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L107.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L107.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L107.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L107.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx18 = 0; idx18 < 30; idx18++) {
    outC->_L107.packets.PacketHeaders[idx18].nid_packet = kcg_lit_int32(0);
    outC->_L107.packets.PacketHeaders[idx18].q_dir = Q_DIR_Reverse;
    outC->_L107.packets.PacketHeaders[idx18].valid = kcg_true;
    outC->_L107.packets.PacketHeaders[idx18].startAddress = kcg_lit_int32(0);
    outC->_L107.packets.PacketHeaders[idx18].endAddress = kcg_lit_int32(0);
  }
  for (idx19 = 0; idx19 < 500; idx19++) {
    outC->_L107.packets.PacketData[idx19] = kcg_lit_int32(0);
  }
  outC->_L107.sendingRBC.valid = kcg_true;
  outC->_L107.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L107.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L107.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L105 = kcg_true;
  outC->_L99 = kcg_true;
  outC->_L100 = msrc_undefined_Common_Types_Pkg;
  outC->_L98 = msrc_undefined_Common_Types_Pkg;
  outC->_L97 = kcg_true;
  outC->_L89 = kcg_true;
  outC->_L90.valid = kcg_true;
  outC->_L90.source = msrc_undefined_Common_Types_Pkg;
  outC->_L90.radioMetadata.t_train_reference = kcg_true;
  outC->_L90.radioMetadata.nid_em = kcg_true;
  outC->_L90.radioMetadata.q_scale = kcg_true;
  outC->_L90.radioMetadata.d_sr = kcg_true;
  outC->_L90.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L90.radioMetadata.d_ref = kcg_true;
  outC->_L90.radioMetadata.q_dir = kcg_true;
  outC->_L90.radioMetadata.d_emergencystop = kcg_true;
  outC->_L90.radioMetadata.m_version = kcg_true;
  outC->_L90.BG_Common_Header.valid = kcg_true;
  outC->_L90.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L90.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L90.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L90.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L90.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L90.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L90.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L90.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L90.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L90.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L90.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L90.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L90.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L90.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L90.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L90.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L90.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L90.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L90.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L90.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L90.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L90.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L90.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L90.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L90.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L90.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L90.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L90.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L90.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L90.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L90.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L90.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L90.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L90.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L90.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L90.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L90.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L90.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L90.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L90.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L90.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L90.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx20 = 0; idx20 < 30; idx20++) {
    outC->_L90.packets.PacketHeaders[idx20].nid_packet = kcg_lit_int32(0);
    outC->_L90.packets.PacketHeaders[idx20].q_dir = Q_DIR_Reverse;
    outC->_L90.packets.PacketHeaders[idx20].valid = kcg_true;
    outC->_L90.packets.PacketHeaders[idx20].startAddress = kcg_lit_int32(0);
    outC->_L90.packets.PacketHeaders[idx20].endAddress = kcg_lit_int32(0);
  }
  for (idx21 = 0; idx21 < 500; idx21++) {
    outC->_L90.packets.PacketData[idx21] = kcg_lit_int32(0);
  }
  outC->_L90.sendingRBC.valid = kcg_true;
  outC->_L90.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L90.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L90.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L91 = Q_RBC_Terminate_communication_session;
  outC->_L92 = kcg_true;
  outC->_L94 = kcg_true;
  outC->_L95 = Q_RBC_Terminate_communication_session;
  outC->_L79.valid = kcg_true;
  outC->_L79.q_dir = Q_DIR_Reverse;
  outC->_L79.q_scale = Q_SCALE_10_cm_scale;
  outC->_L79.d_rbctr = kcg_lit_int32(0);
  outC->_L79.nid_c = kcg_lit_int32(0);
  outC->_L79.nid_rbc = kcg_lit_int32(0);
  outC->_L79.nid_radio = kcg_lit_int64(0);
  outC->_L79.q_sleepsession = Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L78.valid = kcg_true;
  outC->_L78.q_dir = Q_DIR_Reverse;
  outC->_L78.nid_mn = kcg_lit_int32(0);
  outC->_L51.nominal = kcg_lit_int32(0);
  outC->_L51.d_min = kcg_lit_int32(0);
  outC->_L51.d_max = kcg_lit_int32(0);
  outC->_L50 = kcg_true;
  outC->_L49 = kcg_lit_int64(0);
  outC->_L48 = kcg_true;
  for (idx22 = 0; idx22 < 30; idx22++) {
    outC->_L47.PacketHeaders[idx22].nid_packet = kcg_lit_int32(0);
    outC->_L47.PacketHeaders[idx22].q_dir = Q_DIR_Reverse;
    outC->_L47.PacketHeaders[idx22].valid = kcg_true;
    outC->_L47.PacketHeaders[idx22].startAddress = kcg_lit_int32(0);
    outC->_L47.PacketHeaders[idx22].endAddress = kcg_lit_int32(0);
  }
  for (idx23 = 0; idx23 < 500; idx23++) {
    outC->_L47.PacketData[idx23] = kcg_lit_int32(0);
  }
  outC->_L46 = kcg_lit_int32(0);
  outC->_L45 = kcg_lit_int32(0);
  outC->_L43 = kcg_lit_int32(0);
  outC->_L42 = kcg_lit_int32(0);
  outC->_L41 = kcg_lit_int32(0);
  outC->_L40 = kcg_lit_int32(0);
  outC->_L39 = kcg_lit_int32(0);
  outC->_L37 = kcg_lit_int32(0);
  outC->_L36 = kcg_true;
  outC->_L35.valid = kcg_true;
  outC->_L35.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L35.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L35.q_media = Q_MEDIA_Balise;
  outC->_L35.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L35.m_mcount = kcg_lit_int32(0);
  outC->_L35.nid_c = kcg_lit_int32(0);
  outC->_L35.nid_bg = kcg_lit_int32(0);
  outC->_L35.q_link = Q_LINK_Unlinked;
  outC->_L35.bgPosition.valid = kcg_true;
  outC->_L35.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L35.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L35.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L35.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L35.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L35.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L35.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L35.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L35.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L35.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L35.bgPosition.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L35.BG_centerDetectionInaccuraccuracies.nominal = kcg_lit_int32(0);
  outC->_L35.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int32(0);
  outC->_L35.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int32(0);
  outC->_L35.q_nvlocacc = kcg_lit_int32(0);
  outC->_L35.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L35.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L35.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L31 = msrc_undefined_Common_Types_Pkg;
  outC->_L34 = kcg_true;
  outC->_L30 = msrc_undefined_Common_Types_Pkg;
  outC->_L29 = kcg_true;
  outC->_L28 = kcg_true;
  outC->_L27 = kcg_true;
  outC->_L9.valid = kcg_true;
  outC->_L9.source = msrc_undefined_Common_Types_Pkg;
  outC->_L9.nid_lrbg = kcg_lit_int32(0);
  outC->_L9.location.nominal = kcg_lit_int32(0);
  outC->_L9.location.d_min = kcg_lit_int32(0);
  outC->_L9.location.d_max = kcg_lit_int32(0);
  outC->_L9.contactLastKnownRBC = kcg_true;
  outC->_L9.useTheShortNumberStoredOnboard = kcg_true;
  outC->_L9.order.valid = kcg_true;
  outC->_L9.order.q_dir = Q_DIR_Reverse;
  outC->_L9.order.q_scale = Q_SCALE_10_cm_scale;
  outC->_L9.order.d_rbctr = kcg_lit_int32(0);
  outC->_L9.order.nid_c = kcg_lit_int32(0);
  outC->_L9.order.nid_rbc = kcg_lit_int32(0);
  outC->_L9.order.nid_radio = kcg_lit_int64(0);
  outC->_L9.order.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L8 = kcg_true;
  for (idx24 = 0; idx24 < 30; idx24++) {
    outC->_L7.PacketHeaders[idx24].nid_packet = kcg_lit_int32(0);
    outC->_L7.PacketHeaders[idx24].q_dir = Q_DIR_Reverse;
    outC->_L7.PacketHeaders[idx24].valid = kcg_true;
    outC->_L7.PacketHeaders[idx24].startAddress = kcg_lit_int32(0);
    outC->_L7.PacketHeaders[idx24].endAddress = kcg_lit_int32(0);
  }
  for (idx25 = 0; idx25 < 500; idx25++) {
    outC->_L7.PacketData[idx25] = kcg_lit_int32(0);
  }
  outC->_L6 = kcg_true;
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
  outC->_L1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L1.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L1.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx26 = 0; idx26 < 30; idx26++) {
    outC->_L1.packets.PacketHeaders[idx26].nid_packet = kcg_lit_int32(0);
    outC->_L1.packets.PacketHeaders[idx26].q_dir = Q_DIR_Reverse;
    outC->_L1.packets.PacketHeaders[idx26].valid = kcg_true;
    outC->_L1.packets.PacketHeaders[idx26].startAddress = kcg_lit_int32(0);
    outC->_L1.packets.PacketHeaders[idx26].endAddress = kcg_lit_int32(0);
  }
  for (idx27 = 0; idx27 < 500; idx27++) {
    outC->_L1.packets.PacketData[idx27] = kcg_lit_int32(0);
  }
  outC->_L1.sendingRBC.valid = kcg_true;
  outC->_L1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L1.sendingRBC.device_id = kcg_lit_int32(0);
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
  for (idx28 = 0; idx28 < 30; idx28++) {
    outC->_L4.packets.PacketHeaders[idx28].nid_packet = kcg_lit_int32(0);
    outC->_L4.packets.PacketHeaders[idx28].q_dir = Q_DIR_Reverse;
    outC->_L4.packets.PacketHeaders[idx28].valid = kcg_true;
    outC->_L4.packets.PacketHeaders[idx28].startAddress = kcg_lit_int32(0);
    outC->_L4.packets.PacketHeaders[idx28].endAddress = kcg_lit_int32(0);
  }
  for (idx29 = 0; idx29 < 500; idx29++) {
    outC->_L4.packets.PacketData[idx29] = kcg_lit_int32(0);
  }
  outC->_L4.sendingRBC.valid = kcg_true;
  outC->_L4.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L4.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L4.sendingRBC.device_id = kcg_lit_int32(0);
  outC->handoverRelevantCmdValid = kcg_true;
  outC->sessionCmdsFromTrack.valid = kcg_true;
  outC->sessionCmdsFromTrack.source = msrc_undefined_Common_Types_Pkg;
  outC->sessionCmdsFromTrack.radioMetadata.t_train_reference = kcg_true;
  outC->sessionCmdsFromTrack.radioMetadata.nid_em = kcg_true;
  outC->sessionCmdsFromTrack.radioMetadata.q_scale = kcg_true;
  outC->sessionCmdsFromTrack.radioMetadata.d_sr = kcg_true;
  outC->sessionCmdsFromTrack.radioMetadata.t_sh_rqst = kcg_true;
  outC->sessionCmdsFromTrack.radioMetadata.d_ref = kcg_true;
  outC->sessionCmdsFromTrack.radioMetadata.q_dir = kcg_true;
  outC->sessionCmdsFromTrack.radioMetadata.d_emergencystop = kcg_true;
  outC->sessionCmdsFromTrack.radioMetadata.m_version = kcg_true;
  outC->sessionCmdsFromTrack.BG_Common_Header.valid = kcg_true;
  outC->sessionCmdsFromTrack.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->sessionCmdsFromTrack.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->sessionCmdsFromTrack.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->sessionCmdsFromTrack.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->sessionCmdsFromTrack.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->sessionCmdsFromTrack.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->sessionCmdsFromTrack.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->sessionCmdsFromTrack.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->sessionCmdsFromTrack.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->sessionCmdsFromTrack.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->sessionCmdsFromTrack.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->sessionCmdsFromTrack.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->sessionCmdsFromTrack.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->sessionCmdsFromTrack.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->sessionCmdsFromTrack.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->sessionCmdsFromTrack.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->sessionCmdsFromTrack.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->sessionCmdsFromTrack.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->sessionCmdsFromTrack.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->sessionCmdsFromTrack.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->sessionCmdsFromTrack.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->sessionCmdsFromTrack.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->sessionCmdsFromTrack.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->sessionCmdsFromTrack.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->sessionCmdsFromTrack.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->sessionCmdsFromTrack.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->sessionCmdsFromTrack.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->sessionCmdsFromTrack.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->sessionCmdsFromTrack.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->sessionCmdsFromTrack.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->sessionCmdsFromTrack.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->sessionCmdsFromTrack.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->sessionCmdsFromTrack.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->sessionCmdsFromTrack.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->sessionCmdsFromTrack.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->sessionCmdsFromTrack.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->sessionCmdsFromTrack.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->sessionCmdsFromTrack.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->sessionCmdsFromTrack.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->sessionCmdsFromTrack.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->sessionCmdsFromTrack.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->sessionCmdsFromTrack.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx30 = 0; idx30 < 30; idx30++) {
    outC->sessionCmdsFromTrack.packets.PacketHeaders[idx30].nid_packet =
      kcg_lit_int32(0);
    outC->sessionCmdsFromTrack.packets.PacketHeaders[idx30].q_dir = Q_DIR_Reverse;
    outC->sessionCmdsFromTrack.packets.PacketHeaders[idx30].valid = kcg_true;
    outC->sessionCmdsFromTrack.packets.PacketHeaders[idx30].startAddress =
      kcg_lit_int32(0);
    outC->sessionCmdsFromTrack.packets.PacketHeaders[idx30].endAddress =
      kcg_lit_int32(0);
  }
  for (idx31 = 0; idx31 < 500; idx31++) {
    outC->sessionCmdsFromTrack.packets.PacketData[idx31] = kcg_lit_int32(0);
  }
  outC->sessionCmdsFromTrack.sendingRBC.valid = kcg_true;
  outC->sessionCmdsFromTrack.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->sessionCmdsFromTrack.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->sessionCmdsFromTrack.sendingRBC.device_id = kcg_lit_int32(0);
  outC->p42_terminateCmd_from_handingOverRBC.valid = kcg_true;
  outC->p42_terminateCmd_from_handingOverRBC.source =
    msrc_undefined_Common_Types_Pkg;
  outC->p42_terminateCmd_from_handingOverRBC.radioMetadata.t_train_reference =
    kcg_true;
  outC->p42_terminateCmd_from_handingOverRBC.radioMetadata.nid_em = kcg_true;
  outC->p42_terminateCmd_from_handingOverRBC.radioMetadata.q_scale = kcg_true;
  outC->p42_terminateCmd_from_handingOverRBC.radioMetadata.d_sr = kcg_true;
  outC->p42_terminateCmd_from_handingOverRBC.radioMetadata.t_sh_rqst = kcg_true;
  outC->p42_terminateCmd_from_handingOverRBC.radioMetadata.d_ref = kcg_true;
  outC->p42_terminateCmd_from_handingOverRBC.radioMetadata.q_dir = kcg_true;
  outC->p42_terminateCmd_from_handingOverRBC.radioMetadata.d_emergencystop =
    kcg_true;
  outC->p42_terminateCmd_from_handingOverRBC.radioMetadata.m_version = kcg_true;
  outC->p42_terminateCmd_from_handingOverRBC.BG_Common_Header.valid = kcg_true;
  outC->p42_terminateCmd_from_handingOverRBC.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->p42_terminateCmd_from_handingOverRBC.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->p42_terminateCmd_from_handingOverRBC.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->p42_terminateCmd_from_handingOverRBC.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->p42_terminateCmd_from_handingOverRBC.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->p42_terminateCmd_from_handingOverRBC.BG_Common_Header.nid_c =
    kcg_lit_int32(0);
  outC->p42_terminateCmd_from_handingOverRBC.BG_Common_Header.nid_bg =
    kcg_lit_int32(0);
  outC->p42_terminateCmd_from_handingOverRBC.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->p42_terminateCmd_from_handingOverRBC.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->p42_terminateCmd_from_handingOverRBC.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->p42_terminateCmd_from_handingOverRBC.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->p42_terminateCmd_from_handingOverRBC.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->p42_terminateCmd_from_handingOverRBC.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->p42_terminateCmd_from_handingOverRBC.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->p42_terminateCmd_from_handingOverRBC.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->p42_terminateCmd_from_handingOverRBC.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->p42_terminateCmd_from_handingOverRBC.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->p42_terminateCmd_from_handingOverRBC.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->p42_terminateCmd_from_handingOverRBC.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->p42_terminateCmd_from_handingOverRBC.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->p42_terminateCmd_from_handingOverRBC.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->p42_terminateCmd_from_handingOverRBC.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->p42_terminateCmd_from_handingOverRBC.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->p42_terminateCmd_from_handingOverRBC.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->p42_terminateCmd_from_handingOverRBC.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->p42_terminateCmd_from_handingOverRBC.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->p42_terminateCmd_from_handingOverRBC.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->p42_terminateCmd_from_handingOverRBC.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->p42_terminateCmd_from_handingOverRBC.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->p42_terminateCmd_from_handingOverRBC.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->p42_terminateCmd_from_handingOverRBC.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->p42_terminateCmd_from_handingOverRBC.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->p42_terminateCmd_from_handingOverRBC.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->p42_terminateCmd_from_handingOverRBC.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->p42_terminateCmd_from_handingOverRBC.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->p42_terminateCmd_from_handingOverRBC.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->p42_terminateCmd_from_handingOverRBC.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->p42_terminateCmd_from_handingOverRBC.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->p42_terminateCmd_from_handingOverRBC.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->p42_terminateCmd_from_handingOverRBC.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->p42_terminateCmd_from_handingOverRBC.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->p42_terminateCmd_from_handingOverRBC.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx32 = 0; idx32 < 30; idx32++) {
    outC->p42_terminateCmd_from_handingOverRBC.packets.PacketHeaders[idx32].nid_packet =
      kcg_lit_int32(0);
    outC->p42_terminateCmd_from_handingOverRBC.packets.PacketHeaders[idx32].q_dir =
      Q_DIR_Reverse;
    outC->p42_terminateCmd_from_handingOverRBC.packets.PacketHeaders[idx32].valid =
      kcg_true;
    outC->p42_terminateCmd_from_handingOverRBC.packets.PacketHeaders[idx32].startAddress =
      kcg_lit_int32(0);
    outC->p42_terminateCmd_from_handingOverRBC.packets.PacketHeaders[idx32].endAddress =
      kcg_lit_int32(0);
  }
  for (idx33 = 0; idx33 < 500; idx33++) {
    outC->p42_terminateCmd_from_handingOverRBC.packets.PacketData[idx33] =
      kcg_lit_int32(0);
  }
  outC->p42_terminateCmd_from_handingOverRBC.sendingRBC.valid = kcg_true;
  outC->p42_terminateCmd_from_handingOverRBC.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->p42_terminateCmd_from_handingOverRBC.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->p42_terminateCmd_from_handingOverRBC.sendingRBC.device_id =
    kcg_lit_int32(0);
  outC->p131_RBCTransitionOrder.valid = kcg_true;
  outC->p131_RBCTransitionOrder.source = msrc_undefined_Common_Types_Pkg;
  outC->p131_RBCTransitionOrder.radioMetadata.t_train_reference = kcg_true;
  outC->p131_RBCTransitionOrder.radioMetadata.nid_em = kcg_true;
  outC->p131_RBCTransitionOrder.radioMetadata.q_scale = kcg_true;
  outC->p131_RBCTransitionOrder.radioMetadata.d_sr = kcg_true;
  outC->p131_RBCTransitionOrder.radioMetadata.t_sh_rqst = kcg_true;
  outC->p131_RBCTransitionOrder.radioMetadata.d_ref = kcg_true;
  outC->p131_RBCTransitionOrder.radioMetadata.q_dir = kcg_true;
  outC->p131_RBCTransitionOrder.radioMetadata.d_emergencystop = kcg_true;
  outC->p131_RBCTransitionOrder.radioMetadata.m_version = kcg_true;
  outC->p131_RBCTransitionOrder.BG_Common_Header.valid = kcg_true;
  outC->p131_RBCTransitionOrder.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->p131_RBCTransitionOrder.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->p131_RBCTransitionOrder.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->p131_RBCTransitionOrder.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->p131_RBCTransitionOrder.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->p131_RBCTransitionOrder.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->p131_RBCTransitionOrder.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->p131_RBCTransitionOrder.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->p131_RBCTransitionOrder.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->p131_RBCTransitionOrder.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->p131_RBCTransitionOrder.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->p131_RBCTransitionOrder.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->p131_RBCTransitionOrder.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->p131_RBCTransitionOrder.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->p131_RBCTransitionOrder.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->p131_RBCTransitionOrder.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->p131_RBCTransitionOrder.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->p131_RBCTransitionOrder.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->p131_RBCTransitionOrder.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->p131_RBCTransitionOrder.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->p131_RBCTransitionOrder.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->p131_RBCTransitionOrder.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->p131_RBCTransitionOrder.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->p131_RBCTransitionOrder.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->p131_RBCTransitionOrder.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->p131_RBCTransitionOrder.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->p131_RBCTransitionOrder.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->p131_RBCTransitionOrder.Radio_Common_Header.radioDevice = kcg_lit_int32(
      0);
  outC->p131_RBCTransitionOrder.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->p131_RBCTransitionOrder.Radio_Common_Header.nid_message = kcg_lit_int32(
      0);
  outC->p131_RBCTransitionOrder.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->p131_RBCTransitionOrder.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->p131_RBCTransitionOrder.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->p131_RBCTransitionOrder.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->p131_RBCTransitionOrder.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->p131_RBCTransitionOrder.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->p131_RBCTransitionOrder.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->p131_RBCTransitionOrder.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->p131_RBCTransitionOrder.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->p131_RBCTransitionOrder.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->p131_RBCTransitionOrder.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->p131_RBCTransitionOrder.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx34 = 0; idx34 < 30; idx34++) {
    outC->p131_RBCTransitionOrder.packets.PacketHeaders[idx34].nid_packet =
      kcg_lit_int32(0);
    outC->p131_RBCTransitionOrder.packets.PacketHeaders[idx34].q_dir =
      Q_DIR_Reverse;
    outC->p131_RBCTransitionOrder.packets.PacketHeaders[idx34].valid = kcg_true;
    outC->p131_RBCTransitionOrder.packets.PacketHeaders[idx34].startAddress =
      kcg_lit_int32(0);
    outC->p131_RBCTransitionOrder.packets.PacketHeaders[idx34].endAddress =
      kcg_lit_int32(0);
  }
  for (idx35 = 0; idx35 < 500; idx35++) {
    outC->p131_RBCTransitionOrder.packets.PacketData[idx35] = kcg_lit_int32(0);
  }
  outC->p131_RBCTransitionOrder.sendingRBC.valid = kcg_true;
  outC->p131_RBCTransitionOrder.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->p131_RBCTransitionOrder.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->p131_RBCTransitionOrder.sendingRBC.device_id = kcg_lit_int32(0);
  outC->p131_RBCTransitionOrder_decoced.valid = kcg_true;
  outC->p131_RBCTransitionOrder_decoced.source = msrc_undefined_Common_Types_Pkg;
  outC->p131_RBCTransitionOrder_decoced.nid_lrbg = kcg_lit_int32(0);
  outC->p131_RBCTransitionOrder_decoced.location.nominal = kcg_lit_int32(0);
  outC->p131_RBCTransitionOrder_decoced.location.d_min = kcg_lit_int32(0);
  outC->p131_RBCTransitionOrder_decoced.location.d_max = kcg_lit_int32(0);
  outC->p131_RBCTransitionOrder_decoced.contactLastKnownRBC = kcg_true;
  outC->p131_RBCTransitionOrder_decoced.useTheShortNumberStoredOnboard = kcg_true;
  outC->p131_RBCTransitionOrder_decoced.order.valid = kcg_true;
  outC->p131_RBCTransitionOrder_decoced.order.q_dir = Q_DIR_Reverse;
  outC->p131_RBCTransitionOrder_decoced.order.q_scale = Q_SCALE_10_cm_scale;
  outC->p131_RBCTransitionOrder_decoced.order.d_rbctr = kcg_lit_int32(0);
  outC->p131_RBCTransitionOrder_decoced.order.nid_c = kcg_lit_int32(0);
  outC->p131_RBCTransitionOrder_decoced.order.nid_rbc = kcg_lit_int32(0);
  outC->p131_RBCTransitionOrder_decoced.order.nid_radio = kcg_lit_int64(0);
  outC->p131_RBCTransitionOrder_decoced.order.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->p45_radioNetworkRegistrationOrder.valid = kcg_true;
  outC->p45_radioNetworkRegistrationOrder.source =
    msrc_undefined_Common_Types_Pkg;
  outC->p45_radioNetworkRegistrationOrder.radioMetadata.t_train_reference =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder.radioMetadata.nid_em = kcg_true;
  outC->p45_radioNetworkRegistrationOrder.radioMetadata.q_scale = kcg_true;
  outC->p45_radioNetworkRegistrationOrder.radioMetadata.d_sr = kcg_true;
  outC->p45_radioNetworkRegistrationOrder.radioMetadata.t_sh_rqst = kcg_true;
  outC->p45_radioNetworkRegistrationOrder.radioMetadata.d_ref = kcg_true;
  outC->p45_radioNetworkRegistrationOrder.radioMetadata.q_dir = kcg_true;
  outC->p45_radioNetworkRegistrationOrder.radioMetadata.d_emergencystop =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder.radioMetadata.m_version = kcg_true;
  outC->p45_radioNetworkRegistrationOrder.BG_Common_Header.valid = kcg_true;
  outC->p45_radioNetworkRegistrationOrder.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->p45_radioNetworkRegistrationOrder.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->p45_radioNetworkRegistrationOrder.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->p45_radioNetworkRegistrationOrder.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->p45_radioNetworkRegistrationOrder.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder.BG_Common_Header.nid_c =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder.BG_Common_Header.nid_bg =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->p45_radioNetworkRegistrationOrder.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->p45_radioNetworkRegistrationOrder.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->p45_radioNetworkRegistrationOrder.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->p45_radioNetworkRegistrationOrder.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->p45_radioNetworkRegistrationOrder.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->p45_radioNetworkRegistrationOrder.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->p45_radioNetworkRegistrationOrder.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->p45_radioNetworkRegistrationOrder.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx36 = 0; idx36 < 30; idx36++) {
    outC->p45_radioNetworkRegistrationOrder.packets.PacketHeaders[idx36].nid_packet =
      kcg_lit_int32(0);
    outC->p45_radioNetworkRegistrationOrder.packets.PacketHeaders[idx36].q_dir =
      Q_DIR_Reverse;
    outC->p45_radioNetworkRegistrationOrder.packets.PacketHeaders[idx36].valid =
      kcg_true;
    outC->p45_radioNetworkRegistrationOrder.packets.PacketHeaders[idx36].startAddress =
      kcg_lit_int32(0);
    outC->p45_radioNetworkRegistrationOrder.packets.PacketHeaders[idx36].endAddress =
      kcg_lit_int32(0);
  }
  for (idx37 = 0; idx37 < 500; idx37++) {
    outC->p45_radioNetworkRegistrationOrder.packets.PacketData[idx37] =
      kcg_lit_int32(0);
  }
  outC->p45_radioNetworkRegistrationOrder.sendingRBC.valid = kcg_true;
  outC->p45_radioNetworkRegistrationOrder.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder.sendingRBC.device_id = kcg_lit_int32(0);
  /* _L40=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidC_nidBG_2_NIDLRBG#1)/ */
  nidC_nidBG_2_NIDLRBG_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_nidC_nidBG_2_NIDLRBG_1);
  /* _L114=(TM::Read_P042#2)/ */ Read_P042_init_TM(&outC->Context_Read_P042_2);
  /* _L6=(TM::Read_P045#1)/ */ Read_P045_init_TM(&outC->Context_Read_P045_1);
  /* _L8=(TM::Read_P131#1)/ */ Read_P131_init_TM(&outC->Context_Read_P131_1);
  /* _L102=(TM::Read_P042#1)/ */ Read_P042_init_TM(&outC->Context_Read_P042_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void fishHandoverCmds_reset_Handover_Pkg_handoverUtils_Pkg(
  outC_fishHandoverCmds_Handover_Pkg_handoverUtils_Pkg *outC)
{
  /* _L40=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidC_nidBG_2_NIDLRBG#1)/ */
  nidC_nidBG_2_NIDLRBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_nidC_nidBG_2_NIDLRBG_1);
  /* _L114=(TM::Read_P042#2)/ */ Read_P042_reset_TM(&outC->Context_Read_P042_2);
  /* _L6=(TM::Read_P045#1)/ */ Read_P045_reset_TM(&outC->Context_Read_P045_1);
  /* _L8=(TM::Read_P131#1)/ */ Read_P131_reset_TM(&outC->Context_Read_P131_1);
  /* _L102=(TM::Read_P042#1)/ */ Read_P042_reset_TM(&outC->Context_Read_P042_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** fishHandoverCmds_Handover_Pkg_handoverUtils_Pkg.c
** Generation date: 2023-11-06T13:54:31
*************************************************************$ */

