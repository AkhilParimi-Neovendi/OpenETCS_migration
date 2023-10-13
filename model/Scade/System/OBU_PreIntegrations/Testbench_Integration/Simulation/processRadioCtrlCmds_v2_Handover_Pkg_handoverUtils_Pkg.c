/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "processRadioCtrlCmds_v2_Handover_Pkg_handoverUtils_Pkg.h"

/* Handover_Pkg::handoverUtils_Pkg::processRadioCtrlCmds_v2/ */
void processRadioCtrlCmds_v2_Handover_Pkg_handoverUtils_Pkg(
  /* p45_radioNetworkRegistrationOrder_in/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg *p45_radioNetworkRegistrationOrder_in,
  /* p42_establishOrTerminateSessionCmd_in/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg *p42_establishOrTerminateSessionCmd_in,
  /* additionalSessionCmdsFromTrack_in/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg *additionalSessionCmdsFromTrack_in,
  /* morcStatus/ */
  morcStatus_T_RCM_Session_Types_Pkg *morcStatus,
  /* mobileDeviceNo/ */
  kcg_int64 mobileDeviceNo,
  outC_processRadioCtrlCmds_v2_Handover_Pkg_handoverUtils_Pkg *outC)
{
  static morcStatus_T_RCM_Session_Types_Pkg noname;
  static kcg_int64 _1_noname;

  outC->_L221 = mobileDeviceNo;
  _1_noname = outC->_L221;
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&outC->_L220, morcStatus);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&noname, &outC->_L220);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->_L219,
    p45_radioNetworkRegistrationOrder_in);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->_L218,
    p42_establishOrTerminateSessionCmd_in);
  outC->_L217 = outC->_L218.valid;
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->_L177,
    additionalSessionCmdsFromTrack_in);
  outC->_L215 = outC->_L219.valid;
  /* _L214= */
  if (outC->_L215) {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&outC->_L214, &outC->_L219);
  }
  else {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&outC->_L214, &outC->_L177);
  }
  /* _L216= */
  if (outC->_L217) {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&outC->_L216, &outC->_L218);
  }
  else {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&outC->_L216, &outC->_L214);
  }
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->sessionCmds_2_MoRC,
    &outC->_L216);
}

#ifndef KCG_USER_DEFINED_INIT
void processRadioCtrlCmds_v2_init_Handover_Pkg_handoverUtils_Pkg(
  outC_processRadioCtrlCmds_v2_Handover_Pkg_handoverUtils_Pkg *outC)
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

  outC->_L221 = kcg_lit_int64(0);
  outC->_L220.registration.valid = kcg_true;
  outC->_L220.registration.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L220.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L220.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L220.registration.nid_mn = kcg_lit_int64(0);
  outC->_L220.connection.valid = kcg_true;
  outC->_L220.connection.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L220.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L220.connection.nid_radio = kcg_lit_int64(0);
  outC->_L220.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L220.connection.connectionLost = kcg_true;
  outC->_L220.connection.isInRadioHole = kcg_true;
  outC->_L220.session.valid = kcg_true;
  outC->_L220.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L220.session.nid_c = kcg_lit_int64(0);
  outC->_L220.session.nid_rbc = kcg_lit_int64(0);
  outC->_L220.session.nid_radio = kcg_lit_int64(0);
  outC->_L219.valid = kcg_true;
  outC->_L219.source = msrc_undefined_Common_Types_Pkg;
  outC->_L219.radioMetadata.t_train_reference = kcg_true;
  outC->_L219.radioMetadata.nid_em = kcg_true;
  outC->_L219.radioMetadata.q_scale = kcg_true;
  outC->_L219.radioMetadata.d_sr = kcg_true;
  outC->_L219.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L219.radioMetadata.d_ref = kcg_true;
  outC->_L219.radioMetadata.q_dir = kcg_true;
  outC->_L219.radioMetadata.d_emergencystop = kcg_true;
  outC->_L219.radioMetadata.m_version = kcg_true;
  outC->_L219.BG_Common_Header.valid = kcg_true;
  outC->_L219.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L219.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L219.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L219.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L219.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L219.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L219.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L219.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L219.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L219.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L219.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L219.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L219.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L219.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L219.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L219.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L219.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L219.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L219.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L219.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L219.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L219.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L219.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L219.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L219.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L219.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L219.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L219.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L219.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L219.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L219.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L219.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L219.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L219.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L219.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L219.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L219.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L219.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L219.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L219.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L219.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L219.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx = 0; idx < 30; idx++) {
    outC->_L219.packets.PacketHeaders[idx].nid_packet = kcg_lit_int64(0);
    outC->_L219.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L219.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L219.packets.PacketHeaders[idx].startAddress = kcg_lit_int64(0);
    outC->_L219.packets.PacketHeaders[idx].endAddress = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L219.packets.PacketData[idx1] = kcg_lit_int64(0);
  }
  outC->_L219.sendingRBC.valid = kcg_true;
  outC->_L219.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L219.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L219.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L218.valid = kcg_true;
  outC->_L218.source = msrc_undefined_Common_Types_Pkg;
  outC->_L218.radioMetadata.t_train_reference = kcg_true;
  outC->_L218.radioMetadata.nid_em = kcg_true;
  outC->_L218.radioMetadata.q_scale = kcg_true;
  outC->_L218.radioMetadata.d_sr = kcg_true;
  outC->_L218.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L218.radioMetadata.d_ref = kcg_true;
  outC->_L218.radioMetadata.q_dir = kcg_true;
  outC->_L218.radioMetadata.d_emergencystop = kcg_true;
  outC->_L218.radioMetadata.m_version = kcg_true;
  outC->_L218.BG_Common_Header.valid = kcg_true;
  outC->_L218.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L218.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L218.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L218.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L218.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L218.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L218.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L218.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L218.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L218.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L218.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L218.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L218.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L218.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L218.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L218.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L218.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L218.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L218.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L218.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L218.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L218.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L218.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L218.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L218.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L218.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L218.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L218.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L218.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L218.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L218.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L218.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L218.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L218.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L218.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L218.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L218.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L218.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L218.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L218.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L218.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L218.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L218.packets.PacketHeaders[idx2].nid_packet = kcg_lit_int64(0);
    outC->_L218.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L218.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L218.packets.PacketHeaders[idx2].startAddress = kcg_lit_int64(0);
    outC->_L218.packets.PacketHeaders[idx2].endAddress = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L218.packets.PacketData[idx3] = kcg_lit_int64(0);
  }
  outC->_L218.sendingRBC.valid = kcg_true;
  outC->_L218.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L218.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L218.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L217 = kcg_true;
  outC->_L216.valid = kcg_true;
  outC->_L216.source = msrc_undefined_Common_Types_Pkg;
  outC->_L216.radioMetadata.t_train_reference = kcg_true;
  outC->_L216.radioMetadata.nid_em = kcg_true;
  outC->_L216.radioMetadata.q_scale = kcg_true;
  outC->_L216.radioMetadata.d_sr = kcg_true;
  outC->_L216.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L216.radioMetadata.d_ref = kcg_true;
  outC->_L216.radioMetadata.q_dir = kcg_true;
  outC->_L216.radioMetadata.d_emergencystop = kcg_true;
  outC->_L216.radioMetadata.m_version = kcg_true;
  outC->_L216.BG_Common_Header.valid = kcg_true;
  outC->_L216.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L216.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L216.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L216.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L216.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L216.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L216.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L216.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L216.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L216.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L216.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L216.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L216.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L216.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L216.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L216.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L216.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L216.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L216.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L216.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L216.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L216.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L216.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L216.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L216.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L216.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L216.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L216.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L216.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L216.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L216.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L216.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L216.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L216.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L216.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L216.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L216.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L216.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L216.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L216.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L216.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L216.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L216.packets.PacketHeaders[idx4].nid_packet = kcg_lit_int64(0);
    outC->_L216.packets.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L216.packets.PacketHeaders[idx4].valid = kcg_true;
    outC->_L216.packets.PacketHeaders[idx4].startAddress = kcg_lit_int64(0);
    outC->_L216.packets.PacketHeaders[idx4].endAddress = kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L216.packets.PacketData[idx5] = kcg_lit_int64(0);
  }
  outC->_L216.sendingRBC.valid = kcg_true;
  outC->_L216.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L216.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L216.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L215 = kcg_true;
  outC->_L214.valid = kcg_true;
  outC->_L214.source = msrc_undefined_Common_Types_Pkg;
  outC->_L214.radioMetadata.t_train_reference = kcg_true;
  outC->_L214.radioMetadata.nid_em = kcg_true;
  outC->_L214.radioMetadata.q_scale = kcg_true;
  outC->_L214.radioMetadata.d_sr = kcg_true;
  outC->_L214.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L214.radioMetadata.d_ref = kcg_true;
  outC->_L214.radioMetadata.q_dir = kcg_true;
  outC->_L214.radioMetadata.d_emergencystop = kcg_true;
  outC->_L214.radioMetadata.m_version = kcg_true;
  outC->_L214.BG_Common_Header.valid = kcg_true;
  outC->_L214.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L214.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L214.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L214.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L214.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L214.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L214.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L214.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L214.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L214.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L214.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L214.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L214.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L214.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L214.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L214.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L214.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L214.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L214.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L214.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L214.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L214.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L214.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L214.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L214.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L214.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L214.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L214.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L214.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L214.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L214.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L214.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L214.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L214.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L214.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L214.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L214.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L214.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L214.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L214.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L214.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L214.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->_L214.packets.PacketHeaders[idx6].nid_packet = kcg_lit_int64(0);
    outC->_L214.packets.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->_L214.packets.PacketHeaders[idx6].valid = kcg_true;
    outC->_L214.packets.PacketHeaders[idx6].startAddress = kcg_lit_int64(0);
    outC->_L214.packets.PacketHeaders[idx6].endAddress = kcg_lit_int64(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->_L214.packets.PacketData[idx7] = kcg_lit_int64(0);
  }
  outC->_L214.sendingRBC.valid = kcg_true;
  outC->_L214.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L214.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L214.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L177.valid = kcg_true;
  outC->_L177.source = msrc_undefined_Common_Types_Pkg;
  outC->_L177.radioMetadata.t_train_reference = kcg_true;
  outC->_L177.radioMetadata.nid_em = kcg_true;
  outC->_L177.radioMetadata.q_scale = kcg_true;
  outC->_L177.radioMetadata.d_sr = kcg_true;
  outC->_L177.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L177.radioMetadata.d_ref = kcg_true;
  outC->_L177.radioMetadata.q_dir = kcg_true;
  outC->_L177.radioMetadata.d_emergencystop = kcg_true;
  outC->_L177.radioMetadata.m_version = kcg_true;
  outC->_L177.BG_Common_Header.valid = kcg_true;
  outC->_L177.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L177.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L177.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L177.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L177.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L177.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L177.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L177.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L177.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L177.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L177.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L177.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L177.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L177.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L177.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L177.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L177.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L177.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L177.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L177.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L177.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L177.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L177.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L177.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L177.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L177.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L177.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L177.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L177.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L177.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L177.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L177.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L177.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L177.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L177.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L177.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L177.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L177.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L177.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L177.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L177.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L177.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->_L177.packets.PacketHeaders[idx8].nid_packet = kcg_lit_int64(0);
    outC->_L177.packets.PacketHeaders[idx8].q_dir = Q_DIR_Reverse;
    outC->_L177.packets.PacketHeaders[idx8].valid = kcg_true;
    outC->_L177.packets.PacketHeaders[idx8].startAddress = kcg_lit_int64(0);
    outC->_L177.packets.PacketHeaders[idx8].endAddress = kcg_lit_int64(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->_L177.packets.PacketData[idx9] = kcg_lit_int64(0);
  }
  outC->_L177.sendingRBC.valid = kcg_true;
  outC->_L177.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L177.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L177.sendingRBC.device_id = kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC.valid = kcg_true;
  outC->sessionCmds_2_MoRC.source = msrc_undefined_Common_Types_Pkg;
  outC->sessionCmds_2_MoRC.radioMetadata.t_train_reference = kcg_true;
  outC->sessionCmds_2_MoRC.radioMetadata.nid_em = kcg_true;
  outC->sessionCmds_2_MoRC.radioMetadata.q_scale = kcg_true;
  outC->sessionCmds_2_MoRC.radioMetadata.d_sr = kcg_true;
  outC->sessionCmds_2_MoRC.radioMetadata.t_sh_rqst = kcg_true;
  outC->sessionCmds_2_MoRC.radioMetadata.d_ref = kcg_true;
  outC->sessionCmds_2_MoRC.radioMetadata.q_dir = kcg_true;
  outC->sessionCmds_2_MoRC.radioMetadata.d_emergencystop = kcg_true;
  outC->sessionCmds_2_MoRC.radioMetadata.m_version = kcg_true;
  outC->sessionCmds_2_MoRC.BG_Common_Header.valid = kcg_true;
  outC->sessionCmds_2_MoRC.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->sessionCmds_2_MoRC.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->sessionCmds_2_MoRC.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->sessionCmds_2_MoRC.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->sessionCmds_2_MoRC.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->sessionCmds_2_MoRC.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->sessionCmds_2_MoRC.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->sessionCmds_2_MoRC.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->sessionCmds_2_MoRC.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->sessionCmds_2_MoRC.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->sessionCmds_2_MoRC.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->sessionCmds_2_MoRC.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->sessionCmds_2_MoRC.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC.Radio_Common_Header.t_train_reference =
    kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->sessionCmds_2_MoRC.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->sessionCmds_2_MoRC.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->sessionCmds_2_MoRC.packets.PacketHeaders[idx10].nid_packet =
      kcg_lit_int64(0);
    outC->sessionCmds_2_MoRC.packets.PacketHeaders[idx10].q_dir = Q_DIR_Reverse;
    outC->sessionCmds_2_MoRC.packets.PacketHeaders[idx10].valid = kcg_true;
    outC->sessionCmds_2_MoRC.packets.PacketHeaders[idx10].startAddress =
      kcg_lit_int64(0);
    outC->sessionCmds_2_MoRC.packets.PacketHeaders[idx10].endAddress =
      kcg_lit_int64(0);
  }
  for (idx11 = 0; idx11 < 500; idx11++) {
    outC->sessionCmds_2_MoRC.packets.PacketData[idx11] = kcg_lit_int64(0);
  }
  outC->sessionCmds_2_MoRC.sendingRBC.valid = kcg_true;
  outC->sessionCmds_2_MoRC.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->sessionCmds_2_MoRC.sendingRBC.device_id = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void processRadioCtrlCmds_v2_reset_Handover_Pkg_handoverUtils_Pkg(
  outC_processRadioCtrlCmds_v2_Handover_Pkg_handoverUtils_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** processRadioCtrlCmds_v2_Handover_Pkg_handoverUtils_Pkg.c
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

