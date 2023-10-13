/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */
#ifndef _op_3_8_2_3_b_TA_MA_Request_H_
#define _op_3_8_2_3_b_TA_MA_Request_H_

#include "kcg_types.h"
#include "CompareSectionTimer_TA_MA_Request.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* triggerMA/ */ triggerMA;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CompareSectionTimer_TA_MA_Request /* _L6=(TA_MA_Request::CompareSectionTimer#1)/ */ Context_CompareSectionTimer_1[10];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* _L3/ */ _L3;
  MovementAuthority_t_TrackAtlasTypes /* _L1/ */ _L1;
  kcg_int64 /* _L5/ */ _L5;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L6/ */ _L6;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  MovementAuthoritySectionlist_t_TrackAtlasTypes /* _L11/ */ _L11;
} outC_op_3_8_2_3_b_TA_MA_Request;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MA_Request::op_3_8_2_3_b/ */
extern void op_3_8_2_3_b_TA_MA_Request(
  /* t_timeoutrqst/ */
  kcg_int64 t_timeoutrqst,
  /* ma_s/ */
  MovementAuthority_t_TrackAtlasTypes *ma_s,
  outC_op_3_8_2_3_b_TA_MA_Request *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void op_3_8_2_3_b_reset_TA_MA_Request(
  outC_op_3_8_2_3_b_TA_MA_Request *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void op_3_8_2_3_b_init_TA_MA_Request(
  outC_op_3_8_2_3_b_TA_MA_Request *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _op_3_8_2_3_b_TA_MA_Request_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** op_3_8_2_3_b_TA_MA_Request.h
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */

