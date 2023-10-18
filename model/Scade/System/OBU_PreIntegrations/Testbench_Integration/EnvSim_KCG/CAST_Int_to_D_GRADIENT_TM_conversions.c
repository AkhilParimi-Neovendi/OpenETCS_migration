/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_GRADIENT_TM_conversions.h"

/* TM_conversions::CAST_Int_to_D_GRADIENT/ */
void CAST_Int_to_D_GRADIENT_TM_conversions(
  /* d_gradient_int/ */
  kcg_int64 d_gradient_int,
  outC_CAST_Int_to_D_GRADIENT_TM_conversions *outC)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;

  outC->_L9 = DIM_D_min_TM_conversions;
  outC->_L8 = DIM_D_max_TM_conversions;
  outC->_L1 = d_gradient_int;
  outC->_L7 = outC->_L1 > outC->_L8;
  _1_noname = outC->_L7;
  outC->_L6 = outC->_L1 < outC->_L9;
  noname = outC->_L6;
  outC->d_gradient = outC->_L1;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_Int_to_D_GRADIENT_init_TM_conversions(
  outC_CAST_Int_to_D_GRADIENT_TM_conversions *outC)
{
  outC->_L6 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L8 = kcg_lit_int64(0);
  outC->_L9 = kcg_lit_int64(0);
  outC->_L1 = kcg_lit_int64(0);
  outC->d_gradient = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Int_to_D_GRADIENT_reset_TM_conversions(
  outC_CAST_Int_to_D_GRADIENT_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Int_to_D_GRADIENT_TM_conversions.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

