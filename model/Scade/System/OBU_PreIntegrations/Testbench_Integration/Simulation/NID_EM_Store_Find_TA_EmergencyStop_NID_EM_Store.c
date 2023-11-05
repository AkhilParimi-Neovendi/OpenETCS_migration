/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NID_EM_Store_Find_TA_EmergencyStop_NID_EM_Store.h"

/* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Find/ */
void NID_EM_Store_Find_TA_EmergencyStop_NID_EM_Store(
  /* inAcc/ */
  NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store *inAcc,
  /* inEntry/ */
  NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store *inEntry,
  outC_NID_EM_Store_Find_TA_EmergencyStop_NID_EM_Store *outC)
{
  outC->_L5.handled = kcg_true;
  outC->_L5.nid_em = (*inAcc).nid_em;
  outC->_L5.nfree = (*inAcc).nfree;
  outC->_L4 = ((*inAcc).nid_em == (*inEntry).nid_em) & (*inEntry).valid;
  kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(&outC->_L1, inAcc);
  /* _L3= */
  if (outC->_L4) {
    kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(
      &outC->_L3,
      &outC->_L5);
  }
  else {
    kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(
      &outC->_L3,
      &outC->_L1);
  }
  kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(
    &outC->outAcc,
    &outC->_L3);
}

#ifndef KCG_USER_DEFINED_INIT
void NID_EM_Store_Find_init_TA_EmergencyStop_NID_EM_Store(
  outC_NID_EM_Store_Find_TA_EmergencyStop_NID_EM_Store *outC)
{
  outC->_L5.handled = kcg_true;
  outC->_L5.nid_em = kcg_lit_int32(0);
  outC->_L5.nfree = kcg_lit_int32(0);
  outC->_L4 = kcg_true;
  outC->_L3.handled = kcg_true;
  outC->_L3.nid_em = kcg_lit_int32(0);
  outC->_L3.nfree = kcg_lit_int32(0);
  outC->_L1.handled = kcg_true;
  outC->_L1.nid_em = kcg_lit_int32(0);
  outC->_L1.nfree = kcg_lit_int32(0);
  outC->outAcc.handled = kcg_true;
  outC->outAcc.nid_em = kcg_lit_int32(0);
  outC->outAcc.nfree = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void NID_EM_Store_Find_reset_TA_EmergencyStop_NID_EM_Store(
  outC_NID_EM_Store_Find_TA_EmergencyStop_NID_EM_Store *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** NID_EM_Store_Find_TA_EmergencyStop_NID_EM_Store.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

