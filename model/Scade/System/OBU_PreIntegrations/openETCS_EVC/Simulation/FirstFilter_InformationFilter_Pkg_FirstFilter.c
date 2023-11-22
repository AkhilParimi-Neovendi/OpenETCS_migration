/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FirstFilter_InformationFilter_Pkg_FirstFilter.h"

/* InformationFilter_Pkg::FirstFilter::FirstFilter/ */
void FirstFilter_InformationFilter_Pkg_FirstFilter(
  /* inMessage/ */
  ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* inLevel/ */
  M_LEVEL inLevel,
  /* inFilterEvents/ */
  filterRelatedEvents_T_Common_Types_Pkg *inFilterEvents,
  outC_FirstFilter_InformationFilter_Pkg_FirstFilter *outC)
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
  kcg_bool acc;
  kcg_size idx14;

  kcg_copy_filterRelatedEvents_T_Common_Types_Pkg(&outC->_L139, inFilterEvents);
  outC->_L148 = outC->_L139.pendingL1Transition;
  /* _L106/ */
  for (idx = 0; idx < 30; idx++) {
    outC->_L106[idx] = outC->_L148;
  }
  outC->_L149 = outC->_L139.pendingL12L3Transition;
  /* _L108/ */
  for (idx1 = 0; idx1 < 30; idx1++) {
    outC->_L108[idx1] = outC->_L149;
  }
  outC->_L150 = outC->_L139.pendingAckOfTrainDataFromRBC;
  /* _L110/ */
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L110[idx2] = outC->_L150;
  }
  outC->_L151 = outC->_L139.emergencyStopAccepted;
  /* _L111/ */
  for (idx3 = 0; idx3 < 30; idx3++) {
    outC->_L111[idx3] = outC->_L151;
  }
  outC->_L152 = outC->_L139.lastAckTextMessageId;
  /* _L112/ */
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L112[idx4] = outC->_L152;
  }
  outC->_L153 = outC->_L139.pendingNTCTransition;
  /* _L113/ */
  for (idx5 = 0; idx5 < 30; idx5++) {
    outC->_L113[idx5] = outC->_L153;
  }
  outC->_L154 = outC->_L139.SPPAndGradientOnBoard;
  /* _L120/ */
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->_L120[idx6] = outC->_L154;
  }
  outC->_L155 = outC->_L139.MACoverNotFullLength;
  /* _L121/ */
  for (idx7 = 0; idx7 < 30; idx7++) {
    outC->_L121[idx7] = outC->_L155;
  }
  outC->_L7 = inLevel;
  /* _L45/ */
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->_L45[idx8] = outC->_L7;
  }
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L2, inMessage);
  outC->_L5 = outC->_L2.source;
  outC->source = outC->_L5;
  outC->_L48 = outC->source;
  /* _L46/ */
  for (idx9 = 0; idx9 < 30; idx9++) {
    outC->_L46[idx9] = outC->_L48;
  }
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L81, &outC->_L2.packets);
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L98, &outC->_L81.PacketHeaders);
  /* _L49= */
  for (idx10 = 0; idx10 < 30; idx10++) {
    /* _L49=(InformationFilter_Pkg::Common::GetPacketId#1)/ */
    GetPacketId_InformationFilter_Pkg_Common(
      &outC->_L98[idx10],
      &outC->Context_GetPacketId_1[idx10]);
    outC->_L49[idx10] = outC->Context_GetPacketId_1[idx10].outPacketId;
  }
  /* _L114= */
  for (idx11 = 0; idx11 < 30; idx11++) {
    /* _L114=(InformationFilter_Pkg::FirstFilter::LevelFilter#1)/ */
    LevelFilter_InformationFilter_Pkg_FirstFilter(
      outC->_L106[idx11],
      outC->_L108[idx11],
      outC->_L110[idx11],
      outC->_L111[idx11],
      outC->_L112[idx11],
      outC->_L113[idx11],
      outC->_L120[idx11],
      outC->_L121[idx11],
      outC->_L45[idx11],
      outC->_L46[idx11],
      outC->_L49[idx11],
      &outC->Context_LevelFilter_1[idx11]);
    outC->_L114[idx11] =
      outC->Context_LevelFilter_1[idx11].outStoreInTransitionBuffer;
    outC->_L1[idx11] = outC->Context_LevelFilter_1[idx11].outPacketAccept;
  }
  /* _L184= */
  for (idx12 = 0; idx12 < 30; idx12++) {
    /* _L184=(InformationFilter_Pkg::Common::SetValidFlag#2)/ */
    SetValidFlag_InformationFilter_Pkg_Common(
      outC->_L1[idx12],
      &outC->_L98[idx12],
      &outC->Context_SetValidFlag_2[idx12]);
    kcg_copy_MetadataElement_T_Common_Types_Pkg(
      &outC->_L184[idx12],
      &outC->Context_SetValidFlag_2[idx12].outPacket);
  }
  /* _L183= */
  for (idx13 = 0; idx13 < 30; idx13++) {
    /* _L183=(InformationFilter_Pkg::Common::SetValidFlag#1)/ */
    SetValidFlag_InformationFilter_Pkg_Common(
      outC->_L114[idx13],
      &outC->_L98[idx13],
      &outC->Context_SetValidFlag_1[idx13]);
    kcg_copy_MetadataElement_T_Common_Types_Pkg(
      &outC->_L183[idx13],
      &outC->Context_SetValidFlag_1[idx13].outPacket);
  }
  outC->_L6 = outC->_L2.valid;
  outC->valid = outC->_L6;
  outC->_L76 = outC->valid;
  outC->_L77 = outC->source;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&outC->_L8, &outC->_L2.radioMetadata);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&outC->radio_metadata, &outC->_L8);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&outC->_L83, &outC->radio_metadata);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L9, &outC->_L2.BG_Common_Header);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->bg_header, &outC->_L9);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L78, &outC->bg_header);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L82,
    &outC->_L2.Radio_Common_Header);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->radio_header,
    &outC->_L82);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L84,
    &outC->radio_header);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->packets, &outC->_L81);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L85, &outC->packets);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L105, &outC->_L85);
  if (kcg_true) {
    kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L105.PacketHeaders, &outC->_L183);
  }
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&outC->_L129, &outC->_L2.sendingRBC);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&outC->sendingRBC, &outC->_L129);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&outC->_L138, &outC->sendingRBC);
  outC->_L58.valid = outC->_L76;
  outC->_L58.source = outC->_L77;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->_L58.radioMetadata,
    &outC->_L83);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L58.BG_Common_Header, &outC->_L78);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L58.Radio_Common_Header,
    &outC->_L84);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L58.packets,
    &outC->_L105);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&outC->_L58.sendingRBC, &outC->_L138);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->messageForBuffer,
    &outC->_L58);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&outC->_L175, &outC->sendingRBC);
  outC->_L168 = outC->valid;
  outC->_L167 = outC->source;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&outC->_L169, &outC->radio_metadata);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L172, &outC->bg_header);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L173,
    &outC->radio_header);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L171, &outC->packets);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L170, &outC->_L171);
  if (kcg_true) {
    kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L170.PacketHeaders, &outC->_L184);
  }
  outC->_L174.valid = outC->_L168;
  outC->_L174.source = outC->_L167;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->_L174.radioMetadata,
    &outC->_L169);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L174.BG_Common_Header, &outC->_L172);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L174.Radio_Common_Header,
    &outC->_L173);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L174.packets,
    &outC->_L170);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&outC->_L174.sendingRBC, &outC->_L175);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->messageForFilter2,
    &outC->_L174);
  outC->_L116 = kcg_false;
  outC->_L117 = outC->_L116;
  /* _L117= */
  for (idx14 = 0; idx14 < 30; idx14++) {
    acc = outC->_L117;
    outC->_L117 = acc | outC->_L114[idx14];
  }
  outC->storeInBuffer1 = outC->_L117;
}

#ifndef KCG_USER_DEFINED_INIT
void FirstFilter_init_InformationFilter_Pkg_FirstFilter(
  outC_FirstFilter_InformationFilter_Pkg_FirstFilter *outC)
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
  kcg_size idx38;
  kcg_size idx39;
  kcg_size idx40;
  kcg_size idx41;

  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L184[idx4].nid_packet = kcg_lit_int32(0);
    outC->_L184[idx4].q_dir = Q_DIR_Reverse;
    outC->_L184[idx4].valid = kcg_true;
    outC->_L184[idx4].startAddress = kcg_lit_int32(0);
    outC->_L184[idx4].endAddress = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 30; idx5++) {
    outC->_L183[idx5].nid_packet = kcg_lit_int32(0);
    outC->_L183[idx5].q_dir = Q_DIR_Reverse;
    outC->_L183[idx5].valid = kcg_true;
    outC->_L183[idx5].startAddress = kcg_lit_int32(0);
    outC->_L183[idx5].endAddress = kcg_lit_int32(0);
  }
  outC->_L58.valid = kcg_true;
  outC->_L58.source = msrc_undefined_Common_Types_Pkg;
  outC->_L58.radioMetadata.t_train_reference = kcg_true;
  outC->_L58.radioMetadata.nid_em = kcg_true;
  outC->_L58.radioMetadata.q_scale = kcg_true;
  outC->_L58.radioMetadata.d_sr = kcg_true;
  outC->_L58.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L58.radioMetadata.d_ref = kcg_true;
  outC->_L58.radioMetadata.q_dir = kcg_true;
  outC->_L58.radioMetadata.d_emergencystop = kcg_true;
  outC->_L58.radioMetadata.m_version = kcg_true;
  outC->_L58.BG_Common_Header.valid = kcg_true;
  outC->_L58.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L58.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L58.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L58.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L58.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L58.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L58.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L58.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L58.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L58.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L58.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L58.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L58.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L58.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L58.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L58.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L58.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L58.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L58.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L58.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L58.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L58.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L58.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L58.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L58.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L58.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L58.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L58.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L58.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L58.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L58.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L58.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L58.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L58.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L58.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L58.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L58.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L58.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L58.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L58.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L58.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L58.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->_L58.packets.PacketHeaders[idx6].nid_packet = kcg_lit_int32(0);
    outC->_L58.packets.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->_L58.packets.PacketHeaders[idx6].valid = kcg_true;
    outC->_L58.packets.PacketHeaders[idx6].startAddress = kcg_lit_int32(0);
    outC->_L58.packets.PacketHeaders[idx6].endAddress = kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->_L58.packets.PacketData[idx7] = kcg_lit_int32(0);
  }
  outC->_L58.sendingRBC.valid = kcg_true;
  outC->_L58.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L58.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L58.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L76 = kcg_true;
  outC->_L77 = msrc_undefined_Common_Types_Pkg;
  outC->_L78.valid = kcg_true;
  outC->_L78.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L78.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L78.q_media = Q_MEDIA_Balise;
  outC->_L78.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L78.m_mcount = kcg_lit_int32(0);
  outC->_L78.nid_c = kcg_lit_int32(0);
  outC->_L78.nid_bg = kcg_lit_int32(0);
  outC->_L78.q_link = Q_LINK_Unlinked;
  outC->_L78.bgPosition.valid = kcg_true;
  outC->_L78.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L78.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L78.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L78.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L78.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L78.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L78.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L78.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L78.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L78.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L78.bgPosition.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L78.BG_centerDetectionInaccuraccuracies.nominal = kcg_lit_int32(0);
  outC->_L78.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int32(0);
  outC->_L78.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int32(0);
  outC->_L78.q_nvlocacc = kcg_lit_int32(0);
  outC->_L78.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L78.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L78.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L83.t_train_reference = kcg_true;
  outC->_L83.nid_em = kcg_true;
  outC->_L83.q_scale = kcg_true;
  outC->_L83.d_sr = kcg_true;
  outC->_L83.t_sh_rqst = kcg_true;
  outC->_L83.d_ref = kcg_true;
  outC->_L83.q_dir = kcg_true;
  outC->_L83.d_emergencystop = kcg_true;
  outC->_L83.m_version = kcg_true;
  outC->_L84.radioDevice = kcg_lit_int32(0);
  outC->_L84.receivedSystemTime = kcg_lit_int32(0);
  outC->_L84.nid_message = kcg_lit_int32(0);
  outC->_L84.t_train = kcg_lit_int32(0);
  outC->_L84.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L84.nid_lrbg = kcg_lit_int32(0);
  outC->_L84.t_train_reference = kcg_lit_int32(0);
  outC->_L84.nid_em = kcg_lit_int32(0);
  outC->_L84.q_scale = Q_SCALE_10_cm_scale;
  outC->_L84.d_sr = kcg_lit_int32(0);
  outC->_L84.t_sh_rqst = kcg_lit_int32(0);
  outC->_L84.d_ref = kcg_lit_int32(0);
  outC->_L84.q_dir = Q_DIR_Reverse;
  outC->_L84.d_emergencystop = kcg_lit_int32(0);
  outC->_L84.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->_L85.PacketHeaders[idx8].nid_packet = kcg_lit_int32(0);
    outC->_L85.PacketHeaders[idx8].q_dir = Q_DIR_Reverse;
    outC->_L85.PacketHeaders[idx8].valid = kcg_true;
    outC->_L85.PacketHeaders[idx8].startAddress = kcg_lit_int32(0);
    outC->_L85.PacketHeaders[idx8].endAddress = kcg_lit_int32(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->_L85.PacketData[idx9] = kcg_lit_int32(0);
  }
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->_L105.PacketHeaders[idx10].nid_packet = kcg_lit_int32(0);
    outC->_L105.PacketHeaders[idx10].q_dir = Q_DIR_Reverse;
    outC->_L105.PacketHeaders[idx10].valid = kcg_true;
    outC->_L105.PacketHeaders[idx10].startAddress = kcg_lit_int32(0);
    outC->_L105.PacketHeaders[idx10].endAddress = kcg_lit_int32(0);
  }
  for (idx11 = 0; idx11 < 500; idx11++) {
    outC->_L105.PacketData[idx11] = kcg_lit_int32(0);
  }
  outC->_L138.valid = kcg_true;
  outC->_L138.nid_c = kcg_lit_int32(0);
  outC->_L138.rbc_id = kcg_lit_int32(0);
  outC->_L138.device_id = kcg_lit_int32(0);
  outC->_L167 = msrc_undefined_Common_Types_Pkg;
  outC->_L168 = kcg_true;
  outC->_L169.t_train_reference = kcg_true;
  outC->_L169.nid_em = kcg_true;
  outC->_L169.q_scale = kcg_true;
  outC->_L169.d_sr = kcg_true;
  outC->_L169.t_sh_rqst = kcg_true;
  outC->_L169.d_ref = kcg_true;
  outC->_L169.q_dir = kcg_true;
  outC->_L169.d_emergencystop = kcg_true;
  outC->_L169.m_version = kcg_true;
  for (idx12 = 0; idx12 < 30; idx12++) {
    outC->_L170.PacketHeaders[idx12].nid_packet = kcg_lit_int32(0);
    outC->_L170.PacketHeaders[idx12].q_dir = Q_DIR_Reverse;
    outC->_L170.PacketHeaders[idx12].valid = kcg_true;
    outC->_L170.PacketHeaders[idx12].startAddress = kcg_lit_int32(0);
    outC->_L170.PacketHeaders[idx12].endAddress = kcg_lit_int32(0);
  }
  for (idx13 = 0; idx13 < 500; idx13++) {
    outC->_L170.PacketData[idx13] = kcg_lit_int32(0);
  }
  for (idx14 = 0; idx14 < 30; idx14++) {
    outC->_L171.PacketHeaders[idx14].nid_packet = kcg_lit_int32(0);
    outC->_L171.PacketHeaders[idx14].q_dir = Q_DIR_Reverse;
    outC->_L171.PacketHeaders[idx14].valid = kcg_true;
    outC->_L171.PacketHeaders[idx14].startAddress = kcg_lit_int32(0);
    outC->_L171.PacketHeaders[idx14].endAddress = kcg_lit_int32(0);
  }
  for (idx15 = 0; idx15 < 500; idx15++) {
    outC->_L171.PacketData[idx15] = kcg_lit_int32(0);
  }
  outC->_L172.valid = kcg_true;
  outC->_L172.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L172.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L172.q_media = Q_MEDIA_Balise;
  outC->_L172.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L172.m_mcount = kcg_lit_int32(0);
  outC->_L172.nid_c = kcg_lit_int32(0);
  outC->_L172.nid_bg = kcg_lit_int32(0);
  outC->_L172.q_link = Q_LINK_Unlinked;
  outC->_L172.bgPosition.valid = kcg_true;
  outC->_L172.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L172.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L172.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L172.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L172.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L172.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L172.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L172.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L172.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L172.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L172.bgPosition.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L172.BG_centerDetectionInaccuraccuracies.nominal = kcg_lit_int32(0);
  outC->_L172.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int32(0);
  outC->_L172.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int32(0);
  outC->_L172.q_nvlocacc = kcg_lit_int32(0);
  outC->_L172.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L172.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L172.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L173.radioDevice = kcg_lit_int32(0);
  outC->_L173.receivedSystemTime = kcg_lit_int32(0);
  outC->_L173.nid_message = kcg_lit_int32(0);
  outC->_L173.t_train = kcg_lit_int32(0);
  outC->_L173.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L173.nid_lrbg = kcg_lit_int32(0);
  outC->_L173.t_train_reference = kcg_lit_int32(0);
  outC->_L173.nid_em = kcg_lit_int32(0);
  outC->_L173.q_scale = Q_SCALE_10_cm_scale;
  outC->_L173.d_sr = kcg_lit_int32(0);
  outC->_L173.t_sh_rqst = kcg_lit_int32(0);
  outC->_L173.d_ref = kcg_lit_int32(0);
  outC->_L173.q_dir = Q_DIR_Reverse;
  outC->_L173.d_emergencystop = kcg_lit_int32(0);
  outC->_L173.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L174.valid = kcg_true;
  outC->_L174.source = msrc_undefined_Common_Types_Pkg;
  outC->_L174.radioMetadata.t_train_reference = kcg_true;
  outC->_L174.radioMetadata.nid_em = kcg_true;
  outC->_L174.radioMetadata.q_scale = kcg_true;
  outC->_L174.radioMetadata.d_sr = kcg_true;
  outC->_L174.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L174.radioMetadata.d_ref = kcg_true;
  outC->_L174.radioMetadata.q_dir = kcg_true;
  outC->_L174.radioMetadata.d_emergencystop = kcg_true;
  outC->_L174.radioMetadata.m_version = kcg_true;
  outC->_L174.BG_Common_Header.valid = kcg_true;
  outC->_L174.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L174.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L174.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L174.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L174.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L174.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L174.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L174.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L174.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L174.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L174.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L174.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L174.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L174.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L174.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L174.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L174.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L174.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L174.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L174.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L174.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L174.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L174.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L174.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L174.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L174.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L174.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L174.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L174.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L174.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L174.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L174.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L174.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L174.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L174.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L174.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L174.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L174.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L174.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L174.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L174.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L174.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx16 = 0; idx16 < 30; idx16++) {
    outC->_L174.packets.PacketHeaders[idx16].nid_packet = kcg_lit_int32(0);
    outC->_L174.packets.PacketHeaders[idx16].q_dir = Q_DIR_Reverse;
    outC->_L174.packets.PacketHeaders[idx16].valid = kcg_true;
    outC->_L174.packets.PacketHeaders[idx16].startAddress = kcg_lit_int32(0);
    outC->_L174.packets.PacketHeaders[idx16].endAddress = kcg_lit_int32(0);
  }
  for (idx17 = 0; idx17 < 500; idx17++) {
    outC->_L174.packets.PacketData[idx17] = kcg_lit_int32(0);
  }
  outC->_L174.sendingRBC.valid = kcg_true;
  outC->_L174.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L174.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L174.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L175.valid = kcg_true;
  outC->_L175.nid_c = kcg_lit_int32(0);
  outC->_L175.rbc_id = kcg_lit_int32(0);
  outC->_L175.device_id = kcg_lit_int32(0);
  outC->_L155 = kcg_true;
  outC->_L154 = kcg_true;
  outC->_L153 = kcg_true;
  outC->_L152 = kcg_lit_int32(0);
  outC->_L151 = kcg_true;
  outC->_L150 = kcg_true;
  outC->_L149 = kcg_true;
  outC->_L148 = kcg_true;
  outC->_L139.pendingL1Transition = kcg_true;
  outC->_L139.pendingL12L3Transition = kcg_true;
  outC->_L139.pendingAckOfTrainDataFromRBC = kcg_true;
  outC->_L139.emergencyStopAccepted = kcg_true;
  outC->_L139.lastAckTextMessageId = kcg_lit_int32(0);
  outC->_L139.pendingNTCTransition = kcg_true;
  outC->_L139.SPPAndGradientOnBoard = kcg_true;
  outC->_L139.MACoverNotFullLength = kcg_true;
  outC->_L129.valid = kcg_true;
  outC->_L129.nid_c = kcg_lit_int32(0);
  outC->_L129.rbc_id = kcg_lit_int32(0);
  outC->_L129.device_id = kcg_lit_int32(0);
  for (idx18 = 0; idx18 < 30; idx18++) {
    outC->_L121[idx18] = kcg_true;
  }
  for (idx19 = 0; idx19 < 30; idx19++) {
    outC->_L120[idx19] = kcg_true;
  }
  outC->_L117 = kcg_true;
  outC->_L116 = kcg_true;
  for (idx20 = 0; idx20 < 30; idx20++) {
    outC->_L114[idx20] = kcg_true;
  }
  for (idx21 = 0; idx21 < 30; idx21++) {
    outC->_L113[idx21] = kcg_true;
  }
  for (idx22 = 0; idx22 < 30; idx22++) {
    outC->_L112[idx22] = kcg_lit_int32(0);
  }
  for (idx23 = 0; idx23 < 30; idx23++) {
    outC->_L111[idx23] = kcg_true;
  }
  for (idx24 = 0; idx24 < 30; idx24++) {
    outC->_L110[idx24] = kcg_true;
  }
  for (idx25 = 0; idx25 < 30; idx25++) {
    outC->_L108[idx25] = kcg_true;
  }
  for (idx26 = 0; idx26 < 30; idx26++) {
    outC->_L106[idx26] = kcg_true;
  }
  for (idx27 = 0; idx27 < 30; idx27++) {
    outC->_L98[idx27].nid_packet = kcg_lit_int32(0);
    outC->_L98[idx27].q_dir = Q_DIR_Reverse;
    outC->_L98[idx27].valid = kcg_true;
    outC->_L98[idx27].startAddress = kcg_lit_int32(0);
    outC->_L98[idx27].endAddress = kcg_lit_int32(0);
  }
  for (idx28 = 0; idx28 < 30; idx28++) {
    outC->_L81.PacketHeaders[idx28].nid_packet = kcg_lit_int32(0);
    outC->_L81.PacketHeaders[idx28].q_dir = Q_DIR_Reverse;
    outC->_L81.PacketHeaders[idx28].valid = kcg_true;
    outC->_L81.PacketHeaders[idx28].startAddress = kcg_lit_int32(0);
    outC->_L81.PacketHeaders[idx28].endAddress = kcg_lit_int32(0);
  }
  for (idx29 = 0; idx29 < 500; idx29++) {
    outC->_L81.PacketData[idx29] = kcg_lit_int32(0);
  }
  outC->_L82.radioDevice = kcg_lit_int32(0);
  outC->_L82.receivedSystemTime = kcg_lit_int32(0);
  outC->_L82.nid_message = kcg_lit_int32(0);
  outC->_L82.t_train = kcg_lit_int32(0);
  outC->_L82.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L82.nid_lrbg = kcg_lit_int32(0);
  outC->_L82.t_train_reference = kcg_lit_int32(0);
  outC->_L82.nid_em = kcg_lit_int32(0);
  outC->_L82.q_scale = Q_SCALE_10_cm_scale;
  outC->_L82.d_sr = kcg_lit_int32(0);
  outC->_L82.t_sh_rqst = kcg_lit_int32(0);
  outC->_L82.d_ref = kcg_lit_int32(0);
  outC->_L82.q_dir = Q_DIR_Reverse;
  outC->_L82.d_emergencystop = kcg_lit_int32(0);
  outC->_L82.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx30 = 0; idx30 < 30; idx30++) {
    outC->_L45[idx30] = M_LEVEL_Level_0;
  }
  for (idx31 = 0; idx31 < 30; idx31++) {
    outC->_L49[idx31] = kcg_lit_int32(0);
  }
  outC->_L48 = msrc_undefined_Common_Types_Pkg;
  for (idx32 = 0; idx32 < 30; idx32++) {
    outC->_L46[idx32] = msrc_undefined_Common_Types_Pkg;
  }
  for (idx33 = 0; idx33 < 30; idx33++) {
    outC->_L1[idx33] = kcg_true;
  }
  outC->_L9.valid = kcg_true;
  outC->_L9.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L9.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L9.q_media = Q_MEDIA_Balise;
  outC->_L9.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L9.m_mcount = kcg_lit_int32(0);
  outC->_L9.nid_c = kcg_lit_int32(0);
  outC->_L9.nid_bg = kcg_lit_int32(0);
  outC->_L9.q_link = Q_LINK_Unlinked;
  outC->_L9.bgPosition.valid = kcg_true;
  outC->_L9.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L9.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L9.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L9.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L9.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L9.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L9.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L9.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L9.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L9.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L9.bgPosition.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L9.BG_centerDetectionInaccuraccuracies.nominal = kcg_lit_int32(0);
  outC->_L9.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int32(0);
  outC->_L9.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int32(0);
  outC->_L9.q_nvlocacc = kcg_lit_int32(0);
  outC->_L9.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L9.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L9.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L8.t_train_reference = kcg_true;
  outC->_L8.nid_em = kcg_true;
  outC->_L8.q_scale = kcg_true;
  outC->_L8.d_sr = kcg_true;
  outC->_L8.t_sh_rqst = kcg_true;
  outC->_L8.d_ref = kcg_true;
  outC->_L8.q_dir = kcg_true;
  outC->_L8.d_emergencystop = kcg_true;
  outC->_L8.m_version = kcg_true;
  outC->_L7 = M_LEVEL_Level_0;
  outC->_L5 = msrc_undefined_Common_Types_Pkg;
  outC->_L6 = kcg_true;
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
  for (idx34 = 0; idx34 < 30; idx34++) {
    outC->_L2.packets.PacketHeaders[idx34].nid_packet = kcg_lit_int32(0);
    outC->_L2.packets.PacketHeaders[idx34].q_dir = Q_DIR_Reverse;
    outC->_L2.packets.PacketHeaders[idx34].valid = kcg_true;
    outC->_L2.packets.PacketHeaders[idx34].startAddress = kcg_lit_int32(0);
    outC->_L2.packets.PacketHeaders[idx34].endAddress = kcg_lit_int32(0);
  }
  for (idx35 = 0; idx35 < 500; idx35++) {
    outC->_L2.packets.PacketData[idx35] = kcg_lit_int32(0);
  }
  outC->_L2.sendingRBC.valid = kcg_true;
  outC->_L2.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L2.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L2.sendingRBC.device_id = kcg_lit_int32(0);
  outC->sendingRBC.valid = kcg_true;
  outC->sendingRBC.nid_c = kcg_lit_int32(0);
  outC->sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->sendingRBC.device_id = kcg_lit_int32(0);
  for (idx36 = 0; idx36 < 30; idx36++) {
    outC->packets.PacketHeaders[idx36].nid_packet = kcg_lit_int32(0);
    outC->packets.PacketHeaders[idx36].q_dir = Q_DIR_Reverse;
    outC->packets.PacketHeaders[idx36].valid = kcg_true;
    outC->packets.PacketHeaders[idx36].startAddress = kcg_lit_int32(0);
    outC->packets.PacketHeaders[idx36].endAddress = kcg_lit_int32(0);
  }
  for (idx37 = 0; idx37 < 500; idx37++) {
    outC->packets.PacketData[idx37] = kcg_lit_int32(0);
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
  outC->radio_metadata.t_train_reference = kcg_true;
  outC->radio_metadata.nid_em = kcg_true;
  outC->radio_metadata.q_scale = kcg_true;
  outC->radio_metadata.d_sr = kcg_true;
  outC->radio_metadata.t_sh_rqst = kcg_true;
  outC->radio_metadata.d_ref = kcg_true;
  outC->radio_metadata.q_dir = kcg_true;
  outC->radio_metadata.d_emergencystop = kcg_true;
  outC->radio_metadata.m_version = kcg_true;
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
  outC->valid = kcg_true;
  outC->source = msrc_undefined_Common_Types_Pkg;
  outC->storeInBuffer1 = kcg_true;
  outC->messageForBuffer.valid = kcg_true;
  outC->messageForBuffer.source = msrc_undefined_Common_Types_Pkg;
  outC->messageForBuffer.radioMetadata.t_train_reference = kcg_true;
  outC->messageForBuffer.radioMetadata.nid_em = kcg_true;
  outC->messageForBuffer.radioMetadata.q_scale = kcg_true;
  outC->messageForBuffer.radioMetadata.d_sr = kcg_true;
  outC->messageForBuffer.radioMetadata.t_sh_rqst = kcg_true;
  outC->messageForBuffer.radioMetadata.d_ref = kcg_true;
  outC->messageForBuffer.radioMetadata.q_dir = kcg_true;
  outC->messageForBuffer.radioMetadata.d_emergencystop = kcg_true;
  outC->messageForBuffer.radioMetadata.m_version = kcg_true;
  outC->messageForBuffer.BG_Common_Header.valid = kcg_true;
  outC->messageForBuffer.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->messageForBuffer.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->messageForBuffer.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->messageForBuffer.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->messageForBuffer.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->messageForBuffer.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->messageForBuffer.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->messageForBuffer.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->messageForBuffer.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->messageForBuffer.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->messageForBuffer.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->messageForBuffer.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->messageForBuffer.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->messageForBuffer.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->messageForBuffer.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->messageForBuffer.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->messageForBuffer.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->messageForBuffer.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->messageForBuffer.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->messageForBuffer.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->messageForBuffer.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->messageForBuffer.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->messageForBuffer.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->messageForBuffer.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->messageForBuffer.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->messageForBuffer.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->messageForBuffer.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->messageForBuffer.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->messageForBuffer.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(
      0);
  outC->messageForBuffer.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->messageForBuffer.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->messageForBuffer.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->messageForBuffer.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->messageForBuffer.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->messageForBuffer.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->messageForBuffer.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->messageForBuffer.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->messageForBuffer.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->messageForBuffer.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->messageForBuffer.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->messageForBuffer.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->messageForBuffer.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx38 = 0; idx38 < 30; idx38++) {
    outC->messageForBuffer.packets.PacketHeaders[idx38].nid_packet =
      kcg_lit_int32(0);
    outC->messageForBuffer.packets.PacketHeaders[idx38].q_dir = Q_DIR_Reverse;
    outC->messageForBuffer.packets.PacketHeaders[idx38].valid = kcg_true;
    outC->messageForBuffer.packets.PacketHeaders[idx38].startAddress =
      kcg_lit_int32(0);
    outC->messageForBuffer.packets.PacketHeaders[idx38].endAddress =
      kcg_lit_int32(0);
  }
  for (idx39 = 0; idx39 < 500; idx39++) {
    outC->messageForBuffer.packets.PacketData[idx39] = kcg_lit_int32(0);
  }
  outC->messageForBuffer.sendingRBC.valid = kcg_true;
  outC->messageForBuffer.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->messageForBuffer.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->messageForBuffer.sendingRBC.device_id = kcg_lit_int32(0);
  outC->messageForFilter2.valid = kcg_true;
  outC->messageForFilter2.source = msrc_undefined_Common_Types_Pkg;
  outC->messageForFilter2.radioMetadata.t_train_reference = kcg_true;
  outC->messageForFilter2.radioMetadata.nid_em = kcg_true;
  outC->messageForFilter2.radioMetadata.q_scale = kcg_true;
  outC->messageForFilter2.radioMetadata.d_sr = kcg_true;
  outC->messageForFilter2.radioMetadata.t_sh_rqst = kcg_true;
  outC->messageForFilter2.radioMetadata.d_ref = kcg_true;
  outC->messageForFilter2.radioMetadata.q_dir = kcg_true;
  outC->messageForFilter2.radioMetadata.d_emergencystop = kcg_true;
  outC->messageForFilter2.radioMetadata.m_version = kcg_true;
  outC->messageForFilter2.BG_Common_Header.valid = kcg_true;
  outC->messageForFilter2.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->messageForFilter2.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->messageForFilter2.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->messageForFilter2.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->messageForFilter2.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->messageForFilter2.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->messageForFilter2.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->messageForFilter2.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->messageForFilter2.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->messageForFilter2.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(
      0);
  outC->messageForFilter2.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->messageForFilter2.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(
      0);
  outC->messageForFilter2.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(
      0);
  outC->messageForFilter2.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->messageForFilter2.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->messageForFilter2.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->messageForFilter2.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->messageForFilter2.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->messageForFilter2.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->messageForFilter2.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->messageForFilter2.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->messageForFilter2.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->messageForFilter2.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->messageForFilter2.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->messageForFilter2.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->messageForFilter2.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->messageForFilter2.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->messageForFilter2.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->messageForFilter2.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->messageForFilter2.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->messageForFilter2.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->messageForFilter2.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->messageForFilter2.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->messageForFilter2.Radio_Common_Header.t_train_reference = kcg_lit_int32(
      0);
  outC->messageForFilter2.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->messageForFilter2.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->messageForFilter2.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->messageForFilter2.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->messageForFilter2.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->messageForFilter2.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->messageForFilter2.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->messageForFilter2.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx40 = 0; idx40 < 30; idx40++) {
    outC->messageForFilter2.packets.PacketHeaders[idx40].nid_packet =
      kcg_lit_int32(0);
    outC->messageForFilter2.packets.PacketHeaders[idx40].q_dir = Q_DIR_Reverse;
    outC->messageForFilter2.packets.PacketHeaders[idx40].valid = kcg_true;
    outC->messageForFilter2.packets.PacketHeaders[idx40].startAddress =
      kcg_lit_int32(0);
    outC->messageForFilter2.packets.PacketHeaders[idx40].endAddress =
      kcg_lit_int32(0);
  }
  for (idx41 = 0; idx41 < 500; idx41++) {
    outC->messageForFilter2.packets.PacketData[idx41] = kcg_lit_int32(0);
  }
  outC->messageForFilter2.sendingRBC.valid = kcg_true;
  outC->messageForFilter2.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->messageForFilter2.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->messageForFilter2.sendingRBC.device_id = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 30; idx3++) {
    /* _L183=(InformationFilter_Pkg::Common::SetValidFlag#1)/ */
    SetValidFlag_init_InformationFilter_Pkg_Common(
      &outC->Context_SetValidFlag_1[idx3]);
  }
  for (idx2 = 0; idx2 < 30; idx2++) {
    /* _L184=(InformationFilter_Pkg::Common::SetValidFlag#2)/ */
    SetValidFlag_init_InformationFilter_Pkg_Common(
      &outC->Context_SetValidFlag_2[idx2]);
  }
  for (idx1 = 0; idx1 < 30; idx1++) {
    /* _L114=(InformationFilter_Pkg::FirstFilter::LevelFilter#1)/ */
    LevelFilter_init_InformationFilter_Pkg_FirstFilter(
      &outC->Context_LevelFilter_1[idx1]);
  }
  for (idx = 0; idx < 30; idx++) {
    /* _L49=(InformationFilter_Pkg::Common::GetPacketId#1)/ */
    GetPacketId_init_InformationFilter_Pkg_Common(
      &outC->Context_GetPacketId_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void FirstFilter_reset_InformationFilter_Pkg_FirstFilter(
  outC_FirstFilter_InformationFilter_Pkg_FirstFilter *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;

  for (idx3 = 0; idx3 < 30; idx3++) {
    /* _L183=(InformationFilter_Pkg::Common::SetValidFlag#1)/ */
    SetValidFlag_reset_InformationFilter_Pkg_Common(
      &outC->Context_SetValidFlag_1[idx3]);
  }
  for (idx2 = 0; idx2 < 30; idx2++) {
    /* _L184=(InformationFilter_Pkg::Common::SetValidFlag#2)/ */
    SetValidFlag_reset_InformationFilter_Pkg_Common(
      &outC->Context_SetValidFlag_2[idx2]);
  }
  for (idx1 = 0; idx1 < 30; idx1++) {
    /* _L114=(InformationFilter_Pkg::FirstFilter::LevelFilter#1)/ */
    LevelFilter_reset_InformationFilter_Pkg_FirstFilter(
      &outC->Context_LevelFilter_1[idx1]);
  }
  for (idx = 0; idx < 30; idx++) {
    /* _L49=(InformationFilter_Pkg::Common::GetPacketId#1)/ */
    GetPacketId_reset_InformationFilter_Pkg_Common(
      &outC->Context_GetPacketId_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** FirstFilter_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

