/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DMI_menu_req_To_ButtonEnabler_DMI_Control_Pkg_Sub_func_MenuRequest.h"

/* DMI_Control_Pkg::Sub_func::MenuRequest::DMI_menu_req_To_ButtonEnabler/ */
void DMI_menu_req_To_ButtonEnabler_DMI_Control_Pkg_Sub_func_MenuRequest(
  /* MenuRequest/ */
  DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg *MenuRequest,
  outC_DMI_menu_req_To_ButtonEnabler_DMI_Control_Pkg_Sub_func_MenuRequest *outC)
{
  static kcg_size idx;

  kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L1,
    MenuRequest);
  kcg_copy_DMI_Available_Menu_T_DMI_Types_Pkg(
    &outC->_L2,
    &outC->_L1.available_menu);
  outC->_L3 = outC->_L2.Menu_button_start_of_mission;
  outC->_L4 = outC->_L2.Menu_button_shunting;
  outC->_L5 = outC->_L2.Menu_button_shunting_exit;
  outC->_L6 = outC->_L2.Menu_button_non_leading;
  outC->_L7 = outC->_L2.Menu_button_exit_non_leading;
  outC->_L8 = outC->_L2.Menu_button_maintain_shunting;
  outC->_L9 = outC->_L2.Menu_button_driver_ID;
  outC->_L10 = outC->_L2.Menu_button_train_running_number;
  outC->_L11 = outC->_L2.Menu_button_ETCS_level;
  outC->_L12 = outC->_L2.Menu_button_train_data_modification;
  outC->_L13 = outC->_L2.Menu_button_train_data_view;
  outC->_L14 = outC->_L2.Menu_button_staff_responsible_data;
  outC->_L15 = outC->_L2.Menu_button_language_selection;
  outC->_L16 = outC->_L2.Menu_button_override_EOA;
  outC->_L17 = outC->_L2.Menu_button_override_route_suitability;
  outC->_L18 = outC->_L2.Menu_button_adhesion_factor;
  outC->_L19 = outC->_L2.Menu_button_system_version;
  outC->_L20 = outC->_L2.Menu_button_volume;
  outC->_L21 = outC->_L2.Menu_button_luminance;
  outC->_L22 = outC->_L2.Menu_button_train_integrity;
  outC->_L23 = outC->_L2.Menu_button_isolation;
  outC->_L24 = outC->_L2.Show_hourglass;
  outC->_L25 = outC->_L2.Menu_button_use_short_number;
  outC->_L26 = outC->_L2.Menu_button_enter_RBC_data;
  outC->_L27 = outC->_L2.Menu_button_radio_network_ID;
  outC->_L28 = outC->_L2.Menu_button_contact_last_RBC;
  outC->_L29 = outC->_L2.Button_switch_for_train_data;
  outC->_L30 = outC->_L2.Fix_train_data_entry;
  outC->_L31 = outC->_L2.Menu_button_Set_VBC;
  outC->_L32 = outC->_L2.Menu_button_Remove_VBC;
  outC->_L36[0] = outC->_L3;
  outC->_L36[1] = outC->_L4;
  outC->_L36[2] = outC->_L5;
  outC->_L36[3] = outC->_L6;
  outC->_L36[4] = outC->_L7;
  outC->_L36[5] = outC->_L8;
  outC->_L36[6] = outC->_L9;
  outC->_L36[7] = outC->_L10;
  outC->_L36[8] = outC->_L11;
  outC->_L36[9] = outC->_L12;
  outC->_L36[10] = outC->_L13;
  outC->_L36[11] = outC->_L14;
  outC->_L36[12] = outC->_L15;
  outC->_L36[13] = outC->_L16;
  outC->_L36[14] = outC->_L17;
  outC->_L36[15] = outC->_L18;
  outC->_L36[16] = outC->_L19;
  outC->_L36[17] = outC->_L20;
  outC->_L36[18] = outC->_L21;
  outC->_L36[19] = outC->_L22;
  outC->_L36[20] = outC->_L23;
  outC->_L36[21] = outC->_L24;
  outC->_L36[22] = outC->_L25;
  outC->_L36[23] = outC->_L26;
  outC->_L36[24] = outC->_L27;
  outC->_L36[25] = outC->_L28;
  outC->_L36[26] = outC->_L29;
  outC->_L36[27] = outC->_L30;
  outC->_L36[28] = outC->_L31;
  outC->_L36[29] = outC->_L32;
  /* _L37= */
  for (idx = 0; idx < 30; idx++) {
    /* _L37=(DMI_Control_Pkg::Sub_func::MenuRequest::ButtonMask_to_buttonIndex_iterator#1)/ */
    ButtonMask_to_buttonIndex_iterator_DMI_Control_Pkg_Sub_func_MenuRequest(
      outC->_L36[idx],
      &outC->Context_ButtonMask_to_buttonIndex_iterator_1[idx]);
    outC->_L37[idx] =
      outC->Context_ButtonMask_to_buttonIndex_iterator_1[idx].valueout;
  }
  kcg_copy_array_int32_30(&outC->ButtonEnabler, &outC->_L37);
}

#ifndef KCG_USER_DEFINED_INIT
void DMI_menu_req_To_ButtonEnabler_init_DMI_Control_Pkg_Sub_func_MenuRequest(
  outC_DMI_menu_req_To_ButtonEnabler_DMI_Control_Pkg_Sub_func_MenuRequest *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  for (idx1 = 0; idx1 < 30; idx1++) {
    outC->_L37[idx1] = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L36[idx2] = kcg_true;
  }
  outC->_L32 = kcg_true;
  outC->_L31 = kcg_true;
  outC->_L30 = kcg_true;
  outC->_L29 = kcg_true;
  outC->_L28 = kcg_true;
  outC->_L27 = kcg_true;
  outC->_L26 = kcg_true;
  outC->_L25 = kcg_true;
  outC->_L24 = kcg_true;
  outC->_L23 = kcg_true;
  outC->_L22 = kcg_true;
  outC->_L21 = kcg_true;
  outC->_L20 = kcg_true;
  outC->_L19 = kcg_true;
  outC->_L18 = kcg_true;
  outC->_L17 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L15 = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
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
  for (idx3 = 0; idx3 < 30; idx3++) {
    outC->ButtonEnabler[idx3] = kcg_lit_int32(0);
  }
  for (idx = 0; idx < 30; idx++) {
    /* _L37=(DMI_Control_Pkg::Sub_func::MenuRequest::ButtonMask_to_buttonIndex_iterator#1)/ */
    ButtonMask_to_buttonIndex_iterator_init_DMI_Control_Pkg_Sub_func_MenuRequest(
      &outC->Context_ButtonMask_to_buttonIndex_iterator_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void DMI_menu_req_To_ButtonEnabler_reset_DMI_Control_Pkg_Sub_func_MenuRequest(
  outC_DMI_menu_req_To_ButtonEnabler_DMI_Control_Pkg_Sub_func_MenuRequest *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 30; idx++) {
    /* _L37=(DMI_Control_Pkg::Sub_func::MenuRequest::ButtonMask_to_buttonIndex_iterator#1)/ */
    ButtonMask_to_buttonIndex_iterator_reset_DMI_Control_Pkg_Sub_func_MenuRequest(
      &outC->Context_ButtonMask_to_buttonIndex_iterator_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** DMI_menu_req_To_ButtonEnabler_DMI_Control_Pkg_Sub_func_MenuRequest.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

