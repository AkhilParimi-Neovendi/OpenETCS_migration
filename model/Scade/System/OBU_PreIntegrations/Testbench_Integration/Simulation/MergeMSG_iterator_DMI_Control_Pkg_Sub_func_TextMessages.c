/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MergeMSG_iterator_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::MergeMSG_iterator/ */
void MergeMSG_iterator_DMI_Control_Pkg_Sub_func_TextMessages(
  /* index/ */
  kcg_int64 index,
  /* acc/ */
  _95_array *acc,
  /* ImpmsgArray/ */
  _95_array *ImpmsgArray,
  /* numAuxi/ */
  kcg_int64 numAuxi,
  /* auximsgArray/ */
  _95_array *auximsgArray,
  outC_MergeMSG_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  kcg_copy__95_array(&outC->_L38, acc);
  kcg_copy__95_array(&outC->_L37, auximsgArray);
  kcg_copy_MsgStructure(
    &outC->_L36,
    (MsgStructure *) &cMsgStructure_DMI_Control_Pkg);
  kcg_copy_MsgStructure(
    &outC->_L34,
    (MsgStructure *) &cMsgStructure_DMI_Control_Pkg);
  outC->_L33 = index;
  if ((kcg_lit_int64(0) <= outC->_L33) & (outC->_L33 < kcg_lit_int64(10))) {
    kcg_copy_MsgStructure(&outC->_L32, &outC->_L37[outC->_L33]);
  }
  else {
    kcg_copy_MsgStructure(&outC->_L32, &outC->_L34);
  }
  outC->_L35 = !kcg_comp_MsgStructure(&outC->_L32, &outC->_L36);
  kcg_copy_MsgStructure(
    &outC->_L29,
    (MsgStructure *) &cMsgStructure_DMI_Control_Pkg);
  outC->_L25 = numAuxi;
  kcg_copy__95_array(&outC->_L24, ImpmsgArray);
  outC->_L22 = index;
  outC->_L21 = index;
  outC->_L13 = outC->_L22 - outC->_L25;
  if ((kcg_lit_int64(0) <= outC->_L13) & (outC->_L13 < kcg_lit_int64(10))) {
    kcg_copy_MsgStructure(&outC->_L11, &outC->_L24[outC->_L13]);
  }
  else {
    kcg_copy_MsgStructure(&outC->_L11, &outC->_L29);
  }
  kcg_copy__95_array(&outC->_L12, acc);
  kcg_copy__95_array(&outC->_L15, &outC->_L12);
  if ((kcg_lit_int64(0) <= outC->_L21) & (outC->_L21 < kcg_lit_int64(10))) {
    kcg_copy_MsgStructure(&outC->_L15[outC->_L21], &outC->_L11);
  }
  /* _L5= */
  if (outC->_L35) {
    kcg_copy__95_array(&outC->_L5, &outC->_L38);
  }
  else {
    kcg_copy__95_array(&outC->_L5, &outC->_L15);
  }
  kcg_copy__95_array(&outC->OutputArray, &outC->_L5);
}

#ifndef KCG_USER_DEFINED_INIT
void MergeMSG_iterator_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MergeMSG_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC)
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

  for (idx1 = 0; idx1 < 10; idx1++) {
    outC->_L38[idx1].present = kcg_true;
    outC->_L38[idx1].dmi_msg.valid = kcg_true;
    outC->_L38[idx1].dmi_msg.system_clock = kcg_lit_int64(0);
    outC->_L38[idx1].dmi_msg.textMessage_ID = kcg_lit_int64(0);
    outC->_L38[idx1].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L38[idx1].dmi_msg.l_text = kcg_lit_int64(0);
    for (idx = 0; idx < 255; idx++) {
      outC->_L38[idx1].dmi_msg.x_text[idx] = ' ';
    }
    outC->_L38[idx1].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L38[idx1].dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (idx3 = 0; idx3 < 10; idx3++) {
    outC->_L37[idx3].present = kcg_true;
    outC->_L37[idx3].dmi_msg.valid = kcg_true;
    outC->_L37[idx3].dmi_msg.system_clock = kcg_lit_int64(0);
    outC->_L37[idx3].dmi_msg.textMessage_ID = kcg_lit_int64(0);
    outC->_L37[idx3].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L37[idx3].dmi_msg.l_text = kcg_lit_int64(0);
    for (idx2 = 0; idx2 < 255; idx2++) {
      outC->_L37[idx3].dmi_msg.x_text[idx2] = ' ';
    }
    outC->_L37[idx3].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L37[idx3].dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L36.present = kcg_true;
  outC->_L36.dmi_msg.valid = kcg_true;
  outC->_L36.dmi_msg.system_clock = kcg_lit_int64(0);
  outC->_L36.dmi_msg.textMessage_ID = kcg_lit_int64(0);
  outC->_L36.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L36.dmi_msg.l_text = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 255; idx4++) {
    outC->_L36.dmi_msg.x_text[idx4] = ' ';
  }
  outC->_L36.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L36.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L35 = kcg_true;
  outC->_L34.present = kcg_true;
  outC->_L34.dmi_msg.valid = kcg_true;
  outC->_L34.dmi_msg.system_clock = kcg_lit_int64(0);
  outC->_L34.dmi_msg.textMessage_ID = kcg_lit_int64(0);
  outC->_L34.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L34.dmi_msg.l_text = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 255; idx5++) {
    outC->_L34.dmi_msg.x_text[idx5] = ' ';
  }
  outC->_L34.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L34.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L33 = kcg_lit_int64(0);
  outC->_L32.present = kcg_true;
  outC->_L32.dmi_msg.valid = kcg_true;
  outC->_L32.dmi_msg.system_clock = kcg_lit_int64(0);
  outC->_L32.dmi_msg.textMessage_ID = kcg_lit_int64(0);
  outC->_L32.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L32.dmi_msg.l_text = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 255; idx6++) {
    outC->_L32.dmi_msg.x_text[idx6] = ' ';
  }
  outC->_L32.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L32.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L29.present = kcg_true;
  outC->_L29.dmi_msg.valid = kcg_true;
  outC->_L29.dmi_msg.system_clock = kcg_lit_int64(0);
  outC->_L29.dmi_msg.textMessage_ID = kcg_lit_int64(0);
  outC->_L29.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L29.dmi_msg.l_text = kcg_lit_int64(0);
  for (idx7 = 0; idx7 < 255; idx7++) {
    outC->_L29.dmi_msg.x_text[idx7] = ' ';
  }
  outC->_L29.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L29.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L25 = kcg_lit_int64(0);
  for (idx9 = 0; idx9 < 10; idx9++) {
    outC->_L24[idx9].present = kcg_true;
    outC->_L24[idx9].dmi_msg.valid = kcg_true;
    outC->_L24[idx9].dmi_msg.system_clock = kcg_lit_int64(0);
    outC->_L24[idx9].dmi_msg.textMessage_ID = kcg_lit_int64(0);
    outC->_L24[idx9].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L24[idx9].dmi_msg.l_text = kcg_lit_int64(0);
    for (idx8 = 0; idx8 < 255; idx8++) {
      outC->_L24[idx9].dmi_msg.x_text[idx8] = ' ';
    }
    outC->_L24[idx9].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L24[idx9].dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L22 = kcg_lit_int64(0);
  outC->_L21 = kcg_lit_int64(0);
  outC->_L11.present = kcg_true;
  outC->_L11.dmi_msg.valid = kcg_true;
  outC->_L11.dmi_msg.system_clock = kcg_lit_int64(0);
  outC->_L11.dmi_msg.textMessage_ID = kcg_lit_int64(0);
  outC->_L11.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L11.dmi_msg.l_text = kcg_lit_int64(0);
  for (idx10 = 0; idx10 < 255; idx10++) {
    outC->_L11.dmi_msg.x_text[idx10] = ' ';
  }
  outC->_L11.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L11.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  for (idx12 = 0; idx12 < 10; idx12++) {
    outC->_L12[idx12].present = kcg_true;
    outC->_L12[idx12].dmi_msg.valid = kcg_true;
    outC->_L12[idx12].dmi_msg.system_clock = kcg_lit_int64(0);
    outC->_L12[idx12].dmi_msg.textMessage_ID = kcg_lit_int64(0);
    outC->_L12[idx12].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L12[idx12].dmi_msg.l_text = kcg_lit_int64(0);
    for (idx11 = 0; idx11 < 255; idx11++) {
      outC->_L12[idx12].dmi_msg.x_text[idx11] = ' ';
    }
    outC->_L12[idx12].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L12[idx12].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L13 = kcg_lit_int64(0);
  for (idx14 = 0; idx14 < 10; idx14++) {
    outC->_L15[idx14].present = kcg_true;
    outC->_L15[idx14].dmi_msg.valid = kcg_true;
    outC->_L15[idx14].dmi_msg.system_clock = kcg_lit_int64(0);
    outC->_L15[idx14].dmi_msg.textMessage_ID = kcg_lit_int64(0);
    outC->_L15[idx14].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L15[idx14].dmi_msg.l_text = kcg_lit_int64(0);
    for (idx13 = 0; idx13 < 255; idx13++) {
      outC->_L15[idx14].dmi_msg.x_text[idx13] = ' ';
    }
    outC->_L15[idx14].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L15[idx14].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (idx16 = 0; idx16 < 10; idx16++) {
    outC->_L5[idx16].present = kcg_true;
    outC->_L5[idx16].dmi_msg.valid = kcg_true;
    outC->_L5[idx16].dmi_msg.system_clock = kcg_lit_int64(0);
    outC->_L5[idx16].dmi_msg.textMessage_ID = kcg_lit_int64(0);
    outC->_L5[idx16].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L5[idx16].dmi_msg.l_text = kcg_lit_int64(0);
    for (idx15 = 0; idx15 < 255; idx15++) {
      outC->_L5[idx16].dmi_msg.x_text[idx15] = ' ';
    }
    outC->_L5[idx16].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L5[idx16].dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (idx18 = 0; idx18 < 10; idx18++) {
    outC->OutputArray[idx18].present = kcg_true;
    outC->OutputArray[idx18].dmi_msg.valid = kcg_true;
    outC->OutputArray[idx18].dmi_msg.system_clock = kcg_lit_int64(0);
    outC->OutputArray[idx18].dmi_msg.textMessage_ID = kcg_lit_int64(0);
    outC->OutputArray[idx18].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->OutputArray[idx18].dmi_msg.l_text = kcg_lit_int64(0);
    for (idx17 = 0; idx17 < 255; idx17++) {
      outC->OutputArray[idx18].dmi_msg.x_text[idx17] = ' ';
    }
    outC->OutputArray[idx18].dmi_msg.q_textClass =
      Q_TEXTCLASS_Auxiliary_Information;
    outC->OutputArray[idx18].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
}
#endif /* KCG_USER_DEFINED_INIT */


void MergeMSG_iterator_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MergeMSG_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MergeMSG_iterator_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

