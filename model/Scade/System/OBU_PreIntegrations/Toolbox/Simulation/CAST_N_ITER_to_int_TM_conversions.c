/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_N_ITER_to_int_TM_conversions.h"

/* TM_conversions::CAST_N_ITER_to_int/ */
void CAST_N_ITER_to_int_TM_conversions(
  /* n_iter/ */
  N_ITER n_iter,
  outC_CAST_N_ITER_to_int_TM_conversions *outC)
{
  kcg_bool noname;
  kcg_bool _1_noname;

  outC->_L11 = kcg_lit_int32(0);
  outC->_L1 = n_iter;
  outC->_L10 = outC->_L1 < outC->_L11;
  _1_noname = outC->_L10;
  outC->_L9 = kcg_lit_int32(31);
  outC->_L12 = outC->_L1 > outC->_L9;
  noname = outC->_L12;
  outC->n_iter_int = outC->_L1;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_N_ITER_to_int_init_TM_conversions(
  outC_CAST_N_ITER_to_int_TM_conversions *outC)
{
  outC->_L9 = kcg_lit_int32(0);
  outC->_L10 = kcg_true;
  outC->_L11 = kcg_lit_int32(0);
  outC->_L12 = kcg_true;
  outC->_L1 = kcg_lit_int32(0);
  outC->n_iter_int = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_N_ITER_to_int_reset_TM_conversions(
  outC_CAST_N_ITER_to_int_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_N_ITER_to_int_TM_conversions.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

