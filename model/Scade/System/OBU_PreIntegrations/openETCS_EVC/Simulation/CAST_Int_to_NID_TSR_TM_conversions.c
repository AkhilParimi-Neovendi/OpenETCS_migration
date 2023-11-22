/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:31
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_NID_TSR_TM_conversions.h"

/* TM_conversions::CAST_Int_to_NID_TSR/ */
void CAST_Int_to_NID_TSR_TM_conversions(
  /* nid_tsr_int/ */
  kcg_int32 nid_tsr_int,
  outC_CAST_Int_to_NID_TSR_TM_conversions *outC)
{
  kcg_bool noname;
  kcg_bool _1_noname;

  outC->_L5 = kcg_lit_int32(0);
  outC->_L1 = nid_tsr_int;
  outC->_L4 = outC->_L1 < outC->_L5;
  outC->_L3 = kcg_lit_int32(255);
  outC->_L2 = outC->_L1 > outC->_L3;
  _1_noname = outC->_L2;
  noname = outC->_L4;
  outC->nid_tsr = outC->_L1;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_Int_to_NID_TSR_init_TM_conversions(
  outC_CAST_Int_to_NID_TSR_TM_conversions *outC)
{
  outC->_L2 = kcg_true;
  outC->_L3 = kcg_lit_int32(0);
  outC->_L4 = kcg_true;
  outC->_L5 = kcg_lit_int32(0);
  outC->_L1 = kcg_lit_int32(0);
  outC->nid_tsr = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Int_to_NID_TSR_reset_TM_conversions(
  outC_CAST_Int_to_NID_TSR_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Int_to_NID_TSR_TM_conversions.c
** Generation date: 2023-11-06T13:54:31
*************************************************************$ */

