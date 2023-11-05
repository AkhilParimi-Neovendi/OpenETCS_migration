/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _C_P027_flatten_sections_qdiff_TM_lib_internal_H_
#define _C_P027_flatten_sections_qdiff_TM_lib_internal_H_

#include "kcg_types.h"
#include "C_P027V1_fs_struct_to_array_qdiff_TM_lib_internal.h"
#include "C_P027V1_fs_flatten_array_qdiff_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P027V1_sections_array_flat_qdiff_T_TM_baseline2 /* Flattened/ */ Flattened;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_P027V1_fs_flatten_array_qdiff_TM_lib_internal /* _L83=(TM_lib_internal::C_P027V1_fs_flatten_array_qdiff#1)/ */ Context_C_P027V1_fs_flatten_array_qdiff_1[32];
  outC_C_P027V1_fs_struct_to_array_qdiff_TM_lib_internal /* _L74=(TM_lib_internal::C_P027V1_fs_struct_to_array_qdiff#1)/ */ Context_C_P027V1_fs_struct_to_array_qdiff_1[32];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P027V1_sections_array_flat_qdiff_T_TM_baseline2 /* _L76/ */ _L76;
  P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 /* _L75/ */ _L75;
  array_int32_2_32 /* _L74/ */ _L74;
  P027V1_sections_array_flat_qdiff_T_TM_baseline2 /* _L83/ */ _L83;
  array_int32_2_32_32 /* _L84/ */ _L84;
} outC_C_P027_flatten_sections_qdiff_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::C_P027_flatten_sections_qdiff/ */
extern void C_P027_flatten_sections_qdiff_TM_lib_internal(
  /* MergedSections/ */
  P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 *MergedSections,
  outC_C_P027_flatten_sections_qdiff_TM_lib_internal *outC);

extern void C_P027_flatten_sections_qdiff_reset_TM_lib_internal(
  outC_C_P027_flatten_sections_qdiff_TM_lib_internal *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void C_P027_flatten_sections_qdiff_init_TM_lib_internal(
  outC_C_P027_flatten_sections_qdiff_TM_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_P027_flatten_sections_qdiff_TM_lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P027_flatten_sections_qdiff_TM_lib_internal.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

