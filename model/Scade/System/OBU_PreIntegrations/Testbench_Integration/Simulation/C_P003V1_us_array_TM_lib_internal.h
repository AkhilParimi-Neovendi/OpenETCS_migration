/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _C_P003V1_us_array_TM_lib_internal_H_
#define _C_P003V1_us_array_TM_lib_internal_H_

#include "kcg_types.h"
#include "C_P003V1_extract_el_section_TM_lib_internal.h"
#include "CAST_Int_to_NID_C_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* cont/ */ cont;
  P003V1_section_enum_T_TM_baseline2 /* sections/ */ sections;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_Int_to_NID_C_TM_conversions /* _L41=(TM_conversions::CAST_Int_to_NID_C#2)/ */ Context_CAST_Int_to_NID_C_2;
  outC_C_P003V1_extract_el_section_TM_lib_internal /* _L34=(TM_lib_internal::C_P003V1_extract_el_section#2)/ */ Context_C_P003V1_extract_el_section_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  NID_C /* _L41/ */ _L41;
  kcg_bool /* _L40/ */ _L40;
  kcg_bool /* _L39/ */ _L39;
  P003V1_section_enum_T_TM_baseline2 /* _L38/ */ _L38;
  P003V1_OBU_sectionlist_int_T_TM_baseline2 /* _L37/ */ _L37;
  kcg_int64 /* _L36/ */ _L36;
  kcg_int64 /* _L35/ */ _L35;
  kcg_int64 /* _L34/ */ _L34;
} outC_C_P003V1_us_array_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::C_P003V1_us_array/ */
extern void C_P003V1_us_array_TM_lib_internal(
  /* i/ */
  kcg_int64 i,
  /* n_iter_int/ */
  kcg_int64 n_iter_int,
  /* flat/ */
  P003V1_OBU_sectionlist_int_T_TM_baseline2 *flat,
  outC_C_P003V1_us_array_TM_lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_P003V1_us_array_reset_TM_lib_internal(
  outC_C_P003V1_us_array_TM_lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_P003V1_us_array_init_TM_lib_internal(
  outC_C_P003V1_us_array_TM_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_P003V1_us_array_TM_lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P003V1_us_array_TM_lib_internal.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

