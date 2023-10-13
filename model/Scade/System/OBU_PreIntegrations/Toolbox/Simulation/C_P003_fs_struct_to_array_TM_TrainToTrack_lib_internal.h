/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef _C_P003_fs_struct_to_array_TM_TrainToTrack_lib_internal_H_
#define _C_P003_fs_struct_to_array_TM_TrainToTrack_lib_internal_H_

#include "kcg_types.h"
#include "CAST_Int_to_NID_RADIO_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int64 /* section_arrays/ */ section_arrays;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_Int_to_NID_RADIO_TM_conversions /* _L13=(TM_conversions::CAST_Int_to_NID_RADIO#1)/ */ Context_CAST_Int_to_NID_RADIO_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  NID_RADIO /* _L1/ */ _L1;
  NID_RADIO /* _L13/ */ _L13;
} outC_C_P003_fs_struct_to_array_TM_TrainToTrack_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_TrainToTrack_lib_internal::C_P003_fs_struct_to_array/ */
extern void C_P003_fs_struct_to_array_TM_TrainToTrack_lib_internal(
  /* section/ */
  NID_RADIO section,
  outC_C_P003_fs_struct_to_array_TM_TrainToTrack_lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_P003_fs_struct_to_array_reset_TM_TrainToTrack_lib_internal(
  outC_C_P003_fs_struct_to_array_TM_TrainToTrack_lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_P003_fs_struct_to_array_init_TM_TrainToTrack_lib_internal(
  outC_C_P003_fs_struct_to_array_TM_TrainToTrack_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_P003_fs_struct_to_array_TM_TrainToTrack_lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P003_fs_struct_to_array_TM_TrainToTrack_lib_internal.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

