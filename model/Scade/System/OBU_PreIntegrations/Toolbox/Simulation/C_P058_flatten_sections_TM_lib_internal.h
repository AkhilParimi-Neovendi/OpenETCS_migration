/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef _C_P058_flatten_sections_TM_lib_internal_H_
#define _C_P058_flatten_sections_TM_lib_internal_H_

#include "kcg_types.h"
#include "C_P058_fs_struct_to_array_TM_lib_internal.h"
#include "C_P058_fs_flatten_array_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P058_sections_array_flat_T_TM /* Flattened/ */ Flattened;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_P058_fs_flatten_array_TM_lib_internal /* _L78=(TM_lib_internal::C_P058_fs_flatten_array#1)/ */ Context_C_P058_fs_flatten_array_1[64];
  outC_C_P058_fs_struct_to_array_TM_lib_internal /* _L74=(TM_lib_internal::C_P058_fs_struct_to_array#1)/ */ Context_C_P058_fs_struct_to_array_1[32];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P058_sections_array_flat_T_TM /* _L76/ */ _L76;
  P058_OBU_sectionlist_int_T_TM /* _L75/ */ _L75;
  array_int32_2_32 /* _L74/ */ _L74;
  P058_sections_array_flat_T_TM /* _L78/ */ _L78;
  array_int32_2_32_64 /* _L80/ */ _L80;
} outC_C_P058_flatten_sections_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::C_P058_flatten_sections/ */
extern void C_P058_flatten_sections_TM_lib_internal(
  /* MergedSections/ */
  P058_OBU_sectionlist_int_T_TM *MergedSections,
  outC_C_P058_flatten_sections_TM_lib_internal *outC);

extern void C_P058_flatten_sections_reset_TM_lib_internal(
  outC_C_P058_flatten_sections_TM_lib_internal *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void C_P058_flatten_sections_init_TM_lib_internal(
  outC_C_P058_flatten_sections_TM_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_P058_flatten_sections_TM_lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P058_flatten_sections_TM_lib_internal.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

