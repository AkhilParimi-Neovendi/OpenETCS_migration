/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_Entry_Request_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Entry_Request/ */
void Write_int_to_DMI_Entry_Request_DATA_Packets_EVC_to_DMI(
  /* dmi_entry_request_int/ */
  DMI_Entry_Request_int_array_T_DATA *dmi_entry_request_int,
  outC_Write_int_to_DMI_Entry_Request_DATA_Packets_EVC_to_DMI *outC)
{
  static DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg op_call;

  kcg_copy_DMI_Entry_Request_int_array_T_DATA(&outC->_L15, dmi_entry_request_int);
  outC->_L18 = outC->_L15[0];
  outC->_L19 = kcg_lit_int64(1);
  outC->_L20 = outC->_L19 == outC->_L18;
  outC->every = outC->_L20;
  if (outC->every) {
    /* _L17=(DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Entry_Request1#1)/ */
    CAST_int_to_DMI_Entry_Request1_DATA_Packets_EVC_to_DMI(
      &outC->_L15,
      &outC->Context_CAST_int_to_DMI_Entry_Request1_1);
    kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &op_call,
      &outC->Context_CAST_int_to_DMI_Entry_Request1_1.dmi_entry_request_ct);
  }
  kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L21,
    (DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg *)
      &cDMI_Entry_Request_DATA_Packets_EVC_to_DMI);
  if (outC->every) {
    kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(&outC->_L17, &op_call);
  }
  else {
    kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L17,
      &outC->_L21);
  }
  kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->dmi_entry_request_ct,
    &outC->_L17);
}

#ifndef KCG_USER_DEFINED_INIT
void Write_int_to_DMI_Entry_Request_init_DATA_Packets_EVC_to_DMI(
  outC_Write_int_to_DMI_Entry_Request_DATA_Packets_EVC_to_DMI *outC)
{
  static kcg_size idx;

  outC->_L21.valid = kcg_true;
  outC->_L21.system_clock = kcg_lit_int64(0);
  outC->_L21.entry_request = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->_L18 = kcg_lit_int64(0);
  outC->_L19 = kcg_lit_int64(0);
  outC->_L20 = kcg_true;
  outC->_L17.valid = kcg_true;
  outC->_L17.system_clock = kcg_lit_int64(0);
  outC->_L17.entry_request = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  for (idx = 0; idx < 3; idx++) {
    outC->_L15[idx] = kcg_lit_int64(0);
  }
  outC->every = kcg_true;
  outC->dmi_entry_request_ct.valid = kcg_true;
  outC->dmi_entry_request_ct.system_clock = kcg_lit_int64(0);
  outC->dmi_entry_request_ct.entry_request =
    Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  /* _L17=(DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Entry_Request1#1)/ */
  CAST_int_to_DMI_Entry_Request1_init_DATA_Packets_EVC_to_DMI(
    &outC->Context_CAST_int_to_DMI_Entry_Request1_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Write_int_to_DMI_Entry_Request_reset_DATA_Packets_EVC_to_DMI(
  outC_Write_int_to_DMI_Entry_Request_DATA_Packets_EVC_to_DMI *outC)
{
  /* _L17=(DATA::Packets::EVC_to_DMI::CAST_int_to_DMI_Entry_Request1#1)/ */
  CAST_int_to_DMI_Entry_Request1_reset_DATA_Packets_EVC_to_DMI(
    &outC->Context_CAST_int_to_DMI_Entry_Request1_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_int_to_DMI_Entry_Request_DATA_Packets_EVC_to_DMI.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

