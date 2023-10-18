/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */
#ifndef _Build_RBC_LRBG_397_D_00169_2_M015_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC_H_
#define _Build_RBC_LRBG_397_D_00169_2_M015_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC_H_

#include "kcg_types.h"
#include "Send_M015_JRU_MessageLibBaseline2.h"
#include "No_Radio_Packets_RadioLib.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  R_data_internal_T_InfraLib /* R_data_out/ */ R_data_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_No_Radio_Packets_RadioLib /* _L3=(RadioLib::No_Radio_Packets#1)/ */ Context_No_Radio_Packets_1;
  outC_Send_M015_JRU_MessageLibBaseline2 /* _L42=(MessageLibBaseline2::Send_M015_JRU#1)/ */ Context_Send_M015_JRU_1;
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
} outC_Build_RBC_LRBG_397_D_00169_2_M015_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::Build_RBC_LRBG_397_D_00169_2_M015/ */
extern void Build_RBC_LRBG_397_D_00169_2_M015_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
  /* RadiaDataIn/ */
  R_data_internal_T_InfraLib *RadiaDataIn,
  outC_Build_RBC_LRBG_397_D_00169_2_M015_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Build_RBC_LRBG_397_D_00169_2_M015_reset_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
  outC_Build_RBC_LRBG_397_D_00169_2_M015_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Build_RBC_LRBG_397_D_00169_2_M015_init_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
  outC_Build_RBC_LRBG_397_D_00169_2_M015_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Build_RBC_LRBG_397_D_00169_2_M015_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Build_RBC_LRBG_397_D_00169_2_M015_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC.h
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

