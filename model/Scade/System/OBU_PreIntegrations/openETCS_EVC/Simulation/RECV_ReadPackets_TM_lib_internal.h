/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _RECV_ReadPackets_TM_lib_internal_H_
#define _RECV_ReadPackets_TM_lib_internal_H_

#include "kcg_types.h"
#include "RECV_ReadPacketKernel_TM_lib_internal.h"
#include "RECV_LookupPacket_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedPacketData_T_Common_Types_Pkg /* Data/ */ Data;
  MetadataElement_T_Common_Types_Pkg /* Metadata/ */ Metadata;
  kcg_bool /* received/ */ received;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RECV_ReadPacketKernel_TM_lib_internal /* _L4=(TM_lib_internal::RECV_ReadPacketKernel#1)/ */ Context_RECV_ReadPacketKernel_1;
  outC_RECV_LookupPacket_TM_lib_internal /* _L1=(TM_lib_internal::RECV_LookupPacket#1)/ */ Context_RECV_LookupPacket_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  MetadataElement_T_Common_Types_Pkg /* _L3/ */ _L3;
  kcg_int32 /* _L2/ */ _L2;
  kcg_bool /* _L1/ */ _L1;
  CompressedPacketData_T_Common_Types_Pkg /* _L4/ */ _L4;
  CompressedPacketData_T_Common_Types_Pkg /* _L44/ */ _L44;
  kcg_int32 /* _L45/ */ _L45;
  CompressedPackets_T_Common_Types_Pkg /* _L46/ */ _L46;
  CompressedPacketData_T_Common_Types_Pkg /* _L48/ */ _L48;
  Metadata_T_Common_Types_Pkg /* _L47/ */ _L47;
  kcg_bool /* _L49/ */ _L49;
  kcg_bool /* _L50/ */ _L50;
} outC_RECV_ReadPackets_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::RECV_ReadPackets/ */
extern void RECV_ReadPackets_TM_lib_internal(
  /* Packets/ */
  CompressedPackets_T_Common_Types_Pkg *Packets,
  /* PacketID/ */
  kcg_int32 PacketID,
  /* F_version/ */
  kcg_bool F_version,
  /* F_id/ */
  kcg_bool F_id,
  outC_RECV_ReadPackets_TM_lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RECV_ReadPackets_reset_TM_lib_internal(
  outC_RECV_ReadPackets_TM_lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void RECV_ReadPackets_init_TM_lib_internal(
  outC_RECV_ReadPackets_TM_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _RECV_ReadPackets_TM_lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RECV_ReadPackets_TM_lib_internal.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

