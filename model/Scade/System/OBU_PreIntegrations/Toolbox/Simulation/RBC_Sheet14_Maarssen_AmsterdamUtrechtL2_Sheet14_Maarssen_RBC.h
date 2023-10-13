/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef _RBC_Sheet14_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC_H_
#define _RBC_Sheet14_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC_H_

#include "kcg_types.h"
#include "Send_RBC_LRBG_432_D_00040_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC.h"
#include "Send_RBC_LRBG_431_D_00410_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC.h"
#include "Send_RBC_LRBG_428_D_00182_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC.h"
#include "Send_RBC_LRBG_427_D_00047_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  R_data_internal_T_InfraLib /* R_data_out/ */ R_data_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Send_RBC_LRBG_432_D_00040_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC /* _L4=(AmsterdamUtrechtL2::Sheet14_Maarssen_RBC::Send_RBC_LRBG_432_D_00040_9_M003#1)/ */ Context_Send_RBC_LRBG_432_D_00040_9_M003_1;
  outC_Send_RBC_LRBG_431_D_00410_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC /* _L3=(AmsterdamUtrechtL2::Sheet14_Maarssen_RBC::Send_RBC_LRBG_431_D_00410_2_M015#1)/ */ Context_Send_RBC_LRBG_431_D_00410_2_M015_1;
  outC_Send_RBC_LRBG_428_D_00182_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC /* _L2=(AmsterdamUtrechtL2::Sheet14_Maarssen_RBC::Send_RBC_LRBG_428_D_00182_0_M015#1)/ */ Context_Send_RBC_LRBG_428_D_00182_0_M015_1;
  outC_Send_RBC_LRBG_427_D_00047_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC /* _L1=(AmsterdamUtrechtL2::Sheet14_Maarssen_RBC::Send_RBC_LRBG_427_D_00047_5_M003#1)/ */ Context_Send_RBC_LRBG_427_D_00047_5_M003_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  R_data_internal_T_InfraLib /* _L1/ */ _L1;
  R_data_internal_T_InfraLib /* _L2/ */ _L2;
  R_data_internal_T_InfraLib /* _L3/ */ _L3;
  R_data_internal_T_InfraLib /* _L4/ */ _L4;
  R_data_internal_T_InfraLib /* _L13/ */ _L13;
} outC_RBC_Sheet14_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL2::Sheet14_Maarssen_RBC::RBC_Sheet14_Maarssen/ */
extern void RBC_Sheet14_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC(
  /* RadiaDataIn/ */
  R_data_internal_T_InfraLib *RadiaDataIn,
  outC_RBC_Sheet14_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RBC_Sheet14_Maarssen_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC(
  outC_RBC_Sheet14_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void RBC_Sheet14_Maarssen_init_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC(
  outC_RBC_Sheet14_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _RBC_Sheet14_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RBC_Sheet14_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

