/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "removeOverpassedMRSP_TargetManagement_pkg_internalOperators.h"

/* TargetManagement_pkg::internalOperators::removeOverpassedMRSP/ */
void removeOverpassedMRSP_TargetManagement_pkg_internalOperators(
  /* Targets/ */
  Target_list_MRSP_real_T_TargetManagement_types *Targets,
  /* d_max_safe_front/ */
  L_internal_real_Type_SDM_Types_Pkg d_max_safe_front,
  outC_removeOverpassedMRSP_TargetManagement_pkg_internalOperators *outC)
{
  static kcg_size idx;
  static Target_list_MRSP_real_T_TargetManagement_types acc;
  static kcg_size idx1;

  outC->_L22 = MRSP_TargetManagement_types;
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(&outC->_L11, Targets);
  outC->_L20 = outC->_L11[0].targetType;
  outC->_L21 = outC->_L20 == outC->_L22;
  outC->_L19 = outC->_L11[0].distance;
  outC->_L3 = d_max_safe_front;
  outC->_L12 = outC->_L19 <= outC->_L3;
  outC->_L14 = outC->_L21 & outC->_L12;
  outC->_L10 = kcg_lit_int32(1);
  /* _L7/ */
  for (idx = 0; idx < 110; idx++) {
    outC->_L7[idx] = outC->_L3;
  }
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
    &outC->_L4,
    &outC->_L11);
  /* _L6= */
  if (outC->_L14) {
    /* _L6= */
    for (idx1 = 0; idx1 < 110; idx1++) {
      kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(&acc, &outC->_L4);
      /* _L6=(TargetManagement_pkg::internalOperators::removeOverpassedMRSPint#1)/ */
      removeOverpassedMRSPint_TargetManagement_pkg_internalOperators(
        &acc,
        outC->_L7[idx1],
        &outC->Context_removeOverpassedMRSPint_1[idx1]);
      kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
        &outC->_L4,
        &outC->Context_removeOverpassedMRSPint_1[idx1].TargetsReduced);
      outC->_L6 = /* _L6= */(kcg_int32) (idx1 + 1);
      /* _L6= */
      if (!outC->Context_removeOverpassedMRSPint_1[idx1].Cond) {
        break;
      }
    }
  }
  else {
    outC->_L6 = kcg_lit_int32(0);
  }
  outC->_L9 = outC->_L6 > outC->_L10;
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
    &outC->TargetsOut,
    &outC->_L4);
  outC->updated = outC->_L9;
}

#ifndef KCG_USER_DEFINED_INIT
void removeOverpassedMRSP_init_TargetManagement_pkg_internalOperators(
  outC_removeOverpassedMRSP_TargetManagement_pkg_internalOperators *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;

  outC->_L22 = EoA_TargetManagement_types;
  outC->_L21 = kcg_true;
  outC->_L20 = EoA_TargetManagement_types;
  for (idx1 = 0; idx1 < 110; idx1++) {
    outC->_L11[idx1].targetType = EoA_TargetManagement_types;
    outC->_L11[idx1].distance = kcg_lit_float32(0.0);
    outC->_L11[idx1].speed = kcg_lit_float32(0.0);
  }
  outC->_L12 = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L19 = kcg_lit_float32(0.0);
  outC->_L10 = kcg_lit_int32(0);
  outC->_L9 = kcg_true;
  for (idx2 = 0; idx2 < 110; idx2++) {
    outC->_L7[idx2] = kcg_lit_float32(0.0);
  }
  outC->_L6 = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 110; idx3++) {
    outC->_L4[idx3].targetType = EoA_TargetManagement_types;
    outC->_L4[idx3].distance = kcg_lit_float32(0.0);
    outC->_L4[idx3].speed = kcg_lit_float32(0.0);
  }
  outC->_L3 = kcg_lit_float32(0.0);
  outC->updated = kcg_true;
  for (idx4 = 0; idx4 < 110; idx4++) {
    outC->TargetsOut[idx4].targetType = EoA_TargetManagement_types;
    outC->TargetsOut[idx4].distance = kcg_lit_float32(0.0);
    outC->TargetsOut[idx4].speed = kcg_lit_float32(0.0);
  }
  for (idx = 0; idx < 110; idx++) {
    /* _L6=(TargetManagement_pkg::internalOperators::removeOverpassedMRSPint#1)/ */
    removeOverpassedMRSPint_init_TargetManagement_pkg_internalOperators(
      &outC->Context_removeOverpassedMRSPint_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void removeOverpassedMRSP_reset_TargetManagement_pkg_internalOperators(
  outC_removeOverpassedMRSP_TargetManagement_pkg_internalOperators *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 110; idx++) {
    /* _L6=(TargetManagement_pkg::internalOperators::removeOverpassedMRSPint#1)/ */
    removeOverpassedMRSPint_reset_TargetManagement_pkg_internalOperators(
      &outC->Context_removeOverpassedMRSPint_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** removeOverpassedMRSP_TargetManagement_pkg_internalOperators.c
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

