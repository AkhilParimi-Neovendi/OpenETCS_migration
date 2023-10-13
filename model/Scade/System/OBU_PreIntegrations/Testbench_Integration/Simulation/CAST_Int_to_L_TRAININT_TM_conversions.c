/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_L_TRAININT_TM_conversions.h"

/* TM_conversions::CAST_Int_to_L_TRAININT/ */
void CAST_Int_to_L_TRAININT_TM_conversions(
  /* l_trainint_int/ */
  kcg_int64 l_trainint_int,
  outC_CAST_Int_to_L_TRAININT_TM_conversions *outC)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;

  outC->_L15 = DIM_L_TRAININT_max_TM_conversions;
  outC->_L14 = DIM_L_TRAININT_min_TM_conversions;
  outC->_L1 = l_trainint_int;
  outC->l_trainint = outC->_L1;
  outC->_L9 = outC->_L1 > outC->_L15;
  outC->_L8 = outC->_L1 < outC->_L14;
  _1_noname = outC->_L8;
  noname = outC->_L9;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_Int_to_L_TRAININT_init_TM_conversions(
  outC_CAST_Int_to_L_TRAININT_TM_conversions *outC)
{
  outC->_L15 = kcg_lit_int64(0);
  outC->_L14 = kcg_lit_int64(0);
  outC->_L8 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L1 = kcg_lit_int64(0);
  outC->l_trainint = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Int_to_L_TRAININT_reset_TM_conversions(
  outC_CAST_Int_to_L_TRAININT_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Int_to_L_TRAININT_TM_conversions.c
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

