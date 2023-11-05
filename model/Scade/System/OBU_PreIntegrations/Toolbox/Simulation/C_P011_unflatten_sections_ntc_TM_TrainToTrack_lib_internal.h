/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef _C_P011_unflatten_sections_ntc_TM_TrainToTrack_lib_internal_H_
#define _C_P011_unflatten_sections_ntc_TM_TrainToTrack_lib_internal_H_

#include "kcg_types.h"
#include "C_P011_us_array_ntc_TM_TrainToTrack_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P011_ntc_list_TM_TrainToTrack /* sections/ */ sections;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_P011_us_array_ntc_TM_TrainToTrack_lib_internal /* _L9=(TM_TrainToTrack_lib_internal::C_P011_us_array_ntc#1)/ */ Context_C_P011_us_array_ntc_1[5];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P011_ntc_list_array_T_TM_TrainToTrack /* _L1/ */ _L1;
  array_int32_5 /* _L9/ */ _L9;
} outC_C_P011_unflatten_sections_ntc_TM_TrainToTrack_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_TrainToTrack_lib_internal::C_P011_unflatten_sections_ntc/ */
extern void C_P011_unflatten_sections_ntc_TM_TrainToTrack_lib_internal(
  /* P011/ */
  P011_ntc_list_array_T_TM_TrainToTrack *P011,
  outC_C_P011_unflatten_sections_ntc_TM_TrainToTrack_lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_P011_unflatten_sections_ntc_reset_TM_TrainToTrack_lib_internal(
  outC_C_P011_unflatten_sections_ntc_TM_TrainToTrack_lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_P011_unflatten_sections_ntc_init_TM_TrainToTrack_lib_internal(
  outC_C_P011_unflatten_sections_ntc_TM_TrainToTrack_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_P011_unflatten_sections_ntc_TM_TrainToTrack_lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P011_unflatten_sections_ntc_TM_TrainToTrack_lib_internal.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

