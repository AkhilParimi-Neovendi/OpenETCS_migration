/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _sendValidTrainDataRBC_trainData_pkg_H_
#define _sendValidTrainDataRBC_trainData_pkg_H_

#include "kcg_types.h"
#include "packet_11_trainData_pkg.h"
#include "headerMsg129_ng_trainData_pkg.h"
#include "Send_M129_TM_radio_messages.h"
#include "nextGen_P01_radioOutput_Pkg.h"
#include "nextGen_P00_radioOutput_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  trainDataStatus_T_trainData_Types_pkg /* updatedStatus/ */ updatedStatus;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* outMessageBus/ */ outMessageBus;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Send_M129_TM_radio_messages /* _L24=(TM_radio_messages::Send_M129#1)/ */ Context_Send_M129_1;
  outC_packet_11_trainData_pkg /* _L37=(trainData_pkg::packet_11#1)/ */ Context_packet_11_1;
  outC_nextGen_P01_radioOutput_Pkg /* _L34=(radioOutput_Pkg::nextGen_P01#1)/ */ Context_nextGen_P01_1;
  outC_nextGen_P00_radioOutput_Pkg /* _L33=(radioOutput_Pkg::nextGen_P00#1)/ */ Context_nextGen_P00_1;
  outC_headerMsg129_ng_trainData_pkg /* _L28=(trainData_pkg::headerMsg129_ng#1)/ */ Context_headerMsg129_ng_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  T_TRAIN /* t_trainUsed/ */ t_trainUsed;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L24/ */ _L24;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L25/ */ _L25;
  T_TRAIN /* _L26/ */ _L26;
  M_129_T_TM_radio_messages /* _L28/ */ _L28;
  NID_ENGINE /* _L29/ */ _L29;
  T_TRAIN /* _L30/ */ _L30;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* _L31/ */ _L31;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* _L32/ */ _L32;
  P000_TM_TrainToTrack /* _L33/ */ _L33;
  P001_TM_TrainToTrack /* _L34/ */ _L34;
  M_VERSION /* _L35/ */ _L35;
  trainData_T_TIU_Types_Pkg /* _L36/ */ _L36;
  P011_TM_TrainToTrack /* _L37/ */ _L37;
  kcg_int32 /* _L38/ */ _L38;
  trainDataStatus_T_trainData_Types_pkg /* _L45/ */ _L45;
  trainDataStatus_T_trainData_Types_pkg /* _L44/ */ _L44;
  T_TRAIN /* _L43/ */ _L43;
  T_TRAIN /* _L42/ */ _L42;
  trainDataStatus_T_trainData_Types_pkg /* _L41/ */ _L41;
  kcg_bool /* _L40/ */ _L40;
  trainDataStatus_T_trainData_Types_pkg /* _L39/ */ _L39;
} outC_sendValidTrainDataRBC_trainData_pkg;

/* ===========  node initialization and cycle functions  =========== */
/* trainData_pkg::sendValidTrainDataRBC/ */
extern void sendValidTrainDataRBC_trainData_pkg(
  /* trainData/ */
  trainData_T_TIU_Types_Pkg *trainData,
  /* evc_t_train/ */
  T_TRAIN evc_t_train,
  /* nidEngine/ */
  NID_ENGINE nidEngine,
  /* actualStatus/ */
  trainDataStatus_T_trainData_Types_pkg *actualStatus,
  /* p0_positionReport/ */
  PT0_PositionReport_T_Packet_TrainTypes_Pkg *p0_positionReport,
  /* p1_positionReport/ */
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *p1_positionReport,
  /* MessageBus/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* inVersion/ */
  M_VERSION inVersion,
  outC_sendValidTrainDataRBC_trainData_pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void sendValidTrainDataRBC_reset_trainData_pkg(
  outC_sendValidTrainDataRBC_trainData_pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void sendValidTrainDataRBC_init_trainData_pkg(
  outC_sendValidTrainDataRBC_trainData_pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_Send_M129_TM_radio_messages Context_Send_M129_1;
} SV_sendValidTrainDataRBC_trainData_pkg;

extern void kcg_save_SV_sendValidTrainDataRBC_trainData_pkg(
  SV_sendValidTrainDataRBC_trainData_pkg *SV,
  outC_sendValidTrainDataRBC_trainData_pkg *outC);
extern void kcg_load_SV_sendValidTrainDataRBC_trainData_pkg(
  outC_sendValidTrainDataRBC_trainData_pkg *outC,
  SV_sendValidTrainDataRBC_trainData_pkg *SV);



#endif /* _sendValidTrainDataRBC_trainData_pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** sendValidTrainDataRBC_trainData_pkg.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

