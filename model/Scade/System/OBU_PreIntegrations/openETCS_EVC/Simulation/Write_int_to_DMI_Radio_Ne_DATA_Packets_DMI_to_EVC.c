/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_Radio_Ne_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Radio_Net_Data/ */
void Write_int_to_DMI_Radio_Ne_DATA_Packets_DMI_to_EVC(
  /* dmi_radio_net_data_int/ */
  DMI_Radio_Net_Data_int_array_T_DATA *dmi_radio_net_data_int,
  outC_Write_int_to_DMI_Radio_Ne_DATA_Packets_DMI_to_EVC *outC)
{
  DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg op_call;

  kcg_copy_DMI_Radio_Net_Data_int_array_T_DATA(
    &outC->_L5,
    dmi_radio_net_data_int);
  outC->_L10 = outC->_L5[0];
  outC->_L11 = kcg_lit_int32(1);
  outC->_L9 = outC->_L11 == outC->_L10;
  outC->every = outC->_L9;
  if (outC->every) {
    /* _L7=(DATA::Packets::DMI_to_EVC::C_int_to_DMI_Radio_Net_Data#1)/ */
    C_int_to_DMI_Radio_Net_Data_DATA_Packets_DMI_to_EVC(
      &outC->_L5,
      &outC->Context_C_int_to_DMI_Radio_Net_Data_1);
    kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(
      &op_call,
      &outC->Context_C_int_to_DMI_Radio_Net_Data_1.dmi_radio_net_data_ct);
  }
  kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L12,
    (DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg *)
      &cDMI_Radio_Net_Data_DATA_Packets_DMI_to_EVC);
  if (outC->every) {
    kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(&outC->_L7, &op_call);
  }
  else {
    kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->_L7,
      &outC->_L12);
  }
  kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->dmi_radio_net_data_ct,
    &outC->_L7);
}

#ifndef KCG_USER_DEFINED_INIT
void Write_int_to_DMI_Radio_Ne_init_DATA_Packets_DMI_to_EVC(
  outC_Write_int_to_DMI_Radio_Ne_DATA_Packets_DMI_to_EVC *outC)
{
  kcg_size idx;

  outC->_L12.valid = kcg_true;
  outC->_L12.systemTime = kcg_lit_int32(0);
  outC->_L9 = kcg_true;
  outC->_L10 = kcg_lit_int32(0);
  outC->_L11 = kcg_lit_int32(0);
  outC->_L7.valid = kcg_true;
  outC->_L7.systemTime = kcg_lit_int32(0);
  for (idx = 0; idx < 2; idx++) {
    outC->_L5[idx] = kcg_lit_int32(0);
  }
  outC->every = kcg_true;
  outC->dmi_radio_net_data_ct.valid = kcg_true;
  outC->dmi_radio_net_data_ct.systemTime = kcg_lit_int32(0);
  /* _L7=(DATA::Packets::DMI_to_EVC::C_int_to_DMI_Radio_Net_Data#1)/ */
  C_int_to_DMI_Radio_Net_Data_init_DATA_Packets_DMI_to_EVC(
    &outC->Context_C_int_to_DMI_Radio_Net_Data_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Write_int_to_DMI_Radio_Ne_reset_DATA_Packets_DMI_to_EVC(
  outC_Write_int_to_DMI_Radio_Ne_DATA_Packets_DMI_to_EVC *outC)
{
  /* _L7=(DATA::Packets::DMI_to_EVC::C_int_to_DMI_Radio_Net_Data#1)/ */
  C_int_to_DMI_Radio_Net_Data_reset_DATA_Packets_DMI_to_EVC(
    &outC->Context_C_int_to_DMI_Radio_Net_Data_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_int_to_DMI_Radio_Ne_DATA_Packets_DMI_to_EVC.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

