/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _RadioTrackTrainFactory__CreateMsg006_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg_H_
#define _RadioTrackTrainFactory__CreateMsg006_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg_H_

#include "kcg_types.h"
#include "SEND_MergeRadioPackets_RBC_SendMergeRadio_Pkg.h"
#include "RadioTrackTrainHeader__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedRadioMessage_TM /* outRadioTrackTrainMessage/ */ outRadioTrackTrainMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SEND_MergeRadioPackets_RBC_SendMergeRadio_Pkg /* _L138=(RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets#1)/ */ Context_SEND_MergeRadioPackets_1;
  outC_RadioTrackTrainHeader__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* _L100=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create#1)/ */ Context_RadioTrackTrainHeader__Create_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  D_EMERGENCYSTOP /* _L104/ */ _L104;
  Q_SCALE /* _L101/ */ _L101;
  Radio_TrackTrain_Header_T_TM /* _L100/ */ _L100;
  Q_DIR /* _L99/ */ _L99;
  D_REF /* _L96/ */ _L96;
  NID_EM /* _L95/ */ _L95;
  T_TRAIN /* _L94/ */ _L94;
  M_VERSION /* _L113/ */ _L113;
  NID_MESSAGE /* _L114/ */ _L114;
  M_ACK /* _L126/ */ _L126;
  NID_LRBG /* _L127/ */ _L127;
  T_TRAIN /* _L108/ */ _L108;
  T_TRAIN /* _L129/ */ _L129;
  P015_trackside_int_T_TM /* _L130/ */ _L130;
  P021_trackside_int_T_TM /* _L131/ */ _L131;
  P027V1_trackside_int_T_TM_baseline2 /* _L132/ */ _L132;
  P003V1_trackside_int_T_TM_baseline2 /* _L133/ */ _L133;
  P005_trackside_int_T_TM /* _L134/ */ _L134;
  P042_trackside_int_T_TM /* _L135/ */ _L135;
  P057_trackside_int_T_TM /* _L136/ */ _L136;
  P058_trackside_int_T_TM /* _L137/ */ _L137;
  CompressedRadioMessage_TM /* _L138/ */ _L138;
} outC_RadioTrackTrainFactory__CreateMsg006_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg006_BSL2/ */
extern void RadioTrackTrainFactory__CreateMsg006_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
  /* in_T_TRAIN/ */
  T_TRAIN in_T_TRAIN,
  /* in_M_ACK/ */
  M_ACK in_M_ACK,
  /* in_NID_LRBG/ */
  NID_LRBG in_NID_LRBG,
  outC_RadioTrackTrainFactory__CreateMsg006_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg *outC);

extern void RadioTrackTrainFactory__CreateMsg006_BSL2_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
  outC_RadioTrackTrainFactory__CreateMsg006_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void RadioTrackTrainFactory__CreateMsg006_BSL2_init_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
  outC_RadioTrackTrainFactory__CreateMsg006_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _RadioTrackTrainFactory__CreateMsg006_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrackTrainFactory__CreateMsg006_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

