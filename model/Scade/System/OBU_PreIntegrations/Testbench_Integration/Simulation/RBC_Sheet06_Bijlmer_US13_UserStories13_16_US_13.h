/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _RBC_Sheet06_Bijlmer_US13_UserStories13_16_US_13_H_
#define _RBC_Sheet06_Bijlmer_US13_UserStories13_16_US_13_H_

#include "kcg_types.h"
#include "Send_RBC_LRBG_359_D_00030_0_M003_UserStories13_16_US_13.h"
#include "Send_RBC_LRBG_351_D_00054_9_M003_UserStories13_16_US_13.h"
#include "Send_RBC_LRBG_354_D_00275_3_M003_UserStories13_16_US_13.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  R_data_internal_T_InfraLib /* R_data_out/ */ R_data_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Send_RBC_LRBG_359_D_00030_0_M003_UserStories13_16_US_13 /* _L14=(UserStories13_16::US_13::Send_RBC_LRBG_359_D_00030_0_M003#1)/ */ Context_Send_RBC_LRBG_359_D_00030_0_M003_1;
  outC_Send_RBC_LRBG_351_D_00054_9_M003_UserStories13_16_US_13 /* _L2=(UserStories13_16::US_13::Send_RBC_LRBG_351_D_00054_9_M003#1)/ */ Context_Send_RBC_LRBG_351_D_00054_9_M003_1;
  outC_Send_RBC_LRBG_354_D_00275_3_M003_UserStories13_16_US_13 /* _L1=(UserStories13_16::US_13::Send_RBC_LRBG_354_D_00275_3_M003#1)/ */ Context_Send_RBC_LRBG_354_D_00275_3_M003_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  R_data_internal_T_InfraLib /* _L1/ */ _L1;
  R_data_internal_T_InfraLib /* _L2/ */ _L2;
  R_data_internal_T_InfraLib /* _L13/ */ _L13;
  R_data_internal_T_InfraLib /* _L14/ */ _L14;
} outC_RBC_Sheet06_Bijlmer_US13_UserStories13_16_US_13;

/* ===========  node initialization and cycle functions  =========== */
/* UserStories13_16::US_13::RBC_Sheet06_Bijlmer_US13/ */
extern void RBC_Sheet06_Bijlmer_US13_UserStories13_16_US_13(
  /* RadiaDataIn/ */
  R_data_internal_T_InfraLib *RadiaDataIn,
  outC_RBC_Sheet06_Bijlmer_US13_UserStories13_16_US_13 *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RBC_Sheet06_Bijlmer_US13_reset_UserStories13_16_US_13(
  outC_RBC_Sheet06_Bijlmer_US13_UserStories13_16_US_13 *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void RBC_Sheet06_Bijlmer_US13_init_UserStories13_16_US_13(
  outC_RBC_Sheet06_Bijlmer_US13_UserStories13_16_US_13 *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _RBC_Sheet06_Bijlmer_US13_UserStories13_16_US_13_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RBC_Sheet06_Bijlmer_US13_UserStories13_16_US_13.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

