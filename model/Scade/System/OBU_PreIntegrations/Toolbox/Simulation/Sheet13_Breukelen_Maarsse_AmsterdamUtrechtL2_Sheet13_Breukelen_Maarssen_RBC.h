/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */
#ifndef _Sheet13_Breukelen_Maarsse_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC_H_
#define _Sheet13_Breukelen_Maarsse_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC_H_

#include "kcg_types.h"
#include "Send_RBC_LRBG_422_D_00192_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC.h"
#include "Send_RBC_LRBG_421_D_00050_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC.h"
#include "Send_RBC_LRBG_420_D_00169_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  R_data_internal_T_InfraLib /* R_data_out/ */ R_data_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Send_RBC_LRBG_422_D_00192_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC /* _L3=(AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_RBC::Send_RBC_LRBG_422_D_00192_7_M015#1)/ */ Context_Send_RBC_LRBG_422_D_00192_7_M015_1;
  outC_Send_RBC_LRBG_421_D_00050_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC /* _L2=(AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_RBC::Send_RBC_LRBG_421_D_00050_0_M015#1)/ */ Context_Send_RBC_LRBG_421_D_00050_0_M015_1;
  outC_Send_RBC_LRBG_420_D_00169_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC /* _L1=(AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_RBC::Send_RBC_LRBG_420_D_00169_4_M015#1)/ */ Context_Send_RBC_LRBG_420_D_00169_4_M015_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  R_data_internal_T_InfraLib /* _L1/ */ _L1;
  R_data_internal_T_InfraLib /* _L2/ */ _L2;
  R_data_internal_T_InfraLib /* _L3/ */ _L3;
  R_data_internal_T_InfraLib /* _L13/ */ _L13;
} outC_Sheet13_Breukelen_Maarsse_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_RBC::Sheet13_Breukelen_Maarssen_RBC/ */
extern void Sheet13_Breukelen_Maarsse_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC(
  /* RadiaDataIn/ */
  R_data_internal_T_InfraLib *RadiaDataIn,
  outC_Sheet13_Breukelen_Maarsse_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Sheet13_Breukelen_Maarsse_reset_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC(
  outC_Sheet13_Breukelen_Maarsse_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Sheet13_Breukelen_Maarsse_init_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC(
  outC_Sheet13_Breukelen_Maarsse_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Sheet13_Breukelen_Maarsse_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Sheet13_Breukelen_Maarsse_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC.h
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

