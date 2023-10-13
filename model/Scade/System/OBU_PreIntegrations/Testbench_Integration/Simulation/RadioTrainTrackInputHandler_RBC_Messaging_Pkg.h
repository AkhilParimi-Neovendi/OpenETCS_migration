/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:59
*************************************************************$ */
#ifndef _RadioTrainTrackInputHandler_RBC_Messaging_Pkg_H_
#define _RadioTrainTrackInputHandler_RBC_Messaging_Pkg_H_

#include "kcg_types.h"
#include "RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"
#include "RadioTrainTrackFactory__CreateDefaultMsg_RBC_Messaging_Pkg_RBC_RadioTrainTrackFactory_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* outRadioTrainTrack/ */ outRadioTrainTrack;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_RBC_Messaging_Pkg_RBC_Consistency_Pkg /* _L3=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg#1)/ */ Context_RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_1;
  outC_RadioTrainTrackFactory__CreateDefaultMsg_RBC_Messaging_Pkg_RBC_RadioTrainTrackFactory_Pkg /* _L1=(RBC_Messaging_Pkg::RBC_RadioTrainTrackFactory_Pkg::RadioTrainTrackFactory__CreateDefaultMsg#1)/ */ Context_RadioTrainTrackFactory__CreateDefaultMsg_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L3/ */ _L3;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* _L2/ */ _L2;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* _L1/ */ _L1;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* _L4/ */ _L4;
} outC_RadioTrainTrackInputHandler_RBC_Messaging_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Messaging_Pkg::RadioTrainTrackInputHandler/ */
extern void RadioTrainTrackInputHandler_RBC_Messaging_Pkg(
  /* inRadioTrainTrack/ */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrack,
  outC_RadioTrainTrackInputHandler_RBC_Messaging_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RadioTrainTrackInputHandler_reset_RBC_Messaging_Pkg(
  outC_RadioTrainTrackInputHandler_RBC_Messaging_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void RadioTrainTrackInputHandler_init_RBC_Messaging_Pkg(
  outC_RadioTrainTrackInputHandler_RBC_Messaging_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_RBC_Messaging_Pkg_RBC_Consistency_Pkg Context_RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_1;
} SV_RadioTrainTrackInputHandler_RBC_Messaging_Pkg;

extern void kcg_save_SV_RadioTrainTrackInputHandler_RBC_Messaging_Pkg(
  SV_RadioTrainTrackInputHandler_RBC_Messaging_Pkg *SV,
  outC_RadioTrainTrackInputHandler_RBC_Messaging_Pkg *outC);
extern void kcg_load_SV_RadioTrainTrackInputHandler_RBC_Messaging_Pkg(
  outC_RadioTrainTrackInputHandler_RBC_Messaging_Pkg *outC,
  SV_RadioTrainTrackInputHandler_RBC_Messaging_Pkg *SV);



#endif /* _RadioTrainTrackInputHandler_RBC_Messaging_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrainTrackInputHandler_RBC_Messaging_Pkg.h
** Generation date: 2023-10-12T15:09:59
*************************************************************$ */

