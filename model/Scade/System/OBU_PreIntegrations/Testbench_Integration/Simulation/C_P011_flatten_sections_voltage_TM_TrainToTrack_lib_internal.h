/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _C_P011_flatten_sections_voltage_TM_TrainToTrack_lib_internal_H_
#define _C_P011_flatten_sections_voltage_TM_TrainToTrack_lib_internal_H_

#include "kcg_types.h"
#include "C_P011_fs_struct_to_array_voltage_TM_TrainToTrack_lib_internal.h"
#include "C_P011_fs_flatten_array_voltage_TM_TrainToTrack_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P011_voltage_sections_array_flat_t_TM_TrainToTrack /* Flattened/ */ Flattened;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_P011_fs_flatten_array_voltage_TM_TrainToTrack_lib_internal /* _L78=(TM_TrainToTrack_lib_internal::C_P011_fs_flatten_array_voltage#1)/ */ Context_C_P011_fs_flatten_array_voltage_1[8];
  outC_C_P011_fs_struct_to_array_voltage_TM_TrainToTrack_lib_internal /* _L74=(TM_TrainToTrack_lib_internal::C_P011_fs_struct_to_array_voltage#1)/ */ Context_C_P011_fs_struct_to_array_voltage_1[4];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P011_voltage_sections_array_flat_t_TM_TrainToTrack /* _L76/ */ _L76;
  P011_voltage_list_TM_TrainToTrack /* _L75/ */ _L75;
  P011_voltage_sectionlist_array_T_TM_TrainToTrack /* _L74/ */ _L74;
  P011_voltage_sections_array_flat_t_TM_TrainToTrack /* _L78/ */ _L78;
  array_int32_2_4_8 /* _L80/ */ _L80;
} outC_C_P011_flatten_sections_voltage_TM_TrainToTrack_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_TrainToTrack_lib_internal::C_P011_flatten_sections_voltage/ */
extern void C_P011_flatten_sections_voltage_TM_TrainToTrack_lib_internal(
  /* MergedSections/ */
  P011_voltage_list_TM_TrainToTrack *MergedSections,
  outC_C_P011_flatten_sections_voltage_TM_TrainToTrack_lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_P011_flatten_sections_voltage_reset_TM_TrainToTrack_lib_internal(
  outC_C_P011_flatten_sections_voltage_TM_TrainToTrack_lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_P011_flatten_sections_voltage_init_TM_TrainToTrack_lib_internal(
  outC_C_P011_flatten_sections_voltage_TM_TrainToTrack_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_P011_flatten_sections_voltage_TM_TrainToTrack_lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P011_flatten_sections_voltage_TM_TrainToTrack_lib_internal.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

