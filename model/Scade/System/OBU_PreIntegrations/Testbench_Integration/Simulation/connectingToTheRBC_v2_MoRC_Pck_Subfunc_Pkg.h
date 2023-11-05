/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg_H_
#define _connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  mobileConnectionCmd_T_RCM_Types_Pkg /* mobileConnectionCmd/ */ mobileConnectionCmd;
  mobileConnectionContext_T_RCM_Types_Pkg /* connectionStatus/ */ connectionStatus;
  kcg_bool /* rejectOrderToContactRBC_or_RIU/ */ rejectOrderToContactRBC_or_RIU;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else: */ else_clock_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else: */ else_clock_else_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  mobileConnetionAction_T_RCM_Types_Pkg /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  mobileConnetionAction_T_RCM_Types_Pkg /* IfBlock1:else:else:then:_L1/ */ _L1_then_else_else_IfBlock1;
  mobileConnetionAction_T_RCM_Types_Pkg /* IfBlock1:else:else:else:else:_L1/ */ _L1_else_else_else_else_IfBlock1;
  mobileConnetionAction_T_RCM_Types_Pkg /* IfBlock1:else:else:else:then:_L1/ */ _L1_then_else_else_else_IfBlock1;
  mobileConnetionAction_T_RCM_Types_Pkg /* IfBlock1:else:then:_L1/ */ _L1_then_else_IfBlock1;
  kcg_bool /* connect/ */ connect;
  kcg_bool /* disconnect/ */ disconnect;
  kcg_bool /* enterHole/ */ enterHole;
  kcg_bool /* leaveHole/ */ leaveHole;
  mobileConnetionAction_T_RCM_Types_Pkg /* action/ */ action;
  kcg_bool /* _L354/ */ _L354;
  mobileRegistrationContext_T_RCM_Types_Pkg /* _L355/ */ _L355;
  kcg_bool /* _L356/ */ _L356;
  mobileRegistrationStatus_T_RCM_Types_Pkg /* _L357/ */ _L357;
  kcg_bool /* _L358/ */ _L358;
  mobileRegistrationStatus_T_RCM_Types_Pkg /* _L359/ */ _L359;
  kcg_bool /* _L360/ */ _L360;
  mobileConnetionAction_T_RCM_Types_Pkg /* _L362/ */ _L362;
  mobileConnetionAction_T_RCM_Types_Pkg /* _L363/ */ _L363;
  mobileConnetionAction_T_RCM_Types_Pkg /* _L364/ */ _L364;
  mobileConnetionAction_T_RCM_Types_Pkg /* _L365/ */ _L365;
  mobileConnetionAction_T_RCM_Types_Pkg /* _L366/ */ _L366;
  kcg_bool /* _L367/ */ _L367;
  kcg_bool /* _L368/ */ _L368;
  mobileConnectionCmd_T_RCM_Types_Pkg /* _L370/ */ _L370;
  kcg_bool /* _L371/ */ _L371;
  kcg_bool /* _L372/ */ _L372;
  kcg_bool /* _L373/ */ _L373;
  kcg_bool /* _L374/ */ _L374;
  kcg_bool /* _L375/ */ _L375;
  kcg_bool /* _L376/ */ _L376;
  kcg_bool /* _L377/ */ _L377;
  mobileConnectionContext_T_RCM_Types_Pkg /* _L379/ */ _L379;
  kcg_bool /* _L380/ */ _L380;
  kcg_bool /* _L381/ */ _L381;
  kcg_bool /* _L382/ */ _L382;
  mobileConnectionCmd_T_RCM_Types_Pkg /* _L383/ */ _L383;
  kcg_bool /* _L384/ */ _L384;
  kcg_bool /* _L385/ */ _L385;
  kcg_bool /* _L386/ */ _L386;
  kcg_bool /* _L387/ */ _L387;
  kcg_bool /* _L388/ */ _L388;
  mobileConnectionContext_T_RCM_Types_Pkg /* _L389/ */ _L389;
  kcg_int32 /* _L390/ */ _L390;
  NID_RADIO /* _L391/ */ _L391;
  mobileConnectionCmd_T_RCM_Types_Pkg /* _L392/ */ _L392;
  mobileConnetionAction_T_RCM_Types_Pkg /* _L393/ */ _L393;
  mobileConnectionContext_T_RCM_Types_Pkg /* _L394/ */ _L394;
} outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2/ */
extern void connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg(
  /* connectionCmd/ */
  mobileConnectionCmd_T_RCM_Types_Pkg *connectionCmd,
  /* mobileConnectionContext/ */
  mobileConnectionContext_T_RCM_Types_Pkg *mobileConnectionContext,
  /* mobileRegistrationStatus/ */
  mobileRegistrationContext_T_RCM_Types_Pkg *mobileRegistrationStatus,
  outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void connectingToTheRBC_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void connectingToTheRBC_v2_init_MoRC_Pck_Subfunc_Pkg(
  outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

