/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InflateABrakeSafe_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::InflateABrakeSafe/ */
void InflateABrakeSafe_SDMConversionModelPkg(
  /* aBrakeSafe_cm/ */
  av_MergedMap_t_SDMConversionModelPkg *aBrakeSafe_cm,
  outC_InflateABrakeSafe_SDMConversionModelPkg *outC)
{
  static kcg_int64 acc;
  static kcg_size idx;
  static kcg_int64 acc1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static A_internal_Type_Obu_BasicTypes_Pkg noname;
  static V_internal_Type_Obu_BasicTypes_Pkg _6_noname;

  outC->_L38 = kcg_lit_int64(0);
  kcg_copy_av_MergedMap_t_SDMConversionModelPkg(&outC->_L1, aBrakeSafe_cm);
  kcg_copy_v_MergedSteps_t_SDMConversionModelPkg(&outC->_L25, &outC->_L1.v);
  outC->_L9 = outC->_L38;
  /* _L9= */
  for (idx = 0; idx < 13; idx++) {
    acc = outC->_L9;
    /* _L9=(SDMConversionModelPkg::InflateABrakeSpeeds#1)/ */
    InflateABrakeSpeeds_SDMConversionModelPkg(
      acc,
      outC->_L25[idx],
      &outC->Context_InflateABrakeSpeeds_1[idx]);
    outC->_L9 = outC->Context_InflateABrakeSpeeds_1[idx].Akku_out;
    outC->_L37[idx] = outC->Context_InflateABrakeSpeeds_1[idx].Vint;
  }
  _6_noname = outC->_L9;
  outC->_L36 = kcg_lit_int64(0);
  kcg_copy_a_MergedSteps_t_SDMConversionModelPkg(&outC->_L24, &outC->_L1.a);
  outC->_L35 = outC->_L36;
  /* _L35= */
  for (idx2 = 0; idx2 < 13; idx2++) {
    acc1 = outC->_L35;
    /* _L35=(SDMConversionModelPkg::InflateABrakeRow)/ */
    InflateABrakeRow_SDMConversionModelPkg(
      acc1,
      outC->_L24[idx2],
      &outC->Context_InflateABrakeRow[idx2]);
    outC->_L35 = outC->Context_InflateABrakeRow[idx2].Akku_out;
    kcg_copy_ASafeRow_T_CalcBrakingCurves_types(
      &outC->_L31[idx2],
      &outC->Context_InflateABrakeRow[idx2].ASafeRow);
  }
  noname = outC->_L35;
  outC->_L34 = outC->_L37[12];
  kcg_copy_ASafeRow_T_CalcBrakingCurves_types(&outC->_L32, &outC->_L31[12]);
  /* _L10/ */
  for (idx3 = 0; idx3 < 1; idx3++) {
    kcg_copy_ASafeRow_T_CalcBrakingCurves_types(&outC->_L10[idx3], &outC->_L32);
  }
  kcg_copy_array_float64_100_13(&outC->_L26[0], &outC->_L31);
  kcg_copy_ASafeRow_T_CalcBrakingCurves_types(&outC->_L26[13], &outC->_L10[0]);
  /* _L4/ */
  for (idx4 = 0; idx4 < 1; idx4++) {
    outC->_L4[idx4] = outC->_L34;
  }
  kcg_copy_array_float64_13(&outC->_L15[0], &outC->_L37);
  outC->_L15[13] = outC->_L4[0];
  outC->_L2 = kcg_lit_float64(0.0);
  /* _L12/ */
  for (idx5 = 0; idx5 < 100; idx5++) {
    outC->_L12[idx5] = outC->_L2;
  }
  kcg_copy_ASafeDistanceDefinition_T_CalcBrakingCurves_types(
    &outC->_L11.distance_definition,
    &outC->_L12);
  kcg_copy_ASafeSpeedDefinition_T_CalcBrakingCurves_types(
    &outC->_L11.speed_definition,
    &outC->_L15);
  kcg_copy_ASafe_Data_T_CalcBrakingCurves_types(&outC->_L11.data, &outC->_L26);
  kcg_copy_ASafe_T_CalcBrakingCurves_types(&outC->aBrakeSafe, &outC->_L11);
}

#ifndef KCG_USER_DEFINED_INIT
void InflateABrakeSafe_init_SDMConversionModelPkg(
  outC_InflateABrakeSafe_SDMConversionModelPkg *outC)
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

  outC->_L38 = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 13; idx2++) {
    outC->_L37[idx2] = kcg_lit_float64(0.0);
  }
  outC->_L36 = kcg_lit_int64(0);
  outC->_L35 = kcg_lit_int64(0);
  outC->_L34 = kcg_lit_float64(0.0);
  for (idx3 = 0; idx3 < 100; idx3++) {
    outC->_L32[idx3] = kcg_lit_float64(0.0);
  }
  for (idx5 = 0; idx5 < 13; idx5++) {
    for (idx4 = 0; idx4 < 100; idx4++) {
      outC->_L31[idx5][idx4] = kcg_lit_float64(0.0);
    }
  }
  for (idx7 = 0; idx7 < 14; idx7++) {
    for (idx6 = 0; idx6 < 100; idx6++) {
      outC->_L26[idx7][idx6] = kcg_lit_float64(0.0);
    }
  }
  for (idx8 = 0; idx8 < 13; idx8++) {
    outC->_L24[idx8] = kcg_lit_int64(0);
  }
  for (idx9 = 0; idx9 < 13; idx9++) {
    outC->_L25[idx9] = kcg_lit_int64(0);
  }
  outC->_L2 = kcg_lit_float64(0.0);
  for (idx10 = 0; idx10 < 1; idx10++) {
    outC->_L4[idx10] = kcg_lit_float64(0.0);
  }
  outC->_L9 = kcg_lit_int64(0);
  for (idx12 = 0; idx12 < 1; idx12++) {
    for (idx11 = 0; idx11 < 100; idx11++) {
      outC->_L10[idx12][idx11] = kcg_lit_float64(0.0);
    }
  }
  for (idx13 = 0; idx13 < 100; idx13++) {
    outC->_L11.distance_definition[idx13] = kcg_lit_float64(0.0);
  }
  for (idx14 = 0; idx14 < 14; idx14++) {
    outC->_L11.speed_definition[idx14] = kcg_lit_float64(0.0);
  }
  for (idx16 = 0; idx16 < 14; idx16++) {
    for (idx15 = 0; idx15 < 100; idx15++) {
      outC->_L11.data[idx16][idx15] = kcg_lit_float64(0.0);
    }
  }
  for (idx17 = 0; idx17 < 100; idx17++) {
    outC->_L12[idx17] = kcg_lit_float64(0.0);
  }
  for (idx18 = 0; idx18 < 14; idx18++) {
    outC->_L15[idx18] = kcg_lit_float64(0.0);
  }
  for (idx19 = 0; idx19 < 13; idx19++) {
    outC->_L1.a[idx19] = kcg_lit_int64(0);
  }
  for (idx20 = 0; idx20 < 13; idx20++) {
    outC->_L1.v[idx20] = kcg_lit_int64(0);
  }
  for (idx21 = 0; idx21 < 100; idx21++) {
    outC->aBrakeSafe.distance_definition[idx21] = kcg_lit_float64(0.0);
  }
  for (idx22 = 0; idx22 < 14; idx22++) {
    outC->aBrakeSafe.speed_definition[idx22] = kcg_lit_float64(0.0);
  }
  for (idx24 = 0; idx24 < 14; idx24++) {
    for (idx23 = 0; idx23 < 100; idx23++) {
      outC->aBrakeSafe.data[idx24][idx23] = kcg_lit_float64(0.0);
    }
  }
  for (idx1 = 0; idx1 < 13; idx1++) {
    /* _L35=(SDMConversionModelPkg::InflateABrakeRow)/ */
    InflateABrakeRow_init_SDMConversionModelPkg(
      &outC->Context_InflateABrakeRow[idx1]);
  }
  for (idx = 0; idx < 13; idx++) {
    /* _L9=(SDMConversionModelPkg::InflateABrakeSpeeds#1)/ */
    InflateABrakeSpeeds_init_SDMConversionModelPkg(
      &outC->Context_InflateABrakeSpeeds_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void InflateABrakeSafe_reset_SDMConversionModelPkg(
  outC_InflateABrakeSafe_SDMConversionModelPkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  for (idx1 = 0; idx1 < 13; idx1++) {
    /* _L35=(SDMConversionModelPkg::InflateABrakeRow)/ */
    InflateABrakeRow_reset_SDMConversionModelPkg(
      &outC->Context_InflateABrakeRow[idx1]);
  }
  for (idx = 0; idx < 13; idx++) {
    /* _L9=(SDMConversionModelPkg::InflateABrakeSpeeds#1)/ */
    InflateABrakeSpeeds_reset_SDMConversionModelPkg(
      &outC->Context_InflateABrakeSpeeds_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** InflateABrakeSafe_SDMConversionModelPkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

