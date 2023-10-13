/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/ObuFunctions/Radio/MoRC/Simulation/config.txt
** Generation date: 2023-09-01T13:21:48
*************************************************************$ */
#ifndef _RECV_ReadPacketKernel_TM_lib_internal_H_
#define _RECV_ReadPacketKernel_TM_lib_internal_H_

#include "kcg_types.h"
#include "RECV_ReadPacketKernelLoop_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedPacketData_T_Common_Types_Pkg /* PacketOut/ */ PacketOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RECV_ReadPacketKernelLoop_TM_lib_internal /* _L22=(TM_lib_internal::RECV_ReadPacketKernelLoop#1)/ */ Context_RECV_ReadPacketKernelLoop_1[500];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedPacketData_T_Common_Types_Pkg /* _L3/ */ _L3;
  MetadataElement_T_Common_Types_Pkg /* _L4/ */ _L4;
  CompressedPacketData_T_Common_Types_Pkg /* _L6/ */ _L6;
  CompressedPacketData_T_Common_Types_Pkg /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  CompressedPacketData_T_Common_Types_Pkg /* _L10/ */ _L10;
  array_int32_500_500 /* _L18/ */ _L18;
  kcg_int32 /* _L22/ */ _L22;
  kcg_int32 /* _L24/ */ _L24;
  kcg_int32 /* _L23/ */ _L23;
} outC_RECV_ReadPacketKernel_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::RECV_ReadPacketKernel/ */
extern void RECV_ReadPacketKernel_TM_lib_internal(
  /* Header/ */
  MetadataElement_T_Common_Types_Pkg *Header,
  /* PacketData/ */
  CompressedPacketData_T_Common_Types_Pkg *PacketData,
  outC_RECV_ReadPacketKernel_TM_lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RECV_ReadPacketKernel_reset_TM_lib_internal(
  outC_RECV_ReadPacketKernel_TM_lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void RECV_ReadPacketKernel_init_TM_lib_internal(
  outC_RECV_ReadPacketKernel_TM_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _RECV_ReadPacketKernel_TM_lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RECV_ReadPacketKernel_TM_lib_internal.h
** Generation date: 2023-09-01T13:21:48
*************************************************************$ */

