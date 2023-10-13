/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_L_REVERSEAREA_TM_conversions.h"

/* TM_conversions::CAST_Int_to_L_REVERSEAREA/ */
void CAST_Int_to_L_REVERSEAREA_TM_conversions(
  /* l_reversearea_int/ */
  kcg_int64 l_reversearea_int,
  outC_CAST_Int_to_L_REVERSEAREA_TM_conversions *outC)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;

  outC->_L1 = l_reversearea_int;
  outC->l_reversearea = outC->_L1;
  outC->_L11 = DIM_L_min_TM_conversions;
  outC->_L10 = DIM_L_max_TM_conversions;
  outC->_L9 = outC->_L1 > outC->_L10;
  outC->_L8 = outC->_L1 < outC->_L11;
  _1_noname = outC->_L8;
  noname = outC->_L9;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_Int_to_L_REVERSEAREA_init_TM_conversions(
  outC_CAST_Int_to_L_REVERSEAREA_TM_conversions *outC)
{
  outC->_L11 = kcg_lit_int64(0);
  outC->_L10 = kcg_lit_int64(0);
  outC->_L8 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L1 = kcg_lit_int64(0);
  outC->l_reversearea = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Int_to_L_REVERSEAREA_reset_TM_conversions(
  outC_CAST_Int_to_L_REVERSEAREA_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Int_to_L_REVERSEAREA_TM_conversions.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

