/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "removeOverpassedMRSPint_TargetManagement_pkg_internalOperators.h"

/* TargetManagement_pkg::internalOperators::removeOverpassedMRSPint/ */
void removeOverpassedMRSPint_TargetManagement_pkg_internalOperators(
  /* Targets/ */
  Target_list_MRSP_real_T_TargetManagement_types *Targets,
  /* d_safe_max_front/ */
  L_internal_real_Type_SDM_Types_Pkg d_safe_max_front,
  outC_removeOverpassedMRSPint_TargetManagement_pkg_internalOperators *outC)
{
  static kcg_size idx;
  static V_internal_real_Type_SDM_Types_Pkg noname;

  outC->_L24 = MRSP_TargetManagement_types;
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(&outC->_L1, Targets);
  kcg_copy_Target_real_T_TargetManagement_types(&outC->_L5, &outC->_L1[0]);
  outC->_L10 = outC->_L5.targetType;
  outC->_L23 = outC->_L24 == outC->_L10;
  kcg_copy_Target_real_T_TargetManagement_types(
    &outC->_L22,
    (Target_real_T_TargetManagement_types *) &emptyTarget_TargetManagement_pkg);
  outC->_L8 = outC->_L5.speed;
  noname = outC->_L8;
  /* _L21/ */
  for (idx = 0; idx < 1; idx++) {
    kcg_copy_Target_real_T_TargetManagement_types(&outC->_L21[idx], &outC->_L22);
  }
  kcg_copy__69_array(&outC->_L16, (_69_array *) &outC->_L1[1]);
  kcg_copy__69_array(&outC->_L19[0], &outC->_L16);
  kcg_copy_Target_real_T_TargetManagement_types(&outC->_L19[109], &outC->_L21[0]);
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(&outC->_L17, Targets);
  outC->_L2 = d_safe_max_front;
  outC->_L9 = outC->_L5.distance;
  outC->_L14 = outC->_L9 <= outC->_L2;
  outC->_L11 = outC->_L23 & outC->_L14;
  /* _L15= */
  if (outC->_L11) {
    kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
      &outC->_L15,
      &outC->_L19);
  }
  else {
    kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
      &outC->_L15,
      &outC->_L17);
  }
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
    &outC->TargetsReduced,
    &outC->_L15);
  outC->Cond = outC->_L11;
}

#ifndef KCG_USER_DEFINED_INIT
void removeOverpassedMRSPint_init_TargetManagement_pkg_internalOperators(
  outC_removeOverpassedMRSPint_TargetManagement_pkg_internalOperators *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;

  outC->_L24 = EoA_TargetManagement_types;
  outC->_L23 = kcg_true;
  outC->_L22.targetType = EoA_TargetManagement_types;
  outC->_L22.distance = kcg_lit_float64(0.0);
  outC->_L22.speed = kcg_lit_float64(0.0);
  for (idx = 0; idx < 1; idx++) {
    outC->_L21[idx].targetType = EoA_TargetManagement_types;
    outC->_L21[idx].distance = kcg_lit_float64(0.0);
    outC->_L21[idx].speed = kcg_lit_float64(0.0);
  }
  for (idx1 = 0; idx1 < 110; idx1++) {
    outC->_L19[idx1].targetType = EoA_TargetManagement_types;
    outC->_L19[idx1].distance = kcg_lit_float64(0.0);
    outC->_L19[idx1].speed = kcg_lit_float64(0.0);
  }
  for (idx2 = 0; idx2 < 110; idx2++) {
    outC->_L17[idx2].targetType = EoA_TargetManagement_types;
    outC->_L17[idx2].distance = kcg_lit_float64(0.0);
    outC->_L17[idx2].speed = kcg_lit_float64(0.0);
  }
  for (idx3 = 0; idx3 < 109; idx3++) {
    outC->_L16[idx3].targetType = EoA_TargetManagement_types;
    outC->_L16[idx3].distance = kcg_lit_float64(0.0);
    outC->_L16[idx3].speed = kcg_lit_float64(0.0);
  }
  for (idx4 = 0; idx4 < 110; idx4++) {
    outC->_L15[idx4].targetType = EoA_TargetManagement_types;
    outC->_L15[idx4].distance = kcg_lit_float64(0.0);
    outC->_L15[idx4].speed = kcg_lit_float64(0.0);
  }
  outC->_L14 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L8 = kcg_lit_float64(0.0);
  outC->_L9 = kcg_lit_float64(0.0);
  outC->_L10 = EoA_TargetManagement_types;
  outC->_L5.targetType = EoA_TargetManagement_types;
  outC->_L5.distance = kcg_lit_float64(0.0);
  outC->_L5.speed = kcg_lit_float64(0.0);
  outC->_L2 = kcg_lit_float64(0.0);
  for (idx5 = 0; idx5 < 110; idx5++) {
    outC->_L1[idx5].targetType = EoA_TargetManagement_types;
    outC->_L1[idx5].distance = kcg_lit_float64(0.0);
    outC->_L1[idx5].speed = kcg_lit_float64(0.0);
  }
  for (idx6 = 0; idx6 < 110; idx6++) {
    outC->TargetsReduced[idx6].targetType = EoA_TargetManagement_types;
    outC->TargetsReduced[idx6].distance = kcg_lit_float64(0.0);
    outC->TargetsReduced[idx6].speed = kcg_lit_float64(0.0);
  }
  outC->Cond = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void removeOverpassedMRSPint_reset_TargetManagement_pkg_internalOperators(
  outC_removeOverpassedMRSPint_TargetManagement_pkg_internalOperators *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** removeOverpassedMRSPint_TargetManagement_pkg_internalOperators.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

