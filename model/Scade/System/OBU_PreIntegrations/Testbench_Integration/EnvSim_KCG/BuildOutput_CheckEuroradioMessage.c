/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BuildOutput_CheckEuroradioMessage.h"

/* CheckEuroradioMessage::BuildOutput/ */
void BuildOutput_CheckEuroradioMessage(
  /* message/ */
  ReceivedMessage_T_Common_Types_Pkg *message,
  /* valid/ */
  kcg_bool valid,
  outC_BuildOutput_CheckEuroradioMessage *outC)
{
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L1, message);
  outC->_L19 = outC->_L1.valid;
  outC->_L18 = outC->_L1.source;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->_L17,
    &outC->_L1.radioMetadata);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L16, &outC->_L1.BG_Common_Header);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L15,
    &outC->_L1.Radio_Common_Header);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L14, &outC->_L1.packets);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&outC->_L20, &outC->_L1.sendingRBC);
  outC->_L2 = valid;
  outC->_L10 = outC->_L19 & outC->_L2;
  outC->_L11.valid = outC->_L10;
  outC->_L11.source = outC->_L18;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->_L11.radioMetadata,
    &outC->_L17);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L11.BG_Common_Header, &outC->_L16);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L11.Radio_Common_Header,
    &outC->_L15);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L11.packets, &outC->_L14);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&outC->_L11.sendingRBC, &outC->_L20);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->ReceivedMessage,
    &outC->_L11);
}

#ifndef KCG_USER_DEFINED_INIT
void BuildOutput_init_CheckEuroradioMessage(
  outC_BuildOutput_CheckEuroradioMessage *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;

  outC->_L20.valid = kcg_true;
  outC->_L20.nid_c = kcg_lit_int64(0);
  outC->_L20.rbc_id = kcg_lit_int64(0);
  outC->_L20.device_id = kcg_lit_int64(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L14.PacketHeaders[idx].nid_packet = kcg_lit_int64(0);
    outC->_L14.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L14.PacketHeaders[idx].valid = kcg_true;
    outC->_L14.PacketHeaders[idx].startAddress = kcg_lit_int64(0);
    outC->_L14.PacketHeaders[idx].endAddress = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L14.PacketData[idx1] = kcg_lit_int64(0);
  }
  outC->_L15.radioDevice = kcg_lit_int64(0);
  outC->_L15.receivedSystemTime = kcg_lit_int64(0);
  outC->_L15.nid_message = kcg_lit_int64(0);
  outC->_L15.t_train = kcg_lit_int64(0);
  outC->_L15.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L15.nid_lrbg = kcg_lit_int64(0);
  outC->_L15.t_train_reference = kcg_lit_int64(0);
  outC->_L15.nid_em = kcg_lit_int64(0);
  outC->_L15.q_scale = Q_SCALE_10_cm_scale;
  outC->_L15.d_sr = kcg_lit_int64(0);
  outC->_L15.t_sh_rqst = kcg_lit_int64(0);
  outC->_L15.d_ref = kcg_lit_int64(0);
  outC->_L15.q_dir = Q_DIR_Reverse;
  outC->_L15.d_emergencystop = kcg_lit_int64(0);
  outC->_L15.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L16.valid = kcg_true;
  outC->_L16.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L16.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L16.q_media = Q_MEDIA_Balise;
  outC->_L16.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L16.m_mcount = kcg_lit_int64(0);
  outC->_L16.nid_c = kcg_lit_int64(0);
  outC->_L16.nid_bg = kcg_lit_int64(0);
  outC->_L16.q_link = Q_LINK_Unlinked;
  outC->_L16.bgPosition.valid = kcg_true;
  outC->_L16.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L16.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L16.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L16.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L16.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L16.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L16.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L16.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L16.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L16.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L16.bgPosition.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L16.BG_centerDetectionInaccuraccuracies.nominal = kcg_lit_int64(0);
  outC->_L16.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int64(0);
  outC->_L16.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int64(0);
  outC->_L16.q_nvlocacc = kcg_lit_int64(0);
  outC->_L16.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L16.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L16.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L17.t_train_reference = kcg_true;
  outC->_L17.nid_em = kcg_true;
  outC->_L17.q_scale = kcg_true;
  outC->_L17.d_sr = kcg_true;
  outC->_L17.t_sh_rqst = kcg_true;
  outC->_L17.d_ref = kcg_true;
  outC->_L17.q_dir = kcg_true;
  outC->_L17.d_emergencystop = kcg_true;
  outC->_L17.m_version = kcg_true;
  outC->_L18 = msrc_undefined_Common_Types_Pkg;
  outC->_L19 = kcg_true;
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
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L11.packets.PacketHeaders[idx2].nid_packet = kcg_lit_int64(0);
    outC->_L11.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L11.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L11.packets.PacketHeaders[idx2].startAddress = kcg_lit_int64(0);
    outC->_L11.packets.PacketHeaders[idx2].endAddress = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L11.packets.PacketData[idx3] = kcg_lit_int64(0);
  }
  outC->_L11.sendingRBC.valid = kcg_true;
  outC->_L11.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L11.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L11.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L10 = kcg_true;
  outC->_L2 = kcg_true;
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
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L1.packets.PacketHeaders[idx4].nid_packet = kcg_lit_int64(0);
    outC->_L1.packets.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L1.packets.PacketHeaders[idx4].valid = kcg_true;
    outC->_L1.packets.PacketHeaders[idx4].startAddress = kcg_lit_int64(0);
    outC->_L1.packets.PacketHeaders[idx4].endAddress = kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L1.packets.PacketData[idx5] = kcg_lit_int64(0);
  }
  outC->_L1.sendingRBC.valid = kcg_true;
  outC->_L1.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L1.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L1.sendingRBC.device_id = kcg_lit_int64(0);
  outC->ReceivedMessage.valid = kcg_true;
  outC->ReceivedMessage.source = msrc_undefined_Common_Types_Pkg;
  outC->ReceivedMessage.radioMetadata.t_train_reference = kcg_true;
  outC->ReceivedMessage.radioMetadata.nid_em = kcg_true;
  outC->ReceivedMessage.radioMetadata.q_scale = kcg_true;
  outC->ReceivedMessage.radioMetadata.d_sr = kcg_true;
  outC->ReceivedMessage.radioMetadata.t_sh_rqst = kcg_true;
  outC->ReceivedMessage.radioMetadata.d_ref = kcg_true;
  outC->ReceivedMessage.radioMetadata.q_dir = kcg_true;
  outC->ReceivedMessage.radioMetadata.d_emergencystop = kcg_true;
  outC->ReceivedMessage.radioMetadata.m_version = kcg_true;
  outC->ReceivedMessage.BG_Common_Header.valid = kcg_true;
  outC->ReceivedMessage.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->ReceivedMessage.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->ReceivedMessage.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->ReceivedMessage.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->ReceivedMessage.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->ReceivedMessage.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->ReceivedMessage.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->ReceivedMessage.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->ReceivedMessage.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->ReceivedMessage.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->ReceivedMessage.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->ReceivedMessage.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->ReceivedMessage.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->ReceivedMessage.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->ReceivedMessage.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->ReceivedMessage.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->ReceivedMessage.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->ReceivedMessage.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->ReceivedMessage.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->ReceivedMessage.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->ReceivedMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->ReceivedMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->ReceivedMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->ReceivedMessage.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->ReceivedMessage.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->ReceivedMessage.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->ReceivedMessage.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->ReceivedMessage.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->ReceivedMessage.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->ReceivedMessage.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->ReceivedMessage.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->ReceivedMessage.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->ReceivedMessage.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->ReceivedMessage.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->ReceivedMessage.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->ReceivedMessage.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->ReceivedMessage.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->ReceivedMessage.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->ReceivedMessage.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->ReceivedMessage.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->ReceivedMessage.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->ReceivedMessage.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->ReceivedMessage.packets.PacketHeaders[idx6].nid_packet = kcg_lit_int64(0);
    outC->ReceivedMessage.packets.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->ReceivedMessage.packets.PacketHeaders[idx6].valid = kcg_true;
    outC->ReceivedMessage.packets.PacketHeaders[idx6].startAddress =
      kcg_lit_int64(0);
    outC->ReceivedMessage.packets.PacketHeaders[idx6].endAddress = kcg_lit_int64(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->ReceivedMessage.packets.PacketData[idx7] = kcg_lit_int64(0);
  }
  outC->ReceivedMessage.sendingRBC.valid = kcg_true;
  outC->ReceivedMessage.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->ReceivedMessage.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->ReceivedMessage.sendingRBC.device_id = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void BuildOutput_reset_CheckEuroradioMessage(
  outC_BuildOutput_CheckEuroradioMessage *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** BuildOutput_CheckEuroradioMessage.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

