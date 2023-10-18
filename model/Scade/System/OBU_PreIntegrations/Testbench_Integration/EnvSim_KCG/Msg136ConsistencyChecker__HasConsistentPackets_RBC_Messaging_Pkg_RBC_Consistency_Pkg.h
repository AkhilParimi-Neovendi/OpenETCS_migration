/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _Msg136ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg_H_
#define _Msg136ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg_H_

#include "kcg_types.h"
#include "RadioTrainTrackPackets__GetP009_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrainTrackPacket009__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke.h"
#include "RadioTrainTrackPacket011__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke.h"
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
  outC_RadioTrainTrackPacket011__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrack /* _L11=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__IsValid#1)/ */ Context_RadioTrainTrackPacket011__IsValid_1;
  outC_RadioTrainTrackPackets__GetP011_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L19=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP011#1)/ */ Context_RadioTrainTrackPackets__GetP011_1;
  outC_RadioTrainTrackPacket003__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrack /* _L6=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket003_Pkg::RadioTrainTrackPacket003__IsValid#1)/ */ Context_RadioTrainTrackPacket003__IsValid_1;
  outC_RadioTrainTrackPackets__GetP003_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L5=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP003#1)/ */ Context_RadioTrainTrackPackets__GetP003_1;
  outC_RadioTrainTrackPacket000__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrack /* _L3=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__IsValid#1)/ */ Context_RadioTrainTrackPacket000__IsValid_1;
  outC_RadioTrainTrackPackets__GetP000_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L18=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP000#1)/ */ Context_RadioTrainTrackPackets__GetP000_1;
  outC_RadioTrainTrackPacket001__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrack /* _L21=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__IsValid#1)/ */ Context_RadioTrainTrackPacket001__IsValid_1;
  outC_RadioTrainTrackPackets__GetP001_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L4=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP001#1)/ */ Context_RadioTrainTrackPackets__GetP001_1;
  outC_RadioTrainTrackPacket009__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrack /* _L29=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket009_Pkg::RadioTrainTrackPacket009__IsValid#2)/ */ Context_RadioTrainTrackPacket009__IsValid_2;
  outC_RadioTrainTrackPackets__GetP009_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L28=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP009#2)/ */ Context_RadioTrainTrackPackets__GetP009_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L21/ */ _L21;
  kcg_bool /* _L20/ */ _L20;
  PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg /* _L19/ */ _L19;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* _L18/ */ _L18;
  kcg_bool /* _L13/ */ _L13;
  kcg_bool /* _L12/ */ _L12;
  kcg_bool /* _L11/ */ _L11;
  outPackets_T_Common_Types_Pkg /* _L10/ */ _L10;
  kcg_bool /* _L6/ */ _L6;
  PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg /* _L5/ */ _L5;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* _L4/ */ _L4;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L23/ */ _L23;
  kcg_bool /* _L29/ */ _L29;
  PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg /* _L28/ */ _L28;
  kcg_bool /* _L27/ */ _L27;
} outC_Msg136ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg136ConsistencyChecker__HasConsistentPackets/ */
extern void Msg136ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  /* inRadioTrainTrackPackets/ */
  outPackets_T_Common_Types_Pkg *inRadioTrainTrackPackets,
  outC_Msg136ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Msg136ConsistencyChecker__HasConsistentPackets_reset_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  outC_Msg136ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Msg136ConsistencyChecker__HasConsistentPackets_init_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  outC_Msg136ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Msg136ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Msg136ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

