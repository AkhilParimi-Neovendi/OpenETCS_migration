/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */
#ifndef _Send_M156_TM_radio_messages_H_
#define _Send_M156_TM_radio_messages_H_

#include "kcg_types.h"
#include "C_M156_to_header_TM_RBC_conversions.h"
#include "CheckSpace_TM_TrainTrack_Bus.h"
#include "BufferMsg_TM_lib_internal.h"
#include "Merge_PacketsToMessage_TM_TrainToTrack.h"
#include "MergeMessageToBus_TM_TrainTrack_Bus.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* MessageBus_out/ */ MessageBus_out;
  kcg_int32 /* t_train_assigned/ */ t_train_assigned;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MergeMessageToBus_TM_TrainTrack_Bus /* _L11=(TM_TrainTrack_Bus::MergeMessageToBus#1)/ */ Context_MergeMessageToBus_1;
  outC_BufferMsg_TM_lib_internal /* _L13=(TM_lib_internal::BufferMsg#1)/ */ Context_BufferMsg_1;
  outC_CheckSpace_TM_TrainTrack_Bus /* _L8=(TM_TrainTrack_Bus::CheckSpace#1)/ */ Context_CheckSpace_1;
  outC_Merge_PacketsToMessage_TM_TrainToTrack /* _L15=(TM_TrainToTrack::Merge_PacketsToMessage#1)/ */ Context_Merge_PacketsToMessage_1;
  outC_C_M156_to_header_TM_RBC_conversions /* _L1=(TM_RBC_conversions::C_M156_to_header#1)/ */ Context_C_M156_to_header_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_TrainTrack_MessageHd_T_TM_radio_messages /* _L1/ */ _L1;
  M_156_T_TM_radio_messages /* _L2/ */ _L2;
  M_VERSION /* _L6/ */ _L6;
  M_TrainTrack_Message_T_TM_radio_messages /* _L15/ */ _L15;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L11/ */ _L11;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L10/ */ _L10;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L7/ */ _L7;
  M_TrainTrack_compressed_packets_T_TM_radio_messages /* _L17/ */ _L17;
  kcg_int32 /* _L16/ */ _L16;
  M_TrainTrack_Message_T_TM_radio_messages /* _L13/ */ _L13;
  kcg_bool /* _L18/ */ _L18;
  kcg_int32 /* _L9/ */ _L9;
  kcg_bool /* _L8/ */ _L8;
  kcg_int32 /* _L19/ */ _L19;
} outC_Send_M156_TM_radio_messages;

/* ===========  node initialization and cycle functions  =========== */
/* TM_radio_messages::Send_M156/ */
extern void Send_M156_TM_radio_messages(
  /* t_train_global/ */
  T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* MessageBus/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* Message_156_in/ */
  M_156_T_TM_radio_messages *Message_156_in,
  /* m_version/ */
  M_VERSION m_version,
  outC_Send_M156_TM_radio_messages *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Send_M156_reset_TM_radio_messages(
  outC_Send_M156_TM_radio_messages *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Send_M156_init_TM_radio_messages(
  outC_Send_M156_TM_radio_messages *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Send_M156_TM_radio_messages_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Send_M156_TM_radio_messages.h
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

