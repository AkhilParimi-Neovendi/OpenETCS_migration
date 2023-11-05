/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _Sheet07_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC_H_
#define _Sheet07_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC_H_

#include "kcg_types.h"
#include "Send_RBC_LRBG_372_D_00059_4_M015_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC.h"
#include "Send_RBC_LRBG_371_D_00163_4_M015_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC.h"
#include "Send_RBC_LRBG_371_D_00105_2_M003_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC.h"
#include "Send_RBC_LRBG_371_D_00024_1_M015_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  R_data_internal_T_InfraLib /* R_data_out/ */ R_data_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Send_RBC_LRBG_372_D_00059_4_M015_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC /* _L4=(AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_RBC::Send_RBC_LRBG_372_D_00059_4_M015#1)/ */ Context_Send_RBC_LRBG_372_D_00059_4_M015_1;
  outC_Send_RBC_LRBG_371_D_00163_4_M015_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC /* _L3=(AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_RBC::Send_RBC_LRBG_371_D_00163_4_M015#1)/ */ Context_Send_RBC_LRBG_371_D_00163_4_M015_1;
  outC_Send_RBC_LRBG_371_D_00105_2_M003_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC /* _L2=(AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_RBC::Send_RBC_LRBG_371_D_00105_2_M003#1)/ */ Context_Send_RBC_LRBG_371_D_00105_2_M003_1;
  outC_Send_RBC_LRBG_371_D_00024_1_M015_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC /* _L1=(AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_RBC::Send_RBC_LRBG_371_D_00024_1_M015#2)/ */ Context_Send_RBC_LRBG_371_D_00024_1_M015_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  R_data_internal_T_InfraLib /* _L1/ */ _L1;
  R_data_internal_T_InfraLib /* _L2/ */ _L2;
  R_data_internal_T_InfraLib /* _L3/ */ _L3;
  R_data_internal_T_InfraLib /* _L4/ */ _L4;
  R_data_internal_T_InfraLib /* _L13/ */ _L13;
} outC_Sheet07_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_RBC::Sheet07_BijlmerAbcoude/ */
extern void Sheet07_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC(
  /* RadiaDataIn/ */
  R_data_internal_T_InfraLib *RadiaDataIn,
  outC_Sheet07_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Sheet07_BijlmerAbcoude_reset_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC(
  outC_Sheet07_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Sheet07_BijlmerAbcoude_init_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC(
  outC_Sheet07_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Sheet07_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Sheet07_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

