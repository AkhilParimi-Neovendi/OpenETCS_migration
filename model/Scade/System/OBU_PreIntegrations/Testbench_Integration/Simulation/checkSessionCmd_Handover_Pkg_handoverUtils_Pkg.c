/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkSessionCmd_Handover_Pkg_handoverUtils_Pkg.h"

/* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd/ */
void checkSessionCmd_Handover_Pkg_handoverUtils_Pkg(
  /* p42_sessionCmd_in/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg *p42_sessionCmd_in,
  /* currentMoRCStatus/ */
  morcStatus_T_RCM_Session_Types_Pkg *currentMoRCStatus,
  outC_checkSessionCmd_Handover_Pkg_handoverUtils_Pkg *outC)
{
  outC->_L54 = sp_maintaining_RCM_Session_Types_Pkg;
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&outC->_L5, currentMoRCStatus);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&outC->_L50, &outC->_L5.session);
  outC->_L53 = outC->_L50.phase;
  outC->_L52 = mcs_connected_RCM_Types_Pkg;
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &outC->_L49,
    &outC->_L5.connection);
  outC->_L51 = outC->_L49.status;
  outC->_L48 = mrs_registered_RCM_Types_Pkg;
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &outC->_L47,
    &outC->_L5.registration);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->_L46,
    (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&outC->_L21, p42_sessionCmd_in);
  outC->_L45 = outC->_L21.valid;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L42, &outC->_L21.packets);
  /* _L43=(TM::Read_P042#1)/ */
  Read_P042_TM(&outC->_L42, &outC->Context_Read_P042_1);
  outC->_L43 = outC->Context_Read_P042_1.received;
  kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg(
    &outC->_L44,
    &outC->Context_Read_P042_1.P042_OBU_out);
  outC->_L35 = outC->_L44.nid_rbc;
  outC->_L34 = outC->_L50.nid_rbc;
  outC->_L38 = outC->_L34 == outC->_L35;
  outC->_L33 = outC->_L44.nid_c;
  outC->_L32 = outC->_L50.nid_c;
  outC->_L37 = outC->_L32 == outC->_L33;
  outC->_L31 = outC->_L44.nid_radio;
  outC->_L11 = outC->_L49.nid_radio;
  outC->_L36 = outC->_L11 == outC->_L31;
  outC->_L29 = outC->_L53 == outC->_L54;
  outC->_L28 = outC->_L51 == outC->_L52;
  outC->_L39 = outC->_L28 | outC->_L29;
  outC->_L26 = Q_RBC_Terminate_communication_session;
  outC->_L22 = outC->_L44.q_rbc;
  outC->_L27 = outC->_L22 == outC->_L26;
  outC->_L30 = outC->_L27 & outC->_L39 & outC->_L36 & outC->_L37 & outC->_L38;
  outC->_L23 = Q_RBC_Establish_communication_session;
  outC->_L24 = outC->_L22 == outC->_L23;
  outC->_L6 = outC->_L47.status;
  outC->_L7 = outC->_L6 == outC->_L48;
  outC->_L25 = outC->_L7 & outC->_L24;
  outC->_L40 = outC->_L25 | outC->_L30;
  outC->_L15 = outC->_L44.valid;
  outC->_L16 = outC->_L40 & outC->_L43 & outC->_L45 & outC->_L15;
  /* _L17= */
  if (outC->_L16) {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&outC->_L17, &outC->_L21);
  }
  else {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&outC->_L17, &outC->_L46);
  }
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->p42_sessionCmd_out,
    &outC->_L17);
}

#ifndef KCG_USER_DEFINED_INIT
void checkSessionCmd_init_Handover_Pkg_handoverUtils_Pkg(
  outC_checkSessionCmd_Handover_Pkg_handoverUtils_Pkg *outC)
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

  outC->_L54 = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L53 = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L52 = mcs_disconnected_RCM_Types_Pkg;
  outC->_L51 = mcs_disconnected_RCM_Types_Pkg;
  outC->_L50.valid = kcg_true;
  outC->_L50.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L50.nid_c = kcg_lit_int64(0);
  outC->_L50.nid_rbc = kcg_lit_int64(0);
  outC->_L50.nid_radio = kcg_lit_int64(0);
  outC->_L49.valid = kcg_true;
  outC->_L49.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L49.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L49.nid_radio = kcg_lit_int64(0);
  outC->_L49.settingUpConnectionHasFailed = kcg_true;
  outC->_L49.connectionLost = kcg_true;
  outC->_L49.isInRadioHole = kcg_true;
  outC->_L48 = mrs_unregistered_RCM_Types_Pkg;
  outC->_L47.valid = kcg_true;
  outC->_L47.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L47.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L47.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L47.nid_mn = kcg_lit_int64(0);
  outC->_L46.valid = kcg_true;
  outC->_L46.source = msrc_undefined_Common_Types_Pkg;
  outC->_L46.radioMetadata.t_train_reference = kcg_true;
  outC->_L46.radioMetadata.nid_em = kcg_true;
  outC->_L46.radioMetadata.q_scale = kcg_true;
  outC->_L46.radioMetadata.d_sr = kcg_true;
  outC->_L46.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L46.radioMetadata.d_ref = kcg_true;
  outC->_L46.radioMetadata.q_dir = kcg_true;
  outC->_L46.radioMetadata.d_emergencystop = kcg_true;
  outC->_L46.radioMetadata.m_version = kcg_true;
  outC->_L46.BG_Common_Header.valid = kcg_true;
  outC->_L46.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L46.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L46.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L46.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L46.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L46.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L46.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L46.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L46.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L46.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L46.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L46.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L46.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L46.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L46.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L46.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L46.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L46.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L46.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L46.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L46.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L46.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L46.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L46.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L46.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L46.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L46.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L46.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L46.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L46.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L46.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L46.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L46.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L46.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L46.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L46.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L46.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L46.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L46.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L46.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L46.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L46.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx = 0; idx < 30; idx++) {
    outC->_L46.packets.PacketHeaders[idx].nid_packet = kcg_lit_int64(0);
    outC->_L46.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L46.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L46.packets.PacketHeaders[idx].startAddress = kcg_lit_int64(0);
    outC->_L46.packets.PacketHeaders[idx].endAddress = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L46.packets.PacketData[idx1] = kcg_lit_int64(0);
  }
  outC->_L46.sendingRBC.valid = kcg_true;
  outC->_L46.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L46.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L46.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L45 = kcg_true;
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L42.PacketHeaders[idx2].nid_packet = kcg_lit_int64(0);
    outC->_L42.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L42.PacketHeaders[idx2].valid = kcg_true;
    outC->_L42.PacketHeaders[idx2].startAddress = kcg_lit_int64(0);
    outC->_L42.PacketHeaders[idx2].endAddress = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L42.PacketData[idx3] = kcg_lit_int64(0);
  }
  outC->_L44.valid = kcg_true;
  outC->_L44.q_dir = Q_DIR_Reverse;
  outC->_L44.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L44.nid_c = kcg_lit_int64(0);
  outC->_L44.nid_rbc = kcg_lit_int64(0);
  outC->_L44.nid_radio = kcg_lit_int64(0);
  outC->_L44.q_sleepsession = Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L43 = kcg_true;
  outC->_L40 = kcg_true;
  outC->_L39 = kcg_true;
  outC->_L38 = kcg_true;
  outC->_L37 = kcg_true;
  outC->_L36 = kcg_true;
  outC->_L35 = kcg_lit_int64(0);
  outC->_L34 = kcg_lit_int64(0);
  outC->_L33 = kcg_lit_int64(0);
  outC->_L32 = kcg_lit_int64(0);
  outC->_L31 = kcg_lit_int64(0);
  outC->_L30 = kcg_true;
  outC->_L29 = kcg_true;
  outC->_L28 = kcg_true;
  outC->_L27 = kcg_true;
  outC->_L26 = Q_RBC_Terminate_communication_session;
  outC->_L25 = kcg_true;
  outC->_L24 = kcg_true;
  outC->_L23 = Q_RBC_Terminate_communication_session;
  outC->_L22 = Q_RBC_Terminate_communication_session;
  outC->_L21.valid = kcg_true;
  outC->_L21.source = msrc_undefined_Common_Types_Pkg;
  outC->_L21.radioMetadata.t_train_reference = kcg_true;
  outC->_L21.radioMetadata.nid_em = kcg_true;
  outC->_L21.radioMetadata.q_scale = kcg_true;
  outC->_L21.radioMetadata.d_sr = kcg_true;
  outC->_L21.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L21.radioMetadata.d_ref = kcg_true;
  outC->_L21.radioMetadata.q_dir = kcg_true;
  outC->_L21.radioMetadata.d_emergencystop = kcg_true;
  outC->_L21.radioMetadata.m_version = kcg_true;
  outC->_L21.BG_Common_Header.valid = kcg_true;
  outC->_L21.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L21.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L21.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L21.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L21.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L21.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L21.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L21.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L21.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L21.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L21.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L21.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L21.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L21.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L21.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L21.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L21.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L21.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L21.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L21.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L21.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L21.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L21.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L21.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L21.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L21.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L21.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L21.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L21.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L21.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L21.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L21.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L21.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L21.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L21.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L21.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L21.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L21.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L21.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L21.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L21.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L21.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L21.packets.PacketHeaders[idx4].nid_packet = kcg_lit_int64(0);
    outC->_L21.packets.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L21.packets.PacketHeaders[idx4].valid = kcg_true;
    outC->_L21.packets.PacketHeaders[idx4].startAddress = kcg_lit_int64(0);
    outC->_L21.packets.PacketHeaders[idx4].endAddress = kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L21.packets.PacketData[idx5] = kcg_lit_int64(0);
  }
  outC->_L21.sendingRBC.valid = kcg_true;
  outC->_L21.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L21.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L21.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L17.valid = kcg_true;
  outC->_L17.source = msrc_undefined_Common_Types_Pkg;
  outC->_L17.radioMetadata.t_train_reference = kcg_true;
  outC->_L17.radioMetadata.nid_em = kcg_true;
  outC->_L17.radioMetadata.q_scale = kcg_true;
  outC->_L17.radioMetadata.d_sr = kcg_true;
  outC->_L17.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L17.radioMetadata.d_ref = kcg_true;
  outC->_L17.radioMetadata.q_dir = kcg_true;
  outC->_L17.radioMetadata.d_emergencystop = kcg_true;
  outC->_L17.radioMetadata.m_version = kcg_true;
  outC->_L17.BG_Common_Header.valid = kcg_true;
  outC->_L17.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L17.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L17.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L17.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L17.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L17.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L17.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L17.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L17.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L17.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L17.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L17.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L17.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L17.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L17.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L17.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L17.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L17.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L17.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L17.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L17.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L17.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L17.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L17.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L17.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L17.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L17.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L17.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L17.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L17.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L17.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L17.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L17.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L17.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L17.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L17.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L17.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L17.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L17.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L17.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L17.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L17.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->_L17.packets.PacketHeaders[idx6].nid_packet = kcg_lit_int64(0);
    outC->_L17.packets.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->_L17.packets.PacketHeaders[idx6].valid = kcg_true;
    outC->_L17.packets.PacketHeaders[idx6].startAddress = kcg_lit_int64(0);
    outC->_L17.packets.PacketHeaders[idx6].endAddress = kcg_lit_int64(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->_L17.packets.PacketData[idx7] = kcg_lit_int64(0);
  }
  outC->_L17.sendingRBC.valid = kcg_true;
  outC->_L17.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L17.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L17.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L16 = kcg_true;
  outC->_L15 = kcg_true;
  outC->_L11 = kcg_lit_int64(0);
  outC->_L7 = kcg_true;
  outC->_L6 = mrs_unregistered_RCM_Types_Pkg;
  outC->_L5.registration.valid = kcg_true;
  outC->_L5.registration.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L5.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L5.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L5.registration.nid_mn = kcg_lit_int64(0);
  outC->_L5.connection.valid = kcg_true;
  outC->_L5.connection.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L5.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L5.connection.nid_radio = kcg_lit_int64(0);
  outC->_L5.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L5.connection.connectionLost = kcg_true;
  outC->_L5.connection.isInRadioHole = kcg_true;
  outC->_L5.session.valid = kcg_true;
  outC->_L5.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L5.session.nid_c = kcg_lit_int64(0);
  outC->_L5.session.nid_rbc = kcg_lit_int64(0);
  outC->_L5.session.nid_radio = kcg_lit_int64(0);
  outC->p42_sessionCmd_out.valid = kcg_true;
  outC->p42_sessionCmd_out.source = msrc_undefined_Common_Types_Pkg;
  outC->p42_sessionCmd_out.radioMetadata.t_train_reference = kcg_true;
  outC->p42_sessionCmd_out.radioMetadata.nid_em = kcg_true;
  outC->p42_sessionCmd_out.radioMetadata.q_scale = kcg_true;
  outC->p42_sessionCmd_out.radioMetadata.d_sr = kcg_true;
  outC->p42_sessionCmd_out.radioMetadata.t_sh_rqst = kcg_true;
  outC->p42_sessionCmd_out.radioMetadata.d_ref = kcg_true;
  outC->p42_sessionCmd_out.radioMetadata.q_dir = kcg_true;
  outC->p42_sessionCmd_out.radioMetadata.d_emergencystop = kcg_true;
  outC->p42_sessionCmd_out.radioMetadata.m_version = kcg_true;
  outC->p42_sessionCmd_out.BG_Common_Header.valid = kcg_true;
  outC->p42_sessionCmd_out.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->p42_sessionCmd_out.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->p42_sessionCmd_out.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->p42_sessionCmd_out.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->p42_sessionCmd_out.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->p42_sessionCmd_out.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->p42_sessionCmd_out.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->p42_sessionCmd_out.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->p42_sessionCmd_out.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->p42_sessionCmd_out.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->p42_sessionCmd_out.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->p42_sessionCmd_out.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->p42_sessionCmd_out.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->p42_sessionCmd_out.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->p42_sessionCmd_out.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->p42_sessionCmd_out.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->p42_sessionCmd_out.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->p42_sessionCmd_out.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->p42_sessionCmd_out.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->p42_sessionCmd_out.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->p42_sessionCmd_out.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->p42_sessionCmd_out.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->p42_sessionCmd_out.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->p42_sessionCmd_out.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->p42_sessionCmd_out.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->p42_sessionCmd_out.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->p42_sessionCmd_out.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->p42_sessionCmd_out.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->p42_sessionCmd_out.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->p42_sessionCmd_out.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->p42_sessionCmd_out.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->p42_sessionCmd_out.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->p42_sessionCmd_out.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->p42_sessionCmd_out.Radio_Common_Header.t_train_reference =
    kcg_lit_int64(0);
  outC->p42_sessionCmd_out.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->p42_sessionCmd_out.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->p42_sessionCmd_out.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->p42_sessionCmd_out.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->p42_sessionCmd_out.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->p42_sessionCmd_out.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->p42_sessionCmd_out.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->p42_sessionCmd_out.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->p42_sessionCmd_out.packets.PacketHeaders[idx8].nid_packet =
      kcg_lit_int64(0);
    outC->p42_sessionCmd_out.packets.PacketHeaders[idx8].q_dir = Q_DIR_Reverse;
    outC->p42_sessionCmd_out.packets.PacketHeaders[idx8].valid = kcg_true;
    outC->p42_sessionCmd_out.packets.PacketHeaders[idx8].startAddress =
      kcg_lit_int64(0);
    outC->p42_sessionCmd_out.packets.PacketHeaders[idx8].endAddress =
      kcg_lit_int64(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->p42_sessionCmd_out.packets.PacketData[idx9] = kcg_lit_int64(0);
  }
  outC->p42_sessionCmd_out.sendingRBC.valid = kcg_true;
  outC->p42_sessionCmd_out.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->p42_sessionCmd_out.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->p42_sessionCmd_out.sendingRBC.device_id = kcg_lit_int64(0);
  /* _L43=(TM::Read_P042#1)/ */ Read_P042_init_TM(&outC->Context_Read_P042_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void checkSessionCmd_reset_Handover_Pkg_handoverUtils_Pkg(
  outC_checkSessionCmd_Handover_Pkg_handoverUtils_Pkg *outC)
{
  /* _L43=(TM::Read_P042#1)/ */ Read_P042_reset_TM(&outC->Context_Read_P042_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** checkSessionCmd_Handover_Pkg_handoverUtils_Pkg.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

