/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _C_P027V1_us_array_qdiff_TM_lib_internal_H_
#define _C_P027V1_us_array_qdiff_TM_lib_internal_H_

#include "kcg_types.h"
#include "CAST_Int_to_V_DIFF_TM_conversions.h"
#include "CAST_Int_to_NC_DIFF_TM_conversions.h"
#include "C_P027V1_extract_el_section_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* cont/ */ cont;
  P027V1_section_enum_qdiff_T_TM_baseline2 /* sections/ */ sections;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_Int_to_NC_DIFF_TM_conversions /* _L25=(TM_conversions::CAST_Int_to_NC_DIFF#1)/ */ Context_CAST_Int_to_NC_DIFF_1;
  outC_C_P027V1_extract_el_section_TM_lib_internal /* _L15=(TM_lib_internal::C_P027V1_extract_el_section#1)/ */ Context_C_P027V1_extract_el_section_1;
  outC_CAST_Int_to_V_DIFF_TM_conversions /* _L28=(TM_conversions::CAST_Int_to_V_DIFF#1)/ */ Context_CAST_Int_to_V_DIFF_1;
  outC_C_P027V1_extract_el_section_TM_lib_internal /* _L19=(TM_lib_internal::C_P027V1_extract_el_section#2)/ */ Context_C_P027V1_extract_el_section_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P027V1_sections_array_flat_qdiff_T_TM_baseline2 /* _L1/ */ _L1;
  kcg_int32 /* _L3/ */ _L3;
  P027V1_section_enum_qdiff_T_TM_baseline2 /* _L4/ */ _L4;
  kcg_int32 /* _L5/ */ _L5;
  kcg_int32 /* _L15/ */ _L15;
  kcg_int32 /* _L16/ */ _L16;
  kcg_int32 /* _L18/ */ _L18;
  kcg_int32 /* _L19/ */ _L19;
  NC_DIFF /* _L25/ */ _L25;
  V_DIFF /* _L28/ */ _L28;
  kcg_bool /* _L32/ */ _L32;
  kcg_bool /* _L33/ */ _L33;
} outC_C_P027V1_us_array_qdiff_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::C_P027V1_us_array_qdiff/ */
extern void C_P027V1_us_array_qdiff_TM_lib_internal(
  /* i/ */
  kcg_int32 i,
  /* n_iter_int/ */
  kcg_int32 n_iter_int,
  /* flat/ */
  P027V1_sections_array_flat_qdiff_T_TM_baseline2 *flat,
  outC_C_P027V1_us_array_qdiff_TM_lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_P027V1_us_array_qdiff_reset_TM_lib_internal(
  outC_C_P027V1_us_array_qdiff_TM_lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_P027V1_us_array_qdiff_init_TM_lib_internal(
  outC_C_P027V1_us_array_qdiff_TM_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_P027V1_us_array_qdiff_TM_lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P027V1_us_array_qdiff_TM_lib_internal.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

