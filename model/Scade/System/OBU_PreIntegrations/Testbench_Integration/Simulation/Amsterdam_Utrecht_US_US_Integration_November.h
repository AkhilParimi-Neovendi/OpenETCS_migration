/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _Amsterdam_Utrecht_US_US_Integration_November_H_
#define _Amsterdam_Utrecht_US_US_Integration_November_H_

#include "kcg_types.h"
#include "Amsterdam_Utrecht_RBC_Integration_US_Integration_November.h"
#include "Amsterdam_Utrecht_Lijn1_balises_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1.h"
#include "CASTLIB_BaliseHeaders_TM_conversions.h"

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
  outC_CASTLIB_BaliseHeaders_TM_conversions /* _L7=(TM_conversions::CASTLIB_BaliseHeaders#1)/ */ Context_CASTLIB_BaliseHeaders_1;
  outC_Amsterdam_Utrecht_RBC_Integration_US_Integration_November /* _L8=(US_Integration_November::Amsterdam_Utrecht_RBC_Integration#1)/ */ Context_Amsterdam_Utrecht_RBC_Integration_1;
  outC_Amsterdam_Utrecht_Lijn1_balises_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1 /* _L1=(AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises#1)/ */ Context_Amsterdam_Utrecht_Lijn1_balises_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedBaliseMessage_TM /* _L1/ */ _L1;
  kcg_float64 /* _L2/ */ _L2;
  CompressedPackets_T_Common_Types_Pkg /* _L6/ */ _L6;
  BaliseTelegramHeader_int_T_TM /* _L5/ */ _L5;
  TelegramHeader_T_BG_Types_Pkg /* _L7/ */ _L7;
  CompressedPackets_T_Common_Types_Pkg /* _L9/ */ _L9;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* _L8/ */ _L8;
  kcg_int64 /* _L13/ */ _L13;
  CompressedRadioMessage_TM /* _L10/ */ _L10;
  TrackType_US_Integration_November /* _L14/ */ _L14;
} outC_Amsterdam_Utrecht_US_US_Integration_November;

/* ===========  node initialization and cycle functions  =========== */
/* US_Integration_November::Amsterdam_Utrecht_US/ */
extern void Amsterdam_Utrecht_US_US_Integration_November(
  /* TrainPos/ */
  kcg_float64 TrainPos,
  /* Trigger_in/ */
  kcg_int64 Trigger_in,
  /* SelectTrack/ */
  TrackType_US_Integration_November SelectTrack,
  outC_Amsterdam_Utrecht_US_US_Integration_November *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Amsterdam_Utrecht_US_reset_US_Integration_November(
  outC_Amsterdam_Utrecht_US_US_Integration_November *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Amsterdam_Utrecht_US_init_US_Integration_November(
  outC_Amsterdam_Utrecht_US_US_Integration_November *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Amsterdam_Utrecht_US_US_Integration_November_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Amsterdam_Utrecht_US_US_Integration_November.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

