/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _RadioTrackTrainHeader__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_H_
#define _RadioTrackTrainHeader__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_H_

#include "kcg_types.h"
#include "RadioTrackTrainHeader__Set_M_VERSION_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "RadioTrackTrainHeader__Set_D_EMERGENCYSTOP_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "RadioTrackTrainHeader__Set_Q_DIR_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "RadioTrackTrainHeader__Set_D_REF_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "RadioTrackTrainHeader__Set_T_TRAIN_Sh_Req_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "RadioTrackTrainHeader__Set_Q_SCALE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "RadioTrackTrainHeader__Set_NID_EM_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "RadioTrackTrainHeader__Set_T_TRAIN_Ref_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "RadioTrackTrainHeader__Set_NID_LRBG_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "RadioTrackTrainHeader__Set_M_ACK_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "RadioTrackTrainHeader__Set_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "RadioTrackTrainHeader__Set_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Radio_TrackTrain_Header_T_TM /* outRadioTrackTrainHeader/ */ outRadioTrackTrainHeader;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RadioTrackTrainHeader__Set_M_VERSION_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* _L30=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_M_VERSION#1)/ */ Context_RadioTrackTrainHeader__Set_M_VERSION_1;
  outC_RadioTrackTrainHeader__Set_D_EMERGENCYSTOP_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* _L29=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_D_EMERGENCYSTOP#1)/ */ Context_RadioTrackTrainHeader__Set_D_EMERGENCYSTOP_1;
  outC_RadioTrackTrainHeader__Set_Q_DIR_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* _L26=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_Q_DIR#1)/ */ Context_RadioTrackTrainHeader__Set_Q_DIR_1;
  outC_RadioTrackTrainHeader__Set_D_REF_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* _L23=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_D_REF#1)/ */ Context_RadioTrackTrainHeader__Set_D_REF_1;
  outC_RadioTrackTrainHeader__Set_T_TRAIN_Sh_Req_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* _L22=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_T_TRAIN_Sh_Req#1)/ */ Context_RadioTrackTrainHeader__Set_T_TRAIN_Sh_Req_1;
  outC_RadioTrackTrainHeader__Set_Q_SCALE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* _L21=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_Q_SCALE#1)/ */ Context_RadioTrackTrainHeader__Set_Q_SCALE_1;
  outC_RadioTrackTrainHeader__Set_NID_EM_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* _L19=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_NID_EM#1)/ */ Context_RadioTrackTrainHeader__Set_NID_EM_1;
  outC_RadioTrackTrainHeader__Set_T_TRAIN_Ref_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* _L18=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_T_TRAIN_Ref#1)/ */ Context_RadioTrackTrainHeader__Set_T_TRAIN_Ref_1;
  outC_RadioTrackTrainHeader__Set_NID_LRBG_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* _L17=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_NID_LRBG#1)/ */ Context_RadioTrackTrainHeader__Set_NID_LRBG_1;
  outC_RadioTrackTrainHeader__Set_M_ACK_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* _L16=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_M_ACK#1)/ */ Context_RadioTrackTrainHeader__Set_M_ACK_1;
  outC_RadioTrackTrainHeader__Set_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* _L15=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_T_TRAIN#1)/ */ Context_RadioTrackTrainHeader__Set_T_TRAIN_1;
  outC_RadioTrackTrainHeader__Set_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* _L14=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_NID_MESSAGE#1)/ */ Context_RadioTrackTrainHeader__Set_NID_MESSAGE_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  NID_MESSAGE /* _L1/ */ _L1;
  T_TRAIN /* _L2/ */ _L2;
  M_ACK /* _L3/ */ _L3;
  NID_LRBG /* _L4/ */ _L4;
  T_TRAIN /* _L5/ */ _L5;
  NID_EM /* _L6/ */ _L6;
  Q_SCALE /* _L7/ */ _L7;
  T_TRAIN /* _L8/ */ _L8;
  D_REF /* _L9/ */ _L9;
  Q_DIR /* _L10/ */ _L10;
  D_EMERGENCYSTOP /* _L11/ */ _L11;
  M_VERSION /* _L12/ */ _L12;
  Radio_TrackTrain_Header_T_TM /* _L14/ */ _L14;
  Radio_TrackTrain_Header_T_TM /* _L15/ */ _L15;
  Radio_TrackTrain_Header_T_TM /* _L16/ */ _L16;
  Radio_TrackTrain_Header_T_TM /* _L17/ */ _L17;
  Radio_TrackTrain_Header_T_TM /* _L18/ */ _L18;
  Radio_TrackTrain_Header_T_TM /* _L19/ */ _L19;
  Radio_TrackTrain_Header_T_TM /* _L21/ */ _L21;
  Radio_TrackTrain_Header_T_TM /* _L22/ */ _L22;
  Radio_TrackTrain_Header_T_TM /* _L23/ */ _L23;
  Radio_TrackTrain_Header_T_TM /* _L26/ */ _L26;
  Radio_TrackTrain_Header_T_TM /* _L29/ */ _L29;
  Radio_TrackTrain_Header_T_TM /* _L30/ */ _L30;
  Radio_TrackTrain_Header_T_TM /* _L41/ */ _L41;
} outC_RadioTrackTrainHeader__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create/ */
extern void RadioTrackTrainHeader__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  /* in_NID_MESSAGE/ */
  NID_MESSAGE in_NID_MESSAGE,
  /* in_T_TRAIN/ */
  T_TRAIN in_T_TRAIN,
  /* in_M_ACK/ */
  M_ACK in_M_ACK,
  /* in_NID_LRBG/ */
  NID_LRBG in_NID_LRBG,
  /* in_T_TRAIN_Ref/ */
  T_TRAIN in_T_TRAIN_Ref,
  /* in_NID_EM/ */
  NID_EM in_NID_EM,
  /* in_Q_SCALE/ */
  Q_SCALE in_Q_SCALE,
  /* in_T_TRAIN_Sh/ */
  T_TRAIN in_T_TRAIN_Sh,
  /* in_D_REF/ */
  D_REF in_D_REF,
  /* in_Q_DIR/ */
  Q_DIR in_Q_DIR,
  /* in_D_EMERGENCYSTOP/ */
  D_EMERGENCYSTOP in_D_EMERGENCYSTOP,
  /* in_M_VERSION/ */
  M_VERSION in_M_VERSION,
  outC_RadioTrackTrainHeader__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg *outC);

extern void RadioTrackTrainHeader__Create_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  outC_RadioTrackTrainHeader__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void RadioTrackTrainHeader__Create_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  outC_RadioTrackTrainHeader__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _RadioTrackTrainHeader__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrackTrainHeader__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

