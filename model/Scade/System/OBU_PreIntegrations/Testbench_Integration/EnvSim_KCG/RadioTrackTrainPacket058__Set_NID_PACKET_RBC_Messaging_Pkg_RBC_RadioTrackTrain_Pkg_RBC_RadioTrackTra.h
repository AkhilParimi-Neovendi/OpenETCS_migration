/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _RadioTrackTrainPacket058__Set_NID_PACKET_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTr
#define _RadioTrackTrainPacket058__Set_NID_PACKET_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTr

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P058_trackside_int_T_TM /* outRadioTrackTrainPacket/ */ outRadioTrackTrainPacket;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P058_trackside_int_T_TM /* _L1/ */ _L1;
  NID_PACKET /* _L2/ */ _L2;
  P058_trackside_int_T_TM /* _L3/ */ _L3;
} outC_RadioTrackTrainPacket058__Set_NID_PACKET_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTra;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Set_NID_PACKET/ */
extern void RadioTrackTrainPacket058__Set_NID_PACKET_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTra(
  /* inRadioTrackTrainPacket/ */
  P058_trackside_int_T_TM *inRadioTrackTrainPacket,
  /* in_NID_PACKET/ */
  NID_PACKET in_NID_PACKET,
  outC_RadioTrackTrainPacket058__Set_NID_PACKET_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTra *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RadioTrackTrainPacket058__Set_NID_PACKET_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTr(
  outC_RadioTrackTrainPacket058__Set_NID_PACKET_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTra *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void RadioTrackTrainPacket058__Set_NID_PACKET_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTra(
  outC_RadioTrackTrainPacket058__Set_NID_PACKET_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTra *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _RadioTrackTrainPacket058__Set_NID_PACKET_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTr */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrackTrainPacket058__Set_NID_PACKET_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTra.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

