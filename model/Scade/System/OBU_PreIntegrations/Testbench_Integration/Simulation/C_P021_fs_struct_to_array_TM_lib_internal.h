/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _C_P021_fs_struct_to_array_TM_lib_internal_H_
#define _C_P021_fs_struct_to_array_TM_lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P021_section_array_T_TM /* section_arrays/ */ section_arrays;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P021_section_int_T_TM /* _L1/ */ _L1;
  array_int32_3 /* _L2/ */ _L2;
  kcg_int32 /* _L5/ */ _L5;
  kcg_int32 /* _L4/ */ _L4;
  kcg_int32 /* _L3/ */ _L3;
} outC_C_P021_fs_struct_to_array_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::C_P021_fs_struct_to_array/ */
extern void C_P021_fs_struct_to_array_TM_lib_internal(
  /* section/ */
  P021_section_int_T_TM *section,
  outC_C_P021_fs_struct_to_array_TM_lib_internal *outC);

extern void C_P021_fs_struct_to_array_reset_TM_lib_internal(
  outC_C_P021_fs_struct_to_array_TM_lib_internal *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void C_P021_fs_struct_to_array_init_TM_lib_internal(
  outC_C_P021_fs_struct_to_array_TM_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_P021_fs_struct_to_array_TM_lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P021_fs_struct_to_array_TM_lib_internal.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

