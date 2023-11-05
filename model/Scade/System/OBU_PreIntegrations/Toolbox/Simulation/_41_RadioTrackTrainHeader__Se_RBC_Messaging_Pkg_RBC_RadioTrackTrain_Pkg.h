/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef __41_RadioTrackTrainHeader__Se_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_H_
#define __41_RadioTrackTrainHeader__Se_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_H_

#include "kcg_types.h"
#include "CAST_T_TRAIN_to_int_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Radio_TrackTrain_Header_T_TM /* outRadioTrackTrainHeader/ */ outRadioTrackTrainHeader;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_T_TRAIN_to_int_TM_conversions /* _L4=(TM_conversions::CAST_T_TRAIN_to_int#1)/ */ Context_CAST_T_TRAIN_to_int_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Radio_TrackTrain_Header_T_TM /* _L1/ */ _L1;
  T_TRAIN /* _L2/ */ _L2;
  Radio_TrackTrain_Header_T_TM /* _L3/ */ _L3;
  kcg_int32 /* _L4/ */ _L4;
} outC__41_RadioTrackTrainHeader__Se_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_T_TRAIN_Sh_Req/ */
extern void _41_RadioTrackTrainHeader__Se_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  /* inRadioTrackTrainHeader/ */
  Radio_TrackTrain_Header_T_TM *inRadioTrackTrainHeader,
  /* in_T_TRAIN_Sh_Req/ */
  T_TRAIN in_T_TRAIN_Sh_Req,
  outC__41_RadioTrackTrainHeader__Se_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg *outC);

extern void _41_RadioTrackTrainHeader__Se_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  outC__41_RadioTrackTrainHeader__Se_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void _41_RadioTrackTrainHeader__Se_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  outC__41_RadioTrackTrainHeader__Se_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* __41_RadioTrackTrainHeader__Se_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** _41_RadioTrackTrainHeader__Se_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

