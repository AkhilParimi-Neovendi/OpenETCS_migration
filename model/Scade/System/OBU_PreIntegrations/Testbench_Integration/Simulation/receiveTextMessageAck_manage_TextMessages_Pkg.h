/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _receiveTextMessageAck_manage_TextMessages_Pkg_H_
#define _receiveTextMessageAck_manage_TextMessages_Pkg_H_

#include "kcg_types.h"
#include "clearStatus_manage_TextMessages_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg /* outStatusList/ */ outStatusList;
  DMI_To_Modes_T_DMI_Types_Pkg /* outML/ */ outML;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_clearStatus_manage_TextMessages_Pkg /* IfBlock2:then:_L2=(manage_TextMessages_Pkg::clearStatus#2)/ */ Context_clearStatus_2;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock2: */ IfBlock2_clock;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* IfBlock2:then:_L10/ */ _L10_then_IfBlock2;
  DMI_TXT_MSG_status_T_DMI_Types_Pkg /* IfBlock2:then:_L11/ */ _L11_then_IfBlock2;
  DMI_context_TXT_MSG_T_DMI_Types_Pkg /* IfBlock2:then:_L12/ */ _L12_then_IfBlock2;
  DMI_context_TXT_MSG_T_DMI_Types_Pkg /* IfBlock2:then:_L13/ */ _L13_then_IfBlock2;
  DMI_context_TXT_MSG_T_DMI_Types_Pkg /* IfBlock2:then:_L14/ */ _L14_then_IfBlock2;
  DMI_TXT_MSG_status_T_DMI_Types_Pkg /* IfBlock2:then:_L6/ */ _L6_then_IfBlock2;
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg /* IfBlock2:then:_L7/ */ _L7_then_IfBlock2;
  kcg_int32 /* IfBlock2:then:_L8/ */ _L8_then_IfBlock2;
  DMI_TXT_MSG_status_T_DMI_Types_Pkg /* IfBlock2:then:_L9/ */ _L9_then_IfBlock2;
  DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* IfBlock2:then:_L1/ */ _L1_then_IfBlock2;
  kcg_int32 /* IfBlock2:then:_L3/ */ _L3_then_IfBlock2;
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg /* IfBlock2:then:_L2/ */ _L2_then_IfBlock2;
  DMI_TextMessage_ID_T_DMI_Types_Pkg /* IfBlock2:then:_L4/ */ _L4_then_IfBlock2;
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg /* IfBlock2:then:_L5/ */ _L5_then_IfBlock2;
  DMI_context_TXT_MSG_T_DMI_Types_Pkg /* IfBlock2:else:_L5/ */ _L5_else_IfBlock2;
  DMI_TXT_MSG_status_T_DMI_Types_Pkg /* IfBlock2:else:_L2/ */ _L2_else_IfBlock2;
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg /* IfBlock2:else:_L1/ */ _L1_else_IfBlock2;
  kcg_bool /* IfBlock1:then:_L7/ */ _L7_then_IfBlock1;
  DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* IfBlock1:then:_L6/ */ _L6_then_IfBlock1;
  DMI_To_Modes_T_DMI_Types_Pkg /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1;
  DMI_To_Modes_T_DMI_Types_Pkg /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  DMI_To_Modes_T_DMI_Types_Pkg /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  DMI_To_Modes_T_DMI_Types_Pkg /* IfBlock1:else:else:_L1/ */ _L1_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L5/ */ _L5_then_else_IfBlock1;
  DMI_To_Modes_T_DMI_Types_Pkg /* IfBlock1:else:then:_L3/ */ _L3_then_else_IfBlock1;
  DMI_To_Modes_T_DMI_Types_Pkg /* IfBlock1:else:then:_L2/ */ _L2_then_else_IfBlock1;
  DMI_To_Modes_T_DMI_Types_Pkg /* IfBlock1:else:then:_L1/ */ _L1_then_else_IfBlock1;
  DMI_DriverAck_T_DMI_Types_Pkg /* IfBlock1:else:then:_L7/ */ _L7_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L8/ */ _L8_then_else_IfBlock1;
  DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* IfBlock1:else:then:_L10/ */ _L10_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L9/ */ _L9_then_else_IfBlock1;
  DMI_TXT_MSG_status_T_DMI_Types_Pkg /* IfBlock1:else:then:_L11/ */ _L11_then_else_IfBlock1;
  M_MODE /* IfBlock1:else:then:_L12/ */ _L12_then_else_IfBlock1;
  DMI_TXT_MSG_status_T_DMI_Types_Pkg /* msgInfo/ */ msgInfo;
  kcg_int32 /* indexToInfo/ */ indexToInfo;
  DMI_context_TXT_MSG_T_DMI_Types_Pkg /* context/ */ context;
  kcg_bool /* isValid/ */ isValid;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L5/ */ _L5;
  DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* _L24/ */ _L24;
  kcg_bool /* _L25/ */ _L25;
} outC_receiveTextMessageAck_manage_TextMessages_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* manage_TextMessages_Pkg::receiveTextMessageAck/ */
extern void receiveTextMessageAck_manage_TextMessages_Pkg(
  /* inSystemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* inStatusList/ */
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList,
  /* inTXT_MsgAck/ */
  DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *inTXT_MsgAck,
  outC_receiveTextMessageAck_manage_TextMessages_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void receiveTextMessageAck_reset_manage_TextMessages_Pkg(
  outC_receiveTextMessageAck_manage_TextMessages_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void receiveTextMessageAck_init_manage_TextMessages_Pkg(
  outC_receiveTextMessageAck_manage_TextMessages_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _receiveTextMessageAck_manage_TextMessages_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** receiveTextMessageAck_manage_TextMessages_Pkg.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

