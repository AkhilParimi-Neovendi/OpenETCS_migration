/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_normalMSG/ */
void MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages(
  /* msg/ */
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *msg,
  /* isImportant/ */
  kcg_bool isImportant,
  /* num_last/ */
  kcg_int64 num_last,
  /* localTime/ */
  tPASPOutput_Array *localTime,
  outC_MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  /* queue/ */
  static _95_array queue_partial;
  /* mm_array/ */
  static array_float64_10 mm_array_partial;
  /* hh_array/ */
  static array_float64_10 hh_array_partial;
  /* CountCommand/ */
  static kcg_int64 CountCommand_partial;
  /* CountCommand_imp/ */
  static kcg_int64 CountCommand_imp_partial;
  /* CountCommand_auxi/ */
  static kcg_int64 CountCommand_auxi_partial;
  /* impQueue/ */
  static _95_array impQueue_partial;
  /* auxiQueue/ */
  static _95_array auxiQueue_partial;
  /* Local_mm_array_imp/ */
  static array_float64_10 Local_mm_array_imp_partial;
  /* Local_hh_array_imp/ */
  static array_float64_10 Local_hh_array_imp_partial;
  /* Local_hh_array_auxi/ */
  static array_float64_10 Local_hh_array_auxi_partial;
  /* Local_mm_array_auxi/ */
  static array_float64_10 Local_mm_array_auxi_partial;
  /* Local_mm_array_auxi/ */
  static array_float64_10 _1_Local_mm_array_auxi_partial;
  /* Local_hh_array_auxi/ */
  static array_float64_10 _2_Local_hh_array_auxi_partial;
  /* Local_hh_array_imp/ */
  static array_float64_10 _3_Local_hh_array_imp_partial;
  /* Local_mm_array_imp/ */
  static array_float64_10 _4_Local_mm_array_imp_partial;
  /* auxiQueue/ */
  static _95_array _5_auxiQueue_partial;
  /* impQueue/ */
  static _95_array _6_impQueue_partial;
  /* CountCommand_auxi/ */
  static kcg_int64 _7_CountCommand_auxi_partial;
  /* CountCommand_imp/ */
  static kcg_int64 _8_CountCommand_imp_partial;
  /* Local_mm_array_auxi/ */
  static array_float64_10 _9_Local_mm_array_auxi_partial;
  /* Local_hh_array_auxi/ */
  static array_float64_10 _10_Local_hh_array_auxi_partial;
  /* Local_hh_array_imp/ */
  static array_float64_10 _11_Local_hh_array_imp_partial;
  /* Local_mm_array_imp/ */
  static array_float64_10 _12_Local_mm_array_imp_partial;
  /* auxiQueue/ */
  static _95_array _13_auxiQueue_partial;
  /* impQueue/ */
  static _95_array _14_impQueue_partial;
  /* CountCommand_auxi/ */
  static kcg_int64 _15_CountCommand_auxi_partial;
  /* CountCommand_imp/ */
  static kcg_int64 _16_CountCommand_imp_partial;
  /* queue/ */
  static _95_array _17_queue_partial;
  /* mm_array/ */
  static array_float64_10 _18_mm_array_partial;
  /* hh_array/ */
  static array_float64_10 _19_hh_array_partial;
  /* CountCommand/ */
  static kcg_int64 _20_CountCommand_partial;
  /* CountCommand_imp/ */
  static kcg_int64 _21_CountCommand_imp_partial;
  /* CountCommand_auxi/ */
  static kcg_int64 _22_CountCommand_auxi_partial;
  /* impQueue/ */
  static _95_array _23_impQueue_partial;
  /* auxiQueue/ */
  static _95_array _24_auxiQueue_partial;
  /* Local_mm_array_imp/ */
  static array_float64_10 _25_Local_mm_array_imp_partial;
  /* Local_hh_array_imp/ */
  static array_float64_10 _26_Local_hh_array_imp_partial;
  /* Local_hh_array_auxi/ */
  static array_float64_10 _27_Local_hh_array_auxi_partial;
  /* Local_mm_array_auxi/ */
  static array_float64_10 _28_Local_mm_array_auxi_partial;
  /* isFull/ */
  static kcg_bool isFull_partial;
  /* isEmpty/ */
  static kcg_bool isEmpty_partial;
  /* isFull/ */
  static kcg_bool _29_isFull_partial;
  /* isEmpty/ */
  static kcg_bool _30_isEmpty_partial;
  /* isEmpty/ */
  static kcg_bool _31_isEmpty_partial;
  /* isFull/ */
  static kcg_bool _32_isFull_partial;
  /* isEmpty/ */
  static kcg_bool _33_isEmpty_partial;
  /* isFull/ */
  static kcg_bool _34_isFull_partial;
  /* Local_mm_array_auxi/ */
  static array_float64_10 last_Local_mm_array_auxi;
  /* Local_hh_array_auxi/ */
  static array_float64_10 last_Local_hh_array_auxi;
  /* Local_hh_array_imp/ */
  static array_float64_10 last_Local_hh_array_imp;
  /* Local_mm_array_imp/ */
  static array_float64_10 last_Local_mm_array_imp;
  /* Local_hh/ */
  static kcg_float64 last_Local_hh;
  /* Local_mm/ */
  static kcg_float64 last_Local_mm;
  /* auxiQueue/ */
  static _95_array last_auxiQueue;
  /* impQueue/ */
  static _95_array last_impQueue;
  /* NumAuxi/ */
  static kcg_int64 last_NumAuxi;
  /* NumImp/ */
  static kcg_int64 last_NumImp;
  /* hh_array/ */
  static array_float64_10 last_hh_array;
  /* mm_array/ */
  static array_float64_10 last_mm_array;
  /* queue/ */
  static _95_array last_queue;
  /* isEmpty/ */
  static kcg_bool last_isEmpty;
  /* isFull/ */
  static kcg_bool last_isFull;

  kcg_copy_array_float64_10(
    &last_Local_mm_array_auxi,
    &outC->Local_mm_array_auxi);
  kcg_copy_array_float64_10(
    &last_Local_hh_array_auxi,
    &outC->Local_hh_array_auxi);
  kcg_copy_array_float64_10(&last_Local_hh_array_imp, &outC->Local_hh_array_imp);
  kcg_copy_array_float64_10(&last_Local_mm_array_imp, &outC->Local_mm_array_imp);
  last_Local_hh = outC->Local_hh;
  last_Local_mm = outC->Local_mm;
  kcg_copy__95_array(&last_auxiQueue, &outC->auxiQueue);
  kcg_copy__95_array(&last_impQueue, &outC->impQueue);
  last_NumAuxi = outC->NumAuxi;
  last_NumImp = outC->NumImp;
  kcg_copy_array_float64_10(&last_hh_array, &outC->hh_array);
  kcg_copy_array_float64_10(&last_mm_array, &outC->mm_array);
  kcg_copy__95_array(&last_queue, &outC->queue);
  last_isEmpty = outC->isEmpty;
  last_isFull = outC->isFull;
  kcg_copy_tPASPOutput_Array(&outC->_L111, localTime);
  outC->_L112 = outC->_L111[2];
  outC->Local_mm = outC->_L112;
  outC->_L113 = outC->_L111[3];
  outC->Local_hh = outC->_L113;
  outC->_L110 = last_NumAuxi;
  outC->_L109 = last_NumImp;
  outC->_L108 = num_last;
  outC->_L107 = last_isFull;
  outC->_L106 = last_isFull;
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(&outC->_L102, msg);
  outC->_L94 = isImportant;
  /* _L99=(DMI_Control_Pkg::Sub_func::TextMessages::CheckMsgInsertOrDelete#1)/ */
  CheckMsgInsertOrDelete_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_L102,
    outC->_L94,
    &outC->Context_CheckMsgInsertOrDelete_1);
  outC->_L99 = outC->Context_CheckMsgInsertOrDelete_1.insert;
  outC->_L100 = outC->Context_CheckMsgInsertOrDelete_1.insertAuxi;
  outC->_L101 = outC->Context_CheckMsgInsertOrDelete_1.insertImp;
  outC->insertImpMsg = outC->_L101;
  outC->insertAuxiMsg = outC->_L100;
  outC->ins = outC->_L99;
  outC->_L54 = outC->insertAuxiMsg;
  outC->OperationQueue_IfBlock_clock = outC->ins;
  /* OperationQueue_IfBlock: */
  if (outC->OperationQueue_IfBlock_clock) {
    outC->IfBlock1_clock_then_OperationQueue_IfBlock = outC->insertImpMsg;
    /* OperationQueue_IfBlock:then:IfBlock1: */
    if (outC->IfBlock1_clock_then_OperationQueue_IfBlock) {
      outC->_L9_then_IfBlock1_then_OperationQueue_IfBlock = kcg_lit_int64(0);
      _15_CountCommand_auxi_partial =
        outC->_L9_then_IfBlock1_then_OperationQueue_IfBlock;
      CountCommand_auxi_partial = _15_CountCommand_auxi_partial;
    }
    else {
      outC->_L8_else_IfBlock1_then_OperationQueue_IfBlock = kcg_lit_int64(1);
      _7_CountCommand_auxi_partial =
        outC->_L8_else_IfBlock1_then_OperationQueue_IfBlock;
      CountCommand_auxi_partial = _7_CountCommand_auxi_partial;
    }
    outC->CountCommand_auxi = CountCommand_auxi_partial;
  }
  else {
    outC->_L2_else_OperationQueue_IfBlock = kcg_lit_int64(0);
    _22_CountCommand_auxi_partial = outC->_L2_else_OperationQueue_IfBlock;
    outC->CountCommand_auxi = _22_CountCommand_auxi_partial;
  }
  outC->_L37 = outC->CountCommand_auxi;
  /* _L33=(DMI_Control_Pkg::Sub_func::TextMessages::NormalMSGQueueCounter#3)/ */
  NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages(
    outC->_L54,
    outC->_L107,
    outC->_L37,
    outC->_L110,
    &outC->Context_NormalMSGQueueCounter_3);
  outC->_L33 = outC->Context_NormalMSGQueueCounter_3.NumElem;
  outC->NumAuxi = outC->_L33;
  /* OperationQueue_IfBlock: */
  if (outC->OperationQueue_IfBlock_clock) {
    /* OperationQueue_IfBlock:then:IfBlock1: */
    if (outC->IfBlock1_clock_then_OperationQueue_IfBlock) {
      outC->_L2_then_IfBlock1_then_OperationQueue_IfBlock = kcg_lit_int64(1);
      _16_CountCommand_imp_partial =
        outC->_L2_then_IfBlock1_then_OperationQueue_IfBlock;
      CountCommand_imp_partial = _16_CountCommand_imp_partial;
    }
    else {
      outC->_L1_else_IfBlock1_then_OperationQueue_IfBlock = kcg_lit_int64(0);
      _8_CountCommand_imp_partial =
        outC->_L1_else_IfBlock1_then_OperationQueue_IfBlock;
      CountCommand_imp_partial = _8_CountCommand_imp_partial;
    }
    outC->CountCommand_imp = CountCommand_imp_partial;
  }
  else {
    _21_CountCommand_imp_partial = outC->_L2_else_OperationQueue_IfBlock;
    outC->CountCommand_imp = _21_CountCommand_imp_partial;
  }
  outC->_L32 = outC->CountCommand_imp;
  outC->_L22 = outC->insertImpMsg;
  /* _L16=(DMI_Control_Pkg::Sub_func::TextMessages::NormalMSGQueueCounter#2)/ */
  NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages(
    outC->_L22,
    outC->_L106,
    outC->_L32,
    outC->_L109,
    &outC->Context_NormalMSGQueueCounter_2);
  outC->_L16 = outC->Context_NormalMSGQueueCounter_2.NumElem;
  outC->NumImp = outC->_L16;
  /* OperationQueue_IfBlock: */
  if (outC->OperationQueue_IfBlock_clock) {
    /* OperationQueue_IfBlock:then:IfBlock1: */
    if (outC->IfBlock1_clock_then_OperationQueue_IfBlock) {
      outC->_L6_then_IfBlock1_then_OperationQueue_IfBlock = kcg_lit_int64(1);
      outC->_L8_then_IfBlock1_then_OperationQueue_IfBlock = outC->NumImp;
      outC->_L3_then_IfBlock1_then_OperationQueue_IfBlock =
        outC->_L8_then_IfBlock1_then_OperationQueue_IfBlock -
        outC->_L6_then_IfBlock1_then_OperationQueue_IfBlock;
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L5_then_IfBlock1_then_OperationQueue_IfBlock,
        msg);
      outC->_L15_then_IfBlock1_then_OperationQueue_IfBlock = outC->Local_mm;
      outC->_L14_then_IfBlock1_then_OperationQueue_IfBlock = outC->Local_hh;
      outC->_L19_then_IfBlock1_then_OperationQueue_IfBlock = last_isFull;
      /* OperationQueue_IfBlock:then:IfBlock1:then:_L7=(DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal#25)/ */
      FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages(
        outC->_L3_then_IfBlock1_then_OperationQueue_IfBlock,
        &outC->_L5_then_IfBlock1_then_OperationQueue_IfBlock,
        outC->_L15_then_IfBlock1_then_OperationQueue_IfBlock,
        outC->_L14_then_IfBlock1_then_OperationQueue_IfBlock,
        outC->_L19_then_IfBlock1_then_OperationQueue_IfBlock,
        &outC->Context_FIFO_Insert_Op_Normal_25);
      kcg_copy__95_array(
        &outC->_L7_then_IfBlock1_then_OperationQueue_IfBlock,
        &outC->Context_FIFO_Insert_Op_Normal_25.queue);
      kcg_copy_array_float64_10(
        &outC->_L10_then_IfBlock1_then_OperationQueue_IfBlock,
        &outC->Context_FIFO_Insert_Op_Normal_25.hh_array);
      kcg_copy_array_float64_10(
        &outC->_L11_then_IfBlock1_then_OperationQueue_IfBlock,
        &outC->Context_FIFO_Insert_Op_Normal_25.mm_array);
      kcg_copy_array_float64_10(
        &_12_Local_mm_array_imp_partial,
        &outC->_L11_then_IfBlock1_then_OperationQueue_IfBlock);
      kcg_copy_array_float64_10(
        &Local_mm_array_imp_partial,
        &_12_Local_mm_array_imp_partial);
    }
    else {
      kcg_copy_array_float64_10(
        &_4_Local_mm_array_imp_partial,
        &last_Local_mm_array_imp);
      kcg_copy_array_float64_10(
        &Local_mm_array_imp_partial,
        &_4_Local_mm_array_imp_partial);
    }
    kcg_copy_array_float64_10(
      &outC->_L183_then_OperationQueue_IfBlock,
      &Local_mm_array_imp_partial);
    /* OperationQueue_IfBlock:then:IfBlock1: */
    if (outC->IfBlock1_clock_then_OperationQueue_IfBlock) {
      kcg_copy_array_float64_10(
        &_9_Local_mm_array_auxi_partial,
        &last_Local_mm_array_auxi);
      kcg_copy_array_float64_10(
        &Local_mm_array_auxi_partial,
        &_9_Local_mm_array_auxi_partial);
    }
    else {
      outC->_L3_else_IfBlock1_then_OperationQueue_IfBlock = kcg_lit_int64(1);
      outC->_L7_else_IfBlock1_then_OperationQueue_IfBlock = outC->NumAuxi;
      outC->_L4_else_IfBlock1_then_OperationQueue_IfBlock =
        outC->_L7_else_IfBlock1_then_OperationQueue_IfBlock -
        outC->_L3_else_IfBlock1_then_OperationQueue_IfBlock;
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L6_else_IfBlock1_then_OperationQueue_IfBlock,
        msg);
      outC->_L13_else_IfBlock1_then_OperationQueue_IfBlock = outC->Local_mm;
      outC->_L14_else_IfBlock1_then_OperationQueue_IfBlock = outC->Local_hh;
      outC->_L17_else_IfBlock1_then_OperationQueue_IfBlock = last_isFull;
      /* OperationQueue_IfBlock:then:IfBlock1:else:_L2=(DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal#24)/ */
      FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages(
        outC->_L4_else_IfBlock1_then_OperationQueue_IfBlock,
        &outC->_L6_else_IfBlock1_then_OperationQueue_IfBlock,
        outC->_L13_else_IfBlock1_then_OperationQueue_IfBlock,
        outC->_L14_else_IfBlock1_then_OperationQueue_IfBlock,
        outC->_L17_else_IfBlock1_then_OperationQueue_IfBlock,
        &outC->Context_FIFO_Insert_Op_Normal_24);
      kcg_copy__95_array(
        &outC->_L2_else_IfBlock1_then_OperationQueue_IfBlock,
        &outC->Context_FIFO_Insert_Op_Normal_24.queue);
      kcg_copy_array_float64_10(
        &outC->_L9_else_IfBlock1_then_OperationQueue_IfBlock,
        &outC->Context_FIFO_Insert_Op_Normal_24.hh_array);
      kcg_copy_array_float64_10(
        &outC->_L10_else_IfBlock1_then_OperationQueue_IfBlock,
        &outC->Context_FIFO_Insert_Op_Normal_24.mm_array);
      kcg_copy_array_float64_10(
        &_1_Local_mm_array_auxi_partial,
        &outC->_L10_else_IfBlock1_then_OperationQueue_IfBlock);
      kcg_copy_array_float64_10(
        &Local_mm_array_auxi_partial,
        &_1_Local_mm_array_auxi_partial);
    }
    kcg_copy_array_float64_10(
      &outC->_L182_then_OperationQueue_IfBlock,
      &Local_mm_array_auxi_partial);
    outC->_L178_then_OperationQueue_IfBlock = outC->NumAuxi;
    /* OperationQueue_IfBlock:then:_L181=(DMI_Control_Pkg::Sub_func::TextMessages::MergeTime#2)/ */
    MergeTime_DMI_Control_Pkg_Sub_func_TextMessages(
      outC->_L178_then_OperationQueue_IfBlock,
      &outC->_L182_then_OperationQueue_IfBlock,
      &outC->_L183_then_OperationQueue_IfBlock,
      &outC->Context_MergeTime_2);
    kcg_copy_array_float64_10(
      &outC->_L181_then_OperationQueue_IfBlock,
      &outC->Context_MergeTime_2.OutQueue);
    kcg_copy_array_float64_10(
      &mm_array_partial,
      &outC->_L181_then_OperationQueue_IfBlock);
    outC->_L177_then_OperationQueue_IfBlock = outC->NumAuxi;
    /* OperationQueue_IfBlock:then:IfBlock1: */
    if (outC->IfBlock1_clock_then_OperationQueue_IfBlock) {
      kcg_copy_array_float64_10(
        &_10_Local_hh_array_auxi_partial,
        &last_Local_hh_array_auxi);
      kcg_copy_array_float64_10(
        &Local_hh_array_auxi_partial,
        &_10_Local_hh_array_auxi_partial);
    }
    else {
      kcg_copy_array_float64_10(
        &_2_Local_hh_array_auxi_partial,
        &outC->_L9_else_IfBlock1_then_OperationQueue_IfBlock);
      kcg_copy_array_float64_10(
        &Local_hh_array_auxi_partial,
        &_2_Local_hh_array_auxi_partial);
    }
    kcg_copy_array_float64_10(
      &outC->_L175_then_OperationQueue_IfBlock,
      &Local_hh_array_auxi_partial);
    /* OperationQueue_IfBlock:then:IfBlock1: */
    if (outC->IfBlock1_clock_then_OperationQueue_IfBlock) {
      kcg_copy_array_float64_10(
        &_11_Local_hh_array_imp_partial,
        &outC->_L10_then_IfBlock1_then_OperationQueue_IfBlock);
      kcg_copy_array_float64_10(
        &Local_hh_array_imp_partial,
        &_11_Local_hh_array_imp_partial);
    }
    else {
      kcg_copy_array_float64_10(
        &_3_Local_hh_array_imp_partial,
        &last_Local_hh_array_imp);
      kcg_copy_array_float64_10(
        &Local_hh_array_imp_partial,
        &_3_Local_hh_array_imp_partial);
    }
    kcg_copy_array_float64_10(
      &outC->_L174_then_OperationQueue_IfBlock,
      &Local_hh_array_imp_partial);
    /* OperationQueue_IfBlock:then:_L176=(DMI_Control_Pkg::Sub_func::TextMessages::MergeTime#1)/ */
    MergeTime_DMI_Control_Pkg_Sub_func_TextMessages(
      outC->_L177_then_OperationQueue_IfBlock,
      &outC->_L175_then_OperationQueue_IfBlock,
      &outC->_L174_then_OperationQueue_IfBlock,
      &outC->Context_MergeTime_1);
    kcg_copy_array_float64_10(
      &outC->_L176_then_OperationQueue_IfBlock,
      &outC->Context_MergeTime_1.OutQueue);
    kcg_copy_array_float64_10(
      &hh_array_partial,
      &outC->_L176_then_OperationQueue_IfBlock);
    /* OperationQueue_IfBlock:then:IfBlock1: */
    if (outC->IfBlock1_clock_then_OperationQueue_IfBlock) {
      kcg_copy__95_array(
        &_14_impQueue_partial,
        &outC->_L7_then_IfBlock1_then_OperationQueue_IfBlock);
      kcg_copy__95_array(&impQueue_partial, &_14_impQueue_partial);
    }
    else {
      kcg_copy__95_array(&_6_impQueue_partial, &last_impQueue);
      kcg_copy__95_array(&impQueue_partial, &_6_impQueue_partial);
    }
    kcg_copy__95_array(&outC->_L144_then_OperationQueue_IfBlock, &impQueue_partial);
    /* OperationQueue_IfBlock:then:IfBlock1: */
    if (outC->IfBlock1_clock_then_OperationQueue_IfBlock) {
      kcg_copy__95_array(&_13_auxiQueue_partial, &last_auxiQueue);
      kcg_copy__95_array(&auxiQueue_partial, &_13_auxiQueue_partial);
    }
    else {
      kcg_copy__95_array(
        &_5_auxiQueue_partial,
        &outC->_L2_else_IfBlock1_then_OperationQueue_IfBlock);
      kcg_copy__95_array(&auxiQueue_partial, &_5_auxiQueue_partial);
    }
    kcg_copy__95_array(
      &outC->_L143_then_OperationQueue_IfBlock,
      &auxiQueue_partial);
    outC->_L141_then_OperationQueue_IfBlock = outC->NumAuxi;
    /* OperationQueue_IfBlock:then:_L142=(DMI_Control_Pkg::Sub_func::TextMessages::MergeMsg#9)/ */
    MergeMsg_DMI_Control_Pkg_Sub_func_TextMessages(
      outC->_L141_then_OperationQueue_IfBlock,
      &outC->_L144_then_OperationQueue_IfBlock,
      &outC->_L143_then_OperationQueue_IfBlock,
      &outC->Context_MergeMsg_9);
    kcg_copy__95_array(
      &outC->_L142_then_OperationQueue_IfBlock,
      &outC->Context_MergeMsg_9.OutQueue);
    kcg_copy__95_array(&queue_partial, &outC->_L142_then_OperationQueue_IfBlock);
    outC->_L52_then_OperationQueue_IfBlock = kcg_lit_int64(1);
    CountCommand_partial = outC->_L52_then_OperationQueue_IfBlock;
    kcg_copy__95_array(&outC->queue, &queue_partial);
    kcg_copy_array_float64_10(&outC->mm_array, &mm_array_partial);
    kcg_copy_array_float64_10(&outC->hh_array, &hh_array_partial);
    outC->CountCommand = CountCommand_partial;
    kcg_copy__95_array(&outC->impQueue, &impQueue_partial);
    kcg_copy__95_array(&outC->auxiQueue, &auxiQueue_partial);
    kcg_copy_array_float64_10(
      &outC->Local_mm_array_imp,
      &Local_mm_array_imp_partial);
    kcg_copy_array_float64_10(
      &outC->Local_hh_array_imp,
      &Local_hh_array_imp_partial);
    kcg_copy_array_float64_10(
      &outC->Local_hh_array_auxi,
      &Local_hh_array_auxi_partial);
    kcg_copy_array_float64_10(
      &outC->Local_mm_array_auxi,
      &Local_mm_array_auxi_partial);
  }
  else {
    kcg_copy_array_float64_10(
      &_28_Local_mm_array_auxi_partial,
      &last_Local_mm_array_auxi);
    kcg_copy_array_float64_10(
      &_27_Local_hh_array_auxi_partial,
      &last_Local_hh_array_auxi);
    kcg_copy_array_float64_10(
      &_26_Local_hh_array_imp_partial,
      &last_Local_hh_array_imp);
    kcg_copy_array_float64_10(
      &_25_Local_mm_array_imp_partial,
      &last_Local_mm_array_imp);
    kcg_copy__95_array(&_24_auxiQueue_partial, &last_auxiQueue);
    kcg_copy__95_array(&_23_impQueue_partial, &last_impQueue);
    kcg_copy_array_float64_10(&_19_hh_array_partial, &last_hh_array);
    kcg_copy_array_float64_10(&_18_mm_array_partial, &last_mm_array);
    kcg_copy__95_array(&_17_queue_partial, &last_queue);
    _20_CountCommand_partial = outC->_L2_else_OperationQueue_IfBlock;
    kcg_copy__95_array(&outC->queue, &_17_queue_partial);
    kcg_copy_array_float64_10(&outC->mm_array, &_18_mm_array_partial);
    kcg_copy_array_float64_10(&outC->hh_array, &_19_hh_array_partial);
    outC->CountCommand = _20_CountCommand_partial;
    kcg_copy__95_array(&outC->impQueue, &_23_impQueue_partial);
    kcg_copy__95_array(&outC->auxiQueue, &_24_auxiQueue_partial);
    kcg_copy_array_float64_10(
      &outC->Local_mm_array_imp,
      &_25_Local_mm_array_imp_partial);
    kcg_copy_array_float64_10(
      &outC->Local_hh_array_imp,
      &_26_Local_hh_array_imp_partial);
    kcg_copy_array_float64_10(
      &outC->Local_hh_array_auxi,
      &_27_Local_hh_array_auxi_partial);
    kcg_copy_array_float64_10(
      &outC->Local_mm_array_auxi,
      &_28_Local_mm_array_auxi_partial);
  }
  outC->_L9 = outC->ins;
  outC->_L13 = last_isFull;
  outC->_L4 = outC->CountCommand;
  /* _L7=(DMI_Control_Pkg::Sub_func::TextMessages::NormalMSGQueueCounter#1)/ */
  NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages(
    outC->_L9,
    outC->_L13,
    outC->_L4,
    outC->_L108,
    &outC->Context_NormalMSGQueueCounter_1);
  outC->_L7 = outC->Context_NormalMSGQueueCounter_1.NumElem;
  outC->NumElem = outC->_L7;
  outC->StatusQueue_IfBlock_clock = outC->NumElem >=
    cDIM_MSGQueueMax_DMI_Control_Pkg;
  /* StatusQueue_IfBlock: */
  if (outC->StatusQueue_IfBlock_clock) {
    isEmpty_partial = kcg_false;
    outC->_L1_then_StatusQueue_IfBlock = kcg_true;
    isFull_partial = outC->_L1_then_StatusQueue_IfBlock;
    outC->isFull = isFull_partial;
    outC->isEmpty = isEmpty_partial;
  }
  else {
    outC->else_clock_StatusQueue_IfBlock = outC->NumElem <= kcg_lit_int64(0);
    /* StatusQueue_IfBlock:else: */
    if (outC->else_clock_StatusQueue_IfBlock) {
      _34_isFull_partial = last_isFull;
      outC->_L1_then_else_StatusQueue_IfBlock = kcg_true;
      _33_isEmpty_partial = outC->_L1_then_else_StatusQueue_IfBlock;
      _29_isFull_partial = _34_isFull_partial;
      _30_isEmpty_partial = _33_isEmpty_partial;
    }
    else {
      outC->_L1_else_else_StatusQueue_IfBlock = kcg_false;
      _32_isFull_partial = outC->_L1_else_else_StatusQueue_IfBlock;
      _31_isEmpty_partial = outC->_L1_else_else_StatusQueue_IfBlock;
      _29_isFull_partial = _32_isFull_partial;
      _30_isEmpty_partial = _31_isEmpty_partial;
    }
    outC->isFull = _29_isFull_partial;
    outC->isEmpty = _30_isEmpty_partial;
  }
  outC->NumE = outC->_L7;
}

#ifndef KCG_USER_DEFINED_INIT
void MSGQueue_normalMSG_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages *outC)
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
  static kcg_size idx12;
  static kcg_size idx13;
  static kcg_size idx14;
  static kcg_size idx15;
  static kcg_size idx16;
  static kcg_size idx17;
  static kcg_size idx18;
  static kcg_size idx19;
  static kcg_size idx20;
  static kcg_size idx21;
  static kcg_size idx22;
  static kcg_size idx23;

  for (idx = 0; idx < 4; idx++) {
    outC->_L111[idx] = kcg_lit_float64(0.0);
  }
  outC->_L112 = kcg_lit_float64(0.0);
  outC->_L113 = kcg_lit_float64(0.0);
  outC->_L110 = kcg_lit_int64(0);
  outC->_L109 = kcg_lit_int64(0);
  outC->_L108 = kcg_lit_int64(0);
  outC->_L107 = kcg_true;
  outC->_L106 = kcg_true;
  outC->_L102.valid = kcg_true;
  outC->_L102.system_clock = kcg_lit_int64(0);
  outC->_L102.textMessage_ID = kcg_lit_int64(0);
  outC->_L102.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L102.l_text = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 255; idx1++) {
    outC->_L102.x_text[idx1] = ' ';
  }
  outC->_L102.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L102.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L101 = kcg_true;
  outC->_L100 = kcg_true;
  outC->_L99 = kcg_true;
  outC->_L94 = kcg_true;
  outC->_L54 = kcg_true;
  outC->_L37 = kcg_lit_int64(0);
  outC->_L33 = kcg_lit_int64(0);
  outC->_L32 = kcg_lit_int64(0);
  outC->_L22 = kcg_true;
  outC->_L16 = kcg_lit_int64(0);
  outC->_L4 = kcg_lit_int64(0);
  outC->_L7 = kcg_lit_int64(0);
  outC->_L9 = kcg_true;
  outC->_L13 = kcg_true;
  outC->insertAuxiMsg = kcg_true;
  outC->CountCommand_auxi = kcg_lit_int64(0);
  outC->CountCommand_imp = kcg_lit_int64(0);
  outC->insertImpMsg = kcg_true;
  outC->ins = kcg_true;
  outC->CountCommand = kcg_lit_int64(0);
  outC->NumElem = kcg_lit_int64(0);
  outC->StatusQueue_IfBlock_clock = kcg_true;
  outC->OperationQueue_IfBlock_clock = kcg_true;
  outC->_L1_then_else_StatusQueue_IfBlock = kcg_true;
  outC->_L1_else_else_StatusQueue_IfBlock = kcg_true;
  outC->else_clock_StatusQueue_IfBlock = kcg_true;
  outC->_L1_then_StatusQueue_IfBlock = kcg_true;
  outC->_L2_else_OperationQueue_IfBlock = kcg_lit_int64(0);
  outC->_L19_then_IfBlock1_then_OperationQueue_IfBlock = kcg_true;
  outC->_L15_then_IfBlock1_then_OperationQueue_IfBlock = kcg_lit_float64(0.0);
  outC->_L14_then_IfBlock1_then_OperationQueue_IfBlock = kcg_lit_float64(0.0);
  for (idx2 = 0; idx2 < 10; idx2++) {
    outC->_L11_then_IfBlock1_then_OperationQueue_IfBlock[idx2] =
      kcg_lit_float64(0.0);
  }
  for (idx3 = 0; idx3 < 10; idx3++) {
    outC->_L10_then_IfBlock1_then_OperationQueue_IfBlock[idx3] =
      kcg_lit_float64(0.0);
  }
  outC->_L2_then_IfBlock1_then_OperationQueue_IfBlock = kcg_lit_int64(0);
  outC->_L9_then_IfBlock1_then_OperationQueue_IfBlock = kcg_lit_int64(0);
  outC->_L8_then_IfBlock1_then_OperationQueue_IfBlock = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1_then_OperationQueue_IfBlock = kcg_lit_int64(0);
  outC->_L5_then_IfBlock1_then_OperationQueue_IfBlock.valid = kcg_true;
  outC->_L5_then_IfBlock1_then_OperationQueue_IfBlock.system_clock =
    kcg_lit_int64(0);
  outC->_L5_then_IfBlock1_then_OperationQueue_IfBlock.textMessage_ID =
    kcg_lit_int64(0);
  outC->_L5_then_IfBlock1_then_OperationQueue_IfBlock.q_text =
    balise_read_error_DMI_Types_Pkg;
  outC->_L5_then_IfBlock1_then_OperationQueue_IfBlock.l_text = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 255; idx4++) {
    outC->_L5_then_IfBlock1_then_OperationQueue_IfBlock.x_text[idx4] = ' ';
  }
  outC->_L5_then_IfBlock1_then_OperationQueue_IfBlock.q_textClass =
    Q_TEXTCLASS_Auxiliary_Information;
  outC->_L5_then_IfBlock1_then_OperationQueue_IfBlock.q_textConfirm =
    Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L6_then_IfBlock1_then_OperationQueue_IfBlock = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 10; idx6++) {
    outC->_L7_then_IfBlock1_then_OperationQueue_IfBlock[idx6].present = kcg_true;
    outC->_L7_then_IfBlock1_then_OperationQueue_IfBlock[idx6].dmi_msg.valid =
      kcg_true;
    outC->_L7_then_IfBlock1_then_OperationQueue_IfBlock[idx6].dmi_msg.system_clock =
      kcg_lit_int64(0);
    outC->_L7_then_IfBlock1_then_OperationQueue_IfBlock[idx6].dmi_msg.textMessage_ID =
      kcg_lit_int64(0);
    outC->_L7_then_IfBlock1_then_OperationQueue_IfBlock[idx6].dmi_msg.q_text =
      balise_read_error_DMI_Types_Pkg;
    outC->_L7_then_IfBlock1_then_OperationQueue_IfBlock[idx6].dmi_msg.l_text =
      kcg_lit_int64(0);
    for (idx5 = 0; idx5 < 255; idx5++) {
      outC->_L7_then_IfBlock1_then_OperationQueue_IfBlock[idx6].dmi_msg.x_text[idx5] =
        ' ';
    }
    outC->_L7_then_IfBlock1_then_OperationQueue_IfBlock[idx6].dmi_msg.q_textClass =
      Q_TEXTCLASS_Auxiliary_Information;
    outC->_L7_then_IfBlock1_then_OperationQueue_IfBlock[idx6].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L17_else_IfBlock1_then_OperationQueue_IfBlock = kcg_true;
  outC->_L14_else_IfBlock1_then_OperationQueue_IfBlock = kcg_lit_float64(0.0);
  outC->_L13_else_IfBlock1_then_OperationQueue_IfBlock = kcg_lit_float64(0.0);
  for (idx7 = 0; idx7 < 10; idx7++) {
    outC->_L10_else_IfBlock1_then_OperationQueue_IfBlock[idx7] =
      kcg_lit_float64(0.0);
  }
  for (idx8 = 0; idx8 < 10; idx8++) {
    outC->_L9_else_IfBlock1_then_OperationQueue_IfBlock[idx8] = kcg_lit_float64(
        0.0);
  }
  outC->_L8_else_IfBlock1_then_OperationQueue_IfBlock = kcg_lit_int64(0);
  outC->_L7_else_IfBlock1_then_OperationQueue_IfBlock = kcg_lit_int64(0);
  for (idx10 = 0; idx10 < 10; idx10++) {
    outC->_L2_else_IfBlock1_then_OperationQueue_IfBlock[idx10].present = kcg_true;
    outC->_L2_else_IfBlock1_then_OperationQueue_IfBlock[idx10].dmi_msg.valid =
      kcg_true;
    outC->_L2_else_IfBlock1_then_OperationQueue_IfBlock[idx10].dmi_msg.system_clock =
      kcg_lit_int64(0);
    outC->_L2_else_IfBlock1_then_OperationQueue_IfBlock[idx10].dmi_msg.textMessage_ID =
      kcg_lit_int64(0);
    outC->_L2_else_IfBlock1_then_OperationQueue_IfBlock[idx10].dmi_msg.q_text =
      balise_read_error_DMI_Types_Pkg;
    outC->_L2_else_IfBlock1_then_OperationQueue_IfBlock[idx10].dmi_msg.l_text =
      kcg_lit_int64(0);
    for (idx9 = 0; idx9 < 255; idx9++) {
      outC->_L2_else_IfBlock1_then_OperationQueue_IfBlock[idx10].dmi_msg.x_text[idx9] =
        ' ';
    }
    outC->_L2_else_IfBlock1_then_OperationQueue_IfBlock[idx10].dmi_msg.q_textClass =
      Q_TEXTCLASS_Auxiliary_Information;
    outC->_L2_else_IfBlock1_then_OperationQueue_IfBlock[idx10].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L3_else_IfBlock1_then_OperationQueue_IfBlock = kcg_lit_int64(0);
  outC->_L4_else_IfBlock1_then_OperationQueue_IfBlock = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1_then_OperationQueue_IfBlock.valid = kcg_true;
  outC->_L6_else_IfBlock1_then_OperationQueue_IfBlock.system_clock =
    kcg_lit_int64(0);
  outC->_L6_else_IfBlock1_then_OperationQueue_IfBlock.textMessage_ID =
    kcg_lit_int64(0);
  outC->_L6_else_IfBlock1_then_OperationQueue_IfBlock.q_text =
    balise_read_error_DMI_Types_Pkg;
  outC->_L6_else_IfBlock1_then_OperationQueue_IfBlock.l_text = kcg_lit_int64(0);
  for (idx11 = 0; idx11 < 255; idx11++) {
    outC->_L6_else_IfBlock1_then_OperationQueue_IfBlock.x_text[idx11] = ' ';
  }
  outC->_L6_else_IfBlock1_then_OperationQueue_IfBlock.q_textClass =
    Q_TEXTCLASS_Auxiliary_Information;
  outC->_L6_else_IfBlock1_then_OperationQueue_IfBlock.q_textConfirm =
    Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L1_else_IfBlock1_then_OperationQueue_IfBlock = kcg_lit_int64(0);
  outC->IfBlock1_clock_then_OperationQueue_IfBlock = kcg_true;
  outC->_L52_then_OperationQueue_IfBlock = kcg_lit_int64(0);
  for (idx13 = 0; idx13 < 10; idx13++) {
    outC->_L144_then_OperationQueue_IfBlock[idx13].present = kcg_true;
    outC->_L144_then_OperationQueue_IfBlock[idx13].dmi_msg.valid = kcg_true;
    outC->_L144_then_OperationQueue_IfBlock[idx13].dmi_msg.system_clock =
      kcg_lit_int64(0);
    outC->_L144_then_OperationQueue_IfBlock[idx13].dmi_msg.textMessage_ID =
      kcg_lit_int64(0);
    outC->_L144_then_OperationQueue_IfBlock[idx13].dmi_msg.q_text =
      balise_read_error_DMI_Types_Pkg;
    outC->_L144_then_OperationQueue_IfBlock[idx13].dmi_msg.l_text =
      kcg_lit_int64(0);
    for (idx12 = 0; idx12 < 255; idx12++) {
      outC->_L144_then_OperationQueue_IfBlock[idx13].dmi_msg.x_text[idx12] = ' ';
    }
    outC->_L144_then_OperationQueue_IfBlock[idx13].dmi_msg.q_textClass =
      Q_TEXTCLASS_Auxiliary_Information;
    outC->_L144_then_OperationQueue_IfBlock[idx13].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (idx15 = 0; idx15 < 10; idx15++) {
    outC->_L143_then_OperationQueue_IfBlock[idx15].present = kcg_true;
    outC->_L143_then_OperationQueue_IfBlock[idx15].dmi_msg.valid = kcg_true;
    outC->_L143_then_OperationQueue_IfBlock[idx15].dmi_msg.system_clock =
      kcg_lit_int64(0);
    outC->_L143_then_OperationQueue_IfBlock[idx15].dmi_msg.textMessage_ID =
      kcg_lit_int64(0);
    outC->_L143_then_OperationQueue_IfBlock[idx15].dmi_msg.q_text =
      balise_read_error_DMI_Types_Pkg;
    outC->_L143_then_OperationQueue_IfBlock[idx15].dmi_msg.l_text =
      kcg_lit_int64(0);
    for (idx14 = 0; idx14 < 255; idx14++) {
      outC->_L143_then_OperationQueue_IfBlock[idx15].dmi_msg.x_text[idx14] = ' ';
    }
    outC->_L143_then_OperationQueue_IfBlock[idx15].dmi_msg.q_textClass =
      Q_TEXTCLASS_Auxiliary_Information;
    outC->_L143_then_OperationQueue_IfBlock[idx15].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (idx17 = 0; idx17 < 10; idx17++) {
    outC->_L142_then_OperationQueue_IfBlock[idx17].present = kcg_true;
    outC->_L142_then_OperationQueue_IfBlock[idx17].dmi_msg.valid = kcg_true;
    outC->_L142_then_OperationQueue_IfBlock[idx17].dmi_msg.system_clock =
      kcg_lit_int64(0);
    outC->_L142_then_OperationQueue_IfBlock[idx17].dmi_msg.textMessage_ID =
      kcg_lit_int64(0);
    outC->_L142_then_OperationQueue_IfBlock[idx17].dmi_msg.q_text =
      balise_read_error_DMI_Types_Pkg;
    outC->_L142_then_OperationQueue_IfBlock[idx17].dmi_msg.l_text =
      kcg_lit_int64(0);
    for (idx16 = 0; idx16 < 255; idx16++) {
      outC->_L142_then_OperationQueue_IfBlock[idx17].dmi_msg.x_text[idx16] = ' ';
    }
    outC->_L142_then_OperationQueue_IfBlock[idx17].dmi_msg.q_textClass =
      Q_TEXTCLASS_Auxiliary_Information;
    outC->_L142_then_OperationQueue_IfBlock[idx17].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L141_then_OperationQueue_IfBlock = kcg_lit_int64(0);
  for (idx18 = 0; idx18 < 10; idx18++) {
    outC->_L174_then_OperationQueue_IfBlock[idx18] = kcg_lit_float64(0.0);
  }
  for (idx19 = 0; idx19 < 10; idx19++) {
    outC->_L175_then_OperationQueue_IfBlock[idx19] = kcg_lit_float64(0.0);
  }
  for (idx20 = 0; idx20 < 10; idx20++) {
    outC->_L176_then_OperationQueue_IfBlock[idx20] = kcg_lit_float64(0.0);
  }
  outC->_L177_then_OperationQueue_IfBlock = kcg_lit_int64(0);
  for (idx21 = 0; idx21 < 10; idx21++) {
    outC->_L181_then_OperationQueue_IfBlock[idx21] = kcg_lit_float64(0.0);
  }
  outC->_L178_then_OperationQueue_IfBlock = kcg_lit_int64(0);
  for (idx22 = 0; idx22 < 10; idx22++) {
    outC->_L182_then_OperationQueue_IfBlock[idx22] = kcg_lit_float64(0.0);
  }
  for (idx23 = 0; idx23 < 10; idx23++) {
    outC->_L183_then_OperationQueue_IfBlock[idx23] = kcg_lit_float64(0.0);
  }
  outC->NumE = kcg_lit_int64(0);
  /* _L7=(DMI_Control_Pkg::Sub_func::TextMessages::NormalMSGQueueCounter#1)/ */
  NormalMSGQueueCounter_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_NormalMSGQueueCounter_1);
  /* OperationQueue_IfBlock:then:_L142=(DMI_Control_Pkg::Sub_func::TextMessages::MergeMsg#9)/ */
  MergeMsg_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_MergeMsg_9);
  /* OperationQueue_IfBlock:then:_L176=(DMI_Control_Pkg::Sub_func::TextMessages::MergeTime#1)/ */
  MergeTime_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_MergeTime_1);
  /* OperationQueue_IfBlock:then:_L181=(DMI_Control_Pkg::Sub_func::TextMessages::MergeTime#2)/ */
  MergeTime_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_MergeTime_2);
  /* OperationQueue_IfBlock:then:IfBlock1:else:_L2=(DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal#24)/ */
  FIFO_Insert_Op_Normal_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_FIFO_Insert_Op_Normal_24);
  /* OperationQueue_IfBlock:then:IfBlock1:then:_L7=(DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal#25)/ */
  FIFO_Insert_Op_Normal_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_FIFO_Insert_Op_Normal_25);
  /* _L16=(DMI_Control_Pkg::Sub_func::TextMessages::NormalMSGQueueCounter#2)/ */
  NormalMSGQueueCounter_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_NormalMSGQueueCounter_2);
  /* _L33=(DMI_Control_Pkg::Sub_func::TextMessages::NormalMSGQueueCounter#3)/ */
  NormalMSGQueueCounter_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_NormalMSGQueueCounter_3);
  /* _L99=(DMI_Control_Pkg::Sub_func::TextMessages::CheckMsgInsertOrDelete#1)/ */
  CheckMsgInsertOrDelete_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_CheckMsgInsertOrDelete_1);
  outC->isFull = kcg_false;
  outC->isEmpty = kcg_false;
  kcg_copy__95_array(
    &outC->queue,
    (_95_array *) &cMsgStructQueueMax_DMI_Control_Pkg);
  kcg_copy_array_float64_10(
    &outC->mm_array,
    (array_float64_10 *) &cArray_mm_leer_DMI_Control_Pkg);
  kcg_copy_array_float64_10(
    &outC->hh_array,
    (array_float64_10 *) &cArray_hh_leer_DMI_Control_Pkg);
  outC->NumImp = kcg_lit_int64(0);
  outC->NumAuxi = kcg_lit_int64(0);
  kcg_copy__95_array(
    &outC->impQueue,
    (_95_array *) &cMsgStructQueueMax_DMI_Control_Pkg);
  kcg_copy__95_array(
    &outC->auxiQueue,
    (_95_array *) &cMsgStructQueueMax_DMI_Control_Pkg);
  outC->Local_mm = kcg_lit_float64(10.0);
  outC->Local_hh = kcg_lit_float64(17.0);
  kcg_copy_array_float64_10(
    &outC->Local_mm_array_imp,
    (array_float64_10 *) &cArray_mm_leer_DMI_Control_Pkg);
  kcg_copy_array_float64_10(
    &outC->Local_hh_array_imp,
    (array_float64_10 *) &cArray_hh_leer_DMI_Control_Pkg);
  kcg_copy_array_float64_10(
    &outC->Local_hh_array_auxi,
    (array_float64_10 *) &cArray_hh_leer_DMI_Control_Pkg);
  kcg_copy_array_float64_10(
    &outC->Local_mm_array_auxi,
    (array_float64_10 *) &cArray_mm_leer_DMI_Control_Pkg);
}
#endif /* KCG_USER_DEFINED_INIT */


void MSGQueue_normalMSG_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  /* _L7=(DMI_Control_Pkg::Sub_func::TextMessages::NormalMSGQueueCounter#1)/ */
  NormalMSGQueueCounter_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_NormalMSGQueueCounter_1);
  /* OperationQueue_IfBlock:then:_L142=(DMI_Control_Pkg::Sub_func::TextMessages::MergeMsg#9)/ */
  MergeMsg_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_MergeMsg_9);
  /* OperationQueue_IfBlock:then:_L176=(DMI_Control_Pkg::Sub_func::TextMessages::MergeTime#1)/ */
  MergeTime_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_MergeTime_1);
  /* OperationQueue_IfBlock:then:_L181=(DMI_Control_Pkg::Sub_func::TextMessages::MergeTime#2)/ */
  MergeTime_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_MergeTime_2);
  /* OperationQueue_IfBlock:then:IfBlock1:else:_L2=(DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal#24)/ */
  FIFO_Insert_Op_Normal_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_FIFO_Insert_Op_Normal_24);
  /* OperationQueue_IfBlock:then:IfBlock1:then:_L7=(DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal#25)/ */
  FIFO_Insert_Op_Normal_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_FIFO_Insert_Op_Normal_25);
  /* _L16=(DMI_Control_Pkg::Sub_func::TextMessages::NormalMSGQueueCounter#2)/ */
  NormalMSGQueueCounter_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_NormalMSGQueueCounter_2);
  /* _L33=(DMI_Control_Pkg::Sub_func::TextMessages::NormalMSGQueueCounter#3)/ */
  NormalMSGQueueCounter_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_NormalMSGQueueCounter_3);
  /* _L99=(DMI_Control_Pkg::Sub_func::TextMessages::CheckMsgInsertOrDelete#1)/ */
  CheckMsgInsertOrDelete_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_CheckMsgInsertOrDelete_1);
  outC->isFull = kcg_false;
  outC->isEmpty = kcg_false;
  kcg_copy__95_array(
    &outC->queue,
    (_95_array *) &cMsgStructQueueMax_DMI_Control_Pkg);
  kcg_copy_array_float64_10(
    &outC->mm_array,
    (array_float64_10 *) &cArray_mm_leer_DMI_Control_Pkg);
  kcg_copy_array_float64_10(
    &outC->hh_array,
    (array_float64_10 *) &cArray_hh_leer_DMI_Control_Pkg);
  outC->NumImp = kcg_lit_int64(0);
  outC->NumAuxi = kcg_lit_int64(0);
  kcg_copy__95_array(
    &outC->impQueue,
    (_95_array *) &cMsgStructQueueMax_DMI_Control_Pkg);
  kcg_copy__95_array(
    &outC->auxiQueue,
    (_95_array *) &cMsgStructQueueMax_DMI_Control_Pkg);
  outC->Local_mm = kcg_lit_float64(10.0);
  outC->Local_hh = kcg_lit_float64(17.0);
  kcg_copy_array_float64_10(
    &outC->Local_mm_array_imp,
    (array_float64_10 *) &cArray_mm_leer_DMI_Control_Pkg);
  kcg_copy_array_float64_10(
    &outC->Local_hh_array_imp,
    (array_float64_10 *) &cArray_hh_leer_DMI_Control_Pkg);
  kcg_copy_array_float64_10(
    &outC->Local_hh_array_auxi,
    (array_float64_10 *) &cArray_hh_leer_DMI_Control_Pkg);
  kcg_copy_array_float64_10(
    &outC->Local_mm_array_auxi,
    (array_float64_10 *) &cArray_mm_leer_DMI_Control_Pkg);
}


void kcg_save_SV_MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages(
  SV_MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages *SV,
  outC_MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  kcg_save_SV_NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages(
    &SV->Context_NormalMSGQueueCounter_3,
    &outC->Context_NormalMSGQueueCounter_3);
  kcg_save_SV_NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages(
    &SV->Context_NormalMSGQueueCounter_2,
    &outC->Context_NormalMSGQueueCounter_2);
  kcg_save_SV_FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages(
    &SV->Context_FIFO_Insert_Op_Normal_25,
    &outC->Context_FIFO_Insert_Op_Normal_25);
  kcg_save_SV_FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages(
    &SV->Context_FIFO_Insert_Op_Normal_24,
    &outC->Context_FIFO_Insert_Op_Normal_24);
  kcg_save_SV_NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages(
    &SV->Context_NormalMSGQueueCounter_1,
    &outC->Context_NormalMSGQueueCounter_1);
  kcg_copy_array_float64_10(&SV->Context_hh_array, &outC->hh_array);
  kcg_copy_array_float64_10(&SV->Context_mm_array, &outC->mm_array);
  kcg_copy__95_array(&SV->Context_queue, &outC->queue);
  SV->Context_isEmpty = outC->isEmpty;
  SV->Context_isFull = outC->isFull;
  kcg_copy_array_float64_10(
    &SV->Context_Local_mm_array_auxi,
    &outC->Local_mm_array_auxi);
  kcg_copy_array_float64_10(
    &SV->Context_Local_hh_array_auxi,
    &outC->Local_hh_array_auxi);
  kcg_copy_array_float64_10(
    &SV->Context_Local_hh_array_imp,
    &outC->Local_hh_array_imp);
  kcg_copy_array_float64_10(
    &SV->Context_Local_mm_array_imp,
    &outC->Local_mm_array_imp);
  SV->Context_Local_hh = outC->Local_hh;
  SV->Context_Local_mm = outC->Local_mm;
  kcg_copy__95_array(&SV->Context_auxiQueue, &outC->auxiQueue);
  kcg_copy__95_array(&SV->Context_impQueue, &outC->impQueue);
  SV->Context_NumAuxi = outC->NumAuxi;
  SV->Context_NumImp = outC->NumImp;
}

void kcg_load_SV_MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages *outC,
  SV_MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages *SV)
{
  kcg_load_SV_NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_NormalMSGQueueCounter_3,
    &SV->Context_NormalMSGQueueCounter_3);
  kcg_load_SV_NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_NormalMSGQueueCounter_2,
    &SV->Context_NormalMSGQueueCounter_2);
  kcg_load_SV_FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_FIFO_Insert_Op_Normal_25,
    &SV->Context_FIFO_Insert_Op_Normal_25);
  kcg_load_SV_FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_FIFO_Insert_Op_Normal_24,
    &SV->Context_FIFO_Insert_Op_Normal_24);
  kcg_load_SV_NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_NormalMSGQueueCounter_1,
    &SV->Context_NormalMSGQueueCounter_1);
  kcg_copy_array_float64_10(&outC->hh_array, &SV->Context_hh_array);
  kcg_copy_array_float64_10(&outC->mm_array, &SV->Context_mm_array);
  kcg_copy__95_array(&outC->queue, &SV->Context_queue);
  outC->isEmpty = SV->Context_isEmpty;
  outC->isFull = SV->Context_isFull;
  kcg_copy_array_float64_10(
    &outC->Local_mm_array_auxi,
    &SV->Context_Local_mm_array_auxi);
  kcg_copy_array_float64_10(
    &outC->Local_hh_array_auxi,
    &SV->Context_Local_hh_array_auxi);
  kcg_copy_array_float64_10(
    &outC->Local_hh_array_imp,
    &SV->Context_Local_hh_array_imp);
  kcg_copy_array_float64_10(
    &outC->Local_mm_array_imp,
    &SV->Context_Local_mm_array_imp);
  outC->Local_hh = SV->Context_Local_hh;
  outC->Local_mm = SV->Context_Local_mm;
  kcg_copy__95_array(&outC->auxiQueue, &SV->Context_auxiQueue);
  kcg_copy__95_array(&outC->impQueue, &SV->Context_impQueue);
  outC->NumAuxi = SV->Context_NumAuxi;
  outC->NumImp = SV->Context_NumImp;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MSGQueue_normalMSG_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

