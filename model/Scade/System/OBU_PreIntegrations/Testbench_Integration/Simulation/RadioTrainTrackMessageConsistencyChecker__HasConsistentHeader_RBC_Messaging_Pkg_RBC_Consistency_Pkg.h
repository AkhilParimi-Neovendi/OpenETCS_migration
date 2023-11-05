/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg_H_
#define _RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg_H_

#include "kcg_types.h"
#include "Msg129ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"
#include "Msg132ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"
#include "Msg136ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"
#include "Msg146ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"
#include "Msg154ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"
#include "Msg155ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"
#include "Msg159ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"
#include "Msg156ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"
#include "Msg147ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"
#include "RadioTrainTrackHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* outIsConsistent/ */ outIsConsistent;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Msg129ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg /* IfBlock1:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg129ConsistencyChecker__HasConsistentHeader#1)/ */ Context_Msg129ConsistencyChecker__HasConsistentHeader_1;
  outC_Msg132ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg /* IfBlock1:else:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg132ConsistencyChecker__HasConsistentHeader#1)/ */ Context_Msg132ConsistencyChecker__HasConsistentHeader_1;
  outC_Msg136ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg /* IfBlock1:else:else:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg136ConsistencyChecker__HasConsistentHeader#1)/ */ Context_Msg136ConsistencyChecker__HasConsistentHeader_1;
  outC_Msg146ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg /* IfBlock1:else:else:else:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg146ConsistencyChecker__HasConsistentHeader#1)/ */ Context_Msg146ConsistencyChecker__HasConsistentHeader_1;
  outC_Msg154ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg /* IfBlock1:else:else:else:else:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg154ConsistencyChecker__HasConsistentHeader#1)/ */ Context_Msg154ConsistencyChecker__HasConsistentHeader_1;
  outC_Msg155ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg /* IfBlock1:else:else:else:else:else:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentHeader#1)/ */ Context_Msg155ConsistencyChecker__HasConsistentHeader_1;
  outC_Msg159ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg /* IfBlock1:else:else:else:else:else:else:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg159ConsistencyChecker__HasConsistentHeader#1)/ */ Context_Msg159ConsistencyChecker__HasConsistentHeader_1;
  outC_Msg156ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg /* IfBlock1:else:else:else:else:else:else:else:then:_L2=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg156ConsistencyChecker__HasConsistentHeader#1)/ */ Context_Msg156ConsistencyChecker__HasConsistentHeader_1;
  outC_Msg147ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg /* IfBlock1:else:else:else:else:else:else:else:else:then:_L2=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg147ConsistencyChecker__HasConsistentHeader#1)/ */ Context_Msg147ConsistencyChecker__HasConsistentHeader_1;
  outC_RadioTrainTrackHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L3=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_NID_MESSAGE#1)/ */ Context_RadioTrainTrackHeader__Get_NID_MESSAGE_1;
  outC_RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L2=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#1)/ */ Context_RadioTrainTrackMessage__GetHeader_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else: */ else_clock_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else: */ else_clock_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else: */ else_clock_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else: */ else_clock_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else: */ else_clock_else_else_else_else_else_IfBlock1;
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
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* IfBlock1:else:else:else:else:else:else:else:else:then:_L1/ */ _L1_then_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else:_L1/ */ _L1_else_else_else_else_else_else_else_else_else_IfBlock1;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* IfBlock1:else:else:else:else:else:else:else:then:_L3/ */ _L3_then_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:then:_L2/ */ _L2_then_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:then:_L1/ */ _L1_then_else_else_else_else_else_IfBlock1;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* IfBlock1:else:else:else:else:else:then:_L3/ */ _L3_then_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:then:_L1/ */ _L1_then_else_else_else_IfBlock1;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* IfBlock1:else:else:else:then:_L4/ */ _L4_then_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L1/ */ _L1_then_else_IfBlock1;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* IfBlock1:else:then:_L3/ */ _L3_then_else_IfBlock1;
  NID_MESSAGE /* radioTrainTrackMessageId/ */ radioTrainTrackMessageId;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* radioTrainTrackHeader/ */ radioTrainTrackHeader;
  NID_MESSAGE /* _L3/ */ _L3;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* _L2/ */ _L2;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* _L1/ */ _L1;
} outC_RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader/ */
extern void RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  /* inRadioTrainTrackMessage/ */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  outC_RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader_reset_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  outC_RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader_init_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  outC_RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

