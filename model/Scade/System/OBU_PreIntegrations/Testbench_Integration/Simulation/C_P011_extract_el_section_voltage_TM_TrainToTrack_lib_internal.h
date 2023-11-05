/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _C_P011_extract_el_section_voltage_TM_TrainToTrack_lib_internal_H_
#define _C_P011_extract_el_section_voltage_TM_TrainToTrack_lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* element/ */ element;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L1/ */ _L1;
  P011_voltage_sections_array_flat_t_TM_TrainToTrack /* _L2/ */ _L2;
  kcg_int32 /* _L3/ */ _L3;
  kcg_int32 /* _L5/ */ _L5;
  kcg_int32 /* _L6/ */ _L6;
} outC_C_P011_extract_el_section_voltage_TM_TrainToTrack_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_TrainToTrack_lib_internal::C_P011_extract_el_section_voltage/ */
extern void C_P011_extract_el_section_voltage_TM_TrainToTrack_lib_internal(
  /* offset/ */
  kcg_int32 offset,
  /* flat/ */
  P011_voltage_sections_array_flat_t_TM_TrainToTrack *flat,
  /* modulo/ */
  kcg_int32 modulo,
  outC_C_P011_extract_el_section_voltage_TM_TrainToTrack_lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_P011_extract_el_section_voltage_reset_TM_TrainToTrack_lib_internal(
  outC_C_P011_extract_el_section_voltage_TM_TrainToTrack_lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_P011_extract_el_section_voltage_init_TM_TrainToTrack_lib_internal(
  outC_C_P011_extract_el_section_voltage_TM_TrainToTrack_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_P011_extract_el_section_voltage_TM_TrainToTrack_lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P011_extract_el_section_voltage_TM_TrainToTrack_lib_internal.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

