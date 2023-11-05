/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Kv_intVectorMerger_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::Kv_intVectorMerger/ */
void Kv_intVectorMerger_SDMConversionModelPkg(
  /* indices_in/ */
  array_int32_2 *indices_in,
  /* Kv/ */
  mv_Map_t_SDMConversionModelPkg *Kv,
  /* Abrake/ */
  av_Map_t_SDMConversionModelPkg *Abrake,
  outC_Kv_intVectorMerger_SDMConversionModelPkg *outC)
{
  kcg_copy_array_int32_2(&outC->_L51, indices_in);
  outC->_L48 = outC->_L51[1];
  kcg_copy_av_Map_t_SDMConversionModelPkg(&outC->_L43, Abrake);
  kcg_copy_v_BrakeSteps_t_SDMConversionModelPkg(&outC->_L49, &outC->_L43.v);
  if ((kcg_lit_int32(0) <= outC->_L48) & (outC->_L48 < kcg_lit_int32(6))) {
    outC->_L44 = outC->_L49[outC->_L48];
  }
  else {
    outC->_L44 = kcg_lit_int32(0);
  }
  outC->I2_Max_1_int32 = outC->_L44;
  outC->_L2_Max_1_int32 = outC->I2_Max_1_int32;
  kcg_copy_array_int32_2(&outC->_L47, indices_in);
  outC->_L50 = outC->_L47[0];
  kcg_copy_mv_Map_t_SDMConversionModelPkg(&outC->_L46, Kv);
  kcg_copy_v_KvSteps_t_SDMConversionModelPkg(&outC->_L42, &outC->_L46.v);
  if ((kcg_lit_int32(0) <= outC->_L50) & (outC->_L50 < kcg_lit_int32(7))) {
    outC->_L45 = outC->_L42[outC->_L50];
  }
  else {
    outC->_L45 = kcg_lit_int32(0);
  }
  outC->I1_Max_1_int32 = outC->_L45;
  outC->_L1_Max_1_int32 = outC->I1_Max_1_int32;
  outC->_L3_Max_1_int32 = outC->_L1_Max_1_int32 >= outC->_L2_Max_1_int32;
  /* @1/_L4= */
  if (outC->_L3_Max_1_int32) {
    outC->_L4_Max_1_int32 = outC->_L1_Max_1_int32;
  }
  else {
    outC->_L4_Max_1_int32 = outC->_L2_Max_1_int32;
  }
  outC->Ma_Output_Max_1_int32 = outC->_L4_Max_1_int32;
  kcg_copy_array_int32_2(&outC->_L21, indices_in);
  outC->_L14 = outC->_L21[1];
  outC->_L25 = kcg_lit_int32(1);
  outC->_L26 = outC->_L25 + outC->_L14;
  kcg_copy_av_Map_t_SDMConversionModelPkg(&outC->_L20, Abrake);
  kcg_copy_v_BrakeSteps_t_SDMConversionModelPkg(&outC->_L15, &outC->_L20.v);
  if ((kcg_lit_int32(0) <= outC->_L26) & (outC->_L26 < kcg_lit_int32(6))) {
    outC->_L18 = outC->_L15[outC->_L26];
  }
  else {
    outC->_L18 = kcg_lit_int32(0);
  }
  kcg_copy_array_int32_2(&outC->_L19, indices_in);
  outC->_L22 = outC->_L19[0];
  outC->_L24 = outC->_L25 + outC->_L22;
  kcg_copy_mv_Map_t_SDMConversionModelPkg(&outC->_L16, Kv);
  kcg_copy_v_KvSteps_t_SDMConversionModelPkg(&outC->_L17, &outC->_L16.v);
  if ((kcg_lit_int32(0) <= outC->_L24) & (outC->_L24 < kcg_lit_int32(7))) {
    outC->_L23 = outC->_L17[outC->_L24];
  }
  else {
    outC->_L23 = kcg_lit_int32(0);
  }
  outC->_L30 = outC->_L23 >= outC->_L18;
  outC->_L57 = kcg_lit_int32(0);
  outC->_L56 = outC->_L23 > outC->_L57;
  outC->_L67 = !outC->_L56;
  outC->_L68 = outC->_L67 | outC->_L30;
  outC->_L60 = kcg_lit_int32(0);
  outC->_L59 = outC->_L18 > outC->_L60;
  outC->_L64 = !outC->_L59;
  outC->_L27 = outC->_L23 <= outC->_L18;
  outC->_L66 = outC->_L27 | outC->_L64;
  outC->_L58 = outC->_L59 & outC->_L68;
  outC->_L55 = outC->_L56 & outC->_L66;
  outC->_L54 = outC->Ma_Output_Max_1_int32;
  /* _L31= */
  if (outC->_L58) {
    outC->_L31 = outC->_L26;
  }
  else {
    outC->_L31 = outC->_L14;
  }
  /* _L29= */
  if (outC->_L55) {
    outC->_L29 = outC->_L24;
  }
  else {
    outC->_L29 = outC->_L22;
  }
  outC->_L28[0] = outC->_L29;
  outC->_L28[1] = outC->_L31;
  outC->_L13 = kcg_lit_int32(100);
  kcg_copy_array_int32_2(&outC->_L6, indices_in);
  outC->_L5 = outC->_L6[1];
  kcg_copy_av_Map_t_SDMConversionModelPkg(&outC->_L3, Abrake);
  kcg_copy_a_BrakeSteps_t_SDMConversionModelPkg(&outC->_L7, &outC->_L3.a);
  if ((kcg_lit_int32(0) <= outC->_L5) & (outC->_L5 < kcg_lit_int32(6))) {
    outC->_L10 = outC->_L7[outC->_L5];
  }
  else {
    outC->_L10 = kcg_lit_int32(0);
  }
  kcg_copy_array_int32_2(&outC->_L1, indices_in);
  outC->_L4 = outC->_L1[0];
  kcg_copy_mv_Map_t_SDMConversionModelPkg(&outC->_L2, Kv);
  kcg_copy_m_KvSteps_t_SDMConversionModelPkg(&outC->_L8, &outC->_L2.m);
  if ((kcg_lit_int32(0) <= outC->_L4) & (outC->_L4 < kcg_lit_int32(7))) {
    outC->_L9 = outC->_L8[outC->_L4];
  }
  else {
    outC->_L9 = kcg_lit_int32(1);
  }
  outC->_L11 = outC->_L9 * outC->_L10;
  outC->_L12 = outC->_L11 / outC->_L13;
  outC->v = outC->_L54;
  outC->a = outC->_L12;
  kcg_copy_array_int32_2(&outC->indices_out, &outC->_L28);
}

#ifndef KCG_USER_DEFINED_INIT
void Kv_intVectorMerger_init_SDMConversionModelPkg(
  outC_Kv_intVectorMerger_SDMConversionModelPkg *outC)
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

  outC->_L68 = kcg_true;
  outC->_L67 = kcg_true;
  outC->_L66 = kcg_true;
  outC->_L64 = kcg_true;
  outC->_L59 = kcg_true;
  outC->_L60 = kcg_lit_int32(0);
  outC->_L58 = kcg_true;
  outC->_L57 = kcg_lit_int32(0);
  outC->_L56 = kcg_true;
  outC->_L55 = kcg_true;
  outC->_L54 = kcg_lit_int32(0);
  for (idx = 0; idx < 7; idx++) {
    outC->_L42[idx] = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 6; idx1++) {
    outC->_L43.a[idx1] = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 6; idx2++) {
    outC->_L43.v[idx2] = kcg_lit_int32(0);
  }
  outC->_L44 = kcg_lit_int32(0);
  outC->_L45 = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 7; idx3++) {
    outC->_L46.m[idx3] = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 7; idx4++) {
    outC->_L46.v[idx4] = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 2; idx5++) {
    outC->_L47[idx5] = kcg_lit_int32(0);
  }
  outC->_L48 = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 6; idx6++) {
    outC->_L49[idx6] = kcg_lit_int32(0);
  }
  outC->_L50 = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 2; idx7++) {
    outC->_L51[idx7] = kcg_lit_int32(0);
  }
  outC->_L31 = kcg_lit_int32(0);
  outC->_L30 = kcg_true;
  outC->_L29 = kcg_lit_int32(0);
  for (idx8 = 0; idx8 < 2; idx8++) {
    outC->_L28[idx8] = kcg_lit_int32(0);
  }
  outC->_L27 = kcg_true;
  outC->_L26 = kcg_lit_int32(0);
  outC->_L25 = kcg_lit_int32(0);
  outC->_L24 = kcg_lit_int32(0);
  outC->_L14 = kcg_lit_int32(0);
  for (idx9 = 0; idx9 < 6; idx9++) {
    outC->_L15[idx9] = kcg_lit_int32(0);
  }
  for (idx10 = 0; idx10 < 7; idx10++) {
    outC->_L16.m[idx10] = kcg_lit_int32(0);
  }
  for (idx11 = 0; idx11 < 7; idx11++) {
    outC->_L16.v[idx11] = kcg_lit_int32(0);
  }
  for (idx12 = 0; idx12 < 7; idx12++) {
    outC->_L17[idx12] = kcg_lit_int32(0);
  }
  outC->_L18 = kcg_lit_int32(0);
  for (idx13 = 0; idx13 < 2; idx13++) {
    outC->_L19[idx13] = kcg_lit_int32(0);
  }
  for (idx14 = 0; idx14 < 6; idx14++) {
    outC->_L20.a[idx14] = kcg_lit_int32(0);
  }
  for (idx15 = 0; idx15 < 6; idx15++) {
    outC->_L20.v[idx15] = kcg_lit_int32(0);
  }
  for (idx16 = 0; idx16 < 2; idx16++) {
    outC->_L21[idx16] = kcg_lit_int32(0);
  }
  outC->_L22 = kcg_lit_int32(0);
  outC->_L23 = kcg_lit_int32(0);
  outC->_L13 = kcg_lit_int32(0);
  outC->_L12 = kcg_lit_int32(0);
  outC->_L11 = kcg_lit_int32(0);
  outC->_L10 = kcg_lit_int32(0);
  outC->_L9 = kcg_lit_int32(0);
  for (idx17 = 0; idx17 < 7; idx17++) {
    outC->_L8[idx17] = kcg_lit_int32(0);
  }
  for (idx18 = 0; idx18 < 6; idx18++) {
    outC->_L7[idx18] = kcg_lit_int32(0);
  }
  for (idx19 = 0; idx19 < 2; idx19++) {
    outC->_L6[idx19] = kcg_lit_int32(0);
  }
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  for (idx20 = 0; idx20 < 6; idx20++) {
    outC->_L3.a[idx20] = kcg_lit_int32(0);
  }
  for (idx21 = 0; idx21 < 6; idx21++) {
    outC->_L3.v[idx21] = kcg_lit_int32(0);
  }
  for (idx22 = 0; idx22 < 7; idx22++) {
    outC->_L2.m[idx22] = kcg_lit_int32(0);
  }
  for (idx23 = 0; idx23 < 7; idx23++) {
    outC->_L2.v[idx23] = kcg_lit_int32(0);
  }
  for (idx24 = 0; idx24 < 2; idx24++) {
    outC->_L1[idx24] = kcg_lit_int32(0);
  }
  outC->_L1_Max_1_int32 = kcg_lit_int32(0);
  outC->_L2_Max_1_int32 = kcg_lit_int32(0);
  outC->_L3_Max_1_int32 = kcg_true;
  outC->_L4_Max_1_int32 = kcg_lit_int32(0);
  outC->I1_Max_1_int32 = kcg_lit_int32(0);
  outC->I2_Max_1_int32 = kcg_lit_int32(0);
  outC->Ma_Output_Max_1_int32 = kcg_lit_int32(0);
  outC->v = kcg_lit_int32(0);
  outC->a = kcg_lit_int32(0);
  for (idx25 = 0; idx25 < 2; idx25++) {
    outC->indices_out[idx25] = kcg_lit_int32(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Kv_intVectorMerger_reset_SDMConversionModelPkg(
  outC_Kv_intVectorMerger_SDMConversionModelPkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: SDMConversionModelPkg::Kv_intVectorMerger/
  @1: (math::Max#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Kv_intVectorMerger_SDMConversionModelPkg.c
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

