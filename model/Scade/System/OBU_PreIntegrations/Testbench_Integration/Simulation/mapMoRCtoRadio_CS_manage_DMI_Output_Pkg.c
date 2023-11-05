/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mapMoRCtoRadio_CS_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::mapMoRCtoRadio_CS/ */
void mapMoRCtoRadio_CS_manage_DMI_Output_Pkg(
  /* inMoRC_status/ */
  morcStatus_T_RCM_Session_Types_Pkg *inMoRC_status,
  outC_mapMoRCtoRadio_CS_manage_DMI_Output_Pkg *outC)
{
  outC->_L15 = conn_no_connection_API_RadioCommunication_Pkg;
  outC->_L8 = conn_ConnectionUp_API_RadioCommunication_Pkg;
  outC->_L6 = conn_unknown_API_RadioCommunication_Pkg;
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&outC->_L1, inMoRC_status);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &outC->_L12,
    &outC->_L1.connection);
  outC->_L13 = outC->_L12.status;
  /* _L19= */
  switch (outC->_L13) {
    case mcs_connecting_RCM_Types_Pkg :
      outC->_L19 = outC->_L15;
      break;
    case mcs_connected_RCM_Types_Pkg :
      outC->_L19 = outC->_L8;
      break;
    default :
      outC->_L19 = outC->_L6;
      break;
  }
  outC->_L9 = conn_SetupFailed_API_RadioCommunication_Pkg;
  outC->_L21 = outC->_L12.settingUpConnectionHasFailed;
  /* _L26= */
  if (outC->_L21) {
    outC->_L26 = outC->_L9;
  }
  else {
    outC->_L26 = outC->_L19;
  }
  outC->_L25 = conn_unknown_API_RadioCommunication_Pkg;
  outC->_L22 = outC->_L12.valid;
  outC->_L23 = !outC->_L22;
  /* _L24= */
  if (outC->_L23) {
    outC->_L24 = outC->_L25;
  }
  else {
    outC->_L24 = outC->_L26;
  }
  outC->outBMI_CS = outC->_L24;
}

#ifndef KCG_USER_DEFINED_INIT
void mapMoRCtoRadio_CS_init_manage_DMI_Output_Pkg(
  outC_mapMoRCtoRadio_CS_manage_DMI_Output_Pkg *outC)
{
  outC->_L26 = conn_unknown_API_RadioCommunication_Pkg;
  outC->_L25 = conn_unknown_API_RadioCommunication_Pkg;
  outC->_L24 = conn_unknown_API_RadioCommunication_Pkg;
  outC->_L23 = kcg_true;
  outC->_L22 = kcg_true;
  outC->_L21 = kcg_true;
  outC->_L19 = conn_unknown_API_RadioCommunication_Pkg;
  outC->_L15 = conn_unknown_API_RadioCommunication_Pkg;
  outC->_L13 = mcs_disconnected_RCM_Types_Pkg;
  outC->_L12.valid = kcg_true;
  outC->_L12.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L12.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L12.nid_radio = kcg_lit_int64(0);
  outC->_L12.settingUpConnectionHasFailed = kcg_true;
  outC->_L12.connectionLost = kcg_true;
  outC->_L12.isInRadioHole = kcg_true;
  outC->_L9 = conn_unknown_API_RadioCommunication_Pkg;
  outC->_L8 = conn_unknown_API_RadioCommunication_Pkg;
  outC->_L6 = conn_unknown_API_RadioCommunication_Pkg;
  outC->_L1.registration.valid = kcg_true;
  outC->_L1.registration.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L1.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L1.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L1.registration.nid_mn = kcg_lit_int32(0);
  outC->_L1.connection.valid = kcg_true;
  outC->_L1.connection.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L1.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L1.connection.nid_radio = kcg_lit_int64(0);
  outC->_L1.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L1.connection.connectionLost = kcg_true;
  outC->_L1.connection.isInRadioHole = kcg_true;
  outC->_L1.session.valid = kcg_true;
  outC->_L1.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L1.session.nid_c = kcg_lit_int32(0);
  outC->_L1.session.nid_rbc = kcg_lit_int32(0);
  outC->_L1.session.nid_radio = kcg_lit_int64(0);
  outC->outBMI_CS = conn_unknown_API_RadioCommunication_Pkg;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void mapMoRCtoRadio_CS_reset_manage_DMI_Output_Pkg(
  outC_mapMoRCtoRadio_CS_manage_DMI_Output_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** mapMoRCtoRadio_CS_manage_DMI_Output_Pkg.c
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

