/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_H_
#define _RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  outPackets_T_Common_Types_Pkg /* outRadioTrainTrackPackets/ */ outRadioTrainTrackPackets;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* _L1/ */ _L1;
  outPackets_T_Common_Types_Pkg /* _L2/ */ _L2;
} outC_RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetPackets/ */
extern void RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
  /* inRadioTrainTrackMessage/ */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  outC_RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg *outC);

extern void RadioTrainTrackMessage__GetPackets_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
  outC_RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void RadioTrainTrackMessage__GetPackets_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
  outC_RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

