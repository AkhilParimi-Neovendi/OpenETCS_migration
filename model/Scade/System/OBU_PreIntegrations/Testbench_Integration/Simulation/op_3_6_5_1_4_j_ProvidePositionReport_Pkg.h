/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _op_3_6_5_1_4_j_ProvidePositionReport_Pkg_H_
#define _op_3_6_5_1_4_j_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* trigger/ */ trigger;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* LRBG/ */ mem_LRBG;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* _L1/ */ _L1;
  Q_LINK /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  Q_LINK /* _L4/ */ _L4;
  NID_BG /* _L5/ */ _L5;
  infoFromLinking_T_TrainPosition_Types_Pck /* _L6/ */ _L6;
  LinkedBG_T_BG_Types_Pkg /* _L7/ */ _L7;
  NID_BG /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L14/ */ _L14;
  kcg_bool /* _L16/ */ _L16;
  kcg_bool /* _L17/ */ _L17;
  kcg_bool /* _L18/ */ _L18;
  trainPosition_T_TrainPosition_Types_Pck /* _L19/ */ _L19;
  kcg_bool /* _L20/ */ _L20;
  positionedBG_T_TrainPosition_Types_Pck /* _L21/ */ _L21;
  NID_BG /* _L22/ */ _L22;
  NID_BG /* _L23/ */ _L23;
  kcg_bool /* _L24/ */ _L24;
  kcg_bool /* _L25/ */ _L25;
} outC_op_3_6_5_1_4_j_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::op_3_6_5_1_4_j/ */
extern void op_3_6_5_1_4_j_ProvidePositionReport_Pkg(
  /* LRBG/ */
  positionedBG_T_TrainPosition_Types_Pck *LRBG,
  /* trainPos/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPos,
  outC_op_3_6_5_1_4_j_ProvidePositionReport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void op_3_6_5_1_4_j_reset_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_j_ProvidePositionReport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void op_3_6_5_1_4_j_init_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_j_ProvidePositionReport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* LRBG/ */ Context_mem_LRBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
} SV_op_3_6_5_1_4_j_ProvidePositionReport_Pkg;

extern void kcg_save_SV_op_3_6_5_1_4_j_ProvidePositionReport_Pkg(
  SV_op_3_6_5_1_4_j_ProvidePositionReport_Pkg *SV,
  outC_op_3_6_5_1_4_j_ProvidePositionReport_Pkg *outC);
extern void kcg_load_SV_op_3_6_5_1_4_j_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_j_ProvidePositionReport_Pkg *outC,
  SV_op_3_6_5_1_4_j_ProvidePositionReport_Pkg *SV);



#endif /* _op_3_6_5_1_4_j_ProvidePositionReport_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** op_3_6_5_1_4_j_ProvidePositionReport_Pkg.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

