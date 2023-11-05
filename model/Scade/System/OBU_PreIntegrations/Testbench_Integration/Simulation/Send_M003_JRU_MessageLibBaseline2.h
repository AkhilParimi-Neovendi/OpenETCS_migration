/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _Send_M003_JRU_MessageLibBaseline2_H_
#define _Send_M003_JRU_MessageLibBaseline2_H_

#include "kcg_types.h"
#include "C_M003_int__to_header_TM_RBC_conversions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrackTrain_Radio_T_TM_radio_messages /* Message_Out/ */ Message_Out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_M003_int__to_header_TM_RBC_conversions /* _L2=(TM_RBC_conversions::C_M003_int__to_header#1)/ */ Context_C_M003_int__to_header_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_003_int_T_TM_radio_messages /* _L1/ */ _L1;
  M_TrackTrain_Radio_T_TM_radio_messages /* _L2/ */ _L2;
} outC_Send_M003_JRU_MessageLibBaseline2;

/* ===========  node initialization and cycle functions  =========== */
/* MessageLibBaseline2::Send_M003_JRU/ */
extern void Send_M003_JRU_MessageLibBaseline2(
  /* M003/ */
  M_003_int_T_TM_radio_messages *M003,
  outC_Send_M003_JRU_MessageLibBaseline2 *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Send_M003_JRU_reset_MessageLibBaseline2(
  outC_Send_M003_JRU_MessageLibBaseline2 *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Send_M003_JRU_init_MessageLibBaseline2(
  outC_Send_M003_JRU_MessageLibBaseline2 *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Send_M003_JRU_MessageLibBaseline2_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Send_M003_JRU_MessageLibBaseline2.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

