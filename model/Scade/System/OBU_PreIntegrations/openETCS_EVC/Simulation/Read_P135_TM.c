/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P135_TM.h"

/* TM::Read_P135/ */
void Read_P135_TM(
  /* Message_IN/ */
  CompressedPackets_T_Common_Types_Pkg *Message_IN,
  outC_Read_P135_TM *outC)
{
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L6, Message_IN);
  /* _L5=(TM_lib_internal::RECV_ReadPackets#1)/ */
  RECV_ReadPackets_TM_lib_internal(
    &outC->_L6,
    kcg_lit_int32(135032000),
    kcg_false,
    kcg_false,
    &outC->Context_RECV_ReadPackets_1);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L5,
    &outC->Context_RECV_ReadPackets_1.Data);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &outC->_L30,
    &outC->Context_RECV_ReadPackets_1.Metadata);
  outC->_L167 = outC->Context_RECV_ReadPackets_1.received;
  outC->received = outC->_L167;
  /* _L166=(TM_conversions::C_P135_compr_onboard#1)/ */
  C_P135_compr_onboard_TM_conversions(
    &outC->_L5,
    &outC->_L30,
    &outC->Context_C_P135_compr_onboard_1);
  kcg_copy_P135_OBU_T_TM(
    &outC->_L166,
    &outC->Context_C_P135_compr_onboard_1.P135_onboard);
  kcg_copy_P135_OBU_T_TM(&outC->P135_OBU_out, &outC->_L166);
}

#ifndef KCG_USER_DEFINED_INIT
void Read_P135_init_TM(outC_Read_P135_TM *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;

  outC->_L167 = kcg_true;
  outC->_L166.valid = kcg_true;
  outC->_L166.q_dir = Q_DIR_Reverse;
  outC->_L30.nid_packet = kcg_lit_int32(0);
  outC->_L30.q_dir = Q_DIR_Reverse;
  outC->_L30.valid = kcg_true;
  outC->_L30.startAddress = kcg_lit_int32(0);
  outC->_L30.endAddress = kcg_lit_int32(0);
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
  for (idx2 = 0; idx2 < 500; idx2++) {
    outC->_L5[idx2] = kcg_lit_int32(0);
  }
  outC->P135_OBU_out.valid = kcg_true;
  outC->P135_OBU_out.q_dir = Q_DIR_Reverse;
  outC->received = kcg_true;
  /* _L166=(TM_conversions::C_P135_compr_onboard#1)/ */
  C_P135_compr_onboard_init_TM_conversions(
    &outC->Context_C_P135_compr_onboard_1);
  /* _L5=(TM_lib_internal::RECV_ReadPackets#1)/ */
  RECV_ReadPackets_init_TM_lib_internal(&outC->Context_RECV_ReadPackets_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Read_P135_reset_TM(outC_Read_P135_TM *outC)
{
  /* _L166=(TM_conversions::C_P135_compr_onboard#1)/ */
  C_P135_compr_onboard_reset_TM_conversions(
    &outC->Context_C_P135_compr_onboard_1);
  /* _L5=(TM_lib_internal::RECV_ReadPackets#1)/ */
  RECV_ReadPackets_reset_TM_lib_internal(&outC->Context_RECV_ReadPackets_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Read_P135_TM.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

