/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _C_P005_us_array_TM_lib_internal_H_
#define _C_P005_us_array_TM_lib_internal_H_

#include "kcg_types.h"
#include "CAST_Int_to_Q_LINKORIENTATION_TM_conversions.h"
#include "CAST_Int_to_Q_LINKREACTION_TM_conversions.h"
#include "CAST_Int_to_Q_LOCACC_TM_conversions.h"
#include "CAST_Int_to_Q_NEWCOUNTRY_TM_conversions.h"
#include "CAST_Int_to_D_LINK_TM_conversions.h"
#include "C_P005_extract_el_section_TM_lib_internal.h"
#include "CAST_Int_to_NID_BG_TM_conversions.h"
#include "CAST_Int_to_NID_C_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* cont/ */ cont;
  P005_section_enum_T_TM /* sections/ */ sections;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_Int_to_D_LINK_TM_conversions /* _L25=(TM_conversions::CAST_Int_to_D_LINK#1)/ */ Context_CAST_Int_to_D_LINK_1;
  outC_C_P005_extract_el_section_TM_lib_internal /* _L15=(TM_lib_internal::C_P005_extract_el_section#1)/ */ Context_C_P005_extract_el_section_1;
  outC_CAST_Int_to_NID_C_TM_conversions /* _L26=(TM_conversions::CAST_Int_to_NID_C#1)/ */ Context_CAST_Int_to_NID_C_1;
  outC_C_P005_extract_el_section_TM_lib_internal /* _L20=(TM_lib_internal::C_P005_extract_el_section#3)/ */ Context_C_P005_extract_el_section_3;
  outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions /* _L28=(TM_conversions::CAST_Int_to_Q_NEWCOUNTRY#1)/ */ Context_CAST_Int_to_Q_NEWCOUNTRY_1;
  outC_C_P005_extract_el_section_TM_lib_internal /* _L19=(TM_lib_internal::C_P005_extract_el_section#2)/ */ Context_C_P005_extract_el_section_2;
  outC_CAST_Int_to_Q_LOCACC_TM_conversions /* _L31=(TM_conversions::CAST_Int_to_Q_LOCACC#1)/ */ Context_CAST_Int_to_Q_LOCACC_1;
  outC_CAST_Int_to_Q_LINKREACTION_TM_conversions /* _L30=(TM_conversions::CAST_Int_to_Q_LINKREACTION#1)/ */ Context_CAST_Int_to_Q_LINKREACTION_1;
  outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions /* _L29=(TM_conversions::CAST_Int_to_Q_LINKORIENTATION#1)/ */ Context_CAST_Int_to_Q_LINKORIENTATION_1;
  outC_CAST_Int_to_NID_BG_TM_conversions /* _L27=(TM_conversions::CAST_Int_to_NID_BG#1)/ */ Context_CAST_Int_to_NID_BG_1;
  outC_C_P005_extract_el_section_TM_lib_internal /* _L24=(TM_lib_internal::C_P005_extract_el_section#7)/ */ Context_C_P005_extract_el_section_7;
  outC_C_P005_extract_el_section_TM_lib_internal /* _L23=(TM_lib_internal::C_P005_extract_el_section#6)/ */ Context_C_P005_extract_el_section_6;
  outC_C_P005_extract_el_section_TM_lib_internal /* _L22=(TM_lib_internal::C_P005_extract_el_section#5)/ */ Context_C_P005_extract_el_section_5;
  outC_C_P005_extract_el_section_TM_lib_internal /* _L21=(TM_lib_internal::C_P005_extract_el_section#4)/ */ Context_C_P005_extract_el_section_4;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P005_sections_array_flat_T_TM /* _L1/ */ _L1;
  kcg_int64 /* _L3/ */ _L3;
  P005_section_enum_T_TM /* _L4/ */ _L4;
  kcg_int64 /* _L5/ */ _L5;
  kcg_int64 /* _L15/ */ _L15;
  kcg_int64 /* _L16/ */ _L16;
  kcg_int64 /* _L18/ */ _L18;
  kcg_int64 /* _L19/ */ _L19;
  kcg_int64 /* _L20/ */ _L20;
  D_LINK /* _L25/ */ _L25;
  NID_C /* _L26/ */ _L26;
  Q_NEWCOUNTRY /* _L28/ */ _L28;
  kcg_bool /* _L32/ */ _L32;
  kcg_bool /* _L33/ */ _L33;
  Q_LOCACC /* _L31/ */ _L31;
  Q_LINKREACTION /* _L30/ */ _L30;
  Q_LINKORIENTATION /* _L29/ */ _L29;
  NID_BG /* _L27/ */ _L27;
  kcg_int64 /* _L24/ */ _L24;
  kcg_int64 /* _L23/ */ _L23;
  kcg_int64 /* _L22/ */ _L22;
  kcg_int64 /* _L21/ */ _L21;
} outC_C_P005_us_array_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::C_P005_us_array/ */
extern void C_P005_us_array_TM_lib_internal(
  /* i/ */
  kcg_int64 i,
  /* n_iter_int/ */
  kcg_int64 n_iter_int,
  /* flat/ */
  P005_sections_array_flat_T_TM *flat,
  outC_C_P005_us_array_TM_lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_P005_us_array_reset_TM_lib_internal(
  outC_C_P005_us_array_TM_lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_P005_us_array_init_TM_lib_internal(
  outC_C_P005_us_array_TM_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_P005_us_array_TM_lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P005_us_array_TM_lib_internal.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

