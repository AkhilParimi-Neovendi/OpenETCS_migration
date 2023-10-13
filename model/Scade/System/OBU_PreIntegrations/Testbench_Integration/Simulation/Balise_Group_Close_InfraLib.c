/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balise_Group_Close_InfraLib.h"

/* InfraLib::Balise_Group_Close/ */
void Balise_Group_Close_InfraLib(
  /* BG_internal_in/ */
  B_data_internal_T_InfraLib *BG_internal_in,
  /* BG_message_in/ */
  CompressedBaliseMessage_TM *BG_message_in,
  outC_Balise_Group_Close_InfraLib *outC)
{
  outC->_L26 = kcg_false;
  outC->Error_out = outC->_L26;
  kcg_copy_B_data_internal_T_InfraLib(&outC->_L21, BG_internal_in);
  outC->_L25 = outC->_L21.balise_passed;
  kcg_copy_CompressedBaliseMessage_TM(&outC->_L2, BG_message_in);
  kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L22, &outC->_L21.header);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L23, &outC->_L21.packets);
  kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L20.Header, &outC->_L22);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L20.Messages,
    &outC->_L23);
  /* _L24= */
  if (outC->_L25) {
    kcg_copy_CompressedBaliseMessage_TM(&outC->_L24, &outC->_L20);
  }
  else {
    kcg_copy_CompressedBaliseMessage_TM(&outC->_L24, &outC->_L2);
  }
  kcg_copy_CompressedBaliseMessage_TM(&outC->BG_message_out, &outC->_L24);
}

#ifndef KCG_USER_DEFINED_INIT
void Balise_Group_Close_init_InfraLib(outC_Balise_Group_Close_InfraLib *outC)
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

  outC->_L26 = kcg_true;
  outC->_L25 = kcg_true;
  outC->_L24.Header.q_updown = kcg_lit_int64(0);
  outC->_L24.Header.m_version = kcg_lit_int64(0);
  outC->_L24.Header.q_media = kcg_lit_int64(0);
  outC->_L24.Header.n_pig = kcg_lit_int64(0);
  outC->_L24.Header.n_total = kcg_lit_int64(0);
  outC->_L24.Header.m_dup = kcg_lit_int64(0);
  outC->_L24.Header.m_mcount = kcg_lit_int64(0);
  outC->_L24.Header.nid_c = kcg_lit_int64(0);
  outC->_L24.Header.nid_bg = kcg_lit_int64(0);
  outC->_L24.Header.q_link = kcg_lit_int64(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L24.Messages.PacketHeaders[idx].nid_packet = kcg_lit_int64(0);
    outC->_L24.Messages.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L24.Messages.PacketHeaders[idx].valid = kcg_true;
    outC->_L24.Messages.PacketHeaders[idx].startAddress = kcg_lit_int64(0);
    outC->_L24.Messages.PacketHeaders[idx].endAddress = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L24.Messages.PacketData[idx1] = kcg_lit_int64(0);
  }
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L23.PacketHeaders[idx2].nid_packet = kcg_lit_int64(0);
    outC->_L23.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L23.PacketHeaders[idx2].valid = kcg_true;
    outC->_L23.PacketHeaders[idx2].startAddress = kcg_lit_int64(0);
    outC->_L23.PacketHeaders[idx2].endAddress = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L23.PacketData[idx3] = kcg_lit_int64(0);
  }
  outC->_L22.q_updown = kcg_lit_int64(0);
  outC->_L22.m_version = kcg_lit_int64(0);
  outC->_L22.q_media = kcg_lit_int64(0);
  outC->_L22.n_pig = kcg_lit_int64(0);
  outC->_L22.n_total = kcg_lit_int64(0);
  outC->_L22.m_dup = kcg_lit_int64(0);
  outC->_L22.m_mcount = kcg_lit_int64(0);
  outC->_L22.nid_c = kcg_lit_int64(0);
  outC->_L22.nid_bg = kcg_lit_int64(0);
  outC->_L22.q_link = kcg_lit_int64(0);
  outC->_L21.header.q_updown = kcg_lit_int64(0);
  outC->_L21.header.m_version = kcg_lit_int64(0);
  outC->_L21.header.q_media = kcg_lit_int64(0);
  outC->_L21.header.n_pig = kcg_lit_int64(0);
  outC->_L21.header.n_total = kcg_lit_int64(0);
  outC->_L21.header.m_dup = kcg_lit_int64(0);
  outC->_L21.header.m_mcount = kcg_lit_int64(0);
  outC->_L21.header.nid_c = kcg_lit_int64(0);
  outC->_L21.header.nid_bg = kcg_lit_int64(0);
  outC->_L21.header.q_link = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L21.packets.PacketHeaders[idx4].nid_packet = kcg_lit_int64(0);
    outC->_L21.packets.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L21.packets.PacketHeaders[idx4].valid = kcg_true;
    outC->_L21.packets.PacketHeaders[idx4].startAddress = kcg_lit_int64(0);
    outC->_L21.packets.PacketHeaders[idx4].endAddress = kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L21.packets.PacketData[idx5] = kcg_lit_int64(0);
  }
  outC->_L21.engineering_BG_location = kcg_lit_int64(0);
  outC->_L21.TrainPos = kcg_lit_float64(0.0);
  outC->_L21.pig_nom_0 = kcg_lit_int64(0);
  outC->_L21.balise_passed = kcg_true;
  outC->_L20.Header.q_updown = kcg_lit_int64(0);
  outC->_L20.Header.m_version = kcg_lit_int64(0);
  outC->_L20.Header.q_media = kcg_lit_int64(0);
  outC->_L20.Header.n_pig = kcg_lit_int64(0);
  outC->_L20.Header.n_total = kcg_lit_int64(0);
  outC->_L20.Header.m_dup = kcg_lit_int64(0);
  outC->_L20.Header.m_mcount = kcg_lit_int64(0);
  outC->_L20.Header.nid_c = kcg_lit_int64(0);
  outC->_L20.Header.nid_bg = kcg_lit_int64(0);
  outC->_L20.Header.q_link = kcg_lit_int64(0);
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
  outC->_L2.Header.q_updown = kcg_lit_int64(0);
  outC->_L2.Header.m_version = kcg_lit_int64(0);
  outC->_L2.Header.q_media = kcg_lit_int64(0);
  outC->_L2.Header.n_pig = kcg_lit_int64(0);
  outC->_L2.Header.n_total = kcg_lit_int64(0);
  outC->_L2.Header.m_dup = kcg_lit_int64(0);
  outC->_L2.Header.m_mcount = kcg_lit_int64(0);
  outC->_L2.Header.nid_c = kcg_lit_int64(0);
  outC->_L2.Header.nid_bg = kcg_lit_int64(0);
  outC->_L2.Header.q_link = kcg_lit_int64(0);
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->_L2.Messages.PacketHeaders[idx8].nid_packet = kcg_lit_int64(0);
    outC->_L2.Messages.PacketHeaders[idx8].q_dir = Q_DIR_Reverse;
    outC->_L2.Messages.PacketHeaders[idx8].valid = kcg_true;
    outC->_L2.Messages.PacketHeaders[idx8].startAddress = kcg_lit_int64(0);
    outC->_L2.Messages.PacketHeaders[idx8].endAddress = kcg_lit_int64(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->_L2.Messages.PacketData[idx9] = kcg_lit_int64(0);
  }
  outC->BG_message_out.Header.q_updown = kcg_lit_int64(0);
  outC->BG_message_out.Header.m_version = kcg_lit_int64(0);
  outC->BG_message_out.Header.q_media = kcg_lit_int64(0);
  outC->BG_message_out.Header.n_pig = kcg_lit_int64(0);
  outC->BG_message_out.Header.n_total = kcg_lit_int64(0);
  outC->BG_message_out.Header.m_dup = kcg_lit_int64(0);
  outC->BG_message_out.Header.m_mcount = kcg_lit_int64(0);
  outC->BG_message_out.Header.nid_c = kcg_lit_int64(0);
  outC->BG_message_out.Header.nid_bg = kcg_lit_int64(0);
  outC->BG_message_out.Header.q_link = kcg_lit_int64(0);
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->BG_message_out.Messages.PacketHeaders[idx10].nid_packet =
      kcg_lit_int64(0);
    outC->BG_message_out.Messages.PacketHeaders[idx10].q_dir = Q_DIR_Reverse;
    outC->BG_message_out.Messages.PacketHeaders[idx10].valid = kcg_true;
    outC->BG_message_out.Messages.PacketHeaders[idx10].startAddress =
      kcg_lit_int64(0);
    outC->BG_message_out.Messages.PacketHeaders[idx10].endAddress =
      kcg_lit_int64(0);
  }
  for (idx11 = 0; idx11 < 500; idx11++) {
    outC->BG_message_out.Messages.PacketData[idx11] = kcg_lit_int64(0);
  }
  outC->Error_out = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Balise_Group_Close_reset_InfraLib(outC_Balise_Group_Close_InfraLib *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Balise_Group_Close_InfraLib.c
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

