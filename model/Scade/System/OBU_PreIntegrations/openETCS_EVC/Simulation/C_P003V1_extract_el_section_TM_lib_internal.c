/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P003V1_extract_el_section_TM_lib_internal.h"

/* TM_lib_internal::C_P003V1_extract_el_section/ */
void C_P003V1_extract_el_section_TM_lib_internal(
  /* offset/ */
  kcg_int32 offset,
  /* flat/ */
  P003V1_OBU_sectionlist_int_T_TM_baseline2 *flat,
  outC_C_P003V1_extract_el_section_TM_lib_internal *outC)
{
  outC->_L1 = offset;
  kcg_copy_P003V1_OBU_sectionlist_int_T_TM_baseline2(&outC->_L2, flat);
  if ((kcg_lit_int32(0) <= outC->_L1) & (outC->_L1 < kcg_lit_int32(32))) {
    outC->_L6 = outC->_L2[outC->_L1];
  }
  else {
    outC->_L6 = kcg_lit_int32(0);
  }
  outC->element = outC->_L6;
}

#ifndef KCG_USER_DEFINED_INIT
void C_P003V1_extract_el_section_init_TM_lib_internal(
  outC_C_P003V1_extract_el_section_TM_lib_internal *outC)
{
  kcg_size idx;

  outC->_L6 = kcg_lit_int32(0);
  for (idx = 0; idx < 32; idx++) {
    outC->_L2[idx] = kcg_lit_int32(0);
  }
  outC->_L1 = kcg_lit_int32(0);
  outC->element = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P003V1_extract_el_section_reset_TM_lib_internal(
  outC_C_P003V1_extract_el_section_TM_lib_internal *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P003V1_extract_el_section_TM_lib_internal.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

