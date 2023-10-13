/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P138_Legacy_TM_specific.h"

/* TM_specific::Read_P138_Legacy/ */
void Read_P138_Legacy_TM_specific(
  /* Message_IN/ */
  CompressedPackets_T_Common_Types_Pkg *Message_IN,
  outC_Read_P138_Legacy_TM_specific *outC)
{
  static P138_ReversingAreaInformation_T_Packet_Types_Pkg op_call;

  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L3, Message_IN);
  /* _L1=(TM::Read_P138#1)/ */
  Read_P138_TM(&outC->_L3, &outC->Context_Read_P138_1);
  outC->_L1 = outC->Context_Read_P138_1.received;
  kcg_copy_P138_OBU_T_TM(&outC->_L2, &outC->Context_Read_P138_1.P138_OBU_out);
  outC->every = outC->_L1;
  if (outC->every) {
    /* _L4=(TM_conversions::C_P138_to_legacy_t#1)/ */
    C_P138_to_legacy_t_TM_conversions(
      &outC->_L2,
      &outC->Context_C_P138_to_legacy_t_1);
    kcg_copy_P138_ReversingAreaInformation_T_Packet_Types_Pkg(
      &op_call,
      &outC->Context_C_P138_to_legacy_t_1.P138_legacy_out);
    kcg_copy_P138_ReversingAreaInformation_T_Packet_Types_Pkg(&outC->_L4, &op_call);
  }
  else {
    kcg_copy_P138_ReversingAreaInformation_T_Packet_Types_Pkg(
      &outC->_L4,
      (P138_ReversingAreaInformation_T_Packet_Types_Pkg *) &DEFAULT_P138_legacy_TM);
  }
  kcg_copy_P138_ReversingAreaInformation_T_Packet_Types_Pkg(
    &outC->P138_legacy_out,
    &outC->_L4);
}

#ifndef KCG_USER_DEFINED_INIT
void Read_P138_Legacy_init_TM_specific(outC_Read_P138_Legacy_TM_specific *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L4.valid = kcg_true;
  outC->_L4.q_dir = Q_DIR_Reverse;
  outC->_L4.q_scale = Q_SCALE_10_cm_scale;
  outC->_L4.d_startreverse = kcg_lit_int64(0);
  outC->_L4.l_reversearea = kcg_lit_int64(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L3.PacketHeaders[idx].nid_packet = kcg_lit_int64(0);
    outC->_L3.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L3.PacketHeaders[idx].valid = kcg_true;
    outC->_L3.PacketHeaders[idx].startAddress = kcg_lit_int64(0);
    outC->_L3.PacketHeaders[idx].endAddress = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L3.PacketData[idx1] = kcg_lit_int64(0);
  }
  outC->_L1 = kcg_true;
  outC->_L2.valid = kcg_true;
  outC->_L2.q_dir = Q_DIR_Reverse;
  outC->_L2.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.d_startreverse = kcg_lit_int64(0);
  outC->_L2.l_reversearea = kcg_lit_int64(0);
  outC->every = kcg_true;
  outC->P138_legacy_out.valid = kcg_true;
  outC->P138_legacy_out.q_dir = Q_DIR_Reverse;
  outC->P138_legacy_out.q_scale = Q_SCALE_10_cm_scale;
  outC->P138_legacy_out.d_startreverse = kcg_lit_int64(0);
  outC->P138_legacy_out.l_reversearea = kcg_lit_int64(0);
  /* _L4=(TM_conversions::C_P138_to_legacy_t#1)/ */
  C_P138_to_legacy_t_init_TM_conversions(&outC->Context_C_P138_to_legacy_t_1);
  /* _L1=(TM::Read_P138#1)/ */ Read_P138_init_TM(&outC->Context_Read_P138_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Read_P138_Legacy_reset_TM_specific(outC_Read_P138_Legacy_TM_specific *outC)
{
  /* _L4=(TM_conversions::C_P138_to_legacy_t#1)/ */
  C_P138_to_legacy_t_reset_TM_conversions(&outC->Context_C_P138_to_legacy_t_1);
  /* _L1=(TM::Read_P138#1)/ */ Read_P138_reset_TM(&outC->Context_Read_P138_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Read_P138_Legacy_TM_specific.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

