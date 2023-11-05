/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_Display_Control_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Display_Control/ */
void Write_int_to_DMI_Display_Control_DATA_Packets_EVC_to_DMI(
  /* dmi_display_control_int/ */
  DMI_Display_Control_int_array_T_DATA *dmi_display_control_int,
  outC_Write_int_to_DMI_Display_Control_DATA_Packets_EVC_to_DMI *outC)
{
  static DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg op_call;

  kcg_copy_DMI_Display_Control_int_array_T_DATA(
    &outC->_L15,
    dmi_display_control_int);
  outC->_L17 = outC->_L15[0];
  outC->_L19 = kcg_lit_int32(1);
  outC->_L18 = outC->_L19 == outC->_L17;
  outC->every = outC->_L18;
  if (outC->every) {
    /* _L16=(DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Display_Control1#1)/ */
    CAST_int_to_DMI_Display_Control1_DATA_Packets_EVC_to_DMI(
      &outC->_L15,
      &outC->Context_CAST_int_to_DMI_Display_Control1_1);
    kcg_copy_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg(
      &op_call,
      &outC->Context_CAST_int_to_DMI_Display_Control1_1.dmi_display_control_ct);
  }
  kcg_copy_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L20,
    (DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg *)
      &cDMI_Display_Control_DATA_Packets_EVC_to_DMI);
  if (outC->every) {
    kcg_copy_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L16,
      &op_call);
  }
  else {
    kcg_copy_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L16,
      &outC->_L20);
  }
  kcg_copy_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->dmi_display_control_ct,
    &outC->_L16);
}

#ifndef KCG_USER_DEFINED_INIT
void Write_int_to_DMI_Display_Control_init_DATA_Packets_EVC_to_DMI(
  outC_Write_int_to_DMI_Display_Control_DATA_Packets_EVC_to_DMI *outC)
{
  static kcg_size idx;

  outC->_L20.valid = kcg_true;
  outC->_L20.cab_is_active = kcg_true;
  outC->_L20.system_clock = kcg_lit_int32(0);
  outC->_L17 = kcg_lit_int32(0);
  outC->_L18 = kcg_true;
  outC->_L19 = kcg_lit_int32(0);
  outC->_L16.valid = kcg_true;
  outC->_L16.cab_is_active = kcg_true;
  outC->_L16.system_clock = kcg_lit_int32(0);
  for (idx = 0; idx < 3; idx++) {
    outC->_L15[idx] = kcg_lit_int32(0);
  }
  outC->every = kcg_true;
  outC->dmi_display_control_ct.valid = kcg_true;
  outC->dmi_display_control_ct.cab_is_active = kcg_true;
  outC->dmi_display_control_ct.system_clock = kcg_lit_int32(0);
  /* _L16=(DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Display_Control1#1)/ */
  CAST_int_to_DMI_Display_Control1_init_DATA_Packets_EVC_to_DMI(
    &outC->Context_CAST_int_to_DMI_Display_Control1_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Write_int_to_DMI_Display_Control_reset_DATA_Packets_EVC_to_DMI(
  outC_Write_int_to_DMI_Display_Control_DATA_Packets_EVC_to_DMI *outC)
{
  /* _L16=(DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Display_Control1#1)/ */
  CAST_int_to_DMI_Display_Control1_reset_DATA_Packets_EVC_to_DMI(
    &outC->Context_CAST_int_to_DMI_Display_Control1_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_int_to_DMI_Display_Control_DATA_Packets_EVC_to_DMI.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

