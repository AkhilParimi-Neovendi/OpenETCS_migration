/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _Build_Packet0_ProvidePositionReport_Pkg_H_
#define _Build_Packet0_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "vOdometry2Extern_RadioSupport_Pkg.h"
#include "convert2LRBG_ProvidePositionReport_Pkg.h"
#include "scaleInternalType_ProvidePositionReport_Pkg.h"
#include "op_DOUBTUNDER_ProvidePositionReport_Pkg.h"
#include "op_LRBG_ProvidePositionReport_Pkg.h"
#include "CalculateSafeTrainLength_ProvidePositionReport_Pkg.h"
#include "op_DOUBTOVER_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Position_Report_TrainToTrack /* packet0/ */ packet0;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  ModeLevel2PositionReport_T_ProvidePositionReport_Pkg /* modeLevelStatus/ */ mem_modeLevelStatus;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_scaleInternalType_ProvidePositionReport_Pkg /* _L35=(ProvidePositionReport_Pkg::scaleInternalType)/ */ Context_scaleInternalType;
  outC_op_LRBG_ProvidePositionReport_Pkg /* _L22=(ProvidePositionReport_Pkg::op_LRBG#1)/ */ Context_op_LRBG_1;
  outC_scaleInternalType_ProvidePositionReport_Pkg /* _L36=(ProvidePositionReport_Pkg::scaleInternalType#1)/ */ Context_scaleInternalType_1;
  outC_op_DOUBTUNDER_ProvidePositionReport_Pkg /* _L23=(ProvidePositionReport_Pkg::op_DOUBTUNDER#1)/ */ Context_op_DOUBTUNDER_1;
  outC_scaleInternalType_ProvidePositionReport_Pkg /* _L37=(ProvidePositionReport_Pkg::scaleInternalType#2)/ */ Context_scaleInternalType_2;
  outC_CalculateSafeTrainLength_ProvidePositionReport_Pkg /* _L14=(ProvidePositionReport_Pkg::CalculateSafeTrainLength#1)/ */ Context_CalculateSafeTrainLength_1;
  outC_scaleInternalType_ProvidePositionReport_Pkg /* _L38=(ProvidePositionReport_Pkg::scaleInternalType#3)/ */ Context_scaleInternalType_3;
  outC_op_DOUBTOVER_ProvidePositionReport_Pkg /* _L6=(ProvidePositionReport_Pkg::op_DOUBTOVER#1)/ */ Context_op_DOUBTOVER_1;
  outC_convert2LRBG_ProvidePositionReport_Pkg /* _L40=(ProvidePositionReport_Pkg::convert2LRBG#1)/ */ Context_convert2LRBG_1;
  outC_vOdometry2Extern_RadioSupport_Pkg /* _L41=(RadioSupport_Pkg::vOdometry2Extern#1)/ */ Context_vOdometry2Extern_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  trainPosition_T_TrainPosition_Types_Pck /* _L27/ */ _L27;
  Q_DIRLRBG /* _L26/ */ _L26;
  NID_BG /* _L25/ */ _L25;
  NID_NTC /* _L24/ */ _L24;
  L_DOUBTUNDER /* _L23/ */ _L23;
  kcg_int64 /* _L22/ */ _L22;
  ModeLevel2PositionReport_T_ProvidePositionReport_Pkg /* _L21/ */ _L21;
  M_MODE /* _L20/ */ _L20;
  Q_SCALE /* _L19/ */ _L19;
  positionedBGs_T_TrainPosition_Types_Pck /* _L18/ */ _L18;
  positionedBG_T_TrainPosition_Types_Pck /* _L16/ */ _L16;
  L_TRAININT /* _L14/ */ _L14;
  kcg_int64 /* _L15/ */ _L15;
  Q_LENGTH /* _L13/ */ _L13;
  Q_DLRBG /* _L12/ */ _L12;
  Position_Report_TrainToTrack /* _L11/ */ _L11;
  odometry_T_Obu_BasicTypes_Pkg /* _L10/ */ _L10;
  M_LEVEL /* _L9/ */ _L9;
  TrainToTrackStatus_T_BG_Types_Pkg /* _L8/ */ _L8;
  trainProperties_T_TrainPosition_Types_Pck /* _L7/ */ _L7;
  L_DOUBTOVER /* _L6/ */ _L6;
  OdometrySpeeds_T_Obu_BasicTypes_Pkg /* _L4/ */ _L4;
  kcg_int64 /* _L3/ */ _L3;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L2/ */ _L2;
  Q_DIRTRAIN /* _L1/ */ _L1;
  kcg_int64 /* _L35/ */ _L35;
  kcg_int64 /* _L36/ */ _L36;
  kcg_int64 /* _L37/ */ _L37;
  kcg_int64 /* _L38/ */ _L38;
  NID_C /* _L39/ */ _L39;
  NID_LRBG /* _L40/ */ _L40;
  V_TRAIN /* _L41/ */ _L41;
} outC_Build_Packet0_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::Build_Packet0/ */
extern void Build_Packet0_ProvidePositionReport_Pkg(
  /* posBGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* modeLevelStatus/ */
  ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *modeLevelStatus,
  /* odometry/ */
  odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* train2trackStatus/ */
  TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  /* trainProps/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* trainPos/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPos,
  outC_Build_Packet0_ProvidePositionReport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Build_Packet0_reset_ProvidePositionReport_Pkg(
  outC_Build_Packet0_ProvidePositionReport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Build_Packet0_init_ProvidePositionReport_Pkg(
  outC_Build_Packet0_ProvidePositionReport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  ModeLevel2PositionReport_T_ProvidePositionReport_Pkg /* modeLevelStatus/ */ Context_mem_modeLevelStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
} SV_Build_Packet0_ProvidePositionReport_Pkg;

extern void kcg_save_SV_Build_Packet0_ProvidePositionReport_Pkg(
  SV_Build_Packet0_ProvidePositionReport_Pkg *SV,
  outC_Build_Packet0_ProvidePositionReport_Pkg *outC);
extern void kcg_load_SV_Build_Packet0_ProvidePositionReport_Pkg(
  outC_Build_Packet0_ProvidePositionReport_Pkg *outC,
  SV_Build_Packet0_ProvidePositionReport_Pkg *SV);



#endif /* _Build_Packet0_ProvidePositionReport_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Build_Packet0_ProvidePositionReport_Pkg.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

