/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SortMsgTopDown_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::SortMsgTopDown/ */
void SortMsgTopDown_DMI_Control_Pkg_Sub_func_TextMessages(
  /* index/ */
  kcg_int32 index,
  /* acc/ */
  _94_array *acc,
  /* Queue/ */
  _94_array *Queue,
  /* numE/ */
  kcg_int32 numE,
  outC_SortMsgTopDown_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  kcg_copy__94_array(&outC->_L35, acc);
  kcg_copy_MsgStructure(
    &outC->_L34,
    (MsgStructure *) &cMsgStructure_DMI_Control_Pkg);
  kcg_copy__94_array(&outC->_L33, Queue);
  outC->_L31 = index;
  outC->_L29 = numE;
  outC->_L27 = cDIM_MSGQueueMax_DMI_Control_Pkg;
  outC->_L28 = outC->_L27 - outC->_L29;
  outC->_L30 = outC->_L28 + outC->_L31;
  if ((kcg_lit_int32(0) <= outC->_L30) & (outC->_L30 < kcg_lit_int32(10))) {
    kcg_copy_MsgStructure(&outC->_L32, &outC->_L33[outC->_L30]);
  }
  else {
    kcg_copy_MsgStructure(&outC->_L32, &outC->_L34);
  }
  kcg_copy__94_array(&outC->_L26, acc);
  kcg_copy_MsgStructure(
    &outC->_L24,
    (MsgStructure *) &cMsgStructure_DMI_Control_Pkg);
  kcg_copy_MsgStructure(
    &outC->_L23,
    (MsgStructure *) &cMsgStructure_DMI_Control_Pkg);
  outC->_L22 = index;
  kcg_copy__94_array(&outC->_L21, acc);
  if ((kcg_lit_int32(0) <= outC->_L22) & (outC->_L22 < kcg_lit_int32(10))) {
    kcg_copy_MsgStructure(&outC->_L20, &outC->_L21[outC->_L22]);
  }
  else {
    kcg_copy_MsgStructure(&outC->_L20, &outC->_L23);
  }
  outC->_L25 = !kcg_comp_MsgStructure(&outC->_L20, &outC->_L24);
  outC->_L2 = index;
  kcg_copy__94_array(&outC->_L19, &outC->_L35);
  if ((kcg_lit_int32(0) <= outC->_L2) & (outC->_L2 < kcg_lit_int32(10))) {
    kcg_copy_MsgStructure(&outC->_L19[outC->_L2], &outC->_L32);
  }
  /* _L4= */
  if (outC->_L25) {
    kcg_copy__94_array(&outC->_L4, &outC->_L26);
  }
  else {
    kcg_copy__94_array(&outC->_L4, &outC->_L19);
  }
  kcg_copy__94_array(&outC->outArray, &outC->_L4);
}

#ifndef KCG_USER_DEFINED_INIT
void SortMsgTopDown_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_SortMsgTopDown_DMI_Control_Pkg_Sub_func_TextMessages *outC)
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
    outC->_L35[idx1].present = kcg_true;
    outC->_L35[idx1].dmi_msg.valid = kcg_true;
    outC->_L35[idx1].dmi_msg.system_clock = kcg_lit_int32(0);
    outC->_L35[idx1].dmi_msg.textMessage_ID = kcg_lit_int32(0);
    outC->_L35[idx1].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L35[idx1].dmi_msg.l_text = kcg_lit_int32(0);
    for (idx = 0; idx < 255; idx++) {
      outC->_L35[idx1].dmi_msg.x_text[idx] = ' ';
    }
    outC->_L35[idx1].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L35[idx1].dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L34.present = kcg_true;
  outC->_L34.dmi_msg.valid = kcg_true;
  outC->_L34.dmi_msg.system_clock = kcg_lit_int32(0);
  outC->_L34.dmi_msg.textMessage_ID = kcg_lit_int32(0);
  outC->_L34.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L34.dmi_msg.l_text = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 255; idx2++) {
    outC->_L34.dmi_msg.x_text[idx2] = ' ';
  }
  outC->_L34.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L34.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  for (idx4 = 0; idx4 < 10; idx4++) {
    outC->_L33[idx4].present = kcg_true;
    outC->_L33[idx4].dmi_msg.valid = kcg_true;
    outC->_L33[idx4].dmi_msg.system_clock = kcg_lit_int32(0);
    outC->_L33[idx4].dmi_msg.textMessage_ID = kcg_lit_int32(0);
    outC->_L33[idx4].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L33[idx4].dmi_msg.l_text = kcg_lit_int32(0);
    for (idx3 = 0; idx3 < 255; idx3++) {
      outC->_L33[idx4].dmi_msg.x_text[idx3] = ' ';
    }
    outC->_L33[idx4].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L33[idx4].dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L32.present = kcg_true;
  outC->_L32.dmi_msg.valid = kcg_true;
  outC->_L32.dmi_msg.system_clock = kcg_lit_int32(0);
  outC->_L32.dmi_msg.textMessage_ID = kcg_lit_int32(0);
  outC->_L32.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L32.dmi_msg.l_text = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 255; idx5++) {
    outC->_L32.dmi_msg.x_text[idx5] = ' ';
  }
  outC->_L32.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L32.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L31 = kcg_lit_int32(0);
  outC->_L30 = kcg_lit_int32(0);
  outC->_L29 = kcg_lit_int32(0);
  outC->_L28 = kcg_lit_int32(0);
  outC->_L27 = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 10; idx7++) {
    outC->_L26[idx7].present = kcg_true;
    outC->_L26[idx7].dmi_msg.valid = kcg_true;
    outC->_L26[idx7].dmi_msg.system_clock = kcg_lit_int32(0);
    outC->_L26[idx7].dmi_msg.textMessage_ID = kcg_lit_int32(0);
    outC->_L26[idx7].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L26[idx7].dmi_msg.l_text = kcg_lit_int32(0);
    for (idx6 = 0; idx6 < 255; idx6++) {
      outC->_L26[idx7].dmi_msg.x_text[idx6] = ' ';
    }
    outC->_L26[idx7].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L26[idx7].dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L25 = kcg_true;
  outC->_L24.present = kcg_true;
  outC->_L24.dmi_msg.valid = kcg_true;
  outC->_L24.dmi_msg.system_clock = kcg_lit_int32(0);
  outC->_L24.dmi_msg.textMessage_ID = kcg_lit_int32(0);
  outC->_L24.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L24.dmi_msg.l_text = kcg_lit_int32(0);
  for (idx8 = 0; idx8 < 255; idx8++) {
    outC->_L24.dmi_msg.x_text[idx8] = ' ';
  }
  outC->_L24.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L24.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L20.present = kcg_true;
  outC->_L20.dmi_msg.valid = kcg_true;
  outC->_L20.dmi_msg.system_clock = kcg_lit_int32(0);
  outC->_L20.dmi_msg.textMessage_ID = kcg_lit_int32(0);
  outC->_L20.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L20.dmi_msg.l_text = kcg_lit_int32(0);
  for (idx9 = 0; idx9 < 255; idx9++) {
    outC->_L20.dmi_msg.x_text[idx9] = ' ';
  }
  outC->_L20.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L20.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  for (idx11 = 0; idx11 < 10; idx11++) {
    outC->_L21[idx11].present = kcg_true;
    outC->_L21[idx11].dmi_msg.valid = kcg_true;
    outC->_L21[idx11].dmi_msg.system_clock = kcg_lit_int32(0);
    outC->_L21[idx11].dmi_msg.textMessage_ID = kcg_lit_int32(0);
    outC->_L21[idx11].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L21[idx11].dmi_msg.l_text = kcg_lit_int32(0);
    for (idx10 = 0; idx10 < 255; idx10++) {
      outC->_L21[idx11].dmi_msg.x_text[idx10] = ' ';
    }
    outC->_L21[idx11].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L21[idx11].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L22 = kcg_lit_int32(0);
  outC->_L23.present = kcg_true;
  outC->_L23.dmi_msg.valid = kcg_true;
  outC->_L23.dmi_msg.system_clock = kcg_lit_int32(0);
  outC->_L23.dmi_msg.textMessage_ID = kcg_lit_int32(0);
  outC->_L23.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L23.dmi_msg.l_text = kcg_lit_int32(0);
  for (idx12 = 0; idx12 < 255; idx12++) {
    outC->_L23.dmi_msg.x_text[idx12] = ' ';
  }
  outC->_L23.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L23.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  for (idx14 = 0; idx14 < 10; idx14++) {
    outC->_L19[idx14].present = kcg_true;
    outC->_L19[idx14].dmi_msg.valid = kcg_true;
    outC->_L19[idx14].dmi_msg.system_clock = kcg_lit_int32(0);
    outC->_L19[idx14].dmi_msg.textMessage_ID = kcg_lit_int32(0);
    outC->_L19[idx14].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L19[idx14].dmi_msg.l_text = kcg_lit_int32(0);
    for (idx13 = 0; idx13 < 255; idx13++) {
      outC->_L19[idx14].dmi_msg.x_text[idx13] = ' ';
    }
    outC->_L19[idx14].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L19[idx14].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (idx16 = 0; idx16 < 10; idx16++) {
    outC->_L4[idx16].present = kcg_true;
    outC->_L4[idx16].dmi_msg.valid = kcg_true;
    outC->_L4[idx16].dmi_msg.system_clock = kcg_lit_int32(0);
    outC->_L4[idx16].dmi_msg.textMessage_ID = kcg_lit_int32(0);
    outC->_L4[idx16].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L4[idx16].dmi_msg.l_text = kcg_lit_int32(0);
    for (idx15 = 0; idx15 < 255; idx15++) {
      outC->_L4[idx16].dmi_msg.x_text[idx15] = ' ';
    }
    outC->_L4[idx16].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L4[idx16].dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L2 = kcg_lit_int32(0);
  for (idx18 = 0; idx18 < 10; idx18++) {
    outC->outArray[idx18].present = kcg_true;
    outC->outArray[idx18].dmi_msg.valid = kcg_true;
    outC->outArray[idx18].dmi_msg.system_clock = kcg_lit_int32(0);
    outC->outArray[idx18].dmi_msg.textMessage_ID = kcg_lit_int32(0);
    outC->outArray[idx18].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->outArray[idx18].dmi_msg.l_text = kcg_lit_int32(0);
    for (idx17 = 0; idx17 < 255; idx17++) {
      outC->outArray[idx18].dmi_msg.x_text[idx17] = ' ';
    }
    outC->outArray[idx18].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->outArray[idx18].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
}
#endif /* KCG_USER_DEFINED_INIT */


void SortMsgTopDown_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_SortMsgTopDown_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SortMsgTopDown_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

