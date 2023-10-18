/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _RadioTrackTrainPacket058__Set_Q_SCALE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrain
#define _RadioTrackTrainPacket058__Set_Q_SCALE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrain

#include "kcg_types.h"
#include "CAST_Q_SCALE_to_int_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P058_trackside_int_T_TM /* outRadioTrackTrainPacket/ */ outRadioTrackTrainPacket;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_Q_SCALE_to_int_TM_conversions /* _L3=(TM_conversions::CAST_Q_SCALE_to_int#1)/ */ Context_CAST_Q_SCALE_to_int_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P058_trackside_int_T_TM /* _L1/ */ _L1;
  Q_SCALE /* _L2/ */ _L2;
  kcg_int64 /* _L3/ */ _L3;
  P058_trackside_int_T_TM /* _L4/ */ _L4;
} outC_RadioTrackTrainPacket058__Set_Q_SCALE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackT;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Set_Q_SCALE/ */
extern void RadioTrackTrainPacket058__Set_Q_SCALE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainP(
  /* inRadioTrackTrainPacket/ */
  P058_trackside_int_T_TM *inRadioTrackTrainPacket,
  /* in_Q_SCALE/ */
  Q_SCALE in_Q_SCALE,
  outC_RadioTrackTrainPacket058__Set_Q_SCALE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackT *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RadioTrackTrainPacket058__Set_Q_SCALE_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrack(
  outC_RadioTrackTrainPacket058__Set_Q_SCALE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackT *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void RadioTrackTrainPacket058__Set_Q_SCALE_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackT(
  outC_RadioTrackTrainPacket058__Set_Q_SCALE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackT *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _RadioTrackTrainPacket058__Set_Q_SCALE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrain */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrackTrainPacket058__Set_Q_SCALE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainP.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

