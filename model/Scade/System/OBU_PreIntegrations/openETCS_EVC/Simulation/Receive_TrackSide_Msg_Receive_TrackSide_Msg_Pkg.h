/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg_H_
#define _Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg_H_

#include "kcg_types.h"
#include "Receive_RadioMsg_Receive_TrackSide_Msg_Pkg.h"
#include "Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TrackSide_ForCheck_T_Common_Types_Pkg /* outTrackMessage_for_check/ */ outTrackMessage_for_check;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Receive_RadioMsg_Receive_TrackSide_Msg_Pkg /* IfBlock1:then:_L2=(Receive_TrackSide_Msg_Pkg::Receive_RadioMsg#1)/ */ Context_Receive_RadioMsg_1;
  outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg /* IfBlock1:else:_L22=(Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram#1)/ */ Context_Receive_BaliseTelegram_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  TrackSide_ForCheck_T_Common_Types_Pkg /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  API_TrackSideInput_T_API_Msg_Pkg /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  TrackSide_ForCheck_T_Common_Types_Pkg /* IfBlock1:else:_L22/ */ _L22_else_IfBlock1;
  API_TrackSideInput_T_API_Msg_Pkg /* IfBlock1:else:_L4/ */ _L4_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L3/ */ _L3_else_IfBlock1;
  odometry_T_Obu_BasicTypes_Pkg /* IfBlock1:else:_L1/ */ _L1_else_IfBlock1;
  kcg_bool /* isRadioMsg/ */ isRadioMsg;
  kcg_bool /* _L1/ */ _L1;
  API_TrackSideInput_T_API_Msg_Pkg /* _L2/ */ _L2;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  MsgSource_T_Common_Types_Pkg /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  MsgSource_T_Common_Types_Pkg /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
} outC_Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg/ */
extern void Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg(
  /* reset/ */
  kcg_bool reset,
  /* API_TrackSide_Msg/ */
  API_TrackSideInput_T_API_Msg_Pkg *API_TrackSide_Msg,
  /* inActualOdometry/ */
  odometry_T_Obu_BasicTypes_Pkg *inActualOdometry,
  outC_Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Receive_TrackSide_Msg_reset_Receive_TrackSide_Msg_Pkg(
  outC_Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Receive_TrackSide_Msg_init_Receive_TrackSide_Msg_Pkg(
  outC_Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

