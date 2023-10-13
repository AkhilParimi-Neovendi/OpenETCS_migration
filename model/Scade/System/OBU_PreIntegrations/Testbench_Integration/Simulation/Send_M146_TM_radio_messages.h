/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _Send_M146_TM_radio_messages_H_
#define _Send_M146_TM_radio_messages_H_

#include "kcg_types.h"
#include "C_M146_to_header_TM_RBC_conversions.h"
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
  kcg_int64 /* t_train_assigned/ */ t_train_assigned;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MergeMessageToBus_TM_TrainTrack_Bus /* _L10=(TM_TrainTrack_Bus::MergeMessageToBus#1)/ */ Context_MergeMessageToBus_1;
  outC_BufferMsg_TM_lib_internal /* _L9=(TM_lib_internal::BufferMsg#1)/ */ Context_BufferMsg_1;
  outC_CheckSpace_TM_TrainTrack_Bus /* _L11=(TM_TrainTrack_Bus::CheckSpace#1)/ */ Context_CheckSpace_1;
  outC_Merge_PacketsToMessage_TM_TrainToTrack /* _L13=(TM_TrainToTrack::Merge_PacketsToMessage#1)/ */ Context_Merge_PacketsToMessage_1;
  outC_C_M146_to_header_TM_RBC_conversions /* _L1=(TM_RBC_conversions::C_M146_to_header#1)/ */ Context_C_M146_to_header_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_TrainTrack_MessageHd_T_TM_radio_messages /* _L1/ */ _L1;
  M_146_T_TM_radio_messages /* _L2/ */ _L2;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L4/ */ _L4;
  M_VERSION /* _L5/ */ _L5;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L6/ */ _L6;
  M_TrainTrack_compressed_packets_T_TM_radio_messages /* _L8/ */ _L8;
  kcg_int64 /* _L7/ */ _L7;
  M_TrainTrack_Message_T_TM_radio_messages /* _L13/ */ _L13;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L10/ */ _L10;
  M_TrainTrack_Message_T_TM_radio_messages /* _L9/ */ _L9;
  kcg_bool /* _L14/ */ _L14;
  kcg_int64 /* _L12/ */ _L12;
  kcg_bool /* _L11/ */ _L11;
  kcg_int64 /* _L15/ */ _L15;
} outC_Send_M146_TM_radio_messages;

/* ===========  node initialization and cycle functions  =========== */
/* TM_radio_messages::Send_M146/ */
extern void Send_M146_TM_radio_messages(
  /* t_train_global/ */
  T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* MessageBus/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* Message_146_in/ */
  M_146_T_TM_radio_messages *Message_146_in,
  /* m_version/ */
  M_VERSION m_version,
  outC_Send_M146_TM_radio_messages *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Send_M146_reset_TM_radio_messages(
  outC_Send_M146_TM_radio_messages *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Send_M146_init_TM_radio_messages(
  outC_Send_M146_TM_radio_messages *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_BufferMsg_TM_lib_internal Context_BufferMsg_1;
} SV_Send_M146_TM_radio_messages;

extern void kcg_save_SV_Send_M146_TM_radio_messages(
  SV_Send_M146_TM_radio_messages *SV,
  outC_Send_M146_TM_radio_messages *outC);
extern void kcg_load_SV_Send_M146_TM_radio_messages(
  outC_Send_M146_TM_radio_messages *outC,
  SV_Send_M146_TM_radio_messages *SV);



#endif /* _Send_M146_TM_radio_messages_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Send_M146_TM_radio_messages.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

