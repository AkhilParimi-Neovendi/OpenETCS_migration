/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _op_cond_3_4_2_3_3_ProvidePositionReport_Pkg_H_
#define _op_cond_3_4_2_3_3_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* nidPrvLrbg/ */ nidPrvLrbg;
  kcg_bool /* cond_3_4_2_3_3_2/ */ cond_3_4_2_3_3_2;
  kcg_bool /* cond_3_4_2_3_3_3/ */ cond_3_4_2_3_3_3;
  kcg_bool /* cond_3_4_2_3_3_4/ */ cond_3_4_2_3_3_4;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Q_DIRTRAIN /* _L4/ */ _L4;
  Position_Report_TrainToTrack /* _L3/ */ _L3;
  trainPosition_T_TrainPosition_Types_Pck /* _L2/ */ _L2;
  positionedBG_T_TrainPosition_Types_Pck /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_int32 /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  positionedBG_T_TrainPosition_Types_Pck /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L12/ */ _L12;
  Q_DIRTRAIN /* _L13/ */ _L13;
  kcg_bool /* _L14/ */ _L14;
  Q_DIRTRAIN /* _L15/ */ _L15;
  Q_DIRTRAIN /* _L16/ */ _L16;
  kcg_bool /* _L17/ */ _L17;
  kcg_bool /* _L18/ */ _L18;
  kcg_bool /* _L19/ */ _L19;
  kcg_bool /* _L20/ */ _L20;
  kcg_bool /* _L21/ */ _L21;
  kcg_bool /* _L22/ */ _L22;
  kcg_int32 /* _L23/ */ _L23;
  Q_DIRTRAIN /* _L24/ */ _L24;
  Q_DIRTRAIN /* _L42/ */ _L42;
  kcg_int32 /* _L43/ */ _L43;
  NID_BG /* _L44/ */ _L44;
  NID_BG /* _L45/ */ _L45;
} outC_op_cond_3_4_2_3_3_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::op_cond_3_4_2_3_3/ */
extern void op_cond_3_4_2_3_3_ProvidePositionReport_Pkg(
  /* posRep/ */
  Position_Report_TrainToTrack *posRep,
  /* trainPos/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* prvDirTrain/ */
  Q_DIRTRAIN prvDirTrain,
  outC_op_cond_3_4_2_3_3_ProvidePositionReport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void op_cond_3_4_2_3_3_reset_ProvidePositionReport_Pkg(
  outC_op_cond_3_4_2_3_3_ProvidePositionReport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void op_cond_3_4_2_3_3_init_ProvidePositionReport_Pkg(
  outC_op_cond_3_4_2_3_3_ProvidePositionReport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _op_cond_3_4_2_3_3_ProvidePositionReport_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** op_cond_3_4_2_3_3_ProvidePositionReport_Pkg.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

