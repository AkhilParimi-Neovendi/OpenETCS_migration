/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */
#ifndef _Amsterdam_Utrecht_Lijn1_RBC_non_nominal_UserStories13_16_H_
#define _Amsterdam_Utrecht_Lijn1_RBC_non_nominal_UserStories13_16_H_

#include "kcg_types.h"
#include "RBC_Sheet06_Bijlmer_US13_UserStories13_16_US_13.h"
#include "RBC_Sheet05_Amstel_AmsterdamUtrechtL2_Sheet05_Amstel_RBC.h"
#include "RBC_init_RadioLib.h"
#include "RBC_close_RadioLib.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrackTrain_Radio_T_TM_radio_messages /* Message_out/ */ Message_out;
  CompressedPackets_T_Common_Types_Pkg /* Packets_out/ */ Packets_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RBC_close_RadioLib /* _L8=(RadioLib::RBC_close#1)/ */ Context_RBC_close_1;
  outC_RBC_Sheet06_Bijlmer_US13_UserStories13_16_US_13 /* _L1=(UserStories13_16::US_13::RBC_Sheet06_Bijlmer_US13#1)/ */ Context_RBC_Sheet06_Bijlmer_US13_1;
  outC_RBC_Sheet05_Amstel_AmsterdamUtrechtL2_Sheet05_Amstel_RBC /* _L2=(AmsterdamUtrechtL2::Sheet05_Amstel_RBC::RBC_Sheet05_Amstel#1)/ */ Context_RBC_Sheet05_Amstel_1;
  outC_RBC_init_RadioLib /* _L7=(RadioLib::RBC_init#1)/ */ Context_RBC_init_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  R_data_internal_T_InfraLib /* _L1/ */ _L1;
  R_data_internal_T_InfraLib /* _L2/ */ _L2;
  M_TrackTrain_Radio_T_TM_radio_messages /* _L3/ */ _L3;
  CompressedPackets_T_Common_Types_Pkg /* _L4/ */ _L4;
  kcg_int32 /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  R_data_internal_T_InfraLib /* _L7/ */ _L7;
  CompressedPackets_T_Common_Types_Pkg /* _L9/ */ _L9;
  M_TrackTrain_Radio_T_TM_radio_messages /* _L8/ */ _L8;
} outC_Amsterdam_Utrecht_Lijn1_RBC_non_nominal_UserStories13_16;

/* ===========  node initialization and cycle functions  =========== */
/* UserStories13_16::Amsterdam_Utrecht_Lijn1_RBC_non_nominal/ */
extern void Amsterdam_Utrecht_Lijn1_RBC_non_nominal_UserStories13_16(
  /* Message_in/ */
  M_TrackTrain_Radio_T_TM_radio_messages *Message_in,
  /* Packets_in/ */
  CompressedPackets_T_Common_Types_Pkg *Packets_in,
  /* Trigger_in/ */
  kcg_int32 Trigger_in,
  /* Message_sent/ */
  kcg_bool Message_sent,
  outC_Amsterdam_Utrecht_Lijn1_RBC_non_nominal_UserStories13_16 *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Amsterdam_Utrecht_Lijn1_RBC_non_nominal_reset_UserStories13_16(
  outC_Amsterdam_Utrecht_Lijn1_RBC_non_nominal_UserStories13_16 *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Amsterdam_Utrecht_Lijn1_RBC_non_nominal_init_UserStories13_16(
  outC_Amsterdam_Utrecht_Lijn1_RBC_non_nominal_UserStories13_16 *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Amsterdam_Utrecht_Lijn1_RBC_non_nominal_UserStories13_16_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Amsterdam_Utrecht_Lijn1_RBC_non_nominal_UserStories13_16.h
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

