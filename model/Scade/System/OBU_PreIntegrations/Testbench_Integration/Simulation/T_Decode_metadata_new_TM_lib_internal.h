/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _T_Decode_metadata_new_TM_lib_internal_H_
#define _T_Decode_metadata_new_TM_lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* nid_packet/ */ nid_packet;
  kcg_int32 /* id/ */ id;
  kcg_int32 /* m_version/ */ m_version;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L1/ */ _L1;
  kcg_int32 /* _L3/ */ _L3;
  kcg_int32 /* _L4/ */ _L4;
  kcg_int32 /* _L5/ */ _L5;
  kcg_int32 /* _L6/ */ _L6;
  kcg_int32 /* _L7/ */ _L7;
  kcg_int32 /* _L8/ */ _L8;
  kcg_int32 /* _L9/ */ _L9;
  kcg_int32 /* _L10/ */ _L10;
  kcg_int32 /* _L11/ */ _L11;
} outC_T_Decode_metadata_new_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::T_Decode_metadata_new/ */
extern void T_Decode_metadata_new_TM_lib_internal(
  /* Metadata_in/ */
  kcg_int32 Metadata_in,
  outC_T_Decode_metadata_new_TM_lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void T_Decode_metadata_new_reset_TM_lib_internal(
  outC_T_Decode_metadata_new_TM_lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void T_Decode_metadata_new_init_TM_lib_internal(
  outC_T_Decode_metadata_new_TM_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _T_Decode_metadata_new_TM_lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** T_Decode_metadata_new_TM_lib_internal.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

