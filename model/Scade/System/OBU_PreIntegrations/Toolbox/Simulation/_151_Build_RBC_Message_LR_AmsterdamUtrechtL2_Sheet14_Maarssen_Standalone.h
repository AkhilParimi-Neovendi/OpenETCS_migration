/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef __151_Build_RBC_Message_LR_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone_H_
#define __151_Build_RBC_Message_LR_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone_H_

#include "kcg_types.h"
#include "Send_M008_JRU_MessageLibBaseline2.h"
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
  outC_Send_M008_JRU_MessageLibBaseline2 /* _L42=(MessageLibBaseline2::Send_M008_JRU#1)/ */ Context_Send_M008_JRU_1;
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
} outC__151_Build_RBC_Message_LR_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Build_RBC_Message_LRBG_100_D_00100_0_M008/ */
extern void _151_Build_RBC_Message_LR_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
  /* RadiaDataIn/ */
  R_data_internal_T_InfraLib *RadiaDataIn,
  outC__151_Build_RBC_Message_LR_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void _151_Build_RBC_Message_LR_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
  outC__151_Build_RBC_Message_LR_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void _151_Build_RBC_Message_LR_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
  outC__151_Build_RBC_Message_LR_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* __151_Build_RBC_Message_LR_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** _151_Build_RBC_Message_LR_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

