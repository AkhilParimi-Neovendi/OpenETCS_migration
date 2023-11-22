/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _Build_SinglePosReport_ProvidePositionReport_Pkg_H_
#define _Build_SinglePosReport_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "Build_Packet5_ProvidePositionReport_Pkg.h"
#include "Build_Packet4_ProvidePositionReport_Pkg.h"
#include "Build_Header_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* posRepHeader/ */ posRepHeader;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* packet0/ */ packet0;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* packet1/ */ packet1;
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg /* packet4/ */ packet4;
  PT5_TrainRunningNumber_Packet_TrainTypes_Pkg /* packet5/ */ packet5;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Build_Header_ProvidePositionReport_Pkg /* _L10=(ProvidePositionReport_Pkg::Build_Header#1)/ */ Context_Build_Header_1;
  outC_Build_Packet5_ProvidePositionReport_Pkg /* _L17=(ProvidePositionReport_Pkg::Build_Packet5#1)/ */ Context_Build_Packet5_1;
  outC_Build_Packet4_ProvidePositionReport_Pkg /* _L15=(ProvidePositionReport_Pkg::Build_Packet4#1)/ */ Context_Build_Packet4_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ErrorMessage_T_ProvidePositionReport_Pkg /* _L9/ */ _L9;
  trainProperties_T_TrainPosition_Types_Pck /* _L1/ */ _L1;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* _L10/ */ _L10;
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg /* _L15/ */ _L15;
  kcg_bool /* _L16/ */ _L16;
  PT5_TrainRunningNumber_Packet_TrainTypes_Pkg /* _L17/ */ _L17;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* _L19/ */ _L19;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* _L20/ */ _L20;
  T_TRAIN /* _L21/ */ _L21;
} outC_Build_SinglePosReport_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::Build_SinglePosReport/ */
extern void Build_SinglePosReport_ProvidePositionReport_Pkg(
  /* trainProps/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* errorMsg/ */
  ErrorMessage_T_ProvidePositionReport_Pkg *errorMsg,
  /* in_packet0/ */
  PT0_PositionReport_T_Packet_TrainTypes_Pkg *in_packet0,
  /* in_packet1/ */
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *in_packet1,
  /* t_train/ */
  T_TRAIN t_train,
  outC_Build_SinglePosReport_ProvidePositionReport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Build_SinglePosReport_reset_ProvidePositionReport_Pkg(
  outC_Build_SinglePosReport_ProvidePositionReport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Build_SinglePosReport_init_ProvidePositionReport_Pkg(
  outC_Build_SinglePosReport_ProvidePositionReport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Build_SinglePosReport_ProvidePositionReport_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Build_SinglePosReport_ProvidePositionReport_Pkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

