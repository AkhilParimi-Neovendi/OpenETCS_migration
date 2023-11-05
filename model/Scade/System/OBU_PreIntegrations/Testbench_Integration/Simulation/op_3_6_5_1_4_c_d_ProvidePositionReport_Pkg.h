/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg_H_
#define _op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* trigger/ */ trigger;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  TrainToTrackStatus_T_BG_Types_Pkg /* train2trackStatus/ */ mem_train2trackStatus;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  TrainToTrackStatus_T_BG_Types_Pkg /* _L1/ */ _L1;
  Q_LENGTH /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  Q_LENGTH /* _L5/ */ _L5;
  Q_LENGTH /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  TrainToTrackStatus_T_BG_Types_Pkg /* _L8/ */ _L8;
  Q_LENGTH /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
} outC_op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::op_3_6_5_1_4_c_d/ */
extern void op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg(
  /* train2trackStatus/ */
  TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  outC_op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void op_3_6_5_1_4_c_d_reset_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void op_3_6_5_1_4_c_d_init_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  TrainToTrackStatus_T_BG_Types_Pkg /* train2trackStatus/ */ Context_mem_train2trackStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
} SV_op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg;

extern void kcg_save_SV_op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg(
  SV_op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg *SV,
  outC_op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg *outC);
extern void kcg_load_SV_op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg *outC,
  SV_op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg *SV);



#endif /* _op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

