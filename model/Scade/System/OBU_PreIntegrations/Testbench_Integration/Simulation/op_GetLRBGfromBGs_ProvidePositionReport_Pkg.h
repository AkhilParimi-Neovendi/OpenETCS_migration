/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _op_GetLRBGfromBGs_ProvidePositionReport_Pkg_H_
#define _op_GetLRBGfromBGs_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "op_findBG_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* found/ */ found;
  positionedBG_T_TrainPosition_Types_Pck /* lrbg/ */ lrbg;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_op_findBG_ProvidePositionReport_Pkg /* _L3=(ProvidePositionReport_Pkg::op_findBG#1)/ */ Context_op_findBG_1[41];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  trainPosition_T_TrainPosition_Types_Pck /* _L2/ */ _L2;
  positionedBGs_T_TrainPosition_Types_Pck /* _L1/ */ _L1;
  kcg_int32 /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  positionedBG_T_TrainPosition_Types_Pck /* _L7/ */ _L7;
  array_int32_41 /* _L8/ */ _L8;
  positionedBG_T_TrainPosition_Types_Pck /* _L9/ */ _L9;
  NID_BG /* _L13/ */ _L13;
  positionedBG_T_TrainPosition_Types_Pck /* _L14/ */ _L14;
  kcg_int32 /* _L15/ */ _L15;
  kcg_int32 /* _L16/ */ _L16;
} outC_op_GetLRBGfromBGs_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::op_GetLRBGfromBGs/ */
extern void op_GetLRBGfromBGs_ProvidePositionReport_Pkg(
  /* posBGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* trainPos/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPos,
  outC_op_GetLRBGfromBGs_ProvidePositionReport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void op_GetLRBGfromBGs_reset_ProvidePositionReport_Pkg(
  outC_op_GetLRBGfromBGs_ProvidePositionReport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void op_GetLRBGfromBGs_init_ProvidePositionReport_Pkg(
  outC_op_GetLRBGfromBGs_ProvidePositionReport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _op_GetLRBGfromBGs_ProvidePositionReport_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** op_GetLRBGfromBGs_ProvidePositionReport_Pkg.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

