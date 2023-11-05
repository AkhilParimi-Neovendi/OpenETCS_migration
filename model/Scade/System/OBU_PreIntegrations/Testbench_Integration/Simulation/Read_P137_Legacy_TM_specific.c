/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P137_Legacy_TM_specific.h"

/* TM_specific::Read_P137_Legacy/ */
void Read_P137_Legacy_TM_specific(
  /* Message_IN/ */
  CompressedPackets_T_Common_Types_Pkg *Message_IN,
  outC_Read_P137_Legacy_TM_specific *outC)
{
  static kcg_bool noname;

  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L3, Message_IN);
  /* _L1=(TM::Read_P137#1)/ */
  Read_P137_TM(&outC->_L3, &outC->Context_Read_P137_1);
  outC->_L1 = outC->Context_Read_P137_1.received;
  kcg_copy_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg(
    &outC->_L2,
    &outC->Context_Read_P137_1.P137_OBU_out);
  noname = outC->_L1;
  kcg_copy_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg(
    &outC->P137_legacy_out,
    &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void Read_P137_Legacy_init_TM_specific(outC_Read_P137_Legacy_TM_specific *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  for (idx = 0; idx < 30; idx++) {
    outC->_L3.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L3.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L3.PacketHeaders[idx].valid = kcg_true;
    outC->_L3.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L3.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L3.PacketData[idx1] = kcg_lit_int32(0);
  }
  outC->_L1 = kcg_true;
  outC->_L2.valid = kcg_true;
  outC->_L2.q_dir = Q_DIR_Reverse;
  outC->_L2.q_srstop = Q_SRSTOP_Stop_if_in_SR_mode;
  outC->P137_legacy_out.valid = kcg_true;
  outC->P137_legacy_out.q_dir = Q_DIR_Reverse;
  outC->P137_legacy_out.q_srstop = Q_SRSTOP_Stop_if_in_SR_mode;
  /* _L1=(TM::Read_P137#1)/ */ Read_P137_init_TM(&outC->Context_Read_P137_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Read_P137_Legacy_reset_TM_specific(outC_Read_P137_Legacy_TM_specific *outC)
{
  /* _L1=(TM::Read_P137#1)/ */ Read_P137_reset_TM(&outC->Context_Read_P137_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Read_P137_Legacy_TM_specific.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

