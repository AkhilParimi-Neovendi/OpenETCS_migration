/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "T_Filter_Metadata_Element_TM_lib_internal.h"

/* TM_lib_internal::T_Filter_Metadata_Element/ */
void T_Filter_Metadata_Element_TM_lib_internal(
  /* value2/ */
  kcg_int32 value2,
  /* value1/ */
  kcg_int32 value1,
  /* do_filter/ */
  kcg_bool do_filter,
  outC_T_Filter_Metadata_Element_TM_lib_internal *outC)
{
  outC->_L2 = do_filter;
  outC->_L6 = !outC->_L2;
  outC->_L1 = value2;
  outC->_L5 = value1;
  outC->_L4 = outC->_L5 == outC->_L1;
  outC->_L3 = outC->_L4 | outC->_L6;
  outC->data_match = outC->_L3;
}

#ifndef KCG_USER_DEFINED_INIT
void T_Filter_Metadata_Element_init_TM_lib_internal(
  outC_T_Filter_Metadata_Element_TM_lib_internal *outC)
{
  outC->_L1 = kcg_lit_int32(0);
  outC->_L2 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L5 = kcg_lit_int32(0);
  outC->_L6 = kcg_true;
  outC->data_match = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void T_Filter_Metadata_Element_reset_TM_lib_internal(
  outC_T_Filter_Metadata_Element_TM_lib_internal *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** T_Filter_Metadata_Element_TM_lib_internal.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

