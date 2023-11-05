/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalculateEBDFootForMRSPorLOA_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA/ */
void CalculateEBDFootForMRSPorLOA_CalcBrakingCurves_Pkg_internalOperators(
  /* IsMRSPorLOATarget/ */
  kcg_bool IsMRSPorLOATarget,
  /* target/ */
  Target_real_T_TargetManagement_types *target,
  /* aSafe/ */
  ASafe_T_CalcBrakingCurves_types *aSafe,
  outC_CalculateEBDFootForMRSPorLOA_CalcBrakingCurves_Pkg_internalOperators *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static BCAccumulator_type_CalcBrakingCurves_Pkg acc;
  static kcg_size idx2;
  static kcg_int32 noname;
  static kcg_bool _3_noname;

  kcg_copy_ASafe_T_CalcBrakingCurves_types(&outC->_L17, aSafe);
  kcg_copy_Target_real_T_TargetManagement_types(&outC->_L16, target);
  /* _L14=(CalcBrakingCurves_Pkg::internalOperators::InitilizeAccForEBDFootCalc)/ */
  InitilizeAccForEBDFootCalc_CalcBrakingCurves_Pkg_internalOperators(
    &outC->_L16,
    &outC->_L17,
    &outC->Context_InitilizeAccForEBDFootCalc);
  kcg_copy_BCAccumulator_type_CalcBrakingCurves_Pkg(
    &outC->_L14,
    &outC->Context_InitilizeAccForEBDFootCalc.BCACCForEBDFoot);
  kcg_copy_ASafe_T_CalcBrakingCurves_types(&outC->_L3, aSafe);
  /* _L7/ */
  for (idx = 0; idx < 113; idx++) {
    kcg_copy_ASafe_T_CalcBrakingCurves_types(&outC->_L7[idx], &outC->_L3);
  }
  kcg_copy_Target_real_T_TargetManagement_types(&outC->_L2, target);
  outC->_L6 = outC->_L2.speed;
  /* _L8/ */
  for (idx1 = 0; idx1 < 113; idx1++) {
    outC->_L8[idx1] = outC->_L6;
  }
  outC->_L1 = IsMRSPorLOATarget;
  kcg_copy_BCAccumulator_type_CalcBrakingCurves_Pkg(&outC->_L5, &outC->_L14);
  /* _L4= */
  if (outC->_L1) {
    /* _L4= */
    for (idx2 = 0; idx2 < 113; idx2++) {
      kcg_copy_BCAccumulator_type_CalcBrakingCurves_Pkg(&acc, &outC->_L5);
      /* _L4=(CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward#1)/ */
      BCFoldOperatorForward_CalcBrakingCurves_Pkg_internalOperators(
        /* _L4= */(kcg_int32) idx2,
        &acc,
        &outC->_L7[idx2],
        outC->_L8[idx2],
        &outC->Context_BCFoldOperatorForward_1[idx2]);
      kcg_copy_BCAccumulator_type_CalcBrakingCurves_Pkg(
        &outC->_L5,
        &outC->Context_BCFoldOperatorForward_1[idx2].BC);
      outC->_L4 = /* _L4= */(kcg_int32) (idx2 + 1);
      /* _L4= */
      if (!outC->Context_BCFoldOperatorForward_1[idx2].exitCond) {
        break;
      }
    }
  }
  else {
    outC->_L4 = kcg_lit_int32(0);
  }
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L9, &outC->_L5.BC);
  /* _L12=(CalcBrakingCurves_Pkg::internalOperators::SortByDistances#1)/ */
  SortByDistances_CalcBrakingCurves_Pkg_internalOperators(
    &outC->_L9,
    &outC->Context_SortByDistances_1);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
    &outC->_L12,
    &outC->Context_SortByDistances_1.sortedBC);
  /* _L10=(CalcBrakingCurves_types::getLocationOnCurve#1)/ */
  getLocationOnCurve_CalcBrakingCurves_types(
    &outC->_L12,
    outC->_L6,
    &outC->Context_getLocationOnCurve_1);
  outC->_L10 = outC->Context_getLocationOnCurve_1.valid;
  outC->_L11 = outC->Context_getLocationOnCurve_1.location;
  _3_noname = outC->_L10;
  noname = outC->_L4;
  outC->EBDfoot = outC->_L11;
}

#ifndef KCG_USER_DEFINED_INIT
void CalculateEBDFootForMRSPorLOA_init_CalcBrakingCurves_Pkg_internalOperators(
  outC_CalculateEBDFootForMRSPorLOA_CalcBrakingCurves_Pkg_internalOperators *outC)
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

  for (idx1 = 0; idx1 < 100; idx1++) {
    outC->_L17.distance_definition[idx1] = kcg_lit_float32(0.0);
  }
  for (idx2 = 0; idx2 < 14; idx2++) {
    outC->_L17.speed_definition[idx2] = kcg_lit_float32(0.0);
  }
  for (idx4 = 0; idx4 < 14; idx4++) {
    for (idx3 = 0; idx3 < 100; idx3++) {
      outC->_L17.data[idx4][idx3] = kcg_lit_float32(0.0);
    }
  }
  outC->_L16.targetType = EoA_TargetManagement_types;
  outC->_L16.distance = kcg_lit_float32(0.0);
  outC->_L16.speed = kcg_lit_float32(0.0);
  outC->_L14.distance = kcg_lit_float32(0.0);
  outC->_L14.speed = kcg_lit_float32(0.0);
  outC->_L14.distanceIndex = kcg_lit_int32(0);
  outC->_L14.speedIndex = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 114; idx5++) {
    outC->_L14.BC.distances[idx5] = kcg_lit_float32(0.0);
  }
  for (idx6 = 0; idx6 < 114; idx6++) {
    outC->_L14.BC.speeds[idx6] = kcg_lit_float32(0.0);
  }
  for (idx7 = 0; idx7 < 114; idx7++) {
    outC->_L14.BC.accelerations[idx7] = kcg_lit_float32(0.0);
  }
  for (idx8 = 0; idx8 < 114; idx8++) {
    outC->_L14.BC.valid[idx8] = kcg_true;
  }
  for (idx9 = 0; idx9 < 114; idx9++) {
    outC->_L12.distances[idx9] = kcg_lit_float32(0.0);
  }
  for (idx10 = 0; idx10 < 114; idx10++) {
    outC->_L12.speeds[idx10] = kcg_lit_float32(0.0);
  }
  for (idx11 = 0; idx11 < 114; idx11++) {
    outC->_L12.accelerations[idx11] = kcg_lit_float32(0.0);
  }
  for (idx12 = 0; idx12 < 114; idx12++) {
    outC->_L12.valid[idx12] = kcg_true;
  }
  outC->_L11 = kcg_lit_float32(0.0);
  outC->_L10 = kcg_true;
  for (idx13 = 0; idx13 < 114; idx13++) {
    outC->_L9.distances[idx13] = kcg_lit_float32(0.0);
  }
  for (idx14 = 0; idx14 < 114; idx14++) {
    outC->_L9.speeds[idx14] = kcg_lit_float32(0.0);
  }
  for (idx15 = 0; idx15 < 114; idx15++) {
    outC->_L9.accelerations[idx15] = kcg_lit_float32(0.0);
  }
  for (idx16 = 0; idx16 < 114; idx16++) {
    outC->_L9.valid[idx16] = kcg_true;
  }
  for (idx17 = 0; idx17 < 113; idx17++) {
    outC->_L8[idx17] = kcg_lit_float32(0.0);
  }
  for (idx22 = 0; idx22 < 113; idx22++) {
    for (idx18 = 0; idx18 < 100; idx18++) {
      outC->_L7[idx22].distance_definition[idx18] = kcg_lit_float32(0.0);
    }
    for (idx19 = 0; idx19 < 14; idx19++) {
      outC->_L7[idx22].speed_definition[idx19] = kcg_lit_float32(0.0);
    }
    for (idx21 = 0; idx21 < 14; idx21++) {
      for (idx20 = 0; idx20 < 100; idx20++) {
        outC->_L7[idx22].data[idx21][idx20] = kcg_lit_float32(0.0);
      }
    }
  }
  outC->_L6 = kcg_lit_float32(0.0);
  outC->_L5.distance = kcg_lit_float32(0.0);
  outC->_L5.speed = kcg_lit_float32(0.0);
  outC->_L5.distanceIndex = kcg_lit_int32(0);
  outC->_L5.speedIndex = kcg_lit_int32(0);
  for (idx23 = 0; idx23 < 114; idx23++) {
    outC->_L5.BC.distances[idx23] = kcg_lit_float32(0.0);
  }
  for (idx24 = 0; idx24 < 114; idx24++) {
    outC->_L5.BC.speeds[idx24] = kcg_lit_float32(0.0);
  }
  for (idx25 = 0; idx25 < 114; idx25++) {
    outC->_L5.BC.accelerations[idx25] = kcg_lit_float32(0.0);
  }
  for (idx26 = 0; idx26 < 114; idx26++) {
    outC->_L5.BC.valid[idx26] = kcg_true;
  }
  outC->_L4 = kcg_lit_int32(0);
  outC->_L1 = kcg_true;
  outC->_L2.targetType = EoA_TargetManagement_types;
  outC->_L2.distance = kcg_lit_float32(0.0);
  outC->_L2.speed = kcg_lit_float32(0.0);
  for (idx27 = 0; idx27 < 100; idx27++) {
    outC->_L3.distance_definition[idx27] = kcg_lit_float32(0.0);
  }
  for (idx28 = 0; idx28 < 14; idx28++) {
    outC->_L3.speed_definition[idx28] = kcg_lit_float32(0.0);
  }
  for (idx30 = 0; idx30 < 14; idx30++) {
    for (idx29 = 0; idx29 < 100; idx29++) {
      outC->_L3.data[idx30][idx29] = kcg_lit_float32(0.0);
    }
  }
  outC->EBDfoot = kcg_lit_float32(0.0);
  /* _L10=(CalcBrakingCurves_types::getLocationOnCurve#1)/ */
  getLocationOnCurve_init_CalcBrakingCurves_types(
    &outC->Context_getLocationOnCurve_1);
  /* _L12=(CalcBrakingCurves_Pkg::internalOperators::SortByDistances#1)/ */
  SortByDistances_init_CalcBrakingCurves_Pkg_internalOperators(
    &outC->Context_SortByDistances_1);
  for (idx = 0; idx < 113; idx++) {
    /* _L4=(CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward#1)/ */
    BCFoldOperatorForward_init_CalcBrakingCurves_Pkg_internalOperators(
      &outC->Context_BCFoldOperatorForward_1[idx]);
  }
  /* _L14=(CalcBrakingCurves_Pkg::internalOperators::InitilizeAccForEBDFootCalc)/ */
  InitilizeAccForEBDFootCalc_init_CalcBrakingCurves_Pkg_internalOperators(
    &outC->Context_InitilizeAccForEBDFootCalc);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CalculateEBDFootForMRSPorLOA_reset_CalcBrakingCurves_Pkg_internalOperators(
  outC_CalculateEBDFootForMRSPorLOA_CalcBrakingCurves_Pkg_internalOperators *outC)
{
  static kcg_size idx;

  /* _L10=(CalcBrakingCurves_types::getLocationOnCurve#1)/ */
  getLocationOnCurve_reset_CalcBrakingCurves_types(
    &outC->Context_getLocationOnCurve_1);
  /* _L12=(CalcBrakingCurves_Pkg::internalOperators::SortByDistances#1)/ */
  SortByDistances_reset_CalcBrakingCurves_Pkg_internalOperators(
    &outC->Context_SortByDistances_1);
  for (idx = 0; idx < 113; idx++) {
    /* _L4=(CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward#1)/ */
    BCFoldOperatorForward_reset_CalcBrakingCurves_Pkg_internalOperators(
      &outC->Context_BCFoldOperatorForward_1[idx]);
  }
  /* _L14=(CalcBrakingCurves_Pkg::internalOperators::InitilizeAccForEBDFootCalc)/ */
  InitilizeAccForEBDFootCalc_reset_CalcBrakingCurves_Pkg_internalOperators(
    &outC->Context_InitilizeAccForEBDFootCalc);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CalculateEBDFootForMRSPorLOA_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

