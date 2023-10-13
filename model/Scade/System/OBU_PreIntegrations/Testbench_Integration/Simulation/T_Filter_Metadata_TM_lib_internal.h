/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _T_Filter_Metadata_TM_lib_internal_H_
#define _T_Filter_Metadata_TM_lib_internal_H_

#include "kcg_types.h"
#include "T_Filter_Metadata_Element_TM_lib_internal.h"
#include "T_Decode_metadata_new_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* data_match/ */ data_match;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_T_Filter_Metadata_Element_TM_lib_internal /* _L20=(TM_lib_internal::T_Filter_Metadata_Element#1)/ */ Context_T_Filter_Metadata_Element_1;
  outC_T_Filter_Metadata_Element_TM_lib_internal /* _L22=(TM_lib_internal::T_Filter_Metadata_Element#3)/ */ Context_T_Filter_Metadata_Element_3;
  outC_T_Decode_metadata_new_TM_lib_internal /* _L7=(TM_lib_internal::T_Decode_metadata_new#2)/ */ Context_T_Decode_metadata_new_2;
  outC_T_Decode_metadata_new_TM_lib_internal /* _L3=(TM_lib_internal::T_Decode_metadata_new#1)/ */ Context_T_Decode_metadata_new_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* _L1/ */ _L1;
  kcg_int64 /* _L2/ */ _L2;
  kcg_int64 /* _L6/ */ _L6;
  kcg_int64 /* _L4/ */ _L4;
  kcg_int64 /* _L3/ */ _L3;
  kcg_int64 /* _L10/ */ _L10;
  kcg_int64 /* _L8/ */ _L8;
  kcg_int64 /* _L7/ */ _L7;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L17/ */ _L17;
  kcg_bool /* _L18/ */ _L18;
  kcg_bool /* _L19/ */ _L19;
  kcg_bool /* _L20/ */ _L20;
  kcg_bool /* _L22/ */ _L22;
} outC_T_Filter_Metadata_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::T_Filter_Metadata/ */
extern void T_Filter_Metadata_TM_lib_internal(
  /* Metadata_from_track/ */
  kcg_int64 Metadata_from_track,
  /* Metadata_looked_for/ */
  kcg_int64 Metadata_looked_for,
  /* F_version/ */
  kcg_bool F_version,
  /* F_id/ */
  kcg_bool F_id,
  outC_T_Filter_Metadata_TM_lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void T_Filter_Metadata_reset_TM_lib_internal(
  outC_T_Filter_Metadata_TM_lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void T_Filter_Metadata_init_TM_lib_internal(
  outC_T_Filter_Metadata_TM_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _T_Filter_Metadata_TM_lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** T_Filter_Metadata_TM_lib_internal.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

