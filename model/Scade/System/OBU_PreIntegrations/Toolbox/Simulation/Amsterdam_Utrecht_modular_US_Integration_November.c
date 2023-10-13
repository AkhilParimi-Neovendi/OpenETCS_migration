/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Amsterdam_Utrecht_modular_US_Integration_November.h"

/* US_Integration_November::Amsterdam_Utrecht_modular/ */
void Amsterdam_Utrecht_modular_US_Integration_November(
  /* TrainPos/ */
  kcg_float64 TrainPos,
  /* Trigger_in/ */
  kcg_int64 Trigger_in,
  /* SelectTrack/ */
  TrackType_US_Integration_November SelectTrack,
  outC_Amsterdam_Utrecht_modular_US_Integration_November *outC)
{
  TrackType_US_Integration_November noname;

  outC->_L23 = SelectTrack;
  noname = outC->_L23;
  outC->_L21 = TrainPos;
  outC->_L22 = Trigger_in;
  /* _L15=(AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone#1)/ */
  Sheet14_standalone_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
    outC->_L21,
    outC->_L22,
    &outC->Context_Sheet14_standalone_1);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L15,
    &outC->Context_Sheet14_standalone_1.Packets);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(
    &outC->_L16,
    &outC->Context_Sheet14_standalone_1.Header);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L17,
    &outC->Context_Sheet14_standalone_1.CompressedBaliseMessage);
  kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L18,
    &outC->Context_Sheet14_standalone_1.RadioTrackTrainHeader_out);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L19,
    &outC->Context_Sheet14_standalone_1.Compressed_Packets_out);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->_L20,
    &outC->Context_Sheet14_standalone_1.Compressed_Radio_Message_out);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->Compressed_Radio_Message_out,
    &outC->_L20);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->Compressed_Packets_out,
    &outC->_L19);
  kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->RadioTrackTrainHeader_out,
    &outC->_L18);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->CompressedBaliseMessage,
    &outC->_L17);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->Balise_Header, &outC->_L16);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->Balise_Packets,
    &outC->_L15);
}

#ifndef KCG_USER_DEFINED_INIT
void Amsterdam_Utrecht_modular_init_US_Integration_November(
  outC_Amsterdam_Utrecht_modular_US_Integration_November *outC)
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

  outC->_L23 = US_01_to_12_US_Integration_November;
  outC->_L22 = kcg_lit_int64(0);
  outC->_L21 = kcg_lit_float64(0.0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L15.PacketHeaders[idx].nid_packet = kcg_lit_int64(0);
    outC->_L15.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L15.PacketHeaders[idx].valid = kcg_true;
    outC->_L15.PacketHeaders[idx].startAddress = kcg_lit_int64(0);
    outC->_L15.PacketHeaders[idx].endAddress = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L15.PacketData[idx1] = kcg_lit_int64(0);
  }
  outC->_L16.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L16.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L16.q_media = Q_MEDIA_Balise;
  outC->_L16.n_pig = N_PIG_I_am_the_1st;
  outC->_L16.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L16.m_dup = M_DUP_No_duplicates;
  outC->_L16.m_mcount = kcg_lit_int64(0);
  outC->_L16.nid_c = kcg_lit_int64(0);
  outC->_L16.nid_bg = kcg_lit_int64(0);
  outC->_L16.q_link = Q_LINK_Unlinked;
  outC->_L17.Header.q_updown = kcg_lit_int64(0);
  outC->_L17.Header.m_version = kcg_lit_int64(0);
  outC->_L17.Header.q_media = kcg_lit_int64(0);
  outC->_L17.Header.n_pig = kcg_lit_int64(0);
  outC->_L17.Header.n_total = kcg_lit_int64(0);
  outC->_L17.Header.m_dup = kcg_lit_int64(0);
  outC->_L17.Header.m_mcount = kcg_lit_int64(0);
  outC->_L17.Header.nid_c = kcg_lit_int64(0);
  outC->_L17.Header.nid_bg = kcg_lit_int64(0);
  outC->_L17.Header.q_link = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L17.Messages.PacketHeaders[idx2].nid_packet = kcg_lit_int64(0);
    outC->_L17.Messages.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L17.Messages.PacketHeaders[idx2].valid = kcg_true;
    outC->_L17.Messages.PacketHeaders[idx2].startAddress = kcg_lit_int64(0);
    outC->_L17.Messages.PacketHeaders[idx2].endAddress = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L17.Messages.PacketData[idx3] = kcg_lit_int64(0);
  }
  outC->_L18.radioDevice = kcg_lit_int64(0);
  outC->_L18.receivedSystemTime = kcg_lit_int64(0);
  outC->_L18.nid_message = kcg_lit_int64(0);
  outC->_L18.t_train = kcg_lit_int64(0);
  outC->_L18.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L18.nid_lrbg = kcg_lit_int64(0);
  outC->_L18.t_train_reference = kcg_lit_int64(0);
  outC->_L18.nid_em = kcg_lit_int64(0);
  outC->_L18.q_scale = Q_SCALE_10_cm_scale;
  outC->_L18.d_sr = kcg_lit_int64(0);
  outC->_L18.t_sh_rqst = kcg_lit_int64(0);
  outC->_L18.d_ref = kcg_lit_int64(0);
  outC->_L18.q_dir = Q_DIR_Reverse;
  outC->_L18.d_emergencystop = kcg_lit_int64(0);
  outC->_L18.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L19.PacketHeaders[idx4].nid_packet = kcg_lit_int64(0);
    outC->_L19.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L19.PacketHeaders[idx4].valid = kcg_true;
    outC->_L19.PacketHeaders[idx4].startAddress = kcg_lit_int64(0);
    outC->_L19.PacketHeaders[idx4].endAddress = kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L19.PacketData[idx5] = kcg_lit_int64(0);
  }
  outC->_L20.Header.radioDevice = kcg_lit_int64(0);
  outC->_L20.Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L20.Header.nid_message = kcg_lit_int64(0);
  outC->_L20.Header.t_train = kcg_lit_int64(0);
  outC->_L20.Header.m_ack = kcg_lit_int64(0);
  outC->_L20.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L20.Header.t_train_reference = kcg_lit_int64(0);
  outC->_L20.Header.nid_em = kcg_lit_int64(0);
  outC->_L20.Header.q_scale = kcg_lit_int64(0);
  outC->_L20.Header.d_sr = kcg_lit_int64(0);
  outC->_L20.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L20.Header.d_ref = kcg_lit_int64(0);
  outC->_L20.Header.q_dir = kcg_lit_int64(0);
  outC->_L20.Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L20.Header.m_version = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->_L20.Messages.PacketHeaders[idx6].nid_packet = kcg_lit_int64(0);
    outC->_L20.Messages.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->_L20.Messages.PacketHeaders[idx6].valid = kcg_true;
    outC->_L20.Messages.PacketHeaders[idx6].startAddress = kcg_lit_int64(0);
    outC->_L20.Messages.PacketHeaders[idx6].endAddress = kcg_lit_int64(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->_L20.Messages.PacketData[idx7] = kcg_lit_int64(0);
  }
  outC->Compressed_Radio_Message_out.Header.radioDevice = kcg_lit_int64(0);
  outC->Compressed_Radio_Message_out.Header.receivedSystemTime = kcg_lit_int64(0);
  outC->Compressed_Radio_Message_out.Header.nid_message = kcg_lit_int64(0);
  outC->Compressed_Radio_Message_out.Header.t_train = kcg_lit_int64(0);
  outC->Compressed_Radio_Message_out.Header.m_ack = kcg_lit_int64(0);
  outC->Compressed_Radio_Message_out.Header.nid_lrbg = kcg_lit_int64(0);
  outC->Compressed_Radio_Message_out.Header.t_train_reference = kcg_lit_int64(0);
  outC->Compressed_Radio_Message_out.Header.nid_em = kcg_lit_int64(0);
  outC->Compressed_Radio_Message_out.Header.q_scale = kcg_lit_int64(0);
  outC->Compressed_Radio_Message_out.Header.d_sr = kcg_lit_int64(0);
  outC->Compressed_Radio_Message_out.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->Compressed_Radio_Message_out.Header.d_ref = kcg_lit_int64(0);
  outC->Compressed_Radio_Message_out.Header.q_dir = kcg_lit_int64(0);
  outC->Compressed_Radio_Message_out.Header.d_emergencystop = kcg_lit_int64(0);
  outC->Compressed_Radio_Message_out.Header.m_version = kcg_lit_int64(0);
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->Compressed_Radio_Message_out.Messages.PacketHeaders[idx8].nid_packet =
      kcg_lit_int64(0);
    outC->Compressed_Radio_Message_out.Messages.PacketHeaders[idx8].q_dir =
      Q_DIR_Reverse;
    outC->Compressed_Radio_Message_out.Messages.PacketHeaders[idx8].valid =
      kcg_true;
    outC->Compressed_Radio_Message_out.Messages.PacketHeaders[idx8].startAddress =
      kcg_lit_int64(0);
    outC->Compressed_Radio_Message_out.Messages.PacketHeaders[idx8].endAddress =
      kcg_lit_int64(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->Compressed_Radio_Message_out.Messages.PacketData[idx9] = kcg_lit_int64(0);
  }
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->Compressed_Packets_out.PacketHeaders[idx10].nid_packet = kcg_lit_int64(0);
    outC->Compressed_Packets_out.PacketHeaders[idx10].q_dir = Q_DIR_Reverse;
    outC->Compressed_Packets_out.PacketHeaders[idx10].valid = kcg_true;
    outC->Compressed_Packets_out.PacketHeaders[idx10].startAddress =
      kcg_lit_int64(0);
    outC->Compressed_Packets_out.PacketHeaders[idx10].endAddress = kcg_lit_int64(0);
  }
  for (idx11 = 0; idx11 < 500; idx11++) {
    outC->Compressed_Packets_out.PacketData[idx11] = kcg_lit_int64(0);
  }
  outC->RadioTrackTrainHeader_out.radioDevice = kcg_lit_int64(0);
  outC->RadioTrackTrainHeader_out.receivedSystemTime = kcg_lit_int64(0);
  outC->RadioTrackTrainHeader_out.nid_message = kcg_lit_int64(0);
  outC->RadioTrackTrainHeader_out.t_train = kcg_lit_int64(0);
  outC->RadioTrackTrainHeader_out.m_ack = M_ACK_No_acknowledgement_required;
  outC->RadioTrackTrainHeader_out.nid_lrbg = kcg_lit_int64(0);
  outC->RadioTrackTrainHeader_out.t_train_reference = kcg_lit_int64(0);
  outC->RadioTrackTrainHeader_out.nid_em = kcg_lit_int64(0);
  outC->RadioTrackTrainHeader_out.q_scale = Q_SCALE_10_cm_scale;
  outC->RadioTrackTrainHeader_out.d_sr = kcg_lit_int64(0);
  outC->RadioTrackTrainHeader_out.t_sh_rqst = kcg_lit_int64(0);
  outC->RadioTrackTrainHeader_out.d_ref = kcg_lit_int64(0);
  outC->RadioTrackTrainHeader_out.q_dir = Q_DIR_Reverse;
  outC->RadioTrackTrainHeader_out.d_emergencystop = kcg_lit_int64(0);
  outC->RadioTrackTrainHeader_out.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->CompressedBaliseMessage.Header.q_updown = kcg_lit_int64(0);
  outC->CompressedBaliseMessage.Header.m_version = kcg_lit_int64(0);
  outC->CompressedBaliseMessage.Header.q_media = kcg_lit_int64(0);
  outC->CompressedBaliseMessage.Header.n_pig = kcg_lit_int64(0);
  outC->CompressedBaliseMessage.Header.n_total = kcg_lit_int64(0);
  outC->CompressedBaliseMessage.Header.m_dup = kcg_lit_int64(0);
  outC->CompressedBaliseMessage.Header.m_mcount = kcg_lit_int64(0);
  outC->CompressedBaliseMessage.Header.nid_c = kcg_lit_int64(0);
  outC->CompressedBaliseMessage.Header.nid_bg = kcg_lit_int64(0);
  outC->CompressedBaliseMessage.Header.q_link = kcg_lit_int64(0);
  for (idx12 = 0; idx12 < 30; idx12++) {
    outC->CompressedBaliseMessage.Messages.PacketHeaders[idx12].nid_packet =
      kcg_lit_int64(0);
    outC->CompressedBaliseMessage.Messages.PacketHeaders[idx12].q_dir =
      Q_DIR_Reverse;
    outC->CompressedBaliseMessage.Messages.PacketHeaders[idx12].valid = kcg_true;
    outC->CompressedBaliseMessage.Messages.PacketHeaders[idx12].startAddress =
      kcg_lit_int64(0);
    outC->CompressedBaliseMessage.Messages.PacketHeaders[idx12].endAddress =
      kcg_lit_int64(0);
  }
  for (idx13 = 0; idx13 < 500; idx13++) {
    outC->CompressedBaliseMessage.Messages.PacketData[idx13] = kcg_lit_int64(0);
  }
  outC->Balise_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->Balise_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->Balise_Header.q_media = Q_MEDIA_Balise;
  outC->Balise_Header.n_pig = N_PIG_I_am_the_1st;
  outC->Balise_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->Balise_Header.m_dup = M_DUP_No_duplicates;
  outC->Balise_Header.m_mcount = kcg_lit_int64(0);
  outC->Balise_Header.nid_c = kcg_lit_int64(0);
  outC->Balise_Header.nid_bg = kcg_lit_int64(0);
  outC->Balise_Header.q_link = Q_LINK_Unlinked;
  for (idx14 = 0; idx14 < 30; idx14++) {
    outC->Balise_Packets.PacketHeaders[idx14].nid_packet = kcg_lit_int64(0);
    outC->Balise_Packets.PacketHeaders[idx14].q_dir = Q_DIR_Reverse;
    outC->Balise_Packets.PacketHeaders[idx14].valid = kcg_true;
    outC->Balise_Packets.PacketHeaders[idx14].startAddress = kcg_lit_int64(0);
    outC->Balise_Packets.PacketHeaders[idx14].endAddress = kcg_lit_int64(0);
  }
  for (idx15 = 0; idx15 < 500; idx15++) {
    outC->Balise_Packets.PacketData[idx15] = kcg_lit_int64(0);
  }
  /* _L15=(AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone#1)/ */
  Sheet14_standalone_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
    &outC->Context_Sheet14_standalone_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Amsterdam_Utrecht_modular_reset_US_Integration_November(
  outC_Amsterdam_Utrecht_modular_US_Integration_November *outC)
{
  /* _L15=(AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone#1)/ */
  Sheet14_standalone_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
    &outC->Context_Sheet14_standalone_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Amsterdam_Utrecht_modular_US_Integration_November.c
** Generation date: 2023-09-12T13:45:52
*************************************************************$ */

