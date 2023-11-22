/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _checkIfNeeded_manage_TextMessages_Pkg_H_
#define _checkIfNeeded_manage_TextMessages_Pkg_H_

#include "kcg_types.h"
#include "mapMLtoElement_manage_TextMessages_Pkg.h"
#include "findForCheck_manage_TextMessages_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* sendingNeeded/ */ sendingNeeded;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_findForCheck_manage_TextMessages_Pkg /* IfBlock1:then:_L1=(manage_TextMessages_Pkg::findForCheck#1)/ */ Context_findForCheck_1;
  outC_mapMLtoElement_manage_TextMessages_Pkg /* IfBlock1:then:_L6=(manage_TextMessages_Pkg::mapMLtoElement#1)/ */ Context_mapMLtoElement_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  T_AcknoledgementRequest_Level_And_Mode_Types_Pkg /* IfBlock1:then:_L10/ */ _L10_then_IfBlock1;
  M_LEVEL /* IfBlock1:then:_L9/ */ _L9_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L8/ */ _L8_then_IfBlock1;
  DMI_TXT_MSG_status_T_DMI_Types_Pkg /* IfBlock1:then:_L6/ */ _L6_then_IfBlock1;
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  kcg_bool /* IfBlock1:else:_L1/ */ _L1_else_IfBlock1;
  kcg_bool /* levelChange/ */ levelChange;
  kcg_bool /* modeChange/ */ modeChange;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L9/ */ _L9;
  T_AcknoledgementRequest_Level_And_Mode_Types_Pkg /* _L17/ */ _L17;
  kcg_bool /* _L18/ */ _L18;
} outC_checkIfNeeded_manage_TextMessages_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* manage_TextMessages_Pkg::checkIfNeeded/ */
extern void checkIfNeeded_manage_TextMessages_Pkg(
  /* inModeLevel_Ack/ */
  T_AcknoledgementRequest_Level_And_Mode_Types_Pkg *inModeLevel_Ack,
  /* announcedLevel/ */
  M_LEVEL announcedLevel,
  /* inStatusList/ */
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList,
  outC_checkIfNeeded_manage_TextMessages_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void checkIfNeeded_reset_manage_TextMessages_Pkg(
  outC_checkIfNeeded_manage_TextMessages_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void checkIfNeeded_init_manage_TextMessages_Pkg(
  outC_checkIfNeeded_manage_TextMessages_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _checkIfNeeded_manage_TextMessages_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** checkIfNeeded_manage_TextMessages_Pkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

