/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _Sheet12_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC_H_
#define _Sheet12_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC_H_

#include "kcg_types.h"
#include "Send_RBC_LRBG_476_D_00251_4_M015_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC.h"
#include "Send_RBC_LRBG_419_D_00053_5_M015_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC.h"
#include "Send_RBC_LRBG_418_D_00204_0_M015_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC.h"
#include "Send_RBC_LRBG_417_D_00052_4_M003_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  R_data_internal_T_InfraLib /* R_data_out/ */ R_data_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Send_RBC_LRBG_476_D_00251_4_M015_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC /* _L4=(AmsterdamUtrechtL2::Sheet12_Breukelen_RBC::Send_RBC_LRBG_476_D_00251_4_M015#1)/ */ Context_Send_RBC_LRBG_476_D_00251_4_M015_1;
  outC_Send_RBC_LRBG_419_D_00053_5_M015_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC /* _L3=(AmsterdamUtrechtL2::Sheet12_Breukelen_RBC::Send_RBC_LRBG_419_D_00053_5_M015#1)/ */ Context_Send_RBC_LRBG_419_D_00053_5_M015_1;
  outC_Send_RBC_LRBG_418_D_00204_0_M015_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC /* _L2=(AmsterdamUtrechtL2::Sheet12_Breukelen_RBC::Send_RBC_LRBG_418_D_00204_0_M015#1)/ */ Context_Send_RBC_LRBG_418_D_00204_0_M015_1;
  outC_Send_RBC_LRBG_417_D_00052_4_M003_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC /* _L1=(AmsterdamUtrechtL2::Sheet12_Breukelen_RBC::Send_RBC_LRBG_417_D_00052_4_M003#1)/ */ Context_Send_RBC_LRBG_417_D_00052_4_M003_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  R_data_internal_T_InfraLib /* _L1/ */ _L1;
  R_data_internal_T_InfraLib /* _L2/ */ _L2;
  R_data_internal_T_InfraLib /* _L3/ */ _L3;
  R_data_internal_T_InfraLib /* _L4/ */ _L4;
  R_data_internal_T_InfraLib /* _L13/ */ _L13;
} outC_Sheet12_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL2::Sheet12_Breukelen_RBC::Sheet12_Breukelen/ */
extern void Sheet12_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC(
  /* RadiaDataIn/ */
  R_data_internal_T_InfraLib *RadiaDataIn,
  outC_Sheet12_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Sheet12_Breukelen_reset_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC(
  outC_Sheet12_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Sheet12_Breukelen_init_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC(
  outC_Sheet12_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Sheet12_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Sheet12_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
