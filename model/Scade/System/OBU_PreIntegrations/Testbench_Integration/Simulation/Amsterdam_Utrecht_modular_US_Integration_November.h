/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:59
*************************************************************$ */
#ifndef _Amsterdam_Utrecht_modular_US_Integration_November_H_
#define _Amsterdam_Utrecht_modular_US_Integration_November_H_

#include "kcg_types.h"
#include "Sheet14_standalone_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.h"

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
  outC_Sheet14_standalone_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone /* _L15=(AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone#1)/ */ Context_Sheet14_standalone_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedRadioMessage_TM /* _L20/ */ _L20;
  CompressedPackets_T_Common_Types_Pkg /* _L19/ */ _L19;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* _L18/ */ _L18;
  CompressedBaliseMessage_TM /* _L17/ */ _L17;
  TelegramHeader_T_BG_Types_Pkg /* _L16/ */ _L16;
  CompressedPackets_T_Common_Types_Pkg /* _L15/ */ _L15;
  kcg_float64 /* _L21/ */ _L21;
  kcg_int64 /* _L22/ */ _L22;
  TrackType_US_Integration_November /* _L23/ */ _L23;
} outC_Amsterdam_Utrecht_modular_US_Integration_November;

/* ===========  node initialization and cycle functions  =========== */
/* US_Integration_November::Amsterdam_Utrecht_modular/ */
extern void Amsterdam_Utrecht_modular_US_Integration_November(
  /* TrainPos/ */
  kcg_float64 TrainPos,
  /* Trigger_in/ */
  kcg_int64 Trigger_in,
  /* SelectTrack/ */
  TrackType_US_Integration_November SelectTrack,
  outC_Amsterdam_Utrecht_modular_US_Integration_November *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Amsterdam_Utrecht_modular_reset_US_Integration_November(
  outC_Amsterdam_Utrecht_modular_US_Integration_November *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Amsterdam_Utrecht_modular_init_US_Integration_November(
  outC_Amsterdam_Utrecht_modular_US_Integration_November *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Amsterdam_Utrecht_modular_US_Integration_November_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Amsterdam_Utrecht_modular_US_Integration_November.h
** Generation date: 2023-10-12T15:09:59
*************************************************************$ */

