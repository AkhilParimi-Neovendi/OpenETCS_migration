/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_L_MESSAGE_TM_conversions.h"

/* TM_conversions::CAST_Int_to_L_MESSAGE/ */
void CAST_Int_to_L_MESSAGE_TM_conversions(
  /* l_message_int/ */
  kcg_int32 l_message_int,
  outC_CAST_Int_to_L_MESSAGE_TM_conversions *outC)
{
  kcg_bool noname;
  kcg_bool _1_noname;

  outC->_L13 = kcg_lit_int32(1023);
  outC->_L12 = kcg_lit_int32(0);
  outC->_L1 = l_message_int;
  outC->l_message = outC->_L1;
  outC->_L9 = outC->_L1 > outC->_L13;
  outC->_L8 = outC->_L1 < outC->_L12;
  _1_noname = outC->_L8;
  noname = outC->_L9;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_Int_to_L_MESSAGE_init_TM_conversions(
  outC_CAST_Int_to_L_MESSAGE_TM_conversions *outC)
{
  outC->_L13 = kcg_lit_int32(0);
  outC->_L12 = kcg_lit_int32(0);
  outC->_L8 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L1 = kcg_lit_int32(0);
  outC->l_message = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Int_to_L_MESSAGE_reset_TM_conversions(
  outC_CAST_Int_to_L_MESSAGE_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Int_to_L_MESSAGE_TM_conversions.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

