/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef __105_RadioTrackTrainHeade_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_H_
#define __105_RadioTrackTrainHeade_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_H_

#include "kcg_types.h"
#include "CAST_Int_to_M_ACK_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_ACK /* out_M_ACK/ */ out_M_ACK;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_Int_to_M_ACK_TM_conversions /* _L3=(TM_conversions::CAST_Int_to_M_ACK#1)/ */ Context_CAST_Int_to_M_ACK_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Radio_TrackTrain_Header_T_TM /* _L1/ */ _L1;
  kcg_int32 /* _L2/ */ _L2;
  M_ACK /* _L3/ */ _L3;
} outC__105_RadioTrackTrainHeade_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_M_ACK/ */
extern void _105_RadioTrackTrainHeade_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  /* inRadioTrackTrainHeader/ */
  Radio_TrackTrain_Header_T_TM *inRadioTrackTrainHeader,
  outC__105_RadioTrackTrainHeade_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg *outC);

extern void _105_RadioTrackTrainHeade_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  outC__105_RadioTrackTrainHeade_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void _105_RadioTrackTrainHeade_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  outC__105_RadioTrackTrainHeade_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* __105_RadioTrackTrainHeade_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** _105_RadioTrackTrainHeade_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

