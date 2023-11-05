/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_P042_no_merge_TM_specific_send.h"

/* TM_specific_send::Send_P042_no_merge/ */
void Send_P042_no_merge_TM_specific_send(
  /* Packet42/ */
  P42_SessionManagement_T_Packet_Types_Pkg *Packet42,
  outC_Send_P042_no_merge_TM_specific_send *outC)
{
  static kcg_bool noname;

  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L6,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_BaliseData_TM);
  kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg(&outC->_L3, Packet42);
  /* _L5=(TM_conversions::C_P042_onboard_legacy_to_int#1)/ */
  C_P042_onboard_legacy_to_int_TM_conversions(
    &outC->_L3,
    &outC->Context_C_P042_onboard_legacy_to_int_1);
  kcg_copy_P042_trackside_int_T_TM(
    &outC->_L5,
    &outC->Context_C_P042_onboard_legacy_to_int_1.P042_int);
  /* _L1=(TM_trackside::Write_P042#1)/ */
  Write_P042_TM_trackside(&outC->_L5, &outC->_L6, &outC->Context_Write_P042_1);
  outC->_L1 = outC->Context_Write_P042_1.Error;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L2,
    &outC->Context_Write_P042_1.RadioPacketsOut);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->RadioPacketsOut,
    &outC->_L2);
  noname = outC->_L1;
}

#ifndef KCG_USER_DEFINED_INIT
void Send_P042_no_merge_init_TM_specific_send(
  outC_Send_P042_no_merge_TM_specific_send *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;

  for (idx = 0; idx < 30; idx++) {
    outC->_L6.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L6.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L6.PacketHeaders[idx].valid = kcg_true;
    outC->_L6.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L6.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L6.PacketData[idx1] = kcg_lit_int32(0);
  }
  outC->_L5.valid = kcg_true;
  outC->_L5.NID_PACKET = kcg_lit_int32(0);
  outC->_L5.Q_DIR = kcg_lit_int32(0);
  outC->_L5.L_PACKET = kcg_lit_int32(0);
  outC->_L5.Q_RBC = kcg_lit_int32(0);
  outC->_L5.NID_C = kcg_lit_int32(0);
  outC->_L5.NID_RBC = kcg_lit_int32(0);
  outC->_L5.NID_RADIO = kcg_lit_int32(0);
  outC->_L5.Q_SLEEPSESSION = kcg_lit_int32(0);
  outC->_L3.valid = kcg_true;
  outC->_L3.q_dir = Q_DIR_Reverse;
  outC->_L3.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L3.nid_c = kcg_lit_int32(0);
  outC->_L3.nid_rbc = kcg_lit_int32(0);
  outC->_L3.nid_radio = kcg_lit_int32(0);
  outC->_L3.q_sleepsession = Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L1 = kcg_true;
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L2.PacketHeaders[idx2].nid_packet = kcg_lit_int32(0);
    outC->_L2.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L2.PacketHeaders[idx2].valid = kcg_true;
    outC->_L2.PacketHeaders[idx2].startAddress = kcg_lit_int32(0);
    outC->_L2.PacketHeaders[idx2].endAddress = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L2.PacketData[idx3] = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->RadioPacketsOut.PacketHeaders[idx4].nid_packet = kcg_lit_int32(0);
    outC->RadioPacketsOut.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->RadioPacketsOut.PacketHeaders[idx4].valid = kcg_true;
    outC->RadioPacketsOut.PacketHeaders[idx4].startAddress = kcg_lit_int32(0);
    outC->RadioPacketsOut.PacketHeaders[idx4].endAddress = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->RadioPacketsOut.PacketData[idx5] = kcg_lit_int32(0);
  }
  /* _L1=(TM_trackside::Write_P042#1)/ */
  Write_P042_init_TM_trackside(&outC->Context_Write_P042_1);
  /* _L5=(TM_conversions::C_P042_onboard_legacy_to_int#1)/ */
  C_P042_onboard_legacy_to_int_init_TM_conversions(
    &outC->Context_C_P042_onboard_legacy_to_int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Send_P042_no_merge_reset_TM_specific_send(
  outC_Send_P042_no_merge_TM_specific_send *outC)
{
  /* _L1=(TM_trackside::Write_P042#1)/ */
  Write_P042_reset_TM_trackside(&outC->Context_Write_P042_1);
  /* _L5=(TM_conversions::C_P042_onboard_legacy_to_int#1)/ */
  C_P042_onboard_legacy_to_int_reset_TM_conversions(
    &outC->Context_C_P042_onboard_legacy_to_int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Send_P042_no_merge_TM_specific_send.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

