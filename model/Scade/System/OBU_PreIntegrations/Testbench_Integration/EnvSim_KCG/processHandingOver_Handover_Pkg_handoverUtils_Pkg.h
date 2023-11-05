/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _processHandingOver_Handover_Pkg_handoverUtils_Pkg_H_
#define _processHandingOver_Handover_Pkg_handoverUtils_Pkg_H_

#include "kcg_types.h"
#include "EitherEdge_digital.h"
#include "changeoverSwitch_Handover_Pkg_handoverUtils_Pkg.h"
#include "determineSupervisingRBC_Handover_Pkg_handoverUtils_Pkg.h"
#include "locReachedOrPassed_BasicLocationFunctions_Pkg.h"
#include "splitInputData_Handover_Pkg_handoverUtils_Pkg.h"
#include "fishHandoverCmds_Handover_Pkg_handoverUtils_Pkg.h"
#include "radioStatusRouter_Handover_Pkg_handoverUtils_Pkg.h"
#include "mobileCtrlCmdRouter_out_Handover_Pkg_handoverUtils_Pkg.h"
#include "processRadioCtrlCmds_v2_Handover_Pkg_handoverUtils_Pkg.h"
#include "handOverSequencer_Handover_Pkg_handoverUtils_Pkg.h"
#include "scaledDLINK_2_dlink_BasicLocationFunctions_Pkg.h"
#include "NIDLRBG_2_nidC_nidBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "add_2_Distances_BasicLocationFunctions_Pkg.h"
#include "indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "sub_2_distances_BasicLocationFunctions_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  msgFromTrack_T_RCM_MsgTypes_Pkg /* sessionCmds_2_MoRC_1/ */ sessionCmds_2_MoRC_1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* sessionCmds_2_MoRC_2/ */ sessionCmds_2_MoRC_2;
  kcg_bool /* sendPositionReport_2_handingOverRBC/ */ sendPositionReport_2_handingOverRBC;
  kcg_bool /* sendPositionReport_2_acceptingRBC/ */ sendPositionReport_2_acceptingRBC;
  kcg_bool /* sendTrainData_2_acceptingRBC/ */ sendTrainData_2_acceptingRBC;
  kcg_bool /* bufferInformationFromAcceptingRBC/ */ bufferInformationFromAcceptingRBC;
  connection_ids_T_Handover_Pkg /* supervisingRBC/ */ supervisingRBC;
  kcg_bool /* useInformationFromAcceptingRBC/ */ useInformationFromAcceptingRBC;
  kcg_bool /* handingOverMobile_is_mobile_1/ */ handingOverMobile_is_mobile_1;
  kcg_bool /* trainPassesA_RBC_RBC_border_WithItsFrontEnd/ */ trainPassesA_RBC_RBC_border_WithItsFrontEnd;
  kcg_bool /* notReady/ */ notReady;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  p131_q_rbcTransitionOrder_T_Handover_Pkg /* @1/_L8/ */ _L8_Memory_1_struct;
  kcg_bool /* handoverInprogress/ */ handoverInprogress;
  kcg_bool /* useInformationFromAcceptingRBC_loc/ */ useInformationFromAcceptingRBC_loc;
  kcg_bool /* handoverFinished/ */ handoverFinished;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_determineSupervisingRBC_Handover_Pkg_handoverUtils_Pkg /* _L234=(Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC#1)/ */ Context_determineSupervisingRBC_1;
  outC_processRadioCtrlCmds_v2_Handover_Pkg_handoverUtils_Pkg /* _L244=(Handover_Pkg::handoverUtils_Pkg::processRadioCtrlCmds_v2#2)/ */ Context_processRadioCtrlCmds_v2_2;
  outC_processRadioCtrlCmds_v2_Handover_Pkg_handoverUtils_Pkg /* _L245=(Handover_Pkg::handoverUtils_Pkg::processRadioCtrlCmds_v2#1)/ */ Context_processRadioCtrlCmds_v2_1;
  outC_mobileCtrlCmdRouter_out_Handover_Pkg_handoverUtils_Pkg /* _L37=(Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out#1)/ */ Context_mobileCtrlCmdRouter_out_1;
  outC_EitherEdge_digital /* _L254=(digital::EitherEdge#1)/ */ Context_EitherEdge_1;
  outC_EitherEdge_digital /* _L255=(digital::EitherEdge#2)/ */ Context_EitherEdge_2;
  outC_handOverSequencer_Handover_Pkg_handoverUtils_Pkg /* _L89=(Handover_Pkg::handoverUtils_Pkg::handOverSequencer#1)/ */ Context_handOverSequencer_1;
  outC_locReachedOrPassed_BasicLocationFunctions_Pkg /* _L223=(BasicLocationFunctions_Pkg::locReachedOrPassed#2)/ */ Context_locReachedOrPassed_2;
  outC_sub_2_distances_BasicLocationFunctions_Pkg /* _L213=(BasicLocationFunctions_Pkg::sub_2_distances#1)/ */ Context_sub_2_distances_1;
  outC_locReachedOrPassed_BasicLocationFunctions_Pkg /* _L222=(BasicLocationFunctions_Pkg::locReachedOrPassed#1)/ */ Context_locReachedOrPassed_1;
  outC_add_2_Distances_BasicLocationFunctions_Pkg /* _L212=(BasicLocationFunctions_Pkg::add_2_Distances#2)/ */ Context_add_2_Distances_2;
  outC_add_2_Distances_BasicLocationFunctions_Pkg /* _L197=(BasicLocationFunctions_Pkg::add_2_Distances#1)/ */ Context_add_2_Distances_1;
  outC_scaledDLINK_2_dlink_BasicLocationFunctions_Pkg /* _L193=(BasicLocationFunctions_Pkg::scaledDLINK_2_dlink#1)/ */ Context_scaledDLINK_2_dlink_1;
  outC_indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L172=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id#1)/ */ Context_indexOfBG_by_id_1;
  outC_NIDLRBG_2_nidC_nidBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L175=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::NIDLRBG_2_nidC_nidBG#1)/ */ Context_NIDLRBG_2_nidC_nidBG_1;
  outC_radioStatusRouter_Handover_Pkg_handoverUtils_Pkg /* _L44=(Handover_Pkg::handoverUtils_Pkg::radioStatusRouter#1)/ */ Context_radioStatusRouter_1;
  outC_fishHandoverCmds_Handover_Pkg_handoverUtils_Pkg /* _L53=(Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds#1)/ */ Context_fishHandoverCmds_1;
  outC_splitInputData_Handover_Pkg_handoverUtils_Pkg /* _L78=(Handover_Pkg::handoverUtils_Pkg::splitInputData#2)/ */ Context_splitInputData_2;
  outC_changeoverSwitch_Handover_Pkg_handoverUtils_Pkg /* _L241=(Handover_Pkg::handoverUtils_Pkg::changeoverSwitch#3)/ */ Context_changeoverSwitch_3;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  p131_q_rbcTransitionOrder_T_Handover_Pkg /* @1/Out/ */ Out_Memory_1_struct;
  p131_q_rbcTransitionOrder_T_Handover_Pkg /* @1/InitVal/ */ InitVal_Memory_1_struct;
  kcg_bool /* @1/MemCond/ */ MemCond_Memory_1_struct;
  kcg_bool /* @1/Reset/ */ Reset_Memory_1_struct;
  p131_q_rbcTransitionOrder_T_Handover_Pkg /* @1/M_Input/ */ M_Input_Memory_1_struct;
  p131_q_rbcTransitionOrder_T_Handover_Pkg /* @1/_L9/ */ _L9_Memory_1_struct;
  kcg_bool /* @1/_L1/ */ _L1_Memory_1_struct;
  p131_q_rbcTransitionOrder_T_Handover_Pkg /* @1/_L2/ */ _L2_Memory_1_struct;
  kcg_bool /* @1/_L3/ */ _L3_Memory_1_struct;
  p131_q_rbcTransitionOrder_T_Handover_Pkg /* @1/_L5/ */ _L5_Memory_1_struct;
  p131_q_rbcTransitionOrder_T_Handover_Pkg /* @1/_L6/ */ _L6_Memory_1_struct;
  p131_q_rbcTransitionOrder_T_Handover_Pkg /* @1/_L7/ */ _L7_Memory_1_struct;
  kcg_bool /* sNotReady/ */ sNotReady;
  kcg_bool /* handingOverMobile_is_mobile_1_loc/ */ handingOverMobile_is_mobile_1_loc;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* dataFromHandingOverMobile/ */ dataFromHandingOverMobile;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* dataFromAcceptingMobile/ */ dataFromAcceptingMobile;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* dataFromTrack/ */ dataFromTrack;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* dataFromBalise/ */ dataFromBalise;
  p131_q_rbcTransitionOrder_T_Handover_Pkg /* p131_RBCTransitionOrder_dec/ */ p131_RBCTransitionOrder_dec;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* locationOfRBCTransition/ */ locationOfRBCTransition;
  kcg_bool /* maxSafeFrontEndPassesHandOverLocation/ */ maxSafeFrontEndPassesHandOverLocation;
  kcg_bool /* minSafeReadEndPassesHandOverLocation/ */ minSafeReadEndPassesHandOverLocation;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L3/ */ _L3;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L2/ */ _L2;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L14/ */ _L14;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L38/ */ _L38;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L37/ */ _L37;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L36/ */ _L36;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L35/ */ _L35;
  M_MODE /* _L41/ */ _L41;
  morcStatus_T_RCM_Session_Types_Pkg /* _L42/ */ _L42;
  morcStatus_T_RCM_Session_Types_Pkg /* _L43/ */ _L43;
  morcStatus_T_RCM_Session_Types_Pkg /* _L45/ */ _L45;
  morcStatus_T_RCM_Session_Types_Pkg /* _L44/ */ _L44;
  kcg_bool /* _L49/ */ _L49;
  kcg_bool /* _L50/ */ _L50;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L55/ */ _L55;
  p131_q_rbcTransitionOrder_T_Handover_Pkg /* _L54/ */ _L54;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L53/ */ _L53;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L72/ */ _L72;
  kcg_bool /* _L81/ */ _L81;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L78/ */ _L78;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L79/ */ _L79;
  kcg_bool /* _L77/ */ _L77;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L89/ */ _L89;
  trainPosition_T_TrainPosition_Types_Pck /* _L90/ */ _L90;
  kcg_bool /* _L119/ */ _L119;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L122/ */ _L122;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L123/ */ _L123;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L124/ */ _L124;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L126/ */ _L126;
  kcg_int32 /* _L127/ */ _L127;
  kcg_int32 /* _L128/ */ _L128;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L129/ */ _L129;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L130/ */ _L130;
  p131_q_rbcTransitionOrder_T_Handover_Pkg /* _L131/ */ _L131;
  kcg_bool /* _L162/ */ _L162;
  NID_LRBG /* _L163/ */ _L163;
  P131_RBCTransitionOrder_T_Packet_Types_Pkg /* _L164/ */ _L164;
  kcg_bool /* _L165/ */ _L165;
  Q_SCALE /* _L166/ */ _L166;
  D_RBCTR /* _L167/ */ _L167;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L169/ */ _L169;
  kcg_bool /* _L174/ */ _L174;
  kcg_bool /* _L173/ */ _L173;
  kcg_int32 /* _L172/ */ _L172;
  NID_BG /* _L176/ */ _L176;
  NID_C /* _L175/ */ _L175;
  positionedBG_T_TrainPosition_Types_Pck /* _L186/ */ _L186;
  positionedBG_T_TrainPosition_Types_Pck /* _L187/ */ _L187;
  positionedBG_T_TrainPosition_Types_Pck /* _L188/ */ _L188;
  positionedBG_T_TrainPosition_Types_Pck /* _L189/ */ _L189;
  positionedBGs_T_TrainPosition_Types_Pck /* _L190/ */ _L190;
  positionedBG_T_TrainPosition_Types_Pck /* _L191/ */ _L191;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L192/ */ _L192;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L193/ */ _L193;
  kcg_int32 /* _L195/ */ _L195;
  kcg_bool /* _L196/ */ _L196;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L197/ */ _L197;
  p131_q_rbcTransitionOrder_T_Handover_Pkg /* _L200/ */ _L200;
  p131_q_rbcTransitionOrder_T_Handover_Pkg /* _L202/ */ _L202;
  kcg_bool /* _L203/ */ _L203;
  kcg_bool /* _L204/ */ _L204;
  kcg_bool /* _L206/ */ _L206;
  kcg_bool /* _L207/ */ _L207;
  kcg_bool /* _L208/ */ _L208;
  trainProperties_T_TrainPosition_Types_Pck /* _L209/ */ _L209;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L210/ */ _L210;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L211/ */ _L211;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L212/ */ _L212;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L213/ */ _L213;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L219/ */ _L219;
  kcg_bool /* _L222/ */ _L222;
  kcg_bool /* _L223/ */ _L223;
  kcg_bool /* _L224/ */ _L224;
  kcg_bool /* _L225/ */ _L225;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L226/ */ _L226;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L228/ */ _L228;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L229/ */ _L229;
  kcg_bool /* _L236/ */ _L236;
  kcg_bool /* _L235/ */ _L235;
  connection_ids_T_Handover_Pkg /* _L234/ */ _L234;
  kcg_bool /* _L239/ */ _L239;
  kcg_bool /* _L240/ */ _L240;
  kcg_bool /* _L242/ */ _L242;
  kcg_bool /* _L241/ */ _L241;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L243/ */ _L243;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L244/ */ _L244;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L245/ */ _L245;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L246/ */ _L246;
  morcStatus_T_RCM_Session_Types_Pkg /* _L247/ */ _L247;
  morcStatus_T_RCM_Session_Types_Pkg /* _L248/ */ _L248;
  morcStatus_T_RCM_Session_Types_Pkg /* _L249/ */ _L249;
  morcStatus_T_RCM_Session_Types_Pkg /* _L250/ */ _L250;
  morcStatus_T_RCM_Session_Types_Pkg /* _L251/ */ _L251;
  morcStatus_T_RCM_Session_Types_Pkg /* _L252/ */ _L252;
  kcg_bool /* _L253/ */ _L253;
  kcg_bool /* _L254/ */ _L254;
  kcg_bool /* _L255/ */ _L255;
  kcg_bool /* _L256/ */ _L256;
} outC_processHandingOver_Handover_Pkg_handoverUtils_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Handover_Pkg::handoverUtils_Pkg::processHandingOver/ */
extern void processHandingOver_Handover_Pkg_handoverUtils_Pkg(
  /* mode/ */
  M_MODE mode,
  /* morcStatus_1/ */
  morcStatus_T_RCM_Session_Types_Pkg *morcStatus_1,
  /* morcStatus_2/ */
  morcStatus_T_RCM_Session_Types_Pkg *morcStatus_2,
  /* dataFromTrack_in/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg *dataFromTrack_in,
  /* trainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* BGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* sessionManagementAbility/ */
  abilityToHandleCommunicationSessions_Handover_Pkg sessionManagementAbility,
  /* trainProperties/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_processHandingOver_Handover_Pkg_handoverUtils_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void processHandingOver_reset_Handover_Pkg_handoverUtils_Pkg(
  outC_processHandingOver_Handover_Pkg_handoverUtils_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void processHandingOver_init_Handover_Pkg_handoverUtils_Pkg(
  outC_processHandingOver_Handover_Pkg_handoverUtils_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: Handover_Pkg::handoverUtils_Pkg::processHandingOver/
  @1: (linear::Memory#1)
*/

#endif /* _processHandingOver_Handover_Pkg_handoverUtils_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** processHandingOver_Handover_Pkg_handoverUtils_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

