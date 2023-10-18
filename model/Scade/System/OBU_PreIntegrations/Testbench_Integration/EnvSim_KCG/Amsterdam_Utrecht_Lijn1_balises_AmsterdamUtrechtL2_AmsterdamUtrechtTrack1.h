/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */
#ifndef _Amsterdam_Utrecht_Lijn1_balises_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1_H_
#define _Amsterdam_Utrecht_Lijn1_balises_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1_H_

#include "kcg_types.h"
#include "Balises0010_Breukelen_Maarssen_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_Balises.h"
#include "Balises0009_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises.h"
#include "Balises0008_BreukelenKeerspoor_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises.h"
#include "Balises0007_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises.h"
#include "Balises0006_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises.h"
#include "Balises0005_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises.h"
#include "Balises0004_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises.h"
#include "Balises0003_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises.h"
#include "Balises0002_Amstel_UB_Signal_613_to_617_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.h"
#include "Balises0001_Amstel_UB_Signal_611_to_613_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.h"
#include "TrackDiscontinuity_InfraLib.h"
#include "TrackInit_InfraLib.h"
#include "TrackClose_InfraLib.h"
#include "Balises0011_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises.h"
#include "Balises0012_MaarssenUtrechtCS_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_Balises.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedBaliseMessage_TM /* BaliseMessage/ */ BaliseMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TrackClose_InfraLib /* _L17=(InfraLib::TrackClose#1)/ */ Context_TrackClose_1;
  outC_Balises0012_MaarssenUtrechtCS_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_Balises /* _L12=(AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_Balises::Balises0012_MaarssenUtrechtCS#1)/ */ Context_Balises0012_MaarssenUtrechtCS_1;
  outC_Balises0011_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises /* _L11=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balises0011_Maarssen#1)/ */ Context_Balises0011_Maarssen_1;
  outC_Balises0010_Breukelen_Maarssen_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_Balises /* _L10=(AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_Balises::Balises0010_Breukelen_Maarssen#1)/ */ Context_Balises0010_Breukelen_Maarssen_1;
  outC_Balises0009_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises /* _L9=(AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balises0009_Breukelen#1)/ */ Context_Balises0009_Breukelen_1;
  outC_Balises0008_BreukelenKeerspoor_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises /* _L8=(AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balises0008_BreukelenKeerspoor#1)/ */ Context_Balises0008_BreukelenKeerspoor_1;
  outC_Balises0007_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises /* _L7=(AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balises0007_AbcoudeBreukelen#1)/ */ Context_Balises0007_AbcoudeBreukelen_1;
  outC_Balises0006_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises /* _L6=(AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balises0006_Abcoude#1)/ */ Context_Balises0006_Abcoude_1;
  outC_Balises0005_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises /* _L5=(AmsterdamUtrechtL2::Sheet08A_Abcoude_Balises::Balises0005_Abcoude#1)/ */ Context_Balises0005_Abcoude_1;
  outC_Balises0004_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises /* _L4=(AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_Balises::Balises0004_BijlmerAbcoude#1)/ */ Context_Balises0004_BijlmerAbcoude_1;
  outC_Balises0003_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises /* _L3=(AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balises0003_Bijlmer#1)/ */ Context_Balises0003_Bijlmer_1;
  outC_Balises0002_Amstel_UB_Signal_613_to_617_AmsterdamUtrechtL2_Sheet05_Amstel_Balises /* _L2=(AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balises0002_Amstel_UB_Signal_613_to_617#1)/ */ Context_Balises0002_Amstel_UB_Signal_613_to_617_1;
  outC_TrackDiscontinuity_InfraLib /* _L14=(InfraLib::TrackDiscontinuity#2)/ */ Context_TrackDiscontinuity_2;
  outC_Balises0001_Amstel_UB_Signal_611_to_613_AmsterdamUtrechtL2_Sheet05_Amstel_Balises /* _L1=(AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balises0001_Amstel_UB_Signal_611_to_613#1)/ */ Context_Balises0001_Amstel_UB_Signal_611_to_613_1;
  outC_TrackDiscontinuity_InfraLib /* _L13=(InfraLib::TrackDiscontinuity#1)/ */ Context_TrackDiscontinuity_1;
  outC_TrackInit_InfraLib /* _L15=(InfraLib::TrackInit#1)/ */ Context_TrackInit_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  TrackSectionData_T_InfraLib /* _L1/ */ _L1;
  TrackSectionData_T_InfraLib /* _L2/ */ _L2;
  TrackSectionData_T_InfraLib /* _L3/ */ _L3;
  TrackSectionData_T_InfraLib /* _L4/ */ _L4;
  TrackSectionData_T_InfraLib /* _L5/ */ _L5;
  TrackSectionData_T_InfraLib /* _L6/ */ _L6;
  TrackSectionData_T_InfraLib /* _L7/ */ _L7;
  TrackSectionData_T_InfraLib /* _L8/ */ _L8;
  TrackSectionData_T_InfraLib /* _L9/ */ _L9;
  TrackSectionData_T_InfraLib /* _L10/ */ _L10;
  TrackSectionData_T_InfraLib /* _L11/ */ _L11;
  TrackSectionData_T_InfraLib /* _L12/ */ _L12;
  TrackSectionData_T_InfraLib /* _L13/ */ _L13;
  TrackSectionData_T_InfraLib /* _L14/ */ _L14;
  TrackSectionData_T_InfraLib /* _L15/ */ _L15;
  kcg_float64 /* _L16/ */ _L16;
  CompressedBaliseMessage_TM /* _L17/ */ _L17;
} outC_Amsterdam_Utrecht_Lijn1_balises_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises/ */
extern void Amsterdam_Utrecht_Lijn1_balises_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1(
  /* TrainPosSim_in/ */
  kcg_float64 TrainPosSim_in,
  outC_Amsterdam_Utrecht_Lijn1_balises_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1 *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Amsterdam_Utrecht_Lijn1_balises_reset_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1(
  outC_Amsterdam_Utrecht_Lijn1_balises_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1 *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Amsterdam_Utrecht_Lijn1_balises_init_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1(
  outC_Amsterdam_Utrecht_Lijn1_balises_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1 *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Amsterdam_Utrecht_Lijn1_balises_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Amsterdam_Utrecht_Lijn1_balises_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1.h
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

