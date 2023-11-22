/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_int_to_DMI_Driver_Reqest_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Driver_Reqest/ */
void C_int_to_DMI_Driver_Reqest_DATA_Packets_DMI_to_EVC(
  /* dmi_driver_request_int/ */
  DMI_Driver_Request_int_array_T_DATA *dmi_driver_request_int,
  outC_C_int_to_DMI_Driver_Reqest_DATA_Packets_DMI_to_EVC *outC)
{
  kcg_copy_DMI_Driver_Request_int_array_T_DATA(
    &outC->_L1,
    dmi_driver_request_int);
  outC->_L4 = outC->_L1[0];
  /* _L9=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_Utilities(outC->_L4, &outC->Context_Int_to_Bool_1);
  outC->_L9 = outC->Context_Int_to_Bool_1.bool_out;
  outC->_L2 = outC->_L1[2];
  /* _L8=(DATA::Variables::CAST_int_to_DMI_Request#1)/ */
  CAST_int_to_DMI_Request_DATA_Variables(
    outC->_L2,
    &outC->Context_CAST_int_to_DMI_Request_1);
  outC->_L8 = outC->Context_CAST_int_to_DMI_Request_1.dmi_reqest_ct;
  outC->_L3 = outC->_L1[1];
  outC->_L5.valid = outC->_L9;
  outC->_L5.systemTime = outC->_L3;
  outC->_L5.m_request = outC->_L8;
  kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->dmi_driver_request_ct,
    &outC->_L5);
}

#ifndef KCG_USER_DEFINED_INIT
void C_int_to_DMI_Driver_Reqest_init_DATA_Packets_DMI_to_EVC(
  outC_C_int_to_DMI_Driver_Reqest_DATA_Packets_DMI_to_EVC *outC)
{
  kcg_size idx;

  outC->_L9 = kcg_true;
  outC->_L8 = Start_of_mission_DMI_Types_Pkg;
  outC->_L5.valid = kcg_true;
  outC->_L5.systemTime = kcg_lit_int32(0);
  outC->_L5.m_request = Start_of_mission_DMI_Types_Pkg;
  outC->_L2 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  for (idx = 0; idx < 3; idx++) {
    outC->_L1[idx] = kcg_lit_int32(0);
  }
  outC->dmi_driver_request_ct.valid = kcg_true;
  outC->dmi_driver_request_ct.systemTime = kcg_lit_int32(0);
  outC->dmi_driver_request_ct.m_request = Start_of_mission_DMI_Types_Pkg;
  /* _L8=(DATA::Variables::CAST_int_to_DMI_Request#1)/ */
  CAST_int_to_DMI_Request_init_DATA_Variables(
    &outC->Context_CAST_int_to_DMI_Request_1);
  /* _L9=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_init_Utilities(&outC->Context_Int_to_Bool_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_int_to_DMI_Driver_Reqest_reset_DATA_Packets_DMI_to_EVC(
  outC_C_int_to_DMI_Driver_Reqest_DATA_Packets_DMI_to_EVC *outC)
{
  /* _L8=(DATA::Variables::CAST_int_to_DMI_Request#1)/ */
  CAST_int_to_DMI_Request_reset_DATA_Variables(
    &outC->Context_CAST_int_to_DMI_Request_1);
  /* _L9=(Utilities::Int_to_Bool#1)/ */
  Int_to_Bool_reset_Utilities(&outC->Context_Int_to_Bool_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_int_to_DMI_Driver_Reqest_DATA_Packets_DMI_to_EVC.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

