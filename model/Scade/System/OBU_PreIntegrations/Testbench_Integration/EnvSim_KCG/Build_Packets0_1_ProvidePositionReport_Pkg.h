/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _Build_Packets0_1_ProvidePositionReport_Pkg_H_
#define _Build_Packets0_1_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "Activate_Packet0_ProvidePositionReport_Pkg.h"
#include "Build_Packet1_ProvidePositionReport_Pkg.h"
#include "Build_Packet0_ProvidePositionReport_Pkg.h"
#include "DeterminePacketValidity_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* packet0/ */ packet0;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* packet1/ */ packet1;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* _L21/ */ _L21;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* _L22/ */ _L22;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Activate_Packet0_ProvidePositionReport_Pkg /* _L22=(ProvidePositionReport_Pkg::Activate_Packet0#3)/ */ Context_Activate_Packet0_3;
  outC_Build_Packet1_ProvidePositionReport_Pkg /* _L21=(ProvidePositionReport_Pkg::Build_Packet1#2)/ */ Context_Build_Packet1_2;
  outC_Build_Packet0_ProvidePositionReport_Pkg /* _L20=(ProvidePositionReport_Pkg::Build_Packet0#2)/ */ Context_Build_Packet0_2;
  outC_DeterminePacketValidity_ProvidePositionReport_Pkg /* _L19=(ProvidePositionReport_Pkg::DeterminePacketValidity#2)/ */ Context_DeterminePacketValidity_2;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  kcg_bool every1;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  trainProperties_T_TrainPosition_Types_Pck /* _L14/ */ _L14;
  ModeLevel2PositionReport_T_ProvidePositionReport_Pkg /* _L11/ */ _L11;
  TrainToTrackStatus_T_BG_Types_Pkg /* _L10/ */ _L10;
  Q_DIRTRAIN /* _L7/ */ _L7;
  positionedBGs_T_TrainPosition_Types_Pck /* _L5/ */ _L5;
  odometry_T_Obu_BasicTypes_Pkg /* _L4/ */ _L4;
  trainPosition_T_TrainPosition_Types_Pck /* _L1/ */ _L1;
  kcg_bool /* _L19/ */ _L19;
  Position_Report_TrainToTrack /* _L20/ */ _L20;
  kcg_bool /* _L23/ */ _L23;
  positionedBG_T_TrainPosition_Types_Pck /* _L24/ */ _L24;
} outC_Build_Packets0_1_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::Build_Packets0_1/ */
extern void Build_Packets0_1_ProvidePositionReport_Pkg(
  /* trainProps/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* posBGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* modeLevelStatus/ */
  ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *modeLevelStatus,
  /* odometry/ */
  odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* trainPos/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* train2trackStatus/ */
  TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  /* prvDirTrain/ */
  Q_DIRTRAIN prvDirTrain,
  outC_Build_Packets0_1_ProvidePositionReport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Build_Packets0_1_reset_ProvidePositionReport_Pkg(
  outC_Build_Packets0_1_ProvidePositionReport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Build_Packets0_1_init_ProvidePositionReport_Pkg(
  outC_Build_Packets0_1_ProvidePositionReport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Build_Packets0_1_ProvidePositionReport_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Build_Packets0_1_ProvidePositionReport_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

