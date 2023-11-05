/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Packets_BG477_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises.h"

/* AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Packets_BG477/ */
void Packets_BG477_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
  /* Header/ */
  BaliseTelegramHeader_int_T_TM *Header,
  /* Balise_data_in/ */
  B_data_internal_T_InfraLib *Balise_data_in,
  outC_Packets_BG477_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises *outC)
{
  outC->_L33 = kcg_true;
  kcg_copy_B_data_internal_T_InfraLib(&outC->_L26, Balise_data_in);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L25, &outC->_L26.packets);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->B_data_in, &outC->_L25);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L22, &outC->B_data_in);
  /* _L11=(MessageLibBaseline2::Send_P255#1)/ */
  Send_P255_MessageLibBaseline2(
    &outC->_L22,
    (P255_trackside_int_T_TM *) &BGxxx_P255_Packets426,
    &outC->Context_Send_P255_1);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L11,
    &outC->Context_Send_P255_1.packet_data_out);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->B_data_out, &outC->_L11);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L30, &outC->B_data_out);
  kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L28, Header);
  kcg_copy_B_data_internal_T_InfraLib(&outC->_L29, &outC->_L26);
  if (kcg_true) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L29.header, &outC->_L28);
  }
  kcg_copy_B_data_internal_T_InfraLib(&outC->_L31, &outC->_L29);
  if (kcg_true) {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L31.packets, &outC->_L30);
  }
  kcg_copy_B_data_internal_T_InfraLib(&outC->_L32, &outC->_L31);
  if (kcg_true) {
    outC->_L32.balise_passed = outC->_L33;
  }
  kcg_copy_B_data_internal_T_InfraLib(&outC->Balise_data_out, &outC->_L32);
}

#ifndef KCG_USER_DEFINED_INIT
void Packets_BG477_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
  outC_Packets_BG477_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises *outC)
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

  outC->_L33 = kcg_true;
  outC->_L32.header.q_updown = kcg_lit_int32(0);
  outC->_L32.header.m_version = kcg_lit_int32(0);
  outC->_L32.header.q_media = kcg_lit_int32(0);
  outC->_L32.header.n_pig = kcg_lit_int32(0);
  outC->_L32.header.n_total = kcg_lit_int32(0);
  outC->_L32.header.m_dup = kcg_lit_int32(0);
  outC->_L32.header.m_mcount = kcg_lit_int32(0);
  outC->_L32.header.nid_c = kcg_lit_int32(0);
  outC->_L32.header.nid_bg = kcg_lit_int32(0);
  outC->_L32.header.q_link = kcg_lit_int32(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L32.packets.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L32.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L32.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L32.packets.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L32.packets.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L32.packets.PacketData[idx1] = kcg_lit_int32(0);
  }
  outC->_L32.engineering_BG_location = kcg_lit_int32(0);
  outC->_L32.TrainPos = kcg_lit_float32(0.0);
  outC->_L32.pig_nom_0 = kcg_lit_int32(0);
  outC->_L32.balise_passed = kcg_true;
  outC->_L31.header.q_updown = kcg_lit_int32(0);
  outC->_L31.header.m_version = kcg_lit_int32(0);
  outC->_L31.header.q_media = kcg_lit_int32(0);
  outC->_L31.header.n_pig = kcg_lit_int32(0);
  outC->_L31.header.n_total = kcg_lit_int32(0);
  outC->_L31.header.m_dup = kcg_lit_int32(0);
  outC->_L31.header.m_mcount = kcg_lit_int32(0);
  outC->_L31.header.nid_c = kcg_lit_int32(0);
  outC->_L31.header.nid_bg = kcg_lit_int32(0);
  outC->_L31.header.q_link = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L31.packets.PacketHeaders[idx2].nid_packet = kcg_lit_int32(0);
    outC->_L31.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L31.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L31.packets.PacketHeaders[idx2].startAddress = kcg_lit_int32(0);
    outC->_L31.packets.PacketHeaders[idx2].endAddress = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L31.packets.PacketData[idx3] = kcg_lit_int32(0);
  }
  outC->_L31.engineering_BG_location = kcg_lit_int32(0);
  outC->_L31.TrainPos = kcg_lit_float32(0.0);
  outC->_L31.pig_nom_0 = kcg_lit_int32(0);
  outC->_L31.balise_passed = kcg_true;
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L30.PacketHeaders[idx4].nid_packet = kcg_lit_int32(0);
    outC->_L30.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L30.PacketHeaders[idx4].valid = kcg_true;
    outC->_L30.PacketHeaders[idx4].startAddress = kcg_lit_int32(0);
    outC->_L30.PacketHeaders[idx4].endAddress = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L30.PacketData[idx5] = kcg_lit_int32(0);
  }
  outC->_L29.header.q_updown = kcg_lit_int32(0);
  outC->_L29.header.m_version = kcg_lit_int32(0);
  outC->_L29.header.q_media = kcg_lit_int32(0);
  outC->_L29.header.n_pig = kcg_lit_int32(0);
  outC->_L29.header.n_total = kcg_lit_int32(0);
  outC->_L29.header.m_dup = kcg_lit_int32(0);
  outC->_L29.header.m_mcount = kcg_lit_int32(0);
  outC->_L29.header.nid_c = kcg_lit_int32(0);
  outC->_L29.header.nid_bg = kcg_lit_int32(0);
  outC->_L29.header.q_link = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->_L29.packets.PacketHeaders[idx6].nid_packet = kcg_lit_int32(0);
    outC->_L29.packets.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->_L29.packets.PacketHeaders[idx6].valid = kcg_true;
    outC->_L29.packets.PacketHeaders[idx6].startAddress = kcg_lit_int32(0);
    outC->_L29.packets.PacketHeaders[idx6].endAddress = kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->_L29.packets.PacketData[idx7] = kcg_lit_int32(0);
  }
  outC->_L29.engineering_BG_location = kcg_lit_int32(0);
  outC->_L29.TrainPos = kcg_lit_float32(0.0);
  outC->_L29.pig_nom_0 = kcg_lit_int32(0);
  outC->_L29.balise_passed = kcg_true;
  outC->_L28.q_updown = kcg_lit_int32(0);
  outC->_L28.m_version = kcg_lit_int32(0);
  outC->_L28.q_media = kcg_lit_int32(0);
  outC->_L28.n_pig = kcg_lit_int32(0);
  outC->_L28.n_total = kcg_lit_int32(0);
  outC->_L28.m_dup = kcg_lit_int32(0);
  outC->_L28.m_mcount = kcg_lit_int32(0);
  outC->_L28.nid_c = kcg_lit_int32(0);
  outC->_L28.nid_bg = kcg_lit_int32(0);
  outC->_L28.q_link = kcg_lit_int32(0);
  outC->_L26.header.q_updown = kcg_lit_int32(0);
  outC->_L26.header.m_version = kcg_lit_int32(0);
  outC->_L26.header.q_media = kcg_lit_int32(0);
  outC->_L26.header.n_pig = kcg_lit_int32(0);
  outC->_L26.header.n_total = kcg_lit_int32(0);
  outC->_L26.header.m_dup = kcg_lit_int32(0);
  outC->_L26.header.m_mcount = kcg_lit_int32(0);
  outC->_L26.header.nid_c = kcg_lit_int32(0);
  outC->_L26.header.nid_bg = kcg_lit_int32(0);
  outC->_L26.header.q_link = kcg_lit_int32(0);
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->_L26.packets.PacketHeaders[idx8].nid_packet = kcg_lit_int32(0);
    outC->_L26.packets.PacketHeaders[idx8].q_dir = Q_DIR_Reverse;
    outC->_L26.packets.PacketHeaders[idx8].valid = kcg_true;
    outC->_L26.packets.PacketHeaders[idx8].startAddress = kcg_lit_int32(0);
    outC->_L26.packets.PacketHeaders[idx8].endAddress = kcg_lit_int32(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->_L26.packets.PacketData[idx9] = kcg_lit_int32(0);
  }
  outC->_L26.engineering_BG_location = kcg_lit_int32(0);
  outC->_L26.TrainPos = kcg_lit_float32(0.0);
  outC->_L26.pig_nom_0 = kcg_lit_int32(0);
  outC->_L26.balise_passed = kcg_true;
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->_L25.PacketHeaders[idx10].nid_packet = kcg_lit_int32(0);
    outC->_L25.PacketHeaders[idx10].q_dir = Q_DIR_Reverse;
    outC->_L25.PacketHeaders[idx10].valid = kcg_true;
    outC->_L25.PacketHeaders[idx10].startAddress = kcg_lit_int32(0);
    outC->_L25.PacketHeaders[idx10].endAddress = kcg_lit_int32(0);
  }
  for (idx11 = 0; idx11 < 500; idx11++) {
    outC->_L25.PacketData[idx11] = kcg_lit_int32(0);
  }
  for (idx12 = 0; idx12 < 30; idx12++) {
    outC->_L22.PacketHeaders[idx12].nid_packet = kcg_lit_int32(0);
    outC->_L22.PacketHeaders[idx12].q_dir = Q_DIR_Reverse;
    outC->_L22.PacketHeaders[idx12].valid = kcg_true;
    outC->_L22.PacketHeaders[idx12].startAddress = kcg_lit_int32(0);
    outC->_L22.PacketHeaders[idx12].endAddress = kcg_lit_int32(0);
  }
  for (idx13 = 0; idx13 < 500; idx13++) {
    outC->_L22.PacketData[idx13] = kcg_lit_int32(0);
  }
  for (idx14 = 0; idx14 < 30; idx14++) {
    outC->_L11.PacketHeaders[idx14].nid_packet = kcg_lit_int32(0);
    outC->_L11.PacketHeaders[idx14].q_dir = Q_DIR_Reverse;
    outC->_L11.PacketHeaders[idx14].valid = kcg_true;
    outC->_L11.PacketHeaders[idx14].startAddress = kcg_lit_int32(0);
    outC->_L11.PacketHeaders[idx14].endAddress = kcg_lit_int32(0);
  }
  for (idx15 = 0; idx15 < 500; idx15++) {
    outC->_L11.PacketData[idx15] = kcg_lit_int32(0);
  }
  for (idx16 = 0; idx16 < 30; idx16++) {
    outC->B_data_out.PacketHeaders[idx16].nid_packet = kcg_lit_int32(0);
    outC->B_data_out.PacketHeaders[idx16].q_dir = Q_DIR_Reverse;
    outC->B_data_out.PacketHeaders[idx16].valid = kcg_true;
    outC->B_data_out.PacketHeaders[idx16].startAddress = kcg_lit_int32(0);
    outC->B_data_out.PacketHeaders[idx16].endAddress = kcg_lit_int32(0);
  }
  for (idx17 = 0; idx17 < 500; idx17++) {
    outC->B_data_out.PacketData[idx17] = kcg_lit_int32(0);
  }
  for (idx18 = 0; idx18 < 30; idx18++) {
    outC->B_data_in.PacketHeaders[idx18].nid_packet = kcg_lit_int32(0);
    outC->B_data_in.PacketHeaders[idx18].q_dir = Q_DIR_Reverse;
    outC->B_data_in.PacketHeaders[idx18].valid = kcg_true;
    outC->B_data_in.PacketHeaders[idx18].startAddress = kcg_lit_int32(0);
    outC->B_data_in.PacketHeaders[idx18].endAddress = kcg_lit_int32(0);
  }
  for (idx19 = 0; idx19 < 500; idx19++) {
    outC->B_data_in.PacketData[idx19] = kcg_lit_int32(0);
  }
  outC->Balise_data_out.header.q_updown = kcg_lit_int32(0);
  outC->Balise_data_out.header.m_version = kcg_lit_int32(0);
  outC->Balise_data_out.header.q_media = kcg_lit_int32(0);
  outC->Balise_data_out.header.n_pig = kcg_lit_int32(0);
  outC->Balise_data_out.header.n_total = kcg_lit_int32(0);
  outC->Balise_data_out.header.m_dup = kcg_lit_int32(0);
  outC->Balise_data_out.header.m_mcount = kcg_lit_int32(0);
  outC->Balise_data_out.header.nid_c = kcg_lit_int32(0);
  outC->Balise_data_out.header.nid_bg = kcg_lit_int32(0);
  outC->Balise_data_out.header.q_link = kcg_lit_int32(0);
  for (idx20 = 0; idx20 < 30; idx20++) {
    outC->Balise_data_out.packets.PacketHeaders[idx20].nid_packet =
      kcg_lit_int32(0);
    outC->Balise_data_out.packets.PacketHeaders[idx20].q_dir = Q_DIR_Reverse;
    outC->Balise_data_out.packets.PacketHeaders[idx20].valid = kcg_true;
    outC->Balise_data_out.packets.PacketHeaders[idx20].startAddress =
      kcg_lit_int32(0);
    outC->Balise_data_out.packets.PacketHeaders[idx20].endAddress =
      kcg_lit_int32(0);
  }
  for (idx21 = 0; idx21 < 500; idx21++) {
    outC->Balise_data_out.packets.PacketData[idx21] = kcg_lit_int32(0);
  }
  outC->Balise_data_out.engineering_BG_location = kcg_lit_int32(0);
  outC->Balise_data_out.TrainPos = kcg_lit_float32(0.0);
  outC->Balise_data_out.pig_nom_0 = kcg_lit_int32(0);
  outC->Balise_data_out.balise_passed = kcg_true;
  /* _L11=(MessageLibBaseline2::Send_P255#1)/ */
  Send_P255_init_MessageLibBaseline2(&outC->Context_Send_P255_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Packets_BG477_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
  outC_Packets_BG477_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises *outC)
{
  /* _L11=(MessageLibBaseline2::Send_P255#1)/ */
  Send_P255_reset_MessageLibBaseline2(&outC->Context_Send_P255_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Packets_BG477_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises.c
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

