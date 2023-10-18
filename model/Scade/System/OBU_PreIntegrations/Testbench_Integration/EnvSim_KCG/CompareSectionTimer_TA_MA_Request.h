/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _CompareSectionTimer_TA_MA_Request_H_
#define _CompareSectionTimer_TA_MA_Request_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_internal_Type_Obu_BasicTypes_Pkg /* smallestTimer/ */ smallestTimer;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  T_internal_Type_Obu_BasicTypes_Pkg /* _L1/ */ _L1;
  MovementAuthoritySection_t_TrackAtlasTypes /* _L2/ */ _L2;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L3/ */ _L3;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L5/ */ _L5;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L12/ */ _L12;
} outC_CompareSectionTimer_TA_MA_Request;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MA_Request::CompareSectionTimer/ */
extern void CompareSectionTimer_TA_MA_Request(
  /* timer/ */
  T_internal_Type_Obu_BasicTypes_Pkg timer,
  /* ma_section/ */
  MovementAuthoritySection_t_TrackAtlasTypes *ma_section,
  outC_CompareSectionTimer_TA_MA_Request *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CompareSectionTimer_reset_TA_MA_Request(
  outC_CompareSectionTimer_TA_MA_Request *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CompareSectionTimer_init_TA_MA_Request(
  outC_CompareSectionTimer_TA_MA_Request *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CompareSectionTimer_TA_MA_Request_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CompareSectionTimer_TA_MA_Request.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

