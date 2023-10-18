/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _C_P011_fs_struct_to_array_ntc_TM_TrainToTrack_lib_internal_H_
#define _C_P011_fs_struct_to_array_ntc_TM_TrainToTrack_lib_internal_H_

#include "kcg_types.h"
#include "CAST_NID_NTC_to_int_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int64 /* section_arrays/ */ section_arrays;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_NID_NTC_to_int_TM_conversions /* _L13=(TM_conversions::CAST_NID_NTC_to_int#1)/ */ Context_CAST_NID_NTC_to_int_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  NID_NTC /* _L1/ */ _L1;
  kcg_int64 /* _L13/ */ _L13;
} outC_C_P011_fs_struct_to_array_ntc_TM_TrainToTrack_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_TrainToTrack_lib_internal::C_P011_fs_struct_to_array_ntc/ */
extern void C_P011_fs_struct_to_array_ntc_TM_TrainToTrack_lib_internal(
  /* section/ */
  NID_NTC section,
  outC_C_P011_fs_struct_to_array_ntc_TM_TrainToTrack_lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_P011_fs_struct_to_array_ntc_reset_TM_TrainToTrack_lib_internal(
  outC_C_P011_fs_struct_to_array_ntc_TM_TrainToTrack_lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_P011_fs_struct_to_array_ntc_init_TM_TrainToTrack_lib_internal(
  outC_C_P011_fs_struct_to_array_ntc_TM_TrainToTrack_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_P011_fs_struct_to_array_ntc_TM_TrainToTrack_lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P011_fs_struct_to_array_ntc_TM_TrainToTrack_lib_internal.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

