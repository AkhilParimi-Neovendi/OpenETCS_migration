/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:31
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mapCMDToRTM_radioOutput_Pkg.h"

/* radioOutput_Pkg::mapCMDToRTM/ */
void mapCMDToRTM_radioOutput_Pkg(
  /* mobileConnectionCMD/ */
  mobileConnectionCmd_T_RCM_Types_Pkg *mobileConnectionCMD,
  /* mobileRegistrationCMD/ */
  mobileRegistrationCmd_T_RCM_Types_Pkg *mobileRegistrationCMD,
  outC_mapCMDToRTM_radioOutput_Pkg *outC)
{
  outC->_L39 = kcg_lit_int64(0);
  kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(&outC->_L20, mobileConnectionCMD);
  outC->_L35 = outC->_L20.nid_radio;
  outC->_L37 = outC->_L20.valid;
  /* _L38= */
  if (outC->_L37) {
    outC->_L38 = outC->_L35;
  }
  else {
    outC->_L38 = outC->_L39;
  }
  outC->_L40 = /* _L40= */(kcg_int32) outC->_L38;
  kcg_copy_mobileRegistrationCmd_T_RCM_Types_Pkg(
    &outC->_L21,
    mobileRegistrationCMD);
  outC->_L34 = outC->_L21.network_id;
  outC->_L33 = outC->_L21.valid;
  /* _L36= */
  if (outC->_L33) {
    outC->_L36 = outC->_L34;
  }
  else {
    outC->_L36 = outC->_L40;
  }
  /* _L22=(radioOutput_Pkg::mapnewCMD_toCmd#1)/ */
  mapnewCMD_toCmd_radioOutput_Pkg(
    &outC->_L20,
    &outC->_L21,
    &outC->Context_mapnewCMD_toCmd_1);
  outC->_L22 = outC->Context_mapnewCMD_toCmd_1.toRTMCMD;
  outC->_L25 = outC->Context_mapnewCMD_toCmd_1.outRadio;
  outC->_L26 = outC->Context_mapnewCMD_toCmd_1.outMN;
  outC->outMN = outC->_L26;
  outC->outRadio = outC->_L25;
  outC->_L23 = cmdr_not_relevant_API_RadioCommunication_Pkg;
  outC->_L24 = outC->_L23 != outC->_L22;
  outC->_L18.valid = outC->_L24;
  outC->_L18.cmd = outC->_L22;
  outC->_L18.networkID = outC->_L36;
  kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
    &outC->toRTM,
    &outC->_L18);
}

#ifndef KCG_USER_DEFINED_INIT
void mapCMDToRTM_init_radioOutput_Pkg(outC_mapCMDToRTM_radioOutput_Pkg *outC)
{
  outC->_L40 = kcg_lit_int32(0);
  outC->_L39 = kcg_lit_int64(0);
  outC->_L38 = kcg_lit_int64(0);
  outC->_L37 = kcg_true;
  outC->_L36 = kcg_lit_int32(0);
  outC->_L35 = kcg_lit_int64(0);
  outC->_L34 = kcg_lit_int32(0);
  outC->_L33 = kcg_true;
  outC->_L26 = kcg_lit_int32(0);
  outC->_L25 = kcg_lit_int64(0);
  outC->_L24 = kcg_true;
  outC->_L23 = cmdr_not_relevant_API_RadioCommunication_Pkg;
  outC->_L22 = cmdr_not_relevant_API_RadioCommunication_Pkg;
  outC->_L21.valid = kcg_true;
  outC->_L21.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L21.action = mra_nop_RCM_Types_Pkg;
  outC->_L21.network_id = kcg_lit_int32(0);
  outC->_L20.valid = kcg_true;
  outC->_L20.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L20.action = mca_nop_RCM_Types_Pkg;
  outC->_L20.nid_radio = kcg_lit_int64(0);
  outC->_L18.valid = kcg_true;
  outC->_L18.cmd = cmdr_not_relevant_API_RadioCommunication_Pkg;
  outC->_L18.networkID = kcg_lit_int32(0);
  outC->outMN = kcg_lit_int32(0);
  outC->outRadio = kcg_lit_int64(0);
  outC->toRTM.valid = kcg_true;
  outC->toRTM.cmd = cmdr_not_relevant_API_RadioCommunication_Pkg;
  outC->toRTM.networkID = kcg_lit_int32(0);
  /* _L22=(radioOutput_Pkg::mapnewCMD_toCmd#1)/ */
  mapnewCMD_toCmd_init_radioOutput_Pkg(&outC->Context_mapnewCMD_toCmd_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void mapCMDToRTM_reset_radioOutput_Pkg(outC_mapCMDToRTM_radioOutput_Pkg *outC)
{
  /* _L22=(radioOutput_Pkg::mapnewCMD_toCmd#1)/ */
  mapnewCMD_toCmd_reset_radioOutput_Pkg(&outC->Context_mapnewCMD_toCmd_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** mapCMDToRTM_radioOutput_Pkg.c
** Generation date: 2023-11-06T13:54:31
*************************************************************$ */

