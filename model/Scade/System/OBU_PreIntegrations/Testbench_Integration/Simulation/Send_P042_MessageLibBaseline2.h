/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _Send_P042_MessageLibBaseline2_H_
#define _Send_P042_MessageLibBaseline2_H_

#include "kcg_types.h"
#include "Write_P042_TM_trackside.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedPackets_T_Common_Types_Pkg /* B_data_out/ */ B_data_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Write_P042_TM_trackside /* _L6=(TM_trackside::Write_P042#1)/ */ Context_Write_P042_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedPackets_T_Common_Types_Pkg /* _L3/ */ _L3;
  P042_trackside_int_T_TM /* _L4/ */ _L4;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L6/ */ _L6;
  CompressedPackets_T_Common_Types_Pkg /* _L7/ */ _L7;
  kcg_bool /* _L5/ */ _L5;
} outC_Send_P042_MessageLibBaseline2;

/* ===========  node initialization and cycle functions  =========== */
/* MessageLibBaseline2::Send_P042/ */
extern void Send_P042_MessageLibBaseline2(
  /* B_data_in/ */
  CompressedPackets_T_Common_Types_Pkg *B_data_in,
  /* P042/ */
  P042_trackside_int_T_TM *P042,
  outC_Send_P042_MessageLibBaseline2 *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Send_P042_reset_MessageLibBaseline2(
  outC_Send_P042_MessageLibBaseline2 *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Send_P042_init_MessageLibBaseline2(
  outC_Send_P042_MessageLibBaseline2 *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Send_P042_MessageLibBaseline2_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Send_P042_MessageLibBaseline2.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

