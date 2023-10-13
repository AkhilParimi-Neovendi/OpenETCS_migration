/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef __56_RadioTrainTrackHeader__Ge_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_H_
#define __56_RadioTrainTrackHeader__Ge_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_TRAIN /* out_T_TRAIN_Ref/ */ out_T_TRAIN_Ref;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* _L1/ */ _L1;
  T_TRAIN /* _L2/ */ _L2;
} outC__56_RadioTrainTrackHeader__Ge_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_T_TRAIN_Ref/ */
extern void _56_RadioTrainTrackHeader__Ge_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
  /* inRadioTrainTrackHeader/ */
  Radio_TrainTrack_Header_T_Radio_Types_Pkg *inRadioTrainTrackHeader,
  outC__56_RadioTrainTrackHeader__Ge_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg *outC);

extern void _56_RadioTrainTrackHeader__Ge_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
  outC__56_RadioTrainTrackHeader__Ge_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void _56_RadioTrainTrackHeader__Ge_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
  outC__56_RadioTrainTrackHeader__Ge_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* __56_RadioTrainTrackHeader__Ge_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** _56_RadioTrainTrackHeader__Ge_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

