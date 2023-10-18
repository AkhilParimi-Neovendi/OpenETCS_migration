/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P041_Legacy_TM_specific.h"

/* TM_specific::Read_P041_Legacy/ */
void Read_P041_Legacy_TM_specific(
  /* Message_IN/ */
  CompressedPackets_T_Common_Types_Pkg *Message_IN,
  outC_Read_P041_Legacy_TM_specific *outC)
{
  static P41_LevelTransistionOrders_T_Packet_Types_Pkg op_call;

  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L3, Message_IN);
  /* _L1=(TM::Read_P041#1)/ */
  Read_P041_TM(&outC->_L3, &outC->Context_Read_P041_1);
  outC->_L1 = outC->Context_Read_P041_1.received;
  kcg_copy_P041_OBU_T_TM(&outC->_L2, &outC->Context_Read_P041_1.P041_OBU_out);
  outC->every = outC->_L1;
  if (outC->every) {
    /* _L4=(TM_conversions::C_P041_to_legacy_t#1)/ */
    C_P041_to_legacy_t_TM_conversions(
      &outC->_L2,
      &outC->Context_C_P041_to_legacy_t_1);
    kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
      &op_call,
      &outC->Context_C_P041_to_legacy_t_1.P041_legacy_out);
    kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(&outC->_L4, &op_call);
  }
  else {
    kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
      &outC->_L4,
      (P41_LevelTransistionOrders_T_Packet_Types_Pkg *)
        &DEFAULT_P041_legacy_TM_specific);
  }
  kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
    &outC->P041_legacy_out,
    &outC->_L4);
}

#ifndef KCG_USER_DEFINED_INIT
void Read_P041_Legacy_init_TM_specific(outC_Read_P041_Legacy_TM_specific *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;

  for (idx = 0; idx < 7; idx++) {
    outC->_L4[idx].valid = kcg_true;
    outC->_L4[idx].q_dir = Q_DIR_Reverse;
    outC->_L4[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L4[idx].d_leveltr = kcg_lit_int64(0);
    outC->_L4[idx].m_leveltr = M_LEVELTR_Level_0;
    outC->_L4[idx].nid_ntc = kcg_lit_int64(0);
    outC->_L4[idx].l_ackleveltr = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 30; idx1++) {
    outC->_L3.PacketHeaders[idx1].nid_packet = kcg_lit_int64(0);
    outC->_L3.PacketHeaders[idx1].q_dir = Q_DIR_Reverse;
    outC->_L3.PacketHeaders[idx1].valid = kcg_true;
    outC->_L3.PacketHeaders[idx1].startAddress = kcg_lit_int64(0);
    outC->_L3.PacketHeaders[idx1].endAddress = kcg_lit_int64(0);
  }
  for (idx2 = 0; idx2 < 500; idx2++) {
    outC->_L3.PacketData[idx2] = kcg_lit_int64(0);
  }
  outC->_L1 = kcg_true;
  outC->_L2.valid = kcg_true;
  outC->_L2.q_dir = Q_DIR_Reverse;
  outC->_L2.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.d_leveltr = kcg_lit_int64(0);
  outC->_L2.n_iter = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L2.sections[idx3].valid = kcg_true;
    outC->_L2.sections[idx3].m_leveltr = M_LEVELTR_Level_0;
    outC->_L2.sections[idx3].nid_ntc = kcg_lit_int64(0);
    outC->_L2.sections[idx3].l_ackleveltr = kcg_lit_int64(0);
  }
  outC->every = kcg_true;
  for (idx4 = 0; idx4 < 7; idx4++) {
    outC->P041_legacy_out[idx4].valid = kcg_true;
    outC->P041_legacy_out[idx4].q_dir = Q_DIR_Reverse;
    outC->P041_legacy_out[idx4].q_scale = Q_SCALE_10_cm_scale;
    outC->P041_legacy_out[idx4].d_leveltr = kcg_lit_int64(0);
    outC->P041_legacy_out[idx4].m_leveltr = M_LEVELTR_Level_0;
    outC->P041_legacy_out[idx4].nid_ntc = kcg_lit_int64(0);
    outC->P041_legacy_out[idx4].l_ackleveltr = kcg_lit_int64(0);
  }
  /* _L4=(TM_conversions::C_P041_to_legacy_t#1)/ */
  C_P041_to_legacy_t_init_TM_conversions(&outC->Context_C_P041_to_legacy_t_1);
  /* _L1=(TM::Read_P041#1)/ */ Read_P041_init_TM(&outC->Context_Read_P041_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Read_P041_Legacy_reset_TM_specific(outC_Read_P041_Legacy_TM_specific *outC)
{
  /* _L4=(TM_conversions::C_P041_to_legacy_t#1)/ */
  C_P041_to_legacy_t_reset_TM_conversions(&outC->Context_C_P041_to_legacy_t_1);
  /* _L1=(TM::Read_P041#1)/ */ Read_P041_reset_TM(&outC->Context_Read_P041_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Read_P041_Legacy_TM_specific.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

