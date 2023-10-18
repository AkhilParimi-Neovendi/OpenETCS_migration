/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _handOverSequencer_Handover_Pkg_handoverUtils_Pkg_H_
#define _handOverSequencer_Handover_Pkg_handoverUtils_Pkg_H_

#include "kcg_types.h"
#include "p131_rbcTransitionOrder_2_p42_establishSession_Handover_Pkg_handoverUtils_Pkg.h"
#include "checkSessionCmd_Handover_Pkg_handoverUtils_Pkg.h"
#include "Read_P042_TM.h"
#include "Read_P045_TM.h"
#include "RisingEdge_digital.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  msgFromTrack_T_RCM_MsgTypes_Pkg /* p42_sessionCmd_for_acceptingRBC/ */ p42_sessionCmd_for_acceptingRBC;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* p42_sessionCmd_for_handingOverRBC/ */ p42_sessionCmd_for_handingOverRBC;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* p45_radioNetworkRegistrationOrder_for_handingOverRBC/ */ p45_radioNetworkRegistrationOrder_for_handingOverRBC;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* p45_radioNetworkRegistrationOrder_for_acceptingRBC/ */ p45_radioNetworkRegistrationOrder_for_acceptingRBC;
  kcg_bool /* sendPositionReport_2_handingOverRBC/ */ sendPositionReport_2_handingOverRBC;
  kcg_bool /* sendPositionReport_2_acceptingRBC/ */ sendPositionReport_2_acceptingRBC;
  kcg_bool /* sendTrainData_2_acceptingRBC/ */ sendTrainData_2_acceptingRBC;
  kcg_bool /* useInformationFromAcceptingRBC/ */ useInformationFromAcceptingRBC;
  kcg_bool /* bufferInformationFromAcceptingRBC/ */ bufferInformationFromAcceptingRBC;
  kcg_bool /* handoverInprogress/ */ handoverInprogress;
  kcg_bool /* handoverFinished/ */ handoverFinished;
  kcg_bool /* notReady/ */ notReady;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool init1;
  kcg_bool init2;
  struct_421511 /* @1/_L8/ */ _L8_Memory_1_struct;
  kcg_bool /* IfBlock1:then:establishSessionWithAcceptingRBCOrdered/ */ establishSessionWithAcceptingRBCOrdered_then_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:then:p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc/ */ p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM: */ handOver_with_2_Sessions_SM_reset_nxt_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM: */ handOver_with_2_Sessions_SM_reset_act_then_IfBlock1;
  SSM_ST_handOver_with_2_Sessions_SM_then_IfBlock1 /* IfBlock1:then:handOver_with_2_Sessions_SM: */ handOver_with_2_Sessions_SM_state_nxt_then_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc/ */ p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_else_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:p131_transitionOrder_loc/ */ p131_transitionOrder_loc_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM: */ handOver_with_1_Session_SM_reset_nxt_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM: */ handOver_with_1_Session_SM_reset_act_else_IfBlock1;
  SSM_ST_handOver_with_1_Session_SM_else_IfBlock1 /* IfBlock1:else:handOver_with_1_Session_SM: */ handOver_with_1_Session_SM_state_nxt_else_IfBlock1;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RisingEdge_digital /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMaxSafeFrontEndPassing:_L11=(digital::RisingEdge#4)/ */ Context_RisingEdge_4;
  outC_RisingEdge_digital /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMinSafeRearEndPassing:_L11=(digital::RisingEdge#9)/ */ Context_RisingEdge_9;
  outC_checkSessionCmd_Handover_Pkg_handoverUtils_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:EstablishSessionWithAcceptingRBC:_L1=(Handover_Pkg::handoverUtils_Pkg::checkSessionCmd#12)/ */ Context_checkSessionCmd_12;
  outC_p131_rbcTransitionOrder_2_p42_establishSession_Handover_Pkg_handoverUtils_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:EstablishSessionWithAcceptingRBC:_L8=(Handover_Pkg::handoverUtils_Pkg::p131_rbcTransitionOrder_2_p42_establishSession#8)/ */ Context_p131_rbcTransitionOrder_2_p42_establishSession_8;
  outC_Read_P045_TM /* IfBlock1:else:handOver_with_1_Session_SM:RegisterAcceptingRBC:_L38=(TM::Read_P045#1)/ */ Context_Read_P045_1;
  outC_Read_P042_TM /* IfBlock1:else:handOver_with_1_Session_SM:WaitForTerminationOrderFromHandingOverRBC:_L28=(TM::Read_P042#2)/ */ Context_Read_P042_2;
  outC_checkSessionCmd_Handover_Pkg_handoverUtils_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:WaitForTerminationOrderFromHandingOverRBC:_L3=(Handover_Pkg::handoverUtils_Pkg::checkSessionCmd#11)/ */ Context_checkSessionCmd_11;
  outC_RisingEdge_digital /* IfBlock1:else:handOver_with_1_Session_SM:WaitForMinSafeRearEndPassing:_L8=(digital::RisingEdge#28)/ */ Context_RisingEdge_28;
  outC_RisingEdge_digital /* IfBlock1:else:handOver_with_1_Session_SM:WaitForMaxSafeFrontEndPassing:_L8=(digital::RisingEdge#26)/ */ Context_RisingEdge_26;
  outC_Read_P045_TM /* IfBlock1:then:handOver_with_2_Sessions_SM:ReregisterHandingOverRBC:_L25=(TM::Read_P045#2)/ */ Context_Read_P045_2;
  outC_Read_P042_TM /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTerminationOrderFromHandingOverRBC:_L26=(TM::Read_P042#1)/ */ Context_Read_P042_1;
  outC_checkSessionCmd_Handover_Pkg_handoverUtils_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTerminationOrderFromHandingOverRBC:_L3=(Handover_Pkg::handoverUtils_Pkg::checkSessionCmd#3)/ */ Context_checkSessionCmd_3;
  outC_RisingEdge_digital /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMinSafeRearEndPassing:_L8=(digital::RisingEdge#8)/ */ Context_RisingEdge_8;
  outC_RisingEdge_digital /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMaxSafeFrontEndPassing:_L8=(digital::RisingEdge#5)/ */ Context_RisingEdge_5;
  outC_checkSessionCmd_Handover_Pkg_handoverUtils_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTransitionOrder:_L4=(Handover_Pkg::handoverUtils_Pkg::checkSessionCmd#2)/ */ Context_checkSessionCmd_2;
  outC_p131_rbcTransitionOrder_2_p42_establishSession_Handover_Pkg_handoverUtils_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTransitionOrder:_L6=(Handover_Pkg::handoverUtils_Pkg::p131_rbcTransitionOrder_2_p42_establishSession#2)/ */ Context_p131_rbcTransitionOrder_2_p42_establishSession_2;
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_handOver_with_2_Sessions_SM_then_IfBlock1 /* IfBlock1:then:handOver_with_2_Sessions_SM: */ handOver_with_2_Sessions_SM_clock_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForHandingOverRBCRegistered:<2> */ tr_2_clock_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForHandingOverRBCRegistered:<1> */ tr_1_clock_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:ReregisterHandingOverRBC:<2> */ tr_2_clock_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:ReregisterHandingOverRBC:<1> */ tr_1_clock_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForHandingOverRBCTerminated:<2> */ tr_2_clock_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForHandingOverRBCTerminated:<1> */ tr_1_clock_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTerminationOrderFromHandingOverRBC:<2> */ tr_2_clock_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTerminationOrderFromHandingOverRBC:<1> */ tr_1_clock_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForSessionWithAcceptingRBCEstablished:<1> */ tr_1_clock_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMinSafeRearEndPassing:<2> */ tr_2_clock_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMinSafeRearEndPassing:<1> */ tr_1_clock_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMaxSafeFrontEndPassing:<2> */ tr_2_clock_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMaxSafeFrontEndPassing:<1> */ tr_1_clock_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTransitionOrder:<1> */ tr_1_clock_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1;
  SSM_ST_handOver_with_1_Session_SM_else_IfBlock1 /* IfBlock1:else:handOver_with_1_Session_SM: */ handOver_with_1_Session_SM_clock_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:EstablishSessionWithAcceptingRBC:<2> */ tr_2_clock_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:EstablishSessionWithAcceptingRBC:<1> */ tr_1_clock_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:WaitForHandingOverRBCRegistered:<2> */ tr_2_clock_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:WaitForHandingOverRBCRegistered:<1> */ tr_1_clock_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:RegisterAcceptingRBC:<2> */ tr_2_clock_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:RegisterAcceptingRBC:<1> */ tr_1_clock_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:WaitForHandingOverRBCTerminated:<2> */ tr_2_clock_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:WaitForHandingOverRBCTerminated:<1> */ tr_1_clock_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:WaitForTerminationOrderFromHandingOverRBC:<2> */ tr_2_clock_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:WaitForTerminationOrderFromHandingOverRBC:<1> */ tr_1_clock_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:WaitForSessionWithAcceptingRBCEstablished:<2> */ tr_2_clock_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:WaitForSessionWithAcceptingRBCEstablished:<1> */ tr_1_clock_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:WaitForMinSafeRearEndPassing:<2> */ tr_2_clock_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:WaitForMinSafeRearEndPassing:<1> */ tr_1_clock_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:WaitForMaxSafeFrontEndPassing:<2> */ tr_2_clock_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:WaitForMaxSafeFrontEndPassing:<1> */ tr_1_clock_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:WaitForTransitionOrder:<1> */ tr_1_clock_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  struct_421511 /* @1/Out/ */ Out_Memory_1_struct;
  struct_421511 /* @1/InitVal/ */ InitVal_Memory_1_struct;
  kcg_bool /* @1/MemCond/ */ MemCond_Memory_1_struct;
  kcg_bool /* @1/Reset/ */ Reset_Memory_1_struct;
  struct_421511 /* @1/M_Input/ */ M_Input_Memory_1_struct;
  struct_421511 /* @1/_L9/ */ _L9_Memory_1_struct;
  kcg_bool /* @1/_L1/ */ _L1_Memory_1_struct;
  struct_421511 /* @1/_L2/ */ _L2_Memory_1_struct;
  kcg_bool /* @1/_L3/ */ _L3_Memory_1_struct;
  struct_421511 /* @1/_L5/ */ _L5_Memory_1_struct;
  struct_421511 /* @1/_L6/ */ _L6_Memory_1_struct;
  struct_421511 /* @1/_L7/ */ _L7_Memory_1_struct;
  SSM_TR_handOver_with_2_Sessions_SM_then_IfBlock1 /* IfBlock1:then:handOver_with_2_Sessions_SM: */ handOver_with_2_Sessions_SM_fired_then_IfBlock1;
  SSM_TR_handOver_with_2_Sessions_SM_then_IfBlock1 /* IfBlock1:then:handOver_with_2_Sessions_SM: */ handOver_with_2_Sessions_SM_fired_strong_then_IfBlock1;
  SSM_ST_handOver_with_2_Sessions_SM_then_IfBlock1 /* IfBlock1:then:handOver_with_2_Sessions_SM: */ handOver_with_2_Sessions_SM_state_act_then_IfBlock1;
  SSM_ST_handOver_with_2_Sessions_SM_then_IfBlock1 /* IfBlock1:then:handOver_with_2_Sessions_SM: */ handOver_with_2_Sessions_SM_state_sel_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForHandingOverRBCRegistered:handingOverRBCReregistered/ */ handingOverRBCReregistered_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForHandingOverRBCRegistered:_L9/ */ _L9_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1;
  mobileRegistrationStatus_T_RCM_Types_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForHandingOverRBCRegistered:_L7/ */ _L7_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1;
  morcStatus_T_RCM_Session_Types_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForHandingOverRBCRegistered:_L4/ */ _L4_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForHandingOverRBCRegistered:_L13/ */ _L13_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1;
  mobileRegistrationContext_T_RCM_Types_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForHandingOverRBCRegistered:_L14/ */ _L14_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1;
  mobileRegistrationStatus_T_RCM_Types_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForHandingOverRBCRegistered:_L15/ */ _L15_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:ReregisterHandingOverRBC:unregistered_or_noReregisterRequired/ */ unregistered_or_noReregisterRequired_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlo;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:ReregisterHandingOverRBC:_L12/ */ _L12_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  NID_MN /* IfBlock1:then:handOver_with_2_Sessions_SM:ReregisterHandingOverRBC:_L34/ */ _L34_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  CompressedPackets_T_Common_Types_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:ReregisterHandingOverRBC:_L33/ */ _L33_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:ReregisterHandingOverRBC:_L32/ */ _L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:ReregisterHandingOverRBC:_L30/ */ _L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:ReregisterHandingOverRBC:_L28/ */ _L28_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:ReregisterHandingOverRBC:_L27/ */ _L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:ReregisterHandingOverRBC:_L25/ */ _L25_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:ReregisterHandingOverRBC:_L26/ */ _L26_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  morcStatus_T_RCM_Session_Types_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:ReregisterHandingOverRBC:_L24/ */ _L24_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:ReregisterHandingOverRBC:_L23/ */ _L23_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:ReregisterHandingOverRBC:_L22/ */ _L22_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:ReregisterHandingOverRBC:_L21/ */ _L21_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:ReregisterHandingOverRBC:_L20/ */ _L20_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:ReregisterHandingOverRBC:_L19/ */ _L19_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:ReregisterHandingOverRBC:_L18/ */ _L18_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  NID_MN /* IfBlock1:then:handOver_with_2_Sessions_SM:ReregisterHandingOverRBC:_L17/ */ _L17_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  mobileRegistrationStatus_T_RCM_Types_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:ReregisterHandingOverRBC:_L16/ */ _L16_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:ReregisterHandingOverRBC:_L15/ */ _L15_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:ReregisterHandingOverRBC:_L35/ */ _L35_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:ReregisterHandingOverRBC:_L36/ */ _L36_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:ReregisterHandingOverRBC:_L38/ */ _L38_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:ReregisterHandingOverRBC:_L39/ */ _L39_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:ReregisterHandingOverRBC:_L40/ */ _L40_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:ReregisterHandingOverRBC:_L41/ */ _L41_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:ReregisterHandingOverRBC:_L42/ */ _L42_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  mobileRegistrationContext_T_RCM_Types_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:ReregisterHandingOverRBC:_L43/ */ _L43_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  mobileRegistrationStatus_T_RCM_Types_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:ReregisterHandingOverRBC:_L45/ */ _L45_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  mobileRegistrationStatus_T_RCM_Types_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:ReregisterHandingOverRBC:_L46/ */ _L46_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForHandingOverRBCTerminated:sessionWithHandingOverRBC_terminated/ */ sessionWithHandingOverRBC_terminated_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_the;
  mobileConnectionStatus_T_RCM_Types_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForHandingOverRBCTerminated:_L4/ */ _L4_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForHandingOverRBCTerminated:_L3/ */ _L3_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1;
  morcStatus_T_RCM_Session_Types_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForHandingOverRBCTerminated:_L2/ */ _L2_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForHandingOverRBCTerminated:_L8/ */ _L8_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForHandingOverRBCTerminated:_L9/ */ _L9_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1;
  sessionPhase_T_RCM_Session_Types_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForHandingOverRBCTerminated:_L13/ */ _L13_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1;
  sessionPhase_T_RCM_Session_Types_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForHandingOverRBCTerminated:_L12/ */ _L12_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForHandingOverRBCTerminated:_L11/ */ _L11_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1;
  mobileConnectionContext_T_RCM_Types_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForHandingOverRBCTerminated:_L10/ */ _L10_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1;
  sessionStatus_T_RCM_Session_Types_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForHandingOverRBCTerminated:_L14/ */ _L14_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1;
  mobileConnectionStatus_T_RCM_Types_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForHandingOverRBCTerminated:_L15/ */ _L15_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTerminationOrderFromHandingOverRBC:terminationWithHandingOverRBCOrdered/ */ terminationWithHandingOverRBCOrdered_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessi;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTerminationOrderFromHandingOverRBC:_L1/ */ _L1_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTerminationOrderFromHandingOverRBC:_L3/ */ _L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  morcStatus_T_RCM_Session_Types_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTerminationOrderFromHandingOverRBC:_L7/ */ _L7_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTerminationOrderFromHandingOverRBC:_L8/ */ _L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTerminationOrderFromHandingOverRBC:_L23/ */ _L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTerminationOrderFromHandingOverRBC:_L25/ */ _L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  CompressedPackets_T_Common_Types_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTerminationOrderFromHandingOverRBC:_L28/ */ _L28_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTerminationOrderFromHandingOverRBC:_L26/ */ _L26_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  P42_SessionManagement_T_Packet_Types_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTerminationOrderFromHandingOverRBC:_L27/ */ _L27_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTerminationOrderFromHandingOverRBC:_L29/ */ _L29_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  Q_RBC /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTerminationOrderFromHandingOverRBC:_L30/ */ _L30_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  Q_RBC /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTerminationOrderFromHandingOverRBC:_L32/ */ _L32_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTerminationOrderFromHandingOverRBC:_L31/ */ _L31_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTerminationOrderFromHandingOverRBC:_L33/ */ _L33_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForSessionWithAcceptingRBCEstablished:sessionWithAcceptingRBCEstablished/ */ sessionWithAcceptingRBCEstablished_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Session;
  morcStatus_T_RCM_Session_Types_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForSessionWithAcceptingRBCEstablished:_L5/ */ _L5_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1;
  M_MODE /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForSessionWithAcceptingRBCEstablished:_L19/ */ _L19_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForSessionWithAcceptingRBCEstablished:_L18/ */ _L18_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForSessionWithAcceptingRBCEstablished:_L16/ */ _L16_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1;
  M_MODE /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForSessionWithAcceptingRBCEstablished:_L14/ */ _L14_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForSessionWithAcceptingRBCEstablished:_L12/ */ _L12_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForSessionWithAcceptingRBCEstablished:_L11/ */ _L11_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForSessionWithAcceptingRBCEstablished:_L9/ */ _L9_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1;
  M_MODE /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForSessionWithAcceptingRBCEstablished:_L8/ */ _L8_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1;
  sessionPhase_T_RCM_Session_Types_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForSessionWithAcceptingRBCEstablished:_L23/ */ _L23_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForSessionWithAcceptingRBCEstablished:_L22/ */ _L22_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1;
  sessionStatus_T_RCM_Session_Types_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForSessionWithAcceptingRBCEstablished:_L21/ */ _L21_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1;
  sessionPhase_T_RCM_Session_Types_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForSessionWithAcceptingRBCEstablished:_L20/ */ _L20_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMinSafeRearEndPassing:_L15/ */ _L15_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
  morcStatus_T_RCM_Session_Types_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMinSafeRearEndPassing:_L13/ */ _L13_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMinSafeRearEndPassing:_L11/ */ _L11_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMinSafeRearEndPassing:_L8/ */ _L8_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMinSafeRearEndPassing:_L5/ */ _L5_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
  morcStatus_T_RCM_Session_Types_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMinSafeRearEndPassing:_L2/ */ _L2_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMinSafeRearEndPassing:_L16/ */ _L16_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMinSafeRearEndPassing:_L17/ */ _L17_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
  sessionStatus_T_RCM_Session_Types_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMinSafeRearEndPassing:_L21/ */ _L21_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
  sessionPhase_T_RCM_Session_Types_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMinSafeRearEndPassing:_L20/ */ _L20_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMinSafeRearEndPassing:_L19/ */ _L19_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
  sessionPhase_T_RCM_Session_Types_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMinSafeRearEndPassing:_L18/ */ _L18_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMinSafeRearEndPassing:_L25/ */ _L25_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
  sessionPhase_T_RCM_Session_Types_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMinSafeRearEndPassing:_L24/ */ _L24_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
  sessionPhase_T_RCM_Session_Types_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMinSafeRearEndPassing:_L23/ */ _L23_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
  sessionStatus_T_RCM_Session_Types_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMinSafeRearEndPassing:_L22/ */ _L22_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMaxSafeFrontEndPassing:_L15/ */ _L15_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMaxSafeFrontEndPassing:_L14/ */ _L14_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
  morcStatus_T_RCM_Session_Types_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMaxSafeFrontEndPassing:_L13/ */ _L13_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMaxSafeFrontEndPassing:_L11/ */ _L11_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMaxSafeFrontEndPassing:_L8/ */ _L8_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMaxSafeFrontEndPassing:_L6/ */ _L6_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMaxSafeFrontEndPassing:_L5/ */ _L5_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
  morcStatus_T_RCM_Session_Types_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMaxSafeFrontEndPassing:_L2/ */ _L2_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
  sessionPhase_T_RCM_Session_Types_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMaxSafeFrontEndPassing:_L1/ */ _L1_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMaxSafeFrontEndPassing:_L35/ */ _L35_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
  sessionStatus_T_RCM_Session_Types_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMaxSafeFrontEndPassing:_L36/ */ _L36_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
  sessionPhase_T_RCM_Session_Types_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMaxSafeFrontEndPassing:_L37/ */ _L37_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMaxSafeFrontEndPassing:_L41/ */ _L41_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
  sessionStatus_T_RCM_Session_Types_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMaxSafeFrontEndPassing:_L40/ */ _L40_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
  sessionPhase_T_RCM_Session_Types_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMaxSafeFrontEndPassing:_L39/ */ _L39_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
  sessionPhase_T_RCM_Session_Types_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMaxSafeFrontEndPassing:_L38/ */ _L38_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTransitionOrder:_L4/ */ _L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1;
  morcStatus_T_RCM_Session_Types_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTransitionOrder:_L2/ */ _L2_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTransitionOrder:_L5/ */ _L5_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTransitionOrder:_L6/ */ _L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1;
  kcg_bool /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTransitionOrder:_L10/ */ _L10_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTransitionOrder:_L9/ */ _L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTransitionOrder:_L8/ */ _L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTransitionOrder:_L7/ */ _L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTransitionOrder:_L11/ */ _L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1;
  SSM_TR_handOver_with_1_Session_SM_else_IfBlock1 /* IfBlock1:else:handOver_with_1_Session_SM: */ handOver_with_1_Session_SM_fired_else_IfBlock1;
  SSM_TR_handOver_with_1_Session_SM_else_IfBlock1 /* IfBlock1:else:handOver_with_1_Session_SM: */ handOver_with_1_Session_SM_fired_strong_else_IfBlock1;
  SSM_ST_handOver_with_1_Session_SM_else_IfBlock1 /* IfBlock1:else:handOver_with_1_Session_SM: */ handOver_with_1_Session_SM_state_act_else_IfBlock1;
  SSM_ST_handOver_with_1_Session_SM_else_IfBlock1 /* IfBlock1:else:handOver_with_1_Session_SM: */ handOver_with_1_Session_SM_state_sel_else_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:EstablishSessionWithAcceptingRBC:_L1/ */ _L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
  morcStatus_T_RCM_Session_Types_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:EstablishSessionWithAcceptingRBC:_L6/ */ _L6_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:EstablishSessionWithAcceptingRBC:_L7/ */ _L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:EstablishSessionWithAcceptingRBC:_L8/ */ _L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:WaitForHandingOverRBCRegistered:handingOverRBCReregistered/ */ handingOverRBCReregistered_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:WaitForHandingOverRBCRegistered:_L9/ */ _L9_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1;
  mobileRegistrationStatus_T_RCM_Types_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:WaitForHandingOverRBCRegistered:_L7/ */ _L7_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1;
  morcStatus_T_RCM_Session_Types_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:WaitForHandingOverRBCRegistered:_L4/ */ _L4_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1;
  mobileRegistrationContext_T_RCM_Types_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:WaitForHandingOverRBCRegistered:_L10/ */ _L10_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1;
  mobileRegistrationStatus_T_RCM_Types_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:WaitForHandingOverRBCRegistered:_L11/ */ _L11_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:RegisterAcceptingRBC:unregistered_or_noReregisterRequired/ */ unregistered_or_noReregisterRequired_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:RegisterAcceptingRBC:_L36/ */ _L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:RegisterAcceptingRBC:_L40/ */ _L40_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:RegisterAcceptingRBC:_L38/ */ _L38_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:RegisterAcceptingRBC:_L39/ */ _L39_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
  CompressedPackets_T_Common_Types_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:RegisterAcceptingRBC:_L37/ */ _L37_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:RegisterAcceptingRBC:_L41/ */ _L41_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
  NID_MN /* IfBlock1:else:handOver_with_1_Session_SM:RegisterAcceptingRBC:_L42/ */ _L42_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:RegisterAcceptingRBC:_L51/ */ _L51_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:RegisterAcceptingRBC:_L50/ */ _L50_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
  morcStatus_T_RCM_Session_Types_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:RegisterAcceptingRBC:_L49/ */ _L49_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
  NID_MN /* IfBlock1:else:handOver_with_1_Session_SM:RegisterAcceptingRBC:_L48/ */ _L48_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:RegisterAcceptingRBC:_L47/ */ _L47_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
  mobileRegistrationStatus_T_RCM_Types_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:RegisterAcceptingRBC:_L45/ */ _L45_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:RegisterAcceptingRBC:_L44/ */ _L44_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:RegisterAcceptingRBC:_L43/ */ _L43_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:RegisterAcceptingRBC:_L53/ */ _L53_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:RegisterAcceptingRBC:_L54/ */ _L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:RegisterAcceptingRBC:_L55/ */ _L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:RegisterAcceptingRBC:_L58/ */ _L58_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:RegisterAcceptingRBC:_L57/ */ _L57_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:RegisterAcceptingRBC:_L56/ */ _L56_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:RegisterAcceptingRBC:_L66/ */ _L66_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:RegisterAcceptingRBC:_L65/ */ _L65_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:RegisterAcceptingRBC:_L64/ */ _L64_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:RegisterAcceptingRBC:_L63/ */ _L63_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
  mobileRegistrationContext_T_RCM_Types_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:RegisterAcceptingRBC:_L67/ */ _L67_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
  mobileRegistrationStatus_T_RCM_Types_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:RegisterAcceptingRBC:_L68/ */ _L68_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
  mobileRegistrationStatus_T_RCM_Types_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:RegisterAcceptingRBC:_L69/ */ _L69_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:WaitForHandingOverRBCTerminated:sessionWithHandingOverRBC_terminated/ */ sessionWithHandingOverRBC_terminated_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else;
  sessionPhase_T_RCM_Session_Types_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:WaitForHandingOverRBCTerminated:_L4/ */ _L4_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:WaitForHandingOverRBCTerminated:_L3/ */ _L3_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1;
  morcStatus_T_RCM_Session_Types_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:WaitForHandingOverRBCTerminated:_L2/ */ _L2_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1;
  sessionStatus_T_RCM_Session_Types_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:WaitForHandingOverRBCTerminated:_L7/ */ _L7_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1;
  sessionPhase_T_RCM_Session_Types_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:WaitForHandingOverRBCTerminated:_L8/ */ _L8_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:WaitForTerminationOrderFromHandingOverRBC:terminationWithHandingOverRBCOrdered/ */ terminationWithHandingOverRBCOrdered_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Sessi;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:WaitForTerminationOrderFromHandingOverRBC:_L3/ */ _L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1;
  morcStatus_T_RCM_Session_Types_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:WaitForTerminationOrderFromHandingOverRBC:_L7/ */ _L7_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:WaitForTerminationOrderFromHandingOverRBC:_L8/ */ _L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:WaitForTerminationOrderFromHandingOverRBC:_L23/ */ _L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1;
  Q_RBC /* IfBlock1:else:handOver_with_1_Session_SM:WaitForTerminationOrderFromHandingOverRBC:_L32/ */ _L32_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1;
  CompressedPackets_T_Common_Types_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:WaitForTerminationOrderFromHandingOverRBC:_L31/ */ _L31_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1;
  Q_RBC /* IfBlock1:else:handOver_with_1_Session_SM:WaitForTerminationOrderFromHandingOverRBC:_L30/ */ _L30_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:WaitForTerminationOrderFromHandingOverRBC:_L28/ */ _L28_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1;
  P42_SessionManagement_T_Packet_Types_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:WaitForTerminationOrderFromHandingOverRBC:_L29/ */ _L29_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:WaitForTerminationOrderFromHandingOverRBC:_L27/ */ _L27_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:WaitForTerminationOrderFromHandingOverRBC:_L26/ */ _L26_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:WaitForTerminationOrderFromHandingOverRBC:_L25/ */ _L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:WaitForTerminationOrderFromHandingOverRBC:_L33/ */ _L33_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:WaitForSessionWithAcceptingRBCEstablished:sessionWithAcceptingRBCEstablished/ */ sessionWithAcceptingRBCEstablished_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session;
  sessionPhase_T_RCM_Session_Types_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:WaitForSessionWithAcceptingRBCEstablished:_L6/ */ _L6_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:WaitForSessionWithAcceptingRBCEstablished:_L2/ */ _L2_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1;
  M_MODE /* IfBlock1:else:handOver_with_1_Session_SM:WaitForSessionWithAcceptingRBCEstablished:_L19/ */ _L19_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:WaitForSessionWithAcceptingRBCEstablished:_L18/ */ _L18_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:WaitForSessionWithAcceptingRBCEstablished:_L16/ */ _L16_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1;
  M_MODE /* IfBlock1:else:handOver_with_1_Session_SM:WaitForSessionWithAcceptingRBCEstablished:_L14/ */ _L14_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:WaitForSessionWithAcceptingRBCEstablished:_L12/ */ _L12_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:WaitForSessionWithAcceptingRBCEstablished:_L11/ */ _L11_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:WaitForSessionWithAcceptingRBCEstablished:_L9/ */ _L9_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1;
  M_MODE /* IfBlock1:else:handOver_with_1_Session_SM:WaitForSessionWithAcceptingRBCEstablished:_L8/ */ _L8_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1;
  morcStatus_T_RCM_Session_Types_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:WaitForSessionWithAcceptingRBCEstablished:_L20/ */ _L20_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:WaitForSessionWithAcceptingRBCEstablished:_L23/ */ _L23_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1;
  sessionStatus_T_RCM_Session_Types_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:WaitForSessionWithAcceptingRBCEstablished:_L24/ */ _L24_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1;
  sessionPhase_T_RCM_Session_Types_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:WaitForSessionWithAcceptingRBCEstablished:_L25/ */ _L25_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:WaitForMinSafeRearEndPassing:_L14/ */ _L14_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:WaitForMinSafeRearEndPassing:_L8/ */ _L8_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:WaitForMinSafeRearEndPassing:_L5/ */ _L5_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1;
  morcStatus_T_RCM_Session_Types_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:WaitForMinSafeRearEndPassing:_L2/ */ _L2_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1;
  sessionPhase_T_RCM_Session_Types_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:WaitForMinSafeRearEndPassing:_L1/ */ _L1_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:WaitForMinSafeRearEndPassing:_L16/ */ _L16_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1;
  sessionStatus_T_RCM_Session_Types_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:WaitForMinSafeRearEndPassing:_L17/ */ _L17_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1;
  sessionPhase_T_RCM_Session_Types_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:WaitForMinSafeRearEndPassing:_L18/ */ _L18_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:WaitForMaxSafeFrontEndPassing:_L14/ */ _L14_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:WaitForMaxSafeFrontEndPassing:_L8/ */ _L8_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:WaitForMaxSafeFrontEndPassing:_L6/ */ _L6_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:WaitForMaxSafeFrontEndPassing:_L5/ */ _L5_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1;
  morcStatus_T_RCM_Session_Types_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:WaitForMaxSafeFrontEndPassing:_L2/ */ _L2_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1;
  sessionPhase_T_RCM_Session_Types_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:WaitForMaxSafeFrontEndPassing:_L1/ */ _L1_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1;
  sessionStatus_T_RCM_Session_Types_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:WaitForMaxSafeFrontEndPassing:_L15/ */ _L15_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1;
  sessionPhase_T_RCM_Session_Types_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:WaitForMaxSafeFrontEndPassing:_L16/ */ _L16_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:WaitForTransitionOrder:transitionOrdered/ */ transitionOrdered_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:WaitForTransitionOrder:_L6/ */ _L6_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:WaitForTransitionOrder:_L7/ */ _L7_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:WaitForTransitionOrder:_L8/ */ _L8_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:WaitForTransitionOrder:_L9/ */ _L9_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:WaitForTransitionOrder:_L12/ */ _L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:WaitForTransitionOrder:_L13/ */ _L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:WaitForTransitionOrder:_L14/ */ _L14_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:WaitForTransitionOrder:_L15/ */ _L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:WaitForTransitionOrder:_L16/ */ _L16_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:WaitForTransitionOrder:_L17/ */ _L17_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* IfBlock1:else:handOver_with_1_Session_SM:WaitForTransitionOrder:_L18/ */ _L18_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* IfBlock1:else:handOver_with_1_Session_SM:WaitForTransitionOrder:_L19/ */ _L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_bool /* sNotReady/ */ sNotReady;
  kcg_bool /* sHandoverFinished/ */ sHandoverFinished;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* p131_transitionOrder_mem/ */ p131_transitionOrder_mem;
  kcg_bool /* newTransitionOrderReceived/ */ newTransitionOrderReceived;
  kcg_bool /* _L1/ */ _L1;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L3/ */ _L3;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L2/ */ _L2;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L7/ */ _L7;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
} outC_handOverSequencer_Handover_Pkg_handoverUtils_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Handover_Pkg::handoverUtils_Pkg::handOverSequencer/ */
extern void handOverSequencer_Handover_Pkg_handoverUtils_Pkg(
  /* p45_radioNetworkRegistrationOrder_in/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg *p45_radioNetworkRegistrationOrder_in,
  /* p131_transitionOrder/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg *p131_transitionOrder,
  /* p42_terminateCmd_from_handingOverRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg *p42_terminateCmd_from_handingOverRBC,
  /* morcStatusFromAcceptingRBC/ */
  morcStatus_T_RCM_Session_Types_Pkg *morcStatusFromAcceptingRBC,
  /* morcStatusFromHandingOverRBC/ */
  morcStatus_T_RCM_Session_Types_Pkg *morcStatusFromHandingOverRBC,
  /* maxSafeFrontEndPassesHandOverLocation/ */
  kcg_bool maxSafeFrontEndPassesHandOverLocation,
  /* minSafeReadEndPassesHandOverLocation/ */
  kcg_bool minSafeReadEndPassesHandOverLocation,
  /* mode/ */
  M_MODE mode,
  /* sessionManagementAbility/ */
  abilityToHandleCommunicationSessions_Handover_Pkg sessionManagementAbility,
  outC_handOverSequencer_Handover_Pkg_handoverUtils_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void handOverSequencer_reset_Handover_Pkg_handoverUtils_Pkg(
  outC_handOverSequencer_Handover_Pkg_handoverUtils_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void handOverSequencer_init_Handover_Pkg_handoverUtils_Pkg(
  outC_handOverSequencer_Handover_Pkg_handoverUtils_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: Handover_Pkg::handoverUtils_Pkg::handOverSequencer/
  @1: (linear::Memory#1)
*/

#endif /* _handOverSequencer_Handover_Pkg_handoverUtils_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** handOverSequencer_Handover_Pkg_handoverUtils_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

