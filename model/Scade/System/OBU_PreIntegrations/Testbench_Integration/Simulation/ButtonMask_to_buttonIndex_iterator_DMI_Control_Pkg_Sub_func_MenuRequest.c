/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ButtonMask_to_buttonIndex_iterator_DMI_Control_Pkg_Sub_func_MenuRequest.h"

/* DMI_Control_Pkg::Sub_func::MenuRequest::ButtonMask_to_buttonIndex_iterator/ */
void ButtonMask_to_buttonIndex_iterator_DMI_Control_Pkg_Sub_func_MenuRequest(
  /* valuein/ */
  kcg_bool valuein,
  outC_ButtonMask_to_buttonIndex_iterator_DMI_Control_Pkg_Sub_func_MenuRequest *outC)
{
  outC->_L5 = kcg_lit_int32(2);
  outC->_L3 = kcg_lit_int32(1);
  outC->_L2 = valuein;
  /* _L4= */
  if (outC->_L2) {
    outC->_L4 = outC->_L3;
  }
  else {
    outC->_L4 = outC->_L5;
  }
  outC->valueout = outC->_L4;
}

#ifndef KCG_USER_DEFINED_INIT
void ButtonMask_to_buttonIndex_iterator_init_DMI_Control_Pkg_Sub_func_MenuRequest(
  outC_ButtonMask_to_buttonIndex_iterator_DMI_Control_Pkg_Sub_func_MenuRequest *outC)
{
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L2 = kcg_true;
  outC->valueout = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ButtonMask_to_buttonIndex_iterator_reset_DMI_Control_Pkg_Sub_func_MenuRequest(
  outC_ButtonMask_to_buttonIndex_iterator_DMI_Control_Pkg_Sub_func_MenuRequest *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ButtonMask_to_buttonIndex_iterator_DMI_Control_Pkg_Sub_func_MenuRequest.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

