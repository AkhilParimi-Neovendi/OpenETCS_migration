/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _receiveRequestsModesAndLevel_manage_DMI_Input_Pkg_H_
#define _receiveRequestsModesAndLevel_manage_DMI_Input_Pkg_H_

#include "kcg_types.h"
#include "doDriverRequests_manage_DMI_Input_Pkg.h"
#include "receiveTextMessageAck_manage_TextMessages_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_To_Modes_T_DMI_Types_Pkg /* forModesAndLevel/ */ forModesAndLevel;
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg /* outStatusList/ */ outStatusList;
  kcg_bool /* outDriverRequestToLevels/ */ outDriverRequestToLevels;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_receiveTextMessageAck_manage_TextMessages_Pkg /* _L4=(manage_TextMessages_Pkg::receiveTextMessageAck#1)/ */ Context_receiveTextMessageAck_1;
  outC_doDriverRequests_manage_DMI_Input_Pkg /* _L9=(manage_DMI_Input_Pkg::doDriverRequests#1)/ */ Context_doDriverRequests_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* _L2/ */ _L2;
  DMI_To_Modes_T_DMI_Types_Pkg /* _L5/ */ _L5;
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg /* _L4/ */ _L4;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L6/ */ _L6;
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg /* _L7/ */ _L7;
  DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* _L8/ */ _L8;
  DMI_DriverRequest_T_DMI_Types_Pkg /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg /* _L11/ */ _L11;
  DMI_To_Modes_T_DMI_Types_Pkg /* _L12/ */ _L12;
  DMI_To_Modes_T_DMI_Types_Pkg /* _L13/ */ _L13;
  kcg_bool /* _L14/ */ _L14;
  kcg_bool /* _L15/ */ _L15;
  kcg_bool /* _L16/ */ _L16;
} outC_receiveRequestsModesAndLevel_manage_DMI_Input_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel/ */
extern void receiveRequestsModesAndLevel_manage_DMI_Input_Pkg(
  /* fromDMI_driverRequest/ */
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *fromDMI_driverRequest,
  /* fromDMI_Icon_Ack/ */
  DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *fromDMI_Icon_Ack,
  /* fromDMI_TextMsg_Ack/ */
  DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *fromDMI_TextMsg_Ack,
  /* inSystemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* inStatusList/ */
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList,
  outC_receiveRequestsModesAndLevel_manage_DMI_Input_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void receiveRequestsModesAndLevel_reset_manage_DMI_Input_Pkg(
  outC_receiveRequestsModesAndLevel_manage_DMI_Input_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void receiveRequestsModesAndLevel_init_manage_DMI_Input_Pkg(
  outC_receiveRequestsModesAndLevel_manage_DMI_Input_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _receiveRequestsModesAndLevel_manage_DMI_Input_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** receiveRequestsModesAndLevel_manage_DMI_Input_Pkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

