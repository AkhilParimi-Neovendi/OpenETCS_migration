/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _Send_M136_TM_radio_messages_H_
#define _Send_M136_TM_radio_messages_H_

#include "kcg_types.h"
#include "CheckSpace_TM_TrainTrack_Bus.h"
#include "BufferMsg_TM_lib_internal.h"
#include "Merge_PacketsToMessage_TM_TrainToTrack.h"
#include "MergeMessageToBus_TM_TrainTrack_Bus.h"
#include "C_M136_to_header_TM_RBC_conversions.h"
#include "C_P000_train_compr_TM_TrainToTrack.h"
#include "C_P001_train_compr_TM_TrainToTrack.h"
#include "C_P044_train_compr_TM_TrainToTrack.h"
#include "C_P005_train_compr_TM_TrainToTrack.h"
#include "C_P004_train_compr_TM_TrainToTrack.h"

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
  outC_MergeMessageToBus_TM_TrainTrack_Bus /* _L38=(TM_TrainTrack_Bus::MergeMessageToBus#1)/ */ Context_MergeMessageToBus_1;
  outC_BufferMsg_TM_lib_internal /* _L42=(TM_lib_internal::BufferMsg#1)/ */ Context_BufferMsg_1;
  outC_CheckSpace_TM_TrainTrack_Bus /* _L39=(TM_TrainTrack_Bus::CheckSpace#1)/ */ Context_CheckSpace_1;
  outC_Merge_PacketsToMessage_TM_TrainToTrack /* _L43=(TM_TrainToTrack::Merge_PacketsToMessage#1)/ */ Context_Merge_PacketsToMessage_1;
  outC_C_M136_to_header_TM_RBC_conversions /* _L34=(TM_RBC_conversions::C_M136_to_header#2)/ */ Context_C_M136_to_header_2;
  outC_C_P000_train_compr_TM_TrainToTrack /* _L30=(TM_TrainToTrack::C_P000_train_compr#3)/ */ Context_C_P000_train_compr_3;
  outC_C_P001_train_compr_TM_TrainToTrack /* _L26=(TM_TrainToTrack::C_P001_train_compr#3)/ */ Context_C_P001_train_compr_3;
  outC_C_P004_train_compr_TM_TrainToTrack /* _L15=(TM_TrainToTrack::C_P004_train_compr#1)/ */ Context_C_P004_train_compr_1;
  outC_C_P005_train_compr_TM_TrainToTrack /* _L21=(TM_TrainToTrack::C_P005_train_compr#1)/ */ Context_C_P005_train_compr_1;
  outC_C_P044_train_compr_TM_TrainToTrack /* _L23=(TM_TrainToTrack::C_P044_train_compr#1)/ */ Context_C_P044_train_compr_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_VERSION /* _L5/ */ _L5;
  P000_TM_TrainToTrack /* _L6/ */ _L6;
  P001_TM_TrainToTrack /* _L7/ */ _L7;
  P004_TM_TrainToTrack /* _L8/ */ _L8;
  P005_TM_TrainToTrack /* _L9/ */ _L9;
  P044_TM_TrainToTrack /* _L10/ */ _L10;
  P004_TrainTrack_int_TM_TrainToTrack /* _L15/ */ _L15;
  P044_TrainTrack_int_TM_TrainToTrack /* _L23/ */ _L23;
  P005_TrainTrack_int_TM_TrainToTrack /* _L21/ */ _L21;
  P000_TrainTrack_int_TM_TrainToTrack /* _L31/ */ _L31;
  P000_TrainTrack_int_TM_TrainToTrack /* _L30/ */ _L30;
  kcg_bool /* _L28/ */ _L28;
  kcg_bool /* _L27/ */ _L27;
  P001_TrainTrack_int_TM_TrainToTrack /* _L26/ */ _L26;
  kcg_bool /* _L24/ */ _L24;
  M_TrainTrack_MessageHd_T_TM_radio_messages /* _L34/ */ _L34;
  M_136_T_TM_radio_messages /* _L33/ */ _L33;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L44/ */ _L44;
  M_TrainTrack_Message_T_TM_radio_messages /* _L43/ */ _L43;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L41/ */ _L41;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L38/ */ _L38;
  array_int64_20 /* _L48/ */ _L48;
  kcg_int64 /* _L47/ */ _L47;
  array_int64_2 /* _L46/ */ _L46;
  array_int64_23 /* _L45/ */ _L45;
  array_int64_48 /* _L50/ */ _L50;
  M_TrainTrack_compressed_packets_T_TM_radio_messages /* _L49/ */ _L49;
  M_TrainTrack_Message_T_TM_radio_messages /* _L42/ */ _L42;
  kcg_bool /* _L51/ */ _L51;
  kcg_int64 /* _L40/ */ _L40;
  kcg_bool /* _L39/ */ _L39;
  kcg_int64 /* _L52/ */ _L52;
} outC_Send_M136_TM_radio_messages;

/* ===========  node initialization and cycle functions  =========== */
/* TM_radio_messages::Send_M136/ */
extern void Send_M136_TM_radio_messages(
  /* t_train_global/ */
  T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* MessageBus/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* Message_136_in/ */
  M_136_T_TM_radio_messages *Message_136_in,
  /* P000/ */
  P000_TM_TrainToTrack *P000,
  /* P001/ */
  P001_TM_TrainToTrack *P001,
  /* P004/ */
  P004_TM_TrainToTrack *P004,
  /* P005/ */
  P005_TM_TrainToTrack *P005,
  /* P044/ */
  P044_TM_TrainToTrack *P044,
  /* m_version/ */
  M_VERSION m_version,
  outC_Send_M136_TM_radio_messages *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Send_M136_reset_TM_radio_messages(
  outC_Send_M136_TM_radio_messages *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Send_M136_init_TM_radio_messages(
  outC_Send_M136_TM_radio_messages *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Send_M136_TM_radio_messages_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Send_M136_TM_radio_messages.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

