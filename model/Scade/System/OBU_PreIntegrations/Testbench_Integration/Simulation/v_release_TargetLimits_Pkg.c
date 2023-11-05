/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "v_release_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::v_release/ */
void v_release_TargetLimits_Pkg(
  /* EBDcurve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* V_target/ */
  V_internal_real_Type_SDM_Types_Pkg V_target,
  /* D_EOA/ */
  L_internal_real_Type_SDM_Types_Pkg D_EOA,
  /* MA/ */
  MA_section_real_T_TargetManagement_types *MA,
  /* V_ura/ */
  V_internal_real_Type_SDM_Types_Pkg V_ura,
  /* trainLocations/ */
  TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  /* trainData_int/ */
  trainData_internal_t_SDM_Types_Pkg *trainData_int,
  /* T/ */
  T_trac_t_TargetLimits_Pkg *T,
  outC_v_release_TargetLimits_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static V_internal_real_Type_SDM_Types_Pkg acc;
  static kcg_size idx5;
  static L_internal_real_Type_SDM_Types_Pkg op_call;
  static kcg_int32 noname;

  kcg_copy_MA_section_real_T_TargetManagement_types(&outC->_L59, MA);
  outC->_L60 = outC->_L59.q_calculate_release;
  outC->every = outC->_L60;
  outC->_L33 = D_EOA;
  kcg_copy_TrainLocations_real_T_SDM_Types_Pkg(&outC->_L63, trainLocations);
  kcg_copy_trainData_internal_t_SDM_Types_Pkg(&outC->_L64, trainData_int);
  if (outC->every) {
    /* _L21=(TargetLimits_Pkg::d_tripEOA#1)/ */
    d_tripEOA_TargetLimits_Pkg(
      outC->_L33,
      &outC->_L63,
      &outC->_L64,
      &outC->Context_d_tripEOA_1);
    op_call = outC->Context_d_tripEOA_1.D_tripEOA;
  }
  outC->_L61 = outC->_L59.ReleaseSpeed;
  outC->_L47 = kcg_lit_float32(0.0);
  outC->_L23 = V_target;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L26, EBDcurve);
  /* _L14/ */
  for (idx = 0; idx < 10; idx++) {
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L14[idx], &outC->_L26);
  }
  outC->_L25 = V_ura;
  /* _L15/ */
  for (idx1 = 0; idx1 < 10; idx1++) {
    outC->_L15[idx1] = outC->_L25;
  }
  outC->_L24 = V_target;
  /* _L16/ */
  for (idx2 = 0; idx2 < 10; idx2++) {
    outC->_L16[idx2] = outC->_L24;
  }
  if (outC->every) {
    outC->_L21 = op_call;
  }
  else {
    outC->_L21 = kcg_lit_float32(0.0);
  }
  /* _L17/ */
  for (idx3 = 0; idx3 < 10; idx3++) {
    outC->_L17[idx3] = outC->_L21;
  }
  kcg_copy_T_trac_t_TargetLimits_Pkg(&outC->_L28, T);
  /* _L19/ */
  for (idx4 = 0; idx4 < 10; idx4++) {
    kcg_copy_T_trac_t_TargetLimits_Pkg(&outC->_L19[idx4], &outC->_L28);
  }
  outC->_L9 = outC->_L23;
  /* _L12= */
  if (outC->_L60) {
    /* _L12= */
    for (idx5 = 0; idx5 < 10; idx5++) {
      acc = outC->_L9;
      /* _L12=(TargetLimits_Pkg::v_ReleaseOnboardIterator#1)/ */
      v_ReleaseOnboardIterator_TargetLimits_Pkg(
        acc,
        &outC->_L14[idx5],
        outC->_L15[idx5],
        outC->_L16[idx5],
        outC->_L17[idx5],
        &outC->_L19[idx5],
        &outC->Context_v_ReleaseOnboardIterator_1[idx5]);
      outC->_L9 = outC->Context_v_ReleaseOnboardIterator_1[idx5].V_release_next;
      outC->_L12 = /* _L12= */(kcg_int32) (idx5 + 1);
      /* _L12= */
      if (!outC->Context_v_ReleaseOnboardIterator_1[idx5].run_condition) {
        break;
      }
    }
  }
  else {
    outC->_L12 = kcg_lit_int32(0);
  }
  outC->_L46 = outC->_L9 <= outC->_L47;
  outC->_L57 = outC->_L60 & outC->_L46;
  outC->_L58 = !outC->_L57;
  /* _L55= */
  if (outC->_L60) {
    outC->_L55 = outC->_L9;
  }
  else {
    outC->_L55 = outC->_L61;
  }
  outC->valid = outC->_L58;
  noname = outC->_L12;
  outC->V_release = outC->_L55;
}

#ifndef KCG_USER_DEFINED_INIT
void v_release_init_TargetLimits_Pkg(outC_v_release_TargetLimits_Pkg *outC)
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

  outC->_L64.isSB_FBAvailable = kcg_true;
  outC->_L64.isSB_CmdAvailable = kcg_true;
  outC->_L64.isTCOAvailable = kcg_true;
  outC->_L64.T_traction_cut_off = kcg_lit_int32(0);
  outC->_L64.offsetAntennaL1 = kcg_lit_int32(0);
  outC->_L64.T_b_limit = kcg_lit_int32(0);
  outC->_L63.trainPositionIsValid = kcg_true;
  outC->_L63.d_est_frontendPos = kcg_lit_float32(0.0);
  outC->_L63.d_minSafeFrontEndPos = kcg_lit_float32(0.0);
  outC->_L63.d_maxSafeFrontEndPos = kcg_lit_float32(0.0);
  outC->_L63.d_LRBG = kcg_lit_float32(0.0);
  outC->_L63.d_accLRBG = kcg_lit_float32(0.0);
  outC->_L61 = kcg_lit_float32(0.0);
  outC->_L60 = kcg_true;
  outC->_L59.valid = kcg_true;
  outC->_L59.v_main = kcg_lit_float32(0.0);
  outC->_L59.EOA.Location = kcg_lit_float32(0.0);
  outC->_L59.EOA.TargetSpeed = kcg_lit_float32(0.0);
  outC->_L59.DP_valid = kcg_true;
  outC->_L59.DangerPoint = kcg_lit_float32(0.0);
  outC->_L59.OL_valid = kcg_true;
  outC->_L59.Overlap = kcg_lit_float32(0.0);
  outC->_L59.q_calculate_release = kcg_true;
  outC->_L59.ReleaseSpeed = kcg_lit_float32(0.0);
  outC->_L59.level = MA_L1_TrackAtlasTypes;
  outC->_L58 = kcg_true;
  outC->_L57 = kcg_true;
  outC->_L55 = kcg_lit_float32(0.0);
  outC->_L47 = kcg_lit_float32(0.0);
  outC->_L46 = kcg_true;
  outC->_L33 = kcg_lit_float32(0.0);
  outC->_L28.Traction = kcg_lit_float32(0.0);
  outC->_L28.berem = kcg_lit_float32(0.0);
  outC->_L28.bs = kcg_lit_float32(0.0);
  outC->_L28.bs1 = kcg_lit_float32(0.0);
  outC->_L28.bs2 = kcg_lit_float32(0.0);
  outC->_L28.inhComp = kcg_true;
  outC->_L28.indication = kcg_lit_float32(0.0);
  for (idx1 = 0; idx1 < 114; idx1++) {
    outC->_L26.distances[idx1] = kcg_lit_float32(0.0);
  }
  for (idx2 = 0; idx2 < 114; idx2++) {
    outC->_L26.speeds[idx2] = kcg_lit_float32(0.0);
  }
  for (idx3 = 0; idx3 < 114; idx3++) {
    outC->_L26.accelerations[idx3] = kcg_lit_float32(0.0);
  }
  for (idx4 = 0; idx4 < 114; idx4++) {
    outC->_L26.valid[idx4] = kcg_true;
  }
  outC->_L25 = kcg_lit_float32(0.0);
  outC->_L24 = kcg_lit_float32(0.0);
  outC->_L23 = kcg_lit_float32(0.0);
  outC->_L21 = kcg_lit_float32(0.0);
  for (idx5 = 0; idx5 < 10; idx5++) {
    outC->_L19[idx5].Traction = kcg_lit_float32(0.0);
    outC->_L19[idx5].berem = kcg_lit_float32(0.0);
    outC->_L19[idx5].bs = kcg_lit_float32(0.0);
    outC->_L19[idx5].bs1 = kcg_lit_float32(0.0);
    outC->_L19[idx5].bs2 = kcg_lit_float32(0.0);
    outC->_L19[idx5].inhComp = kcg_true;
    outC->_L19[idx5].indication = kcg_lit_float32(0.0);
  }
  for (idx6 = 0; idx6 < 10; idx6++) {
    outC->_L17[idx6] = kcg_lit_float32(0.0);
  }
  for (idx7 = 0; idx7 < 10; idx7++) {
    outC->_L16[idx7] = kcg_lit_float32(0.0);
  }
  for (idx8 = 0; idx8 < 10; idx8++) {
    outC->_L15[idx8] = kcg_lit_float32(0.0);
  }
  for (idx13 = 0; idx13 < 10; idx13++) {
    for (idx9 = 0; idx9 < 114; idx9++) {
      outC->_L14[idx13].distances[idx9] = kcg_lit_float32(0.0);
    }
    for (idx10 = 0; idx10 < 114; idx10++) {
      outC->_L14[idx13].speeds[idx10] = kcg_lit_float32(0.0);
    }
    for (idx11 = 0; idx11 < 114; idx11++) {
      outC->_L14[idx13].accelerations[idx11] = kcg_lit_float32(0.0);
    }
    for (idx12 = 0; idx12 < 114; idx12++) {
      outC->_L14[idx13].valid[idx12] = kcg_true;
    }
  }
  outC->_L12 = kcg_lit_int32(0);
  outC->_L9 = kcg_lit_float32(0.0);
  outC->every = kcg_true;
  outC->valid = kcg_true;
  outC->V_release = kcg_lit_float32(0.0);
  for (idx = 0; idx < 10; idx++) {
    /* _L12=(TargetLimits_Pkg::v_ReleaseOnboardIterator#1)/ */
    v_ReleaseOnboardIterator_init_TargetLimits_Pkg(
      &outC->Context_v_ReleaseOnboardIterator_1[idx]);
  }
  /* _L21=(TargetLimits_Pkg::d_tripEOA#1)/ */
  d_tripEOA_init_TargetLimits_Pkg(&outC->Context_d_tripEOA_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void v_release_reset_TargetLimits_Pkg(outC_v_release_TargetLimits_Pkg *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 10; idx++) {
    /* _L12=(TargetLimits_Pkg::v_ReleaseOnboardIterator#1)/ */
    v_ReleaseOnboardIterator_reset_TargetLimits_Pkg(
      &outC->Context_v_ReleaseOnboardIterator_1[idx]);
  }
  /* _L21=(TargetLimits_Pkg::d_tripEOA#1)/ */
  d_tripEOA_reset_TargetLimits_Pkg(&outC->Context_d_tripEOA_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** v_release_TargetLimits_Pkg.c
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

