/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Amsterdam_Utrecht_US_US_Integration_November.h"

/* US_Integration_November::Amsterdam_Utrecht_US/ */
void Amsterdam_Utrecht_US_US_Integration_November(
  /* TrainPos/ */
  kcg_float32 TrainPos,
  /* Trigger_in/ */
  kcg_int32 Trigger_in,
  /* SelectTrack/ */
  TrackType_US_Integration_November SelectTrack,
  outC_Amsterdam_Utrecht_US_US_Integration_November *outC)
{
  outC->_L14 = SelectTrack;
  outC->_L2 = TrainPos;
  /* _L1=(AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises#1)/ */
  Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1(
    outC->_L2,
    &outC->Context_Amsterdam_Utrecht_Lijn1_balises_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L1,
    &outC->Context_Amsterdam_Utrecht_Lijn1_balises_1.BaliseMessage);
  kcg_copy_CompressedBaliseMessage_TM(&outC->CompressedBaliseMessage, &outC->_L1);
  outC->_L13 = Trigger_in;
  /* _L8=(US_Integration_November::Amsterdam_Utrecht_RBC_Integration#1)/ */
  Amsterdam_Utrecht_RBC_Int_US_Integration_November(
    outC->_L13,
    outC->_L14,
    &outC->Context_Amsterdam_Utrecht_RBC_Integration_1);
  kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L8,
    &outC->Context_Amsterdam_Utrecht_RBC_Integration_1.RadioTrackTrainHeader_out);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L9,
    &outC->Context_Amsterdam_Utrecht_RBC_Integration_1.Compressed_Packets_out);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->_L10,
    &outC->Context_Amsterdam_Utrecht_RBC_Integration_1.Compressed_Radio_Message_out);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->Compressed_Radio_Message_out,
    &outC->_L10);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->Compressed_Packets_out,
    &outC->_L9);
  kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->RadioTrackTrainHeader_out,
    &outC->_L8);
  kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L5, &outC->_L1.Header);
  /* _L7=(TM_conversions::CASTLIB_BaliseHeaders#1)/ */
  CASTLIB_BaliseHeaders_TM_conversions(
    &outC->_L5,
    &outC->Context_CASTLIB_BaliseHeaders_1);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(
    &outC->_L7,
    &outC->Context_CASTLIB_BaliseHeaders_1.Out);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L6, &outC->_L1.Messages);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->Balise_Header, &outC->_L7);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->Balise_Packets,
    &outC->_L6);
}

#ifndef KCG_USER_DEFINED_INIT
void Amsterdam_Utrecht_US_init_US_Integration_November(
  outC_Amsterdam_Utrecht_US_US_Integration_November *outC)
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

  outC->_L14 = US_01_to_12_US_Integration_November;
  outC->_L10.Header.radioDevice = kcg_lit_int32(0);
  outC->_L10.Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L10.Header.nid_message = kcg_lit_int32(0);
  outC->_L10.Header.t_train = kcg_lit_int32(0);
  outC->_L10.Header.m_ack = kcg_lit_int32(0);
  outC->_L10.Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L10.Header.t_train_reference = kcg_lit_int32(0);
  outC->_L10.Header.nid_em = kcg_lit_int32(0);
  outC->_L10.Header.q_scale = kcg_lit_int32(0);
  outC->_L10.Header.d_sr = kcg_lit_int32(0);
  outC->_L10.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L10.Header.d_ref = kcg_lit_int32(0);
  outC->_L10.Header.q_dir = kcg_lit_int32(0);
  outC->_L10.Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L10.Header.m_version = kcg_lit_int32(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L10.Messages.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L10.Messages.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L10.Messages.PacketHeaders[idx].valid = kcg_true;
    outC->_L10.Messages.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L10.Messages.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L10.Messages.PacketData[idx1] = kcg_lit_int32(0);
  }
  outC->_L13 = kcg_lit_int32(0);
  outC->_L8.radioDevice = kcg_lit_int32(0);
  outC->_L8.receivedSystemTime = kcg_lit_int32(0);
  outC->_L8.nid_message = kcg_lit_int32(0);
  outC->_L8.t_train = kcg_lit_int32(0);
  outC->_L8.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L8.nid_lrbg = kcg_lit_int32(0);
  outC->_L8.t_train_reference = kcg_lit_int32(0);
  outC->_L8.nid_em = kcg_lit_int32(0);
  outC->_L8.q_scale = Q_SCALE_10_cm_scale;
  outC->_L8.d_sr = kcg_lit_int32(0);
  outC->_L8.t_sh_rqst = kcg_lit_int32(0);
  outC->_L8.d_ref = kcg_lit_int32(0);
  outC->_L8.q_dir = Q_DIR_Reverse;
  outC->_L8.d_emergencystop = kcg_lit_int32(0);
  outC->_L8.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L9.PacketHeaders[idx2].nid_packet = kcg_lit_int32(0);
    outC->_L9.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L9.PacketHeaders[idx2].valid = kcg_true;
    outC->_L9.PacketHeaders[idx2].startAddress = kcg_lit_int32(0);
    outC->_L9.PacketHeaders[idx2].endAddress = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L9.PacketData[idx3] = kcg_lit_int32(0);
  }
  outC->_L7.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L7.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L7.q_media = Q_MEDIA_Balise;
  outC->_L7.n_pig = N_PIG_I_am_the_1st;
  outC->_L7.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L7.m_dup = M_DUP_No_duplicates;
  outC->_L7.m_mcount = kcg_lit_int32(0);
  outC->_L7.nid_c = kcg_lit_int32(0);
  outC->_L7.nid_bg = kcg_lit_int32(0);
  outC->_L7.q_link = Q_LINK_Unlinked;
  outC->_L5.q_updown = kcg_lit_int32(0);
  outC->_L5.m_version = kcg_lit_int32(0);
  outC->_L5.q_media = kcg_lit_int32(0);
  outC->_L5.n_pig = kcg_lit_int32(0);
  outC->_L5.n_total = kcg_lit_int32(0);
  outC->_L5.m_dup = kcg_lit_int32(0);
  outC->_L5.m_mcount = kcg_lit_int32(0);
  outC->_L5.nid_c = kcg_lit_int32(0);
  outC->_L5.nid_bg = kcg_lit_int32(0);
  outC->_L5.q_link = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L6.PacketHeaders[idx4].nid_packet = kcg_lit_int32(0);
    outC->_L6.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L6.PacketHeaders[idx4].valid = kcg_true;
    outC->_L6.PacketHeaders[idx4].startAddress = kcg_lit_int32(0);
    outC->_L6.PacketHeaders[idx4].endAddress = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L6.PacketData[idx5] = kcg_lit_int32(0);
  }
  outC->_L2 = kcg_lit_float32(0.0);
  outC->_L1.Header.q_updown = kcg_lit_int32(0);
  outC->_L1.Header.m_version = kcg_lit_int32(0);
  outC->_L1.Header.q_media = kcg_lit_int32(0);
  outC->_L1.Header.n_pig = kcg_lit_int32(0);
  outC->_L1.Header.n_total = kcg_lit_int32(0);
  outC->_L1.Header.m_dup = kcg_lit_int32(0);
  outC->_L1.Header.m_mcount = kcg_lit_int32(0);
  outC->_L1.Header.nid_c = kcg_lit_int32(0);
  outC->_L1.Header.nid_bg = kcg_lit_int32(0);
  outC->_L1.Header.q_link = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->_L1.Messages.PacketHeaders[idx6].nid_packet = kcg_lit_int32(0);
    outC->_L1.Messages.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->_L1.Messages.PacketHeaders[idx6].valid = kcg_true;
    outC->_L1.Messages.PacketHeaders[idx6].startAddress = kcg_lit_int32(0);
    outC->_L1.Messages.PacketHeaders[idx6].endAddress = kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->_L1.Messages.PacketData[idx7] = kcg_lit_int32(0);
  }
  outC->Compressed_Radio_Message_out.Header.radioDevice = kcg_lit_int32(0);
  outC->Compressed_Radio_Message_out.Header.receivedSystemTime = kcg_lit_int32(0);
  outC->Compressed_Radio_Message_out.Header.nid_message = kcg_lit_int32(0);
  outC->Compressed_Radio_Message_out.Header.t_train = kcg_lit_int32(0);
  outC->Compressed_Radio_Message_out.Header.m_ack = kcg_lit_int32(0);
  outC->Compressed_Radio_Message_out.Header.nid_lrbg = kcg_lit_int32(0);
  outC->Compressed_Radio_Message_out.Header.t_train_reference = kcg_lit_int32(0);
  outC->Compressed_Radio_Message_out.Header.nid_em = kcg_lit_int32(0);
  outC->Compressed_Radio_Message_out.Header.q_scale = kcg_lit_int32(0);
  outC->Compressed_Radio_Message_out.Header.d_sr = kcg_lit_int32(0);
  outC->Compressed_Radio_Message_out.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->Compressed_Radio_Message_out.Header.d_ref = kcg_lit_int32(0);
  outC->Compressed_Radio_Message_out.Header.q_dir = kcg_lit_int32(0);
  outC->Compressed_Radio_Message_out.Header.d_emergencystop = kcg_lit_int32(0);
  outC->Compressed_Radio_Message_out.Header.m_version = kcg_lit_int32(0);
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->Compressed_Radio_Message_out.Messages.PacketHeaders[idx8].nid_packet =
      kcg_lit_int32(0);
    outC->Compressed_Radio_Message_out.Messages.PacketHeaders[idx8].q_dir =
      Q_DIR_Reverse;
    outC->Compressed_Radio_Message_out.Messages.PacketHeaders[idx8].valid =
      kcg_true;
    outC->Compressed_Radio_Message_out.Messages.PacketHeaders[idx8].startAddress =
      kcg_lit_int32(0);
    outC->Compressed_Radio_Message_out.Messages.PacketHeaders[idx8].endAddress =
      kcg_lit_int32(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->Compressed_Radio_Message_out.Messages.PacketData[idx9] = kcg_lit_int32(0);
  }
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->Compressed_Packets_out.PacketHeaders[idx10].nid_packet = kcg_lit_int32(0);
    outC->Compressed_Packets_out.PacketHeaders[idx10].q_dir = Q_DIR_Reverse;
    outC->Compressed_Packets_out.PacketHeaders[idx10].valid = kcg_true;
    outC->Compressed_Packets_out.PacketHeaders[idx10].startAddress =
      kcg_lit_int32(0);
    outC->Compressed_Packets_out.PacketHeaders[idx10].endAddress = kcg_lit_int32(0);
  }
  for (idx11 = 0; idx11 < 500; idx11++) {
    outC->Compressed_Packets_out.PacketData[idx11] = kcg_lit_int32(0);
  }
  outC->RadioTrackTrainHeader_out.radioDevice = kcg_lit_int32(0);
  outC->RadioTrackTrainHeader_out.receivedSystemTime = kcg_lit_int32(0);
  outC->RadioTrackTrainHeader_out.nid_message = kcg_lit_int32(0);
  outC->RadioTrackTrainHeader_out.t_train = kcg_lit_int32(0);
  outC->RadioTrackTrainHeader_out.m_ack = M_ACK_No_acknowledgement_required;
  outC->RadioTrackTrainHeader_out.nid_lrbg = kcg_lit_int32(0);
  outC->RadioTrackTrainHeader_out.t_train_reference = kcg_lit_int32(0);
  outC->RadioTrackTrainHeader_out.nid_em = kcg_lit_int32(0);
  outC->RadioTrackTrainHeader_out.q_scale = Q_SCALE_10_cm_scale;
  outC->RadioTrackTrainHeader_out.d_sr = kcg_lit_int32(0);
  outC->RadioTrackTrainHeader_out.t_sh_rqst = kcg_lit_int32(0);
  outC->RadioTrackTrainHeader_out.d_ref = kcg_lit_int32(0);
  outC->RadioTrackTrainHeader_out.q_dir = Q_DIR_Reverse;
  outC->RadioTrackTrainHeader_out.d_emergencystop = kcg_lit_int32(0);
  outC->RadioTrackTrainHeader_out.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->CompressedBaliseMessage.Header.q_updown = kcg_lit_int32(0);
  outC->CompressedBaliseMessage.Header.m_version = kcg_lit_int32(0);
  outC->CompressedBaliseMessage.Header.q_media = kcg_lit_int32(0);
  outC->CompressedBaliseMessage.Header.n_pig = kcg_lit_int32(0);
  outC->CompressedBaliseMessage.Header.n_total = kcg_lit_int32(0);
  outC->CompressedBaliseMessage.Header.m_dup = kcg_lit_int32(0);
  outC->CompressedBaliseMessage.Header.m_mcount = kcg_lit_int32(0);
  outC->CompressedBaliseMessage.Header.nid_c = kcg_lit_int32(0);
  outC->CompressedBaliseMessage.Header.nid_bg = kcg_lit_int32(0);
  outC->CompressedBaliseMessage.Header.q_link = kcg_lit_int32(0);
  for (idx12 = 0; idx12 < 30; idx12++) {
    outC->CompressedBaliseMessage.Messages.PacketHeaders[idx12].nid_packet =
      kcg_lit_int32(0);
    outC->CompressedBaliseMessage.Messages.PacketHeaders[idx12].q_dir =
      Q_DIR_Reverse;
    outC->CompressedBaliseMessage.Messages.PacketHeaders[idx12].valid = kcg_true;
    outC->CompressedBaliseMessage.Messages.PacketHeaders[idx12].startAddress =
      kcg_lit_int32(0);
    outC->CompressedBaliseMessage.Messages.PacketHeaders[idx12].endAddress =
      kcg_lit_int32(0);
  }
  for (idx13 = 0; idx13 < 500; idx13++) {
    outC->CompressedBaliseMessage.Messages.PacketData[idx13] = kcg_lit_int32(0);
  }
  outC->Balise_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->Balise_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->Balise_Header.q_media = Q_MEDIA_Balise;
  outC->Balise_Header.n_pig = N_PIG_I_am_the_1st;
  outC->Balise_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->Balise_Header.m_dup = M_DUP_No_duplicates;
  outC->Balise_Header.m_mcount = kcg_lit_int32(0);
  outC->Balise_Header.nid_c = kcg_lit_int32(0);
  outC->Balise_Header.nid_bg = kcg_lit_int32(0);
  outC->Balise_Header.q_link = Q_LINK_Unlinked;
  for (idx14 = 0; idx14 < 30; idx14++) {
    outC->Balise_Packets.PacketHeaders[idx14].nid_packet = kcg_lit_int32(0);
    outC->Balise_Packets.PacketHeaders[idx14].q_dir = Q_DIR_Reverse;
    outC->Balise_Packets.PacketHeaders[idx14].valid = kcg_true;
    outC->Balise_Packets.PacketHeaders[idx14].startAddress = kcg_lit_int32(0);
    outC->Balise_Packets.PacketHeaders[idx14].endAddress = kcg_lit_int32(0);
  }
  for (idx15 = 0; idx15 < 500; idx15++) {
    outC->Balise_Packets.PacketData[idx15] = kcg_lit_int32(0);
  }
  /* _L7=(TM_conversions::CASTLIB_BaliseHeaders#1)/ */
  CASTLIB_BaliseHeaders_init_TM_conversions(
    &outC->Context_CASTLIB_BaliseHeaders_1);
  /* _L8=(US_Integration_November::Amsterdam_Utrecht_RBC_Integration#1)/ */
  Amsterdam_Utrecht_RBC_Int_init_US_Integration_November(
    &outC->Context_Amsterdam_Utrecht_RBC_Integration_1);
  /* _L1=(AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises#1)/ */
  Amsterdam_Utrecht_Lijn1_b_init_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1(
    &outC->Context_Amsterdam_Utrecht_Lijn1_balises_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Amsterdam_Utrecht_US_reset_US_Integration_November(
  outC_Amsterdam_Utrecht_US_US_Integration_November *outC)
{
  /* _L7=(TM_conversions::CASTLIB_BaliseHeaders#1)/ */
  CASTLIB_BaliseHeaders_reset_TM_conversions(
    &outC->Context_CASTLIB_BaliseHeaders_1);
  /* _L8=(US_Integration_November::Amsterdam_Utrecht_RBC_Integration#1)/ */
  Amsterdam_Utrecht_RBC_Int_reset_US_Integration_November(
    &outC->Context_Amsterdam_Utrecht_RBC_Integration_1);
  /* _L1=(AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises#1)/ */
  Amsterdam_Utrecht_Lijn1_b_reset_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1(
    &outC->Context_Amsterdam_Utrecht_Lijn1_balises_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Amsterdam_Utrecht_US_US_Integration_November.c
** Generation date: 2023-09-12T13:45:52
*************************************************************$ */

