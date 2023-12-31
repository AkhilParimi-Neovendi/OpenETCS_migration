/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_
#define _updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* outCollector/ */ outCollector;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* _L2/ */ _L2;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* _L3/ */ _L3;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L10/ */ _L10;
  NID_C /* _L9/ */ _L9;
  NID_BG /* _L8/ */ _L8;
  centerOfBalisePosition_T_BG_Types_Pkg /* _L7/ */ _L7;
  centerOfBalisePosition_T_BG_Types_Pkg /* _L6/ */ _L6;
  kcg_int32 /* _L5/ */ _L5;
  kcg_int32 /* _L4/ */ _L4;
  kcg_bool /* _L14/ */ _L14;
} outC_updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport;

/* ===========  node initialization and cycle functions  =========== */
/* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSendMessage/ */
extern void updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* inCollector/ */
  BGCollector_T_Receive_TrackSide_Msg_Pkg *inCollector,
  outC_updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void updateCollectorSendMessage_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void updateCollectorSendMessage_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

