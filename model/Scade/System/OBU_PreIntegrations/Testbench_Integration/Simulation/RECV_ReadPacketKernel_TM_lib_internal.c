/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RECV_ReadPacketKernel_TM_lib_internal.h"

/* TM_lib_internal::RECV_ReadPacketKernel/ */
void RECV_ReadPacketKernel_TM_lib_internal(
  /* Header/ */
  MetadataElement_T_Common_Types_Pkg *Header,
  /* PacketData/ */
  CompressedPacketData_T_Common_Types_Pkg *PacketData,
  outC_RECV_ReadPacketKernel_TM_lib_internal *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_int64 noname;

  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L4, Header);
  outC->_L24 = outC->_L4.startAddress;
  outC->_L23 = outC->_L4.endAddress;
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L3, PacketData);
  /* _L18/ */
  for (idx = 0; idx < 500; idx++) {
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L18[idx], &outC->_L3);
  }
  /* _L6/ */
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L6[idx1] = outC->_L24;
  }
  /* _L7/ */
  for (idx2 = 0; idx2 < 500; idx2++) {
    outC->_L7[idx2] = outC->_L23;
  }
  outC->_L8 = kcg_true;
  /* _L22= */
  if (outC->_L8) {
    /* _L22= */
    for (idx3 = 0; idx3 < 500; idx3++) {
      /* _L22=(TM_lib_internal::RECV_ReadPacketKernelLoop#1)/ */
      RECV_ReadPacketKernelLoop_TM_lib_internal(
        /* _L22= */(kcg_int64) idx3,
        &outC->_L18[idx3],
        outC->_L6[idx3],
        outC->_L7[idx3],
        &outC->Context_RECV_ReadPacketKernelLoop_1[idx3]);
      outC->_L10[idx3] = outC->Context_RECV_ReadPacketKernelLoop_1[idx3].PacketOut;
      outC->_L22 = /* _L22= */(kcg_int64) (idx3 + 1);
      /* _L22= */
      if (!outC->Context_RECV_ReadPacketKernelLoop_1[idx3].Cont) {
        break;
      }
    }
  }
  else {
    outC->_L22 = kcg_lit_int64(0);
  }
#ifdef KCG_MAPW_CPY

  /* _L22= */
  for (idx3 = /* _L22= */(kcg_size) outC->_L22; idx3 < 500; idx3++) {
    outC->_L10[idx3] = kcg_lit_int64(0);
  }
#endif /* KCG_MAPW_CPY */

  noname = outC->_L22;
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->PacketOut, &outC->_L10);
}

#ifndef KCG_USER_DEFINED_INIT
void RECV_ReadPacketKernel_init_TM_lib_internal(
  outC_RECV_ReadPacketKernel_TM_lib_internal *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;

  outC->_L23 = kcg_lit_int64(0);
  outC->_L24 = kcg_lit_int64(0);
  outC->_L22 = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 500; idx2++) {
    for (idx1 = 0; idx1 < 500; idx1++) {
      outC->_L18[idx2][idx1] = kcg_lit_int64(0);
    }
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L10[idx3] = kcg_lit_int64(0);
  }
  outC->_L8 = kcg_true;
  for (idx4 = 0; idx4 < 500; idx4++) {
    outC->_L7[idx4] = kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L6[idx5] = kcg_lit_int64(0);
  }
  outC->_L4.nid_packet = kcg_lit_int64(0);
  outC->_L4.q_dir = Q_DIR_Reverse;
  outC->_L4.valid = kcg_true;
  outC->_L4.startAddress = kcg_lit_int64(0);
  outC->_L4.endAddress = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 500; idx6++) {
    outC->_L3[idx6] = kcg_lit_int64(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->PacketOut[idx7] = kcg_lit_int64(0);
  }
  for (idx = 0; idx < 500; idx++) {
    /* _L22=(TM_lib_internal::RECV_ReadPacketKernelLoop#1)/ */
    RECV_ReadPacketKernelLoop_init_TM_lib_internal(
      &outC->Context_RECV_ReadPacketKernelLoop_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RECV_ReadPacketKernel_reset_TM_lib_internal(
  outC_RECV_ReadPacketKernel_TM_lib_internal *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 500; idx++) {
    /* _L22=(TM_lib_internal::RECV_ReadPacketKernelLoop#1)/ */
    RECV_ReadPacketKernelLoop_reset_TM_lib_internal(
      &outC->Context_RECV_ReadPacketKernelLoop_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RECV_ReadPacketKernel_TM_lib_internal.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

