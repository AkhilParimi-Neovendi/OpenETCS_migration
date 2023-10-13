/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:49
*************************************************************$ */
#ifndef _RTM_Toolbox_TrainModules_H_
#define _RTM_Toolbox_TrainModules_H_

#include "kcg_types.h"
#include "C_Int_TrackTrainMessage_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  API_TrackSideInput_T_API_Msg_Pkg /* TrackMessage/ */ TrackMessage;
  mobileHWStatus_Type_MoRC_Pck /* mobileHWStatus/ */ mobileHWStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  struct_149475 /* GSM_R_MobileManagement:Connecting:_L2= */ fby_4;
  struct_149475 /* GSM_R_MobileManagement:Registering:_L2= */ fby_3;
  kcg_bool init;
  kcg_bool init1;
  SSM_ST_GSM_R_MobileManagement /* GSM_R_MobileManagement: */ GSM_R_MobileManagement_state_nxt;
  kcg_bool /* GSM_R_MobileManagement: */ GSM_R_MobileManagement_reset_act;
  kcg_bool /* GSM_R_MobileManagement: */ GSM_R_MobileManagement_reset_nxt;
  kcg_bool /* registrationFinished/ */ registrationFinished;
  kcg_bool /* connectionEstablished/ */ connectionEstablished;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_Int_TrackTrainMessage_TM_conversions /* _L51=(TM_conversions::C_Int_TrackTrainMessage#1)/ */ Context_C_Int_TrackTrainMessage_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else: */ else_clock_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else: */ else_clock_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else: */ _2_else_clock_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else: */ _3_else_clock_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else: */ _4_else_clock_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else:else: */ _5_else_clock_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else: */ _6_else_clock_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else: */ _7_else_clock_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else: */ _8_else_clock_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else: */ _9_else_clock_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else: */ _10_else_clock_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else: */ _11_else_clock_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else:else:else: */ _12_else_clock_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else: */ _13_else_clock_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else:else: */ _14_else_clock_else_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else: */ _15_else_clock_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else: */ _16_else_clock_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else: */ else_clock_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else: */ else_clock_else_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  SSM_ST_GSM_R_MobileManagement /* GSM_R_MobileManagement: */ GSM_R_MobileManagement_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  mobileHWStatus_Type_MoRC_Pck /* GSM_R_MobileManagement:Not_registered:_L1/ */ _L1_Not_registered_GSM_R_MobileManagement;
  kcg_bool /* GSM_R_MobileManagement:Registering:_L3/ */ _L3_Registering_GSM_R_MobileManagement;
  kcg_bool /* GSM_R_MobileManagement:Registering:_L2/ */ _L2_Registering_GSM_R_MobileManagement;
  mobileHWStatus_Type_MoRC_Pck /* GSM_R_MobileManagement:Registering:_L1/ */ _L1_Registering_GSM_R_MobileManagement;
  mobileHWStatus_Type_MoRC_Pck /* GSM_R_MobileManagement:Registered:_L1/ */ _L1_Registered_GSM_R_MobileManagement;
  kcg_bool /* GSM_R_MobileManagement:Connecting:_L2/ */ _L2_Connecting_GSM_R_MobileManagement;
  kcg_bool /* GSM_R_MobileManagement:Connecting:_L3/ */ _L3_Connecting_GSM_R_MobileManagement;
  mobileHWStatus_Type_MoRC_Pck /* GSM_R_MobileManagement:Connecting:_L1/ */ _L1_Connecting_GSM_R_MobileManagement;
  mobileHWStatus_Type_MoRC_Pck /* GSM_R_MobileManagement:Connected:_L1/ */ _L1_Connected_GSM_R_MobileManagement;
  kcg_bool /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1;
  RadioMetadata_T_Common_Types_Pkg /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  kcg_bool /* IfBlock1:else:else:then:_L1/ */ _L1_then_else_else_IfBlock1;
  RadioMetadata_T_Common_Types_Pkg /* IfBlock1:else:else:then:_L2/ */ _L2_then_else_else_IfBlock1;
  RadioMetadata_T_Common_Types_Pkg /* IfBlock1:else:else:else:else:then:_L1/ */ _L1_then_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:then:_L2/ */ _L2_then_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:then:_L1/ */ _L1_then_else_else_else_else_else_else_IfBlock1;
  RadioMetadata_T_Common_Types_Pkg /* IfBlock1:else:else:else:else:else:else:then:_L2/ */ _L2_then_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:then:_L3/ */ _L3_then_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:then:_L2/ */ _L217_then_else_else_else_else_else_else_else_else_IfBlock1;
  RadioMetadata_T_Common_Types_Pkg /* IfBlock1:else:else:else:else:else:else:else:else:then:_L3/ */ _L318_then_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else:else:then:_L1/ */ _L119_then_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else:else:then:_L2/ */ _L220_then_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  RadioMetadata_T_Common_Types_Pkg /* IfBlock1:else:else:else:else:else:else:else:else:else:else:then:_L3/ */ _L321_then_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  RadioMetadata_T_Common_Types_Pkg /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else:then:_L1/ */ _L122_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else:then:_L2/ */ _L223_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else:then:_L3/ */ _L324_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  RadioMetadata_T_Common_Types_Pkg /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else:else:else:then:_L1/ */ _L125_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else:else:else:then:_L2/ */ _L226_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:then:_L1/ */ _L127_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  RadioMetadata_T_Common_Types_Pkg /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:then:_L2/ */ _L228_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  RadioMetadata_T_Common_Types_Pkg /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:then:_L1/ */ _L129_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:then:_L2/ */ _L230_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  RadioMetadata_T_Common_Types_Pkg /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:then:_L1/ */ _L131_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:then:_L2/ */ _L232_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  RadioMetadata_T_Common_Types_Pkg /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:_L1/ */ _L1_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:_L2/ */ _L2_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:then:_L2/ */ _L233_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  RadioMetadata_T_Common_Types_Pkg /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:then:_L1/ */ _L134_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:then:_L2/ */ _L235_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  RadioMetadata_T_Common_Types_Pkg /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:then:_L1/ */ _L136_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:then:_L2/ */ _L237_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  RadioMetadata_T_Common_Types_Pkg /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else:else:else:else:then:_L1/ */ _L138_then_else_else_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else:else:then:_L3/ */ _L339_then_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else:else:then:_L2/ */ _L240_then_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  RadioMetadata_T_Common_Types_Pkg /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else:else:then:_L1/ */ _L141_then_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:then:_L3/ */ _L342_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:then:_L2/ */ _L243_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  RadioMetadata_T_Common_Types_Pkg /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:then:_L1/ */ _L144_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else:then:_L2/ */ _L245_then_else_else_else_else_else_else_else_else_else_IfBlock1;
  RadioMetadata_T_Common_Types_Pkg /* IfBlock1:else:else:else:else:else:else:else:else:else:then:_L1/ */ _L146_then_else_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else:then:_L3/ */ _L347_then_else_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:then:_L3/ */ _L348_then_else_else_else_else_else_else_else_IfBlock1;
  RadioMetadata_T_Common_Types_Pkg /* IfBlock1:else:else:else:else:else:else:else:then:_L2/ */ _L249_then_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:then:_L1/ */ _L150_then_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:then:_L1/ */ _L151_then_else_else_else_else_else_IfBlock1;
  RadioMetadata_T_Common_Types_Pkg /* IfBlock1:else:else:else:else:else:then:_L2/ */ _L252_then_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:then:_L3/ */ _L353_then_else_else_else_else_else_IfBlock1;
  RadioMetadata_T_Common_Types_Pkg /* IfBlock1:else:else:else:then:_L2/ */ _L2_then_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:then:_L1/ */ _L1_then_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:then:_L3/ */ _L3_then_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L3/ */ _L3_then_else_IfBlock1;
  RadioMetadata_T_Common_Types_Pkg /* IfBlock1:else:then:_L1/ */ _L1_then_else_IfBlock1;
  SSM_ST_GSM_R_MobileManagement /* GSM_R_MobileManagement: */ GSM_R_MobileManagement_state_sel;
  SSM_TR_GSM_R_MobileManagement /* GSM_R_MobileManagement: */ GSM_R_MobileManagement_fired_strong;
  SSM_TR_GSM_R_MobileManagement /* GSM_R_MobileManagement: */ GSM_R_MobileManagement_fired;
  RadioMetadata_T_Common_Types_Pkg /* radioMetadata/ */ radioMetadata;
  API_TrackSideInput_T_API_Msg_Pkg /* _L1/ */ _L1;
  CompressedPackets_T_Common_Types_Pkg /* _L2/ */ _L2;
  API_TelegramHeader_T_API_Msg_Pkg /* _L3/ */ _L3;
  MsgSource_T_Common_Types_Pkg /* _L4/ */ _L4;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L5/ */ _L5;
  Radio_TrackTrain_Header_T_TM /* _L6/ */ _L6;
  API_RadioMsgHeader_T_API_Msg_Pkg /* _L29/ */ _L29;
  kcg_bool /* _L30/ */ _L30;
  kcg_int64 /* _L31/ */ _L31;
  kcg_bool /* _L32/ */ _L32;
  RadioMetadata_T_Common_Types_Pkg /* _L37/ */ _L37;
  _5_Radio_TrackTrain_Header_T_TM_transitional /* _L51/ */ _L51;
  NID_MESSAGE /* _L52/ */ _L52;
  RBC_Id_T_Common_Types_Pkg /* _L53/ */ _L53;
  kcg_bool /* _L54/ */ _L54;
  kcg_int64 /* _L55/ */ _L55;
} outC_RTM_Toolbox_TrainModules;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::TrainModules::RTM/ */
extern void RTM_Toolbox_TrainModules(
  /* systemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* Packets/ */
  CompressedPackets_T_Common_Types_Pkg *Packets,
  /* RadioHeader/ */
  Radio_TrackTrain_Header_T_TM *RadioHeader,
  /* RadioManagementMessage/ */
  RadioManagement_T_API_RadioCommunication_Pkg *RadioManagementMessage,
  outC_RTM_Toolbox_TrainModules *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RTM_reset_Toolbox_TrainModules(outC_RTM_Toolbox_TrainModules *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void RTM_init_Toolbox_TrainModules(outC_RTM_Toolbox_TrainModules *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _RTM_Toolbox_TrainModules_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RTM_Toolbox_TrainModules.h
** Generation date: 2023-09-12T13:45:49
*************************************************************$ */

