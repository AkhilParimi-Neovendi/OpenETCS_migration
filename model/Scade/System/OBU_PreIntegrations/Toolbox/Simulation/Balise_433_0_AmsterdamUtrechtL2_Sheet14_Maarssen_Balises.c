/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balise_433_0_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises.h"

/* AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_433_0/ */
void Balise_433_0_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
  /* B_data_in/ */
  B_data_internal_T_InfraLib *B_data_in,
  /* Header/ */
  BaliseTelegramHeader_int_T_TM *Header,
  /* PIG_nom/ */
  kcg_int32 PIG_nom,
  outC_Balise_433_0_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises *outC)
{
  B_data_internal_T_InfraLib op_call;

  kcg_copy_B_data_internal_T_InfraLib(&outC->_L15, B_data_in);
  kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L19, Header);
  outC->_L20 = PIG_nom;
  /* _L21=(InfraLib::Balise_Localisation#1)/ */
  Balise_Localisation_InfraLib(
    &outC->_L15,
    &outC->_L19,
    outC->_L20,
    &outC->Context_Balise_Localisation_1);
  outC->_L21 = outC->Context_Balise_Localisation_1.PIG_0_out;
  outC->_L2 = outC->Context_Balise_Localisation_1.TrainPass;
  outC->every = outC->_L2;
  kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L23, Header);
  kcg_copy_B_data_internal_T_InfraLib(&outC->_L5, B_data_in);
  if (outC->every) {
    /* _L4=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Packets_BG433#1)/ */
    Packets_BG433_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
      &outC->_L23,
      &outC->_L5,
      &outC->Context_Packets_BG433_1);
    kcg_copy_B_data_internal_T_InfraLib(
      &op_call,
      &outC->Context_Packets_BG433_1.Balise_data_out);
    kcg_copy_B_data_internal_T_InfraLib(&outC->_L4, &op_call);
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&outC->_L4, &outC->_L5);
  }
  kcg_copy_B_data_internal_T_InfraLib(&outC->_L17, &outC->_L4);
  if (kcg_true) {
    outC->_L17.pig_nom_0 = outC->_L21;
  }
  kcg_copy_B_data_internal_T_InfraLib(&outC->B_data_out, &outC->_L17);
}

#ifndef KCG_USER_DEFINED_INIT
void Balise_433_0_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
  outC_Balise_433_0_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises *outC)
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

  outC->_L23.q_updown = kcg_lit_int32(0);
  outC->_L23.m_version = kcg_lit_int32(0);
  outC->_L23.q_media = kcg_lit_int32(0);
  outC->_L23.n_pig = kcg_lit_int32(0);
  outC->_L23.n_total = kcg_lit_int32(0);
  outC->_L23.m_dup = kcg_lit_int32(0);
  outC->_L23.m_mcount = kcg_lit_int32(0);
  outC->_L23.nid_c = kcg_lit_int32(0);
  outC->_L23.nid_bg = kcg_lit_int32(0);
  outC->_L23.q_link = kcg_lit_int32(0);
  outC->_L21 = kcg_lit_int32(0);
  outC->_L20 = kcg_lit_int32(0);
  outC->_L19.q_updown = kcg_lit_int32(0);
  outC->_L19.m_version = kcg_lit_int32(0);
  outC->_L19.q_media = kcg_lit_int32(0);
  outC->_L19.n_pig = kcg_lit_int32(0);
  outC->_L19.n_total = kcg_lit_int32(0);
  outC->_L19.m_dup = kcg_lit_int32(0);
  outC->_L19.m_mcount = kcg_lit_int32(0);
  outC->_L19.nid_c = kcg_lit_int32(0);
  outC->_L19.nid_bg = kcg_lit_int32(0);
  outC->_L19.q_link = kcg_lit_int32(0);
  outC->_L17.header.q_updown = kcg_lit_int32(0);
  outC->_L17.header.m_version = kcg_lit_int32(0);
  outC->_L17.header.q_media = kcg_lit_int32(0);
  outC->_L17.header.n_pig = kcg_lit_int32(0);
  outC->_L17.header.n_total = kcg_lit_int32(0);
  outC->_L17.header.m_dup = kcg_lit_int32(0);
  outC->_L17.header.m_mcount = kcg_lit_int32(0);
  outC->_L17.header.nid_c = kcg_lit_int32(0);
  outC->_L17.header.nid_bg = kcg_lit_int32(0);
  outC->_L17.header.q_link = kcg_lit_int32(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L17.packets.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L17.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L17.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L17.packets.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L17.packets.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L17.packets.PacketData[idx1] = kcg_lit_int32(0);
  }
  outC->_L17.engineering_BG_location = kcg_lit_int32(0);
  outC->_L17.TrainPos = kcg_lit_float32(0.0);
  outC->_L17.pig_nom_0 = kcg_lit_int32(0);
  outC->_L17.balise_passed = kcg_true;
  outC->_L15.header.q_updown = kcg_lit_int32(0);
  outC->_L15.header.m_version = kcg_lit_int32(0);
  outC->_L15.header.q_media = kcg_lit_int32(0);
  outC->_L15.header.n_pig = kcg_lit_int32(0);
  outC->_L15.header.n_total = kcg_lit_int32(0);
  outC->_L15.header.m_dup = kcg_lit_int32(0);
  outC->_L15.header.m_mcount = kcg_lit_int32(0);
  outC->_L15.header.nid_c = kcg_lit_int32(0);
  outC->_L15.header.nid_bg = kcg_lit_int32(0);
  outC->_L15.header.q_link = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L15.packets.PacketHeaders[idx2].nid_packet = kcg_lit_int32(0);
    outC->_L15.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L15.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L15.packets.PacketHeaders[idx2].startAddress = kcg_lit_int32(0);
    outC->_L15.packets.PacketHeaders[idx2].endAddress = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L15.packets.PacketData[idx3] = kcg_lit_int32(0);
  }
  outC->_L15.engineering_BG_location = kcg_lit_int32(0);
  outC->_L15.TrainPos = kcg_lit_float32(0.0);
  outC->_L15.pig_nom_0 = kcg_lit_int32(0);
  outC->_L15.balise_passed = kcg_true;
  outC->_L5.header.q_updown = kcg_lit_int32(0);
  outC->_L5.header.m_version = kcg_lit_int32(0);
  outC->_L5.header.q_media = kcg_lit_int32(0);
  outC->_L5.header.n_pig = kcg_lit_int32(0);
  outC->_L5.header.n_total = kcg_lit_int32(0);
  outC->_L5.header.m_dup = kcg_lit_int32(0);
  outC->_L5.header.m_mcount = kcg_lit_int32(0);
  outC->_L5.header.nid_c = kcg_lit_int32(0);
  outC->_L5.header.nid_bg = kcg_lit_int32(0);
  outC->_L5.header.q_link = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L5.packets.PacketHeaders[idx4].nid_packet = kcg_lit_int32(0);
    outC->_L5.packets.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L5.packets.PacketHeaders[idx4].valid = kcg_true;
    outC->_L5.packets.PacketHeaders[idx4].startAddress = kcg_lit_int32(0);
    outC->_L5.packets.PacketHeaders[idx4].endAddress = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L5.packets.PacketData[idx5] = kcg_lit_int32(0);
  }
  outC->_L5.engineering_BG_location = kcg_lit_int32(0);
  outC->_L5.TrainPos = kcg_lit_float32(0.0);
  outC->_L5.pig_nom_0 = kcg_lit_int32(0);
  outC->_L5.balise_passed = kcg_true;
  outC->_L4.header.q_updown = kcg_lit_int32(0);
  outC->_L4.header.m_version = kcg_lit_int32(0);
  outC->_L4.header.q_media = kcg_lit_int32(0);
  outC->_L4.header.n_pig = kcg_lit_int32(0);
  outC->_L4.header.n_total = kcg_lit_int32(0);
  outC->_L4.header.m_dup = kcg_lit_int32(0);
  outC->_L4.header.m_mcount = kcg_lit_int32(0);
  outC->_L4.header.nid_c = kcg_lit_int32(0);
  outC->_L4.header.nid_bg = kcg_lit_int32(0);
  outC->_L4.header.q_link = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->_L4.packets.PacketHeaders[idx6].nid_packet = kcg_lit_int32(0);
    outC->_L4.packets.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->_L4.packets.PacketHeaders[idx6].valid = kcg_true;
    outC->_L4.packets.PacketHeaders[idx6].startAddress = kcg_lit_int32(0);
    outC->_L4.packets.PacketHeaders[idx6].endAddress = kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->_L4.packets.PacketData[idx7] = kcg_lit_int32(0);
  }
  outC->_L4.engineering_BG_location = kcg_lit_int32(0);
  outC->_L4.TrainPos = kcg_lit_float32(0.0);
  outC->_L4.pig_nom_0 = kcg_lit_int32(0);
  outC->_L4.balise_passed = kcg_true;
  outC->_L2 = kcg_true;
  outC->every = kcg_true;
  outC->B_data_out.header.q_updown = kcg_lit_int32(0);
  outC->B_data_out.header.m_version = kcg_lit_int32(0);
  outC->B_data_out.header.q_media = kcg_lit_int32(0);
  outC->B_data_out.header.n_pig = kcg_lit_int32(0);
  outC->B_data_out.header.n_total = kcg_lit_int32(0);
  outC->B_data_out.header.m_dup = kcg_lit_int32(0);
  outC->B_data_out.header.m_mcount = kcg_lit_int32(0);
  outC->B_data_out.header.nid_c = kcg_lit_int32(0);
  outC->B_data_out.header.nid_bg = kcg_lit_int32(0);
  outC->B_data_out.header.q_link = kcg_lit_int32(0);
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->B_data_out.packets.PacketHeaders[idx8].nid_packet = kcg_lit_int32(0);
    outC->B_data_out.packets.PacketHeaders[idx8].q_dir = Q_DIR_Reverse;
    outC->B_data_out.packets.PacketHeaders[idx8].valid = kcg_true;
    outC->B_data_out.packets.PacketHeaders[idx8].startAddress = kcg_lit_int32(0);
    outC->B_data_out.packets.PacketHeaders[idx8].endAddress = kcg_lit_int32(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->B_data_out.packets.PacketData[idx9] = kcg_lit_int32(0);
  }
  outC->B_data_out.engineering_BG_location = kcg_lit_int32(0);
  outC->B_data_out.TrainPos = kcg_lit_float32(0.0);
  outC->B_data_out.pig_nom_0 = kcg_lit_int32(0);
  outC->B_data_out.balise_passed = kcg_true;
  /* _L4=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Packets_BG433#1)/ */
  Packets_BG433_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->Context_Packets_BG433_1);
  /* _L21=(InfraLib::Balise_Localisation#1)/ */
  Balise_Localisation_init_InfraLib(&outC->Context_Balise_Localisation_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Balise_433_0_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
  outC_Balise_433_0_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises *outC)
{
  /* _L4=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Packets_BG433#1)/ */
  Packets_BG433_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->Context_Packets_BG433_1);
  /* _L21=(InfraLib::Balise_Localisation#1)/ */
  Balise_Localisation_reset_InfraLib(&outC->Context_Balise_Localisation_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Balise_433_0_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

