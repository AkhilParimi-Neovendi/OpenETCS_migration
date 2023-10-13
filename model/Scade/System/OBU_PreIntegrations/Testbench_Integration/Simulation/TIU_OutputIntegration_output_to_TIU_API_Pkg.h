/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */
#ifndef _TIU_OutputIntegration_output_to_TIU_API_Pkg_H_
#define _TIU_OutputIntegration_output_to_TIU_API_Pkg_H_

#include "kcg_types.h"
#include "handleTraction_output_to_TIU_API_Pkg.h"
#include "manageTIU_output_output_to_TIU_API_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TIU_Output_msg_API_TIU_Pkg /* outTIU_to_API/ */ outTIU_to_API;
  TIU_commandStatus_T_TIU_Types_Pkg /* outCommandStatusforEVC/ */ outCommandStatusforEVC;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_manageTIU_output_output_to_TIU_API_Pkg /* _L1=(output_to_TIU_API_Pkg::manageTIU_output#1)/ */ Context_manageTIU_output_1;
  outC_handleTraction_output_to_TIU_API_Pkg /* _L12=(output_to_TIU_API_Pkg::handleTraction#1)/ */ Context_handleTraction_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  TIU_commandStatus_T_TIU_Types_Pkg /* _L2/ */ _L2;
  TIU_Output_msg_API_TIU_Pkg /* _L1/ */ _L1;
  Isolation_Status_T_TIU_Types_Pkg /* _L3/ */ _L3;
  Brake_command_T_TIU_Types_Pkg /* _L4/ */ _L4;
  Brake_inhibition_command_T_TIU_Types_Pkg /* _L6/ */ _L6;
  Type_I_train_commands_T_TIU_Types_Pkg /* _L7/ */ _L7;
  Change_traction_system_T_TIU_Types_Pkg /* _L8/ */ _L8;
  Passenger_door_control_info_T_TIU_Types_Pkg /* _L9/ */ _L9;
  Change_of_allowed_current_consumption_T_TIU_Types_Pkg /* _L10/ */ _L10;
  Type_I_train_commands_T_TIU_Types_Pkg /* _L12/ */ _L12;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* _L13/ */ _L13;
} outC_TIU_OutputIntegration_output_to_TIU_API_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* output_to_TIU_API_Pkg::TIU_OutputIntegration/ */
extern void TIU_OutputIntegration_output_to_TIU_API_Pkg(
  /* in_IsolationStatus/ */
  Isolation_Status_T_TIU_Types_Pkg *in_IsolationStatus,
  /* SpeedSup_brakeCommand/ */
  Brake_command_T_TIU_Types_Pkg *SpeedSup_brakeCommand,
  /* in_brake_inhibition/ */
  Brake_inhibition_command_T_TIU_Types_Pkg *in_brake_inhibition,
  /* in_train_commands/ */
  Type_I_train_commands_T_TIU_Types_Pkg *in_train_commands,
  /* in_change_traction_system/ */
  Change_traction_system_T_TIU_Types_Pkg *in_change_traction_system,
  /* in_passenger_door_control_info/ */
  Passenger_door_control_info_T_TIU_Types_Pkg *in_passenger_door_control_info,
  /* in_change_of_allowed_current_consumption/ */
  Change_of_allowed_current_consumption_T_TIU_Types_Pkg *in_change_of_allowed_current_consumption,
  /* inModeAndLevel/ */
  T_Mode_Level_Level_And_Mode_Types_Pkg *inModeAndLevel,
  outC_TIU_OutputIntegration_output_to_TIU_API_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TIU_OutputIntegration_reset_output_to_TIU_API_Pkg(
  outC_TIU_OutputIntegration_output_to_TIU_API_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TIU_OutputIntegration_init_output_to_TIU_API_Pkg(
  outC_TIU_OutputIntegration_output_to_TIU_API_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_handleTraction_output_to_TIU_API_Pkg Context_handleTraction_1;
  SV_manageTIU_output_output_to_TIU_API_Pkg Context_manageTIU_output_1;
} SV_TIU_OutputIntegration_output_to_TIU_API_Pkg;

extern void kcg_save_SV_TIU_OutputIntegration_output_to_TIU_API_Pkg(
  SV_TIU_OutputIntegration_output_to_TIU_API_Pkg *SV,
  outC_TIU_OutputIntegration_output_to_TIU_API_Pkg *outC);
extern void kcg_load_SV_TIU_OutputIntegration_output_to_TIU_API_Pkg(
  outC_TIU_OutputIntegration_output_to_TIU_API_Pkg *outC,
  SV_TIU_OutputIntegration_output_to_TIU_API_Pkg *SV);



#endif /* _TIU_OutputIntegration_output_to_TIU_API_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TIU_OutputIntegration_output_to_TIU_API_Pkg.h
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */

