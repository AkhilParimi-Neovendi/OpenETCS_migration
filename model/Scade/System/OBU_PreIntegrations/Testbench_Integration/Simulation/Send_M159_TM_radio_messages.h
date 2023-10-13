/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */
#ifndef _Send_M159_TM_radio_messages_H_
#define _Send_M159_TM_radio_messages_H_

#include "kcg_types.h"
#include "C_P003_train_compr_TM_TrainToTrack.h"
#include "C_M159_to_header_TM_RBC_conversions.h"
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
  outC_MergeMessageToBus_TM_TrainTrack_Bus /* _L20=(TM_TrainTrack_Bus::MergeMessageToBus#1)/ */ Context_MergeMessageToBus_1;
  outC_BufferMsg_TM_lib_internal /* _L14=(TM_lib_internal::BufferMsg#1)/ */ Context_BufferMsg_1;
  outC_CheckSpace_TM_TrainTrack_Bus /* _L16=(TM_TrainTrack_Bus::CheckSpace#1)/ */ Context_CheckSpace_1;
  outC_Merge_PacketsToMessage_TM_TrainToTrack /* _L12=(TM_TrainToTrack::Merge_PacketsToMessage#1)/ */ Context_Merge_PacketsToMessage_1;
  outC_C_M159_to_header_TM_RBC_conversions /* _L1=(TM_RBC_conversions::C_M159_to_header#1)/ */ Context_C_M159_to_header_1;
  outC_C_P003_train_compr_TM_TrainToTrack /* _L9=(TM_TrainToTrack::C_P003_train_compr#1)/ */ Context_C_P003_train_compr_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_TrainTrack_MessageHd_T_TM_radio_messages /* _L1/ */ _L1;
  M_159_T_TM_radio_messages /* _L2/ */ _L2;
  M_VERSION /* _L6/ */ _L6;
  P003_TM_TrainToTrack /* _L7/ */ _L7;
  P003_TrainTrack_int_TM_TrainToTrack /* _L9/ */ _L9;
  array_int64_42 /* _L11/ */ _L11;
  kcg_int64 /* _L10/ */ _L10;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L20/ */ _L20;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L18/ */ _L18;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L15/ */ _L15;
  M_TrainTrack_Message_T_TM_radio_messages /* _L12/ */ _L12;
  M_TrainTrack_compressed_packets_T_TM_radio_messages /* _L21/ */ _L21;
  M_TrainTrack_Message_T_TM_radio_messages /* _L14/ */ _L14;
  kcg_bool /* _L22/ */ _L22;
  kcg_int64 /* _L17/ */ _L17;
  kcg_bool /* _L16/ */ _L16;
  kcg_int64 /* _L23/ */ _L23;
} outC_Send_M159_TM_radio_messages;

/* ===========  node initialization and cycle functions  =========== */
/* TM_radio_messages::Send_M159/ */
extern void Send_M159_TM_radio_messages(
  /* t_train_global/ */
  T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* MessageBus/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* Message_159_in/ */
  M_159_T_TM_radio_messages *Message_159_in,
  /* P003/ */
  P003_TM_TrainToTrack *P003,
  /* m_version/ */
  M_VERSION m_version,
  outC_Send_M159_TM_radio_messages *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Send_M159_reset_TM_radio_messages(
  outC_Send_M159_TM_radio_messages *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Send_M159_init_TM_radio_messages(
  outC_Send_M159_TM_radio_messages *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_BufferMsg_TM_lib_internal Context_BufferMsg_1;
} SV_Send_M159_TM_radio_messages;

extern void kcg_save_SV_Send_M159_TM_radio_messages(
  SV_Send_M159_TM_radio_messages *SV,
  outC_Send_M159_TM_radio_messages *outC);
extern void kcg_load_SV_Send_M159_TM_radio_messages(
  outC_Send_M159_TM_radio_messages *outC,
  SV_Send_M159_TM_radio_messages *SV);



#endif /* _Send_M159_TM_radio_messages_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Send_M159_TM_radio_messages.h
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */

