/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "No_Radio_Packets_RadioLib.h"

/* RadioLib::No_Radio_Packets/ */
void No_Radio_Packets_RadioLib(
  /* Radio_packets_in/ */
  CompressedPackets_T_Common_Types_Pkg *Radio_packets_in,
  outC_No_Radio_Packets_RadioLib *outC)
{
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L30, Radio_packets_in);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->Radio_packets_out,
    &outC->_L30);
}

#ifndef KCG_USER_DEFINED_INIT
void No_Radio_Packets_init_RadioLib(outC_No_Radio_Packets_RadioLib *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;

  for (idx = 0; idx < 30; idx++) {
    outC->_L30.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L30.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L30.PacketHeaders[idx].valid = kcg_true;
    outC->_L30.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L30.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L30.PacketData[idx1] = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->Radio_packets_out.PacketHeaders[idx2].nid_packet = kcg_lit_int32(0);
    outC->Radio_packets_out.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->Radio_packets_out.PacketHeaders[idx2].valid = kcg_true;
    outC->Radio_packets_out.PacketHeaders[idx2].startAddress = kcg_lit_int32(0);
    outC->Radio_packets_out.PacketHeaders[idx2].endAddress = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->Radio_packets_out.PacketData[idx3] = kcg_lit_int32(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void No_Radio_Packets_reset_RadioLib(outC_No_Radio_Packets_RadioLib *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** No_Radio_Packets_RadioLib.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

