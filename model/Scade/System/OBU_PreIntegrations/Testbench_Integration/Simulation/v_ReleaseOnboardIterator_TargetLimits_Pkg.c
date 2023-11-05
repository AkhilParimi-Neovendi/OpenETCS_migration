/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "v_ReleaseOnboardIterator_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::v_ReleaseOnboardIterator/ */
void v_ReleaseOnboardIterator_TargetLimits_Pkg(
  /* V_release/ */
  V_internal_real_Type_SDM_Types_Pkg V_release,
  /* EBDcurve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* V_ura/ */
  V_internal_real_Type_SDM_Types_Pkg V_ura,
  /* V_target/ */
  V_internal_real_Type_SDM_Types_Pkg V_target,
  /* D_tripEOA/ */
  L_internal_real_Type_SDM_Types_Pkg D_tripEOA,
  /* T/ */
  T_trac_t_TargetLimits_Pkg *T,
  outC_v_ReleaseOnboardIterator_TargetLimits_Pkg *outC)
{
  static kcg_float32 op_call;

  outC->_L8_Abs_1_float32 = kcg_lit_float32(0.);
  outC->_L41 = V_release;
  kcg_copy_T_trac_t_TargetLimits_Pkg(&outC->_L55, T);
  outC->_L54 = outC->_L55.inhComp;
  outC->_L10 = !outC->_L54;
  outC->every = outC->_L10;
  outC->_L6 = V_release;
  /* _L9=(TargetLimits_Pkg::f_41#1)/ */
  f_41_TargetLimits_Pkg(outC->_L6, &outC->Context_f_41_1);
  outC->_L9 = outC->Context_f_41_1.v_out;
  if (outC->every) {
    outC->I2_Max_1_float32 = outC->_L9;
    outC->_L2_Max_1_float32 = outC->I2_Max_1_float32;
  }
  outC->_L12 = V_ura;
  if (outC->every) {
    outC->I1_Max_1_float32 = outC->_L12;
    outC->_L1_Max_1_float32 = outC->I1_Max_1_float32;
    outC->_L3_Max_1_float32 = outC->_L1_Max_1_float32 >= outC->_L2_Max_1_float32;
    /* @2/_L4= */
    if (outC->_L3_Max_1_float32) {
      outC->_L4_Max_1_float32 = outC->_L1_Max_1_float32;
    }
    else {
      outC->_L4_Max_1_float32 = outC->_L2_Max_1_float32;
    }
    outC->Ma_Output_Max_1_float32 = outC->_L4_Max_1_float32;
    op_call = outC->Ma_Output_Max_1_float32;
  }
  outC->_L13 = kcg_lit_float32(0.0);
  if (outC->every) {
    outC->_L11 = op_call;
  }
  else {
    outC->_L11 = outC->_L13;
  }
  outC->v_delta0rsob = outC->_L11;
  outC->_L26 = outC->v_delta0rsob;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L1, EBDcurve);
  kcg_copy_T_trac_t_TargetLimits_Pkg(&outC->_L8, T);
  outC->_L53 = outC->_L8.Traction;
  outC->_L52 = outC->_L8.berem;
  outC->_L4 = outC->_L52 + outC->_L53;
  outC->_L15 = outC->v_delta0rsob;
  outC->_L18 = V_release;
  outC->_L14 = outC->_L18 + outC->_L15;
  outC->_L3 = outC->_L14 * outC->_L4;
  outC->d_bec = outC->_L3;
  outC->_L23 = outC->d_bec;
  outC->_L22 = D_tripEOA;
  outC->_L24 = outC->_L22 + outC->_L23;
  /* _L20=(CalcBrakingCurves_types::getSpeedOnCurve#1)/ */
  getSpeedOnCurve_CalcBrakingCurves_types(
    &outC->_L1,
    outC->_L24,
    &outC->Context_getSpeedOnCurve_1);
  outC->_L20 = outC->Context_getSpeedOnCurve_1.valid;
  outC->_L21 = outC->Context_getSpeedOnCurve_1.speed;
  outC->_L25 = outC->_L21 - outC->_L26;
  outC->_L29 = V_target;
  outC->_L36 = outC->_L25 <= outC->_L29;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L34, EBDcurve);
  outC->_L33 = V_target;
  /* _L31=(CalcBrakingCurves_types::getLocationOnCurve#1)/ */
  getLocationOnCurve_CalcBrakingCurves_types(
    &outC->_L34,
    outC->_L33,
    &outC->Context_getLocationOnCurve_1);
  outC->_L31 = outC->Context_getLocationOnCurve_1.valid;
  outC->_L32 = outC->Context_getLocationOnCurve_1.location;
  outC->_L35 = outC->_L32 <= outC->_L24;
  outC->_L38 = outC->_L35 | outC->_L36;
  /* _L28= */
  if (outC->_L38) {
    outC->_L28 = outC->_L29;
  }
  else {
    outC->_L28 = outC->_L25;
  }
  outC->_L40 = outC->_L28 - outC->_L41;
  outC->A_Input_Abs_1_float32 = outC->_L40;
  outC->_L5_Abs_1_float32 = outC->A_Input_Abs_1_float32;
  outC->_L3_Abs_1_float32 = - outC->_L5_Abs_1_float32;
  outC->_L1_Abs_1_float32 = outC->_L8_Abs_1_float32 <= outC->_L5_Abs_1_float32;
  /* @1/_L2= */
  if (outC->_L1_Abs_1_float32) {
    outC->_L2_Abs_1_float32 = outC->_L5_Abs_1_float32;
  }
  else {
    outC->_L2_Abs_1_float32 = outC->_L3_Abs_1_float32;
  }
  outC->A_Output_Abs_1_float32 = outC->_L2_Abs_1_float32;
  outC->_L50 = outC->_L31 & outC->_L20;
  outC->_L51 = !outC->_L50;
  outC->_L49 = kcg_lit_float32(-1.0);
  /* _L48= */
  if (outC->_L51) {
    outC->_L48 = outC->_L49;
  }
  else {
    outC->_L48 = outC->_L28;
  }
  outC->_L45 = kcg_lit_float32(1.0) / kcg_lit_float32(3.6);
  outC->_L39 = outC->A_Output_Abs_1_float32;
  outC->_L42 = outC->_L39 <= outC->_L45;
  outC->end_condition = outC->_L42;
  outC->_L47 = outC->end_condition;
  outC->_L43 = !outC->_L47;
  outC->_L46 = outC->_L31 & outC->_L20 & outC->_L43;
  outC->run_condition = outC->_L46;
  outC->V_release_next = outC->_L48;
}

#ifndef KCG_USER_DEFINED_INIT
void v_ReleaseOnboardIterator_init_TargetLimits_Pkg(
  outC_v_ReleaseOnboardIterator_TargetLimits_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;

  outC->_L54 = kcg_true;
  outC->_L55.Traction = kcg_lit_float32(0.0);
  outC->_L55.berem = kcg_lit_float32(0.0);
  outC->_L55.bs = kcg_lit_float32(0.0);
  outC->_L55.bs1 = kcg_lit_float32(0.0);
  outC->_L55.bs2 = kcg_lit_float32(0.0);
  outC->_L55.inhComp = kcg_true;
  outC->_L55.indication = kcg_lit_float32(0.0);
  outC->_L53 = kcg_lit_float32(0.0);
  outC->_L52 = kcg_lit_float32(0.0);
  outC->_L51 = kcg_true;
  outC->_L50 = kcg_true;
  outC->_L49 = kcg_lit_float32(0.0);
  outC->_L48 = kcg_lit_float32(0.0);
  outC->_L47 = kcg_true;
  outC->_L46 = kcg_true;
  outC->_L45 = kcg_lit_float32(0.0);
  outC->_L43 = kcg_true;
  outC->_L42 = kcg_true;
  outC->_L41 = kcg_lit_float32(0.0);
  outC->_L40 = kcg_lit_float32(0.0);
  outC->_L39 = kcg_lit_float32(0.0);
  outC->_L38 = kcg_true;
  outC->_L36 = kcg_true;
  outC->_L35 = kcg_true;
  for (idx = 0; idx < 114; idx++) {
    outC->_L34.distances[idx] = kcg_lit_float32(0.0);
  }
  for (idx1 = 0; idx1 < 114; idx1++) {
    outC->_L34.speeds[idx1] = kcg_lit_float32(0.0);
  }
  for (idx2 = 0; idx2 < 114; idx2++) {
    outC->_L34.accelerations[idx2] = kcg_lit_float32(0.0);
  }
  for (idx3 = 0; idx3 < 114; idx3++) {
    outC->_L34.valid[idx3] = kcg_true;
  }
  outC->_L33 = kcg_lit_float32(0.0);
  outC->_L31 = kcg_true;
  outC->_L32 = kcg_lit_float32(0.0);
  outC->_L29 = kcg_lit_float32(0.0);
  outC->_L28 = kcg_lit_float32(0.0);
  outC->_L26 = kcg_lit_float32(0.0);
  outC->_L25 = kcg_lit_float32(0.0);
  outC->_L24 = kcg_lit_float32(0.0);
  outC->_L23 = kcg_lit_float32(0.0);
  outC->_L22 = kcg_lit_float32(0.0);
  outC->_L20 = kcg_true;
  outC->_L21 = kcg_lit_float32(0.0);
  outC->_L18 = kcg_lit_float32(0.0);
  outC->_L15 = kcg_lit_float32(0.0);
  outC->_L14 = kcg_lit_float32(0.0);
  outC->_L13 = kcg_lit_float32(0.0);
  outC->_L12 = kcg_lit_float32(0.0);
  outC->_L11 = kcg_lit_float32(0.0);
  outC->_L3 = kcg_lit_float32(0.0);
  outC->_L4 = kcg_lit_float32(0.0);
  outC->_L6 = kcg_lit_float32(0.0);
  outC->_L8.Traction = kcg_lit_float32(0.0);
  outC->_L8.berem = kcg_lit_float32(0.0);
  outC->_L8.bs = kcg_lit_float32(0.0);
  outC->_L8.bs1 = kcg_lit_float32(0.0);
  outC->_L8.bs2 = kcg_lit_float32(0.0);
  outC->_L8.inhComp = kcg_true;
  outC->_L8.indication = kcg_lit_float32(0.0);
  outC->_L9 = kcg_lit_float32(0.0);
  outC->_L10 = kcg_true;
  for (idx4 = 0; idx4 < 114; idx4++) {
    outC->_L1.distances[idx4] = kcg_lit_float32(0.0);
  }
  for (idx5 = 0; idx5 < 114; idx5++) {
    outC->_L1.speeds[idx5] = kcg_lit_float32(0.0);
  }
  for (idx6 = 0; idx6 < 114; idx6++) {
    outC->_L1.accelerations[idx6] = kcg_lit_float32(0.0);
  }
  for (idx7 = 0; idx7 < 114; idx7++) {
    outC->_L1.valid[idx7] = kcg_true;
  }
  outC->end_condition = kcg_true;
  outC->d_bec = kcg_lit_float32(0.0);
  outC->v_delta0rsob = kcg_lit_float32(0.0);
  outC->every = kcg_true;
  outC->_L1_Max_1_float32 = kcg_lit_float32(0.0);
  outC->_L2_Max_1_float32 = kcg_lit_float32(0.0);
  outC->_L3_Max_1_float32 = kcg_true;
  outC->_L4_Max_1_float32 = kcg_lit_float32(0.0);
  outC->I1_Max_1_float32 = kcg_lit_float32(0.0);
  outC->I2_Max_1_float32 = kcg_lit_float32(0.0);
  outC->Ma_Output_Max_1_float32 = kcg_lit_float32(0.0);
  outC->_L1_Abs_1_float32 = kcg_true;
  outC->_L2_Abs_1_float32 = kcg_lit_float32(0.0);
  outC->_L3_Abs_1_float32 = kcg_lit_float32(0.0);
  outC->_L5_Abs_1_float32 = kcg_lit_float32(0.0);
  outC->_L8_Abs_1_float32 = kcg_lit_float32(0.0);
  outC->A_Input_Abs_1_float32 = kcg_lit_float32(0.0);
  outC->A_Output_Abs_1_float32 = kcg_lit_float32(0.0);
  outC->V_release_next = kcg_lit_float32(0.0);
  outC->run_condition = kcg_true;
  /* _L31=(CalcBrakingCurves_types::getLocationOnCurve#1)/ */
  getLocationOnCurve_init_CalcBrakingCurves_types(
    &outC->Context_getLocationOnCurve_1);
  /* _L20=(CalcBrakingCurves_types::getSpeedOnCurve#1)/ */
  getSpeedOnCurve_init_CalcBrakingCurves_types(
    &outC->Context_getSpeedOnCurve_1);
  /* _L9=(TargetLimits_Pkg::f_41#1)/ */
  f_41_init_TargetLimits_Pkg(&outC->Context_f_41_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void v_ReleaseOnboardIterator_reset_TargetLimits_Pkg(
  outC_v_ReleaseOnboardIterator_TargetLimits_Pkg *outC)
{
  /* _L31=(CalcBrakingCurves_types::getLocationOnCurve#1)/ */
  getLocationOnCurve_reset_CalcBrakingCurves_types(
    &outC->Context_getLocationOnCurve_1);
  /* _L20=(CalcBrakingCurves_types::getSpeedOnCurve#1)/ */
  getSpeedOnCurve_reset_CalcBrakingCurves_types(
    &outC->Context_getSpeedOnCurve_1);
  /* _L9=(TargetLimits_Pkg::f_41#1)/ */
  f_41_reset_TargetLimits_Pkg(&outC->Context_f_41_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: TargetLimits_Pkg::v_ReleaseOnboardIterator/
  @2: (math::Max#1)
  @1: (math::Abs#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** v_ReleaseOnboardIterator_TargetLimits_Pkg.c
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

