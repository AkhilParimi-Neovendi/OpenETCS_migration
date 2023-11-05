/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_NID_TEXTMESSAGE_TM_conversions.h"

/* TM_conversions::CAST_Int_to_NID_TEXTMESSAGE/ */
void CAST_Int_to_NID_TEXTMESSAGE_TM_conversions(
  /* nid_textmessage_int/ */
  kcg_int32 nid_textmessage_int,
  outC_CAST_Int_to_NID_TEXTMESSAGE_TM_conversions *outC)
{
  kcg_bool noname;
  kcg_bool _1_noname;

  outC->_L5 = kcg_lit_int32(0);
  outC->_L1 = nid_textmessage_int;
  outC->_L4 = outC->_L1 < outC->_L5;
  outC->_L3 = kcg_lit_int32(255);
  outC->_L2 = outC->_L1 > outC->_L3;
  _1_noname = outC->_L2;
  noname = outC->_L4;
  outC->nid_textmessage = outC->_L1;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_Int_to_NID_TEXTMESSAGE_init_TM_conversions(
  outC_CAST_Int_to_NID_TEXTMESSAGE_TM_conversions *outC)
{
  outC->_L2 = kcg_true;
  outC->_L3 = kcg_lit_int32(0);
  outC->_L4 = kcg_true;
  outC->_L5 = kcg_lit_int32(0);
  outC->_L1 = kcg_lit_int32(0);
  outC->nid_textmessage = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Int_to_NID_TEXTMESSAGE_reset_TM_conversions(
  outC_CAST_Int_to_NID_TEXTMESSAGE_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Int_to_NID_TEXTMESSAGE_TM_conversions.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

