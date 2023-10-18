/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_H_
#define _RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_H_

#include "kcg_types.h"
#include "CAST_Int_to_T_TRAIN_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_TRAIN /* out_T_TRAIN/ */ out_T_TRAIN;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_Int_to_T_TRAIN_TM_conversions /* _L3=(TM_conversions::CAST_Int_to_T_TRAIN#1)/ */ Context_CAST_Int_to_T_TRAIN_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Radio_TrackTrain_Header_T_TM /* _L1/ */ _L1;
  kcg_int64 /* _L2/ */ _L2;
  T_TRAIN /* _L3/ */ _L3;
} outC_RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_T_TRAIN/ */
extern void RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  /* inRadioTrackTrainHeader/ */
  Radio_TrackTrain_Header_T_TM *inRadioTrackTrainHeader,
  outC_RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg *outC);

extern void RadioTrackTrainHeader__Get_T_TRAIN_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  outC_RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void RadioTrackTrainHeader__Get_T_TRAIN_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  outC_RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

