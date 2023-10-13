/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */
#ifndef _Receive_RadioMsg_Receive_TrackSide_Msg_Pkg_H_
#define _Receive_RadioMsg_Receive_TrackSide_Msg_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TrackSide_ForCheck_T_Common_Types_Pkg /* outTrackMessage_for_check/ */ outTrackMessage_for_check;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  API_TrackSideInput_T_API_Msg_Pkg /* _L12/ */ _L12;
  TrackSide_ForCheck_T_Common_Types_Pkg /* _L14/ */ _L14;
  kcg_bool /* _L15/ */ _L15;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L16/ */ _L16;
  MsgSource_T_Common_Types_Pkg /* _L17/ */ _L17;
  RadioMessage_T_Radio_Types_Pkg /* _L19/ */ _L19;
  kcg_bool /* _L34/ */ _L34;
  kcg_bool /* _L36/ */ _L36;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* _L37/ */ _L37;
  RadioMetadata_T_Common_Types_Pkg /* _L21/ */ _L21;
  CompressedPackets_T_Common_Types_Pkg /* _L67/ */ _L67;
  BG_Message_T_BG_Types_Pkg /* _L68/ */ _L68;
  RBC_Id_T_Common_Types_Pkg /* _L92/ */ _L92;
} outC_Receive_RadioMsg_Receive_TrackSide_Msg_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Receive_TrackSide_Msg_Pkg::Receive_RadioMsg/ */
extern void Receive_RadioMsg_Receive_TrackSide_Msg_Pkg(
  /* API_TrackSide_Msg/ */
  API_TrackSideInput_T_API_Msg_Pkg *API_TrackSide_Msg,
  outC_Receive_RadioMsg_Receive_TrackSide_Msg_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Receive_RadioMsg_reset_Receive_TrackSide_Msg_Pkg(
  outC_Receive_RadioMsg_Receive_TrackSide_Msg_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Receive_RadioMsg_init_Receive_TrackSide_Msg_Pkg(
  outC_Receive_RadioMsg_Receive_TrackSide_Msg_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Receive_RadioMsg_Receive_TrackSide_Msg_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Receive_RadioMsg_Receive_TrackSide_Msg_Pkg.h
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */

