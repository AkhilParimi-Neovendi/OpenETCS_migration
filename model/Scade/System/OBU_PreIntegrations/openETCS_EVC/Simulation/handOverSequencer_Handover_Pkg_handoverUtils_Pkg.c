/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "handOverSequencer_Handover_Pkg_handoverUtils_Pkg.h"

/* Handover_Pkg::handoverUtils_Pkg::handOverSequencer/ */
void handOverSequencer_Handover_Pkg_handoverUtils_Pkg(
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
  outC_handOverSequencer_Handover_Pkg_handoverUtils_Pkg *outC)
{
  /* p42_sessionCmd_for_acceptingRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg p42_sessionCmd_for_acceptingRBC_partial;
  /* p42_sessionCmd_for_handingOverRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg p42_sessionCmd_for_handingOverRBC_partial;
  /* p45_radioNetworkRegistrationOrder_for_handingOverRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _1_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial;
  /* p45_radioNetworkRegistrationOrder_for_acceptingRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _2_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial;
  /* sendPositionReport_2_handingOverRBC/ */
  kcg_bool sendPositionReport_2_handingOverRBC_partial;
  /* sendPositionReport_2_acceptingRBC/ */
  kcg_bool sendPositionReport_2_acceptingRBC_partial;
  /* sendTrainData_2_acceptingRBC/ */
  kcg_bool sendTrainData_2_acceptingRBC_partial;
  /* useInformationFromAcceptingRBC/ */
  kcg_bool useInformationFromAcceptingRBC_partial;
  /* bufferInformationFromAcceptingRBC/ */
  kcg_bool bufferInformationFromAcceptingRBC_partial;
  /* handoverInprogress/ */
  kcg_bool handoverInprogress_partial;
  /* IfBlock1:then:handOver_with_2_Sessions_SM: */
  kcg_bool handOver_with_2_Sessions_SM_reset_prv_then_IfBlock1;
  /* IfBlock1:then:handOver_with_2_Sessions_SM: */
  kcg_bool _3_handOver_with_2_Sessions_SM_reset_sel_then_IfBlock1;
  /* IfBlock1:then:p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_then_IfBlock1;
  /* IfBlock1:then:establishSessionWithAcceptingRBCOrdered/ */
  kcg_bool last_establishSessionWithAcceptingRBCOrdered_then_IfBlock1;
  /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForHandingOverRBCRegistered:<1> */
  kcg_bool tr_1_guard_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1;
  /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForHandingOverRBCRegistered:<2> */
  kcg_bool tr_2_guard_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1;
  /* IfBlock1:then:handOver_with_2_Sessions_SM: */
  SSM_TR_handOver_with_2_Sessions_SM_then_IfBlock1 handOver_with_2_Sessions_SM_fired_partial_then_IfBlock1;
  /* IfBlock1:then:handOver_with_2_Sessions_SM: */
  kcg_bool _4_handOver_with_2_Sessions_SM_reset_nxt_partial_then_IfBlock1;
  /* IfBlock1:then:handOver_with_2_Sessions_SM: */
  SSM_ST_handOver_with_2_Sessions_SM_then_IfBlock1 handOver_with_2_Sessions_SM_state_nxt_partial_then_IfBlock1;
  /* IfBlock1:then:establishSessionWithAcceptingRBCOrdered/ */
  kcg_bool establishSessionWithAcceptingRBCOrdered_partial_then_IfBlock1;
  /* IfBlock1:then:p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_then_IfBlock1;
  /* handoverInprogress/ */
  kcg_bool _6_handoverInprogress_partial;
  /* bufferInformationFromAcceptingRBC/ */
  kcg_bool _7_bufferInformationFromAcceptingRBC_partial;
  /* useInformationFromAcceptingRBC/ */
  kcg_bool _8_useInformationFromAcceptingRBC_partial;
  /* sendTrainData_2_acceptingRBC/ */
  kcg_bool _9_sendTrainData_2_acceptingRBC_partial;
  /* sendPositionReport_2_acceptingRBC/ */
  kcg_bool _10_sendPositionReport_2_acceptingRBC_partial;
  /* sendPositionReport_2_handingOverRBC/ */
  kcg_bool _11_sendPositionReport_2_handingOverRBC_partial;
  /* p45_radioNetworkRegistrationOrder_for_acceptingRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _12_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial;
  /* p45_radioNetworkRegistrationOrder_for_handingOverRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _13_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial;
  /* p42_sessionCmd_for_handingOverRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _14_p42_sessionCmd_for_handingOverRBC_partial;
  /* p42_sessionCmd_for_acceptingRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _15_p42_sessionCmd_for_acceptingRBC_partial;
  /* IfBlock1:then:handOver_with_2_Sessions_SM:ReregisterHandingOverRBC:<1> */
  kcg_bool tr_1_guard_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  /* IfBlock1:then:handOver_with_2_Sessions_SM:ReregisterHandingOverRBC:<2> */
  kcg_bool tr_2_guard_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  /* IfBlock1:then:handOver_with_2_Sessions_SM: */
  SSM_TR_handOver_with_2_Sessions_SM_then_IfBlock1 _16_handOver_with_2_Sessions_SM_fired_partial_then_IfBlock1;
  /* IfBlock1:then:handOver_with_2_Sessions_SM: */
  kcg_bool _17_handOver_with_2_Sessions_SM_reset_nxt_partial_then_IfBlock1;
  /* IfBlock1:then:handOver_with_2_Sessions_SM: */
  SSM_ST_handOver_with_2_Sessions_SM_then_IfBlock1 _18_handOver_with_2_Sessions_SM_state_nxt_partial_then_IfBlock1;
  /* IfBlock1:then:establishSessionWithAcceptingRBCOrdered/ */
  kcg_bool _19_establishSessionWithAcceptingRBCOrdered_partial_then_IfBlock1;
  /* IfBlock1:then:p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _20_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_then_IfBlock1;
  /* handoverInprogress/ */
  kcg_bool _21_handoverInprogress_partial;
  /* bufferInformationFromAcceptingRBC/ */
  kcg_bool _22_bufferInformationFromAcceptingRBC_partial;
  /* useInformationFromAcceptingRBC/ */
  kcg_bool _23_useInformationFromAcceptingRBC_partial;
  /* sendTrainData_2_acceptingRBC/ */
  kcg_bool _24_sendTrainData_2_acceptingRBC_partial;
  /* sendPositionReport_2_acceptingRBC/ */
  kcg_bool _25_sendPositionReport_2_acceptingRBC_partial;
  /* sendPositionReport_2_handingOverRBC/ */
  kcg_bool _26_sendPositionReport_2_handingOverRBC_partial;
  /* p45_radioNetworkRegistrationOrder_for_acceptingRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _27_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial;
  /* p45_radioNetworkRegistrationOrder_for_handingOverRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _28_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial;
  /* p42_sessionCmd_for_handingOverRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _29_p42_sessionCmd_for_handingOverRBC_partial;
  /* p42_sessionCmd_for_acceptingRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _30_p42_sessionCmd_for_acceptingRBC_partial;
  /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForHandingOverRBCTerminated:<1> */
  kcg_bool _31_tr_1_guard_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1;
  /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForHandingOverRBCTerminated:<2> */
  kcg_bool _32_tr_2_guard_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1;
  /* IfBlock1:then:handOver_with_2_Sessions_SM: */
  SSM_TR_handOver_with_2_Sessions_SM_then_IfBlock1 _33_handOver_with_2_Sessions_SM_fired_partial_then_IfBlock1;
  /* IfBlock1:then:handOver_with_2_Sessions_SM: */
  kcg_bool _34_handOver_with_2_Sessions_SM_reset_nxt_partial_then_IfBlock1;
  /* IfBlock1:then:handOver_with_2_Sessions_SM: */
  SSM_ST_handOver_with_2_Sessions_SM_then_IfBlock1 _35_handOver_with_2_Sessions_SM_state_nxt_partial_then_IfBlock1;
  /* IfBlock1:then:establishSessionWithAcceptingRBCOrdered/ */
  kcg_bool _36_establishSessionWithAcceptingRBCOrdered_partial_then_IfBlock1;
  /* IfBlock1:then:p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _37_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_then_IfBlock1;
  /* handoverInprogress/ */
  kcg_bool _38_handoverInprogress_partial;
  /* bufferInformationFromAcceptingRBC/ */
  kcg_bool _39_bufferInformationFromAcceptingRBC_partial;
  /* useInformationFromAcceptingRBC/ */
  kcg_bool _40_useInformationFromAcceptingRBC_partial;
  /* sendTrainData_2_acceptingRBC/ */
  kcg_bool _41_sendTrainData_2_acceptingRBC_partial;
  /* sendPositionReport_2_acceptingRBC/ */
  kcg_bool _42_sendPositionReport_2_acceptingRBC_partial;
  /* sendPositionReport_2_handingOverRBC/ */
  kcg_bool _43_sendPositionReport_2_handingOverRBC_partial;
  /* p45_radioNetworkRegistrationOrder_for_acceptingRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _44_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial;
  /* p45_radioNetworkRegistrationOrder_for_handingOverRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _45_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial;
  /* p42_sessionCmd_for_handingOverRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _46_p42_sessionCmd_for_handingOverRBC_partial;
  /* p42_sessionCmd_for_acceptingRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _47_p42_sessionCmd_for_acceptingRBC_partial;
  /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTerminationOrderFromHandingOverRBC:<1> */
  kcg_bool tr_1_guard_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTerminationOrderFromHandingOverRBC:<2> */
  kcg_bool tr_2_guard_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
  /* IfBlock1:then:handOver_with_2_Sessions_SM: */
  SSM_TR_handOver_with_2_Sessions_SM_then_IfBlock1 _48_handOver_with_2_Sessions_SM_fired_partial_then_IfBlock1;
  /* IfBlock1:then:handOver_with_2_Sessions_SM: */
  kcg_bool _49_handOver_with_2_Sessions_SM_reset_nxt_partial_then_IfBlock1;
  /* IfBlock1:then:handOver_with_2_Sessions_SM: */
  SSM_ST_handOver_with_2_Sessions_SM_then_IfBlock1 _50_handOver_with_2_Sessions_SM_state_nxt_partial_then_IfBlock1;
  /* IfBlock1:then:establishSessionWithAcceptingRBCOrdered/ */
  kcg_bool _51_establishSessionWithAcceptingRBCOrdered_partial_then_IfBlock1;
  /* IfBlock1:then:p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _52_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_then_IfBlock1;
  /* handoverInprogress/ */
  kcg_bool _53_handoverInprogress_partial;
  /* bufferInformationFromAcceptingRBC/ */
  kcg_bool _54_bufferInformationFromAcceptingRBC_partial;
  /* useInformationFromAcceptingRBC/ */
  kcg_bool _55_useInformationFromAcceptingRBC_partial;
  /* sendTrainData_2_acceptingRBC/ */
  kcg_bool _56_sendTrainData_2_acceptingRBC_partial;
  /* sendPositionReport_2_acceptingRBC/ */
  kcg_bool _57_sendPositionReport_2_acceptingRBC_partial;
  /* sendPositionReport_2_handingOverRBC/ */
  kcg_bool _58_sendPositionReport_2_handingOverRBC_partial;
  /* p45_radioNetworkRegistrationOrder_for_acceptingRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _59_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial;
  /* p45_radioNetworkRegistrationOrder_for_handingOverRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _60_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial;
  /* p42_sessionCmd_for_handingOverRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _61_p42_sessionCmd_for_handingOverRBC_partial;
  /* p42_sessionCmd_for_acceptingRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _62_p42_sessionCmd_for_acceptingRBC_partial;
  /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForSessionWithAcceptingRBCEstablished:<1> */
  kcg_bool tr_1_guard_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1;
  /* IfBlock1:then:handOver_with_2_Sessions_SM: */
  SSM_TR_handOver_with_2_Sessions_SM_then_IfBlock1 _63_handOver_with_2_Sessions_SM_fired_partial_then_IfBlock1;
  /* IfBlock1:then:handOver_with_2_Sessions_SM: */
  kcg_bool _64_handOver_with_2_Sessions_SM_reset_nxt_partial_then_IfBlock1;
  /* IfBlock1:then:handOver_with_2_Sessions_SM: */
  SSM_ST_handOver_with_2_Sessions_SM_then_IfBlock1 _65_handOver_with_2_Sessions_SM_state_nxt_partial_then_IfBlock1;
  /* IfBlock1:then:establishSessionWithAcceptingRBCOrdered/ */
  kcg_bool _66_establishSessionWithAcceptingRBCOrdered_partial_then_IfBlock1;
  /* IfBlock1:then:p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _67_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_then_IfBlock1;
  /* handoverInprogress/ */
  kcg_bool _68_handoverInprogress_partial;
  /* bufferInformationFromAcceptingRBC/ */
  kcg_bool _69_bufferInformationFromAcceptingRBC_partial;
  /* useInformationFromAcceptingRBC/ */
  kcg_bool _70_useInformationFromAcceptingRBC_partial;
  /* sendTrainData_2_acceptingRBC/ */
  kcg_bool _71_sendTrainData_2_acceptingRBC_partial;
  /* sendPositionReport_2_acceptingRBC/ */
  kcg_bool _72_sendPositionReport_2_acceptingRBC_partial;
  /* sendPositionReport_2_handingOverRBC/ */
  kcg_bool _73_sendPositionReport_2_handingOverRBC_partial;
  /* p45_radioNetworkRegistrationOrder_for_acceptingRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _74_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial;
  /* p45_radioNetworkRegistrationOrder_for_handingOverRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _75_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial;
  /* p42_sessionCmd_for_handingOverRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _76_p42_sessionCmd_for_handingOverRBC_partial;
  /* p42_sessionCmd_for_acceptingRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _77_p42_sessionCmd_for_acceptingRBC_partial;
  /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMinSafeRearEndPassing:<1> */
  kcg_bool tr_1_guard_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
  /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMinSafeRearEndPassing:<2> */
  kcg_bool tr_2_guard_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
  /* IfBlock1:then:handOver_with_2_Sessions_SM: */
  SSM_TR_handOver_with_2_Sessions_SM_then_IfBlock1 _78_handOver_with_2_Sessions_SM_fired_partial_then_IfBlock1;
  /* IfBlock1:then:handOver_with_2_Sessions_SM: */
  kcg_bool _79_handOver_with_2_Sessions_SM_reset_nxt_partial_then_IfBlock1;
  /* IfBlock1:then:handOver_with_2_Sessions_SM: */
  SSM_ST_handOver_with_2_Sessions_SM_then_IfBlock1 _80_handOver_with_2_Sessions_SM_state_nxt_partial_then_IfBlock1;
  /* IfBlock1:then:establishSessionWithAcceptingRBCOrdered/ */
  kcg_bool _81_establishSessionWithAcceptingRBCOrdered_partial_then_IfBlock1;
  /* IfBlock1:then:p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _82_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_then_IfBlock1;
  /* handoverInprogress/ */
  kcg_bool _83_handoverInprogress_partial;
  /* bufferInformationFromAcceptingRBC/ */
  kcg_bool _84_bufferInformationFromAcceptingRBC_partial;
  /* useInformationFromAcceptingRBC/ */
  kcg_bool _85_useInformationFromAcceptingRBC_partial;
  /* sendTrainData_2_acceptingRBC/ */
  kcg_bool _86_sendTrainData_2_acceptingRBC_partial;
  /* sendPositionReport_2_acceptingRBC/ */
  kcg_bool _87_sendPositionReport_2_acceptingRBC_partial;
  /* sendPositionReport_2_handingOverRBC/ */
  kcg_bool _88_sendPositionReport_2_handingOverRBC_partial;
  /* p45_radioNetworkRegistrationOrder_for_acceptingRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _89_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial;
  /* p45_radioNetworkRegistrationOrder_for_handingOverRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _90_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial;
  /* p42_sessionCmd_for_handingOverRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _91_p42_sessionCmd_for_handingOverRBC_partial;
  /* p42_sessionCmd_for_acceptingRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _92_p42_sessionCmd_for_acceptingRBC_partial;
  /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMaxSafeFrontEndPassing:<1> */
  kcg_bool tr_1_guard_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
  /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMaxSafeFrontEndPassing:<2> */
  kcg_bool tr_2_guard_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
  /* IfBlock1:then:handOver_with_2_Sessions_SM: */
  SSM_TR_handOver_with_2_Sessions_SM_then_IfBlock1 _93_handOver_with_2_Sessions_SM_fired_partial_then_IfBlock1;
  /* IfBlock1:then:handOver_with_2_Sessions_SM: */
  kcg_bool _94_handOver_with_2_Sessions_SM_reset_nxt_partial_then_IfBlock1;
  /* IfBlock1:then:handOver_with_2_Sessions_SM: */
  SSM_ST_handOver_with_2_Sessions_SM_then_IfBlock1 _95_handOver_with_2_Sessions_SM_state_nxt_partial_then_IfBlock1;
  /* IfBlock1:then:establishSessionWithAcceptingRBCOrdered/ */
  kcg_bool _96_establishSessionWithAcceptingRBCOrdered_partial_then_IfBlock1;
  /* IfBlock1:then:p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _97_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_then_IfBlock1;
  /* handoverInprogress/ */
  kcg_bool _98_handoverInprogress_partial;
  /* bufferInformationFromAcceptingRBC/ */
  kcg_bool _99_bufferInformationFromAcceptingRBC_partial;
  /* useInformationFromAcceptingRBC/ */
  kcg_bool _100_useInformationFromAcceptingRBC_partial;
  /* sendTrainData_2_acceptingRBC/ */
  kcg_bool _101_sendTrainData_2_acceptingRBC_partial;
  /* sendPositionReport_2_acceptingRBC/ */
  kcg_bool _102_sendPositionReport_2_acceptingRBC_partial;
  /* sendPositionReport_2_handingOverRBC/ */
  kcg_bool _103_sendPositionReport_2_handingOverRBC_partial;
  /* p45_radioNetworkRegistrationOrder_for_acceptingRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _104_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial;
  /* p45_radioNetworkRegistrationOrder_for_handingOverRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _105_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial;
  /* p42_sessionCmd_for_handingOverRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _106_p42_sessionCmd_for_handingOverRBC_partial;
  /* p42_sessionCmd_for_acceptingRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _107_p42_sessionCmd_for_acceptingRBC_partial;
  /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTransitionOrder:<1> */
  kcg_bool tr_1_guard_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1;
  /* IfBlock1:then:handOver_with_2_Sessions_SM: */
  SSM_TR_handOver_with_2_Sessions_SM_then_IfBlock1 _108_handOver_with_2_Sessions_SM_fired_partial_then_IfBlock1;
  /* IfBlock1:then:handOver_with_2_Sessions_SM: */
  kcg_bool _109_handOver_with_2_Sessions_SM_reset_nxt_partial_then_IfBlock1;
  /* IfBlock1:then:handOver_with_2_Sessions_SM: */
  SSM_ST_handOver_with_2_Sessions_SM_then_IfBlock1 _110_handOver_with_2_Sessions_SM_state_nxt_partial_then_IfBlock1;
  /* IfBlock1:then:establishSessionWithAcceptingRBCOrdered/ */
  kcg_bool _111_establishSessionWithAcceptingRBCOrdered_partial_then_IfBlock1;
  /* IfBlock1:then:p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _112_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_then_IfBlock1;
  /* handoverInprogress/ */
  kcg_bool _113_handoverInprogress_partial;
  /* bufferInformationFromAcceptingRBC/ */
  kcg_bool _114_bufferInformationFromAcceptingRBC_partial;
  /* useInformationFromAcceptingRBC/ */
  kcg_bool _115_useInformationFromAcceptingRBC_partial;
  /* sendTrainData_2_acceptingRBC/ */
  kcg_bool _116_sendTrainData_2_acceptingRBC_partial;
  /* sendPositionReport_2_acceptingRBC/ */
  kcg_bool _117_sendPositionReport_2_acceptingRBC_partial;
  /* sendPositionReport_2_handingOverRBC/ */
  kcg_bool _118_sendPositionReport_2_handingOverRBC_partial;
  /* p45_radioNetworkRegistrationOrder_for_acceptingRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _119_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial;
  /* p45_radioNetworkRegistrationOrder_for_handingOverRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _120_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial;
  /* p42_sessionCmd_for_handingOverRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _121_p42_sessionCmd_for_handingOverRBC_partial;
  /* p42_sessionCmd_for_acceptingRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _122_p42_sessionCmd_for_acceptingRBC_partial;
  /* p42_sessionCmd_for_acceptingRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _123_p42_sessionCmd_for_acceptingRBC_partial;
  /* p42_sessionCmd_for_handingOverRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _124_p42_sessionCmd_for_handingOverRBC_partial;
  /* p45_radioNetworkRegistrationOrder_for_handingOverRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _125_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial;
  /* p45_radioNetworkRegistrationOrder_for_acceptingRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _126_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial;
  /* sendPositionReport_2_handingOverRBC/ */
  kcg_bool _127_sendPositionReport_2_handingOverRBC_partial;
  /* sendPositionReport_2_acceptingRBC/ */
  kcg_bool _128_sendPositionReport_2_acceptingRBC_partial;
  /* sendTrainData_2_acceptingRBC/ */
  kcg_bool _129_sendTrainData_2_acceptingRBC_partial;
  /* useInformationFromAcceptingRBC/ */
  kcg_bool _130_useInformationFromAcceptingRBC_partial;
  /* bufferInformationFromAcceptingRBC/ */
  kcg_bool _131_bufferInformationFromAcceptingRBC_partial;
  /* handoverInprogress/ */
  kcg_bool _132_handoverInprogress_partial;
  /* IfBlock1:else:handOver_with_1_Session_SM: */
  kcg_bool handOver_with_1_Session_SM_reset_prv_else_IfBlock1;
  /* IfBlock1:else:handOver_with_1_Session_SM: */
  kcg_bool _133_handOver_with_1_Session_SM_reset_sel_else_IfBlock1;
  /* IfBlock1:else:p131_transitionOrder_loc/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg last_p131_transitionOrder_loc_else_IfBlock1;
  /* IfBlock1:else:p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _134_last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_else_IfBlock1;
  /* IfBlock1:else:handOver_with_1_Session_SM:EstablishSessionWithAcceptingRBC:<1> */
  kcg_bool tr_1_guard_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
  /* IfBlock1:else:handOver_with_1_Session_SM:EstablishSessionWithAcceptingRBC:<2> */
  kcg_bool tr_2_guard_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
  /* IfBlock1:else:handOver_with_1_Session_SM: */
  SSM_TR_handOver_with_1_Session_SM_else_IfBlock1 handOver_with_1_Session_SM_fired_partial_else_IfBlock1;
  /* IfBlock1:else:handOver_with_1_Session_SM: */
  kcg_bool _135_handOver_with_1_Session_SM_reset_nxt_partial_else_IfBlock1;
  /* IfBlock1:else:handOver_with_1_Session_SM: */
  SSM_ST_handOver_with_1_Session_SM_else_IfBlock1 handOver_with_1_Session_SM_state_nxt_partial_else_IfBlock1;
  /* IfBlock1:else:p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _136_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_else_IfBlock1;
  /* IfBlock1:else:p131_transitionOrder_loc/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg p131_transitionOrder_loc_partial_else_IfBlock1;
  /* handoverInprogress/ */
  kcg_bool _137_handoverInprogress_partial;
  /* sendTrainData_2_acceptingRBC/ */
  kcg_bool _138_sendTrainData_2_acceptingRBC_partial;
  /* sendPositionReport_2_acceptingRBC/ */
  kcg_bool _139_sendPositionReport_2_acceptingRBC_partial;
  /* sendPositionReport_2_handingOverRBC/ */
  kcg_bool _140_sendPositionReport_2_handingOverRBC_partial;
  /* p45_radioNetworkRegistrationOrder_for_acceptingRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _141_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial;
  /* p45_radioNetworkRegistrationOrder_for_handingOverRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _142_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial;
  /* p42_sessionCmd_for_handingOverRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _143_p42_sessionCmd_for_handingOverRBC_partial;
  /* IfBlock1:else:handOver_with_1_Session_SM:WaitForHandingOverRBCRegistered:<1> */
  kcg_bool _144_tr_1_guard_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1;
  /* IfBlock1:else:handOver_with_1_Session_SM:WaitForHandingOverRBCRegistered:<2> */
  kcg_bool _145_tr_2_guard_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1;
  /* IfBlock1:else:handOver_with_1_Session_SM: */
  SSM_TR_handOver_with_1_Session_SM_else_IfBlock1 _146_handOver_with_1_Session_SM_fired_partial_else_IfBlock1;
  /* IfBlock1:else:handOver_with_1_Session_SM: */
  kcg_bool _147_handOver_with_1_Session_SM_reset_nxt_partial_else_IfBlock1;
  /* IfBlock1:else:handOver_with_1_Session_SM: */
  SSM_ST_handOver_with_1_Session_SM_else_IfBlock1 _148_handOver_with_1_Session_SM_state_nxt_partial_else_IfBlock1;
  /* IfBlock1:else:p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _149_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_else_IfBlock1;
  /* IfBlock1:else:p131_transitionOrder_loc/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _150_p131_transitionOrder_loc_partial_else_IfBlock1;
  /* handoverInprogress/ */
  kcg_bool _151_handoverInprogress_partial;
  /* sendTrainData_2_acceptingRBC/ */
  kcg_bool _152_sendTrainData_2_acceptingRBC_partial;
  /* sendPositionReport_2_acceptingRBC/ */
  kcg_bool _153_sendPositionReport_2_acceptingRBC_partial;
  /* sendPositionReport_2_handingOverRBC/ */
  kcg_bool _154_sendPositionReport_2_handingOverRBC_partial;
  /* p45_radioNetworkRegistrationOrder_for_acceptingRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _155_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial;
  /* p45_radioNetworkRegistrationOrder_for_handingOverRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _156_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial;
  /* p42_sessionCmd_for_handingOverRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _157_p42_sessionCmd_for_handingOverRBC_partial;
  /* IfBlock1:else:handOver_with_1_Session_SM:RegisterAcceptingRBC:<1> */
  kcg_bool tr_1_guard_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
  /* IfBlock1:else:handOver_with_1_Session_SM:RegisterAcceptingRBC:<2> */
  kcg_bool tr_2_guard_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
  /* IfBlock1:else:handOver_with_1_Session_SM: */
  SSM_TR_handOver_with_1_Session_SM_else_IfBlock1 _158_handOver_with_1_Session_SM_fired_partial_else_IfBlock1;
  /* IfBlock1:else:handOver_with_1_Session_SM: */
  kcg_bool _159_handOver_with_1_Session_SM_reset_nxt_partial_else_IfBlock1;
  /* IfBlock1:else:handOver_with_1_Session_SM: */
  SSM_ST_handOver_with_1_Session_SM_else_IfBlock1 _160_handOver_with_1_Session_SM_state_nxt_partial_else_IfBlock1;
  /* IfBlock1:else:p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _161_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_else_IfBlock1;
  /* IfBlock1:else:p131_transitionOrder_loc/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _162_p131_transitionOrder_loc_partial_else_IfBlock1;
  /* handoverInprogress/ */
  kcg_bool _163_handoverInprogress_partial;
  /* sendTrainData_2_acceptingRBC/ */
  kcg_bool _164_sendTrainData_2_acceptingRBC_partial;
  /* sendPositionReport_2_acceptingRBC/ */
  kcg_bool _165_sendPositionReport_2_acceptingRBC_partial;
  /* sendPositionReport_2_handingOverRBC/ */
  kcg_bool _166_sendPositionReport_2_handingOverRBC_partial;
  /* p45_radioNetworkRegistrationOrder_for_acceptingRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _167_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial;
  /* p45_radioNetworkRegistrationOrder_for_handingOverRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _168_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial;
  /* p42_sessionCmd_for_handingOverRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _169_p42_sessionCmd_for_handingOverRBC_partial;
  /* IfBlock1:else:handOver_with_1_Session_SM:WaitForHandingOverRBCTerminated:<1> */
  kcg_bool _170_tr_1_guard_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1;
  /* IfBlock1:else:handOver_with_1_Session_SM:WaitForHandingOverRBCTerminated:<2> */
  kcg_bool _171_tr_2_guard_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1;
  /* IfBlock1:else:handOver_with_1_Session_SM: */
  SSM_TR_handOver_with_1_Session_SM_else_IfBlock1 _172_handOver_with_1_Session_SM_fired_partial_else_IfBlock1;
  /* IfBlock1:else:handOver_with_1_Session_SM: */
  kcg_bool _173_handOver_with_1_Session_SM_reset_nxt_partial_else_IfBlock1;
  /* IfBlock1:else:handOver_with_1_Session_SM: */
  SSM_ST_handOver_with_1_Session_SM_else_IfBlock1 _174_handOver_with_1_Session_SM_state_nxt_partial_else_IfBlock1;
  /* IfBlock1:else:p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _175_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_else_IfBlock1;
  /* IfBlock1:else:p131_transitionOrder_loc/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _176_p131_transitionOrder_loc_partial_else_IfBlock1;
  /* handoverInprogress/ */
  kcg_bool _177_handoverInprogress_partial;
  /* sendTrainData_2_acceptingRBC/ */
  kcg_bool _178_sendTrainData_2_acceptingRBC_partial;
  /* sendPositionReport_2_acceptingRBC/ */
  kcg_bool _179_sendPositionReport_2_acceptingRBC_partial;
  /* sendPositionReport_2_handingOverRBC/ */
  kcg_bool _180_sendPositionReport_2_handingOverRBC_partial;
  /* p45_radioNetworkRegistrationOrder_for_acceptingRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _181_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial;
  /* p45_radioNetworkRegistrationOrder_for_handingOverRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _182_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial;
  /* p42_sessionCmd_for_handingOverRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _183_p42_sessionCmd_for_handingOverRBC_partial;
  /* IfBlock1:else:handOver_with_1_Session_SM:WaitForTerminationOrderFromHandingOverRBC:<1> */
  kcg_bool _184_tr_1_guard_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1;
  /* IfBlock1:else:handOver_with_1_Session_SM:WaitForTerminationOrderFromHandingOverRBC:<2> */
  kcg_bool _185_tr_2_guard_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1;
  /* IfBlock1:else:handOver_with_1_Session_SM: */
  SSM_TR_handOver_with_1_Session_SM_else_IfBlock1 _186_handOver_with_1_Session_SM_fired_partial_else_IfBlock1;
  /* IfBlock1:else:handOver_with_1_Session_SM: */
  kcg_bool _187_handOver_with_1_Session_SM_reset_nxt_partial_else_IfBlock1;
  /* IfBlock1:else:handOver_with_1_Session_SM: */
  SSM_ST_handOver_with_1_Session_SM_else_IfBlock1 _188_handOver_with_1_Session_SM_state_nxt_partial_else_IfBlock1;
  /* IfBlock1:else:p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _189_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_else_IfBlock1;
  /* IfBlock1:else:p131_transitionOrder_loc/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _190_p131_transitionOrder_loc_partial_else_IfBlock1;
  /* handoverInprogress/ */
  kcg_bool _191_handoverInprogress_partial;
  /* sendTrainData_2_acceptingRBC/ */
  kcg_bool _192_sendTrainData_2_acceptingRBC_partial;
  /* sendPositionReport_2_acceptingRBC/ */
  kcg_bool _193_sendPositionReport_2_acceptingRBC_partial;
  /* sendPositionReport_2_handingOverRBC/ */
  kcg_bool _194_sendPositionReport_2_handingOverRBC_partial;
  /* p45_radioNetworkRegistrationOrder_for_acceptingRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _195_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial;
  /* p45_radioNetworkRegistrationOrder_for_handingOverRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _196_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial;
  /* p42_sessionCmd_for_handingOverRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _197_p42_sessionCmd_for_handingOverRBC_partial;
  /* IfBlock1:else:handOver_with_1_Session_SM:WaitForSessionWithAcceptingRBCEstablished:<1> */
  kcg_bool _198_tr_1_guard_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1;
  /* IfBlock1:else:handOver_with_1_Session_SM:WaitForSessionWithAcceptingRBCEstablished:<2> */
  kcg_bool tr_2_guard_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1;
  /* IfBlock1:else:handOver_with_1_Session_SM: */
  SSM_TR_handOver_with_1_Session_SM_else_IfBlock1 _199_handOver_with_1_Session_SM_fired_partial_else_IfBlock1;
  /* IfBlock1:else:handOver_with_1_Session_SM: */
  kcg_bool _200_handOver_with_1_Session_SM_reset_nxt_partial_else_IfBlock1;
  /* IfBlock1:else:handOver_with_1_Session_SM: */
  SSM_ST_handOver_with_1_Session_SM_else_IfBlock1 _201_handOver_with_1_Session_SM_state_nxt_partial_else_IfBlock1;
  /* IfBlock1:else:p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _202_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_else_IfBlock1;
  /* IfBlock1:else:p131_transitionOrder_loc/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _203_p131_transitionOrder_loc_partial_else_IfBlock1;
  /* handoverInprogress/ */
  kcg_bool _204_handoverInprogress_partial;
  /* sendTrainData_2_acceptingRBC/ */
  kcg_bool _205_sendTrainData_2_acceptingRBC_partial;
  /* sendPositionReport_2_acceptingRBC/ */
  kcg_bool _206_sendPositionReport_2_acceptingRBC_partial;
  /* sendPositionReport_2_handingOverRBC/ */
  kcg_bool _207_sendPositionReport_2_handingOverRBC_partial;
  /* p45_radioNetworkRegistrationOrder_for_acceptingRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _208_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial;
  /* p45_radioNetworkRegistrationOrder_for_handingOverRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _209_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial;
  /* p42_sessionCmd_for_handingOverRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _210_p42_sessionCmd_for_handingOverRBC_partial;
  /* IfBlock1:else:handOver_with_1_Session_SM:WaitForMinSafeRearEndPassing:<1> */
  kcg_bool _211_tr_1_guard_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1;
  /* IfBlock1:else:handOver_with_1_Session_SM:WaitForMinSafeRearEndPassing:<2> */
  kcg_bool _212_tr_2_guard_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1;
  /* IfBlock1:else:handOver_with_1_Session_SM: */
  SSM_TR_handOver_with_1_Session_SM_else_IfBlock1 _213_handOver_with_1_Session_SM_fired_partial_else_IfBlock1;
  /* IfBlock1:else:handOver_with_1_Session_SM: */
  kcg_bool _214_handOver_with_1_Session_SM_reset_nxt_partial_else_IfBlock1;
  /* IfBlock1:else:handOver_with_1_Session_SM: */
  SSM_ST_handOver_with_1_Session_SM_else_IfBlock1 _215_handOver_with_1_Session_SM_state_nxt_partial_else_IfBlock1;
  /* IfBlock1:else:p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _216_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_else_IfBlock1;
  /* IfBlock1:else:p131_transitionOrder_loc/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _217_p131_transitionOrder_loc_partial_else_IfBlock1;
  /* handoverInprogress/ */
  kcg_bool _218_handoverInprogress_partial;
  /* sendTrainData_2_acceptingRBC/ */
  kcg_bool _219_sendTrainData_2_acceptingRBC_partial;
  /* sendPositionReport_2_acceptingRBC/ */
  kcg_bool _220_sendPositionReport_2_acceptingRBC_partial;
  /* sendPositionReport_2_handingOverRBC/ */
  kcg_bool _221_sendPositionReport_2_handingOverRBC_partial;
  /* p45_radioNetworkRegistrationOrder_for_acceptingRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _222_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial;
  /* p45_radioNetworkRegistrationOrder_for_handingOverRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _223_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial;
  /* p42_sessionCmd_for_handingOverRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _224_p42_sessionCmd_for_handingOverRBC_partial;
  /* IfBlock1:else:handOver_with_1_Session_SM:WaitForMaxSafeFrontEndPassing:<1> */
  kcg_bool _225_tr_1_guard_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1;
  /* IfBlock1:else:handOver_with_1_Session_SM:WaitForMaxSafeFrontEndPassing:<2> */
  kcg_bool _226_tr_2_guard_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1;
  /* IfBlock1:else:handOver_with_1_Session_SM: */
  SSM_TR_handOver_with_1_Session_SM_else_IfBlock1 _227_handOver_with_1_Session_SM_fired_partial_else_IfBlock1;
  /* IfBlock1:else:handOver_with_1_Session_SM: */
  kcg_bool _228_handOver_with_1_Session_SM_reset_nxt_partial_else_IfBlock1;
  /* IfBlock1:else:handOver_with_1_Session_SM: */
  SSM_ST_handOver_with_1_Session_SM_else_IfBlock1 _229_handOver_with_1_Session_SM_state_nxt_partial_else_IfBlock1;
  /* IfBlock1:else:p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _230_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_else_IfBlock1;
  /* IfBlock1:else:p131_transitionOrder_loc/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _231_p131_transitionOrder_loc_partial_else_IfBlock1;
  /* handoverInprogress/ */
  kcg_bool _232_handoverInprogress_partial;
  /* sendTrainData_2_acceptingRBC/ */
  kcg_bool _233_sendTrainData_2_acceptingRBC_partial;
  /* sendPositionReport_2_acceptingRBC/ */
  kcg_bool _234_sendPositionReport_2_acceptingRBC_partial;
  /* sendPositionReport_2_handingOverRBC/ */
  kcg_bool _235_sendPositionReport_2_handingOverRBC_partial;
  /* p45_radioNetworkRegistrationOrder_for_acceptingRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _236_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial;
  /* p45_radioNetworkRegistrationOrder_for_handingOverRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _237_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial;
  /* p42_sessionCmd_for_handingOverRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _238_p42_sessionCmd_for_handingOverRBC_partial;
  /* IfBlock1:else:handOver_with_1_Session_SM:WaitForTransitionOrder:<1> */
  kcg_bool _239_tr_1_guard_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1;
  /* IfBlock1:else:handOver_with_1_Session_SM: */
  SSM_TR_handOver_with_1_Session_SM_else_IfBlock1 _240_handOver_with_1_Session_SM_fired_partial_else_IfBlock1;
  /* IfBlock1:else:handOver_with_1_Session_SM: */
  kcg_bool _241_handOver_with_1_Session_SM_reset_nxt_partial_else_IfBlock1;
  /* IfBlock1:else:handOver_with_1_Session_SM: */
  SSM_ST_handOver_with_1_Session_SM_else_IfBlock1 _242_handOver_with_1_Session_SM_state_nxt_partial_else_IfBlock1;
  /* IfBlock1:else:p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _243_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_else_IfBlock1;
  /* IfBlock1:else:p131_transitionOrder_loc/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _244_p131_transitionOrder_loc_partial_else_IfBlock1;
  /* handoverInprogress/ */
  kcg_bool _245_handoverInprogress_partial;
  /* sendTrainData_2_acceptingRBC/ */
  kcg_bool _246_sendTrainData_2_acceptingRBC_partial;
  /* sendPositionReport_2_acceptingRBC/ */
  kcg_bool _247_sendPositionReport_2_acceptingRBC_partial;
  /* sendPositionReport_2_handingOverRBC/ */
  kcg_bool _248_sendPositionReport_2_handingOverRBC_partial;
  /* p45_radioNetworkRegistrationOrder_for_acceptingRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _249_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial;
  /* p45_radioNetworkRegistrationOrder_for_handingOverRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _250_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial;
  /* p42_sessionCmd_for_handingOverRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _251_p42_sessionCmd_for_handingOverRBC_partial;
  /* handoverFinished/ */
  kcg_bool last_handoverFinished;

  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->_L8,
    (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->InitVal_Memory_1_struct,
    &outC->_L8);
  kcg_copy_struct_278835(
    &outC->_L9_Memory_1_struct,
    &outC->InitVal_Memory_1_struct);
  last_handoverFinished = outC->handoverFinished;
  outC->_L6 = last_handoverFinished;
  outC->Reset_Memory_1_struct = outC->_L6;
  outC->_L1_Memory_1_struct = outC->Reset_Memory_1_struct;
  kcg_copy_struct_278835(
    &outC->_L2_Memory_1_struct,
    &outC->InitVal_Memory_1_struct);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&outC->_L7, p131_transitionOrder);
  outC->_L3 = outC->_L7.valid;
  outC->MemCond_Memory_1_struct = outC->_L3;
  outC->_L3_Memory_1_struct = outC->MemCond_Memory_1_struct;
  /* @1/_L5= */
  if (outC->init) {
    kcg_copy_struct_278835(&outC->_L5_Memory_1_struct, &outC->_L9_Memory_1_struct);
  }
  else {
    kcg_copy_struct_278835(&outC->_L5_Memory_1_struct, &outC->_L8_Memory_1_struct);
  }
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->M_Input_Memory_1_struct,
    &outC->_L7);
  kcg_copy_struct_278835(
    &outC->_L6_Memory_1_struct,
    &outC->M_Input_Memory_1_struct);
  /* @1/_L7= */
  if (outC->_L3_Memory_1_struct) {
    kcg_copy_struct_278835(&outC->_L7_Memory_1_struct, &outC->_L6_Memory_1_struct);
  }
  else {
    kcg_copy_struct_278835(&outC->_L7_Memory_1_struct, &outC->_L5_Memory_1_struct);
  }
  /* @1/_L8= */
  if (outC->_L1_Memory_1_struct) {
    kcg_copy_struct_278835(&outC->_L8_Memory_1_struct, &outC->_L2_Memory_1_struct);
  }
  else {
    kcg_copy_struct_278835(&outC->_L8_Memory_1_struct, &outC->_L7_Memory_1_struct);
  }
  kcg_copy_struct_278835(&outC->Out_Memory_1_struct, &outC->_L8_Memory_1_struct);
  outC->IfBlock1_clock = sessionManagementAbility ==
    isAbleToManageTwoSessions_Handover_Pkg;
  if (outC->IfBlock1_clock) {
    outC->_25_handOver_with_2_Sessions_SM_state_sel_then_IfBlock1 =
      outC->handOver_with_2_Sessions_SM_state_nxt_then_IfBlock1;
    outC->_24_handOver_with_2_Sessions_SM_state_act_then_IfBlock1 =
      outC->_25_handOver_with_2_Sessions_SM_state_sel_then_IfBlock1;
    outC->handOver_with_2_Sessions_SM_clock_then_IfBlock1 =
      outC->_24_handOver_with_2_Sessions_SM_state_act_then_IfBlock1;
  }
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->_L2,
    &outC->Out_Memory_1_struct);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->p131_transitionOrder_mem,
    &outC->_L2);
  if (outC->IfBlock1_clock) {
    switch (outC->handOver_with_2_Sessions_SM_clock_then_IfBlock1) {
      case SSM_st_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1 :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1,
          &outC->p131_transitionOrder_mem);
        /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTransitionOrder:_L6=(Handover_Pkg::handoverUtils_Pkg::p131_rbcTransitionOrder_2_p42_establishSession#2)/ */
        p131_rbcTransitionOrder_2_Handover_Pkg_handoverUtils_Pkg(
          &outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1,
          &outC->_8_Context_p131_rbcTransitionOrder_2_p42_establishSession_2);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1,
          &outC->_8_Context_p131_rbcTransitionOrder_2_p42_establishSession_2.p42_establishSession);
        kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
          &outC->_L2_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1,
          morcStatusFromAcceptingRBC);
        /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTransitionOrder:_L4=(Handover_Pkg::handoverUtils_Pkg::checkSessionCmd#2)/ */
        checkSessionCmd_Handover_Pkg_handoverUtils_Pkg(
          &outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1,
          &outC->_L2_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1,
          &outC->Context_checkSessionCmd_2);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1,
          &outC->Context_checkSessionCmd_2.p42_sessionCmd_out);
        outC->_L5_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.valid;
        _111_establishSessionWithAcceptingRBCOrdered_partial_then_IfBlock1 =
          outC->_L5_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1;
        tr_1_guard_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1 =
          _111_establishSessionWithAcceptingRBCOrdered_partial_then_IfBlock1;
        outC->tr_1_clock_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1 =
          tr_1_guard_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1;
        break;
      default :
        /* this branch is empty */
        break;
    }
  }
  outC->newTransitionOrderReceived = outC->_L3;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    switch (outC->handOver_with_2_Sessions_SM_clock_then_IfBlock1) {
      case SSM_st_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 :
        tr_1_guard_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->newTransitionOrderReceived;
        outC->tr_1_clock_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
          tr_1_guard_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
        outC->_L6_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
          maxSafeFrontEndPassesHandOverLocation;
        outC->_L37_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
          sp_maintaining_RCM_Session_Types_Pkg;
        kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
          &outC->_L2_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1,
          morcStatusFromHandingOverRBC);
        kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
          &outC->_L36_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1,
          &outC->_L2_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.session);
        outC->_L1_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L36_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.phase;
        outC->_L14_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L1_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 ==
          outC->_L37_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
        outC->_L5_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L14_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 &
          outC->_L6_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
        break;
      default :
        /* this branch is empty */
        break;
    }
    _3_handOver_with_2_Sessions_SM_reset_sel_then_IfBlock1 =
      outC->handOver_with_2_Sessions_SM_reset_nxt_then_IfBlock1;
    switch (outC->_25_handOver_with_2_Sessions_SM_state_sel_then_IfBlock1) {
      case SSM_st_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 :
        if (_3_handOver_with_2_Sessions_SM_reset_sel_then_IfBlock1) {
          /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMaxSafeFrontEndPassing:_L8=(digital::RisingEdge#5)/ */
          RisingEdge_reset_digital(&outC->Context_RisingEdge_5);
        }
        break;
      default :
        /* this branch is empty */
        break;
    }
    switch (outC->handOver_with_2_Sessions_SM_clock_then_IfBlock1) {
      case SSM_st_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 :
        tr_1_guard_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->newTransitionOrderReceived;
        outC->tr_1_clock_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
          tr_1_guard_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
        outC->_L16_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
          minSafeReadEndPassesHandOverLocation;
        outC->_L20_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
          sp_maintaining_RCM_Session_Types_Pkg;
        kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
          &outC->_L2_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1,
          morcStatusFromHandingOverRBC);
        kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
          &outC->_L21_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1,
          &outC->_L2_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.session);
        outC->_L18_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L21_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.phase;
        outC->_L19_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L18_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 ==
          outC->_L20_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
        outC->_L5_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L19_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 &
          outC->_L16_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
        break;
      case SSM_st_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 :
        /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMaxSafeFrontEndPassing:_L8=(digital::RisingEdge#5)/ */
        RisingEdge_digital(
          outC->_L5_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1,
          &outC->Context_RisingEdge_5);
        outC->_L8_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->Context_RisingEdge_5.RE_Output;
        _103_sendPositionReport_2_handingOverRBC_partial =
          outC->_L8_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
        tr_2_guard_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
          _103_sendPositionReport_2_handingOverRBC_partial;
        if (outC->tr_1_clock_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1) {
        }
        else {
          outC->tr_2_clock_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
            tr_2_guard_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        break;
      default :
        /* this branch is empty */
        break;
    }
    switch (outC->_25_handOver_with_2_Sessions_SM_state_sel_then_IfBlock1) {
      case SSM_st_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 :
        if (_3_handOver_with_2_Sessions_SM_reset_sel_then_IfBlock1) {
          /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMinSafeRearEndPassing:_L8=(digital::RisingEdge#8)/ */
          RisingEdge_reset_digital(&outC->Context_RisingEdge_8);
        }
        break;
      default :
        /* this branch is empty */
        break;
    }
    switch (outC->handOver_with_2_Sessions_SM_clock_then_IfBlock1) {
      case SSM_st_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 :
        tr_1_guard_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->newTransitionOrderReceived;
        outC->tr_1_clock_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
          tr_1_guard_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
        outC->_L45_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
          mrs_unregistered_RCM_Types_Pkg;
        kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
          &outC->_L24_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1,
          morcStatusFromHandingOverRBC);
        kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
          &outC->_L43_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1,
          &outC->_L24_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.registration);
        outC->_L16_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L43_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.status;
        outC->_L18_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L16_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 ==
          outC->_L45_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
        outC->_L46_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
          mrs_registered_RCM_Types_Pkg;
        outC->_L21_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L46_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 ==
          outC->_L16_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
        outC->_L34_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L43_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.nid_mn;
        break;
      case SSM_st_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1 :
        _31_tr_1_guard_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->newTransitionOrderReceived;
        outC->_10_tr_1_clock_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1 =
          _31_tr_1_guard_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1;
        outC->_L13_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1 =
          sp_terminated_RCM_Session_Types_Pkg;
        kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
          &outC->_L2_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1,
          morcStatusFromHandingOverRBC);
        kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
          &outC->_L14_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1,
          &outC->_L2_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1.session);
        outC->_L12_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L14_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1.phase;
        outC->_L11_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L12_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1 ==
          outC->_L13_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1;
        outC->_L15_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1 =
          mcs_disconnected_RCM_Types_Pkg;
        kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
          &outC->_L10_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1,
          &outC->_L2_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1.connection);
        outC->_L4_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L10_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1.status;
        outC->_L3_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L4_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1 ==
          outC->_L15_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1;
        outC->_L8_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L3_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1 &
          outC->_L11_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1;
        outC->sessionWithHandingOverRBC_terminated_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L8_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1;
        _32_tr_2_guard_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->sessionWithHandingOverRBC_terminated_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1;
        if (outC->_10_tr_1_clock_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1) {
        }
        else {
          outC->_9_tr_2_clock_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1 =
            _32_tr_2_guard_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        break;
      case SSM_st_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 :
        tr_1_guard_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->newTransitionOrderReceived;
        outC->tr_1_clock_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
          tr_1_guard_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
        outC->_L32_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
          Q_RBC_Terminate_communication_session;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1,
          p42_terminateCmd_from_handingOverRBC);
        kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
          &outC->_L7_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1,
          morcStatusFromHandingOverRBC);
        /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTerminationOrderFromHandingOverRBC:_L3=(Handover_Pkg::handoverUtils_Pkg::checkSessionCmd#3)/ */
        checkSessionCmd_Handover_Pkg_handoverUtils_Pkg(
          &outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1,
          &outC->_L7_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1,
          &outC->Context_checkSessionCmd_3);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1,
          &outC->Context_checkSessionCmd_3.p42_sessionCmd_out);
        kcg_copy_CompressedPackets_T_Common_Types_Pkg(
          &outC->_L28_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1,
          &outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.packets);
        /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTerminationOrderFromHandingOverRBC:_L26=(TM::Read_P042#1)/ */
        Read_P042_TM(
          &outC->_L28_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1,
          &outC->Context_Read_P042_1);
        outC->_L26_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->Context_Read_P042_1.received;
        kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg(
          &outC->_L27_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1,
          &outC->Context_Read_P042_1.P042_OBU_out);
        outC->_L30_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L27_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.q_rbc;
        outC->_L31_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L30_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 ==
          outC->_L32_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
        outC->_L29_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.valid;
        outC->_L33_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L29_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 &
          outC->_L26_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 &
          outC->_L31_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
        outC->terminationWithHandingOverRBCOrdered_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L33_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
        tr_2_guard_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->terminationWithHandingOverRBCOrdered_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
        if (outC->tr_1_clock_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1) {
        }
        else {
          outC->tr_2_clock_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
            tr_2_guard_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        break;
      case SSM_st_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1 :
        outC->_L23_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1 =
          sp_maintaining_RCM_Session_Types_Pkg;
        kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
          &outC->_L5_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1,
          morcStatusFromAcceptingRBC);
        kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
          &outC->_L21_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1,
          &outC->_L5_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1.session);
        outC->_L20_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L21_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1.phase;
        outC->_L22_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L20_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1 ==
          outC->_L23_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1;
        outC->sessionWithAcceptingRBCEstablished_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L22_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1;
        tr_1_guard_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->sessionWithAcceptingRBCEstablished_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1;
        outC->tr_1_clock_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1 =
          tr_1_guard_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1;
        break;
      case SSM_st_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 :
        /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMinSafeRearEndPassing:_L8=(digital::RisingEdge#8)/ */
        RisingEdge_digital(
          outC->_L5_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1,
          &outC->Context_RisingEdge_8);
        outC->_L8_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->Context_RisingEdge_8.RE_Output;
        _88_sendPositionReport_2_handingOverRBC_partial =
          outC->_L8_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
        tr_2_guard_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
          _88_sendPositionReport_2_handingOverRBC_partial;
        if (outC->tr_1_clock_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1) {
        }
        else {
          outC->tr_2_clock_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
            tr_2_guard_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        break;
      default :
        /* this branch is empty */
        break;
    }
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_then_IfBlock1,
      &outC->_4_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_then_IfBlock1);
    /* IfBlock1:then:handOver_with_2_Sessions_SM: */
    switch (outC->handOver_with_2_Sessions_SM_clock_then_IfBlock1) {
      case SSM_st_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1 :
        tr_1_guard_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->newTransitionOrderReceived;
        outC->tr_1_clock_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1 =
          tr_1_guard_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1;
        kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
          &outC->_L4_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1,
          morcStatusFromHandingOverRBC);
        kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
          &outC->_L14_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1,
          &outC->_L4_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1.registration);
        outC->_L7_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L14_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1.status;
        outC->_L15_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1 =
          mrs_registered_RCM_Types_Pkg;
        outC->_L9_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L15_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1 ==
          outC->_L7_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1;
        outC->handingOverRBCReregistered_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L9_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1;
        tr_2_guard_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->handingOverRBCReregistered_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1;
        /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForHandingOverRBCRegistered:<1> */
        if (outC->tr_1_clock_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1) {
          outC->sNotReady = kcg_true;
        }
        else {
          outC->tr_2_clock_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1 =
            tr_2_guard_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1;
          /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForHandingOverRBCRegistered:<2> */
          if (outC->tr_2_clock_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1) {
            outC->sNotReady = kcg_true;
          }
          else {
            outC->sNotReady = kcg_false;
          }
        }
        break;
      case SSM_st_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_20_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_then_IfBlock1,
          &last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_then_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1,
          &_20_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_then_IfBlock1);
        kcg_copy_CompressedPackets_T_Common_Types_Pkg(
          &outC->_L33_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1,
          &outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.packets);
        /* IfBlock1:then:handOver_with_2_Sessions_SM:ReregisterHandingOverRBC:_L25=(TM::Read_P045#2)/ */
        Read_P045_TM(
          &outC->_L33_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1,
          &outC->Context_Read_P045_2);
        outC->_L25_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->Context_Read_P045_2.received;
        kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
          &outC->_L26_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1,
          &outC->Context_Read_P045_2.P045_OBU_out);
        outC->_L17_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L26_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.nid_mn;
        outC->_L19_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L17_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 !=
          outC->_L34_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
        outC->_L22_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L19_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 &
          outC->_L21_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
        outC->_L15_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L22_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 |
          outC->_L18_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
        outC->_L20_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.valid;
        outC->_L23_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L20_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 &
          outC->_L25_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
        outC->_L28_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L23_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 &
          outC->_L15_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
        outC->_L39_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L28_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 &
          outC->_L18_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
        outC->_L38_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
          !outC->_L28_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
        outC->_L36_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L38_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 &
          outC->_L21_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
        outC->_L35_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L36_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 |
          outC->_L39_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
        outC->unregistered_or_noReregisterRequired_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L35_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
        tr_2_guard_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->unregistered_or_noReregisterRequired_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
        /* IfBlock1:then:handOver_with_2_Sessions_SM:ReregisterHandingOverRBC:<1> */
        if (outC->tr_1_clock_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1) {
          outC->sNotReady = kcg_true;
        }
        else {
          outC->tr_2_clock_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
            tr_2_guard_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
          /* IfBlock1:then:handOver_with_2_Sessions_SM:ReregisterHandingOverRBC:<2> */
          if (outC->tr_2_clock_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1) {
            outC->sNotReady = kcg_true;
          }
          else {
            outC->sNotReady = kcg_false;
          }
        }
        break;
      case SSM_st_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1 :
        /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForHandingOverRBCTerminated:<1> */
        if (outC->_10_tr_1_clock_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1) {
          outC->sNotReady = kcg_true;
        }
        else /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForHandingOverRBCTerminated:<2> */
        if (outC->_9_tr_2_clock_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1) {
          outC->sNotReady = kcg_true;
        }
        else {
          outC->sNotReady = kcg_false;
        }
        break;
      case SSM_st_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 :
        /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTerminationOrderFromHandingOverRBC:<1> */
        if (outC->tr_1_clock_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1) {
          outC->sNotReady = kcg_true;
        }
        else /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTerminationOrderFromHandingOverRBC:<2> */
        if (outC->tr_2_clock_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1) {
          outC->sNotReady = kcg_true;
        }
        else {
          outC->sNotReady = kcg_false;
        }
        break;
      case SSM_st_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1 :
        /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForSessionWithAcceptingRBCEstablished:<1> */
        if (outC->tr_1_clock_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1) {
          outC->sNotReady = kcg_true;
        }
        else {
          outC->sNotReady = kcg_false;
        }
        break;
      case SSM_st_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 :
        /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMinSafeRearEndPassing:<1> */
        if (outC->tr_1_clock_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1) {
          outC->sNotReady = kcg_true;
        }
        else /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMinSafeRearEndPassing:<2> */
        if (outC->tr_2_clock_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1) {
          outC->sNotReady = kcg_true;
        }
        else {
          outC->sNotReady = kcg_false;
        }
        break;
      case SSM_st_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 :
        /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMaxSafeFrontEndPassing:<1> */
        if (outC->tr_1_clock_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1) {
          outC->sNotReady = kcg_true;
        }
        else /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMaxSafeFrontEndPassing:<2> */
        if (outC->tr_2_clock_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1) {
          outC->sNotReady = kcg_true;
        }
        else {
          outC->sNotReady = kcg_false;
        }
        break;
      case SSM_st_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1 :
        /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTransitionOrder:<1> */
        if (outC->tr_1_clock_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1) {
          outC->sNotReady = kcg_true;
        }
        else {
          outC->sNotReady = kcg_false;
        }
        break;
      default :
        /* this default branch is unreachable */
        break;
    }
  }
  else {
    outC->_28_handOver_with_1_Session_SM_state_sel_else_IfBlock1 =
      outC->handOver_with_1_Session_SM_state_nxt_else_IfBlock1;
    outC->_27_handOver_with_1_Session_SM_state_act_else_IfBlock1 =
      outC->_28_handOver_with_1_Session_SM_state_sel_else_IfBlock1;
    outC->handOver_with_1_Session_SM_clock_else_IfBlock1 =
      outC->_27_handOver_with_1_Session_SM_state_act_else_IfBlock1;
    switch (outC->handOver_with_1_Session_SM_clock_else_IfBlock1) {
      case _278_SSM_st_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1 :
        _225_tr_1_guard_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->newTransitionOrderReceived;
        outC->_21_tr_1_clock_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1 =
          _225_tr_1_guard_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1;
        outC->_L672_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1 =
          maxSafeFrontEndPassesHandOverLocation;
        outC->_L16_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1 =
          sp_maintaining_RCM_Session_Types_Pkg;
        kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
          &outC->_L274_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1,
          morcStatusFromHandingOverRBC);
        kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
          &outC->_L1576_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1,
          &outC->_L274_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1.session);
        outC->_L175_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->_L1576_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1.phase;
        outC->_L1470_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->_L175_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1 ==
          outC->_L16_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1;
        outC->_L573_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->_L1470_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1 &
          outC->_L672_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1;
        break;
      case _279_SSM_st_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1 :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1,
          &outC->p131_transitionOrder_mem);
        outC->_L14_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.valid;
        outC->transitionOrdered_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->_L14_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1;
        _239_tr_1_guard_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->transitionOrdered_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1;
        outC->_22_tr_1_clock_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1 =
          _239_tr_1_guard_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1;
        break;
      default :
        /* this branch is empty */
        break;
    }
    _133_handOver_with_1_Session_SM_reset_sel_else_IfBlock1 =
      outC->handOver_with_1_Session_SM_reset_nxt_else_IfBlock1;
    switch (outC->_28_handOver_with_1_Session_SM_state_sel_else_IfBlock1) {
      case _278_SSM_st_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1 :
        if (_133_handOver_with_1_Session_SM_reset_sel_else_IfBlock1) {
          /* IfBlock1:else:handOver_with_1_Session_SM:WaitForMaxSafeFrontEndPassing:_L8=(digital::RisingEdge#26)/ */
          RisingEdge_reset_digital(&outC->Context_RisingEdge_26);
        }
        break;
      default :
        /* this branch is empty */
        break;
    }
    switch (outC->handOver_with_1_Session_SM_clock_else_IfBlock1) {
      case _280_SSM_st_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1 :
        _211_tr_1_guard_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->newTransitionOrderReceived;
        outC->_19_tr_1_clock_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1 =
          _211_tr_1_guard_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1;
        outC->_L1667_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1 =
          minSafeReadEndPassesHandOverLocation;
        outC->_L1869_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1 =
          sp_maintaining_RCM_Session_Types_Pkg;
        kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
          &outC->_L266_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1,
          morcStatusFromHandingOverRBC);
        kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
          &outC->_L1768_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1,
          &outC->_L266_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1.session);
        outC->_L1_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->_L1768_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1.phase;
        outC->_L14_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->_L1_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1 ==
          outC->_L1869_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1;
        outC->_L565_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->_L14_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1 &
          outC->_L1667_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1;
        break;
      case _278_SSM_st_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1 :
        /* IfBlock1:else:handOver_with_1_Session_SM:WaitForMaxSafeFrontEndPassing:_L8=(digital::RisingEdge#26)/ */
        RisingEdge_digital(
          outC->_L573_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1,
          &outC->Context_RisingEdge_26);
        outC->_L871_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->Context_RisingEdge_26.RE_Output;
        _235_sendPositionReport_2_handingOverRBC_partial =
          outC->_L871_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1;
        _226_tr_2_guard_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1 =
          _235_sendPositionReport_2_handingOverRBC_partial;
        if (outC->_21_tr_1_clock_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1) {
        }
        else {
          outC->_20_tr_2_clock_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1 =
            _226_tr_2_guard_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1;
        }
        break;
      default :
        /* this branch is empty */
        break;
    }
    switch (outC->_28_handOver_with_1_Session_SM_state_sel_else_IfBlock1) {
      case _280_SSM_st_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1 :
        if (_133_handOver_with_1_Session_SM_reset_sel_else_IfBlock1) {
          /* IfBlock1:else:handOver_with_1_Session_SM:WaitForMinSafeRearEndPassing:_L8=(digital::RisingEdge#28)/ */
          RisingEdge_reset_digital(&outC->Context_RisingEdge_28);
        }
        break;
      default :
        /* this branch is empty */
        break;
    }
    switch (outC->handOver_with_1_Session_SM_clock_else_IfBlock1) {
      case SSM_st_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 :
        tr_1_guard_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->newTransitionOrderReceived;
        outC->tr_1_clock_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
          tr_1_guard_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
        outC->_L68_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
          mrs_unregistered_RCM_Types_Pkg;
        kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
          &outC->_L49_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1,
          morcStatusFromHandingOverRBC);
        kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
          &outC->_L67_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1,
          &outC->_L49_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.registration);
        outC->_L45_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->_L67_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.status;
        outC->_L44_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->_L45_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 ==
          outC->_L68_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
        outC->_L69_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
          mrs_registered_RCM_Types_Pkg;
        outC->_L43_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->_L69_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 ==
          outC->_L45_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
        outC->_L48_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->_L67_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.nid_mn;
        break;
      case _281_SSM_st_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1 :
        _170_tr_1_guard_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->newTransitionOrderReceived;
        outC->_14_tr_1_clock_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1 =
          _170_tr_1_guard_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1;
        outC->_L838_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1 =
          sp_terminated_RCM_Session_Types_Pkg;
        kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
          &outC->_L237_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1,
          morcStatusFromHandingOverRBC);
        kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
          &outC->_L7_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1,
          &outC->_L237_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1.session);
        outC->_L435_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->_L7_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1.phase;
        outC->_L336_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->_L435_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1 ==
          outC->_L838_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1;
        outC->_34_sessionWithHandingOverRBC_terminated_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->_L336_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1;
        _171_tr_2_guard_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->_34_sessionWithHandingOverRBC_terminated_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1;
        if (outC->_14_tr_1_clock_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1) {
        }
        else {
          outC->_13_tr_2_clock_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1 =
            _171_tr_2_guard_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1;
        }
        break;
      case _282_SSM_st_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1 :
        _184_tr_1_guard_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->newTransitionOrderReceived;
        outC->_16_tr_1_clock_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1 =
          _184_tr_1_guard_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1;
        outC->_L3244_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1 =
          Q_RBC_Terminate_communication_session;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1,
          p42_terminateCmd_from_handingOverRBC);
        kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
          &outC->_L741_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1,
          morcStatusFromHandingOverRBC);
        /* IfBlock1:else:handOver_with_1_Session_SM:WaitForTerminationOrderFromHandingOverRBC:_L3=(Handover_Pkg::handoverUtils_Pkg::checkSessionCmd#11)/ */
        checkSessionCmd_Handover_Pkg_handoverUtils_Pkg(
          &outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1,
          &outC->_L741_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1,
          &outC->Context_checkSessionCmd_11);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1,
          &outC->Context_checkSessionCmd_11.p42_sessionCmd_out);
        kcg_copy_CompressedPackets_T_Common_Types_Pkg(
          &outC->_L3145_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1,
          &outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.packets);
        /* IfBlock1:else:handOver_with_1_Session_SM:WaitForTerminationOrderFromHandingOverRBC:_L28=(TM::Read_P042#2)/ */
        Read_P042_TM(
          &outC->_L3145_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1,
          &outC->Context_Read_P042_2);
        outC->_L2847_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->Context_Read_P042_2.received;
        kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg(
          &outC->_L2948_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1,
          &outC->Context_Read_P042_2.P042_OBU_out);
        outC->_L3046_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->_L2948_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.q_rbc;
        outC->_L2650_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->_L3046_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1 ==
          outC->_L3244_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1;
        outC->_L2749_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.valid;
        outC->_L2551_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->_L2749_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1 &
          outC->_L2847_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1 &
          outC->_L2650_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1;
        outC->_39_terminationWithHandingOverRBCOrdered_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->_L2551_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1;
        _185_tr_2_guard_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->_39_terminationWithHandingOverRBCOrdered_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1;
        if (outC->_16_tr_1_clock_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1) {
        }
        else {
          outC->_15_tr_2_clock_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1 =
            _185_tr_2_guard_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1;
        }
        break;
      case _283_SSM_st_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1 :
        _198_tr_1_guard_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->newTransitionOrderReceived;
        outC->_17_tr_1_clock_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1 =
          _198_tr_1_guard_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1;
        outC->_L25_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1 =
          sp_maintaining_RCM_Session_Types_Pkg;
        kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
          &outC->_L2062_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1,
          morcStatusFromHandingOverRBC);
        kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
          &outC->_L24_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1,
          &outC->_L2062_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.session);
        outC->_L6_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->_L24_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.phase;
        outC->_L2_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->_L6_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1 ==
          outC->_L25_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1;
        outC->_53_sessionWithAcceptingRBCEstablished_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->_L2_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1;
        tr_2_guard_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->_53_sessionWithAcceptingRBCEstablished_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1;
        if (outC->_17_tr_1_clock_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1) {
        }
        else {
          outC->tr_2_clock_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1 =
            tr_2_guard_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1;
        }
        break;
      case _280_SSM_st_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1 :
        /* IfBlock1:else:handOver_with_1_Session_SM:WaitForMinSafeRearEndPassing:_L8=(digital::RisingEdge#28)/ */
        RisingEdge_digital(
          outC->_L565_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1,
          &outC->Context_RisingEdge_28);
        outC->_L864_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->Context_RisingEdge_28.RE_Output;
        _221_sendPositionReport_2_handingOverRBC_partial =
          outC->_L864_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1;
        _212_tr_2_guard_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1 =
          _221_sendPositionReport_2_handingOverRBC_partial;
        if (outC->_19_tr_1_clock_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1) {
        }
        else {
          outC->_18_tr_2_clock_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1 =
            _212_tr_2_guard_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1;
        }
        break;
      default :
        /* this branch is empty */
        break;
    }
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &_134_last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_else_IfBlock1,
      &outC->_6_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_else_IfBlock1);
    /* IfBlock1:else:handOver_with_1_Session_SM: */
    switch (outC->handOver_with_1_Session_SM_clock_else_IfBlock1) {
      case SSM_st_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 :
        tr_1_guard_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->newTransitionOrderReceived;
        outC->tr_1_clock_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
          tr_1_guard_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
        tr_2_guard_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
          kcg_true;
        /* IfBlock1:else:handOver_with_1_Session_SM:EstablishSessionWithAcceptingRBC:<1> */
        if (outC->tr_1_clock_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1) {
          outC->sNotReady = kcg_true;
        }
        else {
          outC->tr_2_clock_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
            tr_2_guard_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
          /* IfBlock1:else:handOver_with_1_Session_SM:EstablishSessionWithAcceptingRBC:<2> */
          if (outC->tr_2_clock_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1) {
            outC->sNotReady = kcg_true;
          }
          else {
            outC->sNotReady = kcg_false;
          }
        }
        break;
      case _284_SSM_st_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1 :
        _144_tr_1_guard_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->newTransitionOrderReceived;
        outC->_12_tr_1_clock_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1 =
          _144_tr_1_guard_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1;
        kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
          &outC->_L432_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1,
          morcStatusFromHandingOverRBC);
        kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
          &outC->_L10_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1,
          &outC->_L432_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1.registration);
        outC->_L731_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->_L10_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1.status;
        outC->_L11_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1 =
          mrs_registered_RCM_Types_Pkg;
        outC->_L930_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->_L11_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1 ==
          outC->_L731_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1;
        outC->_29_handingOverRBCReregistered_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->_L930_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1;
        _145_tr_2_guard_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->_29_handingOverRBCReregistered_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1;
        /* IfBlock1:else:handOver_with_1_Session_SM:WaitForHandingOverRBCRegistered:<1> */
        if (outC->_12_tr_1_clock_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1) {
          outC->sNotReady = kcg_true;
        }
        else {
          outC->_11_tr_2_clock_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1 =
            _145_tr_2_guard_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1;
          /* IfBlock1:else:handOver_with_1_Session_SM:WaitForHandingOverRBCRegistered:<2> */
          if (outC->_11_tr_2_clock_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1) {
            outC->sNotReady = kcg_true;
          }
          else {
            outC->sNotReady = kcg_false;
          }
        }
        break;
      case SSM_st_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_161_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_else_IfBlock1,
          &_134_last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_else_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1,
          &_161_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_else_IfBlock1);
        kcg_copy_CompressedPackets_T_Common_Types_Pkg(
          &outC->_L37_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1,
          &outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.packets);
        /* IfBlock1:else:handOver_with_1_Session_SM:RegisterAcceptingRBC:_L38=(TM::Read_P045#1)/ */
        Read_P045_TM(
          &outC->_L37_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1,
          &outC->Context_Read_P045_1);
        outC->_L38_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->Context_Read_P045_1.received;
        kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
          &outC->_L39_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1,
          &outC->Context_Read_P045_1.P045_OBU_out);
        outC->_L42_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->_L39_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.nid_mn;
        outC->_L51_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->_L42_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 !=
          outC->_L48_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
        outC->_L50_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->_L51_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 &
          outC->_L43_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
        outC->_L47_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->_L50_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 |
          outC->_L44_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
        outC->_L41_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.valid;
        outC->_L40_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->_L41_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 &
          outC->_L38_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
        outC->_L53_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->_L40_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 &
          outC->_L47_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
        outC->_L65_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->_L53_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 &
          outC->_L44_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
        outC->_L56_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
          !outC->_L53_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
        outC->_L57_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->_L56_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 &
          outC->_L43_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
        outC->_L58_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->_L57_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 |
          outC->_L65_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
        outC->_33_unregistered_or_noReregisterRequired_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->_L58_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
        tr_2_guard_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->_33_unregistered_or_noReregisterRequired_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
        /* IfBlock1:else:handOver_with_1_Session_SM:RegisterAcceptingRBC:<1> */
        if (outC->tr_1_clock_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1) {
          outC->sNotReady = kcg_true;
        }
        else {
          outC->tr_2_clock_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
            tr_2_guard_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
          /* IfBlock1:else:handOver_with_1_Session_SM:RegisterAcceptingRBC:<2> */
          if (outC->tr_2_clock_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1) {
            outC->sNotReady = kcg_true;
          }
          else {
            outC->sNotReady = kcg_false;
          }
        }
        break;
      case _281_SSM_st_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1 :
        /* IfBlock1:else:handOver_with_1_Session_SM:WaitForHandingOverRBCTerminated:<1> */
        if (outC->_14_tr_1_clock_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1) {
          outC->sNotReady = kcg_true;
        }
        else /* IfBlock1:else:handOver_with_1_Session_SM:WaitForHandingOverRBCTerminated:<2> */
        if (outC->_13_tr_2_clock_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1) {
          outC->sNotReady = kcg_true;
        }
        else {
          outC->sNotReady = kcg_false;
        }
        break;
      case _282_SSM_st_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1 :
        /* IfBlock1:else:handOver_with_1_Session_SM:WaitForTerminationOrderFromHandingOverRBC:<1> */
        if (outC->_16_tr_1_clock_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1) {
          outC->sNotReady = kcg_true;
        }
        else /* IfBlock1:else:handOver_with_1_Session_SM:WaitForTerminationOrderFromHandingOverRBC:<2> */
        if (outC->_15_tr_2_clock_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1) {
          outC->sNotReady = kcg_true;
        }
        else {
          outC->sNotReady = kcg_false;
        }
        break;
      case _283_SSM_st_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1 :
        /* IfBlock1:else:handOver_with_1_Session_SM:WaitForSessionWithAcceptingRBCEstablished:<1> */
        if (outC->_17_tr_1_clock_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1) {
          outC->sNotReady = kcg_true;
        }
        else /* IfBlock1:else:handOver_with_1_Session_SM:WaitForSessionWithAcceptingRBCEstablished:<2> */
        if (outC->tr_2_clock_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1) {
          outC->sNotReady = kcg_true;
        }
        else {
          outC->sNotReady = kcg_false;
        }
        break;
      case _280_SSM_st_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1 :
        /* IfBlock1:else:handOver_with_1_Session_SM:WaitForMinSafeRearEndPassing:<1> */
        if (outC->_19_tr_1_clock_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1) {
          outC->sNotReady = kcg_true;
        }
        else /* IfBlock1:else:handOver_with_1_Session_SM:WaitForMinSafeRearEndPassing:<2> */
        if (outC->_18_tr_2_clock_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1) {
          outC->sNotReady = kcg_true;
        }
        else {
          outC->sNotReady = kcg_false;
        }
        break;
      case _278_SSM_st_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1 :
        /* IfBlock1:else:handOver_with_1_Session_SM:WaitForMaxSafeFrontEndPassing:<1> */
        if (outC->_21_tr_1_clock_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1) {
          outC->sNotReady = kcg_true;
        }
        else /* IfBlock1:else:handOver_with_1_Session_SM:WaitForMaxSafeFrontEndPassing:<2> */
        if (outC->_20_tr_2_clock_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1) {
          outC->sNotReady = kcg_true;
        }
        else {
          outC->sNotReady = kcg_false;
        }
        break;
      case _279_SSM_st_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1 :
        /* IfBlock1:else:handOver_with_1_Session_SM:WaitForTransitionOrder:<1> */
        if (outC->_22_tr_1_clock_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1) {
          outC->sNotReady = kcg_true;
        }
        else {
          outC->sNotReady = kcg_false;
        }
        break;
      default :
        /* this default branch is unreachable */
        break;
    }
  }
  outC->_L9 = outC->sNotReady;
  outC->notReady = outC->_L9;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    /* IfBlock1:then:handOver_with_2_Sessions_SM: */
    switch (outC->handOver_with_2_Sessions_SM_clock_then_IfBlock1) {
      case SSM_st_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1 :
        /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForHandingOverRBCRegistered:<1> */
        if (outC->tr_1_clock_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1) {
          outC->sHandoverFinished = kcg_false;
        }
        else /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForHandingOverRBCRegistered:<2> */
        if (outC->tr_2_clock_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1) {
          outC->sHandoverFinished = kcg_true;
        }
        else {
          outC->sHandoverFinished = kcg_false;
        }
        break;
      case SSM_st_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 :
        outC->sHandoverFinished = kcg_false;
        break;
      case SSM_st_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1 :
        outC->sHandoverFinished = kcg_false;
        break;
      case SSM_st_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 :
        outC->sHandoverFinished = kcg_false;
        break;
      case SSM_st_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1 :
        outC->sHandoverFinished = kcg_false;
        break;
      case SSM_st_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 :
        outC->sHandoverFinished = kcg_false;
        break;
      case SSM_st_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 :
        outC->sHandoverFinished = kcg_false;
        break;
      case SSM_st_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1 :
        outC->sHandoverFinished = kcg_false;
        break;
      default :
        /* this default branch is unreachable */
        break;
    }
  }
  else {
    /* IfBlock1:else:handOver_with_1_Session_SM: */
    switch (outC->handOver_with_1_Session_SM_clock_else_IfBlock1) {
      case SSM_st_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 :
        outC->sHandoverFinished = kcg_false;
        break;
      case _284_SSM_st_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1 :
        outC->sHandoverFinished = kcg_false;
        break;
      case SSM_st_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 :
        outC->sHandoverFinished = kcg_false;
        break;
      case _281_SSM_st_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1 :
        outC->sHandoverFinished = kcg_false;
        break;
      case _282_SSM_st_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1 :
        outC->sHandoverFinished = kcg_false;
        break;
      case _283_SSM_st_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1 :
        /* IfBlock1:else:handOver_with_1_Session_SM:WaitForSessionWithAcceptingRBCEstablished:<1> */
        if (outC->_17_tr_1_clock_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1) {
          outC->sHandoverFinished = kcg_false;
        }
        else /* IfBlock1:else:handOver_with_1_Session_SM:WaitForSessionWithAcceptingRBCEstablished:<2> */
        if (outC->tr_2_clock_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1) {
          outC->sHandoverFinished = kcg_true;
        }
        else {
          outC->sHandoverFinished = kcg_false;
        }
        break;
      case _280_SSM_st_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1 :
        outC->sHandoverFinished = kcg_false;
        break;
      case _278_SSM_st_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1 :
        outC->sHandoverFinished = kcg_false;
        break;
      case _279_SSM_st_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1 :
        outC->sHandoverFinished = kcg_false;
        break;
      default :
        /* this default branch is unreachable */
        break;
    }
  }
  outC->_L1 = outC->sHandoverFinished;
  outC->handoverFinished = outC->_L1;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    last_establishSessionWithAcceptingRBCOrdered_then_IfBlock1 =
      outC->establishSessionWithAcceptingRBCOrdered_then_IfBlock1;
    switch (outC->handOver_with_2_Sessions_SM_clock_then_IfBlock1) {
      case SSM_st_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1 :
        establishSessionWithAcceptingRBCOrdered_partial_then_IfBlock1 =
          last_establishSessionWithAcceptingRBCOrdered_then_IfBlock1;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_then_IfBlock1,
          &last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_then_IfBlock1);
        _6_handoverInprogress_partial = kcg_true;
        _7_bufferInformationFromAcceptingRBC_partial = kcg_false;
        _9_sendTrainData_2_acceptingRBC_partial = kcg_false;
        _10_sendPositionReport_2_acceptingRBC_partial = kcg_false;
        _11_sendPositionReport_2_handingOverRBC_partial = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_12_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_13_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_14_p42_sessionCmd_for_handingOverRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_15_p42_sessionCmd_for_acceptingRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        if (tr_1_guard_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1) {
          handOver_with_2_Sessions_SM_fired_partial_then_IfBlock1 =
            SSM_TR_WaitForHandingOverRBCRegistered_WaitForTransitionOrder_1_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        else if (tr_2_guard_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1) {
          handOver_with_2_Sessions_SM_fired_partial_then_IfBlock1 =
            _285_SSM_TR_WaitForHandingOverRBCRegistered_WaitForTransitionOrder_2_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        else {
          handOver_with_2_Sessions_SM_fired_partial_then_IfBlock1 =
            SSM_TR_no_trans_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        if (tr_1_guard_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1) {
          _4_handOver_with_2_Sessions_SM_reset_nxt_partial_then_IfBlock1 = kcg_true;
        }
        else {
          _4_handOver_with_2_Sessions_SM_reset_nxt_partial_then_IfBlock1 =
            tr_2_guard_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        if (tr_1_guard_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1) {
          handOver_with_2_Sessions_SM_state_nxt_partial_then_IfBlock1 =
            SSM_st_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        else if (tr_2_guard_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1) {
          handOver_with_2_Sessions_SM_state_nxt_partial_then_IfBlock1 =
            SSM_st_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        else {
          handOver_with_2_Sessions_SM_state_nxt_partial_then_IfBlock1 =
            SSM_st_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        outC->_L13_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1 =
          kcg_true;
        _8_useInformationFromAcceptingRBC_partial =
          outC->_L13_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1;
        break;
      case SSM_st_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 :
        _19_establishSessionWithAcceptingRBCOrdered_partial_then_IfBlock1 =
          last_establishSessionWithAcceptingRBCOrdered_then_IfBlock1;
        _21_handoverInprogress_partial = kcg_true;
        _22_bufferInformationFromAcceptingRBC_partial = kcg_false;
        _24_sendTrainData_2_acceptingRBC_partial = kcg_false;
        _25_sendPositionReport_2_acceptingRBC_partial = kcg_false;
        _26_sendPositionReport_2_handingOverRBC_partial = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_27_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_29_p42_sessionCmd_for_handingOverRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_30_p42_sessionCmd_for_acceptingRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        if (tr_1_guard_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1) {
          _16_handOver_with_2_Sessions_SM_fired_partial_then_IfBlock1 =
            SSM_TR_ReregisterHandingOverRBC_WaitForTransitionOrder_1_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        else if (tr_2_guard_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1) {
          _16_handOver_with_2_Sessions_SM_fired_partial_then_IfBlock1 =
            _286_SSM_TR_ReregisterHandingOverRBC_WaitForHandingOverRBCRegistered_2_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        else {
          _16_handOver_with_2_Sessions_SM_fired_partial_then_IfBlock1 =
            SSM_TR_no_trans_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        if (tr_1_guard_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1) {
          _17_handOver_with_2_Sessions_SM_reset_nxt_partial_then_IfBlock1 = kcg_true;
        }
        else {
          _17_handOver_with_2_Sessions_SM_reset_nxt_partial_then_IfBlock1 =
            tr_2_guard_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        if (tr_1_guard_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1) {
          _18_handOver_with_2_Sessions_SM_state_nxt_partial_then_IfBlock1 =
            SSM_st_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        else if (tr_2_guard_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1) {
          _18_handOver_with_2_Sessions_SM_state_nxt_partial_then_IfBlock1 =
            SSM_st_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        else {
          _18_handOver_with_2_Sessions_SM_state_nxt_partial_then_IfBlock1 =
            SSM_st_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        outC->_L41_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
          kcg_false;
        break;
      default :
        /* this branch is empty */
        break;
    }
    switch (outC->_25_handOver_with_2_Sessions_SM_state_sel_then_IfBlock1) {
      case SSM_st_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 :
        if (_3_handOver_with_2_Sessions_SM_reset_sel_then_IfBlock1) {
          outC->init3 = kcg_true;
        }
        break;
      default :
        /* this branch is empty */
        break;
    }
    switch (outC->handOver_with_2_Sessions_SM_clock_then_IfBlock1) {
      case SSM_st_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 :
        /* IfBlock1:then:handOver_with_2_Sessions_SM:ReregisterHandingOverRBC:_L40= */
        if (outC->init3) {
          outC->_L40_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
            kcg_true;
        }
        else {
          outC->_L40_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
            outC->_L41_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        outC->_L42_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L28_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 &
          outC->_L40_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        /* IfBlock1:then:handOver_with_2_Sessions_SM:ReregisterHandingOverRBC:_L27= */
        if (outC->_L42_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1) {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1,
            &outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1);
        }
        else {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1,
            &outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1);
        }
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_28_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial,
          &outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1);
        outC->_L12_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
          kcg_true;
        _23_useInformationFromAcceptingRBC_partial =
          outC->_L12_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
        break;
      case SSM_st_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1 :
        _36_establishSessionWithAcceptingRBCOrdered_partial_then_IfBlock1 =
          last_establishSessionWithAcceptingRBCOrdered_then_IfBlock1;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_37_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_then_IfBlock1,
          &last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_then_IfBlock1);
        _38_handoverInprogress_partial = kcg_true;
        _39_bufferInformationFromAcceptingRBC_partial = kcg_false;
        _41_sendTrainData_2_acceptingRBC_partial = kcg_false;
        _42_sendPositionReport_2_acceptingRBC_partial = kcg_false;
        _43_sendPositionReport_2_handingOverRBC_partial = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_44_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_45_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_46_p42_sessionCmd_for_handingOverRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_47_p42_sessionCmd_for_acceptingRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        if (_31_tr_1_guard_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1) {
          _33_handOver_with_2_Sessions_SM_fired_partial_then_IfBlock1 =
            SSM_TR_WaitForHandingOverRBCTerminated_WaitForTransitionOrder_1_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        else if (_32_tr_2_guard_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1) {
          _33_handOver_with_2_Sessions_SM_fired_partial_then_IfBlock1 =
            _287_SSM_TR_WaitForHandingOverRBCTerminated_ReregisterHandingOverRBC_2_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        else {
          _33_handOver_with_2_Sessions_SM_fired_partial_then_IfBlock1 =
            SSM_TR_no_trans_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        if (_31_tr_1_guard_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1) {
          _34_handOver_with_2_Sessions_SM_reset_nxt_partial_then_IfBlock1 = kcg_true;
        }
        else {
          _34_handOver_with_2_Sessions_SM_reset_nxt_partial_then_IfBlock1 =
            _32_tr_2_guard_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        if (_31_tr_1_guard_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1) {
          _35_handOver_with_2_Sessions_SM_state_nxt_partial_then_IfBlock1 =
            SSM_st_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        else if (_32_tr_2_guard_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1) {
          _35_handOver_with_2_Sessions_SM_state_nxt_partial_then_IfBlock1 =
            SSM_st_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        else {
          _35_handOver_with_2_Sessions_SM_state_nxt_partial_then_IfBlock1 =
            SSM_st_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        outC->_L9_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1 =
          kcg_true;
        _40_useInformationFromAcceptingRBC_partial =
          outC->_L9_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1;
        break;
      case SSM_st_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 :
        _51_establishSessionWithAcceptingRBCOrdered_partial_then_IfBlock1 =
          last_establishSessionWithAcceptingRBCOrdered_then_IfBlock1;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_52_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_then_IfBlock1,
          &last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_then_IfBlock1);
        _53_handoverInprogress_partial = kcg_true;
        _54_bufferInformationFromAcceptingRBC_partial = kcg_false;
        _56_sendTrainData_2_acceptingRBC_partial = kcg_false;
        _57_sendPositionReport_2_acceptingRBC_partial = kcg_false;
        _58_sendPositionReport_2_handingOverRBC_partial = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_59_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_60_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_62_p42_sessionCmd_for_acceptingRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        if (tr_1_guard_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1) {
          _48_handOver_with_2_Sessions_SM_fired_partial_then_IfBlock1 =
            SSM_TR_WaitForTerminationOrderFromHandingOverRBC_WaitForTransitionOrder_1_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        else if (tr_2_guard_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1) {
          _48_handOver_with_2_Sessions_SM_fired_partial_then_IfBlock1 =
            _288_SSM_TR_WaitForTerminationOrderFromHandingOverRBC_WaitForHandingOverRBCTerminated_2_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        else {
          _48_handOver_with_2_Sessions_SM_fired_partial_then_IfBlock1 =
            SSM_TR_no_trans_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        if (tr_1_guard_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1) {
          _49_handOver_with_2_Sessions_SM_reset_nxt_partial_then_IfBlock1 = kcg_true;
        }
        else {
          _49_handOver_with_2_Sessions_SM_reset_nxt_partial_then_IfBlock1 =
            tr_2_guard_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        if (tr_1_guard_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1) {
          _50_handOver_with_2_Sessions_SM_state_nxt_partial_then_IfBlock1 =
            SSM_st_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        else if (tr_2_guard_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1) {
          _50_handOver_with_2_Sessions_SM_state_nxt_partial_then_IfBlock1 =
            SSM_st_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        else {
          _50_handOver_with_2_Sessions_SM_state_nxt_partial_then_IfBlock1 =
            SSM_st_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTerminationOrderFromHandingOverRBC:_L23= */
        if (outC->_L33_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1) {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1,
            &outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1);
        }
        else {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1,
            &outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1);
        }
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_61_p42_sessionCmd_for_handingOverRBC_partial,
          &outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1);
        outC->_L1_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
          kcg_true;
        _55_useInformationFromAcceptingRBC_partial =
          outC->_L1_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
        break;
      case SSM_st_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1 :
        _66_establishSessionWithAcceptingRBCOrdered_partial_then_IfBlock1 =
          last_establishSessionWithAcceptingRBCOrdered_then_IfBlock1;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_67_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_then_IfBlock1,
          &last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_then_IfBlock1);
        _68_handoverInprogress_partial = kcg_true;
        _69_bufferInformationFromAcceptingRBC_partial = kcg_false;
        _70_useInformationFromAcceptingRBC_partial = kcg_false;
        _72_sendPositionReport_2_acceptingRBC_partial = kcg_false;
        _73_sendPositionReport_2_handingOverRBC_partial = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_74_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_75_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_76_p42_sessionCmd_for_handingOverRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_77_p42_sessionCmd_for_acceptingRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        if (tr_1_guard_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1) {
          _63_handOver_with_2_Sessions_SM_fired_partial_then_IfBlock1 =
            SSM_TR_WaitForSessionWithAcceptingRBCEstablished_WaitForMaxSafeFrontEndPassing_1_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        else {
          _63_handOver_with_2_Sessions_SM_fired_partial_then_IfBlock1 =
            SSM_TR_no_trans_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        _64_handOver_with_2_Sessions_SM_reset_nxt_partial_then_IfBlock1 =
          tr_1_guard_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1;
        if (tr_1_guard_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1) {
          _65_handOver_with_2_Sessions_SM_state_nxt_partial_then_IfBlock1 =
            SSM_st_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        else {
          _65_handOver_with_2_Sessions_SM_state_nxt_partial_then_IfBlock1 =
            SSM_st_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        outC->_L19_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1 =
          M_MODE_Non_Leading;
        outC->_L8_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1 =
          mode;
        outC->_L16_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L8_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1 ==
          outC->_L19_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1;
        outC->_L14_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1 =
          M_MODE_Sleeping;
        outC->_L11_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L14_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1 ==
          outC->_L8_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1;
        outC->_L12_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L11_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1 |
          outC->_L16_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1;
        outC->_L18_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1 =
          !outC->_L12_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1;
        outC->_L9_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L22_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1 &
          outC->_L18_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1;
        _71_sendTrainData_2_acceptingRBC_partial =
          outC->_L9_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1;
        break;
      case SSM_st_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 :
        _81_establishSessionWithAcceptingRBCOrdered_partial_then_IfBlock1 =
          last_establishSessionWithAcceptingRBCOrdered_then_IfBlock1;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_82_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_then_IfBlock1,
          &last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_then_IfBlock1);
        _83_handoverInprogress_partial = kcg_true;
        _84_bufferInformationFromAcceptingRBC_partial = kcg_false;
        _86_sendTrainData_2_acceptingRBC_partial = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_89_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_90_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_91_p42_sessionCmd_for_handingOverRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_92_p42_sessionCmd_for_acceptingRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        if (tr_1_guard_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1) {
          _78_handOver_with_2_Sessions_SM_fired_partial_then_IfBlock1 =
            SSM_TR_WaitForMinSafeRearEndPassing_WaitForTransitionOrder_1_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        else if (tr_2_guard_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1) {
          _78_handOver_with_2_Sessions_SM_fired_partial_then_IfBlock1 =
            _289_SSM_TR_WaitForMinSafeRearEndPassing_WaitForTerminationOrderFromHandingOverRBC_2_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        else {
          _78_handOver_with_2_Sessions_SM_fired_partial_then_IfBlock1 =
            SSM_TR_no_trans_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        if (tr_1_guard_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1) {
          _79_handOver_with_2_Sessions_SM_reset_nxt_partial_then_IfBlock1 = kcg_true;
        }
        else {
          _79_handOver_with_2_Sessions_SM_reset_nxt_partial_then_IfBlock1 =
            tr_2_guard_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        if (tr_1_guard_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1) {
          _80_handOver_with_2_Sessions_SM_state_nxt_partial_then_IfBlock1 =
            SSM_st_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        else if (tr_2_guard_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1) {
          _80_handOver_with_2_Sessions_SM_state_nxt_partial_then_IfBlock1 =
            SSM_st_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        else {
          _80_handOver_with_2_Sessions_SM_state_nxt_partial_then_IfBlock1 =
            SSM_st_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        outC->_L24_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
          sp_maintaining_RCM_Session_Types_Pkg;
        kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
          &outC->_L13_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1,
          morcStatusFromAcceptingRBC);
        kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
          &outC->_L22_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1,
          &outC->_L13_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.session);
        outC->_L23_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L22_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.phase;
        outC->_L25_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L23_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 ==
          outC->_L24_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
        outC->_L17_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
          kcg_true;
        _85_useInformationFromAcceptingRBC_partial =
          outC->_L17_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
        outC->_L15_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L16_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 &
          outC->_L25_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
        break;
      default :
        /* this branch is empty */
        break;
    }
    switch (outC->_25_handOver_with_2_Sessions_SM_state_sel_then_IfBlock1) {
      case SSM_st_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 :
        if (_3_handOver_with_2_Sessions_SM_reset_sel_then_IfBlock1) {
          /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMinSafeRearEndPassing:_L11=(digital::RisingEdge#9)/ */
          RisingEdge_reset_digital(&outC->Context_RisingEdge_9);
        }
        break;
      default :
        /* this branch is empty */
        break;
    }
    switch (outC->handOver_with_2_Sessions_SM_clock_then_IfBlock1) {
      case SSM_st_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 :
        /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMinSafeRearEndPassing:_L11=(digital::RisingEdge#9)/ */
        RisingEdge_digital(
          outC->_L15_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1,
          &outC->Context_RisingEdge_9);
        outC->_L11_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->Context_RisingEdge_9.RE_Output;
        _87_sendPositionReport_2_acceptingRBC_partial =
          outC->_L11_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
        break;
      case SSM_st_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 :
        _96_establishSessionWithAcceptingRBCOrdered_partial_then_IfBlock1 =
          last_establishSessionWithAcceptingRBCOrdered_then_IfBlock1;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_97_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_then_IfBlock1,
          &last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_then_IfBlock1);
        _98_handoverInprogress_partial = kcg_true;
        _100_useInformationFromAcceptingRBC_partial = kcg_false;
        _101_sendTrainData_2_acceptingRBC_partial = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_104_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_105_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_106_p42_sessionCmd_for_handingOverRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_107_p42_sessionCmd_for_acceptingRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        if (tr_1_guard_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1) {
          _93_handOver_with_2_Sessions_SM_fired_partial_then_IfBlock1 =
            SSM_TR_WaitForMaxSafeFrontEndPassing_WaitForTransitionOrder_1_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        else if (tr_2_guard_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1) {
          _93_handOver_with_2_Sessions_SM_fired_partial_then_IfBlock1 =
            _290_SSM_TR_WaitForMaxSafeFrontEndPassing_WaitForMinSafeRearEndPassing_2_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        else {
          _93_handOver_with_2_Sessions_SM_fired_partial_then_IfBlock1 =
            SSM_TR_no_trans_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        if (tr_1_guard_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1) {
          _94_handOver_with_2_Sessions_SM_reset_nxt_partial_then_IfBlock1 = kcg_true;
        }
        else {
          _94_handOver_with_2_Sessions_SM_reset_nxt_partial_then_IfBlock1 =
            tr_2_guard_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        if (tr_1_guard_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1) {
          _95_handOver_with_2_Sessions_SM_state_nxt_partial_then_IfBlock1 =
            SSM_st_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        else if (tr_2_guard_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1) {
          _95_handOver_with_2_Sessions_SM_state_nxt_partial_then_IfBlock1 =
            SSM_st_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        else {
          _95_handOver_with_2_Sessions_SM_state_nxt_partial_then_IfBlock1 =
            SSM_st_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        outC->_L38_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
          sp_maintaining_RCM_Session_Types_Pkg;
        kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
          &outC->_L13_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1,
          morcStatusFromAcceptingRBC);
        kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
          &outC->_L40_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1,
          &outC->_L13_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.session);
        outC->_L39_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L40_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.phase;
        outC->_L41_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L39_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 ==
          outC->_L38_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
        outC->_L35_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
          kcg_true;
        _99_bufferInformationFromAcceptingRBC_partial =
          outC->_L35_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
        outC->_L15_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L6_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 &
          outC->_L41_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
        break;
      default :
        /* this branch is empty */
        break;
    }
    switch (outC->_25_handOver_with_2_Sessions_SM_state_sel_then_IfBlock1) {
      case SSM_st_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 :
        if (_3_handOver_with_2_Sessions_SM_reset_sel_then_IfBlock1) {
          /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMaxSafeFrontEndPassing:_L11=(digital::RisingEdge#4)/ */
          RisingEdge_reset_digital(&outC->Context_RisingEdge_4);
        }
        break;
      default :
        /* this branch is empty */
        break;
    }
    /* IfBlock1:then:handOver_with_2_Sessions_SM: */
    switch (outC->handOver_with_2_Sessions_SM_clock_then_IfBlock1) {
      case SSM_st_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1 :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &p42_sessionCmd_for_acceptingRBC_partial,
          &_15_p42_sessionCmd_for_acceptingRBC_partial);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &p42_sessionCmd_for_handingOverRBC_partial,
          &_14_p42_sessionCmd_for_handingOverRBC_partial);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_1_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial,
          &_13_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_2_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial,
          &_12_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial);
        sendPositionReport_2_handingOverRBC_partial =
          _11_sendPositionReport_2_handingOverRBC_partial;
        sendPositionReport_2_acceptingRBC_partial =
          _10_sendPositionReport_2_acceptingRBC_partial;
        sendTrainData_2_acceptingRBC_partial = _9_sendTrainData_2_acceptingRBC_partial;
        useInformationFromAcceptingRBC_partial =
          _8_useInformationFromAcceptingRBC_partial;
        bufferInformationFromAcceptingRBC_partial =
          _7_bufferInformationFromAcceptingRBC_partial;
        handoverInprogress_partial = _6_handoverInprogress_partial;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_4_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_then_IfBlock1,
          &_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_then_IfBlock1);
        outC->establishSessionWithAcceptingRBCOrdered_then_IfBlock1 =
          establishSessionWithAcceptingRBCOrdered_partial_then_IfBlock1;
        outC->handOver_with_2_Sessions_SM_state_nxt_then_IfBlock1 =
          handOver_with_2_Sessions_SM_state_nxt_partial_then_IfBlock1;
        outC->handOver_with_2_Sessions_SM_reset_nxt_then_IfBlock1 =
          _4_handOver_with_2_Sessions_SM_reset_nxt_partial_then_IfBlock1;
        outC->handOver_with_2_Sessions_SM_fired_then_IfBlock1 =
          handOver_with_2_Sessions_SM_fired_partial_then_IfBlock1;
        break;
      case SSM_st_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &p42_sessionCmd_for_acceptingRBC_partial,
          &_30_p42_sessionCmd_for_acceptingRBC_partial);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &p42_sessionCmd_for_handingOverRBC_partial,
          &_29_p42_sessionCmd_for_handingOverRBC_partial);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_1_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial,
          &_28_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_2_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial,
          &_27_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial);
        sendPositionReport_2_handingOverRBC_partial =
          _26_sendPositionReport_2_handingOverRBC_partial;
        sendPositionReport_2_acceptingRBC_partial =
          _25_sendPositionReport_2_acceptingRBC_partial;
        sendTrainData_2_acceptingRBC_partial = _24_sendTrainData_2_acceptingRBC_partial;
        useInformationFromAcceptingRBC_partial =
          _23_useInformationFromAcceptingRBC_partial;
        bufferInformationFromAcceptingRBC_partial =
          _22_bufferInformationFromAcceptingRBC_partial;
        handoverInprogress_partial = _21_handoverInprogress_partial;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_4_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_then_IfBlock1,
          &_20_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_then_IfBlock1);
        outC->establishSessionWithAcceptingRBCOrdered_then_IfBlock1 =
          _19_establishSessionWithAcceptingRBCOrdered_partial_then_IfBlock1;
        outC->handOver_with_2_Sessions_SM_state_nxt_then_IfBlock1 =
          _18_handOver_with_2_Sessions_SM_state_nxt_partial_then_IfBlock1;
        outC->handOver_with_2_Sessions_SM_reset_nxt_then_IfBlock1 =
          _17_handOver_with_2_Sessions_SM_reset_nxt_partial_then_IfBlock1;
        outC->handOver_with_2_Sessions_SM_fired_then_IfBlock1 =
          _16_handOver_with_2_Sessions_SM_fired_partial_then_IfBlock1;
        break;
      case SSM_st_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1 :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &p42_sessionCmd_for_acceptingRBC_partial,
          &_47_p42_sessionCmd_for_acceptingRBC_partial);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &p42_sessionCmd_for_handingOverRBC_partial,
          &_46_p42_sessionCmd_for_handingOverRBC_partial);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_1_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial,
          &_45_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_2_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial,
          &_44_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial);
        sendPositionReport_2_handingOverRBC_partial =
          _43_sendPositionReport_2_handingOverRBC_partial;
        sendPositionReport_2_acceptingRBC_partial =
          _42_sendPositionReport_2_acceptingRBC_partial;
        sendTrainData_2_acceptingRBC_partial = _41_sendTrainData_2_acceptingRBC_partial;
        useInformationFromAcceptingRBC_partial =
          _40_useInformationFromAcceptingRBC_partial;
        bufferInformationFromAcceptingRBC_partial =
          _39_bufferInformationFromAcceptingRBC_partial;
        handoverInprogress_partial = _38_handoverInprogress_partial;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_4_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_then_IfBlock1,
          &_37_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_then_IfBlock1);
        outC->establishSessionWithAcceptingRBCOrdered_then_IfBlock1 =
          _36_establishSessionWithAcceptingRBCOrdered_partial_then_IfBlock1;
        outC->handOver_with_2_Sessions_SM_state_nxt_then_IfBlock1 =
          _35_handOver_with_2_Sessions_SM_state_nxt_partial_then_IfBlock1;
        outC->handOver_with_2_Sessions_SM_reset_nxt_then_IfBlock1 =
          _34_handOver_with_2_Sessions_SM_reset_nxt_partial_then_IfBlock1;
        outC->handOver_with_2_Sessions_SM_fired_then_IfBlock1 =
          _33_handOver_with_2_Sessions_SM_fired_partial_then_IfBlock1;
        break;
      case SSM_st_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &p42_sessionCmd_for_acceptingRBC_partial,
          &_62_p42_sessionCmd_for_acceptingRBC_partial);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &p42_sessionCmd_for_handingOverRBC_partial,
          &_61_p42_sessionCmd_for_handingOverRBC_partial);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_1_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial,
          &_60_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_2_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial,
          &_59_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial);
        sendPositionReport_2_handingOverRBC_partial =
          _58_sendPositionReport_2_handingOverRBC_partial;
        sendPositionReport_2_acceptingRBC_partial =
          _57_sendPositionReport_2_acceptingRBC_partial;
        sendTrainData_2_acceptingRBC_partial = _56_sendTrainData_2_acceptingRBC_partial;
        useInformationFromAcceptingRBC_partial =
          _55_useInformationFromAcceptingRBC_partial;
        bufferInformationFromAcceptingRBC_partial =
          _54_bufferInformationFromAcceptingRBC_partial;
        handoverInprogress_partial = _53_handoverInprogress_partial;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_4_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_then_IfBlock1,
          &_52_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_then_IfBlock1);
        outC->establishSessionWithAcceptingRBCOrdered_then_IfBlock1 =
          _51_establishSessionWithAcceptingRBCOrdered_partial_then_IfBlock1;
        outC->handOver_with_2_Sessions_SM_state_nxt_then_IfBlock1 =
          _50_handOver_with_2_Sessions_SM_state_nxt_partial_then_IfBlock1;
        outC->handOver_with_2_Sessions_SM_reset_nxt_then_IfBlock1 =
          _49_handOver_with_2_Sessions_SM_reset_nxt_partial_then_IfBlock1;
        outC->handOver_with_2_Sessions_SM_fired_then_IfBlock1 =
          _48_handOver_with_2_Sessions_SM_fired_partial_then_IfBlock1;
        break;
      case SSM_st_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1 :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &p42_sessionCmd_for_acceptingRBC_partial,
          &_77_p42_sessionCmd_for_acceptingRBC_partial);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &p42_sessionCmd_for_handingOverRBC_partial,
          &_76_p42_sessionCmd_for_handingOverRBC_partial);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_1_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial,
          &_75_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_2_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial,
          &_74_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial);
        sendPositionReport_2_handingOverRBC_partial =
          _73_sendPositionReport_2_handingOverRBC_partial;
        sendPositionReport_2_acceptingRBC_partial =
          _72_sendPositionReport_2_acceptingRBC_partial;
        sendTrainData_2_acceptingRBC_partial = _71_sendTrainData_2_acceptingRBC_partial;
        useInformationFromAcceptingRBC_partial =
          _70_useInformationFromAcceptingRBC_partial;
        bufferInformationFromAcceptingRBC_partial =
          _69_bufferInformationFromAcceptingRBC_partial;
        handoverInprogress_partial = _68_handoverInprogress_partial;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_4_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_then_IfBlock1,
          &_67_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_then_IfBlock1);
        outC->establishSessionWithAcceptingRBCOrdered_then_IfBlock1 =
          _66_establishSessionWithAcceptingRBCOrdered_partial_then_IfBlock1;
        outC->handOver_with_2_Sessions_SM_state_nxt_then_IfBlock1 =
          _65_handOver_with_2_Sessions_SM_state_nxt_partial_then_IfBlock1;
        outC->handOver_with_2_Sessions_SM_reset_nxt_then_IfBlock1 =
          _64_handOver_with_2_Sessions_SM_reset_nxt_partial_then_IfBlock1;
        outC->handOver_with_2_Sessions_SM_fired_then_IfBlock1 =
          _63_handOver_with_2_Sessions_SM_fired_partial_then_IfBlock1;
        break;
      case SSM_st_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &p42_sessionCmd_for_acceptingRBC_partial,
          &_92_p42_sessionCmd_for_acceptingRBC_partial);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &p42_sessionCmd_for_handingOverRBC_partial,
          &_91_p42_sessionCmd_for_handingOverRBC_partial);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_1_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial,
          &_90_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_2_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial,
          &_89_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial);
        sendPositionReport_2_handingOverRBC_partial =
          _88_sendPositionReport_2_handingOverRBC_partial;
        sendPositionReport_2_acceptingRBC_partial =
          _87_sendPositionReport_2_acceptingRBC_partial;
        sendTrainData_2_acceptingRBC_partial = _86_sendTrainData_2_acceptingRBC_partial;
        useInformationFromAcceptingRBC_partial =
          _85_useInformationFromAcceptingRBC_partial;
        bufferInformationFromAcceptingRBC_partial =
          _84_bufferInformationFromAcceptingRBC_partial;
        handoverInprogress_partial = _83_handoverInprogress_partial;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_4_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_then_IfBlock1,
          &_82_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_then_IfBlock1);
        outC->establishSessionWithAcceptingRBCOrdered_then_IfBlock1 =
          _81_establishSessionWithAcceptingRBCOrdered_partial_then_IfBlock1;
        outC->handOver_with_2_Sessions_SM_state_nxt_then_IfBlock1 =
          _80_handOver_with_2_Sessions_SM_state_nxt_partial_then_IfBlock1;
        outC->handOver_with_2_Sessions_SM_reset_nxt_then_IfBlock1 =
          _79_handOver_with_2_Sessions_SM_reset_nxt_partial_then_IfBlock1;
        outC->handOver_with_2_Sessions_SM_fired_then_IfBlock1 =
          _78_handOver_with_2_Sessions_SM_fired_partial_then_IfBlock1;
        break;
      case SSM_st_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 :
        /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMaxSafeFrontEndPassing:_L11=(digital::RisingEdge#4)/ */
        RisingEdge_digital(
          outC->_L15_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1,
          &outC->Context_RisingEdge_4);
        outC->_L11_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->Context_RisingEdge_4.RE_Output;
        _102_sendPositionReport_2_acceptingRBC_partial =
          outC->_L11_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &p42_sessionCmd_for_acceptingRBC_partial,
          &_107_p42_sessionCmd_for_acceptingRBC_partial);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &p42_sessionCmd_for_handingOverRBC_partial,
          &_106_p42_sessionCmd_for_handingOverRBC_partial);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_1_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial,
          &_105_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_2_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial,
          &_104_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial);
        sendPositionReport_2_handingOverRBC_partial =
          _103_sendPositionReport_2_handingOverRBC_partial;
        sendPositionReport_2_acceptingRBC_partial =
          _102_sendPositionReport_2_acceptingRBC_partial;
        sendTrainData_2_acceptingRBC_partial =
          _101_sendTrainData_2_acceptingRBC_partial;
        useInformationFromAcceptingRBC_partial =
          _100_useInformationFromAcceptingRBC_partial;
        bufferInformationFromAcceptingRBC_partial =
          _99_bufferInformationFromAcceptingRBC_partial;
        handoverInprogress_partial = _98_handoverInprogress_partial;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_4_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_then_IfBlock1,
          &_97_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_then_IfBlock1);
        outC->establishSessionWithAcceptingRBCOrdered_then_IfBlock1 =
          _96_establishSessionWithAcceptingRBCOrdered_partial_then_IfBlock1;
        outC->handOver_with_2_Sessions_SM_state_nxt_then_IfBlock1 =
          _95_handOver_with_2_Sessions_SM_state_nxt_partial_then_IfBlock1;
        outC->handOver_with_2_Sessions_SM_reset_nxt_then_IfBlock1 =
          _94_handOver_with_2_Sessions_SM_reset_nxt_partial_then_IfBlock1;
        outC->handOver_with_2_Sessions_SM_fired_then_IfBlock1 =
          _93_handOver_with_2_Sessions_SM_fired_partial_then_IfBlock1;
        break;
      case SSM_st_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1 :
        _114_bufferInformationFromAcceptingRBC_partial = kcg_false;
        _115_useInformationFromAcceptingRBC_partial = kcg_false;
        _116_sendTrainData_2_acceptingRBC_partial = kcg_false;
        _117_sendPositionReport_2_acceptingRBC_partial = kcg_false;
        _118_sendPositionReport_2_handingOverRBC_partial = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_120_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_121_p42_sessionCmd_for_handingOverRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        if (tr_1_guard_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1) {
          _108_handOver_with_2_Sessions_SM_fired_partial_then_IfBlock1 =
            SSM_TR_WaitForTransitionOrder_WaitForSessionWithAcceptingRBCEstablished_1_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        else {
          _108_handOver_with_2_Sessions_SM_fired_partial_then_IfBlock1 =
            SSM_TR_no_trans_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        _109_handOver_with_2_Sessions_SM_reset_nxt_partial_then_IfBlock1 =
          tr_1_guard_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1;
        if (tr_1_guard_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1) {
          _110_handOver_with_2_Sessions_SM_state_nxt_partial_then_IfBlock1 =
            SSM_st_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        else {
          _110_handOver_with_2_Sessions_SM_state_nxt_partial_then_IfBlock1 =
            SSM_st_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1;
        }
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1,
          &last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_then_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1,
          p45_radioNetworkRegistrationOrder_in);
        outC->_L10_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1 =
          outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.valid;
        /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTransitionOrder:_L7= */
        if (outC->_L10_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1) {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1,
            &outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1);
        }
        else {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1,
            &outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1);
        }
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_119_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial,
          &outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_112_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_then_IfBlock1,
          &outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1);
        _113_handoverInprogress_partial =
          outC->_L5_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_122_p42_sessionCmd_for_acceptingRBC_partial,
          &outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &p42_sessionCmd_for_acceptingRBC_partial,
          &_122_p42_sessionCmd_for_acceptingRBC_partial);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &p42_sessionCmd_for_handingOverRBC_partial,
          &_121_p42_sessionCmd_for_handingOverRBC_partial);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_1_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial,
          &_120_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_2_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial,
          &_119_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial);
        sendPositionReport_2_handingOverRBC_partial =
          _118_sendPositionReport_2_handingOverRBC_partial;
        sendPositionReport_2_acceptingRBC_partial =
          _117_sendPositionReport_2_acceptingRBC_partial;
        sendTrainData_2_acceptingRBC_partial =
          _116_sendTrainData_2_acceptingRBC_partial;
        useInformationFromAcceptingRBC_partial =
          _115_useInformationFromAcceptingRBC_partial;
        bufferInformationFromAcceptingRBC_partial =
          _114_bufferInformationFromAcceptingRBC_partial;
        handoverInprogress_partial = _113_handoverInprogress_partial;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_4_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_then_IfBlock1,
          &_112_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_then_IfBlock1);
        outC->establishSessionWithAcceptingRBCOrdered_then_IfBlock1 =
          _111_establishSessionWithAcceptingRBCOrdered_partial_then_IfBlock1;
        outC->handOver_with_2_Sessions_SM_state_nxt_then_IfBlock1 =
          _110_handOver_with_2_Sessions_SM_state_nxt_partial_then_IfBlock1;
        outC->handOver_with_2_Sessions_SM_reset_nxt_then_IfBlock1 =
          _109_handOver_with_2_Sessions_SM_reset_nxt_partial_then_IfBlock1;
        outC->handOver_with_2_Sessions_SM_fired_then_IfBlock1 =
          _108_handOver_with_2_Sessions_SM_fired_partial_then_IfBlock1;
        break;
      default :
        /* this default branch is unreachable */
        break;
    }
    outC->_23_handOver_with_2_Sessions_SM_fired_strong_then_IfBlock1 =
      SSM_TR_no_trans_handOver_with_2_Sessions_SM_then_IfBlock1;
    handOver_with_2_Sessions_SM_reset_prv_then_IfBlock1 =
      outC->_5_handOver_with_2_Sessions_SM_reset_act_then_IfBlock1;
    outC->_5_handOver_with_2_Sessions_SM_reset_act_then_IfBlock1 = kcg_false;
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->p42_sessionCmd_for_acceptingRBC,
      &p42_sessionCmd_for_acceptingRBC_partial);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->p42_sessionCmd_for_handingOverRBC,
      &p42_sessionCmd_for_handingOverRBC_partial);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC,
      &_1_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC,
      &_2_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial);
    outC->sendPositionReport_2_handingOverRBC =
      sendPositionReport_2_handingOverRBC_partial;
    outC->sendPositionReport_2_acceptingRBC =
      sendPositionReport_2_acceptingRBC_partial;
    outC->sendTrainData_2_acceptingRBC = sendTrainData_2_acceptingRBC_partial;
    outC->useInformationFromAcceptingRBC = useInformationFromAcceptingRBC_partial;
    outC->bufferInformationFromAcceptingRBC =
      bufferInformationFromAcceptingRBC_partial;
    outC->handoverInprogress = handoverInprogress_partial;
    switch (outC->handOver_with_2_Sessions_SM_clock_then_IfBlock1) {
      case SSM_st_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 :
        outC->init3 = kcg_false;
        break;
      default :
        /* this branch is empty */
        break;
    }
  }
  else {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &last_p131_transitionOrder_loc_else_IfBlock1,
      &outC->p131_transitionOrder_loc_else_IfBlock1);
    _131_bufferInformationFromAcceptingRBC_partial = kcg_false;
    _130_useInformationFromAcceptingRBC_partial = kcg_false;
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &_123_p42_sessionCmd_for_acceptingRBC_partial,
      (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
    switch (outC->handOver_with_1_Session_SM_clock_else_IfBlock1) {
      case SSM_st_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_136_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_else_IfBlock1,
          &_134_last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_else_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &p131_transitionOrder_loc_partial_else_IfBlock1,
          &last_p131_transitionOrder_loc_else_IfBlock1);
        _137_handoverInprogress_partial = kcg_true;
        _138_sendTrainData_2_acceptingRBC_partial = kcg_false;
        _139_sendPositionReport_2_acceptingRBC_partial = kcg_false;
        _140_sendPositionReport_2_handingOverRBC_partial = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_141_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_142_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        if (tr_1_guard_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1) {
          handOver_with_1_Session_SM_fired_partial_else_IfBlock1 =
            SSM_TR_EstablishSessionWithAcceptingRBC_WaitForTransitionOrder_1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
        }
        else if (tr_2_guard_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1) {
          handOver_with_1_Session_SM_fired_partial_else_IfBlock1 =
            _291_SSM_TR_EstablishSessionWithAcceptingRBC_WaitForSessionWithAcceptingRBCEstablished_2_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
        }
        else {
          handOver_with_1_Session_SM_fired_partial_else_IfBlock1 =
            SSM_TR_no_trans_handOver_with_1_Session_SM_else_IfBlock1;
        }
        if (tr_1_guard_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1) {
          _135_handOver_with_1_Session_SM_reset_nxt_partial_else_IfBlock1 = kcg_true;
        }
        else {
          _135_handOver_with_1_Session_SM_reset_nxt_partial_else_IfBlock1 =
            tr_2_guard_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
        }
        if (tr_1_guard_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1) {
          handOver_with_1_Session_SM_state_nxt_partial_else_IfBlock1 =
            _279_SSM_st_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1;
        }
        else if (tr_2_guard_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1) {
          handOver_with_1_Session_SM_state_nxt_partial_else_IfBlock1 =
            _283_SSM_st_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1;
        }
        else {
          handOver_with_1_Session_SM_state_nxt_partial_else_IfBlock1 =
            SSM_st_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
        }
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1,
          &p131_transitionOrder_loc_partial_else_IfBlock1);
        /* IfBlock1:else:handOver_with_1_Session_SM:EstablishSessionWithAcceptingRBC:_L8=(Handover_Pkg::handoverUtils_Pkg::p131_rbcTransitionOrder_2_p42_establishSession#8)/ */
        p131_rbcTransitionOrder_2_Handover_Pkg_handoverUtils_Pkg(
          &outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1,
          &outC->Context_p131_rbcTransitionOrder_2_p42_establishSession_8);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1,
          &outC->Context_p131_rbcTransitionOrder_2_p42_establishSession_8.p42_establishSession);
        kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
          &outC->_L6_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1,
          morcStatusFromHandingOverRBC);
        /* IfBlock1:else:handOver_with_1_Session_SM:EstablishSessionWithAcceptingRBC:_L1=(Handover_Pkg::handoverUtils_Pkg::checkSessionCmd#12)/ */
        checkSessionCmd_Handover_Pkg_handoverUtils_Pkg(
          &outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1,
          &outC->_L6_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1,
          &outC->Context_checkSessionCmd_12);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1,
          &outC->Context_checkSessionCmd_12.p42_sessionCmd_out);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_143_p42_sessionCmd_for_handingOverRBC_partial,
          &outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1);
        break;
      case _284_SSM_st_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1 :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_149_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_else_IfBlock1,
          &_134_last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_else_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_150_p131_transitionOrder_loc_partial_else_IfBlock1,
          &last_p131_transitionOrder_loc_else_IfBlock1);
        _151_handoverInprogress_partial = kcg_true;
        _152_sendTrainData_2_acceptingRBC_partial = kcg_false;
        _153_sendPositionReport_2_acceptingRBC_partial = kcg_false;
        _154_sendPositionReport_2_handingOverRBC_partial = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_155_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_156_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_157_p42_sessionCmd_for_handingOverRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        if (_144_tr_1_guard_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1) {
          _146_handOver_with_1_Session_SM_fired_partial_else_IfBlock1 =
            _292_SSM_TR_WaitForHandingOverRBCRegistered_WaitForTransitionOrder_1_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1;
        }
        else if (_145_tr_2_guard_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1) {
          _146_handOver_with_1_Session_SM_fired_partial_else_IfBlock1 =
            _293_SSM_TR_WaitForHandingOverRBCRegistered_EstablishSessionWithAcceptingRBC_2_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1;
        }
        else {
          _146_handOver_with_1_Session_SM_fired_partial_else_IfBlock1 =
            SSM_TR_no_trans_handOver_with_1_Session_SM_else_IfBlock1;
        }
        if (_144_tr_1_guard_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1) {
          _147_handOver_with_1_Session_SM_reset_nxt_partial_else_IfBlock1 = kcg_true;
        }
        else {
          _147_handOver_with_1_Session_SM_reset_nxt_partial_else_IfBlock1 =
            _145_tr_2_guard_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1;
        }
        if (_144_tr_1_guard_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1) {
          _148_handOver_with_1_Session_SM_state_nxt_partial_else_IfBlock1 =
            _279_SSM_st_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1;
        }
        else if (_145_tr_2_guard_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1) {
          _148_handOver_with_1_Session_SM_state_nxt_partial_else_IfBlock1 =
            SSM_st_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
        }
        else {
          _148_handOver_with_1_Session_SM_state_nxt_partial_else_IfBlock1 =
            _284_SSM_st_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1;
        }
        break;
      case SSM_st_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_162_p131_transitionOrder_loc_partial_else_IfBlock1,
          &last_p131_transitionOrder_loc_else_IfBlock1);
        _163_handoverInprogress_partial = kcg_true;
        _164_sendTrainData_2_acceptingRBC_partial = kcg_false;
        _165_sendPositionReport_2_acceptingRBC_partial = kcg_false;
        _166_sendPositionReport_2_handingOverRBC_partial = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_168_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_169_p42_sessionCmd_for_handingOverRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        if (tr_1_guard_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1) {
          _158_handOver_with_1_Session_SM_fired_partial_else_IfBlock1 =
            SSM_TR_RegisterAcceptingRBC_WaitForTransitionOrder_1_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
        }
        else if (tr_2_guard_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1) {
          _158_handOver_with_1_Session_SM_fired_partial_else_IfBlock1 =
            _294_SSM_TR_RegisterAcceptingRBC_WaitForHandingOverRBCRegistered_2_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
        }
        else {
          _158_handOver_with_1_Session_SM_fired_partial_else_IfBlock1 =
            SSM_TR_no_trans_handOver_with_1_Session_SM_else_IfBlock1;
        }
        if (tr_1_guard_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1) {
          _159_handOver_with_1_Session_SM_reset_nxt_partial_else_IfBlock1 = kcg_true;
        }
        else {
          _159_handOver_with_1_Session_SM_reset_nxt_partial_else_IfBlock1 =
            tr_2_guard_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
        }
        if (tr_1_guard_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1) {
          _160_handOver_with_1_Session_SM_state_nxt_partial_else_IfBlock1 =
            _279_SSM_st_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1;
        }
        else if (tr_2_guard_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1) {
          _160_handOver_with_1_Session_SM_state_nxt_partial_else_IfBlock1 =
            _284_SSM_st_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1;
        }
        else {
          _160_handOver_with_1_Session_SM_state_nxt_partial_else_IfBlock1 =
            SSM_st_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
        }
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        outC->_L66_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
          kcg_false;
        break;
      default :
        /* this branch is empty */
        break;
    }
    /* IfBlock1: */
    switch (outC->_28_handOver_with_1_Session_SM_state_sel_else_IfBlock1) {
      case SSM_st_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 :
        if (_133_handOver_with_1_Session_SM_reset_sel_else_IfBlock1) {
          outC->init2 = kcg_true;
        }
        break;
      default :
        /* this branch is empty */
        break;
    }
    /* IfBlock1:else:handOver_with_1_Session_SM: */
    switch (outC->handOver_with_1_Session_SM_clock_else_IfBlock1) {
      case SSM_st_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_124_p42_sessionCmd_for_handingOverRBC_partial,
          &_143_p42_sessionCmd_for_handingOverRBC_partial);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_125_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial,
          &_142_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_126_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial,
          &_141_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial);
        _127_sendPositionReport_2_handingOverRBC_partial =
          _140_sendPositionReport_2_handingOverRBC_partial;
        _128_sendPositionReport_2_acceptingRBC_partial =
          _139_sendPositionReport_2_acceptingRBC_partial;
        _129_sendTrainData_2_acceptingRBC_partial =
          _138_sendTrainData_2_acceptingRBC_partial;
        _132_handoverInprogress_partial = _137_handoverInprogress_partial;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p131_transitionOrder_loc_else_IfBlock1,
          &p131_transitionOrder_loc_partial_else_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_6_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_else_IfBlock1,
          &_136_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_else_IfBlock1);
        outC->handOver_with_1_Session_SM_state_nxt_else_IfBlock1 =
          handOver_with_1_Session_SM_state_nxt_partial_else_IfBlock1;
        outC->handOver_with_1_Session_SM_reset_nxt_else_IfBlock1 =
          _135_handOver_with_1_Session_SM_reset_nxt_partial_else_IfBlock1;
        outC->handOver_with_1_Session_SM_fired_else_IfBlock1 =
          handOver_with_1_Session_SM_fired_partial_else_IfBlock1;
        break;
      case _284_SSM_st_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1 :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_124_p42_sessionCmd_for_handingOverRBC_partial,
          &_157_p42_sessionCmd_for_handingOverRBC_partial);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_125_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial,
          &_156_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_126_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial,
          &_155_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial);
        _127_sendPositionReport_2_handingOverRBC_partial =
          _154_sendPositionReport_2_handingOverRBC_partial;
        _128_sendPositionReport_2_acceptingRBC_partial =
          _153_sendPositionReport_2_acceptingRBC_partial;
        _129_sendTrainData_2_acceptingRBC_partial =
          _152_sendTrainData_2_acceptingRBC_partial;
        _132_handoverInprogress_partial = _151_handoverInprogress_partial;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p131_transitionOrder_loc_else_IfBlock1,
          &_150_p131_transitionOrder_loc_partial_else_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_6_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_else_IfBlock1,
          &_149_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_else_IfBlock1);
        outC->handOver_with_1_Session_SM_state_nxt_else_IfBlock1 =
          _148_handOver_with_1_Session_SM_state_nxt_partial_else_IfBlock1;
        outC->handOver_with_1_Session_SM_reset_nxt_else_IfBlock1 =
          _147_handOver_with_1_Session_SM_reset_nxt_partial_else_IfBlock1;
        outC->handOver_with_1_Session_SM_fired_else_IfBlock1 =
          _146_handOver_with_1_Session_SM_fired_partial_else_IfBlock1;
        break;
      case SSM_st_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 :
        /* IfBlock1:else:handOver_with_1_Session_SM:RegisterAcceptingRBC:_L63= */
        if (outC->init2) {
          outC->_L63_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
            kcg_true;
        }
        else {
          outC->_L63_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
            outC->_L66_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
        }
        outC->_L64_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->_L53_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 &
          outC->_L63_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
        /* IfBlock1:else:handOver_with_1_Session_SM:RegisterAcceptingRBC:_L54= */
        if (outC->_L64_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1) {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1,
            &outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1);
        }
        else {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1,
            &outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1);
        }
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_167_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial,
          &outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_124_p42_sessionCmd_for_handingOverRBC_partial,
          &_169_p42_sessionCmd_for_handingOverRBC_partial);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_125_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial,
          &_168_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_126_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial,
          &_167_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial);
        _127_sendPositionReport_2_handingOverRBC_partial =
          _166_sendPositionReport_2_handingOverRBC_partial;
        _128_sendPositionReport_2_acceptingRBC_partial =
          _165_sendPositionReport_2_acceptingRBC_partial;
        _129_sendTrainData_2_acceptingRBC_partial =
          _164_sendTrainData_2_acceptingRBC_partial;
        _132_handoverInprogress_partial = _163_handoverInprogress_partial;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p131_transitionOrder_loc_else_IfBlock1,
          &_162_p131_transitionOrder_loc_partial_else_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_6_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_else_IfBlock1,
          &_161_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_else_IfBlock1);
        outC->handOver_with_1_Session_SM_state_nxt_else_IfBlock1 =
          _160_handOver_with_1_Session_SM_state_nxt_partial_else_IfBlock1;
        outC->handOver_with_1_Session_SM_reset_nxt_else_IfBlock1 =
          _159_handOver_with_1_Session_SM_reset_nxt_partial_else_IfBlock1;
        outC->handOver_with_1_Session_SM_fired_else_IfBlock1 =
          _158_handOver_with_1_Session_SM_fired_partial_else_IfBlock1;
        break;
      case _281_SSM_st_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1 :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_175_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_else_IfBlock1,
          &_134_last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_else_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_176_p131_transitionOrder_loc_partial_else_IfBlock1,
          &last_p131_transitionOrder_loc_else_IfBlock1);
        _177_handoverInprogress_partial = kcg_true;
        _178_sendTrainData_2_acceptingRBC_partial = kcg_false;
        _179_sendPositionReport_2_acceptingRBC_partial = kcg_false;
        _180_sendPositionReport_2_handingOverRBC_partial = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_181_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_182_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_183_p42_sessionCmd_for_handingOverRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        if (_170_tr_1_guard_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1) {
          _172_handOver_with_1_Session_SM_fired_partial_else_IfBlock1 =
            _295_SSM_TR_WaitForHandingOverRBCTerminated_WaitForTransitionOrder_1_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1;
        }
        else if (_171_tr_2_guard_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1) {
          _172_handOver_with_1_Session_SM_fired_partial_else_IfBlock1 =
            _296_SSM_TR_WaitForHandingOverRBCTerminated_RegisterAcceptingRBC_2_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1;
        }
        else {
          _172_handOver_with_1_Session_SM_fired_partial_else_IfBlock1 =
            SSM_TR_no_trans_handOver_with_1_Session_SM_else_IfBlock1;
        }
        if (_170_tr_1_guard_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1) {
          _173_handOver_with_1_Session_SM_reset_nxt_partial_else_IfBlock1 = kcg_true;
        }
        else {
          _173_handOver_with_1_Session_SM_reset_nxt_partial_else_IfBlock1 =
            _171_tr_2_guard_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1;
        }
        if (_170_tr_1_guard_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1) {
          _174_handOver_with_1_Session_SM_state_nxt_partial_else_IfBlock1 =
            _279_SSM_st_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1;
        }
        else if (_171_tr_2_guard_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1) {
          _174_handOver_with_1_Session_SM_state_nxt_partial_else_IfBlock1 =
            SSM_st_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1;
        }
        else {
          _174_handOver_with_1_Session_SM_state_nxt_partial_else_IfBlock1 =
            _281_SSM_st_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1;
        }
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_124_p42_sessionCmd_for_handingOverRBC_partial,
          &_183_p42_sessionCmd_for_handingOverRBC_partial);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_125_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial,
          &_182_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_126_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial,
          &_181_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial);
        _127_sendPositionReport_2_handingOverRBC_partial =
          _180_sendPositionReport_2_handingOverRBC_partial;
        _128_sendPositionReport_2_acceptingRBC_partial =
          _179_sendPositionReport_2_acceptingRBC_partial;
        _129_sendTrainData_2_acceptingRBC_partial =
          _178_sendTrainData_2_acceptingRBC_partial;
        _132_handoverInprogress_partial = _177_handoverInprogress_partial;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p131_transitionOrder_loc_else_IfBlock1,
          &_176_p131_transitionOrder_loc_partial_else_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_6_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_else_IfBlock1,
          &_175_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_else_IfBlock1);
        outC->handOver_with_1_Session_SM_state_nxt_else_IfBlock1 =
          _174_handOver_with_1_Session_SM_state_nxt_partial_else_IfBlock1;
        outC->handOver_with_1_Session_SM_reset_nxt_else_IfBlock1 =
          _173_handOver_with_1_Session_SM_reset_nxt_partial_else_IfBlock1;
        outC->handOver_with_1_Session_SM_fired_else_IfBlock1 =
          _172_handOver_with_1_Session_SM_fired_partial_else_IfBlock1;
        break;
      case _282_SSM_st_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1 :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_189_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_else_IfBlock1,
          &_134_last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_else_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_190_p131_transitionOrder_loc_partial_else_IfBlock1,
          &last_p131_transitionOrder_loc_else_IfBlock1);
        _192_sendTrainData_2_acceptingRBC_partial = kcg_false;
        _193_sendPositionReport_2_acceptingRBC_partial = kcg_false;
        _194_sendPositionReport_2_handingOverRBC_partial = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_195_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_196_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        if (_184_tr_1_guard_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1) {
          _186_handOver_with_1_Session_SM_fired_partial_else_IfBlock1 =
            _297_SSM_TR_WaitForTerminationOrderFromHandingOverRBC_WaitForTransitionOrder_1_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1;
        }
        else if (_185_tr_2_guard_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1) {
          _186_handOver_with_1_Session_SM_fired_partial_else_IfBlock1 =
            _298_SSM_TR_WaitForTerminationOrderFromHandingOverRBC_WaitForHandingOverRBCTerminated_2_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1;
        }
        else {
          _186_handOver_with_1_Session_SM_fired_partial_else_IfBlock1 =
            SSM_TR_no_trans_handOver_with_1_Session_SM_else_IfBlock1;
        }
        if (_184_tr_1_guard_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1) {
          _187_handOver_with_1_Session_SM_reset_nxt_partial_else_IfBlock1 = kcg_true;
        }
        else {
          _187_handOver_with_1_Session_SM_reset_nxt_partial_else_IfBlock1 =
            _185_tr_2_guard_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1;
        }
        if (_184_tr_1_guard_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1) {
          _188_handOver_with_1_Session_SM_state_nxt_partial_else_IfBlock1 =
            _279_SSM_st_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1;
        }
        else if (_185_tr_2_guard_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1) {
          _188_handOver_with_1_Session_SM_state_nxt_partial_else_IfBlock1 =
            _281_SSM_st_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1;
        }
        else {
          _188_handOver_with_1_Session_SM_state_nxt_partial_else_IfBlock1 =
            _282_SSM_st_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1;
        }
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        _191_handoverInprogress_partial =
          outC->_L2551_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1;
        /* IfBlock1:else:handOver_with_1_Session_SM:WaitForTerminationOrderFromHandingOverRBC:_L23= */
        if (outC->_L2551_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1) {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1,
            &outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1);
        }
        else {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1,
            &outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1);
        }
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_197_p42_sessionCmd_for_handingOverRBC_partial,
          &outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_124_p42_sessionCmd_for_handingOverRBC_partial,
          &_197_p42_sessionCmd_for_handingOverRBC_partial);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_125_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial,
          &_196_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_126_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial,
          &_195_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial);
        _127_sendPositionReport_2_handingOverRBC_partial =
          _194_sendPositionReport_2_handingOverRBC_partial;
        _128_sendPositionReport_2_acceptingRBC_partial =
          _193_sendPositionReport_2_acceptingRBC_partial;
        _129_sendTrainData_2_acceptingRBC_partial =
          _192_sendTrainData_2_acceptingRBC_partial;
        _132_handoverInprogress_partial = _191_handoverInprogress_partial;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p131_transitionOrder_loc_else_IfBlock1,
          &_190_p131_transitionOrder_loc_partial_else_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_6_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_else_IfBlock1,
          &_189_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_else_IfBlock1);
        outC->handOver_with_1_Session_SM_state_nxt_else_IfBlock1 =
          _188_handOver_with_1_Session_SM_state_nxt_partial_else_IfBlock1;
        outC->handOver_with_1_Session_SM_reset_nxt_else_IfBlock1 =
          _187_handOver_with_1_Session_SM_reset_nxt_partial_else_IfBlock1;
        outC->handOver_with_1_Session_SM_fired_else_IfBlock1 =
          _186_handOver_with_1_Session_SM_fired_partial_else_IfBlock1;
        break;
      case _283_SSM_st_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1 :
        _204_handoverInprogress_partial = kcg_true;
        _207_sendPositionReport_2_handingOverRBC_partial = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_208_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_209_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_210_p42_sessionCmd_for_handingOverRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        if (_198_tr_1_guard_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1) {
          _199_handOver_with_1_Session_SM_fired_partial_else_IfBlock1 =
            _299_SSM_TR_WaitForSessionWithAcceptingRBCEstablished_WaitForTransitionOrder_1_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1;
        }
        else if (tr_2_guard_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1) {
          _199_handOver_with_1_Session_SM_fired_partial_else_IfBlock1 =
            _300_SSM_TR_WaitForSessionWithAcceptingRBCEstablished_WaitForTransitionOrder_2_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1;
        }
        else {
          _199_handOver_with_1_Session_SM_fired_partial_else_IfBlock1 =
            SSM_TR_no_trans_handOver_with_1_Session_SM_else_IfBlock1;
        }
        if (_198_tr_1_guard_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1) {
          _200_handOver_with_1_Session_SM_reset_nxt_partial_else_IfBlock1 = kcg_true;
        }
        else {
          _200_handOver_with_1_Session_SM_reset_nxt_partial_else_IfBlock1 =
            tr_2_guard_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1;
        }
        if (_198_tr_1_guard_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1) {
          _201_handOver_with_1_Session_SM_state_nxt_partial_else_IfBlock1 =
            _279_SSM_st_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1;
        }
        else if (tr_2_guard_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1) {
          _201_handOver_with_1_Session_SM_state_nxt_partial_else_IfBlock1 =
            _279_SSM_st_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1;
        }
        else {
          _201_handOver_with_1_Session_SM_state_nxt_partial_else_IfBlock1 =
            _283_SSM_st_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1;
        }
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_202_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_else_IfBlock1,
          &outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_203_p131_transitionOrder_loc_partial_else_IfBlock1,
          &outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1);
        _206_sendPositionReport_2_acceptingRBC_partial =
          outC->_L2_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1;
        outC->_L1954_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1 =
          M_MODE_Non_Leading;
        outC->_L861_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1 =
          mode;
        outC->_L1656_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->_L861_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1 ==
          outC->_L1954_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1;
        outC->_L1457_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1 =
          M_MODE_Sleeping;
        outC->_L1159_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->_L1457_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1 ==
          outC->_L861_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1;
        outC->_L1258_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->_L1159_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1 |
          outC->_L1656_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1;
        outC->_L1855_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1 =
          !outC->_L1258_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1;
        outC->_L960_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->_L2_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1 &
          outC->_L1855_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1;
        _205_sendTrainData_2_acceptingRBC_partial =
          outC->_L960_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_124_p42_sessionCmd_for_handingOverRBC_partial,
          &_210_p42_sessionCmd_for_handingOverRBC_partial);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_125_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial,
          &_209_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_126_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial,
          &_208_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial);
        _127_sendPositionReport_2_handingOverRBC_partial =
          _207_sendPositionReport_2_handingOverRBC_partial;
        _128_sendPositionReport_2_acceptingRBC_partial =
          _206_sendPositionReport_2_acceptingRBC_partial;
        _129_sendTrainData_2_acceptingRBC_partial =
          _205_sendTrainData_2_acceptingRBC_partial;
        _132_handoverInprogress_partial = _204_handoverInprogress_partial;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p131_transitionOrder_loc_else_IfBlock1,
          &_203_p131_transitionOrder_loc_partial_else_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_6_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_else_IfBlock1,
          &_202_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_else_IfBlock1);
        outC->handOver_with_1_Session_SM_state_nxt_else_IfBlock1 =
          _201_handOver_with_1_Session_SM_state_nxt_partial_else_IfBlock1;
        outC->handOver_with_1_Session_SM_reset_nxt_else_IfBlock1 =
          _200_handOver_with_1_Session_SM_reset_nxt_partial_else_IfBlock1;
        outC->handOver_with_1_Session_SM_fired_else_IfBlock1 =
          _199_handOver_with_1_Session_SM_fired_partial_else_IfBlock1;
        break;
      case _280_SSM_st_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1 :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_216_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_else_IfBlock1,
          &_134_last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_else_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_217_p131_transitionOrder_loc_partial_else_IfBlock1,
          &last_p131_transitionOrder_loc_else_IfBlock1);
        _218_handoverInprogress_partial = kcg_true;
        _219_sendTrainData_2_acceptingRBC_partial = kcg_false;
        _220_sendPositionReport_2_acceptingRBC_partial = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_222_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_223_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_224_p42_sessionCmd_for_handingOverRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        if (_211_tr_1_guard_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1) {
          _213_handOver_with_1_Session_SM_fired_partial_else_IfBlock1 =
            _301_SSM_TR_WaitForMinSafeRearEndPassing_WaitForTransitionOrder_1_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1;
        }
        else if (_212_tr_2_guard_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1) {
          _213_handOver_with_1_Session_SM_fired_partial_else_IfBlock1 =
            _302_SSM_TR_WaitForMinSafeRearEndPassing_WaitForTerminationOrderFromHandingOverRBC_2_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1;
        }
        else {
          _213_handOver_with_1_Session_SM_fired_partial_else_IfBlock1 =
            SSM_TR_no_trans_handOver_with_1_Session_SM_else_IfBlock1;
        }
        if (_211_tr_1_guard_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1) {
          _214_handOver_with_1_Session_SM_reset_nxt_partial_else_IfBlock1 = kcg_true;
        }
        else {
          _214_handOver_with_1_Session_SM_reset_nxt_partial_else_IfBlock1 =
            _212_tr_2_guard_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1;
        }
        if (_211_tr_1_guard_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1) {
          _215_handOver_with_1_Session_SM_state_nxt_partial_else_IfBlock1 =
            _279_SSM_st_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1;
        }
        else if (_212_tr_2_guard_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1) {
          _215_handOver_with_1_Session_SM_state_nxt_partial_else_IfBlock1 =
            _282_SSM_st_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1;
        }
        else {
          _215_handOver_with_1_Session_SM_state_nxt_partial_else_IfBlock1 =
            _280_SSM_st_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1;
        }
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_124_p42_sessionCmd_for_handingOverRBC_partial,
          &_224_p42_sessionCmd_for_handingOverRBC_partial);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_125_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial,
          &_223_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_126_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial,
          &_222_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial);
        _127_sendPositionReport_2_handingOverRBC_partial =
          _221_sendPositionReport_2_handingOverRBC_partial;
        _128_sendPositionReport_2_acceptingRBC_partial =
          _220_sendPositionReport_2_acceptingRBC_partial;
        _129_sendTrainData_2_acceptingRBC_partial =
          _219_sendTrainData_2_acceptingRBC_partial;
        _132_handoverInprogress_partial = _218_handoverInprogress_partial;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p131_transitionOrder_loc_else_IfBlock1,
          &_217_p131_transitionOrder_loc_partial_else_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_6_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_else_IfBlock1,
          &_216_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_else_IfBlock1);
        outC->handOver_with_1_Session_SM_state_nxt_else_IfBlock1 =
          _215_handOver_with_1_Session_SM_state_nxt_partial_else_IfBlock1;
        outC->handOver_with_1_Session_SM_reset_nxt_else_IfBlock1 =
          _214_handOver_with_1_Session_SM_reset_nxt_partial_else_IfBlock1;
        outC->handOver_with_1_Session_SM_fired_else_IfBlock1 =
          _213_handOver_with_1_Session_SM_fired_partial_else_IfBlock1;
        break;
      case _278_SSM_st_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1 :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_230_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_else_IfBlock1,
          &_134_last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_else_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_231_p131_transitionOrder_loc_partial_else_IfBlock1,
          &last_p131_transitionOrder_loc_else_IfBlock1);
        _232_handoverInprogress_partial = kcg_true;
        _233_sendTrainData_2_acceptingRBC_partial = kcg_false;
        _234_sendPositionReport_2_acceptingRBC_partial = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_236_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_237_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_238_p42_sessionCmd_for_handingOverRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        if (_225_tr_1_guard_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1) {
          _227_handOver_with_1_Session_SM_fired_partial_else_IfBlock1 =
            _303_SSM_TR_WaitForMaxSafeFrontEndPassing_WaitForTransitionOrder_1_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1;
        }
        else if (_226_tr_2_guard_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1) {
          _227_handOver_with_1_Session_SM_fired_partial_else_IfBlock1 =
            _304_SSM_TR_WaitForMaxSafeFrontEndPassing_WaitForMinSafeRearEndPassing_2_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1;
        }
        else {
          _227_handOver_with_1_Session_SM_fired_partial_else_IfBlock1 =
            SSM_TR_no_trans_handOver_with_1_Session_SM_else_IfBlock1;
        }
        if (_225_tr_1_guard_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1) {
          _228_handOver_with_1_Session_SM_reset_nxt_partial_else_IfBlock1 = kcg_true;
        }
        else {
          _228_handOver_with_1_Session_SM_reset_nxt_partial_else_IfBlock1 =
            _226_tr_2_guard_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1;
        }
        if (_225_tr_1_guard_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1) {
          _229_handOver_with_1_Session_SM_state_nxt_partial_else_IfBlock1 =
            _279_SSM_st_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1;
        }
        else if (_226_tr_2_guard_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1) {
          _229_handOver_with_1_Session_SM_state_nxt_partial_else_IfBlock1 =
            _280_SSM_st_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1;
        }
        else {
          _229_handOver_with_1_Session_SM_state_nxt_partial_else_IfBlock1 =
            _278_SSM_st_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1;
        }
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_124_p42_sessionCmd_for_handingOverRBC_partial,
          &_238_p42_sessionCmd_for_handingOverRBC_partial);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_125_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial,
          &_237_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_126_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial,
          &_236_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial);
        _127_sendPositionReport_2_handingOverRBC_partial =
          _235_sendPositionReport_2_handingOverRBC_partial;
        _128_sendPositionReport_2_acceptingRBC_partial =
          _234_sendPositionReport_2_acceptingRBC_partial;
        _129_sendTrainData_2_acceptingRBC_partial =
          _233_sendTrainData_2_acceptingRBC_partial;
        _132_handoverInprogress_partial = _232_handoverInprogress_partial;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p131_transitionOrder_loc_else_IfBlock1,
          &_231_p131_transitionOrder_loc_partial_else_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_6_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_else_IfBlock1,
          &_230_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_else_IfBlock1);
        outC->handOver_with_1_Session_SM_state_nxt_else_IfBlock1 =
          _229_handOver_with_1_Session_SM_state_nxt_partial_else_IfBlock1;
        outC->handOver_with_1_Session_SM_reset_nxt_else_IfBlock1 =
          _228_handOver_with_1_Session_SM_reset_nxt_partial_else_IfBlock1;
        outC->handOver_with_1_Session_SM_fired_else_IfBlock1 =
          _227_handOver_with_1_Session_SM_fired_partial_else_IfBlock1;
        break;
      case _279_SSM_st_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1 :
        _246_sendTrainData_2_acceptingRBC_partial = kcg_false;
        _247_sendPositionReport_2_acceptingRBC_partial = kcg_false;
        _248_sendPositionReport_2_handingOverRBC_partial = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_249_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_251_p42_sessionCmd_for_handingOverRBC_partial,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
        if (_239_tr_1_guard_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1) {
          _240_handOver_with_1_Session_SM_fired_partial_else_IfBlock1 =
            _305_SSM_TR_WaitForTransitionOrder_WaitForMaxSafeFrontEndPassing_1_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1;
        }
        else {
          _240_handOver_with_1_Session_SM_fired_partial_else_IfBlock1 =
            SSM_TR_no_trans_handOver_with_1_Session_SM_else_IfBlock1;
        }
        _241_handOver_with_1_Session_SM_reset_nxt_partial_else_IfBlock1 =
          _239_tr_1_guard_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1;
        if (_239_tr_1_guard_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1) {
          _242_handOver_with_1_Session_SM_state_nxt_partial_else_IfBlock1 =
            _278_SSM_st_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1;
        }
        else {
          _242_handOver_with_1_Session_SM_state_nxt_partial_else_IfBlock1 =
            _279_SSM_st_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1;
        }
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1,
          p45_radioNetworkRegistrationOrder_in);
        outC->_L778_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.valid;
        outC->_L18_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1 =
          !outC->_L14_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1;
        outC->_L17_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1 =
          outC->_L18_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1 &
          outC->_L778_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1,
          &outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1);
        if (kcg_true) {
          outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.valid =
            outC->_L17_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1;
        }
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_250_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial,
          &outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1);
        outC->_L16_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1 =
          kcg_false;
        _245_handoverInprogress_partial =
          outC->_L16_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1,
          &last_p131_transitionOrder_loc_else_IfBlock1);
        /* IfBlock1:else:handOver_with_1_Session_SM:WaitForTransitionOrder:_L13= */
        if (outC->_L14_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1) {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1,
            &outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1);
        }
        else {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1,
            &outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1);
        }
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1,
          &_134_last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_else_IfBlock1);
        /* IfBlock1:else:handOver_with_1_Session_SM:WaitForTransitionOrder:_L9= */
        if (outC->_L778_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1) {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1,
            &outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1);
        }
        else {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1,
            &outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1);
        }
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_243_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_else_IfBlock1,
          &outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_244_p131_transitionOrder_loc_partial_else_IfBlock1,
          &outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_124_p42_sessionCmd_for_handingOverRBC_partial,
          &_251_p42_sessionCmd_for_handingOverRBC_partial);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_125_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial,
          &_250_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_126_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial,
          &_249_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial);
        _127_sendPositionReport_2_handingOverRBC_partial =
          _248_sendPositionReport_2_handingOverRBC_partial;
        _128_sendPositionReport_2_acceptingRBC_partial =
          _247_sendPositionReport_2_acceptingRBC_partial;
        _129_sendTrainData_2_acceptingRBC_partial =
          _246_sendTrainData_2_acceptingRBC_partial;
        _132_handoverInprogress_partial = _245_handoverInprogress_partial;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p131_transitionOrder_loc_else_IfBlock1,
          &_244_p131_transitionOrder_loc_partial_else_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_6_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_else_IfBlock1,
          &_243_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_partial_else_IfBlock1);
        outC->handOver_with_1_Session_SM_state_nxt_else_IfBlock1 =
          _242_handOver_with_1_Session_SM_state_nxt_partial_else_IfBlock1;
        outC->handOver_with_1_Session_SM_reset_nxt_else_IfBlock1 =
          _241_handOver_with_1_Session_SM_reset_nxt_partial_else_IfBlock1;
        outC->handOver_with_1_Session_SM_fired_else_IfBlock1 =
          _240_handOver_with_1_Session_SM_fired_partial_else_IfBlock1;
        break;
      default :
        /* this default branch is unreachable */
        break;
    }
    outC->_26_handOver_with_1_Session_SM_fired_strong_else_IfBlock1 =
      SSM_TR_no_trans_handOver_with_1_Session_SM_else_IfBlock1;
    handOver_with_1_Session_SM_reset_prv_else_IfBlock1 =
      outC->_7_handOver_with_1_Session_SM_reset_act_else_IfBlock1;
    outC->_7_handOver_with_1_Session_SM_reset_act_else_IfBlock1 = kcg_false;
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->p42_sessionCmd_for_acceptingRBC,
      &_123_p42_sessionCmd_for_acceptingRBC_partial);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->p42_sessionCmd_for_handingOverRBC,
      &_124_p42_sessionCmd_for_handingOverRBC_partial);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC,
      &_125_p45_radioNetworkRegistrationOrder_for_handingOverRBC_partial);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC,
      &_126_p45_radioNetworkRegistrationOrder_for_acceptingRBC_partial);
    outC->sendPositionReport_2_handingOverRBC =
      _127_sendPositionReport_2_handingOverRBC_partial;
    outC->sendPositionReport_2_acceptingRBC =
      _128_sendPositionReport_2_acceptingRBC_partial;
    outC->sendTrainData_2_acceptingRBC = _129_sendTrainData_2_acceptingRBC_partial;
    outC->useInformationFromAcceptingRBC =
      _130_useInformationFromAcceptingRBC_partial;
    outC->bufferInformationFromAcceptingRBC =
      _131_bufferInformationFromAcceptingRBC_partial;
    outC->handoverInprogress = _132_handoverInprogress_partial;
    switch (outC->handOver_with_1_Session_SM_clock_else_IfBlock1) {
      case SSM_st_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 :
        outC->init2 = kcg_false;
        break;
      default :
        /* this branch is empty */
        break;
    }
  }
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void handOverSequencer_init_Handover_Pkg_handoverUtils_Pkg(
  outC_handOverSequencer_Handover_Pkg_handoverUtils_Pkg *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;
  kcg_size idx7;
  kcg_size idx8;
  kcg_size idx9;
  kcg_size idx10;
  kcg_size idx11;
  kcg_size idx12;
  kcg_size idx13;
  kcg_size idx14;
  kcg_size idx15;
  kcg_size idx16;
  kcg_size idx17;
  kcg_size idx18;
  kcg_size idx19;
  kcg_size idx20;
  kcg_size idx21;
  kcg_size idx22;
  kcg_size idx23;
  kcg_size idx24;
  kcg_size idx25;
  kcg_size idx26;
  kcg_size idx27;
  kcg_size idx28;
  kcg_size idx29;
  kcg_size idx30;
  kcg_size idx31;
  kcg_size idx32;
  kcg_size idx33;
  kcg_size idx34;
  kcg_size idx35;
  kcg_size idx36;
  kcg_size idx37;
  kcg_size idx38;
  kcg_size idx39;
  kcg_size idx40;
  kcg_size idx41;
  kcg_size idx42;
  kcg_size idx43;
  kcg_size idx44;
  kcg_size idx45;
  kcg_size idx46;
  kcg_size idx47;
  kcg_size idx48;
  kcg_size idx49;
  kcg_size idx50;
  kcg_size idx51;
  kcg_size idx52;
  kcg_size idx53;
  kcg_size idx54;
  kcg_size idx55;
  kcg_size idx56;
  kcg_size idx57;
  kcg_size idx58;
  kcg_size idx59;
  kcg_size idx60;
  kcg_size idx61;
  kcg_size idx62;
  kcg_size idx63;
  kcg_size idx64;
  kcg_size idx65;
  kcg_size idx66;
  kcg_size idx67;
  kcg_size idx68;
  kcg_size idx69;
  kcg_size idx70;
  kcg_size idx71;
  kcg_size idx72;
  kcg_size idx73;
  kcg_size idx74;
  kcg_size idx75;
  kcg_size idx76;
  kcg_size idx77;
  kcg_size idx78;
  kcg_size idx79;
  kcg_size idx80;
  kcg_size idx81;
  kcg_size idx82;
  kcg_size idx83;
  kcg_size idx84;
  kcg_size idx85;
  kcg_size idx86;
  kcg_size idx87;
  kcg_size idx88;
  kcg_size idx89;
  kcg_size idx90;
  kcg_size idx91;
  kcg_size idx92;
  kcg_size idx93;
  kcg_size idx94;
  kcg_size idx95;
  kcg_size idx96;
  kcg_size idx97;
  kcg_size idx98;
  kcg_size idx99;
  kcg_size idx100;
  kcg_size idx101;
  kcg_size idx102;
  kcg_size idx103;

  outC->_L9 = kcg_true;
  outC->_L8.valid = kcg_true;
  outC->_L8.source = msrc_undefined_Common_Types_Pkg;
  outC->_L8.radioMetadata.t_train_reference = kcg_true;
  outC->_L8.radioMetadata.nid_em = kcg_true;
  outC->_L8.radioMetadata.q_scale = kcg_true;
  outC->_L8.radioMetadata.d_sr = kcg_true;
  outC->_L8.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L8.radioMetadata.d_ref = kcg_true;
  outC->_L8.radioMetadata.q_dir = kcg_true;
  outC->_L8.radioMetadata.d_emergencystop = kcg_true;
  outC->_L8.radioMetadata.m_version = kcg_true;
  outC->_L8.BG_Common_Header.valid = kcg_true;
  outC->_L8.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L8.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L8.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L8.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L8.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L8.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L8.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L8.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L8.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L8.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L8.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L8.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L8.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L8.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L8.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L8.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L8.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L8.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L8.BG_Common_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L8.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L8.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L8.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L8.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L8.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L8.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L8.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L8.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L8.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L8.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L8.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L8.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L8.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L8.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L8.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L8.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L8.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L8.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L8.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L8.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L8.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L8.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L8.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx = 0; idx < 30; idx++) {
    outC->_L8.packets.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L8.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L8.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L8.packets.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L8.packets.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L8.packets.PacketData[idx1] = kcg_lit_int32(0);
  }
  outC->_L8.sendingRBC.valid = kcg_true;
  outC->_L8.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L8.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L8.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L7.valid = kcg_true;
  outC->_L7.source = msrc_undefined_Common_Types_Pkg;
  outC->_L7.radioMetadata.t_train_reference = kcg_true;
  outC->_L7.radioMetadata.nid_em = kcg_true;
  outC->_L7.radioMetadata.q_scale = kcg_true;
  outC->_L7.radioMetadata.d_sr = kcg_true;
  outC->_L7.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L7.radioMetadata.d_ref = kcg_true;
  outC->_L7.radioMetadata.q_dir = kcg_true;
  outC->_L7.radioMetadata.d_emergencystop = kcg_true;
  outC->_L7.radioMetadata.m_version = kcg_true;
  outC->_L7.BG_Common_Header.valid = kcg_true;
  outC->_L7.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L7.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L7.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L7.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L7.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L7.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L7.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L7.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L7.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L7.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L7.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L7.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L7.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L7.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L7.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L7.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L7.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L7.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L7.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L7.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L7.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L7.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L7.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L7.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L7.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L7.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L7.packets.PacketHeaders[idx2].nid_packet = kcg_lit_int32(0);
    outC->_L7.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L7.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L7.packets.PacketHeaders[idx2].startAddress = kcg_lit_int32(0);
    outC->_L7.packets.PacketHeaders[idx2].endAddress = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L7.packets.PacketData[idx3] = kcg_lit_int32(0);
  }
  outC->_L7.sendingRBC.valid = kcg_true;
  outC->_L7.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L7.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L7.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L2.valid = kcg_true;
  outC->_L2.source = msrc_undefined_Common_Types_Pkg;
  outC->_L2.radioMetadata.t_train_reference = kcg_true;
  outC->_L2.radioMetadata.nid_em = kcg_true;
  outC->_L2.radioMetadata.q_scale = kcg_true;
  outC->_L2.radioMetadata.d_sr = kcg_true;
  outC->_L2.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L2.radioMetadata.d_ref = kcg_true;
  outC->_L2.radioMetadata.q_dir = kcg_true;
  outC->_L2.radioMetadata.d_emergencystop = kcg_true;
  outC->_L2.radioMetadata.m_version = kcg_true;
  outC->_L2.BG_Common_Header.valid = kcg_true;
  outC->_L2.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L2.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L2.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L2.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L2.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L2.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L2.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L2.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L2.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L2.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L2.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L2.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L2.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L2.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L2.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L2.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L2.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L2.BG_Common_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L2.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L2.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L2.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L2.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L2.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L2.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L2.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L2.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L2.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L2.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L2.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L2.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L2.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L2.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L2.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L2.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L2.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L2.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L2.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L2.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L2.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L2.packets.PacketHeaders[idx4].nid_packet = kcg_lit_int32(0);
    outC->_L2.packets.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L2.packets.PacketHeaders[idx4].valid = kcg_true;
    outC->_L2.packets.PacketHeaders[idx4].startAddress = kcg_lit_int32(0);
    outC->_L2.packets.PacketHeaders[idx4].endAddress = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L2.packets.PacketData[idx5] = kcg_lit_int32(0);
  }
  outC->_L2.sendingRBC.valid = kcg_true;
  outC->_L2.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L2.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L2.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L3 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L1 = kcg_true;
  outC->newTransitionOrderReceived = kcg_true;
  outC->p131_transitionOrder_mem.valid = kcg_true;
  outC->p131_transitionOrder_mem.source = msrc_undefined_Common_Types_Pkg;
  outC->p131_transitionOrder_mem.radioMetadata.t_train_reference = kcg_true;
  outC->p131_transitionOrder_mem.radioMetadata.nid_em = kcg_true;
  outC->p131_transitionOrder_mem.radioMetadata.q_scale = kcg_true;
  outC->p131_transitionOrder_mem.radioMetadata.d_sr = kcg_true;
  outC->p131_transitionOrder_mem.radioMetadata.t_sh_rqst = kcg_true;
  outC->p131_transitionOrder_mem.radioMetadata.d_ref = kcg_true;
  outC->p131_transitionOrder_mem.radioMetadata.q_dir = kcg_true;
  outC->p131_transitionOrder_mem.radioMetadata.d_emergencystop = kcg_true;
  outC->p131_transitionOrder_mem.radioMetadata.m_version = kcg_true;
  outC->p131_transitionOrder_mem.BG_Common_Header.valid = kcg_true;
  outC->p131_transitionOrder_mem.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->p131_transitionOrder_mem.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->p131_transitionOrder_mem.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->p131_transitionOrder_mem.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->p131_transitionOrder_mem.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->p131_transitionOrder_mem.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->p131_transitionOrder_mem.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->p131_transitionOrder_mem.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->p131_transitionOrder_mem.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->p131_transitionOrder_mem.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->p131_transitionOrder_mem.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->p131_transitionOrder_mem.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->p131_transitionOrder_mem.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->p131_transitionOrder_mem.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->p131_transitionOrder_mem.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->p131_transitionOrder_mem.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->p131_transitionOrder_mem.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->p131_transitionOrder_mem.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->p131_transitionOrder_mem.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->p131_transitionOrder_mem.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->p131_transitionOrder_mem.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->p131_transitionOrder_mem.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->p131_transitionOrder_mem.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->p131_transitionOrder_mem.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->p131_transitionOrder_mem.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->p131_transitionOrder_mem.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->p131_transitionOrder_mem.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->p131_transitionOrder_mem.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->p131_transitionOrder_mem.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->p131_transitionOrder_mem.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->p131_transitionOrder_mem.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->p131_transitionOrder_mem.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->p131_transitionOrder_mem.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->p131_transitionOrder_mem.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->p131_transitionOrder_mem.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->p131_transitionOrder_mem.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->p131_transitionOrder_mem.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->p131_transitionOrder_mem.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->p131_transitionOrder_mem.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->p131_transitionOrder_mem.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->p131_transitionOrder_mem.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->p131_transitionOrder_mem.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->p131_transitionOrder_mem.packets.PacketHeaders[idx6].nid_packet =
      kcg_lit_int32(0);
    outC->p131_transitionOrder_mem.packets.PacketHeaders[idx6].q_dir =
      Q_DIR_Reverse;
    outC->p131_transitionOrder_mem.packets.PacketHeaders[idx6].valid = kcg_true;
    outC->p131_transitionOrder_mem.packets.PacketHeaders[idx6].startAddress =
      kcg_lit_int32(0);
    outC->p131_transitionOrder_mem.packets.PacketHeaders[idx6].endAddress =
      kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->p131_transitionOrder_mem.packets.PacketData[idx7] = kcg_lit_int32(0);
  }
  outC->p131_transitionOrder_mem.sendingRBC.valid = kcg_true;
  outC->p131_transitionOrder_mem.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->p131_transitionOrder_mem.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->p131_transitionOrder_mem.sendingRBC.device_id = kcg_lit_int32(0);
  outC->IfBlock1_clock = kcg_true;
  outC->sHandoverFinished = kcg_true;
  outC->sNotReady = kcg_true;
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.valid =
    kcg_true;
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.nid_em =
    kcg_true;
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.q_scale =
    kcg_true;
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_sr =
    kcg_true;
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_ref =
    kcg_true;
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.q_dir =
    kcg_true;
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.m_version =
    kcg_true;
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.valid =
    kcg_true;
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx8].nid_packet =
      kcg_lit_int32(0);
    outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx8].q_dir =
      Q_DIR_Reverse;
    outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx8].valid =
      kcg_true;
    outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx8].startAddress =
      kcg_lit_int32(0);
    outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx8].endAddress =
      kcg_lit_int32(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketData[idx9] =
      kcg_lit_int32(0);
  }
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.valid =
    kcg_true;
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.nid_c =
    kcg_lit_int32(0);
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.rbc_id =
    kcg_lit_int32(0);
  outC->_L19_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.device_id =
    kcg_lit_int32(0);
  outC->_L18_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_L17_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_L16_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.valid =
    kcg_true;
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.nid_em =
    kcg_true;
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.q_scale =
    kcg_true;
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_sr =
    kcg_true;
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_ref =
    kcg_true;
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.q_dir =
    kcg_true;
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.m_version =
    kcg_true;
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.valid =
    kcg_true;
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx10].nid_packet =
      kcg_lit_int32(0);
    outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx10].q_dir =
      Q_DIR_Reverse;
    outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx10].valid =
      kcg_true;
    outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx10].startAddress =
      kcg_lit_int32(0);
    outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx10].endAddress =
      kcg_lit_int32(0);
  }
  for (idx11 = 0; idx11 < 500; idx11++) {
    outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketData[idx11] =
      kcg_lit_int32(0);
  }
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.valid =
    kcg_true;
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.nid_c =
    kcg_lit_int32(0);
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.rbc_id =
    kcg_lit_int32(0);
  outC->_L15_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.device_id =
    kcg_lit_int32(0);
  outC->_L14_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.valid =
    kcg_true;
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.nid_em =
    kcg_true;
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.q_scale =
    kcg_true;
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_sr =
    kcg_true;
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_ref =
    kcg_true;
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.q_dir =
    kcg_true;
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.m_version =
    kcg_true;
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.valid =
    kcg_true;
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx12 = 0; idx12 < 30; idx12++) {
    outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx12].nid_packet =
      kcg_lit_int32(0);
    outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx12].q_dir =
      Q_DIR_Reverse;
    outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx12].valid =
      kcg_true;
    outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx12].startAddress =
      kcg_lit_int32(0);
    outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx12].endAddress =
      kcg_lit_int32(0);
  }
  for (idx13 = 0; idx13 < 500; idx13++) {
    outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketData[idx13] =
      kcg_lit_int32(0);
  }
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.valid =
    kcg_true;
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.nid_c =
    kcg_lit_int32(0);
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.rbc_id =
    kcg_lit_int32(0);
  outC->_L13_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.device_id =
    kcg_lit_int32(0);
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.valid =
    kcg_true;
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.nid_em =
    kcg_true;
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.q_scale =
    kcg_true;
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_sr =
    kcg_true;
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_ref =
    kcg_true;
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.q_dir =
    kcg_true;
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.m_version =
    kcg_true;
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.valid =
    kcg_true;
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx14 = 0; idx14 < 30; idx14++) {
    outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx14].nid_packet =
      kcg_lit_int32(0);
    outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx14].q_dir =
      Q_DIR_Reverse;
    outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx14].valid =
      kcg_true;
    outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx14].startAddress =
      kcg_lit_int32(0);
    outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx14].endAddress =
      kcg_lit_int32(0);
  }
  for (idx15 = 0; idx15 < 500; idx15++) {
    outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketData[idx15] =
      kcg_lit_int32(0);
  }
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.valid =
    kcg_true;
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.nid_c =
    kcg_lit_int32(0);
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.rbc_id =
    kcg_lit_int32(0);
  outC->_L12_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.device_id =
    kcg_lit_int32(0);
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.valid =
    kcg_true;
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.nid_em =
    kcg_true;
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.q_scale =
    kcg_true;
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_sr =
    kcg_true;
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_ref =
    kcg_true;
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.q_dir =
    kcg_true;
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.m_version =
    kcg_true;
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.valid =
    kcg_true;
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx16 = 0; idx16 < 30; idx16++) {
    outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx16].nid_packet =
      kcg_lit_int32(0);
    outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx16].q_dir =
      Q_DIR_Reverse;
    outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx16].valid =
      kcg_true;
    outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx16].startAddress =
      kcg_lit_int32(0);
    outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx16].endAddress =
      kcg_lit_int32(0);
  }
  for (idx17 = 0; idx17 < 500; idx17++) {
    outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketData[idx17] =
      kcg_lit_int32(0);
  }
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.valid =
    kcg_true;
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.nid_c =
    kcg_lit_int32(0);
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.rbc_id =
    kcg_lit_int32(0);
  outC->_L980_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.device_id =
    kcg_lit_int32(0);
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.valid =
    kcg_true;
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.nid_em =
    kcg_true;
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.q_scale =
    kcg_true;
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_sr =
    kcg_true;
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_ref =
    kcg_true;
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.q_dir =
    kcg_true;
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.m_version =
    kcg_true;
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.valid =
    kcg_true;
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx18 = 0; idx18 < 30; idx18++) {
    outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx18].nid_packet =
      kcg_lit_int32(0);
    outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx18].q_dir =
      Q_DIR_Reverse;
    outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx18].valid =
      kcg_true;
    outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx18].startAddress =
      kcg_lit_int32(0);
    outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx18].endAddress =
      kcg_lit_int32(0);
  }
  for (idx19 = 0; idx19 < 500; idx19++) {
    outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketData[idx19] =
      kcg_lit_int32(0);
  }
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.valid =
    kcg_true;
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.nid_c =
    kcg_lit_int32(0);
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.rbc_id =
    kcg_lit_int32(0);
  outC->_L879_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.device_id =
    kcg_lit_int32(0);
  outC->_L778_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.valid =
    kcg_true;
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.nid_em =
    kcg_true;
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.q_scale =
    kcg_true;
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_sr =
    kcg_true;
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_ref =
    kcg_true;
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.q_dir =
    kcg_true;
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.m_version =
    kcg_true;
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.valid =
    kcg_true;
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx20 = 0; idx20 < 30; idx20++) {
    outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx20].nid_packet =
      kcg_lit_int32(0);
    outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx20].q_dir =
      Q_DIR_Reverse;
    outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx20].valid =
      kcg_true;
    outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx20].startAddress =
      kcg_lit_int32(0);
    outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx20].endAddress =
      kcg_lit_int32(0);
  }
  for (idx21 = 0; idx21 < 500; idx21++) {
    outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketData[idx21] =
      kcg_lit_int32(0);
  }
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.valid =
    kcg_true;
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.nid_c =
    kcg_lit_int32(0);
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.rbc_id =
    kcg_lit_int32(0);
  outC->_L677_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.device_id =
    kcg_lit_int32(0);
  outC->transitionOrdered_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_22_tr_1_clock_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_L16_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1 =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L1576_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1.valid =
    kcg_true;
  outC->_L1576_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1.phase =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L1576_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1.nid_c =
    kcg_lit_int32(0);
  outC->_L1576_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1.nid_rbc =
    kcg_lit_int32(0);
  outC->_L1576_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1.nid_radio =
    kcg_lit_int64(0);
  outC->_L175_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1 =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L274_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1.registration.valid =
    kcg_true;
  outC->_L274_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1.registration.mobileDeviceNo =
    kcg_lit_int32(0);
  outC->_L274_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1.registration.healthStatus =
    mhs_nok_RCM_Types_Pkg;
  outC->_L274_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1.registration.status =
    mrs_unregistered_RCM_Types_Pkg;
  outC->_L274_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1.registration.nid_mn =
    kcg_lit_int32(0);
  outC->_L274_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1.connection.valid =
    kcg_true;
  outC->_L274_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1.connection.mobileDeviceNo =
    kcg_lit_int32(0);
  outC->_L274_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1.connection.status =
    mcs_disconnected_RCM_Types_Pkg;
  outC->_L274_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1.connection.nid_radio =
    kcg_lit_int64(0);
  outC->_L274_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1.connection.settingUpConnectionHasFailed =
    kcg_true;
  outC->_L274_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1.connection.connectionLost =
    kcg_true;
  outC->_L274_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1.connection.isInRadioHole =
    kcg_true;
  outC->_L274_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1.session.valid =
    kcg_true;
  outC->_L274_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1.session.phase =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L274_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1.session.nid_c =
    kcg_lit_int32(0);
  outC->_L274_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1.session.nid_rbc =
    kcg_lit_int32(0);
  outC->_L274_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1.session.nid_radio =
    kcg_lit_int64(0);
  outC->_L573_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_L672_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_L871_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_L1470_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_21_tr_1_clock_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_20_tr_2_clock_WaitForMaxSafeFrontEndPassing_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_L1869_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1 =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L1768_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1.valid =
    kcg_true;
  outC->_L1768_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1.phase =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L1768_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1.nid_c =
    kcg_lit_int32(0);
  outC->_L1768_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1.nid_rbc =
    kcg_lit_int32(0);
  outC->_L1768_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1.nid_radio =
    kcg_lit_int64(0);
  outC->_L1667_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_L1_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1 =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L266_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1.registration.valid =
    kcg_true;
  outC->_L266_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1.registration.mobileDeviceNo =
    kcg_lit_int32(0);
  outC->_L266_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1.registration.healthStatus =
    mhs_nok_RCM_Types_Pkg;
  outC->_L266_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1.registration.status =
    mrs_unregistered_RCM_Types_Pkg;
  outC->_L266_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1.registration.nid_mn =
    kcg_lit_int32(0);
  outC->_L266_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1.connection.valid =
    kcg_true;
  outC->_L266_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1.connection.mobileDeviceNo =
    kcg_lit_int32(0);
  outC->_L266_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1.connection.status =
    mcs_disconnected_RCM_Types_Pkg;
  outC->_L266_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1.connection.nid_radio =
    kcg_lit_int64(0);
  outC->_L266_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1.connection.settingUpConnectionHasFailed =
    kcg_true;
  outC->_L266_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1.connection.connectionLost =
    kcg_true;
  outC->_L266_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1.connection.isInRadioHole =
    kcg_true;
  outC->_L266_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1.session.valid =
    kcg_true;
  outC->_L266_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1.session.phase =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L266_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1.session.nid_c =
    kcg_lit_int32(0);
  outC->_L266_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1.session.nid_rbc =
    kcg_lit_int32(0);
  outC->_L266_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1.session.nid_radio =
    kcg_lit_int64(0);
  outC->_L565_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_L864_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_L14_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_19_tr_1_clock_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_18_tr_2_clock_WaitForMinSafeRearEndPassing_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_L25_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1 =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L24_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.valid =
    kcg_true;
  outC->_L24_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.phase =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L24_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.nid_c =
    kcg_lit_int32(0);
  outC->_L24_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.nid_rbc =
    kcg_lit_int32(0);
  outC->_L24_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.nid_radio =
    kcg_lit_int64(0);
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.valid =
    kcg_true;
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.nid_em =
    kcg_true;
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.q_scale =
    kcg_true;
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_sr =
    kcg_true;
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_ref =
    kcg_true;
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.q_dir =
    kcg_true;
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.m_version =
    kcg_true;
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.valid =
    kcg_true;
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx22 = 0; idx22 < 30; idx22++) {
    outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx22].nid_packet =
      kcg_lit_int32(0);
    outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx22].q_dir =
      Q_DIR_Reverse;
    outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx22].valid =
      kcg_true;
    outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx22].startAddress =
      kcg_lit_int32(0);
    outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx22].endAddress =
      kcg_lit_int32(0);
  }
  for (idx23 = 0; idx23 < 500; idx23++) {
    outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketData[idx23] =
      kcg_lit_int32(0);
  }
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.valid =
    kcg_true;
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.nid_c =
    kcg_lit_int32(0);
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.rbc_id =
    kcg_lit_int32(0);
  outC->_L2363_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.device_id =
    kcg_lit_int32(0);
  outC->_L2062_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.registration.valid =
    kcg_true;
  outC->_L2062_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.registration.mobileDeviceNo =
    kcg_lit_int32(0);
  outC->_L2062_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.registration.healthStatus =
    mhs_nok_RCM_Types_Pkg;
  outC->_L2062_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.registration.status =
    mrs_unregistered_RCM_Types_Pkg;
  outC->_L2062_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.registration.nid_mn =
    kcg_lit_int32(0);
  outC->_L2062_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.connection.valid =
    kcg_true;
  outC->_L2062_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.connection.mobileDeviceNo =
    kcg_lit_int32(0);
  outC->_L2062_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.connection.status =
    mcs_disconnected_RCM_Types_Pkg;
  outC->_L2062_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.connection.nid_radio =
    kcg_lit_int64(0);
  outC->_L2062_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.connection.settingUpConnectionHasFailed =
    kcg_true;
  outC->_L2062_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.connection.connectionLost =
    kcg_true;
  outC->_L2062_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.connection.isInRadioHole =
    kcg_true;
  outC->_L2062_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.session.valid =
    kcg_true;
  outC->_L2062_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.session.phase =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L2062_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.session.nid_c =
    kcg_lit_int32(0);
  outC->_L2062_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.session.nid_rbc =
    kcg_lit_int32(0);
  outC->_L2062_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1.session.nid_radio =
    kcg_lit_int64(0);
  outC->_L861_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1 =
    M_MODE_Full_Supervision;
  outC->_L960_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_L1159_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_L1258_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_L1457_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1 =
    M_MODE_Full_Supervision;
  outC->_L1656_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_L1855_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_L1954_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1 =
    M_MODE_Full_Supervision;
  outC->_L2_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_L6_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1 =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_53_sessionWithAcceptingRBCEstablished_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_17_tr_1_clock_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->tr_2_clock_WaitForSessionWithAcceptingRBCEstablished_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.valid =
    kcg_true;
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.nid_em =
    kcg_true;
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.q_scale =
    kcg_true;
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_sr =
    kcg_true;
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_ref =
    kcg_true;
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.q_dir =
    kcg_true;
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.m_version =
    kcg_true;
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.valid =
    kcg_true;
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx24 = 0; idx24 < 30; idx24++) {
    outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx24].nid_packet =
      kcg_lit_int32(0);
    outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx24].q_dir =
      Q_DIR_Reverse;
    outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx24].valid =
      kcg_true;
    outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx24].startAddress =
      kcg_lit_int32(0);
    outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx24].endAddress =
      kcg_lit_int32(0);
  }
  for (idx25 = 0; idx25 < 500; idx25++) {
    outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketData[idx25] =
      kcg_lit_int32(0);
  }
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.valid =
    kcg_true;
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.nid_c =
    kcg_lit_int32(0);
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.rbc_id =
    kcg_lit_int32(0);
  outC->_L3352_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.device_id =
    kcg_lit_int32(0);
  outC->_L2551_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_L2650_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_L2749_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_L2948_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.valid =
    kcg_true;
  outC->_L2948_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.q_dir =
    Q_DIR_Reverse;
  outC->_L2948_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.q_rbc =
    Q_RBC_Terminate_communication_session;
  outC->_L2948_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.nid_c =
    kcg_lit_int32(0);
  outC->_L2948_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.nid_rbc =
    kcg_lit_int32(0);
  outC->_L2948_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.nid_radio =
    kcg_lit_int64(0);
  outC->_L2948_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L2847_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_L3046_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1 =
    Q_RBC_Terminate_communication_session;
  for (idx26 = 0; idx26 < 30; idx26++) {
    outC->_L3145_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.PacketHeaders[idx26].nid_packet =
      kcg_lit_int32(0);
    outC->_L3145_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.PacketHeaders[idx26].q_dir =
      Q_DIR_Reverse;
    outC->_L3145_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.PacketHeaders[idx26].valid =
      kcg_true;
    outC->_L3145_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.PacketHeaders[idx26].startAddress =
      kcg_lit_int32(0);
    outC->_L3145_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.PacketHeaders[idx26].endAddress =
      kcg_lit_int32(0);
  }
  for (idx27 = 0; idx27 < 500; idx27++) {
    outC->_L3145_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.PacketData[idx27] =
      kcg_lit_int32(0);
  }
  outC->_L3244_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1 =
    Q_RBC_Terminate_communication_session;
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.valid =
    kcg_true;
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.nid_em =
    kcg_true;
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.q_scale =
    kcg_true;
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_sr =
    kcg_true;
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_ref =
    kcg_true;
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.q_dir =
    kcg_true;
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.m_version =
    kcg_true;
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.valid =
    kcg_true;
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx28 = 0; idx28 < 30; idx28++) {
    outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx28].nid_packet =
      kcg_lit_int32(0);
    outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx28].q_dir =
      Q_DIR_Reverse;
    outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx28].valid =
      kcg_true;
    outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx28].startAddress =
      kcg_lit_int32(0);
    outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx28].endAddress =
      kcg_lit_int32(0);
  }
  for (idx29 = 0; idx29 < 500; idx29++) {
    outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketData[idx29] =
      kcg_lit_int32(0);
  }
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.valid =
    kcg_true;
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.nid_c =
    kcg_lit_int32(0);
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.rbc_id =
    kcg_lit_int32(0);
  outC->_L2343_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.device_id =
    kcg_lit_int32(0);
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.valid =
    kcg_true;
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.nid_em =
    kcg_true;
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.q_scale =
    kcg_true;
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_sr =
    kcg_true;
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_ref =
    kcg_true;
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.q_dir =
    kcg_true;
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.m_version =
    kcg_true;
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.valid =
    kcg_true;
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx30 = 0; idx30 < 30; idx30++) {
    outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx30].nid_packet =
      kcg_lit_int32(0);
    outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx30].q_dir =
      Q_DIR_Reverse;
    outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx30].valid =
      kcg_true;
    outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx30].startAddress =
      kcg_lit_int32(0);
    outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx30].endAddress =
      kcg_lit_int32(0);
  }
  for (idx31 = 0; idx31 < 500; idx31++) {
    outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketData[idx31] =
      kcg_lit_int32(0);
  }
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.valid =
    kcg_true;
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.nid_c =
    kcg_lit_int32(0);
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.rbc_id =
    kcg_lit_int32(0);
  outC->_L842_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.device_id =
    kcg_lit_int32(0);
  outC->_L741_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.registration.valid =
    kcg_true;
  outC->_L741_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.registration.mobileDeviceNo =
    kcg_lit_int32(0);
  outC->_L741_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.registration.healthStatus =
    mhs_nok_RCM_Types_Pkg;
  outC->_L741_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.registration.status =
    mrs_unregistered_RCM_Types_Pkg;
  outC->_L741_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.registration.nid_mn =
    kcg_lit_int32(0);
  outC->_L741_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.connection.valid =
    kcg_true;
  outC->_L741_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.connection.mobileDeviceNo =
    kcg_lit_int32(0);
  outC->_L741_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.connection.status =
    mcs_disconnected_RCM_Types_Pkg;
  outC->_L741_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.connection.nid_radio =
    kcg_lit_int64(0);
  outC->_L741_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.connection.settingUpConnectionHasFailed =
    kcg_true;
  outC->_L741_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.connection.connectionLost =
    kcg_true;
  outC->_L741_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.connection.isInRadioHole =
    kcg_true;
  outC->_L741_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.session.valid =
    kcg_true;
  outC->_L741_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.session.phase =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L741_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.session.nid_c =
    kcg_lit_int32(0);
  outC->_L741_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.session.nid_rbc =
    kcg_lit_int32(0);
  outC->_L741_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.session.nid_radio =
    kcg_lit_int64(0);
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.valid =
    kcg_true;
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.nid_em =
    kcg_true;
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.q_scale =
    kcg_true;
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_sr =
    kcg_true;
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_ref =
    kcg_true;
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.q_dir =
    kcg_true;
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.m_version =
    kcg_true;
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.valid =
    kcg_true;
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx32 = 0; idx32 < 30; idx32++) {
    outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx32].nid_packet =
      kcg_lit_int32(0);
    outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx32].q_dir =
      Q_DIR_Reverse;
    outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx32].valid =
      kcg_true;
    outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx32].startAddress =
      kcg_lit_int32(0);
    outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx32].endAddress =
      kcg_lit_int32(0);
  }
  for (idx33 = 0; idx33 < 500; idx33++) {
    outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketData[idx33] =
      kcg_lit_int32(0);
  }
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.valid =
    kcg_true;
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.nid_c =
    kcg_lit_int32(0);
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.rbc_id =
    kcg_lit_int32(0);
  outC->_L340_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.device_id =
    kcg_lit_int32(0);
  outC->_39_terminationWithHandingOverRBCOrdered_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_16_tr_1_clock_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_15_tr_2_clock_WaitForTerminationOrderFromHandingOverRBC_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_L838_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1 =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L7_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1.valid =
    kcg_true;
  outC->_L7_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1.phase =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L7_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1.nid_c =
    kcg_lit_int32(0);
  outC->_L7_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1.nid_rbc =
    kcg_lit_int32(0);
  outC->_L7_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1.nid_radio =
    kcg_lit_int64(0);
  outC->_L237_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1.registration.valid =
    kcg_true;
  outC->_L237_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1.registration.mobileDeviceNo =
    kcg_lit_int32(0);
  outC->_L237_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1.registration.healthStatus =
    mhs_nok_RCM_Types_Pkg;
  outC->_L237_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1.registration.status =
    mrs_unregistered_RCM_Types_Pkg;
  outC->_L237_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1.registration.nid_mn =
    kcg_lit_int32(0);
  outC->_L237_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1.connection.valid =
    kcg_true;
  outC->_L237_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1.connection.mobileDeviceNo =
    kcg_lit_int32(0);
  outC->_L237_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1.connection.status =
    mcs_disconnected_RCM_Types_Pkg;
  outC->_L237_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1.connection.nid_radio =
    kcg_lit_int64(0);
  outC->_L237_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1.connection.settingUpConnectionHasFailed =
    kcg_true;
  outC->_L237_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1.connection.connectionLost =
    kcg_true;
  outC->_L237_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1.connection.isInRadioHole =
    kcg_true;
  outC->_L237_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1.session.valid =
    kcg_true;
  outC->_L237_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1.session.phase =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L237_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1.session.nid_c =
    kcg_lit_int32(0);
  outC->_L237_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1.session.nid_rbc =
    kcg_lit_int32(0);
  outC->_L237_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1.session.nid_radio =
    kcg_lit_int64(0);
  outC->_L336_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_L435_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1 =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_34_sessionWithHandingOverRBC_terminated_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_14_tr_1_clock_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_13_tr_2_clock_WaitForHandingOverRBCTerminated_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_L69_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
    mrs_unregistered_RCM_Types_Pkg;
  outC->_L68_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
    mrs_unregistered_RCM_Types_Pkg;
  outC->_L67_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.valid =
    kcg_true;
  outC->_L67_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.mobileDeviceNo =
    kcg_lit_int32(0);
  outC->_L67_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.healthStatus =
    mhs_nok_RCM_Types_Pkg;
  outC->_L67_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.status =
    mrs_unregistered_RCM_Types_Pkg;
  outC->_L67_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.nid_mn =
    kcg_lit_int32(0);
  outC->_L63_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_L64_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_L65_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_L66_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_L56_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_L57_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_L58_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.valid =
    kcg_true;
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.nid_em =
    kcg_true;
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.q_scale =
    kcg_true;
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_sr =
    kcg_true;
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_ref =
    kcg_true;
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.q_dir =
    kcg_true;
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.m_version =
    kcg_true;
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.valid =
    kcg_true;
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx34 = 0; idx34 < 30; idx34++) {
    outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx34].nid_packet =
      kcg_lit_int32(0);
    outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx34].q_dir =
      Q_DIR_Reverse;
    outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx34].valid =
      kcg_true;
    outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx34].startAddress =
      kcg_lit_int32(0);
    outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx34].endAddress =
      kcg_lit_int32(0);
  }
  for (idx35 = 0; idx35 < 500; idx35++) {
    outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketData[idx35] =
      kcg_lit_int32(0);
  }
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.valid =
    kcg_true;
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.nid_c =
    kcg_lit_int32(0);
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.rbc_id =
    kcg_lit_int32(0);
  outC->_L55_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.device_id =
    kcg_lit_int32(0);
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.valid =
    kcg_true;
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.nid_em =
    kcg_true;
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.q_scale =
    kcg_true;
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_sr =
    kcg_true;
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_ref =
    kcg_true;
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.q_dir =
    kcg_true;
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.m_version =
    kcg_true;
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.valid =
    kcg_true;
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx36 = 0; idx36 < 30; idx36++) {
    outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx36].nid_packet =
      kcg_lit_int32(0);
    outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx36].q_dir =
      Q_DIR_Reverse;
    outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx36].valid =
      kcg_true;
    outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx36].startAddress =
      kcg_lit_int32(0);
    outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx36].endAddress =
      kcg_lit_int32(0);
  }
  for (idx37 = 0; idx37 < 500; idx37++) {
    outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketData[idx37] =
      kcg_lit_int32(0);
  }
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.valid =
    kcg_true;
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.nid_c =
    kcg_lit_int32(0);
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.rbc_id =
    kcg_lit_int32(0);
  outC->_L54_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.device_id =
    kcg_lit_int32(0);
  outC->_L53_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_L43_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_L44_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_L45_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
    mrs_unregistered_RCM_Types_Pkg;
  outC->_L47_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_L48_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_lit_int32(0);
  outC->_L49_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.registration.valid =
    kcg_true;
  outC->_L49_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.registration.mobileDeviceNo =
    kcg_lit_int32(0);
  outC->_L49_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.registration.healthStatus =
    mhs_nok_RCM_Types_Pkg;
  outC->_L49_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.registration.status =
    mrs_unregistered_RCM_Types_Pkg;
  outC->_L49_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.registration.nid_mn =
    kcg_lit_int32(0);
  outC->_L49_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.connection.valid =
    kcg_true;
  outC->_L49_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.connection.mobileDeviceNo =
    kcg_lit_int32(0);
  outC->_L49_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.connection.status =
    mcs_disconnected_RCM_Types_Pkg;
  outC->_L49_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.connection.nid_radio =
    kcg_lit_int64(0);
  outC->_L49_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.connection.settingUpConnectionHasFailed =
    kcg_true;
  outC->_L49_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.connection.connectionLost =
    kcg_true;
  outC->_L49_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.connection.isInRadioHole =
    kcg_true;
  outC->_L49_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.session.valid =
    kcg_true;
  outC->_L49_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.session.phase =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L49_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.session.nid_c =
    kcg_lit_int32(0);
  outC->_L49_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.session.nid_rbc =
    kcg_lit_int32(0);
  outC->_L49_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.session.nid_radio =
    kcg_lit_int64(0);
  outC->_L50_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_L51_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_L42_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_lit_int32(0);
  outC->_L41_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  for (idx38 = 0; idx38 < 30; idx38++) {
    outC->_L37_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.PacketHeaders[idx38].nid_packet =
      kcg_lit_int32(0);
    outC->_L37_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.PacketHeaders[idx38].q_dir =
      Q_DIR_Reverse;
    outC->_L37_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.PacketHeaders[idx38].valid =
      kcg_true;
    outC->_L37_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.PacketHeaders[idx38].startAddress =
      kcg_lit_int32(0);
    outC->_L37_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.PacketHeaders[idx38].endAddress =
      kcg_lit_int32(0);
  }
  for (idx39 = 0; idx39 < 500; idx39++) {
    outC->_L37_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.PacketData[idx39] =
      kcg_lit_int32(0);
  }
  outC->_L39_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.valid =
    kcg_true;
  outC->_L39_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.q_dir =
    Q_DIR_Reverse;
  outC->_L39_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.nid_mn =
    kcg_lit_int32(0);
  outC->_L38_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_L40_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.valid =
    kcg_true;
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.nid_em =
    kcg_true;
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.q_scale =
    kcg_true;
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_sr =
    kcg_true;
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_ref =
    kcg_true;
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.q_dir =
    kcg_true;
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.m_version =
    kcg_true;
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.valid =
    kcg_true;
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx40 = 0; idx40 < 30; idx40++) {
    outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx40].nid_packet =
      kcg_lit_int32(0);
    outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx40].q_dir =
      Q_DIR_Reverse;
    outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx40].valid =
      kcg_true;
    outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx40].startAddress =
      kcg_lit_int32(0);
    outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx40].endAddress =
      kcg_lit_int32(0);
  }
  for (idx41 = 0; idx41 < 500; idx41++) {
    outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketData[idx41] =
      kcg_lit_int32(0);
  }
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.valid =
    kcg_true;
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.nid_c =
    kcg_lit_int32(0);
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.rbc_id =
    kcg_lit_int32(0);
  outC->_L36_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.device_id =
    kcg_lit_int32(0);
  outC->_33_unregistered_or_noReregisterRequired_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->tr_1_clock_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->tr_2_clock_RegisterAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_L11_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1 =
    mrs_unregistered_RCM_Types_Pkg;
  outC->_L10_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1.valid =
    kcg_true;
  outC->_L10_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1.mobileDeviceNo =
    kcg_lit_int32(0);
  outC->_L10_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1.healthStatus =
    mhs_nok_RCM_Types_Pkg;
  outC->_L10_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1.status =
    mrs_unregistered_RCM_Types_Pkg;
  outC->_L10_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1.nid_mn =
    kcg_lit_int32(0);
  outC->_L432_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1.registration.valid =
    kcg_true;
  outC->_L432_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1.registration.mobileDeviceNo =
    kcg_lit_int32(0);
  outC->_L432_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1.registration.healthStatus =
    mhs_nok_RCM_Types_Pkg;
  outC->_L432_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1.registration.status =
    mrs_unregistered_RCM_Types_Pkg;
  outC->_L432_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1.registration.nid_mn =
    kcg_lit_int32(0);
  outC->_L432_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1.connection.valid =
    kcg_true;
  outC->_L432_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1.connection.mobileDeviceNo =
    kcg_lit_int32(0);
  outC->_L432_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1.connection.status =
    mcs_disconnected_RCM_Types_Pkg;
  outC->_L432_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1.connection.nid_radio =
    kcg_lit_int64(0);
  outC->_L432_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1.connection.settingUpConnectionHasFailed =
    kcg_true;
  outC->_L432_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1.connection.connectionLost =
    kcg_true;
  outC->_L432_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1.connection.isInRadioHole =
    kcg_true;
  outC->_L432_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1.session.valid =
    kcg_true;
  outC->_L432_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1.session.phase =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L432_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1.session.nid_c =
    kcg_lit_int32(0);
  outC->_L432_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1.session.nid_rbc =
    kcg_lit_int32(0);
  outC->_L432_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1.session.nid_radio =
    kcg_lit_int64(0);
  outC->_L731_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1 =
    mrs_unregistered_RCM_Types_Pkg;
  outC->_L930_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_29_handingOverRBCReregistered_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_12_tr_1_clock_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_11_tr_2_clock_WaitForHandingOverRBCRegistered_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.valid =
    kcg_true;
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.nid_em =
    kcg_true;
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.q_scale =
    kcg_true;
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_sr =
    kcg_true;
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_ref =
    kcg_true;
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.q_dir =
    kcg_true;
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.m_version =
    kcg_true;
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.valid =
    kcg_true;
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx42 = 0; idx42 < 30; idx42++) {
    outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx42].nid_packet =
      kcg_lit_int32(0);
    outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx42].q_dir =
      Q_DIR_Reverse;
    outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx42].valid =
      kcg_true;
    outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx42].startAddress =
      kcg_lit_int32(0);
    outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx42].endAddress =
      kcg_lit_int32(0);
  }
  for (idx43 = 0; idx43 < 500; idx43++) {
    outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketData[idx43] =
      kcg_lit_int32(0);
  }
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.valid =
    kcg_true;
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.nid_c =
    kcg_lit_int32(0);
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.rbc_id =
    kcg_lit_int32(0);
  outC->_L8_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.device_id =
    kcg_lit_int32(0);
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.valid =
    kcg_true;
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.nid_em =
    kcg_true;
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.q_scale =
    kcg_true;
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_sr =
    kcg_true;
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_ref =
    kcg_true;
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.q_dir =
    kcg_true;
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.m_version =
    kcg_true;
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.valid =
    kcg_true;
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx44 = 0; idx44 < 30; idx44++) {
    outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx44].nid_packet =
      kcg_lit_int32(0);
    outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx44].q_dir =
      Q_DIR_Reverse;
    outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx44].valid =
      kcg_true;
    outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx44].startAddress =
      kcg_lit_int32(0);
    outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx44].endAddress =
      kcg_lit_int32(0);
  }
  for (idx45 = 0; idx45 < 500; idx45++) {
    outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketData[idx45] =
      kcg_lit_int32(0);
  }
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.valid =
    kcg_true;
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.nid_c =
    kcg_lit_int32(0);
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.rbc_id =
    kcg_lit_int32(0);
  outC->_L7_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.device_id =
    kcg_lit_int32(0);
  outC->_L6_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.registration.valid =
    kcg_true;
  outC->_L6_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.registration.mobileDeviceNo =
    kcg_lit_int32(0);
  outC->_L6_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.registration.healthStatus =
    mhs_nok_RCM_Types_Pkg;
  outC->_L6_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.registration.status =
    mrs_unregistered_RCM_Types_Pkg;
  outC->_L6_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.registration.nid_mn =
    kcg_lit_int32(0);
  outC->_L6_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.connection.valid =
    kcg_true;
  outC->_L6_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.connection.mobileDeviceNo =
    kcg_lit_int32(0);
  outC->_L6_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.connection.status =
    mcs_disconnected_RCM_Types_Pkg;
  outC->_L6_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.connection.nid_radio =
    kcg_lit_int64(0);
  outC->_L6_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.connection.settingUpConnectionHasFailed =
    kcg_true;
  outC->_L6_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.connection.connectionLost =
    kcg_true;
  outC->_L6_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.connection.isInRadioHole =
    kcg_true;
  outC->_L6_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.session.valid =
    kcg_true;
  outC->_L6_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.session.phase =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L6_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.session.nid_c =
    kcg_lit_int32(0);
  outC->_L6_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.session.nid_rbc =
    kcg_lit_int32(0);
  outC->_L6_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.session.nid_radio =
    kcg_lit_int64(0);
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.valid =
    kcg_true;
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.nid_em =
    kcg_true;
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.q_scale =
    kcg_true;
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_sr =
    kcg_true;
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_ref =
    kcg_true;
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.q_dir =
    kcg_true;
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.radioMetadata.m_version =
    kcg_true;
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.valid =
    kcg_true;
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx46 = 0; idx46 < 30; idx46++) {
    outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx46].nid_packet =
      kcg_lit_int32(0);
    outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx46].q_dir =
      Q_DIR_Reverse;
    outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx46].valid =
      kcg_true;
    outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx46].startAddress =
      kcg_lit_int32(0);
    outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketHeaders[idx46].endAddress =
      kcg_lit_int32(0);
  }
  for (idx47 = 0; idx47 < 500; idx47++) {
    outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.packets.PacketData[idx47] =
      kcg_lit_int32(0);
  }
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.valid =
    kcg_true;
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.nid_c =
    kcg_lit_int32(0);
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.rbc_id =
    kcg_lit_int32(0);
  outC->_L1_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1.sendingRBC.device_id =
    kcg_lit_int32(0);
  outC->tr_1_clock_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->tr_2_clock_EstablishSessionWithAcceptingRBC_handOver_with_1_Session_SM_else_IfBlock1 =
    kcg_true;
  outC->handOver_with_1_Session_SM_clock_else_IfBlock1 =
    _279_SSM_st_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1;
  outC->_28_handOver_with_1_Session_SM_state_sel_else_IfBlock1 =
    _279_SSM_st_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1;
  outC->_27_handOver_with_1_Session_SM_state_act_else_IfBlock1 =
    _279_SSM_st_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1;
  outC->_26_handOver_with_1_Session_SM_fired_strong_else_IfBlock1 =
    SSM_TR_no_trans_handOver_with_1_Session_SM_else_IfBlock1;
  outC->handOver_with_1_Session_SM_fired_else_IfBlock1 =
    SSM_TR_no_trans_handOver_with_1_Session_SM_else_IfBlock1;
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.valid =
    kcg_true;
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.nid_em =
    kcg_true;
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.q_scale =
    kcg_true;
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.d_sr =
    kcg_true;
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.d_ref =
    kcg_true;
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.q_dir =
    kcg_true;
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.m_version =
    kcg_true;
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.valid =
    kcg_true;
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx48 = 0; idx48 < 30; idx48++) {
    outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx48].nid_packet =
      kcg_lit_int32(0);
    outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx48].q_dir =
      Q_DIR_Reverse;
    outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx48].valid =
      kcg_true;
    outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx48].startAddress =
      kcg_lit_int32(0);
    outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx48].endAddress =
      kcg_lit_int32(0);
  }
  for (idx49 = 0; idx49 < 500; idx49++) {
    outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketData[idx49] =
      kcg_lit_int32(0);
  }
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.valid =
    kcg_true;
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.nid_c =
    kcg_lit_int32(0);
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.rbc_id =
    kcg_lit_int32(0);
  outC->_L11_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.device_id =
    kcg_lit_int32(0);
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.valid =
    kcg_true;
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.nid_em =
    kcg_true;
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.q_scale =
    kcg_true;
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.d_sr =
    kcg_true;
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.d_ref =
    kcg_true;
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.q_dir =
    kcg_true;
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.m_version =
    kcg_true;
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.valid =
    kcg_true;
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx50 = 0; idx50 < 30; idx50++) {
    outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx50].nid_packet =
      kcg_lit_int32(0);
    outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx50].q_dir =
      Q_DIR_Reverse;
    outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx50].valid =
      kcg_true;
    outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx50].startAddress =
      kcg_lit_int32(0);
    outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx50].endAddress =
      kcg_lit_int32(0);
  }
  for (idx51 = 0; idx51 < 500; idx51++) {
    outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketData[idx51] =
      kcg_lit_int32(0);
  }
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.valid =
    kcg_true;
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.nid_c =
    kcg_lit_int32(0);
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.rbc_id =
    kcg_lit_int32(0);
  outC->_L7_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.device_id =
    kcg_lit_int32(0);
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.valid =
    kcg_true;
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.nid_em =
    kcg_true;
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.q_scale =
    kcg_true;
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.d_sr =
    kcg_true;
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.d_ref =
    kcg_true;
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.q_dir =
    kcg_true;
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.m_version =
    kcg_true;
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.valid =
    kcg_true;
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx52 = 0; idx52 < 30; idx52++) {
    outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx52].nid_packet =
      kcg_lit_int32(0);
    outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx52].q_dir =
      Q_DIR_Reverse;
    outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx52].valid =
      kcg_true;
    outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx52].startAddress =
      kcg_lit_int32(0);
    outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx52].endAddress =
      kcg_lit_int32(0);
  }
  for (idx53 = 0; idx53 < 500; idx53++) {
    outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketData[idx53] =
      kcg_lit_int32(0);
  }
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.valid =
    kcg_true;
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.nid_c =
    kcg_lit_int32(0);
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.rbc_id =
    kcg_lit_int32(0);
  outC->_L8_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.device_id =
    kcg_lit_int32(0);
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.valid =
    kcg_true;
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.nid_em =
    kcg_true;
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.q_scale =
    kcg_true;
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.d_sr =
    kcg_true;
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.d_ref =
    kcg_true;
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.q_dir =
    kcg_true;
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.m_version =
    kcg_true;
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.valid =
    kcg_true;
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx54 = 0; idx54 < 30; idx54++) {
    outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx54].nid_packet =
      kcg_lit_int32(0);
    outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx54].q_dir =
      Q_DIR_Reverse;
    outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx54].valid =
      kcg_true;
    outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx54].startAddress =
      kcg_lit_int32(0);
    outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx54].endAddress =
      kcg_lit_int32(0);
  }
  for (idx55 = 0; idx55 < 500; idx55++) {
    outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketData[idx55] =
      kcg_lit_int32(0);
  }
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.valid =
    kcg_true;
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.nid_c =
    kcg_lit_int32(0);
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.rbc_id =
    kcg_lit_int32(0);
  outC->_L9_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.device_id =
    kcg_lit_int32(0);
  outC->_L10_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.valid =
    kcg_true;
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.nid_em =
    kcg_true;
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.q_scale =
    kcg_true;
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.d_sr =
    kcg_true;
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.d_ref =
    kcg_true;
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.q_dir =
    kcg_true;
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.m_version =
    kcg_true;
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.valid =
    kcg_true;
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx56 = 0; idx56 < 30; idx56++) {
    outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx56].nid_packet =
      kcg_lit_int32(0);
    outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx56].q_dir =
      Q_DIR_Reverse;
    outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx56].valid =
      kcg_true;
    outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx56].startAddress =
      kcg_lit_int32(0);
    outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx56].endAddress =
      kcg_lit_int32(0);
  }
  for (idx57 = 0; idx57 < 500; idx57++) {
    outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketData[idx57] =
      kcg_lit_int32(0);
  }
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.valid =
    kcg_true;
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.nid_c =
    kcg_lit_int32(0);
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.rbc_id =
    kcg_lit_int32(0);
  outC->_L6_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.device_id =
    kcg_lit_int32(0);
  outC->_L5_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L2_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.registration.valid =
    kcg_true;
  outC->_L2_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.registration.mobileDeviceNo =
    kcg_lit_int32(0);
  outC->_L2_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.registration.healthStatus =
    mhs_nok_RCM_Types_Pkg;
  outC->_L2_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.registration.status =
    mrs_unregistered_RCM_Types_Pkg;
  outC->_L2_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.registration.nid_mn =
    kcg_lit_int32(0);
  outC->_L2_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.connection.valid =
    kcg_true;
  outC->_L2_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.connection.mobileDeviceNo =
    kcg_lit_int32(0);
  outC->_L2_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.connection.status =
    mcs_disconnected_RCM_Types_Pkg;
  outC->_L2_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.connection.nid_radio =
    kcg_lit_int64(0);
  outC->_L2_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.connection.settingUpConnectionHasFailed =
    kcg_true;
  outC->_L2_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.connection.connectionLost =
    kcg_true;
  outC->_L2_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.connection.isInRadioHole =
    kcg_true;
  outC->_L2_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.session.valid =
    kcg_true;
  outC->_L2_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.session.phase =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L2_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.session.nid_c =
    kcg_lit_int32(0);
  outC->_L2_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.session.nid_rbc =
    kcg_lit_int32(0);
  outC->_L2_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.session.nid_radio =
    kcg_lit_int64(0);
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.valid =
    kcg_true;
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.nid_em =
    kcg_true;
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.q_scale =
    kcg_true;
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.d_sr =
    kcg_true;
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.d_ref =
    kcg_true;
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.q_dir =
    kcg_true;
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.m_version =
    kcg_true;
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.valid =
    kcg_true;
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx58 = 0; idx58 < 30; idx58++) {
    outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx58].nid_packet =
      kcg_lit_int32(0);
    outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx58].q_dir =
      Q_DIR_Reverse;
    outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx58].valid =
      kcg_true;
    outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx58].startAddress =
      kcg_lit_int32(0);
    outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx58].endAddress =
      kcg_lit_int32(0);
  }
  for (idx59 = 0; idx59 < 500; idx59++) {
    outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketData[idx59] =
      kcg_lit_int32(0);
  }
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.valid =
    kcg_true;
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.nid_c =
    kcg_lit_int32(0);
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.rbc_id =
    kcg_lit_int32(0);
  outC->_L4_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.device_id =
    kcg_lit_int32(0);
  outC->tr_1_clock_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L38_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L39_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L40_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.valid =
    kcg_true;
  outC->_L40_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.phase =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L40_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.nid_c =
    kcg_lit_int32(0);
  outC->_L40_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.nid_rbc =
    kcg_lit_int32(0);
  outC->_L40_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.nid_radio =
    kcg_lit_int64(0);
  outC->_L41_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L37_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L36_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.valid =
    kcg_true;
  outC->_L36_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.phase =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L36_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.nid_c =
    kcg_lit_int32(0);
  outC->_L36_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.nid_rbc =
    kcg_lit_int32(0);
  outC->_L36_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.nid_radio =
    kcg_lit_int64(0);
  outC->_L35_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L1_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L2_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.registration.valid =
    kcg_true;
  outC->_L2_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.registration.mobileDeviceNo =
    kcg_lit_int32(0);
  outC->_L2_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.registration.healthStatus =
    mhs_nok_RCM_Types_Pkg;
  outC->_L2_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.registration.status =
    mrs_unregistered_RCM_Types_Pkg;
  outC->_L2_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.registration.nid_mn =
    kcg_lit_int32(0);
  outC->_L2_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.connection.valid =
    kcg_true;
  outC->_L2_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.connection.mobileDeviceNo =
    kcg_lit_int32(0);
  outC->_L2_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.connection.status =
    mcs_disconnected_RCM_Types_Pkg;
  outC->_L2_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.connection.nid_radio =
    kcg_lit_int64(0);
  outC->_L2_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.connection.settingUpConnectionHasFailed =
    kcg_true;
  outC->_L2_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.connection.connectionLost =
    kcg_true;
  outC->_L2_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.connection.isInRadioHole =
    kcg_true;
  outC->_L2_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.session.valid =
    kcg_true;
  outC->_L2_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.session.phase =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L2_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.session.nid_c =
    kcg_lit_int32(0);
  outC->_L2_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.session.nid_rbc =
    kcg_lit_int32(0);
  outC->_L2_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.session.nid_radio =
    kcg_lit_int64(0);
  outC->_L5_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L6_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L8_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L11_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L13_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.registration.valid =
    kcg_true;
  outC->_L13_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.registration.mobileDeviceNo =
    kcg_lit_int32(0);
  outC->_L13_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.registration.healthStatus =
    mhs_nok_RCM_Types_Pkg;
  outC->_L13_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.registration.status =
    mrs_unregistered_RCM_Types_Pkg;
  outC->_L13_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.registration.nid_mn =
    kcg_lit_int32(0);
  outC->_L13_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.connection.valid =
    kcg_true;
  outC->_L13_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.connection.mobileDeviceNo =
    kcg_lit_int32(0);
  outC->_L13_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.connection.status =
    mcs_disconnected_RCM_Types_Pkg;
  outC->_L13_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.connection.nid_radio =
    kcg_lit_int64(0);
  outC->_L13_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.connection.settingUpConnectionHasFailed =
    kcg_true;
  outC->_L13_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.connection.connectionLost =
    kcg_true;
  outC->_L13_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.connection.isInRadioHole =
    kcg_true;
  outC->_L13_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.session.valid =
    kcg_true;
  outC->_L13_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.session.phase =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L13_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.session.nid_c =
    kcg_lit_int32(0);
  outC->_L13_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.session.nid_rbc =
    kcg_lit_int32(0);
  outC->_L13_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.session.nid_radio =
    kcg_lit_int64(0);
  outC->_L14_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L15_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->tr_1_clock_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->tr_2_clock_WaitForMaxSafeFrontEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L22_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.valid =
    kcg_true;
  outC->_L22_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.phase =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L22_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.nid_c =
    kcg_lit_int32(0);
  outC->_L22_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.nid_rbc =
    kcg_lit_int32(0);
  outC->_L22_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.nid_radio =
    kcg_lit_int64(0);
  outC->_L23_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L24_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L25_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L18_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L19_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L20_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L21_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.valid =
    kcg_true;
  outC->_L21_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.phase =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L21_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.nid_c =
    kcg_lit_int32(0);
  outC->_L21_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.nid_rbc =
    kcg_lit_int32(0);
  outC->_L21_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.nid_radio =
    kcg_lit_int64(0);
  outC->_L17_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L16_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L2_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.registration.valid =
    kcg_true;
  outC->_L2_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.registration.mobileDeviceNo =
    kcg_lit_int32(0);
  outC->_L2_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.registration.healthStatus =
    mhs_nok_RCM_Types_Pkg;
  outC->_L2_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.registration.status =
    mrs_unregistered_RCM_Types_Pkg;
  outC->_L2_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.registration.nid_mn =
    kcg_lit_int32(0);
  outC->_L2_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.connection.valid =
    kcg_true;
  outC->_L2_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.connection.mobileDeviceNo =
    kcg_lit_int32(0);
  outC->_L2_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.connection.status =
    mcs_disconnected_RCM_Types_Pkg;
  outC->_L2_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.connection.nid_radio =
    kcg_lit_int64(0);
  outC->_L2_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.connection.settingUpConnectionHasFailed =
    kcg_true;
  outC->_L2_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.connection.connectionLost =
    kcg_true;
  outC->_L2_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.connection.isInRadioHole =
    kcg_true;
  outC->_L2_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.session.valid =
    kcg_true;
  outC->_L2_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.session.phase =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L2_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.session.nid_c =
    kcg_lit_int32(0);
  outC->_L2_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.session.nid_rbc =
    kcg_lit_int32(0);
  outC->_L2_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.session.nid_radio =
    kcg_lit_int64(0);
  outC->_L5_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L8_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L11_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L13_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.registration.valid =
    kcg_true;
  outC->_L13_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.registration.mobileDeviceNo =
    kcg_lit_int32(0);
  outC->_L13_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.registration.healthStatus =
    mhs_nok_RCM_Types_Pkg;
  outC->_L13_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.registration.status =
    mrs_unregistered_RCM_Types_Pkg;
  outC->_L13_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.registration.nid_mn =
    kcg_lit_int32(0);
  outC->_L13_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.connection.valid =
    kcg_true;
  outC->_L13_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.connection.mobileDeviceNo =
    kcg_lit_int32(0);
  outC->_L13_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.connection.status =
    mcs_disconnected_RCM_Types_Pkg;
  outC->_L13_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.connection.nid_radio =
    kcg_lit_int64(0);
  outC->_L13_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.connection.settingUpConnectionHasFailed =
    kcg_true;
  outC->_L13_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.connection.connectionLost =
    kcg_true;
  outC->_L13_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.connection.isInRadioHole =
    kcg_true;
  outC->_L13_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.session.valid =
    kcg_true;
  outC->_L13_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.session.phase =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L13_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.session.nid_c =
    kcg_lit_int32(0);
  outC->_L13_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.session.nid_rbc =
    kcg_lit_int32(0);
  outC->_L13_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1.session.nid_radio =
    kcg_lit_int64(0);
  outC->_L15_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->tr_1_clock_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->tr_2_clock_WaitForMinSafeRearEndPassing_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L20_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1 =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L21_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1.valid =
    kcg_true;
  outC->_L21_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1.phase =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L21_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1.nid_c =
    kcg_lit_int32(0);
  outC->_L21_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1.nid_rbc =
    kcg_lit_int32(0);
  outC->_L21_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1.nid_radio =
    kcg_lit_int64(0);
  outC->_L22_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L23_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1 =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L8_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1 =
    M_MODE_Full_Supervision;
  outC->_L9_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L11_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L12_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L14_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1 =
    M_MODE_Full_Supervision;
  outC->_L16_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L18_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L19_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1 =
    M_MODE_Full_Supervision;
  outC->_L5_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1.registration.valid =
    kcg_true;
  outC->_L5_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1.registration.mobileDeviceNo =
    kcg_lit_int32(0);
  outC->_L5_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1.registration.healthStatus =
    mhs_nok_RCM_Types_Pkg;
  outC->_L5_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1.registration.status =
    mrs_unregistered_RCM_Types_Pkg;
  outC->_L5_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1.registration.nid_mn =
    kcg_lit_int32(0);
  outC->_L5_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1.connection.valid =
    kcg_true;
  outC->_L5_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1.connection.mobileDeviceNo =
    kcg_lit_int32(0);
  outC->_L5_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1.connection.status =
    mcs_disconnected_RCM_Types_Pkg;
  outC->_L5_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1.connection.nid_radio =
    kcg_lit_int64(0);
  outC->_L5_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1.connection.settingUpConnectionHasFailed =
    kcg_true;
  outC->_L5_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1.connection.connectionLost =
    kcg_true;
  outC->_L5_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1.connection.isInRadioHole =
    kcg_true;
  outC->_L5_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1.session.valid =
    kcg_true;
  outC->_L5_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1.session.phase =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L5_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1.session.nid_c =
    kcg_lit_int32(0);
  outC->_L5_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1.session.nid_rbc =
    kcg_lit_int32(0);
  outC->_L5_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1.session.nid_radio =
    kcg_lit_int64(0);
  outC->sessionWithAcceptingRBCEstablished_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->tr_1_clock_WaitForSessionWithAcceptingRBCEstablished_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L33_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L31_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L32_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
    Q_RBC_Terminate_communication_session;
  outC->_L30_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
    Q_RBC_Terminate_communication_session;
  outC->_L29_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L27_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.valid =
    kcg_true;
  outC->_L27_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.q_dir =
    Q_DIR_Reverse;
  outC->_L27_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.q_rbc =
    Q_RBC_Terminate_communication_session;
  outC->_L27_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.nid_c =
    kcg_lit_int32(0);
  outC->_L27_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.nid_rbc =
    kcg_lit_int32(0);
  outC->_L27_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.nid_radio =
    kcg_lit_int64(0);
  outC->_L27_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L26_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  for (idx60 = 0; idx60 < 30; idx60++) {
    outC->_L28_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.PacketHeaders[idx60].nid_packet =
      kcg_lit_int32(0);
    outC->_L28_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.PacketHeaders[idx60].q_dir =
      Q_DIR_Reverse;
    outC->_L28_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.PacketHeaders[idx60].valid =
      kcg_true;
    outC->_L28_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.PacketHeaders[idx60].startAddress =
      kcg_lit_int32(0);
    outC->_L28_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.PacketHeaders[idx60].endAddress =
      kcg_lit_int32(0);
  }
  for (idx61 = 0; idx61 < 500; idx61++) {
    outC->_L28_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.PacketData[idx61] =
      kcg_lit_int32(0);
  }
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.valid =
    kcg_true;
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.nid_em =
    kcg_true;
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.q_scale =
    kcg_true;
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.d_sr =
    kcg_true;
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.d_ref =
    kcg_true;
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.q_dir =
    kcg_true;
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.m_version =
    kcg_true;
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.valid =
    kcg_true;
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx62 = 0; idx62 < 30; idx62++) {
    outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx62].nid_packet =
      kcg_lit_int32(0);
    outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx62].q_dir =
      Q_DIR_Reverse;
    outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx62].valid =
      kcg_true;
    outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx62].startAddress =
      kcg_lit_int32(0);
    outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx62].endAddress =
      kcg_lit_int32(0);
  }
  for (idx63 = 0; idx63 < 500; idx63++) {
    outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketData[idx63] =
      kcg_lit_int32(0);
  }
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.valid =
    kcg_true;
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.nid_c =
    kcg_lit_int32(0);
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.rbc_id =
    kcg_lit_int32(0);
  outC->_L25_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.device_id =
    kcg_lit_int32(0);
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.valid =
    kcg_true;
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.nid_em =
    kcg_true;
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.q_scale =
    kcg_true;
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.d_sr =
    kcg_true;
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.d_ref =
    kcg_true;
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.q_dir =
    kcg_true;
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.m_version =
    kcg_true;
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.valid =
    kcg_true;
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx64 = 0; idx64 < 30; idx64++) {
    outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx64].nid_packet =
      kcg_lit_int32(0);
    outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx64].q_dir =
      Q_DIR_Reverse;
    outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx64].valid =
      kcg_true;
    outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx64].startAddress =
      kcg_lit_int32(0);
    outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx64].endAddress =
      kcg_lit_int32(0);
  }
  for (idx65 = 0; idx65 < 500; idx65++) {
    outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketData[idx65] =
      kcg_lit_int32(0);
  }
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.valid =
    kcg_true;
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.nid_c =
    kcg_lit_int32(0);
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.rbc_id =
    kcg_lit_int32(0);
  outC->_L23_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.device_id =
    kcg_lit_int32(0);
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.valid =
    kcg_true;
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.nid_em =
    kcg_true;
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.q_scale =
    kcg_true;
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.d_sr =
    kcg_true;
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.d_ref =
    kcg_true;
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.q_dir =
    kcg_true;
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.m_version =
    kcg_true;
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.valid =
    kcg_true;
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx66 = 0; idx66 < 30; idx66++) {
    outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx66].nid_packet =
      kcg_lit_int32(0);
    outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx66].q_dir =
      Q_DIR_Reverse;
    outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx66].valid =
      kcg_true;
    outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx66].startAddress =
      kcg_lit_int32(0);
    outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx66].endAddress =
      kcg_lit_int32(0);
  }
  for (idx67 = 0; idx67 < 500; idx67++) {
    outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketData[idx67] =
      kcg_lit_int32(0);
  }
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.valid =
    kcg_true;
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.nid_c =
    kcg_lit_int32(0);
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.rbc_id =
    kcg_lit_int32(0);
  outC->_L8_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.device_id =
    kcg_lit_int32(0);
  outC->_L7_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.registration.valid =
    kcg_true;
  outC->_L7_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.registration.mobileDeviceNo =
    kcg_lit_int32(0);
  outC->_L7_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.registration.healthStatus =
    mhs_nok_RCM_Types_Pkg;
  outC->_L7_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.registration.status =
    mrs_unregistered_RCM_Types_Pkg;
  outC->_L7_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.registration.nid_mn =
    kcg_lit_int32(0);
  outC->_L7_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.connection.valid =
    kcg_true;
  outC->_L7_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.connection.mobileDeviceNo =
    kcg_lit_int32(0);
  outC->_L7_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.connection.status =
    mcs_disconnected_RCM_Types_Pkg;
  outC->_L7_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.connection.nid_radio =
    kcg_lit_int64(0);
  outC->_L7_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.connection.settingUpConnectionHasFailed =
    kcg_true;
  outC->_L7_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.connection.connectionLost =
    kcg_true;
  outC->_L7_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.connection.isInRadioHole =
    kcg_true;
  outC->_L7_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.session.valid =
    kcg_true;
  outC->_L7_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.session.phase =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L7_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.session.nid_c =
    kcg_lit_int32(0);
  outC->_L7_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.session.nid_rbc =
    kcg_lit_int32(0);
  outC->_L7_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.session.nid_radio =
    kcg_lit_int64(0);
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.valid =
    kcg_true;
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.nid_em =
    kcg_true;
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.q_scale =
    kcg_true;
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.d_sr =
    kcg_true;
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.d_ref =
    kcg_true;
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.q_dir =
    kcg_true;
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.m_version =
    kcg_true;
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.valid =
    kcg_true;
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx68 = 0; idx68 < 30; idx68++) {
    outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx68].nid_packet =
      kcg_lit_int32(0);
    outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx68].q_dir =
      Q_DIR_Reverse;
    outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx68].valid =
      kcg_true;
    outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx68].startAddress =
      kcg_lit_int32(0);
    outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx68].endAddress =
      kcg_lit_int32(0);
  }
  for (idx69 = 0; idx69 < 500; idx69++) {
    outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketData[idx69] =
      kcg_lit_int32(0);
  }
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.valid =
    kcg_true;
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.nid_c =
    kcg_lit_int32(0);
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.rbc_id =
    kcg_lit_int32(0);
  outC->_L3_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.device_id =
    kcg_lit_int32(0);
  outC->_L1_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->terminationWithHandingOverRBCOrdered_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->tr_1_clock_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->tr_2_clock_WaitForTerminationOrderFromHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L15_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1 =
    mcs_disconnected_RCM_Types_Pkg;
  outC->_L14_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1.valid =
    kcg_true;
  outC->_L14_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1.phase =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L14_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1.nid_c =
    kcg_lit_int32(0);
  outC->_L14_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1.nid_rbc =
    kcg_lit_int32(0);
  outC->_L14_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1.nid_radio =
    kcg_lit_int64(0);
  outC->_L10_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1.valid =
    kcg_true;
  outC->_L10_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1.mobileDeviceNo =
    kcg_lit_int32(0);
  outC->_L10_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1.status =
    mcs_disconnected_RCM_Types_Pkg;
  outC->_L10_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1.nid_radio =
    kcg_lit_int64(0);
  outC->_L10_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1.settingUpConnectionHasFailed =
    kcg_true;
  outC->_L10_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1.connectionLost =
    kcg_true;
  outC->_L10_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1.isInRadioHole =
    kcg_true;
  outC->_L11_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L12_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1 =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L13_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1 =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L9_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L8_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L2_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1.registration.valid =
    kcg_true;
  outC->_L2_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1.registration.mobileDeviceNo =
    kcg_lit_int32(0);
  outC->_L2_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1.registration.healthStatus =
    mhs_nok_RCM_Types_Pkg;
  outC->_L2_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1.registration.status =
    mrs_unregistered_RCM_Types_Pkg;
  outC->_L2_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1.registration.nid_mn =
    kcg_lit_int32(0);
  outC->_L2_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1.connection.valid =
    kcg_true;
  outC->_L2_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1.connection.mobileDeviceNo =
    kcg_lit_int32(0);
  outC->_L2_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1.connection.status =
    mcs_disconnected_RCM_Types_Pkg;
  outC->_L2_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1.connection.nid_radio =
    kcg_lit_int64(0);
  outC->_L2_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1.connection.settingUpConnectionHasFailed =
    kcg_true;
  outC->_L2_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1.connection.connectionLost =
    kcg_true;
  outC->_L2_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1.connection.isInRadioHole =
    kcg_true;
  outC->_L2_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1.session.valid =
    kcg_true;
  outC->_L2_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1.session.phase =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L2_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1.session.nid_c =
    kcg_lit_int32(0);
  outC->_L2_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1.session.nid_rbc =
    kcg_lit_int32(0);
  outC->_L2_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1.session.nid_radio =
    kcg_lit_int64(0);
  outC->_L3_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L4_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1 =
    mcs_disconnected_RCM_Types_Pkg;
  outC->sessionWithHandingOverRBC_terminated_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_10_tr_1_clock_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_9_tr_2_clock_WaitForHandingOverRBCTerminated_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L46_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
    mrs_unregistered_RCM_Types_Pkg;
  outC->_L45_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
    mrs_unregistered_RCM_Types_Pkg;
  outC->_L43_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.valid =
    kcg_true;
  outC->_L43_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.mobileDeviceNo =
    kcg_lit_int32(0);
  outC->_L43_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.healthStatus =
    mhs_nok_RCM_Types_Pkg;
  outC->_L43_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.status =
    mrs_unregistered_RCM_Types_Pkg;
  outC->_L43_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.nid_mn =
    kcg_lit_int32(0);
  outC->_L42_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L41_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L40_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L39_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L38_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L36_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L35_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L15_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L16_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
    mrs_unregistered_RCM_Types_Pkg;
  outC->_L17_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_lit_int32(0);
  outC->_L18_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L19_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L20_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L21_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L22_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L23_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L24_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.registration.valid =
    kcg_true;
  outC->_L24_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.registration.mobileDeviceNo =
    kcg_lit_int32(0);
  outC->_L24_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.registration.healthStatus =
    mhs_nok_RCM_Types_Pkg;
  outC->_L24_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.registration.status =
    mrs_unregistered_RCM_Types_Pkg;
  outC->_L24_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.registration.nid_mn =
    kcg_lit_int32(0);
  outC->_L24_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.connection.valid =
    kcg_true;
  outC->_L24_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.connection.mobileDeviceNo =
    kcg_lit_int32(0);
  outC->_L24_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.connection.status =
    mcs_disconnected_RCM_Types_Pkg;
  outC->_L24_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.connection.nid_radio =
    kcg_lit_int64(0);
  outC->_L24_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.connection.settingUpConnectionHasFailed =
    kcg_true;
  outC->_L24_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.connection.connectionLost =
    kcg_true;
  outC->_L24_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.connection.isInRadioHole =
    kcg_true;
  outC->_L24_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.session.valid =
    kcg_true;
  outC->_L24_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.session.phase =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L24_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.session.nid_c =
    kcg_lit_int32(0);
  outC->_L24_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.session.nid_rbc =
    kcg_lit_int32(0);
  outC->_L24_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.session.nid_radio =
    kcg_lit_int64(0);
  outC->_L26_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.valid =
    kcg_true;
  outC->_L26_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.q_dir =
    Q_DIR_Reverse;
  outC->_L26_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.nid_mn =
    kcg_lit_int32(0);
  outC->_L25_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.valid =
    kcg_true;
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.nid_em =
    kcg_true;
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.q_scale =
    kcg_true;
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.d_sr =
    kcg_true;
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.d_ref =
    kcg_true;
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.q_dir =
    kcg_true;
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.m_version =
    kcg_true;
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.valid =
    kcg_true;
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx70 = 0; idx70 < 30; idx70++) {
    outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx70].nid_packet =
      kcg_lit_int32(0);
    outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx70].q_dir =
      Q_DIR_Reverse;
    outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx70].valid =
      kcg_true;
    outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx70].startAddress =
      kcg_lit_int32(0);
    outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx70].endAddress =
      kcg_lit_int32(0);
  }
  for (idx71 = 0; idx71 < 500; idx71++) {
    outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketData[idx71] =
      kcg_lit_int32(0);
  }
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.valid =
    kcg_true;
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.nid_c =
    kcg_lit_int32(0);
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.rbc_id =
    kcg_lit_int32(0);
  outC->_L27_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.device_id =
    kcg_lit_int32(0);
  outC->_L28_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.valid =
    kcg_true;
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.nid_em =
    kcg_true;
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.q_scale =
    kcg_true;
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.d_sr =
    kcg_true;
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.d_ref =
    kcg_true;
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.q_dir =
    kcg_true;
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.m_version =
    kcg_true;
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.valid =
    kcg_true;
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx72 = 0; idx72 < 30; idx72++) {
    outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx72].nid_packet =
      kcg_lit_int32(0);
    outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx72].q_dir =
      Q_DIR_Reverse;
    outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx72].valid =
      kcg_true;
    outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx72].startAddress =
      kcg_lit_int32(0);
    outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx72].endAddress =
      kcg_lit_int32(0);
  }
  for (idx73 = 0; idx73 < 500; idx73++) {
    outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketData[idx73] =
      kcg_lit_int32(0);
  }
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.valid =
    kcg_true;
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.nid_c =
    kcg_lit_int32(0);
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.rbc_id =
    kcg_lit_int32(0);
  outC->_L30_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.device_id =
    kcg_lit_int32(0);
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.valid =
    kcg_true;
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.nid_em =
    kcg_true;
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.q_scale =
    kcg_true;
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.d_sr =
    kcg_true;
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.d_ref =
    kcg_true;
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.q_dir =
    kcg_true;
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.radioMetadata.m_version =
    kcg_true;
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.valid =
    kcg_true;
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx74 = 0; idx74 < 30; idx74++) {
    outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx74].nid_packet =
      kcg_lit_int32(0);
    outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx74].q_dir =
      Q_DIR_Reverse;
    outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx74].valid =
      kcg_true;
    outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx74].startAddress =
      kcg_lit_int32(0);
    outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketHeaders[idx74].endAddress =
      kcg_lit_int32(0);
  }
  for (idx75 = 0; idx75 < 500; idx75++) {
    outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.packets.PacketData[idx75] =
      kcg_lit_int32(0);
  }
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.valid =
    kcg_true;
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.nid_c =
    kcg_lit_int32(0);
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.rbc_id =
    kcg_lit_int32(0);
  outC->_L32_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.sendingRBC.device_id =
    kcg_lit_int32(0);
  for (idx76 = 0; idx76 < 30; idx76++) {
    outC->_L33_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.PacketHeaders[idx76].nid_packet =
      kcg_lit_int32(0);
    outC->_L33_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.PacketHeaders[idx76].q_dir =
      Q_DIR_Reverse;
    outC->_L33_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.PacketHeaders[idx76].valid =
      kcg_true;
    outC->_L33_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.PacketHeaders[idx76].startAddress =
      kcg_lit_int32(0);
    outC->_L33_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.PacketHeaders[idx76].endAddress =
      kcg_lit_int32(0);
  }
  for (idx77 = 0; idx77 < 500; idx77++) {
    outC->_L33_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1.PacketData[idx77] =
      kcg_lit_int32(0);
  }
  outC->_L34_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_lit_int32(0);
  outC->_L12_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->unregistered_or_noReregisterRequired_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->tr_1_clock_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->tr_2_clock_ReregisterHandingOverRBC_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L15_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1 =
    mrs_unregistered_RCM_Types_Pkg;
  outC->_L14_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1.valid =
    kcg_true;
  outC->_L14_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1.mobileDeviceNo =
    kcg_lit_int32(0);
  outC->_L14_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1.healthStatus =
    mhs_nok_RCM_Types_Pkg;
  outC->_L14_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1.status =
    mrs_unregistered_RCM_Types_Pkg;
  outC->_L14_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1.nid_mn =
    kcg_lit_int32(0);
  outC->_L13_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->_L4_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1.registration.valid =
    kcg_true;
  outC->_L4_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1.registration.mobileDeviceNo =
    kcg_lit_int32(0);
  outC->_L4_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1.registration.healthStatus =
    mhs_nok_RCM_Types_Pkg;
  outC->_L4_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1.registration.status =
    mrs_unregistered_RCM_Types_Pkg;
  outC->_L4_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1.registration.nid_mn =
    kcg_lit_int32(0);
  outC->_L4_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1.connection.valid =
    kcg_true;
  outC->_L4_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1.connection.mobileDeviceNo =
    kcg_lit_int32(0);
  outC->_L4_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1.connection.status =
    mcs_disconnected_RCM_Types_Pkg;
  outC->_L4_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1.connection.nid_radio =
    kcg_lit_int64(0);
  outC->_L4_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1.connection.settingUpConnectionHasFailed =
    kcg_true;
  outC->_L4_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1.connection.connectionLost =
    kcg_true;
  outC->_L4_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1.connection.isInRadioHole =
    kcg_true;
  outC->_L4_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1.session.valid =
    kcg_true;
  outC->_L4_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1.session.phase =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->_L4_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1.session.nid_c =
    kcg_lit_int32(0);
  outC->_L4_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1.session.nid_rbc =
    kcg_lit_int32(0);
  outC->_L4_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1.session.nid_radio =
    kcg_lit_int64(0);
  outC->_L7_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1 =
    mrs_unregistered_RCM_Types_Pkg;
  outC->_L9_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->handingOverRBCReregistered_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->tr_1_clock_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->tr_2_clock_WaitForHandingOverRBCRegistered_handOver_with_2_Sessions_SM_then_IfBlock1 =
    kcg_true;
  outC->handOver_with_2_Sessions_SM_clock_then_IfBlock1 =
    SSM_st_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1;
  outC->_25_handOver_with_2_Sessions_SM_state_sel_then_IfBlock1 =
    SSM_st_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1;
  outC->_24_handOver_with_2_Sessions_SM_state_act_then_IfBlock1 =
    SSM_st_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1;
  outC->_23_handOver_with_2_Sessions_SM_fired_strong_then_IfBlock1 =
    SSM_TR_no_trans_handOver_with_2_Sessions_SM_then_IfBlock1;
  outC->handOver_with_2_Sessions_SM_fired_then_IfBlock1 =
    SSM_TR_no_trans_handOver_with_2_Sessions_SM_then_IfBlock1;
  outC->_L7_Memory_1_struct.valid = kcg_true;
  outC->_L7_Memory_1_struct.source = msrc_undefined_Common_Types_Pkg;
  outC->_L7_Memory_1_struct.radioMetadata.t_train_reference = kcg_true;
  outC->_L7_Memory_1_struct.radioMetadata.nid_em = kcg_true;
  outC->_L7_Memory_1_struct.radioMetadata.q_scale = kcg_true;
  outC->_L7_Memory_1_struct.radioMetadata.d_sr = kcg_true;
  outC->_L7_Memory_1_struct.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L7_Memory_1_struct.radioMetadata.d_ref = kcg_true;
  outC->_L7_Memory_1_struct.radioMetadata.q_dir = kcg_true;
  outC->_L7_Memory_1_struct.radioMetadata.d_emergencystop = kcg_true;
  outC->_L7_Memory_1_struct.radioMetadata.m_version = kcg_true;
  outC->_L7_Memory_1_struct.BG_Common_Header.valid = kcg_true;
  outC->_L7_Memory_1_struct.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L7_Memory_1_struct.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L7_Memory_1_struct.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L7_Memory_1_struct.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L7_Memory_1_struct.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L7_Memory_1_struct.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L7_Memory_1_struct.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L7_Memory_1_struct.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L7_Memory_1_struct.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L7_Memory_1_struct.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L7_Memory_1_struct.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L7_Memory_1_struct.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L7_Memory_1_struct.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L7_Memory_1_struct.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L7_Memory_1_struct.Radio_Common_Header.d_emergencystop = kcg_lit_int32(
      0);
  outC->_L7_Memory_1_struct.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx78 = 0; idx78 < 30; idx78++) {
    outC->_L7_Memory_1_struct.packets.PacketHeaders[idx78].nid_packet =
      kcg_lit_int32(0);
    outC->_L7_Memory_1_struct.packets.PacketHeaders[idx78].q_dir = Q_DIR_Reverse;
    outC->_L7_Memory_1_struct.packets.PacketHeaders[idx78].valid = kcg_true;
    outC->_L7_Memory_1_struct.packets.PacketHeaders[idx78].startAddress =
      kcg_lit_int32(0);
    outC->_L7_Memory_1_struct.packets.PacketHeaders[idx78].endAddress =
      kcg_lit_int32(0);
  }
  for (idx79 = 0; idx79 < 500; idx79++) {
    outC->_L7_Memory_1_struct.packets.PacketData[idx79] = kcg_lit_int32(0);
  }
  outC->_L7_Memory_1_struct.sendingRBC.valid = kcg_true;
  outC->_L7_Memory_1_struct.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.valid = kcg_true;
  outC->_L6_Memory_1_struct.source = msrc_undefined_Common_Types_Pkg;
  outC->_L6_Memory_1_struct.radioMetadata.t_train_reference = kcg_true;
  outC->_L6_Memory_1_struct.radioMetadata.nid_em = kcg_true;
  outC->_L6_Memory_1_struct.radioMetadata.q_scale = kcg_true;
  outC->_L6_Memory_1_struct.radioMetadata.d_sr = kcg_true;
  outC->_L6_Memory_1_struct.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L6_Memory_1_struct.radioMetadata.d_ref = kcg_true;
  outC->_L6_Memory_1_struct.radioMetadata.q_dir = kcg_true;
  outC->_L6_Memory_1_struct.radioMetadata.d_emergencystop = kcg_true;
  outC->_L6_Memory_1_struct.radioMetadata.m_version = kcg_true;
  outC->_L6_Memory_1_struct.BG_Common_Header.valid = kcg_true;
  outC->_L6_Memory_1_struct.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L6_Memory_1_struct.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L6_Memory_1_struct.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L6_Memory_1_struct.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L6_Memory_1_struct.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L6_Memory_1_struct.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L6_Memory_1_struct.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L6_Memory_1_struct.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L6_Memory_1_struct.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L6_Memory_1_struct.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L6_Memory_1_struct.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L6_Memory_1_struct.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L6_Memory_1_struct.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L6_Memory_1_struct.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L6_Memory_1_struct.Radio_Common_Header.d_emergencystop = kcg_lit_int32(
      0);
  outC->_L6_Memory_1_struct.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx80 = 0; idx80 < 30; idx80++) {
    outC->_L6_Memory_1_struct.packets.PacketHeaders[idx80].nid_packet =
      kcg_lit_int32(0);
    outC->_L6_Memory_1_struct.packets.PacketHeaders[idx80].q_dir = Q_DIR_Reverse;
    outC->_L6_Memory_1_struct.packets.PacketHeaders[idx80].valid = kcg_true;
    outC->_L6_Memory_1_struct.packets.PacketHeaders[idx80].startAddress =
      kcg_lit_int32(0);
    outC->_L6_Memory_1_struct.packets.PacketHeaders[idx80].endAddress =
      kcg_lit_int32(0);
  }
  for (idx81 = 0; idx81 < 500; idx81++) {
    outC->_L6_Memory_1_struct.packets.PacketData[idx81] = kcg_lit_int32(0);
  }
  outC->_L6_Memory_1_struct.sendingRBC.valid = kcg_true;
  outC->_L6_Memory_1_struct.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.valid = kcg_true;
  outC->_L5_Memory_1_struct.source = msrc_undefined_Common_Types_Pkg;
  outC->_L5_Memory_1_struct.radioMetadata.t_train_reference = kcg_true;
  outC->_L5_Memory_1_struct.radioMetadata.nid_em = kcg_true;
  outC->_L5_Memory_1_struct.radioMetadata.q_scale = kcg_true;
  outC->_L5_Memory_1_struct.radioMetadata.d_sr = kcg_true;
  outC->_L5_Memory_1_struct.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L5_Memory_1_struct.radioMetadata.d_ref = kcg_true;
  outC->_L5_Memory_1_struct.radioMetadata.q_dir = kcg_true;
  outC->_L5_Memory_1_struct.radioMetadata.d_emergencystop = kcg_true;
  outC->_L5_Memory_1_struct.radioMetadata.m_version = kcg_true;
  outC->_L5_Memory_1_struct.BG_Common_Header.valid = kcg_true;
  outC->_L5_Memory_1_struct.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L5_Memory_1_struct.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5_Memory_1_struct.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L5_Memory_1_struct.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L5_Memory_1_struct.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L5_Memory_1_struct.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L5_Memory_1_struct.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L5_Memory_1_struct.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L5_Memory_1_struct.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L5_Memory_1_struct.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L5_Memory_1_struct.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L5_Memory_1_struct.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L5_Memory_1_struct.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L5_Memory_1_struct.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L5_Memory_1_struct.Radio_Common_Header.d_emergencystop = kcg_lit_int32(
      0);
  outC->_L5_Memory_1_struct.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx82 = 0; idx82 < 30; idx82++) {
    outC->_L5_Memory_1_struct.packets.PacketHeaders[idx82].nid_packet =
      kcg_lit_int32(0);
    outC->_L5_Memory_1_struct.packets.PacketHeaders[idx82].q_dir = Q_DIR_Reverse;
    outC->_L5_Memory_1_struct.packets.PacketHeaders[idx82].valid = kcg_true;
    outC->_L5_Memory_1_struct.packets.PacketHeaders[idx82].startAddress =
      kcg_lit_int32(0);
    outC->_L5_Memory_1_struct.packets.PacketHeaders[idx82].endAddress =
      kcg_lit_int32(0);
  }
  for (idx83 = 0; idx83 < 500; idx83++) {
    outC->_L5_Memory_1_struct.packets.PacketData[idx83] = kcg_lit_int32(0);
  }
  outC->_L5_Memory_1_struct.sendingRBC.valid = kcg_true;
  outC->_L5_Memory_1_struct.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L3_Memory_1_struct = kcg_true;
  outC->_L2_Memory_1_struct.valid = kcg_true;
  outC->_L2_Memory_1_struct.source = msrc_undefined_Common_Types_Pkg;
  outC->_L2_Memory_1_struct.radioMetadata.t_train_reference = kcg_true;
  outC->_L2_Memory_1_struct.radioMetadata.nid_em = kcg_true;
  outC->_L2_Memory_1_struct.radioMetadata.q_scale = kcg_true;
  outC->_L2_Memory_1_struct.radioMetadata.d_sr = kcg_true;
  outC->_L2_Memory_1_struct.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L2_Memory_1_struct.radioMetadata.d_ref = kcg_true;
  outC->_L2_Memory_1_struct.radioMetadata.q_dir = kcg_true;
  outC->_L2_Memory_1_struct.radioMetadata.d_emergencystop = kcg_true;
  outC->_L2_Memory_1_struct.radioMetadata.m_version = kcg_true;
  outC->_L2_Memory_1_struct.BG_Common_Header.valid = kcg_true;
  outC->_L2_Memory_1_struct.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L2_Memory_1_struct.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2_Memory_1_struct.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L2_Memory_1_struct.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L2_Memory_1_struct.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L2_Memory_1_struct.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L2_Memory_1_struct.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2_Memory_1_struct.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2_Memory_1_struct.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L2_Memory_1_struct.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L2_Memory_1_struct.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L2_Memory_1_struct.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L2_Memory_1_struct.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2_Memory_1_struct.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L2_Memory_1_struct.Radio_Common_Header.d_emergencystop = kcg_lit_int32(
      0);
  outC->_L2_Memory_1_struct.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx84 = 0; idx84 < 30; idx84++) {
    outC->_L2_Memory_1_struct.packets.PacketHeaders[idx84].nid_packet =
      kcg_lit_int32(0);
    outC->_L2_Memory_1_struct.packets.PacketHeaders[idx84].q_dir = Q_DIR_Reverse;
    outC->_L2_Memory_1_struct.packets.PacketHeaders[idx84].valid = kcg_true;
    outC->_L2_Memory_1_struct.packets.PacketHeaders[idx84].startAddress =
      kcg_lit_int32(0);
    outC->_L2_Memory_1_struct.packets.PacketHeaders[idx84].endAddress =
      kcg_lit_int32(0);
  }
  for (idx85 = 0; idx85 < 500; idx85++) {
    outC->_L2_Memory_1_struct.packets.PacketData[idx85] = kcg_lit_int32(0);
  }
  outC->_L2_Memory_1_struct.sendingRBC.valid = kcg_true;
  outC->_L2_Memory_1_struct.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L1_Memory_1_struct = kcg_true;
  outC->_L9_Memory_1_struct.valid = kcg_true;
  outC->_L9_Memory_1_struct.source = msrc_undefined_Common_Types_Pkg;
  outC->_L9_Memory_1_struct.radioMetadata.t_train_reference = kcg_true;
  outC->_L9_Memory_1_struct.radioMetadata.nid_em = kcg_true;
  outC->_L9_Memory_1_struct.radioMetadata.q_scale = kcg_true;
  outC->_L9_Memory_1_struct.radioMetadata.d_sr = kcg_true;
  outC->_L9_Memory_1_struct.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L9_Memory_1_struct.radioMetadata.d_ref = kcg_true;
  outC->_L9_Memory_1_struct.radioMetadata.q_dir = kcg_true;
  outC->_L9_Memory_1_struct.radioMetadata.d_emergencystop = kcg_true;
  outC->_L9_Memory_1_struct.radioMetadata.m_version = kcg_true;
  outC->_L9_Memory_1_struct.BG_Common_Header.valid = kcg_true;
  outC->_L9_Memory_1_struct.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L9_Memory_1_struct.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L9_Memory_1_struct.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L9_Memory_1_struct.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L9_Memory_1_struct.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L9_Memory_1_struct.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L9_Memory_1_struct.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L9_Memory_1_struct.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L9_Memory_1_struct.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L9_Memory_1_struct.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L9_Memory_1_struct.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L9_Memory_1_struct.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L9_Memory_1_struct.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L9_Memory_1_struct.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L9_Memory_1_struct.Radio_Common_Header.d_emergencystop = kcg_lit_int32(
      0);
  outC->_L9_Memory_1_struct.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx86 = 0; idx86 < 30; idx86++) {
    outC->_L9_Memory_1_struct.packets.PacketHeaders[idx86].nid_packet =
      kcg_lit_int32(0);
    outC->_L9_Memory_1_struct.packets.PacketHeaders[idx86].q_dir = Q_DIR_Reverse;
    outC->_L9_Memory_1_struct.packets.PacketHeaders[idx86].valid = kcg_true;
    outC->_L9_Memory_1_struct.packets.PacketHeaders[idx86].startAddress =
      kcg_lit_int32(0);
    outC->_L9_Memory_1_struct.packets.PacketHeaders[idx86].endAddress =
      kcg_lit_int32(0);
  }
  for (idx87 = 0; idx87 < 500; idx87++) {
    outC->_L9_Memory_1_struct.packets.PacketData[idx87] = kcg_lit_int32(0);
  }
  outC->_L9_Memory_1_struct.sendingRBC.valid = kcg_true;
  outC->_L9_Memory_1_struct.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.sendingRBC.device_id = kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.valid = kcg_true;
  outC->M_Input_Memory_1_struct.source = msrc_undefined_Common_Types_Pkg;
  outC->M_Input_Memory_1_struct.radioMetadata.t_train_reference = kcg_true;
  outC->M_Input_Memory_1_struct.radioMetadata.nid_em = kcg_true;
  outC->M_Input_Memory_1_struct.radioMetadata.q_scale = kcg_true;
  outC->M_Input_Memory_1_struct.radioMetadata.d_sr = kcg_true;
  outC->M_Input_Memory_1_struct.radioMetadata.t_sh_rqst = kcg_true;
  outC->M_Input_Memory_1_struct.radioMetadata.d_ref = kcg_true;
  outC->M_Input_Memory_1_struct.radioMetadata.q_dir = kcg_true;
  outC->M_Input_Memory_1_struct.radioMetadata.d_emergencystop = kcg_true;
  outC->M_Input_Memory_1_struct.radioMetadata.m_version = kcg_true;
  outC->M_Input_Memory_1_struct.BG_Common_Header.valid = kcg_true;
  outC->M_Input_Memory_1_struct.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->M_Input_Memory_1_struct.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->M_Input_Memory_1_struct.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->M_Input_Memory_1_struct.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->M_Input_Memory_1_struct.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->M_Input_Memory_1_struct.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->M_Input_Memory_1_struct.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->M_Input_Memory_1_struct.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->M_Input_Memory_1_struct.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->M_Input_Memory_1_struct.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->M_Input_Memory_1_struct.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->M_Input_Memory_1_struct.Radio_Common_Header.radioDevice = kcg_lit_int32(
      0);
  outC->M_Input_Memory_1_struct.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.Radio_Common_Header.nid_message = kcg_lit_int32(
      0);
  outC->M_Input_Memory_1_struct.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->M_Input_Memory_1_struct.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->M_Input_Memory_1_struct.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->M_Input_Memory_1_struct.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx88 = 0; idx88 < 30; idx88++) {
    outC->M_Input_Memory_1_struct.packets.PacketHeaders[idx88].nid_packet =
      kcg_lit_int32(0);
    outC->M_Input_Memory_1_struct.packets.PacketHeaders[idx88].q_dir =
      Q_DIR_Reverse;
    outC->M_Input_Memory_1_struct.packets.PacketHeaders[idx88].valid = kcg_true;
    outC->M_Input_Memory_1_struct.packets.PacketHeaders[idx88].startAddress =
      kcg_lit_int32(0);
    outC->M_Input_Memory_1_struct.packets.PacketHeaders[idx88].endAddress =
      kcg_lit_int32(0);
  }
  for (idx89 = 0; idx89 < 500; idx89++) {
    outC->M_Input_Memory_1_struct.packets.PacketData[idx89] = kcg_lit_int32(0);
  }
  outC->M_Input_Memory_1_struct.sendingRBC.valid = kcg_true;
  outC->M_Input_Memory_1_struct.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.sendingRBC.device_id = kcg_lit_int32(0);
  outC->Reset_Memory_1_struct = kcg_true;
  outC->MemCond_Memory_1_struct = kcg_true;
  outC->InitVal_Memory_1_struct.valid = kcg_true;
  outC->InitVal_Memory_1_struct.source = msrc_undefined_Common_Types_Pkg;
  outC->InitVal_Memory_1_struct.radioMetadata.t_train_reference = kcg_true;
  outC->InitVal_Memory_1_struct.radioMetadata.nid_em = kcg_true;
  outC->InitVal_Memory_1_struct.radioMetadata.q_scale = kcg_true;
  outC->InitVal_Memory_1_struct.radioMetadata.d_sr = kcg_true;
  outC->InitVal_Memory_1_struct.radioMetadata.t_sh_rqst = kcg_true;
  outC->InitVal_Memory_1_struct.radioMetadata.d_ref = kcg_true;
  outC->InitVal_Memory_1_struct.radioMetadata.q_dir = kcg_true;
  outC->InitVal_Memory_1_struct.radioMetadata.d_emergencystop = kcg_true;
  outC->InitVal_Memory_1_struct.radioMetadata.m_version = kcg_true;
  outC->InitVal_Memory_1_struct.BG_Common_Header.valid = kcg_true;
  outC->InitVal_Memory_1_struct.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->InitVal_Memory_1_struct.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->InitVal_Memory_1_struct.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->InitVal_Memory_1_struct.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->InitVal_Memory_1_struct.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->InitVal_Memory_1_struct.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->InitVal_Memory_1_struct.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->InitVal_Memory_1_struct.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->InitVal_Memory_1_struct.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->InitVal_Memory_1_struct.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->InitVal_Memory_1_struct.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->InitVal_Memory_1_struct.Radio_Common_Header.radioDevice = kcg_lit_int32(
      0);
  outC->InitVal_Memory_1_struct.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.Radio_Common_Header.nid_message = kcg_lit_int32(
      0);
  outC->InitVal_Memory_1_struct.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->InitVal_Memory_1_struct.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->InitVal_Memory_1_struct.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->InitVal_Memory_1_struct.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx90 = 0; idx90 < 30; idx90++) {
    outC->InitVal_Memory_1_struct.packets.PacketHeaders[idx90].nid_packet =
      kcg_lit_int32(0);
    outC->InitVal_Memory_1_struct.packets.PacketHeaders[idx90].q_dir =
      Q_DIR_Reverse;
    outC->InitVal_Memory_1_struct.packets.PacketHeaders[idx90].valid = kcg_true;
    outC->InitVal_Memory_1_struct.packets.PacketHeaders[idx90].startAddress =
      kcg_lit_int32(0);
    outC->InitVal_Memory_1_struct.packets.PacketHeaders[idx90].endAddress =
      kcg_lit_int32(0);
  }
  for (idx91 = 0; idx91 < 500; idx91++) {
    outC->InitVal_Memory_1_struct.packets.PacketData[idx91] = kcg_lit_int32(0);
  }
  outC->InitVal_Memory_1_struct.sendingRBC.valid = kcg_true;
  outC->InitVal_Memory_1_struct.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.sendingRBC.device_id = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.valid = kcg_true;
  outC->Out_Memory_1_struct.source = msrc_undefined_Common_Types_Pkg;
  outC->Out_Memory_1_struct.radioMetadata.t_train_reference = kcg_true;
  outC->Out_Memory_1_struct.radioMetadata.nid_em = kcg_true;
  outC->Out_Memory_1_struct.radioMetadata.q_scale = kcg_true;
  outC->Out_Memory_1_struct.radioMetadata.d_sr = kcg_true;
  outC->Out_Memory_1_struct.radioMetadata.t_sh_rqst = kcg_true;
  outC->Out_Memory_1_struct.radioMetadata.d_ref = kcg_true;
  outC->Out_Memory_1_struct.radioMetadata.q_dir = kcg_true;
  outC->Out_Memory_1_struct.radioMetadata.d_emergencystop = kcg_true;
  outC->Out_Memory_1_struct.radioMetadata.m_version = kcg_true;
  outC->Out_Memory_1_struct.BG_Common_Header.valid = kcg_true;
  outC->Out_Memory_1_struct.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->Out_Memory_1_struct.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->Out_Memory_1_struct.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->Out_Memory_1_struct.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->Out_Memory_1_struct.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->Out_Memory_1_struct.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->Out_Memory_1_struct.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->Out_Memory_1_struct.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->Out_Memory_1_struct.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->Out_Memory_1_struct.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->Out_Memory_1_struct.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->Out_Memory_1_struct.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->Out_Memory_1_struct.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->Out_Memory_1_struct.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->Out_Memory_1_struct.Radio_Common_Header.d_emergencystop = kcg_lit_int32(
      0);
  outC->Out_Memory_1_struct.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx92 = 0; idx92 < 30; idx92++) {
    outC->Out_Memory_1_struct.packets.PacketHeaders[idx92].nid_packet =
      kcg_lit_int32(0);
    outC->Out_Memory_1_struct.packets.PacketHeaders[idx92].q_dir = Q_DIR_Reverse;
    outC->Out_Memory_1_struct.packets.PacketHeaders[idx92].valid = kcg_true;
    outC->Out_Memory_1_struct.packets.PacketHeaders[idx92].startAddress =
      kcg_lit_int32(0);
    outC->Out_Memory_1_struct.packets.PacketHeaders[idx92].endAddress =
      kcg_lit_int32(0);
  }
  for (idx93 = 0; idx93 < 500; idx93++) {
    outC->Out_Memory_1_struct.packets.PacketData[idx93] = kcg_lit_int32(0);
  }
  outC->Out_Memory_1_struct.sendingRBC.valid = kcg_true;
  outC->Out_Memory_1_struct.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.sendingRBC.device_id = kcg_lit_int32(0);
  outC->establishSessionWithAcceptingRBCOrdered_then_IfBlock1 = kcg_true;
  outC->_L8_Memory_1_struct.valid = kcg_true;
  outC->_L8_Memory_1_struct.source = msrc_undefined_Common_Types_Pkg;
  outC->_L8_Memory_1_struct.radioMetadata.t_train_reference = kcg_true;
  outC->_L8_Memory_1_struct.radioMetadata.nid_em = kcg_true;
  outC->_L8_Memory_1_struct.radioMetadata.q_scale = kcg_true;
  outC->_L8_Memory_1_struct.radioMetadata.d_sr = kcg_true;
  outC->_L8_Memory_1_struct.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L8_Memory_1_struct.radioMetadata.d_ref = kcg_true;
  outC->_L8_Memory_1_struct.radioMetadata.q_dir = kcg_true;
  outC->_L8_Memory_1_struct.radioMetadata.d_emergencystop = kcg_true;
  outC->_L8_Memory_1_struct.radioMetadata.m_version = kcg_true;
  outC->_L8_Memory_1_struct.BG_Common_Header.valid = kcg_true;
  outC->_L8_Memory_1_struct.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L8_Memory_1_struct.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L8_Memory_1_struct.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L8_Memory_1_struct.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L8_Memory_1_struct.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L8_Memory_1_struct.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L8_Memory_1_struct.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L8_Memory_1_struct.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L8_Memory_1_struct.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L8_Memory_1_struct.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L8_Memory_1_struct.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L8_Memory_1_struct.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L8_Memory_1_struct.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L8_Memory_1_struct.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L8_Memory_1_struct.Radio_Common_Header.d_emergencystop = kcg_lit_int32(
      0);
  outC->_L8_Memory_1_struct.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx94 = 0; idx94 < 30; idx94++) {
    outC->_L8_Memory_1_struct.packets.PacketHeaders[idx94].nid_packet =
      kcg_lit_int32(0);
    outC->_L8_Memory_1_struct.packets.PacketHeaders[idx94].q_dir = Q_DIR_Reverse;
    outC->_L8_Memory_1_struct.packets.PacketHeaders[idx94].valid = kcg_true;
    outC->_L8_Memory_1_struct.packets.PacketHeaders[idx94].startAddress =
      kcg_lit_int32(0);
    outC->_L8_Memory_1_struct.packets.PacketHeaders[idx94].endAddress =
      kcg_lit_int32(0);
  }
  for (idx95 = 0; idx95 < 500; idx95++) {
    outC->_L8_Memory_1_struct.packets.PacketData[idx95] = kcg_lit_int32(0);
  }
  outC->_L8_Memory_1_struct.sendingRBC.valid = kcg_true;
  outC->_L8_Memory_1_struct.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.sendingRBC.device_id = kcg_lit_int32(0);
  outC->init3 = kcg_true;
  outC->init2 = kcg_true;
  outC->init = kcg_true;
  outC->notReady = kcg_true;
  outC->handoverInprogress = kcg_true;
  outC->bufferInformationFromAcceptingRBC = kcg_true;
  outC->useInformationFromAcceptingRBC = kcg_true;
  outC->sendTrainData_2_acceptingRBC = kcg_true;
  outC->sendPositionReport_2_acceptingRBC = kcg_true;
  outC->sendPositionReport_2_handingOverRBC = kcg_true;
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.valid = kcg_true;
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.radioMetadata.t_train_reference =
    kcg_true;
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.radioMetadata.nid_em =
    kcg_true;
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.radioMetadata.q_scale =
    kcg_true;
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.radioMetadata.d_sr =
    kcg_true;
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.radioMetadata.d_ref =
    kcg_true;
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.radioMetadata.q_dir =
    kcg_true;
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.radioMetadata.m_version =
    kcg_true;
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.valid =
    kcg_true;
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.nid_c =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx96 = 0; idx96 < 30; idx96++) {
    outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.packets.PacketHeaders[idx96].nid_packet =
      kcg_lit_int32(0);
    outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.packets.PacketHeaders[idx96].q_dir =
      Q_DIR_Reverse;
    outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.packets.PacketHeaders[idx96].valid =
      kcg_true;
    outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.packets.PacketHeaders[idx96].startAddress =
      kcg_lit_int32(0);
    outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.packets.PacketHeaders[idx96].endAddress =
      kcg_lit_int32(0);
  }
  for (idx97 = 0; idx97 < 500; idx97++) {
    outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.packets.PacketData[idx97] =
      kcg_lit_int32(0);
  }
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.sendingRBC.valid =
    kcg_true;
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.sendingRBC.nid_c =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.sendingRBC.rbc_id =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC.sendingRBC.device_id =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.valid = kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.source =
    msrc_undefined_Common_Types_Pkg;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.radioMetadata.t_train_reference =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.radioMetadata.nid_em =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.radioMetadata.q_scale =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.radioMetadata.d_sr =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.radioMetadata.d_ref =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.radioMetadata.q_dir =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.radioMetadata.d_emergencystop =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.radioMetadata.m_version =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.valid =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.nid_c =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.nid_bg =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx98 = 0; idx98 < 30; idx98++) {
    outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.packets.PacketHeaders[idx98].nid_packet =
      kcg_lit_int32(0);
    outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.packets.PacketHeaders[idx98].q_dir =
      Q_DIR_Reverse;
    outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.packets.PacketHeaders[idx98].valid =
      kcg_true;
    outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.packets.PacketHeaders[idx98].startAddress =
      kcg_lit_int32(0);
    outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.packets.PacketHeaders[idx98].endAddress =
      kcg_lit_int32(0);
  }
  for (idx99 = 0; idx99 < 500; idx99++) {
    outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.packets.PacketData[idx99] =
      kcg_lit_int32(0);
  }
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.sendingRBC.valid =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.sendingRBC.nid_c =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.sendingRBC.rbc_id =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.sendingRBC.device_id =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_handingOverRBC.valid = kcg_true;
  outC->p42_sessionCmd_for_handingOverRBC.source =
    msrc_undefined_Common_Types_Pkg;
  outC->p42_sessionCmd_for_handingOverRBC.radioMetadata.t_train_reference =
    kcg_true;
  outC->p42_sessionCmd_for_handingOverRBC.radioMetadata.nid_em = kcg_true;
  outC->p42_sessionCmd_for_handingOverRBC.radioMetadata.q_scale = kcg_true;
  outC->p42_sessionCmd_for_handingOverRBC.radioMetadata.d_sr = kcg_true;
  outC->p42_sessionCmd_for_handingOverRBC.radioMetadata.t_sh_rqst = kcg_true;
  outC->p42_sessionCmd_for_handingOverRBC.radioMetadata.d_ref = kcg_true;
  outC->p42_sessionCmd_for_handingOverRBC.radioMetadata.q_dir = kcg_true;
  outC->p42_sessionCmd_for_handingOverRBC.radioMetadata.d_emergencystop =
    kcg_true;
  outC->p42_sessionCmd_for_handingOverRBC.radioMetadata.m_version = kcg_true;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.valid = kcg_true;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.nid_c =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.nid_bg =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->p42_sessionCmd_for_handingOverRBC.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_handingOverRBC.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_handingOverRBC.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_handingOverRBC.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_handingOverRBC.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->p42_sessionCmd_for_handingOverRBC.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_handingOverRBC.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_handingOverRBC.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_handingOverRBC.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->p42_sessionCmd_for_handingOverRBC.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_handingOverRBC.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_handingOverRBC.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_handingOverRBC.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->p42_sessionCmd_for_handingOverRBC.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_handingOverRBC.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx100 = 0; idx100 < 30; idx100++) {
    outC->p42_sessionCmd_for_handingOverRBC.packets.PacketHeaders[idx100].nid_packet =
      kcg_lit_int32(0);
    outC->p42_sessionCmd_for_handingOverRBC.packets.PacketHeaders[idx100].q_dir =
      Q_DIR_Reverse;
    outC->p42_sessionCmd_for_handingOverRBC.packets.PacketHeaders[idx100].valid =
      kcg_true;
    outC->p42_sessionCmd_for_handingOverRBC.packets.PacketHeaders[idx100].startAddress =
      kcg_lit_int32(0);
    outC->p42_sessionCmd_for_handingOverRBC.packets.PacketHeaders[idx100].endAddress =
      kcg_lit_int32(0);
  }
  for (idx101 = 0; idx101 < 500; idx101++) {
    outC->p42_sessionCmd_for_handingOverRBC.packets.PacketData[idx101] =
      kcg_lit_int32(0);
  }
  outC->p42_sessionCmd_for_handingOverRBC.sendingRBC.valid = kcg_true;
  outC->p42_sessionCmd_for_handingOverRBC.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->p42_sessionCmd_for_handingOverRBC.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->p42_sessionCmd_for_handingOverRBC.sendingRBC.device_id = kcg_lit_int32(0);
  outC->p42_sessionCmd_for_acceptingRBC.valid = kcg_true;
  outC->p42_sessionCmd_for_acceptingRBC.source = msrc_undefined_Common_Types_Pkg;
  outC->p42_sessionCmd_for_acceptingRBC.radioMetadata.t_train_reference =
    kcg_true;
  outC->p42_sessionCmd_for_acceptingRBC.radioMetadata.nid_em = kcg_true;
  outC->p42_sessionCmd_for_acceptingRBC.radioMetadata.q_scale = kcg_true;
  outC->p42_sessionCmd_for_acceptingRBC.radioMetadata.d_sr = kcg_true;
  outC->p42_sessionCmd_for_acceptingRBC.radioMetadata.t_sh_rqst = kcg_true;
  outC->p42_sessionCmd_for_acceptingRBC.radioMetadata.d_ref = kcg_true;
  outC->p42_sessionCmd_for_acceptingRBC.radioMetadata.q_dir = kcg_true;
  outC->p42_sessionCmd_for_acceptingRBC.radioMetadata.d_emergencystop = kcg_true;
  outC->p42_sessionCmd_for_acceptingRBC.radioMetadata.m_version = kcg_true;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.valid = kcg_true;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.nid_bg = kcg_lit_int32(
      0);
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->p42_sessionCmd_for_acceptingRBC.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_acceptingRBC.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_acceptingRBC.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_acceptingRBC.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_acceptingRBC.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->p42_sessionCmd_for_acceptingRBC.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_acceptingRBC.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_acceptingRBC.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_acceptingRBC.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->p42_sessionCmd_for_acceptingRBC.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_acceptingRBC.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_acceptingRBC.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_acceptingRBC.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->p42_sessionCmd_for_acceptingRBC.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_acceptingRBC.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx102 = 0; idx102 < 30; idx102++) {
    outC->p42_sessionCmd_for_acceptingRBC.packets.PacketHeaders[idx102].nid_packet =
      kcg_lit_int32(0);
    outC->p42_sessionCmd_for_acceptingRBC.packets.PacketHeaders[idx102].q_dir =
      Q_DIR_Reverse;
    outC->p42_sessionCmd_for_acceptingRBC.packets.PacketHeaders[idx102].valid =
      kcg_true;
    outC->p42_sessionCmd_for_acceptingRBC.packets.PacketHeaders[idx102].startAddress =
      kcg_lit_int32(0);
    outC->p42_sessionCmd_for_acceptingRBC.packets.PacketHeaders[idx102].endAddress =
      kcg_lit_int32(0);
  }
  for (idx103 = 0; idx103 < 500; idx103++) {
    outC->p42_sessionCmd_for_acceptingRBC.packets.PacketData[idx103] =
      kcg_lit_int32(0);
  }
  outC->p42_sessionCmd_for_acceptingRBC.sendingRBC.valid = kcg_true;
  outC->p42_sessionCmd_for_acceptingRBC.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->p42_sessionCmd_for_acceptingRBC.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->p42_sessionCmd_for_acceptingRBC.sendingRBC.device_id = kcg_lit_int32(0);
  /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMaxSafeFrontEndPassing:_L11=(digital::RisingEdge#4)/ */
  RisingEdge_init_digital(&outC->Context_RisingEdge_4);
  /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMinSafeRearEndPassing:_L11=(digital::RisingEdge#9)/ */
  RisingEdge_init_digital(&outC->Context_RisingEdge_9);
  /* IfBlock1:else:handOver_with_1_Session_SM:EstablishSessionWithAcceptingRBC:_L1=(Handover_Pkg::handoverUtils_Pkg::checkSessionCmd#12)/ */
  checkSessionCmd_init_Handover_Pkg_handoverUtils_Pkg(
    &outC->Context_checkSessionCmd_12);
  /* IfBlock1:else:handOver_with_1_Session_SM:EstablishSessionWithAcceptingRBC:_L8=(Handover_Pkg::handoverUtils_Pkg::p131_rbcTransitionOrder_2_p42_establishSession#8)/ */
  p131_rbcTransitionOrder_2_init_Handover_Pkg_handoverUtils_Pkg(
    &outC->Context_p131_rbcTransitionOrder_2_p42_establishSession_8);
  /* IfBlock1:else:handOver_with_1_Session_SM:RegisterAcceptingRBC:_L38=(TM::Read_P045#1)/ */
  Read_P045_init_TM(&outC->Context_Read_P045_1);
  /* IfBlock1:else:handOver_with_1_Session_SM:WaitForTerminationOrderFromHandingOverRBC:_L28=(TM::Read_P042#2)/ */
  Read_P042_init_TM(&outC->Context_Read_P042_2);
  /* IfBlock1:else:handOver_with_1_Session_SM:WaitForTerminationOrderFromHandingOverRBC:_L3=(Handover_Pkg::handoverUtils_Pkg::checkSessionCmd#11)/ */
  checkSessionCmd_init_Handover_Pkg_handoverUtils_Pkg(
    &outC->Context_checkSessionCmd_11);
  /* IfBlock1:else:handOver_with_1_Session_SM:WaitForMinSafeRearEndPassing:_L8=(digital::RisingEdge#28)/ */
  RisingEdge_init_digital(&outC->Context_RisingEdge_28);
  /* IfBlock1:else:handOver_with_1_Session_SM:WaitForMaxSafeFrontEndPassing:_L8=(digital::RisingEdge#26)/ */
  RisingEdge_init_digital(&outC->Context_RisingEdge_26);
  /* IfBlock1:then:handOver_with_2_Sessions_SM:ReregisterHandingOverRBC:_L25=(TM::Read_P045#2)/ */
  Read_P045_init_TM(&outC->Context_Read_P045_2);
  /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTerminationOrderFromHandingOverRBC:_L26=(TM::Read_P042#1)/ */
  Read_P042_init_TM(&outC->Context_Read_P042_1);
  /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTerminationOrderFromHandingOverRBC:_L3=(Handover_Pkg::handoverUtils_Pkg::checkSessionCmd#3)/ */
  checkSessionCmd_init_Handover_Pkg_handoverUtils_Pkg(
    &outC->Context_checkSessionCmd_3);
  /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMinSafeRearEndPassing:_L8=(digital::RisingEdge#8)/ */
  RisingEdge_init_digital(&outC->Context_RisingEdge_8);
  /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMaxSafeFrontEndPassing:_L8=(digital::RisingEdge#5)/ */
  RisingEdge_init_digital(&outC->Context_RisingEdge_5);
  /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTransitionOrder:_L4=(Handover_Pkg::handoverUtils_Pkg::checkSessionCmd#2)/ */
  checkSessionCmd_init_Handover_Pkg_handoverUtils_Pkg(
    &outC->Context_checkSessionCmd_2);
  /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTransitionOrder:_L6=(Handover_Pkg::handoverUtils_Pkg::p131_rbcTransitionOrder_2_p42_establishSession#2)/ */
  p131_rbcTransitionOrder_2_init_Handover_Pkg_handoverUtils_Pkg(
    &outC->_8_Context_p131_rbcTransitionOrder_2_p42_establishSession_2);
  outC->_5_handOver_with_2_Sessions_SM_reset_act_then_IfBlock1 = kcg_false;
  outC->_7_handOver_with_1_Session_SM_reset_act_else_IfBlock1 = kcg_false;
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->p131_transitionOrder_loc_else_IfBlock1,
    (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->_6_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_else_IfBlock1,
    (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
  outC->handOver_with_1_Session_SM_reset_nxt_else_IfBlock1 = kcg_false;
  outC->handOver_with_1_Session_SM_state_nxt_else_IfBlock1 =
    _279_SSM_st_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->_4_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_then_IfBlock1,
    (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
  outC->handOver_with_2_Sessions_SM_reset_nxt_then_IfBlock1 = kcg_false;
  outC->handOver_with_2_Sessions_SM_state_nxt_then_IfBlock1 =
    SSM_st_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1;
  outC->handoverFinished = kcg_false;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void handOverSequencer_reset_Handover_Pkg_handoverUtils_Pkg(
  outC_handOverSequencer_Handover_Pkg_handoverUtils_Pkg *outC)
{
  outC->init3 = kcg_true;
  outC->init2 = kcg_true;
  outC->init = kcg_true;
  /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMaxSafeFrontEndPassing:_L11=(digital::RisingEdge#4)/ */
  RisingEdge_reset_digital(&outC->Context_RisingEdge_4);
  /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMinSafeRearEndPassing:_L11=(digital::RisingEdge#9)/ */
  RisingEdge_reset_digital(&outC->Context_RisingEdge_9);
  /* IfBlock1:else:handOver_with_1_Session_SM:EstablishSessionWithAcceptingRBC:_L1=(Handover_Pkg::handoverUtils_Pkg::checkSessionCmd#12)/ */
  checkSessionCmd_reset_Handover_Pkg_handoverUtils_Pkg(
    &outC->Context_checkSessionCmd_12);
  /* IfBlock1:else:handOver_with_1_Session_SM:EstablishSessionWithAcceptingRBC:_L8=(Handover_Pkg::handoverUtils_Pkg::p131_rbcTransitionOrder_2_p42_establishSession#8)/ */
  p131_rbcTransitionOrder_2_reset_Handover_Pkg_handoverUtils_Pkg(
    &outC->Context_p131_rbcTransitionOrder_2_p42_establishSession_8);
  /* IfBlock1:else:handOver_with_1_Session_SM:RegisterAcceptingRBC:_L38=(TM::Read_P045#1)/ */
  Read_P045_reset_TM(&outC->Context_Read_P045_1);
  /* IfBlock1:else:handOver_with_1_Session_SM:WaitForTerminationOrderFromHandingOverRBC:_L28=(TM::Read_P042#2)/ */
  Read_P042_reset_TM(&outC->Context_Read_P042_2);
  /* IfBlock1:else:handOver_with_1_Session_SM:WaitForTerminationOrderFromHandingOverRBC:_L3=(Handover_Pkg::handoverUtils_Pkg::checkSessionCmd#11)/ */
  checkSessionCmd_reset_Handover_Pkg_handoverUtils_Pkg(
    &outC->Context_checkSessionCmd_11);
  /* IfBlock1:else:handOver_with_1_Session_SM:WaitForMinSafeRearEndPassing:_L8=(digital::RisingEdge#28)/ */
  RisingEdge_reset_digital(&outC->Context_RisingEdge_28);
  /* IfBlock1:else:handOver_with_1_Session_SM:WaitForMaxSafeFrontEndPassing:_L8=(digital::RisingEdge#26)/ */
  RisingEdge_reset_digital(&outC->Context_RisingEdge_26);
  /* IfBlock1:then:handOver_with_2_Sessions_SM:ReregisterHandingOverRBC:_L25=(TM::Read_P045#2)/ */
  Read_P045_reset_TM(&outC->Context_Read_P045_2);
  /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTerminationOrderFromHandingOverRBC:_L26=(TM::Read_P042#1)/ */
  Read_P042_reset_TM(&outC->Context_Read_P042_1);
  /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTerminationOrderFromHandingOverRBC:_L3=(Handover_Pkg::handoverUtils_Pkg::checkSessionCmd#3)/ */
  checkSessionCmd_reset_Handover_Pkg_handoverUtils_Pkg(
    &outC->Context_checkSessionCmd_3);
  /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMinSafeRearEndPassing:_L8=(digital::RisingEdge#8)/ */
  RisingEdge_reset_digital(&outC->Context_RisingEdge_8);
  /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForMaxSafeFrontEndPassing:_L8=(digital::RisingEdge#5)/ */
  RisingEdge_reset_digital(&outC->Context_RisingEdge_5);
  /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTransitionOrder:_L4=(Handover_Pkg::handoverUtils_Pkg::checkSessionCmd#2)/ */
  checkSessionCmd_reset_Handover_Pkg_handoverUtils_Pkg(
    &outC->Context_checkSessionCmd_2);
  /* IfBlock1:then:handOver_with_2_Sessions_SM:WaitForTransitionOrder:_L6=(Handover_Pkg::handoverUtils_Pkg::p131_rbcTransitionOrder_2_p42_establishSession#2)/ */
  p131_rbcTransitionOrder_2_reset_Handover_Pkg_handoverUtils_Pkg(
    &outC->_8_Context_p131_rbcTransitionOrder_2_p42_establishSession_2);
  outC->_5_handOver_with_2_Sessions_SM_reset_act_then_IfBlock1 = kcg_false;
  outC->_7_handOver_with_1_Session_SM_reset_act_else_IfBlock1 = kcg_false;
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->p131_transitionOrder_loc_else_IfBlock1,
    (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->_6_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_else_IfBlock1,
    (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
  outC->handOver_with_1_Session_SM_reset_nxt_else_IfBlock1 = kcg_false;
  outC->handOver_with_1_Session_SM_state_nxt_else_IfBlock1 =
    _279_SSM_st_WaitForTransitionOrder_handOver_with_1_Session_SM_else_IfBlock1;
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->_4_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_then_IfBlock1,
    (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
  outC->handOver_with_2_Sessions_SM_reset_nxt_then_IfBlock1 = kcg_false;
  outC->handOver_with_2_Sessions_SM_state_nxt_then_IfBlock1 =
    SSM_st_WaitForTransitionOrder_handOver_with_2_Sessions_SM_then_IfBlock1;
  outC->handoverFinished = kcg_false;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: Handover_Pkg::handoverUtils_Pkg::handOverSequencer/
  @1: (linear::Memory#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** handOverSequencer_Handover_Pkg_handoverUtils_Pkg.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

