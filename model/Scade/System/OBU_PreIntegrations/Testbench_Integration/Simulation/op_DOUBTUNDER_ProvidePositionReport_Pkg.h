/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _op_DOUBTUNDER_ProvidePositionReport_Pkg_H_
#define _op_DOUBTUNDER_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  L_DOUBTUNDER /* l_doubtunder/ */ l_doubtunder;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* @1/A_Output/ */ A_Output_Abs_1_int64;
  kcg_int64 /* @1/A_Input/ */ A_Input_Abs_1_int64;
  kcg_int64 /* @1/_L8/ */ _L8_Abs_1_int64;
  kcg_int64 /* @1/_L5/ */ _L5_Abs_1_int64;
  kcg_int64 /* @1/_L3/ */ _L3_Abs_1_int64;
  kcg_int64 /* @1/_L2/ */ _L2_Abs_1_int64;
  kcg_bool /* @1/_L1/ */ _L1_Abs_1_int64;
  Location_T_Obu_BasicTypes_Pkg /* _L8/ */ _L8;
  Location_T_Obu_BasicTypes_Pkg /* _L6/ */ _L6;
  trainPosition_T_TrainPosition_Types_Pck /* _L5/ */ _L5;
  kcg_int64 /* _L10/ */ _L10;
  kcg_int64 /* _L11/ */ _L11;
} outC_op_DOUBTUNDER_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::op_DOUBTUNDER/ */
extern void op_DOUBTUNDER_ProvidePositionReport_Pkg(
  /* trainPos/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPos,
  outC_op_DOUBTUNDER_ProvidePositionReport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void op_DOUBTUNDER_reset_ProvidePositionReport_Pkg(
  outC_op_DOUBTUNDER_ProvidePositionReport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void op_DOUBTUNDER_init_ProvidePositionReport_Pkg(
  outC_op_DOUBTUNDER_ProvidePositionReport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: ProvidePositionReport_Pkg::op_DOUBTUNDER/
  @1: (math::Abs#1)
*/

#endif /* _op_DOUBTUNDER_ProvidePositionReport_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** op_DOUBTUNDER_ProvidePositionReport_Pkg.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

