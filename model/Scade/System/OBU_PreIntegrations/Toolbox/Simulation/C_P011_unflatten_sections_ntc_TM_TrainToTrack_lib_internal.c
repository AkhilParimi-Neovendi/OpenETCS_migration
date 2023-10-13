/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P011_unflatten_sections_ntc_TM_TrainToTrack_lib_internal.h"

/* TM_TrainToTrack_lib_internal::C_P011_unflatten_sections_ntc/ */
void C_P011_unflatten_sections_ntc_TM_TrainToTrack_lib_internal(
  /* P011/ */
  P011_ntc_list_array_T_TM_TrainToTrack *P011,
  outC_C_P011_unflatten_sections_ntc_TM_TrainToTrack_lib_internal *outC)
{
  kcg_size idx;

  kcg_copy_P011_ntc_list_array_T_TM_TrainToTrack(&outC->_L1, P011);
  /* _L9= */
  for (idx = 0; idx < 5; idx++) {
    /* _L9=(TM_TrainToTrack_lib_internal::C_P011_us_array_ntc#1)/ */
    C_P011_us_array_ntc_TM_TrainToTrack_lib_internal(
      outC->_L1[idx],
      &outC->Context_C_P011_us_array_ntc_1[idx]);
    outC->_L9[idx] = outC->Context_C_P011_us_array_ntc_1[idx].sections;
  }
  kcg_copy_P011_ntc_list_TM_TrainToTrack(&outC->sections, &outC->_L9);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P011_unflatten_sections_ntc_init_TM_TrainToTrack_lib_internal(
  outC_C_P011_unflatten_sections_ntc_TM_TrainToTrack_lib_internal *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;

  for (idx1 = 0; idx1 < 5; idx1++) {
    outC->_L9[idx1] = kcg_lit_int64(0);
  }
  for (idx2 = 0; idx2 < 5; idx2++) {
    outC->_L1[idx2] = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->sections[idx3] = kcg_lit_int64(0);
  }
  for (idx = 0; idx < 5; idx++) {
    /* _L9=(TM_TrainToTrack_lib_internal::C_P011_us_array_ntc#1)/ */
    C_P011_us_array_ntc_init_TM_TrainToTrack_lib_internal(
      &outC->Context_C_P011_us_array_ntc_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P011_unflatten_sections_ntc_reset_TM_TrainToTrack_lib_internal(
  outC_C_P011_unflatten_sections_ntc_TM_TrainToTrack_lib_internal *outC)
{
  kcg_size idx;

  for (idx = 0; idx < 5; idx++) {
    /* _L9=(TM_TrainToTrack_lib_internal::C_P011_us_array_ntc#1)/ */
    C_P011_us_array_ntc_reset_TM_TrainToTrack_lib_internal(
      &outC->Context_C_P011_us_array_ntc_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P011_unflatten_sections_ntc_TM_TrainToTrack_lib_internal.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

