/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_NID_RADIO_TM_conversions.h"

/* TM_conversions::CAST_Int_to_NID_RADIO/ */
void CAST_Int_to_NID_RADIO_TM_conversions(
  /* nid_radio_int/ */
  kcg_int64 nid_radio_int,
  outC_CAST_Int_to_NID_RADIO_TM_conversions *outC)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;

  outC->_L1 = nid_radio_int;
  outC->_L6 = /* _L6= */(kcg_int32) outC->_L1;
  outC->_L5 = kcg_lit_int64(0);
  outC->_L4 = outC->_L1 < outC->_L5;
  outC->_L3 = kcg_lit_int64(50000000);
  outC->_L2 = outC->_L1 > outC->_L3;
  _1_noname = outC->_L2;
  noname = outC->_L4;
  outC->nid_radio = outC->_L6;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_Int_to_NID_RADIO_init_TM_conversions(
  outC_CAST_Int_to_NID_RADIO_TM_conversions *outC)
{
  outC->_L6 = kcg_lit_int32(0);
  outC->_L2 = kcg_true;
  outC->_L3 = kcg_lit_int64(0);
  outC->_L4 = kcg_true;
  outC->_L5 = kcg_lit_int64(0);
  outC->_L1 = kcg_lit_int64(0);
  outC->nid_radio = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Int_to_NID_RADIO_reset_TM_conversions(
  outC_CAST_Int_to_NID_RADIO_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Int_to_NID_RADIO_TM_conversions.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

