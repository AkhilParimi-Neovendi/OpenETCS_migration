/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Insert_Op_Normal/ */
void FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages(
  /* Pos/ */
  kcg_int64 Pos,
  /* Messaggio/ */
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *Messaggio,
  /* new_mm/ */
  kcg_float64 new_mm,
  /* new_hh/ */
  kcg_float64 new_hh,
  /* isFull/ */
  kcg_bool isFull,
  outC_FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static _95_array acc;
  static kcg_size idx7;
  static kcg_int64 noname;
  /* mm_array/ */
  static array_float64_10 last_mm_array;
  /* hh_array/ */
  static array_float64_10 last_hh_array;
  /* queue/ */
  static _95_array last_queue;

  kcg_copy_array_float64_10(&last_mm_array, &outC->mm_array);
  kcg_copy_array_float64_10(&last_hh_array, &outC->hh_array);
  kcg_copy__95_array(&last_queue, &outC->queue);
  kcg_copy__95_array(&outC->_L36, &last_queue);
  outC->_L29 = isFull;
  /* _L31/ */
  for (idx = 0; idx < 10; idx++) {
    outC->_L31[idx] = outC->_L29;
  }
  outC->_L18 = Pos;
  /* _L26/ */
  for (idx1 = 0; idx1 < 10; idx1++) {
    outC->_L26[idx1] = outC->_L18;
  }
  outC->_L20 = new_hh;
  /* _L25/ */
  for (idx2 = 0; idx2 < 10; idx2++) {
    outC->_L25[idx2] = outC->_L20;
  }
  outC->_L17 = new_mm;
  /* _L19/ */
  for (idx3 = 0; idx3 < 10; idx3++) {
    outC->_L19[idx3] = outC->_L17;
  }
  outC->_L21 = kcg_true;
  /* _L22= */
  if (outC->_L21) {
    /* _L22= */
    for (idx4 = 0; idx4 < 10; idx4++) {
      /* _L22=(DMI_Control_Pkg::Sub_func::TextMessages::InsertTime_iterator#1)/ */
      InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages(
        /* _L22= */(kcg_int64) idx4,
        outC->_L26[idx4],
        outC->_L25[idx4],
        outC->_L19[idx4],
        &outC->Context_InsertTime_iterator_1[idx4]);
      outC->_L23[idx4] = outC->Context_InsertTime_iterator_1[idx4].hh;
      outC->_L24[idx4] = outC->Context_InsertTime_iterator_1[idx4].mm;
      outC->_L22 = /* _L22= */(kcg_int64) (idx4 + 1);
      /* _L22= */
      if (!outC->Context_InsertTime_iterator_1[idx4].condition) {
        break;
      }
    }
  }
  else {
    outC->_L22 = kcg_lit_int64(0);
  }
#ifdef KCG_MAPW_CPY

  /* _L22= */
  for (idx4 = /* _L22= */(kcg_size) outC->_L22; idx4 < 10; idx4++) {
    outC->_L23[idx4] = kcg_lit_float64(-1.0);
    outC->_L24[idx4] = kcg_lit_float64(-1.0);
  }
#endif /* KCG_MAPW_CPY */

  kcg_copy_array_float64_10(&outC->mm_array, &outC->_L24);
  kcg_copy_array_float64_10(&outC->hh_array, &outC->_L23);
  noname = outC->_L22;
  outC->_L5 = Pos;
  /* _L9/ */
  for (idx5 = 0; idx5 < 10; idx5++) {
    outC->_L9[idx5] = outC->_L5;
  }
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(&outC->_L4, Messaggio);
  /* _L7/ */
  for (idx6 = 0; idx6 < 10; idx6++) {
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L7[idx6],
      &outC->_L4);
  }
  kcg_copy__95_array(&outC->_L34, &outC->_L36);
  /* _L34= */
  for (idx7 = 0; idx7 < 10; idx7++) {
    kcg_copy__95_array(&acc, &outC->_L34);
    /* _L34=(DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_normal#1)/ */
    InsertStructMSGFIFO_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages(
      /* _L34= */(kcg_int64) idx7,
      &acc,
      outC->_L9[idx7],
      &outC->_L7[idx7],
      outC->_L31[idx7],
      &outC->Context_InsertStructMSGFIFO_iterator_normal_1[idx7]);
    kcg_copy__95_array(
      &outC->_L34,
      &outC->Context_InsertStructMSGFIFO_iterator_normal_1[idx7].OutputArray);
  }
  kcg_copy__95_array(&outC->queue, &outC->_L34);
}

#ifndef KCG_USER_DEFINED_INIT
void FIFO_Insert_Op_Normal_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages *outC)
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

  for (idx3 = 0; idx3 < 10; idx3++) {
    outC->_L36[idx3].present = kcg_true;
    outC->_L36[idx3].dmi_msg.valid = kcg_true;
    outC->_L36[idx3].dmi_msg.system_clock = kcg_lit_int64(0);
    outC->_L36[idx3].dmi_msg.textMessage_ID = kcg_lit_int64(0);
    outC->_L36[idx3].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L36[idx3].dmi_msg.l_text = kcg_lit_int64(0);
    for (idx2 = 0; idx2 < 255; idx2++) {
      outC->_L36[idx3].dmi_msg.x_text[idx2] = ' ';
    }
    outC->_L36[idx3].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L36[idx3].dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (idx5 = 0; idx5 < 10; idx5++) {
    outC->_L34[idx5].present = kcg_true;
    outC->_L34[idx5].dmi_msg.valid = kcg_true;
    outC->_L34[idx5].dmi_msg.system_clock = kcg_lit_int64(0);
    outC->_L34[idx5].dmi_msg.textMessage_ID = kcg_lit_int64(0);
    outC->_L34[idx5].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L34[idx5].dmi_msg.l_text = kcg_lit_int64(0);
    for (idx4 = 0; idx4 < 255; idx4++) {
      outC->_L34[idx5].dmi_msg.x_text[idx4] = ' ';
    }
    outC->_L34[idx5].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L34[idx5].dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (idx6 = 0; idx6 < 10; idx6++) {
    outC->_L31[idx6] = kcg_true;
  }
  outC->_L29 = kcg_true;
  outC->_L17 = kcg_lit_float64(0.0);
  outC->_L18 = kcg_lit_int64(0);
  for (idx7 = 0; idx7 < 10; idx7++) {
    outC->_L19[idx7] = kcg_lit_float64(0.0);
  }
  outC->_L20 = kcg_lit_float64(0.0);
  outC->_L21 = kcg_true;
  for (idx8 = 0; idx8 < 10; idx8++) {
    outC->_L24[idx8] = kcg_lit_float64(0.0);
  }
  for (idx9 = 0; idx9 < 10; idx9++) {
    outC->_L23[idx9] = kcg_lit_float64(0.0);
  }
  outC->_L22 = kcg_lit_int64(0);
  for (idx10 = 0; idx10 < 10; idx10++) {
    outC->_L25[idx10] = kcg_lit_float64(0.0);
  }
  for (idx11 = 0; idx11 < 10; idx11++) {
    outC->_L26[idx11] = kcg_lit_int64(0);
  }
  for (idx12 = 0; idx12 < 10; idx12++) {
    outC->_L9[idx12] = kcg_lit_int64(0);
  }
  for (idx14 = 0; idx14 < 10; idx14++) {
    outC->_L7[idx14].valid = kcg_true;
    outC->_L7[idx14].system_clock = kcg_lit_int64(0);
    outC->_L7[idx14].textMessage_ID = kcg_lit_int64(0);
    outC->_L7[idx14].q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L7[idx14].l_text = kcg_lit_int64(0);
    for (idx13 = 0; idx13 < 255; idx13++) {
      outC->_L7[idx14].x_text[idx13] = ' ';
    }
    outC->_L7[idx14].q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L7[idx14].q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L5 = kcg_lit_int64(0);
  outC->_L4.valid = kcg_true;
  outC->_L4.system_clock = kcg_lit_int64(0);
  outC->_L4.textMessage_ID = kcg_lit_int64(0);
  outC->_L4.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L4.l_text = kcg_lit_int64(0);
  for (idx15 = 0; idx15 < 255; idx15++) {
    outC->_L4.x_text[idx15] = ' ';
  }
  outC->_L4.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L4.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  for (idx1 = 0; idx1 < 10; idx1++) {
    /* _L34=(DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_normal#1)/ */
    InsertStructMSGFIFO_iterator_normal_init_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->Context_InsertStructMSGFIFO_iterator_normal_1[idx1]);
  }
  for (idx = 0; idx < 10; idx++) {
    /* _L22=(DMI_Control_Pkg::Sub_func::TextMessages::InsertTime_iterator#1)/ */
    InsertTime_iterator_init_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->Context_InsertTime_iterator_1[idx]);
  }
  kcg_copy__95_array(
    &outC->queue,
    (_95_array *) &cMsgStructQueueMax_DMI_Control_Pkg);
  kcg_copy_array_float64_10(
    &outC->hh_array,
    (array_float64_10 *) &cArray_hh_leer_DMI_Control_Pkg);
  kcg_copy_array_float64_10(
    &outC->mm_array,
    (array_float64_10 *) &cArray_mm_leer_DMI_Control_Pkg);
}
#endif /* KCG_USER_DEFINED_INIT */


void FIFO_Insert_Op_Normal_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  for (idx1 = 0; idx1 < 10; idx1++) {
    /* _L34=(DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_normal#1)/ */
    InsertStructMSGFIFO_iterator_normal_reset_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->Context_InsertStructMSGFIFO_iterator_normal_1[idx1]);
  }
  for (idx = 0; idx < 10; idx++) {
    /* _L22=(DMI_Control_Pkg::Sub_func::TextMessages::InsertTime_iterator#1)/ */
    InsertTime_iterator_reset_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->Context_InsertTime_iterator_1[idx]);
  }
  kcg_copy__95_array(
    &outC->queue,
    (_95_array *) &cMsgStructQueueMax_DMI_Control_Pkg);
  kcg_copy_array_float64_10(
    &outC->hh_array,
    (array_float64_10 *) &cArray_hh_leer_DMI_Control_Pkg);
  kcg_copy_array_float64_10(
    &outC->mm_array,
    (array_float64_10 *) &cArray_mm_leer_DMI_Control_Pkg);
}


void kcg_save_SV_FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages(
  SV_FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages *SV,
  outC_FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static ptrdiff_t i1;
  static ptrdiff_t i;

  for (i1 = 0; i1 < 10; i1++) {
    kcg_save_SV_InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages(
      &SV->Context_InsertTime_iterator_1[i1],
      &outC->Context_InsertTime_iterator_1[i1]);
  }
  for (i = 0; i < 10; i++) {
    kcg_save_SV_InsertStructMSGFIFO_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages(
      &SV->Context_InsertStructMSGFIFO_iterator_normal_1[i],
      &outC->Context_InsertStructMSGFIFO_iterator_normal_1[i]);
  }
  kcg_copy_array_float64_10(&SV->Context_mm_array, &outC->mm_array);
  kcg_copy_array_float64_10(&SV->Context_hh_array, &outC->hh_array);
  kcg_copy__95_array(&SV->Context_queue, &outC->queue);
}

void kcg_load_SV_FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages *outC,
  SV_FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages *SV)
{
  static ptrdiff_t i1;
  static ptrdiff_t i;

  for (i1 = 0; i1 < 10; i1++) {
    kcg_load_SV_InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->Context_InsertTime_iterator_1[i1],
      &SV->Context_InsertTime_iterator_1[i1]);
  }
  for (i = 0; i < 10; i++) {
    kcg_load_SV_InsertStructMSGFIFO_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->Context_InsertStructMSGFIFO_iterator_normal_1[i],
      &SV->Context_InsertStructMSGFIFO_iterator_normal_1[i]);
  }
  kcg_copy_array_float64_10(&outC->mm_array, &SV->Context_mm_array);
  kcg_copy_array_float64_10(&outC->hh_array, &SV->Context_hh_array);
  kcg_copy__95_array(&outC->queue, &SV->Context_queue);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** FIFO_Insert_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

