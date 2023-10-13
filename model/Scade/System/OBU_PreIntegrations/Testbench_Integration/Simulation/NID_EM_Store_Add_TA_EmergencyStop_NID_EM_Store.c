/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NID_EM_Store_Add_TA_EmergencyStop_NID_EM_Store.h"

/* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Add/ */
void NID_EM_Store_Add_TA_EmergencyStop_NID_EM_Store(
  /* inAcc/ */
  NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store *inAcc,
  /* inEntry/ */
  NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store *inEntry,
  outC_NID_EM_Store_Add_TA_EmergencyStop_NID_EM_Store *outC)
{
  outC->_L11.nid_em = (*inAcc).nid_em;
  outC->_L11.valid = kcg_true;
  outC->_L10.handled = kcg_true;
  outC->_L10.nid_em = (*inAcc).nid_em;
  outC->_L10.nfree = (*inAcc).nfree - kcg_lit_int64(1);
  kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(&outC->_L8, inAcc);
  outC->_L7 = (!(*inAcc).handled) & (!(*inEntry).valid);
  /* _L3= */
  if (outC->_L7) {
    kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(
      &outC->_L9,
      &outC->_L10);
  }
  else {
    kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(
      &outC->_L9,
      &outC->_L8);
  }
  kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(
    &outC->outAcc,
    &outC->_L9);
  kcg_copy_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store(&outC->_L1, inEntry);
  /* _L3= */
  if (outC->_L7) {
    kcg_copy_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store(
      &outC->_L3,
      &outC->_L11);
  }
  else {
    kcg_copy_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store(
      &outC->_L3,
      &outC->_L1);
  }
  kcg_copy_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store(
    &outC->outEntry,
    &outC->_L3);
}

#ifndef KCG_USER_DEFINED_INIT
void NID_EM_Store_Add_init_TA_EmergencyStop_NID_EM_Store(
  outC_NID_EM_Store_Add_TA_EmergencyStop_NID_EM_Store *outC)
{
  outC->_L11.nid_em = kcg_lit_int64(0);
  outC->_L11.valid = kcg_true;
  outC->_L10.handled = kcg_true;
  outC->_L10.nid_em = kcg_lit_int64(0);
  outC->_L10.nfree = kcg_lit_int64(0);
  outC->_L9.handled = kcg_true;
  outC->_L9.nid_em = kcg_lit_int64(0);
  outC->_L9.nfree = kcg_lit_int64(0);
  outC->_L8.handled = kcg_true;
  outC->_L8.nid_em = kcg_lit_int64(0);
  outC->_L8.nfree = kcg_lit_int64(0);
  outC->_L7 = kcg_true;
  outC->_L3.nid_em = kcg_lit_int64(0);
  outC->_L3.valid = kcg_true;
  outC->_L1.nid_em = kcg_lit_int64(0);
  outC->_L1.valid = kcg_true;
  outC->outEntry.nid_em = kcg_lit_int64(0);
  outC->outEntry.valid = kcg_true;
  outC->outAcc.handled = kcg_true;
  outC->outAcc.nid_em = kcg_lit_int64(0);
  outC->outAcc.nfree = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void NID_EM_Store_Add_reset_TA_EmergencyStop_NID_EM_Store(
  outC_NID_EM_Store_Add_TA_EmergencyStop_NID_EM_Store *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** NID_EM_Store_Add_TA_EmergencyStop_NID_EM_Store.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

