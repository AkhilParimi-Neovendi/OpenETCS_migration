/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "sendBrakesToDMI_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::sendBrakesToDMI/ */
void sendBrakesToDMI_manage_DMI_Output_Pkg(
  /* brakeCommand/ */
  Brake_command_T_TIU_Types_Pkg *brakeCommand,
  /* inSystemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  outC_sendBrakesToDMI_manage_DMI_Output_Pkg *outC)
{
  /* dmi_iconRequest/ */
  static DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg dmi_iconRequest_partial;
  /* dmi_iconRequest/ */
  static DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg _1_dmi_iconRequest_partial;
  /* dmi_iconRequest/ */
  static DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg _2_dmi_iconRequest_partial;
  /* dmi_iconRequest/ */
  static DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg _3_dmi_iconRequest_partial;
  /* brakeCommand/ */
  static Brake_command_T_TIU_Types_Pkg last_brakeCommand;

  kcg_copy_Brake_command_T_TIU_Types_Pkg(
    &last_brakeCommand,
    &outC->mem_brakeCommand);
  kcg_copy_Brake_command_T_TIU_Types_Pkg(&outC->mem_brakeCommand, brakeCommand);
  kcg_copy_Brake_command_T_TIU_Types_Pkg(&outC->_L32, &last_brakeCommand);
  kcg_copy_Brake_command_T_TIU_Types_Pkg(&outC->_L3, brakeCommand);
  outC->_L30 = outC->_L3.m_servicebrake_cm;
  outC->_L29 = release_brake_TIU_Types_Pkg;
  outC->_L28 = outC->_L29 == outC->_L30;
  outC->_L10 = outC->_L3.m_emergencybrake_cm;
  outC->_L9 = outC->_L10 == outC->_L29;
  outC->_L31 = outC->_L9 | outC->_L28;
  outC->_L5 = outC->_L3.m_emergencybrake_cm;
  outC->_L7 = apply_brake_TIU_Types_Pkg;
  outC->_L6 = outC->_L7 == outC->_L5;
  outC->_L24 = outC->_L3.m_servicebrake_cm;
  outC->_L26 = apply_brake_TIU_Types_Pkg;
  outC->_L25 = outC->_L26 == outC->_L24;
  outC->_L27 = outC->_L25 | outC->_L6;
  kcg_copy_Brake_command_T_TIU_Types_Pkg(&outC->_L14, brakeCommand);
  outC->_L19 = !kcg_comp_Brake_command_T_TIU_Types_Pkg(&outC->_L14, &outC->_L32);
  outC->changeBrakeCommand = outC->_L19;
  outC->_L23 = outC->changeBrakeCommand;
  outC->_L22 = outC->changeBrakeCommand;
  outC->_L4 = outC->_L3.valid;
  outC->_L8 = outC->_L22 & outC->_L27 & outC->_L4;
  outC->applyBrake = outC->_L8;
  outC->IfBlock1_clock = outC->applyBrake;
  outC->_L12 = outC->_L4 & outC->_L23 & outC->_L31;
  outC->releaseBrake = outC->_L12;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L3_then_IfBlock1 = inSystemTime;
    kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L1_then_IfBlock1,
      (DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cIconRequestEB_manage_DMI_Output_Pkg);
    kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L2_then_IfBlock1,
      &outC->_L1_then_IfBlock1);
    if (kcg_true) {
      outC->_L2_then_IfBlock1.system_clock = outC->_L3_then_IfBlock1;
    }
    kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
      &dmi_iconRequest_partial,
      &outC->_L2_then_IfBlock1);
    kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->dmi_iconRequest,
      &dmi_iconRequest_partial);
  }
  else {
    outC->else_clock_IfBlock1 = outC->releaseBrake;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L3_then_else_IfBlock1 = inSystemTime;
      kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L4_then_else_IfBlock1,
        (DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cIconClearEB_manage_DMI_Output_Pkg);
      kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L5_then_else_IfBlock1,
        &outC->_L4_then_else_IfBlock1);
      if (kcg_true) {
        outC->_L5_then_else_IfBlock1.system_clock = outC->_L3_then_else_IfBlock1;
      }
      kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
        &_3_dmi_iconRequest_partial,
        &outC->_L5_then_else_IfBlock1);
      kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
        &_1_dmi_iconRequest_partial,
        &_3_dmi_iconRequest_partial);
    }
    else {
      kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->_L1_else_else_IfBlock1,
        (DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cEmptyIconRequest_manage_DMI_Output_Pkg);
      kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
        &_2_dmi_iconRequest_partial,
        &outC->_L1_else_else_IfBlock1);
      kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
        &_1_dmi_iconRequest_partial,
        &_2_dmi_iconRequest_partial);
    }
    kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->dmi_iconRequest,
      &_1_dmi_iconRequest_partial);
  }
}

#ifndef KCG_USER_DEFINED_INIT
void sendBrakesToDMI_init_manage_DMI_Output_Pkg(
  outC_sendBrakesToDMI_manage_DMI_Output_Pkg *outC)
{
  outC->_L32.valid = kcg_true;
  outC->_L32.m_servicebrake_cm = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L32.m_emergencybrake_cm = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L31 = kcg_true;
  outC->_L28 = kcg_true;
  outC->_L29 = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L30 = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L27 = kcg_true;
  outC->_L24 = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L25 = kcg_true;
  outC->_L26 = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L23 = kcg_true;
  outC->_L22 = kcg_true;
  outC->_L19 = kcg_true;
  outC->_L14.valid = kcg_true;
  outC->_L14.m_servicebrake_cm = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L14.m_emergencybrake_cm = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L9 = kcg_true;
  outC->_L10 = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L12 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L7 = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L6 = kcg_true;
  outC->_L5 = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L4 = kcg_true;
  outC->_L3.valid = kcg_true;
  outC->_L3.m_servicebrake_cm = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L3.m_emergencybrake_cm = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->changeBrakeCommand = kcg_true;
  outC->releaseBrake = kcg_true;
  outC->applyBrake = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L3_then_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L4_then_else_IfBlock1.valid = kcg_true;
  outC->_L4_then_else_IfBlock1.system_clock = kcg_lit_int64(0);
  outC->_L4_then_else_IfBlock1.DMI_m_icon_control_flag =
    show_icon_in_area_DMI_Types_Pkg;
  outC->_L4_then_else_IfBlock1.DMI_m_icon_flashing_freq = kcg_lit_float64(0.0);
  outC->_L4_then_else_IfBlock1.DMI_nid_icon_group = level_symbol_DMI_Types_Pkg;
  outC->_L4_then_else_IfBlock1.DMI_nid_icon_rank = kcg_lit_int64(0);
  outC->_L4_then_else_IfBlock1.DMI_nid_area_group = A_DMI_Types_Pkg;
  outC->_L4_then_else_IfBlock1.DMI_nid_area_rank = kcg_lit_int64(0);
  outC->_L4_then_else_IfBlock1.DMI_nid_icon_identifier = kcg_lit_int64(0);
  outC->_L5_then_else_IfBlock1.valid = kcg_true;
  outC->_L5_then_else_IfBlock1.system_clock = kcg_lit_int64(0);
  outC->_L5_then_else_IfBlock1.DMI_m_icon_control_flag =
    show_icon_in_area_DMI_Types_Pkg;
  outC->_L5_then_else_IfBlock1.DMI_m_icon_flashing_freq = kcg_lit_float64(0.0);
  outC->_L5_then_else_IfBlock1.DMI_nid_icon_group = level_symbol_DMI_Types_Pkg;
  outC->_L5_then_else_IfBlock1.DMI_nid_icon_rank = kcg_lit_int64(0);
  outC->_L5_then_else_IfBlock1.DMI_nid_area_group = A_DMI_Types_Pkg;
  outC->_L5_then_else_IfBlock1.DMI_nid_area_rank = kcg_lit_int64(0);
  outC->_L5_then_else_IfBlock1.DMI_nid_icon_identifier = kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.valid = kcg_true;
  outC->_L1_else_else_IfBlock1.system_clock = kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.DMI_m_icon_control_flag =
    show_icon_in_area_DMI_Types_Pkg;
  outC->_L1_else_else_IfBlock1.DMI_m_icon_flashing_freq = kcg_lit_float64(0.0);
  outC->_L1_else_else_IfBlock1.DMI_nid_icon_group = level_symbol_DMI_Types_Pkg;
  outC->_L1_else_else_IfBlock1.DMI_nid_icon_rank = kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.DMI_nid_area_group = A_DMI_Types_Pkg;
  outC->_L1_else_else_IfBlock1.DMI_nid_area_rank = kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.DMI_nid_icon_identifier = kcg_lit_int64(0);
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1.valid = kcg_true;
  outC->_L1_then_IfBlock1.system_clock = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.DMI_m_icon_control_flag =
    show_icon_in_area_DMI_Types_Pkg;
  outC->_L1_then_IfBlock1.DMI_m_icon_flashing_freq = kcg_lit_float64(0.0);
  outC->_L1_then_IfBlock1.DMI_nid_icon_group = level_symbol_DMI_Types_Pkg;
  outC->_L1_then_IfBlock1.DMI_nid_icon_rank = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.DMI_nid_area_group = A_DMI_Types_Pkg;
  outC->_L1_then_IfBlock1.DMI_nid_area_rank = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.DMI_nid_icon_identifier = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.valid = kcg_true;
  outC->_L2_then_IfBlock1.system_clock = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.DMI_m_icon_control_flag =
    show_icon_in_area_DMI_Types_Pkg;
  outC->_L2_then_IfBlock1.DMI_m_icon_flashing_freq = kcg_lit_float64(0.0);
  outC->_L2_then_IfBlock1.DMI_nid_icon_group = level_symbol_DMI_Types_Pkg;
  outC->_L2_then_IfBlock1.DMI_nid_icon_rank = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.DMI_nid_area_group = A_DMI_Types_Pkg;
  outC->_L2_then_IfBlock1.DMI_nid_area_rank = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.DMI_nid_icon_identifier = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1 = kcg_lit_int64(0);
  outC->dmi_iconRequest.valid = kcg_true;
  outC->dmi_iconRequest.system_clock = kcg_lit_int64(0);
  outC->dmi_iconRequest.DMI_m_icon_control_flag = show_icon_in_area_DMI_Types_Pkg;
  outC->dmi_iconRequest.DMI_m_icon_flashing_freq = kcg_lit_float64(0.0);
  outC->dmi_iconRequest.DMI_nid_icon_group = level_symbol_DMI_Types_Pkg;
  outC->dmi_iconRequest.DMI_nid_icon_rank = kcg_lit_int64(0);
  outC->dmi_iconRequest.DMI_nid_area_group = A_DMI_Types_Pkg;
  outC->dmi_iconRequest.DMI_nid_area_rank = kcg_lit_int64(0);
  outC->dmi_iconRequest.DMI_nid_icon_identifier = kcg_lit_int64(0);
  kcg_copy_Brake_command_T_TIU_Types_Pkg(
    &outC->mem_brakeCommand,
    (Brake_command_T_TIU_Types_Pkg *) &cInitBrakeCommand_manage_DMI_Output_Pkg);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void sendBrakesToDMI_reset_manage_DMI_Output_Pkg(
  outC_sendBrakesToDMI_manage_DMI_Output_Pkg *outC)
{
  kcg_copy_Brake_command_T_TIU_Types_Pkg(
    &outC->mem_brakeCommand,
    (Brake_command_T_TIU_Types_Pkg *) &cInitBrakeCommand_manage_DMI_Output_Pkg);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** sendBrakesToDMI_manage_DMI_Output_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

