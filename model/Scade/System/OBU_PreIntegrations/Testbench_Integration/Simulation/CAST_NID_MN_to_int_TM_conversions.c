/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_NID_MN_to_int_TM_conversions.h"

/* TM_conversions::CAST_NID_MN_to_int/ */
void CAST_NID_MN_to_int_TM_conversions(
  /* nid_mn/ */
  NID_MN nid_mn,
  outC_CAST_NID_MN_to_int_TM_conversions *outC)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;

  outC->_L5 = kcg_lit_int64(0);
  outC->_L1 = nid_mn;
  outC->_L4 = outC->_L1 < outC->_L5;
  outC->_L3 = kcg_lit_int64(999999);
  outC->_L2 = outC->_L1 > outC->_L3;
  _1_noname = outC->_L2;
  noname = outC->_L4;
  outC->nid_mn_int = outC->_L1;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_NID_MN_to_int_init_TM_conversions(
  outC_CAST_NID_MN_to_int_TM_conversions *outC)
{
  outC->_L2 = kcg_true;
  outC->_L3 = kcg_lit_int64(0);
  outC->_L4 = kcg_true;
  outC->_L5 = kcg_lit_int64(0);
  outC->_L1 = kcg_lit_int64(0);
  outC->nid_mn_int = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_NID_MN_to_int_reset_TM_conversions(
  outC_CAST_NID_MN_to_int_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_NID_MN_to_int_TM_conversions.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

