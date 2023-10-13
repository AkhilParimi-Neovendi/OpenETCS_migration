/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InflateABrakeRow_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::InflateABrakeRow/ */
void InflateABrakeRow_SDMConversionModelPkg(
  /* Akku/ */
  A_internal_Type_Obu_BasicTypes_Pkg Akku,
  /* A/ */
  A_internal_Type_Obu_BasicTypes_Pkg A,
  outC_InflateABrakeRow_SDMConversionModelPkg *outC)
{
  static kcg_size idx;

  outC->_L7 = Akku;
  outC->_L1 = A;
  outC->_L5 = kcg_lit_int64(0);
  outC->_L4 = outC->_L1 > outC->_L5;
  /* _L6= */
  if (outC->_L4) {
    outC->_L6 = outC->_L1;
  }
  else {
    outC->_L6 = outC->_L7;
  }
  outC->Akku_out = outC->_L6;
  /* _L2=(SDM_Types_Pkg::TransformA_intToA_real#1)/ */
  TransformA_intToA_real_SDM_Types_Pkg(
    outC->_L6,
    &outC->Context_TransformA_intToA_real_1);
  outC->_L2 = outC->Context_TransformA_intToA_real_1.acc_real;
  /* _L3/ */
  for (idx = 0; idx < 100; idx++) {
    outC->_L3[idx] = outC->_L2;
  }
  kcg_copy_ASafeRow_T_CalcBrakingCurves_types(&outC->ASafeRow, &outC->_L3);
}

#ifndef KCG_USER_DEFINED_INIT
void InflateABrakeRow_init_SDMConversionModelPkg(
  outC_InflateABrakeRow_SDMConversionModelPkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L7 = kcg_lit_int64(0);
  outC->_L6 = kcg_lit_int64(0);
  outC->_L5 = kcg_lit_int64(0);
  outC->_L4 = kcg_true;
  for (idx = 0; idx < 100; idx++) {
    outC->_L3[idx] = kcg_lit_float64(0.0);
  }
  outC->_L2 = kcg_lit_float64(0.0);
  outC->_L1 = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 100; idx1++) {
    outC->ASafeRow[idx1] = kcg_lit_float64(0.0);
  }
  outC->Akku_out = kcg_lit_int64(0);
  /* _L2=(SDM_Types_Pkg::TransformA_intToA_real#1)/ */
  TransformA_intToA_real_init_SDM_Types_Pkg(
    &outC->Context_TransformA_intToA_real_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void InflateABrakeRow_reset_SDMConversionModelPkg(
  outC_InflateABrakeRow_SDMConversionModelPkg *outC)
{
  /* _L2=(SDM_Types_Pkg::TransformA_intToA_real#1)/ */
  TransformA_intToA_real_reset_SDM_Types_Pkg(
    &outC->Context_TransformA_intToA_real_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** InflateABrakeRow_SDMConversionModelPkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

