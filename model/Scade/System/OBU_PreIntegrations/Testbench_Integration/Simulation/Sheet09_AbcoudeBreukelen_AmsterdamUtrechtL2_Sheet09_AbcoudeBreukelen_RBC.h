/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _Sheet09_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC_H_
#define _Sheet09_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC_H_

#include "kcg_types.h"
#include "Send_RBC_LRBG_396_D_00077_7_M015_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC.h"
#include "Send_RBC_LRBG_393_D_00064_8_M015_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC.h"
#include "Send_RBC_LRBG_391_D_00371_4_M015_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC.h"
#include "Send_RBC_LRBG_390_D_00067_4_M015_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  R_data_internal_T_InfraLib /* R_data_out/ */ R_data_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Send_RBC_LRBG_396_D_00077_7_M015_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC /* _L4=(AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_RBC::Send_RBC_LRBG_396_D_00077_7_M015#1)/ */ Context_Send_RBC_LRBG_396_D_00077_7_M015_1;
  outC_Send_RBC_LRBG_393_D_00064_8_M015_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC /* _L3=(AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_RBC::Send_RBC_LRBG_393_D_00064_8_M015#1)/ */ Context_Send_RBC_LRBG_393_D_00064_8_M015_1;
  outC_Send_RBC_LRBG_391_D_00371_4_M015_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC /* _L2=(AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_RBC::Send_RBC_LRBG_391_D_00371_4_M015#1)/ */ Context_Send_RBC_LRBG_391_D_00371_4_M015_1;
  outC_Send_RBC_LRBG_390_D_00067_4_M015_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC /* _L1=(AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_RBC::Send_RBC_LRBG_390_D_00067_4_M015#1)/ */ Context_Send_RBC_LRBG_390_D_00067_4_M015_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  R_data_internal_T_InfraLib /* _L1/ */ _L1;
  R_data_internal_T_InfraLib /* _L2/ */ _L2;
  R_data_internal_T_InfraLib /* _L3/ */ _L3;
  R_data_internal_T_InfraLib /* _L4/ */ _L4;
  R_data_internal_T_InfraLib /* _L13/ */ _L13;
} outC_Sheet09_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_RBC::Sheet09_AbcoudeBreukelen/ */
extern void Sheet09_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC(
  /* RadiaDataIn/ */
  R_data_internal_T_InfraLib *RadiaDataIn,
  outC_Sheet09_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Sheet09_AbcoudeBreukelen_reset_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC(
  outC_Sheet09_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Sheet09_AbcoudeBreukelen_init_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC(
  outC_Sheet09_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Sheet09_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Sheet09_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

