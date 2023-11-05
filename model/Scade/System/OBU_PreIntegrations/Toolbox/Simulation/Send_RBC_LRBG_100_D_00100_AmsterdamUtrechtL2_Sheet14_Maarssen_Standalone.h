/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef _Send_RBC_LRBG_100_D_00100_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone_H_
#define _Send_RBC_LRBG_100_D_00100_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone_H_

#include "kcg_types.h"
#include "_151_Build_RBC_Message_LR_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  R_data_internal_T_InfraLib /* R_data_out/ */ R_data_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC__151_Build_RBC_Message_LR_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone /* _L4=(AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Build_RBC_Message_LRBG_100_D_00100_0_M008#1)/ */ Context_Build_RBC_Message_LRBG_100_D_00100_0_M008_1;
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
} outC_Send_RBC_LRBG_100_D_00100_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Send_RBC_LRBG_100_D_00100_0_M008/ */
extern void Send_RBC_LRBG_100_D_00100_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
  /* RadiaDataIn/ */
  R_data_internal_T_InfraLib *RadiaDataIn,
  /* TriggerValue/ */
  kcg_int32 TriggerValue,
  outC_Send_RBC_LRBG_100_D_00100_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Send_RBC_LRBG_100_D_00100_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
  outC_Send_RBC_LRBG_100_D_00100_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Send_RBC_LRBG_100_D_00100_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
  outC_Send_RBC_LRBG_100_D_00100_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Send_RBC_LRBG_100_D_00100_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Send_RBC_LRBG_100_D_00100_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

