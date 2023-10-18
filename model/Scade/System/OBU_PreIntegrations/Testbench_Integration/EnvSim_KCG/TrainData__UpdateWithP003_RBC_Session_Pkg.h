/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _TrainData__UpdateWithP003_RBC_Session_Pkg_H_
#define _TrainData__UpdateWithP003_RBC_Session_Pkg_H_

#include "kcg_types.h"
#include "TrainData__SetNumberOfOnboardPhoneNumbers_RBC_Session_Pkg.h"
#include "TrainData__SetOnboardPhoneNumbers_RBC_Session_Pkg.h"
#include "RadioTrainTrackPacket003__CountOnboardNumbers_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTra.h"
#include "RadioTrainTrackPacket003__GetOnboardNumbers_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrain.h"
#include "RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrainTrackPackets__GetP003_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TrainData_T /* outTrainData/ */ outTrainData;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TrainData__SetOnboardPhoneNumbers_RBC_Session_Pkg /* _L4=(RBC_Session_Pkg::TrainData__SetOnboardPhoneNumbers#1)/ */ Context_TrainData__SetOnboardPhoneNumbers_1;
  outC_RadioTrainTrackPacket003__GetOnboardNumbers_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_Radio /* _L2=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket003_Pkg::RadioTrainTrackPacket003__GetOnboardNumbers#1)/ */ Context_RadioTrainTrackPacket003__GetOnboardNumbers_1;
  outC_TrainData__SetNumberOfOnboardPhoneNumbers_RBC_Session_Pkg /* _L7=(RBC_Session_Pkg::TrainData__SetNumberOfOnboardPhoneNumbers#1)/ */ Context_TrainData__SetNumberOfOnboardPhoneNumbers_1;
  outC_RadioTrainTrackPacket003__CountOnboardNumbers_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_Rad /* _L3=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket003_Pkg::RadioTrainTrackPacket003__CountOnboardNumbers#1)/ */ Context_RadioTrainTrackPacket003__CountOnboardNumbers_1;
  outC_RadioTrainTrackPackets__GetP003_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L5=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP003#1)/ */ Context_RadioTrainTrackPackets__GetP003_1;
  outC_RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L1=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetPackets#1)/ */ Context_RadioTrainTrackMessage__GetPackets_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  TrainData_T /* _L7/ */ _L7;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* _L6/ */ _L6;
  PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg /* _L5/ */ _L5;
  TrainData_T /* _L4/ */ _L4;
  kcg_int64 /* _L3/ */ _L3;
  aNID_RADIO_T_Packet_TrainTypes_Pkg /* _L2/ */ _L2;
  outPackets_T_Common_Types_Pkg /* _L1/ */ _L1;
  TrainData_T /* _L9/ */ _L9;
} outC_TrainData__UpdateWithP003_RBC_Session_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Session_Pkg::TrainData__UpdateWithP003/ */
extern void TrainData__UpdateWithP003_RBC_Session_Pkg(
  /* inTrainData/ */
  TrainData_T *inTrainData,
  /* inRadioTraintrackMessage/ */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTraintrackMessage,
  outC_TrainData__UpdateWithP003_RBC_Session_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TrainData__UpdateWithP003_reset_RBC_Session_Pkg(
  outC_TrainData__UpdateWithP003_RBC_Session_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TrainData__UpdateWithP003_init_RBC_Session_Pkg(
  outC_TrainData__UpdateWithP003_RBC_Session_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _TrainData__UpdateWithP003_RBC_Session_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TrainData__UpdateWithP003_RBC_Session_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

