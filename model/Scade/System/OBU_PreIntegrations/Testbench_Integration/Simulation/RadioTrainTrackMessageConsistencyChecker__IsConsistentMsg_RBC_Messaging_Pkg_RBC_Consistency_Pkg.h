/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_RBC_Messaging_Pkg_RBC_Consistency_Pkg_H_
#define _RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_RBC_Messaging_Pkg_RBC_Consistency_Pkg_H_

#include "kcg_types.h"
#include "RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"
#include "RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"
#include "RadioTrainTrackMessage__IsPresent_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrainTrackHeader__IsPresent_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrainTrackHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* outIsConsistent/ */ outIsConsistent;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  T_TRAIN /* lastReceivedRadioTrainTrackMessageTimestamp/ */ lastReceivedRadioTrainTrackMessageTimestamp;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg /* IfBlock1:then:_L4=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader#1)/ */ Context_RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader_1;
  outC_RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg /* IfBlock1:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets#1)/ */ Context_RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets_1;
  outC_RadioTrainTrackMessage__IsPresent_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L5=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__IsPresent#1)/ */ Context_RadioTrainTrackMessage__IsPresent_1;
  outC_RadioTrainTrackHeader__IsPresent_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L4=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__IsPresent#1)/ */ Context_RadioTrainTrackHeader__IsPresent_1;
  outC_RadioTrainTrackHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L6=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_T_TRAIN#1)/ */ Context_RadioTrainTrackHeader__Get_T_TRAIN_1;
  outC_RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L2=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#1)/ */ Context_RadioTrainTrackMessage__GetHeader_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  T_TRAIN /* IfBlock1:then:_L8/ */ _L8_then_IfBlock1;
  T_TRAIN /* IfBlock1:then:_L6/ */ _L6_then_IfBlock1;
  T_TRAIN /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  kcg_bool /* IfBlock1:else:_L1/ */ _L1_else_IfBlock1;
  kcg_bool /* radioTrainTrackHeaderIsPresent/ */ radioTrainTrackHeaderIsPresent;
  kcg_bool /* radioTrainTrackMessageIsPresent/ */ radioTrainTrackMessageIsPresent;
  T_TRAIN /* currentRecivedRadioTrainTrackMessageTimestamp/ */ currentRecivedRadioTrainTrackMessageTimestamp;
  kcg_bool /* consistencyCheckConditionSatisfied/ */ consistencyCheckConditionSatisfied;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* _L1/ */ _L1;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* _L2/ */ _L2;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  T_TRAIN /* _L6/ */ _L6;
  kcg_bool /* _L50/ */ _L50;
  T_TRAIN /* _L49/ */ _L49;
  T_TRAIN /* _L48/ */ _L48;
  kcg_bool /* _L47/ */ _L47;
  kcg_bool /* _L46/ */ _L46;
  T_TRAIN /* _L45/ */ _L45;
  kcg_bool /* _L44/ */ _L44;
  T_TRAIN /* _L43/ */ _L43;
  T_TRAIN /* _L42/ */ _L42;
  T_TRAIN /* _L41/ */ _L41;
  kcg_bool /* _L40/ */ _L40;
  kcg_bool /* _L39/ */ _L39;
} outC_RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_RBC_Messaging_Pkg_RBC_Consistency_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg/ */
extern void RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  /* inRadioTrainTrackMessage/ */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  outC_RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_reset_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  outC_RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_init_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  outC_RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  T_TRAIN /* lastReceivedRadioTrainTrackMessageTimestamp/ */ Context_lastReceivedRadioTrainTrackMessageTimestamp;
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
} SV_RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_RBC_Messaging_Pkg_RBC_Consistency_Pkg;

extern void kcg_save_SV_RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  SV_RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_RBC_Messaging_Pkg_RBC_Consistency_Pkg *SV,
  outC_RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC);
extern void kcg_load_SV_RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  outC_RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC,
  SV_RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_RBC_Messaging_Pkg_RBC_Consistency_Pkg *SV);



#endif /* _RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_RBC_Messaging_Pkg_RBC_Consistency_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

