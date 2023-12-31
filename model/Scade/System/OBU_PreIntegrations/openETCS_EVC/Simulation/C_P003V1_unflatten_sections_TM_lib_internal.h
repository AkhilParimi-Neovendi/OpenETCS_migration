/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _C_P003V1_unflatten_sections_TM_lib_internal_H_
#define _C_P003V1_unflatten_sections_TM_lib_internal_H_

#include "kcg_types.h"
#include "C_P003V1_us_array_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P003V1_sectionlist_enum_T_TM_baseline2 /* sections/ */ sections;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_P003V1_us_array_TM_lib_internal /* _L7=(TM_lib_internal::C_P003V1_us_array#1)/ */ Context_C_P003V1_us_array_1[32];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P003V1_OBU_sectionlist_int_T_TM_baseline2 /* _L1/ */ _L1;
  kcg_int32 /* _L3/ */ _L3;
  array_int32_32 /* _L5/ */ _L5;
  array_int32_32_32 /* _L6/ */ _L6;
  kcg_int32 /* _L7/ */ _L7;
  _157_array /* _L9/ */ _L9;
  kcg_bool /* _L11/ */ _L11;
} outC_C_P003V1_unflatten_sections_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::C_P003V1_unflatten_sections/ */
extern void C_P003V1_unflatten_sections_TM_lib_internal(
  /* nid_packet_ok/ */
  kcg_bool nid_packet_ok,
  /* n_iter/ */
  kcg_int32 n_iter,
  /* flat/ */
  P003V1_OBU_sectionlist_int_T_TM_baseline2 *flat,
  outC_C_P003V1_unflatten_sections_TM_lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_P003V1_unflatten_sections_reset_TM_lib_internal(
  outC_C_P003V1_unflatten_sections_TM_lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_P003V1_unflatten_sections_init_TM_lib_internal(
  outC_C_P003V1_unflatten_sections_TM_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_P003V1_unflatten_sections_TM_lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P003V1_unflatten_sections_TM_lib_internal.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

