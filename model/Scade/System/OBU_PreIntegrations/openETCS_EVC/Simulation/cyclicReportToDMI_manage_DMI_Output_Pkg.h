/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _cyclicReportToDMI_manage_DMI_Output_Pkg_H_
#define _cyclicReportToDMI_manage_DMI_Output_Pkg_H_

#include "kcg_types.h"
#include "sendDynamic_manage_DMI_Output_Pkg.h"
#include "isSendingNeeded_manage_DMI_Output_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg /* packetDynamic/ */ packetDynamic;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  T_Mode_Level_Level_And_Mode_Types_Pkg /* inModeAndLevel/ */ mem_inModeAndLevel;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_sendDynamic_manage_DMI_Output_Pkg /* IfBlock1:then:_L1=(manage_DMI_Output_Pkg::sendDynamic#2)/ */ Context_sendDynamic_2;
  outC_isSendingNeeded_manage_DMI_Output_Pkg /* _L1=(manage_DMI_Output_Pkg::isSendingNeeded#1)/ */ Context_isSendingNeeded_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  morcStatus_T_RCM_Session_Types_Pkg /* IfBlock1:then:_L20/ */ _L20_then_IfBlock1;
  NID_NTC /* IfBlock1:then:_L19/ */ _L19_then_IfBlock1;
  movementAuthorityForDMI_T_DMI_Types_Pkg /* IfBlock1:then:_L16/ */ _L16_then_IfBlock1;
  nationValuesForDMI_T_DMI_Types_Pkg /* IfBlock1:then:_L15/ */ _L15_then_IfBlock1;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* IfBlock1:then:_L14/ */ _L14_then_IfBlock1;
  speedSupervisionForDMI_T_DMI_Types_Pkg /* IfBlock1:then:_L13/ */ _L13_then_IfBlock1;
  trainPosition_T_TrainPosition_Types_Pck /* IfBlock1:then:_L12/ */ _L12_then_IfBlock1;
  odometry_T_Obu_BasicTypes_Pkg /* IfBlock1:then:_L11/ */ _L11_then_IfBlock1;
  T_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:then:_L10/ */ _L10_then_IfBlock1;
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  kcg_bool /* doSendingDynamc/ */ doSendingDynamc;
  kcg_bool /* _L1/ */ _L1;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L2/ */ _L2;
  DMI_EVC_status_T_DMI_Types_Pkg /* _L12/ */ _L12;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* _L13/ */ _L13;
  kcg_bool /* _L14/ */ _L14;
  kcg_bool /* _L15/ */ _L15;
  kcg_bool /* _L16/ */ _L16;
  kcg_bool /* _L17/ */ _L17;
} outC_cyclicReportToDMI_manage_DMI_Output_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* manage_DMI_Output_Pkg::cyclicReportToDMI/ */
extern void cyclicReportToDMI_manage_DMI_Output_Pkg(
  /* incurrentDMIStatus/ */
  DMI_EVC_status_T_DMI_Types_Pkg *incurrentDMIStatus,
  /* inSystemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* inOdometry/ */
  odometry_T_Obu_BasicTypes_Pkg *inOdometry,
  /* inTrainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *inTrainPosition,
  /* inSpeedSupervision/ */
  speedSupervisionForDMI_T_DMI_Types_Pkg *inSpeedSupervision,
  /* inModeAndLevel/ */
  T_Mode_Level_Level_And_Mode_Types_Pkg *inModeAndLevel,
  /* inNationalValues/ */
  nationValuesForDMI_T_DMI_Types_Pkg *inNationalValues,
  /* inMovementAuthority/ */
  movementAuthorityForDMI_T_DMI_Types_Pkg *inMovementAuthority,
  /* inMoRC_status/ */
  morcStatus_T_RCM_Session_Types_Pkg *inMoRC_status,
  /* inNTC/ */
  NID_NTC inNTC,
  /* forceSend/ */
  kcg_bool forceSend,
  outC_cyclicReportToDMI_manage_DMI_Output_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void cyclicReportToDMI_reset_manage_DMI_Output_Pkg(
  outC_cyclicReportToDMI_manage_DMI_Output_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void cyclicReportToDMI_init_manage_DMI_Output_Pkg(
  outC_cyclicReportToDMI_manage_DMI_Output_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _cyclicReportToDMI_manage_DMI_Output_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** cyclicReportToDMI_manage_DMI_Output_Pkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

