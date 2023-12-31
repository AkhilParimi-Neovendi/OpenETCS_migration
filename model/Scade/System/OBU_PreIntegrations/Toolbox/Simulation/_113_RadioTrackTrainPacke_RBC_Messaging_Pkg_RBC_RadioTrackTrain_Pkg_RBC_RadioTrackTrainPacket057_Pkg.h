/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef __113_RadioTrackTrainPacke_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket057_Pkg_H_
#define __113_RadioTrackTrainPacke_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket057_Pkg_H_

#include "kcg_types.h"
#include "_112_RadioTrackTrainPacke_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket057_Pkg.h"
#include "_111_RadioTrackTrainPacke_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket057_Pkg.h"
#include "_110_RadioTrackTrainPacke_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket057_Pkg.h"
#include "_109_RadioTrackTrainPacke_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket057_Pkg.h"
#include "_108_RadioTrackTrainPacke_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket057_Pkg.h"
#include "_107_RadioTrackTrainPacke_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket057_Pkg.h"
#include "RadioTrackTrainPacket057__RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket057_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P057_trackside_int_T_TM /* outRadioTrackTrainPacket/ */ outRadioTrackTrainPacket;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC__109_RadioTrackTrainPacke_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket057_Pkg /* _L11=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_T_CYCRQST#1)/ */ Context_RadioTrackTrainPacket057__Set_T_CYCRQST_1;
  outC__108_RadioTrackTrainPacke_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket057_Pkg /* _L10=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_T_TIMEOUTRQST#1)/ */ _1_Context_RadioTrackTrainPacket057__Set_T_TIMEOUTRQST_1;
  outC__107_RadioTrackTrainPacke_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket057_Pkg /* _L7=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_T_MAR#1)/ */ _2_Context_RadioTrackTrainPacket057__Set_T_MAR_1;
  outC__110_RadioTrackTrainPacke_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket057_Pkg /* _L13=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_Q_DIR#1)/ */ _3_Context_RadioTrackTrainPacket057__Set_Q_DIR_1;
  outC__112_RadioTrackTrainPacke_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket057_Pkg /* _L17=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_L_PACKET#1)/ */ _4_Context_RadioTrackTrainPacket057__Set_L_PACKET_1;
  outC__111_RadioTrackTrainPacke_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket057_Pkg /* _L15=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_NID_PACKET#1)/ */ _5_Context_RadioTrackTrainPacket057__Set_NID_PACKET_1;
  outC_RadioTrackTrainPacket057__RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket057_Pkg /* _L6=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__SetValid#1)/ */ _6_Context_RadioTrackTrainPacket057__SetValid_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  T_MAR /* _L2/ */ _L2;
  T_TIMEOUTRQST /* _L3/ */ _L3;
  T_CYCRQST /* _L4/ */ _L4;
  P057_trackside_int_T_TM /* _L5/ */ _L5;
  P057_trackside_int_T_TM /* _L6/ */ _L6;
  P057_trackside_int_T_TM /* _L7/ */ _L7;
  P057_trackside_int_T_TM /* _L10/ */ _L10;
  P057_trackside_int_T_TM /* _L11/ */ _L11;
  kcg_bool /* _L12/ */ _L12;
  P057_trackside_int_T_TM /* _L13/ */ _L13;
  Q_DIR /* _L14/ */ _L14;
  P057_trackside_int_T_TM /* _L15/ */ _L15;
  kcg_int32 /* _L16/ */ _L16;
  P057_trackside_int_T_TM /* _L17/ */ _L17;
  kcg_int32 /* _L18/ */ _L18;
} outC__113_RadioTrackTrainPacke_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket057_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Create/ */
extern void _113_RadioTrackTrainPacke_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket057_Pkg(
  /* in_Q_DIR/ */
  Q_DIR in_Q_DIR,
  /* in_T_MAR/ */
  T_MAR in_T_MAR,
  /* in_T_TIMEOUTRQST/ */
  T_TIMEOUTRQST in_T_TIMEOUTRQST,
  /* in_T_CYCRQST/ */
  T_CYCRQST in_T_CYCRQST,
  outC__113_RadioTrackTrainPacke_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket057_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void _113_RadioTrackTrainPacke_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket057_Pkg(
  outC__113_RadioTrackTrainPacke_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket057_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void _113_RadioTrackTrainPacke_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket057_Pkg(
  outC__113_RadioTrackTrainPacke_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket057_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* __113_RadioTrackTrainPacke_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket057_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** _113_RadioTrackTrainPacke_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket057_Pkg.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

