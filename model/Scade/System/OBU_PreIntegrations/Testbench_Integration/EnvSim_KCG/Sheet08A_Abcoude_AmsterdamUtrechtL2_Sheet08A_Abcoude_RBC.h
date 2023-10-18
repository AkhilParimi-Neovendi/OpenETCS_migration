/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */
#ifndef _Sheet08A_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC_H_
#define _Sheet08A_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC_H_

#include "kcg_types.h"
#include "Send_RBC_LRBG_376_D_00291_3_M015_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC.h"
#include "Send_RBC_LRBG_375_D_00054_4_M015_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC.h"
#include "Send_RBC_LRBG_374_D_00178_9_M015_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  R_data_internal_T_InfraLib /* R_data_out/ */ R_data_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Send_RBC_LRBG_376_D_00291_3_M015_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC /* _L3=(AmsterdamUtrechtL2::Sheet08A_Abcoude_RBC::Send_RBC_LRBG_376_D_00291_3_M015#1)/ */ Context_Send_RBC_LRBG_376_D_00291_3_M015_1;
  outC_Send_RBC_LRBG_375_D_00054_4_M015_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC /* _L2=(AmsterdamUtrechtL2::Sheet08A_Abcoude_RBC::Send_RBC_LRBG_375_D_00054_4_M015#1)/ */ Context_Send_RBC_LRBG_375_D_00054_4_M015_1;
  outC_Send_RBC_LRBG_374_D_00178_9_M015_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC /* _L1=(AmsterdamUtrechtL2::Sheet08A_Abcoude_RBC::Send_RBC_LRBG_374_D_00178_9_M015#1)/ */ Context_Send_RBC_LRBG_374_D_00178_9_M015_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  R_data_internal_T_InfraLib /* _L1/ */ _L1;
  R_data_internal_T_InfraLib /* _L2/ */ _L2;
  R_data_internal_T_InfraLib /* _L3/ */ _L3;
  R_data_internal_T_InfraLib /* _L13/ */ _L13;
} outC_Sheet08A_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL2::Sheet08A_Abcoude_RBC::Sheet08A_Abcoude/ */
extern void Sheet08A_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC(
  /* RadiaDataIn/ */
  R_data_internal_T_InfraLib *RadiaDataIn,
  outC_Sheet08A_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Sheet08A_Abcoude_reset_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC(
  outC_Sheet08A_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Sheet08A_Abcoude_init_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC(
  outC_Sheet08A_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Sheet08A_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Sheet08A_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC.h
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

