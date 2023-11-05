/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _Build_Packet1_ProvidePositionReport_Pkg_H_
#define _Build_Packet1_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "op_cond_3_4_2_3_3_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* packet1/ */ packet1;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_op_cond_3_4_2_3_3_ProvidePositionReport_Pkg /* _L3=(ProvidePositionReport_Pkg::op_cond_3_4_2_3_3#1)/ */ Context_op_cond_3_4_2_3_3_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1:else:else: */ else_clock_else_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Q_DIRTRAIN /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  Q_DLRBG /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  Q_DIRLRBG /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  Q_DLRBG /* IfBlock1:else:else:then:_L1/ */ _L1_then_else_else_IfBlock1;
  Q_DIRLRBG /* IfBlock1:else:else:then:_L2/ */ _L2_then_else_else_IfBlock1;
  Q_DIRTRAIN /* IfBlock1:else:else:then:_L3/ */ _L3_then_else_else_IfBlock1;
  Q_DLRBG /* IfBlock1:else:then:_L3/ */ _L3_then_else_IfBlock1;
  Q_DIRTRAIN /* IfBlock1:else:then:_L2/ */ _L2_then_else_IfBlock1;
  Q_DIRLRBG /* IfBlock1:else:then:_L1/ */ _L1_then_else_IfBlock1;
  Q_DIRTRAIN /* in_dirtrain/ */ in_dirtrain;
  Q_DLRBG /* in_dlrbg/ */ in_dlrbg;
  BG_Orientation_T_ProvidePositionReport_Pkg /* dirLRBG/ */ dirLRBG;
  Q_DIRLRBG /* in_dirlrbg/ */ in_dirlrbg;
  kcg_bool /* cond_3_4_2_3_3_4/ */ cond_3_4_2_3_3_4;
  kcg_bool /* cond_3_4_2_3_3_3/ */ cond_3_4_2_3_3_3;
  kcg_bool /* cond_3_4_2_3_3_2/ */ cond_3_4_2_3_3_2;
  trainPosition_T_TrainPosition_Types_Pck /* _L35/ */ _L35;
  Position_Report_based_on_two_balise_groups_TrainToTrack /* _L34/ */ _L34;
  Q_DIRTRAIN /* _L33/ */ _L33;
  kcg_int32 /* _L14/ */ _L14;
  kcg_int32 /* _L15/ */ _L15;
  Q_SCALE /* _L16/ */ _L16;
  kcg_int32 /* _L17/ */ _L17;
  kcg_int32 /* _L18/ */ _L18;
  Q_DIRLRBG /* _L19/ */ _L19;
  Q_DLRBG /* _L20/ */ _L20;
  kcg_int32 /* _L21/ */ _L21;
  kcg_int32 /* _L22/ */ _L22;
  Q_LENGTH /* _L23/ */ _L23;
  kcg_int32 /* _L24/ */ _L24;
  kcg_int32 /* _L25/ */ _L25;
  Q_DIRTRAIN /* _L26/ */ _L26;
  M_MODE /* _L27/ */ _L27;
  M_LEVEL /* _L28/ */ _L28;
  kcg_int32 /* _L29/ */ _L29;
  Q_DIRTRAIN /* _L12/ */ _L12;
  Q_DLRBG /* _L7/ */ _L7;
  kcg_int32 /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  Q_DIRLRBG /* _L1/ */ _L1;
  Position_Report_TrainToTrack /* _L39/ */ _L39;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* _L40/ */ _L40;
  kcg_bool /* _L41/ */ _L41;
  Q_DIRLRBG /* _L42/ */ _L42;
} outC_Build_Packet1_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::Build_Packet1/ */
extern void Build_Packet1_ProvidePositionReport_Pkg(
  /* packet0/ */
  Position_Report_TrainToTrack *packet0,
  /* prvDirTrain/ */
  Q_DIRTRAIN prvDirTrain,
  /* trainPos/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPos,
  outC_Build_Packet1_ProvidePositionReport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Build_Packet1_reset_ProvidePositionReport_Pkg(
  outC_Build_Packet1_ProvidePositionReport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Build_Packet1_init_ProvidePositionReport_Pkg(
  outC_Build_Packet1_ProvidePositionReport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Build_Packet1_ProvidePositionReport_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Build_Packet1_ProvidePositionReport_Pkg.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

