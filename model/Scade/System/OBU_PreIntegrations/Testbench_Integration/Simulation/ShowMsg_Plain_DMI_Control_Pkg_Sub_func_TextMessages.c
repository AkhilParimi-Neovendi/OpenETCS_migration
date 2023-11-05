/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ShowMsg_Plain_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::ShowMsg_Plain/ */
void ShowMsg_Plain_DMI_Control_Pkg_Sub_func_TextMessages(
  /* Msgarray/ */
  _94_array *Msgarray,
  /* scrollLevel/ */
  kcg_int32 scrollLevel,
  outC_ShowMsg_Plain_DMI_Control_Pkg_Sub_func_TextMessages *outC)
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
  static array_char_30_5 acc;
  static kcg_size idx20;
  /* isMoreThanFive/ */
  static kcg_bool last_isMoreThanFive;

  last_isMoreThanFive = outC->isMoreThanFive;
  kcg_copy__94_array(&outC->_L88, Msgarray);
  kcg_copy_MsgStructure(&outC->_L157, &outC->_L88[9]);
  kcg_copy_MsgStructure(&outC->Msg10, &outC->_L157);
  kcg_copy_MsgStructure(&outC->_L165, &outC->Msg10);
  /* _L177=(DMI_Control_Pkg::Sub_func::TextMessages::SliceMsg#10)/ */
  SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_L165,
    &outC->Context_SliceMsg_10);
  kcg_copy_array_char_30_5(&outC->_L177, &outC->Context_SliceMsg_10.Output1);
  /* _L186=(DMI_Control_Pkg::Sub_func::TextMessages::CountMSG#10)/ */
  CountMSG_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_L177,
    &outC->Context_CountMSG_10);
  outC->_L186 = outC->Context_CountMSG_10.num;
  outC->num10 = outC->_L186;
  outC->_L216 = outC->num10;
  kcg_copy_MsgStructure(&outC->_L156, &outC->_L88[8]);
  kcg_copy_MsgStructure(&outC->Msg9, &outC->_L156);
  kcg_copy_MsgStructure(&outC->_L164, &outC->Msg9);
  /* _L176=(DMI_Control_Pkg::Sub_func::TextMessages::SliceMsg#9)/ */
  SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_L164,
    &outC->Context_SliceMsg_9);
  kcg_copy_array_char_30_5(&outC->_L176, &outC->Context_SliceMsg_9.Output1);
  /* _L185=(DMI_Control_Pkg::Sub_func::TextMessages::CountMSG#9)/ */
  CountMSG_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_L176,
    &outC->Context_CountMSG_9);
  outC->_L185 = outC->Context_CountMSG_9.num;
  outC->num9 = outC->_L185;
  outC->_L224 = outC->num9;
  kcg_copy_MsgStructure(&outC->_L155, &outC->_L88[7]);
  kcg_copy_MsgStructure(&outC->Msg8, &outC->_L155);
  kcg_copy_MsgStructure(&outC->_L163, &outC->Msg8);
  /* _L175=(DMI_Control_Pkg::Sub_func::TextMessages::SliceMsg#8)/ */
  SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_L163,
    &outC->Context_SliceMsg_8);
  kcg_copy_array_char_30_5(&outC->_L175, &outC->Context_SliceMsg_8.Output1);
  /* _L184=(DMI_Control_Pkg::Sub_func::TextMessages::CountMSG#8)/ */
  CountMSG_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_L175,
    &outC->Context_CountMSG_8);
  outC->_L184 = outC->Context_CountMSG_8.num;
  outC->num8 = outC->_L184;
  outC->_L223 = outC->num8;
  kcg_copy_MsgStructure(&outC->_L154, &outC->_L88[6]);
  kcg_copy_MsgStructure(&outC->Msg7, &outC->_L154);
  kcg_copy_MsgStructure(&outC->_L162, &outC->Msg7);
  /* _L174=(DMI_Control_Pkg::Sub_func::TextMessages::SliceMsg#7)/ */
  SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_L162,
    &outC->Context_SliceMsg_7);
  kcg_copy_array_char_30_5(&outC->_L174, &outC->Context_SliceMsg_7.Output1);
  /* _L183=(DMI_Control_Pkg::Sub_func::TextMessages::CountMSG#7)/ */
  CountMSG_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_L174,
    &outC->Context_CountMSG_7);
  outC->_L183 = outC->Context_CountMSG_7.num;
  outC->num7 = outC->_L183;
  outC->_L222 = outC->num7;
  kcg_copy_MsgStructure(&outC->_L153, &outC->_L88[5]);
  kcg_copy_MsgStructure(&outC->Msg6, &outC->_L153);
  kcg_copy_MsgStructure(&outC->_L161, &outC->Msg6);
  /* _L173=(DMI_Control_Pkg::Sub_func::TextMessages::SliceMsg#6)/ */
  SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_L161,
    &outC->Context_SliceMsg_6);
  kcg_copy_array_char_30_5(&outC->_L173, &outC->Context_SliceMsg_6.Output1);
  /* _L182=(DMI_Control_Pkg::Sub_func::TextMessages::CountMSG#6)/ */
  CountMSG_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_L173,
    &outC->Context_CountMSG_6);
  outC->_L182 = outC->Context_CountMSG_6.num;
  outC->num6 = outC->_L182;
  outC->_L221 = outC->num6;
  kcg_copy_MsgStructure(&outC->_L114, &outC->_L88[4]);
  kcg_copy_MsgStructure(&outC->Msg5, &outC->_L114);
  kcg_copy_MsgStructure(&outC->_L152, &outC->Msg5);
  /* _L172=(DMI_Control_Pkg::Sub_func::TextMessages::SliceMsg#5)/ */
  SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_L152,
    &outC->Context_SliceMsg_5);
  kcg_copy_array_char_30_5(&outC->_L172, &outC->Context_SliceMsg_5.Output1);
  /* _L181=(DMI_Control_Pkg::Sub_func::TextMessages::CountMSG#5)/ */
  CountMSG_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_L172,
    &outC->Context_CountMSG_5);
  outC->_L181 = outC->Context_CountMSG_5.num;
  outC->num5 = outC->_L181;
  outC->_L220 = outC->num5;
  kcg_copy_MsgStructure(&outC->_L104, &outC->_L88[3]);
  kcg_copy_MsgStructure(&outC->Msg4, &outC->_L104);
  kcg_copy_MsgStructure(&outC->_L151, &outC->Msg4);
  /* _L171=(DMI_Control_Pkg::Sub_func::TextMessages::SliceMsg#4)/ */
  SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_L151,
    &outC->Context_SliceMsg_4);
  kcg_copy_array_char_30_5(&outC->_L171, &outC->Context_SliceMsg_4.Output1);
  /* _L180=(DMI_Control_Pkg::Sub_func::TextMessages::CountMSG#4)/ */
  CountMSG_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_L171,
    &outC->Context_CountMSG_4);
  outC->_L180 = outC->Context_CountMSG_4.num;
  outC->num4 = outC->_L180;
  outC->_L219 = outC->num4;
  kcg_copy_MsgStructure(&outC->_L97, &outC->_L88[2]);
  kcg_copy_MsgStructure(&outC->Msg3, &outC->_L97);
  kcg_copy_MsgStructure(&outC->_L150, &outC->Msg3);
  /* _L170=(DMI_Control_Pkg::Sub_func::TextMessages::SliceMsg#3)/ */
  SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_L150,
    &outC->Context_SliceMsg_3);
  kcg_copy_array_char_30_5(&outC->_L170, &outC->Context_SliceMsg_3.Output1);
  /* _L179=(DMI_Control_Pkg::Sub_func::TextMessages::CountMSG#3)/ */
  CountMSG_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_L170,
    &outC->Context_CountMSG_3);
  outC->_L179 = outC->Context_CountMSG_3.num;
  outC->num3 = outC->_L179;
  outC->_L218 = outC->num3;
  kcg_copy_MsgStructure(&outC->_L91, &outC->_L88[1]);
  kcg_copy_MsgStructure(&outC->Msg2, &outC->_L91);
  kcg_copy_MsgStructure(&outC->_L118, &outC->Msg2);
  /* _L169=(DMI_Control_Pkg::Sub_func::TextMessages::SliceMsg#2)/ */
  SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_L118,
    &outC->Context_SliceMsg_2);
  kcg_copy_array_char_30_5(&outC->_L169, &outC->Context_SliceMsg_2.Output1);
  /* _L178=(DMI_Control_Pkg::Sub_func::TextMessages::CountMSG#2)/ */
  CountMSG_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_L169,
    &outC->Context_CountMSG_2);
  outC->_L178 = outC->Context_CountMSG_2.num;
  outC->num2 = outC->_L178;
  outC->_L217 = outC->num2;
  kcg_copy_MsgStructure(&outC->_L74, &outC->_L88[0]);
  kcg_copy_MsgStructure(&outC->Msg1, &outC->_L74);
  kcg_copy_MsgStructure(&outC->_L117, &outC->Msg1);
  /* _L166=(DMI_Control_Pkg::Sub_func::TextMessages::SliceMsg#1)/ */
  SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_L117,
    &outC->Context_SliceMsg_1);
  kcg_copy_array_char_30_5(&outC->_L166, &outC->Context_SliceMsg_1.Output1);
  /* _L167=(DMI_Control_Pkg::Sub_func::TextMessages::CountMSG#1)/ */
  CountMSG_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->_L166,
    &outC->Context_CountMSG_1);
  outC->_L167 = outC->Context_CountMSG_1.num;
  outC->num1 = outC->_L167;
  outC->_L215 = outC->num1;
  outC->_L231 = outC->_L215 + outC->_L217;
  outC->_L232 = outC->_L231 + outC->_L218;
  outC->_L233 = outC->_L232 + outC->_L219;
  outC->_L234 = outC->_L233 + outC->_L220;
  outC->_L235 = outC->_L234 + outC->_L221;
  outC->_L236 = outC->_L235 + outC->_L222;
  outC->_L237 = outC->_L236 + outC->_L223;
  outC->_L238 = outC->_L237 + outC->_L224;
  outC->_L239 = outC->_L238 + outC->_L216;
  outC->_L226[0] = outC->_L215;
  outC->_L226[1] = outC->_L231;
  outC->_L226[2] = outC->_L232;
  outC->_L226[3] = outC->_L233;
  outC->_L226[4] = outC->_L234;
  outC->_L226[5] = outC->_L235;
  outC->_L226[6] = outC->_L236;
  outC->_L226[7] = outC->_L237;
  outC->_L226[8] = outC->_L238;
  outC->_L226[9] = outC->_L239;
  kcg_copy_array_int32_10(&outC->MsgNumArray, &outC->_L226);
  outC->_L210 = scrollLevel;
  /* _L211/ */
  for (idx = 0; idx < 5; idx++) {
    outC->_L211[idx] = outC->_L210;
  }
  outC->_L209 = outC->_L167 + outC->_L178 + outC->_L179 + outC->_L180 +
    outC->_L181 + outC->_L182 + outC->_L183 + outC->_L184 + outC->_L185 +
    outC->_L186;
  outC->LocalNumMsg = outC->_L209;
  /* _L207/ */
  for (idx1 = 0; idx1 < 5; idx1++) {
    outC->_L207[idx1] = outC->_L185;
  }
  /* _L206/ */
  for (idx2 = 0; idx2 < 5; idx2++) {
    outC->_L206[idx2] = outC->_L184;
  }
  /* _L205/ */
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L205[idx3] = outC->_L183;
  }
  /* _L204/ */
  for (idx4 = 0; idx4 < 5; idx4++) {
    outC->_L204[idx4] = outC->_L182;
  }
  /* _L203/ */
  for (idx5 = 0; idx5 < 5; idx5++) {
    outC->_L203[idx5] = outC->_L181;
  }
  /* _L199/ */
  for (idx6 = 0; idx6 < 5; idx6++) {
    outC->_L199[idx6] = outC->_L180;
  }
  /* _L198/ */
  for (idx7 = 0; idx7 < 5; idx7++) {
    outC->_L198[idx7] = outC->_L179;
  }
  /* _L197/ */
  for (idx8 = 0; idx8 < 5; idx8++) {
    outC->_L197[idx8] = outC->_L178;
  }
  /* _L196/ */
  for (idx9 = 0; idx9 < 5; idx9++) {
    outC->_L196[idx9] = outC->_L167;
  }
  /* _L195/ */
  for (idx10 = 0; idx10 < 5; idx10++) {
    kcg_copy_array_char_30_5(&outC->_L195[idx10], &outC->_L177);
  }
  /* _L194/ */
  for (idx11 = 0; idx11 < 5; idx11++) {
    kcg_copy_array_char_30_5(&outC->_L194[idx11], &outC->_L176);
  }
  /* _L193/ */
  for (idx12 = 0; idx12 < 5; idx12++) {
    kcg_copy_array_char_30_5(&outC->_L193[idx12], &outC->_L175);
  }
  /* _L192/ */
  for (idx13 = 0; idx13 < 5; idx13++) {
    kcg_copy_array_char_30_5(&outC->_L192[idx13], &outC->_L174);
  }
  /* _L191/ */
  for (idx14 = 0; idx14 < 5; idx14++) {
    kcg_copy_array_char_30_5(&outC->_L191[idx14], &outC->_L173);
  }
  /* _L190/ */
  for (idx15 = 0; idx15 < 5; idx15++) {
    kcg_copy_array_char_30_5(&outC->_L190[idx15], &outC->_L172);
  }
  /* _L189/ */
  for (idx16 = 0; idx16 < 5; idx16++) {
    kcg_copy_array_char_30_5(&outC->_L189[idx16], &outC->_L171);
  }
  /* _L188/ */
  for (idx17 = 0; idx17 < 5; idx17++) {
    kcg_copy_array_char_30_5(&outC->_L188[idx17], &outC->_L170);
  }
  /* _L187/ */
  for (idx18 = 0; idx18 < 5; idx18++) {
    kcg_copy_array_char_30_5(&outC->_L187[idx18], &outC->_L169);
  }
  /* _L168/ */
  for (idx19 = 0; idx19 < 5; idx19++) {
    kcg_copy_array_char_30_5(&outC->_L168[idx19], &outC->_L166);
  }
  kcg_copy_array_char_30_5(&outC->_L19, &outC->_L166);
  /* _L19= */
  for (idx20 = 0; idx20 < 5; idx20++) {
    kcg_copy_array_char_30_5(&acc, &outC->_L19);
    /* _L19=(DMI_Control_Pkg::Sub_func::TextMessages::MergeMessagesToPlain_iteration#1)/ */
    MergeMessagesToPlain_iteration_DMI_Control_Pkg_Sub_func_TextMessages(
      /* _L19= */(kcg_int32) idx20,
      &acc,
      &outC->_L168[idx20],
      outC->_L196[idx20],
      &outC->_L187[idx20],
      outC->_L197[idx20],
      &outC->_L188[idx20],
      outC->_L198[idx20],
      &outC->_L189[idx20],
      outC->_L199[idx20],
      &outC->_L190[idx20],
      outC->_L203[idx20],
      &outC->_L191[idx20],
      outC->_L204[idx20],
      &outC->_L192[idx20],
      outC->_L205[idx20],
      &outC->_L193[idx20],
      outC->_L206[idx20],
      &outC->_L194[idx20],
      outC->_L207[idx20],
      &outC->_L195[idx20],
      outC->_L211[idx20],
      &outC->Context_MergeMessagesToPlain_iteration_1[idx20]);
    kcg_copy_array_char_30_5(
      &outC->_L19,
      &outC->Context_MergeMessagesToPlain_iteration_1[idx20].plainTextQueue);
  }
  kcg_copy_array_char_30_5(&outC->PlainText, &outC->_L19);
  outC->_L149 = cDIM_MSGQueue_DMI_Control_Pkg;
  outC->_L147 = outC->LocalNumMsg;
  outC->_L148 = outC->_L147 > outC->_L149;
  outC->isMoreThanFive = outC->_L148;
}

#ifndef KCG_USER_DEFINED_INIT
void ShowMsg_Plain_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_ShowMsg_Plain_DMI_Control_Pkg_Sub_func_TextMessages *outC)
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
  static kcg_size idx65;
  static kcg_size idx66;
  static kcg_size idx67;
  static kcg_size idx68;
  static kcg_size idx69;
  static kcg_size idx70;
  static kcg_size idx71;
  static kcg_size idx72;
  static kcg_size idx73;
  static kcg_size idx74;
  static kcg_size idx75;
  static kcg_size idx76;
  static kcg_size idx77;
  static kcg_size idx78;
  static kcg_size idx79;
  static kcg_size idx80;
  static kcg_size idx81;
  static kcg_size idx82;
  static kcg_size idx83;
  static kcg_size idx84;
  static kcg_size idx85;
  static kcg_size idx86;
  static kcg_size idx87;
  static kcg_size idx88;
  static kcg_size idx89;
  static kcg_size idx90;
  static kcg_size idx91;
  static kcg_size idx92;
  static kcg_size idx93;
  static kcg_size idx94;
  static kcg_size idx95;
  static kcg_size idx96;
  static kcg_size idx97;
  static kcg_size idx98;

  outC->_L239 = kcg_lit_int32(0);
  outC->_L238 = kcg_lit_int32(0);
  outC->_L237 = kcg_lit_int32(0);
  outC->_L236 = kcg_lit_int32(0);
  outC->_L235 = kcg_lit_int32(0);
  outC->_L234 = kcg_lit_int32(0);
  outC->_L233 = kcg_lit_int32(0);
  outC->_L232 = kcg_lit_int32(0);
  outC->_L231 = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 10; idx1++) {
    outC->_L226[idx1] = kcg_lit_int32(0);
  }
  outC->_L224 = kcg_lit_int32(0);
  outC->_L223 = kcg_lit_int32(0);
  outC->_L222 = kcg_lit_int32(0);
  outC->_L221 = kcg_lit_int32(0);
  outC->_L220 = kcg_lit_int32(0);
  outC->_L219 = kcg_lit_int32(0);
  outC->_L218 = kcg_lit_int32(0);
  outC->_L217 = kcg_lit_int32(0);
  outC->_L216 = kcg_lit_int32(0);
  outC->_L215 = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 5; idx2++) {
    outC->_L211[idx2] = kcg_lit_int32(0);
  }
  outC->_L210 = kcg_lit_int32(0);
  outC->_L209 = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L207[idx3] = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 5; idx4++) {
    outC->_L206[idx4] = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 5; idx5++) {
    outC->_L205[idx5] = kcg_lit_int32(0);
  }
  for (idx6 = 0; idx6 < 5; idx6++) {
    outC->_L204[idx6] = kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 5; idx7++) {
    outC->_L203[idx7] = kcg_lit_int32(0);
  }
  for (idx8 = 0; idx8 < 5; idx8++) {
    outC->_L199[idx8] = kcg_lit_int32(0);
  }
  for (idx9 = 0; idx9 < 5; idx9++) {
    outC->_L198[idx9] = kcg_lit_int32(0);
  }
  for (idx10 = 0; idx10 < 5; idx10++) {
    outC->_L197[idx10] = kcg_lit_int32(0);
  }
  for (idx11 = 0; idx11 < 5; idx11++) {
    outC->_L196[idx11] = kcg_lit_int32(0);
  }
  for (idx14 = 0; idx14 < 5; idx14++) {
    for (idx13 = 0; idx13 < 5; idx13++) {
      for (idx12 = 0; idx12 < 30; idx12++) {
        outC->_L195[idx14][idx13][idx12] = ' ';
      }
    }
  }
  for (idx17 = 0; idx17 < 5; idx17++) {
    for (idx16 = 0; idx16 < 5; idx16++) {
      for (idx15 = 0; idx15 < 30; idx15++) {
        outC->_L194[idx17][idx16][idx15] = ' ';
      }
    }
  }
  for (idx20 = 0; idx20 < 5; idx20++) {
    for (idx19 = 0; idx19 < 5; idx19++) {
      for (idx18 = 0; idx18 < 30; idx18++) {
        outC->_L193[idx20][idx19][idx18] = ' ';
      }
    }
  }
  for (idx23 = 0; idx23 < 5; idx23++) {
    for (idx22 = 0; idx22 < 5; idx22++) {
      for (idx21 = 0; idx21 < 30; idx21++) {
        outC->_L192[idx23][idx22][idx21] = ' ';
      }
    }
  }
  for (idx26 = 0; idx26 < 5; idx26++) {
    for (idx25 = 0; idx25 < 5; idx25++) {
      for (idx24 = 0; idx24 < 30; idx24++) {
        outC->_L191[idx26][idx25][idx24] = ' ';
      }
    }
  }
  for (idx29 = 0; idx29 < 5; idx29++) {
    for (idx28 = 0; idx28 < 5; idx28++) {
      for (idx27 = 0; idx27 < 30; idx27++) {
        outC->_L190[idx29][idx28][idx27] = ' ';
      }
    }
  }
  for (idx32 = 0; idx32 < 5; idx32++) {
    for (idx31 = 0; idx31 < 5; idx31++) {
      for (idx30 = 0; idx30 < 30; idx30++) {
        outC->_L189[idx32][idx31][idx30] = ' ';
      }
    }
  }
  for (idx35 = 0; idx35 < 5; idx35++) {
    for (idx34 = 0; idx34 < 5; idx34++) {
      for (idx33 = 0; idx33 < 30; idx33++) {
        outC->_L188[idx35][idx34][idx33] = ' ';
      }
    }
  }
  for (idx38 = 0; idx38 < 5; idx38++) {
    for (idx37 = 0; idx37 < 5; idx37++) {
      for (idx36 = 0; idx36 < 30; idx36++) {
        outC->_L187[idx38][idx37][idx36] = ' ';
      }
    }
  }
  outC->_L186 = kcg_lit_int32(0);
  outC->_L185 = kcg_lit_int32(0);
  outC->_L184 = kcg_lit_int32(0);
  outC->_L183 = kcg_lit_int32(0);
  outC->_L182 = kcg_lit_int32(0);
  outC->_L181 = kcg_lit_int32(0);
  outC->_L180 = kcg_lit_int32(0);
  outC->_L179 = kcg_lit_int32(0);
  outC->_L178 = kcg_lit_int32(0);
  for (idx40 = 0; idx40 < 5; idx40++) {
    for (idx39 = 0; idx39 < 30; idx39++) {
      outC->_L177[idx40][idx39] = ' ';
    }
  }
  for (idx42 = 0; idx42 < 5; idx42++) {
    for (idx41 = 0; idx41 < 30; idx41++) {
      outC->_L176[idx42][idx41] = ' ';
    }
  }
  for (idx44 = 0; idx44 < 5; idx44++) {
    for (idx43 = 0; idx43 < 30; idx43++) {
      outC->_L175[idx44][idx43] = ' ';
    }
  }
  for (idx46 = 0; idx46 < 5; idx46++) {
    for (idx45 = 0; idx45 < 30; idx45++) {
      outC->_L174[idx46][idx45] = ' ';
    }
  }
  for (idx48 = 0; idx48 < 5; idx48++) {
    for (idx47 = 0; idx47 < 30; idx47++) {
      outC->_L173[idx48][idx47] = ' ';
    }
  }
  for (idx50 = 0; idx50 < 5; idx50++) {
    for (idx49 = 0; idx49 < 30; idx49++) {
      outC->_L172[idx50][idx49] = ' ';
    }
  }
  for (idx52 = 0; idx52 < 5; idx52++) {
    for (idx51 = 0; idx51 < 30; idx51++) {
      outC->_L171[idx52][idx51] = ' ';
    }
  }
  for (idx54 = 0; idx54 < 5; idx54++) {
    for (idx53 = 0; idx53 < 30; idx53++) {
      outC->_L170[idx54][idx53] = ' ';
    }
  }
  for (idx56 = 0; idx56 < 5; idx56++) {
    for (idx55 = 0; idx55 < 30; idx55++) {
      outC->_L169[idx56][idx55] = ' ';
    }
  }
  for (idx59 = 0; idx59 < 5; idx59++) {
    for (idx58 = 0; idx58 < 5; idx58++) {
      for (idx57 = 0; idx57 < 30; idx57++) {
        outC->_L168[idx59][idx58][idx57] = ' ';
      }
    }
  }
  outC->_L167 = kcg_lit_int32(0);
  for (idx61 = 0; idx61 < 5; idx61++) {
    for (idx60 = 0; idx60 < 30; idx60++) {
      outC->_L166[idx61][idx60] = ' ';
    }
  }
  outC->_L165.present = kcg_true;
  outC->_L165.dmi_msg.valid = kcg_true;
  outC->_L165.dmi_msg.system_clock = kcg_lit_int32(0);
  outC->_L165.dmi_msg.textMessage_ID = kcg_lit_int32(0);
  outC->_L165.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L165.dmi_msg.l_text = kcg_lit_int32(0);
  for (idx62 = 0; idx62 < 255; idx62++) {
    outC->_L165.dmi_msg.x_text[idx62] = ' ';
  }
  outC->_L165.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L165.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L164.present = kcg_true;
  outC->_L164.dmi_msg.valid = kcg_true;
  outC->_L164.dmi_msg.system_clock = kcg_lit_int32(0);
  outC->_L164.dmi_msg.textMessage_ID = kcg_lit_int32(0);
  outC->_L164.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L164.dmi_msg.l_text = kcg_lit_int32(0);
  for (idx63 = 0; idx63 < 255; idx63++) {
    outC->_L164.dmi_msg.x_text[idx63] = ' ';
  }
  outC->_L164.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L164.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L163.present = kcg_true;
  outC->_L163.dmi_msg.valid = kcg_true;
  outC->_L163.dmi_msg.system_clock = kcg_lit_int32(0);
  outC->_L163.dmi_msg.textMessage_ID = kcg_lit_int32(0);
  outC->_L163.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L163.dmi_msg.l_text = kcg_lit_int32(0);
  for (idx64 = 0; idx64 < 255; idx64++) {
    outC->_L163.dmi_msg.x_text[idx64] = ' ';
  }
  outC->_L163.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L163.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L162.present = kcg_true;
  outC->_L162.dmi_msg.valid = kcg_true;
  outC->_L162.dmi_msg.system_clock = kcg_lit_int32(0);
  outC->_L162.dmi_msg.textMessage_ID = kcg_lit_int32(0);
  outC->_L162.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L162.dmi_msg.l_text = kcg_lit_int32(0);
  for (idx65 = 0; idx65 < 255; idx65++) {
    outC->_L162.dmi_msg.x_text[idx65] = ' ';
  }
  outC->_L162.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L162.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L161.present = kcg_true;
  outC->_L161.dmi_msg.valid = kcg_true;
  outC->_L161.dmi_msg.system_clock = kcg_lit_int32(0);
  outC->_L161.dmi_msg.textMessage_ID = kcg_lit_int32(0);
  outC->_L161.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L161.dmi_msg.l_text = kcg_lit_int32(0);
  for (idx66 = 0; idx66 < 255; idx66++) {
    outC->_L161.dmi_msg.x_text[idx66] = ' ';
  }
  outC->_L161.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L161.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L157.present = kcg_true;
  outC->_L157.dmi_msg.valid = kcg_true;
  outC->_L157.dmi_msg.system_clock = kcg_lit_int32(0);
  outC->_L157.dmi_msg.textMessage_ID = kcg_lit_int32(0);
  outC->_L157.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L157.dmi_msg.l_text = kcg_lit_int32(0);
  for (idx67 = 0; idx67 < 255; idx67++) {
    outC->_L157.dmi_msg.x_text[idx67] = ' ';
  }
  outC->_L157.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L157.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L156.present = kcg_true;
  outC->_L156.dmi_msg.valid = kcg_true;
  outC->_L156.dmi_msg.system_clock = kcg_lit_int32(0);
  outC->_L156.dmi_msg.textMessage_ID = kcg_lit_int32(0);
  outC->_L156.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L156.dmi_msg.l_text = kcg_lit_int32(0);
  for (idx68 = 0; idx68 < 255; idx68++) {
    outC->_L156.dmi_msg.x_text[idx68] = ' ';
  }
  outC->_L156.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L156.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L155.present = kcg_true;
  outC->_L155.dmi_msg.valid = kcg_true;
  outC->_L155.dmi_msg.system_clock = kcg_lit_int32(0);
  outC->_L155.dmi_msg.textMessage_ID = kcg_lit_int32(0);
  outC->_L155.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L155.dmi_msg.l_text = kcg_lit_int32(0);
  for (idx69 = 0; idx69 < 255; idx69++) {
    outC->_L155.dmi_msg.x_text[idx69] = ' ';
  }
  outC->_L155.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L155.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L154.present = kcg_true;
  outC->_L154.dmi_msg.valid = kcg_true;
  outC->_L154.dmi_msg.system_clock = kcg_lit_int32(0);
  outC->_L154.dmi_msg.textMessage_ID = kcg_lit_int32(0);
  outC->_L154.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L154.dmi_msg.l_text = kcg_lit_int32(0);
  for (idx70 = 0; idx70 < 255; idx70++) {
    outC->_L154.dmi_msg.x_text[idx70] = ' ';
  }
  outC->_L154.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L154.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L153.present = kcg_true;
  outC->_L153.dmi_msg.valid = kcg_true;
  outC->_L153.dmi_msg.system_clock = kcg_lit_int32(0);
  outC->_L153.dmi_msg.textMessage_ID = kcg_lit_int32(0);
  outC->_L153.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L153.dmi_msg.l_text = kcg_lit_int32(0);
  for (idx71 = 0; idx71 < 255; idx71++) {
    outC->_L153.dmi_msg.x_text[idx71] = ' ';
  }
  outC->_L153.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L153.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L152.present = kcg_true;
  outC->_L152.dmi_msg.valid = kcg_true;
  outC->_L152.dmi_msg.system_clock = kcg_lit_int32(0);
  outC->_L152.dmi_msg.textMessage_ID = kcg_lit_int32(0);
  outC->_L152.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L152.dmi_msg.l_text = kcg_lit_int32(0);
  for (idx72 = 0; idx72 < 255; idx72++) {
    outC->_L152.dmi_msg.x_text[idx72] = ' ';
  }
  outC->_L152.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L152.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L151.present = kcg_true;
  outC->_L151.dmi_msg.valid = kcg_true;
  outC->_L151.dmi_msg.system_clock = kcg_lit_int32(0);
  outC->_L151.dmi_msg.textMessage_ID = kcg_lit_int32(0);
  outC->_L151.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L151.dmi_msg.l_text = kcg_lit_int32(0);
  for (idx73 = 0; idx73 < 255; idx73++) {
    outC->_L151.dmi_msg.x_text[idx73] = ' ';
  }
  outC->_L151.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L151.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L150.present = kcg_true;
  outC->_L150.dmi_msg.valid = kcg_true;
  outC->_L150.dmi_msg.system_clock = kcg_lit_int32(0);
  outC->_L150.dmi_msg.textMessage_ID = kcg_lit_int32(0);
  outC->_L150.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L150.dmi_msg.l_text = kcg_lit_int32(0);
  for (idx74 = 0; idx74 < 255; idx74++) {
    outC->_L150.dmi_msg.x_text[idx74] = ' ';
  }
  outC->_L150.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L150.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L149 = kcg_lit_int32(0);
  outC->_L148 = kcg_true;
  outC->_L147 = kcg_lit_int32(0);
  outC->_L118.present = kcg_true;
  outC->_L118.dmi_msg.valid = kcg_true;
  outC->_L118.dmi_msg.system_clock = kcg_lit_int32(0);
  outC->_L118.dmi_msg.textMessage_ID = kcg_lit_int32(0);
  outC->_L118.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L118.dmi_msg.l_text = kcg_lit_int32(0);
  for (idx75 = 0; idx75 < 255; idx75++) {
    outC->_L118.dmi_msg.x_text[idx75] = ' ';
  }
  outC->_L118.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L118.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L117.present = kcg_true;
  outC->_L117.dmi_msg.valid = kcg_true;
  outC->_L117.dmi_msg.system_clock = kcg_lit_int32(0);
  outC->_L117.dmi_msg.textMessage_ID = kcg_lit_int32(0);
  outC->_L117.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L117.dmi_msg.l_text = kcg_lit_int32(0);
  for (idx76 = 0; idx76 < 255; idx76++) {
    outC->_L117.dmi_msg.x_text[idx76] = ' ';
  }
  outC->_L117.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L117.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L114.present = kcg_true;
  outC->_L114.dmi_msg.valid = kcg_true;
  outC->_L114.dmi_msg.system_clock = kcg_lit_int32(0);
  outC->_L114.dmi_msg.textMessage_ID = kcg_lit_int32(0);
  outC->_L114.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L114.dmi_msg.l_text = kcg_lit_int32(0);
  for (idx77 = 0; idx77 < 255; idx77++) {
    outC->_L114.dmi_msg.x_text[idx77] = ' ';
  }
  outC->_L114.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L114.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L104.present = kcg_true;
  outC->_L104.dmi_msg.valid = kcg_true;
  outC->_L104.dmi_msg.system_clock = kcg_lit_int32(0);
  outC->_L104.dmi_msg.textMessage_ID = kcg_lit_int32(0);
  outC->_L104.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L104.dmi_msg.l_text = kcg_lit_int32(0);
  for (idx78 = 0; idx78 < 255; idx78++) {
    outC->_L104.dmi_msg.x_text[idx78] = ' ';
  }
  outC->_L104.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L104.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L97.present = kcg_true;
  outC->_L97.dmi_msg.valid = kcg_true;
  outC->_L97.dmi_msg.system_clock = kcg_lit_int32(0);
  outC->_L97.dmi_msg.textMessage_ID = kcg_lit_int32(0);
  outC->_L97.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L97.dmi_msg.l_text = kcg_lit_int32(0);
  for (idx79 = 0; idx79 < 255; idx79++) {
    outC->_L97.dmi_msg.x_text[idx79] = ' ';
  }
  outC->_L97.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L97.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  for (idx81 = 0; idx81 < 10; idx81++) {
    outC->_L88[idx81].present = kcg_true;
    outC->_L88[idx81].dmi_msg.valid = kcg_true;
    outC->_L88[idx81].dmi_msg.system_clock = kcg_lit_int32(0);
    outC->_L88[idx81].dmi_msg.textMessage_ID = kcg_lit_int32(0);
    outC->_L88[idx81].dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
    outC->_L88[idx81].dmi_msg.l_text = kcg_lit_int32(0);
    for (idx80 = 0; idx80 < 255; idx80++) {
      outC->_L88[idx81].dmi_msg.x_text[idx80] = ' ';
    }
    outC->_L88[idx81].dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
    outC->_L88[idx81].dmi_msg.q_textConfirm =
      Q_TEXTCONFIRM_No_confirmation_required;
  }
  outC->_L91.present = kcg_true;
  outC->_L91.dmi_msg.valid = kcg_true;
  outC->_L91.dmi_msg.system_clock = kcg_lit_int32(0);
  outC->_L91.dmi_msg.textMessage_ID = kcg_lit_int32(0);
  outC->_L91.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L91.dmi_msg.l_text = kcg_lit_int32(0);
  for (idx82 = 0; idx82 < 255; idx82++) {
    outC->_L91.dmi_msg.x_text[idx82] = ' ';
  }
  outC->_L91.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L91.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L74.present = kcg_true;
  outC->_L74.dmi_msg.valid = kcg_true;
  outC->_L74.dmi_msg.system_clock = kcg_lit_int32(0);
  outC->_L74.dmi_msg.textMessage_ID = kcg_lit_int32(0);
  outC->_L74.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L74.dmi_msg.l_text = kcg_lit_int32(0);
  for (idx83 = 0; idx83 < 255; idx83++) {
    outC->_L74.dmi_msg.x_text[idx83] = ' ';
  }
  outC->_L74.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L74.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  for (idx85 = 0; idx85 < 5; idx85++) {
    for (idx84 = 0; idx84 < 30; idx84++) {
      outC->_L19[idx85][idx84] = ' ';
    }
  }
  outC->num10 = kcg_lit_int32(0);
  outC->num9 = kcg_lit_int32(0);
  outC->num8 = kcg_lit_int32(0);
  outC->num7 = kcg_lit_int32(0);
  outC->num6 = kcg_lit_int32(0);
  outC->num5 = kcg_lit_int32(0);
  outC->num4 = kcg_lit_int32(0);
  outC->num3 = kcg_lit_int32(0);
  outC->num2 = kcg_lit_int32(0);
  outC->num1 = kcg_lit_int32(0);
  outC->Msg10.present = kcg_true;
  outC->Msg10.dmi_msg.valid = kcg_true;
  outC->Msg10.dmi_msg.system_clock = kcg_lit_int32(0);
  outC->Msg10.dmi_msg.textMessage_ID = kcg_lit_int32(0);
  outC->Msg10.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->Msg10.dmi_msg.l_text = kcg_lit_int32(0);
  for (idx86 = 0; idx86 < 255; idx86++) {
    outC->Msg10.dmi_msg.x_text[idx86] = ' ';
  }
  outC->Msg10.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->Msg10.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->Msg9.present = kcg_true;
  outC->Msg9.dmi_msg.valid = kcg_true;
  outC->Msg9.dmi_msg.system_clock = kcg_lit_int32(0);
  outC->Msg9.dmi_msg.textMessage_ID = kcg_lit_int32(0);
  outC->Msg9.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->Msg9.dmi_msg.l_text = kcg_lit_int32(0);
  for (idx87 = 0; idx87 < 255; idx87++) {
    outC->Msg9.dmi_msg.x_text[idx87] = ' ';
  }
  outC->Msg9.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->Msg9.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->Msg8.present = kcg_true;
  outC->Msg8.dmi_msg.valid = kcg_true;
  outC->Msg8.dmi_msg.system_clock = kcg_lit_int32(0);
  outC->Msg8.dmi_msg.textMessage_ID = kcg_lit_int32(0);
  outC->Msg8.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->Msg8.dmi_msg.l_text = kcg_lit_int32(0);
  for (idx88 = 0; idx88 < 255; idx88++) {
    outC->Msg8.dmi_msg.x_text[idx88] = ' ';
  }
  outC->Msg8.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->Msg8.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->Msg7.present = kcg_true;
  outC->Msg7.dmi_msg.valid = kcg_true;
  outC->Msg7.dmi_msg.system_clock = kcg_lit_int32(0);
  outC->Msg7.dmi_msg.textMessage_ID = kcg_lit_int32(0);
  outC->Msg7.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->Msg7.dmi_msg.l_text = kcg_lit_int32(0);
  for (idx89 = 0; idx89 < 255; idx89++) {
    outC->Msg7.dmi_msg.x_text[idx89] = ' ';
  }
  outC->Msg7.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->Msg7.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->Msg6.present = kcg_true;
  outC->Msg6.dmi_msg.valid = kcg_true;
  outC->Msg6.dmi_msg.system_clock = kcg_lit_int32(0);
  outC->Msg6.dmi_msg.textMessage_ID = kcg_lit_int32(0);
  outC->Msg6.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->Msg6.dmi_msg.l_text = kcg_lit_int32(0);
  for (idx90 = 0; idx90 < 255; idx90++) {
    outC->Msg6.dmi_msg.x_text[idx90] = ' ';
  }
  outC->Msg6.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->Msg6.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->LocalNumMsg = kcg_lit_int32(0);
  outC->Msg5.present = kcg_true;
  outC->Msg5.dmi_msg.valid = kcg_true;
  outC->Msg5.dmi_msg.system_clock = kcg_lit_int32(0);
  outC->Msg5.dmi_msg.textMessage_ID = kcg_lit_int32(0);
  outC->Msg5.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->Msg5.dmi_msg.l_text = kcg_lit_int32(0);
  for (idx91 = 0; idx91 < 255; idx91++) {
    outC->Msg5.dmi_msg.x_text[idx91] = ' ';
  }
  outC->Msg5.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->Msg5.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->Msg4.present = kcg_true;
  outC->Msg4.dmi_msg.valid = kcg_true;
  outC->Msg4.dmi_msg.system_clock = kcg_lit_int32(0);
  outC->Msg4.dmi_msg.textMessage_ID = kcg_lit_int32(0);
  outC->Msg4.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->Msg4.dmi_msg.l_text = kcg_lit_int32(0);
  for (idx92 = 0; idx92 < 255; idx92++) {
    outC->Msg4.dmi_msg.x_text[idx92] = ' ';
  }
  outC->Msg4.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->Msg4.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->Msg3.present = kcg_true;
  outC->Msg3.dmi_msg.valid = kcg_true;
  outC->Msg3.dmi_msg.system_clock = kcg_lit_int32(0);
  outC->Msg3.dmi_msg.textMessage_ID = kcg_lit_int32(0);
  outC->Msg3.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->Msg3.dmi_msg.l_text = kcg_lit_int32(0);
  for (idx93 = 0; idx93 < 255; idx93++) {
    outC->Msg3.dmi_msg.x_text[idx93] = ' ';
  }
  outC->Msg3.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->Msg3.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->Msg2.present = kcg_true;
  outC->Msg2.dmi_msg.valid = kcg_true;
  outC->Msg2.dmi_msg.system_clock = kcg_lit_int32(0);
  outC->Msg2.dmi_msg.textMessage_ID = kcg_lit_int32(0);
  outC->Msg2.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->Msg2.dmi_msg.l_text = kcg_lit_int32(0);
  for (idx94 = 0; idx94 < 255; idx94++) {
    outC->Msg2.dmi_msg.x_text[idx94] = ' ';
  }
  outC->Msg2.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->Msg2.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->Msg1.present = kcg_true;
  outC->Msg1.dmi_msg.valid = kcg_true;
  outC->Msg1.dmi_msg.system_clock = kcg_lit_int32(0);
  outC->Msg1.dmi_msg.textMessage_ID = kcg_lit_int32(0);
  outC->Msg1.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->Msg1.dmi_msg.l_text = kcg_lit_int32(0);
  for (idx95 = 0; idx95 < 255; idx95++) {
    outC->Msg1.dmi_msg.x_text[idx95] = ' ';
  }
  outC->Msg1.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->Msg1.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  for (idx96 = 0; idx96 < 10; idx96++) {
    outC->MsgNumArray[idx96] = kcg_lit_int32(0);
  }
  for (idx98 = 0; idx98 < 5; idx98++) {
    for (idx97 = 0; idx97 < 30; idx97++) {
      outC->PlainText[idx98][idx97] = ' ';
    }
  }
  for (idx = 0; idx < 5; idx++) {
    /* _L19=(DMI_Control_Pkg::Sub_func::TextMessages::MergeMessagesToPlain_iteration#1)/ */
    MergeMessagesToPlain_iteration_init_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->Context_MergeMessagesToPlain_iteration_1[idx]);
  }
  /* _L167=(DMI_Control_Pkg::Sub_func::TextMessages::CountMSG#1)/ */
  CountMSG_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_CountMSG_1);
  /* _L166=(DMI_Control_Pkg::Sub_func::TextMessages::SliceMsg#1)/ */
  SliceMsg_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_SliceMsg_1);
  /* _L178=(DMI_Control_Pkg::Sub_func::TextMessages::CountMSG#2)/ */
  CountMSG_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_CountMSG_2);
  /* _L169=(DMI_Control_Pkg::Sub_func::TextMessages::SliceMsg#2)/ */
  SliceMsg_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_SliceMsg_2);
  /* _L179=(DMI_Control_Pkg::Sub_func::TextMessages::CountMSG#3)/ */
  CountMSG_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_CountMSG_3);
  /* _L170=(DMI_Control_Pkg::Sub_func::TextMessages::SliceMsg#3)/ */
  SliceMsg_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_SliceMsg_3);
  /* _L180=(DMI_Control_Pkg::Sub_func::TextMessages::CountMSG#4)/ */
  CountMSG_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_CountMSG_4);
  /* _L171=(DMI_Control_Pkg::Sub_func::TextMessages::SliceMsg#4)/ */
  SliceMsg_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_SliceMsg_4);
  /* _L181=(DMI_Control_Pkg::Sub_func::TextMessages::CountMSG#5)/ */
  CountMSG_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_CountMSG_5);
  /* _L172=(DMI_Control_Pkg::Sub_func::TextMessages::SliceMsg#5)/ */
  SliceMsg_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_SliceMsg_5);
  /* _L182=(DMI_Control_Pkg::Sub_func::TextMessages::CountMSG#6)/ */
  CountMSG_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_CountMSG_6);
  /* _L173=(DMI_Control_Pkg::Sub_func::TextMessages::SliceMsg#6)/ */
  SliceMsg_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_SliceMsg_6);
  /* _L183=(DMI_Control_Pkg::Sub_func::TextMessages::CountMSG#7)/ */
  CountMSG_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_CountMSG_7);
  /* _L174=(DMI_Control_Pkg::Sub_func::TextMessages::SliceMsg#7)/ */
  SliceMsg_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_SliceMsg_7);
  /* _L184=(DMI_Control_Pkg::Sub_func::TextMessages::CountMSG#8)/ */
  CountMSG_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_CountMSG_8);
  /* _L175=(DMI_Control_Pkg::Sub_func::TextMessages::SliceMsg#8)/ */
  SliceMsg_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_SliceMsg_8);
  /* _L185=(DMI_Control_Pkg::Sub_func::TextMessages::CountMSG#9)/ */
  CountMSG_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_CountMSG_9);
  /* _L176=(DMI_Control_Pkg::Sub_func::TextMessages::SliceMsg#9)/ */
  SliceMsg_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_SliceMsg_9);
  /* _L186=(DMI_Control_Pkg::Sub_func::TextMessages::CountMSG#10)/ */
  CountMSG_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_CountMSG_10);
  /* _L177=(DMI_Control_Pkg::Sub_func::TextMessages::SliceMsg#10)/ */
  SliceMsg_init_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_SliceMsg_10);
  outC->isMoreThanFive = kcg_false;
}
#endif /* KCG_USER_DEFINED_INIT */


void ShowMsg_Plain_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_ShowMsg_Plain_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 5; idx++) {
    /* _L19=(DMI_Control_Pkg::Sub_func::TextMessages::MergeMessagesToPlain_iteration#1)/ */
    MergeMessagesToPlain_iteration_reset_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->Context_MergeMessagesToPlain_iteration_1[idx]);
  }
  /* _L167=(DMI_Control_Pkg::Sub_func::TextMessages::CountMSG#1)/ */
  CountMSG_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_CountMSG_1);
  /* _L166=(DMI_Control_Pkg::Sub_func::TextMessages::SliceMsg#1)/ */
  SliceMsg_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_SliceMsg_1);
  /* _L178=(DMI_Control_Pkg::Sub_func::TextMessages::CountMSG#2)/ */
  CountMSG_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_CountMSG_2);
  /* _L169=(DMI_Control_Pkg::Sub_func::TextMessages::SliceMsg#2)/ */
  SliceMsg_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_SliceMsg_2);
  /* _L179=(DMI_Control_Pkg::Sub_func::TextMessages::CountMSG#3)/ */
  CountMSG_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_CountMSG_3);
  /* _L170=(DMI_Control_Pkg::Sub_func::TextMessages::SliceMsg#3)/ */
  SliceMsg_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_SliceMsg_3);
  /* _L180=(DMI_Control_Pkg::Sub_func::TextMessages::CountMSG#4)/ */
  CountMSG_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_CountMSG_4);
  /* _L171=(DMI_Control_Pkg::Sub_func::TextMessages::SliceMsg#4)/ */
  SliceMsg_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_SliceMsg_4);
  /* _L181=(DMI_Control_Pkg::Sub_func::TextMessages::CountMSG#5)/ */
  CountMSG_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_CountMSG_5);
  /* _L172=(DMI_Control_Pkg::Sub_func::TextMessages::SliceMsg#5)/ */
  SliceMsg_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_SliceMsg_5);
  /* _L182=(DMI_Control_Pkg::Sub_func::TextMessages::CountMSG#6)/ */
  CountMSG_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_CountMSG_6);
  /* _L173=(DMI_Control_Pkg::Sub_func::TextMessages::SliceMsg#6)/ */
  SliceMsg_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_SliceMsg_6);
  /* _L183=(DMI_Control_Pkg::Sub_func::TextMessages::CountMSG#7)/ */
  CountMSG_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_CountMSG_7);
  /* _L174=(DMI_Control_Pkg::Sub_func::TextMessages::SliceMsg#7)/ */
  SliceMsg_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_SliceMsg_7);
  /* _L184=(DMI_Control_Pkg::Sub_func::TextMessages::CountMSG#8)/ */
  CountMSG_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_CountMSG_8);
  /* _L175=(DMI_Control_Pkg::Sub_func::TextMessages::SliceMsg#8)/ */
  SliceMsg_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_SliceMsg_8);
  /* _L185=(DMI_Control_Pkg::Sub_func::TextMessages::CountMSG#9)/ */
  CountMSG_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_CountMSG_9);
  /* _L176=(DMI_Control_Pkg::Sub_func::TextMessages::SliceMsg#9)/ */
  SliceMsg_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_SliceMsg_9);
  /* _L186=(DMI_Control_Pkg::Sub_func::TextMessages::CountMSG#10)/ */
  CountMSG_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_CountMSG_10);
  /* _L177=(DMI_Control_Pkg::Sub_func::TextMessages::SliceMsg#10)/ */
  SliceMsg_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_SliceMsg_10);
  outC->isMoreThanFive = kcg_false;
}


void kcg_save_SV_ShowMsg_Plain_DMI_Control_Pkg_Sub_func_TextMessages(
  SV_ShowMsg_Plain_DMI_Control_Pkg_Sub_func_TextMessages *SV,
  outC_ShowMsg_Plain_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  SV->Context_isMoreThanFive = outC->isMoreThanFive;
}

void kcg_load_SV_ShowMsg_Plain_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_ShowMsg_Plain_DMI_Control_Pkg_Sub_func_TextMessages *outC,
  SV_ShowMsg_Plain_DMI_Control_Pkg_Sub_func_TextMessages *SV)
{
  outC->isMoreThanFive = SV->Context_isMoreThanFive;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ShowMsg_Plain_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

