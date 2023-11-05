/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef _C_P027V1_fs_struct_to_arr_TM_lib_internal_H_
#define _C_P027V1_fs_struct_to_arr_TM_lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P027V1_section_array_qdiff_T_TM_baseline2 /* section_arrays/ */ section_arrays;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P027V1_section_int_qdiff_T_TM_baseline2 /* _L1/ */ _L1;
  array_int32_2 /* _L2/ */ _L2;
  kcg_int32 /* _L4/ */ _L4;
  kcg_int32 /* _L3/ */ _L3;
} outC_C_P027V1_fs_struct_to_arr_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::C_P027V1_fs_struct_to_array_qdiff/ */
extern void C_P027V1_fs_struct_to_arr_TM_lib_internal(
  /* section/ */
  P027V1_section_int_qdiff_T_TM_baseline2 *section,
  outC_C_P027V1_fs_struct_to_arr_TM_lib_internal *outC);

extern void C_P027V1_fs_struct_to_arr_reset_TM_lib_internal(
  outC_C_P027V1_fs_struct_to_arr_TM_lib_internal *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void C_P027V1_fs_struct_to_arr_init_TM_lib_internal(
  outC_C_P027V1_fs_struct_to_arr_TM_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_P027V1_fs_struct_to_arr_TM_lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P027V1_fs_struct_to_arr_TM_lib_internal.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

