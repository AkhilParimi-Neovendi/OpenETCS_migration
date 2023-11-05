/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "No_Balise_Packets_InfraLib.h"

/* InfraLib::No_Balise_Packets/ */
void No_Balise_Packets_InfraLib(
  /* Header/ */
  BaliseTelegramHeader_int_T_TM *Header,
  /* Balise_data_in/ */
  B_data_internal_T_InfraLib *Balise_data_in,
  outC_No_Balise_Packets_InfraLib *outC)
{
  kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L32, Header);
  kcg_copy_B_data_internal_T_InfraLib(&outC->_L30, Balise_data_in);
  kcg_copy_B_data_internal_T_InfraLib(&outC->_L36, &outC->_L30);
  if (kcg_true) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L36.header, &outC->_L32);
  }
  outC->_L35 = kcg_true;
  kcg_copy_B_data_internal_T_InfraLib(&outC->_L31, &outC->_L36);
  if (kcg_true) {
    outC->_L31.balise_passed = outC->_L35;
  }
  kcg_copy_B_data_internal_T_InfraLib(&outC->Balise_data_out, &outC->_L31);
}

#ifndef KCG_USER_DEFINED_INIT
void No_Balise_Packets_init_InfraLib(outC_No_Balise_Packets_InfraLib *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;

  outC->_L30.header.q_updown = kcg_lit_int32(0);
  outC->_L30.header.m_version = kcg_lit_int32(0);
  outC->_L30.header.q_media = kcg_lit_int32(0);
  outC->_L30.header.n_pig = kcg_lit_int32(0);
  outC->_L30.header.n_total = kcg_lit_int32(0);
  outC->_L30.header.m_dup = kcg_lit_int32(0);
  outC->_L30.header.m_mcount = kcg_lit_int32(0);
  outC->_L30.header.nid_c = kcg_lit_int32(0);
  outC->_L30.header.nid_bg = kcg_lit_int32(0);
  outC->_L30.header.q_link = kcg_lit_int32(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L30.packets.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L30.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L30.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L30.packets.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L30.packets.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L30.packets.PacketData[idx1] = kcg_lit_int32(0);
  }
  outC->_L30.engineering_BG_location = kcg_lit_int32(0);
  outC->_L30.TrainPos = kcg_lit_float32(0.0);
  outC->_L30.pig_nom_0 = kcg_lit_int32(0);
  outC->_L30.balise_passed = kcg_true;
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
  outC->_L32.q_updown = kcg_lit_int32(0);
  outC->_L32.m_version = kcg_lit_int32(0);
  outC->_L32.q_media = kcg_lit_int32(0);
  outC->_L32.n_pig = kcg_lit_int32(0);
  outC->_L32.n_total = kcg_lit_int32(0);
  outC->_L32.m_dup = kcg_lit_int32(0);
  outC->_L32.m_mcount = kcg_lit_int32(0);
  outC->_L32.nid_c = kcg_lit_int32(0);
  outC->_L32.nid_bg = kcg_lit_int32(0);
  outC->_L32.q_link = kcg_lit_int32(0);
  outC->_L35 = kcg_true;
  outC->_L36.header.q_updown = kcg_lit_int32(0);
  outC->_L36.header.m_version = kcg_lit_int32(0);
  outC->_L36.header.q_media = kcg_lit_int32(0);
  outC->_L36.header.n_pig = kcg_lit_int32(0);
  outC->_L36.header.n_total = kcg_lit_int32(0);
  outC->_L36.header.m_dup = kcg_lit_int32(0);
  outC->_L36.header.m_mcount = kcg_lit_int32(0);
  outC->_L36.header.nid_c = kcg_lit_int32(0);
  outC->_L36.header.nid_bg = kcg_lit_int32(0);
  outC->_L36.header.q_link = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L36.packets.PacketHeaders[idx4].nid_packet = kcg_lit_int32(0);
    outC->_L36.packets.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L36.packets.PacketHeaders[idx4].valid = kcg_true;
    outC->_L36.packets.PacketHeaders[idx4].startAddress = kcg_lit_int32(0);
    outC->_L36.packets.PacketHeaders[idx4].endAddress = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L36.packets.PacketData[idx5] = kcg_lit_int32(0);
  }
  outC->_L36.engineering_BG_location = kcg_lit_int32(0);
  outC->_L36.TrainPos = kcg_lit_float32(0.0);
  outC->_L36.pig_nom_0 = kcg_lit_int32(0);
  outC->_L36.balise_passed = kcg_true;
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
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->Balise_data_out.packets.PacketHeaders[idx6].nid_packet = kcg_lit_int32(0);
    outC->Balise_data_out.packets.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->Balise_data_out.packets.PacketHeaders[idx6].valid = kcg_true;
    outC->Balise_data_out.packets.PacketHeaders[idx6].startAddress =
      kcg_lit_int32(0);
    outC->Balise_data_out.packets.PacketHeaders[idx6].endAddress = kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->Balise_data_out.packets.PacketData[idx7] = kcg_lit_int32(0);
  }
  outC->Balise_data_out.engineering_BG_location = kcg_lit_int32(0);
  outC->Balise_data_out.TrainPos = kcg_lit_float32(0.0);
  outC->Balise_data_out.pig_nom_0 = kcg_lit_int32(0);
  outC->Balise_data_out.balise_passed = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void No_Balise_Packets_reset_InfraLib(outC_No_Balise_Packets_InfraLib *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** No_Balise_Packets_InfraLib.c
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

