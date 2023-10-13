/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _RECV_LookupPacket_TM_lib_internal_H_
#define _RECV_LookupPacket_TM_lib_internal_H_

#include "kcg_types.h"
#include "RECV_LookupPacketLoop_TM_lib_internal.h"
#include "T_Filter_Metadata_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Found/ */ Found;
  kcg_int64 /* Index/ */ Index;
  MetadataElement_T_Common_Types_Pkg /* HeaderFound/ */ HeaderFound;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_T_Filter_Metadata_TM_lib_internal /* _L30=(TM_lib_internal::T_Filter_Metadata#1)/ */ Context_T_Filter_Metadata_1;
  outC_RECV_LookupPacketLoop_TM_lib_internal /* _L4=(TM_lib_internal::RECV_LookupPacketLoop#1)/ */ Context_RECV_LookupPacketLoop_1[30];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Metadata_T_Common_Types_Pkg /* _L1/ */ _L1;
  kcg_int64 /* _L2/ */ _L2;
  array_int64_30 /* _L3/ */ _L3;
  kcg_int64 /* _L4/ */ _L4;
  MetadataElement_T_Common_Types_Pkg /* _L23/ */ _L23;
  NID_PACKET /* _L24/ */ _L24;
  MetadataElement_T_Common_Types_Pkg /* _L26/ */ _L26;
  MetadataElement_T_Common_Types_Pkg /* _L22/ */ _L22;
  MetadataElement_T_Common_Types_Pkg /* _L27/ */ _L27;
  kcg_int64 /* _L28/ */ _L28;
  kcg_int64 /* _L29/ */ _L29;
  kcg_bool /* _L30/ */ _L30;
  kcg_bool /* _L31/ */ _L31;
  kcg_bool /* _L32/ */ _L32;
  kcg_int64 /* _L34/ */ _L34;
  kcg_bool /* _L35/ */ _L35;
  kcg_bool /* _L36/ */ _L36;
  DMI_Available_Menu_int_T_DATA /* _L38/ */ _L38;
  DMI_Available_Menu_int_T_DATA /* _L40/ */ _L40;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L44/ */ _L44;
  kcg_bool /* _L45/ */ _L45;
} outC_RECV_LookupPacket_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::RECV_LookupPacket/ */
extern void RECV_LookupPacket_TM_lib_internal(
  /* Message_ID/ */
  kcg_int64 Message_ID,
  /* HeadersIN/ */
  Metadata_T_Common_Types_Pkg *HeadersIN,
  /* F_version/ */
  kcg_bool F_version,
  /* F_id/ */
  kcg_bool F_id,
  outC_RECV_LookupPacket_TM_lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RECV_LookupPacket_reset_TM_lib_internal(
  outC_RECV_LookupPacket_TM_lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void RECV_LookupPacket_init_TM_lib_internal(
  outC_RECV_LookupPacket_TM_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _RECV_LookupPacket_TM_lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RECV_LookupPacket_TM_lib_internal.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

