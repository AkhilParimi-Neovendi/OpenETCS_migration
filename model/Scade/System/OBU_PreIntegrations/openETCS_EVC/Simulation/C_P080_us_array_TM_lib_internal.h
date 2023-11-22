/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */
#ifndef _C_P080_us_array_TM_lib_internal_H_
#define _C_P080_us_array_TM_lib_internal_H_

#include "kcg_types.h"
#include "CAST_Int_to_L_MAMODE_TM_conversions.h"
#include "CAST_Int_to_L_ACKMAMODE_TM_conversions.h"
#include "CAST_Int_to_Q_MAMODE_TM_conversions.h"
#include "CAST_Int_to_M_MAMODE_TM_conversions.h"
#include "CAST_Int_to_D_MAMODE_TM_conversions.h"
#include "C_P080_extract_el_section_TM_lib_internal.h"
#include "CAST_Int_to_NID_C_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* cont/ */ cont;
  P080_section_enum_T_TM /* sections/ */ sections;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_Int_to_D_MAMODE_TM_conversions /* _L25=(TM_conversions::CAST_Int_to_D_MAMODE#1)/ */ Context_CAST_Int_to_D_MAMODE_1;
  outC_C_P080_extract_el_section_TM_lib_internal /* _L15=(TM_lib_internal::C_P080_extract_el_section#1)/ */ Context_C_P080_extract_el_section_1;
  outC_CAST_Int_to_NID_C_TM_conversions /* _L26=(TM_conversions::CAST_Int_to_NID_C#1)/ */ Context_CAST_Int_to_NID_C_1;
  outC_C_P080_extract_el_section_TM_lib_internal /* _L20=(TM_lib_internal::C_P080_extract_el_section#3)/ */ _1_Context_C_P080_extract_el_section_3;
  outC_CAST_Int_to_M_MAMODE_TM_conversions /* _L28=(TM_conversions::CAST_Int_to_M_MAMODE#1)/ */ Context_CAST_Int_to_M_MAMODE_1;
  outC_C_P080_extract_el_section_TM_lib_internal /* _L19=(TM_lib_internal::C_P080_extract_el_section#2)/ */ _2_Context_C_P080_extract_el_section_2;
  outC_CAST_Int_to_Q_MAMODE_TM_conversions /* _L30=(TM_conversions::CAST_Int_to_Q_MAMODE#2)/ */ Context_CAST_Int_to_Q_MAMODE_2;
  outC_CAST_Int_to_L_ACKMAMODE_TM_conversions /* _L29=(TM_conversions::CAST_Int_to_L_ACKMAMODE#1)/ */ Context_CAST_Int_to_L_ACKMAMODE_1;
  outC_CAST_Int_to_L_MAMODE_TM_conversions /* _L27=(TM_conversions::CAST_Int_to_L_MAMODE#1)/ */ Context_CAST_Int_to_L_MAMODE_1;
  outC_C_P080_extract_el_section_TM_lib_internal /* _L23=(TM_lib_internal::C_P080_extract_el_section#6)/ */ _3_Context_C_P080_extract_el_section_6;
  outC_C_P080_extract_el_section_TM_lib_internal /* _L22=(TM_lib_internal::C_P080_extract_el_section#5)/ */ _4_Context_C_P080_extract_el_section_5;
  outC_C_P080_extract_el_section_TM_lib_internal /* _L21=(TM_lib_internal::C_P080_extract_el_section#4)/ */ _5_Context_C_P080_extract_el_section_4;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P080_sections_array_flat_T_TM /* _L1/ */ _L1;
  kcg_int32 /* _L3/ */ _L3;
  P080_section_enum_T_TM /* _L4/ */ _L4;
  kcg_int32 /* _L5/ */ _L5;
  kcg_int32 /* _L15/ */ _L15;
  kcg_int32 /* _L16/ */ _L16;
  kcg_int32 /* _L18/ */ _L18;
  kcg_int32 /* _L19/ */ _L19;
  kcg_int32 /* _L20/ */ _L20;
  D_MAMODE /* _L25/ */ _L25;
  NID_C /* _L26/ */ _L26;
  M_MAMODE /* _L28/ */ _L28;
  kcg_bool /* _L32/ */ _L32;
  kcg_bool /* _L33/ */ _L33;
  Q_MAMODE /* _L30/ */ _L30;
  L_ACKMAMODE /* _L29/ */ _L29;
  L_MAMODE /* _L27/ */ _L27;
  kcg_int32 /* _L23/ */ _L23;
  kcg_int32 /* _L22/ */ _L22;
  kcg_int32 /* _L21/ */ _L21;
} outC_C_P080_us_array_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::C_P080_us_array/ */
extern void C_P080_us_array_TM_lib_internal(
  /* i/ */
  kcg_int32 i,
  /* n_iter_int/ */
  kcg_int32 n_iter_int,
  /* flat/ */
  P080_sections_array_flat_T_TM *flat,
  outC_C_P080_us_array_TM_lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_P080_us_array_reset_TM_lib_internal(
  outC_C_P080_us_array_TM_lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_P080_us_array_init_TM_lib_internal(
  outC_C_P080_us_array_TM_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_P080_us_array_TM_lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P080_us_array_TM_lib_internal.h
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

