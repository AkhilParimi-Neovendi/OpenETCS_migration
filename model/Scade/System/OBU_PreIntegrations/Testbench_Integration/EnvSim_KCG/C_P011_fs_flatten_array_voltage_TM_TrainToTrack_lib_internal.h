/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _C_P011_fs_flatten_array_voltage_TM_TrainToTrack_lib_internal_H_
#define _C_P011_fs_flatten_array_voltage_TM_TrainToTrack_lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P011_voltage_sections_array_flat_t_TM_TrainToTrack /* flat/ */ flat;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P011_voltage_sections_array_flat_t_TM_TrainToTrack /* _L1/ */ _L1;
  kcg_int64 /* _L3/ */ _L3;
  kcg_int64 /* _L5/ */ _L5;
  kcg_int64 /* _L6/ */ _L6;
  P011_voltage_sections_array_flat_t_TM_TrainToTrack /* _L7/ */ _L7;
  kcg_int64 /* _L8/ */ _L8;
  P011_voltage_sectionlist_array_T_TM_TrainToTrack /* _L2/ */ _L2;
  kcg_int64 /* _L10/ */ _L10;
  kcg_int64 /* _L154/ */ _L154;
} outC_C_P011_fs_flatten_array_voltage_TM_TrainToTrack_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_TrainToTrack_lib_internal::C_P011_fs_flatten_array_voltage/ */
extern void C_P011_fs_flatten_array_voltage_TM_TrainToTrack_lib_internal(
  /* i/ */
  kcg_int64 i,
  /* Acc/ */
  P011_voltage_sections_array_flat_t_TM_TrainToTrack *Acc,
  /* section_arrays/ */
  P011_voltage_sectionlist_array_T_TM_TrainToTrack *section_arrays,
  outC_C_P011_fs_flatten_array_voltage_TM_TrainToTrack_lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_P011_fs_flatten_array_voltage_reset_TM_TrainToTrack_lib_internal(
  outC_C_P011_fs_flatten_array_voltage_TM_TrainToTrack_lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_P011_fs_flatten_array_voltage_init_TM_TrainToTrack_lib_internal(
  outC_C_P011_fs_flatten_array_voltage_TM_TrainToTrack_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_P011_fs_flatten_array_voltage_TM_TrainToTrack_lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P011_fs_flatten_array_voltage_TM_TrainToTrack_lib_internal.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

