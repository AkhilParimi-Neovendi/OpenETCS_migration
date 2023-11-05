/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _Send_M132_TM_radio_messages_H_
#define _Send_M132_TM_radio_messages_H_

#include "kcg_types.h"
#include "C_M132_to_header_TM_RBC_conversions.h"
#include "C_P009_train_compr_TM_TrainToTrack.h"
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
  outC_MergeMessageToBus_TM_TrainTrack_Bus /* _L51=(TM_TrainTrack_Bus::MergeMessageToBus#1)/ */ Context_MergeMessageToBus_1;
  outC_BufferMsg_TM_lib_internal /* _L47=(TM_lib_internal::BufferMsg#1)/ */ Context_BufferMsg_1;
  outC_CheckSpace_TM_TrainTrack_Bus /* _L53=(TM_TrainTrack_Bus::CheckSpace#1)/ */ Context_CheckSpace_1;
  outC_Merge_PacketsToMessage_TM_TrainToTrack /* _L50=(TM_TrainToTrack::Merge_PacketsToMessage#1)/ */ Context_Merge_PacketsToMessage_1;
  outC_C_M132_to_header_TM_RBC_conversions /* _L44=(TM_RBC_conversions::C_M132_to_header#2)/ */ Context_C_M132_to_header_2;
  outC_C_P000_train_compr_TM_TrainToTrack /* _L40=(TM_TrainToTrack::C_P000_train_compr#4)/ */ Context_C_P000_train_compr_4;
  outC_C_P001_train_compr_TM_TrainToTrack /* _L36=(TM_TrainToTrack::C_P001_train_compr#4)/ */ Context_C_P001_train_compr_4;
  outC_C_P009_train_compr_TM_TrainToTrack /* _L15=(TM_TrainToTrack::C_P009_train_compr#1)/ */ Context_C_P009_train_compr_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_VERSION /* _L6/ */ _L6;
  P000_TM_TrainToTrack /* _L7/ */ _L7;
  P001_TM_TrainToTrack /* _L8/ */ _L8;
  P009_TM_TrainToTrack /* _L9/ */ _L9;
  P009_TrainTrack_int_TM_TrainToTrack /* _L15/ */ _L15;
  P000_TrainTrack_int_TM_TrainToTrack /* _L41/ */ _L41;
  P000_TrainTrack_int_TM_TrainToTrack /* _L40/ */ _L40;
  kcg_bool /* _L38/ */ _L38;
  kcg_bool /* _L37/ */ _L37;
  P001_TrainTrack_int_TM_TrainToTrack /* _L36/ */ _L36;
  kcg_bool /* _L34/ */ _L34;
  M_132_T_TM_radio_messages /* _L45/ */ _L45;
  M_TrainTrack_MessageHd_T_TM_radio_messages /* _L44/ */ _L44;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L51/ */ _L51;
  M_TrainTrack_Message_T_TM_radio_messages /* _L50/ */ _L50;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L49/ */ _L49;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L46/ */ _L46;
  array_int32_30 /* _L57/ */ _L57;
  M_TrainTrack_compressed_packets_T_TM_radio_messages /* _L56/ */ _L56;
  array_int32_20 /* _L55/ */ _L55;
  kcg_int32 /* _L58/ */ _L58;
  M_TrainTrack_Message_T_TM_radio_messages /* _L47/ */ _L47;
  kcg_bool /* _L59/ */ _L59;
  kcg_int32 /* _L54/ */ _L54;
  kcg_bool /* _L53/ */ _L53;
  kcg_int32 /* _L60/ */ _L60;
} outC_Send_M132_TM_radio_messages;

/* ===========  node initialization and cycle functions  =========== */
/* TM_radio_messages::Send_M132/ */
extern void Send_M132_TM_radio_messages(
  /* t_train_global/ */
  T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* MessageBus/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* Message_132_in/ */
  M_132_T_TM_radio_messages *Message_132_in,
  /* P000/ */
  P000_TM_TrainToTrack *P000,
  /* P001/ */
  P001_TM_TrainToTrack *P001,
  /* P009/ */
  P009_TM_TrainToTrack *P009,
  /* m_version/ */
  M_VERSION m_version,
  outC_Send_M132_TM_radio_messages *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Send_M132_reset_TM_radio_messages(
  outC_Send_M132_TM_radio_messages *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Send_M132_init_TM_radio_messages(
  outC_Send_M132_TM_radio_messages *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Send_M132_TM_radio_messages_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Send_M132_TM_radio_messages.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

