/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef __37_RadioTrackTrainHeader__Se_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_H_
#define __37_RadioTrackTrainHeader__Se_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Radio_TrackTrain_Header_T_TM /* outRadioTrackTrainHeader/ */ outRadioTrackTrainHeader;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Radio_TrackTrain_Header_T_TM /* _L1/ */ _L1;
  kcg_int32 /* _L2/ */ _L2;
  Radio_TrackTrain_Header_T_TM /* _L3/ */ _L3;
} outC__37_RadioTrackTrainHeader__Se_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_NID_LRBG/ */
extern void _37_RadioTrackTrainHeader__Se_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  /* inRadioTrackTrainHeader/ */
  Radio_TrackTrain_Header_T_TM *inRadioTrackTrainHeader,
  /* in_NID_LRBG/ */
  kcg_int32 in_NID_LRBG,
  outC__37_RadioTrackTrainHeader__Se_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg *outC);

extern void _37_RadioTrackTrainHeader__Se_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  outC__37_RadioTrackTrainHeader__Se_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void _37_RadioTrackTrainHeader__Se_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  outC__37_RadioTrackTrainHeader__Se_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* __37_RadioTrackTrainHeader__Se_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** _37_RadioTrackTrainHeader__Se_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

