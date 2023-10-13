/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_Display_Control1_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Display_Control1/ */
void CAST_int_to_DMI_Display_Control1_DATA_Packets_EVC_to_DMI(
  /* dmi_display_control_int/ */
  DMI_Display_Control_int_array_T_DATA *dmi_display_control_int,
  outC_CAST_int_to_DMI_Display_Control1_DATA_Packets_EVC_to_DMI *outC)
{
  kcg_copy_DMI_Display_Control_int_array_T_DATA(
    &outC->_L15,
    dmi_display_control_int);
  outC->_L11 = outC->_L15[1];
  /* _L14=(Utilities::Int_to_Bool#2)/ */
  Int_to_Bool_Utilities(outC->_L11, &outC->Context_Int_to_Bool_2);
  outC->_L14 = outC->Context_Int_to_Bool_2.bool_out;
  outC->_L10 = outC->_L15[0];
  /* _L13=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_Utilities(outC->_L10, &outC->Context_Int_to_Bool_1);
  outC->_L13 = outC->Context_Int_to_Bool_1.bool_out;
  outC->_L12 = outC->_L15[2];
  outC->_L9.valid = outC->_L13;
  outC->_L9.cab_is_active = outC->_L14;
  outC->_L9.system_clock = outC->_L12;
  kcg_copy_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->dmi_display_control_ct,
    &outC->_L9);
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_int_to_DMI_Display_Control1_init_DATA_Packets_EVC_to_DMI(
  outC_CAST_int_to_DMI_Display_Control1_DATA_Packets_EVC_to_DMI *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 3; idx++) {
    outC->_L15[idx] = kcg_lit_int64(0);
  }
  outC->_L9.valid = kcg_true;
  outC->_L9.cab_is_active = kcg_true;
  outC->_L9.system_clock = kcg_lit_int64(0);
  outC->_L12 = kcg_lit_int64(0);
  outC->_L11 = kcg_lit_int64(0);
  outC->_L10 = kcg_lit_int64(0);
  outC->_L13 = kcg_true;
  outC->_L14 = kcg_true;
  outC->dmi_display_control_ct.valid = kcg_true;
  outC->dmi_display_control_ct.cab_is_active = kcg_true;
  outC->dmi_display_control_ct.system_clock = kcg_lit_int64(0);
  /* _L13=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_init_Utilities(&outC->Context_Int_to_Bool_1);
  /* _L14=(Utilities::Int_to_Bool#2)/ */
  Int_to_Bool_init_Utilities(&outC->Context_Int_to_Bool_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_int_to_DMI_Display_Control1_reset_DATA_Packets_EVC_to_DMI(
  outC_CAST_int_to_DMI_Display_Control1_DATA_Packets_EVC_to_DMI *outC)
{
  /* _L13=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_reset_Utilities(&outC->Context_Int_to_Bool_1);
  /* _L14=(Utilities::Int_to_Bool#2)/ */
  Int_to_Bool_reset_Utilities(&outC->Context_Int_to_Bool_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_int_to_DMI_Display_Control1_DATA_Packets_EVC_to_DMI.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

