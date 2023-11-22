/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_DMI_Display_Control_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::Write_DMI_Display_Control_to_int/ */
void Write_DMI_Display_Control_DATA_Packets_EVC_to_DMI(
  /* dmi_display_control_ct/ */
  DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_display_control_ct,
  outC_Write_DMI_Display_Control_DATA_Packets_EVC_to_DMI *outC)
{
  DMI_Display_Control_int_array_T_DATA op_call;

  kcg_copy_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L1,
    dmi_display_control_ct);
  outC->_L10 = outC->_L1.valid;
  outC->every = outC->_L10;
  if (outC->every) {
    /* _L8=(DATA::Packets::EVC_to_DMI::CAST_DMI_Display_Control_to_int1#1)/ */
    CAST_DMI_Display_Control__DATA_Packets_EVC_to_DMI(
      &outC->_L1,
      &outC->Context_CAST_DMI_Display_Control_to_int1_1);
    kcg_copy_DMI_Display_Control_int_array_T_DATA(
      &op_call,
      &outC->Context_CAST_DMI_Display_Control_to_int1_1.dmi_display_control_int);
  }
  kcg_copy_DMI_Display_Control_int_array_T_DATA(
    &outC->_L9,
    (DMI_Display_Control_int_array_T_DATA *)
      &cDMI_Display_Control_int_DATA_Packets_EVC_to_DMI);
  if (outC->every) {
    kcg_copy_DMI_Display_Control_int_array_T_DATA(&outC->_L8, &op_call);
  }
  else {
    kcg_copy_DMI_Display_Control_int_array_T_DATA(&outC->_L8, &outC->_L9);
  }
  kcg_copy_DMI_Display_Control_int_array_T_DATA(
    &outC->dmi_display_control_int,
    &outC->_L8);
}

#ifndef KCG_USER_DEFINED_INIT
void Write_DMI_Display_Control_init_DATA_Packets_EVC_to_DMI(
  outC_Write_DMI_Display_Control_DATA_Packets_EVC_to_DMI *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;

  outC->_L10 = kcg_true;
  for (idx = 0; idx < 3; idx++) {
    outC->_L9[idx] = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 3; idx1++) {
    outC->_L8[idx1] = kcg_lit_int32(0);
  }
  outC->_L1.valid = kcg_true;
  outC->_L1.cab_is_active = kcg_true;
  outC->_L1.system_clock = kcg_lit_int32(0);
  outC->every = kcg_true;
  for (idx2 = 0; idx2 < 3; idx2++) {
    outC->dmi_display_control_int[idx2] = kcg_lit_int32(0);
  }
  /* _L8=(DATA::Packets::EVC_to_DMI::CAST_DMI_Display_Control_to_int1#1)/ */
  CAST_DMI_Display_Control__init_DATA_Packets_EVC_to_DMI(
    &outC->Context_CAST_DMI_Display_Control_to_int1_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Write_DMI_Display_Control_reset_DATA_Packets_EVC_to_DMI(
  outC_Write_DMI_Display_Control_DATA_Packets_EVC_to_DMI *outC)
{
  /* _L8=(DATA::Packets::EVC_to_DMI::CAST_DMI_Display_Control_to_int1#1)/ */
  CAST_DMI_Display_Control__reset_DATA_Packets_EVC_to_DMI(
    &outC->Context_CAST_DMI_Display_Control_to_int1_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_DMI_Display_Control_DATA_Packets_EVC_to_DMI.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

