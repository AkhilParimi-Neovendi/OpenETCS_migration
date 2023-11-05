/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _T_Decode_Metadata_L2_TM_lib_internal_H_
#define _T_Decode_Metadata_L2_TM_lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* nid_packet/ */ nid_packet;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L1/ */ _L1;
  kcg_int32 /* _L2/ */ _L2;
  kcg_int32 /* _L3/ */ _L3;
} outC_T_Decode_Metadata_L2_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::T_Decode_Metadata_L2/ */
extern void T_Decode_Metadata_L2_TM_lib_internal(
  /* Metadata/ */
  kcg_int32 Metadata,
  /* i/ */
  kcg_int32 i,
  outC_T_Decode_Metadata_L2_TM_lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void T_Decode_Metadata_L2_reset_TM_lib_internal(
  outC_T_Decode_Metadata_L2_TM_lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void T_Decode_Metadata_L2_init_TM_lib_internal(
  outC_T_Decode_Metadata_L2_TM_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _T_Decode_Metadata_L2_TM_lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** T_Decode_Metadata_L2_TM_lib_internal.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

