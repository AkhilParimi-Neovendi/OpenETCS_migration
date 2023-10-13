/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _C_P015_extract_el_section_TM_lib_internal_H_
#define _C_P015_extract_el_section_TM_lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int64 /* element/ */ element;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* _L1/ */ _L1;
  P015_sections_array_flat_T_TM /* _L2/ */ _L2;
  kcg_int64 /* _L3/ */ _L3;
  kcg_int64 /* _L5/ */ _L5;
  kcg_int64 /* _L6/ */ _L6;
} outC_C_P015_extract_el_section_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::C_P015_extract_el_section/ */
extern void C_P015_extract_el_section_TM_lib_internal(
  /* offset/ */
  kcg_int64 offset,
  /* flat/ */
  P015_sections_array_flat_T_TM *flat,
  /* modulo/ */
  kcg_int64 modulo,
  outC_C_P015_extract_el_section_TM_lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_P015_extract_el_section_reset_TM_lib_internal(
  outC_C_P015_extract_el_section_TM_lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_P015_extract_el_section_init_TM_lib_internal(
  outC_C_P015_extract_el_section_TM_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_P015_extract_el_section_TM_lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P015_extract_el_section_TM_lib_internal.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
