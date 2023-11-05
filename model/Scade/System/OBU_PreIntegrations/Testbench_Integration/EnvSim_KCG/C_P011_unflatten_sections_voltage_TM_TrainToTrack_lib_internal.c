/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P011_unflatten_sections_voltage_TM_TrainToTrack_lib_internal.h"

/* TM_TrainToTrack_lib_internal::C_P011_unflatten_sections_voltage/ */
void C_P011_unflatten_sections_voltage_TM_TrainToTrack_lib_internal(
  /* P011/ */
  P011_voltage_sections_array_flat_t_TM_TrainToTrack *P011,
  outC_C_P011_unflatten_sections_voltage_TM_TrainToTrack_lib_internal *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_int32 noname;

  outC->_L14 = DIM_voltage_list_TM_TrainToTrack;
  /* _L15/ */
  for (idx = 0; idx < 4; idx++) {
    outC->_L15[idx] = outC->_L14;
  }
  outC->_L13 = kcg_true;
  kcg_copy_P011_voltage_sections_array_flat_t_TM_TrainToTrack(&outC->_L1, P011);
  /* _L6/ */
  for (idx1 = 0; idx1 < 4; idx1++) {
    kcg_copy_P011_voltage_sections_array_flat_t_TM_TrainToTrack(
      &outC->_L6[idx1],
      &outC->_L1);
  }
  /* _L7= */
  if (outC->_L13) {
    /* _L7= */
    for (idx2 = 0; idx2 < 4; idx2++) {
      /* _L7=(TM_TrainToTrack_lib_internal::C_P011_us_array_voltage#1)/ */
      C_P011_us_array_voltage_TM_TrainToTrack_lib_internal(
        /* _L7= */(kcg_int32) idx2,
        outC->_L15[idx2],
        &outC->_L6[idx2],
        &outC->Context_C_P011_us_array_voltage_1[idx2]);
      kcg_copy_P011_voltage_TM_TrainToTrack(
        &outC->_L9[idx2],
        &outC->Context_C_P011_us_array_voltage_1[idx2].sections);
      outC->_L7 = /* _L7= */(kcg_int32) (idx2 + 1);
      /* _L7= */
      if (!outC->Context_C_P011_us_array_voltage_1[idx2].cont) {
        break;
      }
    }
  }
  else {
    outC->_L7 = kcg_lit_int32(0);
  }
#ifdef KCG_MAPW_CPY

  /* _L7= */
  for (idx2 = /* _L7= */(kcg_size) outC->_L7; idx2 < 4; idx2++) {
    kcg_copy_P011_voltage_TM_TrainToTrack(
      &outC->_L9[idx2],
      (P011_voltage_TM_TrainToTrack *) &DEFAULT_P011_voltage_section_TM_TrainToTrack);
  }
#endif /* KCG_MAPW_CPY */

  noname = outC->_L7;
  kcg_copy_P011_voltage_list_TM_TrainToTrack(&outC->sections, &outC->_L9);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P011_unflatten_sections_voltage_init_TM_TrainToTrack_lib_internal(
  outC_C_P011_unflatten_sections_voltage_TM_TrainToTrack_lib_internal *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;

  for (idx1 = 0; idx1 < 4; idx1++) {
    outC->_L15[idx1] = kcg_lit_int32(0);
  }
  outC->_L14 = kcg_lit_int32(0);
  outC->_L13 = kcg_true;
  outC->_L7 = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 4; idx2++) {
    outC->_L9[idx2].m_voltage = M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L9[idx2].nid_ctraction = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 4; idx4++) {
    for (idx3 = 0; idx3 < 8; idx3++) {
      outC->_L6[idx4][idx3] = kcg_lit_int32(0);
    }
  }
  for (idx5 = 0; idx5 < 8; idx5++) {
    outC->_L1[idx5] = kcg_lit_int32(0);
  }
  for (idx6 = 0; idx6 < 4; idx6++) {
    outC->sections[idx6].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->sections[idx6].nid_ctraction = kcg_lit_int32(0);
  }
  for (idx = 0; idx < 4; idx++) {
    /* _L7=(TM_TrainToTrack_lib_internal::C_P011_us_array_voltage#1)/ */
    C_P011_us_array_voltage_init_TM_TrainToTrack_lib_internal(
      &outC->Context_C_P011_us_array_voltage_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P011_unflatten_sections_voltage_reset_TM_TrainToTrack_lib_internal(
  outC_C_P011_unflatten_sections_voltage_TM_TrainToTrack_lib_internal *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 4; idx++) {
    /* _L7=(TM_TrainToTrack_lib_internal::C_P011_us_array_voltage#1)/ */
    C_P011_us_array_voltage_reset_TM_TrainToTrack_lib_internal(
      &outC->Context_C_P011_us_array_voltage_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P011_unflatten_sections_voltage_TM_TrainToTrack_lib_internal.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

