/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef _RadioTrainTrackMessageCon_RBC_Messaging_Pkg_RBC_Consistency_Pkg_H_
#define _RadioTrainTrackMessageCon_RBC_Messaging_Pkg_RBC_Consistency_Pkg_H_

#include "kcg_types.h"
#include "Msg129ConsistencyChecker__RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"
#include "Msg132ConsistencyChecker__RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"
#include "Msg136ConsistencyChecker__RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"
#include "Msg146ConsistencyChecker__RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"
#include "Msg154ConsistencyChecker__RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"
#include "Msg155ConsistencyChecker__RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"
#include "Msg159ConsistencyChecker__RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"
#include "Msg156ConsistencyChecker__RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"
#include "Msg147ConsistencyChecker__RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"
#include "_100_RadioTrainTrackHeade_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "_52_RadioTrainTrackMessage__G_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrainTrackMessage__G_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* outIsConsistent/ */ outIsConsistent;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Msg129ConsistencyChecker__RBC_Messaging_Pkg_RBC_Consistency_Pkg /* IfBlock1:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg129ConsistencyChecker__HasConsistentPackets#1)/ */ Context_Msg129ConsistencyChecker__HasConsistentPackets_1;
  outC_Msg132ConsistencyChecker__RBC_Messaging_Pkg_RBC_Consistency_Pkg /* IfBlock1:else:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg132ConsistencyChecker__HasConsistentPackets#1)/ */ Context_Msg132ConsistencyChecker__HasConsistentPackets_1;
  outC_Msg136ConsistencyChecker__RBC_Messaging_Pkg_RBC_Consistency_Pkg /* IfBlock1:else:else:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg136ConsistencyChecker__HasConsistentPackets#1)/ */ Context_Msg136ConsistencyChecker__HasConsistentPackets_1;
  outC_Msg146ConsistencyChecker__RBC_Messaging_Pkg_RBC_Consistency_Pkg /* IfBlock1:else:else:else:then:_L3=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg146ConsistencyChecker__HasConsistentPackets#1)/ */ Context_Msg146ConsistencyChecker__HasConsistentPackets_1;
  outC_Msg154ConsistencyChecker__RBC_Messaging_Pkg_RBC_Consistency_Pkg /* IfBlock1:else:else:else:else:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg154ConsistencyChecker__HasConsistentPackets#1)/ */ Context_Msg154ConsistencyChecker__HasConsistentPackets_1;
  outC_Msg155ConsistencyChecker__RBC_Messaging_Pkg_RBC_Consistency_Pkg /* IfBlock1:else:else:else:else:else:then:_L2=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentPackets#1)/ */ Context_Msg155ConsistencyChecker__HasConsistentPackets_1;
  outC_Msg159ConsistencyChecker__RBC_Messaging_Pkg_RBC_Consistency_Pkg /* IfBlock1:else:else:else:else:else:else:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg159ConsistencyChecker__HasConsistentPackets#1)/ */ Context_Msg159ConsistencyChecker__HasConsistentPackets_1;
  outC_Msg156ConsistencyChecker__RBC_Messaging_Pkg_RBC_Consistency_Pkg /* IfBlock1:else:else:else:else:else:else:else:then:_L3=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg156ConsistencyChecker__HasConsistentPackets#1)/ */ Context_Msg156ConsistencyChecker__HasConsistentPackets_1;
  outC_Msg147ConsistencyChecker__RBC_Messaging_Pkg_RBC_Consistency_Pkg /* IfBlock1:else:else:else:else:else:else:else:else:then:_L2=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg147ConsistencyChecker__HasConsistentPackets#1)/ */ Context_Msg147ConsistencyChecker__HasConsistentPackets_1;
  outC__52_RadioTrainTrackMessage__G_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L6=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetPackets#1)/ */ Context_RadioTrainTrackMessage__GetPackets_1;
  outC__100_RadioTrainTrackHeade_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L4=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_MESSAGE#1)/ */ Context_RadioTrainTrackHeader__Get_NID_MESSAGE_1;
  outC_RadioTrainTrackMessage__G_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L3=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#1)/ */ _1_Context_RadioTrainTrackMessage__GetHeader_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else: */ else_clock_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else: */ else_clock_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else: */ _2_else_clock_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else: */ _3_else_clock_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else: */ _4_else_clock_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else: */ else_clock_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else: */ else_clock_else_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  outPackets_T_Common_Types_Pkg /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  outPackets_T_Common_Types_Pkg /* IfBlock1:else:else:then:_L2/ */ _L2_then_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:then:_L1/ */ _L1_then_else_else_IfBlock1;
  outPackets_T_Common_Types_Pkg /* IfBlock1:else:else:else:else:then:_L2/ */ _L2_then_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:then:_L1/ */ _L1_then_else_else_else_else_IfBlock1;
  outPackets_T_Common_Types_Pkg /* IfBlock1:else:else:else:else:else:else:then:_L2/ */ _L2_then_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:then:_L1/ */ _L1_then_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:then:_L2/ */ _L25_then_else_else_else_else_else_else_else_else_IfBlock1;
  outPackets_T_Common_Types_Pkg /* IfBlock1:else:else:else:else:else:else:else:else:then:_L1/ */ _L16_then_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else:_L1/ */ _L1_else_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:then:_L3/ */ _L3_then_else_else_else_else_else_else_else_IfBlock1;
  outPackets_T_Common_Types_Pkg /* IfBlock1:else:else:else:else:else:else:else:then:_L2/ */ _L27_then_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:then:_L2/ */ _L28_then_else_else_else_else_else_IfBlock1;
  outPackets_T_Common_Types_Pkg /* IfBlock1:else:else:else:else:else:then:_L3/ */ _L39_then_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:then:_L3/ */ _L3_then_else_else_else_IfBlock1;
  outPackets_T_Common_Types_Pkg /* IfBlock1:else:else:else:then:_L4/ */ _L4_then_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L1/ */ _L1_then_else_IfBlock1;
  outPackets_T_Common_Types_Pkg /* IfBlock1:else:then:_L2/ */ _L2_then_else_IfBlock1;
  NID_MESSAGE /* radioTrainTrackmessageId/ */ radioTrainTrackmessageId;
  outPackets_T_Common_Types_Pkg /* radioTrainTrackPackets/ */ radioTrainTrackPackets;
  NID_MESSAGE /* _L4/ */ _L4;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* _L3/ */ _L3;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* _L5/ */ _L5;
  outPackets_T_Common_Types_Pkg /* _L6/ */ _L6;
} outC_RadioTrainTrackMessageCon_RBC_Messaging_Pkg_RBC_Consistency_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets/ */
extern void RadioTrainTrackMessageCon_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  /* inRadioTrainTrackMessage/ */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  outC_RadioTrainTrackMessageCon_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RadioTrainTrackMessageCon_reset_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  outC_RadioTrainTrackMessageCon_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void RadioTrainTrackMessageCon_init_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  outC_RadioTrainTrackMessageCon_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _RadioTrainTrackMessageCon_RBC_Messaging_Pkg_RBC_Consistency_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrainTrackMessageCon_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

