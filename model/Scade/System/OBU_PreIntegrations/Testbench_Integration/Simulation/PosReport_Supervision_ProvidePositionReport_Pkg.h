/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _PosReport_Supervision_ProvidePositionReport_Pkg_H_
#define _PosReport_Supervision_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "Supervise_Events_ProvidePositionReport_Pkg.h"
#include "Supervise_PosRepParam_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* trigger/ */ trigger;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Supervise_Events_ProvidePositionReport_Pkg /* _L69=(ProvidePositionReport_Pkg::Supervise_Events#1)/ */ Context_Supervise_Events_1;
  outC_Supervise_PosRepParam_ProvidePositionReport_Pkg /* _L52=(ProvidePositionReport_Pkg::Supervise_PosRepParam)/ */ Context_Supervise_PosRepParam;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P58_PositionReportParameters_T_Packet_Types_Pkg /* _L1/ */ _L1;
  trainPosition_T_TrainPosition_Types_Pck /* _L35/ */ _L35;
  positionedBGs_T_TrainPosition_Types_Pck /* _L36/ */ _L36;
  kcg_bool /* _L43/ */ _L43;
  SystemTime_T_ProvidePositionReport_Pkg /* _L44/ */ _L44;
  kcg_bool /* _L52/ */ _L52;
  kcg_bool /* _L69/ */ _L69;
  kcg_bool /* _L70/ */ _L70;
  ModeLevel2PositionReport_T_ProvidePositionReport_Pkg /* _L76/ */ _L76;
  odometry_T_Obu_BasicTypes_Pkg /* _L77/ */ _L77;
  TrainToTrackStatus_T_BG_Types_Pkg /* _L78/ */ _L78;
  RBC_Communication_T_ProvidePositionReport_Pkg /* _L79/ */ _L79;
  LocationBasedEvents_T_ProvidePositionReport_Pkg /* _L80/ */ _L80;
  kcg_bool /* _L81/ */ _L81;
  kcg_bool /* _L82/ */ _L82;
} outC_PosReport_Supervision_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::PosReport_Supervision/ */
extern void PosReport_Supervision_ProvidePositionReport_Pkg(
  /* present/ */
  kcg_bool present,
  /* posRepParam/ */
  P58_PositionReportParameters_T_Packet_Types_Pkg *posRepParam,
  /* systemTime/ */
  SystemTime_T_ProvidePositionReport_Pkg systemTime,
  /* rbcComm/ */
  RBC_Communication_T_ProvidePositionReport_Pkg *rbcComm,
  /* trackInfo/ */
  LocationBasedEvents_T_ProvidePositionReport_Pkg *trackInfo,
  /* train2trackStatus/ */
  TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  /* trainPos/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* odometry/ */
  odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* modeLevelStatus/ */
  ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *modeLevelStatus,
  /* posBGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  outC_PosReport_Supervision_ProvidePositionReport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void PosReport_Supervision_reset_ProvidePositionReport_Pkg(
  outC_PosReport_Supervision_ProvidePositionReport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void PosReport_Supervision_init_ProvidePositionReport_Pkg(
  outC_PosReport_Supervision_ProvidePositionReport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_Supervise_PosRepParam_ProvidePositionReport_Pkg Context_Supervise_PosRepParam;
  SV_Supervise_Events_ProvidePositionReport_Pkg Context_Supervise_Events_1;
} SV_PosReport_Supervision_ProvidePositionReport_Pkg;

extern void kcg_save_SV_PosReport_Supervision_ProvidePositionReport_Pkg(
  SV_PosReport_Supervision_ProvidePositionReport_Pkg *SV,
  outC_PosReport_Supervision_ProvidePositionReport_Pkg *outC);
extern void kcg_load_SV_PosReport_Supervision_ProvidePositionReport_Pkg(
  outC_PosReport_Supervision_ProvidePositionReport_Pkg *outC,
  SV_PosReport_Supervision_ProvidePositionReport_Pkg *SV);



#endif /* _PosReport_Supervision_ProvidePositionReport_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** PosReport_Supervision_ProvidePositionReport_Pkg.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

