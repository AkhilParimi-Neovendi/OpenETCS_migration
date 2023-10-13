/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_Icons1_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Icons1/ */
void CAST_int_to_DMI_Icons1_DATA_Packets_EVC_to_DMI(
  /* dmi_icons_int/ */
  DMI_Icons_int_array_T_DATA *dmi_icons_int,
  outC_CAST_int_to_DMI_Icons1_DATA_Packets_EVC_to_DMI *outC)
{
  kcg_copy_DMI_Icons_int_array_T_DATA(&outC->_L29, dmi_icons_int);
  outC->_L10 = outC->_L29[0];
  /* _L22=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_Utilities(outC->_L10, &outC->Context_Int_to_Bool_1);
  outC->_L22 = outC->Context_Int_to_Bool_1.bool_out;
  outC->_L9 = outC->_L29[1];
  outC->_L8 = outC->_L29[2];
  /* _L23=(DATA::Variables::CAST_int_to_Icon_control_flag#1)/ */
  CAST_int_to_Icon_control_flag_DATA_Variables(
    outC->_L8,
    &outC->Context_CAST_int_to_Icon_control_flag_1);
  outC->_L23 = outC->Context_CAST_int_to_Icon_control_flag_1.Input1;
  outC->_L7 = outC->_L29[3];
  /* _L24=(DATA::Variables::CAST_to_int_DMI_m_icon_flashing_freq#1)/ */
  CAST_to_int_DMI_m_icon_flashing_freq_DATA_Variables(
    outC->_L7,
    &outC->Context_CAST_to_int_DMI_m_icon_flashing_freq_1);
  outC->_L24 =
    outC->Context_CAST_to_int_DMI_m_icon_flashing_freq_1.dmi_m_icon_flashing_freq_ct;
  outC->_L6 = outC->_L29[4];
  /* _L25=(DATA::Variables::CAST_int_to_Icon_group#1)/ */
  CAST_int_to_Icon_group_DATA_Variables(
    outC->_L6,
    &outC->Context_CAST_int_to_Icon_group_1);
  outC->_L25 = outC->Context_CAST_int_to_Icon_group_1.Input1;
  outC->_L5 = outC->_L29[5];
  outC->_L4 = outC->_L29[6];
  /* _L26=(DATA::Variables::CAST_int_to_Area_group#1)/ */
  CAST_int_to_Area_group_DATA_Variables(
    outC->_L4,
    &outC->Context_CAST_int_to_Area_group_1);
  outC->_L26 = outC->Context_CAST_int_to_Area_group_1.area_group_ct;
  outC->_L3 = outC->_L29[7];
  outC->_L2 = outC->_L29[8];
  outC->_L11.valid = outC->_L22;
  outC->_L11.system_clock = outC->_L9;
  outC->_L11.DMI_m_icon_control_flag = outC->_L23;
  outC->_L11.DMI_m_icon_flashing_freq = outC->_L24;
  outC->_L11.DMI_nid_icon_group = outC->_L25;
  outC->_L11.DMI_nid_icon_rank = outC->_L5;
  outC->_L11.DMI_nid_area_group = outC->_L26;
  outC->_L11.DMI_nid_area_rank = outC->_L3;
  outC->_L11.DMI_nid_icon_identifier = outC->_L2;
  kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->dmi_icons_ct,
    &outC->_L11);
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_int_to_DMI_Icons1_init_DATA_Packets_EVC_to_DMI(
  outC_CAST_int_to_DMI_Icons1_DATA_Packets_EVC_to_DMI *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 9; idx++) {
    outC->_L29[idx] = kcg_lit_int64(0);
  }
  outC->_L26 = A_DMI_Types_Pkg;
  outC->_L25 = level_symbol_DMI_Types_Pkg;
  outC->_L24 = kcg_lit_float64(0.0);
  outC->_L23 = show_icon_in_area_DMI_Types_Pkg;
  outC->_L22 = kcg_true;
  outC->_L11.valid = kcg_true;
  outC->_L11.system_clock = kcg_lit_int64(0);
  outC->_L11.DMI_m_icon_control_flag = show_icon_in_area_DMI_Types_Pkg;
  outC->_L11.DMI_m_icon_flashing_freq = kcg_lit_float64(0.0);
  outC->_L11.DMI_nid_icon_group = level_symbol_DMI_Types_Pkg;
  outC->_L11.DMI_nid_icon_rank = kcg_lit_int64(0);
  outC->_L11.DMI_nid_area_group = A_DMI_Types_Pkg;
  outC->_L11.DMI_nid_area_rank = kcg_lit_int64(0);
  outC->_L11.DMI_nid_icon_identifier = kcg_lit_int64(0);
  outC->_L2 = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  outC->_L4 = kcg_lit_int64(0);
  outC->_L5 = kcg_lit_int64(0);
  outC->_L6 = kcg_lit_int64(0);
  outC->_L7 = kcg_lit_int64(0);
  outC->_L8 = kcg_lit_int64(0);
  outC->_L9 = kcg_lit_int64(0);
  outC->_L10 = kcg_lit_int64(0);
  outC->dmi_icons_ct.valid = kcg_true;
  outC->dmi_icons_ct.system_clock = kcg_lit_int64(0);
  outC->dmi_icons_ct.DMI_m_icon_control_flag = show_icon_in_area_DMI_Types_Pkg;
  outC->dmi_icons_ct.DMI_m_icon_flashing_freq = kcg_lit_float64(0.0);
  outC->dmi_icons_ct.DMI_nid_icon_group = level_symbol_DMI_Types_Pkg;
  outC->dmi_icons_ct.DMI_nid_icon_rank = kcg_lit_int64(0);
  outC->dmi_icons_ct.DMI_nid_area_group = A_DMI_Types_Pkg;
  outC->dmi_icons_ct.DMI_nid_area_rank = kcg_lit_int64(0);
  outC->dmi_icons_ct.DMI_nid_icon_identifier = kcg_lit_int64(0);
  /* _L26=(DATA::Variables::CAST_int_to_Area_group#1)/ */
  CAST_int_to_Area_group_init_DATA_Variables(
    &outC->Context_CAST_int_to_Area_group_1);
  /* _L25=(DATA::Variables::CAST_int_to_Icon_group#1)/ */
  CAST_int_to_Icon_group_init_DATA_Variables(
    &outC->Context_CAST_int_to_Icon_group_1);
  /* _L24=(DATA::Variables::CAST_to_int_DMI_m_icon_flashing_freq#1)/ */
  CAST_to_int_DMI_m_icon_flashing_freq_init_DATA_Variables(
    &outC->Context_CAST_to_int_DMI_m_icon_flashing_freq_1);
  /* _L23=(DATA::Variables::CAST_int_to_Icon_control_flag#1)/ */
  CAST_int_to_Icon_control_flag_init_DATA_Variables(
    &outC->Context_CAST_int_to_Icon_control_flag_1);
  /* _L22=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_init_Utilities(&outC->Context_Int_to_Bool_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_int_to_DMI_Icons1_reset_DATA_Packets_EVC_to_DMI(
  outC_CAST_int_to_DMI_Icons1_DATA_Packets_EVC_to_DMI *outC)
{
  /* _L26=(DATA::Variables::CAST_int_to_Area_group#1)/ */
  CAST_int_to_Area_group_reset_DATA_Variables(
    &outC->Context_CAST_int_to_Area_group_1);
  /* _L25=(DATA::Variables::CAST_int_to_Icon_group#1)/ */
  CAST_int_to_Icon_group_reset_DATA_Variables(
    &outC->Context_CAST_int_to_Icon_group_1);
  /* _L24=(DATA::Variables::CAST_to_int_DMI_m_icon_flashing_freq#1)/ */
  CAST_to_int_DMI_m_icon_flashing_freq_reset_DATA_Variables(
    &outC->Context_CAST_to_int_DMI_m_icon_flashing_freq_1);
  /* _L23=(DATA::Variables::CAST_int_to_Icon_control_flag#1)/ */
  CAST_int_to_Icon_control_flag_reset_DATA_Variables(
    &outC->Context_CAST_int_to_Icon_control_flag_1);
  /* _L22=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_reset_Utilities(&outC->Context_Int_to_Bool_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_int_to_DMI_Icons1_DATA_Packets_EVC_to_DMI.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

