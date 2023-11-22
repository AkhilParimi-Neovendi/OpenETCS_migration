/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _Supervise_PosRepParam_ProvidePositionReport_Pkg_H_
#define _Supervise_PosRepParam_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "Supervision_M_Loc_ProvidePositionReport_Pkg.h"
#include "Supervision_D_Cycloc_ProvidePositionReport_Pkg.h"
#include "Supervision_N_Iter_ProvidePositionReport_Pkg.h"
#include "Supervision_T_Cycloc_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* trigger/ */ trigger;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Supervision_N_Iter_ProvidePositionReport_Pkg /* _L12=(ProvidePositionReport_Pkg::Supervision_N_Iter#1)/ */ Context_Supervision_N_Iter_1;
  outC_Supervision_D_Cycloc_ProvidePositionReport_Pkg /* _L13=(ProvidePositionReport_Pkg::Supervision_D_Cycloc#1)/ */ Context_Supervision_D_Cycloc_1;
  outC_Supervision_M_Loc_ProvidePositionReport_Pkg /* _L14=(ProvidePositionReport_Pkg::Supervision_M_Loc#1)/ */ Context_Supervision_M_Loc_1;
  outC_Supervision_T_Cycloc_ProvidePositionReport_Pkg /* _L11=(ProvidePositionReport_Pkg::Supervision_T_Cycloc#1)/ */ Context_Supervision_T_Cycloc_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  positionedBGs_T_TrainPosition_Types_Pck /* _L5/ */ _L5;
  trainPosition_T_TrainPosition_Types_Pck /* _L4/ */ _L4;
  SystemTime_T_ProvidePositionReport_Pkg /* _L3/ */ _L3;
  kcg_bool /* _L2/ */ _L2;
  P58_PositionReportParameters_T_Packet_Types_Pkg /* _L1/ */ _L1;
  IterPacket58List_T_Packet_Types_Pkg /* _L6/ */ _L6;
  N_ITER /* _L7/ */ _L7;
  D_CYCLOC /* _L8/ */ _L8;
  T_CYCLOC /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L12/ */ _L12;
  kcg_bool /* _L13/ */ _L13;
  kcg_bool /* _L14/ */ _L14;
  M_LOC /* _L15/ */ _L15;
  kcg_bool /* _L16/ */ _L16;
  kcg_bool /* _L17/ */ _L17;
  kcg_int32 /* _L18/ */ _L18;
} outC_Supervise_PosRepParam_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::Supervise_PosRepParam/ */
extern void Supervise_PosRepParam_ProvidePositionReport_Pkg(
  /* posRepParam/ */
  P58_PositionReportParameters_T_Packet_Types_Pkg *posRepParam,
  /* present/ */
  kcg_bool present,
  /* systemTime/ */
  SystemTime_T_ProvidePositionReport_Pkg systemTime,
  /* trainPos/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* posBGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  outC_Supervise_PosRepParam_ProvidePositionReport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Supervise_PosRepParam_reset_ProvidePositionReport_Pkg(
  outC_Supervise_PosRepParam_ProvidePositionReport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Supervise_PosRepParam_init_ProvidePositionReport_Pkg(
  outC_Supervise_PosRepParam_ProvidePositionReport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Supervise_PosRepParam_ProvidePositionReport_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Supervise_PosRepParam_ProvidePositionReport_Pkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

