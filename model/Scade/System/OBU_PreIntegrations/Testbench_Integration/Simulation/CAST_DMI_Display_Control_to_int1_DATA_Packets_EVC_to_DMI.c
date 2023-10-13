/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_Display_Control_to_int1_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_DMI_Display_Control_to_int1/ */
void CAST_DMI_Display_Control_to_int1_DATA_Packets_EVC_to_DMI(
  /* dmi_display_control_ct/ */
  DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_display_control_ct,
  outC_CAST_DMI_Display_Control_to_int1_DATA_Packets_EVC_to_DMI *outC)
{
  kcg_copy_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L1,
    dmi_display_control_ct);
  outC->_L4 = outC->_L1.cab_is_active;
  /* _L7=(Utilities::Bool_to_Int#2)/ */
  Bool_to_Int_Utilities(outC->_L4, &outC->Context_Bool_to_Int_2);
  outC->_L7 = outC->Context_Bool_to_Int_2.int_out;
  outC->_L5 = outC->_L1.valid;
  /* _L6=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_Utilities(outC->_L5, &outC->Context_Bool_to_Int_1);
  outC->_L6 = outC->Context_Bool_to_Int_1.int_out;
  outC->_L3 = outC->_L1.system_clock;
  outC->_L2[0] = outC->_L6;
  outC->_L2[1] = outC->_L7;
  outC->_L2[2] = outC->_L3;
  kcg_copy_DMI_Display_Control_int_array_T_DATA(
    &outC->dmi_display_control_int,
    &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_DMI_Display_Control_to_int1_init_DATA_Packets_EVC_to_DMI(
  outC_CAST_DMI_Display_Control_to_int1_DATA_Packets_EVC_to_DMI *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L7 = kcg_lit_int64(0);
  outC->_L6 = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  outC->_L4 = kcg_true;
  outC->_L5 = kcg_true;
  for (idx = 0; idx < 3; idx++) {
    outC->_L2[idx] = kcg_lit_int64(0);
  }
  outC->_L1.valid = kcg_true;
  outC->_L1.cab_is_active = kcg_true;
  outC->_L1.system_clock = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 3; idx1++) {
    outC->dmi_display_control_int[idx1] = kcg_lit_int64(0);
  }
  /* _L6=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_init_Utilities(&outC->Context_Bool_to_Int_1);
  /* _L7=(Utilities::Bool_to_Int#2)/ */
  Bool_to_Int_init_Utilities(&outC->Context_Bool_to_Int_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_DMI_Display_Control_to_int1_reset_DATA_Packets_EVC_to_DMI(
  outC_CAST_DMI_Display_Control_to_int1_DATA_Packets_EVC_to_DMI *outC)
{
  /* _L6=(Utilities::Bool_to_Int#1)/ */
  Bool_to_Int_reset_Utilities(&outC->Context_Bool_to_Int_1);
  /* _L7=(Utilities::Bool_to_Int#2)/ */
  Bool_to_Int_reset_Utilities(&outC->Context_Bool_to_Int_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_DMI_Display_Control_to_int1_DATA_Packets_EVC_to_DMI.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

