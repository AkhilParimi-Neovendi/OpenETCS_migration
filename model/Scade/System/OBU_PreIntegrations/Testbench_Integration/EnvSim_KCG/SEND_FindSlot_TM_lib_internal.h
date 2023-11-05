/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _SEND_FindSlot_TM_lib_internal_H_
#define _SEND_FindSlot_TM_lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Cont/ */ Cont;
  kcg_int32 /* Acc/ */ Acc;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L1/ */ _L1;
  MetadataElement_T_Common_Types_Pkg /* _L2/ */ _L2;
  MetadataElement_T_Common_Types_Pkg /* _L3/ */ _L3;
  kcg_bool /* _L17/ */ _L17;
  kcg_int32 /* _L19/ */ _L19;
  NID_PACKET /* _L27/ */ _L27;
  kcg_int32 /* _L28/ */ _L28;
  NID_PACKET /* _L29/ */ _L29;
} outC_SEND_FindSlot_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::SEND_FindSlot/ */
extern void SEND_FindSlot_TM_lib_internal(
  /* a/ */
  kcg_int32 a,
  /* MessageIn/ */
  MetadataElement_T_Common_Types_Pkg *MessageIn,
  /* EmptyHeader/ */
  MetadataElement_T_Common_Types_Pkg *EmptyHeader,
  outC_SEND_FindSlot_TM_lib_internal *outC);

extern void SEND_FindSlot_reset_TM_lib_internal(
  outC_SEND_FindSlot_TM_lib_internal *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void SEND_FindSlot_init_TM_lib_internal(
  outC_SEND_FindSlot_TM_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _SEND_FindSlot_TM_lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SEND_FindSlot_TM_lib_internal.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

