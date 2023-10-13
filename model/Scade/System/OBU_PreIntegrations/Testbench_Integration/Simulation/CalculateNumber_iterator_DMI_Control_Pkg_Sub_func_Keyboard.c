/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalculateNumber_iterator_DMI_Control_Pkg_Sub_func_Keyboard.h"

/* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber_iterator/ */
void CalculateNumber_iterator_DMI_Control_Pkg_Sub_func_Keyboard(
  /* acc/ */
  kcg_int64 acc,
  /* in_arraykey/ */
  kcg_bool in_arraykey,
  outC_CalculateNumber_iterator_DMI_Control_Pkg_Sub_func_Keyboard *outC)
{
  outC->_L3 = in_arraykey;
  outC->_L7 = !outC->_L3;
  outC->condition = outC->_L7;
  outC->_L2 = acc;
  outC->out_acc = outC->_L2;
}

#ifndef KCG_USER_DEFINED_INIT
void CalculateNumber_iterator_init_DMI_Control_Pkg_Sub_func_Keyboard(
  outC_CalculateNumber_iterator_DMI_Control_Pkg_Sub_func_Keyboard *outC)
{
  outC->_L7 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L2 = kcg_lit_int64(0);
  outC->out_acc = kcg_lit_int64(0);
  outC->condition = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CalculateNumber_iterator_reset_DMI_Control_Pkg_Sub_func_Keyboard(
  outC_CalculateNumber_iterator_DMI_Control_Pkg_Sub_func_Keyboard *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CalculateNumber_iterator_DMI_Control_Pkg_Sub_func_Keyboard.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

