/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "calcBec_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::calcBec/ */
void calcBec_TargetLimits_Pkg(
  /* V_dt/ */
  TractionDeltaTriple_TargetLimits_Pkg *V_dt,
  /* V_target/ */
  V_internal_real_Type_SDM_Types_Pkg V_target,
  /* V_est/ */
  V_internal_real_Type_SDM_Types_Pkg V_est,
  /* T/ */
  T_trac_t_TargetLimits_Pkg *T,
  outC_calcBec_TargetLimits_Pkg *outC)
{
  kcg_copy_TractionDeltaTriple_TargetLimits_Pkg(&outC->_L94, V_dt);
  outC->_L101 = outC->_L94[1];
  outC->_L100 = outC->_L94[0];
  outC->_L92 = V_est;
  outC->_L24 = outC->_L92 + outC->_L100 + outC->_L101;
  outC->I2_Max_1_float64 = outC->_L24;
  outC->_L2_Max_1_float64 = outC->I2_Max_1_float64;
  outC->_L25 = V_target;
  outC->I1_Max_1_float64 = outC->_L25;
  outC->_L1_Max_1_float64 = outC->I1_Max_1_float64;
  outC->_L3_Max_1_float64 = outC->_L1_Max_1_float64 >= outC->_L2_Max_1_float64;
  /* @1/_L4= */
  if (outC->_L3_Max_1_float64) {
    outC->_L4_Max_1_float64 = outC->_L1_Max_1_float64;
  }
  else {
    outC->_L4_Max_1_float64 = outC->_L2_Max_1_float64;
  }
  outC->Ma_Output_Max_1_float64 = outC->_L4_Max_1_float64;
  outC->_L45 = kcg_lit_float64(0.5);
  kcg_copy_TractionDeltaTriple_TargetLimits_Pkg(&outC->_L110, V_dt);
  outC->_L108 = outC->_L110[1];
  outC->_L44 = outC->_L108 * outC->_L45;
  outC->_L107 = outC->_L110[0];
  outC->_L91 = V_est;
  outC->_L39 = outC->_L91 + outC->_L107 + outC->_L44;
  outC->I2_Max_2_float64 = outC->_L39;
  outC->_L2_Max_2_float64 = outC->I2_Max_2_float64;
  outC->_L38 = V_target;
  outC->I1_Max_2_float64 = outC->_L38;
  outC->_L1_Max_2_float64 = outC->I1_Max_2_float64;
  outC->_L3_Max_2_float64 = outC->_L1_Max_2_float64 >= outC->_L2_Max_2_float64;
  /* @2/_L4= */
  if (outC->_L3_Max_2_float64) {
    outC->_L4_Max_2_float64 = outC->_L1_Max_2_float64;
  }
  else {
    outC->_L4_Max_2_float64 = outC->_L2_Max_2_float64;
  }
  outC->Ma_Output_Max_2_float64 = outC->_L4_Max_2_float64;
  kcg_copy_T_trac_t_TargetLimits_Pkg(&outC->_L83, T);
  outC->_L115 = outC->_L83.berem;
  outC->_L114 = outC->_L83.Traction;
  outC->_L102 = outC->_L94[2];
  outC->_L23 = outC->Ma_Output_Max_1_float64;
  outC->_L28 = outC->_L23 + outC->_L102;
  outC->_L109 = outC->_L110[2];
  outC->_L51 = outC->_L109 * outC->_L45;
  outC->v_bec = outC->_L28;
  outC->_L48 = outC->v_bec;
  outC->_L49 = outC->_L48 - outC->_L51;
  outC->_L33 = outC->_L115 * outC->_L49;
  outC->_L34 = outC->Ma_Output_Max_2_float64;
  outC->_L32 = outC->_L114 * outC->_L34;
  outC->_L31 = outC->_L32 + outC->_L33;
  outC->_L113.v = outC->_L28;
  outC->_L113.d = outC->_L31;
  kcg_copy_bec_t_TargetLimits_Pkg(&outC->bec, &outC->_L113);
}

#ifndef KCG_USER_DEFINED_INIT
void calcBec_init_TargetLimits_Pkg(outC_calcBec_TargetLimits_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L115 = kcg_lit_float64(0.0);
  outC->_L114 = kcg_lit_float64(0.0);
  outC->_L113.v = kcg_lit_float64(0.0);
  outC->_L113.d = kcg_lit_float64(0.0);
  outC->_L109 = kcg_lit_float64(0.0);
  outC->_L108 = kcg_lit_float64(0.0);
  outC->_L107 = kcg_lit_float64(0.0);
  for (idx = 0; idx < 3; idx++) {
    outC->_L110[idx] = kcg_lit_float64(0.0);
  }
  outC->_L100 = kcg_lit_float64(0.0);
  outC->_L101 = kcg_lit_float64(0.0);
  outC->_L102 = kcg_lit_float64(0.0);
  for (idx1 = 0; idx1 < 3; idx1++) {
    outC->_L94[idx1] = kcg_lit_float64(0.0);
  }
  outC->_L92 = kcg_lit_float64(0.0);
  outC->_L91 = kcg_lit_float64(0.0);
  outC->_L83.Traction = kcg_lit_float64(0.0);
  outC->_L83.berem = kcg_lit_float64(0.0);
  outC->_L83.bs = kcg_lit_float64(0.0);
  outC->_L83.bs1 = kcg_lit_float64(0.0);
  outC->_L83.bs2 = kcg_lit_float64(0.0);
  outC->_L83.inhComp = kcg_true;
  outC->_L83.indication = kcg_lit_float64(0.0);
  outC->_L51 = kcg_lit_float64(0.0);
  outC->_L49 = kcg_lit_float64(0.0);
  outC->_L48 = kcg_lit_float64(0.0);
  outC->_L45 = kcg_lit_float64(0.0);
  outC->_L44 = kcg_lit_float64(0.0);
  outC->_L39 = kcg_lit_float64(0.0);
  outC->_L38 = kcg_lit_float64(0.0);
  outC->_L34 = kcg_lit_float64(0.0);
  outC->_L33 = kcg_lit_float64(0.0);
  outC->_L32 = kcg_lit_float64(0.0);
  outC->_L31 = kcg_lit_float64(0.0);
  outC->_L28 = kcg_lit_float64(0.0);
  outC->_L25 = kcg_lit_float64(0.0);
  outC->_L24 = kcg_lit_float64(0.0);
  outC->_L23 = kcg_lit_float64(0.0);
  outC->v_bec = kcg_lit_float64(0.0);
  outC->_L1_Max_2_float64 = kcg_lit_float64(0.0);
  outC->_L2_Max_2_float64 = kcg_lit_float64(0.0);
  outC->_L3_Max_2_float64 = kcg_true;
  outC->_L4_Max_2_float64 = kcg_lit_float64(0.0);
  outC->I1_Max_2_float64 = kcg_lit_float64(0.0);
  outC->I2_Max_2_float64 = kcg_lit_float64(0.0);
  outC->Ma_Output_Max_2_float64 = kcg_lit_float64(0.0);
  outC->_L1_Max_1_float64 = kcg_lit_float64(0.0);
  outC->_L2_Max_1_float64 = kcg_lit_float64(0.0);
  outC->_L3_Max_1_float64 = kcg_true;
  outC->_L4_Max_1_float64 = kcg_lit_float64(0.0);
  outC->I1_Max_1_float64 = kcg_lit_float64(0.0);
  outC->I2_Max_1_float64 = kcg_lit_float64(0.0);
  outC->Ma_Output_Max_1_float64 = kcg_lit_float64(0.0);
  outC->bec.v = kcg_lit_float64(0.0);
  outC->bec.d = kcg_lit_float64(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void calcBec_reset_TargetLimits_Pkg(outC_calcBec_TargetLimits_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: TargetLimits_Pkg::calcBec/
  @1: (math::Max#1)
  @2: (math::Max#2)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** calcBec_TargetLimits_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

