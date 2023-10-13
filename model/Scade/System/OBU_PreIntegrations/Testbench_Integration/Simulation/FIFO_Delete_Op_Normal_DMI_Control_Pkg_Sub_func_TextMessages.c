/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FIFO_Delete_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::FIFO_Delete_Op_Normal/ */
void FIFO_Delete_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DeletePos/ */
  kcg_int64 DeletePos,
  /* queueIn/ */
  _95_array *queueIn,
  outC_FIFO_Delete_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  kcg_copy_MsgStructure(
    &outC->_L9[0],
    (MsgStructure *) &cMsgStructure_DMI_Control_Pkg);
  kcg_copy__95_array(&outC->_L7, queueIn);
  kcg_copy__36_array(&outC->_L8, (_36_array *) &outC->_L7[1]);
  kcg_copy__36_array(&outC->_L6[0], &outC->_L8);
  kcg_copy_MsgStructure(&outC->_L6[9], &outC->_L9[0]);
  kcg_copy__95_array(&outC->_L5, queueIn);
  outC->_L2 = DeletePos;
  /* _L3/ */
  for (idx = 0; idx < 10; idx++) {
    outC->_L3[idx] = outC->_L2;
  }
  /* _L1= */
  for (idx1 = 0; idx1 < 10; idx1++) {
    /* _L1=(DMI_Control_Pkg::Sub_func::TextMessages::DeleteMSGFIFO_iterator#1)/ */
    DeleteMSGFIFO_iterator_DMI_Control_Pkg_Sub_func_TextMessages(
      /* _L1= */(kcg_int64) idx1,
      &outC->_L5[idx1],
      &outC->_L6[idx1],
      outC->_L3[idx1],
      &outC->Context_DeleteMSGFIFO_iterator_1[idx1]);
    kcg_copy_MsgStructure(
      &outC->_L1[idx1],
      &outC->Context_DeleteMSGFIFO_iterator_1[idx1].QueueElemOut);
  }
  kcg_copy__95_array(&outC->Queue, &outC->_L1);
}

#ifndef KCG_USER_DEFINED_INIT
void FIFO_Delete_Op_Normal_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_FIFO_Delete_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages *outC)
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

  for (idx2 = 0; idx2 < 1; idx2++) {
    outC->_L9[idx2].present = kcg_true;
    outC->_L9[idx2].dmi_msg.valid = kcg_true;
    outC->_L9[idx2].dmi_msg.system_clock = kcg_lit_int64(0);
    outC->_L9[idx2].dmi_msg.textMessage_ID = kcg_lit_int64(0);
    outC->_L9[idx2].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L9[idx2].dmi_msg.l_text = kcg_lit_int64(0);
    for (idx1 = 0; idx1 < 255; idx1++) {
      outC->_L9[idx2].dmi_msg.x_text[idx1] = ' ';
    }
    outC->_L9[idx2].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L9[idx2].dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (idx4 = 0; idx4 < 9; idx4++) {
    outC->_L8[idx4].present = kcg_true;
    outC->_L8[idx4].dmi_msg.valid = kcg_true;
    outC->_L8[idx4].dmi_msg.system_clock = kcg_lit_int64(0);
    outC->_L8[idx4].dmi_msg.textMessage_ID = kcg_lit_int64(0);
    outC->_L8[idx4].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L8[idx4].dmi_msg.l_text = kcg_lit_int64(0);
    for (idx3 = 0; idx3 < 255; idx3++) {
      outC->_L8[idx4].dmi_msg.x_text[idx3] = ' ';
    }
    outC->_L8[idx4].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L8[idx4].dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (idx6 = 0; idx6 < 10; idx6++) {
    outC->_L7[idx6].present = kcg_true;
    outC->_L7[idx6].dmi_msg.valid = kcg_true;
    outC->_L7[idx6].dmi_msg.system_clock = kcg_lit_int64(0);
    outC->_L7[idx6].dmi_msg.textMessage_ID = kcg_lit_int64(0);
    outC->_L7[idx6].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L7[idx6].dmi_msg.l_text = kcg_lit_int64(0);
    for (idx5 = 0; idx5 < 255; idx5++) {
      outC->_L7[idx6].dmi_msg.x_text[idx5] = ' ';
    }
    outC->_L7[idx6].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L7[idx6].dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (idx8 = 0; idx8 < 10; idx8++) {
    outC->_L6[idx8].present = kcg_true;
    outC->_L6[idx8].dmi_msg.valid = kcg_true;
    outC->_L6[idx8].dmi_msg.system_clock = kcg_lit_int64(0);
    outC->_L6[idx8].dmi_msg.textMessage_ID = kcg_lit_int64(0);
    outC->_L6[idx8].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L6[idx8].dmi_msg.l_text = kcg_lit_int64(0);
    for (idx7 = 0; idx7 < 255; idx7++) {
      outC->_L6[idx8].dmi_msg.x_text[idx7] = ' ';
    }
    outC->_L6[idx8].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L6[idx8].dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (idx10 = 0; idx10 < 10; idx10++) {
    outC->_L5[idx10].present = kcg_true;
    outC->_L5[idx10].dmi_msg.valid = kcg_true;
    outC->_L5[idx10].dmi_msg.system_clock = kcg_lit_int64(0);
    outC->_L5[idx10].dmi_msg.textMessage_ID = kcg_lit_int64(0);
    outC->_L5[idx10].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L5[idx10].dmi_msg.l_text = kcg_lit_int64(0);
    for (idx9 = 0; idx9 < 255; idx9++) {
      outC->_L5[idx10].dmi_msg.x_text[idx9] = ' ';
    }
    outC->_L5[idx10].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L5[idx10].dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (idx11 = 0; idx11 < 10; idx11++) {
    outC->_L3[idx11] = kcg_lit_int64(0);
  }
  outC->_L2 = kcg_lit_int64(0);
  for (idx13 = 0; idx13 < 10; idx13++) {
    outC->_L1[idx13].present = kcg_true;
    outC->_L1[idx13].dmi_msg.valid = kcg_true;
    outC->_L1[idx13].dmi_msg.system_clock = kcg_lit_int64(0);
    outC->_L1[idx13].dmi_msg.textMessage_ID = kcg_lit_int64(0);
    outC->_L1[idx13].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L1[idx13].dmi_msg.l_text = kcg_lit_int64(0);
    for (idx12 = 0; idx12 < 255; idx12++) {
      outC->_L1[idx13].dmi_msg.x_text[idx12] = ' ';
    }
    outC->_L1[idx13].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L1[idx13].dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (idx15 = 0; idx15 < 10; idx15++) {
    outC->Queue[idx15].present = kcg_true;
    outC->Queue[idx15].dmi_msg.valid = kcg_true;
    outC->Queue[idx15].dmi_msg.system_clock = kcg_lit_int64(0);
    outC->Queue[idx15].dmi_msg.textMessage_ID = kcg_lit_int64(0);
    outC->Queue[idx15].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->Queue[idx15].dmi_msg.l_text = kcg_lit_int64(0);
    for (idx14 = 0; idx14 < 255; idx14++) {
      outC->Queue[idx15].dmi_msg.x_text[idx14] = ' ';
    }
    outC->Queue[idx15].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->Queue[idx15].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (idx = 0; idx < 10; idx++) {
    /* _L1=(DMI_Control_Pkg::Sub_func::TextMessages::DeleteMSGFIFO_iterator#1)/ */
    DeleteMSGFIFO_iterator_init_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->Context_DeleteMSGFIFO_iterator_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


void FIFO_Delete_Op_Normal_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_FIFO_Delete_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 10; idx++) {
    /* _L1=(DMI_Control_Pkg::Sub_func::TextMessages::DeleteMSGFIFO_iterator#1)/ */
    DeleteMSGFIFO_iterator_reset_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->Context_DeleteMSGFIFO_iterator_1[idx]);
  }
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** FIFO_Delete_Op_Normal_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

