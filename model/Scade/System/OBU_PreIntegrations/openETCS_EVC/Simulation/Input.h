/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _Input_H_
#define _Input_H_

#include "kcg_types.h"
#include "InputTrackManagement_InputManagement.h"
#include "_223_InputSpeedAndSupervision_InputManagement.h"
#include "InputLocalisation_InputManagement.h"
#include "InputDMI_InputManagement.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* train_standstill/ */ train_standstill;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* driver_level_transition/ */ driver_level_transition;
  kcg_bool /* levelAck/ */ levelAck;
  trainPosition_T_TrainPosition_Types_Pck /* trainPosition/ */ trainPosition;
  T_ERTMS_capabilities_Level_And_Mode_Types_Pkg /* ERTMS_capabilities/ */ ERTMS_capabilities;
  T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg /* Data_From_Track_to_Level/ */ Data_From_Track_to_Level;
  M_LEVEL /* MemorizedLevel/ */ MemorizedLevel;
  cab_ID_T_TIU_Types_Pkg /* Cab/ */ Cab;
  T_Data_From_DMI_Level_And_Mode_Types_Pkg /* Data_From_DMI_To_Mode/ */ Data_From_DMI_To_Mode;
  T_Data_From_F2_functions_Level_And_Mode_Types_Pkg /* Data_From_F2_Functions_to_Mode/ */ Data_From_F2_Functions_to_Mode;
  T_Data_From_Localisation_Level_And_Mode_Types_Pkg /* Data_From_Localisation_To_Mode/ */ Data_From_Localisation_To_Mode;
  T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg /* Data_From_Speed_and_Supervision_To_Mode/ */ Data_From_Speed_and_Supervision_To_Mode;
  T_Data_From_STM_Level_And_Mode_Types_Pkg /* Data_From_STM_to_Mode/ */ Data_From_STM_to_Mode;
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg /* Data_From_TIU_To_Mode/ */ Data_From_TIU_To_Mode;
  T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg /* Data_From_Track_To_Mode/ */ Data_From_Track_To_Mode;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_InputDMI_InputManagement /* _L72=(InputManagement::InputDMI#1)/ */ Context_InputDMI_1;
  outC_InputLocalisation_InputManagement /* _L67=(InputManagement::InputLocalisation#1)/ */ Context_InputLocalisation_1;
  outC__223_InputSpeedAndSupervision_InputManagement /* _L57=(InputManagement::InputSpeedAndSupervision#1)/ */ Context_InputSpeedAndSupervision_1;
  outC_InputTrackManagement_InputManagement /* _L76=(InputManagement::InputTrackManagement#1)/ */ Context_InputTrackManagement_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg /* _L48/ */ _L48;
  cab_ID_T_TIU_Types_Pkg /* _L49/ */ _L49;
  T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg /* _L57/ */ _L57;
  T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg /* _L64/ */ _L64;
  T_Data_From_Localisation_Level_And_Mode_Types_Pkg /* _L65/ */ _L65;
  trainPosition_T_TrainPosition_Types_Pck /* _L66/ */ _L66;
  kcg_bool /* _L67/ */ _L67;
  T_Data_From_Localisation_Level_And_Mode_Types_Pkg /* _L68/ */ _L68;
  DMI_To_Modes_T_DMI_Types_Pkg /* _L69/ */ _L69;
  T_Data_From_DMI_Level_And_Mode_Types_Pkg /* _L70/ */ _L70;
  kcg_bool /* _L71/ */ _L71;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* _L72/ */ _L72;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* _L74/ */ _L74;
  T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg /* _L76/ */ _L76;
  T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg /* _L84/ */ _L84;
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg /* _L85/ */ _L85;
  T_ERTMS_capabilities_Level_And_Mode_Types_Pkg /* _L90/ */ _L90;
  T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg /* _L95/ */ _L95;
  T_Data_From_F2_functions_Level_And_Mode_Types_Pkg /* _L96/ */ _L96;
  T_Data_From_STM_Level_And_Mode_Types_Pkg /* _L97/ */ _L97;
  T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg /* _L100/ */ _L100;
  M_LEVEL /* _L101/ */ _L101;
} outC_Input;

/* ===========  node initialization and cycle functions  =========== */
/* Input/ */
extern void Input(
  /* Data_From_DMI/ */
  DMI_To_Modes_T_DMI_Types_Pkg *Data_From_DMI,
  /* Data_From_TIU/ */
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *Data_From_TIU,
  /* Data_From_Track_Messages/ */
  T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg *Data_From_Track_Messages,
  /* Data_From_Track_Packets/ */
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg *Data_From_Track_Packets,
  /* Data_From_STM/ */
  T_Data_From_STM_Level_And_Mode_Types_Pkg *Data_From_STM,
  /* Data_From_Localisation/ */
  T_Data_From_Localisation_Level_And_Mode_Types_Pkg *Data_From_Localisation,
  /* Data_From_Speed_and_Supervision/ */
  T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg *Data_From_Speed_and_Supervision,
  /* Data_From_F2_Functions/ */
  T_Data_From_F2_functions_Level_And_Mode_Types_Pkg *Data_From_F2_Functions,
  /* Cab_In/ */
  cab_ID_T_TIU_Types_Pkg Cab_In,
  /* driver_level_transition_In/ */
  T_LevelTransition_Level_And_Mode_Types_Pkg *driver_level_transition_In,
  /* ERTMS_capabilities_In/ */
  T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *ERTMS_capabilities_In,
  /* Data_From_Track_MASSPGradient/ */
  T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg *Data_From_Track_MASSPGradient,
  /* MemorizedLevelIn/ */
  M_LEVEL MemorizedLevelIn,
  outC_Input *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Input_reset(outC_Input *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Input_init(outC_Input *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Input_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Input.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

