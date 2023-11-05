/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _C_P021_flatten_sections_TM_lib_internal_H_
#define _C_P021_flatten_sections_TM_lib_internal_H_

#include "kcg_types.h"
#include "C_P021_fs_struct_to_array_TM_lib_internal.h"
#include "C_P021_fs_flatten_array_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P021_sections_array_flat_T_TM /* Flattened/ */ Flattened;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_P021_fs_flatten_array_TM_lib_internal /* _L78=(TM_lib_internal::C_P021_fs_flatten_array#1)/ */ Context_C_P021_fs_flatten_array_1[231];
  outC_C_P021_fs_struct_to_array_TM_lib_internal /* _L74=(TM_lib_internal::C_P021_fs_struct_to_array#1)/ */ Context_C_P021_fs_struct_to_array_1[33];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P021_sections_array_flat_T_TM /* _L76/ */ _L76;
  P021_OBU_sectionlist_int_T_TM /* _L75/ */ _L75;
  array_int32_3_33 /* _L74/ */ _L74;
  P021_sections_array_flat_T_TM /* _L78/ */ _L78;
  array_int32_3_33_231 /* _L80/ */ _L80;
} outC_C_P021_flatten_sections_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::C_P021_flatten_sections/ */
extern void C_P021_flatten_sections_TM_lib_internal(
  /* MergedSections/ */
  P021_OBU_sectionlist_int_T_TM *MergedSections,
  outC_C_P021_flatten_sections_TM_lib_internal *outC);

extern void C_P021_flatten_sections_reset_TM_lib_internal(
  outC_C_P021_flatten_sections_TM_lib_internal *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void C_P021_flatten_sections_init_TM_lib_internal(
  outC_C_P021_flatten_sections_TM_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_P021_flatten_sections_TM_lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P021_flatten_sections_TM_lib_internal.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

