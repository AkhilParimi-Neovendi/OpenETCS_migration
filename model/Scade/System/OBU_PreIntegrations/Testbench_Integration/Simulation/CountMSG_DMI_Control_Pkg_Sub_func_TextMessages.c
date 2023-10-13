/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CountMSG_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::CountMSG/ */
void CountMSG_DMI_Control_Pkg_Sub_func_TextMessages(
  /* msg/ */
  array_char_30_5 *msg,
  outC_CountMSG_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->_L73 = kcg_lit_int64(0);
  outC->_L67 = kcg_lit_int64(5);
  kcg_copy_array_char_30(
    &outC->_L238,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  kcg_copy_array_char_30_5(&outC->_L241, msg);
  kcg_copy_array_char_30(&outC->_L232, &outC->_L241[4]);
  outC->_L247 = !kcg_comp_array_char_30(&outC->_L232, &outC->_L238);
  kcg_copy_array_char_30(
    &outC->_L237,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  kcg_copy_array_char_30_5(&outC->_L248, msg);
  kcg_copy_array_char_30(&outC->_L242, &outC->_L248[3]);
  outC->_L230 = !kcg_comp_array_char_30(&outC->_L242, &outC->_L237);
  kcg_copy_array_char_30(
    &outC->_L250,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  kcg_copy_array_char_30_5(&outC->_L233, msg);
  kcg_copy_array_char_30(&outC->_L246, &outC->_L233[2]);
  outC->_L240 = !kcg_comp_array_char_30(&outC->_L246, &outC->_L250);
  kcg_copy_array_char_30(
    &outC->_L249,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  kcg_copy_array_char_30_5(&outC->_L244, msg);
  kcg_copy_array_char_30(&outC->_L239, &outC->_L244[1]);
  outC->_L234 = !kcg_comp_array_char_30(&outC->_L239, &outC->_L249);
  kcg_copy_array_char_30(
    &outC->_L236,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  kcg_copy_array_char_30_5(&outC->_L231, msg);
  kcg_copy_array_char_30(&outC->_L235, &outC->_L231[0]);
  outC->_L245 = !kcg_comp_array_char_30(&outC->_L235, &outC->_L236);
  outC->_L243 = outC->_L245 & outC->_L234 & outC->_L240 & outC->_L230 &
    outC->_L247;
  /* _L58= */
  if (outC->_L243) {
    outC->_L58 = outC->_L67;
  }
  else {
    outC->_L58 = outC->_L73;
  }
  outC->_L46 = kcg_lit_int64(4);
  kcg_copy_array_char_30(
    &outC->_L211,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  kcg_copy_array_char_30_5(&outC->_L219, msg);
  kcg_copy_array_char_30(&outC->_L222, &outC->_L219[4]);
  outC->_L227 = kcg_comp_array_char_30(&outC->_L222, &outC->_L211);
  kcg_copy_array_char_30(
    &outC->_L209,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  kcg_copy_array_char_30_5(&outC->_L229, msg);
  kcg_copy_array_char_30(&outC->_L213, &outC->_L229[3]);
  outC->_L215 = !kcg_comp_array_char_30(&outC->_L213, &outC->_L209);
  kcg_copy_array_char_30(
    &outC->_L212,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  kcg_copy_array_char_30_5(&outC->_L210, msg);
  kcg_copy_array_char_30(&outC->_L218, &outC->_L210[2]);
  outC->_L220 = !kcg_comp_array_char_30(&outC->_L218, &outC->_L212);
  kcg_copy_array_char_30(
    &outC->_L224,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  kcg_copy_array_char_30_5(&outC->_L221, msg);
  kcg_copy_array_char_30(&outC->_L217, &outC->_L221[1]);
  outC->_L214 = !kcg_comp_array_char_30(&outC->_L217, &outC->_L224);
  kcg_copy_array_char_30(
    &outC->_L228,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  kcg_copy_array_char_30_5(&outC->_L225, msg);
  kcg_copy_array_char_30(&outC->_L216, &outC->_L225[0]);
  outC->_L226 = !kcg_comp_array_char_30(&outC->_L216, &outC->_L228);
  outC->_L223 = outC->_L226 & outC->_L214 & outC->_L220 & outC->_L215 &
    outC->_L227;
  /* _L53= */
  if (outC->_L223) {
    outC->_L53 = outC->_L46;
  }
  else {
    outC->_L53 = outC->_L58;
  }
  kcg_copy_array_char_30(
    &outC->_L177,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  kcg_copy_array_char_30_5(&outC->_L182, msg);
  kcg_copy_array_char_30(&outC->_L183, &outC->_L182[0]);
  outC->_L187 = !kcg_comp_array_char_30(&outC->_L183, &outC->_L177);
  kcg_copy_array_char_30(
    &outC->_L186,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  kcg_copy_array_char_30_5(&outC->_L185, msg);
  kcg_copy_array_char_30_5(&outC->_L184, msg);
  kcg_copy_array_char_30_5(&outC->_L181, msg);
  kcg_copy_array_char_30(
    &outC->_L180,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  kcg_copy_array_char_30(
    &outC->_L179,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  kcg_copy_array_char_30(
    &outC->_L178,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  kcg_copy_array_char_30_5(&outC->_L173, msg);
  kcg_copy_array_char_30(&outC->_L175, &outC->_L173[1]);
  outC->_L176 = !kcg_comp_array_char_30(&outC->_L175, &outC->_L179);
  kcg_copy_array_char_30(&outC->_L172, &outC->_L185[3]);
  outC->_L174 = kcg_comp_array_char_30(&outC->_L172, &outC->_L180);
  kcg_copy_array_char_30(&outC->_L170, &outC->_L181[4]);
  outC->_L169 = kcg_comp_array_char_30(&outC->_L170, &outC->_L186);
  kcg_copy_array_char_30(&outC->_L168, &outC->_L184[2]);
  outC->_L167 = !kcg_comp_array_char_30(&outC->_L168, &outC->_L178);
  outC->_L171 = outC->_L187 & outC->_L176 & outC->_L167 & outC->_L174 &
    outC->_L169;
  kcg_copy_array_char_30_5(&outC->_L163, msg);
  kcg_copy_array_char_30(&outC->_L166, &outC->_L163[0]);
  kcg_copy_array_char_30(
    &outC->_L164,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  outC->_L165 = !kcg_comp_array_char_30(&outC->_L166, &outC->_L164);
  kcg_copy_array_char_30(
    &outC->_L118,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  kcg_copy_array_char_30_5(&outC->_L117, msg);
  kcg_copy_array_char_30(&outC->_L121, &outC->_L117[4]);
  outC->_L114 = kcg_comp_array_char_30(&outC->_L121, &outC->_L118);
  kcg_copy_array_char_30(
    &outC->_L120,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  kcg_copy_array_char_30_5(&outC->_L115, msg);
  kcg_copy_array_char_30(&outC->_L119, &outC->_L115[3]);
  outC->_L116 = kcg_comp_array_char_30(&outC->_L119, &outC->_L120);
  kcg_copy_array_char_30(
    &outC->_L111,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  kcg_copy_array_char_30_5(&outC->_L112, msg);
  kcg_copy_array_char_30(&outC->_L113, &outC->_L112[2]);
  outC->_L110 = kcg_comp_array_char_30(&outC->_L113, &outC->_L111);
  kcg_copy_array_char_30(
    &outC->_L105,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  kcg_copy_array_char_30_5(&outC->_L103, msg);
  kcg_copy_array_char_30(&outC->_L102, &outC->_L103[1]);
  outC->_L104 = kcg_comp_array_char_30(&outC->_L102, &outC->_L105);
  kcg_copy_array_char_30(
    &outC->_L76,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  kcg_copy_array_char_30_5(&outC->_L1, msg);
  kcg_copy_array_char_30(&outC->_L74, &outC->_L1[0]);
  outC->_L75 = !kcg_comp_array_char_30(&outC->_L74, &outC->_L76);
  outC->_L122 = outC->_L75 & outC->_L104 & outC->_L110 & outC->_L116 &
    outC->_L114;
  kcg_copy_array_char_30_5(&outC->_L101, msg);
  kcg_copy_array_char_30(
    &outC->_L98,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  kcg_copy_array_char_30(&outC->_L99, &outC->_L101[4]);
  outC->_L100 = kcg_comp_array_char_30(&outC->_L99, &outC->_L98);
  kcg_copy_array_char_30(
    &outC->_L97,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  kcg_copy_array_char_30_5(&outC->_L94, msg);
  kcg_copy_array_char_30(&outC->_L96, &outC->_L94[3]);
  outC->_L95 = kcg_comp_array_char_30(&outC->_L96, &outC->_L97);
  kcg_copy_array_char_30_5(&outC->_L90, msg);
  kcg_copy_array_char_30(&outC->_L93, &outC->_L90[2]);
  kcg_copy_array_char_30(
    &outC->_L91,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  outC->_L92 = kcg_comp_array_char_30(&outC->_L93, &outC->_L91);
  kcg_copy_array_char_30(
    &outC->_L77,
    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  kcg_copy_array_char_30_5(&outC->_L79, msg);
  kcg_copy_array_char_30(&outC->_L78, &outC->_L79[1]);
  outC->_L80 = !kcg_comp_array_char_30(&outC->_L78, &outC->_L77);
  outC->_L81 = outC->_L165 & outC->_L80 & outC->_L92 & outC->_L95 & outC->_L100;
  outC->_L42 = kcg_lit_int64(3);
  /* _L39= */
  if (outC->_L171) {
    outC->_L39 = outC->_L42;
  }
  else {
    outC->_L39 = outC->_L53;
  }
  outC->_L32 = kcg_lit_int64(2);
  /* _L24= */
  if (outC->_L81) {
    outC->_L24 = outC->_L32;
  }
  else {
    outC->_L24 = outC->_L39;
  }
  outC->_L22 = kcg_lit_int64(1);
  /* _L9= */
  if (outC->_L122) {
    outC->_L9 = outC->_L22;
  }
  else {
    outC->_L9 = outC->_L24;
  }
  outC->num = outC->_L9;
}

#ifndef KCG_USER_DEFINED_INIT
void CountMSG_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_CountMSG_DMI_Control_Pkg_Sub_func_TextMessages *outC)
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
  static kcg_size idx99;

  outC->_L53 = kcg_lit_int64(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L250[idx] = ' ';
  }
  for (idx1 = 0; idx1 < 30; idx1++) {
    outC->_L249[idx1] = ' ';
  }
  outC->_L230 = kcg_true;
  for (idx3 = 0; idx3 < 5; idx3++) {
    for (idx2 = 0; idx2 < 30; idx2++) {
      outC->_L231[idx3][idx2] = ' ';
    }
  }
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L232[idx4] = ' ';
  }
  for (idx6 = 0; idx6 < 5; idx6++) {
    for (idx5 = 0; idx5 < 30; idx5++) {
      outC->_L233[idx6][idx5] = ' ';
    }
  }
  outC->_L234 = kcg_true;
  for (idx7 = 0; idx7 < 30; idx7++) {
    outC->_L235[idx7] = ' ';
  }
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->_L236[idx8] = ' ';
  }
  for (idx9 = 0; idx9 < 30; idx9++) {
    outC->_L237[idx9] = ' ';
  }
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->_L238[idx10] = ' ';
  }
  for (idx11 = 0; idx11 < 30; idx11++) {
    outC->_L239[idx11] = ' ';
  }
  outC->_L240 = kcg_true;
  for (idx13 = 0; idx13 < 5; idx13++) {
    for (idx12 = 0; idx12 < 30; idx12++) {
      outC->_L241[idx13][idx12] = ' ';
    }
  }
  for (idx14 = 0; idx14 < 30; idx14++) {
    outC->_L242[idx14] = ' ';
  }
  outC->_L243 = kcg_true;
  for (idx16 = 0; idx16 < 5; idx16++) {
    for (idx15 = 0; idx15 < 30; idx15++) {
      outC->_L244[idx16][idx15] = ' ';
    }
  }
  outC->_L245 = kcg_true;
  for (idx17 = 0; idx17 < 30; idx17++) {
    outC->_L246[idx17] = ' ';
  }
  outC->_L247 = kcg_true;
  for (idx19 = 0; idx19 < 5; idx19++) {
    for (idx18 = 0; idx18 < 30; idx18++) {
      outC->_L248[idx19][idx18] = ' ';
    }
  }
  for (idx20 = 0; idx20 < 30; idx20++) {
    outC->_L209[idx20] = ' ';
  }
  for (idx22 = 0; idx22 < 5; idx22++) {
    for (idx21 = 0; idx21 < 30; idx21++) {
      outC->_L210[idx22][idx21] = ' ';
    }
  }
  for (idx23 = 0; idx23 < 30; idx23++) {
    outC->_L211[idx23] = ' ';
  }
  for (idx24 = 0; idx24 < 30; idx24++) {
    outC->_L212[idx24] = ' ';
  }
  for (idx25 = 0; idx25 < 30; idx25++) {
    outC->_L213[idx25] = ' ';
  }
  outC->_L214 = kcg_true;
  outC->_L215 = kcg_true;
  for (idx26 = 0; idx26 < 30; idx26++) {
    outC->_L216[idx26] = ' ';
  }
  for (idx27 = 0; idx27 < 30; idx27++) {
    outC->_L217[idx27] = ' ';
  }
  for (idx28 = 0; idx28 < 30; idx28++) {
    outC->_L218[idx28] = ' ';
  }
  for (idx30 = 0; idx30 < 5; idx30++) {
    for (idx29 = 0; idx29 < 30; idx29++) {
      outC->_L219[idx30][idx29] = ' ';
    }
  }
  outC->_L220 = kcg_true;
  for (idx32 = 0; idx32 < 5; idx32++) {
    for (idx31 = 0; idx31 < 30; idx31++) {
      outC->_L221[idx32][idx31] = ' ';
    }
  }
  for (idx33 = 0; idx33 < 30; idx33++) {
    outC->_L222[idx33] = ' ';
  }
  outC->_L223 = kcg_true;
  for (idx34 = 0; idx34 < 30; idx34++) {
    outC->_L224[idx34] = ' ';
  }
  for (idx36 = 0; idx36 < 5; idx36++) {
    for (idx35 = 0; idx35 < 30; idx35++) {
      outC->_L225[idx36][idx35] = ' ';
    }
  }
  outC->_L226 = kcg_true;
  outC->_L227 = kcg_true;
  for (idx37 = 0; idx37 < 30; idx37++) {
    outC->_L228[idx37] = ' ';
  }
  for (idx39 = 0; idx39 < 5; idx39++) {
    for (idx38 = 0; idx38 < 30; idx38++) {
      outC->_L229[idx39][idx38] = ' ';
    }
  }
  outC->_L167 = kcg_true;
  for (idx40 = 0; idx40 < 30; idx40++) {
    outC->_L168[idx40] = ' ';
  }
  outC->_L169 = kcg_true;
  for (idx41 = 0; idx41 < 30; idx41++) {
    outC->_L170[idx41] = ' ';
  }
  outC->_L171 = kcg_true;
  for (idx42 = 0; idx42 < 30; idx42++) {
    outC->_L172[idx42] = ' ';
  }
  for (idx44 = 0; idx44 < 5; idx44++) {
    for (idx43 = 0; idx43 < 30; idx43++) {
      outC->_L173[idx44][idx43] = ' ';
    }
  }
  outC->_L174 = kcg_true;
  for (idx45 = 0; idx45 < 30; idx45++) {
    outC->_L175[idx45] = ' ';
  }
  outC->_L176 = kcg_true;
  for (idx46 = 0; idx46 < 30; idx46++) {
    outC->_L177[idx46] = ' ';
  }
  for (idx47 = 0; idx47 < 30; idx47++) {
    outC->_L178[idx47] = ' ';
  }
  for (idx48 = 0; idx48 < 30; idx48++) {
    outC->_L179[idx48] = ' ';
  }
  for (idx49 = 0; idx49 < 30; idx49++) {
    outC->_L180[idx49] = ' ';
  }
  for (idx51 = 0; idx51 < 5; idx51++) {
    for (idx50 = 0; idx50 < 30; idx50++) {
      outC->_L181[idx51][idx50] = ' ';
    }
  }
  for (idx53 = 0; idx53 < 5; idx53++) {
    for (idx52 = 0; idx52 < 30; idx52++) {
      outC->_L182[idx53][idx52] = ' ';
    }
  }
  for (idx54 = 0; idx54 < 30; idx54++) {
    outC->_L183[idx54] = ' ';
  }
  for (idx56 = 0; idx56 < 5; idx56++) {
    for (idx55 = 0; idx55 < 30; idx55++) {
      outC->_L184[idx56][idx55] = ' ';
    }
  }
  for (idx58 = 0; idx58 < 5; idx58++) {
    for (idx57 = 0; idx57 < 30; idx57++) {
      outC->_L185[idx58][idx57] = ' ';
    }
  }
  for (idx59 = 0; idx59 < 30; idx59++) {
    outC->_L186[idx59] = ' ';
  }
  outC->_L187 = kcg_true;
  for (idx61 = 0; idx61 < 5; idx61++) {
    for (idx60 = 0; idx60 < 30; idx60++) {
      outC->_L163[idx61][idx60] = ' ';
    }
  }
  for (idx62 = 0; idx62 < 30; idx62++) {
    outC->_L164[idx62] = ' ';
  }
  outC->_L165 = kcg_true;
  for (idx63 = 0; idx63 < 30; idx63++) {
    outC->_L166[idx63] = ' ';
  }
  outC->_L122 = kcg_true;
  outC->_L114 = kcg_true;
  for (idx65 = 0; idx65 < 5; idx65++) {
    for (idx64 = 0; idx64 < 30; idx64++) {
      outC->_L115[idx65][idx64] = ' ';
    }
  }
  outC->_L116 = kcg_true;
  for (idx67 = 0; idx67 < 5; idx67++) {
    for (idx66 = 0; idx66 < 30; idx66++) {
      outC->_L117[idx67][idx66] = ' ';
    }
  }
  for (idx68 = 0; idx68 < 30; idx68++) {
    outC->_L118[idx68] = ' ';
  }
  for (idx69 = 0; idx69 < 30; idx69++) {
    outC->_L119[idx69] = ' ';
  }
  for (idx70 = 0; idx70 < 30; idx70++) {
    outC->_L120[idx70] = ' ';
  }
  for (idx71 = 0; idx71 < 30; idx71++) {
    outC->_L121[idx71] = ' ';
  }
  outC->_L110 = kcg_true;
  for (idx72 = 0; idx72 < 30; idx72++) {
    outC->_L111[idx72] = ' ';
  }
  for (idx74 = 0; idx74 < 5; idx74++) {
    for (idx73 = 0; idx73 < 30; idx73++) {
      outC->_L112[idx74][idx73] = ' ';
    }
  }
  for (idx75 = 0; idx75 < 30; idx75++) {
    outC->_L113[idx75] = ' ';
  }
  for (idx76 = 0; idx76 < 30; idx76++) {
    outC->_L102[idx76] = ' ';
  }
  for (idx78 = 0; idx78 < 5; idx78++) {
    for (idx77 = 0; idx77 < 30; idx77++) {
      outC->_L103[idx78][idx77] = ' ';
    }
  }
  outC->_L104 = kcg_true;
  for (idx79 = 0; idx79 < 30; idx79++) {
    outC->_L105[idx79] = ' ';
  }
  for (idx80 = 0; idx80 < 30; idx80++) {
    outC->_L98[idx80] = ' ';
  }
  for (idx81 = 0; idx81 < 30; idx81++) {
    outC->_L99[idx81] = ' ';
  }
  outC->_L100 = kcg_true;
  for (idx83 = 0; idx83 < 5; idx83++) {
    for (idx82 = 0; idx82 < 30; idx82++) {
      outC->_L101[idx83][idx82] = ' ';
    }
  }
  for (idx85 = 0; idx85 < 5; idx85++) {
    for (idx84 = 0; idx84 < 30; idx84++) {
      outC->_L94[idx85][idx84] = ' ';
    }
  }
  outC->_L95 = kcg_true;
  for (idx86 = 0; idx86 < 30; idx86++) {
    outC->_L96[idx86] = ' ';
  }
  for (idx87 = 0; idx87 < 30; idx87++) {
    outC->_L97[idx87] = ' ';
  }
  for (idx89 = 0; idx89 < 5; idx89++) {
    for (idx88 = 0; idx88 < 30; idx88++) {
      outC->_L90[idx89][idx88] = ' ';
    }
  }
  for (idx90 = 0; idx90 < 30; idx90++) {
    outC->_L91[idx90] = ' ';
  }
  outC->_L92 = kcg_true;
  for (idx91 = 0; idx91 < 30; idx91++) {
    outC->_L93[idx91] = ' ';
  }
  outC->_L81 = kcg_true;
  for (idx92 = 0; idx92 < 30; idx92++) {
    outC->_L77[idx92] = ' ';
  }
  for (idx93 = 0; idx93 < 30; idx93++) {
    outC->_L78[idx93] = ' ';
  }
  for (idx95 = 0; idx95 < 5; idx95++) {
    for (idx94 = 0; idx94 < 30; idx94++) {
      outC->_L79[idx95][idx94] = ' ';
    }
  }
  outC->_L80 = kcg_true;
  for (idx96 = 0; idx96 < 30; idx96++) {
    outC->_L76[idx96] = ' ';
  }
  outC->_L75 = kcg_true;
  for (idx97 = 0; idx97 < 30; idx97++) {
    outC->_L74[idx97] = ' ';
  }
  outC->_L73 = kcg_lit_int64(0);
  outC->_L58 = kcg_lit_int64(0);
  outC->_L67 = kcg_lit_int64(0);
  outC->_L46 = kcg_lit_int64(0);
  outC->_L39 = kcg_lit_int64(0);
  outC->_L42 = kcg_lit_int64(0);
  outC->_L24 = kcg_lit_int64(0);
  outC->_L32 = kcg_lit_int64(0);
  outC->_L22 = kcg_lit_int64(0);
  outC->_L9 = kcg_lit_int64(0);
  for (idx99 = 0; idx99 < 5; idx99++) {
    for (idx98 = 0; idx98 < 30; idx98++) {
      outC->_L1[idx99][idx98] = ' ';
    }
  }
  outC->num = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


void CountMSG_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_CountMSG_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CountMSG_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

