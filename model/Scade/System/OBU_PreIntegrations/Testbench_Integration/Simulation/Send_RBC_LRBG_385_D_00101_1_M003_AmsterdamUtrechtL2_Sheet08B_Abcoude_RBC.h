/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _Send_RBC_LRBG_385_D_00101_1_M003_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC_H_
#define _Send_RBC_LRBG_385_D_00101_1_M003_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC_H_

#include "kcg_types.h"
#include "Build_RBC_LRBG_385_D_00101_1_M003_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  R_data_internal_T_InfraLib /* R_data_out/ */ R_data_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Build_RBC_LRBG_385_D_00101_1_M003_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC /* _L4=(AmsterdamUtrechtL2::Sheet08B_Abcoude_RBC::Build_RBC_LRBG_385_D_00101_1_M003#1)/ */ Context_Build_RBC_LRBG_385_D_00101_1_M003_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  R_data_internal_T_InfraLib /* _L4/ */ _L4;
  R_data_internal_T_InfraLib /* _L23/ */ _L23;
  kcg_int32 /* _L26/ */ _L26;
  kcg_int32 /* _L27/ */ _L27;
  kcg_bool /* _L52/ */ _L52;
  R_data_internal_T_InfraLib /* _L53/ */ _L53;
} outC_Send_RBC_LRBG_385_D_00101_1_M003_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL2::Sheet08B_Abcoude_RBC::Send_RBC_LRBG_385_D_00101_1_M003/ */
extern void Send_RBC_LRBG_385_D_00101_1_M003_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC(
  /* RadiaDataIn/ */
  R_data_internal_T_InfraLib *RadiaDataIn,
  /* TriggerValue/ */
  kcg_int32 TriggerValue,
  outC_Send_RBC_LRBG_385_D_00101_1_M003_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Send_RBC_LRBG_385_D_00101_1_M003_reset_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC(
  outC_Send_RBC_LRBG_385_D_00101_1_M003_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Send_RBC_LRBG_385_D_00101_1_M003_init_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC(
  outC_Send_RBC_LRBG_385_D_00101_1_M003_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Send_RBC_LRBG_385_D_00101_1_M003_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Send_RBC_LRBG_385_D_00101_1_M003_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

