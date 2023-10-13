/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */
#ifndef _Sheet08B_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC_H_
#define _Sheet08B_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC_H_

#include "kcg_types.h"
#include "Send_RBC_LRBG_387_D_00302_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC.h"
#include "Send_RBC_LRBG_385_D_00101_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC.h"
#include "Send_RBC_LRBG_383_D_00105_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC.h"
#include "Send_RBC_LRBG_382_D_00191_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  R_data_internal_T_InfraLib /* R_data_out/ */ R_data_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Send_RBC_LRBG_387_D_00302_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC /* _L4=(AmsterdamUtrechtL2::Sheet08B_Abcoude_RBC::Send_RBC_LRBG_387_D_00302_7_M015#1)/ */ Context_Send_RBC_LRBG_387_D_00302_7_M015_1;
  outC_Send_RBC_LRBG_385_D_00101_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC /* _L3=(AmsterdamUtrechtL2::Sheet08B_Abcoude_RBC::Send_RBC_LRBG_385_D_00101_1_M003#1)/ */ Context_Send_RBC_LRBG_385_D_00101_1_M003_1;
  outC_Send_RBC_LRBG_383_D_00105_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC /* _L2=(AmsterdamUtrechtL2::Sheet08B_Abcoude_RBC::Send_RBC_LRBG_383_D_00105_4_M003#1)/ */ Context_Send_RBC_LRBG_383_D_00105_4_M003_1;
  outC_Send_RBC_LRBG_382_D_00191_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC /* _L1=(AmsterdamUtrechtL2::Sheet08B_Abcoude_RBC::Send_RBC_LRBG_382_D_00191_8_M015#1)/ */ Context_Send_RBC_LRBG_382_D_00191_8_M015_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  R_data_internal_T_InfraLib /* _L1/ */ _L1;
  R_data_internal_T_InfraLib /* _L2/ */ _L2;
  R_data_internal_T_InfraLib /* _L3/ */ _L3;
  R_data_internal_T_InfraLib /* _L4/ */ _L4;
  R_data_internal_T_InfraLib /* _L13/ */ _L13;
} outC_Sheet08B_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL2::Sheet08B_Abcoude_RBC::Sheet08B_Abcoude/ */
extern void Sheet08B_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC(
  /* RadiaDataIn/ */
  R_data_internal_T_InfraLib *RadiaDataIn,
  outC_Sheet08B_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Sheet08B_Abcoude_reset_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC(
  outC_Sheet08B_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Sheet08B_Abcoude_init_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC(
  outC_Sheet08B_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Sheet08B_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Sheet08B_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC.h
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

