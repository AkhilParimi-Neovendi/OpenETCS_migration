/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _SinglePosReport2_9_ProvidePositionReport_Pkg_H_
#define _SinglePosReport2_9_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "Build_SinglePosReport_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Build_SinglePosReport_ProvidePositionReport_Pkg /* _L4=(ProvidePositionReport_Pkg::Build_SinglePosReport#3)/ */ Context_Build_SinglePosReport_3;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ErrorMessage_T_ProvidePositionReport_Pkg /* _L2/ */ _L2;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* _L4/ */ _L4;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* _L5/ */ _L5;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* _L6/ */ _L6;
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg /* _L7/ */ _L7;
  PT5_TrainRunningNumber_Packet_TrainTypes_Pkg /* _L8/ */ _L8;
  PT5_TrainRunningNumber_Packet_TrainTypes_Pkg /* _L9/ */ _L9;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* _L10/ */ _L10;
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg /* _L11/ */ _L11;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* _L12/ */ _L12;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* _L13/ */ _L13;
  kcg_bool /* _L14/ */ _L14;
  trainProperties_T_TrainPosition_Types_Pck /* _L23/ */ _L23;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* _L24/ */ _L24;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* _L25/ */ _L25;
  T_TRAIN /* _L26/ */ _L26;
} outC_SinglePosReport2_9_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::SinglePosReport2_9/ */
extern void SinglePosReport2_9_ProvidePositionReport_Pkg(
  /* errMessage/ */
  ErrorMessage_T_ProvidePositionReport_Pkg *errMessage,
  /* trainProps/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* in_packet0/ */
  PT0_PositionReport_T_Packet_TrainTypes_Pkg *in_packet0,
  /* in_packet1/ */
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *in_packet1,
  /* t_train/ */
  T_TRAIN t_train,
  outC_SinglePosReport2_9_ProvidePositionReport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SinglePosReport2_9_reset_ProvidePositionReport_Pkg(
  outC_SinglePosReport2_9_ProvidePositionReport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SinglePosReport2_9_init_ProvidePositionReport_Pkg(
  outC_SinglePosReport2_9_ProvidePositionReport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _SinglePosReport2_9_ProvidePositionReport_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SinglePosReport2_9_ProvidePositionReport_Pkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

