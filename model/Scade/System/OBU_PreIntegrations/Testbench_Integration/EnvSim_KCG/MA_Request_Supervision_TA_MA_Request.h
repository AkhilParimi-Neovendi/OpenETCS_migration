/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _MA_Request_Supervision_TA_MA_Request_H_
#define _MA_Request_Supervision_TA_MA_Request_H_

#include "kcg_types.h"
#include "op_RepeatReq_TA_MA_Request.h"
#include "op_3_8_2_3_b_TA_MA_Request.h"
#include "op_3_8_2_3_a_TA_MA_Request.h"
#include "RisingEdge_digital.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* triggerMA/ */ triggerMA;
  kcg_bool /* exception/ */ exception;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* in_triggerMA/ */ mem_in_triggerMA;
  _116_SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  kcg_bool /* pendingReq/ */ pendingReq;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RisingEdge_digital /* _L78=(digital::RisingEdge#1)/ */ Context_RisingEdge_1;
  outC_RisingEdge_digital /* _L79=(digital::RisingEdge#2)/ */ Context_RisingEdge_2;
  outC_op_RepeatReq_TA_MA_Request /* _L55=(TA_MA_Request::op_RepeatReq#1)/ */ Context_op_RepeatReq_1;
  outC_op_3_8_2_3_b_TA_MA_Request /* _L46=(TA_MA_Request::op_3_8_2_3_b)/ */ Context_op_3_8_2_3_b;
  outC_op_3_8_2_3_a_TA_MA_Request /* _L73=(TA_MA_Request::op_3_8_2_3_a)/ */ Context_op_3_8_2_3_a;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  kcg_bool every1;
  _116_SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* SM1:NoReqPending:_L1/ */ _L1_NoReqPending_SM1;
  kcg_bool /* SM1:ReqPending:_L4/ */ _L4_ReqPending_SM1;
  _116_SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  _117_SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  _117_SSM_TR_SM1 /* SM1: */ SM1_fired;
  kcg_bool /* errorInRepeatReq/ */ errorInRepeatReq;
  P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg /* _L1/ */ _L1;
  trainPosition_T_TrainPosition_Types_Pck /* _L2/ */ _L2;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L3/ */ _L3;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L6/ */ _L6;
  odometry_T_Obu_BasicTypes_Pkg /* _L9/ */ _L9;
  kcg_bool /* _L22/ */ _L22;
  kcg_bool /* _L23/ */ _L23;
  MovementAuthority_t_TrackAtlasTypes /* _L24/ */ _L24;
  T_TIMEOUTRQST /* _L30/ */ _L30;
  kcg_int32 /* _L38/ */ _L38;
  kcg_bool /* _L40/ */ _L40;
  T_MAR /* _L41/ */ _L41;
  kcg_int32 /* _L43/ */ _L43;
  kcg_bool /* _L46/ */ _L46;
  kcg_bool /* _L48/ */ _L48;
  T_CYCRQST /* _L49/ */ _L49;
  kcg_int32 /* _L51/ */ _L51;
  kcg_bool /* _L55/ */ _L55;
  kcg_bool /* _L59/ */ _L59;
  kcg_bool /* _L60/ */ _L60;
  kcg_bool /* _L61/ */ _L61;
  kcg_bool /* _L66/ */ _L66;
  Driver2MAR_T_TA_MA_Request /* _L67/ */ _L67;
  kcg_bool /* _L68/ */ _L68;
  kcg_bool /* _L72/ */ _L72;
  kcg_bool /* _L71/ */ _L71;
  kcg_bool /* _L73/ */ _L73;
  kcg_bool /* _L74/ */ _L74;
  kcg_bool /* _L76/ */ _L76;
  kcg_bool /* _L77/ */ _L77;
  kcg_bool /* _L78/ */ _L78;
  kcg_bool /* _L79/ */ _L79;
  kcg_bool /* _L80/ */ _L80;
  kcg_bool /* _L81/ */ _L81;
  kcg_bool /* _L82/ */ _L82;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* _L83/ */ _L83;
  M_LEVEL /* _L85/ */ _L85;
  kcg_bool /* _L86/ */ _L86;
  M_LEVEL /* _L87/ */ _L87;
  kcg_bool /* _L90/ */ _L90;
  M_LEVEL /* _L89/ */ _L89;
  M_LEVEL /* _L88/ */ _L88;
  kcg_bool /* _L91/ */ _L91;
  kcg_bool /* _L93/ */ _L93;
  kcg_int32 /* _L94/ */ _L94;
  kcg_bool /* _L95/ */ _L95;
} outC_MA_Request_Supervision_TA_MA_Request;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MA_Request::MA_Request_Supervision/ */
extern void MA_Request_Supervision_TA_MA_Request(
  /* ma_RequestParams/ */
  P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg *ma_RequestParams,
  /* ma_received/ */
  kcg_bool ma_received,
  /* in_triggerMA/ */
  kcg_bool in_triggerMA,
  /* trainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* systemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* preindicationLocation/ */
  L_internal_Type_Obu_BasicTypes_Pkg preindicationLocation,
  /* odometry/ */
  odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* MAs/ */
  MovementAuthority_t_TrackAtlasTypes *MAs,
  /* fromDriver/ */
  Driver2MAR_T_TA_MA_Request *fromDriver,
  /* trackDescrDeleted/ */
  kcg_bool trackDescrDeleted,
  /* modeLevel/ */
  T_Mode_Level_Level_And_Mode_Types_Pkg *modeLevel,
  outC_MA_Request_Supervision_TA_MA_Request *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void MA_Request_Supervision_reset_TA_MA_Request(
  outC_MA_Request_Supervision_TA_MA_Request *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void MA_Request_Supervision_init_TA_MA_Request(
  outC_MA_Request_Supervision_TA_MA_Request *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _MA_Request_Supervision_TA_MA_Request_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MA_Request_Supervision_TA_MA_Request.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

