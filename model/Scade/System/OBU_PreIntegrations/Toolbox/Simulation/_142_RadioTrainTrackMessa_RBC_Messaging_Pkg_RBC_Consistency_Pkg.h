/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef __142_RadioTrainTrackMessa_RBC_Messaging_Pkg_RBC_Consistency_Pkg_H_
#define __142_RadioTrainTrackMessa_RBC_Messaging_Pkg_RBC_Consistency_Pkg_H_

#include "kcg_types.h"
#include "_141_Msg129ConsistencyChe_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"
#include "_140_Msg132ConsistencyChe_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"
#include "_139_Msg136ConsistencyChe_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"
#include "_138_Msg146ConsistencyChe_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"
#include "_137_Msg154ConsistencyChe_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"
#include "_136_Msg155ConsistencyChe_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"
#include "_135_Msg159ConsistencyChe_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"
#include "_134_Msg156ConsistencyChe_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"
#include "_132_Msg147ConsistencyChe_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"
#include "_100_RadioTrainTrackHeade_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
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
  outC__141_Msg129ConsistencyChe_RBC_Messaging_Pkg_RBC_Consistency_Pkg /* IfBlock1:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg129ConsistencyChecker__HasConsistentHeader#1)/ */ Context_Msg129ConsistencyChecker__HasConsistentHeader_1;
  outC__140_Msg132ConsistencyChe_RBC_Messaging_Pkg_RBC_Consistency_Pkg /* IfBlock1:else:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg132ConsistencyChecker__HasConsistentHeader#1)/ */ Context_Msg132ConsistencyChecker__HasConsistentHeader_1;
  outC__139_Msg136ConsistencyChe_RBC_Messaging_Pkg_RBC_Consistency_Pkg /* IfBlock1:else:else:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg136ConsistencyChecker__HasConsistentHeader#1)/ */ Context_Msg136ConsistencyChecker__HasConsistentHeader_1;
  outC__138_Msg146ConsistencyChe_RBC_Messaging_Pkg_RBC_Consistency_Pkg /* IfBlock1:else:else:else:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg146ConsistencyChecker__HasConsistentHeader#1)/ */ Context_Msg146ConsistencyChecker__HasConsistentHeader_1;
  outC__137_Msg154ConsistencyChe_RBC_Messaging_Pkg_RBC_Consistency_Pkg /* IfBlock1:else:else:else:else:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg154ConsistencyChecker__HasConsistentHeader#1)/ */ Context_Msg154ConsistencyChecker__HasConsistentHeader_1;
  outC__136_Msg155ConsistencyChe_RBC_Messaging_Pkg_RBC_Consistency_Pkg /* IfBlock1:else:else:else:else:else:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentHeader#1)/ */ Context_Msg155ConsistencyChecker__HasConsistentHeader_1;
  outC__135_Msg159ConsistencyChe_RBC_Messaging_Pkg_RBC_Consistency_Pkg /* IfBlock1:else:else:else:else:else:else:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg159ConsistencyChecker__HasConsistentHeader#1)/ */ Context_Msg159ConsistencyChecker__HasConsistentHeader_1;
  outC__134_Msg156ConsistencyChe_RBC_Messaging_Pkg_RBC_Consistency_Pkg /* IfBlock1:else:else:else:else:else:else:else:then:_L2=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg156ConsistencyChecker__HasConsistentHeader#1)/ */ Context_Msg156ConsistencyChecker__HasConsistentHeader_1;
  outC__132_Msg147ConsistencyChe_RBC_Messaging_Pkg_RBC_Consistency_Pkg /* IfBlock1:else:else:else:else:else:else:else:else:then:_L2=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg147ConsistencyChecker__HasConsistentHeader#1)/ */ Context_Msg147ConsistencyChecker__HasConsistentHeader_1;
  outC__100_RadioTrainTrackHeade_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L3=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_MESSAGE#1)/ */ Context_RadioTrainTrackHeader__Get_NID_MESSAGE_1;
  outC_RadioTrainTrackMessage__G_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L2=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#1)/ */ Context_RadioTrainTrackMessage__GetHeader_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else: */ else_clock_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else: */ else_clock_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else: */ _1_else_clock_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else: */ _2_else_clock_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else: */ _3_else_clock_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else: */ else_clock_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else: */ else_clock_else_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* IfBlock1:else:else:then:_L4/ */ _L4_then_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:then:_L1/ */ _L1_then_else_else_IfBlock1;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* IfBlock1:else:else:else:else:then:_L3/ */ _L3_then_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:then:_L1/ */ _L1_then_else_else_else_else_IfBlock1;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* IfBlock1:else:else:else:else:else:else:then:_L3/ */ _L3_then_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:then:_L1/ */ _L1_then_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:then:_L2/ */ _L2_then_else_else_else_else_else_else_else_else_IfBlock1;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* IfBlock1:else:else:else:else:else:else:else:else:then:_L1/ */ _L14_then_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else:_L1/ */ _L1_else_else_else_else_else_else_else_else_else_IfBlock1;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* IfBlock1:else:else:else:else:else:else:else:then:_L3/ */ _L35_then_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:then:_L2/ */ _L26_then_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:then:_L1/ */ _L17_then_else_else_else_else_else_IfBlock1;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* IfBlock1:else:else:else:else:else:then:_L3/ */ _L38_then_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:then:_L1/ */ _L1_then_else_else_else_IfBlock1;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* IfBlock1:else:else:else:then:_L4/ */ _L4_then_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L1/ */ _L1_then_else_IfBlock1;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* IfBlock1:else:then:_L3/ */ _L3_then_else_IfBlock1;
  NID_MESSAGE /* radioTrainTrackMessageId/ */ radioTrainTrackMessageId;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* radioTrainTrackHeader/ */ radioTrainTrackHeader;
  NID_MESSAGE /* _L3/ */ _L3;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* _L2/ */ _L2;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* _L1/ */ _L1;
} outC__142_RadioTrainTrackMessa_RBC_Messaging_Pkg_RBC_Consistency_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader/ */
extern void _142_RadioTrainTrackMessa_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  /* inRadioTrainTrackMessage/ */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  outC__142_RadioTrainTrackMessa_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void _142_RadioTrainTrackMessa_reset_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  outC__142_RadioTrainTrackMessa_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void _142_RadioTrainTrackMessa_init_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  outC__142_RadioTrainTrackMessa_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* __142_RadioTrainTrackMessa_RBC_Messaging_Pkg_RBC_Consistency_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** _142_RadioTrainTrackMessa_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

