/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _RECV_LookupPacketLoop_TM_lib_internal_H_
#define _RECV_LookupPacketLoop_TM_lib_internal_H_

#include "kcg_types.h"
#include "T_Filter_Metadata_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Cont/ */ Cont;
  MetadataElement_T_Common_Types_Pkg /* HeaderFound/ */ HeaderFound;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_T_Filter_Metadata_TM_lib_internal /* _L32=(TM_lib_internal::T_Filter_Metadata#1)/ */ Context_T_Filter_Metadata_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* _L3/ */ _L3;
  MetadataElement_T_Common_Types_Pkg /* _L4/ */ _L4;
  NID_PACKET /* _L27/ */ _L27;
  kcg_bool /* _L29/ */ _L29;
  MetadataElement_T_Common_Types_Pkg /* _L30/ */ _L30;
  kcg_int64 /* _L31/ */ _L31;
  kcg_bool /* _L32/ */ _L32;
  kcg_bool /* _L33/ */ _L33;
  kcg_bool /* _L34/ */ _L34;
} outC_RECV_LookupPacketLoop_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::RECV_LookupPacketLoop/ */
extern void RECV_LookupPacketLoop_TM_lib_internal(
  /* Index/ */
  kcg_int64 Index,
  /* HeaderInit/ */
  MetadataElement_T_Common_Types_Pkg *HeaderInit,
  /* Message_in/ */
  MetadataElement_T_Common_Types_Pkg *Message_in,
  /* ID_in/ */
  kcg_int64 ID_in,
  /* F_version/ */
  kcg_bool F_version,
  /* F_id/ */
  kcg_bool F_id,
  outC_RECV_LookupPacketLoop_TM_lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RECV_LookupPacketLoop_reset_TM_lib_internal(
  outC_RECV_LookupPacketLoop_TM_lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void RECV_LookupPacketLoop_init_TM_lib_internal(
  outC_RECV_LookupPacketLoop_TM_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _RECV_LookupPacketLoop_TM_lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RECV_LookupPacketLoop_TM_lib_internal.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

