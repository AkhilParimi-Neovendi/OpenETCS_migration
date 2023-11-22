/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_D_TRACKCOND_to_int_TM_conversions.h"

/* TM_conversions::CAST_D_TRACKCOND_to_int/ */
void CAST_D_TRACKCOND_to_int_TM_conversions(
  /* d_trackcond/ */
  D_TRACKCOND d_trackcond,
  outC_CAST_D_TRACKCOND_to_int_TM_conversions *outC)
{
  kcg_bool noname;
  kcg_bool _1_noname;

  outC->_L7 = DIM_D_max_TM_conversions;
  outC->_L1 = d_trackcond;
  outC->_L9 = outC->_L1 > outC->_L7;
  outC->_L6 = DIM_D_min_TM_conversions;
  outC->_L8 = outC->_L1 < outC->_L6;
  _1_noname = outC->_L8;
  noname = outC->_L9;
  outC->d_trackcond_int = outC->_L1;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_D_TRACKCOND_to_int_init_TM_conversions(
  outC_CAST_D_TRACKCOND_to_int_TM_conversions *outC)
{
  outC->_L6 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(0);
  outC->_L8 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L1 = kcg_lit_int32(0);
  outC->d_trackcond_int = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_D_TRACKCOND_to_int_reset_TM_conversions(
  outC_CAST_D_TRACKCOND_to_int_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_D_TRACKCOND_to_int_TM_conversions.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

