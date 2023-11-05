/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _manageTIU_output_output_to_TIU_API_Pkg_H_
#define _manageTIU_output_output_to_TIU_API_Pkg_H_

#include "kcg_types.h"
#include "handleBrakeCommand_output_to_TIU_API_Pkg.h"
#include "getTIUStatusFromCommand_output_to_TIU_API_Pkg.h"

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
  outC_getTIUStatusFromCommand_output_to_TIU_API_Pkg /* _L24=(output_to_TIU_API_Pkg::getTIUStatusFromCommand#1)/ */ Context_getTIUStatusFromCommand_1;
  outC_handleBrakeCommand_output_to_TIU_API_Pkg /* _L25=(output_to_TIU_API_Pkg::handleBrakeCommand#1)/ */ Context_handleBrakeCommand_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Isolation_Status_T_TIU_Types_Pkg /* _L1/ */ _L1;
  Brake_command_T_TIU_Types_Pkg /* _L2/ */ _L2;
  Brake_inhibition_command_T_TIU_Types_Pkg /* _L3/ */ _L3;
  Type_I_train_commands_T_TIU_Types_Pkg /* _L4/ */ _L4;
  Change_traction_system_T_TIU_Types_Pkg /* _L5/ */ _L5;
  Passenger_door_control_info_T_TIU_Types_Pkg /* _L6/ */ _L6;
  Change_of_allowed_current_consumption_T_TIU_Types_Pkg /* _L7/ */ _L7;
  TIU_Output_msg_API_TIU_Pkg /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  Message_EVC_to_Train_Interface_T_TIU_Types_Pkg /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L12/ */ _L12;
  kcg_bool /* _L15/ */ _L15;
  kcg_bool /* _L17/ */ _L17;
  kcg_bool /* _L18/ */ _L18;
  kcg_bool /* _L20/ */ _L20;
  kcg_bool /* _L21/ */ _L21;
  Isolation_Status_T_TIU_Types_Pkg /* _L22/ */ _L22;
  Brake_command_T_TIU_Types_Pkg /* _L23/ */ _L23;
  TIU_commandStatus_T_TIU_Types_Pkg /* _L24/ */ _L24;
  Brake_command_T_TIU_Types_Pkg /* _L25/ */ _L25;
} outC_manageTIU_output_output_to_TIU_API_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* output_to_TIU_API_Pkg::manageTIU_output/ */
extern void manageTIU_output_output_to_TIU_API_Pkg(
  /* in_IsolationStatus/ */
  Isolation_Status_T_TIU_Types_Pkg *in_IsolationStatus,
  /* in_brake_command/ */
  Brake_command_T_TIU_Types_Pkg *in_brake_command,
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
  outC_manageTIU_output_output_to_TIU_API_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void manageTIU_output_reset_output_to_TIU_API_Pkg(
  outC_manageTIU_output_output_to_TIU_API_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void manageTIU_output_init_output_to_TIU_API_Pkg(
  outC_manageTIU_output_output_to_TIU_API_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_handleBrakeCommand_output_to_TIU_API_Pkg Context_handleBrakeCommand_1;
} SV_manageTIU_output_output_to_TIU_API_Pkg;

extern void kcg_save_SV_manageTIU_output_output_to_TIU_API_Pkg(
  SV_manageTIU_output_output_to_TIU_API_Pkg *SV,
  outC_manageTIU_output_output_to_TIU_API_Pkg *outC);
extern void kcg_load_SV_manageTIU_output_output_to_TIU_API_Pkg(
  outC_manageTIU_output_output_to_TIU_API_Pkg *outC,
  SV_manageTIU_output_output_to_TIU_API_Pkg *SV);



#endif /* _manageTIU_output_output_to_TIU_API_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** manageTIU_output_output_to_TIU_API_Pkg.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

