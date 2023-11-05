/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _C_P015_fs_flatten_array_TM_lib_internal_H_
#define _C_P015_fs_flatten_array_TM_lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P015_sections_array_flat_T_TM /* flat/ */ flat;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P015_sections_array_flat_T_TM /* _L1/ */ _L1;
  kcg_int32 /* _L3/ */ _L3;
  kcg_int32 /* _L5/ */ _L5;
  kcg_int32 /* _L6/ */ _L6;
  P015_sections_array_flat_T_TM /* _L7/ */ _L7;
  kcg_int32 /* _L8/ */ _L8;
  P015_OBU_sectionlist_array_T_TM /* _L2/ */ _L2;
  kcg_int32 /* _L10/ */ _L10;
  kcg_int32 /* _L154/ */ _L154;
} outC_C_P015_fs_flatten_array_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::C_P015_fs_flatten_array/ */
extern void C_P015_fs_flatten_array_TM_lib_internal(
  /* i/ */
  kcg_int32 i,
  /* Acc/ */
  P015_sections_array_flat_T_TM *Acc,
  /* section_arrays/ */
  P015_OBU_sectionlist_array_T_TM *section_arrays,
  outC_C_P015_fs_flatten_array_TM_lib_internal *outC);

extern void C_P015_fs_flatten_array_reset_TM_lib_internal(
  outC_C_P015_fs_flatten_array_TM_lib_internal *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void C_P015_fs_flatten_array_init_TM_lib_internal(
  outC_C_P015_fs_flatten_array_TM_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_P015_fs_flatten_array_TM_lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P015_fs_flatten_array_TM_lib_internal.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

