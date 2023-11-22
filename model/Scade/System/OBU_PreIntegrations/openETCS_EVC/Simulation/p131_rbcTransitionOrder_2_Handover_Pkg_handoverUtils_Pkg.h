/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */
#ifndef _p131_rbcTransitionOrder_2_Handover_Pkg_handoverUtils_Pkg_H_
#define _p131_rbcTransitionOrder_2_Handover_Pkg_handoverUtils_Pkg_H_

#include "kcg_types.h"
#include "Send_P042_no_merge_TM_specific_send.h"
#include "Read_P131_TM.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  msgFromTrack_T_RCM_MsgTypes_Pkg /* p42_establishSession/ */ p42_establishSession;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Send_P042_no_merge_TM_specific_send /* _L120=(TM_specific_send::Send_P042_no_merge#1)/ */ Context_Send_P042_no_merge_1;
  outC_Read_P131_TM /* _L53=(TM::Read_P131#1)/ */ Context_Read_P131_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L37/ */ _L37;
  kcg_bool /* _L53/ */ _L53;
  P131_OBU_T_TM /* _L54/ */ _L54;
  CompressedPackets_T_Common_Types_Pkg /* _L52/ */ _L52;
  kcg_bool /* _L55/ */ _L55;
  kcg_bool /* _L56/ */ _L56;
  Q_SLEEPSESSION /* _L72/ */ _L72;
  NID_RADIO /* _L71/ */ _L71;
  NID_RBC /* _L70/ */ _L70;
  NID_C /* _L69/ */ _L69;
  D_RBCTR /* _L68/ */ _L68;
  Q_SCALE /* _L67/ */ _L67;
  Q_DIR /* _L66/ */ _L66;
  kcg_bool /* _L65/ */ _L65;
  ReceivedMessage_T_Common_Types_Pkg /* _L73/ */ _L73;
  MsgSource_T_Common_Types_Pkg /* _L74/ */ _L74;
  RadioMetadata_T_Common_Types_Pkg /* _L75/ */ _L75;
  BG_Header_T_BG_Types_Pkg /* _L76/ */ _L76;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* _L77/ */ _L77;
  RBC_Id_T_Common_Types_Pkg /* _L78/ */ _L78;
  Q_RBC /* _L81/ */ _L81;
  CompressedPackets_T_Common_Types_Pkg /* _L120/ */ _L120;
  P42_SessionManagement_T_Packet_Types_Pkg /* _L135/ */ _L135;
} outC_p131_rbcTransitionOrder_2_Handover_Pkg_handoverUtils_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Handover_Pkg::handoverUtils_Pkg::p131_rbcTransitionOrder_2_p42_establishSession/ */
extern void p131_rbcTransitionOrder_2_Handover_Pkg_handoverUtils_Pkg(
  /* p131_transitionOrder/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg *p131_transitionOrder,
  outC_p131_rbcTransitionOrder_2_Handover_Pkg_handoverUtils_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void p131_rbcTransitionOrder_2_reset_Handover_Pkg_handoverUtils_Pkg(
  outC_p131_rbcTransitionOrder_2_Handover_Pkg_handoverUtils_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void p131_rbcTransitionOrder_2_init_Handover_Pkg_handoverUtils_Pkg(
  outC_p131_rbcTransitionOrder_2_Handover_Pkg_handoverUtils_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _p131_rbcTransitionOrder_2_Handover_Pkg_handoverUtils_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** p131_rbcTransitionOrder_2_Handover_Pkg_handoverUtils_Pkg.h
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

