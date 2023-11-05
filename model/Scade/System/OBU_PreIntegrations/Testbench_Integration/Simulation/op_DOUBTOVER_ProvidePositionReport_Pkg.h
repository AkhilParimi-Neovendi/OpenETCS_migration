/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _op_DOUBTOVER_ProvidePositionReport_Pkg_H_
#define _op_DOUBTOVER_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  L_DOUBTOVER /* l_doubtover/ */ l_doubtover;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* @1/A_Output/ */ A_Output_Abs_1_int32;
  kcg_int32 /* @1/A_Input/ */ A_Input_Abs_1_int32;
  kcg_int32 /* @1/_L8/ */ _L8_Abs_1_int32;
  kcg_int32 /* @1/_L5/ */ _L5_Abs_1_int32;
  kcg_int32 /* @1/_L3/ */ _L3_Abs_1_int32;
  kcg_int32 /* @1/_L2/ */ _L2_Abs_1_int32;
  kcg_bool /* @1/_L1/ */ _L1_Abs_1_int32;
  trainPosition_T_TrainPosition_Types_Pck /* _L1/ */ _L1;
  Location_T_Obu_BasicTypes_Pkg /* _L4/ */ _L4;
  Location_T_Obu_BasicTypes_Pkg /* _L7/ */ _L7;
  kcg_int32 /* _L10/ */ _L10;
  kcg_int32 /* _L11/ */ _L11;
} outC_op_DOUBTOVER_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::op_DOUBTOVER/ */
extern void op_DOUBTOVER_ProvidePositionReport_Pkg(
  /* trainPos/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPos,
  outC_op_DOUBTOVER_ProvidePositionReport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void op_DOUBTOVER_reset_ProvidePositionReport_Pkg(
  outC_op_DOUBTOVER_ProvidePositionReport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void op_DOUBTOVER_init_ProvidePositionReport_Pkg(
  outC_op_DOUBTOVER_ProvidePositionReport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: ProvidePositionReport_Pkg::op_DOUBTOVER/
  @1: (math::Abs#1)
*/

#endif /* _op_DOUBTOVER_ProvidePositionReport_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** op_DOUBTOVER_ProvidePositionReport_Pkg.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

