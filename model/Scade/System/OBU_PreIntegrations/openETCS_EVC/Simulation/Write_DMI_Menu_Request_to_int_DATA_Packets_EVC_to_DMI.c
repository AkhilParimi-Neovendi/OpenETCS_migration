/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_DMI_Menu_Request_to_int_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::Write_DMI_Menu_Request_to_int/ */
void Write_DMI_Menu_Request_to_int_DATA_Packets_EVC_to_DMI(
  /* dmi_menu_request_ct/ */
  DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_menu_request_ct,
  outC_Write_DMI_Menu_Request_to_int_DATA_Packets_EVC_to_DMI *outC)
{
  DMI_Menu_Request_int_array_T_DATA op_call;

  kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L1,
    dmi_menu_request_ct);
  outC->_L11 = outC->_L1.valid;
  outC->every = outC->_L11;
  if (outC->every) {
    /* _L9=(DATA::Packets::EVC_to_DMI::CAST_DMI_Menu_Request_to_int1#1)/ */
    CAST_DMI_Menu_Request_to_int1_DATA_Packets_EVC_to_DMI(
      &outC->_L1,
      &outC->Context_CAST_DMI_Menu_Request_to_int1_1);
    kcg_copy_DMI_Menu_Request_int_array_T_DATA(
      &op_call,
      &outC->Context_CAST_DMI_Menu_Request_to_int1_1.dmi_menu_request_int);
  }
  kcg_copy_DMI_Menu_Request_int_array_T_DATA(
    &outC->_L10,
    (DMI_Menu_Request_int_array_T_DATA *)
      &cDMI_Menu_Request_int_DATA_Packets_EVC_to_DMI);
  if (outC->every) {
    kcg_copy_DMI_Menu_Request_int_array_T_DATA(&outC->_L9, &op_call);
  }
  else {
    kcg_copy_DMI_Menu_Request_int_array_T_DATA(&outC->_L9, &outC->_L10);
  }
  kcg_copy_DMI_Menu_Request_int_array_T_DATA(
    &outC->dmi_menu_request_int,
    &outC->_L9);
}

#ifndef KCG_USER_DEFINED_INIT
void Write_DMI_Menu_Request_to_int_init_DATA_Packets_EVC_to_DMI(
  outC_Write_DMI_Menu_Request_to_int_DATA_Packets_EVC_to_DMI *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;

  outC->_L11 = kcg_true;
  for (idx = 0; idx < 3; idx++) {
    outC->_L10[idx] = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 3; idx1++) {
    outC->_L9[idx1] = kcg_lit_int32(0);
  }
  outC->_L1.valid = kcg_true;
  outC->_L1.system_clock = kcg_lit_int32(0);
  outC->_L1.available_menu.Menu_button_start_of_mission = kcg_true;
  outC->_L1.available_menu.Menu_button_shunting = kcg_true;
  outC->_L1.available_menu.Menu_button_shunting_exit = kcg_true;
  outC->_L1.available_menu.Menu_button_non_leading = kcg_true;
  outC->_L1.available_menu.Menu_button_exit_non_leading = kcg_true;
  outC->_L1.available_menu.Menu_button_maintain_shunting = kcg_true;
  outC->_L1.available_menu.Menu_button_driver_ID = kcg_true;
  outC->_L1.available_menu.Menu_button_train_running_number = kcg_true;
  outC->_L1.available_menu.Menu_button_ETCS_level = kcg_true;
  outC->_L1.available_menu.Menu_button_train_data_modification = kcg_true;
  outC->_L1.available_menu.Menu_button_train_data_view = kcg_true;
  outC->_L1.available_menu.Menu_button_staff_responsible_data = kcg_true;
  outC->_L1.available_menu.Menu_button_language_selection = kcg_true;
  outC->_L1.available_menu.Menu_button_override_EOA = kcg_true;
  outC->_L1.available_menu.Menu_button_override_route_suitability = kcg_true;
  outC->_L1.available_menu.Menu_button_adhesion_factor = kcg_true;
  outC->_L1.available_menu.Menu_button_system_version = kcg_true;
  outC->_L1.available_menu.Menu_button_volume = kcg_true;
  outC->_L1.available_menu.Menu_button_luminance = kcg_true;
  outC->_L1.available_menu.Menu_button_train_integrity = kcg_true;
  outC->_L1.available_menu.Menu_button_isolation = kcg_true;
  outC->_L1.available_menu.Show_hourglass = kcg_true;
  outC->_L1.available_menu.Menu_button_use_short_number = kcg_true;
  outC->_L1.available_menu.Menu_button_enter_RBC_data = kcg_true;
  outC->_L1.available_menu.Menu_button_radio_network_ID = kcg_true;
  outC->_L1.available_menu.Menu_button_contact_last_RBC = kcg_true;
  outC->_L1.available_menu.Button_switch_for_train_data = kcg_true;
  outC->_L1.available_menu.Fix_train_data_entry = kcg_true;
  outC->_L1.available_menu.Menu_button_Set_VBC = kcg_true;
  outC->_L1.available_menu.Menu_button_Remove_VBC = kcg_true;
  outC->every = kcg_true;
  for (idx2 = 0; idx2 < 3; idx2++) {
    outC->dmi_menu_request_int[idx2] = kcg_lit_int32(0);
  }
  /* _L9=(DATA::Packets::EVC_to_DMI::CAST_DMI_Menu_Request_to_int1#1)/ */
  CAST_DMI_Menu_Request_to_int1_init_DATA_Packets_EVC_to_DMI(
    &outC->Context_CAST_DMI_Menu_Request_to_int1_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Write_DMI_Menu_Request_to_int_reset_DATA_Packets_EVC_to_DMI(
  outC_Write_DMI_Menu_Request_to_int_DATA_Packets_EVC_to_DMI *outC)
{
  /* _L9=(DATA::Packets::EVC_to_DMI::CAST_DMI_Menu_Request_to_int1#1)/ */
  CAST_DMI_Menu_Request_to_int1_reset_DATA_Packets_EVC_to_DMI(
    &outC->Context_CAST_DMI_Menu_Request_to_int1_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_DMI_Menu_Request_to_int_DATA_Packets_EVC_to_DMI.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

