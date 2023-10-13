/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */
#ifndef _sendTextMessage_manage_TextMessages_Pkg_H_
#define _sendTextMessage_manage_TextMessages_Pkg_H_

#include "kcg_types.h"
#include "saveStatus_manage_TextMessages_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg /* outStatusList/ */ outStatusList;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* dmi_textMessage/ */ dmi_textMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_saveStatus_manage_TextMessages_Pkg /* IfBlock1:then:_L10=(manage_TextMessages_Pkg::saveStatus#1)/ */ Context_saveStatus_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_context_TXT_MSG_T_DMI_Types_Pkg /* IfBlock1:then:_L23/ */ _L23_then_IfBlock1;
  M_LEVEL /* IfBlock1:then:_L22/ */ _L22_then_IfBlock1;
  M_MODE /* IfBlock1:then:_L21/ */ _L21_then_IfBlock1;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* IfBlock1:then:_L13/ */ _L13_then_IfBlock1;
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg /* IfBlock1:then:_L12/ */ _L12_then_IfBlock1;
  DMI_TXT_MSG_status_T_DMI_Types_Pkg /* IfBlock1:then:_L11/ */ _L11_then_IfBlock1;
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg /* IfBlock1:then:_L10/ */ _L10_then_IfBlock1;
  NID_TEXTMESSAGE /* IfBlock1:then:_L9/ */ _L9_then_IfBlock1;
  Q_TEXTREPORT /* IfBlock1:then:_L8/ */ _L8_then_IfBlock1;
  T_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:then:_L7/ */ _L7_then_IfBlock1;
  DMI_TextMessage_ID_T_DMI_Types_Pkg /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  DMI_TXT_MSG_status_T_DMI_Types_Pkg /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg /* IfBlock1:else:else:_L2/ */ _L2_else_else_IfBlock1;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* IfBlock1:else:else:_L3/ */ _L3_else_else_IfBlock1;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* IfBlock1:else:then:_L2/ */ _L2_then_else_IfBlock1;
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg /* IfBlock1:else:then:_L1/ */ _L1_then_else_IfBlock1;
  kcg_bool /* needsStore/ */ needsStore;
  kcg_bool /* isValid/ */ isValid;
  DMI_TXT_MSG_status_T_DMI_Types_Pkg /* myElement/ */ myElement;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* _L2/ */ _L2;
  Q_TEXTCONFIRM /* _L3/ */ _L3;
  Q_TEXTCONFIRM /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
} outC_sendTextMessage_manage_TextMessages_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* manage_TextMessages_Pkg::sendTextMessage/ */
extern void sendTextMessage_manage_TextMessages_Pkg(
  /* inSystemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* inStatusList/ */
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList,
  /* intextMessage/ */
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *intextMessage,
  /* inTextReport/ */
  Q_TEXTREPORT inTextReport,
  /* inNID_TextMessage/ */
  NID_TEXTMESSAGE inNID_TextMessage,
  /* inContext/ */
  DMI_context_TXT_MSG_T_DMI_Types_Pkg inContext,
  /* inWhichMode/ */
  M_MODE inWhichMode,
  /* inWhichLevel/ */
  M_LEVEL inWhichLevel,
  outC_sendTextMessage_manage_TextMessages_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void sendTextMessage_reset_manage_TextMessages_Pkg(
  outC_sendTextMessage_manage_TextMessages_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void sendTextMessage_init_manage_TextMessages_Pkg(
  outC_sendTextMessage_manage_TextMessages_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _sendTextMessage_manage_TextMessages_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** sendTextMessage_manage_TextMessages_Pkg.h
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */

