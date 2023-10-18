/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _PosData__Update_RBC_Session_Pkg_H_
#define _PosData__Update_RBC_Session_Pkg_H_

#include "kcg_types.h"
#include "RadioTrainTrackPacket001__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke.h"
#include "RadioTrainTrackPacket000__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke.h"
#include "PosData__UpdateWithP000_RBC_Session_Pkg.h"
#include "RadioTrainTrackPackets__GetP000_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "PosData__UpdateWithP001_RBC_Session_Pkg.h"
#include "RadioTrainTrackPackets__GetP001_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  PosData_T /* outPosData/ */ outPosData;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_PosData__UpdateWithP000_RBC_Session_Pkg /* IfBlock1:then:_L1=(RBC_Session_Pkg::PosData__UpdateWithP000#1)/ */ Context_PosData__UpdateWithP000_1;
  outC_PosData__UpdateWithP001_RBC_Session_Pkg /* IfBlock1:else:then:_L4=(RBC_Session_Pkg::PosData__UpdateWithP001#1)/ */ Context_PosData__UpdateWithP001_1;
  outC_RadioTrainTrackPacket000__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrack /* _L5=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__IsValid#1)/ */ Context_RadioTrainTrackPacket000__IsValid_1;
  outC_RadioTrainTrackPackets__GetP000_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L3=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP000#1)/ */ Context_RadioTrainTrackPackets__GetP000_1;
  outC_RadioTrainTrackPacket001__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrack /* _L7=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__IsValid#1)/ */ Context_RadioTrainTrackPacket001__IsValid_1;
  outC_RadioTrainTrackPackets__GetP001_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L6=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP001#1)/ */ Context_RadioTrainTrackPackets__GetP001_1;
  outC_RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L2=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetPackets#1)/ */ Context_RadioTrainTrackMessage__GetPackets_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  PosData_T /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  PosData_T /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  PosData_T /* IfBlock1:else:else:_L1/ */ _L1_else_else_IfBlock1;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* IfBlock1:else:then:_L2/ */ _L2_then_else_IfBlock1;
  PosData_T /* IfBlock1:else:then:_L3/ */ _L3_then_else_IfBlock1;
  PosData_T /* IfBlock1:else:then:_L4/ */ _L4_then_else_IfBlock1;
  kcg_bool /* validPacket0/ */ validPacket0;
  kcg_bool /* validPacket1/ */ validPacket1;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* _L1/ */ _L1;
  outPackets_T_Common_Types_Pkg /* _L2/ */ _L2;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* _L3/ */ _L3;
  kcg_bool /* _L5/ */ _L5;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
} outC_PosData__Update_RBC_Session_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Session_Pkg::PosData__Update/ */
extern void PosData__Update_RBC_Session_Pkg(
  /* inPosData/ */
  PosData_T *inPosData,
  /* inRadioTrainTrackMessage/ */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  outC_PosData__Update_RBC_Session_Pkg *outC);

extern void PosData__Update_reset_RBC_Session_Pkg(
  outC_PosData__Update_RBC_Session_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void PosData__Update_init_RBC_Session_Pkg(
  outC_PosData__Update_RBC_Session_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _PosData__Update_RBC_Session_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** PosData__Update_RBC_Session_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

