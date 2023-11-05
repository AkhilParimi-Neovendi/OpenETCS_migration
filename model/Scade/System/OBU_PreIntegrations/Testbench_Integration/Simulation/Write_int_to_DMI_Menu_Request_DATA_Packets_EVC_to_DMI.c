/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_Menu_Request_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Menu_Request/ */
void Write_int_to_DMI_Menu_Request_DATA_Packets_EVC_to_DMI(
  /* dmi_menu_request_int/ */
  DMI_Menu_Request_int_array_T_DATA *dmi_menu_request_int,
  outC_Write_int_to_DMI_Menu_Request_DATA_Packets_EVC_to_DMI *outC)
{
  static DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg op_call;

  kcg_copy_DMI_Menu_Request_int_array_T_DATA(&outC->_L10, dmi_menu_request_int);
  outC->_L12 = outC->_L10[0];
  outC->_L14 = kcg_lit_int32(1);
  outC->_L13 = outC->_L14 == outC->_L12;
  outC->every = outC->_L13;
  if (outC->every) {
    /* _L11=(DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Menu_Request1#1)/ */
    CAST_int_to_DMI_Menu_Request1_DATA_Packets_EVC_to_DMI(
      &outC->_L10,
      &outC->Context_CAST_int_to_DMI_Menu_Request1_1);
    kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &op_call,
      &outC->Context_CAST_int_to_DMI_Menu_Request1_1.dmi_menu_request_ct);
  }
  kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L15,
    (DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg *)
      &cDMI_Menu_Request_DATA_Packets_EVC_to_DMI);
  if (outC->every) {
    kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(&outC->_L11, &op_call);
  }
  else {
    kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L11,
      &outC->_L15);
  }
  kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->dmi_menu_request_ct,
    &outC->_L11);
}

#ifndef KCG_USER_DEFINED_INIT
void Write_int_to_DMI_Menu_Request_init_DATA_Packets_EVC_to_DMI(
  outC_Write_int_to_DMI_Menu_Request_DATA_Packets_EVC_to_DMI *outC)
{
  static kcg_size idx;

  outC->_L15.valid = kcg_true;
  outC->_L15.system_clock = kcg_lit_int32(0);
  outC->_L15.available_menu.Menu_button_start_of_mission = kcg_true;
  outC->_L15.available_menu.Menu_button_shunting = kcg_true;
  outC->_L15.available_menu.Menu_button_shunting_exit = kcg_true;
  outC->_L15.available_menu.Menu_button_non_leading = kcg_true;
  outC->_L15.available_menu.Menu_button_exit_non_leading = kcg_true;
  outC->_L15.available_menu.Menu_button_maintain_shunting = kcg_true;
  outC->_L15.available_menu.Menu_button_driver_ID = kcg_true;
  outC->_L15.available_menu.Menu_button_train_running_number = kcg_true;
  outC->_L15.available_menu.Menu_button_ETCS_level = kcg_true;
  outC->_L15.available_menu.Menu_button_train_data_modification = kcg_true;
  outC->_L15.available_menu.Menu_button_train_data_view = kcg_true;
  outC->_L15.available_menu.Menu_button_staff_responsible_data = kcg_true;
  outC->_L15.available_menu.Menu_button_language_selection = kcg_true;
  outC->_L15.available_menu.Menu_button_override_EOA = kcg_true;
  outC->_L15.available_menu.Menu_button_override_route_suitability = kcg_true;
  outC->_L15.available_menu.Menu_button_adhesion_factor = kcg_true;
  outC->_L15.available_menu.Menu_button_system_version = kcg_true;
  outC->_L15.available_menu.Menu_button_volume = kcg_true;
  outC->_L15.available_menu.Menu_button_luminance = kcg_true;
  outC->_L15.available_menu.Menu_button_train_integrity = kcg_true;
  outC->_L15.available_menu.Menu_button_isolation = kcg_true;
  outC->_L15.available_menu.Show_hourglass = kcg_true;
  outC->_L15.available_menu.Menu_button_use_short_number = kcg_true;
  outC->_L15.available_menu.Menu_button_enter_RBC_data = kcg_true;
  outC->_L15.available_menu.Menu_button_radio_network_ID = kcg_true;
  outC->_L15.available_menu.Menu_button_contact_last_RBC = kcg_true;
  outC->_L15.available_menu.Button_switch_for_train_data = kcg_true;
  outC->_L15.available_menu.Fix_train_data_entry = kcg_true;
  outC->_L15.available_menu.Menu_button_Set_VBC = kcg_true;
  outC->_L15.available_menu.Menu_button_Remove_VBC = kcg_true;
  outC->_L12 = kcg_lit_int32(0);
  outC->_L13 = kcg_true;
  outC->_L14 = kcg_lit_int32(0);
  outC->_L11.valid = kcg_true;
  outC->_L11.system_clock = kcg_lit_int32(0);
  outC->_L11.available_menu.Menu_button_start_of_mission = kcg_true;
  outC->_L11.available_menu.Menu_button_shunting = kcg_true;
  outC->_L11.available_menu.Menu_button_shunting_exit = kcg_true;
  outC->_L11.available_menu.Menu_button_non_leading = kcg_true;
  outC->_L11.available_menu.Menu_button_exit_non_leading = kcg_true;
  outC->_L11.available_menu.Menu_button_maintain_shunting = kcg_true;
  outC->_L11.available_menu.Menu_button_driver_ID = kcg_true;
  outC->_L11.available_menu.Menu_button_train_running_number = kcg_true;
  outC->_L11.available_menu.Menu_button_ETCS_level = kcg_true;
  outC->_L11.available_menu.Menu_button_train_data_modification = kcg_true;
  outC->_L11.available_menu.Menu_button_train_data_view = kcg_true;
  outC->_L11.available_menu.Menu_button_staff_responsible_data = kcg_true;
  outC->_L11.available_menu.Menu_button_language_selection = kcg_true;
  outC->_L11.available_menu.Menu_button_override_EOA = kcg_true;
  outC->_L11.available_menu.Menu_button_override_route_suitability = kcg_true;
  outC->_L11.available_menu.Menu_button_adhesion_factor = kcg_true;
  outC->_L11.available_menu.Menu_button_system_version = kcg_true;
  outC->_L11.available_menu.Menu_button_volume = kcg_true;
  outC->_L11.available_menu.Menu_button_luminance = kcg_true;
  outC->_L11.available_menu.Menu_button_train_integrity = kcg_true;
  outC->_L11.available_menu.Menu_button_isolation = kcg_true;
  outC->_L11.available_menu.Show_hourglass = kcg_true;
  outC->_L11.available_menu.Menu_button_use_short_number = kcg_true;
  outC->_L11.available_menu.Menu_button_enter_RBC_data = kcg_true;
  outC->_L11.available_menu.Menu_button_radio_network_ID = kcg_true;
  outC->_L11.available_menu.Menu_button_contact_last_RBC = kcg_true;
  outC->_L11.available_menu.Button_switch_for_train_data = kcg_true;
  outC->_L11.available_menu.Fix_train_data_entry = kcg_true;
  outC->_L11.available_menu.Menu_button_Set_VBC = kcg_true;
  outC->_L11.available_menu.Menu_button_Remove_VBC = kcg_true;
  for (idx = 0; idx < 3; idx++) {
    outC->_L10[idx] = kcg_lit_int32(0);
  }
  outC->every = kcg_true;
  outC->dmi_menu_request_ct.valid = kcg_true;
  outC->dmi_menu_request_ct.system_clock = kcg_lit_int32(0);
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
  /* _L11=(DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Menu_Request1#1)/ */
  CAST_int_to_DMI_Menu_Request1_init_DATA_Packets_EVC_to_DMI(
    &outC->Context_CAST_int_to_DMI_Menu_Request1_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Write_int_to_DMI_Menu_Request_reset_DATA_Packets_EVC_to_DMI(
  outC_Write_int_to_DMI_Menu_Request_DATA_Packets_EVC_to_DMI *outC)
{
  /* _L11=(DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Menu_Request1#1)/ */
  CAST_int_to_DMI_Menu_Request1_reset_DATA_Packets_EVC_to_DMI(
    &outC->Context_CAST_int_to_DMI_Menu_Request1_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_int_to_DMI_Menu_Request_DATA_Packets_EVC_to_DMI.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

