/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InitalValues_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::InitalValues/ */
void InitalValues_CalcBrakingCurves_Pkg_internalOperators(
  /* target/ */
  Target_real_T_TargetManagement_types *target,
  /* aSafe/ */
  ASafe_T_CalcBrakingCurves_types *aSafe,
  outC_InitalValues_CalcBrakingCurves_Pkg_internalOperators *outC)
{
  static L_internal_real_Type_SDM_Types_Pkg op_call;

  kcg_copy_Target_real_T_TargetManagement_types(&outC->_L27, target);
  /* _L97=(CalcBrakingCurves_Pkg::internalOperators::isMRSPorLOATarget)/ */
  isMRSPorLOATarget_CalcBrakingCurves_Pkg_internalOperators(
    &outC->_L27,
    &outC->Context_isMRSPorLOATarget);
  outC->_L97 = outC->Context_isMRSPorLOATarget.isVnonZero;
  outC->every = outC->_L97;
  kcg_copy_Target_real_T_TargetManagement_types(&outC->_L40, target);
  kcg_copy_ASafe_T_CalcBrakingCurves_types(&outC->_L39, aSafe);
  if (outC->every) {
    /* _L103=(CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA)/ */
    CalculateEBDFootForMRSPorLOA_CalcBrakingCurves_Pkg_internalOperators(
      outC->_L97,
      &outC->_L40,
      &outC->_L39,
      &outC->Context_CalculateEBDFootForMRSPorLOA);
    op_call = outC->Context_CalculateEBDFootForMRSPorLOA.EBDfoot;
  }
  outC->_L151 = kcg_lit_float64(0.0);
  kcg_copy_Target_real_T_TargetManagement_types(&outC->_L149, target);
  outC->_L150 = outC->_L149.distance;
  if (outC->every) {
    outC->_L103 = op_call;
  }
  else {
    outC->_L103 = outC->_L151;
  }
  outC->EBDFootMRSPorLOA = outC->_L103;
  outC->_L147 = outC->EBDFootMRSPorLOA;
  outC->targetIsMRSPorLOA = outC->_L97;
  outC->_L146 = outC->targetIsMRSPorLOA;
  /* _L148= */
  if (outC->_L146) {
    outC->_L148 = outC->_L147;
  }
  else {
    outC->_L148 = outC->_L150;
  }
  kcg_copy_Target_real_T_TargetManagement_types(&outC->_L1, target);
  kcg_copy_ASafe_T_CalcBrakingCurves_types(&outC->_L2, aSafe);
  /* _L141=(CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc)/ */
  InitAccWithTargetArc_CalcBrakingCurves_Pkg_internalOperators(
    outC->_L148,
    &outC->_L1,
    &outC->_L2,
    &outC->Context_InitAccWithTargetArc);
  kcg_copy_BCAccumulator_type_CalcBrakingCurves_Pkg(
    &outC->_L141,
    &outC->Context_InitAccWithTargetArc.Output1);
  kcg_copy_BCAccumulator_type_CalcBrakingCurves_Pkg(&outC->BCAcc, &outC->_L141);
}

#ifndef KCG_USER_DEFINED_INIT
void InitalValues_init_CalcBrakingCurves_Pkg_internalOperators(
  outC_InitalValues_CalcBrakingCurves_Pkg_internalOperators *outC)
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

  outC->_L151 = kcg_lit_float64(0.0);
  outC->_L150 = kcg_lit_float64(0.0);
  outC->_L149.targetType = EoA_TargetManagement_types;
  outC->_L149.distance = kcg_lit_float64(0.0);
  outC->_L149.speed = kcg_lit_float64(0.0);
  outC->_L148 = kcg_lit_float64(0.0);
  outC->_L147 = kcg_lit_float64(0.0);
  outC->_L146 = kcg_true;
  outC->_L141.distance = kcg_lit_float64(0.0);
  outC->_L141.speed = kcg_lit_float64(0.0);
  outC->_L141.distanceIndex = kcg_lit_int64(0);
  outC->_L141.speedIndex = kcg_lit_int64(0);
  for (idx = 0; idx < 114; idx++) {
    outC->_L141.BC.distances[idx] = kcg_lit_float64(0.0);
  }
  for (idx1 = 0; idx1 < 114; idx1++) {
    outC->_L141.BC.speeds[idx1] = kcg_lit_float64(0.0);
  }
  for (idx2 = 0; idx2 < 114; idx2++) {
    outC->_L141.BC.accelerations[idx2] = kcg_lit_float64(0.0);
  }
  for (idx3 = 0; idx3 < 114; idx3++) {
    outC->_L141.BC.valid[idx3] = kcg_true;
  }
  outC->_L103 = kcg_lit_float64(0.0);
  outC->_L97 = kcg_true;
  outC->_L40.targetType = EoA_TargetManagement_types;
  outC->_L40.distance = kcg_lit_float64(0.0);
  outC->_L40.speed = kcg_lit_float64(0.0);
  for (idx4 = 0; idx4 < 100; idx4++) {
    outC->_L39.distance_definition[idx4] = kcg_lit_float64(0.0);
  }
  for (idx5 = 0; idx5 < 14; idx5++) {
    outC->_L39.speed_definition[idx5] = kcg_lit_float64(0.0);
  }
  for (idx7 = 0; idx7 < 14; idx7++) {
    for (idx6 = 0; idx6 < 100; idx6++) {
      outC->_L39.data[idx7][idx6] = kcg_lit_float64(0.0);
    }
  }
  outC->_L27.targetType = EoA_TargetManagement_types;
  outC->_L27.distance = kcg_lit_float64(0.0);
  outC->_L27.speed = kcg_lit_float64(0.0);
  outC->_L1.targetType = EoA_TargetManagement_types;
  outC->_L1.distance = kcg_lit_float64(0.0);
  outC->_L1.speed = kcg_lit_float64(0.0);
  for (idx8 = 0; idx8 < 100; idx8++) {
    outC->_L2.distance_definition[idx8] = kcg_lit_float64(0.0);
  }
  for (idx9 = 0; idx9 < 14; idx9++) {
    outC->_L2.speed_definition[idx9] = kcg_lit_float64(0.0);
  }
  for (idx11 = 0; idx11 < 14; idx11++) {
    for (idx10 = 0; idx10 < 100; idx10++) {
      outC->_L2.data[idx11][idx10] = kcg_lit_float64(0.0);
    }
  }
  outC->targetIsMRSPorLOA = kcg_true;
  outC->EBDFootMRSPorLOA = kcg_lit_float64(0.0);
  outC->every = kcg_true;
  outC->BCAcc.distance = kcg_lit_float64(0.0);
  outC->BCAcc.speed = kcg_lit_float64(0.0);
  outC->BCAcc.distanceIndex = kcg_lit_int64(0);
  outC->BCAcc.speedIndex = kcg_lit_int64(0);
  for (idx12 = 0; idx12 < 114; idx12++) {
    outC->BCAcc.BC.distances[idx12] = kcg_lit_float64(0.0);
  }
  for (idx13 = 0; idx13 < 114; idx13++) {
    outC->BCAcc.BC.speeds[idx13] = kcg_lit_float64(0.0);
  }
  for (idx14 = 0; idx14 < 114; idx14++) {
    outC->BCAcc.BC.accelerations[idx14] = kcg_lit_float64(0.0);
  }
  for (idx15 = 0; idx15 < 114; idx15++) {
    outC->BCAcc.BC.valid[idx15] = kcg_true;
  }
  /* _L141=(CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc)/ */
  InitAccWithTargetArc_init_CalcBrakingCurves_Pkg_internalOperators(
    &outC->Context_InitAccWithTargetArc);
  /* _L103=(CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA)/ */
  CalculateEBDFootForMRSPorLOA_init_CalcBrakingCurves_Pkg_internalOperators(
    &outC->Context_CalculateEBDFootForMRSPorLOA);
  /* _L97=(CalcBrakingCurves_Pkg::internalOperators::isMRSPorLOATarget)/ */
  isMRSPorLOATarget_init_CalcBrakingCurves_Pkg_internalOperators(
    &outC->Context_isMRSPorLOATarget);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void InitalValues_reset_CalcBrakingCurves_Pkg_internalOperators(
  outC_InitalValues_CalcBrakingCurves_Pkg_internalOperators *outC)
{
  /* _L141=(CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc)/ */
  InitAccWithTargetArc_reset_CalcBrakingCurves_Pkg_internalOperators(
    &outC->Context_InitAccWithTargetArc);
  /* _L103=(CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA)/ */
  CalculateEBDFootForMRSPorLOA_reset_CalcBrakingCurves_Pkg_internalOperators(
    &outC->Context_CalculateEBDFootForMRSPorLOA);
  /* _L97=(CalcBrakingCurves_Pkg::internalOperators::isMRSPorLOATarget)/ */
  isMRSPorLOATarget_reset_CalcBrakingCurves_Pkg_internalOperators(
    &outC->Context_isMRSPorLOATarget);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** InitalValues_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

