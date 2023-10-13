/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:59
*************************************************************$ */
#ifndef _ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion_H_
#define _ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion_H_

#include "kcg_types.h"
#include "ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion.h"
#include "ConvertHeader_RBC_Model_Pkg_TrainTrackMsgConversion.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* outOld/ */ outOld;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ConvertHeader_RBC_Model_Pkg_TrainTrackMsgConversion /* _L7=(RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader#1)/ */ Context_ConvertHeader_1;
  outC_ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion /* _L12=(RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets#1)/ */ Context_ConvertPackets_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_TrainTrack_Message_T_TM_radio_messages /* _L1/ */ _L1;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* _L3/ */ _L3;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* _L8/ */ _L8;
  kcg_bool /* _L7/ */ _L7;
  M_TrainTrack_MessageHd_T_TM_radio_messages /* _L11/ */ _L11;
  M_TrainTrack_compressed_packets_T_TM_radio_messages /* _L10/ */ _L10;
  outPackets_T_Common_Types_Pkg /* _L12/ */ _L12;
  kcg_int64 /* _L13/ */ _L13;
} outC_ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Model_Pkg::TrainTrackMsgConversion::ToOldRadioTrainTrackMsg/ */
extern void ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion(
  /* inNew/ */
  M_TrainTrack_Message_T_TM_radio_messages *inNew,
  outC_ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ToOldRadioTrainTrackMsg_reset_RBC_Model_Pkg_TrainTrackMsgConversion(
  outC_ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ToOldRadioTrainTrackMsg_init_RBC_Model_Pkg_TrainTrackMsgConversion(
  outC_ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion Context_ConvertPackets_1;
} SV_ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion;

extern void kcg_save_SV_ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion(
  SV_ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion *SV,
  outC_ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion *outC);
extern void kcg_load_SV_ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion(
  outC_ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion *outC,
  SV_ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion *SV);



#endif /* _ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion.h
** Generation date: 2023-10-12T15:09:59
*************************************************************$ */

