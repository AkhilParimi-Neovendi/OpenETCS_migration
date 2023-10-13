/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NID_EM_Store_Remove_TA_EmergencyStop_NID_EM_Store.h"

/* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Remove/ */
void NID_EM_Store_Remove_TA_EmergencyStop_NID_EM_Store(
  /* inAcc/ */
  NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store *inAcc,
  /* inEntry/ */
  NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store *inEntry,
  outC_NID_EM_Store_Remove_TA_EmergencyStop_NID_EM_Store *outC)
{
  kcg_copy_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store(&outC->_L2, inEntry);
  outC->_L5.nid_em = kcg_lit_int64(0);
  outC->_L5.valid = kcg_false;
  outC->_L1 = (!(*inAcc).handled) & (*inEntry).valid & ((*inEntry).nid_em ==
      (*inAcc).nid_em);
  /* _L6= */
  if (outC->_L1) {
    kcg_copy_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store(
      &outC->_L6,
      &outC->_L5);
  }
  else {
    kcg_copy_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store(
      &outC->_L6,
      &outC->_L2);
  }
  kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(&outC->_L3, inAcc);
  outC->_L4.handled = kcg_true;
  outC->_L4.nid_em = (*inAcc).nid_em;
  outC->_L4.nfree = (*inAcc).nfree + kcg_lit_int64(1);
  /* _L6= */
  if (outC->_L1) {
    kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(
      &outC->_L7,
      &outC->_L4);
  }
  else {
    kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(
      &outC->_L7,
      &outC->_L3);
  }
  kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(
    &outC->outAcc,
    &outC->_L7);
  kcg_copy_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store(
    &outC->outEntry,
    &outC->_L6);
}

#ifndef KCG_USER_DEFINED_INIT
void NID_EM_Store_Remove_init_TA_EmergencyStop_NID_EM_Store(
  outC_NID_EM_Store_Remove_TA_EmergencyStop_NID_EM_Store *outC)
{
  outC->_L1 = kcg_true;
  outC->_L2.nid_em = kcg_lit_int64(0);
  outC->_L2.valid = kcg_true;
  outC->_L3.handled = kcg_true;
  outC->_L3.nid_em = kcg_lit_int64(0);
  outC->_L3.nfree = kcg_lit_int64(0);
  outC->_L4.handled = kcg_true;
  outC->_L4.nid_em = kcg_lit_int64(0);
  outC->_L4.nfree = kcg_lit_int64(0);
  outC->_L5.nid_em = kcg_lit_int64(0);
  outC->_L5.valid = kcg_true;
  outC->_L7.handled = kcg_true;
  outC->_L7.nid_em = kcg_lit_int64(0);
  outC->_L7.nfree = kcg_lit_int64(0);
  outC->_L6.nid_em = kcg_lit_int64(0);
  outC->_L6.valid = kcg_true;
  outC->outEntry.nid_em = kcg_lit_int64(0);
  outC->outEntry.valid = kcg_true;
  outC->outAcc.handled = kcg_true;
  outC->outAcc.nid_em = kcg_lit_int64(0);
  outC->outAcc.nfree = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void NID_EM_Store_Remove_reset_TA_EmergencyStop_NID_EM_Store(
  outC_NID_EM_Store_Remove_TA_EmergencyStop_NID_EM_Store *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** NID_EM_Store_Remove_TA_EmergencyStop_NID_EM_Store.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

