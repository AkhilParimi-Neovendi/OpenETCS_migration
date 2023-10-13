/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InsertStructMSGFIFO_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_normal/ */
void InsertStructMSGFIFO_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages(
  /* index/ */
  kcg_int64 index,
  /* acc/ */
  _95_array *acc,
  /* Position/ */
  kcg_int64 Position,
  /* newMsg/ */
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *newMsg,
  /* isFull/ */
  kcg_bool isFull,
  outC_InsertStructMSGFIFO_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  /* OutputArray/ */
  static _95_array last_OutputArray;

  kcg_copy__95_array(&last_OutputArray, &outC->OutputArray);
  outC->_L72 = Position;
  outC->_L70 = index;
  outC->_L69 = outC->_L70 == outC->_L72;
  outC->_L84 = isFull;
  outC->_L85 = outC->_L84 & outC->_L69;
  outC->_L82 = isFull;
  outC->_L83 = !outC->_L82;
  outC->_L2 = Position;
  outC->_L1 = index;
  outC->_L4 = outC->_L1 == outC->_L2;
  outC->_L81 = outC->_L4 & outC->_L83;
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(&outC->_L80, newMsg);
  outC->_L79 = kcg_true;
  outC->_L77.present = outC->_L79;
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L77.dmi_msg,
    &outC->_L80);
  outC->_L76 = index;
  kcg_copy__95_array(&outC->_L75, acc);
  kcg_copy__95_array(&outC->_L78, &outC->_L75);
  if ((kcg_lit_int64(0) <= outC->_L76) & (outC->_L76 < kcg_lit_int64(10))) {
    kcg_copy_MsgStructure(&outC->_L78[outC->_L76], &outC->_L77);
  }
  kcg_copy__95_array(&outC->_L63, acc);
  /* _L74= */
  if (outC->_L85) {
    kcg_copy__95_array(&outC->_L74, &outC->_L78);
  }
  else {
    kcg_copy__95_array(&outC->_L74, &outC->_L63);
  }
  outC->_L44 = kcg_lit_int64(1);
  outC->_L42 = index;
  outC->_L43 = outC->_L42 + outC->_L44;
  kcg_copy_MsgStructure(
    &outC->_L41,
    (MsgStructure *) &cMsgStructure_DMI_Control_Pkg);
  kcg_copy__95_array(&outC->_L40, acc);
  if ((kcg_lit_int64(0) <= outC->_L43) & (outC->_L43 < kcg_lit_int64(10))) {
    kcg_copy_MsgStructure(&outC->_L39, &outC->_L40[outC->_L43]);
  }
  else {
    kcg_copy_MsgStructure(&outC->_L39, &outC->_L41);
  }
  outC->_L38 = index;
  kcg_copy__95_array(&outC->_L22, acc);
  kcg_copy__95_array(&outC->_L26, &outC->_L22);
  if ((kcg_lit_int64(0) <= outC->_L38) & (outC->_L38 < kcg_lit_int64(10))) {
    kcg_copy_MsgStructure(&outC->_L26[outC->_L38], &outC->_L39);
  }
  outC->_L33 = isFull;
  outC->_L32 = Position;
  outC->_L30 = index;
  outC->_L29 = outC->_L30 < outC->_L32;
  outC->_L31 = outC->_L29 & outC->_L33;
  /* _L35= */
  if (outC->_L31) {
    kcg_copy__95_array(&outC->_L35, &outC->_L26);
  }
  else {
    kcg_copy__95_array(&outC->_L35, &outC->_L74);
  }
  outC->_L20 = index;
  outC->_L13 = kcg_true;
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(&outC->_L3, newMsg);
  outC->_L12.present = outC->_L13;
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L12.dmi_msg,
    &outC->_L3);
  kcg_copy__95_array(&outC->_L14, acc);
  kcg_copy__95_array(&outC->_L19, &outC->_L14);
  if ((kcg_lit_int64(0) <= outC->_L20) & (outC->_L20 < kcg_lit_int64(10))) {
    kcg_copy_MsgStructure(&outC->_L19[outC->_L20], &outC->_L12);
  }
  /* _L6= */
  if (outC->_L81) {
    kcg_copy__95_array(&outC->_L6, &outC->_L19);
  }
  else {
    kcg_copy__95_array(&outC->_L6, &outC->_L35);
  }
  kcg_copy__95_array(&outC->OutputArray, &outC->_L6);
}

#ifndef KCG_USER_DEFINED_INIT
void InsertStructMSGFIFO_iterator_normal_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_InsertStructMSGFIFO_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages *outC)
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
  static kcg_size idx24;
  static kcg_size idx25;
  static kcg_size idx26;
  static kcg_size idx27;

  outC->_L85 = kcg_true;
  outC->_L84 = kcg_true;
  outC->_L83 = kcg_true;
  outC->_L82 = kcg_true;
  outC->_L81 = kcg_true;
  for (idx1 = 0; idx1 < 10; idx1++) {
    outC->_L75[idx1].present = kcg_true;
    outC->_L75[idx1].dmi_msg.valid = kcg_true;
    outC->_L75[idx1].dmi_msg.system_clock = kcg_lit_int64(0);
    outC->_L75[idx1].dmi_msg.textMessage_ID = kcg_lit_int64(0);
    outC->_L75[idx1].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L75[idx1].dmi_msg.l_text = kcg_lit_int64(0);
    for (idx = 0; idx < 255; idx++) {
      outC->_L75[idx1].dmi_msg.x_text[idx] = ' ';
    }
    outC->_L75[idx1].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L75[idx1].dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L76 = kcg_lit_int64(0);
  outC->_L77.present = kcg_true;
  outC->_L77.dmi_msg.valid = kcg_true;
  outC->_L77.dmi_msg.system_clock = kcg_lit_int64(0);
  outC->_L77.dmi_msg.textMessage_ID = kcg_lit_int64(0);
  outC->_L77.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L77.dmi_msg.l_text = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 255; idx2++) {
    outC->_L77.dmi_msg.x_text[idx2] = ' ';
  }
  outC->_L77.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L77.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  for (idx4 = 0; idx4 < 10; idx4++) {
    outC->_L78[idx4].present = kcg_true;
    outC->_L78[idx4].dmi_msg.valid = kcg_true;
    outC->_L78[idx4].dmi_msg.system_clock = kcg_lit_int64(0);
    outC->_L78[idx4].dmi_msg.textMessage_ID = kcg_lit_int64(0);
    outC->_L78[idx4].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L78[idx4].dmi_msg.l_text = kcg_lit_int64(0);
    for (idx3 = 0; idx3 < 255; idx3++) {
      outC->_L78[idx4].dmi_msg.x_text[idx3] = ' ';
    }
    outC->_L78[idx4].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L78[idx4].dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L79 = kcg_true;
  outC->_L80.valid = kcg_true;
  outC->_L80.system_clock = kcg_lit_int64(0);
  outC->_L80.textMessage_ID = kcg_lit_int64(0);
  outC->_L80.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L80.l_text = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 255; idx5++) {
    outC->_L80.x_text[idx5] = ' ';
  }
  outC->_L80.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L80.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  for (idx7 = 0; idx7 < 10; idx7++) {
    outC->_L74[idx7].present = kcg_true;
    outC->_L74[idx7].dmi_msg.valid = kcg_true;
    outC->_L74[idx7].dmi_msg.system_clock = kcg_lit_int64(0);
    outC->_L74[idx7].dmi_msg.textMessage_ID = kcg_lit_int64(0);
    outC->_L74[idx7].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L74[idx7].dmi_msg.l_text = kcg_lit_int64(0);
    for (idx6 = 0; idx6 < 255; idx6++) {
      outC->_L74[idx7].dmi_msg.x_text[idx6] = ' ';
    }
    outC->_L74[idx7].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L74[idx7].dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L69 = kcg_true;
  outC->_L70 = kcg_lit_int64(0);
  outC->_L72 = kcg_lit_int64(0);
  for (idx9 = 0; idx9 < 10; idx9++) {
    outC->_L63[idx9].present = kcg_true;
    outC->_L63[idx9].dmi_msg.valid = kcg_true;
    outC->_L63[idx9].dmi_msg.system_clock = kcg_lit_int64(0);
    outC->_L63[idx9].dmi_msg.textMessage_ID = kcg_lit_int64(0);
    outC->_L63[idx9].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L63[idx9].dmi_msg.l_text = kcg_lit_int64(0);
    for (idx8 = 0; idx8 < 255; idx8++) {
      outC->_L63[idx9].dmi_msg.x_text[idx8] = ' ';
    }
    outC->_L63[idx9].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L63[idx9].dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L44 = kcg_lit_int64(0);
  outC->_L43 = kcg_lit_int64(0);
  outC->_L42 = kcg_lit_int64(0);
  outC->_L41.present = kcg_true;
  outC->_L41.dmi_msg.valid = kcg_true;
  outC->_L41.dmi_msg.system_clock = kcg_lit_int64(0);
  outC->_L41.dmi_msg.textMessage_ID = kcg_lit_int64(0);
  outC->_L41.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L41.dmi_msg.l_text = kcg_lit_int64(0);
  for (idx10 = 0; idx10 < 255; idx10++) {
    outC->_L41.dmi_msg.x_text[idx10] = ' ';
  }
  outC->_L41.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L41.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  for (idx12 = 0; idx12 < 10; idx12++) {
    outC->_L40[idx12].present = kcg_true;
    outC->_L40[idx12].dmi_msg.valid = kcg_true;
    outC->_L40[idx12].dmi_msg.system_clock = kcg_lit_int64(0);
    outC->_L40[idx12].dmi_msg.textMessage_ID = kcg_lit_int64(0);
    outC->_L40[idx12].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L40[idx12].dmi_msg.l_text = kcg_lit_int64(0);
    for (idx11 = 0; idx11 < 255; idx11++) {
      outC->_L40[idx12].dmi_msg.x_text[idx11] = ' ';
    }
    outC->_L40[idx12].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L40[idx12].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L39.present = kcg_true;
  outC->_L39.dmi_msg.valid = kcg_true;
  outC->_L39.dmi_msg.system_clock = kcg_lit_int64(0);
  outC->_L39.dmi_msg.textMessage_ID = kcg_lit_int64(0);
  outC->_L39.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L39.dmi_msg.l_text = kcg_lit_int64(0);
  for (idx13 = 0; idx13 < 255; idx13++) {
    outC->_L39.dmi_msg.x_text[idx13] = ' ';
  }
  outC->_L39.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L39.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L38 = kcg_lit_int64(0);
  for (idx15 = 0; idx15 < 10; idx15++) {
    outC->_L35[idx15].present = kcg_true;
    outC->_L35[idx15].dmi_msg.valid = kcg_true;
    outC->_L35[idx15].dmi_msg.system_clock = kcg_lit_int64(0);
    outC->_L35[idx15].dmi_msg.textMessage_ID = kcg_lit_int64(0);
    outC->_L35[idx15].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L35[idx15].dmi_msg.l_text = kcg_lit_int64(0);
    for (idx14 = 0; idx14 < 255; idx14++) {
      outC->_L35[idx15].dmi_msg.x_text[idx14] = ' ';
    }
    outC->_L35[idx15].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L35[idx15].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L29 = kcg_true;
  outC->_L30 = kcg_lit_int64(0);
  outC->_L31 = kcg_true;
  outC->_L32 = kcg_lit_int64(0);
  outC->_L33 = kcg_true;
  for (idx17 = 0; idx17 < 10; idx17++) {
    outC->_L22[idx17].present = kcg_true;
    outC->_L22[idx17].dmi_msg.valid = kcg_true;
    outC->_L22[idx17].dmi_msg.system_clock = kcg_lit_int64(0);
    outC->_L22[idx17].dmi_msg.textMessage_ID = kcg_lit_int64(0);
    outC->_L22[idx17].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L22[idx17].dmi_msg.l_text = kcg_lit_int64(0);
    for (idx16 = 0; idx16 < 255; idx16++) {
      outC->_L22[idx17].dmi_msg.x_text[idx16] = ' ';
    }
    outC->_L22[idx17].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L22[idx17].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (idx19 = 0; idx19 < 10; idx19++) {
    outC->_L26[idx19].present = kcg_true;
    outC->_L26[idx19].dmi_msg.valid = kcg_true;
    outC->_L26[idx19].dmi_msg.system_clock = kcg_lit_int64(0);
    outC->_L26[idx19].dmi_msg.textMessage_ID = kcg_lit_int64(0);
    outC->_L26[idx19].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L26[idx19].dmi_msg.l_text = kcg_lit_int64(0);
    for (idx18 = 0; idx18 < 255; idx18++) {
      outC->_L26[idx19].dmi_msg.x_text[idx18] = ' ';
    }
    outC->_L26[idx19].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L26[idx19].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L20 = kcg_lit_int64(0);
  for (idx21 = 0; idx21 < 10; idx21++) {
    outC->_L19[idx21].present = kcg_true;
    outC->_L19[idx21].dmi_msg.valid = kcg_true;
    outC->_L19[idx21].dmi_msg.system_clock = kcg_lit_int64(0);
    outC->_L19[idx21].dmi_msg.textMessage_ID = kcg_lit_int64(0);
    outC->_L19[idx21].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L19[idx21].dmi_msg.l_text = kcg_lit_int64(0);
    for (idx20 = 0; idx20 < 255; idx20++) {
      outC->_L19[idx21].dmi_msg.x_text[idx20] = ' ';
    }
    outC->_L19[idx21].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L19[idx21].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L3.valid = kcg_true;
  outC->_L3.system_clock = kcg_lit_int64(0);
  outC->_L3.textMessage_ID = kcg_lit_int64(0);
  outC->_L3.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L3.l_text = kcg_lit_int64(0);
  for (idx22 = 0; idx22 < 255; idx22++) {
    outC->_L3.x_text[idx22] = ' ';
  }
  outC->_L3.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L3.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L12.present = kcg_true;
  outC->_L12.dmi_msg.valid = kcg_true;
  outC->_L12.dmi_msg.system_clock = kcg_lit_int64(0);
  outC->_L12.dmi_msg.textMessage_ID = kcg_lit_int64(0);
  outC->_L12.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L12.dmi_msg.l_text = kcg_lit_int64(0);
  for (idx23 = 0; idx23 < 255; idx23++) {
    outC->_L12.dmi_msg.x_text[idx23] = ' ';
  }
  outC->_L12.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L12.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L13 = kcg_true;
  for (idx25 = 0; idx25 < 10; idx25++) {
    outC->_L14[idx25].present = kcg_true;
    outC->_L14[idx25].dmi_msg.valid = kcg_true;
    outC->_L14[idx25].dmi_msg.system_clock = kcg_lit_int64(0);
    outC->_L14[idx25].dmi_msg.textMessage_ID = kcg_lit_int64(0);
    outC->_L14[idx25].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L14[idx25].dmi_msg.l_text = kcg_lit_int64(0);
    for (idx24 = 0; idx24 < 255; idx24++) {
      outC->_L14[idx25].dmi_msg.x_text[idx24] = ' ';
    }
    outC->_L14[idx25].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L14[idx25].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (idx27 = 0; idx27 < 10; idx27++) {
    outC->_L6[idx27].present = kcg_true;
    outC->_L6[idx27].dmi_msg.valid = kcg_true;
    outC->_L6[idx27].dmi_msg.system_clock = kcg_lit_int64(0);
    outC->_L6[idx27].dmi_msg.textMessage_ID = kcg_lit_int64(0);
    outC->_L6[idx27].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L6[idx27].dmi_msg.l_text = kcg_lit_int64(0);
    for (idx26 = 0; idx26 < 255; idx26++) {
      outC->_L6[idx27].dmi_msg.x_text[idx26] = ' ';
    }
    outC->_L6[idx27].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L6[idx27].dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L4 = kcg_true;
  outC->_L2 = kcg_lit_int64(0);
  outC->_L1 = kcg_lit_int64(0);
  kcg_copy__95_array(
    &outC->OutputArray,
    (_95_array *) &cMsgStructQueueMax_DMI_Control_Pkg);
}
#endif /* KCG_USER_DEFINED_INIT */


void InsertStructMSGFIFO_iterator_normal_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_InsertStructMSGFIFO_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  kcg_copy__95_array(
    &outC->OutputArray,
    (_95_array *) &cMsgStructQueueMax_DMI_Control_Pkg);
}


void kcg_save_SV_InsertStructMSGFIFO_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages(
  SV_InsertStructMSGFIFO_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages *SV,
  outC_InsertStructMSGFIFO_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  kcg_copy__95_array(&SV->Context_OutputArray, &outC->OutputArray);
}

void kcg_load_SV_InsertStructMSGFIFO_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_InsertStructMSGFIFO_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages *outC,
  SV_InsertStructMSGFIFO_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages *SV)
{
  kcg_copy__95_array(&outC->OutputArray, &SV->Context_OutputArray);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** InsertStructMSGFIFO_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

