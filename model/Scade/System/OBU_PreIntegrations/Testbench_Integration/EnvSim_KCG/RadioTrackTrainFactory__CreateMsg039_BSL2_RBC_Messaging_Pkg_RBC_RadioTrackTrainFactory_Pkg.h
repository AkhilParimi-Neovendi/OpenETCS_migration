/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _RadioTrackTrainFactory__CreateMsg039_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg_H_
#define _RadioTrackTrainFactory__CreateMsg039_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg_H_

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
  outC_SEND_MergeRadioPackets_RBC_SendMergeRadio_Pkg /* _L105=(RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets#2)/ */ Context_SEND_MergeRadioPackets_2;
  outC_RadioTrackTrainHeader__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* _L27=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create#1)/ */ Context_RadioTrackTrainHeader__Create_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Radio_TrackTrain_Header_T_TM /* _L27/ */ _L27;
  T_TRAIN /* _L30/ */ _L30;
  NID_EM /* _L31/ */ _L31;
  Q_SCALE /* _L32/ */ _L32;
  T_TRAIN /* _L33/ */ _L33;
  D_REF /* _L34/ */ _L34;
  Q_DIR /* _L35/ */ _L35;
  D_EMERGENCYSTOP /* _L36/ */ _L36;
  P015_trackside_int_T_TM /* _L96/ */ _L96;
  P042_trackside_int_T_TM /* _L95/ */ _L95;
  P005_trackside_int_T_TM /* _L94/ */ _L94;
  P003V1_trackside_int_T_TM_baseline2 /* _L93/ */ _L93;
  P021_trackside_int_T_TM /* _L92/ */ _L92;
  P058_trackside_int_T_TM /* _L91/ */ _L91;
  P027V1_trackside_int_T_TM_baseline2 /* _L90/ */ _L90;
  P057_trackside_int_T_TM /* _L88/ */ _L88;
  T_TRAIN /* _L98/ */ _L98;
  NID_LRBG /* _L100/ */ _L100;
  NID_MESSAGE /* _L101/ */ _L101;
  M_ACK /* _L102/ */ _L102;
  M_VERSION /* _L103/ */ _L103;
  CompressedRadioMessage_TM /* _L105/ */ _L105;
} outC_RadioTrackTrainFactory__CreateMsg039_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg039_BSL2/ */
extern void RadioTrackTrainFactory__CreateMsg039_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
  /* in_T_TRAIN/ */
  T_TRAIN in_T_TRAIN,
  /* in_NID_LRBG/ */
  NID_LRBG in_NID_LRBG,
  outC_RadioTrackTrainFactory__CreateMsg039_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RadioTrackTrainFactory__CreateMsg039_BSL2_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
  outC_RadioTrackTrainFactory__CreateMsg039_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void RadioTrackTrainFactory__CreateMsg039_BSL2_init_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
  outC_RadioTrackTrainFactory__CreateMsg039_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _RadioTrackTrainFactory__CreateMsg039_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrackTrainFactory__CreateMsg039_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

