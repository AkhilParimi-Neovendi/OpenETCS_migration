/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _RadioTrackTrainMsgQueue_RBC_Messaging_Pkg_H_
#define _RadioTrackTrainMsgQueue_RBC_Messaging_Pkg_H_

#include "kcg_types.h"
#include "RadioTrackTrainMessageQueueEntry__GetEntry_RBC_Collections_Pkg.h"
#include "RadioTrackTrainMessageQueue__Take_RBC_Collections_Pkg.h"
#include "RadioTrackTrainMessage__SetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "RadioTrackTrainFactory__CreateDefaultMsg_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg.h"
#include "RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "RadioTrackTrainMessageQueue__GetRemainingCapacity_RBC_Collections_Pkg.h"
#include "RadioTrackTrainHeader__Set_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "Clock__GetSeconds_RBC_Time_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  RBC_Data_T_RBC_DataBus_Pkg /* outDataBus/ */ outDataBus;
  CompressedRadioMessage_TM /* outRadioTrackTrainMessage/ */ outRadioTrackTrainMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RadioTrackTrainMessage__SetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* IfBlock1:then:_L32=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__SetHeader#2)/ */ Context_RadioTrackTrainMessage__SetHeader_2;
  outC_RadioTrackTrainHeader__Set_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* IfBlock1:then:_L33=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_T_TRAIN#2)/ */ Context_RadioTrackTrainHeader__Set_T_TRAIN_2;
  outC_Clock__GetSeconds_RBC_Time_Pkg /* IfBlock1:then:_L39=(RBC_Time_Pkg::Clock__GetSeconds#2)/ */ Context_Clock__GetSeconds_2;
  outC_RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* IfBlock1:then:_L37=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#2)/ */ Context_RadioTrackTrainMessage__GetHeader_2;
  outC_RadioTrackTrainMessageQueueEntry__GetEntry_RBC_Collections_Pkg /* IfBlock1:then:_L36=(RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__GetEntry#2)/ */ Context_RadioTrackTrainMessageQueueEntry__GetEntry_2;
  outC_RadioTrackTrainMessageQueue__Take_RBC_Collections_Pkg /* IfBlock1:then:_L34=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take#2)/ */ Context_RadioTrackTrainMessageQueue__Take_2;
  outC_RadioTrackTrainFactory__CreateDefaultMsg_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg /* IfBlock1:else:_L3=(RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateDefaultMsg_BSL2#2)/ */ Context_RadioTrackTrainFactory__CreateDefaultMsg_BSL2_2;
  outC_RadioTrackTrainMessageQueue__GetRemainingCapacity_RBC_Collections_Pkg /* _L5=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity#2)/ */ Context_RadioTrackTrainMessageQueue__GetRemainingCapacity_2;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  RBC_Data_T_RBC_DataBus_Pkg /* IfBlock1:then:_L49/ */ _L49_then_IfBlock1;
  RBC_Data_T_RBC_DataBus_Pkg /* IfBlock1:then:_L45/ */ _L45_then_IfBlock1;
  RBC_Data_T_RBC_DataBus_Pkg /* IfBlock1:then:_L44/ */ _L44_then_IfBlock1;
  RBC_Data_T_RBC_DataBus_Pkg /* IfBlock1:then:_L42/ */ _L42_then_IfBlock1;
  RadioTrackTrainMessageQueue_T /* IfBlock1:then:_L43/ */ _L43_then_IfBlock1;
  Clock_T /* IfBlock1:then:_L41/ */ _L41_then_IfBlock1;
  CompressedRadioMessage_TM /* IfBlock1:then:_L32/ */ _L32_then_IfBlock1;
  Radio_TrackTrain_Header_T_TM /* IfBlock1:then:_L33/ */ _L33_then_IfBlock1;
  RadioTrackTrainMessageQueueEntry_T /* IfBlock1:then:_L35/ */ _L35_then_IfBlock1;
  RadioTrackTrainMessageQueue_T /* IfBlock1:then:_L34/ */ _L34_then_IfBlock1;
  CompressedRadioMessage_TM /* IfBlock1:then:_L36/ */ _L36_then_IfBlock1;
  Radio_TrackTrain_Header_T_TM /* IfBlock1:then:_L37/ */ _L37_then_IfBlock1;
  T_TRAIN /* IfBlock1:then:_L39/ */ _L39_then_IfBlock1;
  RBC_Data_T_RBC_DataBus_Pkg /* IfBlock1:else:_L7/ */ _L7_else_IfBlock1;
  RBC_Data_T_RBC_DataBus_Pkg /* IfBlock1:else:_L8/ */ _L8_else_IfBlock1;
  RadioTrackTrainMessageQueue_T /* IfBlock1:else:_L5/ */ _L5_else_IfBlock1;
  RBC_Data_T_RBC_DataBus_Pkg /* IfBlock1:else:_L6/ */ _L6_else_IfBlock1;
  CompressedRadioMessage_TM /* IfBlock1:else:_L3/ */ _L3_else_IfBlock1;
  kcg_int32 /* remainingCapacity/ */ remainingCapacity;
  RBC_Data_T_RBC_DataBus_Pkg /* _L1/ */ _L1;
  kcg_int32 /* _L5/ */ _L5;
  RadioTrackTrainMessageQueue_T /* _L6/ */ _L6;
} outC_RadioTrackTrainMsgQueue_RBC_Messaging_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue/ */
extern void RadioTrackTrainMsgQueue_RBC_Messaging_Pkg(
  /* inDataBus/ */
  RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  outC_RadioTrackTrainMsgQueue_RBC_Messaging_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RadioTrackTrainMsgQueue_reset_RBC_Messaging_Pkg(
  outC_RadioTrackTrainMsgQueue_RBC_Messaging_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void RadioTrackTrainMsgQueue_init_RBC_Messaging_Pkg(
  outC_RadioTrackTrainMsgQueue_RBC_Messaging_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _RadioTrackTrainMsgQueue_RBC_Messaging_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrackTrainMsgQueue_RBC_Messaging_Pkg.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

