/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _ContinuousTimeoutCheck_CheckEuroradioMessage_H_
#define _ContinuousTimeoutCheck_CheckEuroradioMessage_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* tNvContactError/ */ tNvContactError;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* IfBlock1:then:_L10/ */ _L10_then_IfBlock1;
  kcg_int32 /* IfBlock1:then:_L9/ */ _L9_then_IfBlock1;
  T_NVCONTACT /* IfBlock1:then:_L8/ */ _L8_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L7/ */ _L7_then_IfBlock1;
  kcg_int32 /* IfBlock1:then:_L6/ */ _L6_then_IfBlock1;
  T_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  T_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  kcg_bool /* IfBlock1:else:_L1/ */ _L1_else_IfBlock1;
  kcg_bool /* doCheck/ */ doCheck;
  morcStatus_T_RCM_Session_Types_Pkg /* _L1/ */ _L1;
  sessionStatus_T_RCM_Session_Types_Pkg /* _L2/ */ _L2;
  sessionPhase_T_RCM_Session_Types_Pkg /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  sessionPhase_T_RCM_Session_Types_Pkg /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
} outC_ContinuousTimeoutCheck_CheckEuroradioMessage;

/* ===========  node initialization and cycle functions  =========== */
/* CheckEuroradioMessage::ContinuousTimeoutCheck/ */
extern void ContinuousTimeoutCheck_CheckEuroradioMessage(
  /* systemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* tNvContact/ */
  T_NVCONTACT tNvContact,
  /* lastRelevantEventTimestamp/ */
  T_internal_Type_Obu_BasicTypes_Pkg lastRelevantEventTimestamp,
  /* activateCheck/ */
  kcg_bool activateCheck,
  /* radioStatus/ */
  morcStatus_T_RCM_Session_Types_Pkg *radioStatus,
  outC_ContinuousTimeoutCheck_CheckEuroradioMessage *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ContinuousTimeoutCheck_reset_CheckEuroradioMessage(
  outC_ContinuousTimeoutCheck_CheckEuroradioMessage *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ContinuousTimeoutCheck_init_CheckEuroradioMessage(
  outC_ContinuousTimeoutCheck_CheckEuroradioMessage *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ContinuousTimeoutCheck_CheckEuroradioMessage_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ContinuousTimeoutCheck_CheckEuroradioMessage.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

