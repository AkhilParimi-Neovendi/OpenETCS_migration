/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:59
*************************************************************$ */
#ifndef _TrainData__UpdateWithP011_RBC_Session_Pkg_H_
#define _TrainData__UpdateWithP011_RBC_Session_Pkg_H_

#include "kcg_types.h"
#include "TrainData__Set_N_AXLE_RBC_Session_Pkg.h"
#include "TrainData__Set_L_TRAIN_RBC_Session_Pkg.h"
#include "RadioTrainTrackPacket011__Get_L_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket011_Pkg.h"
#include "RadioTrainTrackPacket011__Get_N_AXLE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket011_Pkg.h"
#include "TrainData__Set_M_AXLELOADCAT_RBC_Session_Pkg.h"
#include "RadioTrainTrackPacket011__Get_NC_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket011_Pkg.h"
#include "TrainData__SetNationalSystemIdentities_RBC_Session_Pkg.h"
#include "TrainData__Set_V_MAXTRAIN_RBC_Session_Pkg.h"
#include "TrainData__Set_NC_TRAIN_RBC_Session_Pkg.h"
#include "TrainData__Set_NC_CDTRAIN_RBC_Session_Pkg.h"
#include "RadioTrainTrackPacket011__Get_M_AXLELOADCAT_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket011_Pkg.h"
#include "RadioTrainTrackPacket011__Get_NC_CDTRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket011_Pkg.h"
#include "RadioTrainTrackPacket011__Get_V_MAXTRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket011_Pkg.h"
#include "TrainData__Set_M_LOADINGGAUGE_RBC_Session_Pkg.h"
#include "RadioTrainTrackPacket011__GetNationalSystemIdentities_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket011_Pkg.h"
#include "RadioTrainTrackPacket011__GetTractionIdentities_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket011_Pkg.h"
#include "TrainData__Set_M_AIRTIGHT_RBC_Session_Pkg.h"
#include "RadioTrainTrackPackets__GetP011_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrainTrackPacket011__Get_M_LOADINGGAUGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket011_Pkg.h"
#include "TrainData__SetTractionIdentities_RBC_Session_Pkg.h"
#include "RadioTrainTrackPacket011__Get_M_AIRTIGHT_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket011_Pkg.h"
#include "RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TrainData_T /* outTrainData/ */ outTrainData;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TrainData__SetNationalSystemIdentities_RBC_Session_Pkg /* _L20=(RBC_Session_Pkg::TrainData__SetNationalSystemIdentities#1)/ */ Context_TrainData__SetNationalSystemIdentities_1;
  outC_RadioTrainTrackPacket011__GetNationalSystemIdentities_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket011_Pkg /* _L9=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__GetNationalSystemIdentities#1)/ */ Context_RadioTrainTrackPacket011__GetNationalSystemIdentities_1;
  outC_TrainData__SetTractionIdentities_RBC_Session_Pkg /* _L4=(RBC_Session_Pkg::TrainData__SetTractionIdentities#1)/ */ Context_TrainData__SetTractionIdentities_1;
  outC_RadioTrainTrackPacket011__GetTractionIdentities_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket011_Pkg /* _L8=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__GetTractionIdentities#1)/ */ Context_RadioTrainTrackPacket011__GetTractionIdentities_1;
  outC_TrainData__Set_N_AXLE_RBC_Session_Pkg /* _L30=(RBC_Session_Pkg::TrainData__Set_N_AXLE#1)/ */ Context_TrainData__Set_N_AXLE_1;
  outC_RadioTrainTrackPacket011__Get_N_AXLE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket011_Pkg /* _L24=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_N_AXLE#1)/ */ Context_RadioTrainTrackPacket011__Get_N_AXLE_1;
  outC_TrainData__Set_M_AIRTIGHT_RBC_Session_Pkg /* _L7=(RBC_Session_Pkg::TrainData__Set_M_AIRTIGHT#1)/ */ Context_TrainData__Set_M_AIRTIGHT_1;
  outC_RadioTrainTrackPacket011__Get_M_AIRTIGHT_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket011_Pkg /* _L1=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_M_AIRTIGHT#1)/ */ Context_RadioTrainTrackPacket011__Get_M_AIRTIGHT_1;
  outC_TrainData__Set_M_AXLELOADCAT_RBC_Session_Pkg /* _L22=(RBC_Session_Pkg::TrainData__Set_M_AXLELOADCAT#1)/ */ Context_TrainData__Set_M_AXLELOADCAT_1;
  outC_RadioTrainTrackPacket011__Get_M_AXLELOADCAT_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket011_Pkg /* _L14=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_M_AXLELOADCAT#1)/ */ Context_RadioTrainTrackPacket011__Get_M_AXLELOADCAT_1;
  outC_TrainData__Set_M_LOADINGGAUGE_RBC_Session_Pkg /* _L10=(RBC_Session_Pkg::TrainData__Set_M_LOADINGGAUGE#1)/ */ Context_TrainData__Set_M_LOADINGGAUGE_1;
  outC_RadioTrainTrackPacket011__Get_M_LOADINGGAUGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket011_Pkg /* _L5=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_M_LOADINGGAUGE#1)/ */ Context_RadioTrainTrackPacket011__Get_M_LOADINGGAUGE_1;
  outC_TrainData__Set_V_MAXTRAIN_RBC_Session_Pkg /* _L18=(RBC_Session_Pkg::TrainData__Set_V_MAXTRAIN#1)/ */ Context_TrainData__Set_V_MAXTRAIN_1;
  outC_RadioTrainTrackPacket011__Get_V_MAXTRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket011_Pkg /* _L12=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_V_MAXTRAIN#1)/ */ Context_RadioTrainTrackPacket011__Get_V_MAXTRAIN_1;
  outC_TrainData__Set_L_TRAIN_RBC_Session_Pkg /* _L29=(RBC_Session_Pkg::TrainData__Set_L_TRAIN#1)/ */ Context_TrainData__Set_L_TRAIN_1;
  outC_RadioTrainTrackPacket011__Get_L_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket011_Pkg /* _L26=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_L_TRAIN#1)/ */ Context_RadioTrainTrackPacket011__Get_L_TRAIN_1;
  outC_TrainData__Set_NC_TRAIN_RBC_Session_Pkg /* _L16=(RBC_Session_Pkg::TrainData__Set_NC_TRAIN#1)/ */ Context_TrainData__Set_NC_TRAIN_1;
  outC_RadioTrainTrackPacket011__Get_NC_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket011_Pkg /* _L21=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_NC_TRAIN#1)/ */ Context_RadioTrainTrackPacket011__Get_NC_TRAIN_1;
  outC_TrainData__Set_NC_CDTRAIN_RBC_Session_Pkg /* _L15=(RBC_Session_Pkg::TrainData__Set_NC_CDTRAIN#1)/ */ Context_TrainData__Set_NC_CDTRAIN_1;
  outC_RadioTrainTrackPacket011__Get_NC_CDTRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket011_Pkg /* _L13=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_NC_CDTRAIN#1)/ */ Context_RadioTrainTrackPacket011__Get_NC_CDTRAIN_1;
  outC_RadioTrainTrackPackets__GetP011_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L6=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP011#1)/ */ Context_RadioTrainTrackPackets__GetP011_1;
  outC_RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L19=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetPackets#1)/ */ Context_RadioTrainTrackMessage__GetPackets_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  TrainData_T /* _L30/ */ _L30;
  TrainData_T /* _L29/ */ _L29;
  L_TRAIN /* _L26/ */ _L26;
  N_AXLE /* _L24/ */ _L24;
  TrainData_T /* _L22/ */ _L22;
  NC_TRAIN /* _L21/ */ _L21;
  TrainData_T /* _L20/ */ _L20;
  outPackets_T_Common_Types_Pkg /* _L19/ */ _L19;
  TrainData_T /* _L18/ */ _L18;
  TrainData_T /* _L16/ */ _L16;
  TrainData_T /* _L15/ */ _L15;
  M_AXLELOADCAT /* _L14/ */ _L14;
  NC_CDTRAIN /* _L13/ */ _L13;
  V_MAXTRAIN /* _L12/ */ _L12;
  TrainData_T /* _L10/ */ _L10;
  aNID_NTC_T_Packet_TrainTypes_Pkg /* _L9/ */ _L9;
  aTractionIdentity_T_Packet_TrainTypes_Pkg /* _L8/ */ _L8;
  TrainData_T /* _L7/ */ _L7;
  PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg /* _L6/ */ _L6;
  M_LOADINGGAUGE /* _L5/ */ _L5;
  TrainData_T /* _L4/ */ _L4;
  M_AIRTIGHT /* _L1/ */ _L1;
  TrainData_T /* _L31/ */ _L31;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* _L32/ */ _L32;
} outC_TrainData__UpdateWithP011_RBC_Session_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Session_Pkg::TrainData__UpdateWithP011/ */
extern void TrainData__UpdateWithP011_RBC_Session_Pkg(
  /* inTrainData/ */
  TrainData_T *inTrainData,
  /* inRadioTrainTrackMessage/ */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  outC_TrainData__UpdateWithP011_RBC_Session_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TrainData__UpdateWithP011_reset_RBC_Session_Pkg(
  outC_TrainData__UpdateWithP011_RBC_Session_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TrainData__UpdateWithP011_init_RBC_Session_Pkg(
  outC_TrainData__UpdateWithP011_RBC_Session_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _TrainData__UpdateWithP011_RBC_Session_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TrainData__UpdateWithP011_RBC_Session_Pkg.h
** Generation date: 2023-10-12T15:09:59
*************************************************************$ */

