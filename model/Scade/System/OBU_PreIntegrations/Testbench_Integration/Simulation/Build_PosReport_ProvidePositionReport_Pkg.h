/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _Build_PosReport_ProvidePositionReport_Pkg_H_
#define _Build_PosReport_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "SinglePosReport2_9_ProvidePositionReport_Pkg.h"
#include "IsError_ProvidePositionReport_Pkg.h"
#include "Build_SinglePosReport_ProvidePositionReport_Pkg.h"

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
  outC_SinglePosReport2_9_ProvidePositionReport_Pkg /* _=(ProvidePositionReport_Pkg::SinglePosReport2_9)/ */ Context_SinglePosReport2_9;
  outC_SinglePosReport2_9_ProvidePositionReport_Pkg /* _=(ProvidePositionReport_Pkg::SinglePosReport2_9#1)/ */ Context_SinglePosReport2_9_1;
  outC_SinglePosReport2_9_ProvidePositionReport_Pkg /* _=(ProvidePositionReport_Pkg::SinglePosReport2_9#2)/ */ Context_SinglePosReport2_9_2;
  outC_SinglePosReport2_9_ProvidePositionReport_Pkg /* _=(ProvidePositionReport_Pkg::SinglePosReport2_9#3)/ */ Context_SinglePosReport2_9_3;
  outC_SinglePosReport2_9_ProvidePositionReport_Pkg /* _=(ProvidePositionReport_Pkg::SinglePosReport2_9#4)/ */ Context_SinglePosReport2_9_4;
  outC_SinglePosReport2_9_ProvidePositionReport_Pkg /* _=(ProvidePositionReport_Pkg::SinglePosReport2_9#5)/ */ Context_SinglePosReport2_9_5;
  outC_SinglePosReport2_9_ProvidePositionReport_Pkg /* _=(ProvidePositionReport_Pkg::SinglePosReport2_9#6)/ */ Context_SinglePosReport2_9_6;
  outC_SinglePosReport2_9_ProvidePositionReport_Pkg /* _=(ProvidePositionReport_Pkg::SinglePosReport2_9#7)/ */ Context_SinglePosReport2_9_7;
  outC_IsError_ProvidePositionReport_Pkg /* _L58=(ProvidePositionReport_Pkg::IsError)/ */ Context_IsError[9];
  outC_Build_SinglePosReport_ProvidePositionReport_Pkg /* _L22=(ProvidePositionReport_Pkg::Build_SinglePosReport)/ */ Context_Build_SinglePosReport;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  _34_array /* _L10/ */ _L10;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* _L26/ */ _L26;
  PT5_TrainRunningNumber_Packet_TrainTypes_Pkg /* _L25/ */ _L25;
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg /* _L24/ */ _L24;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* _L23/ */ _L23;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* _L22/ */ _L22;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* _L28/ */ _L28;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* _L29/ */ _L29;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* _L30/ */ _L30;
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg /* _L31/ */ _L31;
  PT5_TrainRunningNumber_Packet_TrainTypes_Pkg /* _L32/ */ _L32;
  ErrorMessage_T_ProvidePositionReport_Pkg /* _L53/ */ _L53;
  kcg_bool /* _L56/ */ _L56;
  kcg_bool /* _L58/ */ _L58;
  ErrorMessage_T_ProvidePositionReport_Pkg /* _L84/ */ _L84;
  ErrorMessage_T_ProvidePositionReport_Pkg /* _L167/ */ _L167;
  ErrorMessage_T_ProvidePositionReport_Pkg /* _L168/ */ _L168;
  ErrorMessage_T_ProvidePositionReport_Pkg /* _L169/ */ _L169;
  ErrorMessage_T_ProvidePositionReport_Pkg /* _L170/ */ _L170;
  ErrorMessage_T_ProvidePositionReport_Pkg /* _L171/ */ _L171;
  ErrorMessage_T_ProvidePositionReport_Pkg /* _L172/ */ _L172;
  ErrorMessage_T_ProvidePositionReport_Pkg /* _L173/ */ _L173;
  trainProperties_T_TrainPosition_Types_Pck /* _L14/ */ _L14;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* _L176/ */ _L176;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* _L177/ */ _L177;
  T_TRAIN /* _L178/ */ _L178;
  kcg_bool /* _L179/ */ _L179;
  kcg_bool /* _L180/ */ _L180;
  kcg_bool /* _L181/ */ _L181;
} outC_Build_PosReport_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::Build_PosReport/ */
extern void Build_PosReport_ProvidePositionReport_Pkg(
  /* trainProps/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* in_packet0/ */
  PT0_PositionReport_T_Packet_TrainTypes_Pkg *in_packet0,
  /* in_packet1/ */
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *in_packet1,
  /* errorVector/ */
  _34_array *errorVector,
  /* t_train/ */
  T_TRAIN t_train,
  outC_Build_PosReport_ProvidePositionReport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Build_PosReport_reset_ProvidePositionReport_Pkg(
  outC_Build_PosReport_ProvidePositionReport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Build_PosReport_init_ProvidePositionReport_Pkg(
  outC_Build_PosReport_ProvidePositionReport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Build_PosReport_ProvidePositionReport_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Build_PosReport_ProvidePositionReport_Pkg.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

