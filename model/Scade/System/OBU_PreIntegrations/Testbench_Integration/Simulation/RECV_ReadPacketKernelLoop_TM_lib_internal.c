/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RECV_ReadPacketKernelLoop_TM_lib_internal.h"

/* TM_lib_internal::RECV_ReadPacketKernelLoop/ */
void RECV_ReadPacketKernelLoop_TM_lib_internal(
  /* Index/ */
  kcg_int64 Index,
  /* PacketData/ */
  CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* AddressStart/ */
  kcg_int64 AddressStart,
  /* AddressEnd/ */
  kcg_int64 AddressEnd,
  outC_RECV_ReadPacketKernelLoop_TM_lib_internal *outC)
{
  outC->_L34 = kcg_lit_int64(1);
  outC->_L1 = Index;
  outC->_L33 = outC->_L1 + outC->_L34;
  outC->_L31 = AddressStart;
  outC->_L4 = AddressEnd;
  outC->_L32 = outC->_L4 - outC->_L31;
  outC->_L20 = Index;
  outC->_L3 = AddressStart;
  outC->_L29 = outC->_L3 + outC->_L20;
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L9, PacketData);
  if ((kcg_lit_int64(0) <= outC->_L29) & (outC->_L29 < kcg_lit_int64(500))) {
    outC->_L30 = outC->_L9[outC->_L29];
  }
  else {
    outC->_L30 = kcg_lit_int64(0);
  }
  outC->_L18 = outC->_L33 <= outC->_L32;
  outC->Cont = outC->_L18;
  outC->PacketOut = outC->_L30;
}

#ifndef KCG_USER_DEFINED_INIT
void RECV_ReadPacketKernelLoop_init_TM_lib_internal(
  outC_RECV_ReadPacketKernelLoop_TM_lib_internal *outC)
{
  static kcg_size idx;

  outC->_L34 = kcg_lit_int64(0);
  outC->_L33 = kcg_lit_int64(0);
  outC->_L32 = kcg_lit_int64(0);
  outC->_L31 = kcg_lit_int64(0);
  outC->_L30 = kcg_lit_int64(0);
  outC->_L29 = kcg_lit_int64(0);
  outC->_L20 = kcg_lit_int64(0);
  outC->_L18 = kcg_true;
  for (idx = 0; idx < 500; idx++) {
    outC->_L9[idx] = kcg_lit_int64(0);
  }
  outC->_L4 = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  outC->_L1 = kcg_lit_int64(0);
  outC->PacketOut = kcg_lit_int64(0);
  outC->Cont = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RECV_ReadPacketKernelLoop_reset_TM_lib_internal(
  outC_RECV_ReadPacketKernelLoop_TM_lib_internal *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RECV_ReadPacketKernelLoop_TM_lib_internal.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

