/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::MSGQueue_AcklMSG/ */
void MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages(
  /* msg/ */
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *msg,
  /* last_num/ */
  kcg_int64 last_num,
  /* localTime/ */
  tPASPOutput_Array *localTime,
  outC_MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  /* AckisFull/ */
  static kcg_bool AckisFull_partial;
  /* AckisEmpty/ */
  static kcg_bool AckisEmpty_partial;
  /* AckisFull/ */
  static kcg_bool _1_AckisFull_partial;
  /* AckisEmpty/ */
  static kcg_bool _2_AckisEmpty_partial;
  /* AckisEmpty/ */
  static kcg_bool _3_AckisEmpty_partial;
  /* AckisFull/ */
  static kcg_bool _4_AckisFull_partial;
  /* AckisEmpty/ */
  static kcg_bool _5_AckisEmpty_partial;
  /* AckisFull/ */
  static kcg_bool _6_AckisFull_partial;
  /* queue/ */
  static _80_array queue_partial;
  /* hh_array/ */
  static array_float64_5 hh_array_partial;
  /* mm_array/ */
  static array_float64_5 mm_array_partial;
  /* CountCommand/ */
  static kcg_int64 CountCommand_partial;
  /* queue/ */
  static _80_array _7_queue_partial;
  /* hh_array/ */
  static array_float64_5 _8_hh_array_partial;
  /* mm_array/ */
  static array_float64_5 _9_mm_array_partial;
  /* CountCommand/ */
  static kcg_int64 _10_CountCommand_partial;
  /* Local_hh/ */
  static kcg_float64 last_Local_hh;
  /* Local_mm/ */
  static kcg_float64 last_Local_mm;
  /* mm_array/ */
  static array_float64_5 last_mm_array;
  /* hh_array/ */
  static array_float64_5 last_hh_array;
  /* AckisEmpty/ */
  static kcg_bool last_AckisEmpty;
  /* AckisFull/ */
  static kcg_bool last_AckisFull;
  /* queue/ */
  static _80_array last_queue;

  last_Local_hh = outC->Local_hh;
  last_Local_mm = outC->Local_mm;
  kcg_copy_array_float64_5(&last_mm_array, &outC->mm_array);
  kcg_copy_array_float64_5(&last_hh_array, &outC->hh_array);
  last_AckisEmpty = outC->AckisEmpty;
  last_AckisFull = outC->AckisFull;
  kcg_copy__80_array(&last_queue, &outC->queue);
  kcg_copy_tPASPOutput_Array(&outC->_L98, localTime);
  outC->_L99 = outC->_L98[3];
  outC->Local_hh = outC->_L99;
  outC->_L100 = outC->_L98[2];
  outC->Local_mm = outC->_L100;
  outC->_L95 = kcg_false;
  outC->_L94 = kcg_true;
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(&outC->_L89, msg);
  outC->_L88 = outC->_L89.valid;
  /* _L93= */
  if (outC->_L88) {
    outC->_L93 = outC->_L94;
  }
  else {
    outC->_L93 = outC->_L95;
  }
  outC->ins = outC->_L93;
  outC->_L76 = outC->ins;
  outC->_L55 = last_AckisFull;
  outC->OperationQueue_IfBlock_clock = outC->ins;
  /* OperationQueue_IfBlock: */
  if (outC->OperationQueue_IfBlock_clock) {
    outC->_L23_then_OperationQueue_IfBlock = kcg_lit_int64(1);
    CountCommand_partial = outC->_L23_then_OperationQueue_IfBlock;
    outC->CountCommand = CountCommand_partial;
  }
  else {
    outC->_L2_else_OperationQueue_IfBlock = kcg_lit_int64(0);
    _10_CountCommand_partial = outC->_L2_else_OperationQueue_IfBlock;
    outC->CountCommand = _10_CountCommand_partial;
  }
  outC->_L77 = outC->CountCommand;
  outC->_L96 = last_num;
  /* _L97=(DMI_Control_Pkg::Sub_func::TextMessages::ACKMsgQueueCounter#1)/ */
  ACKMsgQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages(
    outC->_L76,
    outC->_L55,
    outC->_L77,
    outC->_L96,
    &outC->Context_ACKMsgQueueCounter_1);
  outC->_L97 = outC->Context_ACKMsgQueueCounter_1.NumElem;
  outC->NumElem = outC->_L97;
  outC->StatusQueue_IfBlock_clock = outC->NumElem >=
    cDIM_MSGQueue_DMI_Control_Pkg;
  /* StatusQueue_IfBlock: */
  if (outC->StatusQueue_IfBlock_clock) {
    AckisEmpty_partial = kcg_false;
    outC->_L1_then_StatusQueue_IfBlock = kcg_true;
    AckisFull_partial = outC->_L1_then_StatusQueue_IfBlock;
    outC->AckisFull = AckisFull_partial;
    outC->AckisEmpty = AckisEmpty_partial;
  }
  else {
    outC->else_clock_StatusQueue_IfBlock = outC->NumElem <= kcg_lit_int64(0);
    /* StatusQueue_IfBlock:else: */
    if (outC->else_clock_StatusQueue_IfBlock) {
      _6_AckisFull_partial = last_AckisFull;
      outC->_L1_then_else_StatusQueue_IfBlock = kcg_true;
      _5_AckisEmpty_partial = outC->_L1_then_else_StatusQueue_IfBlock;
      _1_AckisFull_partial = _6_AckisFull_partial;
      _2_AckisEmpty_partial = _5_AckisEmpty_partial;
    }
    else {
      outC->_L1_else_else_StatusQueue_IfBlock = kcg_false;
      _3_AckisEmpty_partial = outC->_L1_else_else_StatusQueue_IfBlock;
      _4_AckisFull_partial = outC->_L1_else_else_StatusQueue_IfBlock;
      _1_AckisFull_partial = _4_AckisFull_partial;
      _2_AckisEmpty_partial = _3_AckisEmpty_partial;
    }
    outC->AckisFull = _1_AckisFull_partial;
    outC->AckisEmpty = _2_AckisEmpty_partial;
  }
  outC->NumE = outC->_L97;
  /* OperationQueue_IfBlock: */
  if (outC->OperationQueue_IfBlock_clock) {
    outC->_L5_then_OperationQueue_IfBlock = kcg_lit_int64(1);
    outC->_L7_then_OperationQueue_IfBlock = outC->NumElem;
    outC->_L6_then_OperationQueue_IfBlock =
      outC->_L7_then_OperationQueue_IfBlock - outC->_L5_then_OperationQueue_IfBlock;
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L2_then_OperationQueue_IfBlock,
      msg);
    outC->_L26_then_OperationQueue_IfBlock = outC->Local_mm;
    outC->_L27_then_OperationQueue_IfBlock = outC->Local_hh;
    outC->_L31_then_OperationQueue_IfBlock = last_AckisFull;
    /* OperationQueue_IfBlock:then:_L32=(DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK#1)/ */
    FIFO_Insert_Op_ACK_DMI_Control_Pkg_Sub_func_TextMessages(
      outC->_L6_then_OperationQueue_IfBlock,
      &outC->_L2_then_OperationQueue_IfBlock,
      outC->_L26_then_OperationQueue_IfBlock,
      outC->_L27_then_OperationQueue_IfBlock,
      outC->_L31_then_OperationQueue_IfBlock,
      &outC->Context_FIFO_Insert_Op_ACK_1);
    kcg_copy__80_array(
      &outC->_L32_then_OperationQueue_IfBlock,
      &outC->Context_FIFO_Insert_Op_ACK_1.queue);
    kcg_copy_array_float64_5(
      &outC->_L33_then_OperationQueue_IfBlock,
      &outC->Context_FIFO_Insert_Op_ACK_1.hh_array);
    kcg_copy_array_float64_5(
      &outC->_L34_then_OperationQueue_IfBlock,
      &outC->Context_FIFO_Insert_Op_ACK_1.mm_array);
    kcg_copy_array_float64_5(
      &mm_array_partial,
      &outC->_L34_then_OperationQueue_IfBlock);
    kcg_copy_array_float64_5(
      &hh_array_partial,
      &outC->_L33_then_OperationQueue_IfBlock);
    kcg_copy__80_array(&queue_partial, &outC->_L32_then_OperationQueue_IfBlock);
    kcg_copy__80_array(&outC->queue, &queue_partial);
    kcg_copy_array_float64_5(&outC->hh_array, &hh_array_partial);
    kcg_copy_array_float64_5(&outC->mm_array, &mm_array_partial);
  }
  else {
    kcg_copy_array_float64_5(
      &_9_mm_array_partial,
      (array_float64_5 *) &cArray_mm_leer5_DMI_Control_Pkg);
    kcg_copy_array_float64_5(
      &_8_hh_array_partial,
      (array_float64_5 *) &cArray_hh_leer5_DMI_Control_Pkg);
    kcg_copy__80_array(
      &_7_queue_partial,
      (_80_array *) &cListMsgStructure_DMI_Control_Pkg);
    kcg_copy__80_array(&outC->queue, &_7_queue_partial);
    kcg_copy_array_float64_5(&outC->hh_array, &_8_hh_array_partial);
    kcg_copy_array_float64_5(&outC->mm_array, &_9_mm_array_partial);
  }
}

#ifndef KCG_USER_DEFINED_INIT
void MSGQueue_AcklMSG_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;

  for (idx = 0; idx < 4; idx++) {
    outC->_L98[idx] = kcg_lit_float64(0.0);
  }
  outC->_L99 = kcg_lit_float64(0.0);
  outC->_L100 = kcg_lit_float64(0.0);
  outC->_L97 = kcg_lit_int64(0);
  outC->_L96 = kcg_lit_int64(0);
  outC->_L95 = kcg_true;
  outC->_L94 = kcg_true;
  outC->_L93 = kcg_true;
  outC->_L88 = kcg_true;
  outC->_L89.valid = kcg_true;
  outC->_L89.system_clock = kcg_lit_int64(0);
  outC->_L89.textMessage_ID = kcg_lit_int64(0);
  outC->_L89.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L89.l_text = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 255; idx1++) {
    outC->_L89.x_text[idx1] = ' ';
  }
  outC->_L89.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L89.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L76 = kcg_true;
  outC->_L77 = kcg_lit_int64(0);
  outC->_L55 = kcg_true;
  outC->ins = kcg_true;
  outC->CountCommand = kcg_lit_int64(0);
  outC->NumElem = kcg_lit_int64(0);
  outC->OperationQueue_IfBlock_clock = kcg_true;
  outC->StatusQueue_IfBlock_clock = kcg_true;
  outC->_L2_else_OperationQueue_IfBlock = kcg_lit_int64(0);
  outC->_L7_then_OperationQueue_IfBlock = kcg_lit_int64(0);
  outC->_L6_then_OperationQueue_IfBlock = kcg_lit_int64(0);
  outC->_L5_then_OperationQueue_IfBlock = kcg_lit_int64(0);
  outC->_L2_then_OperationQueue_IfBlock.valid = kcg_true;
  outC->_L2_then_OperationQueue_IfBlock.system_clock = kcg_lit_int64(0);
  outC->_L2_then_OperationQueue_IfBlock.textMessage_ID = kcg_lit_int64(0);
  outC->_L2_then_OperationQueue_IfBlock.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L2_then_OperationQueue_IfBlock.l_text = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 255; idx2++) {
    outC->_L2_then_OperationQueue_IfBlock.x_text[idx2] = ' ';
  }
  outC->_L2_then_OperationQueue_IfBlock.q_textClass =
    Q_TEXTCLASS_Auxiliary_Information;
  outC->_L2_then_OperationQueue_IfBlock.q_textConfirm =
    Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L23_then_OperationQueue_IfBlock = kcg_lit_int64(0);
  outC->_L26_then_OperationQueue_IfBlock = kcg_lit_float64(0.0);
  outC->_L27_then_OperationQueue_IfBlock = kcg_lit_float64(0.0);
  outC->_L31_then_OperationQueue_IfBlock = kcg_true;
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L34_then_OperationQueue_IfBlock[idx3] = kcg_lit_float64(0.0);
  }
  for (idx4 = 0; idx4 < 5; idx4++) {
    outC->_L33_then_OperationQueue_IfBlock[idx4] = kcg_lit_float64(0.0);
  }
  for (idx6 = 0; idx6 < 5; idx6++) {
    outC->_L32_then_OperationQueue_IfBlock[idx6].present = kcg_true;
    outC->_L32_then_OperationQueue_IfBlock[idx6].dmi_msg.valid = kcg_true;
    outC->_L32_then_OperationQueue_IfBlock[idx6].dmi_msg.system_clock =
      kcg_lit_int64(0);
    outC->_L32_then_OperationQueue_IfBlock[idx6].dmi_msg.textMessage_ID =
      kcg_lit_int64(0);
    outC->_L32_then_OperationQueue_IfBlock[idx6].dmi_msg.q_text =
      balise_read_error_DMI_Types_Pkg;
    outC->_L32_then_OperationQueue_IfBlock[idx6].dmi_msg.l_text = kcg_lit_int64(0);
    for (idx5 = 0; idx5 < 255; idx5++) {
      outC->_L32_then_OperationQueue_IfBlock[idx6].dmi_msg.x_text[idx5] = ' ';
    }
    outC->_L32_then_OperationQueue_IfBlock[idx6].dmi_msg.q_textClass =
      Q_TEXTCLASS_Auxiliary_Information;
    outC->_L32_then_OperationQueue_IfBlock[idx6].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L1_then_else_StatusQueue_IfBlock = kcg_true;
  outC->_L1_else_else_StatusQueue_IfBlock = kcg_true;
  outC->else_clock_StatusQueue_IfBlock = kcg_true;
  outC->_L1_then_StatusQueue_IfBlock = kcg_true;
  outC->NumE = kcg_lit_int64(0);
  /* OperationQueue_IfBlock:then:_L32=(DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK#1)/ */
  FIFO_Insert_Op_ACK_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_FIFO_Insert_Op_ACK_1);
  /* _L97=(DMI_Control_Pkg::Sub_func::TextMessages::ACKMsgQueueCounter#1)/ */
  ACKMsgQueueCounter_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_ACKMsgQueueCounter_1);
  kcg_copy__80_array(
    &outC->queue,
    (_80_array *) &cListMsgStructure_DMI_Control_Pkg);
  outC->AckisFull = kcg_false;
  outC->AckisEmpty = kcg_false;
  kcg_copy_array_float64_5(
    &outC->hh_array,
    (array_float64_5 *) &cArray_hh_leer5_DMI_Control_Pkg);
  kcg_copy_array_float64_5(
    &outC->mm_array,
    (array_float64_5 *) &cArray_mm_leer5_DMI_Control_Pkg);
  outC->Local_mm = kcg_lit_float64(10.0);
  outC->Local_hh = kcg_lit_float64(17.0);
}
#endif /* KCG_USER_DEFINED_INIT */


void MSGQueue_AcklMSG_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  /* OperationQueue_IfBlock:then:_L32=(DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_ACK#1)/ */
  FIFO_Insert_Op_ACK_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_FIFO_Insert_Op_ACK_1);
  /* _L97=(DMI_Control_Pkg::Sub_func::TextMessages::ACKMsgQueueCounter#1)/ */
  ACKMsgQueueCounter_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_ACKMsgQueueCounter_1);
  kcg_copy__80_array(
    &outC->queue,
    (_80_array *) &cListMsgStructure_DMI_Control_Pkg);
  outC->AckisFull = kcg_false;
  outC->AckisEmpty = kcg_false;
  kcg_copy_array_float64_5(
    &outC->hh_array,
    (array_float64_5 *) &cArray_hh_leer5_DMI_Control_Pkg);
  kcg_copy_array_float64_5(
    &outC->mm_array,
    (array_float64_5 *) &cArray_mm_leer5_DMI_Control_Pkg);
  outC->Local_mm = kcg_lit_float64(10.0);
  outC->Local_hh = kcg_lit_float64(17.0);
}


void kcg_save_SV_MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages(
  SV_MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages *SV,
  outC_MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  kcg_save_SV_ACKMsgQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages(
    &SV->Context_ACKMsgQueueCounter_1,
    &outC->Context_ACKMsgQueueCounter_1);
  kcg_save_SV_FIFO_Insert_Op_ACK_DMI_Control_Pkg_Sub_func_TextMessages(
    &SV->Context_FIFO_Insert_Op_ACK_1,
    &outC->Context_FIFO_Insert_Op_ACK_1);
  kcg_copy_array_float64_5(&SV->Context_mm_array, &outC->mm_array);
  kcg_copy_array_float64_5(&SV->Context_hh_array, &outC->hh_array);
  SV->Context_AckisEmpty = outC->AckisEmpty;
  SV->Context_AckisFull = outC->AckisFull;
  kcg_copy__80_array(&SV->Context_queue, &outC->queue);
  SV->Context_Local_hh = outC->Local_hh;
  SV->Context_Local_mm = outC->Local_mm;
}

void kcg_load_SV_MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages *outC,
  SV_MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages *SV)
{
  kcg_load_SV_ACKMsgQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_ACKMsgQueueCounter_1,
    &SV->Context_ACKMsgQueueCounter_1);
  kcg_load_SV_FIFO_Insert_Op_ACK_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_FIFO_Insert_Op_ACK_1,
    &SV->Context_FIFO_Insert_Op_ACK_1);
  kcg_copy_array_float64_5(&outC->mm_array, &SV->Context_mm_array);
  kcg_copy_array_float64_5(&outC->hh_array, &SV->Context_hh_array);
  outC->AckisEmpty = SV->Context_AckisEmpty;
  outC->AckisFull = SV->Context_AckisFull;
  kcg_copy__80_array(&outC->queue, &SV->Context_queue);
  outC->Local_hh = SV->Context_Local_hh;
  outC->Local_mm = SV->Context_Local_mm;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MSGQueue_AcklMSG_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

