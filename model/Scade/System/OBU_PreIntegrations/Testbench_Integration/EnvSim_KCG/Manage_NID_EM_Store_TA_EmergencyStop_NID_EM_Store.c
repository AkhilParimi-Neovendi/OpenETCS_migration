/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store.h"

/* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store/ */
void Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store(
  /* add/ */
  kcg_bool add,
  /* remove/ */
  kcg_bool remove,
  /* nid_em/ */
  NID_EM nid_em,
  /* inStore/ */
  NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store *inStore,
  outC_Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store *outC)
{
  static NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store acc;
  static kcg_size idx;
  static NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store acc1;
  static kcg_size idx2;
  static NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store acc3;
  static kcg_size idx4;
  /* handled/ */
  static kcg_bool handled_partial;
  /* outStore/ */
  static NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store outStore_partial;
  static NID_EM noname;
  /* handled/ */
  static kcg_bool _5_handled_partial;
  /* outStore/ */
  static NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store _6_outStore_partial;
  /* outStore/ */
  static NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store _7_outStore_partial;
  /* handled/ */
  static kcg_bool _8_handled_partial;
  static NID_EM _9_noname;
  /* outStore/ */
  static NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store _10_outStore_partial;
  /* handled/ */
  static kcg_bool _11_handled_partial;

  outC->IfBlock1_clock = add & ((*inStore).nfree > kcg_lit_int64(0));
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy__51_array(&outC->_L16_then_IfBlock1, &(*inStore).items);
    outC->_L3_then_IfBlock1.handled = kcg_false;
    outC->_L3_then_IfBlock1.nid_em = nid_em;
    outC->_L3_then_IfBlock1.nfree = (*inStore).nfree;
    kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(
      &outC->_L15_then_IfBlock1,
      &outC->_L3_then_IfBlock1);
    /* IfBlock1:then:_L15= */
    for (idx2 = 0; idx2 < 8; idx2++) {
      kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(
        &acc1,
        &outC->_L15_then_IfBlock1);
      /* IfBlock1:then:_L15=(TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Find#1)/ */
      NID_EM_Store_Find_TA_EmergencyStop_NID_EM_Store(
        &acc1,
        &outC->_L16_then_IfBlock1[idx2],
        &outC->Context_NID_EM_Store_Find_1[idx2]);
      kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(
        &outC->_L15_then_IfBlock1,
        &outC->Context_NID_EM_Store_Find_1[idx2].outAcc);
    }
    kcg_copy__51_array(&outC->_L5_then_IfBlock1, &(*inStore).items);
    kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(
      &outC->_L1_then_IfBlock1,
      &outC->_L15_then_IfBlock1);
    /* IfBlock1:then:_L1= */
    for (idx4 = 0; idx4 < 8; idx4++) {
      kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(
        &acc3,
        &outC->_L1_then_IfBlock1);
      /* IfBlock1:then:_L1=(TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Add#2)/ */
      NID_EM_Store_Add_TA_EmergencyStop_NID_EM_Store(
        &acc3,
        &outC->_L5_then_IfBlock1[idx4],
        &outC->Context_NID_EM_Store_Add_2[idx4]);
      kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(
        &outC->_L1_then_IfBlock1,
        &outC->Context_NID_EM_Store_Add_2[idx4].outAcc);
      kcg_copy_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store(
        &outC->_L2_then_IfBlock1[idx4],
        &outC->Context_NID_EM_Store_Add_2[idx4].outEntry);
    }
    outC->_L13_then_IfBlock1 = outC->_L1_then_IfBlock1.handled;
    outC->_L12_then_IfBlock1 = outC->_L1_then_IfBlock1.nid_em;
    outC->_L11_then_IfBlock1 = outC->_L1_then_IfBlock1.nfree;
    noname = outC->_L12_then_IfBlock1;
    handled_partial = outC->_L13_then_IfBlock1;
    outC->_L4_then_IfBlock1.nfree = outC->_L11_then_IfBlock1;
    kcg_copy__51_array(&outC->_L4_then_IfBlock1.items, &outC->_L2_then_IfBlock1);
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
      &outStore_partial,
      &outC->_L4_then_IfBlock1);
    outC->handled = handled_partial;
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
      &outC->outStore,
      &outStore_partial);
  }
  else {
    outC->else_clock_IfBlock1 = remove & ((*inStore).nfree <
        cNID_EM_STORE_SIZE_TA_EmergencyStop_NID_EM_Store);
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L3_then_else_IfBlock1.handled = kcg_false;
      outC->_L3_then_else_IfBlock1.nid_em = nid_em;
      outC->_L3_then_else_IfBlock1.nfree = (*inStore).nfree;
      kcg_copy__51_array(&outC->_L4_then_else_IfBlock1, &(*inStore).items);
      kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(
        &outC->_L1_then_else_IfBlock1,
        &outC->_L3_then_else_IfBlock1);
      /* IfBlock1:else:then:_L1= */
      for (idx = 0; idx < 8; idx++) {
        kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(
          &acc,
          &outC->_L1_then_else_IfBlock1);
        /* IfBlock1:else:then:_L1=(TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Remove#1)/ */
        NID_EM_Store_Remove_TA_EmergencyStop_NID_EM_Store(
          &acc,
          &outC->_L4_then_else_IfBlock1[idx],
          &outC->Context_NID_EM_Store_Remove_1[idx]);
        kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(
          &outC->_L1_then_else_IfBlock1,
          &outC->Context_NID_EM_Store_Remove_1[idx].outAcc);
        kcg_copy_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store(
          &outC->_L2_then_else_IfBlock1[idx],
          &outC->Context_NID_EM_Store_Remove_1[idx].outEntry);
      }
      outC->_L9_then_else_IfBlock1 = outC->_L1_then_else_IfBlock1.nid_em;
      _9_noname = outC->_L9_then_else_IfBlock1;
      outC->_L8_then_else_IfBlock1 = outC->_L1_then_else_IfBlock1.handled;
      _11_handled_partial = outC->_L8_then_else_IfBlock1;
      outC->_L10_then_else_IfBlock1 = outC->_L1_then_else_IfBlock1.nfree;
      outC->_L5_then_else_IfBlock1.nfree = outC->_L10_then_else_IfBlock1;
      kcg_copy__51_array(
        &outC->_L5_then_else_IfBlock1.items,
        &outC->_L2_then_else_IfBlock1);
      kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
        &_10_outStore_partial,
        &outC->_L5_then_else_IfBlock1);
      _5_handled_partial = _11_handled_partial;
      kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
        &_6_outStore_partial,
        &_10_outStore_partial);
    }
    else {
      outC->_L2_else_else_IfBlock1 = kcg_false;
      _8_handled_partial = outC->_L2_else_else_IfBlock1;
      kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
        &outC->_L1_else_else_IfBlock1,
        inStore);
      kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
        &_7_outStore_partial,
        &outC->_L1_else_else_IfBlock1);
      _5_handled_partial = _8_handled_partial;
      kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
        &_6_outStore_partial,
        &_7_outStore_partial);
    }
    outC->handled = _5_handled_partial;
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
      &outC->outStore,
      &_6_outStore_partial);
  }
}

#ifndef KCG_USER_DEFINED_INIT
void Manage_NID_EM_Store_init_TA_EmergencyStop_NID_EM_Store(
  outC_Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;
  static kcg_size idx8;
  static kcg_size idx9;
  static kcg_size idx10;
  static kcg_size idx11;

  outC->IfBlock1_clock = kcg_true;
  outC->_L10_then_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L9_then_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L8_then_else_IfBlock1 = kcg_true;
  outC->_L5_then_else_IfBlock1.nfree = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 8; idx3++) {
    outC->_L5_then_else_IfBlock1.items[idx3].nid_em = kcg_lit_int64(0);
    outC->_L5_then_else_IfBlock1.items[idx3].valid = kcg_true;
  }
  outC->_L3_then_else_IfBlock1.handled = kcg_true;
  outC->_L3_then_else_IfBlock1.nid_em = kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.nfree = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 8; idx4++) {
    outC->_L4_then_else_IfBlock1[idx4].nid_em = kcg_lit_int64(0);
    outC->_L4_then_else_IfBlock1[idx4].valid = kcg_true;
  }
  outC->_L1_then_else_IfBlock1.handled = kcg_true;
  outC->_L1_then_else_IfBlock1.nid_em = kcg_lit_int64(0);
  outC->_L1_then_else_IfBlock1.nfree = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 8; idx5++) {
    outC->_L2_then_else_IfBlock1[idx5].nid_em = kcg_lit_int64(0);
    outC->_L2_then_else_IfBlock1[idx5].valid = kcg_true;
  }
  outC->_L2_else_else_IfBlock1 = kcg_true;
  outC->_L1_else_else_IfBlock1.nfree = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 8; idx6++) {
    outC->_L1_else_else_IfBlock1.items[idx6].nid_em = kcg_lit_int64(0);
    outC->_L1_else_else_IfBlock1.items[idx6].valid = kcg_true;
  }
  outC->else_clock_IfBlock1 = kcg_true;
  for (idx7 = 0; idx7 < 8; idx7++) {
    outC->_L5_then_IfBlock1[idx7].nid_em = kcg_lit_int64(0);
    outC->_L5_then_IfBlock1[idx7].valid = kcg_true;
  }
  outC->_L4_then_IfBlock1.nfree = kcg_lit_int64(0);
  for (idx8 = 0; idx8 < 8; idx8++) {
    outC->_L4_then_IfBlock1.items[idx8].nid_em = kcg_lit_int64(0);
    outC->_L4_then_IfBlock1.items[idx8].valid = kcg_true;
  }
  outC->_L3_then_IfBlock1.handled = kcg_true;
  outC->_L3_then_IfBlock1.nid_em = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.nfree = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.handled = kcg_true;
  outC->_L1_then_IfBlock1.nid_em = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.nfree = kcg_lit_int64(0);
  for (idx9 = 0; idx9 < 8; idx9++) {
    outC->_L2_then_IfBlock1[idx9].nid_em = kcg_lit_int64(0);
    outC->_L2_then_IfBlock1[idx9].valid = kcg_true;
  }
  outC->_L13_then_IfBlock1 = kcg_true;
  outC->_L12_then_IfBlock1 = kcg_lit_int64(0);
  outC->_L11_then_IfBlock1 = kcg_lit_int64(0);
  outC->_L15_then_IfBlock1.handled = kcg_true;
  outC->_L15_then_IfBlock1.nid_em = kcg_lit_int64(0);
  outC->_L15_then_IfBlock1.nfree = kcg_lit_int64(0);
  for (idx10 = 0; idx10 < 8; idx10++) {
    outC->_L16_then_IfBlock1[idx10].nid_em = kcg_lit_int64(0);
    outC->_L16_then_IfBlock1[idx10].valid = kcg_true;
  }
  outC->outStore.nfree = kcg_lit_int64(0);
  for (idx11 = 0; idx11 < 8; idx11++) {
    outC->outStore.items[idx11].nid_em = kcg_lit_int64(0);
    outC->outStore.items[idx11].valid = kcg_true;
  }
  outC->handled = kcg_true;
  for (idx2 = 0; idx2 < 8; idx2++) {
    /* IfBlock1:then:_L1=(TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Add#2)/ */
    NID_EM_Store_Add_init_TA_EmergencyStop_NID_EM_Store(
      &outC->Context_NID_EM_Store_Add_2[idx2]);
  }
  for (idx1 = 0; idx1 < 8; idx1++) {
    /* IfBlock1:then:_L15=(TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Find#1)/ */
    NID_EM_Store_Find_init_TA_EmergencyStop_NID_EM_Store(
      &outC->Context_NID_EM_Store_Find_1[idx1]);
  }
  for (idx = 0; idx < 8; idx++) {
    /* IfBlock1:else:then:_L1=(TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Remove#1)/ */
    NID_EM_Store_Remove_init_TA_EmergencyStop_NID_EM_Store(
      &outC->Context_NID_EM_Store_Remove_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Manage_NID_EM_Store_reset_TA_EmergencyStop_NID_EM_Store(
  outC_Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;

  for (idx2 = 0; idx2 < 8; idx2++) {
    /* IfBlock1:then:_L1=(TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Add#2)/ */
    NID_EM_Store_Add_reset_TA_EmergencyStop_NID_EM_Store(
      &outC->Context_NID_EM_Store_Add_2[idx2]);
  }
  for (idx1 = 0; idx1 < 8; idx1++) {
    /* IfBlock1:then:_L15=(TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Find#1)/ */
    NID_EM_Store_Find_reset_TA_EmergencyStop_NID_EM_Store(
      &outC->Context_NID_EM_Store_Find_1[idx1]);
  }
  for (idx = 0; idx < 8; idx++) {
    /* IfBlock1:else:then:_L1=(TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Remove#1)/ */
    NID_EM_Store_Remove_reset_TA_EmergencyStop_NID_EM_Store(
      &outC->Context_NID_EM_Store_Remove_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

