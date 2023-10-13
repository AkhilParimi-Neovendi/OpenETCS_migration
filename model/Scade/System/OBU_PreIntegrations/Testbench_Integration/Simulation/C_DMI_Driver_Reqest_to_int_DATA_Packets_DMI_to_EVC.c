/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_DMI_Driver_Reqest_to_int_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::C_DMI_Driver_Reqest_to_int/ */
void C_DMI_Driver_Reqest_to_int_DATA_Packets_DMI_to_EVC(
  /* dmi_driver_request_ct/ */
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_driver_request_ct,
  outC_C_DMI_Driver_Reqest_to_int_DATA_Packets_DMI_to_EVC *outC)
{
  static kcg_bool noname;

  outC->_L21 = kcg_lit_int64(1);
  kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L13,
    dmi_driver_request_ct);
  outC->_L4 = outC->_L13.valid;
  noname = outC->_L4;
  outC->_L3 = outC->_L13.systemTime;
  outC->_L2 = outC->_L13.m_request;
  /* _L15=(DATA::Variables::CAST_DMI_Request_to_int#1)/ */
  CAST_DMI_Request_to_int_DATA_Variables(
    outC->_L2,
    &outC->Context_CAST_DMI_Request_to_int_1);
  outC->_L15 = outC->Context_CAST_DMI_Request_to_int_1.dmi_request_int;
  outC->_L16[0] = outC->_L21;
  outC->_L16[1] = outC->_L3;
  outC->_L16[2] = outC->_L15;
  kcg_copy_DMI_Driver_Request_int_array_T_DATA(
    &outC->dmi_driver_request_int,
    &outC->_L16);
}

#ifndef KCG_USER_DEFINED_INIT
void C_DMI_Driver_Reqest_to_int_init_DATA_Packets_DMI_to_EVC(
  outC_C_DMI_Driver_Reqest_to_int_DATA_Packets_DMI_to_EVC *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L21 = kcg_lit_int64(0);
  for (idx = 0; idx < 3; idx++) {
    outC->_L16[idx] = kcg_lit_int64(0);
  }
  outC->_L15 = kcg_lit_int64(0);
  outC->_L13.valid = kcg_true;
  outC->_L13.systemTime = kcg_lit_int64(0);
  outC->_L13.m_request = Start_of_mission_DMI_Types_Pkg;
  outC->_L2 = Start_of_mission_DMI_Types_Pkg;
  outC->_L3 = kcg_lit_int64(0);
  outC->_L4 = kcg_true;
  for (idx1 = 0; idx1 < 3; idx1++) {
    outC->dmi_driver_request_int[idx1] = kcg_lit_int64(0);
  }
  /* _L15=(DATA::Variables::CAST_DMI_Request_to_int#1)/ */
  CAST_DMI_Request_to_int_init_DATA_Variables(
    &outC->Context_CAST_DMI_Request_to_int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_DMI_Driver_Reqest_to_int_reset_DATA_Packets_DMI_to_EVC(
  outC_C_DMI_Driver_Reqest_to_int_DATA_Packets_DMI_to_EVC *outC)
{
  /* _L15=(DATA::Variables::CAST_DMI_Request_to_int#1)/ */
  CAST_DMI_Request_to_int_reset_DATA_Variables(
    &outC->Context_CAST_DMI_Request_to_int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_DMI_Driver_Reqest_to_int_DATA_Packets_DMI_to_EVC.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

