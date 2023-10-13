/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P011_extract_el_section_TM_TrainToTrack_lib_internal.h"

/* TM_TrainToTrack_lib_internal::C_P011_extract_el_section_voltage/ */
void C_P011_extract_el_section_TM_TrainToTrack_lib_internal(
  /* offset/ */
  kcg_int64 offset,
  /* flat/ */
  P011_voltage_sections_array_flat_t_TM_TrainToTrack *flat,
  /* modulo/ */
  kcg_int64 modulo,
  outC_C_P011_extract_el_section_TM_TrainToTrack_lib_internal *outC)
{
  outC->_L3 = modulo;
  outC->_L1 = offset;
  outC->_L5 = outC->_L1 + outC->_L3;
  kcg_copy_P011_voltage_sections_array_flat_t_TM_TrainToTrack(&outC->_L2, flat);
  if ((kcg_lit_int64(0) <= outC->_L5) & (outC->_L5 < kcg_lit_int64(8))) {
    outC->_L6 = outC->_L2[outC->_L5];
  }
  else {
    outC->_L6 = kcg_lit_int64(0);
  }
  outC->element = outC->_L6;
}

#ifndef KCG_USER_DEFINED_INIT
void C_P011_extract_el_section_init_TM_TrainToTrack_lib_internal(
  outC_C_P011_extract_el_section_TM_TrainToTrack_lib_internal *outC)
{
  kcg_size idx;

  outC->_L6 = kcg_lit_int64(0);
  outC->_L5 = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  for (idx = 0; idx < 8; idx++) {
    outC->_L2[idx] = kcg_lit_int64(0);
  }
  outC->_L1 = kcg_lit_int64(0);
  outC->element = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P011_extract_el_section_reset_TM_TrainToTrack_lib_internal(
  outC_C_P011_extract_el_section_TM_TrainToTrack_lib_internal *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P011_extract_el_section_TM_TrainToTrack_lib_internal.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

