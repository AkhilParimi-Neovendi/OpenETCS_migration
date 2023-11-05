/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _Send_M129_TM_radio_messages_H_
#define _Send_M129_TM_radio_messages_H_

#include "kcg_types.h"
#include "C_M129_to_header_TM_RBC_conversions.h"
#include "C_P011_train_compr_TM_TrainToTrack.h"
#include "CheckSpace_TM_TrainTrack_Bus.h"
#include "BufferMsg_TM_lib_internal.h"
#include "Merge_PacketsToMessage_TM_TrainToTrack.h"
#include "MergeMessageToBus_TM_TrainTrack_Bus.h"
#include "C_P000_train_compr_TM_TrainToTrack.h"
#include "C_P001_train_compr_TM_TrainToTrack.h"

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
  outC_MergeMessageToBus_TM_TrainTrack_Bus /* _L97=(TM_TrainTrack_Bus::MergeMessageToBus#1)/ */ Context_MergeMessageToBus_1;
  outC_BufferMsg_TM_lib_internal /* _L67=(TM_lib_internal::BufferMsg#1)/ */ Context_BufferMsg_1;
  outC_CheckSpace_TM_TrainTrack_Bus /* _L93=(TM_TrainTrack_Bus::CheckSpace#1)/ */ Context_CheckSpace_1;
  outC_Merge_PacketsToMessage_TM_TrainToTrack /* _L65=(TM_TrainToTrack::Merge_PacketsToMessage#1)/ */ Context_Merge_PacketsToMessage_1;
  outC_C_M129_to_header_TM_RBC_conversions /* _L60=(TM_RBC_conversions::C_M129_to_header#2)/ */ Context_C_M129_to_header_2;
  outC_C_P000_train_compr_TM_TrainToTrack /* _L11=(TM_TrainToTrack::C_P000_train_compr#1)/ */ Context_C_P000_train_compr_1;
  outC_C_P001_train_compr_TM_TrainToTrack /* _L13=(TM_TrainToTrack::C_P001_train_compr#1)/ */ Context_C_P001_train_compr_1;
  outC_C_P011_train_compr_TM_TrainToTrack /* _L15=(TM_TrainToTrack::C_P011_train_compr#1)/ */ Context_C_P011_train_compr_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P000_TM_TrainToTrack /* _L5/ */ _L5;
  P001_TM_TrainToTrack /* _L6/ */ _L6;
  P011_TM_TrainToTrack /* _L7/ */ _L7;
  P000_TrainTrack_int_TM_TrainToTrack /* _L11/ */ _L11;
  P001_TrainTrack_int_TM_TrainToTrack /* _L13/ */ _L13;
  P011_TrainTrack_int_TM_TrainToTrack /* _L15/ */ _L15;
  kcg_bool /* _L48/ */ _L48;
  kcg_bool /* _L49/ */ _L49;
  kcg_bool /* _L50/ */ _L50;
  P000_TrainTrack_int_TM_TrainToTrack /* _L51/ */ _L51;
  array_int32_42 /* _L53/ */ _L53;
  M_TrainTrack_compressed_packets_T_TM_radio_messages /* _L54/ */ _L54;
  kcg_int32 /* _L55/ */ _L55;
  array_int32_8 /* _L56/ */ _L56;
  M_VERSION /* _L64/ */ _L64;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L63/ */ _L63;
  M_129_T_TM_radio_messages /* _L62/ */ _L62;
  M_TrainTrack_MessageHd_T_TM_radio_messages /* _L60/ */ _L60;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L59/ */ _L59;
  M_TrainTrack_Message_T_TM_radio_messages /* _L65/ */ _L65;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L97/ */ _L97;
  M_TrainTrack_Message_T_TM_radio_messages /* _L67/ */ _L67;
  kcg_bool /* _L98/ */ _L98;
  kcg_int32 /* _L94/ */ _L94;
  kcg_bool /* _L93/ */ _L93;
  kcg_int32 /* _L100/ */ _L100;
} outC_Send_M129_TM_radio_messages;

/* ===========  node initialization and cycle functions  =========== */
/* TM_radio_messages::Send_M129/ */
extern void Send_M129_TM_radio_messages(
  /* t_train_global/ */
  T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* MessageBus/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* Message_129_in/ */
  M_129_T_TM_radio_messages *Message_129_in,
  /* P000/ */
  P000_TM_TrainToTrack *P000,
  /* P001/ */
  P001_TM_TrainToTrack *P001,
  /* P011/ */
  P011_TM_TrainToTrack *P011,
  /* m_version/ */
  M_VERSION m_version,
  outC_Send_M129_TM_radio_messages *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Send_M129_reset_TM_radio_messages(
  outC_Send_M129_TM_radio_messages *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Send_M129_init_TM_radio_messages(
  outC_Send_M129_TM_radio_messages *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Send_M129_TM_radio_messages_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Send_M129_TM_radio_messages.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

