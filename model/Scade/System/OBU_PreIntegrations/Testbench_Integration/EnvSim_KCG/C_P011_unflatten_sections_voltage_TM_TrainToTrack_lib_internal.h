/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _C_P011_unflatten_sections_voltage_TM_TrainToTrack_lib_internal_H_
#define _C_P011_unflatten_sections_voltage_TM_TrainToTrack_lib_internal_H_

#include "kcg_types.h"
#include "C_P011_us_array_voltage_TM_TrainToTrack_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P011_voltage_list_TM_TrainToTrack /* sections/ */ sections;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_P011_us_array_voltage_TM_TrainToTrack_lib_internal /* _L7=(TM_TrainToTrack_lib_internal::C_P011_us_array_voltage#1)/ */ Context_C_P011_us_array_voltage_1[4];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P011_voltage_sections_array_flat_t_TM_TrainToTrack /* _L1/ */ _L1;
  array_int32_8_4 /* _L6/ */ _L6;
  _12_array /* _L9/ */ _L9;
  kcg_int32 /* _L7/ */ _L7;
  kcg_bool /* _L13/ */ _L13;
  kcg_int32 /* _L14/ */ _L14;
  array_int32_4 /* _L15/ */ _L15;
} outC_C_P011_unflatten_sections_voltage_TM_TrainToTrack_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_TrainToTrack_lib_internal::C_P011_unflatten_sections_voltage/ */
extern void C_P011_unflatten_sections_voltage_TM_TrainToTrack_lib_internal(
  /* P011/ */
  P011_voltage_sections_array_flat_t_TM_TrainToTrack *P011,
  outC_C_P011_unflatten_sections_voltage_TM_TrainToTrack_lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_P011_unflatten_sections_voltage_reset_TM_TrainToTrack_lib_internal(
  outC_C_P011_unflatten_sections_voltage_TM_TrainToTrack_lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_P011_unflatten_sections_voltage_init_TM_TrainToTrack_lib_internal(
  outC_C_P011_unflatten_sections_voltage_TM_TrainToTrack_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_P011_unflatten_sections_voltage_TM_TrainToTrack_lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P011_unflatten_sections_voltage_TM_TrainToTrack_lib_internal.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

