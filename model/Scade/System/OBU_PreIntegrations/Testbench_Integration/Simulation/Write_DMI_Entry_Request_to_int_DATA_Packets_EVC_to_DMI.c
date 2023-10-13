/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_DMI_Entry_Request_to_int_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::Write_DMI_Entry_Request_to_int/ */
void Write_DMI_Entry_Request_to_int_DATA_Packets_EVC_to_DMI(
  /* dmi_entry_request_ct/ */
  DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_entry_request_ct,
  outC_Write_DMI_Entry_Request_to_int_DATA_Packets_EVC_to_DMI *outC)
{
  static DMI_Entry_Request_int_array_T_DATA op_call;

  kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L1,
    dmi_entry_request_ct);
  outC->_L10 = outC->_L1.valid;
  outC->every = outC->_L10;
  if (outC->every) {
    /* _L8=(DATA::Packets::EVC_to_DMI::CAST_DMI_Entry_Request_to_int1#1)/ */
    CAST_DMI_Entry_Request_to_int1_DATA_Packets_EVC_to_DMI(
      &outC->_L1,
      &outC->Context_CAST_DMI_Entry_Request_to_int1_1);
    kcg_copy_DMI_Entry_Request_int_array_T_DATA(
      &op_call,
      &outC->Context_CAST_DMI_Entry_Request_to_int1_1.dmi_entry_request_int);
  }
  kcg_copy_DMI_Entry_Request_int_array_T_DATA(
    &outC->_L9,
    (DMI_Entry_Request_int_array_T_DATA *)
      &cDMI_Entry_Request_int_DATA_Packets_EVC_to_DMI);
  if (outC->every) {
    kcg_copy_DMI_Entry_Request_int_array_T_DATA(&outC->_L8, &op_call);
  }
  else {
    kcg_copy_DMI_Entry_Request_int_array_T_DATA(&outC->_L8, &outC->_L9);
  }
  kcg_copy_DMI_Entry_Request_int_array_T_DATA(
    &outC->dmi_entry_request_int,
    &outC->_L8);
}

#ifndef KCG_USER_DEFINED_INIT
void Write_DMI_Entry_Request_to_int_init_DATA_Packets_EVC_to_DMI(
  outC_Write_DMI_Entry_Request_to_int_DATA_Packets_EVC_to_DMI *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;

  outC->_L10 = kcg_true;
  for (idx = 0; idx < 3; idx++) {
    outC->_L9[idx] = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 3; idx1++) {
    outC->_L8[idx1] = kcg_lit_int64(0);
  }
  outC->_L1.valid = kcg_true;
  outC->_L1.system_clock = kcg_lit_int64(0);
  outC->_L1.entry_request = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->every = kcg_true;
  for (idx2 = 0; idx2 < 3; idx2++) {
    outC->dmi_entry_request_int[idx2] = kcg_lit_int64(0);
  }
  /* _L8=(DATA::Packets::EVC_to_DMI::CAST_DMI_Entry_Request_to_int1#1)/ */
  CAST_DMI_Entry_Request_to_int1_init_DATA_Packets_EVC_to_DMI(
    &outC->Context_CAST_DMI_Entry_Request_to_int1_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Write_DMI_Entry_Request_to_int_reset_DATA_Packets_EVC_to_DMI(
  outC_Write_DMI_Entry_Request_to_int_DATA_Packets_EVC_to_DMI *outC)
{
  /* _L8=(DATA::Packets::EVC_to_DMI::CAST_DMI_Entry_Request_to_int1#1)/ */
  CAST_DMI_Entry_Request_to_int1_reset_DATA_Packets_EVC_to_DMI(
    &outC->Context_CAST_DMI_Entry_Request_to_int1_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_DMI_Entry_Request_to_int_DATA_Packets_EVC_to_DMI.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

