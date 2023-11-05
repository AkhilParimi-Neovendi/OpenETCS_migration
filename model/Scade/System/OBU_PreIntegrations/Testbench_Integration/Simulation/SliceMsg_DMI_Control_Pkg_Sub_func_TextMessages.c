/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::SliceMsg/ */
void SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages(
  /* Input/ */
  MsgStructure *Input1,
  outC_SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  kcg_copy_array_char_30_5(
    &outC->_L91,
    (array_char_30_5 *) &cPlainText_fix_DMI_Control_Pkg);
  kcg_copy_array_char_30(
    &outC->_L79,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  kcg_copy_array_char_30(&outC->_L81[0], &outC->_L79);
  kcg_copy_array_char_30(&outC->_L81[1], &outC->_L79);
  kcg_copy_array_char_30(&outC->_L81[2], &outC->_L79);
  kcg_copy_array_char_30(&outC->_L81[3], &outC->_L79);
  kcg_copy_array_char_30(&outC->_L81[4], &outC->_L79);
  kcg_copy_MsgStructure(
    &outC->_L88,
    (MsgStructure *) &cMsgStructure_fix_DMI_Control_Pkg);
  kcg_copy_MsgStructure(&outC->_L83, Input1);
  outC->_L86 = kcg_comp_MsgStructure(&outC->_L83, &outC->_L88);
  /* _L89= */
  if (outC->_L86) {
    kcg_copy_array_char_30_5(&outC->_L89, &outC->_L91);
  }
  else {
    kcg_copy_array_char_30_5(&outC->_L89, &outC->_L81);
  }
  kcg_copy_MsgStructure(&outC->_L66, Input1);
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L71,
    &outC->_L66.dmi_msg);
  kcg_copy_DMI_TEXT_DMI_Types_Pkg(&outC->_L73, &outC->_L71.x_text);
  kcg_copy_array_char_30(&outC->_L78, (array_char_30 *) &outC->_L73[0]);
  kcg_copy_array_char_30(&outC->_L76, (array_char_30 *) &outC->_L73[30]);
  kcg_copy_array_char_30(&outC->_L75, (array_char_30 *) &outC->_L73[60]);
  kcg_copy_array_char_30(&outC->_L77, (array_char_30 *) &outC->_L73[90]);
  kcg_copy_array_char_30(&outC->_L6, (array_char_30 *) &outC->_L73[120]);
  kcg_copy_array_char_30(&outC->_L80[0], &outC->_L78);
  kcg_copy_array_char_30(&outC->_L80[1], &outC->_L76);
  kcg_copy_array_char_30(&outC->_L80[2], &outC->_L75);
  kcg_copy_array_char_30(&outC->_L80[3], &outC->_L77);
  kcg_copy_array_char_30(&outC->_L80[4], &outC->_L6);
  outC->_L72 = kcg_lit_int32(90);
  outC->_L67 = outC->_L71.l_text;
  outC->_L69 = outC->_L67 > outC->_L72;
  outC->_L65 = kcg_lit_int32(120);
  outC->_L68 = outC->_L67 <= outC->_L65;
  outC->_L70 = outC->_L68 & outC->_L69;
  /* _L64= */
  if (outC->_L70) {
    kcg_copy_array_char_30_5(&outC->_L64, &outC->_L80);
  }
  else {
    kcg_copy_array_char_30_5(&outC->_L64, &outC->_L89);
  }
  kcg_copy_MsgStructure(&outC->_L53, Input1);
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L56,
    &outC->_L53.dmi_msg);
  kcg_copy_DMI_TEXT_DMI_Types_Pkg(&outC->_L58, &outC->_L56.x_text);
  kcg_copy_array_char_30(&outC->_L62, (array_char_30 *) &outC->_L58[0]);
  kcg_copy_array_char_30(&outC->_L61, (array_char_30 *) &outC->_L58[30]);
  kcg_copy_array_char_30(&outC->_L60, (array_char_30 *) &outC->_L58[60]);
  kcg_copy_array_char_30(&outC->_L5, (array_char_30 *) &outC->_L58[90]);
  kcg_copy_array_char_30(
    &outC->_L59,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  kcg_copy_array_char_30(&outC->_L63[0], &outC->_L62);
  kcg_copy_array_char_30(&outC->_L63[1], &outC->_L61);
  kcg_copy_array_char_30(&outC->_L63[2], &outC->_L60);
  kcg_copy_array_char_30(&outC->_L63[3], &outC->_L5);
  kcg_copy_array_char_30(&outC->_L63[4], &outC->_L59);
  outC->_L54 = kcg_lit_int32(90);
  outC->_L51 = outC->_L56.l_text;
  outC->_L57 = outC->_L51 > outC->_L54;
  outC->_L55 = kcg_lit_int32(120);
  outC->_L50 = outC->_L51 <= outC->_L55;
  outC->_L52 = outC->_L50 & outC->_L57;
  /* _L49= */
  if (outC->_L52) {
    kcg_copy_array_char_30_5(&outC->_L49, &outC->_L63);
  }
  else {
    kcg_copy_array_char_30_5(&outC->_L49, &outC->_L64);
  }
  kcg_copy_MsgStructure(&outC->_L37, Input1);
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L42,
    &outC->_L37.dmi_msg);
  kcg_copy_DMI_TEXT_DMI_Types_Pkg(&outC->_L44, &outC->_L42.x_text);
  kcg_copy_array_char_30(&outC->_L45, (array_char_30 *) &outC->_L44[0]);
  kcg_copy_array_char_30(&outC->_L46, (array_char_30 *) &outC->_L44[30]);
  kcg_copy_array_char_30(&outC->_L4, (array_char_30 *) &outC->_L44[60]);
  kcg_copy_array_char_30(
    &outC->_L47,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  kcg_copy_array_char_30(&outC->_L48[0], &outC->_L45);
  kcg_copy_array_char_30(&outC->_L48[1], &outC->_L46);
  kcg_copy_array_char_30(&outC->_L48[2], &outC->_L4);
  kcg_copy_array_char_30(&outC->_L48[3], &outC->_L47);
  kcg_copy_array_char_30(&outC->_L48[4], &outC->_L47);
  outC->_L39 = kcg_lit_int32(60);
  outC->_L36 = outC->_L42.l_text;
  outC->_L43 = outC->_L36 > outC->_L39;
  outC->_L40 = kcg_lit_int32(90);
  outC->_L38 = outC->_L36 <= outC->_L40;
  outC->_L41 = outC->_L38 & outC->_L43;
  /* _L35= */
  if (outC->_L41) {
    kcg_copy_array_char_30_5(&outC->_L35, &outC->_L48);
  }
  else {
    kcg_copy_array_char_30_5(&outC->_L35, &outC->_L49);
  }
  kcg_copy_array_char_30(
    &outC->_L34,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  kcg_copy_MsgStructure(&outC->_L18, Input1);
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L19,
    &outC->_L18.dmi_msg);
  kcg_copy_DMI_TEXT_DMI_Types_Pkg(&outC->_L31, &outC->_L19.x_text);
  kcg_copy_array_char_30(&outC->_L32, (array_char_30 *) &outC->_L31[0]);
  kcg_copy_array_char_30(&outC->_L3, (array_char_30 *) &outC->_L31[30]);
  kcg_copy_array_char_30(&outC->_L33[0], &outC->_L32);
  kcg_copy_array_char_30(&outC->_L33[1], &outC->_L3);
  kcg_copy_array_char_30(&outC->_L33[2], &outC->_L34);
  kcg_copy_array_char_30(&outC->_L33[3], &outC->_L34);
  kcg_copy_array_char_30(&outC->_L33[4], &outC->_L34);
  outC->_L23 = kcg_lit_int32(30);
  outC->_L24 = outC->_L19.l_text;
  outC->_L22 = outC->_L24 > outC->_L23;
  outC->_L26 = kcg_lit_int32(60);
  outC->_L25 = outC->_L24 <= outC->_L26;
  outC->_L21 = outC->_L25 & outC->_L22;
  /* _L30= */
  if (outC->_L21) {
    kcg_copy_array_char_30_5(&outC->_L30, &outC->_L33);
  }
  else {
    kcg_copy_array_char_30_5(&outC->_L30, &outC->_L35);
  }
  kcg_copy_array_char_30(
    &outC->_L29,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  kcg_copy_MsgStructure(&outC->_L1, Input1);
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L8,
    &outC->_L1.dmi_msg);
  kcg_copy_DMI_TEXT_DMI_Types_Pkg(&outC->_L9, &outC->_L8.x_text);
  kcg_copy_array_char_30(&outC->_L2, (array_char_30 *) &outC->_L9[0]);
  kcg_copy_array_char_30(&outC->_L28[0], &outC->_L2);
  kcg_copy_array_char_30(&outC->_L28[1], &outC->_L29);
  kcg_copy_array_char_30(&outC->_L28[2], &outC->_L29);
  kcg_copy_array_char_30(&outC->_L28[3], &outC->_L29);
  kcg_copy_array_char_30(&outC->_L28[4], &outC->_L29);
  outC->_L13 = kcg_lit_int32(0);
  outC->_L10 = outC->_L8.l_text;
  outC->_L12 = outC->_L10 > outC->_L13;
  outC->_L14 = kcg_lit_int32(30);
  outC->_L11 = outC->_L10 <= outC->_L14;
  outC->_L15 = outC->_L11 & outC->_L12;
  /* _L16= */
  if (outC->_L15) {
    kcg_copy_array_char_30_5(&outC->_L16, &outC->_L28);
  }
  else {
    kcg_copy_array_char_30_5(&outC->_L16, &outC->_L30);
  }
  kcg_copy_array_char_30_5(&outC->Output1, &outC->_L16);
}

#ifndef KCG_USER_DEFINED_INIT
void SliceMsg_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC)
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
  static kcg_size idx28;
  static kcg_size idx29;
  static kcg_size idx30;
  static kcg_size idx31;
  static kcg_size idx32;
  static kcg_size idx33;
  static kcg_size idx34;
  static kcg_size idx35;
  static kcg_size idx36;
  static kcg_size idx37;
  static kcg_size idx38;
  static kcg_size idx39;
  static kcg_size idx40;
  static kcg_size idx41;
  static kcg_size idx42;
  static kcg_size idx43;
  static kcg_size idx44;
  static kcg_size idx45;
  static kcg_size idx46;
  static kcg_size idx47;
  static kcg_size idx48;
  static kcg_size idx49;
  static kcg_size idx50;
  static kcg_size idx51;
  static kcg_size idx52;
  static kcg_size idx53;
  static kcg_size idx54;
  static kcg_size idx55;
  static kcg_size idx56;
  static kcg_size idx57;
  static kcg_size idx58;
  static kcg_size idx59;
  static kcg_size idx60;
  static kcg_size idx61;
  static kcg_size idx62;
  static kcg_size idx63;
  static kcg_size idx64;

  for (idx1 = 0; idx1 < 5; idx1++) {
    for (idx = 0; idx < 30; idx++) {
      outC->_L91[idx1][idx] = ' ';
    }
  }
  for (idx3 = 0; idx3 < 5; idx3++) {
    for (idx2 = 0; idx2 < 30; idx2++) {
      outC->_L89[idx3][idx2] = ' ';
    }
  }
  outC->_L88.present = kcg_true;
  outC->_L88.dmi_msg.valid = kcg_true;
  outC->_L88.dmi_msg.system_clock = kcg_lit_int32(0);
  outC->_L88.dmi_msg.textMessage_ID = kcg_lit_int32(0);
  outC->_L88.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L88.dmi_msg.l_text = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 255; idx4++) {
    outC->_L88.dmi_msg.x_text[idx4] = ' ';
  }
  outC->_L88.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L88.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L83.present = kcg_true;
  outC->_L83.dmi_msg.valid = kcg_true;
  outC->_L83.dmi_msg.system_clock = kcg_lit_int32(0);
  outC->_L83.dmi_msg.textMessage_ID = kcg_lit_int32(0);
  outC->_L83.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L83.dmi_msg.l_text = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 255; idx5++) {
    outC->_L83.dmi_msg.x_text[idx5] = ' ';
  }
  outC->_L83.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L83.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L86 = kcg_true;
  for (idx7 = 0; idx7 < 5; idx7++) {
    for (idx6 = 0; idx6 < 30; idx6++) {
      outC->_L81[idx7][idx6] = ' ';
    }
  }
  for (idx9 = 0; idx9 < 5; idx9++) {
    for (idx8 = 0; idx8 < 30; idx8++) {
      outC->_L80[idx9][idx8] = ' ';
    }
  }
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->_L75[idx10] = ' ';
  }
  for (idx11 = 0; idx11 < 30; idx11++) {
    outC->_L76[idx11] = ' ';
  }
  for (idx12 = 0; idx12 < 30; idx12++) {
    outC->_L77[idx12] = ' ';
  }
  for (idx13 = 0; idx13 < 30; idx13++) {
    outC->_L78[idx13] = ' ';
  }
  for (idx14 = 0; idx14 < 30; idx14++) {
    outC->_L79[idx14] = ' ';
  }
  for (idx15 = 0; idx15 < 255; idx15++) {
    outC->_L73[idx15] = ' ';
  }
  outC->_L65 = kcg_lit_int32(0);
  outC->_L66.present = kcg_true;
  outC->_L66.dmi_msg.valid = kcg_true;
  outC->_L66.dmi_msg.system_clock = kcg_lit_int32(0);
  outC->_L66.dmi_msg.textMessage_ID = kcg_lit_int32(0);
  outC->_L66.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L66.dmi_msg.l_text = kcg_lit_int32(0);
  for (idx16 = 0; idx16 < 255; idx16++) {
    outC->_L66.dmi_msg.x_text[idx16] = ' ';
  }
  outC->_L66.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L66.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L67 = kcg_lit_int32(0);
  outC->_L68 = kcg_true;
  outC->_L69 = kcg_true;
  outC->_L70 = kcg_true;
  outC->_L71.valid = kcg_true;
  outC->_L71.system_clock = kcg_lit_int32(0);
  outC->_L71.textMessage_ID = kcg_lit_int32(0);
  outC->_L71.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L71.l_text = kcg_lit_int32(0);
  for (idx17 = 0; idx17 < 255; idx17++) {
    outC->_L71.x_text[idx17] = ' ';
  }
  outC->_L71.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L71.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L72 = kcg_lit_int32(0);
  for (idx19 = 0; idx19 < 5; idx19++) {
    for (idx18 = 0; idx18 < 30; idx18++) {
      outC->_L64[idx19][idx18] = ' ';
    }
  }
  for (idx21 = 0; idx21 < 5; idx21++) {
    for (idx20 = 0; idx20 < 30; idx20++) {
      outC->_L63[idx21][idx20] = ' ';
    }
  }
  for (idx22 = 0; idx22 < 30; idx22++) {
    outC->_L59[idx22] = ' ';
  }
  for (idx23 = 0; idx23 < 30; idx23++) {
    outC->_L60[idx23] = ' ';
  }
  for (idx24 = 0; idx24 < 30; idx24++) {
    outC->_L61[idx24] = ' ';
  }
  for (idx25 = 0; idx25 < 30; idx25++) {
    outC->_L62[idx25] = ' ';
  }
  for (idx26 = 0; idx26 < 255; idx26++) {
    outC->_L58[idx26] = ' ';
  }
  outC->_L50 = kcg_true;
  outC->_L51 = kcg_lit_int32(0);
  outC->_L52 = kcg_true;
  outC->_L53.present = kcg_true;
  outC->_L53.dmi_msg.valid = kcg_true;
  outC->_L53.dmi_msg.system_clock = kcg_lit_int32(0);
  outC->_L53.dmi_msg.textMessage_ID = kcg_lit_int32(0);
  outC->_L53.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L53.dmi_msg.l_text = kcg_lit_int32(0);
  for (idx27 = 0; idx27 < 255; idx27++) {
    outC->_L53.dmi_msg.x_text[idx27] = ' ';
  }
  outC->_L53.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L53.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L54 = kcg_lit_int32(0);
  outC->_L55 = kcg_lit_int32(0);
  outC->_L56.valid = kcg_true;
  outC->_L56.system_clock = kcg_lit_int32(0);
  outC->_L56.textMessage_ID = kcg_lit_int32(0);
  outC->_L56.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L56.l_text = kcg_lit_int32(0);
  for (idx28 = 0; idx28 < 255; idx28++) {
    outC->_L56.x_text[idx28] = ' ';
  }
  outC->_L56.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L56.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L57 = kcg_true;
  for (idx30 = 0; idx30 < 5; idx30++) {
    for (idx29 = 0; idx29 < 30; idx29++) {
      outC->_L49[idx30][idx29] = ' ';
    }
  }
  for (idx32 = 0; idx32 < 5; idx32++) {
    for (idx31 = 0; idx31 < 30; idx31++) {
      outC->_L48[idx32][idx31] = ' ';
    }
  }
  for (idx33 = 0; idx33 < 30; idx33++) {
    outC->_L47[idx33] = ' ';
  }
  for (idx34 = 0; idx34 < 30; idx34++) {
    outC->_L46[idx34] = ' ';
  }
  for (idx35 = 0; idx35 < 30; idx35++) {
    outC->_L45[idx35] = ' ';
  }
  for (idx36 = 0; idx36 < 255; idx36++) {
    outC->_L44[idx36] = ' ';
  }
  outC->_L36 = kcg_lit_int32(0);
  outC->_L37.present = kcg_true;
  outC->_L37.dmi_msg.valid = kcg_true;
  outC->_L37.dmi_msg.system_clock = kcg_lit_int32(0);
  outC->_L37.dmi_msg.textMessage_ID = kcg_lit_int32(0);
  outC->_L37.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L37.dmi_msg.l_text = kcg_lit_int32(0);
  for (idx37 = 0; idx37 < 255; idx37++) {
    outC->_L37.dmi_msg.x_text[idx37] = ' ';
  }
  outC->_L37.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L37.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L38 = kcg_true;
  outC->_L39 = kcg_lit_int32(0);
  outC->_L40 = kcg_lit_int32(0);
  outC->_L41 = kcg_true;
  outC->_L42.valid = kcg_true;
  outC->_L42.system_clock = kcg_lit_int32(0);
  outC->_L42.textMessage_ID = kcg_lit_int32(0);
  outC->_L42.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L42.l_text = kcg_lit_int32(0);
  for (idx38 = 0; idx38 < 255; idx38++) {
    outC->_L42.x_text[idx38] = ' ';
  }
  outC->_L42.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L42.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L43 = kcg_true;
  for (idx40 = 0; idx40 < 5; idx40++) {
    for (idx39 = 0; idx39 < 30; idx39++) {
      outC->_L35[idx40][idx39] = ' ';
    }
  }
  for (idx41 = 0; idx41 < 30; idx41++) {
    outC->_L34[idx41] = ' ';
  }
  for (idx43 = 0; idx43 < 5; idx43++) {
    for (idx42 = 0; idx42 < 30; idx42++) {
      outC->_L33[idx43][idx42] = ' ';
    }
  }
  for (idx44 = 0; idx44 < 30; idx44++) {
    outC->_L32[idx44] = ' ';
  }
  for (idx45 = 0; idx45 < 255; idx45++) {
    outC->_L31[idx45] = ' ';
  }
  for (idx47 = 0; idx47 < 5; idx47++) {
    for (idx46 = 0; idx46 < 30; idx46++) {
      outC->_L30[idx47][idx46] = ' ';
    }
  }
  for (idx48 = 0; idx48 < 30; idx48++) {
    outC->_L29[idx48] = ' ';
  }
  for (idx50 = 0; idx50 < 5; idx50++) {
    for (idx49 = 0; idx49 < 30; idx49++) {
      outC->_L28[idx50][idx49] = ' ';
    }
  }
  outC->_L21 = kcg_true;
  outC->_L22 = kcg_true;
  outC->_L23 = kcg_lit_int32(0);
  outC->_L24 = kcg_lit_int32(0);
  outC->_L25 = kcg_true;
  outC->_L26 = kcg_lit_int32(0);
  outC->_L19.valid = kcg_true;
  outC->_L19.system_clock = kcg_lit_int32(0);
  outC->_L19.textMessage_ID = kcg_lit_int32(0);
  outC->_L19.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L19.l_text = kcg_lit_int32(0);
  for (idx51 = 0; idx51 < 255; idx51++) {
    outC->_L19.x_text[idx51] = ' ';
  }
  outC->_L19.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L19.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L18.present = kcg_true;
  outC->_L18.dmi_msg.valid = kcg_true;
  outC->_L18.dmi_msg.system_clock = kcg_lit_int32(0);
  outC->_L18.dmi_msg.textMessage_ID = kcg_lit_int32(0);
  outC->_L18.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L18.dmi_msg.l_text = kcg_lit_int32(0);
  for (idx52 = 0; idx52 < 255; idx52++) {
    outC->_L18.dmi_msg.x_text[idx52] = ' ';
  }
  outC->_L18.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L18.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  for (idx54 = 0; idx54 < 5; idx54++) {
    for (idx53 = 0; idx53 < 30; idx53++) {
      outC->_L16[idx54][idx53] = ' ';
    }
  }
  outC->_L15 = kcg_true;
  outC->_L14 = kcg_lit_int32(0);
  outC->_L13 = kcg_lit_int32(0);
  outC->_L12 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_lit_int32(0);
  for (idx55 = 0; idx55 < 255; idx55++) {
    outC->_L9[idx55] = ' ';
  }
  outC->_L8.valid = kcg_true;
  outC->_L8.system_clock = kcg_lit_int32(0);
  outC->_L8.textMessage_ID = kcg_lit_int32(0);
  outC->_L8.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L8.l_text = kcg_lit_int32(0);
  for (idx56 = 0; idx56 < 255; idx56++) {
    outC->_L8.x_text[idx56] = ' ';
  }
  outC->_L8.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L8.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  for (idx57 = 0; idx57 < 30; idx57++) {
    outC->_L6[idx57] = ' ';
  }
  for (idx58 = 0; idx58 < 30; idx58++) {
    outC->_L5[idx58] = ' ';
  }
  for (idx59 = 0; idx59 < 30; idx59++) {
    outC->_L4[idx59] = ' ';
  }
  for (idx60 = 0; idx60 < 30; idx60++) {
    outC->_L3[idx60] = ' ';
  }
  for (idx61 = 0; idx61 < 30; idx61++) {
    outC->_L2[idx61] = ' ';
  }
  outC->_L1.present = kcg_true;
  outC->_L1.dmi_msg.valid = kcg_true;
  outC->_L1.dmi_msg.system_clock = kcg_lit_int32(0);
  outC->_L1.dmi_msg.textMessage_ID = kcg_lit_int32(0);
  outC->_L1.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L1.dmi_msg.l_text = kcg_lit_int32(0);
  for (idx62 = 0; idx62 < 255; idx62++) {
    outC->_L1.dmi_msg.x_text[idx62] = ' ';
  }
  outC->_L1.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L1.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  for (idx64 = 0; idx64 < 5; idx64++) {
    for (idx63 = 0; idx63 < 30; idx63++) {
      outC->Output1[idx64][idx63] = ' ';
    }
  }
}
#endif /* KCG_USER_DEFINED_INIT */


void SliceMsg_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

