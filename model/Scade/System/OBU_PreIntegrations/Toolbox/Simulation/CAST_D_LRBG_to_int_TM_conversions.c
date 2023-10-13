/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_D_LRBG_to_int_TM_conversions.h"

/* TM_conversions::CAST_D_LRBG_to_int/ */
void CAST_D_LRBG_to_int_TM_conversions(
  /* d_lrbg/ */
  D_LRBG d_lrbg,
  outC_CAST_D_LRBG_to_int_TM_conversions *outC)
{
  kcg_bool noname;
  kcg_bool _1_noname;

  outC->_L7 = DIM_D_max_TM_conversions;
  outC->_L1 = d_lrbg;
  outC->_L9 = outC->_L1 > outC->_L7;
  outC->_L6 = DIM_D_min_TM_conversions;
  outC->_L8 = outC->_L1 < outC->_L6;
  _1_noname = outC->_L8;
  noname = outC->_L9;
  outC->d_lrbg_int = outC->_L1;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_D_LRBG_to_int_init_TM_conversions(
  outC_CAST_D_LRBG_to_int_TM_conversions *outC)
{
  outC->_L6 = kcg_lit_int64(0);
  outC->_L7 = kcg_lit_int64(0);
  outC->_L8 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L1 = kcg_lit_int64(0);
  outC->d_lrbg_int = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_D_LRBG_to_int_reset_TM_conversions(
  outC_CAST_D_LRBG_to_int_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_D_LRBG_to_int_TM_conversions.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

