/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _C_P011_fs_struct_to_array_TM_TrainToTrack_lib_internal_H_
#define _C_P011_fs_struct_to_array_TM_TrainToTrack_lib_internal_H_

#include "kcg_types.h"
#include "CAST_NID_CTRACTION_to_int_TM_conversions.h"
#include "CAST_M_VOLTAGE_to_int_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P011_voltage_section_array_T_TM_TrainToTrack /* section_arrays/ */ section_arrays;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_M_VOLTAGE_to_int_TM_conversions /* _L13=(TM_conversions::CAST_M_VOLTAGE_to_int#1)/ */ Context_CAST_M_VOLTAGE_to_int_1;
  outC_CAST_NID_CTRACTION_to_int_TM_conversions /* _L14=(TM_conversions::CAST_NID_CTRACTION_to_int#1)/ */ Context_CAST_NID_CTRACTION_to_int_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P011_voltage_TM_TrainToTrack /* _L1/ */ _L1;
  array_int32_2 /* _L2/ */ _L2;
  NID_CTRACTION /* _L4/ */ _L4;
  M_VOLTAGE /* _L3/ */ _L3;
  kcg_int32 /* _L13/ */ _L13;
  kcg_int32 /* _L14/ */ _L14;
} outC_C_P011_fs_struct_to_array_TM_TrainToTrack_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_TrainToTrack_lib_internal::C_P011_fs_struct_to_array_voltage/ */
extern void C_P011_fs_struct_to_array_TM_TrainToTrack_lib_internal(
  /* section/ */
  P011_voltage_TM_TrainToTrack *section,
  outC_C_P011_fs_struct_to_array_TM_TrainToTrack_lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_P011_fs_struct_to_array_reset_TM_TrainToTrack_lib_internal(
  outC_C_P011_fs_struct_to_array_TM_TrainToTrack_lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_P011_fs_struct_to_array_init_TM_TrainToTrack_lib_internal(
  outC_C_P011_fs_struct_to_array_TM_TrainToTrack_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_P011_fs_struct_to_array_TM_TrainToTrack_lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P011_fs_struct_to_array_TM_TrainToTrack_lib_internal.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

