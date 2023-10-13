/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalculateBrakingCurve_CalcBrakingCurves_Pkg.h"

/* CalcBrakingCurves_Pkg::CalculateBrakingCurve/ */
void CalculateBrakingCurve_CalcBrakingCurves_Pkg(
  /* Asafe/ */
  ASafe_T_CalcBrakingCurves_types *Asafe,
  /* Target/ */
  Target_real_T_TargetManagement_types *Target,
  /* d_est_front/ */
  L_internal_real_Type_SDM_Types_Pkg d_est_front,
  outC_CalculateBrakingCurve_CalcBrakingCurves_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static BCAccumulator_type_CalcBrakingCurves_Pkg acc;
  static kcg_size idx2;
  static BCAccumulator_type_CalcBrakingCurves_Pkg op_call;
  static kcg_int64 noname;

  kcg_copy_Target_real_T_TargetManagement_types(&outC->_L136, Target);
  outC->_L139 = outC->_L136.targetType;
  outC->_L140 = invalid_TargetManagement_types;
  outC->_L138 = outC->_L140 != outC->_L139;
  outC->every = outC->_L138;
  kcg_copy_ASafe_T_CalcBrakingCurves_types(&outC->_L137, Asafe);
  if (outC->every) {
    /* _L97=(CalcBrakingCurves_Pkg::internalOperators::InitalValues)/ */
    InitalValues_CalcBrakingCurves_Pkg_internalOperators(
      &outC->_L136,
      &outC->_L137,
      &outC->Context_InitalValues);
    kcg_copy_BCAccumulator_type_CalcBrakingCurves_Pkg(
      &op_call,
      &outC->Context_InitalValues.BCAcc);
  }
  /* _L134=(CalcBrakingCurves_Pkg::emptyBCAcc)/ */
  emptyBCAcc_CalcBrakingCurves_Pkg(&outC->Context_emptyBCAcc);
  kcg_copy_BCAccumulator_type_CalcBrakingCurves_Pkg(
    &outC->_L134,
    &outC->Context_emptyBCAcc.Output1);
  if (outC->every) {
    kcg_copy_BCAccumulator_type_CalcBrakingCurves_Pkg(&outC->_L97, &op_call);
  }
  else {
    kcg_copy_BCAccumulator_type_CalcBrakingCurves_Pkg(&outC->_L97, &outC->_L134);
  }
  kcg_copy_ASafe_T_CalcBrakingCurves_types(&outC->_L13, Asafe);
  /* _L11/ */
  for (idx = 0; idx < 113; idx++) {
    kcg_copy_ASafe_T_CalcBrakingCurves_types(&outC->_L11[idx], &outC->_L13);
  }
  outC->_L15 = d_est_front;
  /* _L12/ */
  for (idx1 = 0; idx1 < 113; idx1++) {
    outC->_L12[idx1] = outC->_L15;
  }
  kcg_copy_BCAccumulator_type_CalcBrakingCurves_Pkg(&outC->_L19, &outC->_L97);
  /* _L9= */
  if (outC->_L138) {
    /* _L9= */
    for (idx2 = 0; idx2 < 113; idx2++) {
      kcg_copy_BCAccumulator_type_CalcBrakingCurves_Pkg(&acc, &outC->_L19);
      /* _L9=(CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward#1)/ */
      BCFoldOperatorBackward_CalcBrakingCurves_Pkg_internalOperators(
        /* _L9= */(kcg_int64) idx2,
        &acc,
        &outC->_L11[idx2],
        outC->_L12[idx2],
        &outC->Context_BCFoldOperatorBackward_1[idx2]);
      kcg_copy_BCAccumulator_type_CalcBrakingCurves_Pkg(
        &outC->_L19,
        &outC->Context_BCFoldOperatorBackward_1[idx2].BC);
      outC->_L9 = /* _L9= */(kcg_int64) (idx2 + 1);
      /* _L9= */
      if (!outC->Context_BCFoldOperatorBackward_1[idx2].exitCond) {
        break;
      }
    }
  }
  else {
    outC->_L9 = kcg_lit_int64(0);
  }
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L125, &outC->_L19.BC);
  outC->cond = outC->_L138;
  /* _L114=(CalcBrakingCurves_Pkg::internalOperators::SortByDistances)/ */
  SortByDistances_CalcBrakingCurves_Pkg_internalOperators(
    &outC->_L125,
    &outC->Context_SortByDistances);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
    &outC->_L114,
    &outC->Context_SortByDistances.sortedBC);
  noname = outC->_L9;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->BC, &outC->_L114);
}

#ifndef KCG_USER_DEFINED_INIT
void CalculateBrakingCurve_init_CalcBrakingCurves_Pkg(
  outC_CalculateBrakingCurve_CalcBrakingCurves_Pkg *outC)
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

  outC->_L140 = EoA_TargetManagement_types;
  outC->_L139 = EoA_TargetManagement_types;
  outC->_L138 = kcg_true;
  for (idx1 = 0; idx1 < 100; idx1++) {
    outC->_L137.distance_definition[idx1] = kcg_lit_float64(0.0);
  }
  for (idx2 = 0; idx2 < 14; idx2++) {
    outC->_L137.speed_definition[idx2] = kcg_lit_float64(0.0);
  }
  for (idx4 = 0; idx4 < 14; idx4++) {
    for (idx3 = 0; idx3 < 100; idx3++) {
      outC->_L137.data[idx4][idx3] = kcg_lit_float64(0.0);
    }
  }
  outC->_L136.targetType = EoA_TargetManagement_types;
  outC->_L136.distance = kcg_lit_float64(0.0);
  outC->_L136.speed = kcg_lit_float64(0.0);
  outC->_L134.distance = kcg_lit_float64(0.0);
  outC->_L134.speed = kcg_lit_float64(0.0);
  outC->_L134.distanceIndex = kcg_lit_int64(0);
  outC->_L134.speedIndex = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 114; idx5++) {
    outC->_L134.BC.distances[idx5] = kcg_lit_float64(0.0);
  }
  for (idx6 = 0; idx6 < 114; idx6++) {
    outC->_L134.BC.speeds[idx6] = kcg_lit_float64(0.0);
  }
  for (idx7 = 0; idx7 < 114; idx7++) {
    outC->_L134.BC.accelerations[idx7] = kcg_lit_float64(0.0);
  }
  for (idx8 = 0; idx8 < 114; idx8++) {
    outC->_L134.BC.valid[idx8] = kcg_true;
  }
  for (idx9 = 0; idx9 < 114; idx9++) {
    outC->_L125.distances[idx9] = kcg_lit_float64(0.0);
  }
  for (idx10 = 0; idx10 < 114; idx10++) {
    outC->_L125.speeds[idx10] = kcg_lit_float64(0.0);
  }
  for (idx11 = 0; idx11 < 114; idx11++) {
    outC->_L125.accelerations[idx11] = kcg_lit_float64(0.0);
  }
  for (idx12 = 0; idx12 < 114; idx12++) {
    outC->_L125.valid[idx12] = kcg_true;
  }
  for (idx13 = 0; idx13 < 114; idx13++) {
    outC->_L114.distances[idx13] = kcg_lit_float64(0.0);
  }
  for (idx14 = 0; idx14 < 114; idx14++) {
    outC->_L114.speeds[idx14] = kcg_lit_float64(0.0);
  }
  for (idx15 = 0; idx15 < 114; idx15++) {
    outC->_L114.accelerations[idx15] = kcg_lit_float64(0.0);
  }
  for (idx16 = 0; idx16 < 114; idx16++) {
    outC->_L114.valid[idx16] = kcg_true;
  }
  outC->_L97.distance = kcg_lit_float64(0.0);
  outC->_L97.speed = kcg_lit_float64(0.0);
  outC->_L97.distanceIndex = kcg_lit_int64(0);
  outC->_L97.speedIndex = kcg_lit_int64(0);
  for (idx17 = 0; idx17 < 114; idx17++) {
    outC->_L97.BC.distances[idx17] = kcg_lit_float64(0.0);
  }
  for (idx18 = 0; idx18 < 114; idx18++) {
    outC->_L97.BC.speeds[idx18] = kcg_lit_float64(0.0);
  }
  for (idx19 = 0; idx19 < 114; idx19++) {
    outC->_L97.BC.accelerations[idx19] = kcg_lit_float64(0.0);
  }
  for (idx20 = 0; idx20 < 114; idx20++) {
    outC->_L97.BC.valid[idx20] = kcg_true;
  }
  outC->_L19.distance = kcg_lit_float64(0.0);
  outC->_L19.speed = kcg_lit_float64(0.0);
  outC->_L19.distanceIndex = kcg_lit_int64(0);
  outC->_L19.speedIndex = kcg_lit_int64(0);
  for (idx21 = 0; idx21 < 114; idx21++) {
    outC->_L19.BC.distances[idx21] = kcg_lit_float64(0.0);
  }
  for (idx22 = 0; idx22 < 114; idx22++) {
    outC->_L19.BC.speeds[idx22] = kcg_lit_float64(0.0);
  }
  for (idx23 = 0; idx23 < 114; idx23++) {
    outC->_L19.BC.accelerations[idx23] = kcg_lit_float64(0.0);
  }
  for (idx24 = 0; idx24 < 114; idx24++) {
    outC->_L19.BC.valid[idx24] = kcg_true;
  }
  outC->_L15 = kcg_lit_float64(0.0);
  for (idx25 = 0; idx25 < 100; idx25++) {
    outC->_L13.distance_definition[idx25] = kcg_lit_float64(0.0);
  }
  for (idx26 = 0; idx26 < 14; idx26++) {
    outC->_L13.speed_definition[idx26] = kcg_lit_float64(0.0);
  }
  for (idx28 = 0; idx28 < 14; idx28++) {
    for (idx27 = 0; idx27 < 100; idx27++) {
      outC->_L13.data[idx28][idx27] = kcg_lit_float64(0.0);
    }
  }
  for (idx29 = 0; idx29 < 113; idx29++) {
    outC->_L12[idx29] = kcg_lit_float64(0.0);
  }
  for (idx34 = 0; idx34 < 113; idx34++) {
    for (idx30 = 0; idx30 < 100; idx30++) {
      outC->_L11[idx34].distance_definition[idx30] = kcg_lit_float64(0.0);
    }
    for (idx31 = 0; idx31 < 14; idx31++) {
      outC->_L11[idx34].speed_definition[idx31] = kcg_lit_float64(0.0);
    }
    for (idx33 = 0; idx33 < 14; idx33++) {
      for (idx32 = 0; idx32 < 100; idx32++) {
        outC->_L11[idx34].data[idx33][idx32] = kcg_lit_float64(0.0);
      }
    }
  }
  outC->_L9 = kcg_lit_int64(0);
  outC->every = kcg_true;
  for (idx35 = 0; idx35 < 114; idx35++) {
    outC->BC.distances[idx35] = kcg_lit_float64(0.0);
  }
  for (idx36 = 0; idx36 < 114; idx36++) {
    outC->BC.speeds[idx36] = kcg_lit_float64(0.0);
  }
  for (idx37 = 0; idx37 < 114; idx37++) {
    outC->BC.accelerations[idx37] = kcg_lit_float64(0.0);
  }
  for (idx38 = 0; idx38 < 114; idx38++) {
    outC->BC.valid[idx38] = kcg_true;
  }
  outC->cond = kcg_true;
  /* _L114=(CalcBrakingCurves_Pkg::internalOperators::SortByDistances)/ */
  SortByDistances_init_CalcBrakingCurves_Pkg_internalOperators(
    &outC->Context_SortByDistances);
  for (idx = 0; idx < 113; idx++) {
    /* _L9=(CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward#1)/ */
    BCFoldOperatorBackward_init_CalcBrakingCurves_Pkg_internalOperators(
      &outC->Context_BCFoldOperatorBackward_1[idx]);
  }
  /* _L134=(CalcBrakingCurves_Pkg::emptyBCAcc)/ */
  emptyBCAcc_init_CalcBrakingCurves_Pkg(&outC->Context_emptyBCAcc);
  /* _L97=(CalcBrakingCurves_Pkg::internalOperators::InitalValues)/ */
  InitalValues_init_CalcBrakingCurves_Pkg_internalOperators(
    &outC->Context_InitalValues);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CalculateBrakingCurve_reset_CalcBrakingCurves_Pkg(
  outC_CalculateBrakingCurve_CalcBrakingCurves_Pkg *outC)
{
  static kcg_size idx;

  /* _L114=(CalcBrakingCurves_Pkg::internalOperators::SortByDistances)/ */
  SortByDistances_reset_CalcBrakingCurves_Pkg_internalOperators(
    &outC->Context_SortByDistances);
  for (idx = 0; idx < 113; idx++) {
    /* _L9=(CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward#1)/ */
    BCFoldOperatorBackward_reset_CalcBrakingCurves_Pkg_internalOperators(
      &outC->Context_BCFoldOperatorBackward_1[idx]);
  }
  /* _L134=(CalcBrakingCurves_Pkg::emptyBCAcc)/ */
  emptyBCAcc_reset_CalcBrakingCurves_Pkg(&outC->Context_emptyBCAcc);
  /* _L97=(CalcBrakingCurves_Pkg::internalOperators::InitalValues)/ */
  InitalValues_reset_CalcBrakingCurves_Pkg_internalOperators(
    &outC->Context_InitalValues);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CalculateBrakingCurve_CalcBrakingCurves_Pkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

