/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _RBC__PingTrain_RBC_Model_Pkg_H_
#define _RBC__PingTrain_RBC_Model_Pkg_H_

#include "kcg_types.h"
#include "RadioTrackTrainMessage__IsValid_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "DynamicConfig__GetNationalParams_RBC_Config_Pkg.h"
#include "NationalParams__Get_T_NVCONTACT_RBC_Config_Pkg.h"
#include "PosData__Get_M_LEVEL_RBC_Session_Pkg.h"
#include "RadioTrackTrainFactory__CreateMsg024_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg.h"
#include "RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "RadioTrackTrainMessageQueueEntry__Create_RBC_Collections_Pkg.h"
#include "RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg.h"
#include "RadioTrackTrainMessageQueue__GetRemainingCapacity_RBC_Collections_Pkg.h"
#include "Clock__GetSeconds_RBC_Time_Pkg.h"
#include "PosData__Get_NID_LRBG_RBC_Session_Pkg.h"
#include "SessionManagement__GetPosData_RBC_Session_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  RBC_Data_T_RBC_DataBus_Pkg /* outDataBus/ */ outDataBus;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* outRadioTrainTrackMessage/ */ outRadioTrainTrackMessage;
  CompressedRadioMessage_TM /* outTriggeredRadioTrackTrainMessage/ */ outTriggeredRadioTrackTrainMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  T_TRAIN /* lastRadioTrackTrainMessageWasSentTimestamp/ */ lastRadioTrackTrainMessageWasSentTimestamp;
  kcg_bool /* Level_2_or_3/ */ Level_2_or_3;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg /* IfBlock1:then:_L14=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut#2)/ */ Context_RadioTrackTrainMessageQueue__TryPut_2;
  outC_RadioTrackTrainMessageQueueEntry__Create_RBC_Collections_Pkg /* IfBlock1:then:_L15=(RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__Create#2)/ */ Context_RadioTrackTrainMessageQueueEntry__Create_2;
  outC_RadioTrackTrainFactory__CreateMsg024_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg /* IfBlock1:then:_L1=(RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg024_BSL2#1)/ */ Context_RadioTrackTrainFactory__CreateMsg024_BSL2_1;
  outC_PosData__Get_M_LEVEL_RBC_Session_Pkg /* IfBlock1:then:_L79=(RBC_Session_Pkg::PosData__Get_M_LEVEL#8)/ */ Context_PosData__Get_M_LEVEL_8;
  outC_SessionManagement__GetPosData_RBC_Session_Pkg /* IfBlock1:then:_L80=(RBC_Session_Pkg::SessionManagement__GetPosData#11)/ */ Context_SessionManagement__GetPosData_11;
  outC_PosData__Get_NID_LRBG_RBC_Session_Pkg /* IfBlock1:then:_L20=(RBC_Session_Pkg::PosData__Get_NID_LRBG#3)/ */ Context_PosData__Get_NID_LRBG_3;
  outC_SessionManagement__GetPosData_RBC_Session_Pkg /* IfBlock1:then:_L21=(RBC_Session_Pkg::SessionManagement__GetPosData#3)/ */ Context_SessionManagement__GetPosData_3;
  outC_RadioTrackTrainMessageQueue__GetRemainingCapacity_RBC_Collections_Pkg /* _L74=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity#1)/ */ Context_RadioTrackTrainMessageQueue__GetRemainingCapacity_1;
  outC_Clock__GetSeconds_RBC_Time_Pkg /* _L124=(RBC_Time_Pkg::Clock__GetSeconds#1)/ */ Context_Clock__GetSeconds_1;
  outC_RadioTrackTrainMessage__IsValid_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* _L115=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__IsValid#2)/ */ Context_RadioTrackTrainMessage__IsValid_2;
  outC_RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* _L112=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_T_TRAIN#2)/ */ Context_RadioTrackTrainHeader__Get_T_TRAIN_2;
  outC_RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg /* _L114=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#2)/ */ Context_RadioTrackTrainMessage__GetHeader_2;
  outC_NationalParams__Get_T_NVCONTACT_RBC_Config_Pkg /* _L75=(RBC_Config_Pkg::NationalParams__Get_T_NVCONTACT#1)/ */ Context_NationalParams__Get_T_NVCONTACT_1;
  outC_DynamicConfig__GetNationalParams_RBC_Config_Pkg /* _L76=(RBC_Config_Pkg::DynamicConfig__GetNationalParams#1)/ */ Context_DynamicConfig__GetNationalParams_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* IfBlock1:then:_L97/ */ _L97_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L96/ */ _L96_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L95/ */ _L95_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L94/ */ _L94_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L93/ */ _L93_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L87/ */ _L87_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L88/ */ _L88_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L89/ */ _L89_then_IfBlock1;
  M_LEVEL /* IfBlock1:then:_L90/ */ _L90_then_IfBlock1;
  M_LEVEL /* IfBlock1:then:_L91/ */ _L91_then_IfBlock1;
  M_LEVEL /* IfBlock1:then:_L79/ */ _L79_then_IfBlock1;
  PosData_T /* IfBlock1:then:_L80/ */ _L80_then_IfBlock1;
  P042_trackside_int_T_TM /* IfBlock1:then:_L34/ */ _L34_then_IfBlock1;
  P042_trackside_int_T_TM /* IfBlock1:then:_L33/ */ _L33_then_IfBlock1;
  P042_trackside_int_T_TM /* IfBlock1:then:_L31/ */ _L31_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L30/ */ _L30_then_IfBlock1;
  RadioTrackTrainMessageQueue_T /* IfBlock1:then:_L28/ */ _L28_then_IfBlock1;
  RBC_Data_T_RBC_DataBus_Pkg /* IfBlock1:then:_L29/ */ _L29_then_IfBlock1;
  SessionManagement_T /* IfBlock1:then:_L24/ */ _L24_then_IfBlock1;
  RBC_Data_T_RBC_DataBus_Pkg /* IfBlock1:then:_L25/ */ _L25_then_IfBlock1;
  NID_LRBG /* IfBlock1:then:_L20/ */ _L20_then_IfBlock1;
  PosData_T /* IfBlock1:then:_L21/ */ _L21_then_IfBlock1;
  RadioTrackTrainMessageQueue_T /* IfBlock1:then:_L14/ */ _L14_then_IfBlock1;
  RadioTrackTrainMessageQueueEntry_T /* IfBlock1:then:_L15/ */ _L15_then_IfBlock1;
  M_ACK /* IfBlock1:then:_L6/ */ _L6_then_IfBlock1;
  T_TRAIN /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  CompressedRadioMessage_TM /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  RBC_Data_T_RBC_DataBus_Pkg /* IfBlock1:else:_L3/ */ _L3_else_IfBlock1;
  RadioTrackTrainMessageQueue_T /* IfBlock1:else:_L4/ */ _L4_else_IfBlock1;
  T_NVCONTACT /* rbcContactTime/ */ rbcContactTime;
  kcg_int64 /* remainingCapacity/ */ remainingCapacity;
  T_TRAIN /* rbcTimestamp/ */ rbcTimestamp;
  kcg_bool /* trigger/ */ trigger;
  RadioTrackTrainMessageQueue_T /* messageQueue/ */ messageQueue;
  NationalParams_T /* _L76/ */ _L76;
  T_NVCONTACT /* _L75/ */ _L75;
  kcg_int64 /* _L74/ */ _L74;
  kcg_int64 /* _L111/ */ _L111;
  T_TRAIN /* _L110/ */ _L110;
  T_NVCONTACT /* _L109/ */ _L109;
  T_NVCONTACT /* _L108/ */ _L108;
  kcg_int64 /* _L107/ */ _L107;
  kcg_bool /* _L106/ */ _L106;
  T_NVCONTACT /* _L105/ */ _L105;
  T_NVCONTACT /* _L104/ */ _L104;
  kcg_int64 /* _L103/ */ _L103;
  kcg_bool /* _L102/ */ _L102;
  kcg_int64 /* _L101/ */ _L101;
  kcg_bool /* _L100/ */ _L100;
  kcg_bool /* _L99/ */ _L99;
  T_TRAIN /* _L98/ */ _L98;
  T_NVCONTACT /* _L97/ */ _L97;
  kcg_bool /* _L96/ */ _L96;
  kcg_bool /* _L95/ */ _L95;
  kcg_int64 /* _L94/ */ _L94;
  T_TRAIN /* _L117/ */ _L117;
  T_TRAIN /* _L116/ */ _L116;
  kcg_bool /* _L115/ */ _L115;
  Radio_TrackTrain_Header_T_TM /* _L114/ */ _L114;
  T_TRAIN /* _L112/ */ _L112;
  CompressedRadioMessage_TM /* _L123/ */ _L123;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* _L120/ */ _L120;
  T_TRAIN /* _L124/ */ _L124;
  RBC_Data_T_RBC_DataBus_Pkg /* _L128/ */ _L128;
  DynamicConfig_T /* _L129/ */ _L129;
  RadioTrackTrainMessageQueue_T /* _L131/ */ _L131;
  RBC_Data_T_RBC_DataBus_Pkg /* _L130/ */ _L130;
  RBC_Data_T_RBC_DataBus_Pkg /* _L133/ */ _L133;
  Clock_T /* _L132/ */ _L132;
  RBC_Data_T_RBC_DataBus_Pkg /* _L138/ */ _L138;
  RBC_Data_T_RBC_DataBus_Pkg /* _L139/ */ _L139;
  RadioTrackTrainMessageQueue_T /* _L140/ */ _L140;
  RBC_Data_T_RBC_DataBus_Pkg /* _L141/ */ _L141;
  CompressedRadioMessage_TM /* _L142/ */ _L142;
  kcg_bool /* _L143/ */ _L143;
  kcg_bool /* _L144/ */ _L144;
} outC_RBC__PingTrain_RBC_Model_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Model_Pkg::RBC__PingTrain/ */
extern void RBC__PingTrain_RBC_Model_Pkg(
  /* inForceTrigger/ */
  kcg_bool inForceTrigger,
  /* inDataBus/ */
  RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* inRadioTrainTrackMessage/ */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  /* inTriggeredRadioTrackTrainMessage/ */
  CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessage,
  outC_RBC__PingTrain_RBC_Model_Pkg *outC);

extern void RBC__PingTrain_reset_RBC_Model_Pkg(
  outC_RBC__PingTrain_RBC_Model_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void RBC__PingTrain_init_RBC_Model_Pkg(
  outC_RBC__PingTrain_RBC_Model_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _RBC__PingTrain_RBC_Model_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RBC__PingTrain_RBC_Model_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

