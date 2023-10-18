/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _RBC_New_RBC_Model_Pkg_H_
#define _RBC_New_RBC_Model_Pkg_H_

#include "kcg_types.h"
#include "ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion.h"
#include "RBC_Clock_Tick_RBC_Time_Pkg.h"
#include "RadioTrackTrainMsgQueue_RBC_Messaging_Pkg.h"
#include "RadioTrainTrackInputHandler_RBC_Messaging_Pkg.h"
#include "DataBusFactory_RBC_DataBus_Pkg.h"
#include "RBC__ProcessController_RBC_Model_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SessionManagement_T /* outSessionManagement/ */ outSessionManagement;
  CompressedRadioMessage_TM /* outRadioTrackTrainMessage/ */ outRadioTrackTrainMessage;
  Clock_T /* outClock/ */ outClock;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  RBC_Data_T_RBC_DataBus_Pkg /* dataBus/ */ dataBus;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RBC_Clock_Tick_RBC_Time_Pkg /* _L254=(RBC_Time_Pkg::RBC_Clock_Tick#1)/ */ Context_RBC_Clock_Tick_1;
  outC_RadioTrackTrainMsgQueue_RBC_Messaging_Pkg /* _L245=(RBC_Messaging_Pkg::RadioTrackTrainMsgQueue#1)/ */ Context_RadioTrackTrainMsgQueue_1;
  outC_RBC__ProcessController_RBC_Model_Pkg /* _L240=(RBC_Model_Pkg::RBC__ProcessController#1)/ */ Context_RBC__ProcessController_1;
  outC_RadioTrainTrackInputHandler_RBC_Messaging_Pkg /* _L239=(RBC_Messaging_Pkg::RadioTrainTrackInputHandler#1)/ */ Context_RadioTrainTrackInputHandler_1;
  outC_DataBusFactory_RBC_DataBus_Pkg /* _L218=(RBC_DataBus_Pkg::DataBusFactory#1)/ */ Context_DataBusFactory_1;
  outC_ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion /* _L256=(RBC_Model_Pkg::TrainTrackMsgConversion::ToOldRadioTrainTrackMsg#1)/ */ Context_ToOldRadioTrainTrackMsg_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_TrainTrack_Message_T_TM_radio_messages /* _L157/ */ _L157;
  CompressedRadioMessage_TM /* _L217/ */ _L217;
  RBC_Data_T_RBC_DataBus_Pkg /* _L218/ */ _L218;
  DynamicConfig_T /* _L220/ */ _L220;
  RBC_Data_T_RBC_DataBus_Pkg /* _L223/ */ _L223;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* _L239/ */ _L239;
  RBC_Data_T_RBC_DataBus_Pkg /* _L240/ */ _L240;
  CompressedRadioMessage_TM /* _L246/ */ _L246;
  RBC_Data_T_RBC_DataBus_Pkg /* _L245/ */ _L245;
  SessionManagement_T /* _L253/ */ _L253;
  Clock_T /* _L255/ */ _L255;
  RBC_Data_T_RBC_DataBus_Pkg /* _L254/ */ _L254;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* _L256/ */ _L256;
} outC_RBC_New_RBC_Model_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Model_Pkg::RBC_New/ */
extern void RBC_New_RBC_Model_Pkg(
  /* inDynamicConfigInit/ */
  DynamicConfig_T *inDynamicConfigInit,
  /* inRadioTrainTrackMsg/ */
  M_TrainTrack_Message_T_TM_radio_messages *inRadioTrainTrackMsg,
  /* inTriggeredRadioTrackTrainMessage/ */
  CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessage,
  outC_RBC_New_RBC_Model_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RBC_New_reset_RBC_Model_Pkg(outC_RBC_New_RBC_Model_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void RBC_New_init_RBC_Model_Pkg(outC_RBC_New_RBC_Model_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _RBC_New_RBC_Model_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RBC_New_RBC_Model_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

