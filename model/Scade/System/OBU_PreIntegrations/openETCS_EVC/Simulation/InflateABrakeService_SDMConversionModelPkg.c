/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InflateABrakeService_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::InflateABrakeService/ */
void InflateABrakeService_SDMConversionModelPkg(
  /* aBrake/ */
  a_Brake_t_SDMConversionModelPkg *aBrake,
  outC_InflateABrakeService_SDMConversionModelPkg *outC)
{
  kcg_int32 acc;
  kcg_size idx;
  kcg_int32 acc1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  A_internal_Type_Obu_BasicTypes_Pkg noname;
  V_internal_Type_Obu_BasicTypes_Pkg _6_noname;

  outC->_L40 = kcg_lit_int32(0);
  kcg_copy_a_Brake_t_SDMConversionModelPkg(&outC->_L3, aBrake);
  kcg_copy_av_Map_t_SDMConversionModelPkg(&outC->_L2, &outC->_L3.service);
  kcg_copy_v_BrakeSteps_t_SDMConversionModelPkg(&outC->_L7, &outC->_L2.v);
  outC->_L13 = outC->_L40;
  /* _L13= */
  for (idx = 0; idx < 6; idx++) {
    acc = outC->_L13;
    /* _L13=(SDMConversionModelPkg::InflateABrakeSpeeds#1)/ */
    InflateABrakeSpeeds_SDMConversionModelPkg(
      acc,
      outC->_L7[idx],
      &outC->Context_InflateABrakeSpeeds_1[idx]);
    outC->_L13 = outC->Context_InflateABrakeSpeeds_1[idx].Akku_out;
    outC->_L39[idx] = outC->Context_InflateABrakeSpeeds_1[idx].Vint;
  }
  _6_noname = outC->_L13;
  outC->_L38 = kcg_lit_int32(0);
  kcg_copy_a_BrakeSteps_t_SDMConversionModelPkg(&outC->_L6, &outC->_L2.a);
  outC->_L36 = outC->_L38;
  /* _L36= */
  for (idx2 = 0; idx2 < 6; idx2++) {
    acc1 = outC->_L36;
    /* _L36=(SDMConversionModelPkg::InflateABrakeRow#1)/ */
    InflateABrakeRow_SDMConversionModelPkg(
      acc1,
      outC->_L6[idx2],
      &outC->Context_InflateABrakeRow_1[idx2]);
    outC->_L36 = outC->Context_InflateABrakeRow_1[idx2].Akku_out;
    kcg_copy_ASafeRow_T_CalcBrakingCurves_types(
      &outC->_L37[idx2],
      &outC->Context_InflateABrakeRow_1[idx2].ASafeRow);
  }
  noname = outC->_L36;
  outC->_L31 = outC->_L39[5];
  kcg_copy_ASafeRow_T_CalcBrakingCurves_types(&outC->_L30, &outC->_L37[5]);
  /* _L28/ */
  for (idx3 = 0; idx3 < 8; idx3++) {
    kcg_copy_ASafeRow_T_CalcBrakingCurves_types(&outC->_L28[idx3], &outC->_L30);
  }
  kcg_copy_array_float32_100_6(&outC->_L25[0], &outC->_L37);
  kcg_copy_array_float32_100_8(&outC->_L25[6], &outC->_L28);
  outC->_L17 = kcg_lit_float32(0.0);
  /* _L16/ */
  for (idx4 = 0; idx4 < 100; idx4++) {
    outC->_L16[idx4] = outC->_L17;
  }
  /* _L14/ */
  for (idx5 = 0; idx5 < 8; idx5++) {
    outC->_L14[idx5] = outC->_L31;
  }
  kcg_copy_array_float32_6(&outC->_L12[0], &outC->_L39);
  kcg_copy_array_float32_8(&outC->_L12[6], &outC->_L14);
  kcg_copy_ASafeDistanceDefinition_T_CalcBrakingCurves_types(
    &outC->_L11.distance_definition,
    &outC->_L16);
  kcg_copy_ASafeSpeedDefinition_T_CalcBrakingCurves_types(
    &outC->_L11.speed_definition,
    &outC->_L12);
  kcg_copy_ASafe_Data_T_CalcBrakingCurves_types(&outC->_L11.data, &outC->_L25);
  kcg_copy_ASafe_T_CalcBrakingCurves_types(&outC->aBrakeService, &outC->_L11);
}

#ifndef KCG_USER_DEFINED_INIT
void InflateABrakeService_init_SDMConversionModelPkg(
  outC_InflateABrakeService_SDMConversionModelPkg *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;
  kcg_size idx7;
  kcg_size idx8;
  kcg_size idx9;
  kcg_size idx10;
  kcg_size idx11;
  kcg_size idx12;
  kcg_size idx13;
  kcg_size idx14;
  kcg_size idx15;
  kcg_size idx16;
  kcg_size idx17;
  kcg_size idx18;
  kcg_size idx19;
  kcg_size idx20;
  kcg_size idx21;
  kcg_size idx22;
  kcg_size idx23;
  kcg_size idx24;
  kcg_size idx25;
  kcg_size idx26;
  kcg_size idx27;
  kcg_size idx28;

  outC->_L40 = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 6; idx2++) {
    outC->_L39[idx2] = kcg_lit_float32(0.0);
  }
  outC->_L38 = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 6; idx4++) {
    for (idx3 = 0; idx3 < 100; idx3++) {
      outC->_L37[idx4][idx3] = kcg_lit_float32(0.0);
    }
  }
  outC->_L36 = kcg_lit_int32(0);
  outC->_L13 = kcg_lit_int32(0);
  outC->_L31 = kcg_lit_float32(0.0);
  for (idx5 = 0; idx5 < 100; idx5++) {
    outC->_L30[idx5] = kcg_lit_float32(0.0);
  }
  for (idx7 = 0; idx7 < 14; idx7++) {
    for (idx6 = 0; idx6 < 100; idx6++) {
      outC->_L25[idx7][idx6] = kcg_lit_float32(0.0);
    }
  }
  for (idx9 = 0; idx9 < 8; idx9++) {
    for (idx8 = 0; idx8 < 100; idx8++) {
      outC->_L28[idx9][idx8] = kcg_lit_float32(0.0);
    }
  }
  for (idx10 = 0; idx10 < 100; idx10++) {
    outC->_L16[idx10] = kcg_lit_float32(0.0);
  }
  outC->_L17 = kcg_lit_float32(0.0);
  for (idx11 = 0; idx11 < 8; idx11++) {
    outC->_L14[idx11] = kcg_lit_float32(0.0);
  }
  for (idx12 = 0; idx12 < 14; idx12++) {
    outC->_L12[idx12] = kcg_lit_float32(0.0);
  }
  for (idx13 = 0; idx13 < 100; idx13++) {
    outC->_L11.distance_definition[idx13] = kcg_lit_float32(0.0);
  }
  for (idx14 = 0; idx14 < 14; idx14++) {
    outC->_L11.speed_definition[idx14] = kcg_lit_float32(0.0);
  }
  for (idx16 = 0; idx16 < 14; idx16++) {
    for (idx15 = 0; idx15 < 100; idx15++) {
      outC->_L11.data[idx16][idx15] = kcg_lit_float32(0.0);
    }
  }
  for (idx17 = 0; idx17 < 6; idx17++) {
    outC->_L6[idx17] = kcg_lit_int32(0);
  }
  for (idx18 = 0; idx18 < 6; idx18++) {
    outC->_L7[idx18] = kcg_lit_int32(0);
  }
  for (idx19 = 0; idx19 < 6; idx19++) {
    outC->_L3.emergency.a[idx19] = kcg_lit_int32(0);
  }
  for (idx20 = 0; idx20 < 6; idx20++) {
    outC->_L3.emergency.v[idx20] = kcg_lit_int32(0);
  }
  for (idx21 = 0; idx21 < 6; idx21++) {
    outC->_L3.service.a[idx21] = kcg_lit_int32(0);
  }
  for (idx22 = 0; idx22 < 6; idx22++) {
    outC->_L3.service.v[idx22] = kcg_lit_int32(0);
  }
  for (idx23 = 0; idx23 < 6; idx23++) {
    outC->_L2.a[idx23] = kcg_lit_int32(0);
  }
  for (idx24 = 0; idx24 < 6; idx24++) {
    outC->_L2.v[idx24] = kcg_lit_int32(0);
  }
  for (idx25 = 0; idx25 < 100; idx25++) {
    outC->aBrakeService.distance_definition[idx25] = kcg_lit_float32(0.0);
  }
  for (idx26 = 0; idx26 < 14; idx26++) {
    outC->aBrakeService.speed_definition[idx26] = kcg_lit_float32(0.0);
  }
  for (idx28 = 0; idx28 < 14; idx28++) {
    for (idx27 = 0; idx27 < 100; idx27++) {
      outC->aBrakeService.data[idx28][idx27] = kcg_lit_float32(0.0);
    }
  }
  for (idx1 = 0; idx1 < 6; idx1++) {
    /* _L36=(SDMConversionModelPkg::InflateABrakeRow#1)/ */
    InflateABrakeRow_init_SDMConversionModelPkg(
      &outC->Context_InflateABrakeRow_1[idx1]);
  }
  for (idx = 0; idx < 6; idx++) {
    /* _L13=(SDMConversionModelPkg::InflateABrakeSpeeds#1)/ */
    InflateABrakeSpeeds_init_SDMConversionModelPkg(
      &outC->Context_InflateABrakeSpeeds_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void InflateABrakeService_reset_SDMConversionModelPkg(
  outC_InflateABrakeService_SDMConversionModelPkg *outC)
{
  kcg_size idx;
  kcg_size idx1;

  for (idx1 = 0; idx1 < 6; idx1++) {
    /* _L36=(SDMConversionModelPkg::InflateABrakeRow#1)/ */
    InflateABrakeRow_reset_SDMConversionModelPkg(
      &outC->Context_InflateABrakeRow_1[idx1]);
  }
  for (idx = 0; idx < 6; idx++) {
    /* _L13=(SDMConversionModelPkg::InflateABrakeSpeeds#1)/ */
    InflateABrakeSpeeds_reset_SDMConversionModelPkg(
      &outC->Context_InflateABrakeSpeeds_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** InflateABrakeService_SDMConversionModelPkg.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

