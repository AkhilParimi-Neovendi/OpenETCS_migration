/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef __114_RadioTrackTrainFacto_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg_H_
#define __114_RadioTrackTrainFacto_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg_H_

#include "kcg_types.h"
#include "_113_RadioTrackTrainPacke_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket057_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P057_trackside_int_T_TM /* outRadioTrackTrainPacket/ */ outRadioTrackTrainPacket;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC__113_RadioTrackTrainPacke_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket057_Pkg /* _L2=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Create#1)/ */ Context_RadioTrackTrainPacket057__Create_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P057_trackside_int_T_TM /* _L2/ */ _L2;
  Q_DIR /* _L11/ */ _L11;
  T_MAR /* _L12/ */ _L12;
  T_TIMEOUTRQST /* _L13/ */ _L13;
  T_CYCRQST /* _L14/ */ _L14;
} outC__114_RadioTrackTrainFacto_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateP057/ */
extern void _114_RadioTrackTrainFacto_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
  /* in_Q_DIR/ */
  Q_DIR in_Q_DIR,
  /* in_T_MAR/ */
  T_MAR in_T_MAR,
  /* in_T_TIMEOUTRQST/ */
  T_TIMEOUTRQST in_T_TIMEOUTRQST,
  /* in_T_CYCRQST/ */
  T_CYCRQST in_T_CYCRQST,
  outC__114_RadioTrackTrainFacto_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void _114_RadioTrackTrainFacto_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
  outC__114_RadioTrackTrainFacto_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void _114_RadioTrackTrainFacto_init_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
  outC__114_RadioTrackTrainFacto_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* __114_RadioTrackTrainFacto_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** _114_RadioTrackTrainFacto_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

