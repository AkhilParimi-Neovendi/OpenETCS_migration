/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_Available_Menu_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DMI_Available_Menu/ */
void CAST_int_to_DMI_Available_Menu_DATA_Variables(
  /* dmi_available_menu_int/ */
  DMI_Available_Menu_INT_T_DATA dmi_available_menu_int,
  outC_CAST_int_to_DMI_Available_Menu_DATA_Variables *outC)
{
  outC->_L36 = dmi_available_menu_int;
  /* _L34=(digital::Int2BoolVect#1)/ */
  Int2BoolVect_digital_int32_30(outC->_L36, &outC->Context_Int2BoolVect_1);
  kcg_copy_DMI_Available_Menu_int_T_DATA(
    &outC->_L34,
    &outC->Context_Int2BoolVect_1.BV_int32_30);
  outC->_L31 = outC->_L34[0];
  outC->_L30 = outC->_L34[1];
  outC->_L29 = outC->_L34[2];
  outC->_L28 = outC->_L34[3];
  outC->_L27 = outC->_L34[4];
  outC->_L26 = outC->_L34[5];
  outC->_L25 = outC->_L34[6];
  outC->_L24 = outC->_L34[7];
  outC->_L23 = outC->_L34[8];
  outC->_L22 = outC->_L34[9];
  outC->_L21 = outC->_L34[10];
  outC->_L20 = outC->_L34[11];
  outC->_L19 = outC->_L34[12];
  outC->_L18 = outC->_L34[13];
  outC->_L17 = outC->_L34[14];
  outC->_L16 = outC->_L34[15];
  outC->_L15 = outC->_L34[16];
  outC->_L14 = outC->_L34[17];
  outC->_L13 = outC->_L34[18];
  outC->_L12 = outC->_L34[19];
  outC->_L11 = outC->_L34[20];
  outC->_L10 = outC->_L34[21];
  outC->_L9 = outC->_L34[22];
  outC->_L8 = outC->_L34[23];
  outC->_L7 = outC->_L34[24];
  outC->_L6 = outC->_L34[25];
  outC->_L5 = outC->_L34[26];
  outC->_L4 = outC->_L34[27];
  outC->_L3 = outC->_L34[28];
  outC->_L2 = outC->_L34[29];
  outC->_L33.Menu_button_start_of_mission = outC->_L31;
  outC->_L33.Menu_button_shunting = outC->_L30;
  outC->_L33.Menu_button_shunting_exit = outC->_L29;
  outC->_L33.Menu_button_non_leading = outC->_L28;
  outC->_L33.Menu_button_exit_non_leading = outC->_L27;
  outC->_L33.Menu_button_maintain_shunting = outC->_L26;
  outC->_L33.Menu_button_driver_ID = outC->_L25;
  outC->_L33.Menu_button_train_running_number = outC->_L24;
  outC->_L33.Menu_button_ETCS_level = outC->_L23;
  outC->_L33.Menu_button_train_data_modification = outC->_L22;
  outC->_L33.Menu_button_train_data_view = outC->_L21;
  outC->_L33.Menu_button_staff_responsible_data = outC->_L20;
  outC->_L33.Menu_button_language_selection = outC->_L19;
  outC->_L33.Menu_button_override_EOA = outC->_L18;
  outC->_L33.Menu_button_override_route_suitability = outC->_L17;
  outC->_L33.Menu_button_adhesion_factor = outC->_L16;
  outC->_L33.Menu_button_system_version = outC->_L15;
  outC->_L33.Menu_button_volume = outC->_L14;
  outC->_L33.Menu_button_luminance = outC->_L13;
  outC->_L33.Menu_button_train_integrity = outC->_L12;
  outC->_L33.Menu_button_isolation = outC->_L11;
  outC->_L33.Show_hourglass = outC->_L10;
  outC->_L33.Menu_button_use_short_number = outC->_L9;
  outC->_L33.Menu_button_enter_RBC_data = outC->_L8;
  outC->_L33.Menu_button_radio_network_ID = outC->_L7;
  outC->_L33.Menu_button_contact_last_RBC = outC->_L6;
  outC->_L33.Button_switch_for_train_data = outC->_L5;
  outC->_L33.Fix_train_data_entry = outC->_L4;
  outC->_L33.Menu_button_Set_VBC = outC->_L3;
  outC->_L33.Menu_button_Remove_VBC = outC->_L2;
  kcg_copy_DMI_Available_Menu_T_DMI_Types_Pkg(
    &outC->dmi_available_menu_ct,
    &outC->_L33);
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_int_to_DMI_Available_Menu_init_DATA_Variables(
  outC_CAST_int_to_DMI_Available_Menu_DATA_Variables *outC)
{
  static kcg_size idx;

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
  outC->_L2 = kcg_true;
  outC->_L36 = kcg_lit_int32(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L34[idx] = kcg_true;
  }
  outC->_L33.Menu_button_start_of_mission = kcg_true;
  outC->_L33.Menu_button_shunting = kcg_true;
  outC->_L33.Menu_button_shunting_exit = kcg_true;
  outC->_L33.Menu_button_non_leading = kcg_true;
  outC->_L33.Menu_button_exit_non_leading = kcg_true;
  outC->_L33.Menu_button_maintain_shunting = kcg_true;
  outC->_L33.Menu_button_driver_ID = kcg_true;
  outC->_L33.Menu_button_train_running_number = kcg_true;
  outC->_L33.Menu_button_ETCS_level = kcg_true;
  outC->_L33.Menu_button_train_data_modification = kcg_true;
  outC->_L33.Menu_button_train_data_view = kcg_true;
  outC->_L33.Menu_button_staff_responsible_data = kcg_true;
  outC->_L33.Menu_button_language_selection = kcg_true;
  outC->_L33.Menu_button_override_EOA = kcg_true;
  outC->_L33.Menu_button_override_route_suitability = kcg_true;
  outC->_L33.Menu_button_adhesion_factor = kcg_true;
  outC->_L33.Menu_button_system_version = kcg_true;
  outC->_L33.Menu_button_volume = kcg_true;
  outC->_L33.Menu_button_luminance = kcg_true;
  outC->_L33.Menu_button_train_integrity = kcg_true;
  outC->_L33.Menu_button_isolation = kcg_true;
  outC->_L33.Show_hourglass = kcg_true;
  outC->_L33.Menu_button_use_short_number = kcg_true;
  outC->_L33.Menu_button_enter_RBC_data = kcg_true;
  outC->_L33.Menu_button_radio_network_ID = kcg_true;
  outC->_L33.Menu_button_contact_last_RBC = kcg_true;
  outC->_L33.Button_switch_for_train_data = kcg_true;
  outC->_L33.Fix_train_data_entry = kcg_true;
  outC->_L33.Menu_button_Set_VBC = kcg_true;
  outC->_L33.Menu_button_Remove_VBC = kcg_true;
  outC->dmi_available_menu_ct.Menu_button_start_of_mission = kcg_true;
  outC->dmi_available_menu_ct.Menu_button_shunting = kcg_true;
  outC->dmi_available_menu_ct.Menu_button_shunting_exit = kcg_true;
  outC->dmi_available_menu_ct.Menu_button_non_leading = kcg_true;
  outC->dmi_available_menu_ct.Menu_button_exit_non_leading = kcg_true;
  outC->dmi_available_menu_ct.Menu_button_maintain_shunting = kcg_true;
  outC->dmi_available_menu_ct.Menu_button_driver_ID = kcg_true;
  outC->dmi_available_menu_ct.Menu_button_train_running_number = kcg_true;
  outC->dmi_available_menu_ct.Menu_button_ETCS_level = kcg_true;
  outC->dmi_available_menu_ct.Menu_button_train_data_modification = kcg_true;
  outC->dmi_available_menu_ct.Menu_button_train_data_view = kcg_true;
  outC->dmi_available_menu_ct.Menu_button_staff_responsible_data = kcg_true;
  outC->dmi_available_menu_ct.Menu_button_language_selection = kcg_true;
  outC->dmi_available_menu_ct.Menu_button_override_EOA = kcg_true;
  outC->dmi_available_menu_ct.Menu_button_override_route_suitability = kcg_true;
  outC->dmi_available_menu_ct.Menu_button_adhesion_factor = kcg_true;
  outC->dmi_available_menu_ct.Menu_button_system_version = kcg_true;
  outC->dmi_available_menu_ct.Menu_button_volume = kcg_true;
  outC->dmi_available_menu_ct.Menu_button_luminance = kcg_true;
  outC->dmi_available_menu_ct.Menu_button_train_integrity = kcg_true;
  outC->dmi_available_menu_ct.Menu_button_isolation = kcg_true;
  outC->dmi_available_menu_ct.Show_hourglass = kcg_true;
  outC->dmi_available_menu_ct.Menu_button_use_short_number = kcg_true;
  outC->dmi_available_menu_ct.Menu_button_enter_RBC_data = kcg_true;
  outC->dmi_available_menu_ct.Menu_button_radio_network_ID = kcg_true;
  outC->dmi_available_menu_ct.Menu_button_contact_last_RBC = kcg_true;
  outC->dmi_available_menu_ct.Button_switch_for_train_data = kcg_true;
  outC->dmi_available_menu_ct.Fix_train_data_entry = kcg_true;
  outC->dmi_available_menu_ct.Menu_button_Set_VBC = kcg_true;
  outC->dmi_available_menu_ct.Menu_button_Remove_VBC = kcg_true;
  /* _L34=(digital::Int2BoolVect#1)/ */
  Int2BoolVect_init_digital_int32_30(&outC->Context_Int2BoolVect_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_int_to_DMI_Available_Menu_reset_DATA_Variables(
  outC_CAST_int_to_DMI_Available_Menu_DATA_Variables *outC)
{
  /* _L34=(digital::Int2BoolVect#1)/ */
  Int2BoolVect_reset_digital_int32_30(&outC->Context_Int2BoolVect_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_int_to_DMI_Available_Menu_DATA_Variables.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

