/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _OutputManagement_Interfaces_H_
#define _OutputManagement_Interfaces_H_

#include "kcg_types.h"
#include "Output_To_BG_Management_Interfaces.h"
#include "Output_To_DMI_Interfaces.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_Data_To_DMI_Level_And_Mode_Types_Pkg /* Data_To_DMI/ */ Data_To_DMI;
  T_Data_To_BG_Management_Level_And_Mode_Types_Pkg /* Data_To_BG_Management/ */ Data_To_BG_Management;
  kcg_bool /* EB_Requested/ */ EB_Requested;
  kcg_bool /* Service_Brake_Command/ */ Service_Brake_Command;
  T_Mode_Level_And_Mode_Types_Pkg /* newMode/ */ newMode;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Output_To_BG_Management_Interfaces /* _L18=(Interfaces::Output_To_BG_Management#1)/ */ Context_Output_To_BG_Management_1;
  outC_Output_To_DMI_Interfaces /* _L22=(Interfaces::Output_To_DMI#1)/ */ Context_Output_To_DMI_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  T_Mode_Level_And_Mode_Types_Pkg /* _L16/ */ _L16;
  kcg_bool /* _L15/ */ _L15;
  kcg_bool /* _L14/ */ _L14;
  kcg_bool /* _L13/ */ _L13;
  kcg_bool /* _L12/ */ _L12;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L2/ */ _L2;
  kcg_bool /* _L1/ */ _L1;
  T_Data_To_BG_Management_Level_And_Mode_Types_Pkg /* _L18/ */ _L18;
  kcg_bool /* _L20/ */ _L20;
  kcg_bool /* _L21/ */ _L21;
  T_Data_To_DMI_Level_And_Mode_Types_Pkg /* _L22/ */ _L22;
  kcg_bool /* _L23/ */ _L23;
  T_Mode_Level_And_Mode_Types_Pkg /* _L26/ */ _L26;
  kcg_bool /* _L28/ */ _L28;
  kcg_bool /* _L29/ */ _L29;
  kcg_bool /* _L30/ */ _L30;
} outC_OutputManagement_Interfaces;

/* ===========  node initialization and cycle functions  =========== */
/* Interfaces::OutputManagement/ */
extern void OutputManagement_Interfaces(
  /* current_Mode/ */
  T_Mode_Level_And_Mode_Types_Pkg current_Mode,
  /* Ack_LS_Req_To_Driver/ */
  kcg_bool Ack_LS_Req_To_Driver,
  /* Ack_OS_Req_To_Driver/ */
  kcg_bool Ack_OS_Req_To_Driver,
  /* Ack_RV_Req_To_Driver/ */
  kcg_bool Ack_RV_Req_To_Driver,
  /* Ack_SH_Req_To_Driver/ */
  kcg_bool Ack_SH_Req_To_Driver,
  /* Ack_SN_Req_To_Driver/ */
  kcg_bool Ack_SN_Req_To_Driver,
  /* Ack_SR_Req_To_Driver/ */
  kcg_bool Ack_SR_Req_To_Driver,
  /* Ack_TR_Req_To_Driver/ */
  kcg_bool Ack_TR_Req_To_Driver,
  /* Ack_UN_Req_To_Driver/ */
  kcg_bool Ack_UN_Req_To_Driver,
  /* Clean_BG_List_SH_Area/ */
  kcg_bool Clean_BG_List_SH_Area,
  /* EB_requested/ */
  kcg_bool EB_requested,
  /* End_Of_Mission_Procedure_Req/ */
  kcg_bool End_Of_Mission_Procedure_Req,
  /* MA_Req_to_RBC/ */
  kcg_bool MA_Req_to_RBC,
  /* Request_For_SH_To_RBC/ */
  kcg_bool Request_For_SH_To_RBC,
  /* service_brake_Command/ */
  kcg_bool service_brake_Command,
  /* SH_Refused_by_RBC_To_DMI/ */
  kcg_bool SH_Refused_by_RBC_To_DMI,
  outC_OutputManagement_Interfaces *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void OutputManagement_reset_Interfaces(
  outC_OutputManagement_Interfaces *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void OutputManagement_init_Interfaces(
  outC_OutputManagement_Interfaces *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _OutputManagement_Interfaces_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** OutputManagement_Interfaces.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

