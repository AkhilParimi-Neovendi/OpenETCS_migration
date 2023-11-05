/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager/ */
void NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages(
  /* Queue/ */
  _94_array *Queue,
  /* hh_array/ */
  array_float32_10 *hh_array,
  /* mm_array/ */
  array_float32_10 *mm_array,
  /* numE/ */
  kcg_int32 numE,
  /* scrollUp/ */
  kcg_bool scrollUp,
  /* scrollDown/ */
  kcg_bool scrollDown,
  outC_NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static array_float32_10 acc;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static array_float32_10 acc7;
  static kcg_size idx8;
  static kcg_size idx9;
  static kcg_size idx10;
  static kcg_size idx11;
  static _94_array acc12;
  static kcg_size idx13;
  static array_int32_10 noname;
  /* scrollLevel/ */
  static kcg_int32 last_scrollLevel;
  /* isMoreThanFive/ */
  static kcg_bool last_isMoreThanFive;
  /* ScrollDownEnableIndex_toDisplay/ */
  static kcg_int32 last_ScrollDownEnableIndex_toDisplay;
  /* ScrollUpEnableIndex_toDisplay/ */
  static kcg_int32 last_ScrollUpEnableIndex_toDisplay;
  /* ArrayPlainText/ */
  static array_char_30_5 last_ArrayPlainText;
  /* IndexFixedMsg/ */
  static array_int32_5 last_IndexFixedMsg;
  /* Array_hh/ */
  static array_float32_5 Array_hh;
  /* Array_mm/ */
  static array_float32_5 Array_mm;

  last_scrollLevel = outC->scrollLevel;
  last_isMoreThanFive = outC->isMoreThanFive;
  last_ScrollDownEnableIndex_toDisplay = outC->ScrollDownEnableIndex_toDisplay;
  last_ScrollUpEnableIndex_toDisplay = outC->ScrollUpEnableIndex_toDisplay;
  kcg_copy_array_char_30_5(&last_ArrayPlainText, &outC->ArrayPlainText);
  kcg_copy_array_int32_5(&last_IndexFixedMsg, &outC->IndexFixedMsg);
  kcg_copy_array_float32_10(
    &outC->_L231,
    (array_float32_10 *) &cArray_hh_leer_DMI_Control_Pkg);
  kcg_copy_array_float32_10(&outC->_L223, mm_array);
  for (idx = 0; idx < 10; idx++) {
    outC->_L229[idx] = outC->_L223[9 - idx];
  }
  /* _L220/ */
  for (idx1 = 0; idx1 < 10; idx1++) {
    kcg_copy_array_float32_10(&outC->_L220[idx1], &outC->_L229);
  }
  outC->_L225 = numE;
  /* _L222/ */
  for (idx2 = 0; idx2 < 10; idx2++) {
    outC->_L222[idx2] = outC->_L225;
  }
  kcg_copy_array_float32_10(&outC->_L226, &outC->_L231);
  /* _L226= */
  for (idx3 = 0; idx3 < 10; idx3++) {
    kcg_copy_array_float32_10(&acc, &outC->_L226);
    /* _L226=(DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_normal#1)/ */
    SortTimeTopDown_normal_DMI_Control_Pkg_Sub_func_TextMessages(
      /* _L226= */(kcg_int32) idx3,
      &acc,
      &outC->_L220[idx3],
      outC->_L222[idx3],
      &outC->Context_SortTimeTopDown_normal_1[idx3]);
    kcg_copy_array_float32_10(
      &outC->_L226,
      &outC->Context_SortTimeTopDown_normal_1[idx3].outTimeArray);
  }
  kcg_copy_array_float32_10(&outC->Local_mm_array, &outC->_L226);
  kcg_copy_array_float32_10(&outC->_L235, &outC->Local_mm_array);
  kcg_copy_array_float32_10(
    &outC->_L228,
    (array_float32_10 *) &cArray_hh_leer_DMI_Control_Pkg);
  kcg_copy_array_float32_10(&outC->_L227, hh_array);
  for (idx4 = 0; idx4 < 10; idx4++) {
    outC->_L230[idx4] = outC->_L227[9 - idx4];
  }
  /* _L233/ */
  for (idx5 = 0; idx5 < 10; idx5++) {
    kcg_copy_array_float32_10(&outC->_L233[idx5], &outC->_L230);
  }
  outC->_L232 = numE;
  /* _L221/ */
  for (idx6 = 0; idx6 < 10; idx6++) {
    outC->_L221[idx6] = outC->_L232;
  }
  kcg_copy_array_float32_10(&outC->_L224, &outC->_L228);
  /* _L224= */
  for (idx8 = 0; idx8 < 10; idx8++) {
    kcg_copy_array_float32_10(&acc7, &outC->_L224);
    /* _L224=(DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_normal#2)/ */
    SortTimeTopDown_normal_DMI_Control_Pkg_Sub_func_TextMessages(
      /* _L224= */(kcg_int32) idx8,
      &acc7,
      &outC->_L233[idx8],
      outC->_L221[idx8],
      &outC->Context_SortTimeTopDown_normal_2[idx8]);
    kcg_copy_array_float32_10(
      &outC->_L224,
      &outC->Context_SortTimeTopDown_normal_2[idx8].outTimeArray);
  }
  kcg_copy_array_float32_10(&outC->Local_hh_array, &outC->_L224);
  kcg_copy_array_float32_10(&outC->_L234, &outC->Local_hh_array);
  kcg_copy_array_float32_5(&outC->_L219, (array_float32_5 *) &outC->_L235[0]);
  kcg_copy_array_float32_5(&outC->_L218, (array_float32_5 *) &outC->_L234[0]);
  kcg_copy__94_array(
    &outC->_L24,
    (_94_array *) &cMsgStructQueueMax_DMI_Control_Pkg);
  kcg_copy__94_array(&outC->_L26, Queue);
  for (idx9 = 0; idx9 < 10; idx9++) {
    kcg_copy_MsgStructure(&outC->_L21[idx9], &outC->_L26[9 - idx9]);
  }
  /* _L22/ */
  for (idx10 = 0; idx10 < 10; idx10++) {
    kcg_copy__94_array(&outC->_L22[idx10], &outC->_L21);
  }
  outC->_L176 = numE;
  /* _L23/ */
  for (idx11 = 0; idx11 < 10; idx11++) {
    outC->_L23[idx11] = outC->_L176;
  }
  kcg_copy__94_array(&outC->_L20, &outC->_L24);
  /* _L20= */
  for (idx13 = 0; idx13 < 10; idx13++) {
    kcg_copy__94_array(&acc12, &outC->_L20);
    /* _L20=(DMI_Control_Pkg::Sub_func::TextMessages::SortMsgTopDown#1)/ */
    SortMsgTopDown_DMI_Control_Pkg_Sub_func_TextMessages(
      /* _L20= */(kcg_int32) idx13,
      &acc12,
      &outC->_L22[idx13],
      outC->_L23[idx13],
      &outC->Context_SortMsgTopDown_1[idx13]);
    kcg_copy__94_array(
      &outC->_L20,
      &outC->Context_SortMsgTopDown_1[idx13].outArray);
  }
  kcg_copy__94_array(&outC->LocalArray, &outC->_L20);
  kcg_copy__94_array(&outC->_L162, &outC->LocalArray);
  outC->_L207 = last_scrollLevel;
  /* _L198=(DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_Plain#1)/ */
  ShowMsg_Plain_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_L162,
    outC->_L207,
    &outC->Context_ShowMsg_Plain_1);
  kcg_copy_array_char_30_5(
    &outC->_L198,
    &outC->Context_ShowMsg_Plain_1.PlainText);
  outC->_L204 = outC->Context_ShowMsg_Plain_1.isMoreThanFive;
  kcg_copy_array_int32_10(
    &outC->_L217,
    &outC->Context_ShowMsg_Plain_1.MsgNumArray);
  kcg_copy_array_int32_10(&noname, &outC->_L217);
  outC->_L188 = scrollUp;
  outC->_L189 = scrollDown;
  outC->_L195 = last_isMoreThanFive;
  outC->_L210 = numE;
  /* _L190=(DMI_Control_Pkg::Sub_func::TextMessages::ScrollController#1)/ */
  ScrollController_DMI_Control_Pkg_Sub_func_TextMessages(
    outC->_L188,
    outC->_L189,
    outC->_L195,
    outC->_L210,
    &outC->Context_ScrollController_1);
  outC->_L190 = outC->Context_ScrollController_1.scrollUpTypeIndex;
  outC->_L197 = outC->Context_ScrollController_1.scrollLevel;
  outC->_L211 = outC->Context_ScrollController_1.scrollDownTypeIndex;
  outC->ScrollDownEnableIndex_toDisplay = outC->_L211;
  outC->_L205[0] = kcg_lit_int32(0);
  outC->_L205[1] = kcg_lit_int32(0);
  outC->_L205[2] = kcg_lit_int32(0);
  outC->_L205[3] = kcg_lit_int32(0);
  outC->_L205[4] = kcg_lit_int32(0);
  outC->scrollLevel = outC->_L197;
  outC->isMoreThanFive = outC->_L204;
  outC->ScrollUpEnableIndex_toDisplay = outC->_L190;
  kcg_copy_array_int32_5(&outC->IndexFixedMsg, &outC->_L205);
  kcg_copy_array_char_30_5(&outC->ArrayPlainText, &outC->_L198);
  kcg_copy_array_float32_5(&outC->Array_mm, &outC->_L219);
  kcg_copy_array_float32_5(&outC->Array_hh, &outC->_L218);
  outC->_L19 = kcg_true;
  outC->isImportantMsg = outC->_L19;
  Array_mm[0] = kcg_lit_float32(-1.0);
  Array_mm[1] = kcg_lit_float32(-1.0);
  Array_mm[2] = kcg_lit_float32(-1.0);
  Array_mm[3] = kcg_lit_float32(-1.0);
  Array_mm[4] = kcg_lit_float32(-1.0);
  Array_hh[0] = kcg_lit_float32(-1.0);
  Array_hh[1] = kcg_lit_float32(-1.0);
  Array_hh[2] = kcg_lit_float32(-1.0);
  Array_hh[3] = kcg_lit_float32(-1.0);
  Array_hh[4] = kcg_lit_float32(-1.0);
}

#ifndef KCG_USER_DEFINED_INIT
void NormalMsgManager_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages *outC)
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

  for (idx3 = 0; idx3 < 10; idx3++) {
    outC->_L235[idx3] = kcg_lit_float32(0.0);
  }
  for (idx4 = 0; idx4 < 10; idx4++) {
    outC->_L234[idx4] = kcg_lit_float32(0.0);
  }
  for (idx6 = 0; idx6 < 10; idx6++) {
    for (idx5 = 0; idx5 < 10; idx5++) {
      outC->_L220[idx6][idx5] = kcg_lit_float32(0.0);
    }
  }
  for (idx7 = 0; idx7 < 10; idx7++) {
    outC->_L221[idx7] = kcg_lit_int32(0);
  }
  for (idx8 = 0; idx8 < 10; idx8++) {
    outC->_L222[idx8] = kcg_lit_int32(0);
  }
  for (idx9 = 0; idx9 < 10; idx9++) {
    outC->_L223[idx9] = kcg_lit_float32(0.0);
  }
  for (idx10 = 0; idx10 < 10; idx10++) {
    outC->_L224[idx10] = kcg_lit_float32(0.0);
  }
  outC->_L225 = kcg_lit_int32(0);
  for (idx11 = 0; idx11 < 10; idx11++) {
    outC->_L226[idx11] = kcg_lit_float32(0.0);
  }
  for (idx12 = 0; idx12 < 10; idx12++) {
    outC->_L227[idx12] = kcg_lit_float32(0.0);
  }
  for (idx13 = 0; idx13 < 10; idx13++) {
    outC->_L228[idx13] = kcg_lit_float32(0.0);
  }
  for (idx14 = 0; idx14 < 10; idx14++) {
    outC->_L229[idx14] = kcg_lit_float32(0.0);
  }
  for (idx15 = 0; idx15 < 10; idx15++) {
    outC->_L230[idx15] = kcg_lit_float32(0.0);
  }
  for (idx16 = 0; idx16 < 10; idx16++) {
    outC->_L231[idx16] = kcg_lit_float32(0.0);
  }
  outC->_L232 = kcg_lit_int32(0);
  for (idx18 = 0; idx18 < 10; idx18++) {
    for (idx17 = 0; idx17 < 10; idx17++) {
      outC->_L233[idx18][idx17] = kcg_lit_float32(0.0);
    }
  }
  for (idx19 = 0; idx19 < 5; idx19++) {
    outC->_L219[idx19] = kcg_lit_float32(0.0);
  }
  for (idx20 = 0; idx20 < 5; idx20++) {
    outC->_L218[idx20] = kcg_lit_float32(0.0);
  }
  for (idx21 = 0; idx21 < 10; idx21++) {
    outC->_L217[idx21] = kcg_lit_int32(0);
  }
  outC->_L211 = kcg_lit_int32(0);
  outC->_L210 = kcg_lit_int32(0);
  outC->_L207 = kcg_lit_int32(0);
  for (idx22 = 0; idx22 < 5; idx22++) {
    outC->_L205[idx22] = kcg_lit_int32(0);
  }
  for (idx24 = 0; idx24 < 5; idx24++) {
    for (idx23 = 0; idx23 < 30; idx23++) {
      outC->_L198[idx24][idx23] = ' ';
    }
  }
  outC->_L204 = kcg_true;
  outC->_L197 = kcg_lit_int32(0);
  outC->_L195 = kcg_true;
  outC->_L190 = kcg_lit_int32(0);
  outC->_L189 = kcg_true;
  outC->_L188 = kcg_true;
  outC->_L176 = kcg_lit_int32(0);
  for (idx26 = 0; idx26 < 10; idx26++) {
    outC->_L162[idx26].present = kcg_true;
    outC->_L162[idx26].dmi_msg.valid = kcg_true;
    outC->_L162[idx26].dmi_msg.system_clock = kcg_lit_int32(0);
    outC->_L162[idx26].dmi_msg.textMessage_ID = kcg_lit_int32(0);
    outC->_L162[idx26].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L162[idx26].dmi_msg.l_text = kcg_lit_int32(0);
    for (idx25 = 0; idx25 < 255; idx25++) {
      outC->_L162[idx26].dmi_msg.x_text[idx25] = ' ';
    }
    outC->_L162[idx26].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L162[idx26].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L19 = kcg_true;
  for (idx28 = 0; idx28 < 10; idx28++) {
    outC->_L20[idx28].present = kcg_true;
    outC->_L20[idx28].dmi_msg.valid = kcg_true;
    outC->_L20[idx28].dmi_msg.system_clock = kcg_lit_int32(0);
    outC->_L20[idx28].dmi_msg.textMessage_ID = kcg_lit_int32(0);
    outC->_L20[idx28].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L20[idx28].dmi_msg.l_text = kcg_lit_int32(0);
    for (idx27 = 0; idx27 < 255; idx27++) {
      outC->_L20[idx28].dmi_msg.x_text[idx27] = ' ';
    }
    outC->_L20[idx28].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L20[idx28].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (idx30 = 0; idx30 < 10; idx30++) {
    outC->_L21[idx30].present = kcg_true;
    outC->_L21[idx30].dmi_msg.valid = kcg_true;
    outC->_L21[idx30].dmi_msg.system_clock = kcg_lit_int32(0);
    outC->_L21[idx30].dmi_msg.textMessage_ID = kcg_lit_int32(0);
    outC->_L21[idx30].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L21[idx30].dmi_msg.l_text = kcg_lit_int32(0);
    for (idx29 = 0; idx29 < 255; idx29++) {
      outC->_L21[idx30].dmi_msg.x_text[idx29] = ' ';
    }
    outC->_L21[idx30].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L21[idx30].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (idx33 = 0; idx33 < 10; idx33++) {
    for (idx32 = 0; idx32 < 10; idx32++) {
      outC->_L22[idx33][idx32].present = kcg_true;
      outC->_L22[idx33][idx32].dmi_msg.valid = kcg_true;
      outC->_L22[idx33][idx32].dmi_msg.system_clock = kcg_lit_int32(0);
      outC->_L22[idx33][idx32].dmi_msg.textMessage_ID = kcg_lit_int32(0);
      outC->_L22[idx33][idx32].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
      outC->_L22[idx33][idx32].dmi_msg.l_text = kcg_lit_int32(0);
      for (idx31 = 0; idx31 < 255; idx31++) {
        outC->_L22[idx33][idx32].dmi_msg.x_text[idx31] = ' ';
      }
      outC->_L22[idx33][idx32].dmi_msg.q_textClass =
        Q_TEXTCLASS_Auxiliary_Information;
      outC->_L22[idx33][idx32].dmi_msg.q_textConfirm =
        Q_TEXTCONFIRM_No_confirmation_required;
    }
  }
  for (idx34 = 0; idx34 < 10; idx34++) {
    outC->_L23[idx34] = kcg_lit_int32(0);
  }
  for (idx36 = 0; idx36 < 10; idx36++) {
    outC->_L24[idx36].present = kcg_true;
    outC->_L24[idx36].dmi_msg.valid = kcg_true;
    outC->_L24[idx36].dmi_msg.system_clock = kcg_lit_int32(0);
    outC->_L24[idx36].dmi_msg.textMessage_ID = kcg_lit_int32(0);
    outC->_L24[idx36].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L24[idx36].dmi_msg.l_text = kcg_lit_int32(0);
    for (idx35 = 0; idx35 < 255; idx35++) {
      outC->_L24[idx36].dmi_msg.x_text[idx35] = ' ';
    }
    outC->_L24[idx36].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L24[idx36].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (idx38 = 0; idx38 < 10; idx38++) {
    outC->_L26[idx38].present = kcg_true;
    outC->_L26[idx38].dmi_msg.valid = kcg_true;
    outC->_L26[idx38].dmi_msg.system_clock = kcg_lit_int32(0);
    outC->_L26[idx38].dmi_msg.textMessage_ID = kcg_lit_int32(0);
    outC->_L26[idx38].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L26[idx38].dmi_msg.l_text = kcg_lit_int32(0);
    for (idx37 = 0; idx37 < 255; idx37++) {
      outC->_L26[idx38].dmi_msg.x_text[idx37] = ' ';
    }
    outC->_L26[idx38].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L26[idx38].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (idx39 = 0; idx39 < 10; idx39++) {
    outC->Local_hh_array[idx39] = kcg_lit_float32(0.0);
  }
  for (idx40 = 0; idx40 < 10; idx40++) {
    outC->Local_mm_array[idx40] = kcg_lit_float32(0.0);
  }
  for (idx42 = 0; idx42 < 10; idx42++) {
    outC->LocalArray[idx42].present = kcg_true;
    outC->LocalArray[idx42].dmi_msg.valid = kcg_true;
    outC->LocalArray[idx42].dmi_msg.system_clock = kcg_lit_int32(0);
    outC->LocalArray[idx42].dmi_msg.textMessage_ID = kcg_lit_int32(0);
    outC->LocalArray[idx42].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->LocalArray[idx42].dmi_msg.l_text = kcg_lit_int32(0);
    for (idx41 = 0; idx41 < 255; idx41++) {
      outC->LocalArray[idx42].dmi_msg.x_text[idx41] = ' ';
    }
    outC->LocalArray[idx42].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->LocalArray[idx42].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->isImportantMsg = kcg_true;
  for (idx43 = 0; idx43 < 5; idx43++) {
    outC->Array_mm[idx43] = kcg_lit_float32(0.0);
  }
  for (idx44 = 0; idx44 < 5; idx44++) {
    outC->Array_hh[idx44] = kcg_lit_float32(0.0);
  }
  /* _L190=(DMI_Control_Pkg::Sub_func::TextMessages::ScrollController#1)/ */
  ScrollController_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_ScrollController_1);
  /* _L198=(DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_Plain#1)/ */
  ShowMsg_Plain_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_ShowMsg_Plain_1);
  for (idx2 = 0; idx2 < 10; idx2++) {
    /* _L20=(DMI_Control_Pkg::Sub_func::TextMessages::SortMsgTopDown#1)/ */
    SortMsgTopDown_init_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->Context_SortMsgTopDown_1[idx2]);
  }
  for (idx1 = 0; idx1 < 10; idx1++) {
    /* _L224=(DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_normal#2)/ */
    SortTimeTopDown_normal_init_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->Context_SortTimeTopDown_normal_2[idx1]);
  }
  for (idx = 0; idx < 10; idx++) {
    /* _L226=(DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_normal#1)/ */
    SortTimeTopDown_normal_init_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->Context_SortTimeTopDown_normal_1[idx]);
  }
  outC->IndexFixedMsg[0] = kcg_lit_int32(0);
  outC->IndexFixedMsg[1] = kcg_lit_int32(0);
  outC->IndexFixedMsg[2] = kcg_lit_int32(0);
  outC->IndexFixedMsg[3] = kcg_lit_int32(0);
  outC->IndexFixedMsg[4] = kcg_lit_int32(0);
  kcg_copy_array_char_30_5(
    &outC->ArrayPlainText,
    (array_char_30_5 *) &cPlainText_DMI_Control_Pkg);
  outC->ScrollUpEnableIndex_toDisplay = kcg_lit_int32(0);
  outC->ScrollDownEnableIndex_toDisplay = kcg_lit_int32(0);
  outC->isMoreThanFive = kcg_false;
  outC->scrollLevel = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


void NormalMsgManager_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;

  /* _L190=(DMI_Control_Pkg::Sub_func::TextMessages::ScrollController#1)/ */
  ScrollController_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_ScrollController_1);
  /* _L198=(DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_Plain#1)/ */
  ShowMsg_Plain_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_ShowMsg_Plain_1);
  for (idx2 = 0; idx2 < 10; idx2++) {
    /* _L20=(DMI_Control_Pkg::Sub_func::TextMessages::SortMsgTopDown#1)/ */
    SortMsgTopDown_reset_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->Context_SortMsgTopDown_1[idx2]);
  }
  for (idx1 = 0; idx1 < 10; idx1++) {
    /* _L224=(DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_normal#2)/ */
    SortTimeTopDown_normal_reset_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->Context_SortTimeTopDown_normal_2[idx1]);
  }
  for (idx = 0; idx < 10; idx++) {
    /* _L226=(DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_normal#1)/ */
    SortTimeTopDown_normal_reset_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->Context_SortTimeTopDown_normal_1[idx]);
  }
  outC->IndexFixedMsg[0] = kcg_lit_int32(0);
  outC->IndexFixedMsg[1] = kcg_lit_int32(0);
  outC->IndexFixedMsg[2] = kcg_lit_int32(0);
  outC->IndexFixedMsg[3] = kcg_lit_int32(0);
  outC->IndexFixedMsg[4] = kcg_lit_int32(0);
  kcg_copy_array_char_30_5(
    &outC->ArrayPlainText,
    (array_char_30_5 *) &cPlainText_DMI_Control_Pkg);
  outC->ScrollUpEnableIndex_toDisplay = kcg_lit_int32(0);
  outC->ScrollDownEnableIndex_toDisplay = kcg_lit_int32(0);
  outC->isMoreThanFive = kcg_false;
  outC->scrollLevel = kcg_lit_int32(0);
}


void kcg_save_SV_NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages(
  SV_NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages *SV,
  outC_NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  kcg_save_SV_ShowMsg_Plain_DMI_Control_Pkg_Sub_func_TextMessages(
    &SV->Context_ShowMsg_Plain_1,
    &outC->Context_ShowMsg_Plain_1);
  kcg_save_SV_ScrollController_DMI_Control_Pkg_Sub_func_TextMessages(
    &SV->Context_ScrollController_1,
    &outC->Context_ScrollController_1);
  SV->Context_ScrollDownEnableIndex_toDisplay =
    outC->ScrollDownEnableIndex_toDisplay;
  SV->Context_ScrollUpEnableIndex_toDisplay = outC->ScrollUpEnableIndex_toDisplay;
  kcg_copy_array_char_30_5(&SV->Context_ArrayPlainText, &outC->ArrayPlainText);
  kcg_copy_array_int32_5(&SV->Context_IndexFixedMsg, &outC->IndexFixedMsg);
  SV->Context_scrollLevel = outC->scrollLevel;
  SV->Context_isMoreThanFive = outC->isMoreThanFive;
}

void kcg_load_SV_NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages *outC,
  SV_NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages *SV)
{
  kcg_load_SV_ShowMsg_Plain_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_ShowMsg_Plain_1,
    &SV->Context_ShowMsg_Plain_1);
  kcg_load_SV_ScrollController_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_ScrollController_1,
    &SV->Context_ScrollController_1);
  outC->ScrollDownEnableIndex_toDisplay =
    SV->Context_ScrollDownEnableIndex_toDisplay;
  outC->ScrollUpEnableIndex_toDisplay = SV->Context_ScrollUpEnableIndex_toDisplay;
  kcg_copy_array_char_30_5(&outC->ArrayPlainText, &SV->Context_ArrayPlainText);
  kcg_copy_array_int32_5(&outC->IndexFixedMsg, &SV->Context_IndexFixedMsg);
  outC->scrollLevel = SV->Context_scrollLevel;
  outC->isMoreThanFive = SV->Context_isMoreThanFive;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

