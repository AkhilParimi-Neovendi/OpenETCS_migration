/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _RadioTrackTrainPacket058__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacke
#define _RadioTrackTrainPacket058__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacke

#include "kcg_types.h"
#include "RadioTrackTrainPacket058__Set_L_PACKET_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrain.h"
#include "RadioTrackTrainPacket058__Set_NID_PACKET_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTra.h"
#include "RadioTrackTrainPacket058__Set_T_CYCLOC_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrain.h"
#include "RTTP058_SIDAQ_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg.h"
#include "RTTP058_SNIDAQ_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg.h"
#include "RadioTrackTrainPacket058__Set_M_LOC_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPac.h"
#include "RadioTrackTrainPacket058__Set_D_CYCLOC_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrain.h"
#include "RadioTrackTrainPacket058__Set_Q_SCALE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainP.h"
#include "RadioTrackTrainPacket058__Set_Q_DIR_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPac.h"
#include "RadioTrackTrainPacket058__SetValid_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPack.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P058_trackside_int_T_TM /* outRadioTrackTrainPacket/ */ outRadioTrackTrainPacket;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RTTP058_SIDAQ_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg /* _L9=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RTTP058_SIDAQ#1)/ */ Context_RTTP058_SIDAQ_1;
  outC_RTTP058_SNIDAQ_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket058_Pkg /* _L8=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RTTP058_SNIDAQ#1)/ */ Context_RTTP058_SNIDAQ_1;
  outC_RadioTrackTrainPacket058__Set_M_LOC_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTra /* _L7=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Set_M_LOC#1)/ */ Context_RadioTrackTrainPacket058__Set_M_LOC_1;
  outC_RadioTrackTrainPacket058__Set_D_CYCLOC_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrack /* _L6=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Set_D_CYCLOC#1)/ */ Context_RadioTrackTrainPacket058__Set_D_CYCLOC_1;
  outC_RadioTrackTrainPacket058__Set_T_CYCLOC_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrack /* _L29=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Set_T_CYCLOC#1)/ */ Context_RadioTrackTrainPacket058__Set_T_CYCLOC_1;
  outC_RadioTrackTrainPacket058__Set_Q_SCALE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackT /* _L5=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Set_Q_SCALE#1)/ */ Context_RadioTrackTrainPacket058__Set_Q_SCALE_1;
  outC_RadioTrackTrainPacket058__Set_Q_DIR_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTra /* _L4=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Set_Q_DIR#1)/ */ Context_RadioTrackTrainPacket058__Set_Q_DIR_1;
  outC_RadioTrackTrainPacket058__Set_L_PACKET_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrack /* _L33=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Set_L_PACKET#1)/ */ Context_RadioTrackTrainPacket058__Set_L_PACKET_1;
  outC_RadioTrackTrainPacket058__Set_NID_PACKET_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTra /* _L31=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Set_NID_PACKET#1)/ */ Context_RadioTrackTrainPacket058__Set_NID_PACKET_1;
  outC_RadioTrackTrainPacket058__SetValid_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrai /* _L2=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetValid#1)/ */ Context_RadioTrackTrainPacket058__SetValid_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  L_PACKET /* l_packet_complete/ */ l_packet_complete;
  P058_trackside_int_T_TM /* _L1/ */ _L1;
  P058_trackside_int_T_TM /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  P058_trackside_int_T_TM /* _L4/ */ _L4;
  P058_trackside_int_T_TM /* _L5/ */ _L5;
  P058_trackside_int_T_TM /* _L6/ */ _L6;
  P058_trackside_int_T_TM /* _L7/ */ _L7;
  P058_trackside_int_T_TM /* _L8/ */ _L8;
  P058_trackside_int_T_TM /* _L9/ */ _L9;
  Q_DIR /* _L16/ */ _L16;
  Q_SCALE /* _L17/ */ _L17;
  D_CYCLOC /* _L18/ */ _L18;
  M_LOC /* _L19/ */ _L19;
  N_ITER /* _L20/ */ _L20;
  _65_array /* _L21/ */ _L21;
  P058_trackside_int_T_TM /* _L29/ */ _L29;
  T_CYCLOC /* _L30/ */ _L30;
  P058_trackside_int_T_TM /* _L31/ */ _L31;
  kcg_int32 /* _L32/ */ _L32;
  P058_trackside_int_T_TM /* _L33/ */ _L33;
  N_ITER /* _L35/ */ _L35;
  kcg_int32 /* _L36/ */ _L36;
  kcg_int32 /* _L37/ */ _L37;
  kcg_int32 /* _L38/ */ _L38;
  kcg_int32 /* _L39/ */ _L39;
  L_PACKET /* _L40/ */ _L40;
} outC_RadioTrackTrainPacket058__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainP;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Create/ */
extern void RadioTrackTrainPacket058__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket(
  /* in_Q_DIR/ */
  Q_DIR in_Q_DIR,
  /* in_Q_SCALE/ */
  Q_SCALE in_Q_SCALE,
  /* in_T_CYCLOC/ */
  T_CYCLOC in_T_CYCLOC,
  /* in_D_CYCLOC/ */
  D_CYCLOC in_D_CYCLOC,
  /* in_M_LOC/ */
  M_LOC in_M_LOC,
  /* inNumberOfIncrementalDistancesAndQualifiers/ */
  N_ITER inNumberOfIncrementalDistancesAndQualifiers,
  /* inIncrementalDistancesAndQualifiers/ */
  _65_array *inIncrementalDistancesAndQualifiers,
  outC_RadioTrackTrainPacket058__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainP *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RadioTrackTrainPacket058__Create_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrain(
  outC_RadioTrackTrainPacket058__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainP *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void RadioTrackTrainPacket058__Create_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainP(
  outC_RadioTrackTrainPacket058__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainP *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _RadioTrackTrainPacket058__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacke */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrackTrainPacket058__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

