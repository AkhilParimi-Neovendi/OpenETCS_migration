/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "doEntryRequest_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::doEntryRequest/ */
void doEntryRequest_manage_DMI_Output_Pkg(
  /* dmi_entryRequest/ */
  DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_entryRequest,
  /* inSystemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  outC_doEntryRequest_manage_DMI_Output_Pkg *outC)
{
  /* new_menuRequest/ */
  DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg new_menuRequest_partial;
  /* sendTrainDataToDMI/ */
  kcg_bool sendTrainDataToDMI_partial;
  /* outLevelsNeeded/ */
  kcg_bool outLevelsNeeded_partial;
  /* new_menuRequest/ */
  DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg _1_new_menuRequest_partial;
  /* sendTrainDataToDMI/ */
  kcg_bool _2_sendTrainDataToDMI_partial;
  /* outLevelsNeeded/ */
  kcg_bool _3_outLevelsNeeded_partial;

  kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L1,
    dmi_entryRequest);
  /* _L4=(manage_DMI_Output_Pkg::mapEntryForLevel#1)/ */
  mapEntryForLevel_manage_DMI_Output_Pkg(
    &outC->_L1,
    &outC->Context_mapEntryForLevel_1);
  kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L4,
    &outC->Context_mapEntryForLevel_1.new_entryRequest);
  kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->new_entryRequest,
    &outC->_L4);
  outC->_L2 = outC->_L1.valid;
  outC->valid = outC->_L2;
  outC->IfBlock1_clock = outC->valid;
  if (outC->IfBlock1_clock) {
    outC->_L22_then_IfBlock1 = Enter_revalidate_ETCS_level_DMI_Types_Pkg;
  }
  else {
    _3_outLevelsNeeded_partial = kcg_false;
    _2_sendTrainDataToDMI_partial = kcg_false;
    kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &_1_new_menuRequest_partial,
      (DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cNoMenu_manage_DMI_Output_Pkg);
  }
  outC->_L3 = outC->_L1.entry_request;
  outC->entry = outC->_L3;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L20_then_IfBlock1 = outC->entry;
    outC->_L21_then_IfBlock1 = outC->_L20_then_IfBlock1 == outC->_L22_then_IfBlock1;
    outLevelsNeeded_partial = outC->_L21_then_IfBlock1;
    kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L19_then_IfBlock1,
      (DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cMenuLevel_manage_DMI_Output_Pkg);
    outC->_L17_then_IfBlock1 = kcg_false;
    outC->_L15_then_IfBlock1 = kcg_true;
    outC->_L9_then_IfBlock1 = outC->entry;
    /* IfBlock1:then:_L14= */
    switch (outC->_L9_then_IfBlock1) {
      case Validate_train_data_DMI_Types_Pkg :
        outC->_L14_then_IfBlock1 = outC->_L15_then_IfBlock1;
        break;
      case Enter_revalidate_ETCS_level_DMI_Types_Pkg :
        outC->_L14_then_IfBlock1 = outC->_L15_then_IfBlock1;
        break;
      case Enter_revalidate_driver_identifier_DMI_Types_Pkg :
        outC->_L14_then_IfBlock1 = outC->_L15_then_IfBlock1;
        break;
      default :
        outC->_L14_then_IfBlock1 = outC->_L17_then_IfBlock1;
        break;
    }
    sendTrainDataToDMI_partial = outC->_L14_then_IfBlock1;
    outC->_L7_then_IfBlock1 = inSystemTime;
    kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L4_then_IfBlock1,
      (DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cMenuTrainData_manage_DMI_Output_Pkg);
    kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L5_then_IfBlock1,
      (DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cMenuStart_manage_DMI_Output_Pkg);
    kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L3_then_IfBlock1,
      (DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cNoMenu_manage_DMI_Output_Pkg);
    outC->_L2_then_IfBlock1 = outC->entry;
    /* IfBlock1:then:_L1= */
    switch (outC->_L2_then_IfBlock1) {
      case Validate_train_data_DMI_Types_Pkg :
        kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
          &outC->_L1_then_IfBlock1,
          &outC->_L4_then_IfBlock1);
        break;
      case Enter_revalidate_ETCS_level_DMI_Types_Pkg :
        kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
          &outC->_L1_then_IfBlock1,
          &outC->_L19_then_IfBlock1);
        break;
      case Show_main_window_DMI_Types_Pkg :
        kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
          &outC->_L1_then_IfBlock1,
          &outC->_L5_then_IfBlock1);
        break;
      default :
        kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
          &outC->_L1_then_IfBlock1,
          &outC->_L3_then_IfBlock1);
        break;
    }
    kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L6_then_IfBlock1,
      &outC->_L1_then_IfBlock1);
    if (kcg_true) {
      outC->_L6_then_IfBlock1.system_clock = outC->_L7_then_IfBlock1;
    }
    kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &new_menuRequest_partial,
      &outC->_L6_then_IfBlock1);
    kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->new_menuRequest,
      &new_menuRequest_partial);
    outC->sendTrainDataToDMI = sendTrainDataToDMI_partial;
    outC->outLevelsNeeded = outLevelsNeeded_partial;
  }
  else {
    kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->new_menuRequest,
      &_1_new_menuRequest_partial);
    outC->sendTrainDataToDMI = _2_sendTrainDataToDMI_partial;
    outC->outLevelsNeeded = _3_outLevelsNeeded_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void doEntryRequest_init_manage_DMI_Output_Pkg(
  outC_doEntryRequest_manage_DMI_Output_Pkg *outC)
{
  outC->_L4.valid = kcg_true;
  outC->_L4.system_clock = kcg_lit_int32(0);
  outC->_L4.entry_request = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->_L3 = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->_L2 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.system_clock = kcg_lit_int32(0);
  outC->_L1.entry_request = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->entry = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->valid = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_then_IfBlock1.valid = kcg_true;
  outC->_L1_then_IfBlock1.system_clock = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.available_menu.Menu_button_start_of_mission = kcg_true;
  outC->_L1_then_IfBlock1.available_menu.Menu_button_shunting = kcg_true;
  outC->_L1_then_IfBlock1.available_menu.Menu_button_shunting_exit = kcg_true;
  outC->_L1_then_IfBlock1.available_menu.Menu_button_non_leading = kcg_true;
  outC->_L1_then_IfBlock1.available_menu.Menu_button_exit_non_leading = kcg_true;
  outC->_L1_then_IfBlock1.available_menu.Menu_button_maintain_shunting = kcg_true;
  outC->_L1_then_IfBlock1.available_menu.Menu_button_driver_ID = kcg_true;
  outC->_L1_then_IfBlock1.available_menu.Menu_button_train_running_number =
    kcg_true;
  outC->_L1_then_IfBlock1.available_menu.Menu_button_ETCS_level = kcg_true;
  outC->_L1_then_IfBlock1.available_menu.Menu_button_train_data_modification =
    kcg_true;
  outC->_L1_then_IfBlock1.available_menu.Menu_button_train_data_view = kcg_true;
  outC->_L1_then_IfBlock1.available_menu.Menu_button_staff_responsible_data =
    kcg_true;
  outC->_L1_then_IfBlock1.available_menu.Menu_button_language_selection =
    kcg_true;
  outC->_L1_then_IfBlock1.available_menu.Menu_button_override_EOA = kcg_true;
  outC->_L1_then_IfBlock1.available_menu.Menu_button_override_route_suitability =
    kcg_true;
  outC->_L1_then_IfBlock1.available_menu.Menu_button_adhesion_factor = kcg_true;
  outC->_L1_then_IfBlock1.available_menu.Menu_button_system_version = kcg_true;
  outC->_L1_then_IfBlock1.available_menu.Menu_button_volume = kcg_true;
  outC->_L1_then_IfBlock1.available_menu.Menu_button_luminance = kcg_true;
  outC->_L1_then_IfBlock1.available_menu.Menu_button_train_integrity = kcg_true;
  outC->_L1_then_IfBlock1.available_menu.Menu_button_isolation = kcg_true;
  outC->_L1_then_IfBlock1.available_menu.Show_hourglass = kcg_true;
  outC->_L1_then_IfBlock1.available_menu.Menu_button_use_short_number = kcg_true;
  outC->_L1_then_IfBlock1.available_menu.Menu_button_enter_RBC_data = kcg_true;
  outC->_L1_then_IfBlock1.available_menu.Menu_button_radio_network_ID = kcg_true;
  outC->_L1_then_IfBlock1.available_menu.Menu_button_contact_last_RBC = kcg_true;
  outC->_L1_then_IfBlock1.available_menu.Button_switch_for_train_data = kcg_true;
  outC->_L1_then_IfBlock1.available_menu.Fix_train_data_entry = kcg_true;
  outC->_L1_then_IfBlock1.available_menu.Menu_button_Set_VBC = kcg_true;
  outC->_L1_then_IfBlock1.available_menu.Menu_button_Remove_VBC = kcg_true;
  outC->_L2_then_IfBlock1 = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->_L3_then_IfBlock1.valid = kcg_true;
  outC->_L3_then_IfBlock1.system_clock = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1.available_menu.Menu_button_start_of_mission = kcg_true;
  outC->_L3_then_IfBlock1.available_menu.Menu_button_shunting = kcg_true;
  outC->_L3_then_IfBlock1.available_menu.Menu_button_shunting_exit = kcg_true;
  outC->_L3_then_IfBlock1.available_menu.Menu_button_non_leading = kcg_true;
  outC->_L3_then_IfBlock1.available_menu.Menu_button_exit_non_leading = kcg_true;
  outC->_L3_then_IfBlock1.available_menu.Menu_button_maintain_shunting = kcg_true;
  outC->_L3_then_IfBlock1.available_menu.Menu_button_driver_ID = kcg_true;
  outC->_L3_then_IfBlock1.available_menu.Menu_button_train_running_number =
    kcg_true;
  outC->_L3_then_IfBlock1.available_menu.Menu_button_ETCS_level = kcg_true;
  outC->_L3_then_IfBlock1.available_menu.Menu_button_train_data_modification =
    kcg_true;
  outC->_L3_then_IfBlock1.available_menu.Menu_button_train_data_view = kcg_true;
  outC->_L3_then_IfBlock1.available_menu.Menu_button_staff_responsible_data =
    kcg_true;
  outC->_L3_then_IfBlock1.available_menu.Menu_button_language_selection =
    kcg_true;
  outC->_L3_then_IfBlock1.available_menu.Menu_button_override_EOA = kcg_true;
  outC->_L3_then_IfBlock1.available_menu.Menu_button_override_route_suitability =
    kcg_true;
  outC->_L3_then_IfBlock1.available_menu.Menu_button_adhesion_factor = kcg_true;
  outC->_L3_then_IfBlock1.available_menu.Menu_button_system_version = kcg_true;
  outC->_L3_then_IfBlock1.available_menu.Menu_button_volume = kcg_true;
  outC->_L3_then_IfBlock1.available_menu.Menu_button_luminance = kcg_true;
  outC->_L3_then_IfBlock1.available_menu.Menu_button_train_integrity = kcg_true;
  outC->_L3_then_IfBlock1.available_menu.Menu_button_isolation = kcg_true;
  outC->_L3_then_IfBlock1.available_menu.Show_hourglass = kcg_true;
  outC->_L3_then_IfBlock1.available_menu.Menu_button_use_short_number = kcg_true;
  outC->_L3_then_IfBlock1.available_menu.Menu_button_enter_RBC_data = kcg_true;
  outC->_L3_then_IfBlock1.available_menu.Menu_button_radio_network_ID = kcg_true;
  outC->_L3_then_IfBlock1.available_menu.Menu_button_contact_last_RBC = kcg_true;
  outC->_L3_then_IfBlock1.available_menu.Button_switch_for_train_data = kcg_true;
  outC->_L3_then_IfBlock1.available_menu.Fix_train_data_entry = kcg_true;
  outC->_L3_then_IfBlock1.available_menu.Menu_button_Set_VBC = kcg_true;
  outC->_L3_then_IfBlock1.available_menu.Menu_button_Remove_VBC = kcg_true;
  outC->_L4_then_IfBlock1.valid = kcg_true;
  outC->_L4_then_IfBlock1.system_clock = kcg_lit_int32(0);
  outC->_L4_then_IfBlock1.available_menu.Menu_button_start_of_mission = kcg_true;
  outC->_L4_then_IfBlock1.available_menu.Menu_button_shunting = kcg_true;
  outC->_L4_then_IfBlock1.available_menu.Menu_button_shunting_exit = kcg_true;
  outC->_L4_then_IfBlock1.available_menu.Menu_button_non_leading = kcg_true;
  outC->_L4_then_IfBlock1.available_menu.Menu_button_exit_non_leading = kcg_true;
  outC->_L4_then_IfBlock1.available_menu.Menu_button_maintain_shunting = kcg_true;
  outC->_L4_then_IfBlock1.available_menu.Menu_button_driver_ID = kcg_true;
  outC->_L4_then_IfBlock1.available_menu.Menu_button_train_running_number =
    kcg_true;
  outC->_L4_then_IfBlock1.available_menu.Menu_button_ETCS_level = kcg_true;
  outC->_L4_then_IfBlock1.available_menu.Menu_button_train_data_modification =
    kcg_true;
  outC->_L4_then_IfBlock1.available_menu.Menu_button_train_data_view = kcg_true;
  outC->_L4_then_IfBlock1.available_menu.Menu_button_staff_responsible_data =
    kcg_true;
  outC->_L4_then_IfBlock1.available_menu.Menu_button_language_selection =
    kcg_true;
  outC->_L4_then_IfBlock1.available_menu.Menu_button_override_EOA = kcg_true;
  outC->_L4_then_IfBlock1.available_menu.Menu_button_override_route_suitability =
    kcg_true;
  outC->_L4_then_IfBlock1.available_menu.Menu_button_adhesion_factor = kcg_true;
  outC->_L4_then_IfBlock1.available_menu.Menu_button_system_version = kcg_true;
  outC->_L4_then_IfBlock1.available_menu.Menu_button_volume = kcg_true;
  outC->_L4_then_IfBlock1.available_menu.Menu_button_luminance = kcg_true;
  outC->_L4_then_IfBlock1.available_menu.Menu_button_train_integrity = kcg_true;
  outC->_L4_then_IfBlock1.available_menu.Menu_button_isolation = kcg_true;
  outC->_L4_then_IfBlock1.available_menu.Show_hourglass = kcg_true;
  outC->_L4_then_IfBlock1.available_menu.Menu_button_use_short_number = kcg_true;
  outC->_L4_then_IfBlock1.available_menu.Menu_button_enter_RBC_data = kcg_true;
  outC->_L4_then_IfBlock1.available_menu.Menu_button_radio_network_ID = kcg_true;
  outC->_L4_then_IfBlock1.available_menu.Menu_button_contact_last_RBC = kcg_true;
  outC->_L4_then_IfBlock1.available_menu.Button_switch_for_train_data = kcg_true;
  outC->_L4_then_IfBlock1.available_menu.Fix_train_data_entry = kcg_true;
  outC->_L4_then_IfBlock1.available_menu.Menu_button_Set_VBC = kcg_true;
  outC->_L4_then_IfBlock1.available_menu.Menu_button_Remove_VBC = kcg_true;
  outC->_L5_then_IfBlock1.valid = kcg_true;
  outC->_L5_then_IfBlock1.system_clock = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.available_menu.Menu_button_start_of_mission = kcg_true;
  outC->_L5_then_IfBlock1.available_menu.Menu_button_shunting = kcg_true;
  outC->_L5_then_IfBlock1.available_menu.Menu_button_shunting_exit = kcg_true;
  outC->_L5_then_IfBlock1.available_menu.Menu_button_non_leading = kcg_true;
  outC->_L5_then_IfBlock1.available_menu.Menu_button_exit_non_leading = kcg_true;
  outC->_L5_then_IfBlock1.available_menu.Menu_button_maintain_shunting = kcg_true;
  outC->_L5_then_IfBlock1.available_menu.Menu_button_driver_ID = kcg_true;
  outC->_L5_then_IfBlock1.available_menu.Menu_button_train_running_number =
    kcg_true;
  outC->_L5_then_IfBlock1.available_menu.Menu_button_ETCS_level = kcg_true;
  outC->_L5_then_IfBlock1.available_menu.Menu_button_train_data_modification =
    kcg_true;
  outC->_L5_then_IfBlock1.available_menu.Menu_button_train_data_view = kcg_true;
  outC->_L5_then_IfBlock1.available_menu.Menu_button_staff_responsible_data =
    kcg_true;
  outC->_L5_then_IfBlock1.available_menu.Menu_button_language_selection =
    kcg_true;
  outC->_L5_then_IfBlock1.available_menu.Menu_button_override_EOA = kcg_true;
  outC->_L5_then_IfBlock1.available_menu.Menu_button_override_route_suitability =
    kcg_true;
  outC->_L5_then_IfBlock1.available_menu.Menu_button_adhesion_factor = kcg_true;
  outC->_L5_then_IfBlock1.available_menu.Menu_button_system_version = kcg_true;
  outC->_L5_then_IfBlock1.available_menu.Menu_button_volume = kcg_true;
  outC->_L5_then_IfBlock1.available_menu.Menu_button_luminance = kcg_true;
  outC->_L5_then_IfBlock1.available_menu.Menu_button_train_integrity = kcg_true;
  outC->_L5_then_IfBlock1.available_menu.Menu_button_isolation = kcg_true;
  outC->_L5_then_IfBlock1.available_menu.Show_hourglass = kcg_true;
  outC->_L5_then_IfBlock1.available_menu.Menu_button_use_short_number = kcg_true;
  outC->_L5_then_IfBlock1.available_menu.Menu_button_enter_RBC_data = kcg_true;
  outC->_L5_then_IfBlock1.available_menu.Menu_button_radio_network_ID = kcg_true;
  outC->_L5_then_IfBlock1.available_menu.Menu_button_contact_last_RBC = kcg_true;
  outC->_L5_then_IfBlock1.available_menu.Button_switch_for_train_data = kcg_true;
  outC->_L5_then_IfBlock1.available_menu.Fix_train_data_entry = kcg_true;
  outC->_L5_then_IfBlock1.available_menu.Menu_button_Set_VBC = kcg_true;
  outC->_L5_then_IfBlock1.available_menu.Menu_button_Remove_VBC = kcg_true;
  outC->_L6_then_IfBlock1.valid = kcg_true;
  outC->_L6_then_IfBlock1.system_clock = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1.available_menu.Menu_button_start_of_mission = kcg_true;
  outC->_L6_then_IfBlock1.available_menu.Menu_button_shunting = kcg_true;
  outC->_L6_then_IfBlock1.available_menu.Menu_button_shunting_exit = kcg_true;
  outC->_L6_then_IfBlock1.available_menu.Menu_button_non_leading = kcg_true;
  outC->_L6_then_IfBlock1.available_menu.Menu_button_exit_non_leading = kcg_true;
  outC->_L6_then_IfBlock1.available_menu.Menu_button_maintain_shunting = kcg_true;
  outC->_L6_then_IfBlock1.available_menu.Menu_button_driver_ID = kcg_true;
  outC->_L6_then_IfBlock1.available_menu.Menu_button_train_running_number =
    kcg_true;
  outC->_L6_then_IfBlock1.available_menu.Menu_button_ETCS_level = kcg_true;
  outC->_L6_then_IfBlock1.available_menu.Menu_button_train_data_modification =
    kcg_true;
  outC->_L6_then_IfBlock1.available_menu.Menu_button_train_data_view = kcg_true;
  outC->_L6_then_IfBlock1.available_menu.Menu_button_staff_responsible_data =
    kcg_true;
  outC->_L6_then_IfBlock1.available_menu.Menu_button_language_selection =
    kcg_true;
  outC->_L6_then_IfBlock1.available_menu.Menu_button_override_EOA = kcg_true;
  outC->_L6_then_IfBlock1.available_menu.Menu_button_override_route_suitability =
    kcg_true;
  outC->_L6_then_IfBlock1.available_menu.Menu_button_adhesion_factor = kcg_true;
  outC->_L6_then_IfBlock1.available_menu.Menu_button_system_version = kcg_true;
  outC->_L6_then_IfBlock1.available_menu.Menu_button_volume = kcg_true;
  outC->_L6_then_IfBlock1.available_menu.Menu_button_luminance = kcg_true;
  outC->_L6_then_IfBlock1.available_menu.Menu_button_train_integrity = kcg_true;
  outC->_L6_then_IfBlock1.available_menu.Menu_button_isolation = kcg_true;
  outC->_L6_then_IfBlock1.available_menu.Show_hourglass = kcg_true;
  outC->_L6_then_IfBlock1.available_menu.Menu_button_use_short_number = kcg_true;
  outC->_L6_then_IfBlock1.available_menu.Menu_button_enter_RBC_data = kcg_true;
  outC->_L6_then_IfBlock1.available_menu.Menu_button_radio_network_ID = kcg_true;
  outC->_L6_then_IfBlock1.available_menu.Menu_button_contact_last_RBC = kcg_true;
  outC->_L6_then_IfBlock1.available_menu.Button_switch_for_train_data = kcg_true;
  outC->_L6_then_IfBlock1.available_menu.Fix_train_data_entry = kcg_true;
  outC->_L6_then_IfBlock1.available_menu.Menu_button_Set_VBC = kcg_true;
  outC->_L6_then_IfBlock1.available_menu.Menu_button_Remove_VBC = kcg_true;
  outC->_L7_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L9_then_IfBlock1 = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->_L14_then_IfBlock1 = kcg_true;
  outC->_L15_then_IfBlock1 = kcg_true;
  outC->_L17_then_IfBlock1 = kcg_true;
  outC->_L19_then_IfBlock1.valid = kcg_true;
  outC->_L19_then_IfBlock1.system_clock = kcg_lit_int32(0);
  outC->_L19_then_IfBlock1.available_menu.Menu_button_start_of_mission = kcg_true;
  outC->_L19_then_IfBlock1.available_menu.Menu_button_shunting = kcg_true;
  outC->_L19_then_IfBlock1.available_menu.Menu_button_shunting_exit = kcg_true;
  outC->_L19_then_IfBlock1.available_menu.Menu_button_non_leading = kcg_true;
  outC->_L19_then_IfBlock1.available_menu.Menu_button_exit_non_leading = kcg_true;
  outC->_L19_then_IfBlock1.available_menu.Menu_button_maintain_shunting =
    kcg_true;
  outC->_L19_then_IfBlock1.available_menu.Menu_button_driver_ID = kcg_true;
  outC->_L19_then_IfBlock1.available_menu.Menu_button_train_running_number =
    kcg_true;
  outC->_L19_then_IfBlock1.available_menu.Menu_button_ETCS_level = kcg_true;
  outC->_L19_then_IfBlock1.available_menu.Menu_button_train_data_modification =
    kcg_true;
  outC->_L19_then_IfBlock1.available_menu.Menu_button_train_data_view = kcg_true;
  outC->_L19_then_IfBlock1.available_menu.Menu_button_staff_responsible_data =
    kcg_true;
  outC->_L19_then_IfBlock1.available_menu.Menu_button_language_selection =
    kcg_true;
  outC->_L19_then_IfBlock1.available_menu.Menu_button_override_EOA = kcg_true;
  outC->_L19_then_IfBlock1.available_menu.Menu_button_override_route_suitability =
    kcg_true;
  outC->_L19_then_IfBlock1.available_menu.Menu_button_adhesion_factor = kcg_true;
  outC->_L19_then_IfBlock1.available_menu.Menu_button_system_version = kcg_true;
  outC->_L19_then_IfBlock1.available_menu.Menu_button_volume = kcg_true;
  outC->_L19_then_IfBlock1.available_menu.Menu_button_luminance = kcg_true;
  outC->_L19_then_IfBlock1.available_menu.Menu_button_train_integrity = kcg_true;
  outC->_L19_then_IfBlock1.available_menu.Menu_button_isolation = kcg_true;
  outC->_L19_then_IfBlock1.available_menu.Show_hourglass = kcg_true;
  outC->_L19_then_IfBlock1.available_menu.Menu_button_use_short_number = kcg_true;
  outC->_L19_then_IfBlock1.available_menu.Menu_button_enter_RBC_data = kcg_true;
  outC->_L19_then_IfBlock1.available_menu.Menu_button_radio_network_ID = kcg_true;
  outC->_L19_then_IfBlock1.available_menu.Menu_button_contact_last_RBC = kcg_true;
  outC->_L19_then_IfBlock1.available_menu.Button_switch_for_train_data = kcg_true;
  outC->_L19_then_IfBlock1.available_menu.Fix_train_data_entry = kcg_true;
  outC->_L19_then_IfBlock1.available_menu.Menu_button_Set_VBC = kcg_true;
  outC->_L19_then_IfBlock1.available_menu.Menu_button_Remove_VBC = kcg_true;
  outC->_L20_then_IfBlock1 = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->_L21_then_IfBlock1 = kcg_true;
  outC->_L22_then_IfBlock1 = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->outLevelsNeeded = kcg_true;
  outC->sendTrainDataToDMI = kcg_true;
  outC->new_entryRequest.valid = kcg_true;
  outC->new_entryRequest.system_clock = kcg_lit_int32(0);
  outC->new_entryRequest.entry_request =
    Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->new_menuRequest.valid = kcg_true;
  outC->new_menuRequest.system_clock = kcg_lit_int32(0);
  outC->new_menuRequest.available_menu.Menu_button_start_of_mission = kcg_true;
  outC->new_menuRequest.available_menu.Menu_button_shunting = kcg_true;
  outC->new_menuRequest.available_menu.Menu_button_shunting_exit = kcg_true;
  outC->new_menuRequest.available_menu.Menu_button_non_leading = kcg_true;
  outC->new_menuRequest.available_menu.Menu_button_exit_non_leading = kcg_true;
  outC->new_menuRequest.available_menu.Menu_button_maintain_shunting = kcg_true;
  outC->new_menuRequest.available_menu.Menu_button_driver_ID = kcg_true;
  outC->new_menuRequest.available_menu.Menu_button_train_running_number =
    kcg_true;
  outC->new_menuRequest.available_menu.Menu_button_ETCS_level = kcg_true;
  outC->new_menuRequest.available_menu.Menu_button_train_data_modification =
    kcg_true;
  outC->new_menuRequest.available_menu.Menu_button_train_data_view = kcg_true;
  outC->new_menuRequest.available_menu.Menu_button_staff_responsible_data =
    kcg_true;
  outC->new_menuRequest.available_menu.Menu_button_language_selection = kcg_true;
  outC->new_menuRequest.available_menu.Menu_button_override_EOA = kcg_true;
  outC->new_menuRequest.available_menu.Menu_button_override_route_suitability =
    kcg_true;
  outC->new_menuRequest.available_menu.Menu_button_adhesion_factor = kcg_true;
  outC->new_menuRequest.available_menu.Menu_button_system_version = kcg_true;
  outC->new_menuRequest.available_menu.Menu_button_volume = kcg_true;
  outC->new_menuRequest.available_menu.Menu_button_luminance = kcg_true;
  outC->new_menuRequest.available_menu.Menu_button_train_integrity = kcg_true;
  outC->new_menuRequest.available_menu.Menu_button_isolation = kcg_true;
  outC->new_menuRequest.available_menu.Show_hourglass = kcg_true;
  outC->new_menuRequest.available_menu.Menu_button_use_short_number = kcg_true;
  outC->new_menuRequest.available_menu.Menu_button_enter_RBC_data = kcg_true;
  outC->new_menuRequest.available_menu.Menu_button_radio_network_ID = kcg_true;
  outC->new_menuRequest.available_menu.Menu_button_contact_last_RBC = kcg_true;
  outC->new_menuRequest.available_menu.Button_switch_for_train_data = kcg_true;
  outC->new_menuRequest.available_menu.Fix_train_data_entry = kcg_true;
  outC->new_menuRequest.available_menu.Menu_button_Set_VBC = kcg_true;
  outC->new_menuRequest.available_menu.Menu_button_Remove_VBC = kcg_true;
  /* _L4=(manage_DMI_Output_Pkg::mapEntryForLevel#1)/ */
  mapEntryForLevel_init_manage_DMI_Output_Pkg(
    &outC->Context_mapEntryForLevel_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void doEntryRequest_reset_manage_DMI_Output_Pkg(
  outC_doEntryRequest_manage_DMI_Output_Pkg *outC)
{
  /* _L4=(manage_DMI_Output_Pkg::mapEntryForLevel#1)/ */
  mapEntryForLevel_reset_manage_DMI_Output_Pkg(
    &outC->Context_mapEntryForLevel_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** doEntryRequest_manage_DMI_Output_Pkg.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

