/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */
#ifndef __159_Build_RBC_LRBG_351_D_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC_H_
#define __159_Build_RBC_LRBG_351_D_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC_H_

#include "kcg_types.h"
#include "_158_SendRadioPackets_LRB_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.h"
#include "Send_M003_JRU_MessageLibBaseline2.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  R_data_internal_T_InfraLib /* R_data_out/ */ R_data_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC__158_SendRadioPackets_LRB_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC /* _L3=(AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_351_D_00054_9_M003#1)/ */ Context_SendRadioPackets_LRBG_351_D_00054_9_M003_1;
  outC_Send_M003_JRU_MessageLibBaseline2 /* _L42=(MessageLibBaseline2::Send_M003_JRU#1)/ */ Context_Send_M003_JRU_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  R_data_internal_T_InfraLib /* _L1/ */ _L1;
  CompressedPackets_T_Common_Types_Pkg /* _L3/ */ _L3;
  CompressedPackets_T_Common_Types_Pkg /* _L38/ */ _L38;
  R_data_internal_T_InfraLib /* _L39/ */ _L39;
  R_data_internal_T_InfraLib /* _L40/ */ _L40;
  M_TrackTrain_Radio_T_TM_radio_messages /* _L42/ */ _L42;
  R_data_internal_T_InfraLib /* _L43/ */ _L43;
  kcg_bool /* _L44/ */ _L44;
} outC__159_Build_RBC_LRBG_351_D_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_351_D_00054_9_M003/ */
extern void _159_Build_RBC_LRBG_351_D_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
  /* RadiaDataIn/ */
  R_data_internal_T_InfraLib *RadiaDataIn,
  outC__159_Build_RBC_LRBG_351_D_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void _159_Build_RBC_LRBG_351_D_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
  outC__159_Build_RBC_LRBG_351_D_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void _159_Build_RBC_LRBG_351_D_init_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
  outC__159_Build_RBC_LRBG_351_D_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* __159_Build_RBC_LRBG_351_D_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** _159_Build_RBC_LRBG_351_D_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.h
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

