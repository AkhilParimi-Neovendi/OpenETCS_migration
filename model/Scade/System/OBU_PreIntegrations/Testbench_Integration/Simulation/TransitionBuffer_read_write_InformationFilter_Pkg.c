/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransitionBuffer_read_write_InformationFilter_Pkg.h"

/* InformationFilter_Pkg::TransitionBuffer_read_write/ */
void TransitionBuffer_read_write_InformationFilter_Pkg(
  /* Buffer_In/ */
  TransitionBuffer_T_InformationFilter_Pkg *Buffer_In,
  /* Stacksize_old/ */
  kcg_int64 Stacksize_old,
  /* Message_In/ */
  ReceivedMessage_T_Common_Types_Pkg *Message_In,
  /* Reset/ */
  kcg_bool Reset,
  outC_TransitionBuffer_read_write_InformationFilter_Pkg *outC)
{
  static kcg_size idx;

  outC->_L15 = Stacksize_old;
  outC->_L26 = kcg_lit_int64(0);
  outC->_L21 = Reset;
  /* _L25= */
  if (outC->_L21) {
    outC->_L25 = outC->_L26;
  }
  else {
    outC->_L25 = outC->_L15;
  }
  outC->currentStacksize = outC->_L25;
  outC->_L24 = outC->currentStacksize;
  outC->_L23 = outC->currentStacksize;
  kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
    &outC->_L22,
    (TransitionBuffer_T_InformationFilter_Pkg *)
      &DEFAULT_TransitionBuffer_t_InformationFilter_Pkg);
  kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(&outC->_L5, Buffer_In);
  /* _L20= */
  if (outC->_L21) {
    kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(&outC->_L20, &outC->_L22);
  }
  else {
    kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(&outC->_L20, &outC->_L5);
  }
  kcg_copy__79_array(&outC->_L2, (_79_array *) &outC->_L20[0]);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L17, Message_In);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L18,
    (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
  outC->_L13 = kcg_lit_int64(0);
  outC->_L11 = outC->_L13 == outC->_L23;
  /* _L9= */
  if (outC->_L11) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L9, &outC->_L18);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L9, &outC->_L17);
  }
  /* _L12/ */
  for (idx = 0; idx < 1; idx++) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L12[idx], &outC->_L9);
  }
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L14[0], &outC->_L12[0]);
  kcg_copy__79_array(&outC->_L14[1], &outC->_L2);
  kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
    &outC->Buffer_Out,
    &outC->_L14);
  outC->_L8 = kcg_lit_int64(1);
  outC->_L7 = outC->_L24 - outC->_L8;
  outC->_L6 = kcg_lit_int64(0);
  outC->_L4 = outC->_L7 < outC->_L6;
  /* _L10= */
  if (outC->_L4) {
    outC->_L10 = outC->_L6;
  }
  else {
    outC->_L10 = outC->_L7;
  }
  outC->index = outC->_L10;
  outC->_L16 = outC->index;
  if ((kcg_lit_int64(0) <= outC->_L16) & (outC->_L16 < kcg_lit_int64(3))) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->_L19,
      &outC->_L20[outC->_L16]);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->_L19,
      (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
  }
  /* _L3= */
  if (outC->_L11) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L3, &outC->_L17);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L3, &outC->_L19);
  }
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->Message_out, &outC->_L3);
  outC->Stacksize_new = outC->_L24;
}

#ifndef KCG_USER_DEFINED_INIT
void TransitionBuffer_read_write_init_InformationFilter_Pkg(
  outC_TransitionBuffer_read_write_InformationFilter_Pkg *outC)
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
  static kcg_size idx24;
  static kcg_size idx25;
  static kcg_size idx26;
  static kcg_size idx27;
  static kcg_size idx28;
  static kcg_size idx29;
  static kcg_size idx30;
  static kcg_size idx31;
  static kcg_size idx32;

  outC->_L26 = kcg_lit_int64(0);
  outC->_L25 = kcg_lit_int64(0);
  outC->_L24 = kcg_lit_int64(0);
  outC->_L23 = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 3; idx2++) {
    outC->_L22[idx2].valid = kcg_true;
    outC->_L22[idx2].source = msrc_undefined_Common_Types_Pkg;
    outC->_L22[idx2].radioMetadata.t_train_reference = kcg_true;
    outC->_L22[idx2].radioMetadata.nid_em = kcg_true;
    outC->_L22[idx2].radioMetadata.q_scale = kcg_true;
    outC->_L22[idx2].radioMetadata.d_sr = kcg_true;
    outC->_L22[idx2].radioMetadata.t_sh_rqst = kcg_true;
    outC->_L22[idx2].radioMetadata.d_ref = kcg_true;
    outC->_L22[idx2].radioMetadata.q_dir = kcg_true;
    outC->_L22[idx2].radioMetadata.d_emergencystop = kcg_true;
    outC->_L22[idx2].radioMetadata.m_version = kcg_true;
    outC->_L22[idx2].BG_Common_Header.valid = kcg_true;
    outC->_L22[idx2].BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
    outC->_L22[idx2].BG_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L22[idx2].BG_Common_Header.q_media = Q_MEDIA_Balise;
    outC->_L22[idx2].BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
    outC->_L22[idx2].BG_Common_Header.m_mcount = kcg_lit_int64(0);
    outC->_L22[idx2].BG_Common_Header.nid_c = kcg_lit_int64(0);
    outC->_L22[idx2].BG_Common_Header.nid_bg = kcg_lit_int64(0);
    outC->_L22[idx2].BG_Common_Header.q_link = Q_LINK_Unlinked;
    outC->_L22[idx2].BG_Common_Header.bgPosition.valid = kcg_true;
    outC->_L22[idx2].BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
    outC->_L22[idx2].BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
    outC->_L22[idx2].BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
    outC->_L22[idx2].BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
    outC->_L22[idx2].BG_Common_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L22[idx2].BG_Common_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L22[idx2].BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
    outC->_L22[idx2].BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
    outC->_L22[idx2].BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
    outC->_L22[idx2].BG_Common_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L22[idx2].BG_Common_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L22[idx2].BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L22[idx2].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L22[idx2].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L22[idx2].BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L22[idx2].BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
    outC->_L22[idx2].BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
    outC->_L22[idx2].BG_Common_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    outC->_L22[idx2].Radio_Common_Header.radioDevice = kcg_lit_int64(0);
    outC->_L22[idx2].Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
    outC->_L22[idx2].Radio_Common_Header.nid_message = kcg_lit_int64(0);
    outC->_L22[idx2].Radio_Common_Header.t_train = kcg_lit_int64(0);
    outC->_L22[idx2].Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
    outC->_L22[idx2].Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
    outC->_L22[idx2].Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
    outC->_L22[idx2].Radio_Common_Header.nid_em = kcg_lit_int64(0);
    outC->_L22[idx2].Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
    outC->_L22[idx2].Radio_Common_Header.d_sr = kcg_lit_int64(0);
    outC->_L22[idx2].Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
    outC->_L22[idx2].Radio_Common_Header.d_ref = kcg_lit_int64(0);
    outC->_L22[idx2].Radio_Common_Header.q_dir = Q_DIR_Reverse;
    outC->_L22[idx2].Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
    outC->_L22[idx2].Radio_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    for (idx = 0; idx < 30; idx++) {
      outC->_L22[idx2].packets.PacketHeaders[idx].nid_packet = kcg_lit_int64(0);
      outC->_L22[idx2].packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
      outC->_L22[idx2].packets.PacketHeaders[idx].valid = kcg_true;
      outC->_L22[idx2].packets.PacketHeaders[idx].startAddress = kcg_lit_int64(0);
      outC->_L22[idx2].packets.PacketHeaders[idx].endAddress = kcg_lit_int64(0);
    }
    for (idx1 = 0; idx1 < 500; idx1++) {
      outC->_L22[idx2].packets.PacketData[idx1] = kcg_lit_int64(0);
    }
    outC->_L22[idx2].sendingRBC.valid = kcg_true;
    outC->_L22[idx2].sendingRBC.nid_c = kcg_lit_int64(0);
    outC->_L22[idx2].sendingRBC.rbc_id = kcg_lit_int64(0);
    outC->_L22[idx2].sendingRBC.device_id = kcg_lit_int64(0);
  }
  outC->_L21 = kcg_true;
  for (idx5 = 0; idx5 < 3; idx5++) {
    outC->_L20[idx5].valid = kcg_true;
    outC->_L20[idx5].source = msrc_undefined_Common_Types_Pkg;
    outC->_L20[idx5].radioMetadata.t_train_reference = kcg_true;
    outC->_L20[idx5].radioMetadata.nid_em = kcg_true;
    outC->_L20[idx5].radioMetadata.q_scale = kcg_true;
    outC->_L20[idx5].radioMetadata.d_sr = kcg_true;
    outC->_L20[idx5].radioMetadata.t_sh_rqst = kcg_true;
    outC->_L20[idx5].radioMetadata.d_ref = kcg_true;
    outC->_L20[idx5].radioMetadata.q_dir = kcg_true;
    outC->_L20[idx5].radioMetadata.d_emergencystop = kcg_true;
    outC->_L20[idx5].radioMetadata.m_version = kcg_true;
    outC->_L20[idx5].BG_Common_Header.valid = kcg_true;
    outC->_L20[idx5].BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
    outC->_L20[idx5].BG_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L20[idx5].BG_Common_Header.q_media = Q_MEDIA_Balise;
    outC->_L20[idx5].BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
    outC->_L20[idx5].BG_Common_Header.m_mcount = kcg_lit_int64(0);
    outC->_L20[idx5].BG_Common_Header.nid_c = kcg_lit_int64(0);
    outC->_L20[idx5].BG_Common_Header.nid_bg = kcg_lit_int64(0);
    outC->_L20[idx5].BG_Common_Header.q_link = Q_LINK_Unlinked;
    outC->_L20[idx5].BG_Common_Header.bgPosition.valid = kcg_true;
    outC->_L20[idx5].BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
    outC->_L20[idx5].BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
    outC->_L20[idx5].BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
    outC->_L20[idx5].BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
    outC->_L20[idx5].BG_Common_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L20[idx5].BG_Common_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L20[idx5].BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
    outC->_L20[idx5].BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
    outC->_L20[idx5].BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
    outC->_L20[idx5].BG_Common_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L20[idx5].BG_Common_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L20[idx5].BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L20[idx5].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L20[idx5].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L20[idx5].BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L20[idx5].BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
    outC->_L20[idx5].BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
    outC->_L20[idx5].BG_Common_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    outC->_L20[idx5].Radio_Common_Header.radioDevice = kcg_lit_int64(0);
    outC->_L20[idx5].Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
    outC->_L20[idx5].Radio_Common_Header.nid_message = kcg_lit_int64(0);
    outC->_L20[idx5].Radio_Common_Header.t_train = kcg_lit_int64(0);
    outC->_L20[idx5].Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
    outC->_L20[idx5].Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
    outC->_L20[idx5].Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
    outC->_L20[idx5].Radio_Common_Header.nid_em = kcg_lit_int64(0);
    outC->_L20[idx5].Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
    outC->_L20[idx5].Radio_Common_Header.d_sr = kcg_lit_int64(0);
    outC->_L20[idx5].Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
    outC->_L20[idx5].Radio_Common_Header.d_ref = kcg_lit_int64(0);
    outC->_L20[idx5].Radio_Common_Header.q_dir = Q_DIR_Reverse;
    outC->_L20[idx5].Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
    outC->_L20[idx5].Radio_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    for (idx3 = 0; idx3 < 30; idx3++) {
      outC->_L20[idx5].packets.PacketHeaders[idx3].nid_packet = kcg_lit_int64(0);
      outC->_L20[idx5].packets.PacketHeaders[idx3].q_dir = Q_DIR_Reverse;
      outC->_L20[idx5].packets.PacketHeaders[idx3].valid = kcg_true;
      outC->_L20[idx5].packets.PacketHeaders[idx3].startAddress = kcg_lit_int64(0);
      outC->_L20[idx5].packets.PacketHeaders[idx3].endAddress = kcg_lit_int64(0);
    }
    for (idx4 = 0; idx4 < 500; idx4++) {
      outC->_L20[idx5].packets.PacketData[idx4] = kcg_lit_int64(0);
    }
    outC->_L20[idx5].sendingRBC.valid = kcg_true;
    outC->_L20[idx5].sendingRBC.nid_c = kcg_lit_int64(0);
    outC->_L20[idx5].sendingRBC.rbc_id = kcg_lit_int64(0);
    outC->_L20[idx5].sendingRBC.device_id = kcg_lit_int64(0);
  }
  for (idx8 = 0; idx8 < 2; idx8++) {
    outC->_L2[idx8].valid = kcg_true;
    outC->_L2[idx8].source = msrc_undefined_Common_Types_Pkg;
    outC->_L2[idx8].radioMetadata.t_train_reference = kcg_true;
    outC->_L2[idx8].radioMetadata.nid_em = kcg_true;
    outC->_L2[idx8].radioMetadata.q_scale = kcg_true;
    outC->_L2[idx8].radioMetadata.d_sr = kcg_true;
    outC->_L2[idx8].radioMetadata.t_sh_rqst = kcg_true;
    outC->_L2[idx8].radioMetadata.d_ref = kcg_true;
    outC->_L2[idx8].radioMetadata.q_dir = kcg_true;
    outC->_L2[idx8].radioMetadata.d_emergencystop = kcg_true;
    outC->_L2[idx8].radioMetadata.m_version = kcg_true;
    outC->_L2[idx8].BG_Common_Header.valid = kcg_true;
    outC->_L2[idx8].BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
    outC->_L2[idx8].BG_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L2[idx8].BG_Common_Header.q_media = Q_MEDIA_Balise;
    outC->_L2[idx8].BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
    outC->_L2[idx8].BG_Common_Header.m_mcount = kcg_lit_int64(0);
    outC->_L2[idx8].BG_Common_Header.nid_c = kcg_lit_int64(0);
    outC->_L2[idx8].BG_Common_Header.nid_bg = kcg_lit_int64(0);
    outC->_L2[idx8].BG_Common_Header.q_link = Q_LINK_Unlinked;
    outC->_L2[idx8].BG_Common_Header.bgPosition.valid = kcg_true;
    outC->_L2[idx8].BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
    outC->_L2[idx8].BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
    outC->_L2[idx8].BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
    outC->_L2[idx8].BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
    outC->_L2[idx8].BG_Common_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L2[idx8].BG_Common_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L2[idx8].BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
    outC->_L2[idx8].BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
    outC->_L2[idx8].BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
    outC->_L2[idx8].BG_Common_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L2[idx8].BG_Common_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L2[idx8].BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L2[idx8].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L2[idx8].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L2[idx8].BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L2[idx8].BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
    outC->_L2[idx8].BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
    outC->_L2[idx8].BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
    outC->_L2[idx8].Radio_Common_Header.radioDevice = kcg_lit_int64(0);
    outC->_L2[idx8].Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
    outC->_L2[idx8].Radio_Common_Header.nid_message = kcg_lit_int64(0);
    outC->_L2[idx8].Radio_Common_Header.t_train = kcg_lit_int64(0);
    outC->_L2[idx8].Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
    outC->_L2[idx8].Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
    outC->_L2[idx8].Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
    outC->_L2[idx8].Radio_Common_Header.nid_em = kcg_lit_int64(0);
    outC->_L2[idx8].Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
    outC->_L2[idx8].Radio_Common_Header.d_sr = kcg_lit_int64(0);
    outC->_L2[idx8].Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
    outC->_L2[idx8].Radio_Common_Header.d_ref = kcg_lit_int64(0);
    outC->_L2[idx8].Radio_Common_Header.q_dir = Q_DIR_Reverse;
    outC->_L2[idx8].Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
    outC->_L2[idx8].Radio_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    for (idx6 = 0; idx6 < 30; idx6++) {
      outC->_L2[idx8].packets.PacketHeaders[idx6].nid_packet = kcg_lit_int64(0);
      outC->_L2[idx8].packets.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
      outC->_L2[idx8].packets.PacketHeaders[idx6].valid = kcg_true;
      outC->_L2[idx8].packets.PacketHeaders[idx6].startAddress = kcg_lit_int64(0);
      outC->_L2[idx8].packets.PacketHeaders[idx6].endAddress = kcg_lit_int64(0);
    }
    for (idx7 = 0; idx7 < 500; idx7++) {
      outC->_L2[idx8].packets.PacketData[idx7] = kcg_lit_int64(0);
    }
    outC->_L2[idx8].sendingRBC.valid = kcg_true;
    outC->_L2[idx8].sendingRBC.nid_c = kcg_lit_int64(0);
    outC->_L2[idx8].sendingRBC.rbc_id = kcg_lit_int64(0);
    outC->_L2[idx8].sendingRBC.device_id = kcg_lit_int64(0);
  }
  outC->_L3.valid = kcg_true;
  outC->_L3.source = msrc_undefined_Common_Types_Pkg;
  outC->_L3.radioMetadata.t_train_reference = kcg_true;
  outC->_L3.radioMetadata.nid_em = kcg_true;
  outC->_L3.radioMetadata.q_scale = kcg_true;
  outC->_L3.radioMetadata.d_sr = kcg_true;
  outC->_L3.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L3.radioMetadata.d_ref = kcg_true;
  outC->_L3.radioMetadata.q_dir = kcg_true;
  outC->_L3.radioMetadata.d_emergencystop = kcg_true;
  outC->_L3.radioMetadata.m_version = kcg_true;
  outC->_L3.BG_Common_Header.valid = kcg_true;
  outC->_L3.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L3.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L3.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L3.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L3.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L3.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L3.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L3.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L3.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L3.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L3.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L3.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L3.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L3.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L3.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L3.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L3.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L3.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L3.BG_Common_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L3.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L3.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L3.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L3.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L3.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L3.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L3.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L3.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L3.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L3.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L3.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L3.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L3.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L3.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L3.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L3.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L3.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L3.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L3.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L3.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L3.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L3.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L3.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx9 = 0; idx9 < 30; idx9++) {
    outC->_L3.packets.PacketHeaders[idx9].nid_packet = kcg_lit_int64(0);
    outC->_L3.packets.PacketHeaders[idx9].q_dir = Q_DIR_Reverse;
    outC->_L3.packets.PacketHeaders[idx9].valid = kcg_true;
    outC->_L3.packets.PacketHeaders[idx9].startAddress = kcg_lit_int64(0);
    outC->_L3.packets.PacketHeaders[idx9].endAddress = kcg_lit_int64(0);
  }
  for (idx10 = 0; idx10 < 500; idx10++) {
    outC->_L3.packets.PacketData[idx10] = kcg_lit_int64(0);
  }
  outC->_L3.sendingRBC.valid = kcg_true;
  outC->_L3.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L3.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L3.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L4 = kcg_true;
  for (idx13 = 0; idx13 < 3; idx13++) {
    outC->_L5[idx13].valid = kcg_true;
    outC->_L5[idx13].source = msrc_undefined_Common_Types_Pkg;
    outC->_L5[idx13].radioMetadata.t_train_reference = kcg_true;
    outC->_L5[idx13].radioMetadata.nid_em = kcg_true;
    outC->_L5[idx13].radioMetadata.q_scale = kcg_true;
    outC->_L5[idx13].radioMetadata.d_sr = kcg_true;
    outC->_L5[idx13].radioMetadata.t_sh_rqst = kcg_true;
    outC->_L5[idx13].radioMetadata.d_ref = kcg_true;
    outC->_L5[idx13].radioMetadata.q_dir = kcg_true;
    outC->_L5[idx13].radioMetadata.d_emergencystop = kcg_true;
    outC->_L5[idx13].radioMetadata.m_version = kcg_true;
    outC->_L5[idx13].BG_Common_Header.valid = kcg_true;
    outC->_L5[idx13].BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
    outC->_L5[idx13].BG_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L5[idx13].BG_Common_Header.q_media = Q_MEDIA_Balise;
    outC->_L5[idx13].BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
    outC->_L5[idx13].BG_Common_Header.m_mcount = kcg_lit_int64(0);
    outC->_L5[idx13].BG_Common_Header.nid_c = kcg_lit_int64(0);
    outC->_L5[idx13].BG_Common_Header.nid_bg = kcg_lit_int64(0);
    outC->_L5[idx13].BG_Common_Header.q_link = Q_LINK_Unlinked;
    outC->_L5[idx13].BG_Common_Header.bgPosition.valid = kcg_true;
    outC->_L5[idx13].BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
    outC->_L5[idx13].BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
    outC->_L5[idx13].BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
    outC->_L5[idx13].BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
    outC->_L5[idx13].BG_Common_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L5[idx13].BG_Common_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L5[idx13].BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
    outC->_L5[idx13].BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
    outC->_L5[idx13].BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
    outC->_L5[idx13].BG_Common_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L5[idx13].BG_Common_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L5[idx13].BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L5[idx13].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L5[idx13].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L5[idx13].BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L5[idx13].BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
    outC->_L5[idx13].BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
    outC->_L5[idx13].BG_Common_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    outC->_L5[idx13].Radio_Common_Header.radioDevice = kcg_lit_int64(0);
    outC->_L5[idx13].Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
    outC->_L5[idx13].Radio_Common_Header.nid_message = kcg_lit_int64(0);
    outC->_L5[idx13].Radio_Common_Header.t_train = kcg_lit_int64(0);
    outC->_L5[idx13].Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
    outC->_L5[idx13].Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
    outC->_L5[idx13].Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
    outC->_L5[idx13].Radio_Common_Header.nid_em = kcg_lit_int64(0);
    outC->_L5[idx13].Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
    outC->_L5[idx13].Radio_Common_Header.d_sr = kcg_lit_int64(0);
    outC->_L5[idx13].Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
    outC->_L5[idx13].Radio_Common_Header.d_ref = kcg_lit_int64(0);
    outC->_L5[idx13].Radio_Common_Header.q_dir = Q_DIR_Reverse;
    outC->_L5[idx13].Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
    outC->_L5[idx13].Radio_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    for (idx11 = 0; idx11 < 30; idx11++) {
      outC->_L5[idx13].packets.PacketHeaders[idx11].nid_packet = kcg_lit_int64(0);
      outC->_L5[idx13].packets.PacketHeaders[idx11].q_dir = Q_DIR_Reverse;
      outC->_L5[idx13].packets.PacketHeaders[idx11].valid = kcg_true;
      outC->_L5[idx13].packets.PacketHeaders[idx11].startAddress = kcg_lit_int64(0);
      outC->_L5[idx13].packets.PacketHeaders[idx11].endAddress = kcg_lit_int64(0);
    }
    for (idx12 = 0; idx12 < 500; idx12++) {
      outC->_L5[idx13].packets.PacketData[idx12] = kcg_lit_int64(0);
    }
    outC->_L5[idx13].sendingRBC.valid = kcg_true;
    outC->_L5[idx13].sendingRBC.nid_c = kcg_lit_int64(0);
    outC->_L5[idx13].sendingRBC.rbc_id = kcg_lit_int64(0);
    outC->_L5[idx13].sendingRBC.device_id = kcg_lit_int64(0);
  }
  outC->_L6 = kcg_lit_int64(0);
  outC->_L7 = kcg_lit_int64(0);
  outC->_L8 = kcg_lit_int64(0);
  outC->_L9.valid = kcg_true;
  outC->_L9.source = msrc_undefined_Common_Types_Pkg;
  outC->_L9.radioMetadata.t_train_reference = kcg_true;
  outC->_L9.radioMetadata.nid_em = kcg_true;
  outC->_L9.radioMetadata.q_scale = kcg_true;
  outC->_L9.radioMetadata.d_sr = kcg_true;
  outC->_L9.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L9.radioMetadata.d_ref = kcg_true;
  outC->_L9.radioMetadata.q_dir = kcg_true;
  outC->_L9.radioMetadata.d_emergencystop = kcg_true;
  outC->_L9.radioMetadata.m_version = kcg_true;
  outC->_L9.BG_Common_Header.valid = kcg_true;
  outC->_L9.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L9.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L9.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L9.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L9.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L9.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L9.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L9.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L9.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L9.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L9.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L9.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L9.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L9.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L9.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L9.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L9.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L9.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L9.BG_Common_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L9.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L9.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L9.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L9.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L9.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L9.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L9.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L9.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L9.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L9.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L9.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L9.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L9.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L9.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L9.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L9.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L9.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L9.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L9.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L9.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L9.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L9.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L9.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx14 = 0; idx14 < 30; idx14++) {
    outC->_L9.packets.PacketHeaders[idx14].nid_packet = kcg_lit_int64(0);
    outC->_L9.packets.PacketHeaders[idx14].q_dir = Q_DIR_Reverse;
    outC->_L9.packets.PacketHeaders[idx14].valid = kcg_true;
    outC->_L9.packets.PacketHeaders[idx14].startAddress = kcg_lit_int64(0);
    outC->_L9.packets.PacketHeaders[idx14].endAddress = kcg_lit_int64(0);
  }
  for (idx15 = 0; idx15 < 500; idx15++) {
    outC->_L9.packets.PacketData[idx15] = kcg_lit_int64(0);
  }
  outC->_L9.sendingRBC.valid = kcg_true;
  outC->_L9.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L9.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L9.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L10 = kcg_lit_int64(0);
  outC->_L11 = kcg_true;
  for (idx18 = 0; idx18 < 1; idx18++) {
    outC->_L12[idx18].valid = kcg_true;
    outC->_L12[idx18].source = msrc_undefined_Common_Types_Pkg;
    outC->_L12[idx18].radioMetadata.t_train_reference = kcg_true;
    outC->_L12[idx18].radioMetadata.nid_em = kcg_true;
    outC->_L12[idx18].radioMetadata.q_scale = kcg_true;
    outC->_L12[idx18].radioMetadata.d_sr = kcg_true;
    outC->_L12[idx18].radioMetadata.t_sh_rqst = kcg_true;
    outC->_L12[idx18].radioMetadata.d_ref = kcg_true;
    outC->_L12[idx18].radioMetadata.q_dir = kcg_true;
    outC->_L12[idx18].radioMetadata.d_emergencystop = kcg_true;
    outC->_L12[idx18].radioMetadata.m_version = kcg_true;
    outC->_L12[idx18].BG_Common_Header.valid = kcg_true;
    outC->_L12[idx18].BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
    outC->_L12[idx18].BG_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L12[idx18].BG_Common_Header.q_media = Q_MEDIA_Balise;
    outC->_L12[idx18].BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
    outC->_L12[idx18].BG_Common_Header.m_mcount = kcg_lit_int64(0);
    outC->_L12[idx18].BG_Common_Header.nid_c = kcg_lit_int64(0);
    outC->_L12[idx18].BG_Common_Header.nid_bg = kcg_lit_int64(0);
    outC->_L12[idx18].BG_Common_Header.q_link = Q_LINK_Unlinked;
    outC->_L12[idx18].BG_Common_Header.bgPosition.valid = kcg_true;
    outC->_L12[idx18].BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
    outC->_L12[idx18].BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
    outC->_L12[idx18].BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
    outC->_L12[idx18].BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
    outC->_L12[idx18].BG_Common_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L12[idx18].BG_Common_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L12[idx18].BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
    outC->_L12[idx18].BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
    outC->_L12[idx18].BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
    outC->_L12[idx18].BG_Common_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L12[idx18].BG_Common_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L12[idx18].BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L12[idx18].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L12[idx18].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L12[idx18].BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L12[idx18].BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
    outC->_L12[idx18].BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
    outC->_L12[idx18].BG_Common_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    outC->_L12[idx18].Radio_Common_Header.radioDevice = kcg_lit_int64(0);
    outC->_L12[idx18].Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
    outC->_L12[idx18].Radio_Common_Header.nid_message = kcg_lit_int64(0);
    outC->_L12[idx18].Radio_Common_Header.t_train = kcg_lit_int64(0);
    outC->_L12[idx18].Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
    outC->_L12[idx18].Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
    outC->_L12[idx18].Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
    outC->_L12[idx18].Radio_Common_Header.nid_em = kcg_lit_int64(0);
    outC->_L12[idx18].Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
    outC->_L12[idx18].Radio_Common_Header.d_sr = kcg_lit_int64(0);
    outC->_L12[idx18].Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
    outC->_L12[idx18].Radio_Common_Header.d_ref = kcg_lit_int64(0);
    outC->_L12[idx18].Radio_Common_Header.q_dir = Q_DIR_Reverse;
    outC->_L12[idx18].Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
    outC->_L12[idx18].Radio_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    for (idx16 = 0; idx16 < 30; idx16++) {
      outC->_L12[idx18].packets.PacketHeaders[idx16].nid_packet = kcg_lit_int64(0);
      outC->_L12[idx18].packets.PacketHeaders[idx16].q_dir = Q_DIR_Reverse;
      outC->_L12[idx18].packets.PacketHeaders[idx16].valid = kcg_true;
      outC->_L12[idx18].packets.PacketHeaders[idx16].startAddress = kcg_lit_int64(0);
      outC->_L12[idx18].packets.PacketHeaders[idx16].endAddress = kcg_lit_int64(0);
    }
    for (idx17 = 0; idx17 < 500; idx17++) {
      outC->_L12[idx18].packets.PacketData[idx17] = kcg_lit_int64(0);
    }
    outC->_L12[idx18].sendingRBC.valid = kcg_true;
    outC->_L12[idx18].sendingRBC.nid_c = kcg_lit_int64(0);
    outC->_L12[idx18].sendingRBC.rbc_id = kcg_lit_int64(0);
    outC->_L12[idx18].sendingRBC.device_id = kcg_lit_int64(0);
  }
  outC->_L13 = kcg_lit_int64(0);
  for (idx21 = 0; idx21 < 3; idx21++) {
    outC->_L14[idx21].valid = kcg_true;
    outC->_L14[idx21].source = msrc_undefined_Common_Types_Pkg;
    outC->_L14[idx21].radioMetadata.t_train_reference = kcg_true;
    outC->_L14[idx21].radioMetadata.nid_em = kcg_true;
    outC->_L14[idx21].radioMetadata.q_scale = kcg_true;
    outC->_L14[idx21].radioMetadata.d_sr = kcg_true;
    outC->_L14[idx21].radioMetadata.t_sh_rqst = kcg_true;
    outC->_L14[idx21].radioMetadata.d_ref = kcg_true;
    outC->_L14[idx21].radioMetadata.q_dir = kcg_true;
    outC->_L14[idx21].radioMetadata.d_emergencystop = kcg_true;
    outC->_L14[idx21].radioMetadata.m_version = kcg_true;
    outC->_L14[idx21].BG_Common_Header.valid = kcg_true;
    outC->_L14[idx21].BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
    outC->_L14[idx21].BG_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L14[idx21].BG_Common_Header.q_media = Q_MEDIA_Balise;
    outC->_L14[idx21].BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
    outC->_L14[idx21].BG_Common_Header.m_mcount = kcg_lit_int64(0);
    outC->_L14[idx21].BG_Common_Header.nid_c = kcg_lit_int64(0);
    outC->_L14[idx21].BG_Common_Header.nid_bg = kcg_lit_int64(0);
    outC->_L14[idx21].BG_Common_Header.q_link = Q_LINK_Unlinked;
    outC->_L14[idx21].BG_Common_Header.bgPosition.valid = kcg_true;
    outC->_L14[idx21].BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
    outC->_L14[idx21].BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
    outC->_L14[idx21].BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
    outC->_L14[idx21].BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
    outC->_L14[idx21].BG_Common_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L14[idx21].BG_Common_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L14[idx21].BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
    outC->_L14[idx21].BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
    outC->_L14[idx21].BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
    outC->_L14[idx21].BG_Common_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L14[idx21].BG_Common_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L14[idx21].BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L14[idx21].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L14[idx21].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L14[idx21].BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L14[idx21].BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
    outC->_L14[idx21].BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
    outC->_L14[idx21].BG_Common_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    outC->_L14[idx21].Radio_Common_Header.radioDevice = kcg_lit_int64(0);
    outC->_L14[idx21].Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
    outC->_L14[idx21].Radio_Common_Header.nid_message = kcg_lit_int64(0);
    outC->_L14[idx21].Radio_Common_Header.t_train = kcg_lit_int64(0);
    outC->_L14[idx21].Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
    outC->_L14[idx21].Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
    outC->_L14[idx21].Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
    outC->_L14[idx21].Radio_Common_Header.nid_em = kcg_lit_int64(0);
    outC->_L14[idx21].Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
    outC->_L14[idx21].Radio_Common_Header.d_sr = kcg_lit_int64(0);
    outC->_L14[idx21].Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
    outC->_L14[idx21].Radio_Common_Header.d_ref = kcg_lit_int64(0);
    outC->_L14[idx21].Radio_Common_Header.q_dir = Q_DIR_Reverse;
    outC->_L14[idx21].Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
    outC->_L14[idx21].Radio_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    for (idx19 = 0; idx19 < 30; idx19++) {
      outC->_L14[idx21].packets.PacketHeaders[idx19].nid_packet = kcg_lit_int64(0);
      outC->_L14[idx21].packets.PacketHeaders[idx19].q_dir = Q_DIR_Reverse;
      outC->_L14[idx21].packets.PacketHeaders[idx19].valid = kcg_true;
      outC->_L14[idx21].packets.PacketHeaders[idx19].startAddress = kcg_lit_int64(0);
      outC->_L14[idx21].packets.PacketHeaders[idx19].endAddress = kcg_lit_int64(0);
    }
    for (idx20 = 0; idx20 < 500; idx20++) {
      outC->_L14[idx21].packets.PacketData[idx20] = kcg_lit_int64(0);
    }
    outC->_L14[idx21].sendingRBC.valid = kcg_true;
    outC->_L14[idx21].sendingRBC.nid_c = kcg_lit_int64(0);
    outC->_L14[idx21].sendingRBC.rbc_id = kcg_lit_int64(0);
    outC->_L14[idx21].sendingRBC.device_id = kcg_lit_int64(0);
  }
  outC->_L15 = kcg_lit_int64(0);
  outC->_L16 = kcg_lit_int64(0);
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
  for (idx22 = 0; idx22 < 30; idx22++) {
    outC->_L17.packets.PacketHeaders[idx22].nid_packet = kcg_lit_int64(0);
    outC->_L17.packets.PacketHeaders[idx22].q_dir = Q_DIR_Reverse;
    outC->_L17.packets.PacketHeaders[idx22].valid = kcg_true;
    outC->_L17.packets.PacketHeaders[idx22].startAddress = kcg_lit_int64(0);
    outC->_L17.packets.PacketHeaders[idx22].endAddress = kcg_lit_int64(0);
  }
  for (idx23 = 0; idx23 < 500; idx23++) {
    outC->_L17.packets.PacketData[idx23] = kcg_lit_int64(0);
  }
  outC->_L17.sendingRBC.valid = kcg_true;
  outC->_L17.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L17.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L17.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L18.valid = kcg_true;
  outC->_L18.source = msrc_undefined_Common_Types_Pkg;
  outC->_L18.radioMetadata.t_train_reference = kcg_true;
  outC->_L18.radioMetadata.nid_em = kcg_true;
  outC->_L18.radioMetadata.q_scale = kcg_true;
  outC->_L18.radioMetadata.d_sr = kcg_true;
  outC->_L18.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L18.radioMetadata.d_ref = kcg_true;
  outC->_L18.radioMetadata.q_dir = kcg_true;
  outC->_L18.radioMetadata.d_emergencystop = kcg_true;
  outC->_L18.radioMetadata.m_version = kcg_true;
  outC->_L18.BG_Common_Header.valid = kcg_true;
  outC->_L18.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L18.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L18.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L18.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L18.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L18.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L18.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L18.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L18.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L18.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L18.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L18.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L18.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L18.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L18.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L18.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L18.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L18.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L18.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L18.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L18.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L18.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L18.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L18.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L18.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L18.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L18.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L18.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L18.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L18.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L18.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L18.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L18.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L18.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L18.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L18.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L18.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L18.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L18.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L18.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L18.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L18.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx24 = 0; idx24 < 30; idx24++) {
    outC->_L18.packets.PacketHeaders[idx24].nid_packet = kcg_lit_int64(0);
    outC->_L18.packets.PacketHeaders[idx24].q_dir = Q_DIR_Reverse;
    outC->_L18.packets.PacketHeaders[idx24].valid = kcg_true;
    outC->_L18.packets.PacketHeaders[idx24].startAddress = kcg_lit_int64(0);
    outC->_L18.packets.PacketHeaders[idx24].endAddress = kcg_lit_int64(0);
  }
  for (idx25 = 0; idx25 < 500; idx25++) {
    outC->_L18.packets.PacketData[idx25] = kcg_lit_int64(0);
  }
  outC->_L18.sendingRBC.valid = kcg_true;
  outC->_L18.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L18.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L18.sendingRBC.device_id = kcg_lit_int64(0);
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
  for (idx26 = 0; idx26 < 30; idx26++) {
    outC->_L19.packets.PacketHeaders[idx26].nid_packet = kcg_lit_int64(0);
    outC->_L19.packets.PacketHeaders[idx26].q_dir = Q_DIR_Reverse;
    outC->_L19.packets.PacketHeaders[idx26].valid = kcg_true;
    outC->_L19.packets.PacketHeaders[idx26].startAddress = kcg_lit_int64(0);
    outC->_L19.packets.PacketHeaders[idx26].endAddress = kcg_lit_int64(0);
  }
  for (idx27 = 0; idx27 < 500; idx27++) {
    outC->_L19.packets.PacketData[idx27] = kcg_lit_int64(0);
  }
  outC->_L19.sendingRBC.valid = kcg_true;
  outC->_L19.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L19.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L19.sendingRBC.device_id = kcg_lit_int64(0);
  outC->currentStacksize = kcg_lit_int64(0);
  outC->index = kcg_lit_int64(0);
  outC->Message_out.valid = kcg_true;
  outC->Message_out.source = msrc_undefined_Common_Types_Pkg;
  outC->Message_out.radioMetadata.t_train_reference = kcg_true;
  outC->Message_out.radioMetadata.nid_em = kcg_true;
  outC->Message_out.radioMetadata.q_scale = kcg_true;
  outC->Message_out.radioMetadata.d_sr = kcg_true;
  outC->Message_out.radioMetadata.t_sh_rqst = kcg_true;
  outC->Message_out.radioMetadata.d_ref = kcg_true;
  outC->Message_out.radioMetadata.q_dir = kcg_true;
  outC->Message_out.radioMetadata.d_emergencystop = kcg_true;
  outC->Message_out.radioMetadata.m_version = kcg_true;
  outC->Message_out.BG_Common_Header.valid = kcg_true;
  outC->Message_out.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->Message_out.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->Message_out.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->Message_out.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->Message_out.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->Message_out.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->Message_out.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->Message_out.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->Message_out.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->Message_out.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->Message_out.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->Message_out.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->Message_out.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->Message_out.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->Message_out.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->Message_out.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->Message_out.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->Message_out.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->Message_out.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->Message_out.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->Message_out.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->Message_out.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->Message_out.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->Message_out.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->Message_out.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->Message_out.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->Message_out.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->Message_out.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->Message_out.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->Message_out.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->Message_out.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->Message_out.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->Message_out.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->Message_out.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->Message_out.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->Message_out.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->Message_out.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->Message_out.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->Message_out.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->Message_out.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->Message_out.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->Message_out.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx28 = 0; idx28 < 30; idx28++) {
    outC->Message_out.packets.PacketHeaders[idx28].nid_packet = kcg_lit_int64(0);
    outC->Message_out.packets.PacketHeaders[idx28].q_dir = Q_DIR_Reverse;
    outC->Message_out.packets.PacketHeaders[idx28].valid = kcg_true;
    outC->Message_out.packets.PacketHeaders[idx28].startAddress = kcg_lit_int64(0);
    outC->Message_out.packets.PacketHeaders[idx28].endAddress = kcg_lit_int64(0);
  }
  for (idx29 = 0; idx29 < 500; idx29++) {
    outC->Message_out.packets.PacketData[idx29] = kcg_lit_int64(0);
  }
  outC->Message_out.sendingRBC.valid = kcg_true;
  outC->Message_out.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->Message_out.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->Message_out.sendingRBC.device_id = kcg_lit_int64(0);
  outC->Stacksize_new = kcg_lit_int64(0);
  for (idx32 = 0; idx32 < 3; idx32++) {
    outC->Buffer_Out[idx32].valid = kcg_true;
    outC->Buffer_Out[idx32].source = msrc_undefined_Common_Types_Pkg;
    outC->Buffer_Out[idx32].radioMetadata.t_train_reference = kcg_true;
    outC->Buffer_Out[idx32].radioMetadata.nid_em = kcg_true;
    outC->Buffer_Out[idx32].radioMetadata.q_scale = kcg_true;
    outC->Buffer_Out[idx32].radioMetadata.d_sr = kcg_true;
    outC->Buffer_Out[idx32].radioMetadata.t_sh_rqst = kcg_true;
    outC->Buffer_Out[idx32].radioMetadata.d_ref = kcg_true;
    outC->Buffer_Out[idx32].radioMetadata.q_dir = kcg_true;
    outC->Buffer_Out[idx32].radioMetadata.d_emergencystop = kcg_true;
    outC->Buffer_Out[idx32].radioMetadata.m_version = kcg_true;
    outC->Buffer_Out[idx32].BG_Common_Header.valid = kcg_true;
    outC->Buffer_Out[idx32].BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
    outC->Buffer_Out[idx32].BG_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->Buffer_Out[idx32].BG_Common_Header.q_media = Q_MEDIA_Balise;
    outC->Buffer_Out[idx32].BG_Common_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->Buffer_Out[idx32].BG_Common_Header.m_mcount = kcg_lit_int64(0);
    outC->Buffer_Out[idx32].BG_Common_Header.nid_c = kcg_lit_int64(0);
    outC->Buffer_Out[idx32].BG_Common_Header.nid_bg = kcg_lit_int64(0);
    outC->Buffer_Out[idx32].BG_Common_Header.q_link = Q_LINK_Unlinked;
    outC->Buffer_Out[idx32].BG_Common_Header.bgPosition.valid = kcg_true;
    outC->Buffer_Out[idx32].BG_Common_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->Buffer_Out[idx32].BG_Common_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->Buffer_Out[idx32].BG_Common_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->Buffer_Out[idx32].BG_Common_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->Buffer_Out[idx32].BG_Common_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->Buffer_Out[idx32].BG_Common_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->Buffer_Out[idx32].BG_Common_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->Buffer_Out[idx32].BG_Common_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->Buffer_Out[idx32].BG_Common_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->Buffer_Out[idx32].BG_Common_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->Buffer_Out[idx32].BG_Common_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->Buffer_Out[idx32].BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->Buffer_Out[idx32].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->Buffer_Out[idx32].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->Buffer_Out[idx32].BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->Buffer_Out[idx32].BG_Common_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->Buffer_Out[idx32].BG_Common_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->Buffer_Out[idx32].BG_Common_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    outC->Buffer_Out[idx32].Radio_Common_Header.radioDevice = kcg_lit_int64(0);
    outC->Buffer_Out[idx32].Radio_Common_Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->Buffer_Out[idx32].Radio_Common_Header.nid_message = kcg_lit_int64(0);
    outC->Buffer_Out[idx32].Radio_Common_Header.t_train = kcg_lit_int64(0);
    outC->Buffer_Out[idx32].Radio_Common_Header.m_ack =
      M_ACK_No_acknowledgement_required;
    outC->Buffer_Out[idx32].Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
    outC->Buffer_Out[idx32].Radio_Common_Header.t_train_reference =
      kcg_lit_int64(0);
    outC->Buffer_Out[idx32].Radio_Common_Header.nid_em = kcg_lit_int64(0);
    outC->Buffer_Out[idx32].Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
    outC->Buffer_Out[idx32].Radio_Common_Header.d_sr = kcg_lit_int64(0);
    outC->Buffer_Out[idx32].Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
    outC->Buffer_Out[idx32].Radio_Common_Header.d_ref = kcg_lit_int64(0);
    outC->Buffer_Out[idx32].Radio_Common_Header.q_dir = Q_DIR_Reverse;
    outC->Buffer_Out[idx32].Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
    outC->Buffer_Out[idx32].Radio_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    for (idx30 = 0; idx30 < 30; idx30++) {
      outC->Buffer_Out[idx32].packets.PacketHeaders[idx30].nid_packet =
        kcg_lit_int64(0);
      outC->Buffer_Out[idx32].packets.PacketHeaders[idx30].q_dir = Q_DIR_Reverse;
      outC->Buffer_Out[idx32].packets.PacketHeaders[idx30].valid = kcg_true;
      outC->Buffer_Out[idx32].packets.PacketHeaders[idx30].startAddress =
        kcg_lit_int64(0);
      outC->Buffer_Out[idx32].packets.PacketHeaders[idx30].endAddress =
        kcg_lit_int64(0);
    }
    for (idx31 = 0; idx31 < 500; idx31++) {
      outC->Buffer_Out[idx32].packets.PacketData[idx31] = kcg_lit_int64(0);
    }
    outC->Buffer_Out[idx32].sendingRBC.valid = kcg_true;
    outC->Buffer_Out[idx32].sendingRBC.nid_c = kcg_lit_int64(0);
    outC->Buffer_Out[idx32].sendingRBC.rbc_id = kcg_lit_int64(0);
    outC->Buffer_Out[idx32].sendingRBC.device_id = kcg_lit_int64(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TransitionBuffer_read_write_reset_InformationFilter_Pkg(
  outC_TransitionBuffer_read_write_InformationFilter_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TransitionBuffer_read_write_InformationFilter_Pkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

