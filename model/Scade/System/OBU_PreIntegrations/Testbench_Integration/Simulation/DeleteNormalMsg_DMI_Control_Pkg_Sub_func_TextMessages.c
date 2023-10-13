/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::DeleteNormalMsg/ */
void DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages(
  /* localQueue/ */
  _95_array *localQueue,
  /* hh_array/ */
  array_float64_10 *hh_array,
  /* mm_array/ */
  array_float64_10 *mm_array,
  /* local_num_ack/ */
  kcg_int64 local_num_ack,
  /* is_empty/ */
  kcg_bool is_empty,
  /* deleteMsg/ */
  kcg_bool deleteMsg,
  /* num/ */
  kcg_int64 num,
  outC_DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  /* MsgQueue/ */
  static _95_array last_MsgQueue;
  /* msg_is_Empty/ */
  static kcg_bool last_msg_is_Empty;
  /* new_hh/ */
  static array_float64_10 last_new_hh;
  /* new_mm/ */
  static array_float64_10 last_new_mm;
  /* NumE/ */
  static kcg_int64 last_NumE;
  /* local_num_ack/ */
  static kcg_int64 last_local_num_ack;
  /* localQueue/ */
  static _95_array last_localQueue;

  kcg_copy__95_array(&last_localQueue, &outC->mem_localQueue);
  kcg_copy__95_array(&outC->mem_localQueue, localQueue);
  last_local_num_ack = outC->mem_local_num_ack;
  outC->mem_local_num_ack = local_num_ack;
  kcg_copy__95_array(&last_MsgQueue, &outC->MsgQueue);
  last_msg_is_Empty = outC->msg_is_Empty;
  /* new_hh/ */
  if (outC->init) {
    kcg_copy_array_float64_10(&last_new_hh, hh_array);
  }
  else {
    kcg_copy_array_float64_10(&last_new_hh, &outC->new_hh);
  }
  /* new_mm/ */
  if (outC->init) {
    kcg_copy_array_float64_10(&last_new_mm, mm_array);
  }
  else {
    kcg_copy_array_float64_10(&last_new_mm, &outC->new_mm);
  }
  /* NumE/ */
  if (outC->init) {
    last_NumE = local_num_ack;
  }
  else {
    last_NumE = outC->NumE;
  }
  kcg_copy_array_float64_10(&outC->_L130, hh_array);
  kcg_copy_array_float64_10(&outC->_L131, mm_array);
  /* _L139=(DMI_Control_Pkg::Sub_func::TextMessages::FIFO_delete_time_Normal#1)/ */
  FIFO_delete_time_Normal_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_L130,
    &outC->_L131,
    &outC->Context_FIFO_delete_time_Normal_1);
  kcg_copy_array_float64_10(
    &outC->_L139,
    &outC->Context_FIFO_delete_time_Normal_1.new_mm_array);
  kcg_copy_array_float64_10(
    &outC->_L140,
    &outC->Context_FIFO_delete_time_Normal_1.new_hh_array);
  outC->_L111 = kcg_lit_int64(0);
  kcg_copy__95_array(&outC->_L125, localQueue);
  /* _L138=(DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Delete_Op_Normal#1)/ */
  FIFO_Delete_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages(
    outC->_L111,
    &outC->_L125,
    &outC->Context_FIFO_Delete_Op_Normal_1);
  kcg_copy__95_array(&outC->_L138, &outC->Context_FIFO_Delete_Op_Normal_1.Queue);
  outC->_L137 = deleteMsg;
  kcg_copy_array_float64_10(&outC->_L128, mm_array);
  /* _L134= */
  if (outC->_L137) {
    kcg_copy_array_float64_10(&outC->_L134, &outC->_L139);
  }
  else {
    kcg_copy_array_float64_10(&outC->_L134, &outC->_L128);
  }
  kcg_copy_array_float64_10(&outC->new_mm, &outC->_L134);
  kcg_copy_array_float64_10(&outC->_L129, hh_array);
  /* _L134= */
  if (outC->_L137) {
    kcg_copy_array_float64_10(&outC->_L135, &outC->_L140);
  }
  else {
    kcg_copy_array_float64_10(&outC->_L135, &outC->_L129);
  }
  kcg_copy_array_float64_10(&outC->new_hh, &outC->_L135);
  outC->_L123 = num;
  outC->_L110 = kcg_lit_int64(1);
  outC->_L121 = num;
  outC->_L118 = outC->_L121 - outC->_L110;
  outC->_L119 = deleteMsg;
  /* _L112= */
  if (outC->_L119) {
    outC->_L113 = outC->_L118;
  }
  else {
    outC->_L113 = outC->_L123;
  }
  outC->LocalNum = outC->_L113;
  kcg_copy__95_array(&outC->_L126, localQueue);
  /* _L112= */
  if (outC->_L119) {
    kcg_copy__95_array(&outC->_L112, &outC->_L138);
  }
  else {
    kcg_copy__95_array(&outC->_L112, &outC->_L126);
  }
  outC->NumE = outC->_L113;
  kcg_copy__95_array(&outC->MsgQueue, &outC->_L112);
  outC->_L94 = kcg_lit_int64(0);
  outC->_L91 = outC->LocalNum;
  outC->_L93 = outC->_L91 <= outC->_L94;
  outC->_L96 = is_empty;
  /* _L97= */
  if (outC->_L96) {
    outC->_L97 = outC->_L96;
  }
  else {
    outC->_L97 = outC->_L93;
  }
  outC->msg_is_Empty = outC->_L97;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void DeleteNormalMsg_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC)
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

  for (idx = 0; idx < 10; idx++) {
    outC->_L139[idx] = kcg_lit_float64(0.0);
  }
  for (idx1 = 0; idx1 < 10; idx1++) {
    outC->_L140[idx1] = kcg_lit_float64(0.0);
  }
  for (idx3 = 0; idx3 < 10; idx3++) {
    outC->_L138[idx3].present = kcg_true;
    outC->_L138[idx3].dmi_msg.valid = kcg_true;
    outC->_L138[idx3].dmi_msg.system_clock = kcg_lit_int64(0);
    outC->_L138[idx3].dmi_msg.textMessage_ID = kcg_lit_int64(0);
    outC->_L138[idx3].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L138[idx3].dmi_msg.l_text = kcg_lit_int64(0);
    for (idx2 = 0; idx2 < 255; idx2++) {
      outC->_L138[idx3].dmi_msg.x_text[idx2] = ' ';
    }
    outC->_L138[idx3].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L138[idx3].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L137 = kcg_true;
  for (idx4 = 0; idx4 < 10; idx4++) {
    outC->_L128[idx4] = kcg_lit_float64(0.0);
  }
  for (idx5 = 0; idx5 < 10; idx5++) {
    outC->_L129[idx5] = kcg_lit_float64(0.0);
  }
  for (idx6 = 0; idx6 < 10; idx6++) {
    outC->_L130[idx6] = kcg_lit_float64(0.0);
  }
  for (idx7 = 0; idx7 < 10; idx7++) {
    outC->_L131[idx7] = kcg_lit_float64(0.0);
  }
  for (idx8 = 0; idx8 < 10; idx8++) {
    outC->_L135[idx8] = kcg_lit_float64(0.0);
  }
  for (idx9 = 0; idx9 < 10; idx9++) {
    outC->_L134[idx9] = kcg_lit_float64(0.0);
  }
  for (idx11 = 0; idx11 < 10; idx11++) {
    outC->_L126[idx11].present = kcg_true;
    outC->_L126[idx11].dmi_msg.valid = kcg_true;
    outC->_L126[idx11].dmi_msg.system_clock = kcg_lit_int64(0);
    outC->_L126[idx11].dmi_msg.textMessage_ID = kcg_lit_int64(0);
    outC->_L126[idx11].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L126[idx11].dmi_msg.l_text = kcg_lit_int64(0);
    for (idx10 = 0; idx10 < 255; idx10++) {
      outC->_L126[idx11].dmi_msg.x_text[idx10] = ' ';
    }
    outC->_L126[idx11].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L126[idx11].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (idx13 = 0; idx13 < 10; idx13++) {
    outC->_L125[idx13].present = kcg_true;
    outC->_L125[idx13].dmi_msg.valid = kcg_true;
    outC->_L125[idx13].dmi_msg.system_clock = kcg_lit_int64(0);
    outC->_L125[idx13].dmi_msg.textMessage_ID = kcg_lit_int64(0);
    outC->_L125[idx13].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L125[idx13].dmi_msg.l_text = kcg_lit_int64(0);
    for (idx12 = 0; idx12 < 255; idx12++) {
      outC->_L125[idx13].dmi_msg.x_text[idx12] = ' ';
    }
    outC->_L125[idx13].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L125[idx13].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L123 = kcg_lit_int64(0);
  outC->_L121 = kcg_lit_int64(0);
  outC->_L119 = kcg_true;
  outC->_L110 = kcg_lit_int64(0);
  outC->_L111 = kcg_lit_int64(0);
  outC->_L113 = kcg_lit_int64(0);
  for (idx15 = 0; idx15 < 10; idx15++) {
    outC->_L112[idx15].present = kcg_true;
    outC->_L112[idx15].dmi_msg.valid = kcg_true;
    outC->_L112[idx15].dmi_msg.system_clock = kcg_lit_int64(0);
    outC->_L112[idx15].dmi_msg.textMessage_ID = kcg_lit_int64(0);
    outC->_L112[idx15].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L112[idx15].dmi_msg.l_text = kcg_lit_int64(0);
    for (idx14 = 0; idx14 < 255; idx14++) {
      outC->_L112[idx15].dmi_msg.x_text[idx14] = ' ';
    }
    outC->_L112[idx15].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L112[idx15].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L118 = kcg_lit_int64(0);
  outC->_L97 = kcg_true;
  outC->_L96 = kcg_true;
  outC->_L94 = kcg_lit_int64(0);
  outC->_L93 = kcg_true;
  outC->_L91 = kcg_lit_int64(0);
  outC->LocalNum = kcg_lit_int64(0);
  outC->init = kcg_true;
  for (idx16 = 0; idx16 < 10; idx16++) {
    outC->new_hh[idx16] = kcg_lit_float64(0.0);
  }
  for (idx17 = 0; idx17 < 10; idx17++) {
    outC->new_mm[idx17] = kcg_lit_float64(0.0);
  }
  outC->NumE = kcg_lit_int64(0);
  /* _L138=(DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Delete_Op_Normal#1)/ */
  FIFO_Delete_Op_Normal_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_FIFO_Delete_Op_Normal_1);
  /* _L139=(DMI_Control_Pkg::Sub_func::TextMessages::FIFO_delete_time_Normal#1)/ */
  FIFO_delete_time_Normal_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_FIFO_delete_time_Normal_1);
  outC->msg_is_Empty = kcg_false;
  kcg_copy__95_array(
    &outC->MsgQueue,
    (_95_array *) &cMsgStructQueueMax_DMI_Control_Pkg);
  outC->mem_local_num_ack = kcg_lit_int64(0);
  kcg_copy__95_array(
    &outC->mem_localQueue,
    (_95_array *) &cMsgStructQueueMax_DMI_Control_Pkg);
}
#endif /* KCG_USER_DEFINED_INIT */


void DeleteNormalMsg_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->init = kcg_true;
  /* _L138=(DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Delete_Op_Normal#1)/ */
  FIFO_Delete_Op_Normal_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_FIFO_Delete_Op_Normal_1);
  /* _L139=(DMI_Control_Pkg::Sub_func::TextMessages::FIFO_delete_time_Normal#1)/ */
  FIFO_delete_time_Normal_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_FIFO_delete_time_Normal_1);
  outC->msg_is_Empty = kcg_false;
  kcg_copy__95_array(
    &outC->MsgQueue,
    (_95_array *) &cMsgStructQueueMax_DMI_Control_Pkg);
  outC->mem_local_num_ack = kcg_lit_int64(0);
  kcg_copy__95_array(
    &outC->mem_localQueue,
    (_95_array *) &cMsgStructQueueMax_DMI_Control_Pkg);
}


void kcg_save_SV_DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages(
  SV_DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages *SV,
  outC_DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  kcg_save_SV_FIFO_delete_time_Normal_DMI_Control_Pkg_Sub_func_TextMessages(
    &SV->Context_FIFO_delete_time_Normal_1,
    &outC->Context_FIFO_delete_time_Normal_1);
  kcg_copy__95_array(&SV->Context_MsgQueue, &outC->MsgQueue);
  SV->Context_msg_is_Empty = outC->msg_is_Empty;
  kcg_copy_array_float64_10(&SV->Context_new_hh, &outC->new_hh);
  kcg_copy_array_float64_10(&SV->Context_new_mm, &outC->new_mm);
  SV->Context_NumE = outC->NumE;
  SV->Context_init = outC->init;
  SV->Context_mem_local_num_ack = outC->mem_local_num_ack;
  kcg_copy__95_array(&SV->Context_mem_localQueue, &outC->mem_localQueue);
}

void kcg_load_SV_DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC,
  SV_DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages *SV)
{
  kcg_load_SV_FIFO_delete_time_Normal_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_FIFO_delete_time_Normal_1,
    &SV->Context_FIFO_delete_time_Normal_1);
  kcg_copy__95_array(&outC->MsgQueue, &SV->Context_MsgQueue);
  outC->msg_is_Empty = SV->Context_msg_is_Empty;
  kcg_copy_array_float64_10(&outC->new_hh, &SV->Context_new_hh);
  kcg_copy_array_float64_10(&outC->new_mm, &SV->Context_new_mm);
  outC->NumE = SV->Context_NumE;
  outC->init = SV->Context_init;
  outC->mem_local_num_ack = SV->Context_mem_local_num_ack;
  kcg_copy__95_array(&outC->mem_localQueue, &SV->Context_mem_localQueue);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** DeleteNormalMsg_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

