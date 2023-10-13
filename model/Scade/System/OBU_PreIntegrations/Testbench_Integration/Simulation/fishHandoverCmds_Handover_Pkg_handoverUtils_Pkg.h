/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */
#ifndef _fishHandoverCmds_Handover_Pkg_handoverUtils_Pkg_H_
#define _fishHandoverCmds_Handover_Pkg_handoverUtils_Pkg_H_

#include "kcg_types.h"
#include "Read_P131_TM.h"
#include "Read_P042_TM.h"
#include "Read_P045_TM.h"
#include "nidC_nidBG_2_NIDLRBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  msgFromTrack_T_RCM_MsgTypes_Pkg /* p45_radioNetworkRegistrationOrder/ */ p45_radioNetworkRegistrationOrder;
  p131_q_rbcTransitionOrder_T_Handover_Pkg /* p131_RBCTransitionOrder_decoced/ */ p131_RBCTransitionOrder_decoced;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* p131_RBCTransitionOrder/ */ p131_RBCTransitionOrder;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* p42_terminateCmd_from_handingOverRBC/ */ p42_terminateCmd_from_handingOverRBC;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* sessionCmdsFromTrack/ */ sessionCmdsFromTrack;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_nidC_nidBG_2_NIDLRBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* _L40=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidC_nidBG_2_NIDLRBG#1)/ */ Context_nidC_nidBG_2_NIDLRBG_1;
  outC_Read_P042_TM /* _L114=(TM::Read_P042#2)/ */ Context_Read_P042_2;
  outC_Read_P045_TM /* _L6=(TM::Read_P045#1)/ */ Context_Read_P045_1;
  outC_Read_P131_TM /* _L8=(TM::Read_P131#1)/ */ Context_Read_P131_1;
  outC_Read_P042_TM /* _L102=(TM::Read_P042#1)/ */ Context_Read_P042_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* handoverRelevantCmdValid/ */ handoverRelevantCmdValid;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L4/ */ _L4;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L6/ */ _L6;
  CompressedPackets_T_Common_Types_Pkg /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  p131_q_rbcTransitionOrder_T_Handover_Pkg /* _L9/ */ _L9;
  kcg_bool /* _L27/ */ _L27;
  kcg_bool /* _L28/ */ _L28;
  kcg_bool /* _L29/ */ _L29;
  MsgSource_T_Common_Types_Pkg /* _L30/ */ _L30;
  kcg_bool /* _L34/ */ _L34;
  MsgSource_T_Common_Types_Pkg /* _L31/ */ _L31;
  BG_Header_T_BG_Types_Pkg /* _L35/ */ _L35;
  kcg_bool /* _L36/ */ _L36;
  NID_C /* _L37/ */ _L37;
  NID_BG /* _L39/ */ _L39;
  NID_LRBG /* _L40/ */ _L40;
  NID_LRBG /* _L41/ */ _L41;
  NID_LRBG /* _L42/ */ _L42;
  NID_RBC /* _L43/ */ _L43;
  kcg_int64 /* _L45/ */ _L45;
  kcg_int64 /* _L46/ */ _L46;
  CompressedPackets_T_Common_Types_Pkg /* _L47/ */ _L47;
  kcg_bool /* _L48/ */ _L48;
  NID_RADIO /* _L49/ */ _L49;
  kcg_bool /* _L50/ */ _L50;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L51/ */ _L51;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* _L78/ */ _L78;
  P131_OBU_T_TM /* _L79/ */ _L79;
  Q_RBC /* _L95/ */ _L95;
  kcg_bool /* _L94/ */ _L94;
  kcg_bool /* _L92/ */ _L92;
  Q_RBC /* _L91/ */ _L91;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L90/ */ _L90;
  kcg_bool /* _L89/ */ _L89;
  kcg_bool /* _L97/ */ _L97;
  MsgSource_T_Common_Types_Pkg /* _L98/ */ _L98;
  MsgSource_T_Common_Types_Pkg /* _L100/ */ _L100;
  kcg_bool /* _L99/ */ _L99;
  kcg_bool /* _L105/ */ _L105;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L107/ */ _L107;
  kcg_bool /* _L108/ */ _L108;
  kcg_bool /* _L109/ */ _L109;
  kcg_bool /* _L112/ */ _L112;
  kcg_bool /* _L114/ */ _L114;
  P42_SessionManagement_T_Packet_Types_Pkg /* _L115/ */ _L115;
  CompressedPackets_T_Common_Types_Pkg /* _L113/ */ _L113;
  kcg_bool /* _L162/ */ _L162;
  MsgSource_T_Common_Types_Pkg /* _L163/ */ _L163;
  kcg_bool /* _L164/ */ _L164;
  MsgSource_T_Common_Types_Pkg /* _L165/ */ _L165;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* _L166/ */ _L166;
  NID_MESSAGE /* _L167/ */ _L167;
  NID_MESSAGE /* _L168/ */ _L168;
  NID_MESSAGE /* _L169/ */ _L169;
  NID_MESSAGE /* _L170/ */ _L170;
  kcg_bool /* _L171/ */ _L171;
  kcg_bool /* _L172/ */ _L172;
  kcg_bool /* _L173/ */ _L173;
  kcg_bool /* _L174/ */ _L174;
  kcg_bool /* _L176/ */ _L176;
  kcg_bool /* _L177/ */ _L177;
  kcg_bool /* _L178/ */ _L178;
  kcg_bool /* _L179/ */ _L179;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L180/ */ _L180;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L181/ */ _L181;
  P42_SessionManagement_T_Packet_Types_Pkg /* _L103/ */ _L103;
  kcg_bool /* _L102/ */ _L102;
  CompressedPackets_T_Common_Types_Pkg /* _L101/ */ _L101;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L182/ */ _L182;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L183/ */ _L183;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L184/ */ _L184;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L185/ */ _L185;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L186/ */ _L186;
} outC_fishHandoverCmds_Handover_Pkg_handoverUtils_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds/ */
extern void fishHandoverCmds_Handover_Pkg_handoverUtils_Pkg(
  /* dataFromTrack/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg *dataFromTrack,
  /* dataFromHandingOverRBC/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg *dataFromHandingOverRBC,
  outC_fishHandoverCmds_Handover_Pkg_handoverUtils_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void fishHandoverCmds_reset_Handover_Pkg_handoverUtils_Pkg(
  outC_fishHandoverCmds_Handover_Pkg_handoverUtils_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void fishHandoverCmds_init_Handover_Pkg_handoverUtils_Pkg(
  outC_fishHandoverCmds_Handover_Pkg_handoverUtils_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _fishHandoverCmds_Handover_Pkg_handoverUtils_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** fishHandoverCmds_Handover_Pkg_handoverUtils_Pkg.h
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */

