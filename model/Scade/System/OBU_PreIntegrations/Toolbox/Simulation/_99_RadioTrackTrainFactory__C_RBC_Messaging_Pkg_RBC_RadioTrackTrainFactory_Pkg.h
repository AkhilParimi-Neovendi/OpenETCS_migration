/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef __99_RadioTrackTrainFactory__C_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg_H_
#define __99_RadioTrackTrainFactory__C_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg_H_

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
  outC_SEND_MergeRadioPackets_RBC_SendMergeRadio_Pkg /* _L102=(RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets#2)/ */ Context_SEND_MergeRadioPackets_2;
  outC_RadioTrackTrainHeader__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* _L27=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create#1)/ */ Context_RadioTrackTrainHeader__Create_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  NID_MESSAGE /* _L16/ */ _L16;
  Radio_TrackTrain_Header_T_TM /* _L27/ */ _L27;
  NID_EM /* _L36/ */ _L36;
  Q_SCALE /* _L37/ */ _L37;
  T_TRAIN /* _L38/ */ _L38;
  D_REF /* _L39/ */ _L39;
  Q_DIR /* _L40/ */ _L40;
  D_EMERGENCYSTOP /* _L41/ */ _L41;
  M_VERSION /* _L42/ */ _L42;
  P015_trackside_int_T_TM /* _L96/ */ _L96;
  P042_trackside_int_T_TM /* _L95/ */ _L95;
  P005_trackside_int_T_TM /* _L94/ */ _L94;
  P003V1_trackside_int_T_TM_baseline2 /* _L93/ */ _L93;
  P058_trackside_int_T_TM /* _L92/ */ _L92;
  P027V1_trackside_int_T_TM_baseline2 /* _L91/ */ _L91;
  P021_trackside_int_T_TM /* _L90/ */ _L90;
  P057_trackside_int_T_TM /* _L89/ */ _L89;
  NID_LRBG /* _L97/ */ _L97;
  T_TRAIN /* _L98/ */ _L98;
  M_ACK /* _L99/ */ _L99;
  T_TRAIN /* _L100/ */ _L100;
  CompressedRadioMessage_TM /* _L102/ */ _L102;
} outC__99_RadioTrackTrainFactory__C_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg008_BSL2/ */
extern void _99_RadioTrackTrainFactory__C_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
  /* in_T_TRAIN/ */
  T_TRAIN in_T_TRAIN,
  /* in_M_ACK/ */
  M_ACK in_M_ACK,
  /* in_NID_LRBG/ */
  NID_LRBG in_NID_LRBG,
  /* in_T_TRAIN_Ref/ */
  T_TRAIN in_T_TRAIN_Ref,
  outC__99_RadioTrackTrainFactory__C_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void _99_RadioTrackTrainFactory__C_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
  outC__99_RadioTrackTrainFactory__C_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void _99_RadioTrackTrainFactory__C_init_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
  outC__99_RadioTrackTrainFactory__C_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* __99_RadioTrackTrainFactory__C_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** _99_RadioTrackTrainFactory__C_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

