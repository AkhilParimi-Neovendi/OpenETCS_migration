/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransitionBuffer_read_only_InformationFilter_Pkg.h"

/* InformationFilter_Pkg::TransitionBuffer_read_only/ */
void TransitionBuffer_read_only_InformationFilter_Pkg(
  /* Buffer_In/ */
  TransitionBuffer_T_InformationFilter_Pkg *Buffer_In,
  /* Stacksize_old/ */
  kcg_int64 Stacksize_old,
  /* Message_In/ */
  ReceivedMessage_T_Common_Types_Pkg *Message_In,
  /* Reset/ */
  kcg_bool Reset,
  outC_TransitionBuffer_read_only_InformationFilter_Pkg *outC)
{
  static ReceivedMessage_T_Common_Types_Pkg noname;

  kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(&outC->_L1, Buffer_In);
  kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
    &outC->_L17,
    (TransitionBuffer_T_InformationFilter_Pkg *)
      &DEFAULT_TransitionBuffer_t_InformationFilter_Pkg);
  outC->_L16 = Reset;
  /* _L20= */
  if (outC->_L16) {
    kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(&outC->_L20, &outC->_L17);
  }
  else {
    kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(&outC->_L20, &outC->_L1);
  }
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L13,
    (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
  outC->_L6 = kcg_lit_int64(1);
  outC->_L2 = Stacksize_old;
  outC->_L15 = kcg_lit_int64(0);
  /* _L14= */
  if (outC->_L16) {
    outC->_L14 = outC->_L15;
  }
  else {
    outC->_L14 = outC->_L2;
  }
  outC->_L8 = outC->_L14 - outC->_L6;
  outC->_L9 = kcg_lit_int64(0);
  outC->_L11 = outC->_L8 < outC->_L9;
  /* _L4= */
  if (outC->_L11) {
    outC->_L4 = outC->_L9;
  }
  else {
    outC->_L4 = outC->_L8;
  }
  outC->index = outC->_L4;
  outC->_L12 = outC->index;
  kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(&outC->_L19, &outC->_L20);
  if ((kcg_lit_int64(0) <= outC->_L12) & (outC->_L12 < kcg_lit_int64(3))) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->_L19[outC->_L12],
      &outC->_L13);
  }
  outC->Stacksize_new = outC->_L4;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L7, Message_In);
  outC->_L5 = outC->index;
  if ((kcg_lit_int64(0) <= outC->_L5) & (outC->_L5 < kcg_lit_int64(3))) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L3, &outC->_L20[outC->_L5]);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->_L3,
      (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
  }
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&noname, &outC->_L7);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->Message_out, &outC->_L3);
  kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
    &outC->Buffer_Out,
    &outC->_L19);
}

#ifndef KCG_USER_DEFINED_INIT
void TransitionBuffer_read_only_init_InformationFilter_Pkg(
  outC_TransitionBuffer_read_only_InformationFilter_Pkg *outC)
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

  for (idx2 = 0; idx2 < 3; idx2++) {
    outC->_L20[idx2].valid = kcg_true;
    outC->_L20[idx2].source = msrc_undefined_Common_Types_Pkg;
    outC->_L20[idx2].radioMetadata.t_train_reference = kcg_true;
    outC->_L20[idx2].radioMetadata.nid_em = kcg_true;
    outC->_L20[idx2].radioMetadata.q_scale = kcg_true;
    outC->_L20[idx2].radioMetadata.d_sr = kcg_true;
    outC->_L20[idx2].radioMetadata.t_sh_rqst = kcg_true;
    outC->_L20[idx2].radioMetadata.d_ref = kcg_true;
    outC->_L20[idx2].radioMetadata.q_dir = kcg_true;
    outC->_L20[idx2].radioMetadata.d_emergencystop = kcg_true;
    outC->_L20[idx2].radioMetadata.m_version = kcg_true;
    outC->_L20[idx2].BG_Common_Header.valid = kcg_true;
    outC->_L20[idx2].BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
    outC->_L20[idx2].BG_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L20[idx2].BG_Common_Header.q_media = Q_MEDIA_Balise;
    outC->_L20[idx2].BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
    outC->_L20[idx2].BG_Common_Header.m_mcount = kcg_lit_int64(0);
    outC->_L20[idx2].BG_Common_Header.nid_c = kcg_lit_int64(0);
    outC->_L20[idx2].BG_Common_Header.nid_bg = kcg_lit_int64(0);
    outC->_L20[idx2].BG_Common_Header.q_link = Q_LINK_Unlinked;
    outC->_L20[idx2].BG_Common_Header.bgPosition.valid = kcg_true;
    outC->_L20[idx2].BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
    outC->_L20[idx2].BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
    outC->_L20[idx2].BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
    outC->_L20[idx2].BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
    outC->_L20[idx2].BG_Common_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L20[idx2].BG_Common_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L20[idx2].BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
    outC->_L20[idx2].BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
    outC->_L20[idx2].BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
    outC->_L20[idx2].BG_Common_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L20[idx2].BG_Common_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L20[idx2].BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L20[idx2].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L20[idx2].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L20[idx2].BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L20[idx2].BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
    outC->_L20[idx2].BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
    outC->_L20[idx2].BG_Common_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    outC->_L20[idx2].Radio_Common_Header.radioDevice = kcg_lit_int64(0);
    outC->_L20[idx2].Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
    outC->_L20[idx2].Radio_Common_Header.nid_message = kcg_lit_int64(0);
    outC->_L20[idx2].Radio_Common_Header.t_train = kcg_lit_int64(0);
    outC->_L20[idx2].Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
    outC->_L20[idx2].Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
    outC->_L20[idx2].Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
    outC->_L20[idx2].Radio_Common_Header.nid_em = kcg_lit_int64(0);
    outC->_L20[idx2].Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
    outC->_L20[idx2].Radio_Common_Header.d_sr = kcg_lit_int64(0);
    outC->_L20[idx2].Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
    outC->_L20[idx2].Radio_Common_Header.d_ref = kcg_lit_int64(0);
    outC->_L20[idx2].Radio_Common_Header.q_dir = Q_DIR_Reverse;
    outC->_L20[idx2].Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
    outC->_L20[idx2].Radio_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    for (idx = 0; idx < 30; idx++) {
      outC->_L20[idx2].packets.PacketHeaders[idx].nid_packet = kcg_lit_int64(0);
      outC->_L20[idx2].packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
      outC->_L20[idx2].packets.PacketHeaders[idx].valid = kcg_true;
      outC->_L20[idx2].packets.PacketHeaders[idx].startAddress = kcg_lit_int64(0);
      outC->_L20[idx2].packets.PacketHeaders[idx].endAddress = kcg_lit_int64(0);
    }
    for (idx1 = 0; idx1 < 500; idx1++) {
      outC->_L20[idx2].packets.PacketData[idx1] = kcg_lit_int64(0);
    }
    outC->_L20[idx2].sendingRBC.valid = kcg_true;
    outC->_L20[idx2].sendingRBC.nid_c = kcg_lit_int64(0);
    outC->_L20[idx2].sendingRBC.rbc_id = kcg_lit_int64(0);
    outC->_L20[idx2].sendingRBC.device_id = kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 3; idx5++) {
    outC->_L19[idx5].valid = kcg_true;
    outC->_L19[idx5].source = msrc_undefined_Common_Types_Pkg;
    outC->_L19[idx5].radioMetadata.t_train_reference = kcg_true;
    outC->_L19[idx5].radioMetadata.nid_em = kcg_true;
    outC->_L19[idx5].radioMetadata.q_scale = kcg_true;
    outC->_L19[idx5].radioMetadata.d_sr = kcg_true;
    outC->_L19[idx5].radioMetadata.t_sh_rqst = kcg_true;
    outC->_L19[idx5].radioMetadata.d_ref = kcg_true;
    outC->_L19[idx5].radioMetadata.q_dir = kcg_true;
    outC->_L19[idx5].radioMetadata.d_emergencystop = kcg_true;
    outC->_L19[idx5].radioMetadata.m_version = kcg_true;
    outC->_L19[idx5].BG_Common_Header.valid = kcg_true;
    outC->_L19[idx5].BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
    outC->_L19[idx5].BG_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L19[idx5].BG_Common_Header.q_media = Q_MEDIA_Balise;
    outC->_L19[idx5].BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
    outC->_L19[idx5].BG_Common_Header.m_mcount = kcg_lit_int64(0);
    outC->_L19[idx5].BG_Common_Header.nid_c = kcg_lit_int64(0);
    outC->_L19[idx5].BG_Common_Header.nid_bg = kcg_lit_int64(0);
    outC->_L19[idx5].BG_Common_Header.q_link = Q_LINK_Unlinked;
    outC->_L19[idx5].BG_Common_Header.bgPosition.valid = kcg_true;
    outC->_L19[idx5].BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
    outC->_L19[idx5].BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
    outC->_L19[idx5].BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
    outC->_L19[idx5].BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
    outC->_L19[idx5].BG_Common_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L19[idx5].BG_Common_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L19[idx5].BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
    outC->_L19[idx5].BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
    outC->_L19[idx5].BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
    outC->_L19[idx5].BG_Common_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L19[idx5].BG_Common_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L19[idx5].BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L19[idx5].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L19[idx5].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L19[idx5].BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L19[idx5].BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
    outC->_L19[idx5].BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
    outC->_L19[idx5].BG_Common_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    outC->_L19[idx5].Radio_Common_Header.radioDevice = kcg_lit_int64(0);
    outC->_L19[idx5].Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
    outC->_L19[idx5].Radio_Common_Header.nid_message = kcg_lit_int64(0);
    outC->_L19[idx5].Radio_Common_Header.t_train = kcg_lit_int64(0);
    outC->_L19[idx5].Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
    outC->_L19[idx5].Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
    outC->_L19[idx5].Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
    outC->_L19[idx5].Radio_Common_Header.nid_em = kcg_lit_int64(0);
    outC->_L19[idx5].Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
    outC->_L19[idx5].Radio_Common_Header.d_sr = kcg_lit_int64(0);
    outC->_L19[idx5].Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
    outC->_L19[idx5].Radio_Common_Header.d_ref = kcg_lit_int64(0);
    outC->_L19[idx5].Radio_Common_Header.q_dir = Q_DIR_Reverse;
    outC->_L19[idx5].Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
    outC->_L19[idx5].Radio_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    for (idx3 = 0; idx3 < 30; idx3++) {
      outC->_L19[idx5].packets.PacketHeaders[idx3].nid_packet = kcg_lit_int64(0);
      outC->_L19[idx5].packets.PacketHeaders[idx3].q_dir = Q_DIR_Reverse;
      outC->_L19[idx5].packets.PacketHeaders[idx3].valid = kcg_true;
      outC->_L19[idx5].packets.PacketHeaders[idx3].startAddress = kcg_lit_int64(0);
      outC->_L19[idx5].packets.PacketHeaders[idx3].endAddress = kcg_lit_int64(0);
    }
    for (idx4 = 0; idx4 < 500; idx4++) {
      outC->_L19[idx5].packets.PacketData[idx4] = kcg_lit_int64(0);
    }
    outC->_L19[idx5].sendingRBC.valid = kcg_true;
    outC->_L19[idx5].sendingRBC.nid_c = kcg_lit_int64(0);
    outC->_L19[idx5].sendingRBC.rbc_id = kcg_lit_int64(0);
    outC->_L19[idx5].sendingRBC.device_id = kcg_lit_int64(0);
  }
  for (idx8 = 0; idx8 < 3; idx8++) {
    outC->_L17[idx8].valid = kcg_true;
    outC->_L17[idx8].source = msrc_undefined_Common_Types_Pkg;
    outC->_L17[idx8].radioMetadata.t_train_reference = kcg_true;
    outC->_L17[idx8].radioMetadata.nid_em = kcg_true;
    outC->_L17[idx8].radioMetadata.q_scale = kcg_true;
    outC->_L17[idx8].radioMetadata.d_sr = kcg_true;
    outC->_L17[idx8].radioMetadata.t_sh_rqst = kcg_true;
    outC->_L17[idx8].radioMetadata.d_ref = kcg_true;
    outC->_L17[idx8].radioMetadata.q_dir = kcg_true;
    outC->_L17[idx8].radioMetadata.d_emergencystop = kcg_true;
    outC->_L17[idx8].radioMetadata.m_version = kcg_true;
    outC->_L17[idx8].BG_Common_Header.valid = kcg_true;
    outC->_L17[idx8].BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
    outC->_L17[idx8].BG_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L17[idx8].BG_Common_Header.q_media = Q_MEDIA_Balise;
    outC->_L17[idx8].BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
    outC->_L17[idx8].BG_Common_Header.m_mcount = kcg_lit_int64(0);
    outC->_L17[idx8].BG_Common_Header.nid_c = kcg_lit_int64(0);
    outC->_L17[idx8].BG_Common_Header.nid_bg = kcg_lit_int64(0);
    outC->_L17[idx8].BG_Common_Header.q_link = Q_LINK_Unlinked;
    outC->_L17[idx8].BG_Common_Header.bgPosition.valid = kcg_true;
    outC->_L17[idx8].BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
    outC->_L17[idx8].BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
    outC->_L17[idx8].BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
    outC->_L17[idx8].BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
    outC->_L17[idx8].BG_Common_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L17[idx8].BG_Common_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L17[idx8].BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
    outC->_L17[idx8].BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
    outC->_L17[idx8].BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
    outC->_L17[idx8].BG_Common_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L17[idx8].BG_Common_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L17[idx8].BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L17[idx8].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L17[idx8].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L17[idx8].BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L17[idx8].BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
    outC->_L17[idx8].BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
    outC->_L17[idx8].BG_Common_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    outC->_L17[idx8].Radio_Common_Header.radioDevice = kcg_lit_int64(0);
    outC->_L17[idx8].Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
    outC->_L17[idx8].Radio_Common_Header.nid_message = kcg_lit_int64(0);
    outC->_L17[idx8].Radio_Common_Header.t_train = kcg_lit_int64(0);
    outC->_L17[idx8].Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
    outC->_L17[idx8].Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
    outC->_L17[idx8].Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
    outC->_L17[idx8].Radio_Common_Header.nid_em = kcg_lit_int64(0);
    outC->_L17[idx8].Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
    outC->_L17[idx8].Radio_Common_Header.d_sr = kcg_lit_int64(0);
    outC->_L17[idx8].Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
    outC->_L17[idx8].Radio_Common_Header.d_ref = kcg_lit_int64(0);
    outC->_L17[idx8].Radio_Common_Header.q_dir = Q_DIR_Reverse;
    outC->_L17[idx8].Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
    outC->_L17[idx8].Radio_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    for (idx6 = 0; idx6 < 30; idx6++) {
      outC->_L17[idx8].packets.PacketHeaders[idx6].nid_packet = kcg_lit_int64(0);
      outC->_L17[idx8].packets.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
      outC->_L17[idx8].packets.PacketHeaders[idx6].valid = kcg_true;
      outC->_L17[idx8].packets.PacketHeaders[idx6].startAddress = kcg_lit_int64(0);
      outC->_L17[idx8].packets.PacketHeaders[idx6].endAddress = kcg_lit_int64(0);
    }
    for (idx7 = 0; idx7 < 500; idx7++) {
      outC->_L17[idx8].packets.PacketData[idx7] = kcg_lit_int64(0);
    }
    outC->_L17[idx8].sendingRBC.valid = kcg_true;
    outC->_L17[idx8].sendingRBC.nid_c = kcg_lit_int64(0);
    outC->_L17[idx8].sendingRBC.rbc_id = kcg_lit_int64(0);
    outC->_L17[idx8].sendingRBC.device_id = kcg_lit_int64(0);
  }
  outC->_L16 = kcg_true;
  outC->_L15 = kcg_lit_int64(0);
  outC->_L14 = kcg_lit_int64(0);
  for (idx11 = 0; idx11 < 3; idx11++) {
    outC->_L1[idx11].valid = kcg_true;
    outC->_L1[idx11].source = msrc_undefined_Common_Types_Pkg;
    outC->_L1[idx11].radioMetadata.t_train_reference = kcg_true;
    outC->_L1[idx11].radioMetadata.nid_em = kcg_true;
    outC->_L1[idx11].radioMetadata.q_scale = kcg_true;
    outC->_L1[idx11].radioMetadata.d_sr = kcg_true;
    outC->_L1[idx11].radioMetadata.t_sh_rqst = kcg_true;
    outC->_L1[idx11].radioMetadata.d_ref = kcg_true;
    outC->_L1[idx11].radioMetadata.q_dir = kcg_true;
    outC->_L1[idx11].radioMetadata.d_emergencystop = kcg_true;
    outC->_L1[idx11].radioMetadata.m_version = kcg_true;
    outC->_L1[idx11].BG_Common_Header.valid = kcg_true;
    outC->_L1[idx11].BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
    outC->_L1[idx11].BG_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L1[idx11].BG_Common_Header.q_media = Q_MEDIA_Balise;
    outC->_L1[idx11].BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
    outC->_L1[idx11].BG_Common_Header.m_mcount = kcg_lit_int64(0);
    outC->_L1[idx11].BG_Common_Header.nid_c = kcg_lit_int64(0);
    outC->_L1[idx11].BG_Common_Header.nid_bg = kcg_lit_int64(0);
    outC->_L1[idx11].BG_Common_Header.q_link = Q_LINK_Unlinked;
    outC->_L1[idx11].BG_Common_Header.bgPosition.valid = kcg_true;
    outC->_L1[idx11].BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
    outC->_L1[idx11].BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
    outC->_L1[idx11].BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
    outC->_L1[idx11].BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
    outC->_L1[idx11].BG_Common_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L1[idx11].BG_Common_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L1[idx11].BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
    outC->_L1[idx11].BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
    outC->_L1[idx11].BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
    outC->_L1[idx11].BG_Common_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L1[idx11].BG_Common_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L1[idx11].BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L1[idx11].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L1[idx11].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L1[idx11].BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L1[idx11].BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
    outC->_L1[idx11].BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
    outC->_L1[idx11].BG_Common_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    outC->_L1[idx11].Radio_Common_Header.radioDevice = kcg_lit_int64(0);
    outC->_L1[idx11].Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
    outC->_L1[idx11].Radio_Common_Header.nid_message = kcg_lit_int64(0);
    outC->_L1[idx11].Radio_Common_Header.t_train = kcg_lit_int64(0);
    outC->_L1[idx11].Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
    outC->_L1[idx11].Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
    outC->_L1[idx11].Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
    outC->_L1[idx11].Radio_Common_Header.nid_em = kcg_lit_int64(0);
    outC->_L1[idx11].Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
    outC->_L1[idx11].Radio_Common_Header.d_sr = kcg_lit_int64(0);
    outC->_L1[idx11].Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
    outC->_L1[idx11].Radio_Common_Header.d_ref = kcg_lit_int64(0);
    outC->_L1[idx11].Radio_Common_Header.q_dir = Q_DIR_Reverse;
    outC->_L1[idx11].Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
    outC->_L1[idx11].Radio_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    for (idx9 = 0; idx9 < 30; idx9++) {
      outC->_L1[idx11].packets.PacketHeaders[idx9].nid_packet = kcg_lit_int64(0);
      outC->_L1[idx11].packets.PacketHeaders[idx9].q_dir = Q_DIR_Reverse;
      outC->_L1[idx11].packets.PacketHeaders[idx9].valid = kcg_true;
      outC->_L1[idx11].packets.PacketHeaders[idx9].startAddress = kcg_lit_int64(0);
      outC->_L1[idx11].packets.PacketHeaders[idx9].endAddress = kcg_lit_int64(0);
    }
    for (idx10 = 0; idx10 < 500; idx10++) {
      outC->_L1[idx11].packets.PacketData[idx10] = kcg_lit_int64(0);
    }
    outC->_L1[idx11].sendingRBC.valid = kcg_true;
    outC->_L1[idx11].sendingRBC.nid_c = kcg_lit_int64(0);
    outC->_L1[idx11].sendingRBC.rbc_id = kcg_lit_int64(0);
    outC->_L1[idx11].sendingRBC.device_id = kcg_lit_int64(0);
  }
  outC->_L2 = kcg_lit_int64(0);
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
  for (idx12 = 0; idx12 < 30; idx12++) {
    outC->_L3.packets.PacketHeaders[idx12].nid_packet = kcg_lit_int64(0);
    outC->_L3.packets.PacketHeaders[idx12].q_dir = Q_DIR_Reverse;
    outC->_L3.packets.PacketHeaders[idx12].valid = kcg_true;
    outC->_L3.packets.PacketHeaders[idx12].startAddress = kcg_lit_int64(0);
    outC->_L3.packets.PacketHeaders[idx12].endAddress = kcg_lit_int64(0);
  }
  for (idx13 = 0; idx13 < 500; idx13++) {
    outC->_L3.packets.PacketData[idx13] = kcg_lit_int64(0);
  }
  outC->_L3.sendingRBC.valid = kcg_true;
  outC->_L3.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L3.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L3.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L4 = kcg_lit_int64(0);
  outC->_L5 = kcg_lit_int64(0);
  outC->_L6 = kcg_lit_int64(0);
  outC->_L7.valid = kcg_true;
  outC->_L7.source = msrc_undefined_Common_Types_Pkg;
  outC->_L7.radioMetadata.t_train_reference = kcg_true;
  outC->_L7.radioMetadata.nid_em = kcg_true;
  outC->_L7.radioMetadata.q_scale = kcg_true;
  outC->_L7.radioMetadata.d_sr = kcg_true;
  outC->_L7.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L7.radioMetadata.d_ref = kcg_true;
  outC->_L7.radioMetadata.q_dir = kcg_true;
  outC->_L7.radioMetadata.d_emergencystop = kcg_true;
  outC->_L7.radioMetadata.m_version = kcg_true;
  outC->_L7.BG_Common_Header.valid = kcg_true;
  outC->_L7.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L7.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L7.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L7.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L7.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L7.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L7.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L7.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L7.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L7.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L7.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L7.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L7.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L7.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L7.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L7.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L7.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L7.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L7.BG_Common_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L7.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L7.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L7.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L7.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L7.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L7.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L7.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L7.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L7.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L7.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L7.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L7.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L7.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L7.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L7.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L7.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L7.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L7.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L7.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L7.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L7.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L7.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L7.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx14 = 0; idx14 < 30; idx14++) {
    outC->_L7.packets.PacketHeaders[idx14].nid_packet = kcg_lit_int64(0);
    outC->_L7.packets.PacketHeaders[idx14].q_dir = Q_DIR_Reverse;
    outC->_L7.packets.PacketHeaders[idx14].valid = kcg_true;
    outC->_L7.packets.PacketHeaders[idx14].startAddress = kcg_lit_int64(0);
    outC->_L7.packets.PacketHeaders[idx14].endAddress = kcg_lit_int64(0);
  }
  for (idx15 = 0; idx15 < 500; idx15++) {
    outC->_L7.packets.PacketData[idx15] = kcg_lit_int64(0);
  }
  outC->_L7.sendingRBC.valid = kcg_true;
  outC->_L7.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L7.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L7.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L8 = kcg_lit_int64(0);
  outC->_L9 = kcg_lit_int64(0);
  outC->_L11 = kcg_true;
  outC->_L12 = kcg_lit_int64(0);
  outC->_L13.valid = kcg_true;
  outC->_L13.source = msrc_undefined_Common_Types_Pkg;
  outC->_L13.radioMetadata.t_train_reference = kcg_true;
  outC->_L13.radioMetadata.nid_em = kcg_true;
  outC->_L13.radioMetadata.q_scale = kcg_true;
  outC->_L13.radioMetadata.d_sr = kcg_true;
  outC->_L13.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L13.radioMetadata.d_ref = kcg_true;
  outC->_L13.radioMetadata.q_dir = kcg_true;
  outC->_L13.radioMetadata.d_emergencystop = kcg_true;
  outC->_L13.radioMetadata.m_version = kcg_true;
  outC->_L13.BG_Common_Header.valid = kcg_true;
  outC->_L13.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L13.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L13.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L13.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L13.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L13.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L13.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L13.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L13.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L13.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L13.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L13.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L13.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L13.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L13.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L13.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L13.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L13.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L13.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L13.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L13.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L13.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L13.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L13.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L13.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L13.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L13.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L13.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L13.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L13.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L13.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L13.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L13.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L13.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L13.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L13.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L13.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L13.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L13.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L13.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L13.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L13.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx16 = 0; idx16 < 30; idx16++) {
    outC->_L13.packets.PacketHeaders[idx16].nid_packet = kcg_lit_int64(0);
    outC->_L13.packets.PacketHeaders[idx16].q_dir = Q_DIR_Reverse;
    outC->_L13.packets.PacketHeaders[idx16].valid = kcg_true;
    outC->_L13.packets.PacketHeaders[idx16].startAddress = kcg_lit_int64(0);
    outC->_L13.packets.PacketHeaders[idx16].endAddress = kcg_lit_int64(0);
  }
  for (idx17 = 0; idx17 < 500; idx17++) {
    outC->_L13.packets.PacketData[idx17] = kcg_lit_int64(0);
  }
  outC->_L13.sendingRBC.valid = kcg_true;
  outC->_L13.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L13.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L13.sendingRBC.device_id = kcg_lit_int64(0);
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
  for (idx18 = 0; idx18 < 30; idx18++) {
    outC->Message_out.packets.PacketHeaders[idx18].nid_packet = kcg_lit_int64(0);
    outC->Message_out.packets.PacketHeaders[idx18].q_dir = Q_DIR_Reverse;
    outC->Message_out.packets.PacketHeaders[idx18].valid = kcg_true;
    outC->Message_out.packets.PacketHeaders[idx18].startAddress = kcg_lit_int64(0);
    outC->Message_out.packets.PacketHeaders[idx18].endAddress = kcg_lit_int64(0);
  }
  for (idx19 = 0; idx19 < 500; idx19++) {
    outC->Message_out.packets.PacketData[idx19] = kcg_lit_int64(0);
  }
  outC->Message_out.sendingRBC.valid = kcg_true;
  outC->Message_out.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->Message_out.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->Message_out.sendingRBC.device_id = kcg_lit_int64(0);
  outC->Stacksize_new = kcg_lit_int64(0);
  for (idx22 = 0; idx22 < 3; idx22++) {
    outC->Buffer_Out[idx22].valid = kcg_true;
    outC->Buffer_Out[idx22].source = msrc_undefined_Common_Types_Pkg;
    outC->Buffer_Out[idx22].radioMetadata.t_train_reference = kcg_true;
    outC->Buffer_Out[idx22].radioMetadata.nid_em = kcg_true;
    outC->Buffer_Out[idx22].radioMetadata.q_scale = kcg_true;
    outC->Buffer_Out[idx22].radioMetadata.d_sr = kcg_true;
    outC->Buffer_Out[idx22].radioMetadata.t_sh_rqst = kcg_true;
    outC->Buffer_Out[idx22].radioMetadata.d_ref = kcg_true;
    outC->Buffer_Out[idx22].radioMetadata.q_dir = kcg_true;
    outC->Buffer_Out[idx22].radioMetadata.d_emergencystop = kcg_true;
    outC->Buffer_Out[idx22].radioMetadata.m_version = kcg_true;
    outC->Buffer_Out[idx22].BG_Common_Header.valid = kcg_true;
    outC->Buffer_Out[idx22].BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
    outC->Buffer_Out[idx22].BG_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->Buffer_Out[idx22].BG_Common_Header.q_media = Q_MEDIA_Balise;
    outC->Buffer_Out[idx22].BG_Common_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->Buffer_Out[idx22].BG_Common_Header.m_mcount = kcg_lit_int64(0);
    outC->Buffer_Out[idx22].BG_Common_Header.nid_c = kcg_lit_int64(0);
    outC->Buffer_Out[idx22].BG_Common_Header.nid_bg = kcg_lit_int64(0);
    outC->Buffer_Out[idx22].BG_Common_Header.q_link = Q_LINK_Unlinked;
    outC->Buffer_Out[idx22].BG_Common_Header.bgPosition.valid = kcg_true;
    outC->Buffer_Out[idx22].BG_Common_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->Buffer_Out[idx22].BG_Common_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->Buffer_Out[idx22].BG_Common_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->Buffer_Out[idx22].BG_Common_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->Buffer_Out[idx22].BG_Common_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->Buffer_Out[idx22].BG_Common_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->Buffer_Out[idx22].BG_Common_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->Buffer_Out[idx22].BG_Common_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->Buffer_Out[idx22].BG_Common_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->Buffer_Out[idx22].BG_Common_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->Buffer_Out[idx22].BG_Common_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->Buffer_Out[idx22].BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->Buffer_Out[idx22].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->Buffer_Out[idx22].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->Buffer_Out[idx22].BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->Buffer_Out[idx22].BG_Common_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->Buffer_Out[idx22].BG_Common_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->Buffer_Out[idx22].BG_Common_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    outC->Buffer_Out[idx22].Radio_Common_Header.radioDevice = kcg_lit_int64(0);
    outC->Buffer_Out[idx22].Radio_Common_Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->Buffer_Out[idx22].Radio_Common_Header.nid_message = kcg_lit_int64(0);
    outC->Buffer_Out[idx22].Radio_Common_Header.t_train = kcg_lit_int64(0);
    outC->Buffer_Out[idx22].Radio_Common_Header.m_ack =
      M_ACK_No_acknowledgement_required;
    outC->Buffer_Out[idx22].Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
    outC->Buffer_Out[idx22].Radio_Common_Header.t_train_reference =
      kcg_lit_int64(0);
    outC->Buffer_Out[idx22].Radio_Common_Header.nid_em = kcg_lit_int64(0);
    outC->Buffer_Out[idx22].Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
    outC->Buffer_Out[idx22].Radio_Common_Header.d_sr = kcg_lit_int64(0);
    outC->Buffer_Out[idx22].Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
    outC->Buffer_Out[idx22].Radio_Common_Header.d_ref = kcg_lit_int64(0);
    outC->Buffer_Out[idx22].Radio_Common_Header.q_dir = Q_DIR_Reverse;
    outC->Buffer_Out[idx22].Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
    outC->Buffer_Out[idx22].Radio_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    for (idx20 = 0; idx20 < 30; idx20++) {
      outC->Buffer_Out[idx22].packets.PacketHeaders[idx20].nid_packet =
        kcg_lit_int64(0);
      outC->Buffer_Out[idx22].packets.PacketHeaders[idx20].q_dir = Q_DIR_Reverse;
      outC->Buffer_Out[idx22].packets.PacketHeaders[idx20].valid = kcg_true;
      outC->Buffer_Out[idx22].packets.PacketHeaders[idx20].startAddress =
        kcg_lit_int64(0);
      outC->Buffer_Out[idx22].packets.PacketHeaders[idx20].endAddress =
        kcg_lit_int64(0);
    }
    for (idx21 = 0; idx21 < 500; idx21++) {
      outC->Buffer_Out[idx22].packets.PacketData[idx21] = kcg_lit_int64(0);
    }
    outC->Buffer_Out[idx22].sendingRBC.valid = kcg_true;
    outC->Buffer_Out[idx22].sendingRBC.nid_c = kcg_lit_int64(0);
    outC->Buffer_Out[idx22].sendingRBC.rbc_id = kcg_lit_int64(0);
    outC->Buffer_Out[idx22].sendingRBC.device_id = kcg_lit_int64(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TransitionBuffer_read_only_reset_InformationFilter_Pkg(
  outC_TransitionBuffer_read_only_InformationFilter_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TransitionBuffer_read_only_InformationFilter_Pkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

