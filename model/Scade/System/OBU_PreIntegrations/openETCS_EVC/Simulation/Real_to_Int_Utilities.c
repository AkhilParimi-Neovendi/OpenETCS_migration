/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Real_to_Int_Utilities.h"

/* Utilities::Real_to_Int/ */
void Real_to_Int_Utilities(
  /* real_in/ */
  kcg_float32 real_in,
  /* resolution_factor_in/ */
  kcg_float32 resolution_factor_in,
  /* unit_factor_in/ */
  kcg_float32 unit_factor_in,
  /* max_value/ */
  kcg_int32 max_value,
  /* min_value/ */
  kcg_int32 min_value,
  outC_Real_to_Int_Utilities *outC)
{
  kcg_bool noname;
  kcg_bool _1_noname;

  outC->_L8 = max_value;
  outC->_L5 = resolution_factor_in;
  outC->_L2 = unit_factor_in;
  outC->_L1 = real_in;
  outC->_L3 = outC->_L1 * outC->_L2;
  outC->_L4 = outC->_L3 / outC->_L5;
  outC->_L6 = /* _L6= */(kcg_int32) outC->_L4;
  outC->_L11 = outC->_L6 > outC->_L8;
  _1_noname = outC->_L11;
  outC->_L10 = min_value;
  outC->_L9 = outC->_L6 < outC->_L10;
  noname = outC->_L9;
  outC->int_out = outC->_L6;
}

#ifndef KCG_USER_DEFINED_INIT
void Real_to_Int_init_Utilities(outC_Real_to_Int_Utilities *outC)
{
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_lit_int32(0);
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_float32(0.0);
  outC->_L4 = kcg_lit_float32(0.0);
  outC->_L3 = kcg_lit_float32(0.0);
  outC->_L2 = kcg_lit_float32(0.0);
  outC->_L1 = kcg_lit_float32(0.0);
  outC->int_out = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Real_to_Int_reset_Utilities(outC_Real_to_Int_Utilities *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Real_to_Int_Utilities.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

