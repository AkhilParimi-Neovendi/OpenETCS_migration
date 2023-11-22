/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "handleTraction_output_to_TIU_API_Pkg.h"

/* output_to_TIU_API_Pkg::handleTraction/ */
void handleTraction_output_to_TIU_API_Pkg(
  /* in_train_commands/ */
  Type_I_train_commands_T_TIU_Types_Pkg *in_train_commands,
  /* inModeLevel/ */
  T_Mode_Level_Level_And_Mode_Types_Pkg *inModeLevel,
  outC_handleTraction_output_to_TIU_API_Pkg *outC)
{
  /* tractionCutOffStatus/ */
  M_traction_cutoff_command_T_TIU_Types_Pkg last_tractionCutOffStatus;

  last_tractionCutOffStatus = outC->tractionCutOffStatus;
  outC->_L14 = last_tractionCutOffStatus;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&outC->_L7, inModeLevel);
  /* _L5=(output_to_TIU_API_Pkg::mapModeToTractionCutOff#1)/ */
  mapModeToTractionCutOff_output_to_TIU_API_Pkg(
    &outC->_L7,
    &outC->Context_mapModeToTractionCutOff_1);
  outC->_L5 = outC->Context_mapModeToTractionCutOff_1.tractionCutOff;
  outC->tempTractionCutOffStatus = outC->_L5;
  outC->_L13 = outC->tempTractionCutOffStatus;
  outC->_L10 = outC->tempTractionCutOffStatus;
  outC->_L8 = last_tractionCutOffStatus;
  outC->_L11 = outC->_L8 != outC->_L10;
  /* _L12= */
  if (outC->_L11) {
    outC->_L12 = outC->_L13;
  }
  else {
    outC->_L12 = outC->_L14;
  }
  outC->tractionCutOffStatus = outC->_L12;
  outC->_L21 = outC->tractionCutOffStatus;
  kcg_copy_Type_I_train_commands_T_TIU_Types_Pkg(&outC->_L15, in_train_commands);
  outC->_L16 = outC->_L15.valid;
  outC->_L17 = outC->_L16 | outC->_L11;
  kcg_copy_Type_I_train_commands_T_TIU_Types_Pkg(&outC->_L18, in_train_commands);
  kcg_copy_Type_I_train_commands_T_TIU_Types_Pkg(&outC->_L19, &outC->_L18);
  if (kcg_true) {
    outC->_L19.valid = outC->_L17;
  }
  kcg_copy_Type_I_train_commands_T_TIU_Types_Pkg(&outC->_L20, &outC->_L19);
  if (kcg_true) {
    outC->_L20.m_traction_cutoff_cm = outC->_L21;
  }
  kcg_copy_Type_I_train_commands_T_TIU_Types_Pkg(
    &outC->outTrainCommands,
    &outC->_L20);
}

#ifndef KCG_USER_DEFINED_INIT
void handleTraction_init_output_to_TIU_API_Pkg(
  outC_handleTraction_output_to_TIU_API_Pkg *outC)
{
  outC->_L21 = traction_cutoff_command_not_defined_TIU_Types_Pkg;
  outC->_L20.valid = kcg_true;
  outC->_L20.m_pantograph_cm = pantograph_command_not_defined_TIU_Types_Pkg;
  outC->_L20.m_airtightness_cm = airtightness_command_not_defined_TIU_Types_Pkg;
  outC->_L20.m_mainpowerswitch_cm = open_main_power_swicth_TIU_Types_Pkg;
  outC->_L20.m_traction_cutoff_cm =
    traction_cutoff_command_not_defined_TIU_Types_Pkg;
  outC->_L19.valid = kcg_true;
  outC->_L19.m_pantograph_cm = pantograph_command_not_defined_TIU_Types_Pkg;
  outC->_L19.m_airtightness_cm = airtightness_command_not_defined_TIU_Types_Pkg;
  outC->_L19.m_mainpowerswitch_cm = open_main_power_swicth_TIU_Types_Pkg;
  outC->_L19.m_traction_cutoff_cm =
    traction_cutoff_command_not_defined_TIU_Types_Pkg;
  outC->_L18.valid = kcg_true;
  outC->_L18.m_pantograph_cm = pantograph_command_not_defined_TIU_Types_Pkg;
  outC->_L18.m_airtightness_cm = airtightness_command_not_defined_TIU_Types_Pkg;
  outC->_L18.m_mainpowerswitch_cm = open_main_power_swicth_TIU_Types_Pkg;
  outC->_L18.m_traction_cutoff_cm =
    traction_cutoff_command_not_defined_TIU_Types_Pkg;
  outC->_L17 = kcg_true;
  outC->_L15.valid = kcg_true;
  outC->_L15.m_pantograph_cm = pantograph_command_not_defined_TIU_Types_Pkg;
  outC->_L15.m_airtightness_cm = airtightness_command_not_defined_TIU_Types_Pkg;
  outC->_L15.m_mainpowerswitch_cm = open_main_power_swicth_TIU_Types_Pkg;
  outC->_L15.m_traction_cutoff_cm =
    traction_cutoff_command_not_defined_TIU_Types_Pkg;
  outC->_L16 = kcg_true;
  outC->_L14 = traction_cutoff_command_not_defined_TIU_Types_Pkg;
  outC->_L13 = traction_cutoff_command_not_defined_TIU_Types_Pkg;
  outC->_L12 = traction_cutoff_command_not_defined_TIU_Types_Pkg;
  outC->_L11 = kcg_true;
  outC->_L10 = traction_cutoff_command_not_defined_TIU_Types_Pkg;
  outC->_L8 = traction_cutoff_command_not_defined_TIU_Types_Pkg;
  outC->_L7.compatibleModeAndLevel = kcg_true;
  outC->_L7.level = M_LEVEL_Level_0;
  outC->_L7.newLevel = kcg_true;
  outC->_L7.Mode = M_MODE_Full_Supervision;
  outC->_L7.newMode = kcg_true;
  outC->_L5 = traction_cutoff_command_not_defined_TIU_Types_Pkg;
  outC->tempTractionCutOffStatus =
    traction_cutoff_command_not_defined_TIU_Types_Pkg;
  outC->outTrainCommands.valid = kcg_true;
  outC->outTrainCommands.m_pantograph_cm =
    pantograph_command_not_defined_TIU_Types_Pkg;
  outC->outTrainCommands.m_airtightness_cm =
    airtightness_command_not_defined_TIU_Types_Pkg;
  outC->outTrainCommands.m_mainpowerswitch_cm =
    open_main_power_swicth_TIU_Types_Pkg;
  outC->outTrainCommands.m_traction_cutoff_cm =
    traction_cutoff_command_not_defined_TIU_Types_Pkg;
  /* _L5=(output_to_TIU_API_Pkg::mapModeToTractionCutOff#1)/ */
  mapModeToTractionCutOff_init_output_to_TIU_API_Pkg(
    &outC->Context_mapModeToTractionCutOff_1);
  outC->tractionCutOffStatus = traction_cutoff_command_not_defined_TIU_Types_Pkg;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void handleTraction_reset_output_to_TIU_API_Pkg(
  outC_handleTraction_output_to_TIU_API_Pkg *outC)
{
  /* _L5=(output_to_TIU_API_Pkg::mapModeToTractionCutOff#1)/ */
  mapModeToTractionCutOff_reset_output_to_TIU_API_Pkg(
    &outC->Context_mapModeToTractionCutOff_1);
  outC->tractionCutOffStatus = traction_cutoff_command_not_defined_TIU_Types_Pkg;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** handleTraction_output_to_TIU_API_Pkg.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

