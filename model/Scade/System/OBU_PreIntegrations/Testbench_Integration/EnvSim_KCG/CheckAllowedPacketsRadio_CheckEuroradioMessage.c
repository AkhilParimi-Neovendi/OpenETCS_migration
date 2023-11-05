/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckAllowedPacketsRadio_CheckEuroradioMessage.h"

/* CheckEuroradioMessage::CheckAllowedPacketsRadio/ */
void CheckAllowedPacketsRadio_CheckEuroradioMessage(
  /* rtmMessage/ */
  ReceivedMessage_T_Common_Types_Pkg *rtmMessage,
  outC_CheckAllowedPacketsRadio_CheckEuroradioMessage *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_bool acc;
  static kcg_size idx2;

  outC->_L11 = kcg_true;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L6, rtmMessage);
  kcg_copy_Metadata_T_Common_Types_Pkg(
    &outC->_L7,
    &outC->_L6.packets.PacketHeaders);
  outC->_L8 = outC->_L6.Radio_Common_Header.nid_message;
  /* _L12/ */
  for (idx = 0; idx < 30; idx++) {
    outC->_L12[idx] = outC->_L8;
  }
  kcg_copy_MetadataTruthtable_T1_CheckEuroradioMessage(
    &outC->_L9,
    (MetadataTruthtable_T1_CheckEuroradioMessage *)
      &cPermittedRadioPackets1_CheckEuroradioMessage);
  /* _L13/ */
  for (idx1 = 0; idx1 < 30; idx1++) {
    kcg_copy_MetadataTruthtable_T1_CheckEuroradioMessage(
      &outC->_L13[idx1],
      &outC->_L9);
  }
  outC->_L14 = outC->_L11;
  /* _L14= */
  for (idx2 = 0; idx2 < 30; idx2++) {
    acc = outC->_L14;
    /* _L14=(CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage#1)/ */
    CheckIfSinglePacketIsAllowedForRadioMessage_CheckEuroradioMessage_SubFunctions(
      acc,
      &outC->_L7[idx2],
      outC->_L12[idx2],
      &outC->_L13[idx2],
      &outC->Context_CheckIfSinglePacketIsAllowedForRadioMessage_1[idx2]);
    outC->_L14 =
      outC->Context_CheckIfSinglePacketIsAllowedForRadioMessage_1[idx2].valid;
  }
  outC->valid = outC->_L14;
}

#ifndef KCG_USER_DEFINED_INIT
void CheckAllowedPacketsRadio_init_CheckEuroradioMessage(
  outC_CheckAllowedPacketsRadio_CheckEuroradioMessage *outC)
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

  outC->_L14 = kcg_true;
  for (idx3 = 0; idx3 < 30; idx3++) {
    for (idx2 = 0; idx2 < 46; idx2++) {
      for (idx1 = 0; idx1 < 256; idx1++) {
        outC->_L13[idx3][idx2][idx1] = kcg_true;
      }
    }
  }
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L12[idx4] = kcg_lit_int32(0);
  }
  outC->_L11 = kcg_true;
  for (idx6 = 0; idx6 < 46; idx6++) {
    for (idx5 = 0; idx5 < 256; idx5++) {
      outC->_L9[idx6][idx5] = kcg_true;
    }
  }
  outC->_L8 = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 30; idx7++) {
    outC->_L7[idx7].nid_packet = kcg_lit_int32(0);
    outC->_L7[idx7].q_dir = Q_DIR_Reverse;
    outC->_L7[idx7].valid = kcg_true;
    outC->_L7[idx7].startAddress = kcg_lit_int32(0);
    outC->_L7[idx7].endAddress = kcg_lit_int32(0);
  }
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
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->_L6.packets.PacketHeaders[idx8].nid_packet = kcg_lit_int32(0);
    outC->_L6.packets.PacketHeaders[idx8].q_dir = Q_DIR_Reverse;
    outC->_L6.packets.PacketHeaders[idx8].valid = kcg_true;
    outC->_L6.packets.PacketHeaders[idx8].startAddress = kcg_lit_int32(0);
    outC->_L6.packets.PacketHeaders[idx8].endAddress = kcg_lit_int32(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->_L6.packets.PacketData[idx9] = kcg_lit_int32(0);
  }
  outC->_L6.sendingRBC.valid = kcg_true;
  outC->_L6.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L6.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L6.sendingRBC.device_id = kcg_lit_int32(0);
  outC->valid = kcg_true;
  for (idx = 0; idx < 30; idx++) {
    /* _L14=(CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage#1)/ */
    CheckIfSinglePacketIsAllowedForRadioMessage_init_CheckEuroradioMessage_SubFunctions(
      &outC->Context_CheckIfSinglePacketIsAllowedForRadioMessage_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CheckAllowedPacketsRadio_reset_CheckEuroradioMessage(
  outC_CheckAllowedPacketsRadio_CheckEuroradioMessage *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 30; idx++) {
    /* _L14=(CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage#1)/ */
    CheckIfSinglePacketIsAllowedForRadioMessage_reset_CheckEuroradioMessage_SubFunctions(
      &outC->Context_CheckIfSinglePacketIsAllowedForRadioMessage_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckAllowedPacketsRadio_CheckEuroradioMessage.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

