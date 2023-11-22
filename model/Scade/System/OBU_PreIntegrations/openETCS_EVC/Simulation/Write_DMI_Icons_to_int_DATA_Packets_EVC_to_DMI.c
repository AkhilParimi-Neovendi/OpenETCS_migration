/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_DMI_Icons_to_int_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::Write_DMI_Icons_to_int/ */
void Write_DMI_Icons_to_int_DATA_Packets_EVC_to_DMI(
  /* dmi_icons_ct/ */
  DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_icons_ct,
  outC_Write_DMI_Icons_to_int_DATA_Packets_EVC_to_DMI *outC)
{
  DMI_Icons_int_array_T_DATA op_call;

  kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(&outC->_L27, dmi_icons_ct);
  outC->_L29 = outC->_L27.valid;
  outC->every = outC->_L29;
  if (outC->every) {
    /* _L28=(DATA::Packets::EVC_to_DMI::CAST_DMI_Icons_to_int1#1)/ */
    CAST_DMI_Icons_to_int1_DATA_Packets_EVC_to_DMI(
      &outC->_L27,
      &outC->Context_CAST_DMI_Icons_to_int1_1);
    kcg_copy_DMI_Icons_int_array_T_DATA(
      &op_call,
      &outC->Context_CAST_DMI_Icons_to_int1_1.dmi_icons_int);
  }
  kcg_copy_DMI_Icons_int_array_T_DATA(
    &outC->_L30,
    (DMI_Icons_int_array_T_DATA *) &cDMI_Icons_int_DATA_Packets_EVC_to_DMI);
  if (outC->every) {
    kcg_copy_DMI_Icons_int_array_T_DATA(&outC->_L28, &op_call);
  }
  else {
    kcg_copy_DMI_Icons_int_array_T_DATA(&outC->_L28, &outC->_L30);
  }
  kcg_copy_DMI_Icons_int_array_T_DATA(&outC->dmi_icons_int, &outC->_L28);
}

#ifndef KCG_USER_DEFINED_INIT
void Write_DMI_Icons_to_int_init_DATA_Packets_EVC_to_DMI(
  outC_Write_DMI_Icons_to_int_DATA_Packets_EVC_to_DMI *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;

  for (idx = 0; idx < 9; idx++) {
    outC->_L30[idx] = kcg_lit_int32(0);
  }
  outC->_L29 = kcg_true;
  for (idx1 = 0; idx1 < 9; idx1++) {
    outC->_L28[idx1] = kcg_lit_int32(0);
  }
  outC->_L27.valid = kcg_true;
  outC->_L27.system_clock = kcg_lit_int32(0);
  outC->_L27.DMI_m_icon_control_flag = show_icon_in_area_DMI_Types_Pkg;
  outC->_L27.DMI_m_icon_flashing_freq = kcg_lit_float32(0.0);
  outC->_L27.DMI_nid_icon_group = level_symbol_DMI_Types_Pkg;
  outC->_L27.DMI_nid_icon_rank = kcg_lit_int32(0);
  outC->_L27.DMI_nid_area_group = A_DMI_Types_Pkg;
  outC->_L27.DMI_nid_area_rank = kcg_lit_int32(0);
  outC->_L27.DMI_nid_icon_identifier = kcg_lit_int32(0);
  outC->every = kcg_true;
  for (idx2 = 0; idx2 < 9; idx2++) {
    outC->dmi_icons_int[idx2] = kcg_lit_int32(0);
  }
  /* _L28=(DATA::Packets::EVC_to_DMI::CAST_DMI_Icons_to_int1#1)/ */
  CAST_DMI_Icons_to_int1_init_DATA_Packets_EVC_to_DMI(
    &outC->Context_CAST_DMI_Icons_to_int1_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Write_DMI_Icons_to_int_reset_DATA_Packets_EVC_to_DMI(
  outC_Write_DMI_Icons_to_int_DATA_Packets_EVC_to_DMI *outC)
{
  /* _L28=(DATA::Packets::EVC_to_DMI::CAST_DMI_Icons_to_int1#1)/ */
  CAST_DMI_Icons_to_int1_reset_DATA_Packets_EVC_to_DMI(
    &outC->Context_CAST_DMI_Icons_to_int1_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_DMI_Icons_to_int_DATA_Packets_EVC_to_DMI.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

