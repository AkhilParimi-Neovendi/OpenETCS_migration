/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _C_P058_us_array_TM_lib_internal_H_
#define _C_P058_us_array_TM_lib_internal_H_

#include "kcg_types.h"
#include "CAST_Int_to_Q_LGTLOC_TM_conversions.h"
#include "CAST_Int_to_D_LOC_TM_conversions.h"
#include "C_P058_extract_el_section_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* cont/ */ cont;
  P058_section_enum_T_TM /* sections/ */ sections;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_Int_to_D_LOC_TM_conversions /* _L25=(TM_conversions::CAST_Int_to_D_LOC#1)/ */ Context_CAST_Int_to_D_LOC_1;
  outC_C_P058_extract_el_section_TM_lib_internal /* _L15=(TM_lib_internal::C_P058_extract_el_section#1)/ */ Context_C_P058_extract_el_section_1;
  outC_CAST_Int_to_Q_LGTLOC_TM_conversions /* _L28=(TM_conversions::CAST_Int_to_Q_LGTLOC#1)/ */ Context_CAST_Int_to_Q_LGTLOC_1;
  outC_C_P058_extract_el_section_TM_lib_internal /* _L19=(TM_lib_internal::C_P058_extract_el_section#2)/ */ Context_C_P058_extract_el_section_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P058_sections_array_flat_T_TM /* _L1/ */ _L1;
  kcg_int64 /* _L3/ */ _L3;
  P058_section_enum_T_TM /* _L4/ */ _L4;
  kcg_int64 /* _L5/ */ _L5;
  kcg_int64 /* _L15/ */ _L15;
  kcg_int64 /* _L16/ */ _L16;
  kcg_int64 /* _L18/ */ _L18;
  kcg_int64 /* _L19/ */ _L19;
  D_LOC /* _L25/ */ _L25;
  Q_LGTLOC /* _L28/ */ _L28;
  kcg_bool /* _L32/ */ _L32;
  kcg_bool /* _L33/ */ _L33;
} outC_C_P058_us_array_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::C_P058_us_array/ */
extern void C_P058_us_array_TM_lib_internal(
  /* i/ */
  kcg_int64 i,
  /* n_iter_int/ */
  kcg_int64 n_iter_int,
  /* flat/ */
  P058_sections_array_flat_T_TM *flat,
  outC_C_P058_us_array_TM_lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_P058_us_array_reset_TM_lib_internal(
  outC_C_P058_us_array_TM_lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_P058_us_array_init_TM_lib_internal(
  outC_C_P058_us_array_TM_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_P058_us_array_TM_lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P058_us_array_TM_lib_internal.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

