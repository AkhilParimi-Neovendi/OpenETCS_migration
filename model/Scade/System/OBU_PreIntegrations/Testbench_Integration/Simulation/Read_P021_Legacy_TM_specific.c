/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P021_Legacy_TM_specific.h"

/* TM_specific::Read_P021_Legacy/ */
void Read_P021_Legacy_TM_specific(
  /* Message_IN/ */
  CompressedPackets_T_Common_Types_Pkg *Message_IN,
  outC_Read_P021_Legacy_TM_specific *outC)
{
  static P21_GradientProfiles_T_Packet_Types_Pkg op_call;

  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L3, Message_IN);
  /* _L1=(TM::Read_P021#1)/ */
  Read_P021_TM(&outC->_L3, &outC->Context_Read_P021_1);
  outC->_L1 = outC->Context_Read_P021_1.received;
  kcg_copy_P021_OBU_T_TM(&outC->_L2, &outC->Context_Read_P021_1.P021_OBU_out);
  outC->every = outC->_L1;
  if (outC->every) {
    /* _L4=(TM_conversions::C_P021_to_legacy_t#1)/ */
    C_P021_to_legacy_t_TM_conversions(
      &outC->_L2,
      &outC->Context_C_P021_to_legacy_t_1);
    kcg_copy_P21_GradientProfiles_T_Packet_Types_Pkg(
      &op_call,
      &outC->Context_C_P021_to_legacy_t_1.P021_legacy_out);
    kcg_copy_P21_GradientProfiles_T_Packet_Types_Pkg(&outC->_L4, &op_call);
  }
  else {
    kcg_copy_P21_GradientProfiles_T_Packet_Types_Pkg(
      &outC->_L4,
      (P21_GradientProfiles_T_Packet_Types_Pkg *) &DEFAULT_P021_legacy_TM_specific);
  }
  kcg_copy_P21_GradientProfiles_T_Packet_Types_Pkg(
    &outC->P015_legacy_out,
    &outC->_L4);
}

#ifndef KCG_USER_DEFINED_INIT
void Read_P021_Legacy_init_TM_specific(outC_Read_P021_Legacy_TM_specific *outC)
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
    outC->_L4[idx].d_gradient = kcg_lit_int32(0);
    outC->_L4[idx].q_gdir = Q_GDIR_downhill;
    outC->_L4[idx].g_a = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 30; idx1++) {
    outC->_L3.PacketHeaders[idx1].nid_packet = kcg_lit_int32(0);
    outC->_L3.PacketHeaders[idx1].q_dir = Q_DIR_Reverse;
    outC->_L3.PacketHeaders[idx1].valid = kcg_true;
    outC->_L3.PacketHeaders[idx1].startAddress = kcg_lit_int32(0);
    outC->_L3.PacketHeaders[idx1].endAddress = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 500; idx2++) {
    outC->_L3.PacketData[idx2] = kcg_lit_int32(0);
  }
  outC->_L1 = kcg_true;
  outC->_L2.valid = kcg_true;
  outC->_L2.q_dir = Q_DIR_Reverse;
  outC->_L2.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.n_iter = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L2.sections[idx3].valid = kcg_true;
    outC->_L2.sections[idx3].d_gradient = kcg_lit_int32(0);
    outC->_L2.sections[idx3].q_gdir = Q_GDIR_downhill;
    outC->_L2.sections[idx3].g_a = kcg_lit_int32(0);
  }
  outC->every = kcg_true;
  for (idx4 = 0; idx4 < 7; idx4++) {
    outC->P015_legacy_out[idx4].valid = kcg_true;
    outC->P015_legacy_out[idx4].q_dir = Q_DIR_Reverse;
    outC->P015_legacy_out[idx4].q_scale = Q_SCALE_10_cm_scale;
    outC->P015_legacy_out[idx4].d_gradient = kcg_lit_int32(0);
    outC->P015_legacy_out[idx4].q_gdir = Q_GDIR_downhill;
    outC->P015_legacy_out[idx4].g_a = kcg_lit_int32(0);
  }
  /* _L4=(TM_conversions::C_P021_to_legacy_t#1)/ */
  C_P021_to_legacy_t_init_TM_conversions(&outC->Context_C_P021_to_legacy_t_1);
  /* _L1=(TM::Read_P021#1)/ */ Read_P021_init_TM(&outC->Context_Read_P021_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Read_P021_Legacy_reset_TM_specific(outC_Read_P021_Legacy_TM_specific *outC)
{
  /* _L4=(TM_conversions::C_P021_to_legacy_t#1)/ */
  C_P021_to_legacy_t_reset_TM_conversions(&outC->Context_C_P021_to_legacy_t_1);
  /* _L1=(TM::Read_P021#1)/ */ Read_P021_reset_TM(&outC->Context_Read_P021_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Read_P021_Legacy_TM_specific.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

