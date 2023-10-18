/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_Icons_to_int1_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_DMI_Icons_to_int1/ */
void CAST_DMI_Icons_to_int1_DATA_Packets_EVC_to_DMI(
  /* dmi_icons_ct/ */
  DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_icons_ct,
  outC_CAST_DMI_Icons_to_int1_DATA_Packets_EVC_to_DMI *outC)
{
  kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(&outC->_L27, dmi_icons_ct);
  outC->_L4 = outC->_L27.DMI_nid_area_group;
  /* _L26=(DATA::Variables::CAST_Area_group_to_int#1)/ */
  CAST_Area_group_to_int_DATA_Variables(
    outC->_L4,
    &outC->Context_CAST_Area_group_to_int_1);
  outC->_L26 = outC->Context_CAST_Area_group_to_int_1.area_group_int;
  outC->_L6 = outC->_L27.DMI_nid_icon_group;
  /* _L25=(DATA::Variables::CAST_Icon_group_to_int#1)/ */
  CAST_Icon_group_to_int_DATA_Variables(
    outC->_L6,
    &outC->Context_CAST_Icon_group_to_int_1);
  outC->_L25 = outC->Context_CAST_Icon_group_to_int_1.Output1;
  outC->_L7 = outC->_L27.DMI_m_icon_flashing_freq;
  /* _L24=(DATA::Variables::CAST_DMI_m_icon_flashing_freq_to_int#1)/ */
  CAST_DMI_m_icon_flashing_freq_to_int_DATA_Variables(
    outC->_L7,
    &outC->Context_CAST_DMI_m_icon_flashing_freq_to_int_1);
  outC->_L24 =
    outC->Context_CAST_DMI_m_icon_flashing_freq_to_int_1.dmi_m_icon_flashing_freq_int;
  outC->_L8 = outC->_L27.DMI_m_icon_control_flag;
  /* _L23=(DATA::Variables::CAST_Icon_control_flag_to_int#1)/ */
  CAST_Icon_control_flag_to_int_DATA_Variables(
    outC->_L8,
    &outC->Context_CAST_Icon_control_flag_to_int_1);
  outC->_L23 = outC->Context_CAST_Icon_control_flag_to_int_1.Output1;
  outC->_L10 = outC->_L27.valid;
  /* _L22=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_Utilities(outC->_L10, &outC->Context_Bool_to_Int_1);
  outC->_L22 = outC->Context_Bool_to_Int_1.int_out;
  outC->_L9 = outC->_L27.system_clock;
  outC->_L5 = outC->_L27.DMI_nid_icon_rank;
  outC->_L3 = outC->_L27.DMI_nid_area_rank;
  outC->_L2 = outC->_L27.DMI_nid_icon_identifier;
  outC->_L11[0] = outC->_L22;
  outC->_L11[1] = outC->_L9;
  outC->_L11[2] = outC->_L23;
  outC->_L11[3] = outC->_L24;
  outC->_L11[4] = outC->_L25;
  outC->_L11[5] = outC->_L5;
  outC->_L11[6] = outC->_L26;
  outC->_L11[7] = outC->_L3;
  outC->_L11[8] = outC->_L2;
  kcg_copy_DMI_Icons_int_array_T_DATA(&outC->dmi_icons_int, &outC->_L11);
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_DMI_Icons_to_int1_init_DATA_Packets_EVC_to_DMI(
  outC_CAST_DMI_Icons_to_int1_DATA_Packets_EVC_to_DMI *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L27.valid = kcg_true;
  outC->_L27.system_clock = kcg_lit_int64(0);
  outC->_L27.DMI_m_icon_control_flag = show_icon_in_area_DMI_Types_Pkg;
  outC->_L27.DMI_m_icon_flashing_freq = kcg_lit_float64(0.0);
  outC->_L27.DMI_nid_icon_group = level_symbol_DMI_Types_Pkg;
  outC->_L27.DMI_nid_icon_rank = kcg_lit_int64(0);
  outC->_L27.DMI_nid_area_group = A_DMI_Types_Pkg;
  outC->_L27.DMI_nid_area_rank = kcg_lit_int64(0);
  outC->_L27.DMI_nid_icon_identifier = kcg_lit_int64(0);
  outC->_L26 = kcg_lit_int64(0);
  outC->_L25 = kcg_lit_int64(0);
  outC->_L24 = kcg_lit_int64(0);
  outC->_L23 = kcg_lit_int64(0);
  outC->_L22 = kcg_lit_int64(0);
  for (idx = 0; idx < 9; idx++) {
    outC->_L11[idx] = kcg_lit_int64(0);
  }
  outC->_L2 = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  outC->_L4 = A_DMI_Types_Pkg;
  outC->_L5 = kcg_lit_int64(0);
  outC->_L6 = level_symbol_DMI_Types_Pkg;
  outC->_L7 = kcg_lit_float64(0.0);
  outC->_L8 = show_icon_in_area_DMI_Types_Pkg;
  outC->_L9 = kcg_lit_int64(0);
  outC->_L10 = kcg_true;
  for (idx1 = 0; idx1 < 9; idx1++) {
    outC->dmi_icons_int[idx1] = kcg_lit_int64(0);
  }
  /* _L22=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_init_Utilities(&outC->Context_Bool_to_Int_1);
  /* _L23=(DATA::Variables::CAST_Icon_control_flag_to_int#1)/ */
  CAST_Icon_control_flag_to_int_init_DATA_Variables(
    &outC->Context_CAST_Icon_control_flag_to_int_1);
  /* _L24=(DATA::Variables::CAST_DMI_m_icon_flashing_freq_to_int#1)/ */
  CAST_DMI_m_icon_flashing_freq_to_int_init_DATA_Variables(
    &outC->Context_CAST_DMI_m_icon_flashing_freq_to_int_1);
  /* _L25=(DATA::Variables::CAST_Icon_group_to_int#1)/ */
  CAST_Icon_group_to_int_init_DATA_Variables(
    &outC->Context_CAST_Icon_group_to_int_1);
  /* _L26=(DATA::Variables::CAST_Area_group_to_int#1)/ */
  CAST_Area_group_to_int_init_DATA_Variables(
    &outC->Context_CAST_Area_group_to_int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_DMI_Icons_to_int1_reset_DATA_Packets_EVC_to_DMI(
  outC_CAST_DMI_Icons_to_int1_DATA_Packets_EVC_to_DMI *outC)
{
  /* _L22=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_reset_Utilities(&outC->Context_Bool_to_Int_1);
  /* _L23=(DATA::Variables::CAST_Icon_control_flag_to_int#1)/ */
  CAST_Icon_control_flag_to_int_reset_DATA_Variables(
    &outC->Context_CAST_Icon_control_flag_to_int_1);
  /* _L24=(DATA::Variables::CAST_DMI_m_icon_flashing_freq_to_int#1)/ */
  CAST_DMI_m_icon_flashing_freq_to_int_reset_DATA_Variables(
    &outC->Context_CAST_DMI_m_icon_flashing_freq_to_int_1);
  /* _L25=(DATA::Variables::CAST_Icon_group_to_int#1)/ */
  CAST_Icon_group_to_int_reset_DATA_Variables(
    &outC->Context_CAST_Icon_group_to_int_1);
  /* _L26=(DATA::Variables::CAST_Area_group_to_int#1)/ */
  CAST_Area_group_to_int_reset_DATA_Variables(
    &outC->Context_CAST_Area_group_to_int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_DMI_Icons_to_int1_DATA_Packets_EVC_to_DMI.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

