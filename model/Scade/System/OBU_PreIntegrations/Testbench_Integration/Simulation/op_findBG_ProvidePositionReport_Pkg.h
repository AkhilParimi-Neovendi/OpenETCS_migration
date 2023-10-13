/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _op_findBG_ProvidePositionReport_Pkg_H_
#define _op_findBG_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* cond/ */ cond;
  kcg_bool /* fd/ */ fd;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L1/ */ _L1;
  positionedBG_T_TrainPosition_Types_Pck /* _L2/ */ _L2;
  NID_BG /* _L3/ */ _L3;
  NID_BG /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
} outC_op_findBG_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::op_findBG/ */
extern void op_findBG_ProvidePositionReport_Pkg(
  /* acc/ */
  kcg_bool acc,
  /* Input_BG/ */
  positionedBG_T_TrainPosition_Types_Pck *Input_BG,
  /* Input_BG_IDToCheck/ */
  NID_BG Input_BG_IDToCheck,
  outC_op_findBG_ProvidePositionReport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void op_findBG_reset_ProvidePositionReport_Pkg(
  outC_op_findBG_ProvidePositionReport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void op_findBG_init_ProvidePositionReport_Pkg(
  outC_op_findBG_ProvidePositionReport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _op_findBG_ProvidePositionReport_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** op_findBG_ProvidePositionReport_Pkg.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

