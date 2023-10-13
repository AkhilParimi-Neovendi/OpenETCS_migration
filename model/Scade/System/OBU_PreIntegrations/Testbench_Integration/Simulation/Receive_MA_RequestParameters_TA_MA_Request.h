/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */
#ifndef _Receive_MA_RequestParameters_TA_MA_Request_H_
#define _Receive_MA_RequestParameters_TA_MA_Request_H_

#include "kcg_types.h"
#include "Read_P057_TM.h"
#include "Read_P015_TM.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* IsNew/ */ IsNew;
  P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg /* MA_RequestParams/ */ MA_RequestParams;
  kcg_bool /* ma_received/ */ ma_received;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg /* @1/_L4/ */ _L4_MemoryBasic_1_struct;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Read_P015_TM /* _L10=(TM::Read_P015#1)/ */ Context_Read_P015_1;
  outC_Read_P057_TM /* _L7=(TM::Read_P057#1)/ */ Context_Read_P057_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg /* @1/Memorized/ */ Memorized_MemoryBasic_1_struct;
  kcg_bool /* @1/Write/ */ Write_MemoryBasic_1_struct;
  P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg /* @1/Init/ */ Init_MemoryBasic_1_struct;
  P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg /* @1/BM_Input/ */ BM_Input_MemoryBasic_1_struct;
  P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg /* @1/_L7/ */ _L7_MemoryBasic_1_struct;
  P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg /* @1/_L6/ */ _L6_MemoryBasic_1_struct;
  kcg_bool /* @1/_L5/ */ _L5_MemoryBasic_1_struct;
  P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg /* @1/_L2/ */ _L2_MemoryBasic_1_struct;
  kcg_bool /* present/ */ present;
  ReceivedMessage_T_Common_Types_Pkg /* _L1/ */ _L1;
  P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg /* _L2/ */ _L2;
  CompressedPackets_T_Common_Types_Pkg /* _L6/ */ _L6;
  P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg /* _L8/ */ _L8;
  kcg_bool /* _L7/ */ _L7;
  P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg /* _L3/ */ _L3;
  kcg_bool /* _L9/ */ _L9;
  P015_OBU_T_TM /* _L11/ */ _L11;
  kcg_bool /* _L10/ */ _L10;
} outC_Receive_MA_RequestParameters_TA_MA_Request;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MA_Request::Receive_MA_RequestParameters/ */
extern void Receive_MA_RequestParameters_TA_MA_Request(
  /* message_in/ */
  ReceivedMessage_T_Common_Types_Pkg *message_in,
  outC_Receive_MA_RequestParameters_TA_MA_Request *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Receive_MA_RequestParameters_reset_TA_MA_Request(
  outC_Receive_MA_RequestParameters_TA_MA_Request *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Receive_MA_RequestParameters_init_TA_MA_Request(
  outC_Receive_MA_RequestParameters_TA_MA_Request *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg /* @1/_L4/ */ Context__L4_MemoryBasic_1;
  kcg_bool Context_init;
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
} SV_Receive_MA_RequestParameters_TA_MA_Request;

extern void kcg_save_SV_Receive_MA_RequestParameters_TA_MA_Request(
  SV_Receive_MA_RequestParameters_TA_MA_Request *SV,
  outC_Receive_MA_RequestParameters_TA_MA_Request *outC);
extern void kcg_load_SV_Receive_MA_RequestParameters_TA_MA_Request(
  outC_Receive_MA_RequestParameters_TA_MA_Request *outC,
  SV_Receive_MA_RequestParameters_TA_MA_Request *SV);

/*
  Expanded instances for: TA_MA_Request::Receive_MA_RequestParameters/
  @1: (linear::MemoryBasic#1)
*/

#endif /* _Receive_MA_RequestParameters_TA_MA_Request_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Receive_MA_RequestParameters_TA_MA_Request.h
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */

