/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Kv_intVectorMapper_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::Kv_intVectorMapper/ */
void Kv_intVectorMapper_SDMConversionModelPkg(
  /* Kv_int/ */
  mv_Map_t_SDMConversionModelPkg *Kv_int,
  /* A_brake_em/ */
  av_Map_t_SDMConversionModelPkg *A_brake_em,
  outC_Kv_intVectorMapper_SDMConversionModelPkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static array_int32_2 acc;
  static kcg_size idx3;
  static array_int32_2 noname;

  outC->_L18 = kcg_lit_int32(0);
  /* _L17/ */
  for (idx = 0; idx < 2; idx++) {
    outC->_L17[idx] = outC->_L18;
  }
  kcg_copy_mv_Map_t_SDMConversionModelPkg(&outC->_L2, Kv_int);
  /* _L14/ */
  for (idx1 = 0; idx1 < 13; idx1++) {
    kcg_copy_mv_Map_t_SDMConversionModelPkg(&outC->_L14[idx1], &outC->_L2);
  }
  kcg_copy_av_Map_t_SDMConversionModelPkg(&outC->_L1, A_brake_em);
  /* _L16/ */
  for (idx2 = 0; idx2 < 13; idx2++) {
    kcg_copy_av_Map_t_SDMConversionModelPkg(&outC->_L16[idx2], &outC->_L1);
  }
  kcg_copy_array_int32_2(&outC->_L12, &outC->_L17);
  /* _L12= */
  for (idx3 = 0; idx3 < 13; idx3++) {
    kcg_copy_array_int32_2(&acc, &outC->_L12);
    /* _L12=(SDMConversionModelPkg::Kv_intVectorMerger#1)/ */
    Kv_intVectorMerger_SDMConversionModelPkg(
      &acc,
      &outC->_L14[idx3],
      &outC->_L16[idx3],
      &outC->Context_Kv_intVectorMerger_1[idx3]);
    kcg_copy_array_int32_2(
      &outC->_L12,
      &outC->Context_Kv_intVectorMerger_1[idx3].indices_out);
    outC->_L19[idx3] = outC->Context_Kv_intVectorMerger_1[idx3].a;
    outC->_L13[idx3] = outC->Context_Kv_intVectorMerger_1[idx3].v;
  }
  kcg_copy_a_MergedSteps_t_SDMConversionModelPkg(&outC->_L26.a, &outC->_L19);
  kcg_copy_v_MergedSteps_t_SDMConversionModelPkg(&outC->_L26.v, &outC->_L13);
  kcg_copy_array_int32_2(&noname, &outC->_L12);
  kcg_copy_av_MergedMap_t_SDMConversionModelPkg(&outC->A_brake_safe, &outC->_L26);
}

#ifndef KCG_USER_DEFINED_INIT
void Kv_intVectorMapper_init_SDMConversionModelPkg(
  outC_Kv_intVectorMapper_SDMConversionModelPkg *outC)
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

  for (idx1 = 0; idx1 < 13; idx1++) {
    outC->_L26.a[idx1] = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 13; idx2++) {
    outC->_L26.v[idx2] = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 13; idx3++) {
    outC->_L19[idx3] = kcg_lit_int32(0);
  }
  outC->_L18 = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 2; idx4++) {
    outC->_L17[idx4] = kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 13; idx7++) {
    for (idx5 = 0; idx5 < 6; idx5++) {
      outC->_L16[idx7].a[idx5] = kcg_lit_int32(0);
    }
    for (idx6 = 0; idx6 < 6; idx6++) {
      outC->_L16[idx7].v[idx6] = kcg_lit_int32(0);
    }
  }
  for (idx10 = 0; idx10 < 13; idx10++) {
    for (idx8 = 0; idx8 < 7; idx8++) {
      outC->_L14[idx10].m[idx8] = kcg_lit_int32(0);
    }
    for (idx9 = 0; idx9 < 7; idx9++) {
      outC->_L14[idx10].v[idx9] = kcg_lit_int32(0);
    }
  }
  for (idx11 = 0; idx11 < 2; idx11++) {
    outC->_L12[idx11] = kcg_lit_int32(0);
  }
  for (idx12 = 0; idx12 < 13; idx12++) {
    outC->_L13[idx12] = kcg_lit_int32(0);
  }
  for (idx13 = 0; idx13 < 7; idx13++) {
    outC->_L2.m[idx13] = kcg_lit_int32(0);
  }
  for (idx14 = 0; idx14 < 7; idx14++) {
    outC->_L2.v[idx14] = kcg_lit_int32(0);
  }
  for (idx15 = 0; idx15 < 6; idx15++) {
    outC->_L1.a[idx15] = kcg_lit_int32(0);
  }
  for (idx16 = 0; idx16 < 6; idx16++) {
    outC->_L1.v[idx16] = kcg_lit_int32(0);
  }
  for (idx17 = 0; idx17 < 13; idx17++) {
    outC->A_brake_safe.a[idx17] = kcg_lit_int32(0);
  }
  for (idx18 = 0; idx18 < 13; idx18++) {
    outC->A_brake_safe.v[idx18] = kcg_lit_int32(0);
  }
  for (idx = 0; idx < 13; idx++) {
    /* _L12=(SDMConversionModelPkg::Kv_intVectorMerger#1)/ */
    Kv_intVectorMerger_init_SDMConversionModelPkg(
      &outC->Context_Kv_intVectorMerger_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Kv_intVectorMapper_reset_SDMConversionModelPkg(
  outC_Kv_intVectorMapper_SDMConversionModelPkg *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 13; idx++) {
    /* _L12=(SDMConversionModelPkg::Kv_intVectorMerger#1)/ */
    Kv_intVectorMerger_reset_SDMConversionModelPkg(
      &outC->Context_Kv_intVectorMerger_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Kv_intVectorMapper_SDMConversionModelPkg.c
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

