/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _mapCMDToRTM_radioOutput_Pkg_H_
#define _mapCMDToRTM_radioOutput_Pkg_H_

#include "kcg_types.h"
#include "mapnewCMD_toCmd_radioOutput_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  RadioManagement_T_API_RadioCommunication_Pkg /* toRTM/ */ toRTM;
  NID_RADIO /* outRadio/ */ outRadio;
  NID_MN /* outMN/ */ outMN;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_mapnewCMD_toCmd_radioOutput_Pkg /* _L22=(radioOutput_Pkg::mapnewCMD_toCmd#1)/ */ Context_mapnewCMD_toCmd_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  RadioManagement_T_API_RadioCommunication_Pkg /* _L18/ */ _L18;
  mobileConnectionCmd_T_RCM_Types_Pkg /* _L20/ */ _L20;
  mobileRegistrationCmd_T_RCM_Types_Pkg /* _L21/ */ _L21;
  cmdRadioUnit_T_API_RadioCommunication_Pkg /* _L22/ */ _L22;
  cmdRadioUnit_T_API_RadioCommunication_Pkg /* _L23/ */ _L23;
  kcg_bool /* _L24/ */ _L24;
  NID_RADIO /* _L25/ */ _L25;
  NID_MN /* _L26/ */ _L26;
  kcg_bool /* _L33/ */ _L33;
  NID_MN /* _L34/ */ _L34;
  NID_RADIO /* _L35/ */ _L35;
  NID_MN /* _L36/ */ _L36;
  kcg_bool /* _L37/ */ _L37;
  NID_RADIO /* _L38/ */ _L38;
  kcg_int64 /* _L39/ */ _L39;
} outC_mapCMDToRTM_radioOutput_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* radioOutput_Pkg::mapCMDToRTM/ */
extern void mapCMDToRTM_radioOutput_Pkg(
  /* mobileConnectionCMD/ */
  mobileConnectionCmd_T_RCM_Types_Pkg *mobileConnectionCMD,
  /* mobileRegistrationCMD/ */
  mobileRegistrationCmd_T_RCM_Types_Pkg *mobileRegistrationCMD,
  outC_mapCMDToRTM_radioOutput_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void mapCMDToRTM_reset_radioOutput_Pkg(
  outC_mapCMDToRTM_radioOutput_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void mapCMDToRTM_init_radioOutput_Pkg(
  outC_mapCMDToRTM_radioOutput_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _mapCMDToRTM_radioOutput_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** mapCMDToRTM_radioOutput_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

