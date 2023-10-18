/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P080_extract_el_section_TM_lib_internal.h"

/* TM_lib_internal::C_P080_extract_el_section/ */
void C_P080_extract_el_section_TM_lib_internal(
  /* offset/ */
  kcg_int64 offset,
  /* flat/ */
  P080_sections_array_flat_T_TM *flat,
  /* modulo/ */
  kcg_int64 modulo,
  outC_C_P080_extract_el_section_TM_lib_internal *outC)
{
  outC->_L3 = modulo;
  outC->_L1 = offset;
  outC->_L5 = outC->_L1 + outC->_L3;
  kcg_copy_P080_sections_array_flat_T_TM(&outC->_L2, flat);
  if ((kcg_lit_int64(0) <= outC->_L5) & (outC->_L5 < kcg_lit_int64(198))) {
    outC->_L6 = outC->_L2[outC->_L5];
  }
  else {
    outC->_L6 = kcg_lit_int64(0);
  }
  outC->element = outC->_L6;
}

#ifndef KCG_USER_DEFINED_INIT
void C_P080_extract_el_section_init_TM_lib_internal(
  outC_C_P080_extract_el_section_TM_lib_internal *outC)
{
  static kcg_size idx;

  outC->_L6 = kcg_lit_int64(0);
  outC->_L5 = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  for (idx = 0; idx < 198; idx++) {
    outC->_L2[idx] = kcg_lit_int64(0);
  }
  outC->_L1 = kcg_lit_int64(0);
  outC->element = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P080_extract_el_section_reset_TM_lib_internal(
  outC_C_P080_extract_el_section_TM_lib_internal *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P080_extract_el_section_TM_lib_internal.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

