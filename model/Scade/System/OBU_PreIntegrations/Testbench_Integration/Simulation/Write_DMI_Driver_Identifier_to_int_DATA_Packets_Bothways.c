/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_DMI_Driver_Identifier_to_int_DATA_Packets_Bothways.h"

/* DATA::Packets::Bothways::Write_DMI_Driver_Identifier_to_int/ */
void Write_DMI_Driver_Identifier_to_int_DATA_Packets_Bothways(
  /* dmi_driver_identifier_ct/ */
  DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg *dmi_driver_identifier_ct,
  outC_Write_DMI_Driver_Identifier_to_int_DATA_Packets_Bothways *outC)
{
  static DMI_Driver_Identifier_int_array_T_DATA op_call;

  kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
    &outC->_L13,
    dmi_driver_identifier_ct);
  outC->_L22 = outC->_L13.valid;
  outC->every = outC->_L22;
  if (outC->every) {
    /* _L23=(DATA::Packets::Bothways::C_DMI_Driver_Identifier_to_int#1)/ */
    C_DMI_Driver_Identifier_to_int_DATA_Packets_Bothways(
      &outC->_L13,
      &outC->Context_C_DMI_Driver_Identifier_to_int_1);
    kcg_copy_DMI_Driver_Identifier_int_array_T_DATA(
      &op_call,
      &outC->Context_C_DMI_Driver_Identifier_to_int_1.dmi_driver_identifier_int);
  }
  kcg_copy_DMI_Driver_Identifier_int_array_T_DATA(
    &outC->_L21,
    (DMI_Driver_Identifier_int_array_T_DATA *)
      &cDMI_Driver_Identifier_int_DATA_Packets_Bothways);
  if (outC->every) {
    kcg_copy_DMI_Driver_Identifier_int_array_T_DATA(&outC->_L23, &op_call);
  }
  else {
    kcg_copy_DMI_Driver_Identifier_int_array_T_DATA(&outC->_L23, &outC->_L21);
  }
  kcg_copy_DMI_Driver_Identifier_int_array_T_DATA(
    &outC->dmi_driver_identifier_int,
    &outC->_L23);
}

#ifndef KCG_USER_DEFINED_INIT
void Write_DMI_Driver_Identifier_to_int_init_DATA_Packets_Bothways(
  outC_Write_DMI_Driver_Identifier_to_int_DATA_Packets_Bothways *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  for (idx = 0; idx < 11; idx++) {
    outC->_L21[idx] = kcg_lit_int32(0);
  }
  outC->_L22 = kcg_true;
  for (idx1 = 0; idx1 < 11; idx1++) {
    outC->_L23[idx1] = kcg_lit_int32(0);
  }
  outC->_L13.valid = kcg_true;
  outC->_L13.systemTime = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 9; idx2++) {
    outC->_L13.driverIdentifier[idx2] = ' ';
  }
  outC->every = kcg_true;
  for (idx3 = 0; idx3 < 11; idx3++) {
    outC->dmi_driver_identifier_int[idx3] = kcg_lit_int32(0);
  }
  /* _L23=(DATA::Packets::Bothways::C_DMI_Driver_Identifier_to_int#1)/ */
  C_DMI_Driver_Identifier_to_int_init_DATA_Packets_Bothways(
    &outC->Context_C_DMI_Driver_Identifier_to_int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Write_DMI_Driver_Identifier_to_int_reset_DATA_Packets_Bothways(
  outC_Write_DMI_Driver_Identifier_to_int_DATA_Packets_Bothways *outC)
{
  /* _L23=(DATA::Packets::Bothways::C_DMI_Driver_Identifier_to_int#1)/ */
  C_DMI_Driver_Identifier_to_int_reset_DATA_Packets_Bothways(
    &outC->Context_C_DMI_Driver_Identifier_to_int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_DMI_Driver_Identifier_to_int_DATA_Packets_Bothways.c
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

