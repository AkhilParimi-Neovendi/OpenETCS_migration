/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _op_LRBG_ProvidePositionReport_Pkg_H_
#define _op_LRBG_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "sub_2_distances_BasicLocationFunctions_Pkg.h"
#include "op_GetLRBGfromBGs_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* d_lrbg/ */ d_lrbg;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_sub_2_distances_BasicLocationFunctions_Pkg /* _L31=(BasicLocationFunctions_Pkg::sub_2_distances#1)/ */ Context_sub_2_distances_1;
  outC_op_GetLRBGfromBGs_ProvidePositionReport_Pkg /* _L38=(ProvidePositionReport_Pkg::op_GetLRBGfromBGs)/ */ Context_op_GetLRBGfromBGs;
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
  trainPosition_T_TrainPosition_Types_Pck /* _L2/ */ _L2;
  positionedBGs_T_TrainPosition_Types_Pck /* _L1/ */ _L1;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L13/ */ _L13;
  kcg_bool /* _L14/ */ _L14;
  kcg_bool /* _L15/ */ _L15;
  kcg_bool /* _L16/ */ _L16;
  kcg_bool /* _L18/ */ _L18;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L19/ */ _L19;
  kcg_int32 /* _L20/ */ _L20;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L31/ */ _L31;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L32/ */ _L32;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L33/ */ _L33;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L37/ */ _L37;
  positionedBG_T_TrainPosition_Types_Pck /* _L39/ */ _L39;
  kcg_bool /* _L38/ */ _L38;
} outC_op_LRBG_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::op_LRBG/ */
extern void op_LRBG_ProvidePositionReport_Pkg(
  /* posBGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* trainPos/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPos,
  outC_op_LRBG_ProvidePositionReport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void op_LRBG_reset_ProvidePositionReport_Pkg(
  outC_op_LRBG_ProvidePositionReport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void op_LRBG_init_ProvidePositionReport_Pkg(
  outC_op_LRBG_ProvidePositionReport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: ProvidePositionReport_Pkg::op_LRBG/
  @1: (math::Abs#1)
*/

#endif /* _op_LRBG_ProvidePositionReport_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** op_LRBG_ProvidePositionReport_Pkg.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

