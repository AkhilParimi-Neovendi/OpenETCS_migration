/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _manageTextMessages_manage_TextMessages_Pkg_H_
#define _manageTextMessages_manage_TextMessages_Pkg_H_

#include "kcg_types.h"
#include "checkIfNeeded_manage_TextMessages_Pkg.h"
#include "sendTextMessage_manage_TextMessages_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* dmi_textMessage/ */ dmi_textMessage;
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg /* outStatusList/ */ outStatusList;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_sendTextMessage_manage_TextMessages_Pkg /* _L15=(manage_TextMessages_Pkg::sendTextMessage#2)/ */ Context_sendTextMessage_2;
  outC_checkIfNeeded_manage_TextMessages_Pkg /* _L29=(manage_TextMessages_Pkg::checkIfNeeded#1)/ */ Context_checkIfNeeded_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1:else:else: */ else_clock_else_IfBlock1;
  kcg_bool every;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  T_AcknoledgementRequest_Level_And_Mode_Types_Pkg /* IfBlock1:then:_L18/ */ _L18_then_IfBlock1;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* IfBlock1:then:_L17/ */ _L17_then_IfBlock1;
  DMI_context_TXT_MSG_T_DMI_Types_Pkg /* IfBlock1:then:_L16/ */ _L16_then_IfBlock1;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* IfBlock1:then:_L14/ */ _L14_then_IfBlock1;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* IfBlock1:then:_L13/ */ _L13_then_IfBlock1;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* IfBlock1:then:_L12/ */ _L12_then_IfBlock1;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* IfBlock1:then:_L11/ */ _L11_then_IfBlock1;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* IfBlock1:then:_L10/ */ _L10_then_IfBlock1;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* IfBlock1:then:_L9/ */ _L9_then_IfBlock1;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* IfBlock1:then:_L7/ */ _L7_then_IfBlock1;
  M_MODE /* IfBlock1:then:_L6/ */ _L6_then_IfBlock1;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  DMI_context_TXT_MSG_T_DMI_Types_Pkg /* IfBlock1:else:else:then:_L2/ */ _L2_then_else_else_IfBlock1;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* IfBlock1:else:else:then:_L1/ */ _L1_then_else_else_IfBlock1;
  DMI_context_TXT_MSG_T_DMI_Types_Pkg /* IfBlock1:else:else:else:_L3/ */ _L3_else_else_else_IfBlock1;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* IfBlock1:else:else:else:_L2/ */ _L2_else_else_else_IfBlock1;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* IfBlock1:else:then:_L4/ */ _L4_then_else_IfBlock1;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* IfBlock1:else:then:_L5/ */ _L5_then_else_IfBlock1;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* IfBlock1:else:then:_L6/ */ _L6_then_else_IfBlock1;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* IfBlock1:else:then:_L7/ */ _L7_then_else_IfBlock1;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* IfBlock1:else:then:_L8/ */ _L8_then_else_IfBlock1;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* IfBlock1:else:then:_L9/ */ _L9_then_else_IfBlock1;
  DMI_context_TXT_MSG_T_DMI_Types_Pkg /* IfBlock1:else:then:_L10/ */ _L10_then_else_IfBlock1;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* IfBlock1:else:then:_L11/ */ _L11_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L13/ */ _L13_then_else_IfBlock1;
  Q_TEXTCONFIRM /* IfBlock1:else:then:_L14/ */ _L14_then_else_IfBlock1;
  Q_TEXTCONFIRM /* IfBlock1:else:then:_L15/ */ _L15_then_else_IfBlock1;
  Q_TEXTCONFIRM /* IfBlock1:else:then:_L16/ */ _L16_then_else_IfBlock1;
  M_LEVEL /* IfBlock1:else:then:_L17/ */ _L17_then_else_IfBlock1;
  T_AcknoledgementRequest_Level_And_Mode_Types_Pkg /* IfBlock1:else:then:_L18/ */ _L18_then_else_IfBlock1;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* textMessageToSend/ */ textMessageToSend;
  kcg_bool /* levelNeedsAck/ */ levelNeedsAck;
  kcg_bool /* modeChange/ */ modeChange;
  DMI_context_TXT_MSG_T_DMI_Types_Pkg /* msgContext/ */ msgContext;
  Q_TEXTREPORT /* q_textReport/ */ q_textReport;
  M_LEVEL /* announcedLevel/ */ announcedLevel;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L13/ */ _L13;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L17/ */ _L17;
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg /* _L15/ */ _L15;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* _L16/ */ _L16;
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg /* _L14/ */ _L14;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* _L18/ */ _L18;
  kcg_int32 /* _L20/ */ _L20;
  DMI_context_TXT_MSG_T_DMI_Types_Pkg /* _L22/ */ _L22;
  M_MODE /* _L24/ */ _L24;
  Q_TEXTREPORT /* _L26/ */ _L26;
  Q_TEXTREPORT /* _L28/ */ _L28;
  kcg_bool /* _L29/ */ _L29;
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg /* _L34/ */ _L34;
  kcg_bool /* _L37/ */ _L37;
  T_AcknoledgementRequest_Level_And_Mode_Types_Pkg /* _L38/ */ _L38;
  M_LEVEL /* _L40/ */ _L40;
  T_AnnouncedLevel_Level_And_Mode_Types_Pkg /* _L42/ */ _L42;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* _L43/ */ _L43;
  T_LevelTansitionInfo_Level_And_Mode_Types_Pkg /* _L44/ */ _L44;
  M_LEVEL /* _L45/ */ _L45;
  T_AcknoledgementRequest_Level_And_Mode_Types_Pkg /* _L46/ */ _L46;
  M_LEVEL /* _L47/ */ _L47;
} outC_manageTextMessages_manage_TextMessages_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* manage_TextMessages_Pkg::manageTextMessages/ */
extern void manageTextMessages_manage_TextMessages_Pkg(
  /* inSystemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* inStatusList/ */
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList,
  /* dmi_FromBG/ */
  kcg_bool dmi_FromBG,
  /* inModeLevel_Ack/ */
  T_AcknoledgementRequest_Level_And_Mode_Types_Pkg *inModeLevel_Ack,
  /* announcedLevelTransition/ */
  T_AnnouncedLevel_Level_And_Mode_Types_Pkg *announcedLevelTransition,
  outC_manageTextMessages_manage_TextMessages_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void manageTextMessages_reset_manage_TextMessages_Pkg(
  outC_manageTextMessages_manage_TextMessages_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void manageTextMessages_init_manage_TextMessages_Pkg(
  outC_manageTextMessages_manage_TextMessages_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _manageTextMessages_manage_TextMessages_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** manageTextMessages_manage_TextMessages_Pkg.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

