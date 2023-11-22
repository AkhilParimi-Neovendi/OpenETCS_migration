/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _T_Filter_Metadata_Element_TM_lib_internal_H_
#define _T_Filter_Metadata_Element_TM_lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* data_match/ */ data_match;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L6/ */ _L6;
  kcg_int32 /* _L5/ */ _L5;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L2/ */ _L2;
  kcg_int32 /* _L1/ */ _L1;
} outC_T_Filter_Metadata_Element_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::T_Filter_Metadata_Element/ */
extern void T_Filter_Metadata_Element_TM_lib_internal(
  /* value2/ */
  kcg_int32 value2,
  /* value1/ */
  kcg_int32 value1,
  /* do_filter/ */
  kcg_bool do_filter,
  outC_T_Filter_Metadata_Element_TM_lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void T_Filter_Metadata_Element_reset_TM_lib_internal(
  outC_T_Filter_Metadata_Element_TM_lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void T_Filter_Metadata_Element_init_TM_lib_internal(
  outC_T_Filter_Metadata_Element_TM_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _T_Filter_Metadata_Element_TM_lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** T_Filter_Metadata_Element_TM_lib_internal.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

