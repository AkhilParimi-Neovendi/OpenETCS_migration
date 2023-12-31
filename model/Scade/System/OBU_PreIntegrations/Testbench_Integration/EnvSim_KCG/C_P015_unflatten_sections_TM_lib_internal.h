/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _C_P015_unflatten_sections_TM_lib_internal_H_
#define _C_P015_unflatten_sections_TM_lib_internal_H_

#include "kcg_types.h"
#include "C_P015_us_array_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P015_OBU_sectionlist_enum_T_TM /* sections/ */ sections;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_P015_us_array_TM_lib_internal /* _L7=(TM_lib_internal::C_P015_us_array#1)/ */ Context_C_P015_us_array_1[32];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P015_sections_array_flat_T_TM /* _L1/ */ _L1;
  kcg_int32 /* _L3/ */ _L3;
  array_int32_32 /* _L5/ */ _L5;
  array_int32_128_32 /* _L6/ */ _L6;
  kcg_int32 /* _L7/ */ _L7;
  P015_OBU_sectionlist_enum_T_TM /* _L9/ */ _L9;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L12/ */ _L12;
  kcg_int32 /* _L13/ */ _L13;
  kcg_bool /* _L14/ */ _L14;
} outC_C_P015_unflatten_sections_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::C_P015_unflatten_sections/ */
extern void C_P015_unflatten_sections_TM_lib_internal(
  /* nid_packet_ok/ */
  kcg_bool nid_packet_ok,
  /* n_iter/ */
  kcg_int32 n_iter,
  /* flat/ */
  P015_sections_array_flat_T_TM *flat,
  outC_C_P015_unflatten_sections_TM_lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_P015_unflatten_sections_reset_TM_lib_internal(
  outC_C_P015_unflatten_sections_TM_lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_P015_unflatten_sections_init_TM_lib_internal(
  outC_C_P015_unflatten_sections_TM_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_P015_unflatten_sections_TM_lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P015_unflatten_sections_TM_lib_internal.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

