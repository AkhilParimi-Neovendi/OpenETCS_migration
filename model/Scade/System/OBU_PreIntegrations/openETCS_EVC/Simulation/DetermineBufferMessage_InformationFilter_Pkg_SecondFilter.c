/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DetermineBufferMessage_InformationFilter_Pkg_SecondFilter.h"

/* InformationFilter_Pkg::SecondFilter::DetermineBufferMessage/ */
void DetermineBufferMessage_InformationFilter_Pkg_SecondFilter(
  /* messageForFilter2/ */
  ReceivedMessage_T_Common_Types_Pkg *messageForFilter2,
  /* inMessageForBuffer/ */
  ReceivedMessage_T_Common_Types_Pkg *inMessageForBuffer,
  outC_DetermineBufferMessage_InformationFilter_Pkg_SecondFilter *outC)
{
  kcg_size idx;

  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L1, messageForFilter2);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L15, &outC->_L1.packets);
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L19, &outC->_L15.PacketHeaders);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L2, inMessageForBuffer);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L30, &outC->_L2.packets);
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L52, &outC->_L30.PacketHeaders);
  /* _L125= */
  for (idx = 0; idx < 30; idx++) {
    /* _L125=(InformationFilter_Pkg::SecondFilter::DetermineValidFlags)/ */
    DetermineValidFlags_InformationFilter_Pkg_SecondFilter(
      &outC->_L19[idx],
      &outC->_L52[idx],
      &outC->Context_DetermineValidFlags[idx]);
    kcg_copy_MetadataElement_T_Common_Types_Pkg(
      &outC->_L125[idx],
      &outC->Context_DetermineValidFlags[idx].packet);
  }
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L123, &outC->_L15);
  if (kcg_true) {
    kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L123.PacketHeaders, &outC->_L125);
  }
  outC->_L10 = outC->_L1.valid;
  outC->_L11 = outC->_L1.source;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->_L12,
    &outC->_L1.radioMetadata);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L13, &outC->_L1.BG_Common_Header);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L14,
    &outC->_L1.Radio_Common_Header);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&outC->_L16, &outC->_L1.sendingRBC);
  outC->_L17.valid = outC->_L10;
  outC->_L17.source = outC->_L11;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->_L17.radioMetadata,
    &outC->_L12);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L17.BG_Common_Header, &outC->_L13);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L17.Radio_Common_Header,
    &outC->_L14);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L17.packets,
    &outC->_L123);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&outC->_L17.sendingRBC, &outC->_L16);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->outMessageForBuffer,
    &outC->_L17);
}

#ifndef KCG_USER_DEFINED_INIT
void DetermineBufferMessage_init_InformationFilter_Pkg_SecondFilter(
  outC_DetermineBufferMessage_InformationFilter_Pkg_SecondFilter *outC)
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

  for (idx1 = 0; idx1 < 30; idx1++) {
    outC->_L125[idx1].nid_packet = kcg_lit_int32(0);
    outC->_L125[idx1].q_dir = Q_DIR_Reverse;
    outC->_L125[idx1].valid = kcg_true;
    outC->_L125[idx1].startAddress = kcg_lit_int32(0);
    outC->_L125[idx1].endAddress = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L123.PacketHeaders[idx2].nid_packet = kcg_lit_int32(0);
    outC->_L123.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L123.PacketHeaders[idx2].valid = kcg_true;
    outC->_L123.PacketHeaders[idx2].startAddress = kcg_lit_int32(0);
    outC->_L123.PacketHeaders[idx2].endAddress = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L123.PacketData[idx3] = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L52[idx4].nid_packet = kcg_lit_int32(0);
    outC->_L52[idx4].q_dir = Q_DIR_Reverse;
    outC->_L52[idx4].valid = kcg_true;
    outC->_L52[idx4].startAddress = kcg_lit_int32(0);
    outC->_L52[idx4].endAddress = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 30; idx5++) {
    outC->_L30.PacketHeaders[idx5].nid_packet = kcg_lit_int32(0);
    outC->_L30.PacketHeaders[idx5].q_dir = Q_DIR_Reverse;
    outC->_L30.PacketHeaders[idx5].valid = kcg_true;
    outC->_L30.PacketHeaders[idx5].startAddress = kcg_lit_int32(0);
    outC->_L30.PacketHeaders[idx5].endAddress = kcg_lit_int32(0);
  }
  for (idx6 = 0; idx6 < 500; idx6++) {
    outC->_L30.PacketData[idx6] = kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 30; idx7++) {
    outC->_L19[idx7].nid_packet = kcg_lit_int32(0);
    outC->_L19[idx7].q_dir = Q_DIR_Reverse;
    outC->_L19[idx7].valid = kcg_true;
    outC->_L19[idx7].startAddress = kcg_lit_int32(0);
    outC->_L19[idx7].endAddress = kcg_lit_int32(0);
  }
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
  outC->_L17.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L17.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L17.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L17.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L17.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L17.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L17.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L17.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L17.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L17.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L17.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L17.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L17.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L17.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L17.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L17.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L17.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L17.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L17.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L17.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L17.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L17.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L17.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L17.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L17.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L17.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L17.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L17.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L17.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L17.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L17.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L17.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L17.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L17.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L17.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L17.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L17.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L17.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->_L17.packets.PacketHeaders[idx8].nid_packet = kcg_lit_int32(0);
    outC->_L17.packets.PacketHeaders[idx8].q_dir = Q_DIR_Reverse;
    outC->_L17.packets.PacketHeaders[idx8].valid = kcg_true;
    outC->_L17.packets.PacketHeaders[idx8].startAddress = kcg_lit_int32(0);
    outC->_L17.packets.PacketHeaders[idx8].endAddress = kcg_lit_int32(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->_L17.packets.PacketData[idx9] = kcg_lit_int32(0);
  }
  outC->_L17.sendingRBC.valid = kcg_true;
  outC->_L17.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L17.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L17.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L10 = kcg_true;
  outC->_L11 = msrc_undefined_Common_Types_Pkg;
  outC->_L12.t_train_reference = kcg_true;
  outC->_L12.nid_em = kcg_true;
  outC->_L12.q_scale = kcg_true;
  outC->_L12.d_sr = kcg_true;
  outC->_L12.t_sh_rqst = kcg_true;
  outC->_L12.d_ref = kcg_true;
  outC->_L12.q_dir = kcg_true;
  outC->_L12.d_emergencystop = kcg_true;
  outC->_L12.m_version = kcg_true;
  outC->_L13.valid = kcg_true;
  outC->_L13.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L13.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L13.q_media = Q_MEDIA_Balise;
  outC->_L13.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L13.m_mcount = kcg_lit_int32(0);
  outC->_L13.nid_c = kcg_lit_int32(0);
  outC->_L13.nid_bg = kcg_lit_int32(0);
  outC->_L13.q_link = Q_LINK_Unlinked;
  outC->_L13.bgPosition.valid = kcg_true;
  outC->_L13.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L13.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L13.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L13.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L13.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L13.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L13.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L13.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L13.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L13.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L13.bgPosition.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L13.BG_centerDetectionInaccuraccuracies.nominal = kcg_lit_int32(0);
  outC->_L13.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int32(0);
  outC->_L13.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int32(0);
  outC->_L13.q_nvlocacc = kcg_lit_int32(0);
  outC->_L13.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L13.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L13.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L14.radioDevice = kcg_lit_int32(0);
  outC->_L14.receivedSystemTime = kcg_lit_int32(0);
  outC->_L14.nid_message = kcg_lit_int32(0);
  outC->_L14.t_train = kcg_lit_int32(0);
  outC->_L14.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L14.nid_lrbg = kcg_lit_int32(0);
  outC->_L14.t_train_reference = kcg_lit_int32(0);
  outC->_L14.nid_em = kcg_lit_int32(0);
  outC->_L14.q_scale = Q_SCALE_10_cm_scale;
  outC->_L14.d_sr = kcg_lit_int32(0);
  outC->_L14.t_sh_rqst = kcg_lit_int32(0);
  outC->_L14.d_ref = kcg_lit_int32(0);
  outC->_L14.q_dir = Q_DIR_Reverse;
  outC->_L14.d_emergencystop = kcg_lit_int32(0);
  outC->_L14.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->_L15.PacketHeaders[idx10].nid_packet = kcg_lit_int32(0);
    outC->_L15.PacketHeaders[idx10].q_dir = Q_DIR_Reverse;
    outC->_L15.PacketHeaders[idx10].valid = kcg_true;
    outC->_L15.PacketHeaders[idx10].startAddress = kcg_lit_int32(0);
    outC->_L15.PacketHeaders[idx10].endAddress = kcg_lit_int32(0);
  }
  for (idx11 = 0; idx11 < 500; idx11++) {
    outC->_L15.PacketData[idx11] = kcg_lit_int32(0);
  }
  outC->_L16.valid = kcg_true;
  outC->_L16.nid_c = kcg_lit_int32(0);
  outC->_L16.rbc_id = kcg_lit_int32(0);
  outC->_L16.device_id = kcg_lit_int32(0);
  outC->_L2.valid = kcg_true;
  outC->_L2.source = msrc_undefined_Common_Types_Pkg;
  outC->_L2.radioMetadata.t_train_reference = kcg_true;
  outC->_L2.radioMetadata.nid_em = kcg_true;
  outC->_L2.radioMetadata.q_scale = kcg_true;
  outC->_L2.radioMetadata.d_sr = kcg_true;
  outC->_L2.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L2.radioMetadata.d_ref = kcg_true;
  outC->_L2.radioMetadata.q_dir = kcg_true;
  outC->_L2.radioMetadata.d_emergencystop = kcg_true;
  outC->_L2.radioMetadata.m_version = kcg_true;
  outC->_L2.BG_Common_Header.valid = kcg_true;
  outC->_L2.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L2.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L2.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L2.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L2.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L2.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L2.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L2.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L2.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L2.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L2.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L2.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L2.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L2.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L2.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L2.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L2.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L2.BG_Common_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L2.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L2.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L2.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L2.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L2.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L2.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L2.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L2.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L2.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L2.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L2.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L2.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L2.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L2.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L2.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L2.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L2.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L2.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L2.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L2.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L2.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx12 = 0; idx12 < 30; idx12++) {
    outC->_L2.packets.PacketHeaders[idx12].nid_packet = kcg_lit_int32(0);
    outC->_L2.packets.PacketHeaders[idx12].q_dir = Q_DIR_Reverse;
    outC->_L2.packets.PacketHeaders[idx12].valid = kcg_true;
    outC->_L2.packets.PacketHeaders[idx12].startAddress = kcg_lit_int32(0);
    outC->_L2.packets.PacketHeaders[idx12].endAddress = kcg_lit_int32(0);
  }
  for (idx13 = 0; idx13 < 500; idx13++) {
    outC->_L2.packets.PacketData[idx13] = kcg_lit_int32(0);
  }
  outC->_L2.sendingRBC.valid = kcg_true;
  outC->_L2.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L2.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L2.sendingRBC.device_id = kcg_lit_int32(0);
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
  for (idx14 = 0; idx14 < 30; idx14++) {
    outC->_L1.packets.PacketHeaders[idx14].nid_packet = kcg_lit_int32(0);
    outC->_L1.packets.PacketHeaders[idx14].q_dir = Q_DIR_Reverse;
    outC->_L1.packets.PacketHeaders[idx14].valid = kcg_true;
    outC->_L1.packets.PacketHeaders[idx14].startAddress = kcg_lit_int32(0);
    outC->_L1.packets.PacketHeaders[idx14].endAddress = kcg_lit_int32(0);
  }
  for (idx15 = 0; idx15 < 500; idx15++) {
    outC->_L1.packets.PacketData[idx15] = kcg_lit_int32(0);
  }
  outC->_L1.sendingRBC.valid = kcg_true;
  outC->_L1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->outMessageForBuffer.valid = kcg_true;
  outC->outMessageForBuffer.source = msrc_undefined_Common_Types_Pkg;
  outC->outMessageForBuffer.radioMetadata.t_train_reference = kcg_true;
  outC->outMessageForBuffer.radioMetadata.nid_em = kcg_true;
  outC->outMessageForBuffer.radioMetadata.q_scale = kcg_true;
  outC->outMessageForBuffer.radioMetadata.d_sr = kcg_true;
  outC->outMessageForBuffer.radioMetadata.t_sh_rqst = kcg_true;
  outC->outMessageForBuffer.radioMetadata.d_ref = kcg_true;
  outC->outMessageForBuffer.radioMetadata.q_dir = kcg_true;
  outC->outMessageForBuffer.radioMetadata.d_emergencystop = kcg_true;
  outC->outMessageForBuffer.radioMetadata.m_version = kcg_true;
  outC->outMessageForBuffer.BG_Common_Header.valid = kcg_true;
  outC->outMessageForBuffer.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->outMessageForBuffer.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->outMessageForBuffer.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->outMessageForBuffer.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->outMessageForBuffer.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->outMessageForBuffer.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->outMessageForBuffer.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->outMessageForBuffer.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->outMessageForBuffer.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->outMessageForBuffer.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->outMessageForBuffer.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->outMessageForBuffer.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->outMessageForBuffer.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->outMessageForBuffer.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->outMessageForBuffer.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->outMessageForBuffer.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->outMessageForBuffer.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->outMessageForBuffer.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->outMessageForBuffer.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->outMessageForBuffer.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->outMessageForBuffer.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->outMessageForBuffer.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->outMessageForBuffer.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->outMessageForBuffer.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->outMessageForBuffer.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->outMessageForBuffer.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->outMessageForBuffer.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->outMessageForBuffer.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->outMessageForBuffer.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->outMessageForBuffer.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->outMessageForBuffer.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->outMessageForBuffer.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->outMessageForBuffer.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->outMessageForBuffer.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->outMessageForBuffer.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->outMessageForBuffer.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->outMessageForBuffer.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->outMessageForBuffer.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->outMessageForBuffer.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->outMessageForBuffer.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->outMessageForBuffer.Radio_Common_Header.d_emergencystop = kcg_lit_int32(
      0);
  outC->outMessageForBuffer.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx16 = 0; idx16 < 30; idx16++) {
    outC->outMessageForBuffer.packets.PacketHeaders[idx16].nid_packet =
      kcg_lit_int32(0);
    outC->outMessageForBuffer.packets.PacketHeaders[idx16].q_dir = Q_DIR_Reverse;
    outC->outMessageForBuffer.packets.PacketHeaders[idx16].valid = kcg_true;
    outC->outMessageForBuffer.packets.PacketHeaders[idx16].startAddress =
      kcg_lit_int32(0);
    outC->outMessageForBuffer.packets.PacketHeaders[idx16].endAddress =
      kcg_lit_int32(0);
  }
  for (idx17 = 0; idx17 < 500; idx17++) {
    outC->outMessageForBuffer.packets.PacketData[idx17] = kcg_lit_int32(0);
  }
  outC->outMessageForBuffer.sendingRBC.valid = kcg_true;
  outC->outMessageForBuffer.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->outMessageForBuffer.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->outMessageForBuffer.sendingRBC.device_id = kcg_lit_int32(0);
  for (idx = 0; idx < 30; idx++) {
    /* _L125=(InformationFilter_Pkg::SecondFilter::DetermineValidFlags)/ */
    DetermineValidFlags_init_InformationFilter_Pkg_SecondFilter(
      &outC->Context_DetermineValidFlags[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void DetermineBufferMessage_reset_InformationFilter_Pkg_SecondFilter(
  outC_DetermineBufferMessage_InformationFilter_Pkg_SecondFilter *outC)
{
  kcg_size idx;

  for (idx = 0; idx < 30; idx++) {
    /* _L125=(InformationFilter_Pkg::SecondFilter::DetermineValidFlags)/ */
    DetermineValidFlags_reset_InformationFilter_Pkg_SecondFilter(
      &outC->Context_DetermineValidFlags[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** DetermineBufferMessage_InformationFilter_Pkg_SecondFilter.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

