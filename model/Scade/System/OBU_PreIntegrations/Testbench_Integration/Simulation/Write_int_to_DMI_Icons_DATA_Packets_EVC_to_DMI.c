/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_Icons_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Icons/ */
void Write_int_to_DMI_Icons_DATA_Packets_EVC_to_DMI(
  /* dmi_icons_int/ */
  DMI_Icons_int_array_T_DATA *dmi_icons_int,
  outC_Write_int_to_DMI_Icons_DATA_Packets_EVC_to_DMI *outC)
{
  static DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg op_call;

  kcg_copy_DMI_Icons_int_array_T_DATA(&outC->_L29, dmi_icons_int);
  outC->_L32 = outC->_L29[0];
  outC->_L31 = kcg_lit_int64(1);
  outC->_L33 = outC->_L31 == outC->_L32;
  outC->every = outC->_L33;
  if (outC->every) {
    /* _L30=(DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Icons1#1)/ */
    CAST_int_to_DMI_Icons1_DATA_Packets_EVC_to_DMI(
      &outC->_L29,
      &outC->Context_CAST_int_to_DMI_Icons1_1);
    kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
      &op_call,
      &outC->Context_CAST_int_to_DMI_Icons1_1.dmi_icons_ct);
  }
  kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L34,
    (DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg *)
      &cDMI_Icons_DATA_Packets_EVC_to_DMI);
  if (outC->every) {
    kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(&outC->_L30, &op_call);
  }
  else {
    kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(&outC->_L30, &outC->_L34);
  }
  kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->dmi_icons_ct,
    &outC->_L30);
}

#ifndef KCG_USER_DEFINED_INIT
void Write_int_to_DMI_Icons_init_DATA_Packets_EVC_to_DMI(
  outC_Write_int_to_DMI_Icons_DATA_Packets_EVC_to_DMI *outC)
{
  static kcg_size idx;

  outC->_L34.valid = kcg_true;
  outC->_L34.system_clock = kcg_lit_int64(0);
  outC->_L34.DMI_m_icon_control_flag = show_icon_in_area_DMI_Types_Pkg;
  outC->_L34.DMI_m_icon_flashing_freq = kcg_lit_float64(0.0);
  outC->_L34.DMI_nid_icon_group = level_symbol_DMI_Types_Pkg;
  outC->_L34.DMI_nid_icon_rank = kcg_lit_int64(0);
  outC->_L34.DMI_nid_area_group = A_DMI_Types_Pkg;
  outC->_L34.DMI_nid_area_rank = kcg_lit_int64(0);
  outC->_L34.DMI_nid_icon_identifier = kcg_lit_int64(0);
  outC->_L31 = kcg_lit_int64(0);
  outC->_L32 = kcg_lit_int64(0);
  outC->_L33 = kcg_true;
  outC->_L30.valid = kcg_true;
  outC->_L30.system_clock = kcg_lit_int64(0);
  outC->_L30.DMI_m_icon_control_flag = show_icon_in_area_DMI_Types_Pkg;
  outC->_L30.DMI_m_icon_flashing_freq = kcg_lit_float64(0.0);
  outC->_L30.DMI_nid_icon_group = level_symbol_DMI_Types_Pkg;
  outC->_L30.DMI_nid_icon_rank = kcg_lit_int64(0);
  outC->_L30.DMI_nid_area_group = A_DMI_Types_Pkg;
  outC->_L30.DMI_nid_area_rank = kcg_lit_int64(0);
  outC->_L30.DMI_nid_icon_identifier = kcg_lit_int64(0);
  for (idx = 0; idx < 9; idx++) {
    outC->_L29[idx] = kcg_lit_int64(0);
  }
  outC->every = kcg_true;
  outC->dmi_icons_ct.valid = kcg_true;
  outC->dmi_icons_ct.system_clock = kcg_lit_int64(0);
  outC->dmi_icons_ct.DMI_m_icon_control_flag = show_icon_in_area_DMI_Types_Pkg;
  outC->dmi_icons_ct.DMI_m_icon_flashing_freq = kcg_lit_float64(0.0);
  outC->dmi_icons_ct.DMI_nid_icon_group = level_symbol_DMI_Types_Pkg;
  outC->dmi_icons_ct.DMI_nid_icon_rank = kcg_lit_int64(0);
  outC->dmi_icons_ct.DMI_nid_area_group = A_DMI_Types_Pkg;
  outC->dmi_icons_ct.DMI_nid_area_rank = kcg_lit_int64(0);
  outC->dmi_icons_ct.DMI_nid_icon_identifier = kcg_lit_int64(0);
  /* _L30=(DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Icons1#1)/ */
  CAST_int_to_DMI_Icons1_init_DATA_Packets_EVC_to_DMI(
    &outC->Context_CAST_int_to_DMI_Icons1_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Write_int_to_DMI_Icons_reset_DATA_Packets_EVC_to_DMI(
  outC_Write_int_to_DMI_Icons_DATA_Packets_EVC_to_DMI *outC)
{
  /* _L30=(DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Icons1#1)/ */
  CAST_int_to_DMI_Icons1_reset_DATA_Packets_EVC_to_DMI(
    &outC->Context_CAST_int_to_DMI_Icons1_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_int_to_DMI_Icons_DATA_Packets_EVC_to_DMI.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

