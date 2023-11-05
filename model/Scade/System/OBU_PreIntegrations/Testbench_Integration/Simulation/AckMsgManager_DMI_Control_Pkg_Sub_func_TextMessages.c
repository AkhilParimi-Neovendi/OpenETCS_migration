/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::AckMsgManager/ */
void AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages(
  /* Queue/ */
  _82_array *Queue,
  /* SystemTime/ */
  kcg_int32 SystemTime,
  /* array_hh_local/ */
  array_float32_5 *array_hh_local,
  /* array_mm_local/ */
  array_float32_5 *array_mm_local,
  /* numAck/ */
  kcg_int32 numAck,
  outC_AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static array_float32_5 acc;
  static kcg_size idx5;
  static kcg_size idx6;
  static array_float32_5 acc7;
  static kcg_size idx8;
  static kcg_size idx9;
  static kcg_bool acc10;
  static kcg_size idx11;
  static kcg_size idx12;
  /* IndexFixedMsg/ */
  static array_int32_5 IndexFixedMsg_partial;
  /* ArrayPlainText/ */
  static array_char_30_5 ArrayPlainText_partial;
  static kcg_bool noname;
  /* IndexFixedMsg/ */
  static array_int32_5 _13_IndexFixedMsg_partial;
  /* ArrayPlainText/ */
  static array_char_30_5 _14_ArrayPlainText_partial;
  /* ArrayPlainText/ */
  static array_char_30_5 _15_ArrayPlainText_partial;
  /* ArrayPlainText/ */
  static array_char_30_5 _16_ArrayPlainText_partial;
  static kcg_bool _17_noname;
  /* IndexFixedMsg/ */
  static array_int32_5 IndexFixedMsg;
  /* Array_hh/ */
  static array_float32_5 Array_hh;
  /* Array_mm/ */
  static array_float32_5 Array_mm;

  kcg_copy_array_float32_5(&outC->_L53, array_mm_local);
  /* _L54=(DMI_Control_Pkg::Sub_func::TextMessages::Length#1)/ */
  Length_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_L53,
    &outC->Context_Length_1);
  outC->_L54 = outC->Context_Length_1.length;
  outC->num_mm = outC->_L54;
  outC->_L59 = outC->num_mm;
  /* _L61/ */
  for (idx = 0; idx < 5; idx++) {
    outC->_L61[idx] = outC->_L59;
  }
  kcg_copy_array_float32_5(&outC->_L55, array_hh_local);
  /* _L56=(DMI_Control_Pkg::Sub_func::TextMessages::Length#2)/ */
  Length_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_L55,
    &outC->Context_Length_2);
  outC->_L56 = outC->Context_Length_2.length;
  outC->num_hh = outC->_L56;
  outC->_L58 = outC->num_hh;
  /* _L60/ */
  for (idx1 = 0; idx1 < 5; idx1++) {
    outC->_L60[idx1] = outC->_L58;
  }
  outC->_L52 = numAck;
  /* _L51/ */
  for (idx2 = 0; idx2 < 5; idx2++) {
    outC->_L51[idx2] = outC->_L52;
  }
  outC->_L49 = numAck;
  /* _L50/ */
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L50[idx3] = outC->_L49;
  }
  outC->_L46 = kcg_lit_float32(-1.0);
  outC->_L45 = kcg_lit_float32(-1.0);
  kcg_copy_array_float32_5(
    &outC->_L28,
    (array_float32_5 *) &cArray_mm_leer5_DMI_Control_Pkg);
  kcg_copy_array_float32_5(&outC->_L20, array_mm_local);
  /* _L33/ */
  for (idx4 = 0; idx4 < 5; idx4++) {
    kcg_copy_array_float32_5(&outC->_L33[idx4], &outC->_L20);
  }
  kcg_copy_array_float32_5(&outC->_L23, &outC->_L28);
  /* _L23= */
  for (idx5 = 0; idx5 < 5; idx5++) {
    kcg_copy_array_float32_5(&acc, &outC->_L23);
    /* _L23=(DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_ack#1)/ */
    SortTimeTopDown_ack_DMI_Control_Pkg_Sub_func_TextMessages(
      /* _L23= */(kcg_int32) idx5,
      &acc,
      &outC->_L33[idx5],
      outC->_L51[idx5],
      outC->_L61[idx5],
      &outC->Context_SortTimeTopDown_ack_1[idx5]);
    kcg_copy_array_float32_5(
      &outC->_L23,
      &outC->Context_SortTimeTopDown_ack_1[idx5].outTimeArray);
  }
  outC->_L41 = outC->_L23[0];
  outC->_L42 = kcg_lit_float32(-1.0);
  outC->_L43 = kcg_lit_float32(-1.0);
  outC->_L44[0] = outC->_L41;
  outC->_L44[1] = outC->_L42;
  outC->_L44[2] = outC->_L45;
  outC->_L44[3] = outC->_L43;
  outC->_L44[4] = outC->_L46;
  kcg_copy_array_float32_5(
    &outC->_L21,
    (array_float32_5 *) &cArray_hh_leer5_DMI_Control_Pkg);
  kcg_copy_array_float32_5(&outC->_L19, array_hh_local);
  /* _L29/ */
  for (idx6 = 0; idx6 < 5; idx6++) {
    kcg_copy_array_float32_5(&outC->_L29[idx6], &outC->_L19);
  }
  kcg_copy_array_float32_5(&outC->_L31, &outC->_L21);
  /* _L31= */
  for (idx8 = 0; idx8 < 5; idx8++) {
    kcg_copy_array_float32_5(&acc7, &outC->_L31);
    /* _L31=(DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_ack#2)/ */
    SortTimeTopDown_ack_DMI_Control_Pkg_Sub_func_TextMessages(
      /* _L31= */(kcg_int32) idx8,
      &acc7,
      &outC->_L29[idx8],
      outC->_L50[idx8],
      outC->_L60[idx8],
      &outC->Context_SortTimeTopDown_ack_2[idx8]);
    kcg_copy_array_float32_5(
      &outC->_L31,
      &outC->Context_SortTimeTopDown_ack_2[idx8].outTimeArray);
  }
  outC->_L40 = outC->_L31[0];
  outC->_L35 = kcg_lit_float32(-1.0);
  outC->_L36 = kcg_lit_float32(-1.0);
  outC->_L37 = kcg_lit_float32(-1.0);
  outC->_L34 = kcg_lit_float32(-1.0);
  outC->_L38[0] = outC->_L40;
  outC->_L38[1] = outC->_L35;
  outC->_L38[2] = outC->_L36;
  outC->_L38[3] = outC->_L37;
  outC->_L38[4] = outC->_L34;
  kcg_copy_array_float32_5(&outC->Array_mm, &outC->_L44);
  kcg_copy_array_float32_5(&outC->Array_hh, &outC->_L38);
  kcg_copy__82_array(&outC->_L1, Queue);
  /* _L17=(DMI_Control_Pkg::Sub_func::TextMessages::CheckTypeOfText#1)/ */
  CheckTypeOfText_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_L1,
    &outC->Context_CheckTypeOfText_1);
  outC->_L17 = outC->Context_CheckTypeOfText_1.Output1;
  outC->_L18 = outC->Context_CheckTypeOfText_1.Output2;
  outC->PlainText = outC->_L18;
  outC->_L14 = kcg_true;
  outC->_L12 = SystemTime;
  outC->_L13 = cIntervalFlashingTimeMsg_DMI_Control_Pkg;
  /* _L10=(DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator#1)/ */
  FlashingOperator_DMI_Control_Pkg_Sub_func_TextMessages(
    outC->_L14,
    outC->_L12,
    outC->_L13,
    &outC->Context_FlashingOperator_1);
  outC->_L10 = outC->Context_FlashingOperator_1.flashigOut;
  outC->_L11 = outC->Context_FlashingOperator_1.active;
  outC->FlashingBorderMsg = outC->_L10;
  _17_noname = outC->_L11;
  outC->FixText = outC->_L17;
  outC->IfBlock1_clock = outC->FixText;
  IndexFixedMsg[0] = kcg_lit_int32(0);
  IndexFixedMsg[1] = kcg_lit_int32(0);
  IndexFixedMsg[2] = kcg_lit_int32(0);
  IndexFixedMsg[3] = kcg_lit_int32(0);
  IndexFixedMsg[4] = kcg_lit_int32(0);
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_array_char_30_5(
      &ArrayPlainText_partial,
      (array_char_30_5 *) &cPlainText_DMI_Control_Pkg);
    outC->_L24_then_IfBlock1 = kcg_true;
    outC->_L5_then_IfBlock1 = kcg_false;
    kcg_copy_Array_DMI_Q_Text(
      &outC->_L4_then_IfBlock1,
      (Array_DMI_Q_Text *) &ArrayEnum_Q_text_DMI_Control_Pkg);
    kcg_copy__82_array(&outC->_L2_then_IfBlock1, Queue);
    kcg_copy_MsgStructure(&outC->_L1_then_IfBlock1, &outC->_L2_then_IfBlock1[0]);
    kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L3_then_IfBlock1,
      &outC->_L1_then_IfBlock1.dmi_msg);
    outC->_L10_then_IfBlock1 = outC->_L3_then_IfBlock1.q_text;
    /* IfBlock1:then:_L8/ */
    for (idx9 = 0; idx9 < 27; idx9++) {
      outC->_L8_then_IfBlock1[idx9] = outC->_L10_then_IfBlock1;
    }
    outC->_L21_then_IfBlock1 = outC->_L5_then_IfBlock1;
    /* IfBlock1:then:_L23= */
    if (outC->_L24_then_IfBlock1) {
      /* IfBlock1:then:_L23= */
      for (idx11 = 0; idx11 < 27; idx11++) {
        acc10 = outC->_L21_then_IfBlock1;
        /* IfBlock1:then:_L23=(DMI_Control_Pkg::Sub_func::TextMessages::Find_Q_Text_iterator#1)/ */
        Find_Q_Text_iterator_DMI_Control_Pkg_Sub_func_TextMessages(
          /* IfBlock1:then:_L23= */(kcg_int32) idx11,
          acc10,
          outC->_L4_then_IfBlock1[idx11],
          outC->_L8_then_IfBlock1[idx11],
          &outC->Context_Find_Q_Text_iterator_1[idx11]);
        outC->_L21_then_IfBlock1 = outC->Context_Find_Q_Text_iterator_1[idx11].output;
        outC->_L23_then_IfBlock1 = /* IfBlock1:then:_L23= */(kcg_int32) (idx11 + 1);
        /* IfBlock1:then:_L23= */
        if (!outC->Context_Find_Q_Text_iterator_1[idx11].accout) {
          break;
        }
      }
    }
    else {
      outC->_L23_then_IfBlock1 = kcg_lit_int32(0);
    }
    /* IfBlock1:then:_L18/ */
    for (idx12 = 0; idx12 < 1; idx12++) {
      outC->_L18_then_IfBlock1[idx12] = outC->_L23_then_IfBlock1;
    }
    outC->_L17_then_IfBlock1 = kcg_lit_int32(0);
    outC->_L16_then_IfBlock1 = kcg_lit_int32(0);
    outC->_L15_then_IfBlock1 = kcg_lit_int32(0);
    outC->_L14_then_IfBlock1 = kcg_lit_int32(0);
    outC->_L12_then_IfBlock1[0] = outC->_L14_then_IfBlock1;
    outC->_L12_then_IfBlock1[1] = outC->_L15_then_IfBlock1;
    outC->_L12_then_IfBlock1[2] = outC->_L16_then_IfBlock1;
    outC->_L12_then_IfBlock1[3] = outC->_L17_then_IfBlock1;
    outC->_L13_then_IfBlock1[0] = outC->_L18_then_IfBlock1[0];
    kcg_copy_array_int32_4(&outC->_L13_then_IfBlock1[1], &outC->_L12_then_IfBlock1);
    kcg_copy_array_int32_5(&IndexFixedMsg_partial, &outC->_L13_then_IfBlock1);
    noname = outC->_L21_then_IfBlock1;
    kcg_copy_array_int32_5(&outC->IndexFixedMsg, &IndexFixedMsg_partial);
    kcg_copy_array_char_30_5(&outC->ArrayPlainText, &ArrayPlainText_partial);
  }
  else {
    kcg_copy_array_int32_5(&_13_IndexFixedMsg_partial, &IndexFixedMsg);
    outC->else_clock_IfBlock1 = outC->PlainText;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      kcg_copy__82_array(&outC->_L12_then_else_IfBlock1, Queue);
      kcg_copy_MsgStructure(
        &outC->_L10_then_else_IfBlock1,
        &outC->_L12_then_else_IfBlock1[0]);
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L11_then_else_IfBlock1,
        &outC->_L10_then_else_IfBlock1.dmi_msg);
      kcg_copy_DMI_TEXT_DMI_Types_Pkg(
        &outC->_L2_then_else_IfBlock1,
        &outC->_L11_then_else_IfBlock1.x_text);
      kcg_copy_array_char_30(
        &outC->_L1_then_else_IfBlock1,
        (array_char_30 *) &outC->_L2_then_else_IfBlock1[0]);
      kcg_copy_array_char_30(
        &outC->_L8_then_else_IfBlock1,
        (array_char_30 *) &outC->_L2_then_else_IfBlock1[30]);
      kcg_copy_array_char_30(
        &outC->_L5_then_else_IfBlock1,
        (array_char_30 *) &outC->_L2_then_else_IfBlock1[60]);
      kcg_copy_array_char_30(
        &outC->_L7_then_else_IfBlock1,
        (array_char_30 *) &outC->_L2_then_else_IfBlock1[90]);
      kcg_copy_array_char_30(
        &outC->_L6_then_else_IfBlock1,
        (array_char_30 *) &outC->_L2_then_else_IfBlock1[120]);
      kcg_copy_array_char_30(
        &outC->_L4_then_else_IfBlock1[0],
        &outC->_L1_then_else_IfBlock1);
      kcg_copy_array_char_30(
        &outC->_L4_then_else_IfBlock1[1],
        &outC->_L8_then_else_IfBlock1);
      kcg_copy_array_char_30(
        &outC->_L4_then_else_IfBlock1[2],
        &outC->_L5_then_else_IfBlock1);
      kcg_copy_array_char_30(
        &outC->_L4_then_else_IfBlock1[3],
        &outC->_L7_then_else_IfBlock1);
      kcg_copy_array_char_30(
        &outC->_L4_then_else_IfBlock1[4],
        &outC->_L6_then_else_IfBlock1);
      kcg_copy_array_char_30_5(
        &_16_ArrayPlainText_partial,
        &outC->_L4_then_else_IfBlock1);
      kcg_copy_array_char_30_5(
        &_14_ArrayPlainText_partial,
        &_16_ArrayPlainText_partial);
    }
    else {
      kcg_copy_array_char_30_5(
        &_15_ArrayPlainText_partial,
        (array_char_30_5 *) &cPlainText_DMI_Control_Pkg);
      kcg_copy_array_char_30_5(
        &_14_ArrayPlainText_partial,
        &_15_ArrayPlainText_partial);
    }
    kcg_copy_array_int32_5(&outC->IndexFixedMsg, &_13_IndexFixedMsg_partial);
    kcg_copy_array_char_30_5(&outC->ArrayPlainText, &_14_ArrayPlainText_partial);
  }
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
void AckMsgManager_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages *outC)
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

  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L61[idx3] = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 5; idx4++) {
    outC->_L60[idx4] = kcg_lit_int32(0);
  }
  outC->_L59 = kcg_lit_int32(0);
  outC->_L58 = kcg_lit_int32(0);
  outC->_L56 = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 5; idx5++) {
    outC->_L55[idx5] = kcg_lit_float32(0.0);
  }
  outC->_L54 = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 5; idx6++) {
    outC->_L53[idx6] = kcg_lit_float32(0.0);
  }
  for (idx7 = 0; idx7 < 5; idx7++) {
    outC->_L51[idx7] = kcg_lit_int32(0);
  }
  outC->_L52 = kcg_lit_int32(0);
  for (idx8 = 0; idx8 < 5; idx8++) {
    outC->_L50[idx8] = kcg_lit_int32(0);
  }
  outC->_L49 = kcg_lit_int32(0);
  outC->_L42 = kcg_lit_float32(0.0);
  outC->_L43 = kcg_lit_float32(0.0);
  for (idx9 = 0; idx9 < 5; idx9++) {
    outC->_L44[idx9] = kcg_lit_float32(0.0);
  }
  outC->_L45 = kcg_lit_float32(0.0);
  outC->_L46 = kcg_lit_float32(0.0);
  outC->_L41 = kcg_lit_float32(0.0);
  outC->_L40 = kcg_lit_float32(0.0);
  outC->_L34 = kcg_lit_float32(0.0);
  outC->_L35 = kcg_lit_float32(0.0);
  outC->_L36 = kcg_lit_float32(0.0);
  outC->_L37 = kcg_lit_float32(0.0);
  for (idx10 = 0; idx10 < 5; idx10++) {
    outC->_L38[idx10] = kcg_lit_float32(0.0);
  }
  for (idx11 = 0; idx11 < 5; idx11++) {
    outC->_L21[idx11] = kcg_lit_float32(0.0);
  }
  for (idx12 = 0; idx12 < 5; idx12++) {
    outC->_L23[idx12] = kcg_lit_float32(0.0);
  }
  for (idx13 = 0; idx13 < 5; idx13++) {
    outC->_L28[idx13] = kcg_lit_float32(0.0);
  }
  for (idx15 = 0; idx15 < 5; idx15++) {
    for (idx14 = 0; idx14 < 5; idx14++) {
      outC->_L29[idx15][idx14] = kcg_lit_float32(0.0);
    }
  }
  for (idx16 = 0; idx16 < 5; idx16++) {
    outC->_L31[idx16] = kcg_lit_float32(0.0);
  }
  for (idx18 = 0; idx18 < 5; idx18++) {
    for (idx17 = 0; idx17 < 5; idx17++) {
      outC->_L33[idx18][idx17] = kcg_lit_float32(0.0);
    }
  }
  for (idx19 = 0; idx19 < 5; idx19++) {
    outC->_L20[idx19] = kcg_lit_float32(0.0);
  }
  for (idx20 = 0; idx20 < 5; idx20++) {
    outC->_L19[idx20] = kcg_lit_float32(0.0);
  }
  outC->_L17 = kcg_true;
  outC->_L18 = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L13 = kcg_lit_int32(0);
  outC->_L12 = kcg_lit_int32(0);
  outC->_L10 = kcg_true;
  outC->_L11 = kcg_true;
  for (idx22 = 0; idx22 < 5; idx22++) {
    outC->_L1[idx22].present = kcg_true;
    outC->_L1[idx22].dmi_msg.valid = kcg_true;
    outC->_L1[idx22].dmi_msg.system_clock = kcg_lit_int32(0);
    outC->_L1[idx22].dmi_msg.textMessage_ID = kcg_lit_int32(0);
    outC->_L1[idx22].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L1[idx22].dmi_msg.l_text = kcg_lit_int32(0);
    for (idx21 = 0; idx21 < 255; idx21++) {
      outC->_L1[idx22].dmi_msg.x_text[idx21] = ' ';
    }
    outC->_L1[idx22].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L1[idx22].dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->num_hh = kcg_lit_int32(0);
  outC->num_mm = kcg_lit_int32(0);
  outC->PlainText = kcg_true;
  outC->FixText = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  for (idx23 = 0; idx23 < 255; idx23++) {
    outC->_L2_then_else_IfBlock1[idx23] = ' ';
  }
  outC->_L10_then_else_IfBlock1.present = kcg_true;
  outC->_L10_then_else_IfBlock1.dmi_msg.valid = kcg_true;
  outC->_L10_then_else_IfBlock1.dmi_msg.system_clock = kcg_lit_int32(0);
  outC->_L10_then_else_IfBlock1.dmi_msg.textMessage_ID = kcg_lit_int32(0);
  outC->_L10_then_else_IfBlock1.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L10_then_else_IfBlock1.dmi_msg.l_text = kcg_lit_int32(0);
  for (idx24 = 0; idx24 < 255; idx24++) {
    outC->_L10_then_else_IfBlock1.dmi_msg.x_text[idx24] = ' ';
  }
  outC->_L10_then_else_IfBlock1.dmi_msg.q_textClass =
    Q_TEXTCLASS_Auxiliary_Information;
  outC->_L10_then_else_IfBlock1.dmi_msg.q_textConfirm =
    Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L11_then_else_IfBlock1.valid = kcg_true;
  outC->_L11_then_else_IfBlock1.system_clock = kcg_lit_int32(0);
  outC->_L11_then_else_IfBlock1.textMessage_ID = kcg_lit_int32(0);
  outC->_L11_then_else_IfBlock1.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L11_then_else_IfBlock1.l_text = kcg_lit_int32(0);
  for (idx25 = 0; idx25 < 255; idx25++) {
    outC->_L11_then_else_IfBlock1.x_text[idx25] = ' ';
  }
  outC->_L11_then_else_IfBlock1.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L11_then_else_IfBlock1.q_textConfirm =
    Q_TEXTCONFIRM_No_confirmation_required;
  for (idx27 = 0; idx27 < 5; idx27++) {
    outC->_L12_then_else_IfBlock1[idx27].present = kcg_true;
    outC->_L12_then_else_IfBlock1[idx27].dmi_msg.valid = kcg_true;
    outC->_L12_then_else_IfBlock1[idx27].dmi_msg.system_clock = kcg_lit_int32(0);
    outC->_L12_then_else_IfBlock1[idx27].dmi_msg.textMessage_ID = kcg_lit_int32(0);
    outC->_L12_then_else_IfBlock1[idx27].dmi_msg.q_text =
      balise_read_error_DMI_Types_Pkg;
    outC->_L12_then_else_IfBlock1[idx27].dmi_msg.l_text = kcg_lit_int32(0);
    for (idx26 = 0; idx26 < 255; idx26++) {
      outC->_L12_then_else_IfBlock1[idx27].dmi_msg.x_text[idx26] = ' ';
    }
    outC->_L12_then_else_IfBlock1[idx27].dmi_msg.q_textClass =
      Q_TEXTCLASS_Auxiliary_Information;
    outC->_L12_then_else_IfBlock1[idx27].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  for (idx28 = 0; idx28 < 30; idx28++) {
    outC->_L1_then_else_IfBlock1[idx28] = ' ';
  }
  for (idx30 = 0; idx30 < 5; idx30++) {
    for (idx29 = 0; idx29 < 30; idx29++) {
      outC->_L4_then_else_IfBlock1[idx30][idx29] = ' ';
    }
  }
  for (idx31 = 0; idx31 < 30; idx31++) {
    outC->_L5_then_else_IfBlock1[idx31] = ' ';
  }
  for (idx32 = 0; idx32 < 30; idx32++) {
    outC->_L6_then_else_IfBlock1[idx32] = ' ';
  }
  for (idx33 = 0; idx33 < 30; idx33++) {
    outC->_L7_then_else_IfBlock1[idx33] = ' ';
  }
  for (idx34 = 0; idx34 < 30; idx34++) {
    outC->_L8_then_else_IfBlock1[idx34] = ' ';
  }
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L3_then_IfBlock1.valid = kcg_true;
  outC->_L3_then_IfBlock1.system_clock = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1.textMessage_ID = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L3_then_IfBlock1.l_text = kcg_lit_int32(0);
  for (idx35 = 0; idx35 < 255; idx35++) {
    outC->_L3_then_IfBlock1.x_text[idx35] = ' ';
  }
  outC->_L3_then_IfBlock1.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L3_then_IfBlock1.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  for (idx37 = 0; idx37 < 5; idx37++) {
    outC->_L2_then_IfBlock1[idx37].present = kcg_true;
    outC->_L2_then_IfBlock1[idx37].dmi_msg.valid = kcg_true;
    outC->_L2_then_IfBlock1[idx37].dmi_msg.system_clock = kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx37].dmi_msg.textMessage_ID = kcg_lit_int32(0);
    outC->_L2_then_IfBlock1[idx37].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L2_then_IfBlock1[idx37].dmi_msg.l_text = kcg_lit_int32(0);
    for (idx36 = 0; idx36 < 255; idx36++) {
      outC->_L2_then_IfBlock1[idx37].dmi_msg.x_text[idx36] = ' ';
    }
    outC->_L2_then_IfBlock1[idx37].dmi_msg.q_textClass =
      Q_TEXTCLASS_Auxiliary_Information;
    outC->_L2_then_IfBlock1[idx37].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L1_then_IfBlock1.present = kcg_true;
  outC->_L1_then_IfBlock1.dmi_msg.valid = kcg_true;
  outC->_L1_then_IfBlock1.dmi_msg.system_clock = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.dmi_msg.textMessage_ID = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L1_then_IfBlock1.dmi_msg.l_text = kcg_lit_int32(0);
  for (idx38 = 0; idx38 < 255; idx38++) {
    outC->_L1_then_IfBlock1.dmi_msg.x_text[idx38] = ' ';
  }
  outC->_L1_then_IfBlock1.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L1_then_IfBlock1.dmi_msg.q_textConfirm =
    Q_TEXTCONFIRM_No_confirmation_required;
  for (idx39 = 0; idx39 < 27; idx39++) {
    outC->_L8_then_IfBlock1[idx39] = balise_read_error_DMI_Types_Pkg;
  }
  outC->_L5_then_IfBlock1 = kcg_true;
  for (idx40 = 0; idx40 < 27; idx40++) {
    outC->_L4_then_IfBlock1[idx40] = balise_read_error_DMI_Types_Pkg;
  }
  outC->_L10_then_IfBlock1 = balise_read_error_DMI_Types_Pkg;
  for (idx41 = 0; idx41 < 4; idx41++) {
    outC->_L12_then_IfBlock1[idx41] = kcg_lit_int32(0);
  }
  for (idx42 = 0; idx42 < 5; idx42++) {
    outC->_L13_then_IfBlock1[idx42] = kcg_lit_int32(0);
  }
  outC->_L14_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L15_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L16_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L17_then_IfBlock1 = kcg_lit_int32(0);
  for (idx43 = 0; idx43 < 1; idx43++) {
    outC->_L18_then_IfBlock1[idx43] = kcg_lit_int32(0);
  }
  outC->_L21_then_IfBlock1 = kcg_true;
  outC->_L23_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L24_then_IfBlock1 = kcg_true;
  outC->FlashingBorderMsg = kcg_true;
  for (idx44 = 0; idx44 < 5; idx44++) {
    outC->Array_mm[idx44] = kcg_lit_float32(0.0);
  }
  for (idx45 = 0; idx45 < 5; idx45++) {
    outC->Array_hh[idx45] = kcg_lit_float32(0.0);
  }
  for (idx47 = 0; idx47 < 5; idx47++) {
    for (idx46 = 0; idx46 < 30; idx46++) {
      outC->ArrayPlainText[idx47][idx46] = ' ';
    }
  }
  for (idx48 = 0; idx48 < 5; idx48++) {
    outC->IndexFixedMsg[idx48] = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 27; idx2++) {
    /* IfBlock1:then:_L23=(DMI_Control_Pkg::Sub_func::TextMessages::Find_Q_Text_iterator#1)/ */
    Find_Q_Text_iterator_init_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->Context_Find_Q_Text_iterator_1[idx2]);
  }
  /* _L10=(DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator#1)/ */
  FlashingOperator_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_FlashingOperator_1);
  /* _L17=(DMI_Control_Pkg::Sub_func::TextMessages::CheckTypeOfText#1)/ */
  CheckTypeOfText_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_CheckTypeOfText_1);
  for (idx1 = 0; idx1 < 5; idx1++) {
    /* _L31=(DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_ack#2)/ */
    SortTimeTopDown_ack_init_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->Context_SortTimeTopDown_ack_2[idx1]);
  }
  for (idx = 0; idx < 5; idx++) {
    /* _L23=(DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_ack#1)/ */
    SortTimeTopDown_ack_init_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->Context_SortTimeTopDown_ack_1[idx]);
  }
  /* _L56=(DMI_Control_Pkg::Sub_func::TextMessages::Length#2)/ */
  Length_init_DMI_Control_Pkg_Sub_func_TextMessages(&outC->Context_Length_2);
  /* _L54=(DMI_Control_Pkg::Sub_func::TextMessages::Length#1)/ */
  Length_init_DMI_Control_Pkg_Sub_func_TextMessages(&outC->Context_Length_1);
}
#endif /* KCG_USER_DEFINED_INIT */


void AckMsgManager_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;

  for (idx2 = 0; idx2 < 27; idx2++) {
    /* IfBlock1:then:_L23=(DMI_Control_Pkg::Sub_func::TextMessages::Find_Q_Text_iterator#1)/ */
    Find_Q_Text_iterator_reset_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->Context_Find_Q_Text_iterator_1[idx2]);
  }
  /* _L10=(DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator#1)/ */
  FlashingOperator_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_FlashingOperator_1);
  /* _L17=(DMI_Control_Pkg::Sub_func::TextMessages::CheckTypeOfText#1)/ */
  CheckTypeOfText_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_CheckTypeOfText_1);
  for (idx1 = 0; idx1 < 5; idx1++) {
    /* _L31=(DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_ack#2)/ */
    SortTimeTopDown_ack_reset_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->Context_SortTimeTopDown_ack_2[idx1]);
  }
  for (idx = 0; idx < 5; idx++) {
    /* _L23=(DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_ack#1)/ */
    SortTimeTopDown_ack_reset_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->Context_SortTimeTopDown_ack_1[idx]);
  }
  /* _L56=(DMI_Control_Pkg::Sub_func::TextMessages::Length#2)/ */
  Length_reset_DMI_Control_Pkg_Sub_func_TextMessages(&outC->Context_Length_2);
  /* _L54=(DMI_Control_Pkg::Sub_func::TextMessages::Length#1)/ */
  Length_reset_DMI_Control_Pkg_Sub_func_TextMessages(&outC->Context_Length_1);
}


void kcg_save_SV_AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages(
  SV_AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages *SV,
  outC_AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  kcg_save_SV_FlashingOperator_DMI_Control_Pkg_Sub_func_TextMessages(
    &SV->Context_FlashingOperator_1,
    &outC->Context_FlashingOperator_1);
}

void kcg_load_SV_AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages *outC,
  SV_AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages *SV)
{
  kcg_load_SV_FlashingOperator_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_FlashingOperator_1,
    &SV->Context_FlashingOperator_1);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** AckMsgManager_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

