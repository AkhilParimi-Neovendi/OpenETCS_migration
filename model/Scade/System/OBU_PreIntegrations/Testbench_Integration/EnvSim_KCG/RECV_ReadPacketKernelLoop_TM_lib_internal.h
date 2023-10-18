/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _RECV_ReadPacketKernelLoop_TM_lib_internal_H_
#define _RECV_ReadPacketKernelLoop_TM_lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Cont/ */ Cont;
  kcg_int64 /* PacketOut/ */ PacketOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* _L1/ */ _L1;
  kcg_int64 /* _L3/ */ _L3;
  kcg_int64 /* _L4/ */ _L4;
  CompressedPacketData_T_Common_Types_Pkg /* _L9/ */ _L9;
  kcg_bool /* _L18/ */ _L18;
  kcg_int64 /* _L20/ */ _L20;
  kcg_int64 /* _L29/ */ _L29;
  kcg_int64 /* _L30/ */ _L30;
  kcg_int64 /* _L31/ */ _L31;
  kcg_int64 /* _L32/ */ _L32;
  kcg_int64 /* _L33/ */ _L33;
  kcg_int64 /* _L34/ */ _L34;
} outC_RECV_ReadPacketKernelLoop_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::RECV_ReadPacketKernelLoop/ */
extern void RECV_ReadPacketKernelLoop_TM_lib_internal(
  /* Index/ */
  kcg_int64 Index,
  /* PacketData/ */
  CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* AddressStart/ */
  kcg_int64 AddressStart,
  /* AddressEnd/ */
  kcg_int64 AddressEnd,
  outC_RECV_ReadPacketKernelLoop_TM_lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RECV_ReadPacketKernelLoop_reset_TM_lib_internal(
  outC_RECV_ReadPacketKernelLoop_TM_lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void RECV_ReadPacketKernelLoop_init_TM_lib_internal(
  outC_RECV_ReadPacketKernelLoop_TM_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _RECV_ReadPacketKernelLoop_TM_lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RECV_ReadPacketKernelLoop_TM_lib_internal.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

