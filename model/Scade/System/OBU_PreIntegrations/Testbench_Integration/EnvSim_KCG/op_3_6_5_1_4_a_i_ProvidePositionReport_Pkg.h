/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg_H_
#define _op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* trigger/ */ trigger;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  odometry_T_Obu_BasicTypes_Pkg /* odometry/ */ mem_odometry;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  odoMotionState_T_Obu_BasicTypes_Pkg /* _L17/ */ _L17;
  odoMotionState_T_Obu_BasicTypes_Pkg /* _L19/ */ _L19;
  kcg_bool /* _L22/ */ _L22;
  odometry_T_Obu_BasicTypes_Pkg /* _L26/ */ _L26;
  odometry_T_Obu_BasicTypes_Pkg /* _L27/ */ _L27;
  kcg_bool /* _L33/ */ _L33;
  kcg_bool /* _L34/ */ _L34;
  kcg_bool /* _L35/ */ _L35;
} outC_op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::op_3_6_5_1_4_a_i/ */
extern void op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg(
  /* odometry/ */
  odometry_T_Obu_BasicTypes_Pkg *odometry,
  outC_op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void op_3_6_5_1_4_a_i_reset_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void op_3_6_5_1_4_a_i_init_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

