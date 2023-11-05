/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ThirdFilter_InformationFilter_Pkg_ThirdFilter.h"

/* InformationFilter_Pkg::ThirdFilter::ThirdFilter/ */
void ThirdFilter_InformationFilter_Pkg_ThirdFilter(
  /* inMessage/ */
  ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* inModus/ */
  M_MODE inModus,
  outC_ThirdFilter_InformationFilter_Pkg_ThirdFilter *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L11, inMessage);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&outC->_L68, &outC->_L11.sendingRBC);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&outC->sendingRBC, &outC->_L68);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&outC->_L76, &outC->sendingRBC);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L29, &outC->_L11.packets);
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L53, &outC->_L29.PacketHeaders);
  outC->_L24 = inModus;
  /* _L23/ */
  for (idx = 0; idx < 30; idx++) {
    outC->_L23[idx] = outC->_L24;
  }
  /* _L12= */
  for (idx1 = 0; idx1 < 30; idx1++) {
    /* _L12=(InformationFilter_Pkg::Common::GetPacketId#1)/ */
    GetPacketId_InformationFilter_Pkg_Common(
      &outC->_L53[idx1],
      &outC->Context_GetPacketId_1[idx1]);
    outC->_L12[idx1] = outC->Context_GetPacketId_1[idx1].outPacketId;
  }
  /* _L10= */
  for (idx2 = 0; idx2 < 30; idx2++) {
    /* _L10=(InformationFilter_Pkg::ThirdFilter::ModeFilter#2)/ */
    ModeFilter_InformationFilter_Pkg_ThirdFilter(
      outC->_L23[idx2],
      outC->_L12[idx2],
      &outC->Context_ModeFilter_2[idx2]);
    outC->_L10[idx2] = outC->Context_ModeFilter_2[idx2].outPacketAccept;
  }
  /* _L13= */
  for (idx3 = 0; idx3 < 30; idx3++) {
    /* _L13=(InformationFilter_Pkg::Common::SetValidFlag#1)/ */
    SetValidFlag_InformationFilter_Pkg_Common(
      outC->_L10[idx3],
      &outC->_L53[idx3],
      &outC->Context_SetValidFlag_1[idx3]);
    kcg_copy_MetadataElement_T_Common_Types_Pkg(
      &outC->_L13[idx3],
      &outC->Context_SetValidFlag_1[idx3].outPacket);
  }
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->packets, &outC->_L29);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L33, &outC->packets);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L52, &outC->_L33);
  if (kcg_true) {
    kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L52.PacketHeaders, &outC->_L13);
  }
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L30,
    &outC->_L11.Radio_Common_Header);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->radio_header,
    &outC->_L30);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L32,
    &outC->radio_header);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L21, &outC->_L11.BG_Common_Header);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->bg_header, &outC->_L21);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L31, &outC->bg_header);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->_L20,
    &outC->_L11.radioMetadata);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&outC->radio_metadata, &outC->_L20);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&outC->_L27, &outC->radio_metadata);
  outC->_L19 = outC->_L11.source;
  outC->source = outC->_L19;
  outC->_L26 = outC->source;
  outC->_L18 = outC->_L11.valid;
  outC->valid = outC->_L18;
  outC->_L25 = outC->valid;
  outC->_L22.valid = outC->_L25;
  outC->_L22.source = outC->_L26;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->_L22.radioMetadata,
    &outC->_L27);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L22.BG_Common_Header, &outC->_L31);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L22.Radio_Common_Header,
    &outC->_L32);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L22.packets, &outC->_L52);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&outC->_L22.sendingRBC, &outC->_L76);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->outMessage, &outC->_L22);
}

#ifndef KCG_USER_DEFINED_INIT
void ThirdFilter_init_InformationFilter_Pkg_ThirdFilter(
  outC_ThirdFilter_InformationFilter_Pkg_ThirdFilter *outC)
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

  outC->_L76.valid = kcg_true;
  outC->_L76.nid_c = kcg_lit_int32(0);
  outC->_L76.rbc_id = kcg_lit_int32(0);
  outC->_L76.device_id = kcg_lit_int32(0);
  outC->_L68.valid = kcg_true;
  outC->_L68.nid_c = kcg_lit_int32(0);
  outC->_L68.rbc_id = kcg_lit_int32(0);
  outC->_L68.device_id = kcg_lit_int32(0);
  outC->_L19 = msrc_undefined_Common_Types_Pkg;
  outC->_L20.t_train_reference = kcg_true;
  outC->_L20.nid_em = kcg_true;
  outC->_L20.q_scale = kcg_true;
  outC->_L20.d_sr = kcg_true;
  outC->_L20.t_sh_rqst = kcg_true;
  outC->_L20.d_ref = kcg_true;
  outC->_L20.q_dir = kcg_true;
  outC->_L20.d_emergencystop = kcg_true;
  outC->_L20.m_version = kcg_true;
  outC->_L21.valid = kcg_true;
  outC->_L21.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L21.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L21.q_media = Q_MEDIA_Balise;
  outC->_L21.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L21.m_mcount = kcg_lit_int32(0);
  outC->_L21.nid_c = kcg_lit_int32(0);
  outC->_L21.nid_bg = kcg_lit_int32(0);
  outC->_L21.q_link = Q_LINK_Unlinked;
  outC->_L21.bgPosition.valid = kcg_true;
  outC->_L21.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L21.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L21.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L21.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L21.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L21.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L21.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L21.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L21.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L21.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L21.bgPosition.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L21.BG_centerDetectionInaccuraccuracies.nominal = kcg_lit_int32(0);
  outC->_L21.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int32(0);
  outC->_L21.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int32(0);
  outC->_L21.q_nvlocacc = kcg_lit_int32(0);
  outC->_L21.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L21.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L21.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L30.radioDevice = kcg_lit_int32(0);
  outC->_L30.receivedSystemTime = kcg_lit_int32(0);
  outC->_L30.nid_message = kcg_lit_int32(0);
  outC->_L30.t_train = kcg_lit_int32(0);
  outC->_L30.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L30.nid_lrbg = kcg_lit_int32(0);
  outC->_L30.t_train_reference = kcg_lit_int32(0);
  outC->_L30.nid_em = kcg_lit_int32(0);
  outC->_L30.q_scale = Q_SCALE_10_cm_scale;
  outC->_L30.d_sr = kcg_lit_int32(0);
  outC->_L30.t_sh_rqst = kcg_lit_int32(0);
  outC->_L30.d_ref = kcg_lit_int32(0);
  outC->_L30.q_dir = Q_DIR_Reverse;
  outC->_L30.d_emergencystop = kcg_lit_int32(0);
  outC->_L30.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx3 = 0; idx3 < 30; idx3++) {
    outC->_L29.PacketHeaders[idx3].nid_packet = kcg_lit_int32(0);
    outC->_L29.PacketHeaders[idx3].q_dir = Q_DIR_Reverse;
    outC->_L29.PacketHeaders[idx3].valid = kcg_true;
    outC->_L29.PacketHeaders[idx3].startAddress = kcg_lit_int32(0);
    outC->_L29.PacketHeaders[idx3].endAddress = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 500; idx4++) {
    outC->_L29.PacketData[idx4] = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 30; idx5++) {
    outC->_L53[idx5].nid_packet = kcg_lit_int32(0);
    outC->_L53[idx5].q_dir = Q_DIR_Reverse;
    outC->_L53[idx5].valid = kcg_true;
    outC->_L53[idx5].startAddress = kcg_lit_int32(0);
    outC->_L53[idx5].endAddress = kcg_lit_int32(0);
  }
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->_L52.PacketHeaders[idx6].nid_packet = kcg_lit_int32(0);
    outC->_L52.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->_L52.PacketHeaders[idx6].valid = kcg_true;
    outC->_L52.PacketHeaders[idx6].startAddress = kcg_lit_int32(0);
    outC->_L52.PacketHeaders[idx6].endAddress = kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->_L52.PacketData[idx7] = kcg_lit_int32(0);
  }
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->_L33.PacketHeaders[idx8].nid_packet = kcg_lit_int32(0);
    outC->_L33.PacketHeaders[idx8].q_dir = Q_DIR_Reverse;
    outC->_L33.PacketHeaders[idx8].valid = kcg_true;
    outC->_L33.PacketHeaders[idx8].startAddress = kcg_lit_int32(0);
    outC->_L33.PacketHeaders[idx8].endAddress = kcg_lit_int32(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->_L33.PacketData[idx9] = kcg_lit_int32(0);
  }
  outC->_L32.radioDevice = kcg_lit_int32(0);
  outC->_L32.receivedSystemTime = kcg_lit_int32(0);
  outC->_L32.nid_message = kcg_lit_int32(0);
  outC->_L32.t_train = kcg_lit_int32(0);
  outC->_L32.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L32.nid_lrbg = kcg_lit_int32(0);
  outC->_L32.t_train_reference = kcg_lit_int32(0);
  outC->_L32.nid_em = kcg_lit_int32(0);
  outC->_L32.q_scale = Q_SCALE_10_cm_scale;
  outC->_L32.d_sr = kcg_lit_int32(0);
  outC->_L32.t_sh_rqst = kcg_lit_int32(0);
  outC->_L32.d_ref = kcg_lit_int32(0);
  outC->_L32.q_dir = Q_DIR_Reverse;
  outC->_L32.d_emergencystop = kcg_lit_int32(0);
  outC->_L32.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L31.valid = kcg_true;
  outC->_L31.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L31.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L31.q_media = Q_MEDIA_Balise;
  outC->_L31.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L31.m_mcount = kcg_lit_int32(0);
  outC->_L31.nid_c = kcg_lit_int32(0);
  outC->_L31.nid_bg = kcg_lit_int32(0);
  outC->_L31.q_link = Q_LINK_Unlinked;
  outC->_L31.bgPosition.valid = kcg_true;
  outC->_L31.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L31.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L31.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L31.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L31.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L31.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L31.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L31.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L31.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L31.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L31.bgPosition.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L31.BG_centerDetectionInaccuraccuracies.nominal = kcg_lit_int32(0);
  outC->_L31.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int32(0);
  outC->_L31.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int32(0);
  outC->_L31.q_nvlocacc = kcg_lit_int32(0);
  outC->_L31.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L31.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L31.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L27.t_train_reference = kcg_true;
  outC->_L27.nid_em = kcg_true;
  outC->_L27.q_scale = kcg_true;
  outC->_L27.d_sr = kcg_true;
  outC->_L27.t_sh_rqst = kcg_true;
  outC->_L27.d_ref = kcg_true;
  outC->_L27.q_dir = kcg_true;
  outC->_L27.d_emergencystop = kcg_true;
  outC->_L27.m_version = kcg_true;
  outC->_L26 = msrc_undefined_Common_Types_Pkg;
  outC->_L25 = kcg_true;
  outC->_L24 = M_MODE_Full_Supervision;
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->_L23[idx10] = M_MODE_Full_Supervision;
  }
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
  outC->_L22.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L22.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L22.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L22.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L22.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L22.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L22.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L22.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L22.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L22.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L22.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L22.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L22.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L22.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L22.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L22.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L22.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L22.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L22.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L22.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L22.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L22.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L22.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L22.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L22.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L22.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L22.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L22.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L22.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L22.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L22.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L22.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L22.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L22.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L22.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L22.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L22.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L22.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx11 = 0; idx11 < 30; idx11++) {
    outC->_L22.packets.PacketHeaders[idx11].nid_packet = kcg_lit_int32(0);
    outC->_L22.packets.PacketHeaders[idx11].q_dir = Q_DIR_Reverse;
    outC->_L22.packets.PacketHeaders[idx11].valid = kcg_true;
    outC->_L22.packets.PacketHeaders[idx11].startAddress = kcg_lit_int32(0);
    outC->_L22.packets.PacketHeaders[idx11].endAddress = kcg_lit_int32(0);
  }
  for (idx12 = 0; idx12 < 500; idx12++) {
    outC->_L22.packets.PacketData[idx12] = kcg_lit_int32(0);
  }
  outC->_L22.sendingRBC.valid = kcg_true;
  outC->_L22.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L22.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L22.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L18 = kcg_true;
  for (idx13 = 0; idx13 < 30; idx13++) {
    outC->_L13[idx13].nid_packet = kcg_lit_int32(0);
    outC->_L13[idx13].q_dir = Q_DIR_Reverse;
    outC->_L13[idx13].valid = kcg_true;
    outC->_L13[idx13].startAddress = kcg_lit_int32(0);
    outC->_L13[idx13].endAddress = kcg_lit_int32(0);
  }
  for (idx14 = 0; idx14 < 30; idx14++) {
    outC->_L12[idx14] = kcg_lit_int32(0);
  }
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
  outC->_L11.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L11.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L11.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L11.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L11.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L11.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L11.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L11.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L11.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L11.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L11.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L11.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L11.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L11.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L11.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L11.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L11.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L11.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L11.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L11.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L11.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L11.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L11.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L11.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L11.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L11.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L11.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L11.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L11.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L11.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L11.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L11.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L11.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L11.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L11.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L11.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L11.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L11.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx15 = 0; idx15 < 30; idx15++) {
    outC->_L11.packets.PacketHeaders[idx15].nid_packet = kcg_lit_int32(0);
    outC->_L11.packets.PacketHeaders[idx15].q_dir = Q_DIR_Reverse;
    outC->_L11.packets.PacketHeaders[idx15].valid = kcg_true;
    outC->_L11.packets.PacketHeaders[idx15].startAddress = kcg_lit_int32(0);
    outC->_L11.packets.PacketHeaders[idx15].endAddress = kcg_lit_int32(0);
  }
  for (idx16 = 0; idx16 < 500; idx16++) {
    outC->_L11.packets.PacketData[idx16] = kcg_lit_int32(0);
  }
  outC->_L11.sendingRBC.valid = kcg_true;
  outC->_L11.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L11.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L11.sendingRBC.device_id = kcg_lit_int32(0);
  for (idx17 = 0; idx17 < 30; idx17++) {
    outC->_L10[idx17] = kcg_true;
  }
  outC->sendingRBC.valid = kcg_true;
  outC->sendingRBC.nid_c = kcg_lit_int32(0);
  outC->sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->sendingRBC.device_id = kcg_lit_int32(0);
  for (idx18 = 0; idx18 < 30; idx18++) {
    outC->packets.PacketHeaders[idx18].nid_packet = kcg_lit_int32(0);
    outC->packets.PacketHeaders[idx18].q_dir = Q_DIR_Reverse;
    outC->packets.PacketHeaders[idx18].valid = kcg_true;
    outC->packets.PacketHeaders[idx18].startAddress = kcg_lit_int32(0);
    outC->packets.PacketHeaders[idx18].endAddress = kcg_lit_int32(0);
  }
  for (idx19 = 0; idx19 < 500; idx19++) {
    outC->packets.PacketData[idx19] = kcg_lit_int32(0);
  }
  outC->radio_header.radioDevice = kcg_lit_int32(0);
  outC->radio_header.receivedSystemTime = kcg_lit_int32(0);
  outC->radio_header.nid_message = kcg_lit_int32(0);
  outC->radio_header.t_train = kcg_lit_int32(0);
  outC->radio_header.m_ack = M_ACK_No_acknowledgement_required;
  outC->radio_header.nid_lrbg = kcg_lit_int32(0);
  outC->radio_header.t_train_reference = kcg_lit_int32(0);
  outC->radio_header.nid_em = kcg_lit_int32(0);
  outC->radio_header.q_scale = Q_SCALE_10_cm_scale;
  outC->radio_header.d_sr = kcg_lit_int32(0);
  outC->radio_header.t_sh_rqst = kcg_lit_int32(0);
  outC->radio_header.d_ref = kcg_lit_int32(0);
  outC->radio_header.q_dir = Q_DIR_Reverse;
  outC->radio_header.d_emergencystop = kcg_lit_int32(0);
  outC->radio_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->bg_header.valid = kcg_true;
  outC->bg_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->bg_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->bg_header.q_media = Q_MEDIA_Balise;
  outC->bg_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->bg_header.m_mcount = kcg_lit_int32(0);
  outC->bg_header.nid_c = kcg_lit_int32(0);
  outC->bg_header.nid_bg = kcg_lit_int32(0);
  outC->bg_header.q_link = Q_LINK_Unlinked;
  outC->bg_header.bgPosition.valid = kcg_true;
  outC->bg_header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->bg_header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->bg_header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->bg_header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->bg_header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->bg_header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->bg_header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->bg_header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->bg_header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->bg_header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->bg_header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->bg_header.BG_centerDetectionInaccuraccuracies.nominal = kcg_lit_int32(0);
  outC->bg_header.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int32(0);
  outC->bg_header.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int32(0);
  outC->bg_header.q_nvlocacc = kcg_lit_int32(0);
  outC->bg_header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->bg_header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->bg_header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->radio_metadata.t_train_reference = kcg_true;
  outC->radio_metadata.nid_em = kcg_true;
  outC->radio_metadata.q_scale = kcg_true;
  outC->radio_metadata.d_sr = kcg_true;
  outC->radio_metadata.t_sh_rqst = kcg_true;
  outC->radio_metadata.d_ref = kcg_true;
  outC->radio_metadata.q_dir = kcg_true;
  outC->radio_metadata.d_emergencystop = kcg_true;
  outC->radio_metadata.m_version = kcg_true;
  outC->source = msrc_undefined_Common_Types_Pkg;
  outC->valid = kcg_true;
  outC->outMessage.valid = kcg_true;
  outC->outMessage.source = msrc_undefined_Common_Types_Pkg;
  outC->outMessage.radioMetadata.t_train_reference = kcg_true;
  outC->outMessage.radioMetadata.nid_em = kcg_true;
  outC->outMessage.radioMetadata.q_scale = kcg_true;
  outC->outMessage.radioMetadata.d_sr = kcg_true;
  outC->outMessage.radioMetadata.t_sh_rqst = kcg_true;
  outC->outMessage.radioMetadata.d_ref = kcg_true;
  outC->outMessage.radioMetadata.q_dir = kcg_true;
  outC->outMessage.radioMetadata.d_emergencystop = kcg_true;
  outC->outMessage.radioMetadata.m_version = kcg_true;
  outC->outMessage.BG_Common_Header.valid = kcg_true;
  outC->outMessage.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->outMessage.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->outMessage.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->outMessage.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->outMessage.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->outMessage.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->outMessage.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->outMessage.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->outMessage.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->outMessage.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->outMessage.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->outMessage.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->outMessage.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->outMessage.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->outMessage.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->outMessage.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->outMessage.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->outMessage.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->outMessage.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->outMessage.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->outMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->outMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->outMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->outMessage.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->outMessage.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->outMessage.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->outMessage.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->outMessage.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->outMessage.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->outMessage.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->outMessage.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->outMessage.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->outMessage.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->outMessage.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->outMessage.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->outMessage.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->outMessage.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->outMessage.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->outMessage.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->outMessage.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->outMessage.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->outMessage.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx20 = 0; idx20 < 30; idx20++) {
    outC->outMessage.packets.PacketHeaders[idx20].nid_packet = kcg_lit_int32(0);
    outC->outMessage.packets.PacketHeaders[idx20].q_dir = Q_DIR_Reverse;
    outC->outMessage.packets.PacketHeaders[idx20].valid = kcg_true;
    outC->outMessage.packets.PacketHeaders[idx20].startAddress = kcg_lit_int32(0);
    outC->outMessage.packets.PacketHeaders[idx20].endAddress = kcg_lit_int32(0);
  }
  for (idx21 = 0; idx21 < 500; idx21++) {
    outC->outMessage.packets.PacketData[idx21] = kcg_lit_int32(0);
  }
  outC->outMessage.sendingRBC.valid = kcg_true;
  outC->outMessage.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->outMessage.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->outMessage.sendingRBC.device_id = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 30; idx2++) {
    /* _L13=(InformationFilter_Pkg::Common::SetValidFlag#1)/ */
    SetValidFlag_init_InformationFilter_Pkg_Common(
      &outC->Context_SetValidFlag_1[idx2]);
  }
  for (idx1 = 0; idx1 < 30; idx1++) {
    /* _L10=(InformationFilter_Pkg::ThirdFilter::ModeFilter#2)/ */
    ModeFilter_init_InformationFilter_Pkg_ThirdFilter(
      &outC->Context_ModeFilter_2[idx1]);
  }
  for (idx = 0; idx < 30; idx++) {
    /* _L12=(InformationFilter_Pkg::Common::GetPacketId#1)/ */
    GetPacketId_init_InformationFilter_Pkg_Common(
      &outC->Context_GetPacketId_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ThirdFilter_reset_InformationFilter_Pkg_ThirdFilter(
  outC_ThirdFilter_InformationFilter_Pkg_ThirdFilter *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;

  for (idx2 = 0; idx2 < 30; idx2++) {
    /* _L13=(InformationFilter_Pkg::Common::SetValidFlag#1)/ */
    SetValidFlag_reset_InformationFilter_Pkg_Common(
      &outC->Context_SetValidFlag_1[idx2]);
  }
  for (idx1 = 0; idx1 < 30; idx1++) {
    /* _L10=(InformationFilter_Pkg::ThirdFilter::ModeFilter#2)/ */
    ModeFilter_reset_InformationFilter_Pkg_ThirdFilter(
      &outC->Context_ModeFilter_2[idx1]);
  }
  for (idx = 0; idx < 30; idx++) {
    /* _L12=(InformationFilter_Pkg::Common::GetPacketId#1)/ */
    GetPacketId_reset_InformationFilter_Pkg_Common(
      &outC->Context_GetPacketId_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ThirdFilter_InformationFilter_Pkg_ThirdFilter.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

