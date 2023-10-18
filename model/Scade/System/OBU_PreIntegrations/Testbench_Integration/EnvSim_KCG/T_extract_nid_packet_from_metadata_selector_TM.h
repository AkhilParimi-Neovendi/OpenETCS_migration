/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _T_extract_nid_packet_from_metadata_selector_TM_H_
#define _T_extract_nid_packet_from_metadata_selector_TM_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int64 /* nid_packet/ */ nid_packet;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* _L1/ */ _L1;
  kcg_int64 /* _L3/ */ _L3;
  kcg_int64 /* _L4/ */ _L4;
} outC_T_extract_nid_packet_from_metadata_selector_TM;

/* ===========  node initialization and cycle functions  =========== */
/* TM::T_extract_nid_packet_from_metadata_selector/ */
extern void T_extract_nid_packet_from_metadata_selector_TM(
  /* Metadata_in/ */
  kcg_int64 Metadata_in,
  outC_T_extract_nid_packet_from_metadata_selector_TM *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void T_extract_nid_packet_from_metadata_selector_reset_TM(
  outC_T_extract_nid_packet_from_metadata_selector_TM *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void T_extract_nid_packet_from_metadata_selector_init_TM(
  outC_T_extract_nid_packet_from_metadata_selector_TM *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _T_extract_nid_packet_from_metadata_selector_TM_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** T_extract_nid_packet_from_metadata_selector_TM.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
