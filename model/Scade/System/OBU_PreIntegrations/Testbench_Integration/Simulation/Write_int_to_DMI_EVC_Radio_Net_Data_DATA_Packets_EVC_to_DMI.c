/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_EVC_Radio_Net_Data_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::Write_int_to_DMI_EVC_Radio_Net_Data/ */
void Write_int_to_DMI_EVC_Radio_Net_Data_DATA_Packets_EVC_to_DMI(
  /* dmi_evc_radio_net_data_int/ */
  DMI_EVC_Radio_Net_Data_int_array_T_DATA *dmi_evc_radio_net_data_int,
  outC_Write_int_to_DMI_EVC_Radio_Net_Data_DATA_Packets_EVC_to_DMI *outC)
{
  static DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg op_call;

  kcg_copy_DMI_EVC_Radio_Net_Data_int_array_T_DATA(
    &outC->_L10,
    dmi_evc_radio_net_data_int);
  outC->_L14 = outC->_L10[0];
  outC->_L13 = kcg_lit_int64(1);
  outC->_L12 = outC->_L13 == outC->_L14;
  outC->every = outC->_L12;
  if (outC->every) {
    /* _L11=(DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Radio_Net_Data1#1)/ */
    CAST_int_to_DMI_EVC_Radio_Net_Data1_DATA_Packets_EVC_to_DMI(
      &outC->_L10,
      &outC->Context_CAST_int_to_DMI_EVC_Radio_Net_Data1_1);
    kcg_copy_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
      &op_call,
      &outC->Context_CAST_int_to_DMI_EVC_Radio_Net_Data1_1.dmi_evc_radio_net_data_ct);
  }
  kcg_copy_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L15,
    (DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg *)
      &cDMI_EVC_Radio_Net_Data_DATA_Packets_EVC_to_DMI);
  if (outC->every) {
    kcg_copy_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L11,
      &op_call);
  }
  else {
    kcg_copy_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L11,
      &outC->_L15);
  }
  kcg_copy_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->dmi_evc_radio_net_data_ct,
    &outC->_L11);
}

#ifndef KCG_USER_DEFINED_INIT
void Write_int_to_DMI_EVC_Radio_Net_Data_init_DATA_Packets_EVC_to_DMI(
  outC_Write_int_to_DMI_EVC_Radio_Net_Data_DATA_Packets_EVC_to_DMI *outC)
{
  static kcg_size idx;

  outC->_L15.valid = kcg_true;
  outC->_L15.system_clock = kcg_lit_int64(0);
  outC->_L15.nid_mn = kcg_lit_int64(0);
  outC->_L12 = kcg_true;
  outC->_L13 = kcg_lit_int64(0);
  outC->_L14 = kcg_lit_int64(0);
  outC->_L11.valid = kcg_true;
  outC->_L11.system_clock = kcg_lit_int64(0);
  outC->_L11.nid_mn = kcg_lit_int64(0);
  for (idx = 0; idx < 3; idx++) {
    outC->_L10[idx] = kcg_lit_int64(0);
  }
  outC->every = kcg_true;
  outC->dmi_evc_radio_net_data_ct.valid = kcg_true;
  outC->dmi_evc_radio_net_data_ct.system_clock = kcg_lit_int64(0);
  outC->dmi_evc_radio_net_data_ct.nid_mn = kcg_lit_int64(0);
  /* _L11=(DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Radio_Net_Data1#1)/ */
  CAST_int_to_DMI_EVC_Radio_Net_Data1_init_DATA_Packets_EVC_to_DMI(
    &outC->Context_CAST_int_to_DMI_EVC_Radio_Net_Data1_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Write_int_to_DMI_EVC_Radio_Net_Data_reset_DATA_Packets_EVC_to_DMI(
  outC_Write_int_to_DMI_EVC_Radio_Net_Data_DATA_Packets_EVC_to_DMI *outC)
{
  /* _L11=(DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_EVC_Radio_Net_Data1#1)/ */
  CAST_int_to_DMI_EVC_Radio_Net_Data1_reset_DATA_Packets_EVC_to_DMI(
    &outC->Context_CAST_int_to_DMI_EVC_Radio_Net_Data1_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_int_to_DMI_EVC_Radio_Net_Data_DATA_Packets_EVC_to_DMI.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

