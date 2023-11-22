/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_Driver_R_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Driver_Reqest/ */
void Write_int_to_DMI_Driver_R_DATA_Packets_DMI_to_EVC(
  /* dmi_driver_request_int/ */
  DMI_Driver_Request_int_array_T_DATA *dmi_driver_request_int,
  outC_Write_int_to_DMI_Driver_R_DATA_Packets_DMI_to_EVC *outC)
{
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg op_call;

  kcg_copy_DMI_Driver_Request_int_array_T_DATA(
    &outC->_L1,
    dmi_driver_request_int);
  outC->_L10 = outC->_L1[0];
  outC->_L12 = kcg_lit_int32(1);
  outC->_L11 = outC->_L12 == outC->_L10;
  outC->every = outC->_L11;
  if (outC->every) {
    /* _L13=(DATA::Packets::DMI_to_EVC::C_int_to_DMI_Driver_Reqest#1)/ */
    C_int_to_DMI_Driver_Reqest_DATA_Packets_DMI_to_EVC(
      &outC->_L1,
      &outC->Context_C_int_to_DMI_Driver_Reqest_1);
    kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
      &op_call,
      &outC->Context_C_int_to_DMI_Driver_Reqest_1.dmi_driver_request_ct);
  }
  kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L14,
    (DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *)
      &cDMI_Driver_Request_DATA_Packets_DMI_to_EVC);
  if (outC->every) {
    kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->_L13,
      &op_call);
  }
  else {
    kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->_L13,
      &outC->_L14);
  }
  kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->dmi_driver_request_ct,
    &outC->_L13);
}

#ifndef KCG_USER_DEFINED_INIT
void Write_int_to_DMI_Driver_R_init_DATA_Packets_DMI_to_EVC(
  outC_Write_int_to_DMI_Driver_R_DATA_Packets_DMI_to_EVC *outC)
{
  kcg_size idx;

  outC->_L14.valid = kcg_true;
  outC->_L14.systemTime = kcg_lit_int32(0);
  outC->_L14.m_request = Start_of_mission_DMI_Types_Pkg;
  outC->_L13.valid = kcg_true;
  outC->_L13.systemTime = kcg_lit_int32(0);
  outC->_L13.m_request = Start_of_mission_DMI_Types_Pkg;
  outC->_L12 = kcg_lit_int32(0);
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_lit_int32(0);
  for (idx = 0; idx < 3; idx++) {
    outC->_L1[idx] = kcg_lit_int32(0);
  }
  outC->every = kcg_true;
  outC->dmi_driver_request_ct.valid = kcg_true;
  outC->dmi_driver_request_ct.systemTime = kcg_lit_int32(0);
  outC->dmi_driver_request_ct.m_request = Start_of_mission_DMI_Types_Pkg;
  /* _L13=(DATA::Packets::DMI_to_EVC::C_int_to_DMI_Driver_Reqest#1)/ */
  C_int_to_DMI_Driver_Reqest_init_DATA_Packets_DMI_to_EVC(
    &outC->Context_C_int_to_DMI_Driver_Reqest_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Write_int_to_DMI_Driver_R_reset_DATA_Packets_DMI_to_EVC(
  outC_Write_int_to_DMI_Driver_R_DATA_Packets_DMI_to_EVC *outC)
{
  /* _L13=(DATA::Packets::DMI_to_EVC::C_int_to_DMI_Driver_Reqest#1)/ */
  C_int_to_DMI_Driver_Reqest_reset_DATA_Packets_DMI_to_EVC(
    &outC->Context_C_int_to_DMI_Driver_Reqest_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_int_to_DMI_Driver_R_DATA_Packets_DMI_to_EVC.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

