/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FilterSequence_InformationFilter_Pkg.h"

/* InformationFilter_Pkg::FilterSequence/ */
void FilterSequence_InformationFilter_Pkg(
  /* message/ */
  ReceivedMessage_T_Common_Types_Pkg *message,
  /* inLevel/ */
  M_LEVEL inLevel,
  /* inFilterEvents/ */
  filterRelatedEvents_T_Common_Types_Pkg *inFilterEvents,
  /* inSupervisingDevice/ */
  kcg_int32 inSupervisingDevice,
  /* inMode/ */
  M_MODE inMode,
  outC_FilterSequence_InformationFilter_Pkg *outC)
{
  static ReceivedMessage_T_Common_Types_Pkg op_call;

  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L1, message);
  outC->_L2 = inLevel;
  kcg_copy_filterRelatedEvents_T_Common_Types_Pkg(&outC->_L3, inFilterEvents);
  /* _L6=(InformationFilter_Pkg::FirstFilter::FirstFilter#1)/ */
  FirstFilter_InformationFilter_Pkg_FirstFilter(
    &outC->_L1,
    outC->_L2,
    &outC->_L3,
    &outC->Context_FirstFilter_1);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L6,
    &outC->Context_FirstFilter_1.messageForFilter2);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L7,
    &outC->Context_FirstFilter_1.messageForBuffer);
  outC->_L8 = outC->Context_FirstFilter_1.storeInBuffer1;
  outC->_L4 = inSupervisingDevice;
  /* _L11=(InformationFilter_Pkg::SecondFilter::SecondFilter#1)/ */
  SecondFilter_InformationFilter_Pkg_SecondFilter(
    &outC->_L6,
    &outC->_L7,
    outC->_L4,
    &outC->Context_SecondFilter_1);
  outC->_L11 = outC->Context_SecondFilter_1.storeInBuffer2;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L10,
    &outC->Context_SecondFilter_1.outMessageForBuffer);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L9,
    &outC->Context_SecondFilter_1.messageForFilter3);
  outC->_L14 = outC->_L9.valid;
  outC->every = outC->_L14;
  outC->_L5 = inMode;
  if (outC->every) {
    /* _L12=(InformationFilter_Pkg::ThirdFilter::ThirdFilter#1)/ */
    ThirdFilter_InformationFilter_Pkg_ThirdFilter(
      &outC->_L9,
      outC->_L5,
      &outC->Context_ThirdFilter_1);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &op_call,
      &outC->Context_ThirdFilter_1.outMessage);
  }
  outC->_L16 = outC->_L8 | outC->_L11;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L13,
    (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
  if (outC->every) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L12, &op_call);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L12, &outC->_L13);
  }
  /* _L15= */
  if (outC->_L14) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L15, &outC->_L12);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L15, &outC->_L9);
  }
  outC->storeInBuffer = outC->_L16;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->bufferMessage, &outC->_L10);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->outMessage, &outC->_L15);
}

#ifndef KCG_USER_DEFINED_INIT
void FilterSequence_init_InformationFilter_Pkg(
  outC_FilterSequence_InformationFilter_Pkg *outC)
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

  outC->_L16 = kcg_true;
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
  outC->_L15.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L15.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L15.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L15.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L15.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L15.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L15.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L15.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L15.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L15.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L15.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L15.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L15.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L15.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L15.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L15.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L15.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L15.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L15.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L15.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L15.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L15.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L15.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L15.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L15.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L15.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L15.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L15.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L15.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L15.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L15.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L15.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L15.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L15.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L15.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L15.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L15.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L15.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx = 0; idx < 30; idx++) {
    outC->_L15.packets.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L15.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L15.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L15.packets.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L15.packets.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L15.packets.PacketData[idx1] = kcg_lit_int32(0);
  }
  outC->_L15.sendingRBC.valid = kcg_true;
  outC->_L15.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L15.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L15.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L14 = kcg_true;
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
  outC->_L13.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L13.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L13.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L13.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L13.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L13.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L13.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L13.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L13.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L13.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L13.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L13.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L13.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L13.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L13.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L13.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L13.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L13.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L13.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L13.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L13.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L13.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L13.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L13.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L13.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L13.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L13.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L13.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L13.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L13.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L13.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L13.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L13.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L13.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L13.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L13.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L13.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L13.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L13.packets.PacketHeaders[idx2].nid_packet = kcg_lit_int32(0);
    outC->_L13.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L13.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L13.packets.PacketHeaders[idx2].startAddress = kcg_lit_int32(0);
    outC->_L13.packets.PacketHeaders[idx2].endAddress = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L13.packets.PacketData[idx3] = kcg_lit_int32(0);
  }
  outC->_L13.sendingRBC.valid = kcg_true;
  outC->_L13.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L13.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L13.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L12.valid = kcg_true;
  outC->_L12.source = msrc_undefined_Common_Types_Pkg;
  outC->_L12.radioMetadata.t_train_reference = kcg_true;
  outC->_L12.radioMetadata.nid_em = kcg_true;
  outC->_L12.radioMetadata.q_scale = kcg_true;
  outC->_L12.radioMetadata.d_sr = kcg_true;
  outC->_L12.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L12.radioMetadata.d_ref = kcg_true;
  outC->_L12.radioMetadata.q_dir = kcg_true;
  outC->_L12.radioMetadata.d_emergencystop = kcg_true;
  outC->_L12.radioMetadata.m_version = kcg_true;
  outC->_L12.BG_Common_Header.valid = kcg_true;
  outC->_L12.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L12.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L12.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L12.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L12.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L12.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L12.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L12.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L12.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L12.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L12.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L12.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L12.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L12.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L12.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L12.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L12.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L12.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L12.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L12.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L12.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L12.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L12.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L12.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L12.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L12.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L12.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L12.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L12.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L12.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L12.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L12.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L12.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L12.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L12.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L12.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L12.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L12.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L12.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L12.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L12.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L12.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L12.packets.PacketHeaders[idx4].nid_packet = kcg_lit_int32(0);
    outC->_L12.packets.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L12.packets.PacketHeaders[idx4].valid = kcg_true;
    outC->_L12.packets.PacketHeaders[idx4].startAddress = kcg_lit_int32(0);
    outC->_L12.packets.PacketHeaders[idx4].endAddress = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L12.packets.PacketData[idx5] = kcg_lit_int32(0);
  }
  outC->_L12.sendingRBC.valid = kcg_true;
  outC->_L12.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L12.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L12.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L11 = kcg_true;
  outC->_L10.valid = kcg_true;
  outC->_L10.source = msrc_undefined_Common_Types_Pkg;
  outC->_L10.radioMetadata.t_train_reference = kcg_true;
  outC->_L10.radioMetadata.nid_em = kcg_true;
  outC->_L10.radioMetadata.q_scale = kcg_true;
  outC->_L10.radioMetadata.d_sr = kcg_true;
  outC->_L10.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L10.radioMetadata.d_ref = kcg_true;
  outC->_L10.radioMetadata.q_dir = kcg_true;
  outC->_L10.radioMetadata.d_emergencystop = kcg_true;
  outC->_L10.radioMetadata.m_version = kcg_true;
  outC->_L10.BG_Common_Header.valid = kcg_true;
  outC->_L10.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L10.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L10.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L10.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L10.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L10.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L10.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L10.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L10.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L10.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L10.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L10.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L10.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L10.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L10.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L10.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L10.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L10.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L10.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L10.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L10.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L10.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L10.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L10.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L10.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L10.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L10.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L10.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L10.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L10.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L10.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L10.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L10.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L10.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L10.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L10.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L10.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L10.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L10.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L10.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L10.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L10.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->_L10.packets.PacketHeaders[idx6].nid_packet = kcg_lit_int32(0);
    outC->_L10.packets.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->_L10.packets.PacketHeaders[idx6].valid = kcg_true;
    outC->_L10.packets.PacketHeaders[idx6].startAddress = kcg_lit_int32(0);
    outC->_L10.packets.PacketHeaders[idx6].endAddress = kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->_L10.packets.PacketData[idx7] = kcg_lit_int32(0);
  }
  outC->_L10.sendingRBC.valid = kcg_true;
  outC->_L10.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L10.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L10.sendingRBC.device_id = kcg_lit_int32(0);
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
  outC->_L9.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L9.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L9.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L9.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L9.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L9.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L9.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L9.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L9.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L9.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L9.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L9.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L9.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L9.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L9.BG_Common_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L9.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L9.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L9.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L9.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L9.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L9.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L9.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L9.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L9.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L9.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L9.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L9.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L9.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L9.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L9.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L9.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L9.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L9.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L9.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L9.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L9.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L9.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L9.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->_L9.packets.PacketHeaders[idx8].nid_packet = kcg_lit_int32(0);
    outC->_L9.packets.PacketHeaders[idx8].q_dir = Q_DIR_Reverse;
    outC->_L9.packets.PacketHeaders[idx8].valid = kcg_true;
    outC->_L9.packets.PacketHeaders[idx8].startAddress = kcg_lit_int32(0);
    outC->_L9.packets.PacketHeaders[idx8].endAddress = kcg_lit_int32(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->_L9.packets.PacketData[idx9] = kcg_lit_int32(0);
  }
  outC->_L9.sendingRBC.valid = kcg_true;
  outC->_L9.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L9.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L9.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L8 = kcg_true;
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
  outC->_L7.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L7.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L7.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L7.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L7.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L7.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L7.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L7.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L7.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L7.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L7.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L7.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L7.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L7.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L7.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L7.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L7.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L7.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L7.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L7.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L7.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L7.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->_L7.packets.PacketHeaders[idx10].nid_packet = kcg_lit_int32(0);
    outC->_L7.packets.PacketHeaders[idx10].q_dir = Q_DIR_Reverse;
    outC->_L7.packets.PacketHeaders[idx10].valid = kcg_true;
    outC->_L7.packets.PacketHeaders[idx10].startAddress = kcg_lit_int32(0);
    outC->_L7.packets.PacketHeaders[idx10].endAddress = kcg_lit_int32(0);
  }
  for (idx11 = 0; idx11 < 500; idx11++) {
    outC->_L7.packets.PacketData[idx11] = kcg_lit_int32(0);
  }
  outC->_L7.sendingRBC.valid = kcg_true;
  outC->_L7.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L7.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L7.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L6.valid = kcg_true;
  outC->_L6.source = msrc_undefined_Common_Types_Pkg;
  outC->_L6.radioMetadata.t_train_reference = kcg_true;
  outC->_L6.radioMetadata.nid_em = kcg_true;
  outC->_L6.radioMetadata.q_scale = kcg_true;
  outC->_L6.radioMetadata.d_sr = kcg_true;
  outC->_L6.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L6.radioMetadata.d_ref = kcg_true;
  outC->_L6.radioMetadata.q_dir = kcg_true;
  outC->_L6.radioMetadata.d_emergencystop = kcg_true;
  outC->_L6.radioMetadata.m_version = kcg_true;
  outC->_L6.BG_Common_Header.valid = kcg_true;
  outC->_L6.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L6.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L6.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L6.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L6.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L6.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L6.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L6.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L6.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L6.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L6.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L6.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L6.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L6.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L6.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L6.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L6.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L6.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L6.BG_Common_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L6.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L6.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L6.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L6.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L6.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L6.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L6.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L6.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L6.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L6.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L6.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L6.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L6.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L6.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L6.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L6.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L6.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L6.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L6.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L6.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L6.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L6.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L6.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx12 = 0; idx12 < 30; idx12++) {
    outC->_L6.packets.PacketHeaders[idx12].nid_packet = kcg_lit_int32(0);
    outC->_L6.packets.PacketHeaders[idx12].q_dir = Q_DIR_Reverse;
    outC->_L6.packets.PacketHeaders[idx12].valid = kcg_true;
    outC->_L6.packets.PacketHeaders[idx12].startAddress = kcg_lit_int32(0);
    outC->_L6.packets.PacketHeaders[idx12].endAddress = kcg_lit_int32(0);
  }
  for (idx13 = 0; idx13 < 500; idx13++) {
    outC->_L6.packets.PacketData[idx13] = kcg_lit_int32(0);
  }
  outC->_L6.sendingRBC.valid = kcg_true;
  outC->_L6.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L6.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L6.sendingRBC.device_id = kcg_lit_int32(0);
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
  outC->_L2 = M_LEVEL_Level_0;
  outC->_L3.pendingL1Transition = kcg_true;
  outC->_L3.pendingL12L3Transition = kcg_true;
  outC->_L3.pendingAckOfTrainDataFromRBC = kcg_true;
  outC->_L3.emergencyStopAccepted = kcg_true;
  outC->_L3.lastAckTextMessageId = kcg_lit_int32(0);
  outC->_L3.pendingNTCTransition = kcg_true;
  outC->_L3.SPPAndGradientOnBoard = kcg_true;
  outC->_L3.MACoverNotFullLength = kcg_true;
  outC->_L4 = kcg_lit_int32(0);
  outC->_L5 = M_MODE_Full_Supervision;
  outC->every = kcg_true;
  outC->storeInBuffer = kcg_true;
  outC->bufferMessage.valid = kcg_true;
  outC->bufferMessage.source = msrc_undefined_Common_Types_Pkg;
  outC->bufferMessage.radioMetadata.t_train_reference = kcg_true;
  outC->bufferMessage.radioMetadata.nid_em = kcg_true;
  outC->bufferMessage.radioMetadata.q_scale = kcg_true;
  outC->bufferMessage.radioMetadata.d_sr = kcg_true;
  outC->bufferMessage.radioMetadata.t_sh_rqst = kcg_true;
  outC->bufferMessage.radioMetadata.d_ref = kcg_true;
  outC->bufferMessage.radioMetadata.q_dir = kcg_true;
  outC->bufferMessage.radioMetadata.d_emergencystop = kcg_true;
  outC->bufferMessage.radioMetadata.m_version = kcg_true;
  outC->bufferMessage.BG_Common_Header.valid = kcg_true;
  outC->bufferMessage.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->bufferMessage.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->bufferMessage.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->bufferMessage.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->bufferMessage.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->bufferMessage.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->bufferMessage.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->bufferMessage.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->bufferMessage.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->bufferMessage.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->bufferMessage.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(
      0);
  outC->bufferMessage.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->bufferMessage.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->bufferMessage.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->bufferMessage.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->bufferMessage.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(
      0);
  outC->bufferMessage.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(
      0);
  outC->bufferMessage.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->bufferMessage.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->bufferMessage.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->bufferMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->bufferMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->bufferMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->bufferMessage.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->bufferMessage.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->bufferMessage.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->bufferMessage.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->bufferMessage.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->bufferMessage.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->bufferMessage.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->bufferMessage.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->bufferMessage.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->bufferMessage.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->bufferMessage.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->bufferMessage.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->bufferMessage.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->bufferMessage.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->bufferMessage.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->bufferMessage.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->bufferMessage.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->bufferMessage.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->bufferMessage.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx16 = 0; idx16 < 30; idx16++) {
    outC->bufferMessage.packets.PacketHeaders[idx16].nid_packet = kcg_lit_int32(0);
    outC->bufferMessage.packets.PacketHeaders[idx16].q_dir = Q_DIR_Reverse;
    outC->bufferMessage.packets.PacketHeaders[idx16].valid = kcg_true;
    outC->bufferMessage.packets.PacketHeaders[idx16].startAddress =
      kcg_lit_int32(0);
    outC->bufferMessage.packets.PacketHeaders[idx16].endAddress = kcg_lit_int32(0);
  }
  for (idx17 = 0; idx17 < 500; idx17++) {
    outC->bufferMessage.packets.PacketData[idx17] = kcg_lit_int32(0);
  }
  outC->bufferMessage.sendingRBC.valid = kcg_true;
  outC->bufferMessage.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->bufferMessage.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->bufferMessage.sendingRBC.device_id = kcg_lit_int32(0);
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
  for (idx18 = 0; idx18 < 30; idx18++) {
    outC->outMessage.packets.PacketHeaders[idx18].nid_packet = kcg_lit_int32(0);
    outC->outMessage.packets.PacketHeaders[idx18].q_dir = Q_DIR_Reverse;
    outC->outMessage.packets.PacketHeaders[idx18].valid = kcg_true;
    outC->outMessage.packets.PacketHeaders[idx18].startAddress = kcg_lit_int32(0);
    outC->outMessage.packets.PacketHeaders[idx18].endAddress = kcg_lit_int32(0);
  }
  for (idx19 = 0; idx19 < 500; idx19++) {
    outC->outMessage.packets.PacketData[idx19] = kcg_lit_int32(0);
  }
  outC->outMessage.sendingRBC.valid = kcg_true;
  outC->outMessage.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->outMessage.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->outMessage.sendingRBC.device_id = kcg_lit_int32(0);
  /* _L12=(InformationFilter_Pkg::ThirdFilter::ThirdFilter#1)/ */
  ThirdFilter_init_InformationFilter_Pkg_ThirdFilter(
    &outC->Context_ThirdFilter_1);
  /* _L11=(InformationFilter_Pkg::SecondFilter::SecondFilter#1)/ */
  SecondFilter_init_InformationFilter_Pkg_SecondFilter(
    &outC->Context_SecondFilter_1);
  /* _L6=(InformationFilter_Pkg::FirstFilter::FirstFilter#1)/ */
  FirstFilter_init_InformationFilter_Pkg_FirstFilter(
    &outC->Context_FirstFilter_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void FilterSequence_reset_InformationFilter_Pkg(
  outC_FilterSequence_InformationFilter_Pkg *outC)
{
  /* _L12=(InformationFilter_Pkg::ThirdFilter::ThirdFilter#1)/ */
  ThirdFilter_reset_InformationFilter_Pkg_ThirdFilter(
    &outC->Context_ThirdFilter_1);
  /* _L11=(InformationFilter_Pkg::SecondFilter::SecondFilter#1)/ */
  SecondFilter_reset_InformationFilter_Pkg_SecondFilter(
    &outC->Context_SecondFilter_1);
  /* _L6=(InformationFilter_Pkg::FirstFilter::FirstFilter#1)/ */
  FirstFilter_reset_InformationFilter_Pkg_FirstFilter(
    &outC->Context_FirstFilter_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** FilterSequence_InformationFilter_Pkg.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

