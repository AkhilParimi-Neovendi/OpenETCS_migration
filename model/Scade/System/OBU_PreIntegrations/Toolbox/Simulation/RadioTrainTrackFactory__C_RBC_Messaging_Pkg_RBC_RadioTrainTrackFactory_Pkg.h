/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef _RadioTrainTrackFactory__C_RBC_Messaging_Pkg_RBC_RadioTrainTrackFactory_Pkg_H_
#define _RadioTrainTrackFactory__C_RBC_Messaging_Pkg_RBC_RadioTrainTrackFactory_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* o_RadioTrainTrackMessage/ */ o_RadioTrainTrackMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* _L2/ */ _L2;
} outC_RadioTrainTrackFactory__C_RBC_Messaging_Pkg_RBC_RadioTrainTrackFactory_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Messaging_Pkg::RBC_RadioTrainTrackFactory_Pkg::RadioTrainTrackFactory__CreateDefaultMsg/ */
extern void RadioTrainTrackFactory__C_RBC_Messaging_Pkg_RBC_RadioTrainTrackFactory_Pkg(
  outC_RadioTrainTrackFactory__C_RBC_Messaging_Pkg_RBC_RadioTrainTrackFactory_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RadioTrainTrackFactory__C_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrackFactory_Pkg(
  outC_RadioTrainTrackFactory__C_RBC_Messaging_Pkg_RBC_RadioTrainTrackFactory_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void RadioTrainTrackFactory__C_init_RBC_Messaging_Pkg_RBC_RadioTrainTrackFactory_Pkg(
  outC_RadioTrainTrackFactory__C_RBC_Messaging_Pkg_RBC_RadioTrainTrackFactory_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _RadioTrainTrackFactory__C_RBC_Messaging_Pkg_RBC_RadioTrainTrackFactory_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrainTrackFactory__C_RBC_Messaging_Pkg_RBC_RadioTrainTrackFactory_Pkg.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

