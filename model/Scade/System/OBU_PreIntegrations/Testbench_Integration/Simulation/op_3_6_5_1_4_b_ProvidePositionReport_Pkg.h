/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _op_3_6_5_1_4_b_ProvidePositionReport_Pkg_H_
#define _op_3_6_5_1_4_b_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* trigger/ */ trigger;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  ModeLevel2PositionReport_T_ProvidePositionReport_Pkg /* modeLevelStatus/ */ mem_modeLevelStatus;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ModeLevel2PositionReport_T_ProvidePositionReport_Pkg /* _L1/ */ _L1;
  M_MODE /* _L2/ */ _L2;
  ModeLevel2PositionReport_T_ProvidePositionReport_Pkg /* _L5/ */ _L5;
  M_MODE /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
} outC_op_3_6_5_1_4_b_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::op_3_6_5_1_4_b/ */
extern void op_3_6_5_1_4_b_ProvidePositionReport_Pkg(
  /* modeLevelStatus/ */
  ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *modeLevelStatus,
  outC_op_3_6_5_1_4_b_ProvidePositionReport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void op_3_6_5_1_4_b_reset_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_b_ProvidePositionReport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void op_3_6_5_1_4_b_init_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_b_ProvidePositionReport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  ModeLevel2PositionReport_T_ProvidePositionReport_Pkg /* modeLevelStatus/ */ Context_mem_modeLevelStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
} SV_op_3_6_5_1_4_b_ProvidePositionReport_Pkg;

extern void kcg_save_SV_op_3_6_5_1_4_b_ProvidePositionReport_Pkg(
  SV_op_3_6_5_1_4_b_ProvidePositionReport_Pkg *SV,
  outC_op_3_6_5_1_4_b_ProvidePositionReport_Pkg *outC);
extern void kcg_load_SV_op_3_6_5_1_4_b_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_b_ProvidePositionReport_Pkg *outC,
  SV_op_3_6_5_1_4_b_ProvidePositionReport_Pkg *SV);



#endif /* _op_3_6_5_1_4_b_ProvidePositionReport_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** op_3_6_5_1_4_b_ProvidePositionReport_Pkg.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

