/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _Msg146ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg_H_
#define _Msg146ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg_H_

#include "kcg_types.h"
#include "RadioTrainTrackPackets__GetP009_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrainTrackPacket009__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke.h"
#include "RadioTrainTrackPacket004__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke.h"
#include "RadioTrainTrackPacket005__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke.h"
#include "RadioTrainTrackPacket011__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke.h"
#include "RadioTrainTrackPackets__GetP004_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrainTrackPackets__GetP005_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrainTrackPackets__GetP011_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrainTrackPacket001__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke.h"
#include "RadioTrainTrackPacket000__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke.h"
#include "RadioTrainTrackPackets__GetP000_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrainTrackPackets__GetP001_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrainTrackPacket003__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke.h"
#include "RadioTrainTrackPackets__GetP003_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* outIsConsistent/ */ outIsConsistent;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RadioTrainTrackPacket003__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrack /* _L2=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket003_Pkg::RadioTrainTrackPacket003__IsValid#1)/ */ Context_RadioTrainTrackPacket003__IsValid_1;
  outC_RadioTrainTrackPackets__GetP003_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L11=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP003#1)/ */ Context_RadioTrainTrackPackets__GetP003_1;
  outC_RadioTrainTrackPacket011__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrack /* _L15=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__IsValid#1)/ */ Context_RadioTrainTrackPacket011__IsValid_1;
  outC_RadioTrainTrackPackets__GetP011_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L8=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP011#1)/ */ Context_RadioTrainTrackPackets__GetP011_1;
  outC_RadioTrainTrackPacket005__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrack /* _L18=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket005_Pkg::RadioTrainTrackPacket005__IsValid#1)/ */ Context_RadioTrainTrackPacket005__IsValid_1;
  outC_RadioTrainTrackPackets__GetP005_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L3=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP005#1)/ */ Context_RadioTrainTrackPackets__GetP005_1;
  outC_RadioTrainTrackPacket000__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrack /* _L19=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__IsValid#1)/ */ Context_RadioTrainTrackPacket000__IsValid_1;
  outC_RadioTrainTrackPackets__GetP000_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L17=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP000#1)/ */ Context_RadioTrainTrackPackets__GetP000_1;
  outC_RadioTrainTrackPacket001__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrack /* _L12=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__IsValid#1)/ */ Context_RadioTrainTrackPacket001__IsValid_1;
  outC_RadioTrainTrackPackets__GetP001_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L16=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP001#1)/ */ Context_RadioTrainTrackPackets__GetP001_1;
  outC_RadioTrainTrackPacket004__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrack /* _L21=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket004_Pkg::RadioTrainTrackPacket004__IsValid#1)/ */ Context_RadioTrainTrackPacket004__IsValid_1;
  outC_RadioTrainTrackPackets__GetP004_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L14=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP004#1)/ */ Context_RadioTrainTrackPackets__GetP004_1;
  outC_RadioTrainTrackPacket009__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrack /* _L22=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket009_Pkg::RadioTrainTrackPacket009__IsValid#1)/ */ Context_RadioTrainTrackPacket009__IsValid_1;
  outC_RadioTrainTrackPackets__GetP009_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L24=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP009#1)/ */ Context_RadioTrainTrackPackets__GetP009_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L21/ */ _L21;
  kcg_bool /* _L20/ */ _L20;
  kcg_bool /* _L19/ */ _L19;
  kcg_bool /* _L18/ */ _L18;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* _L17/ */ _L17;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* _L16/ */ _L16;
  kcg_bool /* _L15/ */ _L15;
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg /* _L14/ */ _L14;
  kcg_bool /* _L12/ */ _L12;
  PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg /* _L11/ */ _L11;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L9/ */ _L9;
  PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg /* _L8/ */ _L8;
  kcg_bool /* _L7/ */ _L7;
  outPackets_T_Common_Types_Pkg /* _L6/ */ _L6;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L4/ */ _L4;
  PT5_TrainRunningNumber_Packet_TrainTypes_Pkg /* _L3/ */ _L3;
  kcg_bool /* _L2/ */ _L2;
  kcg_bool /* _L1/ */ _L1;
  PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg /* _L24/ */ _L24;
  kcg_bool /* _L23/ */ _L23;
  kcg_bool /* _L22/ */ _L22;
} outC_Msg146ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg146ConsistencyChecker__HasConsistentPackets/ */
extern void Msg146ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  /* inRadioTrainTrackPackets/ */
  outPackets_T_Common_Types_Pkg *inRadioTrainTrackPackets,
  outC_Msg146ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Msg146ConsistencyChecker__HasConsistentPackets_reset_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  outC_Msg146ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Msg146ConsistencyChecker__HasConsistentPackets_init_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  outC_Msg146ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Msg146ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Msg146ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

