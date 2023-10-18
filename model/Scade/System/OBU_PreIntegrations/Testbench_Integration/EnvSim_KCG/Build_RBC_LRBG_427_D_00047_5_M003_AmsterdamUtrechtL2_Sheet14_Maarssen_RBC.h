/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _Build_RBC_LRBG_427_D_00047_5_M003_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC_H_
#define _Build_RBC_LRBG_427_D_00047_5_M003_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC_H_

#include "kcg_types.h"
#include "Send_M003_JRU_MessageLibBaseline2.h"
#include "SendRadioPackets_LRBG_427_D_00047_5_M003_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  R_data_internal_T_InfraLib /* R_data_out/ */ R_data_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SendRadioPackets_LRBG_427_D_00047_5_M003_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC /* _L3=(AmsterdamUtrechtL2::Sheet14_Maarssen_RBC::SendRadioPackets_LRBG_427_D_00047_5_M003#1)/ */ Context_SendRadioPackets_LRBG_427_D_00047_5_M003_1;
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
} outC_Build_RBC_LRBG_427_D_00047_5_M003_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL2::Sheet14_Maarssen_RBC::Build_RBC_LRBG_427_D_00047_5_M003/ */
extern void Build_RBC_LRBG_427_D_00047_5_M003_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC(
  /* RadiaDataIn/ */
  R_data_internal_T_InfraLib *RadiaDataIn,
  outC_Build_RBC_LRBG_427_D_00047_5_M003_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Build_RBC_LRBG_427_D_00047_5_M003_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC(
  outC_Build_RBC_LRBG_427_D_00047_5_M003_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Build_RBC_LRBG_427_D_00047_5_M003_init_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC(
  outC_Build_RBC_LRBG_427_D_00047_5_M003_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Build_RBC_LRBG_427_D_00047_5_M003_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Build_RBC_LRBG_427_D_00047_5_M003_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

