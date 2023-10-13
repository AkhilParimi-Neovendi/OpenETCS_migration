/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:59
*************************************************************$ */
#ifndef _Send_RBC_LRBG_351_D_00054_9_M003_UserStories13_16_US_13_H_
#define _Send_RBC_LRBG_351_D_00054_9_M003_UserStories13_16_US_13_H_

#include "kcg_types.h"
#include "Build_RBC_LRBG_351_D_00054_9_M003_UserStories13_16_US_13.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  R_data_internal_T_InfraLib /* R_data_out/ */ R_data_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Build_RBC_LRBG_351_D_00054_9_M003_UserStories13_16_US_13 /* _L4=(UserStories13_16::US_13::Build_RBC_LRBG_351_D_00054_9_M003#1)/ */ Context_Build_RBC_LRBG_351_D_00054_9_M003_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  R_data_internal_T_InfraLib /* _L4/ */ _L4;
  R_data_internal_T_InfraLib /* _L23/ */ _L23;
  kcg_int64 /* _L26/ */ _L26;
  kcg_int64 /* _L27/ */ _L27;
  kcg_bool /* _L52/ */ _L52;
  R_data_internal_T_InfraLib /* _L53/ */ _L53;
} outC_Send_RBC_LRBG_351_D_00054_9_M003_UserStories13_16_US_13;

/* ===========  node initialization and cycle functions  =========== */
/* UserStories13_16::US_13::Send_RBC_LRBG_351_D_00054_9_M003/ */
extern void Send_RBC_LRBG_351_D_00054_9_M003_UserStories13_16_US_13(
  /* RadiaDataIn/ */
  R_data_internal_T_InfraLib *RadiaDataIn,
  /* TriggerValue/ */
  kcg_int64 TriggerValue,
  outC_Send_RBC_LRBG_351_D_00054_9_M003_UserStories13_16_US_13 *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Send_RBC_LRBG_351_D_00054_9_M003_reset_UserStories13_16_US_13(
  outC_Send_RBC_LRBG_351_D_00054_9_M003_UserStories13_16_US_13 *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Send_RBC_LRBG_351_D_00054_9_M003_init_UserStories13_16_US_13(
  outC_Send_RBC_LRBG_351_D_00054_9_M003_UserStories13_16_US_13 *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Send_RBC_LRBG_351_D_00054_9_M003_UserStories13_16_US_13_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Send_RBC_LRBG_351_D_00054_9_M003_UserStories13_16_US_13.h
** Generation date: 2023-10-12T15:09:59
*************************************************************$ */

