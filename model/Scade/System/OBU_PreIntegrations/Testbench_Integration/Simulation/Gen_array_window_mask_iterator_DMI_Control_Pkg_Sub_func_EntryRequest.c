/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Gen_array_window_mask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest.h"

/* DMI_Control_Pkg::Sub_func::EntryRequest::Gen_array_window_mask_iterator/ */
void Gen_array_window_mask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest(
  /* index/ */
  kcg_int32 index,
  /* position/ */
  kcg_int32 position,
  outC_Gen_array_window_mask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest *outC)
{
  outC->_L6 = kcg_false;
  outC->_L5 = kcg_true;
  outC->_L2 = position;
  outC->_L1 = index;
  outC->_L3 = outC->_L1 == outC->_L2;
  /* _L4= */
  if (outC->_L3) {
    outC->_L4 = outC->_L5;
  }
  else {
    outC->_L4 = outC->_L6;
  }
  outC->Output = outC->_L4;
}

#ifndef KCG_USER_DEFINED_INIT
void Gen_array_window_mask_iterator_init_DMI_Control_Pkg_Sub_func_EntryRequest(
  outC_Gen_array_window_mask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest *outC)
{
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L2 = kcg_lit_int32(0);
  outC->_L1 = kcg_lit_int32(0);
  outC->Output = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Gen_array_window_mask_iterator_reset_DMI_Control_Pkg_Sub_func_EntryRequest(
  outC_Gen_array_window_mask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Gen_array_window_mask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

