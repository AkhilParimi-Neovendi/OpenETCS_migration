/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */
#ifndef _Amsterdam_Utrecht_RBC_Int_US_Integration_November_H_
#define _Amsterdam_Utrecht_RBC_Int_US_Integration_November_H_

#include "kcg_types.h"
#include "Amsterdam_Utrecht_Lijn1_RBC_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1.h"
#include "Amsterdam_Utrecht_Lijn1_R_UserStories13_16.h"
#include "compressed_to_Radio_Track_TM_RBC_conversions_legacy.h"
#include "C_TrackTrainMessage_to_Int_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg /* RadioTrackTrainHeader_out/ */ RadioTrackTrainHeader_out;
  CompressedPackets_T_Common_Types_Pkg /* Compressed_Packets_out/ */ Compressed_Packets_out;
  CompressedRadioMessage_TM /* Compressed_Radio_Message_out/ */ Compressed_Radio_Message_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_TrackTrainMessage_to_Int_TM_conversions /* _L15=(TM_conversions::C_TrackTrainMessage_to_Int#1)/ */ Context_C_TrackTrainMessage_to_Int_1;
  outC_compressed_to_Radio_Track_TM_RBC_conversions_legacy /* _L13=(TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H#1)/ */ Context_compressed_to_Radio_Track_Train_H_1;
  outC_Amsterdam_Utrecht_Lijn1_RBC_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1 /* IfBlock1:then:_L1=(AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC#1)/ */ Context_Amsterdam_Utrecht_Lijn1_RBC_1;
  outC_Amsterdam_Utrecht_Lijn1_R_UserStories13_16 /* IfBlock1:else:_L1=(UserStories13_16::Amsterdam_Utrecht_Lijn1_RBC_non_nominal#1)/ */ _1_Context_Amsterdam_Utrecht_Lijn1_RBC_non_nominal_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* IfBlock1:then:_L8/ */ _L8_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  CompressedPackets_T_Common_Types_Pkg /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1;
  M_TrackTrain_Radio_T_TM_radio_messages /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  M_TrackTrain_Radio_T_TM_radio_messages /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  CompressedPackets_T_Common_Types_Pkg /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  kcg_int64 /* IfBlock1:else:_L6/ */ _L6_else_IfBlock1;
  CompressedPackets_T_Common_Types_Pkg /* IfBlock1:else:_L4/ */ _L4_else_IfBlock1;
  M_TrackTrain_Radio_T_TM_radio_messages /* IfBlock1:else:_L5/ */ _L5_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L3/ */ _L3_else_IfBlock1;
  M_TrackTrain_Radio_T_TM_radio_messages /* IfBlock1:else:_L1/ */ _L1_else_IfBlock1;
  CompressedPackets_T_Common_Types_Pkg /* IfBlock1:else:_L2/ */ _L2_else_IfBlock1;
  M_TrackTrain_Radio_T_TM_radio_messages /* Header/ */ Header;
  CompressedPackets_T_Common_Types_Pkg /* Packets/ */ Packets;
  M_TrackTrain_Radio_T_TM_radio_messages /* _L16/ */ _L16;
  Radio_TrackTrain_Header_T_TM /* _L15/ */ _L15;
  CompressedPackets_T_Common_Types_Pkg /* _L14/ */ _L14;
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg /* _L13/ */ _L13;
  CompressedRadioMessage_TM /* _L12/ */ _L12;
} outC_Amsterdam_Utrecht_RBC_Int_US_Integration_November;

/* ===========  node initialization and cycle functions  =========== */
/* US_Integration_November::Amsterdam_Utrecht_RBC_Integration/ */
extern void Amsterdam_Utrecht_RBC_Int_US_Integration_November(
  /* Trigger_in/ */
  kcg_int64 Trigger_in,
  /* SelectTrack/ */
  TrackType_US_Integration_November SelectTrack,
  outC_Amsterdam_Utrecht_RBC_Int_US_Integration_November *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Amsterdam_Utrecht_RBC_Int_reset_US_Integration_November(
  outC_Amsterdam_Utrecht_RBC_Int_US_Integration_November *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Amsterdam_Utrecht_RBC_Int_init_US_Integration_November(
  outC_Amsterdam_Utrecht_RBC_Int_US_Integration_November *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Amsterdam_Utrecht_RBC_Int_US_Integration_November_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Amsterdam_Utrecht_RBC_Int_US_Integration_November.h
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

