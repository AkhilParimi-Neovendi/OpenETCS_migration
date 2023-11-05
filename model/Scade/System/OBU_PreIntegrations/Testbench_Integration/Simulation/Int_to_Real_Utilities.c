/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Int_to_Real_Utilities.h"

/* Utilities::Int_to_Real/ */
void Int_to_Real_Utilities(
  /* int_in/ */
  kcg_int32 int_in,
  /* resolution_factor_in/ */
  kcg_float32 resolution_factor_in,
  /* unit_factor_in/ */
  kcg_float32 unit_factor_in,
  /* max_value/ */
  kcg_int32 max_value,
  /* min_value/ */
  kcg_int32 min_value,
  outC_Int_to_Real_Utilities *outC)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;

  outC->_L14 = int_in;
  outC->_L13 = /* _L13= */(kcg_float32) outC->_L14;
  outC->_L8 = max_value;
  outC->_L11 = outC->_L14 > outC->_L8;
  _1_noname = outC->_L11;
  outC->_L10 = min_value;
  outC->_L9 = outC->_L14 < outC->_L10;
  noname = outC->_L9;
  outC->_L5 = resolution_factor_in;
  outC->_L2 = unit_factor_in;
  outC->_L3 = outC->_L13 * outC->_L2;
  outC->_L4 = outC->_L3 * outC->_L5;
  outC->real_out = outC->_L4;
}

#ifndef KCG_USER_DEFINED_INIT
void Int_to_Real_init_Utilities(outC_Int_to_Real_Utilities *outC)
{
  outC->_L14 = kcg_lit_int32(0);
  outC->_L13 = kcg_lit_float32(0.0);
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_lit_int32(0);
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_float32(0.0);
  outC->_L4 = kcg_lit_float32(0.0);
  outC->_L3 = kcg_lit_float32(0.0);
  outC->_L2 = kcg_lit_float32(0.0);
  outC->real_out = kcg_lit_float32(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Int_to_Real_reset_Utilities(outC_Int_to_Real_Utilities *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Int_to_Real_Utilities.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

