/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_Menu_Request_to_int1_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_DMI_Menu_Request_to_int1/ */
void CAST_DMI_Menu_Request_to_int1_DATA_Packets_EVC_to_DMI(
  /* dmi_menu_request_ct/ */
  DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_menu_request_ct,
  outC_CAST_DMI_Menu_Request_to_int1_DATA_Packets_EVC_to_DMI *outC)
{
  kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L1,
    dmi_menu_request_ct);
  kcg_copy_DMI_Available_Menu_T_DMI_Types_Pkg(
    &outC->_L2,
    &outC->_L1.available_menu);
  /* _L8=(DATA::Variables::CAST_DMI_Available_Menu_to_int#1)/ */
  CAST_DMI_Available_Menu_t_DATA_Variables(
    &outC->_L2,
    &outC->Context_CAST_DMI_Available_Menu_to_int_1);
  outC->_L8 =
    outC->Context_CAST_DMI_Available_Menu_to_int_1.dmi_available_menu_int;
  outC->_L4 = outC->_L1.valid;
  /* _L6=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_Utilities(outC->_L4, &outC->Context_Bool_to_Int_1);
  outC->_L6 = outC->Context_Bool_to_Int_1.int_out;
  outC->_L3 = outC->_L1.system_clock;
  outC->_L5[0] = outC->_L6;
  outC->_L5[1] = outC->_L3;
  outC->_L5[2] = outC->_L8;
  kcg_copy_DMI_Menu_Request_int_array_T_DATA(
    &outC->dmi_menu_request_int,
    &outC->_L5);
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_DMI_Menu_Request_to_int1_init_DATA_Packets_EVC_to_DMI(
  outC_CAST_DMI_Menu_Request_to_int1_DATA_Packets_EVC_to_DMI *outC)
{
  kcg_size idx;
  kcg_size idx1;

  outC->_L8 = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  for (idx = 0; idx < 3; idx++) {
    outC->_L5[idx] = kcg_lit_int32(0);
  }
  outC->_L2.Menu_button_start_of_mission = kcg_true;
  outC->_L2.Menu_button_shunting = kcg_true;
  outC->_L2.Menu_button_shunting_exit = kcg_true;
  outC->_L2.Menu_button_non_leading = kcg_true;
  outC->_L2.Menu_button_exit_non_leading = kcg_true;
  outC->_L2.Menu_button_maintain_shunting = kcg_true;
  outC->_L2.Menu_button_driver_ID = kcg_true;
  outC->_L2.Menu_button_train_running_number = kcg_true;
  outC->_L2.Menu_button_ETCS_level = kcg_true;
  outC->_L2.Menu_button_train_data_modification = kcg_true;
  outC->_L2.Menu_button_train_data_view = kcg_true;
  outC->_L2.Menu_button_staff_responsible_data = kcg_true;
  outC->_L2.Menu_button_language_selection = kcg_true;
  outC->_L2.Menu_button_override_EOA = kcg_true;
  outC->_L2.Menu_button_override_route_suitability = kcg_true;
  outC->_L2.Menu_button_adhesion_factor = kcg_true;
  outC->_L2.Menu_button_system_version = kcg_true;
  outC->_L2.Menu_button_volume = kcg_true;
  outC->_L2.Menu_button_luminance = kcg_true;
  outC->_L2.Menu_button_train_integrity = kcg_true;
  outC->_L2.Menu_button_isolation = kcg_true;
  outC->_L2.Show_hourglass = kcg_true;
  outC->_L2.Menu_button_use_short_number = kcg_true;
  outC->_L2.Menu_button_enter_RBC_data = kcg_true;
  outC->_L2.Menu_button_radio_network_ID = kcg_true;
  outC->_L2.Menu_button_contact_last_RBC = kcg_true;
  outC->_L2.Button_switch_for_train_data = kcg_true;
  outC->_L2.Fix_train_data_entry = kcg_true;
  outC->_L2.Menu_button_Set_VBC = kcg_true;
  outC->_L2.Menu_button_Remove_VBC = kcg_true;
  outC->_L3 = kcg_lit_int32(0);
  outC->_L4 = kcg_true;
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
  for (idx1 = 0; idx1 < 3; idx1++) {
    outC->dmi_menu_request_int[idx1] = kcg_lit_int32(0);
  }
  /* _L6=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_init_Utilities(&outC->Context_Bool_to_Int_1);
  /* _L8=(DATA::Variables::CAST_DMI_Available_Menu_to_int#1)/ */
  CAST_DMI_Available_Menu_t_init_DATA_Variables(
    &outC->Context_CAST_DMI_Available_Menu_to_int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_DMI_Menu_Request_to_int1_reset_DATA_Packets_EVC_to_DMI(
  outC_CAST_DMI_Menu_Request_to_int1_DATA_Packets_EVC_to_DMI *outC)
{
  /* _L6=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_reset_Utilities(&outC->Context_Bool_to_Int_1);
  /* _L8=(DATA::Variables::CAST_DMI_Available_Menu_to_int#1)/ */
  CAST_DMI_Available_Menu_t_reset_DATA_Variables(
    &outC->Context_CAST_DMI_Available_Menu_to_int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_DMI_Menu_Request_to_int1_DATA_Packets_EVC_to_DMI.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

