/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _Amsterdam_Utrecht_US_Integration_November_H_
#define _Amsterdam_Utrecht_US_Integration_November_H_

#include "kcg_types.h"
#include "Amsterdam_Utrecht_US_US_Integration_November.h"
#include "Amsterdam_Utrecht_modular_US_Integration_November.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedPackets_T_Common_Types_Pkg /* Balise_Packets/ */ Balise_Packets;
  TelegramHeader_T_BG_Types_Pkg /* Balise_Header/ */ Balise_Header;
  CompressedBaliseMessage_TM /* CompressedBaliseMessage/ */ CompressedBaliseMessage;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* RadioTrackTrainHeader_out/ */ RadioTrackTrainHeader_out;
  CompressedPackets_T_Common_Types_Pkg /* Compressed_Packets_out/ */ Compressed_Packets_out;
  CompressedRadioMessage_TM /* Compressed_Radio_Message_out/ */ Compressed_Radio_Message_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Amsterdam_Utrecht_US_US_Integration_November /* IfBlock1:then:_L1=(US_Integration_November::Amsterdam_Utrecht_US#1)/ */ Context_Amsterdam_Utrecht_US_1;
  outC_Amsterdam_Utrecht_modular_US_Integration_November /* IfBlock1:else:_L1=(US_Integration_November::Amsterdam_Utrecht_modular#1)/ */ Context_Amsterdam_Utrecht_modular_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  TrackType_US_Integration_November /* IfBlock1:then:_L9/ */ _L9_then_IfBlock1;
  kcg_int32 /* IfBlock1:then:_L8/ */ _L8_then_IfBlock1;
  kcg_float32 /* IfBlock1:then:_L7/ */ _L7_then_IfBlock1;
  CompressedPackets_T_Common_Types_Pkg /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  TelegramHeader_T_BG_Types_Pkg /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  CompressedBaliseMessage_TM /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1;
  CompressedPackets_T_Common_Types_Pkg /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  CompressedRadioMessage_TM /* IfBlock1:then:_L6/ */ _L6_then_IfBlock1;
  TrackType_US_Integration_November /* IfBlock1:else:_L9/ */ _L9_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:_L8/ */ _L8_else_IfBlock1;
  kcg_float32 /* IfBlock1:else:_L7/ */ _L7_else_IfBlock1;
  CompressedPackets_T_Common_Types_Pkg /* IfBlock1:else:_L1/ */ _L1_else_IfBlock1;
  TelegramHeader_T_BG_Types_Pkg /* IfBlock1:else:_L2/ */ _L2_else_IfBlock1;
  CompressedBaliseMessage_TM /* IfBlock1:else:_L3/ */ _L3_else_IfBlock1;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* IfBlock1:else:_L4/ */ _L4_else_IfBlock1;
  CompressedPackets_T_Common_Types_Pkg /* IfBlock1:else:_L5/ */ _L5_else_IfBlock1;
  CompressedRadioMessage_TM /* IfBlock1:else:_L6/ */ _L6_else_IfBlock1;
} outC_Amsterdam_Utrecht_US_Integration_November;

/* ===========  node initialization and cycle functions  =========== */
/* US_Integration_November::Amsterdam_Utrecht/ */
extern void Amsterdam_Utrecht_US_Integration_November(
  /* TrainPos/ */
  kcg_float32 TrainPos,
  /* Trigger_in/ */
  kcg_int32 Trigger_in,
  /* SelectTrack/ */
  TrackType_US_Integration_November SelectTrack,
  outC_Amsterdam_Utrecht_US_Integration_November *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Amsterdam_Utrecht_reset_US_Integration_November(
  outC_Amsterdam_Utrecht_US_Integration_November *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Amsterdam_Utrecht_init_US_Integration_November(
  outC_Amsterdam_Utrecht_US_Integration_November *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Amsterdam_Utrecht_US_Integration_November_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Amsterdam_Utrecht_US_Integration_November.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

