/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balise_Group_Init_InfraLib.h"

/* InfraLib::Balise_Group_Init/ */
void Balise_Group_Init_InfraLib(
  /* TrainPos/ */
  kcg_float32 TrainPos,
  /* Engineering_Data/ */
  BaliseGroupData_TM *Engineering_Data,
  outC_Balise_Group_Init_InfraLib *outC)
{
  outC->_L31 = kcg_false;
  outC->_L30 = TrainPos;
  kcg_copy_BaliseGroupData_TM(&outC->_L2, Engineering_Data);
  outC->_L29 = outC->_L2.Pos;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L28,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &outC->_L27,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  outC->_L14 = kcg_lit_int32(0);
  kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L26.header, &outC->_L27);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L26.packets, &outC->_L28);
  outC->_L26.engineering_BG_location = outC->_L29;
  outC->_L26.TrainPos = outC->_L30;
  outC->_L26.pig_nom_0 = outC->_L14;
  outC->_L26.balise_passed = outC->_L31;
  kcg_copy_B_data_internal_T_InfraLib(&outC->BG_internal_out, &outC->_L26);
}

#ifndef KCG_USER_DEFINED_INIT
void Balise_Group_Init_init_InfraLib(outC_Balise_Group_Init_InfraLib *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;

  outC->_L31 = kcg_true;
  outC->_L30 = kcg_lit_float32(0.0);
  outC->_L29 = kcg_lit_int32(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L28.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L28.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L28.PacketHeaders[idx].valid = kcg_true;
    outC->_L28.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L28.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L28.PacketData[idx1] = kcg_lit_int32(0);
  }
  outC->_L27.q_updown = kcg_lit_int32(0);
  outC->_L27.m_version = kcg_lit_int32(0);
  outC->_L27.q_media = kcg_lit_int32(0);
  outC->_L27.n_pig = kcg_lit_int32(0);
  outC->_L27.n_total = kcg_lit_int32(0);
  outC->_L27.m_dup = kcg_lit_int32(0);
  outC->_L27.m_mcount = kcg_lit_int32(0);
  outC->_L27.nid_c = kcg_lit_int32(0);
  outC->_L27.nid_bg = kcg_lit_int32(0);
  outC->_L27.q_link = kcg_lit_int32(0);
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
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L26.packets.PacketHeaders[idx2].nid_packet = kcg_lit_int32(0);
    outC->_L26.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L26.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L26.packets.PacketHeaders[idx2].startAddress = kcg_lit_int32(0);
    outC->_L26.packets.PacketHeaders[idx2].endAddress = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L26.packets.PacketData[idx3] = kcg_lit_int32(0);
  }
  outC->_L26.engineering_BG_location = kcg_lit_int32(0);
  outC->_L26.TrainPos = kcg_lit_float32(0.0);
  outC->_L26.pig_nom_0 = kcg_lit_int32(0);
  outC->_L26.balise_passed = kcg_true;
  outC->_L14 = kcg_lit_int32(0);
  outC->_L2.NID_C = kcg_lit_int32(0);
  outC->_L2.NID_BG = kcg_lit_int32(0);
  outC->_L2.Pos = kcg_lit_int32(0);
  outC->_L2.Or_BG = Amsterdam_TM;
  outC->_L2.Or_Line = N_TM;
  outC->BG_internal_out.header.q_updown = kcg_lit_int32(0);
  outC->BG_internal_out.header.m_version = kcg_lit_int32(0);
  outC->BG_internal_out.header.q_media = kcg_lit_int32(0);
  outC->BG_internal_out.header.n_pig = kcg_lit_int32(0);
  outC->BG_internal_out.header.n_total = kcg_lit_int32(0);
  outC->BG_internal_out.header.m_dup = kcg_lit_int32(0);
  outC->BG_internal_out.header.m_mcount = kcg_lit_int32(0);
  outC->BG_internal_out.header.nid_c = kcg_lit_int32(0);
  outC->BG_internal_out.header.nid_bg = kcg_lit_int32(0);
  outC->BG_internal_out.header.q_link = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->BG_internal_out.packets.PacketHeaders[idx4].nid_packet = kcg_lit_int32(0);
    outC->BG_internal_out.packets.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->BG_internal_out.packets.PacketHeaders[idx4].valid = kcg_true;
    outC->BG_internal_out.packets.PacketHeaders[idx4].startAddress =
      kcg_lit_int32(0);
    outC->BG_internal_out.packets.PacketHeaders[idx4].endAddress = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->BG_internal_out.packets.PacketData[idx5] = kcg_lit_int32(0);
  }
  outC->BG_internal_out.engineering_BG_location = kcg_lit_int32(0);
  outC->BG_internal_out.TrainPos = kcg_lit_float32(0.0);
  outC->BG_internal_out.pig_nom_0 = kcg_lit_int32(0);
  outC->BG_internal_out.balise_passed = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Balise_Group_Init_reset_InfraLib(outC_Balise_Group_Init_InfraLib *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Balise_Group_Init_InfraLib.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

