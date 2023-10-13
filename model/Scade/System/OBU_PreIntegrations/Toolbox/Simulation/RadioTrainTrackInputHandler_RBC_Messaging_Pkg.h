/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef _RadioTrainTrackInputHandler_RBC_Messaging_Pkg_H_
#define _RadioTrainTrackInputHandler_RBC_Messaging_Pkg_H_

#include "kcg_types.h"
#include "_143_RadioTrainTrackMessa_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"
#include "RadioTrainTrackFactory__C_RBC_Messaging_Pkg_RBC_RadioTrainTrackFactory_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* outRadioTrainTrack/ */ outRadioTrainTrack;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC__143_RadioTrainTrackMessa_RBC_Messaging_Pkg_RBC_Consistency_Pkg /* _L3=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg#1)/ */ Context_RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_1;
  outC_RadioTrainTrackFactory__C_RBC_Messaging_Pkg_RBC_RadioTrainTrackFactory_Pkg /* _L1=(RBC_Messaging_Pkg::RBC_RadioTrainTrackFactory_Pkg::RadioTrainTrackFactory__CreateDefaultMsg#1)/ */ Context_RadioTrainTrackFactory__CreateDefaultMsg_1;
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



#endif /* _RadioTrainTrackInputHandler_RBC_Messaging_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrainTrackInputHandler_RBC_Messaging_Pkg.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

