/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ES_Process_Unconditional_TA_EmergencyStop.h"

/* TA_EmergencyStop::ES_Process_Unconditional/ */
void ES_Process_Unconditional_TA_EmergencyStop(
  /* nid_em/ */
  NID_EM nid_em,
  /* receivedMsg16/ */
  kcg_bool receivedMsg16,
  /* receivedMsg18/ */
  kcg_bool receivedMsg18,
  outC_ES_Process_Unconditional_TA_EmergencyStop *outC)
{
  /* store/ */
  static NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store store_partial;
  static kcg_bool noname;
  /* store/ */
  static NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store _1_store_partial;
  /* store/ */
  static NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store last_store;

  kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
    &last_store,
    &outC->store);
  outC->IfBlock1_clock = receivedMsg16 | receivedMsg18;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L2_then_IfBlock1 = receivedMsg16;
    outC->_L5_then_IfBlock1 = receivedMsg18;
    outC->_L4_then_IfBlock1 = nid_em;
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
      &outC->_L3_then_IfBlock1,
      &last_store);
    /* IfBlock1:then:_L6=(TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store#2)/ */
    Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store(
      outC->_L2_then_IfBlock1,
      outC->_L5_then_IfBlock1,
      outC->_L4_then_IfBlock1,
      &outC->_L3_then_IfBlock1,
      &outC->Context_Manage_NID_EM_Store_2);
    outC->_L6_then_IfBlock1 = outC->Context_Manage_NID_EM_Store_2.handled;
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
      &outC->_L1_then_IfBlock1,
      &outC->Context_Manage_NID_EM_Store_2.outStore);
    noname = outC->_L6_then_IfBlock1;
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
      &store_partial,
      &outC->_L1_then_IfBlock1);
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
      &outC->store,
      &store_partial);
  }
  else {
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
      &outC->_L1_else_IfBlock1,
      &last_store);
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
      &_1_store_partial,
      &outC->_L1_else_IfBlock1);
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
      &outC->store,
      &_1_store_partial);
  }
  outC->_L13 = outC->store.nfree <
    cNID_EM_STORE_SIZE_TA_EmergencyStop_NID_EM_Store;
  outC->uesActive = outC->_L13;
}

#ifndef KCG_USER_DEFINED_INIT
void ES_Process_Unconditional_init_TA_EmergencyStop(
  outC_ES_Process_Unconditional_TA_EmergencyStop *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;

  outC->_L13 = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_else_IfBlock1.nfree = kcg_lit_int32(0);
  for (idx = 0; idx < 8; idx++) {
    outC->_L1_else_IfBlock1.items[idx].nid_em = kcg_lit_int32(0);
    outC->_L1_else_IfBlock1.items[idx].valid = kcg_true;
  }
  outC->_L5_then_IfBlock1 = kcg_true;
  outC->_L4_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1.nfree = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 8; idx1++) {
    outC->_L3_then_IfBlock1.items[idx1].nid_em = kcg_lit_int32(0);
    outC->_L3_then_IfBlock1.items[idx1].valid = kcg_true;
  }
  outC->_L2_then_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1.nfree = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 8; idx2++) {
    outC->_L1_then_IfBlock1.items[idx2].nid_em = kcg_lit_int32(0);
    outC->_L1_then_IfBlock1.items[idx2].valid = kcg_true;
  }
  outC->_L6_then_IfBlock1 = kcg_true;
  outC->uesActive = kcg_true;
  /* IfBlock1:then:_L6=(TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store#2)/ */
  Manage_NID_EM_Store_init_TA_EmergencyStop_NID_EM_Store(
    &outC->Context_Manage_NID_EM_Store_2);
  kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
    &outC->store,
    (NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store *)
      &cNID_EM_STORE_EMPTY_TA_EmergencyStop_NID_EM_Store);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ES_Process_Unconditional_reset_TA_EmergencyStop(
  outC_ES_Process_Unconditional_TA_EmergencyStop *outC)
{
  /* IfBlock1:then:_L6=(TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store#2)/ */
  Manage_NID_EM_Store_reset_TA_EmergencyStop_NID_EM_Store(
    &outC->Context_Manage_NID_EM_Store_2);
  kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
    &outC->store,
    (NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store *)
      &cNID_EM_STORE_EMPTY_TA_EmergencyStop_NID_EM_Store);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_ES_Process_Unconditional_TA_EmergencyStop(
  SV_ES_Process_Unconditional_TA_EmergencyStop *SV,
  outC_ES_Process_Unconditional_TA_EmergencyStop *outC)
{
  kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
    &SV->Context_store,
    &outC->store);
}

void kcg_load_SV_ES_Process_Unconditional_TA_EmergencyStop(
  outC_ES_Process_Unconditional_TA_EmergencyStop *outC,
  SV_ES_Process_Unconditional_TA_EmergencyStop *SV)
{
  kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
    &outC->store,
    &SV->Context_store);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ES_Process_Unconditional_TA_EmergencyStop.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

