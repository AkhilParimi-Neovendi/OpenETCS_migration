/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _sendBrakesToDMI_manage_DMI_Output_Pkg_H_
#define _sendBrakesToDMI_manage_DMI_Output_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg /* dmi_iconRequest/ */ dmi_iconRequest;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  Brake_command_T_TIU_Types_Pkg /* brakeCommand/ */ mem_brakeCommand;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  T_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg /* IfBlock1:else:else:_L1/ */ _L1_else_else_IfBlock1;
  DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg /* IfBlock1:else:then:_L5/ */ _L5_then_else_IfBlock1;
  DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg /* IfBlock1:else:then:_L4/ */ _L4_then_else_IfBlock1;
  T_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:else:then:_L3/ */ _L3_then_else_IfBlock1;
  kcg_bool /* applyBrake/ */ applyBrake;
  kcg_bool /* releaseBrake/ */ releaseBrake;
  kcg_bool /* changeBrakeCommand/ */ changeBrakeCommand;
  Brake_command_T_TIU_Types_Pkg /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  M_brake_signal_command_T_TIU_Types_Pkg /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  M_brake_signal_command_T_TIU_Types_Pkg /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L12/ */ _L12;
  M_brake_signal_command_T_TIU_Types_Pkg /* _L10/ */ _L10;
  kcg_bool /* _L9/ */ _L9;
  Brake_command_T_TIU_Types_Pkg /* _L14/ */ _L14;
  kcg_bool /* _L19/ */ _L19;
  kcg_bool /* _L22/ */ _L22;
  kcg_bool /* _L23/ */ _L23;
  M_brake_signal_command_T_TIU_Types_Pkg /* _L26/ */ _L26;
  kcg_bool /* _L25/ */ _L25;
  M_brake_signal_command_T_TIU_Types_Pkg /* _L24/ */ _L24;
  kcg_bool /* _L27/ */ _L27;
  M_brake_signal_command_T_TIU_Types_Pkg /* _L30/ */ _L30;
  M_brake_signal_command_T_TIU_Types_Pkg /* _L29/ */ _L29;
  kcg_bool /* _L28/ */ _L28;
  kcg_bool /* _L31/ */ _L31;
  Brake_command_T_TIU_Types_Pkg /* _L32/ */ _L32;
} outC_sendBrakesToDMI_manage_DMI_Output_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* manage_DMI_Output_Pkg::sendBrakesToDMI/ */
extern void sendBrakesToDMI_manage_DMI_Output_Pkg(
  /* brakeCommand/ */
  Brake_command_T_TIU_Types_Pkg *brakeCommand,
  /* inSystemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  outC_sendBrakesToDMI_manage_DMI_Output_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void sendBrakesToDMI_reset_manage_DMI_Output_Pkg(
  outC_sendBrakesToDMI_manage_DMI_Output_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void sendBrakesToDMI_init_manage_DMI_Output_Pkg(
  outC_sendBrakesToDMI_manage_DMI_Output_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  Brake_command_T_TIU_Types_Pkg /* brakeCommand/ */ Context_mem_brakeCommand;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
} SV_sendBrakesToDMI_manage_DMI_Output_Pkg;

extern void kcg_save_SV_sendBrakesToDMI_manage_DMI_Output_Pkg(
  SV_sendBrakesToDMI_manage_DMI_Output_Pkg *SV,
  outC_sendBrakesToDMI_manage_DMI_Output_Pkg *outC);
extern void kcg_load_SV_sendBrakesToDMI_manage_DMI_Output_Pkg(
  outC_sendBrakesToDMI_manage_DMI_Output_Pkg *outC,
  SV_sendBrakesToDMI_manage_DMI_Output_Pkg *SV);



#endif /* _sendBrakesToDMI_manage_DMI_Output_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** sendBrakesToDMI_manage_DMI_Output_Pkg.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

