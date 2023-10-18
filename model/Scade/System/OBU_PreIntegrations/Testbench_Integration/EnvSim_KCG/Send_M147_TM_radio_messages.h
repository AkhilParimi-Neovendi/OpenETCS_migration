/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _Send_M147_TM_radio_messages_H_
#define _Send_M147_TM_radio_messages_H_

#include "kcg_types.h"
#include "C_M147_to_header_TM_RBC_conversions.h"
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
  kcg_int64 /* t_train_assigned/ */ t_train_assigned;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MergeMessageToBus_TM_TrainTrack_Bus /* _L100=(TM_TrainTrack_Bus::MergeMessageToBus#1)/ */ Context_MergeMessageToBus_1;
  outC_BufferMsg_TM_lib_internal /* _L103=(TM_lib_internal::BufferMsg#1)/ */ Context_BufferMsg_1;
  outC_CheckSpace_TM_TrainTrack_Bus /* _L98=(TM_TrainTrack_Bus::CheckSpace#1)/ */ Context_CheckSpace_1;
  outC_Merge_PacketsToMessage_TM_TrainToTrack /* _L102=(TM_TrainToTrack::Merge_PacketsToMessage#1)/ */ Context_Merge_PacketsToMessage_1;
  outC_C_M147_to_header_TM_RBC_conversions /* _L1=(TM_RBC_conversions::C_M147_to_header#1)/ */ Context_C_M147_to_header_1;
  outC_C_P000_train_compr_TM_TrainToTrack /* _L83=(TM_TrainToTrack::C_P000_train_compr#6)/ */ Context_C_P000_train_compr_6;
  outC_C_P001_train_compr_TM_TrainToTrack /* _L84=(TM_TrainToTrack::C_P001_train_compr#6)/ */ Context_C_P001_train_compr_6;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_TrainTrack_MessageHd_T_TM_radio_messages /* _L1/ */ _L1;
  M_147_T_TM_radio_messages /* _L2/ */ _L2;
  P001_TM_TrainToTrack /* _L96/ */ _L96;
  P000_TM_TrainToTrack /* _L95/ */ _L95;
  M_VERSION /* _L94/ */ _L94;
  kcg_int64 /* _L93/ */ _L93;
  M_TrainTrack_compressed_packets_T_TM_radio_messages /* _L92/ */ _L92;
  P000_TrainTrack_int_TM_TrainToTrack /* _L90/ */ _L90;
  kcg_bool /* _L89/ */ _L89;
  kcg_bool /* _L88/ */ _L88;
  kcg_bool /* _L87/ */ _L87;
  array_int64_33 /* _L86/ */ _L86;
  P001_TrainTrack_int_TM_TrainToTrack /* _L84/ */ _L84;
  P000_TrainTrack_int_TM_TrainToTrack /* _L83/ */ _L83;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L104/ */ _L104;
  M_TrainTrack_Message_T_TM_radio_messages /* _L102/ */ _L102;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L101/ */ _L101;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L100/ */ _L100;
  M_TrainTrack_Message_T_TM_radio_messages /* _L103/ */ _L103;
  kcg_bool /* _L105/ */ _L105;
  kcg_int64 /* _L99/ */ _L99;
  kcg_bool /* _L98/ */ _L98;
  kcg_int64 /* _L106/ */ _L106;
} outC_Send_M147_TM_radio_messages;

/* ===========  node initialization and cycle functions  =========== */
/* TM_radio_messages::Send_M147/ */
extern void Send_M147_TM_radio_messages(
  /* t_train_global/ */
  T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* MessageBus/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* Message_147_in/ */
  M_147_T_TM_radio_messages *Message_147_in,
  /* P000/ */
  P000_TM_TrainToTrack *P000,
  /* P001/ */
  P001_TM_TrainToTrack *P001,
  /* m_version/ */
  M_VERSION m_version,
  outC_Send_M147_TM_radio_messages *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Send_M147_reset_TM_radio_messages(
  outC_Send_M147_TM_radio_messages *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Send_M147_init_TM_radio_messages(
  outC_Send_M147_TM_radio_messages *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Send_M147_TM_radio_messages_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Send_M147_TM_radio_messages.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

