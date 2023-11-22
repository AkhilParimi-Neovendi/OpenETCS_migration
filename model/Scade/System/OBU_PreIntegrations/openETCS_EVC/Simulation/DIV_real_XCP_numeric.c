/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DIV_real_XCP_numeric.h"

/* XCP_numeric::DIV_real/ */
void DIV_real_XCP_numeric(
  /* Dividend/ */
  kcg_float32 Dividend,
  /* Divisor/ */
  kcg_float32 Divisor,
  /* Default/ */
  kcg_float32 Default,
  outC_DIV_real_XCP_numeric *outC)
{
  kcg_float32 op_call;
  kcg_bool every;

  outC->_L6 = ZERO_real_XCP_numeric;
  outC->_L5 = Divisor;
  outC->_L7 = outC->_L5 == outC->_L6;
  outC->_L8 = !outC->_L7;
  every = outC->_L8;
  outC->_L1 = Dividend;
  outC->_L2 = Divisor;
  if (every) {
    op_call = outC->_L1 / outC->_L2;
  }
  outC->Exception = outC->_L7;
  outC->_L3 = Default;
  if (every) {
    outC->_L4 = op_call;
  }
  else {
    outC->_L4 = outC->_L3;
  }
  outC->Result = outC->_L4;
}

#ifndef KCG_USER_DEFINED_INIT
void DIV_real_init_XCP_numeric(outC_DIV_real_XCP_numeric *outC)
{
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_lit_float32(0.0);
  outC->_L5 = kcg_lit_float32(0.0);
  outC->_L4 = kcg_lit_float32(0.0);
  outC->_L3 = kcg_lit_float32(0.0);
  outC->_L2 = kcg_lit_float32(0.0);
  outC->_L1 = kcg_lit_float32(0.0);
  outC->Exception = kcg_true;
  outC->Result = kcg_lit_float32(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void DIV_real_reset_XCP_numeric(outC_DIV_real_XCP_numeric *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** DIV_real_XCP_numeric.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

