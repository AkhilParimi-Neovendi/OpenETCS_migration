/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */
#ifndef _RBC_Sheet05_Amstel_AmsterdamUtrechtL2_Sheet05_Amstel_RBC_H_
#define _RBC_Sheet05_Amstel_AmsterdamUtrechtL2_Sheet05_Amstel_RBC_H_

#include "kcg_types.h"
#include "Send_RBC_LRBG_353_D_00431_0_M024_AmsterdamUtrechtL2_Sheet05_Amstel_RBC.h"
#include "Send_RBC_LRBG_353_D_00421_9_M008_AmsterdamUtrechtL2_Sheet05_Amstel_RBC.h"
#include "Send_RBC_LRBG_353_D_00319_2_M032_AmsterdamUtrechtL2_Sheet05_Amstel_RBC.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  R_data_internal_T_InfraLib /* R_data_out/ */ R_data_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Send_RBC_LRBG_353_D_00431_0_M024_AmsterdamUtrechtL2_Sheet05_Amstel_RBC /* _L3=(AmsterdamUtrechtL2::Sheet05_Amstel_RBC::Send_RBC_LRBG_353_D_00431_0_M024#1)/ */ Context_Send_RBC_LRBG_353_D_00431_0_M024_1;
  outC_Send_RBC_LRBG_353_D_00421_9_M008_AmsterdamUtrechtL2_Sheet05_Amstel_RBC /* _L2=(AmsterdamUtrechtL2::Sheet05_Amstel_RBC::Send_RBC_LRBG_353_D_00421_9_M008#1)/ */ Context_Send_RBC_LRBG_353_D_00421_9_M008_1;
  outC_Send_RBC_LRBG_353_D_00319_2_M032_AmsterdamUtrechtL2_Sheet05_Amstel_RBC /* _L1=(AmsterdamUtrechtL2::Sheet05_Amstel_RBC::Send_RBC_LRBG_353_D_00319_2_M032#1)/ */ Context_Send_RBC_LRBG_353_D_00319_2_M032_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  R_data_internal_T_InfraLib /* _L1/ */ _L1;
  R_data_internal_T_InfraLib /* _L2/ */ _L2;
  R_data_internal_T_InfraLib /* _L3/ */ _L3;
  R_data_internal_T_InfraLib /* _L4/ */ _L4;
} outC_RBC_Sheet05_Amstel_AmsterdamUtrechtL2_Sheet05_Amstel_RBC;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::RBC_Sheet05_Amstel/ */
extern void RBC_Sheet05_Amstel_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
  /* RadiaDataIn/ */
  R_data_internal_T_InfraLib *RadiaDataIn,
  outC_RBC_Sheet05_Amstel_AmsterdamUtrechtL2_Sheet05_Amstel_RBC *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RBC_Sheet05_Amstel_reset_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
  outC_RBC_Sheet05_Amstel_AmsterdamUtrechtL2_Sheet05_Amstel_RBC *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void RBC_Sheet05_Amstel_init_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
  outC_RBC_Sheet05_Amstel_AmsterdamUtrechtL2_Sheet05_Amstel_RBC *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _RBC_Sheet05_Amstel_AmsterdamUtrechtL2_Sheet05_Amstel_RBC_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RBC_Sheet05_Amstel_AmsterdamUtrechtL2_Sheet05_Amstel_RBC.h
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

