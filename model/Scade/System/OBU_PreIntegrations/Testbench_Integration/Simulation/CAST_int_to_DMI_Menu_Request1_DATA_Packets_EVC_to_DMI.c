/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_Menu_Request1_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Menu_Request1/ */
void CAST_int_to_DMI_Menu_Request1_DATA_Packets_EVC_to_DMI(
  /* dmi_menu_request_int/ */
  DMI_Menu_Request_int_array_T_DATA *dmi_menu_request_int,
  outC_CAST_int_to_DMI_Menu_Request1_DATA_Packets_EVC_to_DMI *outC)
{
  kcg_copy_DMI_Menu_Request_int_array_T_DATA(&outC->_L10, dmi_menu_request_int);
  outC->_L2 = outC->_L10[2];
  /* _L8=(DATA::Variables::CAST_int_to_DMI_Available_Menu#1)/ */
  CAST_int_to_DMI_Available_Menu_DATA_Variables(
    outC->_L2,
    &outC->Context_CAST_int_to_DMI_Available_Menu_1);
  kcg_copy_DMI_Available_Menu_T_DMI_Types_Pkg(
    &outC->_L8,
    &outC->Context_CAST_int_to_DMI_Available_Menu_1.dmi_available_menu_ct);
  outC->_L4 = outC->_L10[0];
  /* _L6=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_Utilities(outC->_L4, &outC->Context_Int_to_Bool_1);
  outC->_L6 = outC->Context_Int_to_Bool_1.bool_out;
  outC->_L3 = outC->_L10[1];
  outC->_L5.valid = outC->_L6;
  outC->_L5.system_clock = outC->_L3;
  kcg_copy_DMI_Available_Menu_T_DMI_Types_Pkg(
    &outC->_L5.available_menu,
    &outC->_L8);
  kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->dmi_menu_request_ct,
    &outC->_L5);
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_int_to_DMI_Menu_Request1_init_DATA_Packets_EVC_to_DMI(
  outC_CAST_int_to_DMI_Menu_Request1_DATA_Packets_EVC_to_DMI *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 3; idx++) {
    outC->_L10[idx] = kcg_lit_int64(0);
  }
  outC->_L8.Menu_button_start_of_mission = kcg_true;
  outC->_L8.Menu_button_shunting = kcg_true;
  outC->_L8.Menu_button_shunting_exit = kcg_true;
  outC->_L8.Menu_button_non_leading = kcg_true;
  outC->_L8.Menu_button_exit_non_leading = kcg_true;
  outC->_L8.Menu_button_maintain_shunting = kcg_true;
  outC->_L8.Menu_button_driver_ID = kcg_true;
  outC->_L8.Menu_button_train_running_number = kcg_true;
  outC->_L8.Menu_button_ETCS_level = kcg_true;
  outC->_L8.Menu_button_train_data_modification = kcg_true;
  outC->_L8.Menu_button_train_data_view = kcg_true;
  outC->_L8.Menu_button_staff_responsible_data = kcg_true;
  outC->_L8.Menu_button_language_selection = kcg_true;
  outC->_L8.Menu_button_override_EOA = kcg_true;
  outC->_L8.Menu_button_override_route_suitability = kcg_true;
  outC->_L8.Menu_button_adhesion_factor = kcg_true;
  outC->_L8.Menu_button_system_version = kcg_true;
  outC->_L8.Menu_button_volume = kcg_true;
  outC->_L8.Menu_button_luminance = kcg_true;
  outC->_L8.Menu_button_train_integrity = kcg_true;
  outC->_L8.Menu_button_isolation = kcg_true;
  outC->_L8.Show_hourglass = kcg_true;
  outC->_L8.Menu_button_use_short_number = kcg_true;
  outC->_L8.Menu_button_enter_RBC_data = kcg_true;
  outC->_L8.Menu_button_radio_network_ID = kcg_true;
  outC->_L8.Menu_button_contact_last_RBC = kcg_true;
  outC->_L8.Button_switch_for_train_data = kcg_true;
  outC->_L8.Fix_train_data_entry = kcg_true;
  outC->_L8.Menu_button_Set_VBC = kcg_true;
  outC->_L8.Menu_button_Remove_VBC = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L5.valid = kcg_true;
  outC->_L5.system_clock = kcg_lit_int64(0);
  outC->_L5.available_menu.Menu_button_start_of_mission = kcg_true;
  outC->_L5.available_menu.Menu_button_shunting = kcg_true;
  outC->_L5.available_menu.Menu_button_shunting_exit = kcg_true;
  outC->_L5.available_menu.Menu_button_non_leading = kcg_true;
  outC->_L5.available_menu.Menu_button_exit_non_leading = kcg_true;
  outC->_L5.available_menu.Menu_button_maintain_shunting = kcg_true;
  outC->_L5.available_menu.Menu_button_driver_ID = kcg_true;
  outC->_L5.available_menu.Menu_button_train_running_number = kcg_true;
  outC->_L5.available_menu.Menu_button_ETCS_level = kcg_true;
  outC->_L5.available_menu.Menu_button_train_data_modification = kcg_true;
  outC->_L5.available_menu.Menu_button_train_data_view = kcg_true;
  outC->_L5.available_menu.Menu_button_staff_responsible_data = kcg_true;
  outC->_L5.available_menu.Menu_button_language_selection = kcg_true;
  outC->_L5.available_menu.Menu_button_override_EOA = kcg_true;
  outC->_L5.available_menu.Menu_button_override_route_suitability = kcg_true;
  outC->_L5.available_menu.Menu_button_adhesion_factor = kcg_true;
  outC->_L5.available_menu.Menu_button_system_version = kcg_true;
  outC->_L5.available_menu.Menu_button_volume = kcg_true;
  outC->_L5.available_menu.Menu_button_luminance = kcg_true;
  outC->_L5.available_menu.Menu_button_train_integrity = kcg_true;
  outC->_L5.available_menu.Menu_button_isolation = kcg_true;
  outC->_L5.available_menu.Show_hourglass = kcg_true;
  outC->_L5.available_menu.Menu_button_use_short_number = kcg_true;
  outC->_L5.available_menu.Menu_button_enter_RBC_data = kcg_true;
  outC->_L5.available_menu.Menu_button_radio_network_ID = kcg_true;
  outC->_L5.available_menu.Menu_button_contact_last_RBC = kcg_true;
  outC->_L5.available_menu.Button_switch_for_train_data = kcg_true;
  outC->_L5.available_menu.Fix_train_data_entry = kcg_true;
  outC->_L5.available_menu.Menu_button_Set_VBC = kcg_true;
  outC->_L5.available_menu.Menu_button_Remove_VBC = kcg_true;
  outC->_L2 = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  outC->_L4 = kcg_lit_int64(0);
  outC->dmi_menu_request_ct.valid = kcg_true;
  outC->dmi_menu_request_ct.system_clock = kcg_lit_int64(0);
  outC->dmi_menu_request_ct.available_menu.Menu_button_start_of_mission =
    kcg_true;
  outC->dmi_menu_request_ct.available_menu.Menu_button_shunting = kcg_true;
  outC->dmi_menu_request_ct.available_menu.Menu_button_shunting_exit = kcg_true;
  outC->dmi_menu_request_ct.available_menu.Menu_button_non_leading = kcg_true;
  outC->dmi_menu_request_ct.available_menu.Menu_button_exit_non_leading =
    kcg_true;
  outC->dmi_menu_request_ct.available_menu.Menu_button_maintain_shunting =
    kcg_true;
  outC->dmi_menu_request_ct.available_menu.Menu_button_driver_ID = kcg_true;
  outC->dmi_menu_request_ct.available_menu.Menu_button_train_running_number =
    kcg_true;
  outC->dmi_menu_request_ct.available_menu.Menu_button_ETCS_level = kcg_true;
  outC->dmi_menu_request_ct.available_menu.Menu_button_train_data_modification =
    kcg_true;
  outC->dmi_menu_request_ct.available_menu.Menu_button_train_data_view = kcg_true;
  outC->dmi_menu_request_ct.available_menu.Menu_button_staff_responsible_data =
    kcg_true;
  outC->dmi_menu_request_ct.available_menu.Menu_button_language_selection =
    kcg_true;
  outC->dmi_menu_request_ct.available_menu.Menu_button_override_EOA = kcg_true;
  outC->dmi_menu_request_ct.available_menu.Menu_button_override_route_suitability =
    kcg_true;
  outC->dmi_menu_request_ct.available_menu.Menu_button_adhesion_factor = kcg_true;
  outC->dmi_menu_request_ct.available_menu.Menu_button_system_version = kcg_true;
  outC->dmi_menu_request_ct.available_menu.Menu_button_volume = kcg_true;
  outC->dmi_menu_request_ct.available_menu.Menu_button_luminance = kcg_true;
  outC->dmi_menu_request_ct.available_menu.Menu_button_train_integrity = kcg_true;
  outC->dmi_menu_request_ct.available_menu.Menu_button_isolation = kcg_true;
  outC->dmi_menu_request_ct.available_menu.Show_hourglass = kcg_true;
  outC->dmi_menu_request_ct.available_menu.Menu_button_use_short_number =
    kcg_true;
  outC->dmi_menu_request_ct.available_menu.Menu_button_enter_RBC_data = kcg_true;
  outC->dmi_menu_request_ct.available_menu.Menu_button_radio_network_ID =
    kcg_true;
  outC->dmi_menu_request_ct.available_menu.Menu_button_contact_last_RBC =
    kcg_true;
  outC->dmi_menu_request_ct.available_menu.Button_switch_for_train_data =
    kcg_true;
  outC->dmi_menu_request_ct.available_menu.Fix_train_data_entry = kcg_true;
  outC->dmi_menu_request_ct.available_menu.Menu_button_Set_VBC = kcg_true;
  outC->dmi_menu_request_ct.available_menu.Menu_button_Remove_VBC = kcg_true;
  /* _L6=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_init_Utilities(&outC->Context_Int_to_Bool_1);
  /* _L8=(DATA::Variables::CAST_int_to_DMI_Available_Menu#1)/ */
  CAST_int_to_DMI_Available_Menu_init_DATA_Variables(
    &outC->Context_CAST_int_to_DMI_Available_Menu_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_int_to_DMI_Menu_Request1_reset_DATA_Packets_EVC_to_DMI(
  outC_CAST_int_to_DMI_Menu_Request1_DATA_Packets_EVC_to_DMI *outC)
{
  /* _L6=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_reset_Utilities(&outC->Context_Int_to_Bool_1);
  /* _L8=(DATA::Variables::CAST_int_to_DMI_Available_Menu#1)/ */
  CAST_int_to_DMI_Available_Menu_reset_DATA_Variables(
    &outC->Context_CAST_int_to_DMI_Available_Menu_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_int_to_DMI_Menu_Request1_DATA_Packets_EVC_to_DMI.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

