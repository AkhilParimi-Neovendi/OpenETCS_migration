/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Int_Check_Utilities.h"

/* Utilities::Int_Check/ */
void Int_Check_Utilities(
  /* int_in/ */
  kcg_int32 int_in,
  /* max_value/ */
  kcg_int32 max_value,
  /* min_value/ */
  kcg_int32 min_value,
  outC_Int_Check_Utilities *outC)
{
  outC->_L9 = kcg_false;
  outC->_L8 = kcg_true;
  outC->_L2 = max_value;
  outC->_L1 = int_in;
  outC->_L4 = outC->_L1 > outC->_L2;
  outC->_L3 = min_value;
  outC->_L5 = outC->_L3 > outC->_L1;
  outC->_L6 = outC->_L5 | outC->_L4;
  /* _L7= */
  if (outC->_L6) {
    outC->_L7 = outC->_L8;
  }
  else {
    outC->_L7 = outC->_L9;
  }
  outC->error = outC->_L7;
}

#ifndef KCG_USER_DEFINED_INIT
void Int_Check_init_Utilities(outC_Int_Check_Utilities *outC)
{
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_lit_int32(0);
  outC->_L2 = kcg_lit_int32(0);
  outC->_L1 = kcg_lit_int32(0);
  outC->error = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Int_Check_reset_Utilities(outC_Int_Check_Utilities *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Int_Check_Utilities.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

