/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _Supervise_Events_ProvidePositionReport_Pkg_H_
#define _Supervise_Events_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg.h"
#include "op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg.h"
#include "op_3_6_5_1_4_e_h_k_ProvidePositionReport_Pkg.h"
#include "op_3_6_5_1_4_b_ProvidePositionReport_Pkg.h"
#include "op_3_6_5_1_4_f_g_ProvidePositionReport_Pkg.h"
#include "op_GetLRBGfromBGs_ProvidePositionReport_Pkg.h"
#include "op_3_6_5_1_4_j_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* result/ */ result;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_op_3_6_5_1_4_b_ProvidePositionReport_Pkg /* _L4=(ProvidePositionReport_Pkg::op_3_6_5_1_4_b#1)/ */ Context_op_3_6_5_1_4_b_1;
  outC_op_3_6_5_1_4_f_g_ProvidePositionReport_Pkg /* _L1=(ProvidePositionReport_Pkg::op_3_6_5_1_4_f_g#1)/ */ Context_op_3_6_5_1_4_f_g_1;
  outC_op_3_6_5_1_4_e_h_k_ProvidePositionReport_Pkg /* _L6=(ProvidePositionReport_Pkg::op_3_6_5_1_4_e_h_k#1)/ */ Context_op_3_6_5_1_4_e_h_k_1;
  outC_op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg /* _L9=(ProvidePositionReport_Pkg::op_3_6_5_1_4_c_d#1)/ */ Context_op_3_6_5_1_4_c_d_1;
  outC_op_3_6_5_1_4_j_ProvidePositionReport_Pkg /* _L12=(ProvidePositionReport_Pkg::op_3_6_5_1_4_j#1)/ */ Context_op_3_6_5_1_4_j_1;
  outC_op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg /* _L13=(ProvidePositionReport_Pkg::op_3_6_5_1_4_a_i#1)/ */ Context_op_3_6_5_1_4_a_i_1;
  outC_op_GetLRBGfromBGs_ProvidePositionReport_Pkg /* _L15=(ProvidePositionReport_Pkg::op_GetLRBGfromBGs#1)/ */ Context_op_GetLRBGfromBGs_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L15/ */ _L15;
  positionedBG_T_TrainPosition_Types_Pck /* _L16/ */ _L16;
  LocationBasedEvents_T_ProvidePositionReport_Pkg /* _L14/ */ _L14;
  kcg_bool /* _L13/ */ _L13;
  kcg_bool /* _L12/ */ _L12;
  positionedBGs_T_TrainPosition_Types_Pck /* _L11/ */ _L11;
  odometry_T_Obu_BasicTypes_Pkg /* _L10/ */ _L10;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L8/ */ _L8;
  TrainToTrackStatus_T_BG_Types_Pkg /* _L7/ */ _L7;
  kcg_bool /* _L6/ */ _L6;
  trainPosition_T_TrainPosition_Types_Pck /* _L5/ */ _L5;
  kcg_bool /* _L4/ */ _L4;
  RBC_Communication_T_ProvidePositionReport_Pkg /* _L3/ */ _L3;
  ModeLevel2PositionReport_T_ProvidePositionReport_Pkg /* _L2/ */ _L2;
  kcg_bool /* _L1/ */ _L1;
} outC_Supervise_Events_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::Supervise_Events/ */
extern void Supervise_Events_ProvidePositionReport_Pkg(
  /* posBGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* trainPos/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* modeLevelStatus/ */
  ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *modeLevelStatus,
  /* odometry/ */
  odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* train2trackStatus/ */
  TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  /* rbcComm/ */
  RBC_Communication_T_ProvidePositionReport_Pkg *rbcComm,
  /* trackInfo/ */
  LocationBasedEvents_T_ProvidePositionReport_Pkg *trackInfo,
  outC_Supervise_Events_ProvidePositionReport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Supervise_Events_reset_ProvidePositionReport_Pkg(
  outC_Supervise_Events_ProvidePositionReport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Supervise_Events_init_ProvidePositionReport_Pkg(
  outC_Supervise_Events_ProvidePositionReport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Supervise_Events_ProvidePositionReport_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Supervise_Events_ProvidePositionReport_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

