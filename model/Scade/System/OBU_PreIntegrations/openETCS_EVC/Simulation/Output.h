/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _Output_H_
#define _Output_H_

#include "kcg_types.h"
#include "Output_Mode_Level_To_Use_OutputManagement.h"
#include "Output_To_BG_Management_OutputManagement.h"
#include "Output_To_DMI_OutputManagement.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_Mode_Level_Level_And_Mode_Types_Pkg /* Compatible_Mode_And_Level/ */ Compatible_Mode_And_Level;
  T_Data_To_BG_Management_Level_And_Mode_Types_Pkg /* Data_To_BG_Management/ */ Data_To_BG_Management;
  kcg_bool /* Service_Brake_Command/ */ Service_Brake_Command;
  kcg_bool /* EB_Requested/ */ EB_Requested;
  T_AnnouncedLevel_Level_And_Mode_Types_Pkg /* announcedLevel/ */ announcedLevel;
  T_AcknoledgementRequest_Level_And_Mode_Types_Pkg /* Data_To_DMI_Ack/ */ Data_To_DMI_Ack;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Output_To_BG_Management_OutputManagement /* _L7=(OutputManagement::Output_To_BG_Management#1)/ */ Context_Output_To_BG_Management_1;
  outC_Output_Mode_Level_To_Use_OutputManagement /* _L18=(OutputManagement::Output_Mode_Level_To_Use#1)/ */ Context_Output_Mode_Level_To_Use_1;
  outC_Output_To_DMI_OutputManagement /* _L43=(OutputManagement::Output_To_DMI#1)/ */ Context_Output_To_DMI_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L10/ */ _L10;
  T_Data_To_BG_Management_Level_And_Mode_Types_Pkg /* _L7/ */ _L7;
  T_Data_To_DMI_Level_And_Mode_Types_Pkg /* _L3/ */ _L3;
  kcg_bool /* _L2/ */ _L2;
  T_Data_To_BG_Management_Level_And_Mode_Types_Pkg /* _L17/ */ _L17;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* _L18/ */ _L18;
  M_LEVEL /* _L19/ */ _L19;
  T_Mode_Level_And_Mode_Types_Pkg /* _L20/ */ _L20;
  kcg_bool /* _L21/ */ _L21;
  kcg_bool /* _L22/ */ _L22;
  kcg_bool /* _L23/ */ _L23;
  kcg_bool /* _L24/ */ _L24;
  kcg_bool /* _L25/ */ _L25;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* _L30/ */ _L30;
  kcg_bool /* _L33/ */ _L33;
  kcg_bool /* _L34/ */ _L34;
  kcg_bool /* _L36/ */ _L36;
  kcg_bool /* _L37/ */ _L37;
  T_AnnouncedLevel_Level_And_Mode_Types_Pkg /* _L43/ */ _L43;
  T_AcknoledgementRequest_Level_And_Mode_Types_Pkg /* _L44/ */ _L44;
} outC_Output;

/* ===========  node initialization and cycle functions  =========== */
/* Output/ */
extern void Output(
  /* next_level/ */
  M_LEVEL next_level,
  /* needsAckFromDriver/ */
  kcg_bool needsAckFromDriver,
  /* announcedLevelTransition/ */
  T_LevelTransition_Level_And_Mode_Types_Pkg *announcedLevelTransition,
  /* service_brake_from_level/ */
  kcg_bool service_brake_from_level,
  /* Connection_to_RBC_Requested/ */
  kcg_bool Connection_to_RBC_Requested,
  /* PositionReportNeeded/ */
  kcg_bool PositionReportNeeded,
  /* isNewLevel/ */
  kcg_bool isNewLevel,
  /* isAvailableForUse/ */
  kcg_bool isAvailableForUse,
  /* currentMode/ */
  T_Mode_Level_And_Mode_Types_Pkg currentMode,
  /* EB_Requested_From_Mode/ */
  kcg_bool EB_Requested_From_Mode,
  /* Service_Brake_Command_From_Mode/ */
  kcg_bool Service_Brake_Command_From_Mode,
  /* Data_To_DMI_From_Mode/ */
  T_Data_To_DMI_Level_And_Mode_Types_Pkg *Data_To_DMI_From_Mode,
  /* Data_To_BG_Management_From_Mode/ */
  T_Data_To_BG_Management_Level_And_Mode_Types_Pkg *Data_To_BG_Management_From_Mode,
  /* Level_Mode_Compatible/ */
  kcg_bool Level_Mode_Compatible,
  outC_Output *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Output_reset(outC_Output *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Output_init(outC_Output *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Output_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Output.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

