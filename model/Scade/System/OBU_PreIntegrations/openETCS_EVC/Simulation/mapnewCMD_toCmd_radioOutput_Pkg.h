/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */
#ifndef _mapnewCMD_toCmd_radioOutput_Pkg_H_
#define _mapnewCMD_toCmd_radioOutput_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  cmdRadioUnit_T_API_RadioCommunication_Pkg /* toRTMCMD/ */ toRTMCMD;
  NID_RADIO /* outRadio/ */ outRadio;
  NID_MN /* outMN/ */ outMN;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  NID_MN /* nidMN/ */ nidMN;
  NID_RADIO /* nidRadio/ */ nidRadio;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  NID_MN /* IfBlock1:then:_L11/ */ _L11_then_IfBlock1;
  NID_RADIO /* IfBlock1:then:_L10/ */ _L10_then_IfBlock1;
  mobileConnectionCmd_T_RCM_Types_Pkg /* IfBlock1:then:_L9/ */ _L9_then_IfBlock1;
  mobileConnetionAction_T_RCM_Types_Pkg /* IfBlock1:then:_L8/ */ _L8_then_IfBlock1;
  mobileConnectionCmd_T_RCM_Types_Pkg /* IfBlock1:then:_L7/ */ _L7_then_IfBlock1;
  cmdRadioUnit_T_API_RadioCommunication_Pkg /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  cmdRadioUnit_T_API_RadioCommunication_Pkg /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  cmdRadioUnit_T_API_RadioCommunication_Pkg /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  cmdRadioUnit_T_API_RadioCommunication_Pkg /* IfBlock1:then:_L6/ */ _L6_then_IfBlock1;
  cmdRadioUnit_T_API_RadioCommunication_Pkg /* IfBlock1:else:else:_L28/ */ _L28_else_else_IfBlock1;
  NID_MN /* IfBlock1:else:else:_L29/ */ _L29_else_else_IfBlock1;
  NID_RADIO /* IfBlock1:else:else:_L30/ */ _L30_else_else_IfBlock1;
  cmdRadioUnit_T_API_RadioCommunication_Pkg /* IfBlock1:else:then:_L11/ */ _L11_then_else_IfBlock1;
  mobileRegistrationCmd_T_RCM_Types_Pkg /* IfBlock1:else:then:_L10/ */ _L10_then_else_IfBlock1;
  cmdRadioUnit_T_API_RadioCommunication_Pkg /* IfBlock1:else:then:_L9/ */ _L9_then_else_IfBlock1;
  cmdRadioUnit_T_API_RadioCommunication_Pkg /* IfBlock1:else:then:_L8/ */ _L8_then_else_IfBlock1;
  mobileRegistrationAction_T_RCM_Types_Pkg /* IfBlock1:else:then:_L7/ */ _L7_then_else_IfBlock1;
  cmdRadioUnit_T_API_RadioCommunication_Pkg /* IfBlock1:else:then:_L6/ */ _L6_then_else_IfBlock1;
  mobileRegistrationCmd_T_RCM_Types_Pkg /* IfBlock1:else:then:_L13/ */ _L13_then_else_IfBlock1;
  NID_MN /* IfBlock1:else:then:_L14/ */ _L14_then_else_IfBlock1;
  NID_RADIO /* IfBlock1:else:then:_L15/ */ _L15_then_else_IfBlock1;
  kcg_bool /* doConnection/ */ doConnection;
  kcg_bool /* doRegistration/ */ doRegistration;
  kcg_bool /* _L40/ */ _L40;
  kcg_bool /* _L39/ */ _L39;
  kcg_bool /* _L38/ */ _L38;
  kcg_bool /* _L37/ */ _L37;
  mobileRegistrationCmd_T_RCM_Types_Pkg /* _L36/ */ _L36;
  mobileConnectionCmd_T_RCM_Types_Pkg /* _L35/ */ _L35;
  NID_MN /* _L41/ */ _L41;
  NID_RADIO /* _L42/ */ _L42;
} outC_mapnewCMD_toCmd_radioOutput_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* radioOutput_Pkg::mapnewCMD_toCmd/ */
extern void mapnewCMD_toCmd_radioOutput_Pkg(
  /* mobileConnectionCMD/ */
  mobileConnectionCmd_T_RCM_Types_Pkg *mobileConnectionCMD,
  /* mobileRegistrationCMD/ */
  mobileRegistrationCmd_T_RCM_Types_Pkg *mobileRegistrationCMD,
  outC_mapnewCMD_toCmd_radioOutput_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void mapnewCMD_toCmd_reset_radioOutput_Pkg(
  outC_mapnewCMD_toCmd_radioOutput_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void mapnewCMD_toCmd_init_radioOutput_Pkg(
  outC_mapnewCMD_toCmd_radioOutput_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _mapnewCMD_toCmd_radioOutput_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** mapnewCMD_toCmd_radioOutput_Pkg.h
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

