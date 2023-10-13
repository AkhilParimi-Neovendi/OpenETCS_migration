/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways.h"

/* DATA::Packets::Bothways::Write_int_to_DMI_Driver_Identifier/ */
void Write_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways(
  /* dmi_driver_identifier_int/ */
  DMI_Driver_Identifier_int_array_T_DATA *dmi_driver_identifier_int,
  outC_Write_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways *outC)
{
  static DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg op_call;

  kcg_copy_DMI_Driver_Identifier_int_array_T_DATA(
    &outC->_L9,
    dmi_driver_identifier_int);
  outC->_L22 = outC->_L9[0];
  outC->_L26 = kcg_lit_int64(1);
  outC->_L25 = outC->_L26 == outC->_L22;
  outC->every = outC->_L25;
  if (outC->every) {
    /* _L24=(DATA::Packets::Bothways::C_int_to_DMI_Driver_Identifier#1)/ */
    C_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways(
      &outC->_L9,
      &outC->Context_C_int_to_DMI_Driver_Identifier_1);
    kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
      &op_call,
      &outC->Context_C_int_to_DMI_Driver_Identifier_1.dmi_driver_identifier_ct);
  }
  kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
    &outC->_L23,
    (DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg *)
      &cDMI_Driver_Identifier_DATA_Packets_Bothways);
  if (outC->every) {
    kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
      &outC->_L24,
      &op_call);
  }
  else {
    kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
      &outC->_L24,
      &outC->_L23);
  }
  kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
    &outC->dmi_driver_identifier_ct,
    &outC->_L24);
}

#ifndef KCG_USER_DEFINED_INIT
void Write_int_to_DMI_Driver_Identifier_init_DATA_Packets_Bothways(
  outC_Write_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  outC->_L22 = kcg_lit_int64(0);
  outC->_L23.valid = kcg_true;
  outC->_L23.systemTime = kcg_lit_int64(0);
  for (idx = 0; idx < 9; idx++) {
    outC->_L23.driverIdentifier[idx] = ' ';
  }
  outC->_L24.valid = kcg_true;
  outC->_L24.systemTime = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 9; idx1++) {
    outC->_L24.driverIdentifier[idx1] = ' ';
  }
  outC->_L25 = kcg_true;
  outC->_L26 = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 11; idx2++) {
    outC->_L9[idx2] = kcg_lit_int64(0);
  }
  outC->every = kcg_true;
  outC->dmi_driver_identifier_ct.valid = kcg_true;
  outC->dmi_driver_identifier_ct.systemTime = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 9; idx3++) {
    outC->dmi_driver_identifier_ct.driverIdentifier[idx3] = ' ';
  }
  /* _L24=(DATA::Packets::Bothways::C_int_to_DMI_Driver_Identifier#1)/ */
  C_int_to_DMI_Driver_Identifier_init_DATA_Packets_Bothways(
    &outC->Context_C_int_to_DMI_Driver_Identifier_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Write_int_to_DMI_Driver_Identifier_reset_DATA_Packets_Bothways(
  outC_Write_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways *outC)
{
  /* _L24=(DATA::Packets::Bothways::C_int_to_DMI_Driver_Identifier#1)/ */
  C_int_to_DMI_Driver_Identifier_reset_DATA_Packets_Bothways(
    &outC->Context_C_int_to_DMI_Driver_Identifier_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

