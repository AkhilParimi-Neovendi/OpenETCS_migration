/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RECV_ReadPackets_TM_lib_internal.h"

/* TM_lib_internal::RECV_ReadPackets/ */
void RECV_ReadPackets_TM_lib_internal(
  /* Packets/ */
  CompressedPackets_T_Common_Types_Pkg *Packets,
  /* PacketID/ */
  kcg_int32 PacketID,
  /* F_version/ */
  kcg_bool F_version,
  /* F_id/ */
  kcg_bool F_id,
  outC_RECV_ReadPackets_TM_lib_internal *outC)
{
  static CompressedPacketData_T_Common_Types_Pkg op_call;
  static kcg_int32 noname;

  outC->_L45 = PacketID;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L46, Packets);
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L47, &outC->_L46.PacketHeaders);
  outC->_L49 = F_version;
  outC->_L50 = F_id;
  /* _L1=(TM_lib_internal::RECV_LookupPacket#1)/ */
  RECV_LookupPacket_TM_lib_internal(
    outC->_L45,
    &outC->_L47,
    outC->_L49,
    outC->_L50,
    &outC->Context_RECV_LookupPacket_1);
  outC->_L1 = outC->Context_RECV_LookupPacket_1.Found;
  outC->_L2 = outC->Context_RECV_LookupPacket_1.Index;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &outC->_L3,
    &outC->Context_RECV_LookupPacket_1.HeaderFound);
  outC->every = outC->_L1;
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L48,
    &outC->_L46.PacketData);
  if (outC->every) {
    /* _L4=(TM_lib_internal::RECV_ReadPacketKernel#1)/ */
    RECV_ReadPacketKernel_TM_lib_internal(
      &outC->_L3,
      &outC->_L48,
      &outC->Context_RECV_ReadPacketKernel_1);
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &op_call,
      &outC->Context_RECV_ReadPacketKernel_1.PacketOut);
  }
  outC->received = outC->_L1;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->Metadata, &outC->_L3);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L44,
    (CompressedPacketData_T_Common_Types_Pkg *) &DEFAULT_CompressedPackets_TM);
  if (outC->every) {
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L4, &op_call);
  }
  else {
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L4, &outC->_L44);
  }
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->Data, &outC->_L4);
  noname = outC->_L2;
}

#ifndef KCG_USER_DEFINED_INIT
void RECV_ReadPackets_init_TM_lib_internal(
  outC_RECV_ReadPackets_TM_lib_internal *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;

  outC->_L50 = kcg_true;
  outC->_L49 = kcg_true;
  for (idx = 0; idx < 30; idx++) {
    outC->_L47[idx].nid_packet = kcg_lit_int32(0);
    outC->_L47[idx].q_dir = Q_DIR_Reverse;
    outC->_L47[idx].valid = kcg_true;
    outC->_L47[idx].startAddress = kcg_lit_int32(0);
    outC->_L47[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L48[idx1] = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L46.PacketHeaders[idx2].nid_packet = kcg_lit_int32(0);
    outC->_L46.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L46.PacketHeaders[idx2].valid = kcg_true;
    outC->_L46.PacketHeaders[idx2].startAddress = kcg_lit_int32(0);
    outC->_L46.PacketHeaders[idx2].endAddress = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L46.PacketData[idx3] = kcg_lit_int32(0);
  }
  outC->_L45 = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 500; idx4++) {
    outC->_L44[idx4] = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L4[idx5] = kcg_lit_int32(0);
  }
  outC->_L1 = kcg_true;
  outC->_L2 = kcg_lit_int32(0);
  outC->_L3.nid_packet = kcg_lit_int32(0);
  outC->_L3.q_dir = Q_DIR_Reverse;
  outC->_L3.valid = kcg_true;
  outC->_L3.startAddress = kcg_lit_int32(0);
  outC->_L3.endAddress = kcg_lit_int32(0);
  outC->every = kcg_true;
  outC->received = kcg_true;
  outC->Metadata.nid_packet = kcg_lit_int32(0);
  outC->Metadata.q_dir = Q_DIR_Reverse;
  outC->Metadata.valid = kcg_true;
  outC->Metadata.startAddress = kcg_lit_int32(0);
  outC->Metadata.endAddress = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 500; idx6++) {
    outC->Data[idx6] = kcg_lit_int32(0);
  }
  /* _L4=(TM_lib_internal::RECV_ReadPacketKernel#1)/ */
  RECV_ReadPacketKernel_init_TM_lib_internal(
    &outC->Context_RECV_ReadPacketKernel_1);
  /* _L1=(TM_lib_internal::RECV_LookupPacket#1)/ */
  RECV_LookupPacket_init_TM_lib_internal(&outC->Context_RECV_LookupPacket_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RECV_ReadPackets_reset_TM_lib_internal(
  outC_RECV_ReadPackets_TM_lib_internal *outC)
{
  /* _L4=(TM_lib_internal::RECV_ReadPacketKernel#1)/ */
  RECV_ReadPacketKernel_reset_TM_lib_internal(
    &outC->Context_RECV_ReadPacketKernel_1);
  /* _L1=(TM_lib_internal::RECV_LookupPacket#1)/ */
  RECV_LookupPacket_reset_TM_lib_internal(&outC->Context_RECV_LookupPacket_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RECV_ReadPackets_TM_lib_internal.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

