/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _ManageLevelAndMode_H_
#define _ManageLevelAndMode_H_

#include "kcg_types.h"
#include "CheckLevelAndMode.h"
#include "Output.h"
#include "Input.h"
#include "ManageLevels.h"
#include "ManageModes.h"

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
  outC_Output /* _L79=(Output#1)/ */ Context_Output_1;
  outC_CheckLevelAndMode /* _L76=(CheckLevelAndMode#1)/ */ Context_CheckLevelAndMode_1;
  outC_ManageModes /* _L1=(ManageModes#1)/ */ Context_ManageModes_1;
  outC_ManageLevels /* _L6=(ManageLevels#1)/ */ Context_ManageLevels_1;
  outC_Input /* _L25=(Input#1)/ */ Context_Input_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_LEVEL /* Loc_Level_To_Apply/ */ Loc_Level_To_Apply;
  T_Mode_Level_And_Mode_Types_Pkg /* Loc_Mode_To_Apply/ */ Loc_Mode_To_Apply;
  kcg_bool /* Loc_TripFromLevel/ */ Loc_TripFromLevel;
  T_Data_To_BG_Management_Level_And_Mode_Types_Pkg /* _L5/ */ _L5;
  T_Data_To_DMI_Level_And_Mode_Types_Pkg /* _L4/ */ _L4;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L2/ */ _L2;
  T_Mode_Level_And_Mode_Types_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L12/ */ _L12;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L10/ */ _L10;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* _L9/ */ _L9;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L7/ */ _L7;
  M_LEVEL /* _L6/ */ _L6;
  kcg_bool /* _L25/ */ _L25;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* _L28/ */ _L28;
  kcg_bool /* _L29/ */ _L29;
  trainPosition_T_TrainPosition_Types_Pck /* _L30/ */ _L30;
  T_ERTMS_capabilities_Level_And_Mode_Types_Pkg /* _L33/ */ _L33;
  cab_ID_T_TIU_Types_Pkg /* _L37/ */ _L37;
  T_Data_From_DMI_Level_And_Mode_Types_Pkg /* _L40/ */ _L40;
  T_Data_From_Localisation_Level_And_Mode_Types_Pkg /* _L41/ */ _L41;
  T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg /* _L42/ */ _L42;
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg /* _L43/ */ _L43;
  T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg /* _L44/ */ _L44;
  DMI_To_Modes_T_DMI_Types_Pkg /* _L53/ */ _L53;
  T_Data_From_Localisation_Level_And_Mode_Types_Pkg /* _L54/ */ _L54;
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg /* _L55/ */ _L55;
  T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg /* _L56/ */ _L56;
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg /* _L57/ */ _L57;
  T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg /* _L58/ */ _L58;
  cab_ID_T_TIU_Types_Pkg /* _L59/ */ _L59;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* _L61/ */ _L61;
  T_ERTMS_capabilities_Level_And_Mode_Types_Pkg /* _L72/ */ _L72;
  M_LEVEL /* _L73/ */ _L73;
  T_Mode_Level_And_Mode_Types_Pkg /* _L75/ */ _L75;
  kcg_bool /* _L76/ */ _L76;
  M_LEVEL /* _L77/ */ _L77;
  T_Mode_Level_And_Mode_Types_Pkg /* _L78/ */ _L78;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* _L79/ */ _L79;
  T_Data_To_BG_Management_Level_And_Mode_Types_Pkg /* _L82/ */ _L82;
  kcg_bool /* _L83/ */ _L83;
  kcg_bool /* _L84/ */ _L84;
  T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg /* _L87/ */ _L87;
  T_Data_From_F2_functions_Level_And_Mode_Types_Pkg /* _L92/ */ _L92;
  T_Data_From_STM_Level_And_Mode_Types_Pkg /* _L93/ */ _L93;
  T_Data_From_STM_Level_And_Mode_Types_Pkg /* _L94/ */ _L94;
  T_Data_From_F2_functions_Level_And_Mode_Types_Pkg /* _L95/ */ _L95;
  T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg /* _L96/ */ _L96;
  kcg_bool /* _L101/ */ _L101;
  kcg_bool /* _L100/ */ _L100;
  kcg_bool /* _L104/ */ _L104;
  M_LEVEL /* _L108/ */ _L108;
  M_LEVEL /* _L109/ */ _L109;
  T_AcknoledgementRequest_Level_And_Mode_Types_Pkg /* _L110/ */ _L110;
  T_AnnouncedLevel_Level_And_Mode_Types_Pkg /* _L111/ */ _L111;
} outC_ManageLevelAndMode;

/* ===========  node initialization and cycle functions  =========== */
/* ManageLevelAndMode/ */
extern void ManageLevelAndMode(
  /* Data_From_DMI/ */
  DMI_To_Modes_T_DMI_Types_Pkg *Data_From_DMI,
  /* Data_From_Localisation/ */
  T_Data_From_Localisation_Level_And_Mode_Types_Pkg *Data_From_Localisation,
  /* Data_From_TIU/ */
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *Data_From_TIU,
  /* Data_From_Track_Messages/ */
  T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg *Data_From_Track_Messages,
  /* Data_From_Track_Packets/ */
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg *Data_From_Track_Packets,
  /* Data_From_Speed_and_Supervision/ */
  T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg *Data_From_Speed_and_Supervision,
  /* Cab_In/ */
  cab_ID_T_TIU_Types_Pkg Cab_In,
  /* driver_level_transition_In/ */
  T_LevelTransition_Level_And_Mode_Types_Pkg *driver_level_transition_In,
  /* ERTMS_capabilities_In/ */
  T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *ERTMS_capabilities_In,
  /* Data_from_Track_MASSPGradient/ */
  T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg *Data_from_Track_MASSPGradient,
  /* Data_From_F2_Functions/ */
  T_Data_From_F2_functions_Level_And_Mode_Types_Pkg *Data_From_F2_Functions,
  /* Data_From_STM/ */
  T_Data_From_STM_Level_And_Mode_Types_Pkg *Data_From_STM,
  /* MemorizedLevelIn/ */
  M_LEVEL MemorizedLevelIn,
  outC_ManageLevelAndMode *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ManageLevelAndMode_reset(outC_ManageLevelAndMode *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ManageLevelAndMode_init(outC_ManageLevelAndMode *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ManageLevelAndMode_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ManageLevelAndMode.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

