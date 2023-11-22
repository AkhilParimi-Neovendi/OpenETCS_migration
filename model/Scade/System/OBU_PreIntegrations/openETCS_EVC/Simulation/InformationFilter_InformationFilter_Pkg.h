/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _InformationFilter_InformationFilter_Pkg_H_
#define _InformationFilter_InformationFilter_Pkg_H_

#include "kcg_types.h"
#include "flagsForLevelChange_InformationFilter_Pkg.h"
#include "TransitionBuffer_InformationFilter_Pkg.h"
#include "FilterSequence_InformationFilter_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* outMessage/ */ outMessage;
  T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg /* IF_toML/ */ IF_toML;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_int32 /* inSupervisingDevice/ */ mem_inSupervisingDevice;
  kcg_bool init;
  struct_278835 /* @1/_L4/ */ _L4_MemoryBasic_1_struct;
  _217_SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  ReceivedMessage_T_Common_Types_Pkg /* bufferMsg/ */ bufferMsg;
  kcg_bool /* storeInBuffer/ */ storeInBuffer;
  kcg_bool /* bufferHasPriority/ */ bufferHasPriority;
  kcg_int32 /* currBuffersize/ */ currBuffersize;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_FilterSequence_InformationFilter_Pkg /* _L95=(InformationFilter_Pkg::FilterSequence)/ */ Context_FilterSequence;
  outC_flagsForLevelChange_InformationFilter_Pkg /* _L153=(InformationFilter_Pkg::flagsForLevelChange#1)/ */ Context_flagsForLevelChange_1;
  outC_TransitionBuffer_InformationFilter_Pkg /* _L100=(InformationFilter_Pkg::TransitionBuffer#1)/ */ Context_TransitionBuffer_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  _217_SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  struct_278835 /* @1/Memorized/ */ Memorized_MemoryBasic_1_struct;
  kcg_bool /* @1/Write/ */ Write_MemoryBasic_1_struct;
  struct_278835 /* @1/Init/ */ Init_MemoryBasic_1_struct;
  struct_278835 /* @1/BM_Input/ */ BM_Input_MemoryBasic_1_struct;
  struct_278835 /* @1/_L7/ */ _L7_MemoryBasic_1_struct;
  struct_278835 /* @1/_L6/ */ _L6_MemoryBasic_1_struct;
  kcg_bool /* @1/_L5/ */ _L5_MemoryBasic_1_struct;
  struct_278835 /* @1/_L2/ */ _L2_MemoryBasic_1_struct;
  kcg_bool /* SM1:State2:_L2/ */ _L2_State2_SM1;
  kcg_bool /* SM1:State3:_L1/ */ _L1_State3_SM1;
  _217_SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  _218_SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  _218_SSM_TR_SM1 /* SM1: */ SM1_fired;
  kcg_bool /* releaseBuffer/ */ releaseBuffer;
  morcStatus_T_RCM_Session_Types_Pkg /* morcRadioStatus/ */ morcRadioStatus;
  kcg_bool /* cond4_8_5_4c/ */ cond4_8_5_4c;
  kcg_bool /* cond4_8_5_4b/ */ cond4_8_5_4b;
  kcg_bool /* cond4_8_5_4a/ */ cond4_8_5_4a;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* _L5/ */ _L5;
  kcg_int32 /* _L18/ */ _L18;
  kcg_bool /* _L32/ */ _L32;
  kcg_bool /* _L33/ */ _L33;
  ReceivedMessage_T_Common_Types_Pkg /* _L60/ */ _L60;
  filterRelatedEvents_T_Common_Types_Pkg /* _L72/ */ _L72;
  ReceivedMessage_T_Common_Types_Pkg /* _L95/ */ _L95;
  ReceivedMessage_T_Common_Types_Pkg /* _L93/ */ _L93;
  kcg_bool /* _L92/ */ _L92;
  kcg_bool /* _L96/ */ _L96;
  kcg_bool /* _L97/ */ _L97;
  ReceivedMessage_T_Common_Types_Pkg /* _L98/ */ _L98;
  ReceivedMessage_T_Common_Types_Pkg /* _L99/ */ _L99;
  ReceivedMessage_T_Common_Types_Pkg /* _L100/ */ _L100;
  ReceivedMessage_T_Common_Types_Pkg /* _L103/ */ _L103;
  kcg_bool /* _L104/ */ _L104;
  kcg_bool /* _L105/ */ _L105;
  kcg_bool /* _L106/ */ _L106;
  ReceivedMessage_T_Common_Types_Pkg /* _L108/ */ _L108;
  ReceivedMessage_T_Common_Types_Pkg /* _L109/ */ _L109;
  ReceivedMessage_T_Common_Types_Pkg /* _L110/ */ _L110;
  kcg_bool /* _L111/ */ _L111;
  kcg_bool /* _L112/ */ _L112;
  kcg_bool /* _L118/ */ _L118;
  kcg_int32 /* _L119/ */ _L119;
  kcg_bool /* _L121/ */ _L121;
  kcg_bool /* _L122/ */ _L122;
  ReceivedMessage_T_Common_Types_Pkg /* _L123/ */ _L123;
  ReceivedMessage_T_Common_Types_Pkg /* _L124/ */ _L124;
  kcg_bool /* _L125/ */ _L125;
  kcg_bool /* _L126/ */ _L126;
  kcg_bool /* _L127/ */ _L127;
  ReceivedMessage_T_Common_Types_Pkg /* _L128/ */ _L128;
  kcg_bool /* _L131/ */ _L131;
  sessionStatus_T_RCM_Session_Types_Pkg /* _L133/ */ _L133;
  sessionPhase_T_RCM_Session_Types_Pkg /* _L134/ */ _L134;
  kcg_bool /* _L136/ */ _L136;
  sessionPhase_T_RCM_Session_Types_Pkg /* _L137/ */ _L137;
  kcg_bool /* _L138/ */ _L138;
  kcg_bool /* _L140/ */ _L140;
  kcg_bool /* _L141/ */ _L141;
  kcg_int32 /* _L144/ */ _L144;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* _L145/ */ _L145;
  kcg_int32 /* _L147/ */ _L147;
  kcg_bool /* _L148/ */ _L148;
  morcStatus_T_RCM_Session_Types_Pkg /* _L152/ */ _L152;
  morcStatus_T_RCM_Session_Types_Pkg /* _L132/ */ _L132;
  filterRelatedEvents_T_Common_Types_Pkg /* _L153/ */ _L153;
  ReceivedMessage_T_Common_Types_Pkg /* _L154/ */ _L154;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* _L155/ */ _L155;
  M_MODE /* _L156/ */ _L156;
  M_LEVEL /* _L157/ */ _L157;
  kcg_bool /* _L159/ */ _L159;
  T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg /* _L161/ */ _L161;
} outC_InformationFilter_InformationFilter_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::InformationFilter/ */
extern void InformationFilter_InformationFilter_Pkg(
  /* inMessage/ */
  ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* inModeLevel/ */
  T_Mode_Level_Level_And_Mode_Types_Pkg *inModeLevel,
  /* inSupervisingDevice/ */
  kcg_int32 inSupervisingDevice,
  /* inFilterEvents/ */
  filterRelatedEvents_T_Common_Types_Pkg *inFilterEvents,
  /* inActiveCab/ */
  kcg_bool inActiveCab,
  /* inTrainDataValid/ */
  kcg_bool inTrainDataValid,
  /* inMorcStatus/ */
  morcStatus_T_RCM_Session_Types_Pkg *inMorcStatus,
  outC_InformationFilter_InformationFilter_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void InformationFilter_reset_InformationFilter_Pkg(
  outC_InformationFilter_InformationFilter_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void InformationFilter_init_InformationFilter_Pkg(
  outC_InformationFilter_InformationFilter_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: InformationFilter_Pkg::InformationFilter/
  @1: (linear::MemoryBasic#1)
*/

#endif /* _InformationFilter_InformationFilter_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** InformationFilter_InformationFilter_Pkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

