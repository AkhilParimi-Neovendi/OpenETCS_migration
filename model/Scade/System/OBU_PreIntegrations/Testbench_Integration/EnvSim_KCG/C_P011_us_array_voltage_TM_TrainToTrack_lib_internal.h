/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _C_P011_us_array_voltage_TM_TrainToTrack_lib_internal_H_
#define _C_P011_us_array_voltage_TM_TrainToTrack_lib_internal_H_

#include "kcg_types.h"
#include "CAST_Int_to_M_VOLTAGE_TM_conversions.h"
#include "CAST_Int_to_NID_CTRACTION_TM_conversions.h"
#include "C_P011_extract_el_section_voltage_TM_TrainToTrack_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* cont/ */ cont;
  P011_voltage_TM_TrainToTrack /* sections/ */ sections;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_Int_to_NID_CTRACTION_TM_conversions /* _L25=(TM_conversions::CAST_Int_to_NID_CTRACTION#1)/ */ Context_CAST_Int_to_NID_CTRACTION_1;
  outC_C_P011_extract_el_section_voltage_TM_TrainToTrack_lib_internal /* _L15=(TM_TrainToTrack_lib_internal::C_P011_extract_el_section_voltage#1)/ */ Context_C_P011_extract_el_section_voltage_1;
  outC_CAST_Int_to_M_VOLTAGE_TM_conversions /* _L28=(TM_conversions::CAST_Int_to_M_VOLTAGE#1)/ */ Context_CAST_Int_to_M_VOLTAGE_1;
  outC_C_P011_extract_el_section_voltage_TM_TrainToTrack_lib_internal /* _L19=(TM_TrainToTrack_lib_internal::C_P011_extract_el_section_voltage#2)/ */ Context_C_P011_extract_el_section_voltage_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P011_voltage_sections_array_flat_t_TM_TrainToTrack /* _L1/ */ _L1;
  kcg_int32 /* _L3/ */ _L3;
  P011_voltage_TM_TrainToTrack /* _L4/ */ _L4;
  kcg_int32 /* _L5/ */ _L5;
  kcg_int32 /* _L15/ */ _L15;
  kcg_int32 /* _L16/ */ _L16;
  kcg_int32 /* _L18/ */ _L18;
  kcg_int32 /* _L19/ */ _L19;
  NID_CTRACTION /* _L25/ */ _L25;
  M_VOLTAGE /* _L28/ */ _L28;
  kcg_bool /* _L33/ */ _L33;
} outC_C_P011_us_array_voltage_TM_TrainToTrack_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_TrainToTrack_lib_internal::C_P011_us_array_voltage/ */
extern void C_P011_us_array_voltage_TM_TrainToTrack_lib_internal(
  /* i/ */
  kcg_int32 i,
  /* n_iter_int/ */
  kcg_int32 n_iter_int,
  /* flat/ */
  P011_voltage_sections_array_flat_t_TM_TrainToTrack *flat,
  outC_C_P011_us_array_voltage_TM_TrainToTrack_lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_P011_us_array_voltage_reset_TM_TrainToTrack_lib_internal(
  outC_C_P011_us_array_voltage_TM_TrainToTrack_lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_P011_us_array_voltage_init_TM_TrainToTrack_lib_internal(
  outC_C_P011_us_array_voltage_TM_TrainToTrack_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_P011_us_array_voltage_TM_TrainToTrack_lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P011_us_array_voltage_TM_TrainToTrack_lib_internal.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

