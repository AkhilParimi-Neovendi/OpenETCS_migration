/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::DeleteAckMsg/ */
void DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages(
  /* localQueue/ */
  _82_array *localQueue,
  /* Delete/ */
  kcg_bool Delete,
  /* hh_array/ */
  array_float32_5 *hh_array,
  /* mm_array/ */
  array_float32_5 *mm_array,
  /* local_num_ack/ */
  kcg_int32 local_num_ack,
  /* local_ack_empty/ */
  kcg_bool local_ack_empty,
  outC_DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  /* ack_is_Empty/ */
  static kcg_bool last_ack_is_Empty;
  /* new_hh/ */
  static array_float32_5 last_new_hh;
  /* new_mm/ */
  static array_float32_5 last_new_mm;
  /* NumE/ */
  static kcg_int32 last_NumE;
  /* queue/ */
  static _82_array last_queue;
  /* local_num_ack/ */
  static kcg_int32 last_local_num_ack;
  /* localQueue/ */
  static _82_array last_localQueue;

  kcg_copy__82_array(&last_localQueue, &outC->mem_localQueue);
  kcg_copy__82_array(&outC->mem_localQueue, localQueue);
  last_local_num_ack = outC->mem_local_num_ack;
  outC->mem_local_num_ack = local_num_ack;
  last_ack_is_Empty = outC->ack_is_Empty;
  /* new_hh/ */
  if (outC->init) {
    kcg_copy_array_float32_5(&last_new_hh, hh_array);
  }
  else {
    kcg_copy_array_float32_5(&last_new_hh, &outC->new_hh);
  }
  /* new_mm/ */
  if (outC->init) {
    kcg_copy_array_float32_5(&last_new_mm, mm_array);
  }
  else {
    kcg_copy_array_float32_5(&last_new_mm, &outC->new_mm);
  }
  /* NumE/ */
  if (outC->init) {
    last_NumE = local_num_ack;
  }
  else {
    last_NumE = outC->NumE;
  }
  /* queue/ */
  if (outC->init) {
    kcg_copy__82_array(&last_queue, localQueue);
  }
  else {
    kcg_copy__82_array(&last_queue, &outC->queue);
  }
  kcg_copy_array_float32_5(&outC->_L32, hh_array);
  kcg_copy_array_float32_5(&outC->_L33, mm_array);
  /* _L109=(DMI_Control_Pkg::Sub_func::TextMessages::FIFO_delete_time_Ack#1)/ */
  FIFO_delete_time_Ack_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_L32,
    &outC->_L33,
    &outC->Context_FIFO_delete_time_Ack_1);
  kcg_copy_array_float32_5(
    &outC->_L109,
    &outC->Context_FIFO_delete_time_Ack_1.new_mm_array);
  kcg_copy_array_float32_5(
    &outC->_L110,
    &outC->Context_FIFO_delete_time_Ack_1.new_hh_array);
  outC->_L6 = kcg_lit_int32(0);
  kcg_copy__82_array(&outC->_L19, localQueue);
  /* _L108=(DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Delete_Op_Ack#1)/ */
  FIFO_Delete_Op_Ack_DMI_Control_Pkg_Sub_func_TextMessages(
    outC->_L6,
    &outC->_L19,
    &outC->Context_FIFO_Delete_Op_Ack_1);
  kcg_copy__82_array(&outC->_L108, &outC->Context_FIFO_Delete_Op_Ack_1.Queue);
  outC->_L107 = kcg_lit_int32(1);
  outC->_L105 = local_num_ack;
  outC->_L106 = outC->_L105 - outC->_L107;
  outC->_L76 = local_num_ack;
  outC->_L70 = Delete;
  /* _L104= */
  if (outC->_L70) {
    outC->_L104 = outC->_L106;
  }
  else {
    outC->_L104 = outC->_L76;
  }
  kcg_copy_array_float32_5(&outC->_L103, hh_array);
  kcg_copy_array_float32_5(&outC->_L102, mm_array);
  kcg_copy__82_array(&outC->_L101, localQueue);
  outC->_L94 = kcg_lit_int32(0);
  outC->LocalNum = outC->_L104;
  outC->_L91 = outC->LocalNum;
  outC->_L93 = outC->_L91 <= outC->_L94;
  outC->_L96 = local_ack_empty;
  /* _L97= */
  if (outC->_L96) {
    outC->_L97 = outC->_L96;
  }
  else {
    outC->_L97 = outC->_L93;
  }
  outC->ack_is_Empty = outC->_L97;
  outC->_L80 = Delete;
  /* _L84= */
  if (outC->_L80) {
    kcg_copy_array_float32_5(&outC->_L84, &outC->_L109);
  }
  else {
    kcg_copy_array_float32_5(&outC->_L84, &outC->_L102);
  }
  /* _L84= */
  if (outC->_L80) {
    kcg_copy_array_float32_5(&outC->_L85, &outC->_L110);
  }
  else {
    kcg_copy_array_float32_5(&outC->_L85, &outC->_L103);
  }
  outC->NumE = outC->_L104;
  kcg_copy_array_float32_5(&outC->new_hh, &outC->_L85);
  kcg_copy_array_float32_5(&outC->new_mm, &outC->_L84);
  outC->_L27 = Delete;
  /* _L25= */
  if (outC->_L27) {
    kcg_copy__82_array(&outC->_L25, &outC->_L108);
  }
  else {
    kcg_copy__82_array(&outC->_L25, &outC->_L101);
  }
  kcg_copy__82_array(&outC->queue, &outC->_L25);
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void DeleteAckMsg_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC)
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

  for (idx = 0; idx < 5; idx++) {
    outC->_L109[idx] = kcg_lit_float32(0.0);
  }
  for (idx1 = 0; idx1 < 5; idx1++) {
    outC->_L110[idx1] = kcg_lit_float32(0.0);
  }
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L108[idx3].present = kcg_true;
    outC->_L108[idx3].dmi_msg.valid = kcg_true;
    outC->_L108[idx3].dmi_msg.system_clock = kcg_lit_int32(0);
    outC->_L108[idx3].dmi_msg.textMessage_ID = kcg_lit_int32(0);
    outC->_L108[idx3].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L108[idx3].dmi_msg.l_text = kcg_lit_int32(0);
    for (idx2 = 0; idx2 < 255; idx2++) {
      outC->_L108[idx3].dmi_msg.x_text[idx2] = ' ';
    }
    outC->_L108[idx3].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L108[idx3].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L107 = kcg_lit_int32(0);
  outC->_L106 = kcg_lit_int32(0);
  outC->_L105 = kcg_lit_int32(0);
  outC->_L104 = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 5; idx4++) {
    outC->_L102[idx4] = kcg_lit_float32(0.0);
  }
  for (idx5 = 0; idx5 < 5; idx5++) {
    outC->_L103[idx5] = kcg_lit_float32(0.0);
  }
  for (idx7 = 0; idx7 < 5; idx7++) {
    outC->_L101[idx7].present = kcg_true;
    outC->_L101[idx7].dmi_msg.valid = kcg_true;
    outC->_L101[idx7].dmi_msg.system_clock = kcg_lit_int32(0);
    outC->_L101[idx7].dmi_msg.textMessage_ID = kcg_lit_int32(0);
    outC->_L101[idx7].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L101[idx7].dmi_msg.l_text = kcg_lit_int32(0);
    for (idx6 = 0; idx6 < 255; idx6++) {
      outC->_L101[idx7].dmi_msg.x_text[idx6] = ' ';
    }
    outC->_L101[idx7].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L101[idx7].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L97 = kcg_true;
  outC->_L96 = kcg_true;
  outC->_L94 = kcg_lit_int32(0);
  outC->_L93 = kcg_true;
  outC->_L91 = kcg_lit_int32(0);
  for (idx8 = 0; idx8 < 5; idx8++) {
    outC->_L85[idx8] = kcg_lit_float32(0.0);
  }
  for (idx9 = 0; idx9 < 5; idx9++) {
    outC->_L84[idx9] = kcg_lit_float32(0.0);
  }
  outC->_L80 = kcg_true;
  outC->_L76 = kcg_lit_int32(0);
  outC->_L70 = kcg_true;
  for (idx10 = 0; idx10 < 5; idx10++) {
    outC->_L33[idx10] = kcg_lit_float32(0.0);
  }
  for (idx11 = 0; idx11 < 5; idx11++) {
    outC->_L32[idx11] = kcg_lit_float32(0.0);
  }
  outC->_L27 = kcg_true;
  for (idx13 = 0; idx13 < 5; idx13++) {
    outC->_L25[idx13].present = kcg_true;
    outC->_L25[idx13].dmi_msg.valid = kcg_true;
    outC->_L25[idx13].dmi_msg.system_clock = kcg_lit_int32(0);
    outC->_L25[idx13].dmi_msg.textMessage_ID = kcg_lit_int32(0);
    outC->_L25[idx13].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L25[idx13].dmi_msg.l_text = kcg_lit_int32(0);
    for (idx12 = 0; idx12 < 255; idx12++) {
      outC->_L25[idx13].dmi_msg.x_text[idx12] = ' ';
    }
    outC->_L25[idx13].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L25[idx13].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (idx15 = 0; idx15 < 5; idx15++) {
    outC->_L19[idx15].present = kcg_true;
    outC->_L19[idx15].dmi_msg.valid = kcg_true;
    outC->_L19[idx15].dmi_msg.system_clock = kcg_lit_int32(0);
    outC->_L19[idx15].dmi_msg.textMessage_ID = kcg_lit_int32(0);
    outC->_L19[idx15].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L19[idx15].dmi_msg.l_text = kcg_lit_int32(0);
    for (idx14 = 0; idx14 < 255; idx14++) {
      outC->_L19[idx15].dmi_msg.x_text[idx14] = ' ';
    }
    outC->_L19[idx15].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L19[idx15].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L6 = kcg_lit_int32(0);
  outC->LocalNum = kcg_lit_int32(0);
  outC->init = kcg_true;
  for (idx16 = 0; idx16 < 5; idx16++) {
    outC->new_hh[idx16] = kcg_lit_float32(0.0);
  }
  for (idx17 = 0; idx17 < 5; idx17++) {
    outC->new_mm[idx17] = kcg_lit_float32(0.0);
  }
  outC->NumE = kcg_lit_int32(0);
  for (idx19 = 0; idx19 < 5; idx19++) {
    outC->queue[idx19].present = kcg_true;
    outC->queue[idx19].dmi_msg.valid = kcg_true;
    outC->queue[idx19].dmi_msg.system_clock = kcg_lit_int32(0);
    outC->queue[idx19].dmi_msg.textMessage_ID = kcg_lit_int32(0);
    outC->queue[idx19].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->queue[idx19].dmi_msg.l_text = kcg_lit_int32(0);
    for (idx18 = 0; idx18 < 255; idx18++) {
      outC->queue[idx19].dmi_msg.x_text[idx18] = ' ';
    }
    outC->queue[idx19].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->queue[idx19].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  /* _L108=(DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Delete_Op_Ack#1)/ */
  FIFO_Delete_Op_Ack_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_FIFO_Delete_Op_Ack_1);
  /* _L109=(DMI_Control_Pkg::Sub_func::TextMessages::FIFO_delete_time_Ack#1)/ */
  FIFO_delete_time_Ack_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_FIFO_delete_time_Ack_1);
  outC->ack_is_Empty = kcg_false;
  outC->mem_local_num_ack = kcg_lit_int32(0);
  kcg_copy__82_array(
    &outC->mem_localQueue,
    (_82_array *) &cMsgStructQueue_DMI_Control_Pkg);
}
#endif /* KCG_USER_DEFINED_INIT */


void DeleteAckMsg_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->init = kcg_true;
  /* _L108=(DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Delete_Op_Ack#1)/ */
  FIFO_Delete_Op_Ack_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_FIFO_Delete_Op_Ack_1);
  /* _L109=(DMI_Control_Pkg::Sub_func::TextMessages::FIFO_delete_time_Ack#1)/ */
  FIFO_delete_time_Ack_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_FIFO_delete_time_Ack_1);
  outC->ack_is_Empty = kcg_false;
  outC->mem_local_num_ack = kcg_lit_int32(0);
  kcg_copy__82_array(
    &outC->mem_localQueue,
    (_82_array *) &cMsgStructQueue_DMI_Control_Pkg);
}


void kcg_save_SV_DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages(
  SV_DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages *SV,
  outC_DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  kcg_save_SV_FIFO_delete_time_Ack_DMI_Control_Pkg_Sub_func_TextMessages(
    &SV->Context_FIFO_delete_time_Ack_1,
    &outC->Context_FIFO_delete_time_Ack_1);
  SV->Context_ack_is_Empty = outC->ack_is_Empty;
  kcg_copy_array_float32_5(&SV->Context_new_hh, &outC->new_hh);
  kcg_copy_array_float32_5(&SV->Context_new_mm, &outC->new_mm);
  SV->Context_NumE = outC->NumE;
  kcg_copy__82_array(&SV->Context_queue, &outC->queue);
  SV->Context_init = outC->init;
  SV->Context_mem_local_num_ack = outC->mem_local_num_ack;
  kcg_copy__82_array(&SV->Context_mem_localQueue, &outC->mem_localQueue);
}

void kcg_load_SV_DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC,
  SV_DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages *SV)
{
  kcg_load_SV_FIFO_delete_time_Ack_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_FIFO_delete_time_Ack_1,
    &SV->Context_FIFO_delete_time_Ack_1);
  outC->ack_is_Empty = SV->Context_ack_is_Empty;
  kcg_copy_array_float32_5(&outC->new_hh, &SV->Context_new_hh);
  kcg_copy_array_float32_5(&outC->new_mm, &SV->Context_new_mm);
  outC->NumE = SV->Context_NumE;
  kcg_copy__82_array(&outC->queue, &SV->Context_queue);
  outC->init = SV->Context_init;
  outC->mem_local_num_ack = SV->Context_mem_local_num_ack;
  kcg_copy__82_array(&outC->mem_localQueue, &SV->Context_mem_localQueue);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** DeleteAckMsg_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

