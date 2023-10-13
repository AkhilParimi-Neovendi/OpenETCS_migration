/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:59
*************************************************************$ */
#ifndef _Sheet14_Radio_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone_H_
#define _Sheet14_Radio_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone_H_

#include "kcg_types.h"
#include "Send_RBC_LRBG_200_D_00054_9_M003_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.h"
#include "Send_RBC_LRBG_100_D_00110_0_M024_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.h"
#include "Send_RBC_LRBG_100_D_00100_0_M008_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.h"
#include "Send_RBC_LRBG_100_D_00050_0_M032_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  R_data_internal_T_InfraLib /* R_data_out/ */ R_data_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Send_RBC_LRBG_200_D_00054_9_M003_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone /* _L4=(AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Send_RBC_LRBG_200_D_00054_9_M003#1)/ */ Context_Send_RBC_LRBG_200_D_00054_9_M003_1;
  outC_Send_RBC_LRBG_100_D_00110_0_M024_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone /* _L3=(AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Send_RBC_LRBG_100_D_00110_0_M024#1)/ */ Context_Send_RBC_LRBG_100_D_00110_0_M024_1;
  outC_Send_RBC_LRBG_100_D_00100_0_M008_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone /* _L2=(AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Send_RBC_LRBG_100_D_00100_0_M008#1)/ */ Context_Send_RBC_LRBG_100_D_00100_0_M008_1;
  outC_Send_RBC_LRBG_100_D_00050_0_M032_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone /* _L1=(AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Send_RBC_LRBG_100_D_00050_0_M032#1)/ */ Context_Send_RBC_LRBG_100_D_00050_0_M032_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  R_data_internal_T_InfraLib /* _L1/ */ _L1;
  R_data_internal_T_InfraLib /* _L2/ */ _L2;
  R_data_internal_T_InfraLib /* _L3/ */ _L3;
  R_data_internal_T_InfraLib /* _L4/ */ _L4;
  R_data_internal_T_InfraLib /* _L13/ */ _L13;
} outC_Sheet14_Radio_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_Radio_init/ */
extern void Sheet14_Radio_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
  /* RadiaDataIn/ */
  R_data_internal_T_InfraLib *RadiaDataIn,
  outC_Sheet14_Radio_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Sheet14_Radio_init_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
  outC_Sheet14_Radio_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Sheet14_Radio_init_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
  outC_Sheet14_Radio_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Sheet14_Radio_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Sheet14_Radio_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.h
** Generation date: 2023-10-12T15:09:59
*************************************************************$ */

