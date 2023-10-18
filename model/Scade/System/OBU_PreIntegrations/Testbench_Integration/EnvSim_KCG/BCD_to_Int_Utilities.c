/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BCD_to_Int_Utilities.h"

/* Utilities::BCD_to_Int/ */
void BCD_to_Int_Utilities(
  /* bcd_in/ */
  kcg_int64 bcd_in,
  outC_BCD_to_Int_Utilities *outC)
{
  outC->_L1 = bcd_in;
  outC->_L4 = kcg_lit_int64(9);
  outC->_L5 = kcg_lit_int64(0);
  /* _L3=(Utilities::Int_Check#1)/ */
  Int_Check_Utilities(
    outC->_L1,
    outC->_L4,
    outC->_L5,
    &outC->Context_Int_Check_1);
  outC->_L3 = outC->Context_Int_Check_1.error;
  outC->error = outC->_L3;
  outC->int_out = outC->_L1;
}

#ifndef KCG_USER_DEFINED_INIT
void BCD_to_Int_init_Utilities(outC_BCD_to_Int_Utilities *outC)
{
  outC->_L5 = kcg_lit_int64(0);
  outC->_L4 = kcg_lit_int64(0);
  outC->_L3 = kcg_true;
  outC->_L1 = kcg_lit_int64(0);
  outC->error = kcg_true;
  outC->int_out = kcg_lit_int64(0);
  /* _L3=(Utilities::Int_Check#1)/ */
  Int_Check_init_Utilities(&outC->Context_Int_Check_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void BCD_to_Int_reset_Utilities(outC_BCD_to_Int_Utilities *outC)
{
  /* _L3=(Utilities::Int_Check#1)/ */
  Int_Check_reset_Utilities(&outC->Context_Int_Check_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** BCD_to_Int_Utilities.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

