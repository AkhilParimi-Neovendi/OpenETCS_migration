/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef _C_P003_flatten_sections_TM_TrainToTrack_lib_internal_H_
#define _C_P003_flatten_sections_TM_TrainToTrack_lib_internal_H_

#include "kcg_types.h"
#include "C_P003_fs_struct_to_array_TM_TrainToTrack_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P003_nid_radio_list_int_t_TM_TrainToTrack /* Flattened/ */ Flattened;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_P003_fs_struct_to_array_TM_TrainToTrack_lib_internal /* _L74=(TM_TrainToTrack_lib_internal::C_P003_fs_struct_to_array#1)/ */ Context_C_P003_fs_struct_to_array_1[5];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P003_nid_radio_list_t_TM_TrainToTrack /* _L75/ */ _L75;
  array_int64_5 /* _L74/ */ _L74;
} outC_C_P003_flatten_sections_TM_TrainToTrack_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_TrainToTrack_lib_internal::C_P003_flatten_sections/ */
extern void C_P003_flatten_sections_TM_TrainToTrack_lib_internal(
  /* MergedSections/ */
  P003_nid_radio_list_t_TM_TrainToTrack *MergedSections,
  outC_C_P003_flatten_sections_TM_TrainToTrack_lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_P003_flatten_sections_reset_TM_TrainToTrack_lib_internal(
  outC_C_P003_flatten_sections_TM_TrainToTrack_lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_P003_flatten_sections_init_TM_TrainToTrack_lib_internal(
  outC_C_P003_flatten_sections_TM_TrainToTrack_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_P003_flatten_sections_TM_TrainToTrack_lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P003_flatten_sections_TM_TrainToTrack_lib_internal.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

