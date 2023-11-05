/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */
#ifndef _Amsterdam_Utrecht_Lijn1_RBC_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1_H_
#define _Amsterdam_Utrecht_Lijn1_RBC_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1_H_

#include "kcg_types.h"
#include "Sheet13_Breukelen_Maarssen_RBC_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC.h"
#include "Sheet12_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC.h"
#include "Sheet11_BreukelenKeerspoor_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC.h"
#include "Sheet09_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC.h"
#include "Sheet08B_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC.h"
#include "Sheet08A_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC.h"
#include "Sheet07_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC.h"
#include "RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.h"
#include "RBC_Sheet05_Amstel_AmsterdamUtrechtL2_Sheet05_Amstel_RBC.h"
#include "RBC_init_RadioLib.h"
#include "RBC_close_RadioLib.h"
#include "RBC_Sheet15_MaarssenUtrechtCS_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_RBC.h"
#include "RBC_Sheet14_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC.h"

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
  outC_RBC_Sheet15_MaarssenUtrechtCS_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_RBC /* _L28=(AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_RBC::RBC_Sheet15_MaarssenUtrechtCS#1)/ */ Context_RBC_Sheet15_MaarssenUtrechtCS_1;
  outC_RBC_Sheet14_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC /* _L27=(AmsterdamUtrechtL2::Sheet14_Maarssen_RBC::RBC_Sheet14_Maarssen#1)/ */ Context_RBC_Sheet14_Maarssen_1;
  outC_Sheet13_Breukelen_Maarssen_RBC_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC /* _L26=(AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_RBC::Sheet13_Breukelen_Maarssen_RBC#1)/ */ Context_Sheet13_Breukelen_Maarssen_RBC_1;
  outC_Sheet12_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC /* _L25=(AmsterdamUtrechtL2::Sheet12_Breukelen_RBC::Sheet12_Breukelen#1)/ */ Context_Sheet12_Breukelen_1;
  outC_Sheet11_BreukelenKeerspoor_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC /* _L24=(AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::Sheet11_BreukelenKeerspoor#1)/ */ Context_Sheet11_BreukelenKeerspoor_1;
  outC_Sheet09_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC /* _L23=(AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_RBC::Sheet09_AbcoudeBreukelen#1)/ */ Context_Sheet09_AbcoudeBreukelen_1;
  outC_Sheet08B_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC /* _L22=(AmsterdamUtrechtL2::Sheet08B_Abcoude_RBC::Sheet08B_Abcoude#1)/ */ Context_Sheet08B_Abcoude_1;
  outC_Sheet08A_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC /* _L21=(AmsterdamUtrechtL2::Sheet08A_Abcoude_RBC::Sheet08A_Abcoude#1)/ */ Context_Sheet08A_Abcoude_1;
  outC_Sheet07_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC /* _L20=(AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_RBC::Sheet07_BijlmerAbcoude#1)/ */ Context_Sheet07_BijlmerAbcoude_1;
  outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC /* _L19=(AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::RBC_Sheet06_Bijlmer#1)/ */ Context_RBC_Sheet06_Bijlmer_1;
  outC_RBC_Sheet05_Amstel_AmsterdamUtrechtL2_Sheet05_Amstel_RBC /* _L2=(AmsterdamUtrechtL2::Sheet05_Amstel_RBC::RBC_Sheet05_Amstel#1)/ */ Context_RBC_Sheet05_Amstel_1;
  outC_RBC_init_RadioLib /* _L7=(RadioLib::RBC_init#1)/ */ Context_RBC_init_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  R_data_internal_T_InfraLib /* _L2/ */ _L2;
  M_TrackTrain_Radio_T_TM_radio_messages /* _L3/ */ _L3;
  CompressedPackets_T_Common_Types_Pkg /* _L4/ */ _L4;
  kcg_int32 /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  R_data_internal_T_InfraLib /* _L7/ */ _L7;
  CompressedPackets_T_Common_Types_Pkg /* _L9/ */ _L9;
  M_TrackTrain_Radio_T_TM_radio_messages /* _L8/ */ _L8;
  R_data_internal_T_InfraLib /* _L19/ */ _L19;
  R_data_internal_T_InfraLib /* _L20/ */ _L20;
  R_data_internal_T_InfraLib /* _L21/ */ _L21;
  R_data_internal_T_InfraLib /* _L22/ */ _L22;
  R_data_internal_T_InfraLib /* _L23/ */ _L23;
  R_data_internal_T_InfraLib /* _L24/ */ _L24;
  R_data_internal_T_InfraLib /* _L25/ */ _L25;
  R_data_internal_T_InfraLib /* _L26/ */ _L26;
  R_data_internal_T_InfraLib /* _L27/ */ _L27;
  R_data_internal_T_InfraLib /* _L28/ */ _L28;
} outC_Amsterdam_Utrecht_Lijn1_RBC_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC/ */
extern void Amsterdam_Utrecht_Lijn1_RBC_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1(
  /* Message_in/ */
  M_TrackTrain_Radio_T_TM_radio_messages *Message_in,
  /* Packets_in/ */
  CompressedPackets_T_Common_Types_Pkg *Packets_in,
  /* Trigger_in/ */
  kcg_int32 Trigger_in,
  /* Message_sent/ */
  kcg_bool Message_sent,
  outC_Amsterdam_Utrecht_Lijn1_RBC_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1 *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Amsterdam_Utrecht_Lijn1_RBC_reset_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1(
  outC_Amsterdam_Utrecht_Lijn1_RBC_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1 *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Amsterdam_Utrecht_Lijn1_RBC_init_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1(
  outC_Amsterdam_Utrecht_Lijn1_RBC_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1 *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Amsterdam_Utrecht_Lijn1_RBC_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Amsterdam_Utrecht_Lijn1_RBC_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1.h
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

