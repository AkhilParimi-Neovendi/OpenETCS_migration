/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG/ */
void WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction(
  /* isNominal/ */
  kcg_bool isNominal,
  /* passedBG_in/ */
  ReceivedMessage_T_Common_Types_Pkg *passedBG_in,
  outC_WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction *outC)
{
  outC->_L28 = cQDirLrbgRevers_CheckBGConsistency_Pkg;
  outC->_L27 = cQqDirTrainRevers_CheckBGConsistency_Pkg;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L23, passedBG_in);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L25, &outC->_L23);
  if (kcg_true) {
    outC->_L25.BG_Common_Header.trainOrientationToBG = outC->_L28;
  }
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L22, &outC->_L25);
  if (kcg_true) {
    outC->_L22.BG_Common_Header.trainRunningDirectionToBG = outC->_L27;
  }
  outC->_L21 = cQqDirTrainNominal_CheckBGConsistency_Pkg;
  outC->_L18 = cQDirLrbgNominal_CheckBGConsistency_Pkg;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L1, passedBG_in);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L16, &outC->_L1);
  if (kcg_true) {
    outC->_L16.BG_Common_Header.trainOrientationToBG = outC->_L18;
  }
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L19, &outC->_L16);
  if (kcg_true) {
    outC->_L19.BG_Common_Header.trainRunningDirectionToBG = outC->_L21;
  }
  outC->_L14 = isNominal;
  /* _L15= */
  if (outC->_L14) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L15, &outC->_L19);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L15, &outC->_L22);
  }
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->passedBG_out, &outC->_L15);
}

#ifndef KCG_USER_DEFINED_INIT
void WriteDirection2PassedBG_init_CheckBGConsistency_Pkg_SubFunction(
  outC_WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction *outC)
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

  outC->_L28 = Q_DIRLRBG_Reverse;
  outC->_L27 = Q_DIRTRAIN_Reverse;
  outC->_L22.valid = kcg_true;
  outC->_L22.source = msrc_undefined_Common_Types_Pkg;
  outC->_L22.radioMetadata.t_train_reference = kcg_true;
  outC->_L22.radioMetadata.nid_em = kcg_true;
  outC->_L22.radioMetadata.q_scale = kcg_true;
  outC->_L22.radioMetadata.d_sr = kcg_true;
  outC->_L22.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L22.radioMetadata.d_ref = kcg_true;
  outC->_L22.radioMetadata.q_dir = kcg_true;
  outC->_L22.radioMetadata.d_emergencystop = kcg_true;
  outC->_L22.radioMetadata.m_version = kcg_true;
  outC->_L22.BG_Common_Header.valid = kcg_true;
  outC->_L22.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L22.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L22.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L22.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L22.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L22.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L22.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L22.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L22.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L22.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L22.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L22.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L22.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L22.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L22.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L22.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L22.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L22.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L22.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L22.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L22.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L22.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L22.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L22.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L22.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L22.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L22.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L22.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L22.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L22.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L22.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L22.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L22.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L22.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L22.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L22.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L22.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L22.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L22.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L22.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L22.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L22.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx = 0; idx < 30; idx++) {
    outC->_L22.packets.PacketHeaders[idx].nid_packet = kcg_lit_int64(0);
    outC->_L22.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L22.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L22.packets.PacketHeaders[idx].startAddress = kcg_lit_int64(0);
    outC->_L22.packets.PacketHeaders[idx].endAddress = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L22.packets.PacketData[idx1] = kcg_lit_int64(0);
  }
  outC->_L22.sendingRBC.valid = kcg_true;
  outC->_L22.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L22.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L22.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L23.valid = kcg_true;
  outC->_L23.source = msrc_undefined_Common_Types_Pkg;
  outC->_L23.radioMetadata.t_train_reference = kcg_true;
  outC->_L23.radioMetadata.nid_em = kcg_true;
  outC->_L23.radioMetadata.q_scale = kcg_true;
  outC->_L23.radioMetadata.d_sr = kcg_true;
  outC->_L23.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L23.radioMetadata.d_ref = kcg_true;
  outC->_L23.radioMetadata.q_dir = kcg_true;
  outC->_L23.radioMetadata.d_emergencystop = kcg_true;
  outC->_L23.radioMetadata.m_version = kcg_true;
  outC->_L23.BG_Common_Header.valid = kcg_true;
  outC->_L23.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L23.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L23.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L23.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L23.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L23.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L23.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L23.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L23.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L23.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L23.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L23.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L23.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L23.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L23.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L23.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L23.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L23.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L23.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L23.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L23.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L23.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L23.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L23.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L23.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L23.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L23.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L23.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L23.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L23.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L23.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L23.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L23.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L23.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L23.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L23.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L23.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L23.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L23.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L23.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L23.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L23.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L23.packets.PacketHeaders[idx2].nid_packet = kcg_lit_int64(0);
    outC->_L23.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L23.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L23.packets.PacketHeaders[idx2].startAddress = kcg_lit_int64(0);
    outC->_L23.packets.PacketHeaders[idx2].endAddress = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L23.packets.PacketData[idx3] = kcg_lit_int64(0);
  }
  outC->_L23.sendingRBC.valid = kcg_true;
  outC->_L23.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L23.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L23.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L25.valid = kcg_true;
  outC->_L25.source = msrc_undefined_Common_Types_Pkg;
  outC->_L25.radioMetadata.t_train_reference = kcg_true;
  outC->_L25.radioMetadata.nid_em = kcg_true;
  outC->_L25.radioMetadata.q_scale = kcg_true;
  outC->_L25.radioMetadata.d_sr = kcg_true;
  outC->_L25.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L25.radioMetadata.d_ref = kcg_true;
  outC->_L25.radioMetadata.q_dir = kcg_true;
  outC->_L25.radioMetadata.d_emergencystop = kcg_true;
  outC->_L25.radioMetadata.m_version = kcg_true;
  outC->_L25.BG_Common_Header.valid = kcg_true;
  outC->_L25.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L25.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L25.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L25.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L25.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L25.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L25.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L25.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L25.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L25.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L25.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L25.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L25.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L25.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L25.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L25.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L25.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L25.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L25.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L25.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L25.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L25.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L25.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L25.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L25.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L25.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L25.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L25.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L25.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L25.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L25.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L25.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L25.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L25.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L25.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L25.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L25.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L25.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L25.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L25.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L25.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L25.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L25.packets.PacketHeaders[idx4].nid_packet = kcg_lit_int64(0);
    outC->_L25.packets.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L25.packets.PacketHeaders[idx4].valid = kcg_true;
    outC->_L25.packets.PacketHeaders[idx4].startAddress = kcg_lit_int64(0);
    outC->_L25.packets.PacketHeaders[idx4].endAddress = kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L25.packets.PacketData[idx5] = kcg_lit_int64(0);
  }
  outC->_L25.sendingRBC.valid = kcg_true;
  outC->_L25.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L25.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L25.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L21 = Q_DIRTRAIN_Reverse;
  outC->_L19.valid = kcg_true;
  outC->_L19.source = msrc_undefined_Common_Types_Pkg;
  outC->_L19.radioMetadata.t_train_reference = kcg_true;
  outC->_L19.radioMetadata.nid_em = kcg_true;
  outC->_L19.radioMetadata.q_scale = kcg_true;
  outC->_L19.radioMetadata.d_sr = kcg_true;
  outC->_L19.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L19.radioMetadata.d_ref = kcg_true;
  outC->_L19.radioMetadata.q_dir = kcg_true;
  outC->_L19.radioMetadata.d_emergencystop = kcg_true;
  outC->_L19.radioMetadata.m_version = kcg_true;
  outC->_L19.BG_Common_Header.valid = kcg_true;
  outC->_L19.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L19.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L19.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L19.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L19.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L19.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L19.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L19.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L19.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L19.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L19.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L19.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L19.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L19.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L19.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L19.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L19.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L19.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L19.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L19.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L19.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L19.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L19.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L19.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L19.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L19.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L19.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L19.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L19.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L19.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L19.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L19.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L19.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L19.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L19.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L19.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L19.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L19.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L19.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L19.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L19.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L19.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->_L19.packets.PacketHeaders[idx6].nid_packet = kcg_lit_int64(0);
    outC->_L19.packets.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->_L19.packets.PacketHeaders[idx6].valid = kcg_true;
    outC->_L19.packets.PacketHeaders[idx6].startAddress = kcg_lit_int64(0);
    outC->_L19.packets.PacketHeaders[idx6].endAddress = kcg_lit_int64(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->_L19.packets.PacketData[idx7] = kcg_lit_int64(0);
  }
  outC->_L19.sendingRBC.valid = kcg_true;
  outC->_L19.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L19.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L19.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L18 = Q_DIRLRBG_Reverse;
  outC->_L16.valid = kcg_true;
  outC->_L16.source = msrc_undefined_Common_Types_Pkg;
  outC->_L16.radioMetadata.t_train_reference = kcg_true;
  outC->_L16.radioMetadata.nid_em = kcg_true;
  outC->_L16.radioMetadata.q_scale = kcg_true;
  outC->_L16.radioMetadata.d_sr = kcg_true;
  outC->_L16.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L16.radioMetadata.d_ref = kcg_true;
  outC->_L16.radioMetadata.q_dir = kcg_true;
  outC->_L16.radioMetadata.d_emergencystop = kcg_true;
  outC->_L16.radioMetadata.m_version = kcg_true;
  outC->_L16.BG_Common_Header.valid = kcg_true;
  outC->_L16.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L16.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L16.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L16.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L16.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L16.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L16.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L16.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L16.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L16.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L16.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L16.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L16.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L16.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L16.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L16.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L16.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L16.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L16.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L16.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L16.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L16.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L16.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L16.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L16.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L16.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L16.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L16.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L16.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L16.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L16.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L16.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L16.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L16.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L16.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L16.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L16.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L16.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L16.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L16.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L16.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L16.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->_L16.packets.PacketHeaders[idx8].nid_packet = kcg_lit_int64(0);
    outC->_L16.packets.PacketHeaders[idx8].q_dir = Q_DIR_Reverse;
    outC->_L16.packets.PacketHeaders[idx8].valid = kcg_true;
    outC->_L16.packets.PacketHeaders[idx8].startAddress = kcg_lit_int64(0);
    outC->_L16.packets.PacketHeaders[idx8].endAddress = kcg_lit_int64(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->_L16.packets.PacketData[idx9] = kcg_lit_int64(0);
  }
  outC->_L16.sendingRBC.valid = kcg_true;
  outC->_L16.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L16.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L16.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L15.valid = kcg_true;
  outC->_L15.source = msrc_undefined_Common_Types_Pkg;
  outC->_L15.radioMetadata.t_train_reference = kcg_true;
  outC->_L15.radioMetadata.nid_em = kcg_true;
  outC->_L15.radioMetadata.q_scale = kcg_true;
  outC->_L15.radioMetadata.d_sr = kcg_true;
  outC->_L15.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L15.radioMetadata.d_ref = kcg_true;
  outC->_L15.radioMetadata.q_dir = kcg_true;
  outC->_L15.radioMetadata.d_emergencystop = kcg_true;
  outC->_L15.radioMetadata.m_version = kcg_true;
  outC->_L15.BG_Common_Header.valid = kcg_true;
  outC->_L15.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L15.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L15.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L15.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L15.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L15.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L15.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L15.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L15.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L15.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L15.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L15.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L15.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L15.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L15.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L15.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L15.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L15.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L15.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L15.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L15.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L15.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L15.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L15.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L15.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L15.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L15.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L15.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L15.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L15.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L15.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L15.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L15.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L15.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L15.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L15.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L15.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L15.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L15.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L15.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L15.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L15.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->_L15.packets.PacketHeaders[idx10].nid_packet = kcg_lit_int64(0);
    outC->_L15.packets.PacketHeaders[idx10].q_dir = Q_DIR_Reverse;
    outC->_L15.packets.PacketHeaders[idx10].valid = kcg_true;
    outC->_L15.packets.PacketHeaders[idx10].startAddress = kcg_lit_int64(0);
    outC->_L15.packets.PacketHeaders[idx10].endAddress = kcg_lit_int64(0);
  }
  for (idx11 = 0; idx11 < 500; idx11++) {
    outC->_L15.packets.PacketData[idx11] = kcg_lit_int64(0);
  }
  outC->_L15.sendingRBC.valid = kcg_true;
  outC->_L15.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L15.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L15.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L14 = kcg_true;
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
  for (idx12 = 0; idx12 < 30; idx12++) {
    outC->_L1.packets.PacketHeaders[idx12].nid_packet = kcg_lit_int64(0);
    outC->_L1.packets.PacketHeaders[idx12].q_dir = Q_DIR_Reverse;
    outC->_L1.packets.PacketHeaders[idx12].valid = kcg_true;
    outC->_L1.packets.PacketHeaders[idx12].startAddress = kcg_lit_int64(0);
    outC->_L1.packets.PacketHeaders[idx12].endAddress = kcg_lit_int64(0);
  }
  for (idx13 = 0; idx13 < 500; idx13++) {
    outC->_L1.packets.PacketData[idx13] = kcg_lit_int64(0);
  }
  outC->_L1.sendingRBC.valid = kcg_true;
  outC->_L1.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L1.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L1.sendingRBC.device_id = kcg_lit_int64(0);
  outC->passedBG_out.valid = kcg_true;
  outC->passedBG_out.source = msrc_undefined_Common_Types_Pkg;
  outC->passedBG_out.radioMetadata.t_train_reference = kcg_true;
  outC->passedBG_out.radioMetadata.nid_em = kcg_true;
  outC->passedBG_out.radioMetadata.q_scale = kcg_true;
  outC->passedBG_out.radioMetadata.d_sr = kcg_true;
  outC->passedBG_out.radioMetadata.t_sh_rqst = kcg_true;
  outC->passedBG_out.radioMetadata.d_ref = kcg_true;
  outC->passedBG_out.radioMetadata.q_dir = kcg_true;
  outC->passedBG_out.radioMetadata.d_emergencystop = kcg_true;
  outC->passedBG_out.radioMetadata.m_version = kcg_true;
  outC->passedBG_out.BG_Common_Header.valid = kcg_true;
  outC->passedBG_out.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->passedBG_out.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->passedBG_out.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->passedBG_out.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->passedBG_out.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->passedBG_out.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->passedBG_out.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->passedBG_out.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->passedBG_out.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->passedBG_out.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->passedBG_out.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->passedBG_out.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->passedBG_out.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->passedBG_out.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->passedBG_out.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->passedBG_out.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->passedBG_out.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->passedBG_out.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->passedBG_out.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->passedBG_out.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->passedBG_out.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->passedBG_out.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->passedBG_out.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->passedBG_out.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->passedBG_out.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->passedBG_out.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->passedBG_out.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->passedBG_out.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->passedBG_out.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->passedBG_out.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->passedBG_out.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->passedBG_out.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->passedBG_out.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->passedBG_out.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->passedBG_out.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->passedBG_out.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->passedBG_out.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->passedBG_out.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->passedBG_out.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->passedBG_out.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->passedBG_out.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->passedBG_out.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx14 = 0; idx14 < 30; idx14++) {
    outC->passedBG_out.packets.PacketHeaders[idx14].nid_packet = kcg_lit_int64(0);
    outC->passedBG_out.packets.PacketHeaders[idx14].q_dir = Q_DIR_Reverse;
    outC->passedBG_out.packets.PacketHeaders[idx14].valid = kcg_true;
    outC->passedBG_out.packets.PacketHeaders[idx14].startAddress = kcg_lit_int64(0);
    outC->passedBG_out.packets.PacketHeaders[idx14].endAddress = kcg_lit_int64(0);
  }
  for (idx15 = 0; idx15 < 500; idx15++) {
    outC->passedBG_out.packets.PacketData[idx15] = kcg_lit_int64(0);
  }
  outC->passedBG_out.sendingRBC.valid = kcg_true;
  outC->passedBG_out.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->passedBG_out.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->passedBG_out.sendingRBC.device_id = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void WriteDirection2PassedBG_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

