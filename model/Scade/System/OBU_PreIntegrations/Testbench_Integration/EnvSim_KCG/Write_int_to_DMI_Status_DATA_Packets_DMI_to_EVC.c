/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_Status_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Status/ */
void Write_int_to_DMI_Status_DATA_Packets_DMI_to_EVC(
  /* dmi_status_int/ */
  DMI_Status_int_array_T_DATA *dmi_status_int,
  outC_Write_int_to_DMI_Status_DATA_Packets_DMI_to_EVC *outC)
{
  static DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg op_call;

  kcg_copy_DMI_Status_int_array_T_DATA(&outC->_L2, dmi_status_int);
  outC->_L21 = outC->_L2[0];
  outC->_L20 = kcg_lit_int64(1);
  outC->_L19 = outC->_L20 == outC->_L21;
  outC->every = outC->_L19;
  if (outC->every) {
    /* _L22=(DATA::Packets::DMI_to_EVC::C_int_to_DMI_Status#1)/ */
    C_int_to_DMI_Status_DATA_Packets_DMI_to_EVC(
      &outC->_L2,
      &outC->Context_C_int_to_DMI_Status_1);
    kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(
      &op_call,
      &outC->Context_C_int_to_DMI_Status_1.dim_status_ct);
  }
  kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L23,
    (DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg *)
      &cDMI_Status_DATA_Packets_DMI_to_EVC);
  if (outC->every) {
    kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(&outC->_L22, &op_call);
  }
  else {
    kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(&outC->_L22, &outC->_L23);
  }
  kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->dim_status_ct,
    &outC->_L22);
}

#ifndef KCG_USER_DEFINED_INIT
void Write_int_to_DMI_Status_init_DATA_Packets_DMI_to_EVC(
  outC_Write_int_to_DMI_Status_DATA_Packets_DMI_to_EVC *outC)
{
  static kcg_size idx;

  outC->_L23.valid = kcg_true;
  outC->_L23.systemTime = kcg_lit_int64(0);
  outC->_L23.statusSet = Running_state_DMI_Types_Pkg;
  outC->_L23.nAlive = kcg_lit_int64(0);
  outC->_L22.valid = kcg_true;
  outC->_L22.systemTime = kcg_lit_int64(0);
  outC->_L22.statusSet = Running_state_DMI_Types_Pkg;
  outC->_L22.nAlive = kcg_lit_int64(0);
  outC->_L19 = kcg_true;
  outC->_L20 = kcg_lit_int64(0);
  outC->_L21 = kcg_lit_int64(0);
  for (idx = 0; idx < 4; idx++) {
    outC->_L2[idx] = kcg_lit_int64(0);
  }
  outC->every = kcg_true;
  outC->dim_status_ct.valid = kcg_true;
  outC->dim_status_ct.systemTime = kcg_lit_int64(0);
  outC->dim_status_ct.statusSet = Running_state_DMI_Types_Pkg;
  outC->dim_status_ct.nAlive = kcg_lit_int64(0);
  /* _L22=(DATA::Packets::DMI_to_EVC::C_int_to_DMI_Status#1)/ */
  C_int_to_DMI_Status_init_DATA_Packets_DMI_to_EVC(
    &outC->Context_C_int_to_DMI_Status_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Write_int_to_DMI_Status_reset_DATA_Packets_DMI_to_EVC(
  outC_Write_int_to_DMI_Status_DATA_Packets_DMI_to_EVC *outC)
{
  /* _L22=(DATA::Packets::DMI_to_EVC::C_int_to_DMI_Status#1)/ */
  C_int_to_DMI_Status_reset_DATA_Packets_DMI_to_EVC(
    &outC->Context_C_int_to_DMI_Status_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_int_to_DMI_Status_DATA_Packets_DMI_to_EVC.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

