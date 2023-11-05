/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FindIndexEmptyLoc_iterator_DMI_Control_Pkg_Utils.h"

/* DMI_Control_Pkg::Utils::FindIndexEmptyLoc_iterator/ */
void FindIndexEmptyLoc_iterator_DMI_Control_Pkg_Utils(
  /* index/ */
  kcg_int32 index,
  /* Acc/ */
  kcg_bool Acc,
  /* in_digit_display/ */
  kcg_int32 in_digit_display,
  outC_FindIndexEmptyLoc_iterator_DMI_Control_Pkg_Utils *outC)
{
  outC->_L30 = ASCII_space_DMI_Control_Pkg;
  outC->_L22 = MAXTextLength_DMI_Control_Pkg - kcg_lit_int32(1);
  outC->_L19 = index;
  outC->_L21 = outC->_L19 == outC->_L22;
  outC->_L1 = in_digit_display;
  outC->_L3 = outC->_L1 == outC->_L30;
  outC->_L7 = !outC->_L3;
  outC->_L29 = outC->_L7 & outC->_L21;
  outC->_L17 = Acc;
  outC->_L25 = outC->_L17 | outC->_L29;
  outC->accout = outC->_L25;
  outC->condition = outC->_L7;
}

#ifndef KCG_USER_DEFINED_INIT
void FindIndexEmptyLoc_iterator_init_DMI_Control_Pkg_Utils(
  outC_FindIndexEmptyLoc_iterator_DMI_Control_Pkg_Utils *outC)
{
  outC->_L30 = kcg_lit_int32(0);
  outC->_L29 = kcg_true;
  outC->_L25 = kcg_true;
  outC->_L22 = kcg_lit_int32(0);
  outC->_L21 = kcg_true;
  outC->_L17 = kcg_true;
  outC->_L19 = kcg_lit_int32(0);
  outC->_L3 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L1 = kcg_lit_int32(0);
  outC->accout = kcg_true;
  outC->condition = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void FindIndexEmptyLoc_iterator_reset_DMI_Control_Pkg_Utils(
  outC_FindIndexEmptyLoc_iterator_DMI_Control_Pkg_Utils *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** FindIndexEmptyLoc_iterator_DMI_Control_Pkg_Utils.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

