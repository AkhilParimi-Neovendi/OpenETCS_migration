/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "d_tripEOA_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::d_tripEOA/ */
void d_tripEOA_TargetLimits_Pkg(
  /* D_EOA/ */
  L_internal_real_Type_SDM_Types_Pkg D_EOA,
  /* trainLocations/ */
  TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  /* trainData_int/ */
  trainData_internal_t_SDM_Types_Pkg *trainData_int,
  outC_d_tripEOA_TargetLimits_Pkg *outC)
{
  kcg_copy_TrainLocations_real_T_SDM_Types_Pkg(&outC->_L22, trainLocations);
  outC->_L32 = outC->_L22.d_LRBG;
  outC->_L15 = D_EOA;
  outC->_L31 = outC->_L15 - outC->_L32;
  outC->A_Input_Abs_2_float32 = outC->_L31;
  outC->_L5_Abs_2_float32 = outC->A_Input_Abs_2_float32;
  outC->_L3_Abs_2_float32 = - outC->_L5_Abs_2_float32;
  outC->_L8_Abs_2_float32 = kcg_lit_float32(0.);
  outC->_L1_Abs_2_float32 = outC->_L8_Abs_2_float32 <= outC->_L5_Abs_2_float32;
  /* @2/_L2= */
  if (outC->_L1_Abs_2_float32) {
    outC->_L2_Abs_2_float32 = outC->_L5_Abs_2_float32;
  }
  else {
    outC->_L2_Abs_2_float32 = outC->_L3_Abs_2_float32;
  }
  outC->A_Output_Abs_2_float32 = outC->_L2_Abs_2_float32;
  outC->_L29 = outC->A_Output_Abs_2_float32;
  outC->_L14 = kcg_lit_float32(0.1);
  outC->_L16 = outC->_L14 * outC->_L29;
  outC->_L13 = kcg_lit_float32(10.0);
  outC->_L24 = outC->_L22.d_accLRBG;
  outC->_L12 = outC->_L24 + outC->_L24 + outC->_L13 + outC->_L16;
  outC->I2_Max_1_float32 = outC->_L12;
  outC->_L2_Max_1_float32 = outC->I2_Max_1_float32;
  outC->_L23 = outC->_L22.d_minSafeFrontEndPos;
  outC->_L20 = outC->_L22.d_maxSafeFrontEndPos;
  outC->_L10 = outC->_L20 - outC->_L23;
  outC->I1_Max_1_float32 = outC->_L10;
  outC->_L1_Max_1_float32 = outC->I1_Max_1_float32;
  outC->_L3_Max_1_float32 = outC->_L1_Max_1_float32 >= outC->_L2_Max_1_float32;
  /* @1/_L4= */
  if (outC->_L3_Max_1_float32) {
    outC->_L4_Max_1_float32 = outC->_L1_Max_1_float32;
  }
  else {
    outC->_L4_Max_1_float32 = outC->_L2_Max_1_float32;
  }
  outC->Ma_Output_Max_1_float32 = outC->_L4_Max_1_float32;
  kcg_copy_trainData_internal_t_SDM_Types_Pkg(&outC->_L33, trainData_int);
  outC->_L21 = outC->_L33.offsetAntennaL1;
  /* _L34=(SDM_Types_Pkg::TransformL_intToL_real#1)/ */
  TransformL_intToL_real_SDM_Types_Pkg(
    outC->_L21,
    &outC->Context_TransformL_intToL_real_1);
  outC->_L34 = outC->Context_TransformL_intToL_real_1.loc_real;
  outC->_L7 = outC->Ma_Output_Max_1_float32;
  outC->_L4 = outC->_L34 + outC->_L7 + outC->_L29;
  outC->D_tripEOA = outC->_L4;
}

#ifndef KCG_USER_DEFINED_INIT
void d_tripEOA_init_TargetLimits_Pkg(outC_d_tripEOA_TargetLimits_Pkg *outC)
{
  outC->_L34 = kcg_lit_float32(0.0);
  outC->_L33.isSB_FBAvailable = kcg_true;
  outC->_L33.isSB_CmdAvailable = kcg_true;
  outC->_L33.isTCOAvailable = kcg_true;
  outC->_L33.T_traction_cut_off = kcg_lit_int32(0);
  outC->_L33.offsetAntennaL1 = kcg_lit_int32(0);
  outC->_L33.T_b_limit = kcg_lit_int32(0);
  outC->_L29 = kcg_lit_float32(0.0);
  outC->_L31 = kcg_lit_float32(0.0);
  outC->_L32 = kcg_lit_float32(0.0);
  outC->_L20 = kcg_lit_float32(0.0);
  outC->_L21 = kcg_lit_int32(0);
  outC->_L22.trainPositionIsValid = kcg_true;
  outC->_L22.d_est_frontendPos = kcg_lit_float32(0.0);
  outC->_L22.d_minSafeFrontEndPos = kcg_lit_float32(0.0);
  outC->_L22.d_maxSafeFrontEndPos = kcg_lit_float32(0.0);
  outC->_L22.d_LRBG = kcg_lit_float32(0.0);
  outC->_L22.d_accLRBG = kcg_lit_float32(0.0);
  outC->_L23 = kcg_lit_float32(0.0);
  outC->_L24 = kcg_lit_float32(0.0);
  outC->_L16 = kcg_lit_float32(0.0);
  outC->_L15 = kcg_lit_float32(0.0);
  outC->_L14 = kcg_lit_float32(0.0);
  outC->_L13 = kcg_lit_float32(0.0);
  outC->_L12 = kcg_lit_float32(0.0);
  outC->_L10 = kcg_lit_float32(0.0);
  outC->_L7 = kcg_lit_float32(0.0);
  outC->_L4 = kcg_lit_float32(0.0);
  outC->_L1_Abs_2_float32 = kcg_true;
  outC->_L2_Abs_2_float32 = kcg_lit_float32(0.0);
  outC->_L3_Abs_2_float32 = kcg_lit_float32(0.0);
  outC->_L5_Abs_2_float32 = kcg_lit_float32(0.0);
  outC->_L8_Abs_2_float32 = kcg_lit_float32(0.0);
  outC->A_Input_Abs_2_float32 = kcg_lit_float32(0.0);
  outC->A_Output_Abs_2_float32 = kcg_lit_float32(0.0);
  outC->_L1_Max_1_float32 = kcg_lit_float32(0.0);
  outC->_L2_Max_1_float32 = kcg_lit_float32(0.0);
  outC->_L3_Max_1_float32 = kcg_true;
  outC->_L4_Max_1_float32 = kcg_lit_float32(0.0);
  outC->I1_Max_1_float32 = kcg_lit_float32(0.0);
  outC->I2_Max_1_float32 = kcg_lit_float32(0.0);
  outC->Ma_Output_Max_1_float32 = kcg_lit_float32(0.0);
  outC->D_tripEOA = kcg_lit_float32(0.0);
  /* _L34=(SDM_Types_Pkg::TransformL_intToL_real#1)/ */
  TransformL_intToL_real_init_SDM_Types_Pkg(
    &outC->Context_TransformL_intToL_real_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void d_tripEOA_reset_TargetLimits_Pkg(outC_d_tripEOA_TargetLimits_Pkg *outC)
{
  /* _L34=(SDM_Types_Pkg::TransformL_intToL_real#1)/ */
  TransformL_intToL_real_reset_SDM_Types_Pkg(
    &outC->Context_TransformL_intToL_real_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: TargetLimits_Pkg::d_tripEOA/
  @2: (math::Abs#2)
  @1: (math::Max#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** d_tripEOA_TargetLimits_Pkg.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

