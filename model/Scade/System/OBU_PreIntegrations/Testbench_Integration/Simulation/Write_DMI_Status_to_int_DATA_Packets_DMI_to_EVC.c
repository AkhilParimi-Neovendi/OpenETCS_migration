/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_DMI_Status_to_int_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::Write_DMI_Status_to_int/ */
void Write_DMI_Status_to_int_DATA_Packets_DMI_to_EVC(
  /* dim_status_ct/ */
  DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg *dim_status_ct,
  outC_Write_DMI_Status_to_int_DATA_Packets_DMI_to_EVC *outC)
{
  static DMI_Status_int_array_T_DATA op_call;

  kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(&outC->_L17, dim_status_ct);
  outC->_L25 = outC->_L17.valid;
  outC->every = outC->_L25;
  if (outC->every) {
    /* _L24=(DATA::Packets::DMI_to_EVC::C_DMI_Status_to_int#1)/ */
    C_DMI_Status_to_int_DATA_Packets_DMI_to_EVC(
      &outC->_L17,
      &outC->Context_C_DMI_Status_to_int_1);
    kcg_copy_DMI_Status_int_array_T_DATA(
      &op_call,
      &outC->Context_C_DMI_Status_to_int_1.dmi_status_int);
  }
  kcg_copy_DMI_Status_int_array_T_DATA(
    &outC->_L26,
    (DMI_Status_int_array_T_DATA *) &cDMI_Status_int_array_DATA_Packets_DMI_to_EVC);
  if (outC->every) {
    kcg_copy_DMI_Status_int_array_T_DATA(&outC->_L24, &op_call);
  }
  else {
    kcg_copy_DMI_Status_int_array_T_DATA(&outC->_L24, &outC->_L26);
  }
  kcg_copy_DMI_Status_int_array_T_DATA(&outC->dmi_status_int, &outC->_L24);
}

#ifndef KCG_USER_DEFINED_INIT
void Write_DMI_Status_to_int_init_DATA_Packets_DMI_to_EVC(
  outC_Write_DMI_Status_to_int_DATA_Packets_DMI_to_EVC *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;

  for (idx = 0; idx < 4; idx++) {
    outC->_L26[idx] = kcg_lit_int64(0);
  }
  outC->_L25 = kcg_true;
  for (idx1 = 0; idx1 < 4; idx1++) {
    outC->_L24[idx1] = kcg_lit_int64(0);
  }
  outC->_L17.valid = kcg_true;
  outC->_L17.systemTime = kcg_lit_int64(0);
  outC->_L17.statusSet = Running_state_DMI_Types_Pkg;
  outC->_L17.nAlive = kcg_lit_int64(0);
  outC->every = kcg_true;
  for (idx2 = 0; idx2 < 4; idx2++) {
    outC->dmi_status_int[idx2] = kcg_lit_int64(0);
  }
  /* _L24=(DATA::Packets::DMI_to_EVC::C_DMI_Status_to_int#1)/ */
  C_DMI_Status_to_int_init_DATA_Packets_DMI_to_EVC(
    &outC->Context_C_DMI_Status_to_int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Write_DMI_Status_to_int_reset_DATA_Packets_DMI_to_EVC(
  outC_Write_DMI_Status_to_int_DATA_Packets_DMI_to_EVC *outC)
{
  /* _L24=(DATA::Packets::DMI_to_EVC::C_DMI_Status_to_int#1)/ */
  C_DMI_Status_to_int_reset_DATA_Packets_DMI_to_EVC(
    &outC->Context_C_DMI_Status_to_int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_DMI_Status_to_int_DATA_Packets_DMI_to_EVC.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

